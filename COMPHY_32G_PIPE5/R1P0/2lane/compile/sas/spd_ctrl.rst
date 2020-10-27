                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:48 2018
                              5 ;--------------------------------------------------------
                              6 	.module spd_ctrl
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
                            979 	.globl _SpeedChange
                            980 	.globl _sata_speedchange
                            981 	.globl _loadspeedtbl_pll
                            982 	.globl _loadspeedtbl_ringpll
                            983 	.globl _get_gen_memory_index
                            984 	.globl _loadspeedtbl_gen
                            985 	.globl _loadSpeedtbl
                            986 	.globl _loadSpdtbl_4_fcnt
                            987 	.globl _ringloadSpdtbl_4_fcnt
                            988 ;--------------------------------------------------------
                            989 ; special function registers
                            990 ;--------------------------------------------------------
                            991 	.area RSEG    (ABS,DATA)
   0000                     992 	.org 0x0000
                    0080    993 _P0	=	0x0080
                    0082    994 _DPL	=	0x0082
                    0083    995 _DPH	=	0x0083
                    0086    996 _WDTREL	=	0x0086
                    0087    997 _PCON	=	0x0087
                    0088    998 _TCON	=	0x0088
                    0089    999 _TMOD	=	0x0089
                    008A   1000 _TL0	=	0x008a
                    008B   1001 _TL1	=	0x008b
                    008C   1002 _TH0	=	0x008c
                    008D   1003 _TH1	=	0x008d
                    008E   1004 _CKCON	=	0x008e
                    0090   1005 _P1	=	0x0090
                    0092   1006 _DPS	=	0x0092
                    0094   1007 _PSBANK	=	0x0094
                    0098   1008 _SCON	=	0x0098
                    0099   1009 _SBUF	=	0x0099
                    009A   1010 _IEN2	=	0x009a
                    00A0   1011 _P2	=	0x00a0
                    00A1   1012 _DMAS0	=	0x00a1
                    00A2   1013 _DMAS1	=	0x00a2
                    00A3   1014 _DMAS2	=	0x00a3
                    00A4   1015 _DMAT0	=	0x00a4
                    00A5   1016 _DMAT1	=	0x00a5
                    00A6   1017 _DMAT2	=	0x00a6
                    00A8   1018 _IEN0	=	0x00a8
                    00A9   1019 _IP0	=	0x00a9
                    00AA   1020 _S0RELL	=	0x00aa
                    00B0   1021 _P3	=	0x00b0
                    00B1   1022 _DMAC0	=	0x00b1
                    00B2   1023 _DMAC1	=	0x00b2
                    00B3   1024 _DMAC2	=	0x00b3
                    00B4   1025 _DMASEL	=	0x00b4
                    00B5   1026 _DMAM0	=	0x00b5
                    00B6   1027 _DMAM1	=	0x00b6
                    00B8   1028 _IEN1	=	0x00b8
                    00B9   1029 _IP1	=	0x00b9
                    00BA   1030 _S0RELH	=	0x00ba
                    00C0   1031 _IRCON	=	0x00c0
                    00C1   1032 _CCEN	=	0x00c1
                    00C8   1033 _T2CON	=	0x00c8
                    00CA   1034 _RCAP2L	=	0x00ca
                    00CB   1035 _RCAP2H	=	0x00cb
                    00CC   1036 _TL2	=	0x00cc
                    00CD   1037 _TH2	=	0x00cd
                    00D0   1038 _PSW	=	0x00d0
                    00D8   1039 _ADCON	=	0x00d8
                    00E0   1040 _ACC	=	0x00e0
                    00E8   1041 _EIE	=	0x00e8
                    00F0   1042 _B	=	0x00f0
                    00F7   1043 _SRST	=	0x00f7
                    8C8A   1044 _TMR0	=	0x8c8a
                    8D8B   1045 _TMR1	=	0x8d8b
                    CDCC   1046 _TMR2	=	0xcdcc
                    A2A1   1047 _DMASA	=	0xa2a1
                    A5A4   1048 _DMATA	=	0xa5a4
                    B2B1   1049 _DMAC	=	0xb2b1
                           1050 ;--------------------------------------------------------
                           1051 ; special function bits
                           1052 ;--------------------------------------------------------
                           1053 	.area RSEG    (ABS,DATA)
   0000                    1054 	.org 0x0000
                    0080   1055 _P0_0	=	0x0080
                    0081   1056 _P0_1	=	0x0081
                    0082   1057 _P0_2	=	0x0082
                    0083   1058 _P0_3	=	0x0083
                    0084   1059 _P0_4	=	0x0084
                    0085   1060 _P0_5	=	0x0085
                    0086   1061 _P0_6	=	0x0086
                    0087   1062 _P0_7	=	0x0087
                    0090   1063 _P1_0	=	0x0090
                    0091   1064 _P1_1	=	0x0091
                    0092   1065 _P1_2	=	0x0092
                    0093   1066 _P1_3	=	0x0093
                    0094   1067 _P1_4	=	0x0094
                    0095   1068 _P1_5	=	0x0095
                    0096   1069 _P1_6	=	0x0096
                    0097   1070 _P1_7	=	0x0097
                    00A0   1071 _P2_0	=	0x00a0
                    00A1   1072 _P2_1	=	0x00a1
                    00A2   1073 _P2_2	=	0x00a2
                    00A3   1074 _P2_3	=	0x00a3
                    00A4   1075 _P2_4	=	0x00a4
                    00A5   1076 _P2_5	=	0x00a5
                    00A6   1077 _P2_6	=	0x00a6
                    00A7   1078 _P2_7	=	0x00a7
                    00B0   1079 _P3_0	=	0x00b0
                    00B1   1080 _P3_1	=	0x00b1
                    00B2   1081 _P3_2	=	0x00b2
                    00B3   1082 _P3_3	=	0x00b3
                    00B4   1083 _P3_4	=	0x00b4
                    00B5   1084 _P3_5	=	0x00b5
                    00B6   1085 _P3_6	=	0x00b6
                    00B7   1086 _P3_7	=	0x00b7
                    0088   1087 _IT0	=	0x0088
                    0089   1088 _IE0	=	0x0089
                    008A   1089 _IT1	=	0x008a
                    008B   1090 _IE1	=	0x008b
                    008C   1091 _TR0	=	0x008c
                    008D   1092 _TF0	=	0x008d
                    008E   1093 _TR1	=	0x008e
                    008F   1094 _TF1	=	0x008f
                    00A8   1095 _EX0	=	0x00a8
                    00A9   1096 _ET0	=	0x00a9
                    00AA   1097 _EX1	=	0x00aa
                    00AB   1098 _ET1	=	0x00ab
                    00AC   1099 _ES	=	0x00ac
                    00AD   1100 _ET2	=	0x00ad
                    00AE   1101 _WDT	=	0x00ae
                    00AF   1102 _EA	=	0x00af
                    00B8   1103 _EX7	=	0x00b8
                    00B9   1104 _EX2	=	0x00b9
                    00BA   1105 _EX3	=	0x00ba
                    00BB   1106 _EX4	=	0x00bb
                    00BC   1107 _EX5	=	0x00bc
                    00BD   1108 _EX6	=	0x00bd
                    00BE   1109 _PS1	=	0x00be
                    009A   1110 _ES1	=	0x009a
                    009B   1111 _EX8	=	0x009b
                    009C   1112 _EX9	=	0x009c
                    009D   1113 _EX10	=	0x009d
                    009E   1114 _EX11	=	0x009e
                    009F   1115 _EX12	=	0x009f
                    0098   1116 _RI	=	0x0098
                    0099   1117 _TI	=	0x0099
                    00C6   1118 _TF2	=	0x00c6
                           1119 ;--------------------------------------------------------
                           1120 ; overlayable register banks
                           1121 ;--------------------------------------------------------
                           1122 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1123 	.ds 8
                           1124 ;--------------------------------------------------------
                           1125 ; overlayable bit register bank
                           1126 ;--------------------------------------------------------
                           1127 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1128 bits:
   0025                    1129 	.ds 1
                    8000   1130 	b0 = bits[0]
                    8100   1131 	b1 = bits[1]
                    8200   1132 	b2 = bits[2]
                    8300   1133 	b3 = bits[3]
                    8400   1134 	b4 = bits[4]
                    8500   1135 	b5 = bits[5]
                    8600   1136 	b6 = bits[6]
                    8700   1137 	b7 = bits[7]
                           1138 ;--------------------------------------------------------
                           1139 ; internal ram data
                           1140 ;--------------------------------------------------------
                           1141 	.area DSEG    (DATA)
                           1142 ;--------------------------------------------------------
                           1143 ; overlayable items in internal ram 
                           1144 ;--------------------------------------------------------
                           1145 	.area OSEG    (OVR,DATA)
                           1146 ;--------------------------------------------------------
                           1147 ; indirectly addressable internal ram data
                           1148 ;--------------------------------------------------------
                           1149 	.area ISEG    (DATA)
                           1150 ;--------------------------------------------------------
                           1151 ; absolute internal ram data
                           1152 ;--------------------------------------------------------
                           1153 	.area IABS    (ABS,DATA)
                           1154 	.area IABS    (ABS,DATA)
                           1155 ;--------------------------------------------------------
                           1156 ; bit data
                           1157 ;--------------------------------------------------------
                           1158 	.area BSEG    (BIT)
                           1159 ;--------------------------------------------------------
                           1160 ; paged external ram data
                           1161 ;--------------------------------------------------------
                           1162 	.area PSEG    (PAG,XDATA)
                           1163 ;--------------------------------------------------------
                           1164 ; external ram data
                           1165 ;--------------------------------------------------------
                           1166 	.area XSEG    (XDATA)
                    1000   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1180 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1181 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1182 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1183 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1184 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1185 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1186 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1187 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1188 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1189 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1190 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1191 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1192 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1193 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1194 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1195 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1196 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1197 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1198 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1199 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1200 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1201 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1202 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1203 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1204 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1205 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1206 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1207 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1208 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1209 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1210 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1211 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1212 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1213 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1214 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1215 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1216 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1217 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1218 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1219 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1220 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1221 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1222 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1223 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1224 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1225 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1226 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1227 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1228 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1229 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1230 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1231 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1232 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1233 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1234 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1235 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1236 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1237 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1238 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1239 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1240 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1241 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1242 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1243 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1244 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1245 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1246 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1247 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1248 _ANA_DFEE_REG_20	=	0x0480
                    0484   1249 _ANA_DFEE_REG_21	=	0x0484
                    0488   1250 _ANA_DFEE_REG_22	=	0x0488
                    048C   1251 _ANA_DFEE_REG_23	=	0x048c
                    0490   1252 _ANA_DFEE_REG_24	=	0x0490
                    0494   1253 _ANA_DFEE_REG_25	=	0x0494
                    0498   1254 _ANA_DFEE_REG_26	=	0x0498
                    049C   1255 _ANA_DFEE_REG_27	=	0x049c
                    0400   1256 _ANA_DFEE_REG_00	=	0x0400
                    0404   1257 _ANA_DFEE_REG_01	=	0x0404
                    0408   1258 _ANA_DFEE_REG_02	=	0x0408
                    040C   1259 _ANA_DFEE_REG_03	=	0x040c
                    0410   1260 _ANA_DFEE_REG_04	=	0x0410
                    0414   1261 _ANA_DFEE_REG_05	=	0x0414
                    0418   1262 _ANA_DFEE_REG_06	=	0x0418
                    041C   1263 _ANA_DFEE_REG_07	=	0x041c
                    0420   1264 _ANA_DFEE_REG_08	=	0x0420
                    0424   1265 _ANA_DFEE_REG_09	=	0x0424
                    0428   1266 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1267 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1268 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1269 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1270 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1271 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1272 _ANA_DFEE_REG_10	=	0x0440
                    0444   1273 _ANA_DFEE_REG_11	=	0x0444
                    0448   1274 _ANA_DFEE_REG_12	=	0x0448
                    044C   1275 _ANA_DFEE_REG_13	=	0x044c
                    0450   1276 _ANA_DFEE_REG_14	=	0x0450
                    0454   1277 _ANA_DFEE_REG_15	=	0x0454
                    0458   1278 _ANA_DFEE_REG_16	=	0x0458
                    045C   1279 _ANA_DFEE_REG_17	=	0x045c
                    0460   1280 _ANA_DFEE_REG_18	=	0x0460
                    0464   1281 _ANA_DFEE_REG_19	=	0x0464
                    0468   1282 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1283 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1284 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1285 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1286 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1287 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1288 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1289 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1290 _ANA_DFEO_REG_10	=	0x0840
                    0844   1291 _ANA_DFEO_REG_11	=	0x0844
                    0848   1292 _ANA_DFEO_REG_12	=	0x0848
                    084C   1293 _ANA_DFEO_REG_13	=	0x084c
                    0850   1294 _ANA_DFEO_REG_14	=	0x0850
                    0854   1295 _ANA_DFEO_REG_15	=	0x0854
                    0858   1296 _ANA_DFEO_REG_16	=	0x0858
                    085C   1297 _ANA_DFEO_REG_17	=	0x085c
                    0860   1298 _ANA_DFEO_REG_18	=	0x0860
                    0864   1299 _ANA_DFEO_REG_19	=	0x0864
                    0868   1300 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1301 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1302 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1303 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1304 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1305 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1306 _ANA_DFEO_REG_20	=	0x0880
                    0884   1307 _ANA_DFEO_REG_21	=	0x0884
                    0888   1308 _ANA_DFEO_REG_22	=	0x0888
                    088C   1309 _ANA_DFEO_REG_23	=	0x088c
                    0890   1310 _ANA_DFEO_REG_24	=	0x0890
                    0894   1311 _ANA_DFEO_REG_25	=	0x0894
                    0898   1312 _ANA_DFEO_REG_26	=	0x0898
                    089C   1313 _ANA_DFEO_REG_27	=	0x089c
                    0800   1314 _ANA_DFEO_REG_00	=	0x0800
                    0804   1315 _ANA_DFEO_REG_01	=	0x0804
                    0808   1316 _ANA_DFEO_REG_02	=	0x0808
                    080C   1317 _ANA_DFEO_REG_03	=	0x080c
                    0810   1318 _ANA_DFEO_REG_04	=	0x0810
                    0814   1319 _ANA_DFEO_REG_05	=	0x0814
                    0818   1320 _ANA_DFEO_REG_06	=	0x0818
                    081C   1321 _ANA_DFEO_REG_07	=	0x081c
                    0820   1322 _ANA_DFEO_REG_08	=	0x0820
                    0824   1323 _ANA_DFEO_REG_09	=	0x0824
                    0828   1324 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1325 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1326 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1327 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1328 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1329 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1330 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1331 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1332 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1333 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1334 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1335 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1336 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1337 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1338 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1339 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1340 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1341 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1342 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1343 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1344 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1345 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1346 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1347 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1348 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1349 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1350 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1351 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1352 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1353 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1354 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1355 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1356 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1357 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1358 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1359 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1360 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1361 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1362 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1363 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1364 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1365 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1366 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1367 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1368 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1369 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1370 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1371 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1372 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1373 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1374 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1375 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1376 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1377 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1378 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1379 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1380 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1381 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1382 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1383 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1384 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1385 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1386 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1387 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1388 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1389 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1390 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1391 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1392 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1393 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1394 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1395 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1396 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1397 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1398 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1399 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1400 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1401 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1402 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1403 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1404 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1405 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1406 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1407 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1408 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1409 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1410 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1411 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1412 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1413 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1414 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1415 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1416 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1417 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1418 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1419 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1420 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1421 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1422 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1423 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1424 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1425 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1426 _TX_SYSTEM_LANE	=	0x2034
                    203C   1427 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1428 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1429 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1430 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1431 __FIELDNAME__LANE	=	0x204c
                    2050   1432 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1433 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1434 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1435 _MON_TOP	=	0x205c
                    2100   1436 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1437 _RX_SYSTEM_LANE	=	0x2104
                    2108   1438 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1439 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1440 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1441 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1442 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1443 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1444 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1445 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1446 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1447 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1448 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1449 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1450 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1451 _CDR_LOCK_REG	=	0x213c
                    2140   1452 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1453 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1454 _RX_DATA_PATH_REG	=	0x2148
                    214C   1455 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1456 _RX_CALIBRATION_REG	=	0x2150
                    2158   1457 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1458 _DTL_REG0	=	0x2160
                    2164   1459 _DTL_REG1	=	0x2164
                    2168   1460 _DTL_REG2	=	0x2168
                    216C   1461 _DTL_REG3	=	0x216c
                    2170   1462 _SQ_REG0	=	0x2170
                    4000   1463 _LANE_CFG0	=	0x4000
                    4004   1464 _LANE_STATUS0	=	0x4004
                    4008   1465 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1466 _LANE_CFG2_LANE	=	0x400c
                    4010   1467 _LANE_CFG4	=	0x4010
                    4014   1468 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1469 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1470 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1471 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1472 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1473 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1474 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1475 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1476 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1477 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1478 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1479 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1480 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1481 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1482 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1483 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1484 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1485 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1486 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1487 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1488 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1489 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1490 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1491 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1492 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1493 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1494 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1495 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1496 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1497 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1498 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1499 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1500 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1501 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1502 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1503 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1504 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1505 _MCU_CONTROL_LANE	=	0x2200
                    2204   1506 _MCU_GPIO	=	0x2204
                    2208   1507 _CACHE_DEBUG0	=	0x2208
                    220C   1508 _CACHE_DEBUG1	=	0x220c
                    2210   1509 _LANE_SYSTEM0	=	0x2210
                    2230   1510 _MCU_STATUS0_LANE	=	0x2230
                    2234   1511 _MCU_STATUS1_LANE	=	0x2234
                    2238   1512 _MCU_STATUS2_LANE	=	0x2238
                    223C   1513 _MCU_STATUS3_LANE	=	0x223c
                    2240   1514 _MCU_INT0_CONTROL	=	0x2240
                    2244   1515 _MCU_INT1_CONTROL	=	0x2244
                    2248   1516 _MCU_INT2_CONTROL	=	0x2248
                    224C   1517 _MCU_INT3_CONTROL	=	0x224c
                    2250   1518 _MCU_INT4_CONTROL	=	0x2250
                    2254   1519 _MCU_INT5_CONTROL	=	0x2254
                    2258   1520 _MCU_INT6_CONTROL	=	0x2258
                    225C   1521 _MCU_INT7_CONTROL	=	0x225c
                    2260   1522 _MCU_INT8_CONTROL	=	0x2260
                    2264   1523 _MCU_INT9_CONTROL	=	0x2264
                    2268   1524 _MCU_INT10_CONTROL	=	0x2268
                    226C   1525 _MCU_INT11_CONTROL	=	0x226c
                    2270   1526 _MCU_INT12_CONTROL	=	0x2270
                    2274   1527 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1528 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1529 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1530 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1531 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1532 _MCU_IRQ_LANE	=	0x2288
                    228C   1533 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1534 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1535 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1536 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1537 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1538 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1539 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1540 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1541 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1542 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1543 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1544 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1545 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1546 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1547 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1548 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1549 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1550 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1551 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1552 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1553 _MCU_WDT_LANE	=	0x22dc
                    22E0   1554 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1555 _MCU_COMMAND0	=	0x22e4
                    22F4   1556 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1557 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1558 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1559 _PT_CONTROL0	=	0x2300
                    2304   1560 _PT_CONTROL1	=	0x2304
                    2308   1561 _PT_USER_PATTERN0	=	0x2308
                    230C   1562 _PT_USER_PATTERN1	=	0x230c
                    2310   1563 _PT_USER_PATTERN2	=	0x2310
                    2314   1564 _PT_COUNTER0	=	0x2314
                    2318   1565 _PT_COUNTER1	=	0x2318
                    231C   1566 _PT_COUNTER2	=	0x231c
                    2400   1567 _DFE_CTRL_REG0	=	0x2400
                    2404   1568 _DFE_CTRL_REG1	=	0x2404
                    2408   1569 _DFE_CTRL_REG2	=	0x2408
                    240C   1570 _DFE_CTRL_REG3	=	0x240c
                    2410   1571 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1572 _DFE_CTRL_REG4	=	0x2414
                    2418   1573 _DFE_ANA_REG0	=	0x2418
                    241C   1574 _DFE_ANA_REG1	=	0x241c
                    2420   1575 _DFE_STEP_REG0	=	0x2420
                    2424   1576 _DFE_STEP_REG1	=	0x2424
                    2430   1577 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1578 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1579 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1580 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1581 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1582 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1583 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1584 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1585 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1586 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1587 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1588 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1589 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1590 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1591 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1592 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1593 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1594 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1595 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1596 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1597 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1598 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1599 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1600 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1601 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1602 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1603 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1604 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1605 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1606 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1607 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1608 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1609 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1610 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1611 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1612 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1613 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1614 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1615 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1616 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1617 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1618 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1619 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1620 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1621 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1622 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1623 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1624 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1625 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1626 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1627 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1628 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1629 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1630 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1631 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1632 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1633 _CAL_OFST_REG0	=	0x2518
                    251C   1634 _CAL_OFST_REG1	=	0x251c
                    2520   1635 _CAL_OFST_REG2	=	0x2520
                    2530   1636 _DFE_DCE_REG0	=	0x2530
                    2540   1637 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1638 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1639 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1640 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1641 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1642 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1643 _EOM_VLD_REG0	=	0x2560
                    2564   1644 _EOM_VLD_REG1	=	0x2564
                    2568   1645 _EOM_VLD_REG2	=	0x2568
                    256C   1646 _EOM_VLD_REG3	=	0x256c
                    2570   1647 _EOM_ERR_REG0	=	0x2570
                    2574   1648 _EOM_ERR_REG1	=	0x2574
                    2578   1649 _EOM_ERR_REG2	=	0x2578
                    257C   1650 _EOM_ERR_REG3	=	0x257c
                    2580   1651 _EOM_REG0	=	0x2580
                    25F0   1652 _EOM_VLD_REG4	=	0x25f0
                    25F4   1653 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1654 _CAL_CTRL1_LANE	=	0x6000
                    6004   1655 _CAL_CTRL2_LANE	=	0x6004
                    6008   1656 _CAL_CTRL3_LANE	=	0x6008
                    600C   1657 _CAL_CTRL4_LANE	=	0x600c
                    6010   1658 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1659 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1660 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1661 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1662 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1663 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1664 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1665 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1666 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1667 _DFE_CONTROL_0	=	0x6034
                    6038   1668 _DFE_CONTROL_1	=	0x6038
                    6040   1669 _DFE_CONTROL_2	=	0x6040
                    6044   1670 _DFE_CONTROL_3	=	0x6044
                    6048   1671 _DFE_CONTROL_4	=	0x6048
                    604C   1672 _DFE_CONTROL_5	=	0x604c
                    6050   1673 _TRAIN_CONTROL_0	=	0x6050
                    6054   1674 _TRAIN_CONTROL_1	=	0x6054
                    6058   1675 _TRAIN_CONTROL_2	=	0x6058
                    605C   1676 _RPTA_CONFIG_0	=	0x605c
                    6060   1677 _RPTA_CONFIG_1	=	0x6060
                    6064   1678 _DLL_CAL	=	0x6064
                    6068   1679 _TRAIN_PARA_0	=	0x6068
                    606C   1680 _TRAIN_PARA_1	=	0x606c
                    6070   1681 _TRAIN_PARA_2	=	0x6070
                    6074   1682 _TRAIN_PARA_3	=	0x6074
                    6078   1683 _DFE_CONTROL_6	=	0x6078
                    607C   1684 _DFE_TEST_0	=	0x607c
                    6080   1685 _DFE_TEST_1	=	0x6080
                    6084   1686 _DFE_TEST_4	=	0x6084
                    6088   1687 _DFE_TEST_5	=	0x6088
                    608C   1688 _DFE_CONTROL_7	=	0x608c
                    6090   1689 _DFE_CONTROL_8	=	0x6090
                    6094   1690 _DFE_CONTROL_9	=	0x6094
                    6098   1691 _DFE_CONTROL_10	=	0x6098
                    609C   1692 _DFE_CONTROL_11	=	0x609c
                    60A0   1693 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1694 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1695 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1696 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1697 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1698 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1699 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1700 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1701 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1702 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1703 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1704 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1705 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1706 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1707 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1708 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1709 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1710 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1711 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1712 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1713 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1714 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1715 _END_XDAT_LANE	=	0x60f8
                    A000   1716 _TX_CMN_REG	=	0xa000
                    A008   1717 _DTX_REG0	=	0xa008
                    A00C   1718 _DTX_REG1	=	0xa00c
                    A010   1719 _DTX_REG2	=	0xa010
                    A014   1720 _DTX_REG3	=	0xa014
                    A018   1721 _DTX_REG4	=	0xa018
                    A01C   1722 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1723 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1724 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1725 _SRIS_REG0	=	0xa02c
                    A030   1726 _SRIS_REG1	=	0xa030
                    A100   1727 _RX_CMN_0	=	0xa100
                    A110   1728 _DFE_STATIC_REG0	=	0xa110
                    A114   1729 _DFE_STATIC_REG1	=	0xa114
                    A118   1730 _DFE_STATIC_REG3	=	0xa118
                    A11C   1731 _DFE_STATIC_REG4	=	0xa11c
                    A120   1732 _DFE_STATIC_REG5	=	0xa120
                    A124   1733 _DFE_STATIC_REG6	=	0xa124
                    4200   1734 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1735 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1736 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1737 _GLOB_MISC_CTRL	=	0x420c
                    4210   1738 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1739 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1740 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1741 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1742 _GLOB_PM_CFG0	=	0x4220
                    4224   1743 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1744 _GLOB_COUNTER_HI	=	0x4228
                    422C   1745 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1746 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1747 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1748 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1749 _GLOB_BIST_CTRL	=	0x423c
                    4240   1750 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1751 _GLOB_BIST_START	=	0x4244
                    4248   1752 _GLOB_BIST_MASK	=	0x4248
                    424C   1753 _GLOB_BIST_RESULT	=	0x424c
                    4250   1754 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1755 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1756 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1757 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1758 _MCU_CONTROL_0	=	0xa200
                    A204   1759 _MCU_CONTROL_1	=	0xa204
                    A208   1760 _MCU_CONTROL_2	=	0xa208
                    A20C   1761 _MCU_CONTROL_3	=	0xa20c
                    A210   1762 _MCU_CONTROL_4	=	0xa210
                    A214   1763 _MCU_DEBUG0	=	0xa214
                    A218   1764 _MCU_DEBUG1	=	0xa218
                    A21C   1765 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1766 _MEMORY_CONTROL_1	=	0xa220
                    A224   1767 _MEMORY_CONTROL_2	=	0xa224
                    A228   1768 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1769 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1770 _MCU_INFO_0	=	0xa234
                    A238   1771 _MCU_INFO_1	=	0xa238
                    A23C   1772 _MCU_INFO_2	=	0xa23c
                    A240   1773 _MCU_INFO_3	=	0xa240
                    A244   1774 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1775 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1776 _MEM_IRQ	=	0xa2e4
                    A2E8   1777 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1778 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1779 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1780 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1781 _MCU_SYNC1	=	0xa2f8
                    A2FC   1782 _MCU_SYNC2	=	0xa2fc
                    A300   1783 _TEST0	=	0xa300
                    A304   1784 _TEST1	=	0xa304
                    A308   1785 _TEST2	=	0xa308
                    A30C   1786 _TEST3	=	0xa30c
                    A310   1787 _TEST4	=	0xa310
                    A314   1788 _SYSTEM	=	0xa314
                    A318   1789 _PM_CMN_REG1	=	0xa318
                    A31C   1790 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1791 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1792 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1793 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1794 _PLLCAL_REG0	=	0xa32c
                    A330   1795 _PLLCAL_REG1	=	0xa330
                    A334   1796 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1797 _SPD_CMN_REG1	=	0xa338
                    A33C   1798 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1799 _CMN_CALIBRATION	=	0xa340
                    A344   1800 __FIELDNAME_	=	0xa344
                    A348   1801 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1802 _PM_CMN_REG2	=	0xa34c
                    A354   1803 _TEST5	=	0xa354
                    A358   1804 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1805 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1806 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1807 _MCU_SDT_CMN	=	0xa364
                    A368   1808 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1809 _MCU_INT_ADDR	=	0xa36c
                    A370   1810 _CMN_ISR_2	=	0xa370
                    A374   1811 _CMN_ISR_MASK_2	=	0xa374
                    A378   1812 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1813 _CMN_MCU_GPIO	=	0xa37c
                    A380   1814 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1815 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1816 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1817 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1818 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1819 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1820 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1821 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1822 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1823 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1824 _CMN_ISR_1	=	0xa3a8
                    A3AC   1825 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1826 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1827 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1828 _CID_REG0	=	0xa3f8
                    A3FC   1829 _CID_REG1	=	0xa3fc
                    E600   1830 _FW_REV	=	0xe600
                    E604   1831 _CONTROL_CONFIG0	=	0xe604
                    E608   1832 _CONTROL_CONFIG1	=	0xe608
                    E60C   1833 _CONTROL_CONFIG2	=	0xe60c
                    E610   1834 _CONTROL_CONFIG3	=	0xe610
                    E614   1835 _CONTROL_CONFIG4	=	0xe614
                    E618   1836 _CONTROL_CONFIG5	=	0xe618
                    E61C   1837 _CONTROL_CONFIG6	=	0xe61c
                    E620   1838 _CONTROL_CONFIG7	=	0xe620
                    E624   1839 _CAL_DATA0	=	0xe624
                    E628   1840 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1841 _CONTROL_CONFIG8	=	0xe62c
                    E630   1842 _CONTROL_CONFIG9	=	0xe630
                    E634   1843 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1844 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1845 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1846 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1847 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1848 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1849 _CAL_STATUS_READ	=	0xe64c
                    E650   1850 _MCU_CONFIG	=	0xe650
                    E654   1851 _CAL_DATA1	=	0xe654
                    E658   1852 _LOOP_CNTS	=	0xe658
                    E65C   1853 _MCU_CONFIG1	=	0xe65c
                    E660   1854 _TIMER_SEL1	=	0xe660
                    E664   1855 _TIMER_SEL2	=	0xe664
                    E668   1856 _TIMER_SEL3	=	0xe668
                    E66C   1857 _G_SELLV_TXCLK	=	0xe66c
                    E670   1858 _G_SELLV_TXDATA	=	0xe670
                    E674   1859 _G_SELLV_TXPRE	=	0xe674
                    E678   1860 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1861 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1862 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1863 _SAS_PRESET0_TB	=	0xe684
                    E688   1864 _SAS_PRESET1_TB	=	0xe688
                    E68C   1865 _SAS_PRESET2_TB	=	0xe68c
                    E690   1866 _ETH_PRESET0_TB	=	0xe690
                    E694   1867 _ETH_PRESET1_TB	=	0xe694
                    E698   1868 _TX_SAVE_0	=	0xe698
                    E69C   1869 _TX_SAVE_1	=	0xe69c
                    E6A0   1870 _TX_SAVE_2	=	0xe6a0
                    E6A4   1871 _TX_SAVE_3	=	0xe6a4
                    E6A8   1872 _TX_SAVE_4	=	0xe6a8
                    E6AC   1873 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1874 _SYNC_INFO	=	0xe6b0
                    E6B4   1875 _MCU_INFO_4	=	0xe6b4
                    E6B8   1876 _MCU_INFO_5	=	0xe6b8
                    E6BC   1877 _MCU_INFO_12	=	0xe6bc
                    E6C0   1878 _MCU_INFO_13	=	0xe6c0
                    E6C4   1879 _END_XDAT_CMN	=	0xe6c4
                    2600   1880 _DME_ENC_REG0	=	0x2600
                    2604   1881 _DME_ENC_REG1	=	0x2604
                    2608   1882 _DME_ENC_REG2	=	0x2608
                    260C   1883 _DME_DEC_REG0	=	0x260c
                    2610   1884 _DME_DEC_REG1	=	0x2610
                    2614   1885 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1886 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1887 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1888 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1889 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1890 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1891 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1892 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1893 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1894 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1895 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1896 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1897 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1898 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1899 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1900 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1901 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1902 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1903 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1904 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1905 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1906 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1907 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1908 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1909 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1910 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1911 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1912 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1913 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1914 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1915 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1916 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1917 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1918 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1919 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1920 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1921 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1922 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1923 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1924 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1925 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1926 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1927 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1928 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1929 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1930 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1931 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1932 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1933 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1934 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1935 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1936 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1937 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1938 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1939 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1940 _CDS_READ_MISC0	=	0x6170
                    6174   1941 _CDS_READ_MISC1	=	0x6174
                    6214   1942 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1943 _lc_speedtable	=	0xe000
                    E1C0   1944 _ring_speedtable	=	0xe1c0
                    E5C0   1945 _phy_mode_cmn_table	=	0xe5c0
                    6300   1946 _max_gen	=	0x6300
                    6301   1947 _min_gen	=	0x6301
                    6304   1948 _speedtable	=	0x6304
                    65D4   1949 _phy_mode_lane_table	=	0x65d4
                    60B4   1950 _rc_save	=	0x60b4
                    60D0   1951 _txffe_save	=	0x60d0
                    60E4   1952 _phase_save	=	0x60e4
                    6030   1953 _train_gn1_index	=	0x6030
                    6031   1954 _train_g1_index	=	0x6031
                    6032   1955 _train_g0_index	=	0x6032
                    E6B0   1956 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1957 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1958 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1959 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1960 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1961 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1962 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1963 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1964 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1965 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1966 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1967 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1968 _lnx_cal_txdcc	=	0x65da
                    65DE   1969 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1970 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1971 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1972 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1973 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1974 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1975 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1976 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1977 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1978 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1979 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1980 _lnx_cal_eom_dpher	=	0x6610
                    6612   1981 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1982 _lnx_cal_align90_dac	=	0x661a
                    6622   1983 _lnx_cal_align90_gm	=	0x6622
                    662A   1984 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1985 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1986 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1987 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1988 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1989 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1990 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1991 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1992 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1993 _lnx_calx_txdcc	=	0x6499
                    649F   1994 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1995 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1996 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1997 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1998 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1999 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2000 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2001 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2002 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2003 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2004 _lnx_calx_align90_gm	=	0x64d8
                    6100   2005 _cds28	=	0x6100
                    6178   2006 _dfe_sm	=	0x6178
                    61B8   2007 _dfe_sm_dc	=	0x61b8
                    61C0   2008 _dfe_sm_save	=	0x61c0
                    03FC   2009 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2010 _tx_tb	=	0xe684
                    E698   2011 _train_save_tb	=	0xe698
                    607C   2012 _sq_thrs_ratio_tb	=	0x607c
                           2013 ;--------------------------------------------------------
                           2014 ; absolute external ram data
                           2015 ;--------------------------------------------------------
                           2016 	.area XABS    (ABS,XDATA)
                           2017 ;--------------------------------------------------------
                           2018 ; external initialized ram data
                           2019 ;--------------------------------------------------------
                           2020 	.area HOME    (CODE)
                           2021 	.area GSINIT0 (CODE)
                           2022 	.area GSINIT1 (CODE)
                           2023 	.area GSINIT2 (CODE)
                           2024 	.area GSINIT3 (CODE)
                           2025 	.area GSINIT4 (CODE)
                           2026 	.area GSINIT5 (CODE)
                           2027 	.area GSINIT  (CODE)
                           2028 	.area GSFINAL (CODE)
                           2029 	.area CSEG    (CODE)
                           2030 ;--------------------------------------------------------
                           2031 ; global & static initialisations
                           2032 ;--------------------------------------------------------
                           2033 	.area HOME    (CODE)
                           2034 	.area GSINIT  (CODE)
                           2035 	.area GSFINAL (CODE)
                           2036 	.area GSINIT  (CODE)
                           2037 ;--------------------------------------------------------
                           2038 ; Home
                           2039 ;--------------------------------------------------------
                           2040 	.area HOME    (CODE)
                           2041 	.area HOME    (CODE)
                           2042 ;--------------------------------------------------------
                           2043 ; code
                           2044 ;--------------------------------------------------------
                           2045 	.area CSEG    (CODE)
                           2046 ;------------------------------------------------------------
                           2047 ;Allocation info for local variables in function 'SpeedChange'
                           2048 ;------------------------------------------------------------
                           2049 ;dtx_off                   Allocated to registers r2 
                           2050 ;------------------------------------------------------------
                           2051 ;	../../shared/src/spd_ctrl.c:26: void SpeedChange(){
                           2052 ;	-----------------------------------------
                           2053 ;	 function SpeedChange
                           2054 ;	-----------------------------------------
   35B1                    2055 _SpeedChange:
                    0002   2056 	ar2 = 0x02
                    0003   2057 	ar3 = 0x03
                    0004   2058 	ar4 = 0x04
                    0005   2059 	ar5 = 0x05
                    0006   2060 	ar6 = 0x06
                    0007   2061 	ar7 = 0x07
                    0000   2062 	ar0 = 0x00
                    0001   2063 	ar1 = 0x01
                           2064 ;	../../shared/src/spd_ctrl.c:30: dtx_off = 0;
   35B1 7A 00              2065 	mov	r2,#0x00
                           2066 ;	../../shared/src/spd_ctrl.c:32: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
                           2067 ;	../../shared/src/spd_ctrl.c:33: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
   35B3 90 20 57           2068 	mov	dptr,#(_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE + 0x0003)
   35B6 74 C0              2069 	mov	a,#0xC0
   35B8 F0                 2070 	movx	@dptr,a
                           2071 ;	../../shared/src/spd_ctrl.c:35: rxinit_4_spdchg_en = 0;
   35B9 E4                 2072 	clr	a
   35BA F0                 2073 	movx	@dptr,a
   35BB 90 67 A1           2074 	mov	dptr,#_rxinit_4_spdchg_en
   35BE F0                 2075 	movx	@dptr,a
                           2076 ;	../../shared/src/spd_ctrl.c:37: new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = (new_gen_tx<cmx_PHY_GEN_MAX_3_0)? new_gen_tx: cmx_PHY_GEN_MAX_3_0;
   35BF 90 20 33           2077 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   35C2 E0                 2078 	movx	a,@dptr
   35C3 C4                 2079 	swap	a
   35C4 54 0F              2080 	anl	a,#0x0f
   35C6 FB                 2081 	mov	r3,a
   35C7 90 66 29           2082 	mov	dptr,#_new_gen_tx
   35CA F0                 2083 	movx	@dptr,a
   35CB 90 E6 2C           2084 	mov	dptr,#_CONTROL_CONFIG8
   35CE E0                 2085 	movx	a,@dptr
   35CF 54 0F              2086 	anl	a,#0x0f
   35D1 FC                 2087 	mov	r4,a
   35D2 8B 05              2088 	mov	ar5,r3
   35D4 C3                 2089 	clr	c
   35D5 ED                 2090 	mov	a,r5
   35D6 64 80              2091 	xrl	a,#0x80
   35D8 8C F0              2092 	mov	b,r4
   35DA 63 F0 80           2093 	xrl	b,#0x80
   35DD 95 F0              2094 	subb	a,b
   35DF 50 02              2095 	jnc	00160$
   35E1 80 08              2096 	sjmp	00161$
   35E3                    2097 00160$:
   35E3 90 E6 2C           2098 	mov	dptr,#_CONTROL_CONFIG8
   35E6 E0                 2099 	movx	a,@dptr
   35E7 54 0F              2100 	anl	a,#0x0f
   35E9 FC                 2101 	mov	r4,a
   35EA FB                 2102 	mov	r3,a
   35EB                    2103 00161$:
   35EB 90 66 29           2104 	mov	dptr,#_new_gen_tx
   35EE EB                 2105 	mov	a,r3
   35EF F0                 2106 	movx	@dptr,a
                           2107 ;	../../shared/src/spd_ctrl.c:38: new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = (new_gen_rx<cmx_PHY_GEN_MAX_3_0)? new_gen_rx: cmx_PHY_GEN_MAX_3_0;
   35F0 90 21 17           2108 	mov	dptr,#(_SPD_CTRL_RX_LANE_REG1_LANE + 0x0003)
   35F3 E0                 2109 	movx	a,@dptr
   35F4 C4                 2110 	swap	a
   35F5 54 0F              2111 	anl	a,#0x0f
   35F7 FC                 2112 	mov	r4,a
   35F8 90 66 2A           2113 	mov	dptr,#_new_gen_rx
   35FB F0                 2114 	movx	@dptr,a
   35FC 90 E6 2C           2115 	mov	dptr,#_CONTROL_CONFIG8
   35FF E0                 2116 	movx	a,@dptr
   3600 54 0F              2117 	anl	a,#0x0f
   3602 FD                 2118 	mov	r5,a
   3603 8C 06              2119 	mov	ar6,r4
   3605 C3                 2120 	clr	c
   3606 EE                 2121 	mov	a,r6
   3607 64 80              2122 	xrl	a,#0x80
   3609 8D F0              2123 	mov	b,r5
   360B 63 F0 80           2124 	xrl	b,#0x80
   360E 95 F0              2125 	subb	a,b
   3610 50 02              2126 	jnc	00162$
   3612 80 08              2127 	sjmp	00163$
   3614                    2128 00162$:
   3614 90 E6 2C           2129 	mov	dptr,#_CONTROL_CONFIG8
   3617 E0                 2130 	movx	a,@dptr
   3618 54 0F              2131 	anl	a,#0x0f
   361A FD                 2132 	mov	r5,a
   361B FC                 2133 	mov	r4,a
   361C                    2134 00163$:
   361C 90 66 2A           2135 	mov	dptr,#_new_gen_rx
   361F EC                 2136 	mov	a,r4
   3620 F0                 2137 	movx	@dptr,a
                           2138 ;	../../shared/src/spd_ctrl.c:40: if ((new_gen_tx != gen_tx || new_gen_rx != gen_rx /*|| ( pwrsq_on && phy_mode!=SERDES )*/ ) && phy_mode!=SERDES) {
   3621 90 66 15           2139 	mov	dptr,#_gen_tx
   3624 E0                 2140 	movx	a,@dptr
   3625 FD                 2141 	mov	r5,a
   3626 EB                 2142 	mov	a,r3
   3627 B5 05 0C           2143 	cjne	a,ar5,00152$
   362A 90 66 16           2144 	mov	dptr,#_gen_rx
   362D E0                 2145 	movx	a,@dptr
   362E FD                 2146 	mov	r5,a
   362F EC                 2147 	mov	a,r4
   3630 B5 05 03           2148 	cjne	a,ar5,00200$
   3633 02 38 71           2149 	ljmp	00150$
   3636                    2150 00200$:
   3636                    2151 00152$:
   3636 90 A3 16           2152 	mov	dptr,#(_SYSTEM + 0x0002)
   3639 E0                 2153 	movx	a,@dptr
   363A 54 07              2154 	anl	a,#0x07
   363C FD                 2155 	mov	r5,a
   363D BD 04 03           2156 	cjne	r5,#0x04,00201$
   3640 02 38 71           2157 	ljmp	00150$
   3643                    2158 00201$:
                           2159 ;	../../shared/src/spd_ctrl.c:42: reg_PIN_PLL_READY_RX_LANE = 0;
   3643 90 21 02           2160 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   3646 E0                 2161 	movx	a,@dptr
   3647 54 BF              2162 	anl	a,#0xbf
   3649 F0                 2163 	movx	@dptr,a
                           2164 ;	../../shared/src/spd_ctrl.c:43: reg_PIN_PLL_READY_TX_LANE = 0;
   364A 90 20 02           2165 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   364D E0                 2166 	movx	a,@dptr
   364E 54 FB              2167 	anl	a,#0xfb
   3650 F0                 2168 	movx	@dptr,a
                           2169 ;	../../shared/src/spd_ctrl.c:54: gen_tx = new_gen_tx;
   3651 90 66 15           2170 	mov	dptr,#_gen_tx
   3654 EB                 2171 	mov	a,r3
   3655 F0                 2172 	movx	@dptr,a
                           2173 ;	../../shared/src/spd_ctrl.c:55: gen_rx = new_gen_rx;
   3656 90 66 16           2174 	mov	dptr,#_gen_rx
   3659 EC                 2175 	mov	a,r4
   365A F0                 2176 	movx	@dptr,a
                           2177 ;	../../shared/src/spd_ctrl.c:59: if(phy_mode==SATA) { //SATA must support 1.5G/3G/6G only!! 
   365B 90 A3 16           2178 	mov	dptr,#(_SYSTEM + 0x0002)
   365E E0                 2179 	movx	a,@dptr
   365F 54 07              2180 	anl	a,#0x07
   3661 70 06              2181 	jnz	00147$
                           2182 ;	../../shared/src/spd_ctrl.c:60: sata_speedchange();
   3663 12 38 F4           2183 	lcall	_sata_speedchange
   3666 02 38 71           2184 	ljmp	00150$
   3669                    2185 00147$:
                           2186 ;	../../shared/src/spd_ctrl.c:63: gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx]; 
   3669 8B 04              2187 	mov	ar4,r3
   366B EC                 2188 	mov	a,r4
   366C 75 F0 50           2189 	mov	b,#0x50
   366F A4                 2190 	mul	ab
   3670 24 04              2191 	add	a,#_speedtable
   3672 F5 82              2192 	mov	dpl,a
   3674 74 63              2193 	mov	a,#(_speedtable >> 8)
   3676 35 F0              2194 	addc	a,b
   3678 F5 83              2195 	mov	dph,a
   367A E0                 2196 	movx	a,@dptr
   367B FC                 2197 	mov	r4,a
   367C 90 67 8C           2198 	mov	dptr,#_gen_pll_rate
   367F F0                 2199 	movx	@dptr,a
                           2200 ;	../../shared/src/spd_ctrl.c:65: use_ring_pll = speedtable[gen_tx][spdoft_tx_ck_sel_lane];
   3680 EB                 2201 	mov	a,r3
   3681 75 F0 50           2202 	mov	b,#0x50
   3684 A4                 2203 	mul	ab
   3685 24 04              2204 	add	a,#_speedtable
   3687 FB                 2205 	mov	r3,a
   3688 74 63              2206 	mov	a,#(_speedtable >> 8)
   368A 35 F0              2207 	addc	a,b
   368C FD                 2208 	mov	r5,a
   368D 8B 82              2209 	mov	dpl,r3
   368F 8D 83              2210 	mov	dph,r5
   3691 A3                 2211 	inc	dptr
   3692 E0                 2212 	movx	a,@dptr
   3693 24 FF              2213 	add	a,#0xff
   3695 92 10              2214 	mov	_use_ring_pll,c
                           2215 ;	../../shared/src/spd_ctrl.c:80: if (((!ring_pll_enabled || !lc_pll_used ||
   3697 30 12 3D           2216 	jnb	_ring_pll_enabled,00113$
   369A 30 11 3A           2217 	jnb	_lc_pll_used,00113$
                           2218 ;	../../shared/src/spd_ctrl.c:81: (phy_mode==PCIE && (use_ring_pll==1? gen_pll_rate!=pre_ringpll_rate : gen_pll_rate!=pre_lcpll_rate)))
   369D 90 A3 16           2219 	mov	dptr,#(_SYSTEM + 0x0002)
   36A0 E0                 2220 	movx	a,@dptr
   36A1 54 07              2221 	anl	a,#0x07
   36A3 FB                 2222 	mov	r3,a
   36A4 BB 03 6A           2223 	cjne	r3,#0x03,00109$
   36A7 30 10 16           2224 	jnb	_use_ring_pll,00164$
   36AA 90 67 8F           2225 	mov	dptr,#_pre_ringpll_rate
   36AD E0                 2226 	movx	a,@dptr
   36AE FB                 2227 	mov	r3,a
   36AF EC                 2228 	mov	a,r4
   36B0 B5 03 04           2229 	cjne	a,ar3,00208$
   36B3 74 01              2230 	mov	a,#0x01
   36B5 80 01              2231 	sjmp	00209$
   36B7                    2232 00208$:
   36B7 E4                 2233 	clr	a
   36B8                    2234 00209$:
   36B8 FB                 2235 	mov	r3,a
   36B9 B4 01 00           2236 	cjne	a,#0x01,00210$
   36BC                    2237 00210$:
   36BC 92 28              2238 	mov	b0,c
   36BE 80 14              2239 	sjmp	00165$
   36C0                    2240 00164$:
   36C0 90 67 8E           2241 	mov	dptr,#_pre_lcpll_rate
   36C3 E0                 2242 	movx	a,@dptr
   36C4 FB                 2243 	mov	r3,a
   36C5 EC                 2244 	mov	a,r4
   36C6 B5 03 04           2245 	cjne	a,ar3,00211$
   36C9 74 01              2246 	mov	a,#0x01
   36CB 80 01              2247 	sjmp	00212$
   36CD                    2248 00211$:
   36CD E4                 2249 	clr	a
   36CE                    2250 00212$:
   36CE FC                 2251 	mov	r4,a
   36CF B4 01 00           2252 	cjne	a,#0x01,00213$
   36D2                    2253 00213$:
   36D2 92 28              2254 	mov	b0,c
   36D4                    2255 00165$:
   36D4 30 28 3A           2256 	jnb	b0,00109$
   36D7                    2257 00113$:
                           2258 ;	../../shared/src/spd_ctrl.c:82: /*|| pwrsq_on*/) && !no_pllspdchg /*&& !force_exit_cal*/) {
   36D7 20 15 37           2259 	jb	_no_pllspdchg,00109$
                           2260 ;	../../shared/src/spd_ctrl.c:83: if(mcuid==master_mcu) {
   36DA 90 22 00           2261 	mov	dptr,#_MCU_CONTROL_LANE
   36DD E0                 2262 	movx	a,@dptr
   36DE FB                 2263 	mov	r3,a
   36DF 90 E6 50           2264 	mov	dptr,#_MCU_CONFIG
   36E2 E0                 2265 	movx	a,@dptr
   36E3 FC                 2266 	mov	r4,a
   36E4 EB                 2267 	mov	a,r3
   36E5 B5 04 0B           2268 	cjne	a,ar4,00102$
                           2269 ;	../../shared/src/spd_ctrl.c:84: pll_clk_ready_all_0();
   36E8 78 0E              2270 	mov	r0,#_pll_clk_ready_all_0
   36EA 79 D5              2271 	mov	r1,#(_pll_clk_ready_all_0 >> 8)
   36EC 7A 02              2272 	mov	r2,#(_pll_clk_ready_all_0 >> 16)
   36EE 12 00 B3           2273 	lcall	__sdcc_banked_call
                           2274 ;	../../shared/src/spd_ctrl.c:91: while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
   36F1 80 1C              2275 	sjmp	00107$
   36F3                    2276 00102$:
   36F3 90 A3 4F           2277 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   36F6 E0                 2278 	movx	a,@dptr
   36F7 03                 2279 	rr	a
   36F8 03                 2280 	rr	a
   36F9 54 01              2281 	anl	a,#0x01
   36FB FB                 2282 	mov	r3,a
   36FC BB 01 02           2283 	cjne	r3,#0x01,00218$
   36FF 80 F2              2284 	sjmp	00102$
   3701                    2285 00218$:
   3701 90 A3 4E           2286 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   3704 E0                 2287 	movx	a,@dptr
   3705 C4                 2288 	swap	a
   3706 03                 2289 	rr	a
   3707 54 01              2290 	anl	a,#0x01
   3709 FB                 2291 	mov	r3,a
   370A BB 01 02           2292 	cjne	r3,#0x01,00219$
   370D 80 E4              2293 	sjmp	00102$
   370F                    2294 00219$:
   370F                    2295 00107$:
                           2296 ;	../../shared/src/spd_ctrl.c:94: dtx_off = 1;
   370F 7A 01              2297 	mov	r2,#0x01
   3711                    2298 00109$:
                           2299 ;	../../shared/src/spd_ctrl.c:98: DTL_DTX_DFE_clkoff_reset_1(dtx_off);
   3711 8A 82              2300 	mov	dpl,r2
   3713 78 28              2301 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_1
   3715 79 D4              2302 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_1 >> 8)
   3717 7A 01              2303 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_1 >> 16)
   3719 12 00 B3           2304 	lcall	__sdcc_banked_call
                           2305 ;	../../shared/src/spd_ctrl.c:100: loadspeedtbl_gen();
   371C 12 43 41           2306 	lcall	_loadspeedtbl_gen
                           2307 ;	../../shared/src/spd_ctrl.c:102: reg_MCU_DEBUG0_LANE_7_0 = 0x34;
   371F 90 22 B4           2308 	mov	dptr,#_MCU_DEBUG0_LANE
   3722 74 34              2309 	mov	a,#0x34
   3724 F0                 2310 	movx	@dptr,a
                           2311 ;	../../shared/src/spd_ctrl.c:103: reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
   3725 90 66 15           2312 	mov	dptr,#_gen_tx
   3728 E0                 2313 	movx	a,@dptr
   3729 FA                 2314 	mov	r2,a
   372A 90 22 B5           2315 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   372D EA                 2316 	mov	a,r2
   372E F0                 2317 	movx	@dptr,a
                           2318 ;	../../shared/src/spd_ctrl.c:104: reg_MCU_DEBUG2_LANE_7_0 = lc_pll_used;
   372F A2 11              2319 	mov	c,_lc_pll_used
   3731 E4                 2320 	clr	a
   3732 33                 2321 	rlc	a
   3733 FA                 2322 	mov	r2,a
   3734 90 22 B6           2323 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   3737 EA                 2324 	mov	a,r2
   3738 F0                 2325 	movx	@dptr,a
                           2326 ;	../../shared/src/spd_ctrl.c:105: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   3739 90 67 8C           2327 	mov	dptr,#_gen_pll_rate
   373C E0                 2328 	movx	a,@dptr
   373D FA                 2329 	mov	r2,a
   373E 90 22 B7           2330 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   3741 EA                 2331 	mov	a,r2
   3742 F0                 2332 	movx	@dptr,a
                           2333 ;	../../shared/src/spd_ctrl.c:106: reg_MCU_DEBUG4_LANE_7_0 = max_gen;
   3743 90 63 00           2334 	mov	dptr,#_max_gen
   3746 E0                 2335 	movx	a,@dptr
   3747 FB                 2336 	mov	r3,a
   3748 90 22 B8           2337 	mov	dptr,#_MCU_DEBUG1_LANE
   374B EB                 2338 	mov	a,r3
   374C F0                 2339 	movx	@dptr,a
                           2340 ;	../../shared/src/spd_ctrl.c:107: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   374D A2 12              2341 	mov	c,_ring_pll_enabled
   374F E4                 2342 	clr	a
   3750 33                 2343 	rlc	a
   3751 FB                 2344 	mov	r3,a
   3752 90 22 B9           2345 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   3755 EB                 2346 	mov	a,r3
   3756 F0                 2347 	movx	@dptr,a
                           2348 ;	../../shared/src/spd_ctrl.c:108: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   3757 A2 10              2349 	mov	c,_use_ring_pll
   3759 E4                 2350 	clr	a
   375A 33                 2351 	rlc	a
   375B FB                 2352 	mov	r3,a
   375C 90 22 BA           2353 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   375F EB                 2354 	mov	a,r3
   3760 F0                 2355 	movx	@dptr,a
                           2356 ;	../../shared/src/spd_ctrl.c:109: reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
   3761 A2 0F              2357 	mov	c,_tx_pll_rate
   3763 E4                 2358 	clr	a
   3764 33                 2359 	rlc	a
   3765 FB                 2360 	mov	r3,a
   3766 90 22 BB           2361 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0003)
   3769 EB                 2362 	mov	a,r3
   376A F0                 2363 	movx	@dptr,a
                           2364 ;	../../shared/src/spd_ctrl.c:110: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   376B 90 66 24           2365 	mov	dptr,#_ring_lane_sel
   376E E0                 2366 	movx	a,@dptr
   376F FB                 2367 	mov	r3,a
   3770 90 22 BC           2368 	mov	dptr,#_MCU_DEBUG2_LANE
   3773 EB                 2369 	mov	a,r3
   3774 F0                 2370 	movx	@dptr,a
                           2371 ;	../../shared/src/spd_ctrl.c:111: reg_MCU_DEBUG9_LANE_7_0 = serdes_ring_lane_en;
   3775 90 66 23           2372 	mov	dptr,#_serdes_ring_lane_en
   3778 E0                 2373 	movx	a,@dptr
   3779 FB                 2374 	mov	r3,a
   377A 90 22 BD           2375 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0001)
   377D EB                 2376 	mov	a,r3
   377E F0                 2377 	movx	@dptr,a
                           2378 ;	../../shared/src/spd_ctrl.c:112: reg_MCU_DEBUGA_LANE_7_0 = master_mcu;
   377F 90 E6 50           2379 	mov	dptr,#_MCU_CONFIG
   3782 E0                 2380 	movx	a,@dptr
   3783 FB                 2381 	mov	r3,a
   3784 90 22 BE           2382 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0002)
   3787 EB                 2383 	mov	a,r3
   3788 F0                 2384 	movx	@dptr,a
                           2385 ;	../../shared/src/spd_ctrl.c:115: if (mcuid == master_mcu) {
   3789 90 22 00           2386 	mov	dptr,#_MCU_CONTROL_LANE
   378C E0                 2387 	movx	a,@dptr
   378D FB                 2388 	mov	r3,a
   378E 90 E6 50           2389 	mov	dptr,#_MCU_CONFIG
   3791 E0                 2390 	movx	a,@dptr
   3792 FC                 2391 	mov	r4,a
   3793 EB                 2392 	mov	a,r3
   3794 B5 04 63           2393 	cjne	a,ar4,00129$
                           2394 ;	../../shared/src/spd_ctrl.c:139: if((!ring_pll_enabled && !no_pllspdchg ) ||
   3797 20 12 03           2395 	jb	_ring_pll_enabled,00125$
   379A 30 15 18           2396 	jnb	_no_pllspdchg,00120$
   379D                    2397 00125$:
                           2398 ;	../../shared/src/spd_ctrl.c:140: (phy_mode==PCIE && !use_ring_pll && gen_pll_rate!=pre_lcpll_rate)) {
   379D 90 A3 16           2399 	mov	dptr,#(_SYSTEM + 0x0002)
   37A0 E0                 2400 	movx	a,@dptr
   37A1 54 07              2401 	anl	a,#0x07
   37A3 FB                 2402 	mov	r3,a
   37A4 BB 03 43           2403 	cjne	r3,#0x03,00121$
   37A7 20 10 40           2404 	jb	_use_ring_pll,00121$
   37AA 90 67 8E           2405 	mov	dptr,#_pre_lcpll_rate
   37AD E0                 2406 	movx	a,@dptr
   37AE FB                 2407 	mov	r3,a
   37AF EA                 2408 	mov	a,r2
   37B0 B5 03 02           2409 	cjne	a,ar3,00227$
   37B3 80 35              2410 	sjmp	00121$
   37B5                    2411 00227$:
   37B5                    2412 00120$:
                           2413 ;	../../shared/src/spd_ctrl.c:142: if (phy_mode==PCIE)
   37B5 90 A3 16           2414 	mov	dptr,#(_SYSTEM + 0x0002)
   37B8 E0                 2415 	movx	a,@dptr
   37B9 54 07              2416 	anl	a,#0x07
   37BB FB                 2417 	mov	r3,a
   37BC BB 03 07           2418 	cjne	r3,#0x03,00115$
                           2419 ;	../../shared/src/spd_ctrl.c:145: loadspeedtbl_pll(gen_pll_rate);
   37BF 8A 82              2420 	mov	dpl,r2
   37C1 12 39 86           2421 	lcall	_loadspeedtbl_pll
   37C4 80 09              2422 	sjmp	00116$
   37C6                    2423 00115$:
                           2424 ;	../../shared/src/spd_ctrl.c:148: loadspeedtbl_pll(tx_pll_rate);
   37C6 A2 0F              2425 	mov	c,_tx_pll_rate
   37C8 E4                 2426 	clr	a
   37C9 33                 2427 	rlc	a
   37CA F5 82              2428 	mov	dpl,a
   37CC 12 39 86           2429 	lcall	_loadspeedtbl_pll
   37CF                    2430 00116$:
                           2431 ;	../../shared/src/spd_ctrl.c:150: if(slave_phy_on) {
   37CF 90 66 1C           2432 	mov	dptr,#_slave_phy_on
   37D2 E0                 2433 	movx	a,@dptr
   37D3 FA                 2434 	mov	r2,a
   37D4 60 0B              2435 	jz	00118$
                           2436 ;	../../shared/src/spd_ctrl.c:152: pll_clk_ready_1();
   37D6 78 47              2437 	mov	r0,#_pll_clk_ready_1
   37D8 79 D4              2438 	mov	r1,#(_pll_clk_ready_1 >> 8)
   37DA 7A 02              2439 	mov	r2,#(_pll_clk_ready_1 >> 16)
   37DC 12 00 B3           2440 	lcall	__sdcc_banked_call
   37DF 80 09              2441 	sjmp	00121$
   37E1                    2442 00118$:
                           2443 ;	../../shared/src/spd_ctrl.c:155: spdchg_pll_fast_cal();
   37E1 78 81              2444 	mov	r0,#_spdchg_pll_fast_cal
   37E3 79 CE              2445 	mov	r1,#(_spdchg_pll_fast_cal >> 8)
   37E5 7A 01              2446 	mov	r2,#(_spdchg_pll_fast_cal >> 16)
   37E7 12 00 B3           2447 	lcall	__sdcc_banked_call
   37EA                    2448 00121$:
                           2449 ;	../../shared/src/spd_ctrl.c:159: if(reg_ANA_PLL_CLK_READY==0) pll_clk_ready_1();
   37EA 90 A3 4F           2450 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   37ED E0                 2451 	movx	a,@dptr
   37EE 20 E0 09           2452 	jb	acc.0,00129$
   37F1 78 47              2453 	mov	r0,#_pll_clk_ready_1
   37F3 79 D4              2454 	mov	r1,#(_pll_clk_ready_1 >> 8)
   37F5 7A 02              2455 	mov	r2,#(_pll_clk_ready_1 >> 16)
   37F7 12 00 B3           2456 	lcall	__sdcc_banked_call
   37FA                    2457 00129$:
                           2458 ;	../../shared/src/spd_ctrl.c:162: if( ring_lane_sel )
   37FA 90 66 24           2459 	mov	dptr,#_ring_lane_sel
   37FD E0                 2460 	movx	a,@dptr
   37FE FA                 2461 	mov	r2,a
   37FF 60 54              2462 	jz	00141$
                           2463 ;	../../shared/src/spd_ctrl.c:177: if( !lc_pll_used || (phy_mode==PCIE && use_ring_pll && gen_pll_rate!=pre_ringpll_rate) ) { 
   3801 30 11 1D           2464 	jnb	_lc_pll_used,00133$
   3804 90 A3 16           2465 	mov	dptr,#(_SYSTEM + 0x0002)
   3807 E0                 2466 	movx	a,@dptr
   3808 54 07              2467 	anl	a,#0x07
   380A FA                 2468 	mov	r2,a
   380B BA 03 37           2469 	cjne	r2,#0x03,00134$
   380E 30 10 34           2470 	jnb	_use_ring_pll,00134$
   3811 90 67 8C           2471 	mov	dptr,#_gen_pll_rate
   3814 E0                 2472 	movx	a,@dptr
   3815 FA                 2473 	mov	r2,a
   3816 90 67 8F           2474 	mov	dptr,#_pre_ringpll_rate
   3819 E0                 2475 	movx	a,@dptr
   381A FB                 2476 	mov	r3,a
   381B EA                 2477 	mov	a,r2
   381C B5 03 02           2478 	cjne	a,ar3,00237$
   381F 80 24              2479 	sjmp	00134$
   3821                    2480 00237$:
   3821                    2481 00133$:
                           2482 ;	../../shared/src/spd_ctrl.c:178: loadspeedtbl_ringpll(tx_pll_rate);
   3821 A2 0F              2483 	mov	c,_tx_pll_rate
   3823 E4                 2484 	clr	a
   3824 33                 2485 	rlc	a
   3825 F5 82              2486 	mov	dpl,a
   3827 12 3D 59           2487 	lcall	_loadspeedtbl_ringpll
                           2488 ;	../../shared/src/spd_ctrl.c:180: if(slave_phy_on) {
   382A 90 66 1C           2489 	mov	dptr,#_slave_phy_on
   382D E0                 2490 	movx	a,@dptr
   382E FA                 2491 	mov	r2,a
   382F 60 0B              2492 	jz	00131$
                           2493 ;	../../shared/src/spd_ctrl.c:182: pll_clk_ready_ring_1();
   3831 78 A7              2494 	mov	r0,#_pll_clk_ready_ring_1
   3833 79 D4              2495 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   3835 7A 02              2496 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   3837 12 00 B3           2497 	lcall	__sdcc_banked_call
   383A 80 09              2498 	sjmp	00134$
   383C                    2499 00131$:
                           2500 ;	../../shared/src/spd_ctrl.c:186: ring_pll_fast_cal();
   383C 78 6C              2501 	mov	r0,#_ring_pll_fast_cal
   383E 79 E0              2502 	mov	r1,#(_ring_pll_fast_cal >> 8)
   3840 7A 01              2503 	mov	r2,#(_ring_pll_fast_cal >> 16)
   3842 12 00 B3           2504 	lcall	__sdcc_banked_call
   3845                    2505 00134$:
                           2506 ;	../../shared/src/spd_ctrl.c:193: if(reg_ANA_PLL_CLK_READY_RING==0) pll_clk_ready_ring_1();
   3845 90 A3 4E           2507 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   3848 E0                 2508 	movx	a,@dptr
   3849 20 E5 09           2509 	jb	acc.5,00141$
   384C 78 A7              2510 	mov	r0,#_pll_clk_ready_ring_1
   384E 79 D4              2511 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   3850 7A 02              2512 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   3852 12 00 B3           2513 	lcall	__sdcc_banked_call
   3855                    2514 00141$:
                           2515 ;	../../shared/src/spd_ctrl.c:197: if(serdes_ring_lane_en==0)
   3855 90 66 23           2516 	mov	dptr,#_serdes_ring_lane_en
   3858 E0                 2517 	movx	a,@dptr
   3859 FA                 2518 	mov	r2,a
   385A 70 09              2519 	jnz	00143$
                           2520 ;	../../shared/src/spd_ctrl.c:198: check_pll_clk_ready();
   385C 78 D7              2521 	mov	r0,#_check_pll_clk_ready
   385E 79 D4              2522 	mov	r1,#(_check_pll_clk_ready >> 8)
   3860 7A 02              2523 	mov	r2,#(_check_pll_clk_ready >> 16)
   3862 12 00 B3           2524 	lcall	__sdcc_banked_call
   3865                    2525 00143$:
                           2526 ;	../../shared/src/spd_ctrl.c:204: if(!force_exit_cal)
   3865 20 14 09           2527 	jb	_force_exit_cal,00150$
                           2528 ;	../../shared/src/spd_ctrl.c:205: load_cal_data_all();
   3868 78 D7              2529 	mov	r0,#_load_cal_data_all
   386A 79 82              2530 	mov	r1,#(_load_cal_data_all >> 8)
   386C 7A 02              2531 	mov	r2,#(_load_cal_data_all >> 16)
   386E 12 00 B3           2532 	lcall	__sdcc_banked_call
   3871                    2533 00150$:
                           2534 ;	../../shared/src/spd_ctrl.c:217: restore_train();
   3871 12 64 3A           2535 	lcall	_restore_train
                           2536 ;	../../shared/src/spd_ctrl.c:219: DTL_DTX_DFE_clkoff_reset_0();
   3874 78 7F              2537 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_0
   3876 79 D3              2538 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_0 >> 8)
   3878 7A 01              2539 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_0 >> 16)
   387A 12 00 B3           2540 	lcall	__sdcc_banked_call
                           2541 ;	../../shared/src/spd_ctrl.c:221: if(phy_mode!=SATA) 
   387D 90 A3 16           2542 	mov	dptr,#(_SYSTEM + 0x0002)
   3880 E0                 2543 	movx	a,@dptr
   3881 54 07              2544 	anl	a,#0x07
   3883 60 0C              2545 	jz	00154$
                           2546 ;	../../shared/src/spd_ctrl.c:222: delay01(90);
   3885 90 00 5A           2547 	mov	dptr,#0x005A
   3888 78 16              2548 	mov	r0,#_delay01
   388A 79 BC              2549 	mov	r1,#(_delay01 >> 8)
   388C 7A 02              2550 	mov	r2,#(_delay01 >> 16)
   388E 12 00 B3           2551 	lcall	__sdcc_banked_call
   3891                    2552 00154$:
                           2553 ;	../../shared/src/spd_ctrl.c:224: lnx_EOM_ALIGN_CAL_DONE_LANE = 0; //moved eom_align_cal to inside train
   3891 90 60 01           2554 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   3894 E0                 2555 	movx	a,@dptr
   3895 54 FB              2556 	anl	a,#0xfb
   3897 F0                 2557 	movx	@dptr,a
                           2558 ;	../../shared/src/spd_ctrl.c:228: reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
   3898 90 21 1F           2559 	mov	dptr,#(_CLKGEN_RX_LANE_REG1_LANE + 0x0003)
   389B E0                 2560 	movx	a,@dptr
   389C 44 04              2561 	orl	a,#0x04
   389E F0                 2562 	movx	@dptr,a
                           2563 ;	../../shared/src/spd_ctrl.c:229: delay01(10);
   389F 90 00 0A           2564 	mov	dptr,#0x000A
   38A2 78 16              2565 	mov	r0,#_delay01
   38A4 79 BC              2566 	mov	r1,#(_delay01 >> 8)
   38A6 7A 02              2567 	mov	r2,#(_delay01 >> 16)
   38A8 12 00 B3           2568 	lcall	__sdcc_banked_call
                           2569 ;	../../shared/src/spd_ctrl.c:230: reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
   38AB 90 21 1F           2570 	mov	dptr,#(_CLKGEN_RX_LANE_REG1_LANE + 0x0003)
   38AE E0                 2571 	movx	a,@dptr
   38AF 54 FB              2572 	anl	a,#0xfb
   38B1 F0                 2573 	movx	@dptr,a
                           2574 ;	../../shared/src/spd_ctrl.c:232: PHY_STATUS_INT = IDLE;
   38B2 90 22 38           2575 	mov	dptr,#_MCU_STATUS2_LANE
   38B5 E4                 2576 	clr	a
   38B6 F0                 2577 	movx	@dptr,a
                           2578 ;	../../shared/src/spd_ctrl.c:233: pre_gen_pll_rate = gen_pll_rate;
   38B7 90 67 8C           2579 	mov	dptr,#_gen_pll_rate
   38BA E0                 2580 	movx	a,@dptr
   38BB 90 67 8D           2581 	mov	dptr,#_pre_gen_pll_rate
   38BE F0                 2582 	movx	@dptr,a
                           2583 ;	../../shared/src/spd_ctrl.c:234: rxinit_4_spdchg_en = 1;
   38BF 90 67 A1           2584 	mov	dptr,#_rxinit_4_spdchg_en
   38C2 74 01              2585 	mov	a,#0x01
   38C4 F0                 2586 	movx	@dptr,a
                           2587 ;	../../shared/src/spd_ctrl.c:243: delay01(5); //TXCLK need more time 0.5sec even in bypassed delay
   38C5 90 00 05           2588 	mov	dptr,#0x0005
   38C8 78 16              2589 	mov	r0,#_delay01
   38CA 79 BC              2590 	mov	r1,#(_delay01 >> 8)
   38CC 7A 02              2591 	mov	r2,#(_delay01 >> 16)
   38CE 12 00 B3           2592 	lcall	__sdcc_banked_call
                           2593 ;	../../shared/src/spd_ctrl.c:245: reg_PIN_PLL_READY_RX_LANE = 1;
   38D1 90 21 02           2594 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   38D4 E0                 2595 	movx	a,@dptr
   38D5 44 40              2596 	orl	a,#0x40
   38D7 F0                 2597 	movx	@dptr,a
                           2598 ;	../../shared/src/spd_ctrl.c:246: reg_PIN_PLL_READY_TX_LANE = 1;
   38D8 90 20 02           2599 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   38DB E0                 2600 	movx	a,@dptr
   38DC 44 04              2601 	orl	a,#0x04
   38DE F0                 2602 	movx	@dptr,a
                           2603 ;	../../shared/src/spd_ctrl.c:248: if(cmx_AUTO_RX_INIT_EN == 0)
   38DF 90 E6 2E           2604 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0002)
   38E2 E0                 2605 	movx	a,@dptr
   38E3 20 E0 07           2606 	jb	acc.0,00156$
                           2607 ;	../../shared/src/spd_ctrl.c:249: PHY_STATUS = ST_PLLREADY; 
   38E6 90 22 30           2608 	mov	dptr,#_MCU_STATUS0_LANE
   38E9 74 27              2609 	mov	a,#0x27
   38EB F0                 2610 	movx	@dptr,a
   38EC 22                 2611 	ret
   38ED                    2612 00156$:
                           2613 ;	../../shared/src/spd_ctrl.c:251: PHY_STATUS = ST_DTL;
   38ED 90 22 30           2614 	mov	dptr,#_MCU_STATUS0_LANE
   38F0 74 2C              2615 	mov	a,#0x2C
   38F2 F0                 2616 	movx	@dptr,a
   38F3 22                 2617 	ret
                           2618 ;------------------------------------------------------------
                           2619 ;Allocation info for local variables in function 'sata_speedchange'
                           2620 ;------------------------------------------------------------
                           2621 ;------------------------------------------------------------
                           2622 ;	../../shared/src/spd_ctrl.c:255: void sata_speedchange(void) {
                           2623 ;	-----------------------------------------
                           2624 ;	 function sata_speedchange
                           2625 ;	-----------------------------------------
   38F4                    2626 _sata_speedchange:
                           2627 ;	../../shared/src/spd_ctrl.c:258: reg_DTL_CLK_OFF_LANE= 1; 
   38F4 90 21 02           2628 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   38F7 E0                 2629 	movx	a,@dptr
   38F8 44 10              2630 	orl	a,#0x10
   38FA F0                 2631 	movx	@dptr,a
                           2632 ;	../../shared/src/spd_ctrl.c:259: reg_DFE_CLK_OFF_LANE = 1; 
   38FB 90 24 10           2633 	mov	dptr,#_RX_EQ_CLK_CTRL
   38FE E0                 2634 	movx	a,@dptr
   38FF 44 01              2635 	orl	a,#0x01
   3901 F0                 2636 	movx	@dptr,a
                           2637 ;	../../shared/src/spd_ctrl.c:260: reg_RESET_DTL_LANE = 1;
   3902 90 21 02           2638 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   3905 E0                 2639 	movx	a,@dptr
   3906 44 20              2640 	orl	a,#0x20
   3908 F0                 2641 	movx	@dptr,a
                           2642 ;	../../shared/src/spd_ctrl.c:261: CKCON = 0x07 ;  //MCU WAIT time the slowest
   3909 75 8E 07           2643 	mov	_CKCON,#0x07
                           2644 ;	../../shared/src/spd_ctrl.c:262: reg_RESET_DFE_LANE = 1;
   390C 90 24 10           2645 	mov	dptr,#_RX_EQ_CLK_CTRL
   390F E0                 2646 	movx	a,@dptr
   3910 44 04              2647 	orl	a,#0x04
   3912 F0                 2648 	movx	@dptr,a
                           2649 ;	../../shared/src/spd_ctrl.c:263: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   3913 75 8E 00           2650 	mov	_CKCON,#0x00
                           2651 ;	../../shared/src/spd_ctrl.c:266: loadspeedtbl_gen();
   3916 12 43 41           2652 	lcall	_loadspeedtbl_gen
                           2653 ;	../../shared/src/spd_ctrl.c:269: reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
   3919 90 E6 32           2654 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   391C E0                 2655 	movx	a,@dptr
   391D 23                 2656 	rl	a
   391E 23                 2657 	rl	a
   391F 54 01              2658 	anl	a,#0x01
   3921 25 E0              2659 	add	a,acc
   3923 24 D4              2660 	add	a,#_lnx_cal_txdcc_pdiv
   3925 FA                 2661 	mov	r2,a
   3926 E4                 2662 	clr	a
   3927 34 65              2663 	addc	a,#(_lnx_cal_txdcc_pdiv >> 8)
   3929 FB                 2664 	mov	r3,a
   392A A2 0F              2665 	mov	c,_tx_pll_rate
   392C E4                 2666 	clr	a
   392D 33                 2667 	rlc	a
   392E 2A                 2668 	add	a,r2
   392F F5 82              2669 	mov	dpl,a
   3931 E4                 2670 	clr	a
   3932 3B                 2671 	addc	a,r3
   3933 F5 83              2672 	mov	dph,a
   3935 E0                 2673 	movx	a,@dptr
   3936 90 02 5C           2674 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   3939 25 E0              2675 	add	a,acc
   393B 25 E0              2676 	add	a,acc
   393D 54 FC              2677 	anl	a,#0xfc
   393F F5 F0              2678 	mov	b,a
   3941 E0                 2679 	movx	a,@dptr
   3942 54 03              2680 	anl	a,#0x03
   3944 45 F0              2681 	orl	a,b
   3946 F0                 2682 	movx	@dptr,a
                           2683 ;	../../shared/src/spd_ctrl.c:270: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
   3947 90 02 20           2684 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   394A E0                 2685 	movx	a,@dptr
   394B 44 01              2686 	orl	a,#0x01
   394D F0                 2687 	movx	@dptr,a
                           2688 ;	../../shared/src/spd_ctrl.c:271: txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;    //when speed change, restore the fracition code to middle
   394E 90 E6 3E           2689 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0002)
   3951 E0                 2690 	movx	a,@dptr
   3952 90 66 0F           2691 	mov	dptr,#_txdcc_pdiv_step_cnt
   3955 F0                 2692 	movx	@dptr,a
                           2693 ;	../../shared/src/spd_ctrl.c:272: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   3956 90 02 20           2694 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   3959 E0                 2695 	movx	a,@dptr
   395A 54 FE              2696 	anl	a,#0xfe
   395C F0                 2697 	movx	@dptr,a
                           2698 ;	../../shared/src/spd_ctrl.c:279: reg_DTL_CLK_OFF_LANE= 0; 
   395D 90 21 02           2699 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   3960 E0                 2700 	movx	a,@dptr
   3961 54 EF              2701 	anl	a,#0xef
   3963 F0                 2702 	movx	@dptr,a
                           2703 ;	../../shared/src/spd_ctrl.c:280: reg_DFE_CLK_OFF_LANE = 0;
   3964 90 24 10           2704 	mov	dptr,#_RX_EQ_CLK_CTRL
   3967 E0                 2705 	movx	a,@dptr
   3968 54 FE              2706 	anl	a,#0xfe
   396A F0                 2707 	movx	@dptr,a
                           2708 ;	../../shared/src/spd_ctrl.c:281: delay01(5);
   396B 90 00 05           2709 	mov	dptr,#0x0005
   396E 78 16              2710 	mov	r0,#_delay01
   3970 79 BC              2711 	mov	r1,#(_delay01 >> 8)
   3972 7A 02              2712 	mov	r2,#(_delay01 >> 16)
   3974 12 00 B3           2713 	lcall	__sdcc_banked_call
                           2714 ;	../../shared/src/spd_ctrl.c:282: reg_RESET_DTL_LANE = 0;
   3977 90 21 02           2715 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   397A E0                 2716 	movx	a,@dptr
   397B 54 DF              2717 	anl	a,#0xdf
   397D F0                 2718 	movx	@dptr,a
                           2719 ;	../../shared/src/spd_ctrl.c:283: reg_RESET_DFE_LANE = 0;
   397E 90 24 10           2720 	mov	dptr,#_RX_EQ_CLK_CTRL
   3981 E0                 2721 	movx	a,@dptr
   3982 54 FB              2722 	anl	a,#0xfb
   3984 F0                 2723 	movx	@dptr,a
   3985 22                 2724 	ret
                           2725 ;------------------------------------------------------------
                           2726 ;Allocation info for local variables in function 'loadspeedtbl_pll'
                           2727 ;------------------------------------------------------------
                           2728 ;rate                      Allocated to registers r2 
                           2729 ;temp                      Allocated to stack - offset 1
                           2730 ;fbck                      Allocated to registers r3 
                           2731 ;rate_no                   Allocated to registers r5 
                           2732 ;------------------------------------------------------------
                           2733 ;	../../shared/src/spd_ctrl.c:287: void loadspeedtbl_pll(uint8_t rate) {
                           2734 ;	-----------------------------------------
                           2735 ;	 function loadspeedtbl_pll
                           2736 ;	-----------------------------------------
   3986                    2737 _loadspeedtbl_pll:
   3986 C0 18              2738 	push	_bp
   3988 85 81 18           2739 	mov	_bp,sp
   398B 05 81              2740 	inc	sp
   398D 05 81              2741 	inc	sp
   398F AA 82              2742 	mov	r2,dpl
                           2743 ;	../../shared/src/spd_ctrl.c:291: fbck = fbck_sel;
   3991 90 A3 19           2744 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   3994 E0                 2745 	movx	a,@dptr
   3995 03                 2746 	rr	a
   3996 54 01              2747 	anl	a,#0x01
   3998 FB                 2748 	mov	r3,a
                           2749 ;	../../shared/src/spd_ctrl.c:293: reg_MCU_DEBUG0_LANE_7_0 = 0x35;
   3999 90 22 B4           2750 	mov	dptr,#_MCU_DEBUG0_LANE
   399C 74 35              2751 	mov	a,#0x35
   399E F0                 2752 	movx	@dptr,a
                           2753 ;	../../shared/src/spd_ctrl.c:295: if(phy_mode==SERDES)
   399F 90 A3 16           2754 	mov	dptr,#(_SYSTEM + 0x0002)
   39A2 E0                 2755 	movx	a,@dptr
   39A3 54 07              2756 	anl	a,#0x07
   39A5 FC                 2757 	mov	r4,a
   39A6 BC 04 05           2758 	cjne	r4,#0x04,00102$
                           2759 ;	../../shared/src/spd_ctrl.c:302: rate = gen_pll_rate;
   39A9 90 67 8C           2760 	mov	dptr,#_gen_pll_rate
   39AC E0                 2761 	movx	a,@dptr
   39AD FA                 2762 	mov	r2,a
   39AE                    2763 00102$:
                           2764 ;	../../shared/src/spd_ctrl.c:304: rate_no				= lc_speedtable[fbck][rate][spdoft_pll_rate_sel];
   39AE EB                 2765 	mov	a,r3
   39AF 75 F0 E0           2766 	mov	b,#0xE0
   39B2 A4                 2767 	mul	ab
   39B3 FB                 2768 	mov	r3,a
   39B4 AC F0              2769 	mov	r4,b
   39B6 8B 05              2770 	mov	ar5,r3
   39B8 74 E0              2771 	mov	a,#(_lc_speedtable >> 8)
   39BA 2C                 2772 	add	a,r4
   39BB FE                 2773 	mov	r6,a
   39BC EA                 2774 	mov	a,r2
   39BD C4                 2775 	swap	a
   39BE 23                 2776 	rl	a
   39BF 54 E0              2777 	anl	a,#0xe0
   39C1 FA                 2778 	mov	r2,a
   39C2 2D                 2779 	add	a,r5
   39C3 FD                 2780 	mov	r5,a
   39C4 E4                 2781 	clr	a
   39C5 3E                 2782 	addc	a,r6
   39C6 FE                 2783 	mov	r6,a
   39C7 8D 82              2784 	mov	dpl,r5
   39C9 8E 83              2785 	mov	dph,r6
   39CB A3                 2786 	inc	dptr
   39CC E0                 2787 	movx	a,@dptr
   39CD FD                 2788 	mov	r5,a
                           2789 ;	../../shared/src/spd_ctrl.c:305: if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
   39CE 74 01              2790 	mov	a,#0x01
   39D0 B5 05 00           2791 	cjne	a,ar5,00126$
   39D3                    2792 00126$:
   39D3 40 0A              2793 	jc	00103$
   39D5 90 A3 16           2794 	mov	dptr,#(_SYSTEM + 0x0002)
   39D8 E0                 2795 	movx	a,@dptr
   39D9 54 07              2796 	anl	a,#0x07
   39DB FE                 2797 	mov	r6,a
   39DC BE 04 02           2798 	cjne	r6,#0x04,00104$
   39DF                    2799 00103$:
   39DF 7D 00              2800 	mov	r5,#0x00
   39E1                    2801 00104$:
                           2802 ;	../../shared/src/spd_ctrl.c:306: PLL_RATE_SEL = rate_no;
   39E1 90 E6 1E           2803 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   39E4 ED                 2804 	mov	a,r5
   39E5 F0                 2805 	movx	@dptr,a
                           2806 ;	../../shared/src/spd_ctrl.c:308: reg_PLL_REG_SEL_2_0		= lc_speedtable[fbck][rate][spdoft_pll_reg_sel];
   39E6 8B 05              2807 	mov	ar5,r3
   39E8 74 E0              2808 	mov	a,#(_lc_speedtable >> 8)
   39EA 2C                 2809 	add	a,r4
   39EB FE                 2810 	mov	r6,a
   39EC EA                 2811 	mov	a,r2
   39ED 2D                 2812 	add	a,r5
   39EE F5 82              2813 	mov	dpl,a
   39F0 E4                 2814 	clr	a
   39F1 3E                 2815 	addc	a,r6
   39F2 F5 83              2816 	mov	dph,a
   39F4 E0                 2817 	movx	a,@dptr
   39F5 90 82 DC           2818 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_183
   39F8 C4                 2819 	swap	a
   39F9 54 70              2820 	anl	a,#(0xf0&0x70)
   39FB F5 F0              2821 	mov	b,a
   39FD E0                 2822 	movx	a,@dptr
   39FE 54 8F              2823 	anl	a,#0x8f
   3A00 45 F0              2824 	orl	a,b
   3A02 F0                 2825 	movx	@dptr,a
                           2826 ;	../../shared/src/spd_ctrl.c:309: reg_FBDIV_7_0 			= lc_speedtable[fbck][rate][spdoft_fbdiv];
   3A03 8B 05              2827 	mov	ar5,r3
   3A05 74 E0              2828 	mov	a,#(_lc_speedtable >> 8)
   3A07 2C                 2829 	add	a,r4
   3A08 FE                 2830 	mov	r6,a
   3A09 EA                 2831 	mov	a,r2
   3A0A 2D                 2832 	add	a,r5
   3A0B FD                 2833 	mov	r5,a
   3A0C E4                 2834 	clr	a
   3A0D 3E                 2835 	addc	a,r6
   3A0E FE                 2836 	mov	r6,a
   3A0F 8D 82              2837 	mov	dpl,r5
   3A11 8E 83              2838 	mov	dph,r6
   3A13 A3                 2839 	inc	dptr
   3A14 A3                 2840 	inc	dptr
   3A15 E0                 2841 	movx	a,@dptr
   3A16 90 82 A4           2842 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_169
   3A19 F0                 2843 	movx	@dptr,a
                           2844 ;	../../shared/src/spd_ctrl.c:310: reg_FBDIV_9_8			= lc_speedtable[fbck][rate][spdoft_fbdiv+1];
   3A1A 8B 05              2845 	mov	ar5,r3
   3A1C 74 E0              2846 	mov	a,#(_lc_speedtable >> 8)
   3A1E 2C                 2847 	add	a,r4
   3A1F FE                 2848 	mov	r6,a
   3A20 EA                 2849 	mov	a,r2
   3A21 2D                 2850 	add	a,r5
   3A22 FD                 2851 	mov	r5,a
   3A23 E4                 2852 	clr	a
   3A24 3E                 2853 	addc	a,r6
   3A25 FE                 2854 	mov	r6,a
   3A26 8D 82              2855 	mov	dpl,r5
   3A28 8E 83              2856 	mov	dph,r6
   3A2A A3                 2857 	inc	dptr
   3A2B A3                 2858 	inc	dptr
   3A2C A3                 2859 	inc	dptr
   3A2D E0                 2860 	movx	a,@dptr
   3A2E 90 82 A0           2861 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_168
   3A31 C4                 2862 	swap	a
   3A32 54 30              2863 	anl	a,#(0xf0&0x30)
   3A34 F5 F0              2864 	mov	b,a
   3A36 E0                 2865 	movx	a,@dptr
   3A37 54 CF              2866 	anl	a,#0xcf
   3A39 45 F0              2867 	orl	a,b
   3A3B F0                 2868 	movx	@dptr,a
                           2869 ;	../../shared/src/spd_ctrl.c:311: reg_REFDIV_3_0 			= lc_speedtable[fbck][rate][spdoft_refdiv];
   3A3C 8B 05              2870 	mov	ar5,r3
   3A3E 74 E0              2871 	mov	a,#(_lc_speedtable >> 8)
   3A40 2C                 2872 	add	a,r4
   3A41 FE                 2873 	mov	r6,a
   3A42 EA                 2874 	mov	a,r2
   3A43 2D                 2875 	add	a,r5
   3A44 FD                 2876 	mov	r5,a
   3A45 E4                 2877 	clr	a
   3A46 3E                 2878 	addc	a,r6
   3A47 FE                 2879 	mov	r6,a
   3A48 74 06              2880 	mov	a,#0x06
   3A4A 2D                 2881 	add	a,r5
   3A4B F5 82              2882 	mov	dpl,a
   3A4D E4                 2883 	clr	a
   3A4E 3E                 2884 	addc	a,r6
   3A4F F5 83              2885 	mov	dph,a
   3A51 E0                 2886 	movx	a,@dptr
   3A52 90 82 A8           2887 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_170
   3A55 C4                 2888 	swap	a
   3A56 54 F0              2889 	anl	a,#(0xf0&0xf0)
   3A58 F5 F0              2890 	mov	b,a
   3A5A E0                 2891 	movx	a,@dptr
   3A5B 54 0F              2892 	anl	a,#0x0f
   3A5D 45 F0              2893 	orl	a,b
   3A5F F0                 2894 	movx	@dptr,a
                           2895 ;	../../shared/src/spd_ctrl.c:312: reg_VIND_BAND_SEL 		= lc_speedtable[fbck][rate][spdoft_vind_band_sel];
   3A60 8B 05              2896 	mov	ar5,r3
   3A62 74 E0              2897 	mov	a,#(_lc_speedtable >> 8)
   3A64 2C                 2898 	add	a,r4
   3A65 FE                 2899 	mov	r6,a
   3A66 EA                 2900 	mov	a,r2
   3A67 2D                 2901 	add	a,r5
   3A68 FD                 2902 	mov	r5,a
   3A69 E4                 2903 	clr	a
   3A6A 3E                 2904 	addc	a,r6
   3A6B FE                 2905 	mov	r6,a
   3A6C 74 07              2906 	mov	a,#0x07
   3A6E 2D                 2907 	add	a,r5
   3A6F F5 82              2908 	mov	dpl,a
   3A71 E4                 2909 	clr	a
   3A72 3E                 2910 	addc	a,r6
   3A73 F5 83              2911 	mov	dph,a
   3A75 E0                 2912 	movx	a,@dptr
   3A76 90 82 9C           2913 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_167
   3A79 13                 2914 	rrc	a
   3A7A E0                 2915 	movx	a,@dptr
   3A7B 92 E1              2916 	mov	acc.1,c
   3A7D F0                 2917 	movx	@dptr,a
                           2918 ;	../../shared/src/spd_ctrl.c:313: if(reg_RING_REF_DIV_SEL==1) {
   3A7E 90 82 D4           2919 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   3A81 E0                 2920 	movx	a,@dptr
   3A82 23                 2921 	rl	a
   3A83 54 01              2922 	anl	a,#0x01
   3A85 FD                 2923 	mov	r5,a
   3A86 BD 01 42           2924 	cjne	r5,#0x01,00107$
                           2925 ;	../../shared/src/spd_ctrl.c:314: reg_DIV_1G_7_0 		= lc_speedtable[fbck][rate][spdoft_div_1g_fbck];
   3A89 8B 05              2926 	mov	ar5,r3
   3A8B 74 E0              2927 	mov	a,#(_lc_speedtable >> 8)
   3A8D 2C                 2928 	add	a,r4
   3A8E FE                 2929 	mov	r6,a
   3A8F EA                 2930 	mov	a,r2
   3A90 2D                 2931 	add	a,r5
   3A91 FD                 2932 	mov	r5,a
   3A92 E4                 2933 	clr	a
   3A93 3E                 2934 	addc	a,r6
   3A94 FE                 2935 	mov	r6,a
   3A95 74 0B              2936 	mov	a,#0x0B
   3A97 2D                 2937 	add	a,r5
   3A98 F5 82              2938 	mov	dpl,a
   3A9A E4                 2939 	clr	a
   3A9B 3E                 2940 	addc	a,r6
   3A9C F5 83              2941 	mov	dph,a
   3A9E E0                 2942 	movx	a,@dptr
   3A9F 90 82 E8           2943 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_186
   3AA2 F0                 2944 	movx	@dptr,a
                           2945 ;	../../shared/src/spd_ctrl.c:315: reg_DIV_1G_9_8 		= lc_speedtable[fbck][rate][spdoft_div_1g_fbck+1];
   3AA3 8B 05              2946 	mov	ar5,r3
   3AA5 74 E0              2947 	mov	a,#(_lc_speedtable >> 8)
   3AA7 2C                 2948 	add	a,r4
   3AA8 FE                 2949 	mov	r6,a
   3AA9 EA                 2950 	mov	a,r2
   3AAA 2D                 2951 	add	a,r5
   3AAB FD                 2952 	mov	r5,a
   3AAC E4                 2953 	clr	a
   3AAD 3E                 2954 	addc	a,r6
   3AAE FE                 2955 	mov	r6,a
   3AAF 74 0C              2956 	mov	a,#0x0C
   3AB1 2D                 2957 	add	a,r5
   3AB2 F5 82              2958 	mov	dpl,a
   3AB4 E4                 2959 	clr	a
   3AB5 3E                 2960 	addc	a,r6
   3AB6 F5 83              2961 	mov	dph,a
   3AB8 E0                 2962 	movx	a,@dptr
   3AB9 FD                 2963 	mov	r5,a
   3ABA 90 82 E4           2964 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_185
   3ABD 03                 2965 	rr	a
   3ABE 03                 2966 	rr	a
   3ABF 54 C0              2967 	anl	a,#(0xc0&0xc0)
   3AC1 F5 F0              2968 	mov	b,a
   3AC3 E0                 2969 	movx	a,@dptr
   3AC4 54 3F              2970 	anl	a,#0x3f
   3AC6 45 F0              2971 	orl	a,b
   3AC8 F0                 2972 	movx	@dptr,a
   3AC9 80 40              2973 	sjmp	00108$
   3ACB                    2974 00107$:
                           2975 ;	../../shared/src/spd_ctrl.c:318: reg_DIV_1G_7_0 		= lc_speedtable[fbck][rate][spdoft_div_1g];
   3ACB 8B 05              2976 	mov	ar5,r3
   3ACD 74 E0              2977 	mov	a,#(_lc_speedtable >> 8)
   3ACF 2C                 2978 	add	a,r4
   3AD0 FE                 2979 	mov	r6,a
   3AD1 EA                 2980 	mov	a,r2
   3AD2 2D                 2981 	add	a,r5
   3AD3 FD                 2982 	mov	r5,a
   3AD4 E4                 2983 	clr	a
   3AD5 3E                 2984 	addc	a,r6
   3AD6 FE                 2985 	mov	r6,a
   3AD7 74 09              2986 	mov	a,#0x09
   3AD9 2D                 2987 	add	a,r5
   3ADA F5 82              2988 	mov	dpl,a
   3ADC E4                 2989 	clr	a
   3ADD 3E                 2990 	addc	a,r6
   3ADE F5 83              2991 	mov	dph,a
   3AE0 E0                 2992 	movx	a,@dptr
   3AE1 90 82 E8           2993 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_186
   3AE4 F0                 2994 	movx	@dptr,a
                           2995 ;	../../shared/src/spd_ctrl.c:319: reg_DIV_1G_9_8 		= lc_speedtable[fbck][rate][spdoft_div_1g+1];
   3AE5 8B 05              2996 	mov	ar5,r3
   3AE7 74 E0              2997 	mov	a,#(_lc_speedtable >> 8)
   3AE9 2C                 2998 	add	a,r4
   3AEA FE                 2999 	mov	r6,a
   3AEB EA                 3000 	mov	a,r2
   3AEC 2D                 3001 	add	a,r5
   3AED FD                 3002 	mov	r5,a
   3AEE E4                 3003 	clr	a
   3AEF 3E                 3004 	addc	a,r6
   3AF0 FE                 3005 	mov	r6,a
   3AF1 74 0A              3006 	mov	a,#0x0A
   3AF3 2D                 3007 	add	a,r5
   3AF4 F5 82              3008 	mov	dpl,a
   3AF6 E4                 3009 	clr	a
   3AF7 3E                 3010 	addc	a,r6
   3AF8 F5 83              3011 	mov	dph,a
   3AFA E0                 3012 	movx	a,@dptr
   3AFB FD                 3013 	mov	r5,a
   3AFC 90 82 E4           3014 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_185
   3AFF 03                 3015 	rr	a
   3B00 03                 3016 	rr	a
   3B01 54 C0              3017 	anl	a,#(0xc0&0xc0)
   3B03 F5 F0              3018 	mov	b,a
   3B05 E0                 3019 	movx	a,@dptr
   3B06 54 3F              3020 	anl	a,#0x3f
   3B08 45 F0              3021 	orl	a,b
   3B0A F0                 3022 	movx	@dptr,a
   3B0B                    3023 00108$:
                           3024 ;	../../shared/src/spd_ctrl.c:321: reg_ICP_LC_4_0			= lc_speedtable[fbck][rate][spdoft_icp_lc];
   3B0B 8B 05              3025 	mov	ar5,r3
   3B0D 74 E0              3026 	mov	a,#(_lc_speedtable >> 8)
   3B0F 2C                 3027 	add	a,r4
   3B10 FE                 3028 	mov	r6,a
   3B11 EA                 3029 	mov	a,r2
   3B12 2D                 3030 	add	a,r5
   3B13 FD                 3031 	mov	r5,a
   3B14 E4                 3032 	clr	a
   3B15 3E                 3033 	addc	a,r6
   3B16 FE                 3034 	mov	r6,a
   3B17 74 0D              3035 	mov	a,#0x0D
   3B19 2D                 3036 	add	a,r5
   3B1A F5 82              3037 	mov	dpl,a
   3B1C E4                 3038 	clr	a
   3B1D 3E                 3039 	addc	a,r6
   3B1E F5 83              3040 	mov	dph,a
   3B20 E0                 3041 	movx	a,@dptr
   3B21 90 83 34           3042 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_205
   3B24 54 1F              3043 	anl	a,#0x1f
   3B26 F5 F0              3044 	mov	b,a
   3B28 E0                 3045 	movx	a,@dptr
   3B29 54 E0              3046 	anl	a,#0xe0
   3B2B 45 F0              3047 	orl	a,b
   3B2D F0                 3048 	movx	@dptr,a
                           3049 ;	../../shared/src/spd_ctrl.c:322: reg_PLL_LPFR_1_0		= lc_speedtable[fbck][rate][spdoft_pll_lpfr];
   3B2E 8B 05              3050 	mov	ar5,r3
   3B30 74 E0              3051 	mov	a,#(_lc_speedtable >> 8)
   3B32 2C                 3052 	add	a,r4
   3B33 FE                 3053 	mov	r6,a
   3B34 EA                 3054 	mov	a,r2
   3B35 2D                 3055 	add	a,r5
   3B36 FD                 3056 	mov	r5,a
   3B37 E4                 3057 	clr	a
   3B38 3E                 3058 	addc	a,r6
   3B39 FE                 3059 	mov	r6,a
   3B3A 74 0E              3060 	mov	a,#0x0E
   3B3C 2D                 3061 	add	a,r5
   3B3D F5 82              3062 	mov	dpl,a
   3B3F E4                 3063 	clr	a
   3B40 3E                 3064 	addc	a,r6
   3B41 F5 83              3065 	mov	dph,a
   3B43 E0                 3066 	movx	a,@dptr
   3B44 90 82 A8           3067 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_170
   3B47 54 03              3068 	anl	a,#0x03
   3B49 F5 F0              3069 	mov	b,a
   3B4B E0                 3070 	movx	a,@dptr
   3B4C 54 FC              3071 	anl	a,#0xfc
   3B4E 45 F0              3072 	orl	a,b
   3B50 F0                 3073 	movx	@dptr,a
                           3074 ;	../../shared/src/spd_ctrl.c:323: reg_PLL_LPFC_1_0		= lc_speedtable[fbck][rate][spdoft_pll_lpfc];
   3B51 8B 05              3075 	mov	ar5,r3
   3B53 74 E0              3076 	mov	a,#(_lc_speedtable >> 8)
   3B55 2C                 3077 	add	a,r4
   3B56 FE                 3078 	mov	r6,a
   3B57 EA                 3079 	mov	a,r2
   3B58 2D                 3080 	add	a,r5
   3B59 FD                 3081 	mov	r5,a
   3B5A E4                 3082 	clr	a
   3B5B 3E                 3083 	addc	a,r6
   3B5C FE                 3084 	mov	r6,a
   3B5D 74 0F              3085 	mov	a,#0x0F
   3B5F 2D                 3086 	add	a,r5
   3B60 F5 82              3087 	mov	dpl,a
   3B62 E4                 3088 	clr	a
   3B63 3E                 3089 	addc	a,r6
   3B64 F5 83              3090 	mov	dph,a
   3B66 E0                 3091 	movx	a,@dptr
   3B67 90 82 A8           3092 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_170
   3B6A 25 E0              3093 	add	a,acc
   3B6C 25 E0              3094 	add	a,acc
   3B6E 54 0C              3095 	anl	a,#0x0c
   3B70 F5 F0              3096 	mov	b,a
   3B72 E0                 3097 	movx	a,@dptr
   3B73 54 F3              3098 	anl	a,#0xf3
   3B75 45 F0              3099 	orl	a,b
   3B77 F0                 3100 	movx	@dptr,a
                           3101 ;	../../shared/src/spd_ctrl.c:324: cmx_G_INTPI_LCPLL_7_0		= lc_speedtable[fbck][rate][spdoft_intpi_lcpll];
   3B78 8B 05              3102 	mov	ar5,r3
   3B7A 74 E0              3103 	mov	a,#(_lc_speedtable >> 8)
   3B7C 2C                 3104 	add	a,r4
   3B7D FE                 3105 	mov	r6,a
   3B7E EA                 3106 	mov	a,r2
   3B7F 2D                 3107 	add	a,r5
   3B80 FD                 3108 	mov	r5,a
   3B81 E4                 3109 	clr	a
   3B82 3E                 3110 	addc	a,r6
   3B83 FE                 3111 	mov	r6,a
   3B84 74 10              3112 	mov	a,#0x10
   3B86 2D                 3113 	add	a,r5
   3B87 F5 82              3114 	mov	dpl,a
   3B89 E4                 3115 	clr	a
   3B8A 3E                 3116 	addc	a,r6
   3B8B F5 83              3117 	mov	dph,a
   3B8D E0                 3118 	movx	a,@dptr
                           3119 ;	../../shared/src/spd_ctrl.c:325: reg_INTPI_LCPLL_3_0 = cmx_G_INTPI_LCPLL_7_0;
   3B8E 90 E6 56           3120 	mov	dptr,#(_CAL_DATA1 + 0x0002)
   3B91 F0                 3121 	movx	@dptr,a
   3B92 E0                 3122 	movx	a,@dptr
   3B93 90 82 0C           3123 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   3B96 C4                 3124 	swap	a
   3B97 54 F0              3125 	anl	a,#(0xf0&0xf0)
   3B99 F5 F0              3126 	mov	b,a
   3B9B E0                 3127 	movx	a,@dptr
   3B9C 54 0F              3128 	anl	a,#0x0f
   3B9E 45 F0              3129 	orl	a,b
   3BA0 F0                 3130 	movx	@dptr,a
                           3131 ;	../../shared/src/spd_ctrl.c:326: reg_INTPI_RING_3_0 = cmx_G_INTPI_RING_7_0;
   3BA1 90 E6 57           3132 	mov	dptr,#(_CAL_DATA1 + 0x0003)
   3BA4 E0                 3133 	movx	a,@dptr
   3BA5 90 82 0C           3134 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   3BA8 54 0F              3135 	anl	a,#0x0f
   3BAA F5 F0              3136 	mov	b,a
   3BAC E0                 3137 	movx	a,@dptr
   3BAD 54 F0              3138 	anl	a,#0xf0
   3BAF 45 F0              3139 	orl	a,b
   3BB1 F0                 3140 	movx	@dptr,a
                           3141 ;	../../shared/src/spd_ctrl.c:327: reg_TX_INTPR_1_0		= lc_speedtable[fbck][rate][spdoft_tx_intpr];
   3BB2 8B 05              3142 	mov	ar5,r3
   3BB4 74 E0              3143 	mov	a,#(_lc_speedtable >> 8)
   3BB6 2C                 3144 	add	a,r4
   3BB7 FE                 3145 	mov	r6,a
   3BB8 EA                 3146 	mov	a,r2
   3BB9 2D                 3147 	add	a,r5
   3BBA FD                 3148 	mov	r5,a
   3BBB E4                 3149 	clr	a
   3BBC 3E                 3150 	addc	a,r6
   3BBD FE                 3151 	mov	r6,a
   3BBE 74 11              3152 	mov	a,#0x11
   3BC0 2D                 3153 	add	a,r5
   3BC1 F5 82              3154 	mov	dpl,a
   3BC3 E4                 3155 	clr	a
   3BC4 3E                 3156 	addc	a,r6
   3BC5 F5 83              3157 	mov	dph,a
   3BC7 E0                 3158 	movx	a,@dptr
   3BC8 90 82 EC           3159 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_187
   3BCB 03                 3160 	rr	a
   3BCC 03                 3161 	rr	a
   3BCD 54 C0              3162 	anl	a,#(0xc0&0xc0)
   3BCF F5 F0              3163 	mov	b,a
   3BD1 E0                 3164 	movx	a,@dptr
   3BD2 54 3F              3165 	anl	a,#0x3f
   3BD4 45 F0              3166 	orl	a,b
   3BD6 F0                 3167 	movx	@dptr,a
                           3168 ;	../../shared/src/spd_ctrl.c:328: reg_INIT_TXFOFFS_9_0_b0		= lc_speedtable[fbck][rate][spdoft_init_txfoffs]; 
   3BD7 8B 05              3169 	mov	ar5,r3
   3BD9 74 E0              3170 	mov	a,#(_lc_speedtable >> 8)
   3BDB 2C                 3171 	add	a,r4
   3BDC FE                 3172 	mov	r6,a
   3BDD EA                 3173 	mov	a,r2
   3BDE 2D                 3174 	add	a,r5
   3BDF FD                 3175 	mov	r5,a
   3BE0 E4                 3176 	clr	a
   3BE1 3E                 3177 	addc	a,r6
   3BE2 FE                 3178 	mov	r6,a
   3BE3 74 12              3179 	mov	a,#0x12
   3BE5 2D                 3180 	add	a,r5
   3BE6 F5 82              3181 	mov	dpl,a
   3BE8 E4                 3182 	clr	a
   3BE9 3E                 3183 	addc	a,r6
   3BEA F5 83              3184 	mov	dph,a
   3BEC E0                 3185 	movx	a,@dptr
   3BED 90 A0 08           3186 	mov	dptr,#_DTX_REG0
   3BF0 F0                 3187 	movx	@dptr,a
                           3188 ;	../../shared/src/spd_ctrl.c:329: reg_INIT_TXFOFFS_9_0_b1		= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];
   3BF1 8B 05              3189 	mov	ar5,r3
   3BF3 74 E0              3190 	mov	a,#(_lc_speedtable >> 8)
   3BF5 2C                 3191 	add	a,r4
   3BF6 FE                 3192 	mov	r6,a
   3BF7 EA                 3193 	mov	a,r2
   3BF8 2D                 3194 	add	a,r5
   3BF9 FD                 3195 	mov	r5,a
   3BFA E4                 3196 	clr	a
   3BFB 3E                 3197 	addc	a,r6
   3BFC FE                 3198 	mov	r6,a
   3BFD 74 13              3199 	mov	a,#0x13
   3BFF 2D                 3200 	add	a,r5
   3C00 F5 82              3201 	mov	dpl,a
   3C02 E4                 3202 	clr	a
   3C03 3E                 3203 	addc	a,r6
   3C04 F5 83              3204 	mov	dph,a
   3C06 E0                 3205 	movx	a,@dptr
   3C07 90 A0 09           3206 	mov	dptr,#(_DTX_REG0 + 0x0001)
   3C0A 54 03              3207 	anl	a,#0x03
   3C0C F5 F0              3208 	mov	b,a
   3C0E E0                 3209 	movx	a,@dptr
   3C0F 54 FC              3210 	anl	a,#0xfc
   3C11 45 F0              3211 	orl	a,b
   3C13 F0                 3212 	movx	@dptr,a
                           3213 ;	../../shared/src/spd_ctrl.c:330: temp				= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
   3C14 8B 05              3214 	mov	ar5,r3
   3C16 74 E0              3215 	mov	a,#(_lc_speedtable >> 8)
   3C18 2C                 3216 	add	a,r4
   3C19 FE                 3217 	mov	r6,a
   3C1A EA                 3218 	mov	a,r2
   3C1B 2D                 3219 	add	a,r5
   3C1C FD                 3220 	mov	r5,a
   3C1D E4                 3221 	clr	a
   3C1E 3E                 3222 	addc	a,r6
   3C1F FE                 3223 	mov	r6,a
   3C20 74 15              3224 	mov	a,#0x15
   3C22 2D                 3225 	add	a,r5
   3C23 F5 82              3226 	mov	dpl,a
   3C25 E4                 3227 	clr	a
   3C26 3E                 3228 	addc	a,r6
   3C27 F5 83              3229 	mov	dph,a
   3C29 E0                 3230 	movx	a,@dptr
   3C2A FD                 3231 	mov	r5,a
   3C2B A8 18              3232 	mov	r0,_bp
   3C2D 08                 3233 	inc	r0
   3C2E A6 05              3234 	mov	@r0,ar5
   3C30 08                 3235 	inc	r0
   3C31 76 00              3236 	mov	@r0,#0x00
   3C33 A8 18              3237 	mov	r0,_bp
   3C35 08                 3238 	inc	r0
   3C36 E6                 3239 	mov	a,@r0
   3C37 08                 3240 	inc	r0
   3C38 F6                 3241 	mov	@r0,a
   3C39 18                 3242 	dec	r0
   3C3A 76 00              3243 	mov	@r0,#0x00
                           3244 ;	../../shared/src/spd_ctrl.c:331: temp				+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];
   3C3C 8B 07              3245 	mov	ar7,r3
   3C3E 74 E0              3246 	mov	a,#(_lc_speedtable >> 8)
   3C40 2C                 3247 	add	a,r4
   3C41 FD                 3248 	mov	r5,a
   3C42 EA                 3249 	mov	a,r2
   3C43 2F                 3250 	add	a,r7
   3C44 FF                 3251 	mov	r7,a
   3C45 E4                 3252 	clr	a
   3C46 3D                 3253 	addc	a,r5
   3C47 FD                 3254 	mov	r5,a
   3C48 74 14              3255 	mov	a,#0x14
   3C4A 2F                 3256 	add	a,r7
   3C4B F5 82              3257 	mov	dpl,a
   3C4D E4                 3258 	clr	a
   3C4E 3D                 3259 	addc	a,r5
   3C4F F5 83              3260 	mov	dph,a
   3C51 E0                 3261 	movx	a,@dptr
   3C52 FD                 3262 	mov	r5,a
   3C53 7E 00              3263 	mov	r6,#0x00
   3C55 A8 18              3264 	mov	r0,_bp
   3C57 08                 3265 	inc	r0
   3C58 ED                 3266 	mov	a,r5
   3C59 26                 3267 	add	a,@r0
   3C5A F6                 3268 	mov	@r0,a
   3C5B EE                 3269 	mov	a,r6
   3C5C 08                 3270 	inc	r0
   3C5D 36                 3271 	addc	a,@r0
   3C5E F6                 3272 	mov	@r0,a
                           3273 ;	../../shared/src/spd_ctrl.c:332: temp <<= FBC_RATIO;
   3C5F 90 E6 14           3274 	mov	dptr,#_CONTROL_CONFIG4
   3C62 E0                 3275 	movx	a,@dptr
   3C63 FD                 3276 	mov	r5,a
   3C64 8D F0              3277 	mov	b,r5
   3C66 05 F0              3278 	inc	b
   3C68 A8 18              3279 	mov	r0,_bp
   3C6A 08                 3280 	inc	r0
   3C6B 80 09              3281 	sjmp	00133$
   3C6D                    3282 00132$:
   3C6D E6                 3283 	mov	a,@r0
   3C6E 25 E0              3284 	add	a,acc
   3C70 F6                 3285 	mov	@r0,a
   3C71 08                 3286 	inc	r0
   3C72 E6                 3287 	mov	a,@r0
   3C73 33                 3288 	rlc	a
   3C74 F6                 3289 	mov	@r0,a
   3C75 18                 3290 	dec	r0
   3C76                    3291 00133$:
   3C76 D5 F0 F4           3292 	djnz	b,00132$
                           3293 ;	../../shared/src/spd_ctrl.c:333: cmx_SPEED_THRESH_15_0 = temp;
   3C79 90 E6 1C           3294 	mov	dptr,#_CONTROL_CONFIG6
   3C7C A8 18              3295 	mov	r0,_bp
   3C7E 08                 3296 	inc	r0
   3C7F E6                 3297 	mov	a,@r0
   3C80 F0                 3298 	movx	@dptr,a
   3C81 A3                 3299 	inc	dptr
   3C82 08                 3300 	inc	r0
   3C83 E6                 3301 	mov	a,@r0
   3C84 F0                 3302 	movx	@dptr,a
                           3303 ;	../../shared/src/spd_ctrl.c:335: reg_LCCAP_USB			= lc_speedtable[fbck][rate][spdoft_lccap_usb];
   3C85 8B 05              3304 	mov	ar5,r3
   3C87 74 E0              3305 	mov	a,#(_lc_speedtable >> 8)
   3C89 2C                 3306 	add	a,r4
   3C8A FE                 3307 	mov	r6,a
   3C8B EA                 3308 	mov	a,r2
   3C8C 2D                 3309 	add	a,r5
   3C8D FD                 3310 	mov	r5,a
   3C8E E4                 3311 	clr	a
   3C8F 3E                 3312 	addc	a,r6
   3C90 FE                 3313 	mov	r6,a
   3C91 74 16              3314 	mov	a,#0x16
   3C93 2D                 3315 	add	a,r5
   3C94 F5 82              3316 	mov	dpl,a
   3C96 E4                 3317 	clr	a
   3C97 3E                 3318 	addc	a,r6
   3C98 F5 83              3319 	mov	dph,a
   3C9A E0                 3320 	movx	a,@dptr
   3C9B 90 82 C0           3321 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_176
   3C9E 13                 3322 	rrc	a
   3C9F E0                 3323 	movx	a,@dptr
   3CA0 92 E4              3324 	mov	acc.4,c
   3CA2 F0                 3325 	movx	@dptr,a
                           3326 ;	../../shared/src/spd_ctrl.c:336: reg_SSC_STEP_125PPM_3_0 	= lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm]; 
   3CA3 8B 05              3327 	mov	ar5,r3
   3CA5 74 E0              3328 	mov	a,#(_lc_speedtable >> 8)
   3CA7 2C                 3329 	add	a,r4
   3CA8 FE                 3330 	mov	r6,a
   3CA9 EA                 3331 	mov	a,r2
   3CAA 2D                 3332 	add	a,r5
   3CAB FD                 3333 	mov	r5,a
   3CAC E4                 3334 	clr	a
   3CAD 3E                 3335 	addc	a,r6
   3CAE FE                 3336 	mov	r6,a
   3CAF 74 18              3337 	mov	a,#0x18
   3CB1 2D                 3338 	add	a,r5
   3CB2 F5 82              3339 	mov	dpl,a
   3CB4 E4                 3340 	clr	a
   3CB5 3E                 3341 	addc	a,r6
   3CB6 F5 83              3342 	mov	dph,a
   3CB8 E0                 3343 	movx	a,@dptr
   3CB9 90 A0 09           3344 	mov	dptr,#(_DTX_REG0 + 0x0001)
   3CBC 25 E0              3345 	add	a,acc
   3CBE 25 E0              3346 	add	a,acc
   3CC0 54 3C              3347 	anl	a,#0x3c
   3CC2 F5 F0              3348 	mov	b,a
   3CC4 E0                 3349 	movx	a,@dptr
   3CC5 54 C3              3350 	anl	a,#0xc3
   3CC7 45 F0              3351 	orl	a,b
   3CC9 F0                 3352 	movx	@dptr,a
                           3353 ;	../../shared/src/spd_ctrl.c:337: reg_SSC_M_12_0_b0		= lc_speedtable[fbck][rate][spdoft_ssc_m];
   3CCA 8B 05              3354 	mov	ar5,r3
   3CCC 74 E0              3355 	mov	a,#(_lc_speedtable >> 8)
   3CCE 2C                 3356 	add	a,r4
   3CCF FE                 3357 	mov	r6,a
   3CD0 EA                 3358 	mov	a,r2
   3CD1 2D                 3359 	add	a,r5
   3CD2 FD                 3360 	mov	r5,a
   3CD3 E4                 3361 	clr	a
   3CD4 3E                 3362 	addc	a,r6
   3CD5 FE                 3363 	mov	r6,a
   3CD6 74 19              3364 	mov	a,#0x19
   3CD8 2D                 3365 	add	a,r5
   3CD9 F5 82              3366 	mov	dpl,a
   3CDB E4                 3367 	clr	a
   3CDC 3E                 3368 	addc	a,r6
   3CDD F5 83              3369 	mov	dph,a
   3CDF E0                 3370 	movx	a,@dptr
   3CE0 90 A0 0E           3371 	mov	dptr,#(_DTX_REG1 + 0x0002)
   3CE3 F0                 3372 	movx	@dptr,a
                           3373 ;	../../shared/src/spd_ctrl.c:338: reg_SSC_M_12_0_b1		= lc_speedtable[fbck][rate][spdoft_ssc_m+1];
   3CE4 8B 05              3374 	mov	ar5,r3
   3CE6 74 E0              3375 	mov	a,#(_lc_speedtable >> 8)
   3CE8 2C                 3376 	add	a,r4
   3CE9 FE                 3377 	mov	r6,a
   3CEA EA                 3378 	mov	a,r2
   3CEB 2D                 3379 	add	a,r5
   3CEC FD                 3380 	mov	r5,a
   3CED E4                 3381 	clr	a
   3CEE 3E                 3382 	addc	a,r6
   3CEF FE                 3383 	mov	r6,a
   3CF0 74 1A              3384 	mov	a,#0x1A
   3CF2 2D                 3385 	add	a,r5
   3CF3 F5 82              3386 	mov	dpl,a
   3CF5 E4                 3387 	clr	a
   3CF6 3E                 3388 	addc	a,r6
   3CF7 F5 83              3389 	mov	dph,a
   3CF9 E0                 3390 	movx	a,@dptr
   3CFA 90 A0 0F           3391 	mov	dptr,#(_DTX_REG1 + 0x0003)
   3CFD 54 1F              3392 	anl	a,#0x1f
   3CFF F5 F0              3393 	mov	b,a
   3D01 E0                 3394 	movx	a,@dptr
   3D02 54 E0              3395 	anl	a,#0xe0
   3D04 45 F0              3396 	orl	a,b
   3D06 F0                 3397 	movx	@dptr,a
                           3398 ;	../../shared/src/spd_ctrl.c:346: reg_LCPLLCLK_DIV2_SEL = lc_speedtable[fbck][rate][spdoft_lcpllclk_div2_sel];
   3D07 74 E0              3399 	mov	a,#(_lc_speedtable >> 8)
   3D09 2C                 3400 	add	a,r4
   3D0A FC                 3401 	mov	r4,a
   3D0B EA                 3402 	mov	a,r2
   3D0C 2B                 3403 	add	a,r3
   3D0D FA                 3404 	mov	r2,a
   3D0E E4                 3405 	clr	a
   3D0F 3C                 3406 	addc	a,r4
   3D10 FD                 3407 	mov	r5,a
   3D11 74 08              3408 	mov	a,#0x08
   3D13 2A                 3409 	add	a,r2
   3D14 F5 82              3410 	mov	dpl,a
   3D16 E4                 3411 	clr	a
   3D17 3D                 3412 	addc	a,r5
   3D18 F5 83              3413 	mov	dph,a
   3D1A E0                 3414 	movx	a,@dptr
   3D1B 90 83 3C           3415 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   3D1E 13                 3416 	rrc	a
   3D1F E0                 3417 	movx	a,@dptr
   3D20 92 E1              3418 	mov	acc.1,c
   3D22 F0                 3419 	movx	@dptr,a
                           3420 ;	../../shared/src/spd_ctrl.c:347: if(mcuid==master_mcu && !use_ring_pll && phy_mode==PCIE) {
   3D23 90 22 00           3421 	mov	dptr,#_MCU_CONTROL_LANE
   3D26 E0                 3422 	movx	a,@dptr
   3D27 FA                 3423 	mov	r2,a
   3D28 90 E6 50           3424 	mov	dptr,#_MCU_CONFIG
   3D2B E0                 3425 	movx	a,@dptr
   3D2C FB                 3426 	mov	r3,a
   3D2D EA                 3427 	mov	a,r2
   3D2E B5 03 1C           3428 	cjne	a,ar3,00112$
   3D31 20 10 19           3429 	jb	_use_ring_pll,00112$
   3D34 90 A3 16           3430 	mov	dptr,#(_SYSTEM + 0x0002)
   3D37 E0                 3431 	movx	a,@dptr
   3D38 54 07              3432 	anl	a,#0x07
   3D3A FA                 3433 	mov	r2,a
   3D3B BA 03 0F           3434 	cjne	r2,#0x03,00112$
                           3435 ;	../../shared/src/spd_ctrl.c:348: if (gen_tx == 4)
   3D3E 90 66 15           3436 	mov	dptr,#_gen_tx
   3D41 E0                 3437 	movx	a,@dptr
   3D42 FA                 3438 	mov	r2,a
   3D43 BA 04 07           3439 	cjne	r2,#0x04,00112$
                           3440 ;	../../shared/src/spd_ctrl.c:349: reg_LCPLLCLK_DIV2_SEL = 1;
   3D46 90 83 3C           3441 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   3D49 E0                 3442 	movx	a,@dptr
   3D4A 44 02              3443 	orl	a,#0x02
   3D4C F0                 3444 	movx	@dptr,a
   3D4D                    3445 00112$:
                           3446 ;	../../shared/src/spd_ctrl.c:353: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   3D4D 90 22 B4           3447 	mov	dptr,#_MCU_DEBUG0_LANE
   3D50 74 39              3448 	mov	a,#0x39
   3D52 F0                 3449 	movx	@dptr,a
   3D53 85 18 81           3450 	mov	sp,_bp
   3D56 D0 18              3451 	pop	_bp
   3D58 22                 3452 	ret
                           3453 ;------------------------------------------------------------
                           3454 ;Allocation info for local variables in function 'loadspeedtbl_ringpll'
                           3455 ;------------------------------------------------------------
                           3456 ;rate                      Allocated to registers r2 
                           3457 ;temp                      Allocated to stack - offset 1
                           3458 ;fbck                      Allocated to registers r3 
                           3459 ;ck1g                      Allocated to registers r4 
                           3460 ;rate_no                   Allocated to registers r3 
                           3461 ;sloc0                     Allocated to stack - offset 3
                           3462 ;------------------------------------------------------------
                           3463 ;	../../shared/src/spd_ctrl.c:356: void loadspeedtbl_ringpll(uint8_t rate) {
                           3464 ;	-----------------------------------------
                           3465 ;	 function loadspeedtbl_ringpll
                           3466 ;	-----------------------------------------
   3D59                    3467 _loadspeedtbl_ringpll:
   3D59 C0 18              3468 	push	_bp
   3D5B E5 81              3469 	mov	a,sp
   3D5D F5 18              3470 	mov	_bp,a
   3D5F 24 04              3471 	add	a,#0x04
   3D61 F5 81              3472 	mov	sp,a
   3D63 AA 82              3473 	mov	r2,dpl
                           3474 ;	../../shared/src/spd_ctrl.c:360: fbck = fbck_sel_ring;
   3D65 90 A3 18           3475 	mov	dptr,#_PM_CMN_REG1
   3D68 E0                 3476 	movx	a,@dptr
   3D69 03                 3477 	rr	a
   3D6A 03                 3478 	rr	a
   3D6B 54 01              3479 	anl	a,#0x01
   3D6D FB                 3480 	mov	r3,a
                           3481 ;	../../shared/src/spd_ctrl.c:361: reg_MCU_DEBUG0_LANE_7_0 = 0x36;
   3D6E 90 22 B4           3482 	mov	dptr,#_MCU_DEBUG0_LANE
   3D71 74 36              3483 	mov	a,#0x36
   3D73 F0                 3484 	movx	@dptr,a
                           3485 ;	../../shared/src/spd_ctrl.c:366: ck1g = ring_use_250m;
   3D74 A2 13              3486 	mov	c,_ring_use_250m
   3D76 E4                 3487 	clr	a
   3D77 33                 3488 	rlc	a
   3D78 FC                 3489 	mov	r4,a
                           3490 ;	../../shared/src/spd_ctrl.c:368: if(phy_mode==SERDES) rate = gen_pll_rate;
   3D79 90 A3 16           3491 	mov	dptr,#(_SYSTEM + 0x0002)
   3D7C E0                 3492 	movx	a,@dptr
   3D7D 54 07              3493 	anl	a,#0x07
   3D7F FD                 3494 	mov	r5,a
   3D80 BD 04 05           3495 	cjne	r5,#0x04,00102$
   3D83 90 67 8C           3496 	mov	dptr,#_gen_pll_rate
   3D86 E0                 3497 	movx	a,@dptr
   3D87 FA                 3498 	mov	r2,a
   3D88                    3499 00102$:
                           3500 ;	../../shared/src/spd_ctrl.c:370: rate_no					= ring_speedtable[ck1g][fbck][rate][spdoft_pll_rate_sel_ring];
   3D88 7D 00              3501 	mov	r5,#0x00
   3D8A C0 02              3502 	push	ar2
   3D8C C0 03              3503 	push	ar3
   3D8E C0 04              3504 	push	ar4
   3D90 C0 05              3505 	push	ar5
   3D92 90 01 20           3506 	mov	dptr,#0x0120
   3D95 12 7C E3           3507 	lcall	__mulint
   3D98 AC 82              3508 	mov	r4,dpl
   3D9A AD 83              3509 	mov	r5,dph
   3D9C 15 81              3510 	dec	sp
   3D9E 15 81              3511 	dec	sp
   3DA0 D0 03              3512 	pop	ar3
   3DA2 D0 02              3513 	pop	ar2
   3DA4 EC                 3514 	mov	a,r4
   3DA5 24 C0              3515 	add	a,#_ring_speedtable
   3DA7 FE                 3516 	mov	r6,a
   3DA8 ED                 3517 	mov	a,r5
   3DA9 34 E1              3518 	addc	a,#(_ring_speedtable >> 8)
   3DAB FF                 3519 	mov	r7,a
   3DAC E5 18              3520 	mov	a,_bp
   3DAE 24 03              3521 	add	a,#0x03
   3DB0 F8                 3522 	mov	r0,a
   3DB1 EB                 3523 	mov	a,r3
   3DB2 75 F0 90           3524 	mov	b,#0x90
   3DB5 A4                 3525 	mul	ab
   3DB6 F6                 3526 	mov	@r0,a
   3DB7 08                 3527 	inc	r0
   3DB8 A6 F0              3528 	mov	@r0,b
   3DBA E5 18              3529 	mov	a,_bp
   3DBC 24 03              3530 	add	a,#0x03
   3DBE F8                 3531 	mov	r0,a
   3DBF E6                 3532 	mov	a,@r0
   3DC0 2E                 3533 	add	a,r6
   3DC1 FE                 3534 	mov	r6,a
   3DC2 08                 3535 	inc	r0
   3DC3 E6                 3536 	mov	a,@r0
   3DC4 3F                 3537 	addc	a,r7
   3DC5 FF                 3538 	mov	r7,a
   3DC6 EA                 3539 	mov	a,r2
   3DC7 75 F0 24           3540 	mov	b,#0x24
   3DCA A4                 3541 	mul	ab
   3DCB FA                 3542 	mov	r2,a
   3DCC 2E                 3543 	add	a,r6
   3DCD F5 82              3544 	mov	dpl,a
   3DCF E4                 3545 	clr	a
   3DD0 3F                 3546 	addc	a,r7
   3DD1 F5 83              3547 	mov	dph,a
   3DD3 E0                 3548 	movx	a,@dptr
   3DD4 FB                 3549 	mov	r3,a
                           3550 ;	../../shared/src/spd_ctrl.c:371: if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
   3DD5 74 01              3551 	mov	a,#0x01
   3DD7 B5 03 00           3552 	cjne	a,ar3,00116$
   3DDA                    3553 00116$:
   3DDA 40 0A              3554 	jc	00103$
   3DDC 90 A3 16           3555 	mov	dptr,#(_SYSTEM + 0x0002)
   3DDF E0                 3556 	movx	a,@dptr
   3DE0 54 07              3557 	anl	a,#0x07
   3DE2 FE                 3558 	mov	r6,a
   3DE3 BE 04 02           3559 	cjne	r6,#0x04,00104$
   3DE6                    3560 00103$:
   3DE6 7B 00              3561 	mov	r3,#0x00
   3DE8                    3562 00104$:
                           3563 ;	../../shared/src/spd_ctrl.c:372: PLL_RATE_SEL_RING = rate_no;
   3DE8 90 E6 1F           3564 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   3DEB EB                 3565 	mov	a,r3
   3DEC F0                 3566 	movx	@dptr,a
                           3567 ;	../../shared/src/spd_ctrl.c:377: reg_PLL_REFDIV_RING_3_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_refdiv_ring];
   3DED EC                 3568 	mov	a,r4
   3DEE 24 C0              3569 	add	a,#_ring_speedtable
   3DF0 FB                 3570 	mov	r3,a
   3DF1 ED                 3571 	mov	a,r5
   3DF2 34 E1              3572 	addc	a,#(_ring_speedtable >> 8)
   3DF4 FE                 3573 	mov	r6,a
   3DF5 E5 18              3574 	mov	a,_bp
   3DF7 24 03              3575 	add	a,#0x03
   3DF9 F8                 3576 	mov	r0,a
   3DFA E6                 3577 	mov	a,@r0
   3DFB 2B                 3578 	add	a,r3
   3DFC FB                 3579 	mov	r3,a
   3DFD 08                 3580 	inc	r0
   3DFE E6                 3581 	mov	a,@r0
   3DFF 3E                 3582 	addc	a,r6
   3E00 FE                 3583 	mov	r6,a
   3E01 EA                 3584 	mov	a,r2
   3E02 2B                 3585 	add	a,r3
   3E03 FB                 3586 	mov	r3,a
   3E04 E4                 3587 	clr	a
   3E05 3E                 3588 	addc	a,r6
   3E06 FE                 3589 	mov	r6,a
   3E07 8B 82              3590 	mov	dpl,r3
   3E09 8E 83              3591 	mov	dph,r6
   3E0B A3                 3592 	inc	dptr
   3E0C A3                 3593 	inc	dptr
   3E0D A3                 3594 	inc	dptr
   3E0E E0                 3595 	movx	a,@dptr
   3E0F 90 82 F0           3596 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   3E12 C4                 3597 	swap	a
   3E13 03                 3598 	rr	a
   3E14 54 78              3599 	anl	a,#(0xf8&0x78)
   3E16 F5 F0              3600 	mov	b,a
   3E18 E0                 3601 	movx	a,@dptr
   3E19 54 87              3602 	anl	a,#0x87
   3E1B 45 F0              3603 	orl	a,b
   3E1D F0                 3604 	movx	@dptr,a
                           3605 ;	../../shared/src/spd_ctrl.c:379: if(reg_RING_REF_DIV_SEL==1) {
   3E1E 90 82 D4           3606 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   3E21 E0                 3607 	movx	a,@dptr
   3E22 23                 3608 	rl	a
   3E23 54 01              3609 	anl	a,#0x01
   3E25 FB                 3610 	mov	r3,a
   3E26 BB 01 02           3611 	cjne	r3,#0x01,00120$
   3E29 80 03              3612 	sjmp	00121$
   3E2B                    3613 00120$:
   3E2B 02 3E E6           3614 	ljmp	00107$
   3E2E                    3615 00121$:
                           3616 ;	../../shared/src/spd_ctrl.c:386: reg_PLL_FBDIV_RING_7_0 			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring_fbck];
   3E2E EC                 3617 	mov	a,r4
   3E2F 24 C0              3618 	add	a,#_ring_speedtable
   3E31 FB                 3619 	mov	r3,a
   3E32 ED                 3620 	mov	a,r5
   3E33 34 E1              3621 	addc	a,#(_ring_speedtable >> 8)
   3E35 FE                 3622 	mov	r6,a
   3E36 E5 18              3623 	mov	a,_bp
   3E38 24 03              3624 	add	a,#0x03
   3E3A F8                 3625 	mov	r0,a
   3E3B E6                 3626 	mov	a,@r0
   3E3C 2B                 3627 	add	a,r3
   3E3D FB                 3628 	mov	r3,a
   3E3E 08                 3629 	inc	r0
   3E3F E6                 3630 	mov	a,@r0
   3E40 3E                 3631 	addc	a,r6
   3E41 FE                 3632 	mov	r6,a
   3E42 EA                 3633 	mov	a,r2
   3E43 2B                 3634 	add	a,r3
   3E44 FB                 3635 	mov	r3,a
   3E45 E4                 3636 	clr	a
   3E46 3E                 3637 	addc	a,r6
   3E47 FE                 3638 	mov	r6,a
   3E48 74 06              3639 	mov	a,#0x06
   3E4A 2B                 3640 	add	a,r3
   3E4B F5 82              3641 	mov	dpl,a
   3E4D E4                 3642 	clr	a
   3E4E 3E                 3643 	addc	a,r6
   3E4F F5 83              3644 	mov	dph,a
   3E51 E0                 3645 	movx	a,@dptr
   3E52 90 82 F4           3646 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   3E55 F0                 3647 	movx	@dptr,a
                           3648 ;	../../shared/src/spd_ctrl.c:387: reg_PLL_FBDIV_RING_9_8			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring_fbck+1];
   3E56 EC                 3649 	mov	a,r4
   3E57 24 C0              3650 	add	a,#_ring_speedtable
   3E59 FB                 3651 	mov	r3,a
   3E5A ED                 3652 	mov	a,r5
   3E5B 34 E1              3653 	addc	a,#(_ring_speedtable >> 8)
   3E5D FE                 3654 	mov	r6,a
   3E5E E5 18              3655 	mov	a,_bp
   3E60 24 03              3656 	add	a,#0x03
   3E62 F8                 3657 	mov	r0,a
   3E63 E6                 3658 	mov	a,@r0
   3E64 2B                 3659 	add	a,r3
   3E65 FB                 3660 	mov	r3,a
   3E66 08                 3661 	inc	r0
   3E67 E6                 3662 	mov	a,@r0
   3E68 3E                 3663 	addc	a,r6
   3E69 FE                 3664 	mov	r6,a
   3E6A EA                 3665 	mov	a,r2
   3E6B 2B                 3666 	add	a,r3
   3E6C FB                 3667 	mov	r3,a
   3E6D E4                 3668 	clr	a
   3E6E 3E                 3669 	addc	a,r6
   3E6F FE                 3670 	mov	r6,a
   3E70 74 07              3671 	mov	a,#0x07
   3E72 2B                 3672 	add	a,r3
   3E73 F5 82              3673 	mov	dpl,a
   3E75 E4                 3674 	clr	a
   3E76 3E                 3675 	addc	a,r6
   3E77 F5 83              3676 	mov	dph,a
   3E79 E0                 3677 	movx	a,@dptr
   3E7A 90 82 F0           3678 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   3E7D 25 E0              3679 	add	a,acc
   3E7F 54 06              3680 	anl	a,#0x06
   3E81 F5 F0              3681 	mov	b,a
   3E83 E0                 3682 	movx	a,@dptr
   3E84 54 F9              3683 	anl	a,#0xf9
   3E86 45 F0              3684 	orl	a,b
   3E88 F0                 3685 	movx	@dptr,a
                           3686 ;	../../shared/src/spd_ctrl.c:388: reg_INIT_TXFOFFS_RING_9_0_b0		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring_fbck];
   3E89 EC                 3687 	mov	a,r4
   3E8A 24 C0              3688 	add	a,#_ring_speedtable
   3E8C FB                 3689 	mov	r3,a
   3E8D ED                 3690 	mov	a,r5
   3E8E 34 E1              3691 	addc	a,#(_ring_speedtable >> 8)
   3E90 FE                 3692 	mov	r6,a
   3E91 E5 18              3693 	mov	a,_bp
   3E93 24 03              3694 	add	a,#0x03
   3E95 F8                 3695 	mov	r0,a
   3E96 E6                 3696 	mov	a,@r0
   3E97 2B                 3697 	add	a,r3
   3E98 FB                 3698 	mov	r3,a
   3E99 08                 3699 	inc	r0
   3E9A E6                 3700 	mov	a,@r0
   3E9B 3E                 3701 	addc	a,r6
   3E9C FE                 3702 	mov	r6,a
   3E9D EA                 3703 	mov	a,r2
   3E9E 2B                 3704 	add	a,r3
   3E9F FB                 3705 	mov	r3,a
   3EA0 E4                 3706 	clr	a
   3EA1 3E                 3707 	addc	a,r6
   3EA2 FE                 3708 	mov	r6,a
   3EA3 74 15              3709 	mov	a,#0x15
   3EA5 2B                 3710 	add	a,r3
   3EA6 F5 82              3711 	mov	dpl,a
   3EA8 E4                 3712 	clr	a
   3EA9 3E                 3713 	addc	a,r6
   3EAA F5 83              3714 	mov	dph,a
   3EAC E0                 3715 	movx	a,@dptr
   3EAD 90 A0 10           3716 	mov	dptr,#_DTX_REG2
   3EB0 F0                 3717 	movx	@dptr,a
                           3718 ;	../../shared/src/spd_ctrl.c:389: reg_INIT_TXFOFFS_RING_9_0_b1		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring_fbck+1];
   3EB1 EC                 3719 	mov	a,r4
   3EB2 24 C0              3720 	add	a,#_ring_speedtable
   3EB4 FB                 3721 	mov	r3,a
   3EB5 ED                 3722 	mov	a,r5
   3EB6 34 E1              3723 	addc	a,#(_ring_speedtable >> 8)
   3EB8 FE                 3724 	mov	r6,a
   3EB9 E5 18              3725 	mov	a,_bp
   3EBB 24 03              3726 	add	a,#0x03
   3EBD F8                 3727 	mov	r0,a
   3EBE E6                 3728 	mov	a,@r0
   3EBF 2B                 3729 	add	a,r3
   3EC0 FB                 3730 	mov	r3,a
   3EC1 08                 3731 	inc	r0
   3EC2 E6                 3732 	mov	a,@r0
   3EC3 3E                 3733 	addc	a,r6
   3EC4 FE                 3734 	mov	r6,a
   3EC5 EA                 3735 	mov	a,r2
   3EC6 2B                 3736 	add	a,r3
   3EC7 FB                 3737 	mov	r3,a
   3EC8 E4                 3738 	clr	a
   3EC9 3E                 3739 	addc	a,r6
   3ECA FE                 3740 	mov	r6,a
   3ECB 74 16              3741 	mov	a,#0x16
   3ECD 2B                 3742 	add	a,r3
   3ECE F5 82              3743 	mov	dpl,a
   3ED0 E4                 3744 	clr	a
   3ED1 3E                 3745 	addc	a,r6
   3ED2 F5 83              3746 	mov	dph,a
   3ED4 E0                 3747 	movx	a,@dptr
   3ED5 FB                 3748 	mov	r3,a
   3ED6 90 A0 11           3749 	mov	dptr,#(_DTX_REG2 + 0x0001)
   3ED9 54 03              3750 	anl	a,#0x03
   3EDB F5 F0              3751 	mov	b,a
   3EDD E0                 3752 	movx	a,@dptr
   3EDE 54 FC              3753 	anl	a,#0xfc
   3EE0 45 F0              3754 	orl	a,b
   3EE2 F0                 3755 	movx	@dptr,a
   3EE3 02 3F 9A           3756 	ljmp	00108$
   3EE6                    3757 00107$:
                           3758 ;	../../shared/src/spd_ctrl.c:399: reg_PLL_FBDIV_RING_7_0 			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring];
   3EE6 EC                 3759 	mov	a,r4
   3EE7 24 C0              3760 	add	a,#_ring_speedtable
   3EE9 FB                 3761 	mov	r3,a
   3EEA ED                 3762 	mov	a,r5
   3EEB 34 E1              3763 	addc	a,#(_ring_speedtable >> 8)
   3EED FE                 3764 	mov	r6,a
   3EEE E5 18              3765 	mov	a,_bp
   3EF0 24 03              3766 	add	a,#0x03
   3EF2 F8                 3767 	mov	r0,a
   3EF3 E6                 3768 	mov	a,@r0
   3EF4 2B                 3769 	add	a,r3
   3EF5 FB                 3770 	mov	r3,a
   3EF6 08                 3771 	inc	r0
   3EF7 E6                 3772 	mov	a,@r0
   3EF8 3E                 3773 	addc	a,r6
   3EF9 FE                 3774 	mov	r6,a
   3EFA EA                 3775 	mov	a,r2
   3EFB 2B                 3776 	add	a,r3
   3EFC FB                 3777 	mov	r3,a
   3EFD E4                 3778 	clr	a
   3EFE 3E                 3779 	addc	a,r6
   3EFF FE                 3780 	mov	r6,a
   3F00 8B 82              3781 	mov	dpl,r3
   3F02 8E 83              3782 	mov	dph,r6
   3F04 A3                 3783 	inc	dptr
   3F05 A3                 3784 	inc	dptr
   3F06 A3                 3785 	inc	dptr
   3F07 A3                 3786 	inc	dptr
   3F08 E0                 3787 	movx	a,@dptr
   3F09 90 82 F4           3788 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   3F0C F0                 3789 	movx	@dptr,a
                           3790 ;	../../shared/src/spd_ctrl.c:400: reg_PLL_FBDIV_RING_9_8			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring+1];
   3F0D EC                 3791 	mov	a,r4
   3F0E 24 C0              3792 	add	a,#_ring_speedtable
   3F10 FB                 3793 	mov	r3,a
   3F11 ED                 3794 	mov	a,r5
   3F12 34 E1              3795 	addc	a,#(_ring_speedtable >> 8)
   3F14 FE                 3796 	mov	r6,a
   3F15 E5 18              3797 	mov	a,_bp
   3F17 24 03              3798 	add	a,#0x03
   3F19 F8                 3799 	mov	r0,a
   3F1A E6                 3800 	mov	a,@r0
   3F1B 2B                 3801 	add	a,r3
   3F1C FB                 3802 	mov	r3,a
   3F1D 08                 3803 	inc	r0
   3F1E E6                 3804 	mov	a,@r0
   3F1F 3E                 3805 	addc	a,r6
   3F20 FE                 3806 	mov	r6,a
   3F21 EA                 3807 	mov	a,r2
   3F22 2B                 3808 	add	a,r3
   3F23 FB                 3809 	mov	r3,a
   3F24 E4                 3810 	clr	a
   3F25 3E                 3811 	addc	a,r6
   3F26 FE                 3812 	mov	r6,a
   3F27 8B 82              3813 	mov	dpl,r3
   3F29 8E 83              3814 	mov	dph,r6
   3F2B A3                 3815 	inc	dptr
   3F2C A3                 3816 	inc	dptr
   3F2D A3                 3817 	inc	dptr
   3F2E A3                 3818 	inc	dptr
   3F2F A3                 3819 	inc	dptr
   3F30 E0                 3820 	movx	a,@dptr
   3F31 90 82 F0           3821 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   3F34 25 E0              3822 	add	a,acc
   3F36 54 06              3823 	anl	a,#0x06
   3F38 F5 F0              3824 	mov	b,a
   3F3A E0                 3825 	movx	a,@dptr
   3F3B 54 F9              3826 	anl	a,#0xf9
   3F3D 45 F0              3827 	orl	a,b
   3F3F F0                 3828 	movx	@dptr,a
                           3829 ;	../../shared/src/spd_ctrl.c:401: reg_INIT_TXFOFFS_RING_9_0_b0		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring];
   3F40 EC                 3830 	mov	a,r4
   3F41 24 C0              3831 	add	a,#_ring_speedtable
   3F43 FB                 3832 	mov	r3,a
   3F44 ED                 3833 	mov	a,r5
   3F45 34 E1              3834 	addc	a,#(_ring_speedtable >> 8)
   3F47 FE                 3835 	mov	r6,a
   3F48 E5 18              3836 	mov	a,_bp
   3F4A 24 03              3837 	add	a,#0x03
   3F4C F8                 3838 	mov	r0,a
   3F4D E6                 3839 	mov	a,@r0
   3F4E 2B                 3840 	add	a,r3
   3F4F FB                 3841 	mov	r3,a
   3F50 08                 3842 	inc	r0
   3F51 E6                 3843 	mov	a,@r0
   3F52 3E                 3844 	addc	a,r6
   3F53 FE                 3845 	mov	r6,a
   3F54 EA                 3846 	mov	a,r2
   3F55 2B                 3847 	add	a,r3
   3F56 FB                 3848 	mov	r3,a
   3F57 E4                 3849 	clr	a
   3F58 3E                 3850 	addc	a,r6
   3F59 FE                 3851 	mov	r6,a
   3F5A 74 13              3852 	mov	a,#0x13
   3F5C 2B                 3853 	add	a,r3
   3F5D F5 82              3854 	mov	dpl,a
   3F5F E4                 3855 	clr	a
   3F60 3E                 3856 	addc	a,r6
   3F61 F5 83              3857 	mov	dph,a
   3F63 E0                 3858 	movx	a,@dptr
   3F64 90 A0 10           3859 	mov	dptr,#_DTX_REG2
   3F67 F0                 3860 	movx	@dptr,a
                           3861 ;	../../shared/src/spd_ctrl.c:402: reg_INIT_TXFOFFS_RING_9_0_b1		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring+1];
   3F68 EC                 3862 	mov	a,r4
   3F69 24 C0              3863 	add	a,#_ring_speedtable
   3F6B FB                 3864 	mov	r3,a
   3F6C ED                 3865 	mov	a,r5
   3F6D 34 E1              3866 	addc	a,#(_ring_speedtable >> 8)
   3F6F FE                 3867 	mov	r6,a
   3F70 E5 18              3868 	mov	a,_bp
   3F72 24 03              3869 	add	a,#0x03
   3F74 F8                 3870 	mov	r0,a
   3F75 E6                 3871 	mov	a,@r0
   3F76 2B                 3872 	add	a,r3
   3F77 FB                 3873 	mov	r3,a
   3F78 08                 3874 	inc	r0
   3F79 E6                 3875 	mov	a,@r0
   3F7A 3E                 3876 	addc	a,r6
   3F7B FE                 3877 	mov	r6,a
   3F7C EA                 3878 	mov	a,r2
   3F7D 2B                 3879 	add	a,r3
   3F7E FB                 3880 	mov	r3,a
   3F7F E4                 3881 	clr	a
   3F80 3E                 3882 	addc	a,r6
   3F81 FE                 3883 	mov	r6,a
   3F82 74 14              3884 	mov	a,#0x14
   3F84 2B                 3885 	add	a,r3
   3F85 F5 82              3886 	mov	dpl,a
   3F87 E4                 3887 	clr	a
   3F88 3E                 3888 	addc	a,r6
   3F89 F5 83              3889 	mov	dph,a
   3F8B E0                 3890 	movx	a,@dptr
   3F8C FB                 3891 	mov	r3,a
   3F8D 90 A0 11           3892 	mov	dptr,#(_DTX_REG2 + 0x0001)
   3F90 54 03              3893 	anl	a,#0x03
   3F92 F5 F0              3894 	mov	b,a
   3F94 E0                 3895 	movx	a,@dptr
   3F95 54 FC              3896 	anl	a,#0xfc
   3F97 45 F0              3897 	orl	a,b
   3F99 F0                 3898 	movx	@dptr,a
   3F9A                    3899 00108$:
                           3900 ;	../../shared/src/spd_ctrl.c:406: cmx_G_INTPI_RING_7_0				= ring_speedtable[ck1g][fbck][rate][spdoft_intpi_ring];
   3F9A EC                 3901 	mov	a,r4
   3F9B 24 C0              3902 	add	a,#_ring_speedtable
   3F9D FB                 3903 	mov	r3,a
   3F9E ED                 3904 	mov	a,r5
   3F9F 34 E1              3905 	addc	a,#(_ring_speedtable >> 8)
   3FA1 FE                 3906 	mov	r6,a
   3FA2 E5 18              3907 	mov	a,_bp
   3FA4 24 03              3908 	add	a,#0x03
   3FA6 F8                 3909 	mov	r0,a
   3FA7 E6                 3910 	mov	a,@r0
   3FA8 2B                 3911 	add	a,r3
   3FA9 FB                 3912 	mov	r3,a
   3FAA 08                 3913 	inc	r0
   3FAB E6                 3914 	mov	a,@r0
   3FAC 3E                 3915 	addc	a,r6
   3FAD FE                 3916 	mov	r6,a
   3FAE EA                 3917 	mov	a,r2
   3FAF 2B                 3918 	add	a,r3
   3FB0 FB                 3919 	mov	r3,a
   3FB1 E4                 3920 	clr	a
   3FB2 3E                 3921 	addc	a,r6
   3FB3 FE                 3922 	mov	r6,a
   3FB4 74 0D              3923 	mov	a,#0x0D
   3FB6 2B                 3924 	add	a,r3
   3FB7 F5 82              3925 	mov	dpl,a
   3FB9 E4                 3926 	clr	a
   3FBA 3E                 3927 	addc	a,r6
   3FBB F5 83              3928 	mov	dph,a
   3FBD E0                 3929 	movx	a,@dptr
   3FBE 90 E6 57           3930 	mov	dptr,#(_CAL_DATA1 + 0x0003)
   3FC1 F0                 3931 	movx	@dptr,a
                           3932 ;	../../shared/src/spd_ctrl.c:407: reg_INTPI_LCPLL_3_0 = cmx_G_INTPI_LCPLL_7_0;
   3FC2 90 E6 56           3933 	mov	dptr,#(_CAL_DATA1 + 0x0002)
   3FC5 E0                 3934 	movx	a,@dptr
   3FC6 90 82 0C           3935 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   3FC9 C4                 3936 	swap	a
   3FCA 54 F0              3937 	anl	a,#(0xf0&0xf0)
   3FCC F5 F0              3938 	mov	b,a
   3FCE E0                 3939 	movx	a,@dptr
   3FCF 54 0F              3940 	anl	a,#0x0f
   3FD1 45 F0              3941 	orl	a,b
   3FD3 F0                 3942 	movx	@dptr,a
                           3943 ;	../../shared/src/spd_ctrl.c:408: reg_INTPI_RING_3_0 = cmx_G_INTPI_RING_7_0;
   3FD4 90 E6 57           3944 	mov	dptr,#(_CAL_DATA1 + 0x0003)
   3FD7 E0                 3945 	movx	a,@dptr
   3FD8 90 82 0C           3946 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   3FDB 54 0F              3947 	anl	a,#0x0f
   3FDD F5 F0              3948 	mov	b,a
   3FDF E0                 3949 	movx	a,@dptr
   3FE0 54 F0              3950 	anl	a,#0xf0
   3FE2 45 F0              3951 	orl	a,b
   3FE4 F0                 3952 	movx	@dptr,a
                           3953 ;	../../shared/src/spd_ctrl.c:409: reg_TX_INTPR_RING_1_0				= ring_speedtable[ck1g][fbck][rate][spdoft_tx_intpr_ring];
   3FE5 EC                 3954 	mov	a,r4
   3FE6 24 C0              3955 	add	a,#_ring_speedtable
   3FE8 FB                 3956 	mov	r3,a
   3FE9 ED                 3957 	mov	a,r5
   3FEA 34 E1              3958 	addc	a,#(_ring_speedtable >> 8)
   3FEC FE                 3959 	mov	r6,a
   3FED E5 18              3960 	mov	a,_bp
   3FEF 24 03              3961 	add	a,#0x03
   3FF1 F8                 3962 	mov	r0,a
   3FF2 E6                 3963 	mov	a,@r0
   3FF3 2B                 3964 	add	a,r3
   3FF4 FB                 3965 	mov	r3,a
   3FF5 08                 3966 	inc	r0
   3FF6 E6                 3967 	mov	a,@r0
   3FF7 3E                 3968 	addc	a,r6
   3FF8 FE                 3969 	mov	r6,a
   3FF9 EA                 3970 	mov	a,r2
   3FFA 2B                 3971 	add	a,r3
   3FFB FB                 3972 	mov	r3,a
   3FFC E4                 3973 	clr	a
   3FFD 3E                 3974 	addc	a,r6
   3FFE FE                 3975 	mov	r6,a
   3FFF 74 0E              3976 	mov	a,#0x0E
   4001 2B                 3977 	add	a,r3
   4002 F5 82              3978 	mov	dpl,a
   4004 E4                 3979 	clr	a
   4005 3E                 3980 	addc	a,r6
   4006 F5 83              3981 	mov	dph,a
   4008 E0                 3982 	movx	a,@dptr
   4009 90 83 10           3983 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   400C C4                 3984 	swap	a
   400D 54 30              3985 	anl	a,#(0xf0&0x30)
   400F F5 F0              3986 	mov	b,a
   4011 E0                 3987 	movx	a,@dptr
   4012 54 CF              3988 	anl	a,#0xcf
   4014 45 F0              3989 	orl	a,b
   4016 F0                 3990 	movx	@dptr,a
                           3991 ;	../../shared/src/spd_ctrl.c:417: reg_ICP_RING_3_0				= ring_speedtable[ck1g][fbck][rate][spdoft_icp_ring];
   4017 EC                 3992 	mov	a,r4
   4018 24 C0              3993 	add	a,#_ring_speedtable
   401A FB                 3994 	mov	r3,a
   401B ED                 3995 	mov	a,r5
   401C 34 E1              3996 	addc	a,#(_ring_speedtable >> 8)
   401E FE                 3997 	mov	r6,a
   401F E5 18              3998 	mov	a,_bp
   4021 24 03              3999 	add	a,#0x03
   4023 F8                 4000 	mov	r0,a
   4024 E6                 4001 	mov	a,@r0
   4025 2B                 4002 	add	a,r3
   4026 FB                 4003 	mov	r3,a
   4027 08                 4004 	inc	r0
   4028 E6                 4005 	mov	a,@r0
   4029 3E                 4006 	addc	a,r6
   402A FE                 4007 	mov	r6,a
   402B EA                 4008 	mov	a,r2
   402C 2B                 4009 	add	a,r3
   402D FB                 4010 	mov	r3,a
   402E E4                 4011 	clr	a
   402F 3E                 4012 	addc	a,r6
   4030 FE                 4013 	mov	r6,a
   4031 74 08              4014 	mov	a,#0x08
   4033 2B                 4015 	add	a,r3
   4034 F5 82              4016 	mov	dpl,a
   4036 E4                 4017 	clr	a
   4037 3E                 4018 	addc	a,r6
   4038 F5 83              4019 	mov	dph,a
   403A E0                 4020 	movx	a,@dptr
   403B 90 82 F8           4021 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_190
   403E C4                 4022 	swap	a
   403F 54 F0              4023 	anl	a,#(0xf0&0xf0)
   4041 F5 F0              4024 	mov	b,a
   4043 E0                 4025 	movx	a,@dptr
   4044 54 0F              4026 	anl	a,#0x0f
   4046 45 F0              4027 	orl	a,b
   4048 F0                 4028 	movx	@dptr,a
                           4029 ;	../../shared/src/spd_ctrl.c:418: reg_PLL_BAND_SEL_RING				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_band_sel_ring];
   4049 EC                 4030 	mov	a,r4
   404A 24 C0              4031 	add	a,#_ring_speedtable
   404C FB                 4032 	mov	r3,a
   404D ED                 4033 	mov	a,r5
   404E 34 E1              4034 	addc	a,#(_ring_speedtable >> 8)
   4050 FE                 4035 	mov	r6,a
   4051 E5 18              4036 	mov	a,_bp
   4053 24 03              4037 	add	a,#0x03
   4055 F8                 4038 	mov	r0,a
   4056 E6                 4039 	mov	a,@r0
   4057 2B                 4040 	add	a,r3
   4058 FB                 4041 	mov	r3,a
   4059 08                 4042 	inc	r0
   405A E6                 4043 	mov	a,@r0
   405B 3E                 4044 	addc	a,r6
   405C FE                 4045 	mov	r6,a
   405D EA                 4046 	mov	a,r2
   405E 2B                 4047 	add	a,r3
   405F FB                 4048 	mov	r3,a
   4060 E4                 4049 	clr	a
   4061 3E                 4050 	addc	a,r6
   4062 FE                 4051 	mov	r6,a
   4063 74 0F              4052 	mov	a,#0x0F
   4065 2B                 4053 	add	a,r3
   4066 F5 82              4054 	mov	dpl,a
   4068 E4                 4055 	clr	a
   4069 3E                 4056 	addc	a,r6
   406A F5 83              4057 	mov	dph,a
   406C E0                 4058 	movx	a,@dptr
   406D 90 83 00           4059 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   4070 13                 4060 	rrc	a
   4071 E0                 4061 	movx	a,@dptr
   4072 92 E2              4062 	mov	acc.2,c
   4074 F0                 4063 	movx	@dptr,a
                           4064 ;	../../shared/src/spd_ctrl.c:419: reg_PLL_LPF_C1_SEL_RING_1_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_c1_sel_ring]; 
   4075 EC                 4065 	mov	a,r4
   4076 24 C0              4066 	add	a,#_ring_speedtable
   4078 FB                 4067 	mov	r3,a
   4079 ED                 4068 	mov	a,r5
   407A 34 E1              4069 	addc	a,#(_ring_speedtable >> 8)
   407C FE                 4070 	mov	r6,a
   407D E5 18              4071 	mov	a,_bp
   407F 24 03              4072 	add	a,#0x03
   4081 F8                 4073 	mov	r0,a
   4082 E6                 4074 	mov	a,@r0
   4083 2B                 4075 	add	a,r3
   4084 FB                 4076 	mov	r3,a
   4085 08                 4077 	inc	r0
   4086 E6                 4078 	mov	a,@r0
   4087 3E                 4079 	addc	a,r6
   4088 FE                 4080 	mov	r6,a
   4089 EA                 4081 	mov	a,r2
   408A 2B                 4082 	add	a,r3
   408B FB                 4083 	mov	r3,a
   408C E4                 4084 	clr	a
   408D 3E                 4085 	addc	a,r6
   408E FE                 4086 	mov	r6,a
   408F 74 10              4087 	mov	a,#0x10
   4091 2B                 4088 	add	a,r3
   4092 F5 82              4089 	mov	dpl,a
   4094 E4                 4090 	clr	a
   4095 3E                 4091 	addc	a,r6
   4096 F5 83              4092 	mov	dph,a
   4098 E0                 4093 	movx	a,@dptr
   4099 90 82 FC           4094 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_191
   409C 03                 4095 	rr	a
   409D 03                 4096 	rr	a
   409E 54 C0              4097 	anl	a,#(0xc0&0xc0)
   40A0 F5 F0              4098 	mov	b,a
   40A2 E0                 4099 	movx	a,@dptr
   40A3 54 3F              4100 	anl	a,#0x3f
   40A5 45 F0              4101 	orl	a,b
   40A7 F0                 4102 	movx	@dptr,a
                           4103 ;	../../shared/src/spd_ctrl.c:420: reg_PLL_LPF_C2_SEL_RING_1_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_c2_sel_ring]; 
   40A8 EC                 4104 	mov	a,r4
   40A9 24 C0              4105 	add	a,#_ring_speedtable
   40AB FB                 4106 	mov	r3,a
   40AC ED                 4107 	mov	a,r5
   40AD 34 E1              4108 	addc	a,#(_ring_speedtable >> 8)
   40AF FE                 4109 	mov	r6,a
   40B0 E5 18              4110 	mov	a,_bp
   40B2 24 03              4111 	add	a,#0x03
   40B4 F8                 4112 	mov	r0,a
   40B5 E6                 4113 	mov	a,@r0
   40B6 2B                 4114 	add	a,r3
   40B7 FB                 4115 	mov	r3,a
   40B8 08                 4116 	inc	r0
   40B9 E6                 4117 	mov	a,@r0
   40BA 3E                 4118 	addc	a,r6
   40BB FE                 4119 	mov	r6,a
   40BC EA                 4120 	mov	a,r2
   40BD 2B                 4121 	add	a,r3
   40BE FB                 4122 	mov	r3,a
   40BF E4                 4123 	clr	a
   40C0 3E                 4124 	addc	a,r6
   40C1 FE                 4125 	mov	r6,a
   40C2 74 11              4126 	mov	a,#0x11
   40C4 2B                 4127 	add	a,r3
   40C5 F5 82              4128 	mov	dpl,a
   40C7 E4                 4129 	clr	a
   40C8 3E                 4130 	addc	a,r6
   40C9 F5 83              4131 	mov	dph,a
   40CB E0                 4132 	movx	a,@dptr
   40CC 90 82 FC           4133 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_191
   40CF C4                 4134 	swap	a
   40D0 54 30              4135 	anl	a,#(0xf0&0x30)
   40D2 F5 F0              4136 	mov	b,a
   40D4 E0                 4137 	movx	a,@dptr
   40D5 54 CF              4138 	anl	a,#0xcf
   40D7 45 F0              4139 	orl	a,b
   40D9 F0                 4140 	movx	@dptr,a
                           4141 ;	../../shared/src/spd_ctrl.c:421: reg_PLL_LPF_R1_SEL_RING_2_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_r1_sel_ring]; 
   40DA EC                 4142 	mov	a,r4
   40DB 24 C0              4143 	add	a,#_ring_speedtable
   40DD FB                 4144 	mov	r3,a
   40DE ED                 4145 	mov	a,r5
   40DF 34 E1              4146 	addc	a,#(_ring_speedtable >> 8)
   40E1 FE                 4147 	mov	r6,a
   40E2 E5 18              4148 	mov	a,_bp
   40E4 24 03              4149 	add	a,#0x03
   40E6 F8                 4150 	mov	r0,a
   40E7 E6                 4151 	mov	a,@r0
   40E8 2B                 4152 	add	a,r3
   40E9 FB                 4153 	mov	r3,a
   40EA 08                 4154 	inc	r0
   40EB E6                 4155 	mov	a,@r0
   40EC 3E                 4156 	addc	a,r6
   40ED FE                 4157 	mov	r6,a
   40EE EA                 4158 	mov	a,r2
   40EF 2B                 4159 	add	a,r3
   40F0 FB                 4160 	mov	r3,a
   40F1 E4                 4161 	clr	a
   40F2 3E                 4162 	addc	a,r6
   40F3 FE                 4163 	mov	r6,a
   40F4 74 12              4164 	mov	a,#0x12
   40F6 2B                 4165 	add	a,r3
   40F7 F5 82              4166 	mov	dpl,a
   40F9 E4                 4167 	clr	a
   40FA 3E                 4168 	addc	a,r6
   40FB F5 83              4169 	mov	dph,a
   40FD E0                 4170 	movx	a,@dptr
   40FE 90 82 F8           4171 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_190
   4101 25 E0              4172 	add	a,acc
   4103 54 0E              4173 	anl	a,#0x0e
   4105 F5 F0              4174 	mov	b,a
   4107 E0                 4175 	movx	a,@dptr
   4108 54 F1              4176 	anl	a,#0xf1
   410A 45 F0              4177 	orl	a,b
   410C F0                 4178 	movx	@dptr,a
                           4179 ;	../../shared/src/spd_ctrl.c:423: temp			= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring+1]; 	temp<<=8;
   410D EC                 4180 	mov	a,r4
   410E 24 C0              4181 	add	a,#_ring_speedtable
   4110 FB                 4182 	mov	r3,a
   4111 ED                 4183 	mov	a,r5
   4112 34 E1              4184 	addc	a,#(_ring_speedtable >> 8)
   4114 FE                 4185 	mov	r6,a
   4115 E5 18              4186 	mov	a,_bp
   4117 24 03              4187 	add	a,#0x03
   4119 F8                 4188 	mov	r0,a
   411A E6                 4189 	mov	a,@r0
   411B 2B                 4190 	add	a,r3
   411C FB                 4191 	mov	r3,a
   411D 08                 4192 	inc	r0
   411E E6                 4193 	mov	a,@r0
   411F 3E                 4194 	addc	a,r6
   4120 FE                 4195 	mov	r6,a
   4121 EA                 4196 	mov	a,r2
   4122 2B                 4197 	add	a,r3
   4123 FB                 4198 	mov	r3,a
   4124 E4                 4199 	clr	a
   4125 3E                 4200 	addc	a,r6
   4126 FE                 4201 	mov	r6,a
   4127 74 0A              4202 	mov	a,#0x0A
   4129 2B                 4203 	add	a,r3
   412A F5 82              4204 	mov	dpl,a
   412C E4                 4205 	clr	a
   412D 3E                 4206 	addc	a,r6
   412E F5 83              4207 	mov	dph,a
   4130 E0                 4208 	movx	a,@dptr
   4131 FB                 4209 	mov	r3,a
   4132 A8 18              4210 	mov	r0,_bp
   4134 08                 4211 	inc	r0
   4135 A6 03              4212 	mov	@r0,ar3
   4137 08                 4213 	inc	r0
   4138 76 00              4214 	mov	@r0,#0x00
   413A A8 18              4215 	mov	r0,_bp
   413C 08                 4216 	inc	r0
   413D E6                 4217 	mov	a,@r0
   413E 08                 4218 	inc	r0
   413F F6                 4219 	mov	@r0,a
   4140 18                 4220 	dec	r0
   4141 76 00              4221 	mov	@r0,#0x00
                           4222 ;	../../shared/src/spd_ctrl.c:424: temp			+= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring];
   4143 EC                 4223 	mov	a,r4
   4144 24 C0              4224 	add	a,#_ring_speedtable
   4146 FF                 4225 	mov	r7,a
   4147 ED                 4226 	mov	a,r5
   4148 34 E1              4227 	addc	a,#(_ring_speedtable >> 8)
   414A FB                 4228 	mov	r3,a
   414B E5 18              4229 	mov	a,_bp
   414D 24 03              4230 	add	a,#0x03
   414F F8                 4231 	mov	r0,a
   4150 E6                 4232 	mov	a,@r0
   4151 2F                 4233 	add	a,r7
   4152 FF                 4234 	mov	r7,a
   4153 08                 4235 	inc	r0
   4154 E6                 4236 	mov	a,@r0
   4155 3B                 4237 	addc	a,r3
   4156 FB                 4238 	mov	r3,a
   4157 EA                 4239 	mov	a,r2
   4158 2F                 4240 	add	a,r7
   4159 FF                 4241 	mov	r7,a
   415A E4                 4242 	clr	a
   415B 3B                 4243 	addc	a,r3
   415C FB                 4244 	mov	r3,a
   415D 74 09              4245 	mov	a,#0x09
   415F 2F                 4246 	add	a,r7
   4160 F5 82              4247 	mov	dpl,a
   4162 E4                 4248 	clr	a
   4163 3B                 4249 	addc	a,r3
   4164 F5 83              4250 	mov	dph,a
   4166 E0                 4251 	movx	a,@dptr
   4167 FB                 4252 	mov	r3,a
   4168 7E 00              4253 	mov	r6,#0x00
   416A A8 18              4254 	mov	r0,_bp
   416C 08                 4255 	inc	r0
   416D EB                 4256 	mov	a,r3
   416E 26                 4257 	add	a,@r0
   416F F6                 4258 	mov	@r0,a
   4170 EE                 4259 	mov	a,r6
   4171 08                 4260 	inc	r0
   4172 36                 4261 	addc	a,@r0
   4173 F6                 4262 	mov	@r0,a
                           4263 ;	../../shared/src/spd_ctrl.c:425: temp <<= FBC_RATIO;
   4174 90 E6 14           4264 	mov	dptr,#_CONTROL_CONFIG4
   4177 E0                 4265 	movx	a,@dptr
   4178 FB                 4266 	mov	r3,a
   4179 8B F0              4267 	mov	b,r3
   417B 05 F0              4268 	inc	b
   417D A8 18              4269 	mov	r0,_bp
   417F 08                 4270 	inc	r0
   4180 80 09              4271 	sjmp	00123$
   4182                    4272 00122$:
   4182 E6                 4273 	mov	a,@r0
   4183 25 E0              4274 	add	a,acc
   4185 F6                 4275 	mov	@r0,a
   4186 08                 4276 	inc	r0
   4187 E6                 4277 	mov	a,@r0
   4188 33                 4278 	rlc	a
   4189 F6                 4279 	mov	@r0,a
   418A 18                 4280 	dec	r0
   418B                    4281 00123$:
   418B D5 F0 F4           4282 	djnz	b,00122$
                           4283 ;	../../shared/src/spd_ctrl.c:426: cmx_PLL_SPEED_THRESH_RING_15_0 = temp;
   418E 90 E6 18           4284 	mov	dptr,#_CONTROL_CONFIG5
   4191 A8 18              4285 	mov	r0,_bp
   4193 08                 4286 	inc	r0
   4194 E6                 4287 	mov	a,@r0
   4195 F0                 4288 	movx	@dptr,a
   4196 A3                 4289 	inc	dptr
   4197 08                 4290 	inc	r0
   4198 E6                 4291 	mov	a,@r0
   4199 F0                 4292 	movx	@dptr,a
                           4293 ;	../../shared/src/spd_ctrl.c:433: reg_SSC_STEP_125PPM_RING_3_0		= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_125ppm_ring];
   419A EC                 4294 	mov	a,r4
   419B 24 C0              4295 	add	a,#_ring_speedtable
   419D FB                 4296 	mov	r3,a
   419E ED                 4297 	mov	a,r5
   419F 34 E1              4298 	addc	a,#(_ring_speedtable >> 8)
   41A1 FE                 4299 	mov	r6,a
   41A2 E5 18              4300 	mov	a,_bp
   41A4 24 03              4301 	add	a,#0x03
   41A6 F8                 4302 	mov	r0,a
   41A7 E6                 4303 	mov	a,@r0
   41A8 2B                 4304 	add	a,r3
   41A9 FB                 4305 	mov	r3,a
   41AA 08                 4306 	inc	r0
   41AB E6                 4307 	mov	a,@r0
   41AC 3E                 4308 	addc	a,r6
   41AD FE                 4309 	mov	r6,a
   41AE EA                 4310 	mov	a,r2
   41AF 2B                 4311 	add	a,r3
   41B0 FB                 4312 	mov	r3,a
   41B1 E4                 4313 	clr	a
   41B2 3E                 4314 	addc	a,r6
   41B3 FE                 4315 	mov	r6,a
   41B4 74 18              4316 	mov	a,#0x18
   41B6 2B                 4317 	add	a,r3
   41B7 F5 82              4318 	mov	dpl,a
   41B9 E4                 4319 	clr	a
   41BA 3E                 4320 	addc	a,r6
   41BB F5 83              4321 	mov	dph,a
   41BD E0                 4322 	movx	a,@dptr
   41BE 90 A0 0C           4323 	mov	dptr,#_DTX_REG1
   41C1 54 0F              4324 	anl	a,#0x0f
   41C3 F5 F0              4325 	mov	b,a
   41C5 E0                 4326 	movx	a,@dptr
   41C6 54 F0              4327 	anl	a,#0xf0
   41C8 45 F0              4328 	orl	a,b
   41CA F0                 4329 	movx	@dptr,a
                           4330 ;	../../shared/src/spd_ctrl.c:434: reg_SSC_M_RING_12_0_b0			= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
   41CB EC                 4331 	mov	a,r4
   41CC 24 C0              4332 	add	a,#_ring_speedtable
   41CE FB                 4333 	mov	r3,a
   41CF ED                 4334 	mov	a,r5
   41D0 34 E1              4335 	addc	a,#(_ring_speedtable >> 8)
   41D2 FE                 4336 	mov	r6,a
   41D3 E5 18              4337 	mov	a,_bp
   41D5 24 03              4338 	add	a,#0x03
   41D7 F8                 4339 	mov	r0,a
   41D8 E6                 4340 	mov	a,@r0
   41D9 2B                 4341 	add	a,r3
   41DA FB                 4342 	mov	r3,a
   41DB 08                 4343 	inc	r0
   41DC E6                 4344 	mov	a,@r0
   41DD 3E                 4345 	addc	a,r6
   41DE FE                 4346 	mov	r6,a
   41DF EA                 4347 	mov	a,r2
   41E0 2B                 4348 	add	a,r3
   41E1 FB                 4349 	mov	r3,a
   41E2 E4                 4350 	clr	a
   41E3 3E                 4351 	addc	a,r6
   41E4 FE                 4352 	mov	r6,a
   41E5 74 19              4353 	mov	a,#0x19
   41E7 2B                 4354 	add	a,r3
   41E8 F5 82              4355 	mov	dpl,a
   41EA E4                 4356 	clr	a
   41EB 3E                 4357 	addc	a,r6
   41EC F5 83              4358 	mov	dph,a
   41EE E0                 4359 	movx	a,@dptr
   41EF 90 A0 16           4360 	mov	dptr,#(_DTX_REG3 + 0x0002)
   41F2 F0                 4361 	movx	@dptr,a
                           4362 ;	../../shared/src/spd_ctrl.c:435: reg_SSC_M_RING_12_0_b1			= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];
   41F3 EC                 4363 	mov	a,r4
   41F4 24 C0              4364 	add	a,#_ring_speedtable
   41F6 FC                 4365 	mov	r4,a
   41F7 ED                 4366 	mov	a,r5
   41F8 34 E1              4367 	addc	a,#(_ring_speedtable >> 8)
   41FA FD                 4368 	mov	r5,a
   41FB E5 18              4369 	mov	a,_bp
   41FD 24 03              4370 	add	a,#0x03
   41FF F8                 4371 	mov	r0,a
   4200 E6                 4372 	mov	a,@r0
   4201 2C                 4373 	add	a,r4
   4202 FC                 4374 	mov	r4,a
   4203 08                 4375 	inc	r0
   4204 E6                 4376 	mov	a,@r0
   4205 3D                 4377 	addc	a,r5
   4206 FD                 4378 	mov	r5,a
   4207 EA                 4379 	mov	a,r2
   4208 2C                 4380 	add	a,r4
   4209 FA                 4381 	mov	r2,a
   420A E4                 4382 	clr	a
   420B 3D                 4383 	addc	a,r5
   420C FB                 4384 	mov	r3,a
   420D 74 1A              4385 	mov	a,#0x1A
   420F 2A                 4386 	add	a,r2
   4210 F5 82              4387 	mov	dpl,a
   4212 E4                 4388 	clr	a
   4213 3B                 4389 	addc	a,r3
   4214 F5 83              4390 	mov	dph,a
   4216 E0                 4391 	movx	a,@dptr
   4217 90 A0 17           4392 	mov	dptr,#(_DTX_REG3 + 0x0003)
   421A 54 1F              4393 	anl	a,#0x1f
   421C F5 F0              4394 	mov	b,a
   421E E0                 4395 	movx	a,@dptr
   421F 54 E0              4396 	anl	a,#0xe0
   4221 45 F0              4397 	orl	a,b
   4223 F0                 4398 	movx	@dptr,a
                           4399 ;	../../shared/src/spd_ctrl.c:438: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   4224 90 22 B4           4400 	mov	dptr,#_MCU_DEBUG0_LANE
   4227 74 39              4401 	mov	a,#0x39
   4229 F0                 4402 	movx	@dptr,a
   422A 85 18 81           4403 	mov	sp,_bp
   422D D0 18              4404 	pop	_bp
   422F 22                 4405 	ret
                           4406 ;------------------------------------------------------------
                           4407 ;Allocation info for local variables in function 'get_gen_memory_index'
                           4408 ;------------------------------------------------------------
                           4409 ;gen                       Allocated to registers r2 
                           4410 ;serdes_gen_tb0            Allocated to stack - offset 1
                           4411 ;serdes_gen_tb1            Allocated to stack - offset 18
                           4412 ;------------------------------------------------------------
                           4413 ;	../../shared/src/spd_ctrl.c:443: uint8_t get_gen_memory_index(uint8_t gen) {
                           4414 ;	-----------------------------------------
                           4415 ;	 function get_gen_memory_index
                           4416 ;	-----------------------------------------
   4230                    4417 _get_gen_memory_index:
   4230 C0 18              4418 	push	_bp
   4232 E5 81              4419 	mov	a,sp
   4234 F5 18              4420 	mov	_bp,a
   4236 24 22              4421 	add	a,#0x22
   4238 F5 81              4422 	mov	sp,a
   423A AA 82              4423 	mov	r2,dpl
                           4424 ;	../../shared/src/spd_ctrl.c:446: uint8_t serdes_gen_tb0[] = { 0, 1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0};
   423C A8 18              4425 	mov	r0,_bp
   423E 08                 4426 	inc	r0
   423F 76 00              4427 	mov	@r0,#0x00
   4241 E8                 4428 	mov	a,r0
   4242 04                 4429 	inc	a
   4243 F9                 4430 	mov	r1,a
   4244 77 01              4431 	mov	@r1,#0x01
   4246 74 02              4432 	mov	a,#0x02
   4248 28                 4433 	add	a,r0
   4249 F9                 4434 	mov	r1,a
   424A 77 02              4435 	mov	@r1,#0x02
   424C 74 03              4436 	mov	a,#0x03
   424E 28                 4437 	add	a,r0
   424F F9                 4438 	mov	r1,a
   4250 77 00              4439 	mov	@r1,#0x00
   4252 74 04              4440 	mov	a,#0x04
   4254 28                 4441 	add	a,r0
   4255 F9                 4442 	mov	r1,a
   4256 77 03              4443 	mov	@r1,#0x03
   4258 74 05              4444 	mov	a,#0x05
   425A 28                 4445 	add	a,r0
   425B F9                 4446 	mov	r1,a
   425C 77 00              4447 	mov	@r1,#0x00
   425E 74 06              4448 	mov	a,#0x06
   4260 28                 4449 	add	a,r0
   4261 F9                 4450 	mov	r1,a
   4262 77 00              4451 	mov	@r1,#0x00
   4264 74 07              4452 	mov	a,#0x07
   4266 28                 4453 	add	a,r0
   4267 F9                 4454 	mov	r1,a
   4268 77 00              4455 	mov	@r1,#0x00
   426A 74 08              4456 	mov	a,#0x08
   426C 28                 4457 	add	a,r0
   426D F9                 4458 	mov	r1,a
   426E 77 00              4459 	mov	@r1,#0x00
   4270 74 09              4460 	mov	a,#0x09
   4272 28                 4461 	add	a,r0
   4273 F9                 4462 	mov	r1,a
   4274 77 00              4463 	mov	@r1,#0x00
   4276 74 0A              4464 	mov	a,#0x0A
   4278 28                 4465 	add	a,r0
   4279 F9                 4466 	mov	r1,a
   427A 77 00              4467 	mov	@r1,#0x00
   427C 74 0B              4468 	mov	a,#0x0B
   427E 28                 4469 	add	a,r0
   427F F9                 4470 	mov	r1,a
   4280 77 00              4471 	mov	@r1,#0x00
   4282 74 0C              4472 	mov	a,#0x0C
   4284 28                 4473 	add	a,r0
   4285 F9                 4474 	mov	r1,a
   4286 77 00              4475 	mov	@r1,#0x00
   4288 74 0D              4476 	mov	a,#0x0D
   428A 28                 4477 	add	a,r0
   428B F9                 4478 	mov	r1,a
   428C 77 04              4479 	mov	@r1,#0x04
   428E 74 0E              4480 	mov	a,#0x0E
   4290 28                 4481 	add	a,r0
   4291 F9                 4482 	mov	r1,a
   4292 77 00              4483 	mov	@r1,#0x00
   4294 74 0F              4484 	mov	a,#0x0F
   4296 28                 4485 	add	a,r0
   4297 F9                 4486 	mov	r1,a
   4298 77 00              4487 	mov	@r1,#0x00
   429A 74 10              4488 	mov	a,#0x10
   429C 28                 4489 	add	a,r0
   429D F9                 4490 	mov	r1,a
   429E 77 00              4491 	mov	@r1,#0x00
                           4492 ;	../../shared/src/spd_ctrl.c:447: uint8_t serdes_gen_tb1[] = { 0, 1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   42A0 E5 18              4493 	mov	a,_bp
   42A2 24 12              4494 	add	a,#0x12
   42A4 F9                 4495 	mov	r1,a
   42A5 77 00              4496 	mov	@r1,#0x00
   42A7 E9                 4497 	mov	a,r1
   42A8 04                 4498 	inc	a
   42A9 C0 00              4499 	push	ar0
   42AB F8                 4500 	mov	r0,a
   42AC 76 01              4501 	mov	@r0,#0x01
   42AE 74 02              4502 	mov	a,#0x02
   42B0 29                 4503 	add	a,r1
   42B1 F8                 4504 	mov	r0,a
   42B2 76 00              4505 	mov	@r0,#0x00
   42B4 74 03              4506 	mov	a,#0x03
   42B6 29                 4507 	add	a,r1
   42B7 F8                 4508 	mov	r0,a
   42B8 76 00              4509 	mov	@r0,#0x00
   42BA 74 04              4510 	mov	a,#0x04
   42BC 29                 4511 	add	a,r1
   42BD F8                 4512 	mov	r0,a
   42BE 76 02              4513 	mov	@r0,#0x02
   42C0 74 05              4514 	mov	a,#0x05
   42C2 29                 4515 	add	a,r1
   42C3 F8                 4516 	mov	r0,a
   42C4 76 00              4517 	mov	@r0,#0x00
   42C6 74 06              4518 	mov	a,#0x06
   42C8 29                 4519 	add	a,r1
   42C9 F8                 4520 	mov	r0,a
   42CA 76 00              4521 	mov	@r0,#0x00
   42CC 74 07              4522 	mov	a,#0x07
   42CE 29                 4523 	add	a,r1
   42CF F8                 4524 	mov	r0,a
   42D0 76 03              4525 	mov	@r0,#0x03
   42D2 74 08              4526 	mov	a,#0x08
   42D4 29                 4527 	add	a,r1
   42D5 F8                 4528 	mov	r0,a
   42D6 76 00              4529 	mov	@r0,#0x00
   42D8 74 09              4530 	mov	a,#0x09
   42DA 29                 4531 	add	a,r1
   42DB F8                 4532 	mov	r0,a
   42DC 76 00              4533 	mov	@r0,#0x00
   42DE 74 0A              4534 	mov	a,#0x0A
   42E0 29                 4535 	add	a,r1
   42E1 F8                 4536 	mov	r0,a
   42E2 76 00              4537 	mov	@r0,#0x00
   42E4 74 0B              4538 	mov	a,#0x0B
   42E6 29                 4539 	add	a,r1
   42E7 F8                 4540 	mov	r0,a
   42E8 76 00              4541 	mov	@r0,#0x00
   42EA 74 0C              4542 	mov	a,#0x0C
   42EC 29                 4543 	add	a,r1
   42ED F8                 4544 	mov	r0,a
   42EE 76 00              4545 	mov	@r0,#0x00
   42F0 74 0D              4546 	mov	a,#0x0D
   42F2 29                 4547 	add	a,r1
   42F3 F8                 4548 	mov	r0,a
   42F4 76 00              4549 	mov	@r0,#0x00
   42F6 74 0E              4550 	mov	a,#0x0E
   42F8 29                 4551 	add	a,r1
   42F9 F8                 4552 	mov	r0,a
   42FA 76 00              4553 	mov	@r0,#0x00
   42FC 74 0F              4554 	mov	a,#0x0F
   42FE 29                 4555 	add	a,r1
   42FF F8                 4556 	mov	r0,a
   4300 76 00              4557 	mov	@r0,#0x00
   4302 74 10              4558 	mov	a,#0x10
   4304 29                 4559 	add	a,r1
   4305 F8                 4560 	mov	r0,a
   4306 76 00              4561 	mov	@r0,#0x00
   4308 D0 00              4562 	pop	ar0
                           4563 ;	../../shared/src/spd_ctrl.c:449: if(cmx_ETHERNET_CFG_1_0==1 || cmx_ETHERNET_CFG_1_0==2) return serdes_gen_tb0[gen];
   430A 90 E6 04           4564 	mov	dptr,#_CONTROL_CONFIG0
   430D E0                 4565 	movx	a,@dptr
   430E 54 03              4566 	anl	a,#0x03
   4310 FB                 4567 	mov	r3,a
   4311 BB 01 02           4568 	cjne	r3,#0x01,00112$
   4314 80 0A              4569 	sjmp	00104$
   4316                    4570 00112$:
   4316 90 E6 04           4571 	mov	dptr,#_CONTROL_CONFIG0
   4319 E0                 4572 	movx	a,@dptr
   431A 54 03              4573 	anl	a,#0x03
   431C FB                 4574 	mov	r3,a
   431D BB 02 07           4575 	cjne	r3,#0x02,00105$
   4320                    4576 00104$:
   4320 EA                 4577 	mov	a,r2
   4321 28                 4578 	add	a,r0
   4322 F8                 4579 	mov	r0,a
   4323 86 82              4580 	mov	dpl,@r0
   4325 80 14              4581 	sjmp	00108$
   4327                    4582 00105$:
                           4583 ;	../../shared/src/spd_ctrl.c:450: else if(cmx_ETHERNET_CFG_1_0==3) return	serdes_gen_tb1[gen];
   4327 90 E6 04           4584 	mov	dptr,#_CONTROL_CONFIG0
   432A E0                 4585 	movx	a,@dptr
   432B 54 03              4586 	anl	a,#0x03
   432D FB                 4587 	mov	r3,a
   432E BB 03 07           4588 	cjne	r3,#0x03,00102$
   4331 EA                 4589 	mov	a,r2
   4332 29                 4590 	add	a,r1
   4333 F9                 4591 	mov	r1,a
   4334 87 82              4592 	mov	dpl,@r1
   4336 80 03              4593 	sjmp	00108$
   4338                    4594 00102$:
                           4595 ;	../../shared/src/spd_ctrl.c:451: else return 0;
   4338 75 82 00           4596 	mov	dpl,#0x00
   433B                    4597 00108$:
   433B 85 18 81           4598 	mov	sp,_bp
   433E D0 18              4599 	pop	_bp
   4340 22                 4600 	ret
                           4601 ;------------------------------------------------------------
                           4602 ;Allocation info for local variables in function 'loadspeedtbl_gen'
                           4603 ;------------------------------------------------------------
                           4604 ;temp                      Allocated to registers r4 r5 
                           4605 ;gen                       Allocated to registers r2 
                           4606 ;------------------------------------------------------------
                           4607 ;	../../shared/src/spd_ctrl.c:455: void loadspeedtbl_gen(void) {
                           4608 ;	-----------------------------------------
                           4609 ;	 function loadspeedtbl_gen
                           4610 ;	-----------------------------------------
   4341                    4611 _loadspeedtbl_gen:
                           4612 ;	../../shared/src/spd_ctrl.c:460: gen = gen_tx;
   4341 90 66 15           4613 	mov	dptr,#_gen_tx
   4344 E0                 4614 	movx	a,@dptr
   4345 FA                 4615 	mov	r2,a
                           4616 ;	../../shared/src/spd_ctrl.c:463: if(phy_mode==SERDES) { 
   4346 90 A3 16           4617 	mov	dptr,#(_SYSTEM + 0x0002)
   4349 E0                 4618 	movx	a,@dptr
   434A 54 07              4619 	anl	a,#0x07
   434C FB                 4620 	mov	r3,a
   434D BB 04 2A           4621 	cjne	r3,#0x04,00102$
                           4622 ;	../../shared/src/spd_ctrl.c:464: gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
   4350 90 E6 2C           4623 	mov	dptr,#_CONTROL_CONFIG8
   4353 E0                 4624 	movx	a,@dptr
   4354 54 0F              4625 	anl	a,#0x0f
   4356 FB                 4626 	mov	r3,a
   4357 90 20 33           4627 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   435A E0                 4628 	movx	a,@dptr
   435B C4                 4629 	swap	a
   435C 54 0F              4630 	anl	a,#0x0f
   435E F5 82              4631 	mov	dpl,a
   4360 C0 03              4632 	push	ar3
   4362 78 3B              4633 	mov	r0,#_min
   4364 79 C0              4634 	mov	r1,#(_min >> 8)
   4366 7A 02              4635 	mov	r2,#(_min >> 16)
   4368 12 00 B3           4636 	lcall	__sdcc_banked_call
   436B AB 82              4637 	mov	r3,dpl
   436D 15 81              4638 	dec	sp
   436F 8B 02              4639 	mov	ar2,r3
                           4640 ;	../../shared/src/spd_ctrl.c:465: gen = get_gen_memory_index(gen);
   4371 8A 82              4641 	mov	dpl,r2
   4373 12 42 30           4642 	lcall	_get_gen_memory_index
   4376 AB 82              4643 	mov	r3,dpl
   4378 8B 02              4644 	mov	ar2,r3
   437A                    4645 00102$:
                           4646 ;	../../shared/src/spd_ctrl.c:497: gen_pll_rate = speedtable[gen][spdoft_pll_rate_sel_tx]; 
   437A EA                 4647 	mov	a,r2
   437B 75 F0 50           4648 	mov	b,#0x50
   437E A4                 4649 	mul	ab
   437F FB                 4650 	mov	r3,a
   4380 AC F0              4651 	mov	r4,b
   4382 24 04              4652 	add	a,#_speedtable
   4384 F5 82              4653 	mov	dpl,a
   4386 EC                 4654 	mov	a,r4
   4387 34 63              4655 	addc	a,#(_speedtable >> 8)
   4389 F5 83              4656 	mov	dph,a
   438B E0                 4657 	movx	a,@dptr
   438C FD                 4658 	mov	r5,a
   438D 90 67 8C           4659 	mov	dptr,#_gen_pll_rate
   4390 F0                 4660 	movx	@dptr,a
                           4661 ;	../../shared/src/spd_ctrl.c:498: if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
   4391 74 01              4662 	mov	a,#0x01
   4393 B5 05 00           4663 	cjne	a,ar5,00207$
   4396                    4664 00207$:
   4396 40 0A              4665 	jc	00103$
   4398 90 A3 16           4666 	mov	dptr,#(_SYSTEM + 0x0002)
   439B E0                 4667 	movx	a,@dptr
   439C 54 07              4668 	anl	a,#0x07
   439E FE                 4669 	mov	r6,a
   439F BE 04 04           4670 	cjne	r6,#0x04,00104$
   43A2                    4671 00103$:
   43A2 C2 0F              4672 	clr	_tx_pll_rate
   43A4 80 05              4673 	sjmp	00105$
   43A6                    4674 00104$:
                           4675 ;	../../shared/src/spd_ctrl.c:499: else tx_pll_rate = gen_pll_rate;
   43A6 ED                 4676 	mov	a,r5
   43A7 24 FF              4677 	add	a,#0xff
   43A9 92 0F              4678 	mov	_tx_pll_rate,c
   43AB                    4679 00105$:
                           4680 ;	../../shared/src/spd_ctrl.c:500: use_ring_pll = speedtable[gen][spdoft_tx_ck_sel_lane]; 
   43AB EB                 4681 	mov	a,r3
   43AC 24 04              4682 	add	a,#_speedtable
   43AE FE                 4683 	mov	r6,a
   43AF EC                 4684 	mov	a,r4
   43B0 34 63              4685 	addc	a,#(_speedtable >> 8)
   43B2 FF                 4686 	mov	r7,a
   43B3 8E 82              4687 	mov	dpl,r6
   43B5 8F 83              4688 	mov	dph,r7
   43B7 A3                 4689 	inc	dptr
   43B8 E0                 4690 	movx	a,@dptr
   43B9 24 FF              4691 	add	a,#0xff
   43BB 92 10              4692 	mov	_use_ring_pll,c
                           4693 ;	../../shared/src/spd_ctrl.c:502: reg_MCU_DEBUG0_LANE_7_0 = 0x33;
   43BD 90 22 B4           4694 	mov	dptr,#_MCU_DEBUG0_LANE
   43C0 74 33              4695 	mov	a,#0x33
   43C2 F0                 4696 	movx	@dptr,a
                           4697 ;	../../shared/src/spd_ctrl.c:503: reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
   43C3 90 66 15           4698 	mov	dptr,#_gen_tx
   43C6 E0                 4699 	movx	a,@dptr
   43C7 90 22 B5           4700 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   43CA F0                 4701 	movx	@dptr,a
                           4702 ;	../../shared/src/spd_ctrl.c:504: reg_MCU_DEBUG2_LANE_7_0 = gen;
   43CB 90 22 B6           4703 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   43CE EA                 4704 	mov	a,r2
   43CF F0                 4705 	movx	@dptr,a
                           4706 ;	../../shared/src/spd_ctrl.c:505: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   43D0 90 22 B7           4707 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   43D3 ED                 4708 	mov	a,r5
   43D4 F0                 4709 	movx	@dptr,a
                           4710 ;	../../shared/src/spd_ctrl.c:506: reg_MCU_DEBUG4_LANE_7_0 = max_gen;
   43D5 90 63 00           4711 	mov	dptr,#_max_gen
   43D8 E0                 4712 	movx	a,@dptr
   43D9 90 22 B8           4713 	mov	dptr,#_MCU_DEBUG1_LANE
   43DC F0                 4714 	movx	@dptr,a
                           4715 ;	../../shared/src/spd_ctrl.c:507: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   43DD A2 12              4716 	mov	c,_ring_pll_enabled
   43DF E4                 4717 	clr	a
   43E0 33                 4718 	rlc	a
   43E1 90 22 B9           4719 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   43E4 F0                 4720 	movx	@dptr,a
                           4721 ;	../../shared/src/spd_ctrl.c:508: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   43E5 A2 10              4722 	mov	c,_use_ring_pll
   43E7 E4                 4723 	clr	a
   43E8 33                 4724 	rlc	a
   43E9 90 22 BA           4725 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   43EC F0                 4726 	movx	@dptr,a
                           4727 ;	../../shared/src/spd_ctrl.c:509: reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
   43ED A2 0F              4728 	mov	c,_tx_pll_rate
   43EF E4                 4729 	clr	a
   43F0 33                 4730 	rlc	a
   43F1 90 22 BB           4731 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0003)
   43F4 F0                 4732 	movx	@dptr,a
                           4733 ;	../../shared/src/spd_ctrl.c:510: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   43F5 90 66 24           4734 	mov	dptr,#_ring_lane_sel
   43F8 E0                 4735 	movx	a,@dptr
   43F9 FD                 4736 	mov	r5,a
   43FA 90 22 BC           4737 	mov	dptr,#_MCU_DEBUG2_LANE
   43FD F0                 4738 	movx	@dptr,a
                           4739 ;	../../shared/src/spd_ctrl.c:513: if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
   43FE EB                 4740 	mov	a,r3
   43FF 24 04              4741 	add	a,#_speedtable
   4401 FE                 4742 	mov	r6,a
   4402 EC                 4743 	mov	a,r4
   4403 34 63              4744 	addc	a,#(_speedtable >> 8)
   4405 FF                 4745 	mov	r7,a
   4406 74 35              4746 	mov	a,#0x35
   4408 2E                 4747 	add	a,r6
   4409 FE                 4748 	mov	r6,a
   440A E4                 4749 	clr	a
   440B 3F                 4750 	addc	a,r7
   440C FF                 4751 	mov	r7,a
   440D 8E 82              4752 	mov	dpl,r6
   440F 8F 83              4753 	mov	dph,r7
   4411 E0                 4754 	movx	a,@dptr
   4412 60 07              4755 	jz	00108$
   4414 90 00 60           4756 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4417 E0                 4757 	movx	a,@dptr
   4418 44 20              4758 	orl	a,#0x20
   441A F0                 4759 	movx	@dptr,a
   441B                    4760 00108$:
                           4761 ;	../../shared/src/spd_ctrl.c:514: if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE = 1;
   441B EB                 4762 	mov	a,r3
   441C 24 04              4763 	add	a,#_speedtable
   441E FE                 4764 	mov	r6,a
   441F EC                 4765 	mov	a,r4
   4420 34 63              4766 	addc	a,#(_speedtable >> 8)
   4422 FF                 4767 	mov	r7,a
   4423 74 33              4768 	mov	a,#0x33
   4425 2E                 4769 	add	a,r6
   4426 FE                 4770 	mov	r6,a
   4427 E4                 4771 	clr	a
   4428 3F                 4772 	addc	a,r7
   4429 FF                 4773 	mov	r7,a
   442A 8E 82              4774 	mov	dpl,r6
   442C 8F 83              4775 	mov	dph,r7
   442E E0                 4776 	movx	a,@dptr
   442F 60 07              4777 	jz	00110$
   4431 90 00 60           4778 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4434 E0                 4779 	movx	a,@dptr
   4435 44 80              4780 	orl	a,#0x80
   4437 F0                 4781 	movx	@dptr,a
   4438                    4782 00110$:
                           4783 ;	../../shared/src/spd_ctrl.c:515: if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE = 1;
   4438 EB                 4784 	mov	a,r3
   4439 24 04              4785 	add	a,#_speedtable
   443B FE                 4786 	mov	r6,a
   443C EC                 4787 	mov	a,r4
   443D 34 63              4788 	addc	a,#(_speedtable >> 8)
   443F FF                 4789 	mov	r7,a
   4440 74 2F              4790 	mov	a,#0x2F
   4442 2E                 4791 	add	a,r6
   4443 FE                 4792 	mov	r6,a
   4444 E4                 4793 	clr	a
   4445 3F                 4794 	addc	a,r7
   4446 FF                 4795 	mov	r7,a
   4447 8E 82              4796 	mov	dpl,r6
   4449 8F 83              4797 	mov	dph,r7
   444B E0                 4798 	movx	a,@dptr
   444C 60 07              4799 	jz	00112$
   444E 90 00 5C           4800 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4451 E0                 4801 	movx	a,@dptr
   4452 44 08              4802 	orl	a,#0x08
   4454 F0                 4803 	movx	@dptr,a
   4455                    4804 00112$:
                           4805 ;	../../shared/src/spd_ctrl.c:516: if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) { 
   4455 90 A3 16           4806 	mov	dptr,#(_SYSTEM + 0x0002)
   4458 E0                 4807 	movx	a,@dptr
   4459 54 07              4808 	anl	a,#0x07
   445B 70 12              4809 	jnz	00123$
   445D 90 22 30           4810 	mov	dptr,#_MCU_STATUS0_LANE
   4460 E0                 4811 	movx	a,@dptr
   4461 FE                 4812 	mov	r6,a
   4462 BE 19 0A           4813 	cjne	r6,#0x19,00123$
   4465 90 66 2B           4814 	mov	dptr,#_pwrsq_on
   4468 E0                 4815 	movx	a,@dptr
   4469 FE                 4816 	mov	r6,a
   446A 70 03              4817 	jnz	00217$
   446C 02 45 00           4818 	ljmp	00124$
   446F                    4819 00217$:
   446F                    4820 00123$:
                           4821 ;	../../shared/src/spd_ctrl.c:517: if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
   446F EB                 4822 	mov	a,r3
   4470 24 04              4823 	add	a,#_speedtable
   4472 FE                 4824 	mov	r6,a
   4473 EC                 4825 	mov	a,r4
   4474 34 63              4826 	addc	a,#(_speedtable >> 8)
   4476 FF                 4827 	mov	r7,a
   4477 74 36              4828 	mov	a,#0x36
   4479 2E                 4829 	add	a,r6
   447A FE                 4830 	mov	r6,a
   447B E4                 4831 	clr	a
   447C 3F                 4832 	addc	a,r7
   447D FF                 4833 	mov	r7,a
   447E 8E 82              4834 	mov	dpl,r6
   4480 8F 83              4835 	mov	dph,r7
   4482 E0                 4836 	movx	a,@dptr
   4483 60 07              4837 	jz	00114$
   4485 90 00 60           4838 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4488 E0                 4839 	movx	a,@dptr
   4489 44 10              4840 	orl	a,#0x10
   448B F0                 4841 	movx	@dptr,a
   448C                    4842 00114$:
                           4843 ;	../../shared/src/spd_ctrl.c:518: if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
   448C EB                 4844 	mov	a,r3
   448D 24 04              4845 	add	a,#_speedtable
   448F FE                 4846 	mov	r6,a
   4490 EC                 4847 	mov	a,r4
   4491 34 63              4848 	addc	a,#(_speedtable >> 8)
   4493 FF                 4849 	mov	r7,a
   4494 74 34              4850 	mov	a,#0x34
   4496 2E                 4851 	add	a,r6
   4497 FE                 4852 	mov	r6,a
   4498 E4                 4853 	clr	a
   4499 3F                 4854 	addc	a,r7
   449A FF                 4855 	mov	r7,a
   449B 8E 82              4856 	mov	dpl,r6
   449D 8F 83              4857 	mov	dph,r7
   449F E0                 4858 	movx	a,@dptr
   44A0 60 07              4859 	jz	00116$
   44A2 90 00 60           4860 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   44A5 E0                 4861 	movx	a,@dptr
   44A6 44 40              4862 	orl	a,#0x40
   44A8 F0                 4863 	movx	@dptr,a
   44A9                    4864 00116$:
                           4865 ;	../../shared/src/spd_ctrl.c:519: if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE = 1;
   44A9 EB                 4866 	mov	a,r3
   44AA 24 04              4867 	add	a,#_speedtable
   44AC FE                 4868 	mov	r6,a
   44AD EC                 4869 	mov	a,r4
   44AE 34 63              4870 	addc	a,#(_speedtable >> 8)
   44B0 FF                 4871 	mov	r7,a
   44B1 74 32              4872 	mov	a,#0x32
   44B3 2E                 4873 	add	a,r6
   44B4 FE                 4874 	mov	r6,a
   44B5 E4                 4875 	clr	a
   44B6 3F                 4876 	addc	a,r7
   44B7 FF                 4877 	mov	r7,a
   44B8 8E 82              4878 	mov	dpl,r6
   44BA 8F 83              4879 	mov	dph,r7
   44BC E0                 4880 	movx	a,@dptr
   44BD 60 07              4881 	jz	00118$
   44BF 90 00 5C           4882 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   44C2 E0                 4883 	movx	a,@dptr
   44C3 44 01              4884 	orl	a,#0x01
   44C5 F0                 4885 	movx	@dptr,a
   44C6                    4886 00118$:
                           4887 ;	../../shared/src/spd_ctrl.c:520: if(speedtable[gen][spdoft_pu_f1n_d_e_lane]) reg_PU_F1N_D_E_LANE = 1;
   44C6 EB                 4888 	mov	a,r3
   44C7 24 04              4889 	add	a,#_speedtable
   44C9 FE                 4890 	mov	r6,a
   44CA EC                 4891 	mov	a,r4
   44CB 34 63              4892 	addc	a,#(_speedtable >> 8)
   44CD FF                 4893 	mov	r7,a
   44CE 74 30              4894 	mov	a,#0x30
   44D0 2E                 4895 	add	a,r6
   44D1 FE                 4896 	mov	r6,a
   44D2 E4                 4897 	clr	a
   44D3 3F                 4898 	addc	a,r7
   44D4 FF                 4899 	mov	r7,a
   44D5 8E 82              4900 	mov	dpl,r6
   44D7 8F 83              4901 	mov	dph,r7
   44D9 E0                 4902 	movx	a,@dptr
   44DA 60 07              4903 	jz	00120$
   44DC 90 00 5C           4904 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   44DF E0                 4905 	movx	a,@dptr
   44E0 44 04              4906 	orl	a,#0x04
   44E2 F0                 4907 	movx	@dptr,a
   44E3                    4908 00120$:
                           4909 ;	../../shared/src/spd_ctrl.c:521: if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE = 1;
   44E3 EB                 4910 	mov	a,r3
   44E4 24 04              4911 	add	a,#_speedtable
   44E6 FE                 4912 	mov	r6,a
   44E7 EC                 4913 	mov	a,r4
   44E8 34 63              4914 	addc	a,#(_speedtable >> 8)
   44EA FF                 4915 	mov	r7,a
   44EB 74 31              4916 	mov	a,#0x31
   44ED 2E                 4917 	add	a,r6
   44EE FE                 4918 	mov	r6,a
   44EF E4                 4919 	clr	a
   44F0 3F                 4920 	addc	a,r7
   44F1 FF                 4921 	mov	r7,a
   44F2 8E 82              4922 	mov	dpl,r6
   44F4 8F 83              4923 	mov	dph,r7
   44F6 E0                 4924 	movx	a,@dptr
   44F7 60 07              4925 	jz	00124$
   44F9 90 00 5C           4926 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   44FC E0                 4927 	movx	a,@dptr
   44FD 44 02              4928 	orl	a,#0x02
   44FF F0                 4929 	movx	@dptr,a
   4500                    4930 00124$:
                           4931 ;	../../shared/src/spd_ctrl.c:525: reg_TX_SPEED_DIV_LANE_2_0		= speedtable[gen][spdoft_tx_speed_div_lane]; 
   4500 EB                 4932 	mov	a,r3
   4501 24 04              4933 	add	a,#_speedtable
   4503 FE                 4934 	mov	r6,a
   4504 EC                 4935 	mov	a,r4
   4505 34 63              4936 	addc	a,#(_speedtable >> 8)
   4507 FF                 4937 	mov	r7,a
   4508 8E 82              4938 	mov	dpl,r6
   450A 8F 83              4939 	mov	dph,r7
   450C A3                 4940 	inc	dptr
   450D A3                 4941 	inc	dptr
   450E A3                 4942 	inc	dptr
   450F E0                 4943 	movx	a,@dptr
   4510 90 02 58           4944 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   4513 54 07              4945 	anl	a,#0x07
   4515 F5 F0              4946 	mov	b,a
   4517 E0                 4947 	movx	a,@dptr
   4518 54 F8              4948 	anl	a,#0xf8
   451A 45 F0              4949 	orl	a,b
   451C F0                 4950 	movx	@dptr,a
                           4951 ;	../../shared/src/spd_ctrl.c:526: reg_TXSPEED_DIV_LANE_2_0 		= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use
   451D EB                 4952 	mov	a,r3
   451E 24 04              4953 	add	a,#_speedtable
   4520 FE                 4954 	mov	r6,a
   4521 EC                 4955 	mov	a,r4
   4522 34 63              4956 	addc	a,#(_speedtable >> 8)
   4524 FF                 4957 	mov	r7,a
   4525 8E 82              4958 	mov	dpl,r6
   4527 8F 83              4959 	mov	dph,r7
   4529 A3                 4960 	inc	dptr
   452A A3                 4961 	inc	dptr
   452B A3                 4962 	inc	dptr
   452C E0                 4963 	movx	a,@dptr
   452D 90 20 30           4964 	mov	dptr,#_SPD_CTRL_TX_LANE_REG1_LANE
   4530 54 07              4965 	anl	a,#0x07
   4532 F5 F0              4966 	mov	b,a
   4534 E0                 4967 	movx	a,@dptr
   4535 54 F8              4968 	anl	a,#0xf8
   4537 45 F0              4969 	orl	a,b
   4539 F0                 4970 	movx	@dptr,a
                           4971 ;	../../shared/src/spd_ctrl.c:528: reg_RX_SPEED_DIV_LANE_2_0		= speedtable[gen][spdoft_rx_speed_div_lane]; 
   453A EB                 4972 	mov	a,r3
   453B 24 04              4973 	add	a,#_speedtable
   453D FE                 4974 	mov	r6,a
   453E EC                 4975 	mov	a,r4
   453F 34 63              4976 	addc	a,#(_speedtable >> 8)
   4541 FF                 4977 	mov	r7,a
   4542 74 18              4978 	mov	a,#0x18
   4544 2E                 4979 	add	a,r6
   4545 F5 82              4980 	mov	dpl,a
   4547 E4                 4981 	clr	a
   4548 3F                 4982 	addc	a,r7
   4549 F5 83              4983 	mov	dph,a
   454B E0                 4984 	movx	a,@dptr
   454C 90 02 28           4985 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   454F 25 E0              4986 	add	a,acc
   4551 25 E0              4987 	add	a,acc
   4553 54 1C              4988 	anl	a,#0x1c
   4555 F5 F0              4989 	mov	b,a
   4557 E0                 4990 	movx	a,@dptr
   4558 54 E3              4991 	anl	a,#0xe3
   455A 45 F0              4992 	orl	a,b
   455C F0                 4993 	movx	@dptr,a
                           4994 ;	../../shared/src/spd_ctrl.c:529: reg_DTL_CLK_SPEEDUP_LANE_2_0  		= speedtable[gen][spdoft_dtl_clk_speedup_lane]; 
   455D EB                 4995 	mov	a,r3
   455E 24 04              4996 	add	a,#_speedtable
   4560 FE                 4997 	mov	r6,a
   4561 EC                 4998 	mov	a,r4
   4562 34 63              4999 	addc	a,#(_speedtable >> 8)
   4564 FF                 5000 	mov	r7,a
   4565 74 19              5001 	mov	a,#0x19
   4567 2E                 5002 	add	a,r6
   4568 F5 82              5003 	mov	dpl,a
   456A E4                 5004 	clr	a
   456B 3F                 5005 	addc	a,r7
   456C F5 83              5006 	mov	dph,a
   456E E0                 5007 	movx	a,@dptr
   456F 90 02 28           5008 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   4572 C4                 5009 	swap	a
   4573 23                 5010 	rl	a
   4574 54 E0              5011 	anl	a,#(0xe0&0xe0)
   4576 F5 F0              5012 	mov	b,a
   4578 E0                 5013 	movx	a,@dptr
   4579 54 1F              5014 	anl	a,#0x1f
   457B 45 F0              5015 	orl	a,b
   457D F0                 5016 	movx	@dptr,a
                           5017 ;	../../shared/src/spd_ctrl.c:530: reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];
   457E EB                 5018 	mov	a,r3
   457F 24 04              5019 	add	a,#_speedtable
   4581 FE                 5020 	mov	r6,a
   4582 EC                 5021 	mov	a,r4
   4583 34 63              5022 	addc	a,#(_speedtable >> 8)
   4585 FF                 5023 	mov	r7,a
   4586 74 21              5024 	mov	a,#0x21
   4588 2E                 5025 	add	a,r6
   4589 F5 82              5026 	mov	dpl,a
   458B E4                 5027 	clr	a
   458C 3F                 5028 	addc	a,r7
   458D F5 83              5029 	mov	dph,a
   458F E0                 5030 	movx	a,@dptr
   4590 90 02 38           5031 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   4593 25 E0              5032 	add	a,acc
   4595 54 0E              5033 	anl	a,#0x0e
   4597 F5 F0              5034 	mov	b,a
   4599 E0                 5035 	movx	a,@dptr
   459A 54 F1              5036 	anl	a,#0xf1
   459C 45 F0              5037 	orl	a,b
   459E F0                 5038 	movx	@dptr,a
                           5039 ;	../../shared/src/spd_ctrl.c:532: switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
   459F 90 60 02           5040 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   45A2 E0                 5041 	movx	a,@dptr
   45A3 C4                 5042 	swap	a
   45A4 54 03              5043 	anl	a,#0x03
   45A6 FE                 5044 	mov	r6,a
   45A7 25 E0              5045 	add	a,acc
   45A9 2E                 5046 	add	a,r6
   45AA 90 45 AE           5047 	mov	dptr,#00223$
   45AD 73                 5048 	jmp	@a+dptr
   45AE                    5049 00223$:
   45AE 02 45 BA           5050 	ljmp	00127$
   45B1 02 45 C2           5051 	ljmp	00128$
   45B4 02 45 CA           5052 	ljmp	00129$
   45B7 02 45 D2           5053 	ljmp	00130$
                           5054 ;	../../shared/src/spd_ctrl.c:533: case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
   45BA                    5055 00127$:
   45BA 90 00 78           5056 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   45BD 74 24              5057 	mov	a,#0x24
   45BF F0                 5058 	movx	@dptr,a
                           5059 ;	../../shared/src/spd_ctrl.c:534: case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
   45C0 80 16              5060 	sjmp	00131$
   45C2                    5061 00128$:
   45C2 90 00 78           5062 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   45C5 74 84              5063 	mov	a,#0x84
   45C7 F0                 5064 	movx	@dptr,a
                           5065 ;	../../shared/src/spd_ctrl.c:535: case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
   45C8 80 0E              5066 	sjmp	00131$
   45CA                    5067 00129$:
   45CA 90 00 78           5068 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   45CD 74 2B              5069 	mov	a,#0x2B
   45CF F0                 5070 	movx	@dptr,a
                           5071 ;	../../shared/src/spd_ctrl.c:536: case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
   45D0 80 06              5072 	sjmp	00131$
   45D2                    5073 00130$:
   45D2 90 00 78           5074 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   45D5 74 42              5075 	mov	a,#0x42
   45D7 F0                 5076 	movx	@dptr,a
                           5077 ;	../../shared/src/spd_ctrl.c:537: }
   45D8                    5078 00131$:
                           5079 ;	../../shared/src/spd_ctrl.c:538: if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
   45D8 90 02 28           5080 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   45DB E0                 5081 	movx	a,@dptr
   45DC 03                 5082 	rr	a
   45DD 03                 5083 	rr	a
   45DE 54 07              5084 	anl	a,#0x07
   45E0 FE                 5085 	mov	r6,a
   45E1 20 E2 03           5086 	jb	acc.2,00224$
   45E4 02 46 66           5087 	ljmp	00143$
   45E7                    5088 00224$:
                           5089 ;	../../shared/src/spd_ctrl.c:539: switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
   45E7 90 60 02           5090 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   45EA E0                 5091 	movx	a,@dptr
   45EB 23                 5092 	rl	a
   45EC 23                 5093 	rl	a
   45ED 54 03              5094 	anl	a,#0x03
   45EF FE                 5095 	mov	r6,a
   45F0 25 E0              5096 	add	a,acc
   45F2 2E                 5097 	add	a,r6
   45F3 90 45 F7           5098 	mov	dptr,#00225$
   45F6 73                 5099 	jmp	@a+dptr
   45F7                    5100 00225$:
   45F7 02 46 03           5101 	ljmp	00132$
   45FA 02 46 1C           5102 	ljmp	00133$
   45FD 02 46 35           5103 	ljmp	00134$
   4600 02 46 4E           5104 	ljmp	00135$
                           5105 ;	../../shared/src/spd_ctrl.c:540: case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   4603                    5106 00132$:
   4603 90 02 6C           5107 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4606 E0                 5108 	movx	a,@dptr
   4607 FE                 5109 	mov	r6,a
   4608 74 04              5110 	mov	a,#0x04
   460A 5E                 5111 	anl	a,r6
   460B 44 40              5112 	orl	a,#0x40
   460D FE                 5113 	mov	r6,a
   460E 90 02 6C           5114 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4611 F0                 5115 	movx	@dptr,a
   4612 90 02 60           5116 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4615 E0                 5117 	movx	a,@dptr
   4616 44 08              5118 	orl	a,#0x08
   4618 F0                 5119 	movx	@dptr,a
   4619 02 46 E0           5120 	ljmp	00144$
                           5121 ;	../../shared/src/spd_ctrl.c:541: case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   461C                    5122 00133$:
   461C 90 02 6C           5123 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   461F E0                 5124 	movx	a,@dptr
   4620 FE                 5125 	mov	r6,a
   4621 74 04              5126 	mov	a,#0x04
   4623 5E                 5127 	anl	a,r6
   4624 44 82              5128 	orl	a,#0x82
   4626 FE                 5129 	mov	r6,a
   4627 90 02 6C           5130 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   462A F0                 5131 	movx	@dptr,a
   462B 90 02 60           5132 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   462E E0                 5133 	movx	a,@dptr
   462F 44 08              5134 	orl	a,#0x08
   4631 F0                 5135 	movx	@dptr,a
   4632 02 46 E0           5136 	ljmp	00144$
                           5137 ;	../../shared/src/spd_ctrl.c:542: case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   4635                    5138 00134$:
   4635 90 02 6C           5139 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4638 E0                 5140 	movx	a,@dptr
   4639 FE                 5141 	mov	r6,a
   463A 74 04              5142 	mov	a,#0x04
   463C 5E                 5143 	anl	a,r6
   463D 44 5B              5144 	orl	a,#0x5B
   463F FE                 5145 	mov	r6,a
   4640 90 02 6C           5146 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4643 F0                 5147 	movx	@dptr,a
   4644 90 02 60           5148 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4647 E0                 5149 	movx	a,@dptr
   4648 44 08              5150 	orl	a,#0x08
   464A F0                 5151 	movx	@dptr,a
   464B 02 46 E0           5152 	ljmp	00144$
                           5153 ;	../../shared/src/spd_ctrl.c:543: case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   464E                    5154 00135$:
   464E 90 02 6C           5155 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4651 E0                 5156 	movx	a,@dptr
   4652 FE                 5157 	mov	r6,a
   4653 74 04              5158 	mov	a,#0x04
   4655 5E                 5159 	anl	a,r6
   4656 44 8A              5160 	orl	a,#0x8A
   4658 FE                 5161 	mov	r6,a
   4659 90 02 6C           5162 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   465C F0                 5163 	movx	@dptr,a
   465D 90 02 60           5164 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4660 E0                 5165 	movx	a,@dptr
   4661 44 08              5166 	orl	a,#0x08
   4663 F0                 5167 	movx	@dptr,a
                           5168 ;	../../shared/src/spd_ctrl.c:544: }
   4664 80 7A              5169 	sjmp	00144$
   4666                    5170 00143$:
                           5171 ;	../../shared/src/spd_ctrl.c:547: switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
   4666 90 60 02           5172 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   4669 E0                 5173 	movx	a,@dptr
   466A 23                 5174 	rl	a
   466B 23                 5175 	rl	a
   466C 54 03              5176 	anl	a,#0x03
   466E FE                 5177 	mov	r6,a
   466F 25 E0              5178 	add	a,acc
   4671 2E                 5179 	add	a,r6
   4672 90 46 76           5180 	mov	dptr,#00226$
   4675 73                 5181 	jmp	@a+dptr
   4676                    5182 00226$:
   4676 02 46 82           5183 	ljmp	00137$
   4679 02 46 9A           5184 	ljmp	00138$
   467C 02 46 B2           5185 	ljmp	00139$
   467F 02 46 CA           5186 	ljmp	00140$
                           5187 ;	../../shared/src/spd_ctrl.c:548: case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   4682                    5188 00137$:
   4682 90 02 6C           5189 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4685 E0                 5190 	movx	a,@dptr
   4686 FE                 5191 	mov	r6,a
   4687 74 04              5192 	mov	a,#0x04
   4689 5E                 5193 	anl	a,r6
   468A 44 20              5194 	orl	a,#0x20
   468C FE                 5195 	mov	r6,a
   468D 90 02 6C           5196 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4690 F0                 5197 	movx	@dptr,a
   4691 90 02 60           5198 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4694 E0                 5199 	movx	a,@dptr
   4695 44 08              5200 	orl	a,#0x08
   4697 F0                 5201 	movx	@dptr,a
                           5202 ;	../../shared/src/spd_ctrl.c:549: case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   4698 80 46              5203 	sjmp	00144$
   469A                    5204 00138$:
   469A 90 02 6C           5205 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   469D E0                 5206 	movx	a,@dptr
   469E FE                 5207 	mov	r6,a
   469F 74 04              5208 	mov	a,#0x04
   46A1 5E                 5209 	anl	a,r6
   46A2 44 80              5210 	orl	a,#0x80
   46A4 FE                 5211 	mov	r6,a
   46A5 90 02 6C           5212 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   46A8 F0                 5213 	movx	@dptr,a
   46A9 90 02 60           5214 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   46AC E0                 5215 	movx	a,@dptr
   46AD 44 08              5216 	orl	a,#0x08
   46AF F0                 5217 	movx	@dptr,a
                           5218 ;	../../shared/src/spd_ctrl.c:550: case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
   46B0 80 2E              5219 	sjmp	00144$
   46B2                    5220 00139$:
   46B2 90 02 6C           5221 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   46B5 E0                 5222 	movx	a,@dptr
   46B6 FE                 5223 	mov	r6,a
   46B7 74 04              5224 	mov	a,#0x04
   46B9 5E                 5225 	anl	a,r6
   46BA 44 2B              5226 	orl	a,#0x2B
   46BC FE                 5227 	mov	r6,a
   46BD 90 02 6C           5228 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   46C0 F0                 5229 	movx	@dptr,a
   46C1 90 02 60           5230 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   46C4 E0                 5231 	movx	a,@dptr
   46C5 54 F7              5232 	anl	a,#0xf7
   46C7 F0                 5233 	movx	@dptr,a
                           5234 ;	../../shared/src/spd_ctrl.c:551: case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
   46C8 80 16              5235 	sjmp	00144$
   46CA                    5236 00140$:
   46CA 90 02 6C           5237 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   46CD E0                 5238 	movx	a,@dptr
   46CE FE                 5239 	mov	r6,a
   46CF 74 04              5240 	mov	a,#0x04
   46D1 5E                 5241 	anl	a,r6
   46D2 44 42              5242 	orl	a,#0x42
   46D4 FE                 5243 	mov	r6,a
   46D5 90 02 6C           5244 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   46D8 F0                 5245 	movx	@dptr,a
   46D9 90 02 60           5246 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   46DC E0                 5247 	movx	a,@dptr
   46DD 54 F7              5248 	anl	a,#0xf7
   46DF F0                 5249 	movx	@dptr,a
                           5250 ;	../../shared/src/spd_ctrl.c:552: }
   46E0                    5251 00144$:
                           5252 ;	../../shared/src/spd_ctrl.c:555: reg_RX_SELMUFF_LANE_2_0 		= speedtable[gen][spdoft_rx_selmuff_lane];
   46E0 C0 05              5253 	push	ar5
   46E2 EB                 5254 	mov	a,r3
   46E3 24 04              5255 	add	a,#_speedtable
   46E5 FE                 5256 	mov	r6,a
   46E6 EC                 5257 	mov	a,r4
   46E7 34 63              5258 	addc	a,#(_speedtable >> 8)
   46E9 FF                 5259 	mov	r7,a
   46EA 74 23              5260 	mov	a,#0x23
   46EC 2E                 5261 	add	a,r6
   46ED F5 82              5262 	mov	dpl,a
   46EF E4                 5263 	clr	a
   46F0 3F                 5264 	addc	a,r7
   46F1 F5 83              5265 	mov	dph,a
   46F3 E0                 5266 	movx	a,@dptr
   46F4 90 21 65           5267 	mov	dptr,#(_DTL_REG1 + 0x0001)
   46F7 C4                 5268 	swap	a
   46F8 23                 5269 	rl	a
   46F9 54 E0              5270 	anl	a,#(0xe0&0xe0)
   46FB F5 F0              5271 	mov	b,a
   46FD E0                 5272 	movx	a,@dptr
   46FE 54 1F              5273 	anl	a,#0x1f
   4700 45 F0              5274 	orl	a,b
   4702 F0                 5275 	movx	@dptr,a
                           5276 ;	../../shared/src/spd_ctrl.c:556: dfe_dis					= speedtable[gen][spdoft_reg_dfe_dis_lane];
   4703 EB                 5277 	mov	a,r3
   4704 24 04              5278 	add	a,#_speedtable
   4706 FE                 5279 	mov	r6,a
   4707 EC                 5280 	mov	a,r4
   4708 34 63              5281 	addc	a,#(_speedtable >> 8)
   470A FF                 5282 	mov	r7,a
   470B 74 41              5283 	mov	a,#0x41
   470D 2E                 5284 	add	a,r6
   470E F5 82              5285 	mov	dpl,a
   4710 E4                 5286 	clr	a
   4711 3F                 5287 	addc	a,r7
   4712 F5 83              5288 	mov	dph,a
   4714 E0                 5289 	movx	a,@dptr
   4715 FE                 5290 	mov	r6,a
   4716 90 66 F7           5291 	mov	dptr,#_dfe_dis
   4719 F0                 5292 	movx	@dptr,a
                           5293 ;	../../shared/src/spd_ctrl.c:557: reg_DFE_TAP_SETTLE_SCALE_LANE_1_0	= speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
   471A EB                 5294 	mov	a,r3
   471B 24 04              5295 	add	a,#_speedtable
   471D FF                 5296 	mov	r7,a
   471E EC                 5297 	mov	a,r4
   471F 34 63              5298 	addc	a,#(_speedtable >> 8)
   4721 FD                 5299 	mov	r5,a
   4722 74 42              5300 	mov	a,#0x42
   4724 2F                 5301 	add	a,r7
   4725 F5 82              5302 	mov	dpl,a
   4727 E4                 5303 	clr	a
   4728 3D                 5304 	addc	a,r5
   4729 F5 83              5305 	mov	dph,a
   472B E0                 5306 	movx	a,@dptr
   472C 90 24 0B           5307 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   472F 54 03              5308 	anl	a,#0x03
   4731 F5 F0              5309 	mov	b,a
   4733 E0                 5310 	movx	a,@dptr
   4734 54 FC              5311 	anl	a,#0xfc
   4736 45 F0              5312 	orl	a,b
   4738 F0                 5313 	movx	@dptr,a
                           5314 ;	../../shared/src/spd_ctrl.c:558: reg_FFE_DATA_RATE_LANE_3_0  		= speedtable[gen][spdoft_ffe_data_rate_lane];
   4739 EB                 5315 	mov	a,r3
   473A 24 04              5316 	add	a,#_speedtable
   473C FD                 5317 	mov	r5,a
   473D EC                 5318 	mov	a,r4
   473E 34 63              5319 	addc	a,#(_speedtable >> 8)
   4740 FF                 5320 	mov	r7,a
   4741 74 43              5321 	mov	a,#0x43
   4743 2D                 5322 	add	a,r5
   4744 F5 82              5323 	mov	dpl,a
   4746 E4                 5324 	clr	a
   4747 3F                 5325 	addc	a,r7
   4748 F5 83              5326 	mov	dph,a
   474A E0                 5327 	movx	a,@dptr
   474B FD                 5328 	mov	r5,a
   474C 90 02 08           5329 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_130
   474F C4                 5330 	swap	a
   4750 54 F0              5331 	anl	a,#(0xf0&0xf0)
   4752 F5 F0              5332 	mov	b,a
   4754 E0                 5333 	movx	a,@dptr
   4755 54 0F              5334 	anl	a,#0x0f
   4757 45 F0              5335 	orl	a,b
   4759 F0                 5336 	movx	@dptr,a
                           5337 ;	../../shared/src/spd_ctrl.c:559: reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;
   475A EE                 5338 	mov	a,r6
   475B B4 01 00           5339 	cjne	a,#0x01,00227$
   475E                    5340 00227$:
   475E E4                 5341 	clr	a
   475F 33                 5342 	rlc	a
   4760 90 24 10           5343 	mov	dptr,#_RX_EQ_CLK_CTRL
   4763 13                 5344 	rrc	a
   4764 E0                 5345 	movx	a,@dptr
   4765 92 E4              5346 	mov	acc.4,c
   4767 F0                 5347 	movx	@dptr,a
   4768 90 24 0C           5348 	mov	dptr,#_DFE_CTRL_REG3
   476B EE                 5349 	mov	a,r6
   476C 13                 5350 	rrc	a
   476D E0                 5351 	movx	a,@dptr
   476E 92 E6              5352 	mov	acc.6,c
   4770 F0                 5353 	movx	@dptr,a
                           5354 ;	../../shared/src/spd_ctrl.c:561: if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
   4771 90 A3 16           5355 	mov	dptr,#(_SYSTEM + 0x0002)
   4774 E0                 5356 	movx	a,@dptr
   4775 54 07              5357 	anl	a,#0x07
   4777 D0 05              5358 	pop	ar5
   4779 70 12              5359 	jnz	00156$
   477B 90 22 30           5360 	mov	dptr,#_MCU_STATUS0_LANE
   477E E0                 5361 	movx	a,@dptr
   477F FE                 5362 	mov	r6,a
   4780 BE 19 0A           5363 	cjne	r6,#0x19,00156$
   4783 90 66 2B           5364 	mov	dptr,#_pwrsq_on
   4786 E0                 5365 	movx	a,@dptr
   4787 FE                 5366 	mov	r6,a
   4788 70 03              5367 	jnz	00231$
   478A 02 4E 25           5368 	ljmp	00157$
   478D                    5369 00231$:
   478D                    5370 00156$:
                           5371 ;	../../shared/src/spd_ctrl.c:562: reg_TX_CK_SEL_LANE 			= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
   478D C0 02              5372 	push	ar2
   478F 90 66 23           5373 	mov	dptr,#_serdes_ring_lane_en
   4792 E0                 5374 	movx	a,@dptr
   4793 FE                 5375 	mov	r6,a
   4794 ED                 5376 	mov	a,r5
   4795 5E                 5377 	anl	a,r6
   4796 FF                 5378 	mov	r7,a
   4797 A2 10              5379 	mov	c,_use_ring_pll
   4799 E4                 5380 	clr	a
   479A 33                 5381 	rlc	a
   479B 42 07              5382 	orl	ar7,a
   479D 90 02 58           5383 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   47A0 EF                 5384 	mov	a,r7
   47A1 13                 5385 	rrc	a
   47A2 E0                 5386 	movx	a,@dptr
   47A3 92 E3              5387 	mov	acc.3,c
   47A5 F0                 5388 	movx	@dptr,a
                           5389 ;	../../shared/src/spd_ctrl.c:563: reg_TX_CK_SEL_DIG_LANE			= reg_TX_CK_SEL_LANE;	//duplicated for digital use
   47A6 90 02 58           5390 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   47A9 E0                 5391 	movx	a,@dptr
   47AA C4                 5392 	swap	a
   47AB 23                 5393 	rl	a
   47AC 54 01              5394 	anl	a,#0x01
   47AE 90 20 21           5395 	mov	dptr,#(_CLKGEN_TX_LANE_REG1_LANE + 0x0001)
   47B1 13                 5396 	rrc	a
   47B2 E0                 5397 	movx	a,@dptr
   47B3 92 E0              5398 	mov	acc.0,c
   47B5 F0                 5399 	movx	@dptr,a
                           5400 ;	../../shared/src/spd_ctrl.c:564: reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];  
   47B6 EB                 5401 	mov	a,r3
   47B7 24 04              5402 	add	a,#_speedtable
   47B9 FA                 5403 	mov	r2,a
   47BA EC                 5404 	mov	a,r4
   47BB 34 63              5405 	addc	a,#(_speedtable >> 8)
   47BD FF                 5406 	mov	r7,a
   47BE 8A 82              5407 	mov	dpl,r2
   47C0 8F 83              5408 	mov	dph,r7
   47C2 A3                 5409 	inc	dptr
   47C3 A3                 5410 	inc	dptr
   47C4 A3                 5411 	inc	dptr
   47C5 A3                 5412 	inc	dptr
   47C6 E0                 5413 	movx	a,@dptr
   47C7 90 00 48           5414 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_18
   47CA C4                 5415 	swap	a
   47CB 23                 5416 	rl	a
   47CC 54 E0              5417 	anl	a,#(0xe0&0xe0)
   47CE F5 F0              5418 	mov	b,a
   47D0 E0                 5419 	movx	a,@dptr
   47D1 54 1F              5420 	anl	a,#0x1f
   47D3 45 F0              5421 	orl	a,b
   47D5 F0                 5422 	movx	@dptr,a
                           5423 ;	../../shared/src/spd_ctrl.c:565: reg_TX_REG_SPEED_TRK_DATA_LANE_2_0	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];
   47D6 EB                 5424 	mov	a,r3
   47D7 24 04              5425 	add	a,#_speedtable
   47D9 FA                 5426 	mov	r2,a
   47DA EC                 5427 	mov	a,r4
   47DB 34 63              5428 	addc	a,#(_speedtable >> 8)
   47DD FF                 5429 	mov	r7,a
   47DE 8A 82              5430 	mov	dpl,r2
   47E0 8F 83              5431 	mov	dph,r7
   47E2 A3                 5432 	inc	dptr
   47E3 A3                 5433 	inc	dptr
   47E4 A3                 5434 	inc	dptr
   47E5 A3                 5435 	inc	dptr
   47E6 A3                 5436 	inc	dptr
   47E7 E0                 5437 	movx	a,@dptr
   47E8 90 00 48           5438 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_18
   47EB 25 E0              5439 	add	a,acc
   47ED 25 E0              5440 	add	a,acc
   47EF 54 1C              5441 	anl	a,#0x1c
   47F1 F5 F0              5442 	mov	b,a
   47F3 E0                 5443 	movx	a,@dptr
   47F4 54 E3              5444 	anl	a,#0xe3
   47F6 45 F0              5445 	orl	a,b
   47F8 F0                 5446 	movx	@dptr,a
                           5447 ;	../../shared/src/spd_ctrl.c:567: reg_TX_EM_CTRL_REG_EN_LANE		= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
   47F9 EB                 5448 	mov	a,r3
   47FA 24 04              5449 	add	a,#_speedtable
   47FC FA                 5450 	mov	r2,a
   47FD EC                 5451 	mov	a,r4
   47FE 34 63              5452 	addc	a,#(_speedtable >> 8)
   4800 FF                 5453 	mov	r7,a
   4801 74 08              5454 	mov	a,#0x08
   4803 2A                 5455 	add	a,r2
   4804 F5 82              5456 	mov	dpl,a
   4806 E4                 5457 	clr	a
   4807 3F                 5458 	addc	a,r7
   4808 F5 83              5459 	mov	dph,a
   480A E0                 5460 	movx	a,@dptr
   480B 90 26 53           5461 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0003)
   480E 13                 5462 	rrc	a
   480F E0                 5463 	movx	a,@dptr
   4810 92 E7              5464 	mov	acc.7,c
   4812 F0                 5465 	movx	@dptr,a
                           5466 ;	../../shared/src/spd_ctrl.c:569: reg_TX_COE_FM_PIPE_LANE			= speedtable[gen][spdoft_tx_coe_fm_pipe_lane];
   4813 EB                 5467 	mov	a,r3
   4814 24 04              5468 	add	a,#_speedtable
   4816 FA                 5469 	mov	r2,a
   4817 EC                 5470 	mov	a,r4
   4818 34 63              5471 	addc	a,#(_speedtable >> 8)
   481A FF                 5472 	mov	r7,a
   481B 74 06              5473 	mov	a,#0x06
   481D 2A                 5474 	add	a,r2
   481E F5 82              5475 	mov	dpl,a
   4820 E4                 5476 	clr	a
   4821 3F                 5477 	addc	a,r7
   4822 F5 83              5478 	mov	dph,a
   4824 E0                 5479 	movx	a,@dptr
   4825 90 26 30           5480 	mov	dptr,#_TX_TRAIN_DRIVER_REG2
   4828 13                 5481 	rrc	a
   4829 E0                 5482 	movx	a,@dptr
   482A 92 E2              5483 	mov	acc.2,c
   482C F0                 5484 	movx	@dptr,a
                           5485 ;	../../shared/src/spd_ctrl.c:570: reg_PCIE_GEN12_SEL_LANE			= speedtable[gen][spdoft_pcie_gen12_sel_lane];
   482D EB                 5486 	mov	a,r3
   482E 24 04              5487 	add	a,#_speedtable
   4830 FA                 5488 	mov	r2,a
   4831 EC                 5489 	mov	a,r4
   4832 34 63              5490 	addc	a,#(_speedtable >> 8)
   4834 FF                 5491 	mov	r7,a
   4835 74 07              5492 	mov	a,#0x07
   4837 2A                 5493 	add	a,r2
   4838 F5 82              5494 	mov	dpl,a
   483A E4                 5495 	clr	a
   483B 3F                 5496 	addc	a,r7
   483C F5 83              5497 	mov	dph,a
   483E E0                 5498 	movx	a,@dptr
   483F 90 26 4D           5499 	mov	dptr,#(_TX_EMPH_CTRL_REG0 + 0x0001)
   4842 13                 5500 	rrc	a
   4843 E0                 5501 	movx	a,@dptr
   4844 92 E2              5502 	mov	acc.2,c
   4846 F0                 5503 	movx	@dptr,a
                           5504 ;	../../shared/src/spd_ctrl.c:574: reg_ANA_TX_EM_PRE_EN_LANE		= speedtable[gen][spdoft_tx_em_pre_en_lane];
   4847 EB                 5505 	mov	a,r3
   4848 24 04              5506 	add	a,#_speedtable
   484A FA                 5507 	mov	r2,a
   484B EC                 5508 	mov	a,r4
   484C 34 63              5509 	addc	a,#(_speedtable >> 8)
   484E FF                 5510 	mov	r7,a
   484F 74 09              5511 	mov	a,#0x09
   4851 2A                 5512 	add	a,r2
   4852 F5 82              5513 	mov	dpl,a
   4854 E4                 5514 	clr	a
   4855 3F                 5515 	addc	a,r7
   4856 F5 83              5516 	mov	dph,a
   4858 E0                 5517 	movx	a,@dptr
   4859 90 26 52           5518 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   485C 13                 5519 	rrc	a
   485D E0                 5520 	movx	a,@dptr
   485E 92 E6              5521 	mov	acc.6,c
   4860 F0                 5522 	movx	@dptr,a
                           5523 ;	../../shared/src/spd_ctrl.c:575: reg_ANA_TX_EM_PEAK_EN_LANE		= speedtable[gen][spdoft_tx_em_peak_en_lane];
   4861 EB                 5524 	mov	a,r3
   4862 24 04              5525 	add	a,#_speedtable
   4864 FA                 5526 	mov	r2,a
   4865 EC                 5527 	mov	a,r4
   4866 34 63              5528 	addc	a,#(_speedtable >> 8)
   4868 FF                 5529 	mov	r7,a
   4869 74 0A              5530 	mov	a,#0x0A
   486B 2A                 5531 	add	a,r2
   486C F5 82              5532 	mov	dpl,a
   486E E4                 5533 	clr	a
   486F 3F                 5534 	addc	a,r7
   4870 F5 83              5535 	mov	dph,a
   4872 E0                 5536 	movx	a,@dptr
   4873 90 26 52           5537 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   4876 13                 5538 	rrc	a
   4877 E0                 5539 	movx	a,@dptr
   4878 92 E7              5540 	mov	acc.7,c
   487A F0                 5541 	movx	@dptr,a
                           5542 ;	../../shared/src/spd_ctrl.c:576: if(phy_mode != PCIE)
   487B 90 A3 16           5543 	mov	dptr,#(_SYSTEM + 0x0002)
   487E E0                 5544 	movx	a,@dptr
   487F 54 07              5545 	anl	a,#0x07
   4881 FA                 5546 	mov	r2,a
   4882 BA 03 04           5547 	cjne	r2,#0x03,00232$
   4885 D0 02              5548 	pop	ar2
   4887 80 20              5549 	sjmp	00146$
   4889                    5550 00232$:
   4889 D0 02              5551 	pop	ar2
                           5552 ;	../../shared/src/spd_ctrl.c:577: reg_ANA_TX_EM_PO_EN_LANE	= speedtable[gen][spdoft_tx_em_po_en_lane];
   488B C0 06              5553 	push	ar6
   488D EB                 5554 	mov	a,r3
   488E 24 04              5555 	add	a,#_speedtable
   4890 FF                 5556 	mov	r7,a
   4891 EC                 5557 	mov	a,r4
   4892 34 63              5558 	addc	a,#(_speedtable >> 8)
   4894 FE                 5559 	mov	r6,a
   4895 74 0B              5560 	mov	a,#0x0B
   4897 2F                 5561 	add	a,r7
   4898 F5 82              5562 	mov	dpl,a
   489A E4                 5563 	clr	a
   489B 3E                 5564 	addc	a,r6
   489C F5 83              5565 	mov	dph,a
   489E E0                 5566 	movx	a,@dptr
   489F 90 26 52           5567 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   48A2 13                 5568 	rrc	a
   48A3 E0                 5569 	movx	a,@dptr
   48A4 92 E5              5570 	mov	acc.5,c
   48A6 F0                 5571 	movx	@dptr,a
                           5572 ;	../../shared/src/spd_ctrl.c:692: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   48A7 D0 06              5573 	pop	ar6
                           5574 ;	../../shared/src/spd_ctrl.c:577: reg_ANA_TX_EM_PO_EN_LANE	= speedtable[gen][spdoft_tx_em_po_en_lane];
   48A9                    5575 00146$:
                           5576 ;	../../shared/src/spd_ctrl.c:579: reg_SLEWRATE_EN_LANE_1_0		= speedtable[gen][spdoft_slewrate_en_lane];
   48A9 C0 06              5577 	push	ar6
   48AB EB                 5578 	mov	a,r3
   48AC 24 04              5579 	add	a,#_speedtable
   48AE FF                 5580 	mov	r7,a
   48AF EC                 5581 	mov	a,r4
   48B0 34 63              5582 	addc	a,#(_speedtable >> 8)
   48B2 FE                 5583 	mov	r6,a
   48B3 74 0C              5584 	mov	a,#0x0C
   48B5 2F                 5585 	add	a,r7
   48B6 F5 82              5586 	mov	dpl,a
   48B8 E4                 5587 	clr	a
   48B9 3E                 5588 	addc	a,r6
   48BA F5 83              5589 	mov	dph,a
   48BC E0                 5590 	movx	a,@dptr
   48BD 90 00 4C           5591 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   48C0 03                 5592 	rr	a
   48C1 03                 5593 	rr	a
   48C2 54 C0              5594 	anl	a,#(0xc0&0xc0)
   48C4 F5 F0              5595 	mov	b,a
   48C6 E0                 5596 	movx	a,@dptr
   48C7 54 3F              5597 	anl	a,#0x3f
   48C9 45 F0              5598 	orl	a,b
   48CB F0                 5599 	movx	@dptr,a
                           5600 ;	../../shared/src/spd_ctrl.c:580: reg_SLEWCTRL1_LANE_1_0			= speedtable[gen][spdoft_slewctrl1_lane];
   48CC EB                 5601 	mov	a,r3
   48CD 24 04              5602 	add	a,#_speedtable
   48CF FE                 5603 	mov	r6,a
   48D0 EC                 5604 	mov	a,r4
   48D1 34 63              5605 	addc	a,#(_speedtable >> 8)
   48D3 FF                 5606 	mov	r7,a
   48D4 74 0D              5607 	mov	a,#0x0D
   48D6 2E                 5608 	add	a,r6
   48D7 F5 82              5609 	mov	dpl,a
   48D9 E4                 5610 	clr	a
   48DA 3F                 5611 	addc	a,r7
   48DB F5 83              5612 	mov	dph,a
   48DD E0                 5613 	movx	a,@dptr
   48DE 90 00 4C           5614 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   48E1 25 E0              5615 	add	a,acc
   48E3 25 E0              5616 	add	a,acc
   48E5 54 0C              5617 	anl	a,#0x0c
   48E7 F5 F0              5618 	mov	b,a
   48E9 E0                 5619 	movx	a,@dptr
   48EA 54 F3              5620 	anl	a,#0xf3
   48EC 45 F0              5621 	orl	a,b
   48EE F0                 5622 	movx	@dptr,a
                           5623 ;	../../shared/src/spd_ctrl.c:581: reg_SLEWCTRL0_LANE_1_0			= speedtable[gen][spdoft_slewctrl0_lane];
   48EF EB                 5624 	mov	a,r3
   48F0 24 04              5625 	add	a,#_speedtable
   48F2 FE                 5626 	mov	r6,a
   48F3 EC                 5627 	mov	a,r4
   48F4 34 63              5628 	addc	a,#(_speedtable >> 8)
   48F6 FF                 5629 	mov	r7,a
   48F7 74 0E              5630 	mov	a,#0x0E
   48F9 2E                 5631 	add	a,r6
   48FA F5 82              5632 	mov	dpl,a
   48FC E4                 5633 	clr	a
   48FD 3F                 5634 	addc	a,r7
   48FE F5 83              5635 	mov	dph,a
   4900 E0                 5636 	movx	a,@dptr
   4901 90 00 4C           5637 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   4904 C4                 5638 	swap	a
   4905 54 30              5639 	anl	a,#(0xf0&0x30)
   4907 F5 F0              5640 	mov	b,a
   4909 E0                 5641 	movx	a,@dptr
   490A 54 CF              5642 	anl	a,#0xcf
   490C 45 F0              5643 	orl	a,b
   490E F0                 5644 	movx	@dptr,a
                           5645 ;	../../shared/src/spd_ctrl.c:582: reg_TX_TRAIN_PAT_SEL_LANE_1_0		= speedtable[gen][spdoft_tx_train_pat_sel_lane];
   490F EB                 5646 	mov	a,r3
   4910 24 04              5647 	add	a,#_speedtable
   4912 FE                 5648 	mov	r6,a
   4913 EC                 5649 	mov	a,r4
   4914 34 63              5650 	addc	a,#(_speedtable >> 8)
   4916 FF                 5651 	mov	r7,a
   4917 74 0F              5652 	mov	a,#0x0F
   4919 2E                 5653 	add	a,r6
   491A F5 82              5654 	mov	dpl,a
   491C E4                 5655 	clr	a
   491D 3F                 5656 	addc	a,r7
   491E F5 83              5657 	mov	dph,a
   4920 E0                 5658 	movx	a,@dptr
   4921 90 23 00           5659 	mov	dptr,#_PT_CONTROL0
   4924 C4                 5660 	swap	a
   4925 54 30              5661 	anl	a,#(0xf0&0x30)
   4927 F5 F0              5662 	mov	b,a
   4929 E0                 5663 	movx	a,@dptr
   492A 54 CF              5664 	anl	a,#0xcf
   492C 45 F0              5665 	orl	a,b
   492E F0                 5666 	movx	@dptr,a
                           5667 ;	../../shared/src/spd_ctrl.c:583: reg_TRAIN_PAT_NUM_LANE_8_0_b0		= speedtable[gen][spdoft_train_pat_num_lane];
   492F EB                 5668 	mov	a,r3
   4930 24 04              5669 	add	a,#_speedtable
   4932 FE                 5670 	mov	r6,a
   4933 EC                 5671 	mov	a,r4
   4934 34 63              5672 	addc	a,#(_speedtable >> 8)
   4936 FF                 5673 	mov	r7,a
   4937 74 10              5674 	mov	a,#0x10
   4939 2E                 5675 	add	a,r6
   493A F5 82              5676 	mov	dpl,a
   493C E4                 5677 	clr	a
   493D 3F                 5678 	addc	a,r7
   493E F5 83              5679 	mov	dph,a
   4940 E0                 5680 	movx	a,@dptr
   4941 90 21 24           5681 	mov	dptr,#_FRAME_SYNC_DET_REG1
   4944 F0                 5682 	movx	@dptr,a
                           5683 ;	../../shared/src/spd_ctrl.c:584: reg_TRAIN_PAT_NUM_LANE_8_0_b1		= speedtable[gen][spdoft_train_pat_num_lane+1];
   4945 EB                 5684 	mov	a,r3
   4946 24 04              5685 	add	a,#_speedtable
   4948 FE                 5686 	mov	r6,a
   4949 EC                 5687 	mov	a,r4
   494A 34 63              5688 	addc	a,#(_speedtable >> 8)
   494C FF                 5689 	mov	r7,a
   494D 74 11              5690 	mov	a,#0x11
   494F 2E                 5691 	add	a,r6
   4950 F5 82              5692 	mov	dpl,a
   4952 E4                 5693 	clr	a
   4953 3F                 5694 	addc	a,r7
   4954 F5 83              5695 	mov	dph,a
   4956 E0                 5696 	movx	a,@dptr
   4957 90 21 25           5697 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0001)
   495A 13                 5698 	rrc	a
   495B E0                 5699 	movx	a,@dptr
   495C 92 E0              5700 	mov	acc.0,c
   495E F0                 5701 	movx	@dptr,a
                           5702 ;	../../shared/src/spd_ctrl.c:585: reg_TX_TRAIN_PAT_TOGGLE_LANE		= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
   495F EB                 5703 	mov	a,r3
   4960 24 04              5704 	add	a,#_speedtable
   4962 FE                 5705 	mov	r6,a
   4963 EC                 5706 	mov	a,r4
   4964 34 63              5707 	addc	a,#(_speedtable >> 8)
   4966 FF                 5708 	mov	r7,a
   4967 74 12              5709 	mov	a,#0x12
   4969 2E                 5710 	add	a,r6
   496A F5 82              5711 	mov	dpl,a
   496C E4                 5712 	clr	a
   496D 3F                 5713 	addc	a,r7
   496E F5 83              5714 	mov	dph,a
   4970 E0                 5715 	movx	a,@dptr
   4971 90 26 25           5716 	mov	dptr,#(_TX_TRAIN_PATTTERN_REG0 + 0x0001)
   4974 13                 5717 	rrc	a
   4975 E0                 5718 	movx	a,@dptr
   4976 92 E1              5719 	mov	acc.1,c
   4978 F0                 5720 	movx	@dptr,a
                           5721 ;	../../shared/src/spd_ctrl.c:586: reg_PACKET_SYNC_DIS_LANE		= speedtable[gen][spdoft_packet_sync_dis_lane];
   4979 EB                 5722 	mov	a,r3
   497A 24 04              5723 	add	a,#_speedtable
   497C FE                 5724 	mov	r6,a
   497D EC                 5725 	mov	a,r4
   497E 34 63              5726 	addc	a,#(_speedtable >> 8)
   4980 FF                 5727 	mov	r7,a
   4981 74 13              5728 	mov	a,#0x13
   4983 2E                 5729 	add	a,r6
   4984 F5 82              5730 	mov	dpl,a
   4986 E4                 5731 	clr	a
   4987 3F                 5732 	addc	a,r7
   4988 F5 83              5733 	mov	dph,a
   498A E0                 5734 	movx	a,@dptr
   498B 90 21 25           5735 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0001)
   498E 13                 5736 	rrc	a
   498F E0                 5737 	movx	a,@dptr
   4990 92 E7              5738 	mov	acc.7,c
   4992 F0                 5739 	movx	@dptr,a
                           5740 ;	../../shared/src/spd_ctrl.c:587: reg_SYNC_DET_DIS_LANE			= speedtable[gen][spdoft_sync_det_dis_lane];
   4993 EB                 5741 	mov	a,r3
   4994 24 04              5742 	add	a,#_speedtable
   4996 FE                 5743 	mov	r6,a
   4997 EC                 5744 	mov	a,r4
   4998 34 63              5745 	addc	a,#(_speedtable >> 8)
   499A FF                 5746 	mov	r7,a
   499B 74 14              5747 	mov	a,#0x14
   499D 2E                 5748 	add	a,r6
   499E F5 82              5749 	mov	dpl,a
   49A0 E4                 5750 	clr	a
   49A1 3F                 5751 	addc	a,r7
   49A2 F5 83              5752 	mov	dph,a
   49A4 E0                 5753 	movx	a,@dptr
   49A5 90 21 26           5754 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   49A8 13                 5755 	rrc	a
   49A9 E0                 5756 	movx	a,@dptr
   49AA 92 E0              5757 	mov	acc.0,c
   49AC F0                 5758 	movx	@dptr,a
                           5759 ;	../../shared/src/spd_ctrl.c:591: rx_pll_rate				= speedtable[gen][spdoft_pll_rate_sel_rx]; 
   49AD EB                 5760 	mov	a,r3
   49AE 24 04              5761 	add	a,#_speedtable
   49B0 FE                 5762 	mov	r6,a
   49B1 EC                 5763 	mov	a,r4
   49B2 34 63              5764 	addc	a,#(_speedtable >> 8)
   49B4 FF                 5765 	mov	r7,a
   49B5 74 15              5766 	mov	a,#0x15
   49B7 2E                 5767 	add	a,r6
   49B8 F5 82              5768 	mov	dpl,a
   49BA E4                 5769 	clr	a
   49BB 3F                 5770 	addc	a,r7
   49BC F5 83              5771 	mov	dph,a
   49BE E0                 5772 	movx	a,@dptr
   49BF 24 FF              5773 	add	a,#0xff
   49C1 92 0E              5774 	mov	_rx_pll_rate,c
                           5775 ;	../../shared/src/spd_ctrl.c:592: if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
   49C3 90 A3 16           5776 	mov	dptr,#(_SYSTEM + 0x0002)
   49C6 E0                 5777 	movx	a,@dptr
   49C7 54 07              5778 	anl	a,#0x07
   49C9 FE                 5779 	mov	r6,a
   49CA BE 04 02           5780 	cjne	r6,#0x04,00233$
   49CD 80 04              5781 	sjmp	00234$
   49CF                    5782 00233$:
   49CF D0 06              5783 	pop	ar6
   49D1 80 04              5784 	sjmp	00148$
   49D3                    5785 00234$:
   49D3 D0 06              5786 	pop	ar6
   49D5 C2 0E              5787 	clr	_rx_pll_rate
   49D7                    5788 00148$:
                           5789 ;	../../shared/src/spd_ctrl.c:593: reg_RX_CK_SEL_LANE 			= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);  
   49D7 C0 02              5790 	push	ar2
   49D9 EB                 5791 	mov	a,r3
   49DA 24 04              5792 	add	a,#_speedtable
   49DC FF                 5793 	mov	r7,a
   49DD EC                 5794 	mov	a,r4
   49DE 34 63              5795 	addc	a,#(_speedtable >> 8)
   49E0 FA                 5796 	mov	r2,a
   49E1 74 16              5797 	mov	a,#0x16
   49E3 2F                 5798 	add	a,r7
   49E4 F5 82              5799 	mov	dpl,a
   49E6 E4                 5800 	clr	a
   49E7 3A                 5801 	addc	a,r2
   49E8 F5 83              5802 	mov	dph,a
   49EA EE                 5803 	mov	a,r6
   49EB 52 05              5804 	anl	ar5,a
   49ED E0                 5805 	movx	a,@dptr
   49EE 42 05              5806 	orl	ar5,a
   49F0 90 02 58           5807 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   49F3 ED                 5808 	mov	a,r5
   49F4 13                 5809 	rrc	a
   49F5 E0                 5810 	movx	a,@dptr
   49F6 92 E4              5811 	mov	acc.4,c
   49F8 F0                 5812 	movx	@dptr,a
                           5813 ;	../../shared/src/spd_ctrl.c:594: reg_INTPI_LANE_3_0			= speedtable[gen][spdoft_intpi_lane]; 
   49F9 EB                 5814 	mov	a,r3
   49FA 24 04              5815 	add	a,#_speedtable
   49FC FA                 5816 	mov	r2,a
   49FD EC                 5817 	mov	a,r4
   49FE 34 63              5818 	addc	a,#(_speedtable >> 8)
   4A00 FD                 5819 	mov	r5,a
   4A01 74 1A              5820 	mov	a,#0x1A
   4A03 2A                 5821 	add	a,r2
   4A04 F5 82              5822 	mov	dpl,a
   4A06 E4                 5823 	clr	a
   4A07 3D                 5824 	addc	a,r5
   4A08 F5 83              5825 	mov	dph,a
   4A0A E0                 5826 	movx	a,@dptr
   4A0B 90 00 2C           5827 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_11
   4A0E 25 E0              5828 	add	a,acc
   4A10 54 1E              5829 	anl	a,#0x1e
   4A12 F5 F0              5830 	mov	b,a
   4A14 E0                 5831 	movx	a,@dptr
   4A15 54 E1              5832 	anl	a,#0xe1
   4A17 45 F0              5833 	orl	a,b
   4A19 F0                 5834 	movx	@dptr,a
                           5835 ;	../../shared/src/spd_ctrl.c:595: reg_INTPR_LANE_1_0			= speedtable[gen][spdoft_intpr_lane];
   4A1A EB                 5836 	mov	a,r3
   4A1B 24 04              5837 	add	a,#_speedtable
   4A1D FA                 5838 	mov	r2,a
   4A1E EC                 5839 	mov	a,r4
   4A1F 34 63              5840 	addc	a,#(_speedtable >> 8)
   4A21 FD                 5841 	mov	r5,a
   4A22 74 1B              5842 	mov	a,#0x1B
   4A24 2A                 5843 	add	a,r2
   4A25 F5 82              5844 	mov	dpl,a
   4A27 E4                 5845 	clr	a
   4A28 3D                 5846 	addc	a,r5
   4A29 F5 83              5847 	mov	dph,a
   4A2B E0                 5848 	movx	a,@dptr
   4A2C 90 02 14           5849 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_133
   4A2F 54 03              5850 	anl	a,#0x03
   4A31 F5 F0              5851 	mov	b,a
   4A33 E0                 5852 	movx	a,@dptr
   4A34 54 FC              5853 	anl	a,#0xfc
   4A36 45 F0              5854 	orl	a,b
   4A38 F0                 5855 	movx	@dptr,a
                           5856 ;	../../shared/src/spd_ctrl.c:596: reg_DLL_FREQ_SEL_LANE_1_0		= speedtable[gen][spdoft_dll_freq_sel_lane];
   4A39 EB                 5857 	mov	a,r3
   4A3A 24 04              5858 	add	a,#_speedtable
   4A3C FA                 5859 	mov	r2,a
   4A3D EC                 5860 	mov	a,r4
   4A3E 34 63              5861 	addc	a,#(_speedtable >> 8)
   4A40 FD                 5862 	mov	r5,a
   4A41 74 1C              5863 	mov	a,#0x1C
   4A43 2A                 5864 	add	a,r2
   4A44 F5 82              5865 	mov	dpl,a
   4A46 E4                 5866 	clr	a
   4A47 3D                 5867 	addc	a,r5
   4A48 F5 83              5868 	mov	dph,a
   4A4A E0                 5869 	movx	a,@dptr
   4A4B 90 00 1C           5870 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   4A4E 03                 5871 	rr	a
   4A4F 03                 5872 	rr	a
   4A50 54 C0              5873 	anl	a,#(0xc0&0xc0)
   4A52 F5 F0              5874 	mov	b,a
   4A54 E0                 5875 	movx	a,@dptr
   4A55 54 3F              5876 	anl	a,#0x3f
   4A57 45 F0              5877 	orl	a,b
   4A59 F0                 5878 	movx	@dptr,a
                           5879 ;	../../shared/src/spd_ctrl.c:597: if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
   4A5A EB                 5880 	mov	a,r3
   4A5B 24 04              5881 	add	a,#_speedtable
   4A5D FA                 5882 	mov	r2,a
   4A5E EC                 5883 	mov	a,r4
   4A5F 34 63              5884 	addc	a,#(_speedtable >> 8)
   4A61 FD                 5885 	mov	r5,a
   4A62 74 1C              5886 	mov	a,#0x1C
   4A64 2A                 5887 	add	a,r2
   4A65 F5 82              5888 	mov	dpl,a
   4A67 E4                 5889 	clr	a
   4A68 3D                 5890 	addc	a,r5
   4A69 F5 83              5891 	mov	dph,a
   4A6B E0                 5892 	movx	a,@dptr
   4A6C D0 02              5893 	pop	ar2
   4A6E 30 E2 09           5894 	jnb	acc.2,00151$
   4A71 90 00 74           5895 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   4A74 E0                 5896 	movx	a,@dptr
   4A75 44 40              5897 	orl	a,#0x40
   4A77 F0                 5898 	movx	@dptr,a
   4A78 80 07              5899 	sjmp	00152$
   4A7A                    5900 00151$:
                           5901 ;	../../shared/src/spd_ctrl.c:598: else reg_DLL_FREQ_SEL_LANE_2 = 0;
   4A7A 90 00 74           5902 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   4A7D E0                 5903 	movx	a,@dptr
   4A7E 54 BF              5904 	anl	a,#0xbf
   4A80 F0                 5905 	movx	@dptr,a
   4A81                    5906 00152$:
                           5907 ;	../../shared/src/spd_ctrl.c:599: reg_EOM_DLL_FREQ_SEL_LANE_1_0		= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
   4A81 EB                 5908 	mov	a,r3
   4A82 24 04              5909 	add	a,#_speedtable
   4A84 FD                 5910 	mov	r5,a
   4A85 EC                 5911 	mov	a,r4
   4A86 34 63              5912 	addc	a,#(_speedtable >> 8)
   4A88 FE                 5913 	mov	r6,a
   4A89 74 1D              5914 	mov	a,#0x1D
   4A8B 2D                 5915 	add	a,r5
   4A8C F5 82              5916 	mov	dpl,a
   4A8E E4                 5917 	clr	a
   4A8F 3E                 5918 	addc	a,r6
   4A90 F5 83              5919 	mov	dph,a
   4A92 E0                 5920 	movx	a,@dptr
   4A93 90 00 20           5921 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   4A96 54 03              5922 	anl	a,#0x03
   4A98 F5 F0              5923 	mov	b,a
   4A9A E0                 5924 	movx	a,@dptr
   4A9B 54 FC              5925 	anl	a,#0xfc
   4A9D 45 F0              5926 	orl	a,b
   4A9F F0                 5927 	movx	@dptr,a
                           5928 ;	../../shared/src/spd_ctrl.c:600: if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
   4AA0 EB                 5929 	mov	a,r3
   4AA1 24 04              5930 	add	a,#_speedtable
   4AA3 FD                 5931 	mov	r5,a
   4AA4 EC                 5932 	mov	a,r4
   4AA5 34 63              5933 	addc	a,#(_speedtable >> 8)
   4AA7 FE                 5934 	mov	r6,a
   4AA8 74 1D              5935 	mov	a,#0x1D
   4AAA 2D                 5936 	add	a,r5
   4AAB F5 82              5937 	mov	dpl,a
   4AAD E4                 5938 	clr	a
   4AAE 3E                 5939 	addc	a,r6
   4AAF F5 83              5940 	mov	dph,a
   4AB1 E0                 5941 	movx	a,@dptr
   4AB2 FD                 5942 	mov	r5,a
   4AB3 30 E2 09           5943 	jnb	acc.2,00154$
   4AB6 90 00 74           5944 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   4AB9 E0                 5945 	movx	a,@dptr
   4ABA 44 80              5946 	orl	a,#0x80
   4ABC F0                 5947 	movx	@dptr,a
   4ABD 80 07              5948 	sjmp	00155$
   4ABF                    5949 00154$:
                           5950 ;	../../shared/src/spd_ctrl.c:601: else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
   4ABF 90 00 74           5951 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   4AC2 E0                 5952 	movx	a,@dptr
   4AC3 54 7F              5953 	anl	a,#0x7f
   4AC5 F0                 5954 	movx	@dptr,a
   4AC6                    5955 00155$:
                           5956 ;	../../shared/src/spd_ctrl.c:602: reg_ALIGN90_8G_EN_LANE			= speedtable[gen][spdoft_align90_8g_en_lane];
   4AC6 EB                 5957 	mov	a,r3
   4AC7 24 04              5958 	add	a,#_speedtable
   4AC9 FD                 5959 	mov	r5,a
   4ACA EC                 5960 	mov	a,r4
   4ACB 34 63              5961 	addc	a,#(_speedtable >> 8)
   4ACD FE                 5962 	mov	r6,a
   4ACE 74 1E              5963 	mov	a,#0x1E
   4AD0 2D                 5964 	add	a,r5
   4AD1 F5 82              5965 	mov	dpl,a
   4AD3 E4                 5966 	clr	a
   4AD4 3E                 5967 	addc	a,r6
   4AD5 F5 83              5968 	mov	dph,a
   4AD7 E0                 5969 	movx	a,@dptr
   4AD8 90 00 70           5970 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_28
   4ADB 13                 5971 	rrc	a
   4ADC E0                 5972 	movx	a,@dptr
   4ADD 92 E3              5973 	mov	acc.3,c
   4ADF F0                 5974 	movx	@dptr,a
                           5975 ;	../../shared/src/spd_ctrl.c:603: reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
   4AE0 EB                 5976 	mov	a,r3
   4AE1 24 04              5977 	add	a,#_speedtable
   4AE3 FD                 5978 	mov	r5,a
   4AE4 EC                 5979 	mov	a,r4
   4AE5 34 63              5980 	addc	a,#(_speedtable >> 8)
   4AE7 FE                 5981 	mov	r6,a
   4AE8 74 1F              5982 	mov	a,#0x1F
   4AEA 2D                 5983 	add	a,r5
   4AEB F5 82              5984 	mov	dpl,a
   4AED E4                 5985 	clr	a
   4AEE 3E                 5986 	addc	a,r6
   4AEF F5 83              5987 	mov	dph,a
   4AF1 E0                 5988 	movx	a,@dptr
   4AF2 90 02 38           5989 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   4AF5 C4                 5990 	swap	a
   4AF6 23                 5991 	rl	a
   4AF7 54 E0              5992 	anl	a,#(0xe0&0xe0)
   4AF9 F5 F0              5993 	mov	b,a
   4AFB E0                 5994 	movx	a,@dptr
   4AFC 54 1F              5995 	anl	a,#0x1f
   4AFE 45 F0              5996 	orl	a,b
   4B00 F0                 5997 	movx	@dptr,a
                           5998 ;	../../shared/src/spd_ctrl.c:604: reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
   4B01 EB                 5999 	mov	a,r3
   4B02 24 04              6000 	add	a,#_speedtable
   4B04 FD                 6001 	mov	r5,a
   4B05 EC                 6002 	mov	a,r4
   4B06 34 63              6003 	addc	a,#(_speedtable >> 8)
   4B08 FE                 6004 	mov	r6,a
   4B09 74 20              6005 	mov	a,#0x20
   4B0B 2D                 6006 	add	a,r5
   4B0C F5 82              6007 	mov	dpl,a
   4B0E E4                 6008 	clr	a
   4B0F 3E                 6009 	addc	a,r6
   4B10 F5 83              6010 	mov	dph,a
   4B12 E0                 6011 	movx	a,@dptr
   4B13 90 02 38           6012 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   4B16 13                 6013 	rrc	a
   4B17 E0                 6014 	movx	a,@dptr
   4B18 92 E4              6015 	mov	acc.4,c
   4B1A F0                 6016 	movx	@dptr,a
                           6017 ;	../../shared/src/spd_ctrl.c:605: reg_RX_SELMUFI_LANE_2_0			= speedtable[gen][spdoft_rx_selmufi_lane];
   4B1B EB                 6018 	mov	a,r3
   4B1C 24 04              6019 	add	a,#_speedtable
   4B1E FD                 6020 	mov	r5,a
   4B1F EC                 6021 	mov	a,r4
   4B20 34 63              6022 	addc	a,#(_speedtable >> 8)
   4B22 FE                 6023 	mov	r6,a
   4B23 74 22              6024 	mov	a,#0x22
   4B25 2D                 6025 	add	a,r5
   4B26 F5 82              6026 	mov	dpl,a
   4B28 E4                 6027 	clr	a
   4B29 3E                 6028 	addc	a,r6
   4B2A F5 83              6029 	mov	dph,a
   4B2C E0                 6030 	movx	a,@dptr
   4B2D 90 21 65           6031 	mov	dptr,#(_DTL_REG1 + 0x0001)
   4B30 25 E0              6032 	add	a,acc
   4B32 25 E0              6033 	add	a,acc
   4B34 54 1C              6034 	anl	a,#0x1c
   4B36 F5 F0              6035 	mov	b,a
   4B38 E0                 6036 	movx	a,@dptr
   4B39 54 E3              6037 	anl	a,#0xe3
   4B3B 45 F0              6038 	orl	a,b
   4B3D F0                 6039 	movx	@dptr,a
                           6040 ;	../../shared/src/spd_ctrl.c:606: reg_REG_SELMUPI_LANE_3_0		= speedtable[gen][spdoft_reg_selmupi_lane];
   4B3E EB                 6041 	mov	a,r3
   4B3F 24 04              6042 	add	a,#_speedtable
   4B41 FD                 6043 	mov	r5,a
   4B42 EC                 6044 	mov	a,r4
   4B43 34 63              6045 	addc	a,#(_speedtable >> 8)
   4B45 FE                 6046 	mov	r6,a
   4B46 74 24              6047 	mov	a,#0x24
   4B48 2D                 6048 	add	a,r5
   4B49 F5 82              6049 	mov	dpl,a
   4B4B E4                 6050 	clr	a
   4B4C 3E                 6051 	addc	a,r6
   4B4D F5 83              6052 	mov	dph,a
   4B4F E0                 6053 	movx	a,@dptr
   4B50 90 02 2C           6054 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_139
   4B53 54 0F              6055 	anl	a,#0x0f
   4B55 F5 F0              6056 	mov	b,a
   4B57 E0                 6057 	movx	a,@dptr
   4B58 54 F0              6058 	anl	a,#0xf0
   4B5A 45 F0              6059 	orl	a,b
   4B5C F0                 6060 	movx	@dptr,a
                           6061 ;	../../shared/src/spd_ctrl.c:607: reg_REG_SELMUPF_LANE_3_0		= speedtable[gen][spdoft_reg_selmupf_lane];
   4B5D EB                 6062 	mov	a,r3
   4B5E 24 04              6063 	add	a,#_speedtable
   4B60 FD                 6064 	mov	r5,a
   4B61 EC                 6065 	mov	a,r4
   4B62 34 63              6066 	addc	a,#(_speedtable >> 8)
   4B64 FE                 6067 	mov	r6,a
   4B65 74 25              6068 	mov	a,#0x25
   4B67 2D                 6069 	add	a,r5
   4B68 F5 82              6070 	mov	dpl,a
   4B6A E4                 6071 	clr	a
   4B6B 3E                 6072 	addc	a,r6
   4B6C F5 83              6073 	mov	dph,a
   4B6E E0                 6074 	movx	a,@dptr
   4B6F 90 02 30           6075 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_140
   4B72 C4                 6076 	swap	a
   4B73 54 F0              6077 	anl	a,#(0xf0&0xf0)
   4B75 F5 F0              6078 	mov	b,a
   4B77 E0                 6079 	movx	a,@dptr
   4B78 54 0F              6080 	anl	a,#0x0f
   4B7A 45 F0              6081 	orl	a,b
   4B7C F0                 6082 	movx	@dptr,a
                           6083 ;	../../shared/src/spd_ctrl.c:608: reg_DTL_CLK_MODE_LANE_1_0		= speedtable[gen][spdoft_dtl_clk_mode_lane];
   4B7D EB                 6084 	mov	a,r3
   4B7E 24 04              6085 	add	a,#_speedtable
   4B80 FD                 6086 	mov	r5,a
   4B81 EC                 6087 	mov	a,r4
   4B82 34 63              6088 	addc	a,#(_speedtable >> 8)
   4B84 FE                 6089 	mov	r6,a
   4B85 74 2A              6090 	mov	a,#0x2A
   4B87 2D                 6091 	add	a,r5
   4B88 F5 82              6092 	mov	dpl,a
   4B8A E4                 6093 	clr	a
   4B8B 3E                 6094 	addc	a,r6
   4B8C F5 83              6095 	mov	dph,a
   4B8E E0                 6096 	movx	a,@dptr
   4B8F 90 21 63           6097 	mov	dptr,#(_DTL_REG0 + 0x0003)
   4B92 C4                 6098 	swap	a
   4B93 54 30              6099 	anl	a,#(0xf0&0x30)
   4B95 F5 F0              6100 	mov	b,a
   4B97 E0                 6101 	movx	a,@dptr
   4B98 54 CF              6102 	anl	a,#0xcf
   4B9A 45 F0              6103 	orl	a,b
   4B9C F0                 6104 	movx	@dptr,a
                           6105 ;	../../shared/src/spd_ctrl.c:609: reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
   4B9D EB                 6106 	mov	a,r3
   4B9E 24 04              6107 	add	a,#_speedtable
   4BA0 FD                 6108 	mov	r5,a
   4BA1 EC                 6109 	mov	a,r4
   4BA2 34 63              6110 	addc	a,#(_speedtable >> 8)
   4BA4 FE                 6111 	mov	r6,a
   4BA5 74 2B              6112 	mov	a,#0x2B
   4BA7 2D                 6113 	add	a,r5
   4BA8 F5 82              6114 	mov	dpl,a
   4BAA E4                 6115 	clr	a
   4BAB 3E                 6116 	addc	a,r6
   4BAC F5 83              6117 	mov	dph,a
   4BAE E0                 6118 	movx	a,@dptr
   4BAF 90 21 68           6119 	mov	dptr,#_DTL_REG2
   4BB2 F0                 6120 	movx	@dptr,a
                           6121 ;	../../shared/src/spd_ctrl.c:610: reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
   4BB3 EB                 6122 	mov	a,r3
   4BB4 24 04              6123 	add	a,#_speedtable
   4BB6 FD                 6124 	mov	r5,a
   4BB7 EC                 6125 	mov	a,r4
   4BB8 34 63              6126 	addc	a,#(_speedtable >> 8)
   4BBA FE                 6127 	mov	r6,a
   4BBB 74 2C              6128 	mov	a,#0x2C
   4BBD 2D                 6129 	add	a,r5
   4BBE F5 82              6130 	mov	dpl,a
   4BC0 E4                 6131 	clr	a
   4BC1 3E                 6132 	addc	a,r6
   4BC2 F5 83              6133 	mov	dph,a
   4BC4 E0                 6134 	movx	a,@dptr
   4BC5 90 21 69           6135 	mov	dptr,#(_DTL_REG2 + 0x0001)
   4BC8 54 3F              6136 	anl	a,#0x3f
   4BCA F5 F0              6137 	mov	b,a
   4BCC E0                 6138 	movx	a,@dptr
   4BCD 54 C0              6139 	anl	a,#0xc0
   4BCF 45 F0              6140 	orl	a,b
   4BD1 F0                 6141 	movx	@dptr,a
                           6142 ;	../../shared/src/spd_ctrl.c:611: reg_INIT_RXFOFFS_LANE_9_0_b0		= speedtable[gen][spdoft_init_rxfoffs_lane];
   4BD2 EB                 6143 	mov	a,r3
   4BD3 24 04              6144 	add	a,#_speedtable
   4BD5 FD                 6145 	mov	r5,a
   4BD6 EC                 6146 	mov	a,r4
   4BD7 34 63              6147 	addc	a,#(_speedtable >> 8)
   4BD9 FE                 6148 	mov	r6,a
   4BDA 74 2D              6149 	mov	a,#0x2D
   4BDC 2D                 6150 	add	a,r5
   4BDD F5 82              6151 	mov	dpl,a
   4BDF E4                 6152 	clr	a
   4BE0 3E                 6153 	addc	a,r6
   4BE1 F5 83              6154 	mov	dph,a
   4BE3 E0                 6155 	movx	a,@dptr
   4BE4 90 21 64           6156 	mov	dptr,#_DTL_REG1
   4BE7 F0                 6157 	movx	@dptr,a
                           6158 ;	../../shared/src/spd_ctrl.c:612: reg_INIT_RXFOFFS_LANE_9_0_b1		= speedtable[gen][spdoft_init_rxfoffs_lane+1];
   4BE8 EB                 6159 	mov	a,r3
   4BE9 24 04              6160 	add	a,#_speedtable
   4BEB FD                 6161 	mov	r5,a
   4BEC EC                 6162 	mov	a,r4
   4BED 34 63              6163 	addc	a,#(_speedtable >> 8)
   4BEF FE                 6164 	mov	r6,a
   4BF0 74 2E              6165 	mov	a,#0x2E
   4BF2 2D                 6166 	add	a,r5
   4BF3 F5 82              6167 	mov	dpl,a
   4BF5 E4                 6168 	clr	a
   4BF6 3E                 6169 	addc	a,r6
   4BF7 F5 83              6170 	mov	dph,a
   4BF9 E0                 6171 	movx	a,@dptr
   4BFA 90 21 65           6172 	mov	dptr,#(_DTL_REG1 + 0x0001)
   4BFD 54 03              6173 	anl	a,#0x03
   4BFF F5 F0              6174 	mov	b,a
   4C01 E0                 6175 	movx	a,@dptr
   4C02 54 FC              6176 	anl	a,#0xfc
   4C04 45 F0              6177 	orl	a,b
   4C06 F0                 6178 	movx	@dptr,a
                           6179 ;	../../shared/src/spd_ctrl.c:615: reg_RXCLK_25M_CTRL_LANE_1_0		= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
   4C07 EB                 6180 	mov	a,r3
   4C08 24 04              6181 	add	a,#_speedtable
   4C0A FD                 6182 	mov	r5,a
   4C0B EC                 6183 	mov	a,r4
   4C0C 34 63              6184 	addc	a,#(_speedtable >> 8)
   4C0E FE                 6185 	mov	r6,a
   4C0F 74 26              6186 	mov	a,#0x26
   4C11 2D                 6187 	add	a,r5
   4C12 F5 82              6188 	mov	dpl,a
   4C14 E4                 6189 	clr	a
   4C15 3E                 6190 	addc	a,r6
   4C16 F5 83              6191 	mov	dph,a
   4C18 E0                 6192 	movx	a,@dptr
   4C19 90 02 60           6193 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4C1C 25 E0              6194 	add	a,acc
   4C1E 54 06              6195 	anl	a,#0x06
   4C20 F5 F0              6196 	mov	b,a
   4C22 E0                 6197 	movx	a,@dptr
   4C23 54 F9              6198 	anl	a,#0xf9
   4C25 45 F0              6199 	orl	a,b
   4C27 F0                 6200 	movx	@dptr,a
                           6201 ;	../../shared/src/spd_ctrl.c:616: reg_RXCLK_25M_DIV1P5_EN_LANE		= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
   4C28 EB                 6202 	mov	a,r3
   4C29 24 04              6203 	add	a,#_speedtable
   4C2B FD                 6204 	mov	r5,a
   4C2C EC                 6205 	mov	a,r4
   4C2D 34 63              6206 	addc	a,#(_speedtable >> 8)
   4C2F FE                 6207 	mov	r6,a
   4C30 74 27              6208 	mov	a,#0x27
   4C32 2D                 6209 	add	a,r5
   4C33 F5 82              6210 	mov	dpl,a
   4C35 E4                 6211 	clr	a
   4C36 3E                 6212 	addc	a,r6
   4C37 F5 83              6213 	mov	dph,a
   4C39 E0                 6214 	movx	a,@dptr
   4C3A 90 02 60           6215 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4C3D 13                 6216 	rrc	a
   4C3E E0                 6217 	movx	a,@dptr
   4C3F 92 E0              6218 	mov	acc.0,c
   4C41 F0                 6219 	movx	@dptr,a
                           6220 ;	../../shared/src/spd_ctrl.c:617: reg_RXCLK_25M_DIV_LANE_7_0		= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
   4C42 EB                 6221 	mov	a,r3
   4C43 24 04              6222 	add	a,#_speedtable
   4C45 FD                 6223 	mov	r5,a
   4C46 EC                 6224 	mov	a,r4
   4C47 34 63              6225 	addc	a,#(_speedtable >> 8)
   4C49 FE                 6226 	mov	r6,a
   4C4A 74 28              6227 	mov	a,#0x28
   4C4C 2D                 6228 	add	a,r5
   4C4D F5 82              6229 	mov	dpl,a
   4C4F E4                 6230 	clr	a
   4C50 3E                 6231 	addc	a,r6
   4C51 F5 83              6232 	mov	dph,a
   4C53 E0                 6233 	movx	a,@dptr
   4C54 90 02 68           6234 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_154
   4C57 F0                 6235 	movx	@dptr,a
                           6236 ;	../../shared/src/spd_ctrl.c:618: reg_RXCLK_25M_FIX_DIV_EN_LANE		= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
   4C58 EB                 6237 	mov	a,r3
   4C59 24 04              6238 	add	a,#_speedtable
   4C5B FD                 6239 	mov	r5,a
   4C5C EC                 6240 	mov	a,r4
   4C5D 34 63              6241 	addc	a,#(_speedtable >> 8)
   4C5F FE                 6242 	mov	r6,a
   4C60 74 29              6243 	mov	a,#0x29
   4C62 2D                 6244 	add	a,r5
   4C63 F5 82              6245 	mov	dpl,a
   4C65 E4                 6246 	clr	a
   4C66 3E                 6247 	addc	a,r6
   4C67 F5 83              6248 	mov	dph,a
   4C69 E0                 6249 	movx	a,@dptr
   4C6A 90 02 60           6250 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4C6D 13                 6251 	rrc	a
   4C6E E0                 6252 	movx	a,@dptr
   4C6F 92 E5              6253 	mov	acc.5,c
   4C71 F0                 6254 	movx	@dptr,a
                           6255 ;	../../shared/src/spd_ctrl.c:622: rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
   4C72 EB                 6256 	mov	a,r3
   4C73 24 04              6257 	add	a,#_speedtable
   4C75 FD                 6258 	mov	r5,a
   4C76 EC                 6259 	mov	a,r4
   4C77 34 63              6260 	addc	a,#(_speedtable >> 8)
   4C79 FE                 6261 	mov	r6,a
   4C7A 74 44              6262 	mov	a,#0x44
   4C7C 2D                 6263 	add	a,r5
   4C7D F5 82              6264 	mov	dpl,a
   4C7F E4                 6265 	clr	a
   4C80 3E                 6266 	addc	a,r6
   4C81 F5 83              6267 	mov	dph,a
   4C83 E0                 6268 	movx	a,@dptr
   4C84 90 66 36           6269 	mov	dptr,#_rxdll_temp_a_lane
   4C87 F0                 6270 	movx	@dptr,a
                           6271 ;	../../shared/src/spd_ctrl.c:623: rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];
   4C88 EB                 6272 	mov	a,r3
   4C89 24 04              6273 	add	a,#_speedtable
   4C8B FD                 6274 	mov	r5,a
   4C8C EC                 6275 	mov	a,r4
   4C8D 34 63              6276 	addc	a,#(_speedtable >> 8)
   4C8F FE                 6277 	mov	r6,a
   4C90 74 45              6278 	mov	a,#0x45
   4C92 2D                 6279 	add	a,r5
   4C93 F5 82              6280 	mov	dpl,a
   4C95 E4                 6281 	clr	a
   4C96 3E                 6282 	addc	a,r6
   4C97 F5 83              6283 	mov	dph,a
   4C99 E0                 6284 	movx	a,@dptr
   4C9A 90 66 37           6285 	mov	dptr,#_rxdll_temp_b_lane
   4C9D F0                 6286 	movx	@dptr,a
                           6287 ;	../../shared/src/spd_ctrl.c:626: reg_PATH_DISABLE_EDGE_LANE		= speedtable[gen][spdoft_path_disable_edge_lane];
   4C9E EB                 6288 	mov	a,r3
   4C9F 24 04              6289 	add	a,#_speedtable
   4CA1 FD                 6290 	mov	r5,a
   4CA2 EC                 6291 	mov	a,r4
   4CA3 34 63              6292 	addc	a,#(_speedtable >> 8)
   4CA5 FE                 6293 	mov	r6,a
   4CA6 74 37              6294 	mov	a,#0x37
   4CA8 2D                 6295 	add	a,r5
   4CA9 F5 82              6296 	mov	dpl,a
   4CAB E4                 6297 	clr	a
   4CAC 3E                 6298 	addc	a,r6
   4CAD F5 83              6299 	mov	dph,a
   4CAF E0                 6300 	movx	a,@dptr
   4CB0 90 00 4C           6301 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   4CB3 13                 6302 	rrc	a
   4CB4 E0                 6303 	movx	a,@dptr
   4CB5 92 E1              6304 	mov	acc.1,c
   4CB7 F0                 6305 	movx	@dptr,a
                           6306 ;	../../shared/src/spd_ctrl.c:627: reg_ANA_RX_DFE_F1_POL_EN_D_LANE		= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
   4CB8 EB                 6307 	mov	a,r3
   4CB9 24 04              6308 	add	a,#_speedtable
   4CBB FD                 6309 	mov	r5,a
   4CBC EC                 6310 	mov	a,r4
   4CBD 34 63              6311 	addc	a,#(_speedtable >> 8)
   4CBF FE                 6312 	mov	r6,a
   4CC0 74 38              6313 	mov	a,#0x38
   4CC2 2D                 6314 	add	a,r5
   4CC3 F5 82              6315 	mov	dpl,a
   4CC5 E4                 6316 	clr	a
   4CC6 3E                 6317 	addc	a,r6
   4CC7 F5 83              6318 	mov	dph,a
   4CC9 E0                 6319 	movx	a,@dptr
   4CCA 90 24 19           6320 	mov	dptr,#(_DFE_ANA_REG0 + 0x0001)
   4CCD 13                 6321 	rrc	a
   4CCE E0                 6322 	movx	a,@dptr
   4CCF 92 E2              6323 	mov	acc.2,c
   4CD1 F0                 6324 	movx	@dptr,a
                           6325 ;	../../shared/src/spd_ctrl.c:628: reg_ANA_RX_DFE_F1_POL_EN_S_LANE		= speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
   4CD2 EB                 6326 	mov	a,r3
   4CD3 24 04              6327 	add	a,#_speedtable
   4CD5 FD                 6328 	mov	r5,a
   4CD6 EC                 6329 	mov	a,r4
   4CD7 34 63              6330 	addc	a,#(_speedtable >> 8)
   4CD9 FE                 6331 	mov	r6,a
   4CDA 74 39              6332 	mov	a,#0x39
   4CDC 2D                 6333 	add	a,r5
   4CDD F5 82              6334 	mov	dpl,a
   4CDF E4                 6335 	clr	a
   4CE0 3E                 6336 	addc	a,r6
   4CE1 F5 83              6337 	mov	dph,a
   4CE3 E0                 6338 	movx	a,@dptr
   4CE4 90 24 19           6339 	mov	dptr,#(_DFE_ANA_REG0 + 0x0001)
   4CE7 13                 6340 	rrc	a
   4CE8 E0                 6341 	movx	a,@dptr
   4CE9 92 E3              6342 	mov	acc.3,c
   4CEB F0                 6343 	movx	@dptr,a
                           6344 ;	../../shared/src/spd_ctrl.c:629: reg_ANA_RX_DFE_F1_POL_D_LANE		= speedtable[gen][spdoft_dfe_f1_pol_d_lane];
   4CEC EB                 6345 	mov	a,r3
   4CED 24 04              6346 	add	a,#_speedtable
   4CEF FD                 6347 	mov	r5,a
   4CF0 EC                 6348 	mov	a,r4
   4CF1 34 63              6349 	addc	a,#(_speedtable >> 8)
   4CF3 FE                 6350 	mov	r6,a
   4CF4 74 3A              6351 	mov	a,#0x3A
   4CF6 2D                 6352 	add	a,r5
   4CF7 F5 82              6353 	mov	dpl,a
   4CF9 E4                 6354 	clr	a
   4CFA 3E                 6355 	addc	a,r6
   4CFB F5 83              6356 	mov	dph,a
   4CFD E0                 6357 	movx	a,@dptr
   4CFE 90 24 1A           6358 	mov	dptr,#(_DFE_ANA_REG0 + 0x0002)
   4D01 13                 6359 	rrc	a
   4D02 E0                 6360 	movx	a,@dptr
   4D03 92 E2              6361 	mov	acc.2,c
   4D05 F0                 6362 	movx	@dptr,a
                           6363 ;	../../shared/src/spd_ctrl.c:630: reg_ANA_RX_DFE_F1_POL_S_LANE		= speedtable[gen][spdoft_dfe_f1_pol_s_lane];
   4D06 EB                 6364 	mov	a,r3
   4D07 24 04              6365 	add	a,#_speedtable
   4D09 FD                 6366 	mov	r5,a
   4D0A EC                 6367 	mov	a,r4
   4D0B 34 63              6368 	addc	a,#(_speedtable >> 8)
   4D0D FE                 6369 	mov	r6,a
   4D0E 74 3B              6370 	mov	a,#0x3B
   4D10 2D                 6371 	add	a,r5
   4D11 F5 82              6372 	mov	dpl,a
   4D13 E4                 6373 	clr	a
   4D14 3E                 6374 	addc	a,r6
   4D15 F5 83              6375 	mov	dph,a
   4D17 E0                 6376 	movx	a,@dptr
   4D18 90 24 1A           6377 	mov	dptr,#(_DFE_ANA_REG0 + 0x0002)
   4D1B 13                 6378 	rrc	a
   4D1C E0                 6379 	movx	a,@dptr
   4D1D 92 E3              6380 	mov	acc.3,c
   4D1F F0                 6381 	movx	@dptr,a
                           6382 ;	../../shared/src/spd_ctrl.c:631: reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
   4D20 EB                 6383 	mov	a,r3
   4D21 24 04              6384 	add	a,#_speedtable
   4D23 FD                 6385 	mov	r5,a
   4D24 EC                 6386 	mov	a,r4
   4D25 34 63              6387 	addc	a,#(_speedtable >> 8)
   4D27 FE                 6388 	mov	r6,a
   4D28 74 3C              6389 	mov	a,#0x3C
   4D2A 2D                 6390 	add	a,r5
   4D2B F5 82              6391 	mov	dpl,a
   4D2D E4                 6392 	clr	a
   4D2E 3E                 6393 	addc	a,r6
   4D2F F5 83              6394 	mov	dph,a
   4D31 E0                 6395 	movx	a,@dptr
   4D32 90 24 1D           6396 	mov	dptr,#(_DFE_ANA_REG1 + 0x0001)
   4D35 13                 6397 	rrc	a
   4D36 E0                 6398 	movx	a,@dptr
   4D37 92 E2              6399 	mov	acc.2,c
   4D39 F0                 6400 	movx	@dptr,a
                           6401 ;	../../shared/src/spd_ctrl.c:632: reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
   4D3A EB                 6402 	mov	a,r3
   4D3B 24 04              6403 	add	a,#_speedtable
   4D3D FD                 6404 	mov	r5,a
   4D3E EC                 6405 	mov	a,r4
   4D3F 34 63              6406 	addc	a,#(_speedtable >> 8)
   4D41 FE                 6407 	mov	r6,a
   4D42 74 3D              6408 	mov	a,#0x3D
   4D44 2D                 6409 	add	a,r5
   4D45 F5 82              6410 	mov	dpl,a
   4D47 E4                 6411 	clr	a
   4D48 3E                 6412 	addc	a,r6
   4D49 F5 83              6413 	mov	dph,a
   4D4B E0                 6414 	movx	a,@dptr
   4D4C 90 24 1D           6415 	mov	dptr,#(_DFE_ANA_REG1 + 0x0001)
   4D4F 13                 6416 	rrc	a
   4D50 E0                 6417 	movx	a,@dptr
   4D51 92 E3              6418 	mov	acc.3,c
   4D53 F0                 6419 	movx	@dptr,a
                           6420 ;	../../shared/src/spd_ctrl.c:633: reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
   4D54 EB                 6421 	mov	a,r3
   4D55 24 04              6422 	add	a,#_speedtable
   4D57 FD                 6423 	mov	r5,a
   4D58 EC                 6424 	mov	a,r4
   4D59 34 63              6425 	addc	a,#(_speedtable >> 8)
   4D5B FE                 6426 	mov	r6,a
   4D5C 74 3E              6427 	mov	a,#0x3E
   4D5E 2D                 6428 	add	a,r5
   4D5F F5 82              6429 	mov	dpl,a
   4D61 E4                 6430 	clr	a
   4D62 3E                 6431 	addc	a,r6
   4D63 F5 83              6432 	mov	dph,a
   4D65 E0                 6433 	movx	a,@dptr
   4D66 90 24 1E           6434 	mov	dptr,#(_DFE_ANA_REG1 + 0x0002)
   4D69 13                 6435 	rrc	a
   4D6A E0                 6436 	movx	a,@dptr
   4D6B 92 E2              6437 	mov	acc.2,c
   4D6D F0                 6438 	movx	@dptr,a
                           6439 ;	../../shared/src/spd_ctrl.c:634: reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
   4D6E EB                 6440 	mov	a,r3
   4D6F 24 04              6441 	add	a,#_speedtable
   4D71 FD                 6442 	mov	r5,a
   4D72 EC                 6443 	mov	a,r4
   4D73 34 63              6444 	addc	a,#(_speedtable >> 8)
   4D75 FE                 6445 	mov	r6,a
   4D76 74 3F              6446 	mov	a,#0x3F
   4D78 2D                 6447 	add	a,r5
   4D79 F5 82              6448 	mov	dpl,a
   4D7B E4                 6449 	clr	a
   4D7C 3E                 6450 	addc	a,r6
   4D7D F5 83              6451 	mov	dph,a
   4D7F E0                 6452 	movx	a,@dptr
   4D80 90 24 1E           6453 	mov	dptr,#(_DFE_ANA_REG1 + 0x0002)
   4D83 13                 6454 	rrc	a
   4D84 E0                 6455 	movx	a,@dptr
   4D85 92 E3              6456 	mov	acc.3,c
   4D87 F0                 6457 	movx	@dptr,a
                           6458 ;	../../shared/src/spd_ctrl.c:635: reg_DFE_FULL_RATE_MODE_LANE		= speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];
   4D88 EB                 6459 	mov	a,r3
   4D89 24 04              6460 	add	a,#_speedtable
   4D8B FD                 6461 	mov	r5,a
   4D8C EC                 6462 	mov	a,r4
   4D8D 34 63              6463 	addc	a,#(_speedtable >> 8)
   4D8F FE                 6464 	mov	r6,a
   4D90 74 40              6465 	mov	a,#0x40
   4D92 2D                 6466 	add	a,r5
   4D93 F5 82              6467 	mov	dpl,a
   4D95 E4                 6468 	clr	a
   4D96 3E                 6469 	addc	a,r6
   4D97 F5 83              6470 	mov	dph,a
   4D99 E0                 6471 	movx	a,@dptr
   4D9A 90 24 0D           6472 	mov	dptr,#(_DFE_CTRL_REG3 + 0x0001)
   4D9D 13                 6473 	rrc	a
   4D9E E0                 6474 	movx	a,@dptr
   4D9F 92 E0              6475 	mov	acc.0,c
   4DA1 F0                 6476 	movx	@dptr,a
                           6477 ;	../../shared/src/spd_ctrl.c:638: reg_PU_F1N_S_O_LANE			= speedtable[gen][spdoft_pu_f1n_s_o_lane];
   4DA2 EB                 6478 	mov	a,r3
   4DA3 24 04              6479 	add	a,#_speedtable
   4DA5 FD                 6480 	mov	r5,a
   4DA6 EC                 6481 	mov	a,r4
   4DA7 34 63              6482 	addc	a,#(_speedtable >> 8)
   4DA9 FE                 6483 	mov	r6,a
   4DAA 74 36              6484 	mov	a,#0x36
   4DAC 2D                 6485 	add	a,r5
   4DAD F5 82              6486 	mov	dpl,a
   4DAF E4                 6487 	clr	a
   4DB0 3E                 6488 	addc	a,r6
   4DB1 F5 83              6489 	mov	dph,a
   4DB3 E0                 6490 	movx	a,@dptr
   4DB4 90 00 60           6491 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4DB7 13                 6492 	rrc	a
   4DB8 E0                 6493 	movx	a,@dptr
   4DB9 92 E4              6494 	mov	acc.4,c
   4DBB F0                 6495 	movx	@dptr,a
                           6496 ;	../../shared/src/spd_ctrl.c:639: reg_PU_F1N_D_O_LANE			= speedtable[gen][spdoft_pu_f1n_d_o_lane];
   4DBC EB                 6497 	mov	a,r3
   4DBD 24 04              6498 	add	a,#_speedtable
   4DBF FD                 6499 	mov	r5,a
   4DC0 EC                 6500 	mov	a,r4
   4DC1 34 63              6501 	addc	a,#(_speedtable >> 8)
   4DC3 FE                 6502 	mov	r6,a
   4DC4 74 34              6503 	mov	a,#0x34
   4DC6 2D                 6504 	add	a,r5
   4DC7 F5 82              6505 	mov	dpl,a
   4DC9 E4                 6506 	clr	a
   4DCA 3E                 6507 	addc	a,r6
   4DCB F5 83              6508 	mov	dph,a
   4DCD E0                 6509 	movx	a,@dptr
   4DCE 90 00 60           6510 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4DD1 13                 6511 	rrc	a
   4DD2 E0                 6512 	movx	a,@dptr
   4DD3 92 E6              6513 	mov	acc.6,c
   4DD5 F0                 6514 	movx	@dptr,a
                           6515 ;	../../shared/src/spd_ctrl.c:640: reg_PU_F1N_S_E_LANE			= speedtable[gen][spdoft_pu_f1n_s_e_lane];
   4DD6 EB                 6516 	mov	a,r3
   4DD7 24 04              6517 	add	a,#_speedtable
   4DD9 FD                 6518 	mov	r5,a
   4DDA EC                 6519 	mov	a,r4
   4DDB 34 63              6520 	addc	a,#(_speedtable >> 8)
   4DDD FE                 6521 	mov	r6,a
   4DDE 74 32              6522 	mov	a,#0x32
   4DE0 2D                 6523 	add	a,r5
   4DE1 F5 82              6524 	mov	dpl,a
   4DE3 E4                 6525 	clr	a
   4DE4 3E                 6526 	addc	a,r6
   4DE5 F5 83              6527 	mov	dph,a
   4DE7 E0                 6528 	movx	a,@dptr
   4DE8 90 00 5C           6529 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4DEB 13                 6530 	rrc	a
   4DEC E0                 6531 	movx	a,@dptr
   4DED 92 E0              6532 	mov	acc.0,c
   4DEF F0                 6533 	movx	@dptr,a
                           6534 ;	../../shared/src/spd_ctrl.c:641: reg_PU_F1N_D_E_LANE			= speedtable[gen][spdoft_pu_f1n_d_e_lane];
   4DF0 EB                 6535 	mov	a,r3
   4DF1 24 04              6536 	add	a,#_speedtable
   4DF3 FD                 6537 	mov	r5,a
   4DF4 EC                 6538 	mov	a,r4
   4DF5 34 63              6539 	addc	a,#(_speedtable >> 8)
   4DF7 FE                 6540 	mov	r6,a
   4DF8 74 30              6541 	mov	a,#0x30
   4DFA 2D                 6542 	add	a,r5
   4DFB F5 82              6543 	mov	dpl,a
   4DFD E4                 6544 	clr	a
   4DFE 3E                 6545 	addc	a,r6
   4DFF F5 83              6546 	mov	dph,a
   4E01 E0                 6547 	movx	a,@dptr
   4E02 90 00 5C           6548 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4E05 13                 6549 	rrc	a
   4E06 E0                 6550 	movx	a,@dptr
   4E07 92 E2              6551 	mov	acc.2,c
   4E09 F0                 6552 	movx	@dptr,a
                           6553 ;	../../shared/src/spd_ctrl.c:642: reg_PU_F1P_S_E_LANE			= speedtable[gen][spdoft_pu_f1p_s_e_lane];
   4E0A EB                 6554 	mov	a,r3
   4E0B 24 04              6555 	add	a,#_speedtable
   4E0D FD                 6556 	mov	r5,a
   4E0E EC                 6557 	mov	a,r4
   4E0F 34 63              6558 	addc	a,#(_speedtable >> 8)
   4E11 FE                 6559 	mov	r6,a
   4E12 74 31              6560 	mov	a,#0x31
   4E14 2D                 6561 	add	a,r5
   4E15 F5 82              6562 	mov	dpl,a
   4E17 E4                 6563 	clr	a
   4E18 3E                 6564 	addc	a,r6
   4E19 F5 83              6565 	mov	dph,a
   4E1B E0                 6566 	movx	a,@dptr
   4E1C FD                 6567 	mov	r5,a
   4E1D 90 00 5C           6568 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4E20 13                 6569 	rrc	a
   4E21 E0                 6570 	movx	a,@dptr
   4E22 92 E1              6571 	mov	acc.1,c
   4E24 F0                 6572 	movx	@dptr,a
   4E25                    6573 00157$:
                           6574 ;	../../shared/src/spd_ctrl.c:645: reg_PU_F1P_S_O_LANE			= speedtable[gen][spdoft_pu_f1p_s_o_lane];
   4E25 EB                 6575 	mov	a,r3
   4E26 24 04              6576 	add	a,#_speedtable
   4E28 FD                 6577 	mov	r5,a
   4E29 EC                 6578 	mov	a,r4
   4E2A 34 63              6579 	addc	a,#(_speedtable >> 8)
   4E2C FE                 6580 	mov	r6,a
   4E2D 74 35              6581 	mov	a,#0x35
   4E2F 2D                 6582 	add	a,r5
   4E30 F5 82              6583 	mov	dpl,a
   4E32 E4                 6584 	clr	a
   4E33 3E                 6585 	addc	a,r6
   4E34 F5 83              6586 	mov	dph,a
   4E36 E0                 6587 	movx	a,@dptr
   4E37 90 00 60           6588 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4E3A 13                 6589 	rrc	a
   4E3B E0                 6590 	movx	a,@dptr
   4E3C 92 E5              6591 	mov	acc.5,c
   4E3E F0                 6592 	movx	@dptr,a
                           6593 ;	../../shared/src/spd_ctrl.c:646: reg_PU_F1P_D_O_LANE			= speedtable[gen][spdoft_pu_f1p_d_o_lane];
   4E3F EB                 6594 	mov	a,r3
   4E40 24 04              6595 	add	a,#_speedtable
   4E42 FD                 6596 	mov	r5,a
   4E43 EC                 6597 	mov	a,r4
   4E44 34 63              6598 	addc	a,#(_speedtable >> 8)
   4E46 FE                 6599 	mov	r6,a
   4E47 74 33              6600 	mov	a,#0x33
   4E49 2D                 6601 	add	a,r5
   4E4A F5 82              6602 	mov	dpl,a
   4E4C E4                 6603 	clr	a
   4E4D 3E                 6604 	addc	a,r6
   4E4E F5 83              6605 	mov	dph,a
   4E50 E0                 6606 	movx	a,@dptr
   4E51 FD                 6607 	mov	r5,a
   4E52 90 00 60           6608 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4E55 13                 6609 	rrc	a
   4E56 E0                 6610 	movx	a,@dptr
   4E57 92 E7              6611 	mov	acc.7,c
   4E59 F0                 6612 	movx	@dptr,a
                           6613 ;	../../shared/src/spd_ctrl.c:647: reg_PU_F1P_D_E_LANE			= speedtable[gen][spdoft_pu_f1p_d_e_lane];
   4E5A EB                 6614 	mov	a,r3
   4E5B 24 04              6615 	add	a,#_speedtable
   4E5D FB                 6616 	mov	r3,a
   4E5E EC                 6617 	mov	a,r4
   4E5F 34 63              6618 	addc	a,#(_speedtable >> 8)
   4E61 FC                 6619 	mov	r4,a
   4E62 74 2F              6620 	mov	a,#0x2F
   4E64 2B                 6621 	add	a,r3
   4E65 F5 82              6622 	mov	dpl,a
   4E67 E4                 6623 	clr	a
   4E68 3C                 6624 	addc	a,r4
   4E69 F5 83              6625 	mov	dph,a
   4E6B E0                 6626 	movx	a,@dptr
   4E6C FB                 6627 	mov	r3,a
   4E6D 90 00 5C           6628 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4E70 13                 6629 	rrc	a
   4E71 E0                 6630 	movx	a,@dptr
   4E72 92 E3              6631 	mov	acc.3,c
   4E74 F0                 6632 	movx	@dptr,a
                           6633 ;	../../shared/src/spd_ctrl.c:650: if(cmx_TX_SSC_CTRL_SEL) {
   4E75 90 E6 13           6634 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   4E78 E0                 6635 	movx	a,@dptr
   4E79 20 E4 03           6636 	jb	acc.4,00237$
   4E7C 02 4F 27           6637 	ljmp	00167$
   4E7F                    6638 00237$:
                           6639 ;	../../shared/src/spd_ctrl.c:651: reg_SSC_EN_FM_REG_LANE = 1;
   4E7F 90 20 0C           6640 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   4E82 E0                 6641 	movx	a,@dptr
   4E83 44 02              6642 	orl	a,#0x02
   4E85 F0                 6643 	movx	@dptr,a
                           6644 ;	../../shared/src/spd_ctrl.c:652: if(train_save_tb[gen].ssc_en) 
   4E86 EA                 6645 	mov	a,r2
   4E87 2A                 6646 	add	a,r2
   4E88 25 E0              6647 	add	a,acc
   4E8A FB                 6648 	mov	r3,a
   4E8B 24 98              6649 	add	a,#_train_save_tb
   4E8D FC                 6650 	mov	r4,a
   4E8E E4                 6651 	clr	a
   4E8F 34 E6              6652 	addc	a,#(_train_save_tb >> 8)
   4E91 FD                 6653 	mov	r5,a
   4E92 8C 82              6654 	mov	dpl,r4
   4E94 8D 83              6655 	mov	dph,r5
   4E96 E0                 6656 	movx	a,@dptr
   4E97 30 E0 09           6657 	jnb	acc.0,00161$
                           6658 ;	../../shared/src/spd_ctrl.c:653: reg_SSC_EN_LANE = 1;
   4E9A 90 20 0C           6659 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   4E9D E0                 6660 	movx	a,@dptr
   4E9E 44 04              6661 	orl	a,#0x04
   4EA0 F0                 6662 	movx	@dptr,a
   4EA1 80 07              6663 	sjmp	00162$
   4EA3                    6664 00161$:
                           6665 ;	../../shared/src/spd_ctrl.c:654: else reg_SSC_EN_LANE = 0;
   4EA3 90 20 0C           6666 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   4EA6 E0                 6667 	movx	a,@dptr
   4EA7 54 FB              6668 	anl	a,#0xfb
   4EA9 F0                 6669 	movx	@dptr,a
   4EAA                    6670 00162$:
                           6671 ;	../../shared/src/spd_ctrl.c:656: if(use_ring_pll) {
   4EAA 30 10 3F           6672 	jnb	_use_ring_pll,00164$
                           6673 ;	../../shared/src/spd_ctrl.c:661: reg_SSC_DSPREAD_TX_RING			= tx_tb[gen].ssc_dspread;
   4EAD EB                 6674 	mov	a,r3
   4EAE 24 84              6675 	add	a,#_tx_tb
   4EB0 FC                 6676 	mov	r4,a
   4EB1 E4                 6677 	clr	a
   4EB2 34 E6              6678 	addc	a,#(_tx_tb >> 8)
   4EB4 FD                 6679 	mov	r5,a
   4EB5 8C 82              6680 	mov	dpl,r4
   4EB7 8D 83              6681 	mov	dph,r5
   4EB9 A3                 6682 	inc	dptr
   4EBA A3                 6683 	inc	dptr
   4EBB A3                 6684 	inc	dptr
   4EBC E0                 6685 	movx	a,@dptr
   4EBD 23                 6686 	rl	a
   4EBE 54 01              6687 	anl	a,#0x01
   4EC0 90 A0 13           6688 	mov	dptr,#(_DTX_REG2 + 0x0003)
   4EC3 13                 6689 	rrc	a
   4EC4 E0                 6690 	movx	a,@dptr
   4EC5 92 E6              6691 	mov	acc.6,c
   4EC7 F0                 6692 	movx	@dptr,a
                           6693 ;	../../shared/src/spd_ctrl.c:662: reg_SSC_AMP_RING_6_0			= tx_tb[gen].ssc_amp;
   4EC8 EB                 6694 	mov	a,r3
   4EC9 24 84              6695 	add	a,#_tx_tb
   4ECB FC                 6696 	mov	r4,a
   4ECC E4                 6697 	clr	a
   4ECD 34 E6              6698 	addc	a,#(_tx_tb >> 8)
   4ECF FD                 6699 	mov	r5,a
   4ED0 8C 82              6700 	mov	dpl,r4
   4ED2 8D 83              6701 	mov	dph,r5
   4ED4 A3                 6702 	inc	dptr
   4ED5 A3                 6703 	inc	dptr
   4ED6 A3                 6704 	inc	dptr
   4ED7 E0                 6705 	movx	a,@dptr
   4ED8 54 7F              6706 	anl	a,#0x7f
   4EDA FC                 6707 	mov	r4,a
   4EDB 90 A0 1B           6708 	mov	dptr,#(_DTX_REG4 + 0x0003)
   4EDE 25 E0              6709 	add	a,acc
   4EE0 54 FE              6710 	anl	a,#0xfe
   4EE2 F5 F0              6711 	mov	b,a
   4EE4 E0                 6712 	movx	a,@dptr
   4EE5 54 01              6713 	anl	a,#0x01
   4EE7 45 F0              6714 	orl	a,b
   4EE9 F0                 6715 	movx	@dptr,a
   4EEA 80 3B              6716 	sjmp	00167$
   4EEC                    6717 00164$:
                           6718 ;	../../shared/src/spd_ctrl.c:666: reg_SSC_DSPREAD_TX 			= tx_tb[gen].ssc_dspread;
   4EEC EB                 6719 	mov	a,r3
   4EED 24 84              6720 	add	a,#_tx_tb
   4EEF FC                 6721 	mov	r4,a
   4EF0 E4                 6722 	clr	a
   4EF1 34 E6              6723 	addc	a,#(_tx_tb >> 8)
   4EF3 FD                 6724 	mov	r5,a
   4EF4 8C 82              6725 	mov	dpl,r4
   4EF6 8D 83              6726 	mov	dph,r5
   4EF8 A3                 6727 	inc	dptr
   4EF9 A3                 6728 	inc	dptr
   4EFA A3                 6729 	inc	dptr
   4EFB E0                 6730 	movx	a,@dptr
   4EFC 23                 6731 	rl	a
   4EFD 54 01              6732 	anl	a,#0x01
   4EFF 90 A0 0B           6733 	mov	dptr,#(_DTX_REG0 + 0x0003)
   4F02 13                 6734 	rrc	a
   4F03 E0                 6735 	movx	a,@dptr
   4F04 92 E6              6736 	mov	acc.6,c
   4F06 F0                 6737 	movx	@dptr,a
                           6738 ;	../../shared/src/spd_ctrl.c:667: reg_SSC_AMP_6_0				= tx_tb[gen].ssc_amp;
   4F07 EB                 6739 	mov	a,r3
   4F08 24 84              6740 	add	a,#_tx_tb
   4F0A FB                 6741 	mov	r3,a
   4F0B E4                 6742 	clr	a
   4F0C 34 E6              6743 	addc	a,#(_tx_tb >> 8)
   4F0E FC                 6744 	mov	r4,a
   4F0F 8B 82              6745 	mov	dpl,r3
   4F11 8C 83              6746 	mov	dph,r4
   4F13 A3                 6747 	inc	dptr
   4F14 A3                 6748 	inc	dptr
   4F15 A3                 6749 	inc	dptr
   4F16 E0                 6750 	movx	a,@dptr
   4F17 54 7F              6751 	anl	a,#0x7f
   4F19 FB                 6752 	mov	r3,a
   4F1A 90 A0 12           6753 	mov	dptr,#(_DTX_REG2 + 0x0002)
   4F1D 54 7F              6754 	anl	a,#0x7f
   4F1F F5 F0              6755 	mov	b,a
   4F21 E0                 6756 	movx	a,@dptr
   4F22 54 80              6757 	anl	a,#0x80
   4F24 45 F0              6758 	orl	a,b
   4F26 F0                 6759 	movx	@dptr,a
   4F27                    6760 00167$:
                           6761 ;	../../shared/src/spd_ctrl.c:672: if(sq_thrs_ratio_gen_en & (0x01<<gen)) {
   4F27 8A F0              6762 	mov	b,r2
   4F29 05 F0              6763 	inc	b
   4F2B 7B 01              6764 	mov	r3,#0x01
   4F2D 7C 00              6765 	mov	r4,#0x00
   4F2F 80 06              6766 	sjmp	00241$
   4F31                    6767 00240$:
   4F31 EB                 6768 	mov	a,r3
   4F32 2B                 6769 	add	a,r3
   4F33 FB                 6770 	mov	r3,a
   4F34 EC                 6771 	mov	a,r4
   4F35 33                 6772 	rlc	a
   4F36 FC                 6773 	mov	r4,a
   4F37                    6774 00241$:
   4F37 D5 F0 F7           6775 	djnz	b,00240$
   4F3A 90 67 A7           6776 	mov	dptr,#_sq_thrs_ratio_gen_en
   4F3D E0                 6777 	movx	a,@dptr
   4F3E FD                 6778 	mov	r5,a
   4F3F 7E 00              6779 	mov	r6,#0x00
   4F41 52 03              6780 	anl	ar3,a
   4F43 EE                 6781 	mov	a,r6
   4F44 52 04              6782 	anl	ar4,a
   4F46 EB                 6783 	mov	a,r3
   4F47 4C                 6784 	orl	a,r4
   4F48 60 78              6785 	jz	00172$
                           6786 ;	../../shared/src/spd_ctrl.c:673: sq_thrs_ratio = sq_thrs_ratio_tb[gen];
   4F4A EA                 6787 	mov	a,r2
   4F4B 24 7C              6788 	add	a,#_sq_thrs_ratio_tb
   4F4D F5 82              6789 	mov	dpl,a
   4F4F E4                 6790 	clr	a
   4F50 34 60              6791 	addc	a,#(_sq_thrs_ratio_tb >> 8)
   4F52 F5 83              6792 	mov	dph,a
   4F54 E0                 6793 	movx	a,@dptr
   4F55 FB                 6794 	mov	r3,a
   4F56 90 67 A6           6795 	mov	dptr,#_sq_thrs_ratio
   4F59 F0                 6796 	movx	@dptr,a
                           6797 ;	../../shared/src/spd_ctrl.c:674: temp = lnx_CAL_SQ_THRESH_LANE_7_0;
   4F5A 90 60 13           6798 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   4F5D E0                 6799 	movx	a,@dptr
   4F5E FC                 6800 	mov	r4,a
   4F5F 7D 00              6801 	mov	r5,#0x00
                           6802 ;	../../shared/src/spd_ctrl.c:675: if(sq_thrs_ratio==0)
   4F61 EB                 6803 	mov	a,r3
   4F62 70 15              6804 	jnz	00169$
                           6805 ;	../../shared/src/spd_ctrl.c:676: reg_SQ_THRESH_LANE_5_0 = (uint8_t)temp;
   4F64 8C 06              6806 	mov	ar6,r4
   4F66 90 00 10           6807 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   4F69 EE                 6808 	mov	a,r6
   4F6A 2E                 6809 	add	a,r6
   4F6B 25 E0              6810 	add	a,acc
   4F6D 54 FC              6811 	anl	a,#0xfc
   4F6F F5 F0              6812 	mov	b,a
   4F71 E0                 6813 	movx	a,@dptr
   4F72 54 03              6814 	anl	a,#0x03
   4F74 45 F0              6815 	orl	a,b
   4F76 F0                 6816 	movx	@dptr,a
   4F77 80 49              6817 	sjmp	00172$
   4F79                    6818 00169$:
                           6819 ;	../../shared/src/spd_ctrl.c:678: temp = temp * sq_thrs_ratio;
   4F79 7E 00              6820 	mov	r6,#0x00
   4F7B C0 02              6821 	push	ar2
   4F7D C0 03              6822 	push	ar3
   4F7F C0 06              6823 	push	ar6
   4F81 8C 82              6824 	mov	dpl,r4
   4F83 8D 83              6825 	mov	dph,r5
   4F85 12 7C E3           6826 	lcall	__mulint
   4F88 AB 82              6827 	mov	r3,dpl
   4F8A AE 83              6828 	mov	r6,dph
   4F8C 15 81              6829 	dec	sp
   4F8E 15 81              6830 	dec	sp
   4F90 D0 02              6831 	pop	ar2
   4F92 8B 04              6832 	mov	ar4,r3
   4F94 8E 05              6833 	mov	ar5,r6
                           6834 ;	../../shared/src/spd_ctrl.c:679: reg_SQ_THRESH_LANE_5_0 = (lnx_CAL_SQ_THRESH_LANE_7_0&0x20) | ((uint8_t)(temp>>5));
   4F96 90 60 13           6835 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   4F99 E0                 6836 	movx	a,@dptr
   4F9A FB                 6837 	mov	r3,a
   4F9B 53 03 20           6838 	anl	ar3,#0x20
   4F9E ED                 6839 	mov	a,r5
   4F9F C4                 6840 	swap	a
   4FA0 03                 6841 	rr	a
   4FA1 CC                 6842 	xch	a,r4
   4FA2 C4                 6843 	swap	a
   4FA3 03                 6844 	rr	a
   4FA4 54 07              6845 	anl	a,#0x07
   4FA6 6C                 6846 	xrl	a,r4
   4FA7 CC                 6847 	xch	a,r4
   4FA8 54 07              6848 	anl	a,#0x07
   4FAA CC                 6849 	xch	a,r4
   4FAB 6C                 6850 	xrl	a,r4
   4FAC CC                 6851 	xch	a,r4
   4FAD FD                 6852 	mov	r5,a
   4FAE EC                 6853 	mov	a,r4
   4FAF 42 03              6854 	orl	ar3,a
   4FB1 90 00 10           6855 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   4FB4 EB                 6856 	mov	a,r3
   4FB5 2B                 6857 	add	a,r3
   4FB6 25 E0              6858 	add	a,acc
   4FB8 54 FC              6859 	anl	a,#0xfc
   4FBA F5 F0              6860 	mov	b,a
   4FBC E0                 6861 	movx	a,@dptr
   4FBD 54 03              6862 	anl	a,#0x03
   4FBF 45 F0              6863 	orl	a,b
   4FC1 F0                 6864 	movx	@dptr,a
   4FC2                    6865 00172$:
                           6866 ;	../../shared/src/spd_ctrl.c:686: if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
   4FC2 90 A3 16           6867 	mov	dptr,#(_SYSTEM + 0x0002)
   4FC5 E0                 6868 	movx	a,@dptr
   4FC6 54 07              6869 	anl	a,#0x07
   4FC8 FB                 6870 	mov	r3,a
   4FC9 BB 01 0C           6871 	cjne	r3,#0x01,00174$
   4FCC BA 04 09           6872 	cjne	r2,#0x04,00174$
   4FCF 90 26 17           6873 	mov	dptr,#(_TX_TRAIN_IF_REG0 + 0x0003)
   4FD2 E0                 6874 	movx	a,@dptr
   4FD3 44 40              6875 	orl	a,#0x40
   4FD5 F0                 6876 	movx	@dptr,a
   4FD6 80 07              6877 	sjmp	00175$
   4FD8                    6878 00174$:
                           6879 ;	../../shared/src/spd_ctrl.c:687: else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;
   4FD8 90 26 17           6880 	mov	dptr,#(_TX_TRAIN_IF_REG0 + 0x0003)
   4FDB E0                 6881 	movx	a,@dptr
   4FDC 54 BF              6882 	anl	a,#0xbf
   4FDE F0                 6883 	movx	@dptr,a
   4FDF                    6884 00175$:
                           6885 ;	../../shared/src/spd_ctrl.c:692: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   4FDF 90 22 B4           6886 	mov	dptr,#_MCU_DEBUG0_LANE
   4FE2 74 39              6887 	mov	a,#0x39
   4FE4 F0                 6888 	movx	@dptr,a
   4FE5 22                 6889 	ret
                           6890 ;------------------------------------------------------------
                           6891 ;Allocation info for local variables in function 'loadSpeedtbl'
                           6892 ;------------------------------------------------------------
                           6893 ;------------------------------------------------------------
                           6894 ;	../../shared/src/spd_ctrl.c:696: void loadSpeedtbl(void) {
                           6895 ;	-----------------------------------------
                           6896 ;	 function loadSpeedtbl
                           6897 ;	-----------------------------------------
   4FE6                    6898 _loadSpeedtbl:
                           6899 ;	../../shared/src/spd_ctrl.c:698: loadspeedtbl_gen();
   4FE6 12 43 41           6900 	lcall	_loadspeedtbl_gen
                           6901 ;	../../shared/src/spd_ctrl.c:706: if( mcuid== master_mcu ) {
   4FE9 90 22 00           6902 	mov	dptr,#_MCU_CONTROL_LANE
   4FEC E0                 6903 	movx	a,@dptr
   4FED FA                 6904 	mov	r2,a
   4FEE 90 E6 50           6905 	mov	dptr,#_MCU_CONFIG
   4FF1 E0                 6906 	movx	a,@dptr
   4FF2 FB                 6907 	mov	r3,a
   4FF3 EA                 6908 	mov	a,r2
   4FF4 B5 03 36           6909 	cjne	a,ar3,00111$
                           6910 ;	../../shared/src/spd_ctrl.c:709: if(!use_ring_pll) {
   4FF7 20 10 1C           6911 	jb	_use_ring_pll,00107$
                           6912 ;	../../shared/src/spd_ctrl.c:712: if (phy_mode==PCIE)
   4FFA 90 A3 16           6913 	mov	dptr,#(_SYSTEM + 0x0002)
   4FFD E0                 6914 	movx	a,@dptr
   4FFE 54 07              6915 	anl	a,#0x07
   5000 FA                 6916 	mov	r2,a
   5001 BA 03 09           6917 	cjne	r2,#0x03,00102$
                           6918 ;	../../shared/src/spd_ctrl.c:715: loadspeedtbl_pll(gen_pll_rate);
   5004 90 67 8C           6919 	mov	dptr,#_gen_pll_rate
   5007 E0                 6920 	movx	a,@dptr
   5008 F5 82              6921 	mov	dpl,a
   500A 02 39 86           6922 	ljmp	_loadspeedtbl_pll
   500D                    6923 00102$:
                           6924 ;	../../shared/src/spd_ctrl.c:718: loadspeedtbl_pll(tx_pll_rate);
   500D A2 0F              6925 	mov	c,_tx_pll_rate
   500F E4                 6926 	clr	a
   5010 33                 6927 	rlc	a
   5011 F5 82              6928 	mov	dpl,a
   5013 02 39 86           6929 	ljmp	_loadspeedtbl_pll
   5016                    6930 00107$:
                           6931 ;	../../shared/src/spd_ctrl.c:722: if( tx_pll_rate != PLL_RATE_SEL_RING )
   5016 90 E6 1F           6932 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   5019 E0                 6933 	movx	a,@dptr
   501A FA                 6934 	mov	r2,a
   501B A2 0F              6935 	mov	c,_tx_pll_rate
   501D E4                 6936 	clr	a
   501E 33                 6937 	rlc	a
   501F FB                 6938 	mov	r3,a
   5020 B5 02 01           6939 	cjne	a,ar2,00122$
   5023 22                 6940 	ret
   5024                    6941 00122$:
                           6942 ;	../../shared/src/spd_ctrl.c:723: loadspeedtbl_ringpll(tx_pll_rate);
   5024 A2 0F              6943 	mov	c,_tx_pll_rate
   5026 E4                 6944 	clr	a
   5027 33                 6945 	rlc	a
   5028 F5 82              6946 	mov	dpl,a
   502A 02 3D 59           6947 	ljmp	_loadspeedtbl_ringpll
   502D                    6948 00111$:
   502D 22                 6949 	ret
                           6950 ;------------------------------------------------------------
                           6951 ;Allocation info for local variables in function 'loadSpdtbl_4_fcnt'
                           6952 ;------------------------------------------------------------
                           6953 ;fbck                      Allocated to registers 
                           6954 ;rate                      Allocated to registers r2 
                           6955 ;------------------------------------------------------------
                           6956 ;	../../shared/src/spd_ctrl.c:732: void loadSpdtbl_4_fcnt(void) {
                           6957 ;	-----------------------------------------
                           6958 ;	 function loadSpdtbl_4_fcnt
                           6959 ;	-----------------------------------------
   502E                    6960 _loadSpdtbl_4_fcnt:
                           6961 ;	../../shared/src/spd_ctrl.c:736: if(phy_mode==SERDES) rate = gen_pll_rate;
   502E 90 A3 16           6962 	mov	dptr,#(_SYSTEM + 0x0002)
   5031 E0                 6963 	movx	a,@dptr
   5032 54 07              6964 	anl	a,#0x07
   5034 FA                 6965 	mov	r2,a
   5035 BA 04 07           6966 	cjne	r2,#0x04,00102$
   5038 90 67 8C           6967 	mov	dptr,#_gen_pll_rate
   503B E0                 6968 	movx	a,@dptr
   503C FA                 6969 	mov	r2,a
   503D 80 06              6970 	sjmp	00103$
   503F                    6971 00102$:
                           6972 ;	../../shared/src/spd_ctrl.c:737: else rate = PLL_RATE_SEL;
   503F 90 E6 1E           6973 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   5042 E0                 6974 	movx	a,@dptr
   5043 FB                 6975 	mov	r3,a
   5044 FA                 6976 	mov	r2,a
   5045                    6977 00103$:
                           6978 ;	../../shared/src/spd_ctrl.c:739: reg_FBDIV_7_0 		= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
   5045 EA                 6979 	mov	a,r2
   5046 C4                 6980 	swap	a
   5047 23                 6981 	rl	a
   5048 54 E0              6982 	anl	a,#0xe0
   504A FA                 6983 	mov	r2,a
   504B FB                 6984 	mov	r3,a
   504C 7C E0              6985 	mov	r4,#(_lc_speedtable >> 8)
   504E 8B 82              6986 	mov	dpl,r3
   5050 8C 83              6987 	mov	dph,r4
   5052 A3                 6988 	inc	dptr
   5053 A3                 6989 	inc	dptr
   5054 A3                 6990 	inc	dptr
   5055 A3                 6991 	inc	dptr
   5056 E0                 6992 	movx	a,@dptr
   5057 90 82 A4           6993 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_169
   505A F0                 6994 	movx	@dptr,a
                           6995 ;	../../shared/src/spd_ctrl.c:740: reg_FBDIV_9_8 		= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];
   505B 7B E0              6996 	mov	r3,#(_lc_speedtable >> 8)
   505D 8A 82              6997 	mov	dpl,r2
   505F 8B 83              6998 	mov	dph,r3
   5061 A3                 6999 	inc	dptr
   5062 A3                 7000 	inc	dptr
   5063 A3                 7001 	inc	dptr
   5064 A3                 7002 	inc	dptr
   5065 A3                 7003 	inc	dptr
   5066 E0                 7004 	movx	a,@dptr
   5067 90 82 A0           7005 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_168
   506A C4                 7006 	swap	a
   506B 54 30              7007 	anl	a,#(0xf0&0x30)
   506D F5 F0              7008 	mov	b,a
   506F E0                 7009 	movx	a,@dptr
   5070 54 CF              7010 	anl	a,#0xcf
   5072 45 F0              7011 	orl	a,b
   5074 F0                 7012 	movx	@dptr,a
                           7013 ;	../../shared/src/spd_ctrl.c:741: reg_ANA_FBCK_SEL = 0;
   5075 90 A3 19           7014 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   5078 E0                 7015 	movx	a,@dptr
   5079 54 FD              7016 	anl	a,#0xfd
   507B F0                 7017 	movx	@dptr,a
   507C 22                 7018 	ret
                           7019 ;------------------------------------------------------------
                           7020 ;Allocation info for local variables in function 'ringloadSpdtbl_4_fcnt'
                           7021 ;------------------------------------------------------------
                           7022 ;fbck                      Allocated to registers 
                           7023 ;ck1g                      Allocated to registers r2 
                           7024 ;rate                      Allocated to registers r3 
                           7025 ;------------------------------------------------------------
                           7026 ;	../../shared/src/spd_ctrl.c:745: void ringloadSpdtbl_4_fcnt(void) {
                           7027 ;	-----------------------------------------
                           7028 ;	 function ringloadSpdtbl_4_fcnt
                           7029 ;	-----------------------------------------
   507D                    7030 _ringloadSpdtbl_4_fcnt:
                           7031 ;	../../shared/src/spd_ctrl.c:749: ck1g = ring_use_250m;
   507D A2 13              7032 	mov	c,_ring_use_250m
   507F E4                 7033 	clr	a
   5080 33                 7034 	rlc	a
   5081 FA                 7035 	mov	r2,a
                           7036 ;	../../shared/src/spd_ctrl.c:750: if(phy_mode==SERDES) rate = gen_pll_rate;
   5082 90 A3 16           7037 	mov	dptr,#(_SYSTEM + 0x0002)
   5085 E0                 7038 	movx	a,@dptr
   5086 54 07              7039 	anl	a,#0x07
   5088 FB                 7040 	mov	r3,a
   5089 BB 04 07           7041 	cjne	r3,#0x04,00102$
   508C 90 67 8C           7042 	mov	dptr,#_gen_pll_rate
   508F E0                 7043 	movx	a,@dptr
   5090 FB                 7044 	mov	r3,a
   5091 80 06              7045 	sjmp	00103$
   5093                    7046 00102$:
                           7047 ;	../../shared/src/spd_ctrl.c:751: else rate = PLL_RATE_SEL_RING;
   5093 90 E6 1F           7048 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   5096 E0                 7049 	movx	a,@dptr
   5097 FC                 7050 	mov	r4,a
   5098 FB                 7051 	mov	r3,a
   5099                    7052 00103$:
                           7053 ;	../../shared/src/spd_ctrl.c:758: reg_PLL_FBDIV_RING_7_0 = ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring];
   5099 7C 00              7054 	mov	r4,#0x00
   509B C0 03              7055 	push	ar3
   509D C0 02              7056 	push	ar2
   509F C0 04              7057 	push	ar4
   50A1 90 01 20           7058 	mov	dptr,#0x0120
   50A4 12 7C E3           7059 	lcall	__mulint
   50A7 AA 82              7060 	mov	r2,dpl
   50A9 AC 83              7061 	mov	r4,dph
   50AB 15 81              7062 	dec	sp
   50AD 15 81              7063 	dec	sp
   50AF D0 03              7064 	pop	ar3
   50B1 EA                 7065 	mov	a,r2
   50B2 24 C0              7066 	add	a,#_ring_speedtable
   50B4 FD                 7067 	mov	r5,a
   50B5 EC                 7068 	mov	a,r4
   50B6 34 E1              7069 	addc	a,#(_ring_speedtable >> 8)
   50B8 FE                 7070 	mov	r6,a
   50B9 EB                 7071 	mov	a,r3
   50BA 75 F0 24           7072 	mov	b,#0x24
   50BD A4                 7073 	mul	ab
   50BE FB                 7074 	mov	r3,a
   50BF 2D                 7075 	add	a,r5
   50C0 FD                 7076 	mov	r5,a
   50C1 E4                 7077 	clr	a
   50C2 3E                 7078 	addc	a,r6
   50C3 FE                 7079 	mov	r6,a
   50C4 74 0B              7080 	mov	a,#0x0B
   50C6 2D                 7081 	add	a,r5
   50C7 F5 82              7082 	mov	dpl,a
   50C9 E4                 7083 	clr	a
   50CA 3E                 7084 	addc	a,r6
   50CB F5 83              7085 	mov	dph,a
   50CD E0                 7086 	movx	a,@dptr
   50CE 90 82 F4           7087 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   50D1 F0                 7088 	movx	@dptr,a
                           7089 ;	../../shared/src/spd_ctrl.c:759: reg_PLL_FBDIV_RING_9_8 = ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring+1];
   50D2 EA                 7090 	mov	a,r2
   50D3 24 C0              7091 	add	a,#_ring_speedtable
   50D5 FA                 7092 	mov	r2,a
   50D6 EC                 7093 	mov	a,r4
   50D7 34 E1              7094 	addc	a,#(_ring_speedtable >> 8)
   50D9 FC                 7095 	mov	r4,a
   50DA EB                 7096 	mov	a,r3
   50DB 2A                 7097 	add	a,r2
   50DC FB                 7098 	mov	r3,a
   50DD E4                 7099 	clr	a
   50DE 3C                 7100 	addc	a,r4
   50DF FD                 7101 	mov	r5,a
   50E0 74 0C              7102 	mov	a,#0x0C
   50E2 2B                 7103 	add	a,r3
   50E3 F5 82              7104 	mov	dpl,a
   50E5 E4                 7105 	clr	a
   50E6 3D                 7106 	addc	a,r5
   50E7 F5 83              7107 	mov	dph,a
   50E9 E0                 7108 	movx	a,@dptr
   50EA 90 82 F0           7109 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   50ED 25 E0              7110 	add	a,acc
   50EF 54 06              7111 	anl	a,#0x06
   50F1 F5 F0              7112 	mov	b,a
   50F3 E0                 7113 	movx	a,@dptr
   50F4 54 F9              7114 	anl	a,#0xf9
   50F6 45 F0              7115 	orl	a,b
   50F8 F0                 7116 	movx	@dptr,a
                           7117 ;	../../shared/src/spd_ctrl.c:760: reg_ANA_FBCK_SEL_RING = 0;
   50F9 90 A3 18           7118 	mov	dptr,#_PM_CMN_REG1
   50FC E0                 7119 	movx	a,@dptr
   50FD 54 FB              7120 	anl	a,#0xfb
   50FF F0                 7121 	movx	@dptr,a
   5100 22                 7122 	ret
                           7123 	.area CSEG    (CODE)
                           7124 	.area CONST   (CODE)
                           7125 	.area CABS    (ABS,CODE)
