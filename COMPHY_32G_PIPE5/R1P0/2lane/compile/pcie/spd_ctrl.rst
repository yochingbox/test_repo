                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:32 2018
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
                            983 	.globl _loadspeedtbl_gen
                            984 	.globl _loadSpeedtbl
                            985 	.globl _loadSpdtbl_4_fcnt
                            986 	.globl _ringloadSpdtbl_4_fcnt
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
                           1124 ; overlayable bit register bank
                           1125 ;--------------------------------------------------------
                           1126 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1127 bits:
   0025                    1128 	.ds 1
                    8000   1129 	b0 = bits[0]
                    8100   1130 	b1 = bits[1]
                    8200   1131 	b2 = bits[2]
                    8300   1132 	b3 = bits[3]
                    8400   1133 	b4 = bits[4]
                    8500   1134 	b5 = bits[5]
                    8600   1135 	b6 = bits[6]
                    8700   1136 	b7 = bits[7]
                           1137 ;--------------------------------------------------------
                           1138 ; internal ram data
                           1139 ;--------------------------------------------------------
                           1140 	.area DSEG    (DATA)
                           1141 ;--------------------------------------------------------
                           1142 ; overlayable items in internal ram 
                           1143 ;--------------------------------------------------------
                           1144 	.area OSEG    (OVR,DATA)
                           1145 ;--------------------------------------------------------
                           1146 ; indirectly addressable internal ram data
                           1147 ;--------------------------------------------------------
                           1148 	.area ISEG    (DATA)
                           1149 ;--------------------------------------------------------
                           1150 ; absolute internal ram data
                           1151 ;--------------------------------------------------------
                           1152 	.area IABS    (ABS,DATA)
                           1153 	.area IABS    (ABS,DATA)
                           1154 ;--------------------------------------------------------
                           1155 ; bit data
                           1156 ;--------------------------------------------------------
                           1157 	.area BSEG    (BIT)
                           1158 ;--------------------------------------------------------
                           1159 ; paged external ram data
                           1160 ;--------------------------------------------------------
                           1161 	.area PSEG    (PAG,XDATA)
                           1162 ;--------------------------------------------------------
                           1163 ; external ram data
                           1164 ;--------------------------------------------------------
                           1165 	.area XSEG    (XDATA)
                    1000   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1180 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1181 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1182 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1183 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1184 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1185 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1186 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1187 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1188 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1189 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1190 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1191 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1192 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1193 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1194 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1195 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1196 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1197 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1198 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1199 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1200 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1201 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1202 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1203 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1204 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1205 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1206 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1207 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1208 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1209 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1210 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1211 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1212 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1213 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1214 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1215 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1216 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1217 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1218 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1219 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1220 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1221 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1222 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1223 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1224 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1225 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1226 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1227 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1228 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1229 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1230 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1231 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1232 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1233 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1234 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1235 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1236 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1237 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1238 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1239 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1240 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1241 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1242 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1243 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1244 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1245 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1246 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1247 _ANA_DFEE_REG_20	=	0x0480
                    0484   1248 _ANA_DFEE_REG_21	=	0x0484
                    0488   1249 _ANA_DFEE_REG_22	=	0x0488
                    048C   1250 _ANA_DFEE_REG_23	=	0x048c
                    0490   1251 _ANA_DFEE_REG_24	=	0x0490
                    0494   1252 _ANA_DFEE_REG_25	=	0x0494
                    0498   1253 _ANA_DFEE_REG_26	=	0x0498
                    049C   1254 _ANA_DFEE_REG_27	=	0x049c
                    0400   1255 _ANA_DFEE_REG_00	=	0x0400
                    0404   1256 _ANA_DFEE_REG_01	=	0x0404
                    0408   1257 _ANA_DFEE_REG_02	=	0x0408
                    040C   1258 _ANA_DFEE_REG_03	=	0x040c
                    0410   1259 _ANA_DFEE_REG_04	=	0x0410
                    0414   1260 _ANA_DFEE_REG_05	=	0x0414
                    0418   1261 _ANA_DFEE_REG_06	=	0x0418
                    041C   1262 _ANA_DFEE_REG_07	=	0x041c
                    0420   1263 _ANA_DFEE_REG_08	=	0x0420
                    0424   1264 _ANA_DFEE_REG_09	=	0x0424
                    0428   1265 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1266 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1267 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1268 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1269 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1270 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1271 _ANA_DFEE_REG_10	=	0x0440
                    0444   1272 _ANA_DFEE_REG_11	=	0x0444
                    0448   1273 _ANA_DFEE_REG_12	=	0x0448
                    044C   1274 _ANA_DFEE_REG_13	=	0x044c
                    0450   1275 _ANA_DFEE_REG_14	=	0x0450
                    0454   1276 _ANA_DFEE_REG_15	=	0x0454
                    0458   1277 _ANA_DFEE_REG_16	=	0x0458
                    045C   1278 _ANA_DFEE_REG_17	=	0x045c
                    0460   1279 _ANA_DFEE_REG_18	=	0x0460
                    0464   1280 _ANA_DFEE_REG_19	=	0x0464
                    0468   1281 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1282 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1283 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1284 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1285 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1286 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1287 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1288 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1289 _ANA_DFEO_REG_10	=	0x0840
                    0844   1290 _ANA_DFEO_REG_11	=	0x0844
                    0848   1291 _ANA_DFEO_REG_12	=	0x0848
                    084C   1292 _ANA_DFEO_REG_13	=	0x084c
                    0850   1293 _ANA_DFEO_REG_14	=	0x0850
                    0854   1294 _ANA_DFEO_REG_15	=	0x0854
                    0858   1295 _ANA_DFEO_REG_16	=	0x0858
                    085C   1296 _ANA_DFEO_REG_17	=	0x085c
                    0860   1297 _ANA_DFEO_REG_18	=	0x0860
                    0864   1298 _ANA_DFEO_REG_19	=	0x0864
                    0868   1299 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1300 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1301 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1302 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1303 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1304 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1305 _ANA_DFEO_REG_20	=	0x0880
                    0884   1306 _ANA_DFEO_REG_21	=	0x0884
                    0888   1307 _ANA_DFEO_REG_22	=	0x0888
                    088C   1308 _ANA_DFEO_REG_23	=	0x088c
                    0890   1309 _ANA_DFEO_REG_24	=	0x0890
                    0894   1310 _ANA_DFEO_REG_25	=	0x0894
                    0898   1311 _ANA_DFEO_REG_26	=	0x0898
                    089C   1312 _ANA_DFEO_REG_27	=	0x089c
                    0800   1313 _ANA_DFEO_REG_00	=	0x0800
                    0804   1314 _ANA_DFEO_REG_01	=	0x0804
                    0808   1315 _ANA_DFEO_REG_02	=	0x0808
                    080C   1316 _ANA_DFEO_REG_03	=	0x080c
                    0810   1317 _ANA_DFEO_REG_04	=	0x0810
                    0814   1318 _ANA_DFEO_REG_05	=	0x0814
                    0818   1319 _ANA_DFEO_REG_06	=	0x0818
                    081C   1320 _ANA_DFEO_REG_07	=	0x081c
                    0820   1321 _ANA_DFEO_REG_08	=	0x0820
                    0824   1322 _ANA_DFEO_REG_09	=	0x0824
                    0828   1323 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1324 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1325 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1326 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1327 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1328 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1329 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1330 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1331 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1332 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1333 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1334 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1335 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1336 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1337 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1338 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1339 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1340 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1341 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1342 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1343 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1344 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1345 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1346 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1347 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1348 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1349 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1350 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1351 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1352 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1353 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1354 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1355 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1356 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1357 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1358 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1359 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1360 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1361 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1362 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1363 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1364 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1365 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1366 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1367 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1368 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1369 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1370 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1371 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1372 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1373 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1374 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1375 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1376 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1377 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1378 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1379 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1380 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1381 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1382 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1383 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1384 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1385 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1386 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1387 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1388 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1389 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1390 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1391 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1392 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1393 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1394 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1395 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1396 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1397 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1398 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1399 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1400 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1401 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1402 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1403 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1404 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1405 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1406 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1407 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1408 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1409 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1410 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1411 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1412 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1413 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1414 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1415 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1416 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1417 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1418 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1419 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1420 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1421 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1422 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1423 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1424 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1425 _TX_SYSTEM_LANE	=	0x2034
                    203C   1426 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1427 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1428 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1429 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1430 __FIELDNAME__LANE	=	0x204c
                    2050   1431 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1432 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1433 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1434 _MON_TOP	=	0x205c
                    2100   1435 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1436 _RX_SYSTEM_LANE	=	0x2104
                    2108   1437 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1438 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1439 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1440 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1441 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1442 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1443 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1444 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1445 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1446 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1447 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1448 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1449 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1450 _CDR_LOCK_REG	=	0x213c
                    2140   1451 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1452 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1453 _RX_DATA_PATH_REG	=	0x2148
                    214C   1454 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1455 _RX_CALIBRATION_REG	=	0x2150
                    2158   1456 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1457 _DTL_REG0	=	0x2160
                    2164   1458 _DTL_REG1	=	0x2164
                    2168   1459 _DTL_REG2	=	0x2168
                    216C   1460 _DTL_REG3	=	0x216c
                    2170   1461 _SQ_REG0	=	0x2170
                    4000   1462 _LANE_CFG0	=	0x4000
                    4004   1463 _LANE_STATUS0	=	0x4004
                    4008   1464 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1465 _LANE_CFG2_LANE	=	0x400c
                    4010   1466 _LANE_CFG4	=	0x4010
                    4014   1467 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1468 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1469 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1470 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1471 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1472 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1473 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1474 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1475 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1476 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1477 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1478 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1479 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1480 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1481 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1482 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1483 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1484 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1485 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1486 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1487 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1488 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1489 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1490 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1491 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1492 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1493 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1494 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1495 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1496 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1497 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1498 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1499 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1500 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1501 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1502 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1503 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1504 _MCU_CONTROL_LANE	=	0x2200
                    2204   1505 _MCU_GPIO	=	0x2204
                    2208   1506 _CACHE_DEBUG0	=	0x2208
                    220C   1507 _CACHE_DEBUG1	=	0x220c
                    2210   1508 _LANE_SYSTEM0	=	0x2210
                    2230   1509 _MCU_STATUS0_LANE	=	0x2230
                    2234   1510 _MCU_STATUS1_LANE	=	0x2234
                    2238   1511 _MCU_STATUS2_LANE	=	0x2238
                    223C   1512 _MCU_STATUS3_LANE	=	0x223c
                    2240   1513 _MCU_INT0_CONTROL	=	0x2240
                    2244   1514 _MCU_INT1_CONTROL	=	0x2244
                    2248   1515 _MCU_INT2_CONTROL	=	0x2248
                    224C   1516 _MCU_INT3_CONTROL	=	0x224c
                    2250   1517 _MCU_INT4_CONTROL	=	0x2250
                    2254   1518 _MCU_INT5_CONTROL	=	0x2254
                    2258   1519 _MCU_INT6_CONTROL	=	0x2258
                    225C   1520 _MCU_INT7_CONTROL	=	0x225c
                    2260   1521 _MCU_INT8_CONTROL	=	0x2260
                    2264   1522 _MCU_INT9_CONTROL	=	0x2264
                    2268   1523 _MCU_INT10_CONTROL	=	0x2268
                    226C   1524 _MCU_INT11_CONTROL	=	0x226c
                    2270   1525 _MCU_INT12_CONTROL	=	0x2270
                    2274   1526 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1527 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1528 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1529 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1530 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1531 _MCU_IRQ_LANE	=	0x2288
                    228C   1532 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1533 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1534 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1535 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1536 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1537 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1538 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1539 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1540 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1541 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1542 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1543 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1544 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1545 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1546 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1547 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1548 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1549 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1550 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1551 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1552 _MCU_WDT_LANE	=	0x22dc
                    22E0   1553 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1554 _MCU_COMMAND0	=	0x22e4
                    22F4   1555 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1556 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1557 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1558 _PT_CONTROL0	=	0x2300
                    2304   1559 _PT_CONTROL1	=	0x2304
                    2308   1560 _PT_USER_PATTERN0	=	0x2308
                    230C   1561 _PT_USER_PATTERN1	=	0x230c
                    2310   1562 _PT_USER_PATTERN2	=	0x2310
                    2314   1563 _PT_COUNTER0	=	0x2314
                    2318   1564 _PT_COUNTER1	=	0x2318
                    231C   1565 _PT_COUNTER2	=	0x231c
                    2400   1566 _DFE_CTRL_REG0	=	0x2400
                    2404   1567 _DFE_CTRL_REG1	=	0x2404
                    2408   1568 _DFE_CTRL_REG2	=	0x2408
                    240C   1569 _DFE_CTRL_REG3	=	0x240c
                    2410   1570 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1571 _DFE_CTRL_REG4	=	0x2414
                    2418   1572 _DFE_ANA_REG0	=	0x2418
                    241C   1573 _DFE_ANA_REG1	=	0x241c
                    2420   1574 _DFE_STEP_REG0	=	0x2420
                    2424   1575 _DFE_STEP_REG1	=	0x2424
                    2430   1576 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1577 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1578 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1579 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1580 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1581 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1582 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1583 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1584 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1585 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1586 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1587 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1588 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1589 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1590 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1591 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1592 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1593 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1594 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1595 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1596 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1597 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1598 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1599 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1600 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1601 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1602 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1603 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1604 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1605 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1606 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1607 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1608 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1609 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1610 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1611 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1612 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1613 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1614 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1615 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1616 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1617 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1618 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1619 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1620 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1621 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1622 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1623 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1624 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1625 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1626 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1627 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1628 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1629 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1630 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1631 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1632 _CAL_OFST_REG0	=	0x2518
                    251C   1633 _CAL_OFST_REG1	=	0x251c
                    2520   1634 _CAL_OFST_REG2	=	0x2520
                    2530   1635 _DFE_DCE_REG0	=	0x2530
                    2540   1636 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1637 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1638 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1639 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1640 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1641 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1642 _EOM_VLD_REG0	=	0x2560
                    2564   1643 _EOM_VLD_REG1	=	0x2564
                    2568   1644 _EOM_VLD_REG2	=	0x2568
                    256C   1645 _EOM_VLD_REG3	=	0x256c
                    2570   1646 _EOM_ERR_REG0	=	0x2570
                    2574   1647 _EOM_ERR_REG1	=	0x2574
                    2578   1648 _EOM_ERR_REG2	=	0x2578
                    257C   1649 _EOM_ERR_REG3	=	0x257c
                    2580   1650 _EOM_REG0	=	0x2580
                    25F0   1651 _EOM_VLD_REG4	=	0x25f0
                    25F4   1652 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1653 _CAL_CTRL1_LANE	=	0x6000
                    6004   1654 _CAL_CTRL2_LANE	=	0x6004
                    6008   1655 _CAL_CTRL3_LANE	=	0x6008
                    600C   1656 _CAL_CTRL4_LANE	=	0x600c
                    6010   1657 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1658 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1659 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1660 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1661 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1662 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1663 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1664 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1665 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1666 _DFE_CONTROL_0	=	0x6034
                    6038   1667 _DFE_CONTROL_1	=	0x6038
                    6040   1668 _DFE_CONTROL_2	=	0x6040
                    6044   1669 _DFE_CONTROL_3	=	0x6044
                    6048   1670 _DFE_CONTROL_4	=	0x6048
                    604C   1671 _DFE_CONTROL_5	=	0x604c
                    6050   1672 _TRAIN_CONTROL_0	=	0x6050
                    6054   1673 _TRAIN_CONTROL_1	=	0x6054
                    6058   1674 _TRAIN_CONTROL_2	=	0x6058
                    605C   1675 _RPTA_CONFIG_0	=	0x605c
                    6060   1676 _RPTA_CONFIG_1	=	0x6060
                    6064   1677 _DLL_CAL	=	0x6064
                    6068   1678 _TRAIN_PARA_0	=	0x6068
                    606C   1679 _TRAIN_PARA_1	=	0x606c
                    6070   1680 _TRAIN_PARA_2	=	0x6070
                    6074   1681 _TRAIN_PARA_3	=	0x6074
                    6078   1682 _DFE_CONTROL_6	=	0x6078
                    607C   1683 _DFE_TEST_0	=	0x607c
                    6080   1684 _DFE_TEST_1	=	0x6080
                    6084   1685 _DFE_TEST_4	=	0x6084
                    6088   1686 _DFE_TEST_5	=	0x6088
                    608C   1687 _DFE_CONTROL_7	=	0x608c
                    6090   1688 _DFE_CONTROL_8	=	0x6090
                    6094   1689 _DFE_CONTROL_9	=	0x6094
                    6098   1690 _DFE_CONTROL_10	=	0x6098
                    609C   1691 _DFE_CONTROL_11	=	0x609c
                    60A0   1692 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1693 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1694 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1695 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1696 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1697 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1698 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1699 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1700 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1701 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1702 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1703 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1704 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1705 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1706 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1707 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1708 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1709 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1710 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1711 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1712 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1713 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1714 _END_XDAT_LANE	=	0x60f8
                    A000   1715 _TX_CMN_REG	=	0xa000
                    A008   1716 _DTX_REG0	=	0xa008
                    A00C   1717 _DTX_REG1	=	0xa00c
                    A010   1718 _DTX_REG2	=	0xa010
                    A014   1719 _DTX_REG3	=	0xa014
                    A018   1720 _DTX_REG4	=	0xa018
                    A01C   1721 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1722 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1723 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1724 _SRIS_REG0	=	0xa02c
                    A030   1725 _SRIS_REG1	=	0xa030
                    A100   1726 _RX_CMN_0	=	0xa100
                    A110   1727 _DFE_STATIC_REG0	=	0xa110
                    A114   1728 _DFE_STATIC_REG1	=	0xa114
                    A118   1729 _DFE_STATIC_REG3	=	0xa118
                    A11C   1730 _DFE_STATIC_REG4	=	0xa11c
                    A120   1731 _DFE_STATIC_REG5	=	0xa120
                    A124   1732 _DFE_STATIC_REG6	=	0xa124
                    4200   1733 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1734 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1735 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1736 _GLOB_MISC_CTRL	=	0x420c
                    4210   1737 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1738 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1739 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1740 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1741 _GLOB_PM_CFG0	=	0x4220
                    4224   1742 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1743 _GLOB_COUNTER_HI	=	0x4228
                    422C   1744 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1745 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1746 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1747 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1748 _GLOB_BIST_CTRL	=	0x423c
                    4240   1749 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1750 _GLOB_BIST_START	=	0x4244
                    4248   1751 _GLOB_BIST_MASK	=	0x4248
                    424C   1752 _GLOB_BIST_RESULT	=	0x424c
                    4250   1753 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1754 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1755 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1756 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1757 _MCU_CONTROL_0	=	0xa200
                    A204   1758 _MCU_CONTROL_1	=	0xa204
                    A208   1759 _MCU_CONTROL_2	=	0xa208
                    A20C   1760 _MCU_CONTROL_3	=	0xa20c
                    A210   1761 _MCU_CONTROL_4	=	0xa210
                    A214   1762 _MCU_DEBUG0	=	0xa214
                    A218   1763 _MCU_DEBUG1	=	0xa218
                    A21C   1764 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1765 _MEMORY_CONTROL_1	=	0xa220
                    A224   1766 _MEMORY_CONTROL_2	=	0xa224
                    A228   1767 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1768 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1769 _MCU_INFO_0	=	0xa234
                    A238   1770 _MCU_INFO_1	=	0xa238
                    A23C   1771 _MCU_INFO_2	=	0xa23c
                    A240   1772 _MCU_INFO_3	=	0xa240
                    A244   1773 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1774 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1775 _MEM_IRQ	=	0xa2e4
                    A2E8   1776 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1777 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1778 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1779 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1780 _MCU_SYNC1	=	0xa2f8
                    A2FC   1781 _MCU_SYNC2	=	0xa2fc
                    A300   1782 _TEST0	=	0xa300
                    A304   1783 _TEST1	=	0xa304
                    A308   1784 _TEST2	=	0xa308
                    A30C   1785 _TEST3	=	0xa30c
                    A310   1786 _TEST4	=	0xa310
                    A314   1787 _SYSTEM	=	0xa314
                    A318   1788 _PM_CMN_REG1	=	0xa318
                    A31C   1789 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1790 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1791 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1792 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1793 _PLLCAL_REG0	=	0xa32c
                    A330   1794 _PLLCAL_REG1	=	0xa330
                    A334   1795 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1796 _SPD_CMN_REG1	=	0xa338
                    A33C   1797 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1798 _CMN_CALIBRATION	=	0xa340
                    A344   1799 __FIELDNAME_	=	0xa344
                    A348   1800 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1801 _PM_CMN_REG2	=	0xa34c
                    A354   1802 _TEST5	=	0xa354
                    A358   1803 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1804 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1805 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1806 _MCU_SDT_CMN	=	0xa364
                    A368   1807 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1808 _MCU_INT_ADDR	=	0xa36c
                    A370   1809 _CMN_ISR_2	=	0xa370
                    A374   1810 _CMN_ISR_MASK_2	=	0xa374
                    A378   1811 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1812 _CMN_MCU_GPIO	=	0xa37c
                    A380   1813 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1814 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1815 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1816 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1817 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1818 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1819 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1820 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1821 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1822 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1823 _CMN_ISR_1	=	0xa3a8
                    A3AC   1824 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1825 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1826 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1827 _CID_REG0	=	0xa3f8
                    A3FC   1828 _CID_REG1	=	0xa3fc
                    E600   1829 _FW_REV	=	0xe600
                    E604   1830 _CONTROL_CONFIG0	=	0xe604
                    E608   1831 _CONTROL_CONFIG1	=	0xe608
                    E60C   1832 _CONTROL_CONFIG2	=	0xe60c
                    E610   1833 _CONTROL_CONFIG3	=	0xe610
                    E614   1834 _CONTROL_CONFIG4	=	0xe614
                    E618   1835 _CONTROL_CONFIG5	=	0xe618
                    E61C   1836 _CONTROL_CONFIG6	=	0xe61c
                    E620   1837 _CONTROL_CONFIG7	=	0xe620
                    E624   1838 _CAL_DATA0	=	0xe624
                    E628   1839 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1840 _CONTROL_CONFIG8	=	0xe62c
                    E630   1841 _CONTROL_CONFIG9	=	0xe630
                    E634   1842 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1843 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1844 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1845 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1846 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1847 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1848 _CAL_STATUS_READ	=	0xe64c
                    E650   1849 _MCU_CONFIG	=	0xe650
                    E654   1850 _CAL_DATA1	=	0xe654
                    E658   1851 _LOOP_CNTS	=	0xe658
                    E65C   1852 _MCU_CONFIG1	=	0xe65c
                    E660   1853 _TIMER_SEL1	=	0xe660
                    E664   1854 _TIMER_SEL2	=	0xe664
                    E668   1855 _TIMER_SEL3	=	0xe668
                    E66C   1856 _G_SELLV_TXCLK	=	0xe66c
                    E670   1857 _G_SELLV_TXDATA	=	0xe670
                    E674   1858 _G_SELLV_TXPRE	=	0xe674
                    E678   1859 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1860 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1861 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1862 _SAS_PRESET0_TB	=	0xe684
                    E688   1863 _SAS_PRESET1_TB	=	0xe688
                    E68C   1864 _SAS_PRESET2_TB	=	0xe68c
                    E690   1865 _ETH_PRESET0_TB	=	0xe690
                    E694   1866 _ETH_PRESET1_TB	=	0xe694
                    E698   1867 _TX_SAVE_0	=	0xe698
                    E69C   1868 _TX_SAVE_1	=	0xe69c
                    E6A0   1869 _TX_SAVE_2	=	0xe6a0
                    E6A4   1870 _TX_SAVE_3	=	0xe6a4
                    E6A8   1871 _TX_SAVE_4	=	0xe6a8
                    E6AC   1872 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1873 _SYNC_INFO	=	0xe6b0
                    E6B4   1874 _MCU_INFO_4	=	0xe6b4
                    E6B8   1875 _MCU_INFO_5	=	0xe6b8
                    E6BC   1876 _MCU_INFO_12	=	0xe6bc
                    E6C0   1877 _MCU_INFO_13	=	0xe6c0
                    E6C4   1878 _END_XDAT_CMN	=	0xe6c4
                    2600   1879 _DME_ENC_REG0	=	0x2600
                    2604   1880 _DME_ENC_REG1	=	0x2604
                    2608   1881 _DME_ENC_REG2	=	0x2608
                    260C   1882 _DME_DEC_REG0	=	0x260c
                    2610   1883 _DME_DEC_REG1	=	0x2610
                    2614   1884 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1885 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1886 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1887 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1888 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1889 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1890 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1891 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1892 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1893 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1894 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1895 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1896 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1897 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1898 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1899 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1900 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1901 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1902 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1903 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1904 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1905 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1906 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1907 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1908 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1909 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1910 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1911 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1912 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1913 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1914 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1915 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1916 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1917 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1918 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1919 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1920 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1921 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1922 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1923 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1924 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1925 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1926 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1927 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1928 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1929 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1930 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1931 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1932 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1933 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1934 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1935 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1936 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1937 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1938 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1939 _CDS_READ_MISC0	=	0x6170
                    6174   1940 _CDS_READ_MISC1	=	0x6174
                    6214   1941 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1942 _lc_speedtable	=	0xe000
                    E1C0   1943 _ring_speedtable	=	0xe1c0
                    E5C0   1944 _phy_mode_cmn_table	=	0xe5c0
                    6300   1945 _max_gen	=	0x6300
                    6301   1946 _min_gen	=	0x6301
                    6304   1947 _speedtable	=	0x6304
                    65D4   1948 _phy_mode_lane_table	=	0x65d4
                    60B4   1949 _rc_save	=	0x60b4
                    60D0   1950 _txffe_save	=	0x60d0
                    60E4   1951 _phase_save	=	0x60e4
                    6030   1952 _train_gn1_index	=	0x6030
                    6031   1953 _train_g1_index	=	0x6031
                    6032   1954 _train_g0_index	=	0x6032
                    E6B0   1955 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1956 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1957 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1958 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1959 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1960 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1961 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1962 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1963 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1964 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1965 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1966 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1967 _lnx_cal_txdcc	=	0x65da
                    65DE   1968 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1969 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1970 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1971 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1972 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1973 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1974 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1975 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1976 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1977 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1978 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1979 _lnx_cal_eom_dpher	=	0x6610
                    6612   1980 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1981 _lnx_cal_align90_dac	=	0x661a
                    6622   1982 _lnx_cal_align90_gm	=	0x6622
                    662A   1983 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1984 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1985 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1986 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1987 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1988 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1989 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1990 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1991 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1992 _lnx_calx_txdcc	=	0x6499
                    649F   1993 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1994 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1995 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1996 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1997 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1998 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1999 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2000 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2001 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2002 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2003 _lnx_calx_align90_gm	=	0x64d8
                    6100   2004 _cds28	=	0x6100
                    6178   2005 _dfe_sm	=	0x6178
                    61B8   2006 _dfe_sm_dc	=	0x61b8
                    61C0   2007 _dfe_sm_save	=	0x61c0
                    03FC   2008 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2009 _tx_tb	=	0xe684
                    E698   2010 _train_save_tb	=	0xe698
                    607C   2011 _sq_thrs_ratio_tb	=	0x607c
                           2012 ;--------------------------------------------------------
                           2013 ; absolute external ram data
                           2014 ;--------------------------------------------------------
                           2015 	.area XABS    (ABS,XDATA)
                           2016 ;--------------------------------------------------------
                           2017 ; external initialized ram data
                           2018 ;--------------------------------------------------------
                           2019 	.area HOME    (CODE)
                           2020 	.area GSINIT0 (CODE)
                           2021 	.area GSINIT1 (CODE)
                           2022 	.area GSINIT2 (CODE)
                           2023 	.area GSINIT3 (CODE)
                           2024 	.area GSINIT4 (CODE)
                           2025 	.area GSINIT5 (CODE)
                           2026 	.area GSINIT  (CODE)
                           2027 	.area GSFINAL (CODE)
                           2028 	.area CSEG    (CODE)
                           2029 ;--------------------------------------------------------
                           2030 ; global & static initialisations
                           2031 ;--------------------------------------------------------
                           2032 	.area HOME    (CODE)
                           2033 	.area GSINIT  (CODE)
                           2034 	.area GSFINAL (CODE)
                           2035 	.area GSINIT  (CODE)
                           2036 ;--------------------------------------------------------
                           2037 ; Home
                           2038 ;--------------------------------------------------------
                           2039 	.area HOME    (CODE)
                           2040 	.area HOME    (CODE)
                           2041 ;--------------------------------------------------------
                           2042 ; code
                           2043 ;--------------------------------------------------------
                           2044 	.area CSEG    (CODE)
                           2045 ;------------------------------------------------------------
                           2046 ;Allocation info for local variables in function 'SpeedChange'
                           2047 ;------------------------------------------------------------
                           2048 ;dtx_off                   Allocated to registers r2 
                           2049 ;------------------------------------------------------------
                           2050 ;	../../shared/src/spd_ctrl.c:26: void SpeedChange(){
                           2051 ;	-----------------------------------------
                           2052 ;	 function SpeedChange
                           2053 ;	-----------------------------------------
   33D5                    2054 _SpeedChange:
                    0002   2055 	ar2 = 0x02
                    0003   2056 	ar3 = 0x03
                    0004   2057 	ar4 = 0x04
                    0005   2058 	ar5 = 0x05
                    0006   2059 	ar6 = 0x06
                    0007   2060 	ar7 = 0x07
                    0000   2061 	ar0 = 0x00
                    0001   2062 	ar1 = 0x01
                           2063 ;	../../shared/src/spd_ctrl.c:30: dtx_off = 0;
   33D5 7A 00              2064 	mov	r2,#0x00
                           2065 ;	../../shared/src/spd_ctrl.c:32: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
                           2066 ;	../../shared/src/spd_ctrl.c:33: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
   33D7 90 20 57           2067 	mov	dptr,#(_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE + 0x0003)
   33DA 74 C0              2068 	mov	a,#0xC0
   33DC F0                 2069 	movx	@dptr,a
                           2070 ;	../../shared/src/spd_ctrl.c:35: rxinit_4_spdchg_en = 0;
   33DD E4                 2071 	clr	a
   33DE F0                 2072 	movx	@dptr,a
   33DF 90 67 A1           2073 	mov	dptr,#_rxinit_4_spdchg_en
   33E2 F0                 2074 	movx	@dptr,a
                           2075 ;	../../shared/src/spd_ctrl.c:37: new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = (new_gen_tx<cmx_PHY_GEN_MAX_3_0)? new_gen_tx: cmx_PHY_GEN_MAX_3_0;
   33E3 90 20 33           2076 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   33E6 E0                 2077 	movx	a,@dptr
   33E7 C4                 2078 	swap	a
   33E8 54 0F              2079 	anl	a,#0x0f
   33EA FB                 2080 	mov	r3,a
   33EB 90 66 29           2081 	mov	dptr,#_new_gen_tx
   33EE F0                 2082 	movx	@dptr,a
   33EF 90 E6 2C           2083 	mov	dptr,#_CONTROL_CONFIG8
   33F2 E0                 2084 	movx	a,@dptr
   33F3 54 0F              2085 	anl	a,#0x0f
   33F5 FC                 2086 	mov	r4,a
   33F6 8B 05              2087 	mov	ar5,r3
   33F8 C3                 2088 	clr	c
   33F9 ED                 2089 	mov	a,r5
   33FA 64 80              2090 	xrl	a,#0x80
   33FC 8C F0              2091 	mov	b,r4
   33FE 63 F0 80           2092 	xrl	b,#0x80
   3401 95 F0              2093 	subb	a,b
   3403 50 02              2094 	jnc	00165$
   3405 80 08              2095 	sjmp	00166$
   3407                    2096 00165$:
   3407 90 E6 2C           2097 	mov	dptr,#_CONTROL_CONFIG8
   340A E0                 2098 	movx	a,@dptr
   340B 54 0F              2099 	anl	a,#0x0f
   340D FC                 2100 	mov	r4,a
   340E FB                 2101 	mov	r3,a
   340F                    2102 00166$:
   340F 90 66 29           2103 	mov	dptr,#_new_gen_tx
   3412 EB                 2104 	mov	a,r3
   3413 F0                 2105 	movx	@dptr,a
                           2106 ;	../../shared/src/spd_ctrl.c:38: new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = (new_gen_rx<cmx_PHY_GEN_MAX_3_0)? new_gen_rx: cmx_PHY_GEN_MAX_3_0;
   3414 90 21 17           2107 	mov	dptr,#(_SPD_CTRL_RX_LANE_REG1_LANE + 0x0003)
   3417 E0                 2108 	movx	a,@dptr
   3418 C4                 2109 	swap	a
   3419 54 0F              2110 	anl	a,#0x0f
   341B FC                 2111 	mov	r4,a
   341C 90 66 2A           2112 	mov	dptr,#_new_gen_rx
   341F F0                 2113 	movx	@dptr,a
   3420 90 E6 2C           2114 	mov	dptr,#_CONTROL_CONFIG8
   3423 E0                 2115 	movx	a,@dptr
   3424 54 0F              2116 	anl	a,#0x0f
   3426 FD                 2117 	mov	r5,a
   3427 8C 06              2118 	mov	ar6,r4
   3429 C3                 2119 	clr	c
   342A EE                 2120 	mov	a,r6
   342B 64 80              2121 	xrl	a,#0x80
   342D 8D F0              2122 	mov	b,r5
   342F 63 F0 80           2123 	xrl	b,#0x80
   3432 95 F0              2124 	subb	a,b
   3434 50 02              2125 	jnc	00167$
   3436 80 08              2126 	sjmp	00168$
   3438                    2127 00167$:
   3438 90 E6 2C           2128 	mov	dptr,#_CONTROL_CONFIG8
   343B E0                 2129 	movx	a,@dptr
   343C 54 0F              2130 	anl	a,#0x0f
   343E FD                 2131 	mov	r5,a
   343F FC                 2132 	mov	r4,a
   3440                    2133 00168$:
   3440 90 66 2A           2134 	mov	dptr,#_new_gen_rx
   3443 EC                 2135 	mov	a,r4
   3444 F0                 2136 	movx	@dptr,a
                           2137 ;	../../shared/src/spd_ctrl.c:40: if ((new_gen_tx != gen_tx || new_gen_rx != gen_rx /*|| ( pwrsq_on && phy_mode!=SERDES )*/ ) && phy_mode!=SERDES) {
   3445 90 66 15           2138 	mov	dptr,#_gen_tx
   3448 E0                 2139 	movx	a,@dptr
   3449 FD                 2140 	mov	r5,a
   344A EB                 2141 	mov	a,r3
   344B B5 05 0C           2142 	cjne	a,ar5,00152$
   344E 90 66 16           2143 	mov	dptr,#_gen_rx
   3451 E0                 2144 	movx	a,@dptr
   3452 FD                 2145 	mov	r5,a
   3453 EC                 2146 	mov	a,r4
   3454 B5 05 03           2147 	cjne	a,ar5,00207$
   3457 02 36 95           2148 	ljmp	00150$
   345A                    2149 00207$:
   345A                    2150 00152$:
   345A 90 A3 16           2151 	mov	dptr,#(_SYSTEM + 0x0002)
   345D E0                 2152 	movx	a,@dptr
   345E 54 07              2153 	anl	a,#0x07
   3460 FD                 2154 	mov	r5,a
   3461 BD 04 03           2155 	cjne	r5,#0x04,00208$
   3464 02 36 95           2156 	ljmp	00150$
   3467                    2157 00208$:
                           2158 ;	../../shared/src/spd_ctrl.c:42: reg_PIN_PLL_READY_RX_LANE = 0;
   3467 90 21 02           2159 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   346A E0                 2160 	movx	a,@dptr
   346B 54 BF              2161 	anl	a,#0xbf
   346D F0                 2162 	movx	@dptr,a
                           2163 ;	../../shared/src/spd_ctrl.c:43: reg_PIN_PLL_READY_TX_LANE = 0;
   346E 90 20 02           2164 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   3471 E0                 2165 	movx	a,@dptr
   3472 54 FB              2166 	anl	a,#0xfb
   3474 F0                 2167 	movx	@dptr,a
                           2168 ;	../../shared/src/spd_ctrl.c:54: gen_tx = new_gen_tx;
   3475 90 66 15           2169 	mov	dptr,#_gen_tx
   3478 EB                 2170 	mov	a,r3
   3479 F0                 2171 	movx	@dptr,a
                           2172 ;	../../shared/src/spd_ctrl.c:55: gen_rx = new_gen_rx;
   347A 90 66 16           2173 	mov	dptr,#_gen_rx
   347D EC                 2174 	mov	a,r4
   347E F0                 2175 	movx	@dptr,a
                           2176 ;	../../shared/src/spd_ctrl.c:59: if(phy_mode==SATA) { //SATA must support 1.5G/3G/6G only!! 
   347F 90 A3 16           2177 	mov	dptr,#(_SYSTEM + 0x0002)
   3482 E0                 2178 	movx	a,@dptr
   3483 54 07              2179 	anl	a,#0x07
   3485 70 06              2180 	jnz	00147$
                           2181 ;	../../shared/src/spd_ctrl.c:60: sata_speedchange();
   3487 12 37 42           2182 	lcall	_sata_speedchange
   348A 02 36 95           2183 	ljmp	00150$
   348D                    2184 00147$:
                           2185 ;	../../shared/src/spd_ctrl.c:63: gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx]; 
   348D 8B 04              2186 	mov	ar4,r3
   348F EC                 2187 	mov	a,r4
   3490 75 F0 50           2188 	mov	b,#0x50
   3493 A4                 2189 	mul	ab
   3494 24 04              2190 	add	a,#_speedtable
   3496 F5 82              2191 	mov	dpl,a
   3498 74 63              2192 	mov	a,#(_speedtable >> 8)
   349A 35 F0              2193 	addc	a,b
   349C F5 83              2194 	mov	dph,a
   349E E0                 2195 	movx	a,@dptr
   349F FC                 2196 	mov	r4,a
   34A0 90 67 8C           2197 	mov	dptr,#_gen_pll_rate
   34A3 F0                 2198 	movx	@dptr,a
                           2199 ;	../../shared/src/spd_ctrl.c:65: use_ring_pll = speedtable[gen_tx][spdoft_tx_ck_sel_lane];
   34A4 EB                 2200 	mov	a,r3
   34A5 75 F0 50           2201 	mov	b,#0x50
   34A8 A4                 2202 	mul	ab
   34A9 24 04              2203 	add	a,#_speedtable
   34AB FB                 2204 	mov	r3,a
   34AC 74 63              2205 	mov	a,#(_speedtable >> 8)
   34AE 35 F0              2206 	addc	a,b
   34B0 FD                 2207 	mov	r5,a
   34B1 8B 82              2208 	mov	dpl,r3
   34B3 8D 83              2209 	mov	dph,r5
   34B5 A3                 2210 	inc	dptr
   34B6 E0                 2211 	movx	a,@dptr
   34B7 24 FF              2212 	add	a,#0xff
   34B9 92 10              2213 	mov	_use_ring_pll,c
                           2214 ;	../../shared/src/spd_ctrl.c:80: if (((!ring_pll_enabled || !lc_pll_used ||
   34BB 30 12 3D           2215 	jnb	_ring_pll_enabled,00113$
   34BE 30 11 3A           2216 	jnb	_lc_pll_used,00113$
                           2217 ;	../../shared/src/spd_ctrl.c:81: (phy_mode==PCIE && (use_ring_pll==1? gen_pll_rate!=pre_ringpll_rate : gen_pll_rate!=pre_lcpll_rate)))
   34C1 90 A3 16           2218 	mov	dptr,#(_SYSTEM + 0x0002)
   34C4 E0                 2219 	movx	a,@dptr
   34C5 54 07              2220 	anl	a,#0x07
   34C7 FB                 2221 	mov	r3,a
   34C8 BB 03 6A           2222 	cjne	r3,#0x03,00109$
   34CB 30 10 16           2223 	jnb	_use_ring_pll,00169$
   34CE 90 67 8F           2224 	mov	dptr,#_pre_ringpll_rate
   34D1 E0                 2225 	movx	a,@dptr
   34D2 FB                 2226 	mov	r3,a
   34D3 EC                 2227 	mov	a,r4
   34D4 B5 03 04           2228 	cjne	a,ar3,00215$
   34D7 74 01              2229 	mov	a,#0x01
   34D9 80 01              2230 	sjmp	00216$
   34DB                    2231 00215$:
   34DB E4                 2232 	clr	a
   34DC                    2233 00216$:
   34DC FB                 2234 	mov	r3,a
   34DD B4 01 00           2235 	cjne	a,#0x01,00217$
   34E0                    2236 00217$:
   34E0 92 28              2237 	mov	b0,c
   34E2 80 14              2238 	sjmp	00170$
   34E4                    2239 00169$:
   34E4 90 67 8E           2240 	mov	dptr,#_pre_lcpll_rate
   34E7 E0                 2241 	movx	a,@dptr
   34E8 FB                 2242 	mov	r3,a
   34E9 EC                 2243 	mov	a,r4
   34EA B5 03 04           2244 	cjne	a,ar3,00218$
   34ED 74 01              2245 	mov	a,#0x01
   34EF 80 01              2246 	sjmp	00219$
   34F1                    2247 00218$:
   34F1 E4                 2248 	clr	a
   34F2                    2249 00219$:
   34F2 FC                 2250 	mov	r4,a
   34F3 B4 01 00           2251 	cjne	a,#0x01,00220$
   34F6                    2252 00220$:
   34F6 92 28              2253 	mov	b0,c
   34F8                    2254 00170$:
   34F8 30 28 3A           2255 	jnb	b0,00109$
   34FB                    2256 00113$:
                           2257 ;	../../shared/src/spd_ctrl.c:82: /*|| pwrsq_on*/) && !no_pllspdchg /*&& !force_exit_cal*/) {
   34FB 20 15 37           2258 	jb	_no_pllspdchg,00109$
                           2259 ;	../../shared/src/spd_ctrl.c:83: if(mcuid==master_mcu) {
   34FE 90 22 00           2260 	mov	dptr,#_MCU_CONTROL_LANE
   3501 E0                 2261 	movx	a,@dptr
   3502 FB                 2262 	mov	r3,a
   3503 90 E6 50           2263 	mov	dptr,#_MCU_CONFIG
   3506 E0                 2264 	movx	a,@dptr
   3507 FC                 2265 	mov	r4,a
   3508 EB                 2266 	mov	a,r3
   3509 B5 04 0B           2267 	cjne	a,ar4,00102$
                           2268 ;	../../shared/src/spd_ctrl.c:84: pll_clk_ready_all_0();
   350C 78 0E              2269 	mov	r0,#_pll_clk_ready_all_0
   350E 79 D5              2270 	mov	r1,#(_pll_clk_ready_all_0 >> 8)
   3510 7A 02              2271 	mov	r2,#(_pll_clk_ready_all_0 >> 16)
   3512 12 00 B3           2272 	lcall	__sdcc_banked_call
                           2273 ;	../../shared/src/spd_ctrl.c:91: while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
   3515 80 1C              2274 	sjmp	00107$
   3517                    2275 00102$:
   3517 90 A3 4F           2276 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   351A E0                 2277 	movx	a,@dptr
   351B 03                 2278 	rr	a
   351C 03                 2279 	rr	a
   351D 54 01              2280 	anl	a,#0x01
   351F FB                 2281 	mov	r3,a
   3520 BB 01 02           2282 	cjne	r3,#0x01,00225$
   3523 80 F2              2283 	sjmp	00102$
   3525                    2284 00225$:
   3525 90 A3 4E           2285 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   3528 E0                 2286 	movx	a,@dptr
   3529 C4                 2287 	swap	a
   352A 03                 2288 	rr	a
   352B 54 01              2289 	anl	a,#0x01
   352D FB                 2290 	mov	r3,a
   352E BB 01 02           2291 	cjne	r3,#0x01,00226$
   3531 80 E4              2292 	sjmp	00102$
   3533                    2293 00226$:
   3533                    2294 00107$:
                           2295 ;	../../shared/src/spd_ctrl.c:94: dtx_off = 1;
   3533 7A 01              2296 	mov	r2,#0x01
   3535                    2297 00109$:
                           2298 ;	../../shared/src/spd_ctrl.c:98: DTL_DTX_DFE_clkoff_reset_1(dtx_off);
   3535 8A 82              2299 	mov	dpl,r2
   3537 78 E7              2300 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_1
   3539 79 C6              2301 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_1 >> 8)
   353B 7A 01              2302 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_1 >> 16)
   353D 12 00 B3           2303 	lcall	__sdcc_banked_call
                           2304 ;	../../shared/src/spd_ctrl.c:100: loadspeedtbl_gen();
   3540 12 40 7E           2305 	lcall	_loadspeedtbl_gen
                           2306 ;	../../shared/src/spd_ctrl.c:102: reg_MCU_DEBUG0_LANE_7_0 = 0x34;
   3543 90 22 B4           2307 	mov	dptr,#_MCU_DEBUG0_LANE
   3546 74 34              2308 	mov	a,#0x34
   3548 F0                 2309 	movx	@dptr,a
                           2310 ;	../../shared/src/spd_ctrl.c:103: reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
   3549 90 66 15           2311 	mov	dptr,#_gen_tx
   354C E0                 2312 	movx	a,@dptr
   354D FA                 2313 	mov	r2,a
   354E 90 22 B5           2314 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   3551 EA                 2315 	mov	a,r2
   3552 F0                 2316 	movx	@dptr,a
                           2317 ;	../../shared/src/spd_ctrl.c:104: reg_MCU_DEBUG2_LANE_7_0 = lc_pll_used;
   3553 A2 11              2318 	mov	c,_lc_pll_used
   3555 E4                 2319 	clr	a
   3556 33                 2320 	rlc	a
   3557 FA                 2321 	mov	r2,a
   3558 90 22 B6           2322 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   355B EA                 2323 	mov	a,r2
   355C F0                 2324 	movx	@dptr,a
                           2325 ;	../../shared/src/spd_ctrl.c:105: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   355D 90 67 8C           2326 	mov	dptr,#_gen_pll_rate
   3560 E0                 2327 	movx	a,@dptr
   3561 FA                 2328 	mov	r2,a
   3562 90 22 B7           2329 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   3565 EA                 2330 	mov	a,r2
   3566 F0                 2331 	movx	@dptr,a
                           2332 ;	../../shared/src/spd_ctrl.c:106: reg_MCU_DEBUG4_LANE_7_0 = max_gen;
   3567 90 63 00           2333 	mov	dptr,#_max_gen
   356A E0                 2334 	movx	a,@dptr
   356B FB                 2335 	mov	r3,a
   356C 90 22 B8           2336 	mov	dptr,#_MCU_DEBUG1_LANE
   356F EB                 2337 	mov	a,r3
   3570 F0                 2338 	movx	@dptr,a
                           2339 ;	../../shared/src/spd_ctrl.c:107: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   3571 A2 12              2340 	mov	c,_ring_pll_enabled
   3573 E4                 2341 	clr	a
   3574 33                 2342 	rlc	a
   3575 FB                 2343 	mov	r3,a
   3576 90 22 B9           2344 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   3579 EB                 2345 	mov	a,r3
   357A F0                 2346 	movx	@dptr,a
                           2347 ;	../../shared/src/spd_ctrl.c:108: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   357B A2 10              2348 	mov	c,_use_ring_pll
   357D E4                 2349 	clr	a
   357E 33                 2350 	rlc	a
   357F FB                 2351 	mov	r3,a
   3580 90 22 BA           2352 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   3583 EB                 2353 	mov	a,r3
   3584 F0                 2354 	movx	@dptr,a
                           2355 ;	../../shared/src/spd_ctrl.c:109: reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
   3585 A2 0F              2356 	mov	c,_tx_pll_rate
   3587 E4                 2357 	clr	a
   3588 33                 2358 	rlc	a
   3589 FB                 2359 	mov	r3,a
   358A 90 22 BB           2360 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0003)
   358D EB                 2361 	mov	a,r3
   358E F0                 2362 	movx	@dptr,a
                           2363 ;	../../shared/src/spd_ctrl.c:110: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   358F 90 66 24           2364 	mov	dptr,#_ring_lane_sel
   3592 E0                 2365 	movx	a,@dptr
   3593 FB                 2366 	mov	r3,a
   3594 90 22 BC           2367 	mov	dptr,#_MCU_DEBUG2_LANE
   3597 EB                 2368 	mov	a,r3
   3598 F0                 2369 	movx	@dptr,a
                           2370 ;	../../shared/src/spd_ctrl.c:111: reg_MCU_DEBUG9_LANE_7_0 = serdes_ring_lane_en;
   3599 90 66 23           2371 	mov	dptr,#_serdes_ring_lane_en
   359C E0                 2372 	movx	a,@dptr
   359D FB                 2373 	mov	r3,a
   359E 90 22 BD           2374 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0001)
   35A1 EB                 2375 	mov	a,r3
   35A2 F0                 2376 	movx	@dptr,a
                           2377 ;	../../shared/src/spd_ctrl.c:112: reg_MCU_DEBUGA_LANE_7_0 = master_mcu;
   35A3 90 E6 50           2378 	mov	dptr,#_MCU_CONFIG
   35A6 E0                 2379 	movx	a,@dptr
   35A7 FB                 2380 	mov	r3,a
   35A8 90 22 BE           2381 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0002)
   35AB EB                 2382 	mov	a,r3
   35AC F0                 2383 	movx	@dptr,a
                           2384 ;	../../shared/src/spd_ctrl.c:115: if (mcuid == master_mcu) {
   35AD 90 22 00           2385 	mov	dptr,#_MCU_CONTROL_LANE
   35B0 E0                 2386 	movx	a,@dptr
   35B1 FB                 2387 	mov	r3,a
   35B2 90 E6 50           2388 	mov	dptr,#_MCU_CONFIG
   35B5 E0                 2389 	movx	a,@dptr
   35B6 FC                 2390 	mov	r4,a
   35B7 EB                 2391 	mov	a,r3
   35B8 B5 04 63           2392 	cjne	a,ar4,00129$
                           2393 ;	../../shared/src/spd_ctrl.c:139: if((!ring_pll_enabled && !no_pllspdchg ) ||
   35BB 20 12 03           2394 	jb	_ring_pll_enabled,00125$
   35BE 30 15 18           2395 	jnb	_no_pllspdchg,00120$
   35C1                    2396 00125$:
                           2397 ;	../../shared/src/spd_ctrl.c:140: (phy_mode==PCIE && !use_ring_pll && gen_pll_rate!=pre_lcpll_rate)) {
   35C1 90 A3 16           2398 	mov	dptr,#(_SYSTEM + 0x0002)
   35C4 E0                 2399 	movx	a,@dptr
   35C5 54 07              2400 	anl	a,#0x07
   35C7 FB                 2401 	mov	r3,a
   35C8 BB 03 43           2402 	cjne	r3,#0x03,00121$
   35CB 20 10 40           2403 	jb	_use_ring_pll,00121$
   35CE 90 67 8E           2404 	mov	dptr,#_pre_lcpll_rate
   35D1 E0                 2405 	movx	a,@dptr
   35D2 FB                 2406 	mov	r3,a
   35D3 EA                 2407 	mov	a,r2
   35D4 B5 03 02           2408 	cjne	a,ar3,00234$
   35D7 80 35              2409 	sjmp	00121$
   35D9                    2410 00234$:
   35D9                    2411 00120$:
                           2412 ;	../../shared/src/spd_ctrl.c:142: if (phy_mode==PCIE)
   35D9 90 A3 16           2413 	mov	dptr,#(_SYSTEM + 0x0002)
   35DC E0                 2414 	movx	a,@dptr
   35DD 54 07              2415 	anl	a,#0x07
   35DF FB                 2416 	mov	r3,a
   35E0 BB 03 07           2417 	cjne	r3,#0x03,00115$
                           2418 ;	../../shared/src/spd_ctrl.c:145: loadspeedtbl_pll(gen_pll_rate);
   35E3 8A 82              2419 	mov	dpl,r2
   35E5 12 37 D4           2420 	lcall	_loadspeedtbl_pll
   35E8 80 09              2421 	sjmp	00116$
   35EA                    2422 00115$:
                           2423 ;	../../shared/src/spd_ctrl.c:148: loadspeedtbl_pll(tx_pll_rate);
   35EA A2 0F              2424 	mov	c,_tx_pll_rate
   35EC E4                 2425 	clr	a
   35ED 33                 2426 	rlc	a
   35EE F5 82              2427 	mov	dpl,a
   35F0 12 37 D4           2428 	lcall	_loadspeedtbl_pll
   35F3                    2429 00116$:
                           2430 ;	../../shared/src/spd_ctrl.c:150: if(slave_phy_on) {
   35F3 90 66 1C           2431 	mov	dptr,#_slave_phy_on
   35F6 E0                 2432 	movx	a,@dptr
   35F7 FA                 2433 	mov	r2,a
   35F8 60 0B              2434 	jz	00118$
                           2435 ;	../../shared/src/spd_ctrl.c:152: pll_clk_ready_1();
   35FA 78 47              2436 	mov	r0,#_pll_clk_ready_1
   35FC 79 D4              2437 	mov	r1,#(_pll_clk_ready_1 >> 8)
   35FE 7A 02              2438 	mov	r2,#(_pll_clk_ready_1 >> 16)
   3600 12 00 B3           2439 	lcall	__sdcc_banked_call
   3603 80 09              2440 	sjmp	00121$
   3605                    2441 00118$:
                           2442 ;	../../shared/src/spd_ctrl.c:155: spdchg_pll_fast_cal();
   3605 78 E5              2443 	mov	r0,#_spdchg_pll_fast_cal
   3607 79 C1              2444 	mov	r1,#(_spdchg_pll_fast_cal >> 8)
   3609 7A 01              2445 	mov	r2,#(_spdchg_pll_fast_cal >> 16)
   360B 12 00 B3           2446 	lcall	__sdcc_banked_call
   360E                    2447 00121$:
                           2448 ;	../../shared/src/spd_ctrl.c:159: if(reg_ANA_PLL_CLK_READY==0) pll_clk_ready_1();
   360E 90 A3 4F           2449 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   3611 E0                 2450 	movx	a,@dptr
   3612 20 E0 09           2451 	jb	acc.0,00129$
   3615 78 47              2452 	mov	r0,#_pll_clk_ready_1
   3617 79 D4              2453 	mov	r1,#(_pll_clk_ready_1 >> 8)
   3619 7A 02              2454 	mov	r2,#(_pll_clk_ready_1 >> 16)
   361B 12 00 B3           2455 	lcall	__sdcc_banked_call
   361E                    2456 00129$:
                           2457 ;	../../shared/src/spd_ctrl.c:162: if( ring_lane_sel )
   361E 90 66 24           2458 	mov	dptr,#_ring_lane_sel
   3621 E0                 2459 	movx	a,@dptr
   3622 FA                 2460 	mov	r2,a
   3623 60 54              2461 	jz	00141$
                           2462 ;	../../shared/src/spd_ctrl.c:177: if( !lc_pll_used || (phy_mode==PCIE && use_ring_pll && gen_pll_rate!=pre_ringpll_rate) ) { 
   3625 30 11 1D           2463 	jnb	_lc_pll_used,00133$
   3628 90 A3 16           2464 	mov	dptr,#(_SYSTEM + 0x0002)
   362B E0                 2465 	movx	a,@dptr
   362C 54 07              2466 	anl	a,#0x07
   362E FA                 2467 	mov	r2,a
   362F BA 03 37           2468 	cjne	r2,#0x03,00134$
   3632 30 10 34           2469 	jnb	_use_ring_pll,00134$
   3635 90 67 8C           2470 	mov	dptr,#_gen_pll_rate
   3638 E0                 2471 	movx	a,@dptr
   3639 FA                 2472 	mov	r2,a
   363A 90 67 8F           2473 	mov	dptr,#_pre_ringpll_rate
   363D E0                 2474 	movx	a,@dptr
   363E FB                 2475 	mov	r3,a
   363F EA                 2476 	mov	a,r2
   3640 B5 03 02           2477 	cjne	a,ar3,00244$
   3643 80 24              2478 	sjmp	00134$
   3645                    2479 00244$:
   3645                    2480 00133$:
                           2481 ;	../../shared/src/spd_ctrl.c:178: loadspeedtbl_ringpll(tx_pll_rate);
   3645 A2 0F              2482 	mov	c,_tx_pll_rate
   3647 E4                 2483 	clr	a
   3648 33                 2484 	rlc	a
   3649 F5 82              2485 	mov	dpl,a
   364B 12 3B A7           2486 	lcall	_loadspeedtbl_ringpll
                           2487 ;	../../shared/src/spd_ctrl.c:180: if(slave_phy_on) {
   364E 90 66 1C           2488 	mov	dptr,#_slave_phy_on
   3651 E0                 2489 	movx	a,@dptr
   3652 FA                 2490 	mov	r2,a
   3653 60 0B              2491 	jz	00131$
                           2492 ;	../../shared/src/spd_ctrl.c:182: pll_clk_ready_ring_1();
   3655 78 A7              2493 	mov	r0,#_pll_clk_ready_ring_1
   3657 79 D4              2494 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   3659 7A 02              2495 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   365B 12 00 B3           2496 	lcall	__sdcc_banked_call
   365E 80 09              2497 	sjmp	00134$
   3660                    2498 00131$:
                           2499 ;	../../shared/src/spd_ctrl.c:186: ring_pll_fast_cal();
   3660 78 30              2500 	mov	r0,#_ring_pll_fast_cal
   3662 79 DC              2501 	mov	r1,#(_ring_pll_fast_cal >> 8)
   3664 7A 01              2502 	mov	r2,#(_ring_pll_fast_cal >> 16)
   3666 12 00 B3           2503 	lcall	__sdcc_banked_call
   3669                    2504 00134$:
                           2505 ;	../../shared/src/spd_ctrl.c:193: if(reg_ANA_PLL_CLK_READY_RING==0) pll_clk_ready_ring_1();
   3669 90 A3 4E           2506 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   366C E0                 2507 	movx	a,@dptr
   366D 20 E5 09           2508 	jb	acc.5,00141$
   3670 78 A7              2509 	mov	r0,#_pll_clk_ready_ring_1
   3672 79 D4              2510 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   3674 7A 02              2511 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   3676 12 00 B3           2512 	lcall	__sdcc_banked_call
   3679                    2513 00141$:
                           2514 ;	../../shared/src/spd_ctrl.c:197: if(serdes_ring_lane_en==0)
   3679 90 66 23           2515 	mov	dptr,#_serdes_ring_lane_en
   367C E0                 2516 	movx	a,@dptr
   367D FA                 2517 	mov	r2,a
   367E 70 09              2518 	jnz	00143$
                           2519 ;	../../shared/src/spd_ctrl.c:198: check_pll_clk_ready();
   3680 78 D7              2520 	mov	r0,#_check_pll_clk_ready
   3682 79 D4              2521 	mov	r1,#(_check_pll_clk_ready >> 8)
   3684 7A 02              2522 	mov	r2,#(_check_pll_clk_ready >> 16)
   3686 12 00 B3           2523 	lcall	__sdcc_banked_call
   3689                    2524 00143$:
                           2525 ;	../../shared/src/spd_ctrl.c:204: if(!force_exit_cal)
   3689 20 14 09           2526 	jb	_force_exit_cal,00150$
                           2527 ;	../../shared/src/spd_ctrl.c:205: load_cal_data_all();
   368C 78 D7              2528 	mov	r0,#_load_cal_data_all
   368E 79 82              2529 	mov	r1,#(_load_cal_data_all >> 8)
   3690 7A 02              2530 	mov	r2,#(_load_cal_data_all >> 16)
   3692 12 00 B3           2531 	lcall	__sdcc_banked_call
   3695                    2532 00150$:
                           2533 ;	../../shared/src/spd_ctrl.c:210: if( phy_mode==PCIE ) { //only pcie need align because of one mac
   3695 90 A3 16           2534 	mov	dptr,#(_SYSTEM + 0x0002)
   3698 E0                 2535 	movx	a,@dptr
   3699 54 07              2536 	anl	a,#0x07
   369B FA                 2537 	mov	r2,a
   369C BA 03 20           2538 	cjne	r2,#0x03,00157$
                           2539 ;	../../shared/src/spd_ctrl.c:211: txlane_align();
   369F 78 25              2540 	mov	r0,#_txlane_align
   36A1 79 E7              2541 	mov	r1,#(_txlane_align >> 8)
   36A3 7A 01              2542 	mov	r2,#(_txlane_align >> 16)
   36A5 12 00 B3           2543 	lcall	__sdcc_banked_call
                           2544 ;	../../shared/src/spd_ctrl.c:212: if(use_ring_pll) pre_ringpll_rate = gen_pll_rate;
   36A8 30 10 0B           2545 	jnb	_use_ring_pll,00154$
   36AB 90 67 8C           2546 	mov	dptr,#_gen_pll_rate
   36AE E0                 2547 	movx	a,@dptr
   36AF FA                 2548 	mov	r2,a
   36B0 90 67 8F           2549 	mov	dptr,#_pre_ringpll_rate
   36B3 F0                 2550 	movx	@dptr,a
   36B4 80 09              2551 	sjmp	00157$
   36B6                    2552 00154$:
                           2553 ;	../../shared/src/spd_ctrl.c:213: else pre_lcpll_rate = gen_pll_rate;
   36B6 90 67 8C           2554 	mov	dptr,#_gen_pll_rate
   36B9 E0                 2555 	movx	a,@dptr
   36BA FA                 2556 	mov	r2,a
   36BB 90 67 8E           2557 	mov	dptr,#_pre_lcpll_rate
   36BE F0                 2558 	movx	@dptr,a
   36BF                    2559 00157$:
                           2560 ;	../../shared/src/spd_ctrl.c:217: restore_train();
   36BF 12 5F 15           2561 	lcall	_restore_train
                           2562 ;	../../shared/src/spd_ctrl.c:219: DTL_DTX_DFE_clkoff_reset_0();
   36C2 78 3E              2563 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_0
   36C4 79 C6              2564 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_0 >> 8)
   36C6 7A 01              2565 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_0 >> 16)
   36C8 12 00 B3           2566 	lcall	__sdcc_banked_call
                           2567 ;	../../shared/src/spd_ctrl.c:221: if(phy_mode!=SATA) 
   36CB 90 A3 16           2568 	mov	dptr,#(_SYSTEM + 0x0002)
   36CE E0                 2569 	movx	a,@dptr
   36CF 54 07              2570 	anl	a,#0x07
   36D1 60 0C              2571 	jz	00159$
                           2572 ;	../../shared/src/spd_ctrl.c:222: delay01(90);
   36D3 90 00 5A           2573 	mov	dptr,#0x005A
   36D6 78 16              2574 	mov	r0,#_delay01
   36D8 79 BC              2575 	mov	r1,#(_delay01 >> 8)
   36DA 7A 02              2576 	mov	r2,#(_delay01 >> 16)
   36DC 12 00 B3           2577 	lcall	__sdcc_banked_call
   36DF                    2578 00159$:
                           2579 ;	../../shared/src/spd_ctrl.c:224: lnx_EOM_ALIGN_CAL_DONE_LANE = 0; //moved eom_align_cal to inside train
   36DF 90 60 01           2580 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   36E2 E0                 2581 	movx	a,@dptr
   36E3 54 FB              2582 	anl	a,#0xfb
   36E5 F0                 2583 	movx	@dptr,a
                           2584 ;	../../shared/src/spd_ctrl.c:228: reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
   36E6 90 21 1F           2585 	mov	dptr,#(_CLKGEN_RX_LANE_REG1_LANE + 0x0003)
   36E9 E0                 2586 	movx	a,@dptr
   36EA 44 04              2587 	orl	a,#0x04
   36EC F0                 2588 	movx	@dptr,a
                           2589 ;	../../shared/src/spd_ctrl.c:229: delay01(10);
   36ED 90 00 0A           2590 	mov	dptr,#0x000A
   36F0 78 16              2591 	mov	r0,#_delay01
   36F2 79 BC              2592 	mov	r1,#(_delay01 >> 8)
   36F4 7A 02              2593 	mov	r2,#(_delay01 >> 16)
   36F6 12 00 B3           2594 	lcall	__sdcc_banked_call
                           2595 ;	../../shared/src/spd_ctrl.c:230: reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
   36F9 90 21 1F           2596 	mov	dptr,#(_CLKGEN_RX_LANE_REG1_LANE + 0x0003)
   36FC E0                 2597 	movx	a,@dptr
   36FD 54 FB              2598 	anl	a,#0xfb
   36FF F0                 2599 	movx	@dptr,a
                           2600 ;	../../shared/src/spd_ctrl.c:232: PHY_STATUS_INT = IDLE;
   3700 90 22 38           2601 	mov	dptr,#_MCU_STATUS2_LANE
   3703 E4                 2602 	clr	a
   3704 F0                 2603 	movx	@dptr,a
                           2604 ;	../../shared/src/spd_ctrl.c:233: pre_gen_pll_rate = gen_pll_rate;
   3705 90 67 8C           2605 	mov	dptr,#_gen_pll_rate
   3708 E0                 2606 	movx	a,@dptr
   3709 90 67 8D           2607 	mov	dptr,#_pre_gen_pll_rate
   370C F0                 2608 	movx	@dptr,a
                           2609 ;	../../shared/src/spd_ctrl.c:234: rxinit_4_spdchg_en = 1;
   370D 90 67 A1           2610 	mov	dptr,#_rxinit_4_spdchg_en
   3710 74 01              2611 	mov	a,#0x01
   3712 F0                 2612 	movx	@dptr,a
                           2613 ;	../../shared/src/spd_ctrl.c:243: delay01(5); //TXCLK need more time 0.5sec even in bypassed delay
   3713 90 00 05           2614 	mov	dptr,#0x0005
   3716 78 16              2615 	mov	r0,#_delay01
   3718 79 BC              2616 	mov	r1,#(_delay01 >> 8)
   371A 7A 02              2617 	mov	r2,#(_delay01 >> 16)
   371C 12 00 B3           2618 	lcall	__sdcc_banked_call
                           2619 ;	../../shared/src/spd_ctrl.c:245: reg_PIN_PLL_READY_RX_LANE = 1;
   371F 90 21 02           2620 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   3722 E0                 2621 	movx	a,@dptr
   3723 44 40              2622 	orl	a,#0x40
   3725 F0                 2623 	movx	@dptr,a
                           2624 ;	../../shared/src/spd_ctrl.c:246: reg_PIN_PLL_READY_TX_LANE = 1;
   3726 90 20 02           2625 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   3729 E0                 2626 	movx	a,@dptr
   372A 44 04              2627 	orl	a,#0x04
   372C F0                 2628 	movx	@dptr,a
                           2629 ;	../../shared/src/spd_ctrl.c:248: if(cmx_AUTO_RX_INIT_EN == 0)
   372D 90 E6 2E           2630 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0002)
   3730 E0                 2631 	movx	a,@dptr
   3731 20 E0 07           2632 	jb	acc.0,00161$
                           2633 ;	../../shared/src/spd_ctrl.c:249: PHY_STATUS = ST_PLLREADY; 
   3734 90 22 30           2634 	mov	dptr,#_MCU_STATUS0_LANE
   3737 74 27              2635 	mov	a,#0x27
   3739 F0                 2636 	movx	@dptr,a
   373A 22                 2637 	ret
   373B                    2638 00161$:
                           2639 ;	../../shared/src/spd_ctrl.c:251: PHY_STATUS = ST_DTL;
   373B 90 22 30           2640 	mov	dptr,#_MCU_STATUS0_LANE
   373E 74 2C              2641 	mov	a,#0x2C
   3740 F0                 2642 	movx	@dptr,a
   3741 22                 2643 	ret
                           2644 ;------------------------------------------------------------
                           2645 ;Allocation info for local variables in function 'sata_speedchange'
                           2646 ;------------------------------------------------------------
                           2647 ;------------------------------------------------------------
                           2648 ;	../../shared/src/spd_ctrl.c:255: void sata_speedchange(void) {
                           2649 ;	-----------------------------------------
                           2650 ;	 function sata_speedchange
                           2651 ;	-----------------------------------------
   3742                    2652 _sata_speedchange:
                           2653 ;	../../shared/src/spd_ctrl.c:258: reg_DTL_CLK_OFF_LANE= 1; 
   3742 90 21 02           2654 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   3745 E0                 2655 	movx	a,@dptr
   3746 44 10              2656 	orl	a,#0x10
   3748 F0                 2657 	movx	@dptr,a
                           2658 ;	../../shared/src/spd_ctrl.c:259: reg_DFE_CLK_OFF_LANE = 1; 
   3749 90 24 10           2659 	mov	dptr,#_RX_EQ_CLK_CTRL
   374C E0                 2660 	movx	a,@dptr
   374D 44 01              2661 	orl	a,#0x01
   374F F0                 2662 	movx	@dptr,a
                           2663 ;	../../shared/src/spd_ctrl.c:260: reg_RESET_DTL_LANE = 1;
   3750 90 21 02           2664 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   3753 E0                 2665 	movx	a,@dptr
   3754 44 20              2666 	orl	a,#0x20
   3756 F0                 2667 	movx	@dptr,a
                           2668 ;	../../shared/src/spd_ctrl.c:261: CKCON = 0x07 ;  //MCU WAIT time the slowest
   3757 75 8E 07           2669 	mov	_CKCON,#0x07
                           2670 ;	../../shared/src/spd_ctrl.c:262: reg_RESET_DFE_LANE = 1;
   375A 90 24 10           2671 	mov	dptr,#_RX_EQ_CLK_CTRL
   375D E0                 2672 	movx	a,@dptr
   375E 44 04              2673 	orl	a,#0x04
   3760 F0                 2674 	movx	@dptr,a
                           2675 ;	../../shared/src/spd_ctrl.c:263: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   3761 75 8E 00           2676 	mov	_CKCON,#0x00
                           2677 ;	../../shared/src/spd_ctrl.c:266: loadspeedtbl_gen();
   3764 12 40 7E           2678 	lcall	_loadspeedtbl_gen
                           2679 ;	../../shared/src/spd_ctrl.c:269: reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
   3767 90 E6 32           2680 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   376A E0                 2681 	movx	a,@dptr
   376B 23                 2682 	rl	a
   376C 23                 2683 	rl	a
   376D 54 01              2684 	anl	a,#0x01
   376F 25 E0              2685 	add	a,acc
   3771 24 D4              2686 	add	a,#_lnx_cal_txdcc_pdiv
   3773 FA                 2687 	mov	r2,a
   3774 E4                 2688 	clr	a
   3775 34 65              2689 	addc	a,#(_lnx_cal_txdcc_pdiv >> 8)
   3777 FB                 2690 	mov	r3,a
   3778 A2 0F              2691 	mov	c,_tx_pll_rate
   377A E4                 2692 	clr	a
   377B 33                 2693 	rlc	a
   377C 2A                 2694 	add	a,r2
   377D F5 82              2695 	mov	dpl,a
   377F E4                 2696 	clr	a
   3780 3B                 2697 	addc	a,r3
   3781 F5 83              2698 	mov	dph,a
   3783 E0                 2699 	movx	a,@dptr
   3784 90 02 5C           2700 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   3787 25 E0              2701 	add	a,acc
   3789 25 E0              2702 	add	a,acc
   378B 54 FC              2703 	anl	a,#0xfc
   378D F5 F0              2704 	mov	b,a
   378F E0                 2705 	movx	a,@dptr
   3790 54 03              2706 	anl	a,#0x03
   3792 45 F0              2707 	orl	a,b
   3794 F0                 2708 	movx	@dptr,a
                           2709 ;	../../shared/src/spd_ctrl.c:270: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
   3795 90 02 20           2710 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   3798 E0                 2711 	movx	a,@dptr
   3799 44 01              2712 	orl	a,#0x01
   379B F0                 2713 	movx	@dptr,a
                           2714 ;	../../shared/src/spd_ctrl.c:271: txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;    //when speed change, restore the fracition code to middle
   379C 90 E6 3E           2715 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0002)
   379F E0                 2716 	movx	a,@dptr
   37A0 90 66 0F           2717 	mov	dptr,#_txdcc_pdiv_step_cnt
   37A3 F0                 2718 	movx	@dptr,a
                           2719 ;	../../shared/src/spd_ctrl.c:272: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   37A4 90 02 20           2720 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   37A7 E0                 2721 	movx	a,@dptr
   37A8 54 FE              2722 	anl	a,#0xfe
   37AA F0                 2723 	movx	@dptr,a
                           2724 ;	../../shared/src/spd_ctrl.c:279: reg_DTL_CLK_OFF_LANE= 0; 
   37AB 90 21 02           2725 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   37AE E0                 2726 	movx	a,@dptr
   37AF 54 EF              2727 	anl	a,#0xef
   37B1 F0                 2728 	movx	@dptr,a
                           2729 ;	../../shared/src/spd_ctrl.c:280: reg_DFE_CLK_OFF_LANE = 0;
   37B2 90 24 10           2730 	mov	dptr,#_RX_EQ_CLK_CTRL
   37B5 E0                 2731 	movx	a,@dptr
   37B6 54 FE              2732 	anl	a,#0xfe
   37B8 F0                 2733 	movx	@dptr,a
                           2734 ;	../../shared/src/spd_ctrl.c:281: delay01(5);
   37B9 90 00 05           2735 	mov	dptr,#0x0005
   37BC 78 16              2736 	mov	r0,#_delay01
   37BE 79 BC              2737 	mov	r1,#(_delay01 >> 8)
   37C0 7A 02              2738 	mov	r2,#(_delay01 >> 16)
   37C2 12 00 B3           2739 	lcall	__sdcc_banked_call
                           2740 ;	../../shared/src/spd_ctrl.c:282: reg_RESET_DTL_LANE = 0;
   37C5 90 21 02           2741 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   37C8 E0                 2742 	movx	a,@dptr
   37C9 54 DF              2743 	anl	a,#0xdf
   37CB F0                 2744 	movx	@dptr,a
                           2745 ;	../../shared/src/spd_ctrl.c:283: reg_RESET_DFE_LANE = 0;
   37CC 90 24 10           2746 	mov	dptr,#_RX_EQ_CLK_CTRL
   37CF E0                 2747 	movx	a,@dptr
   37D0 54 FB              2748 	anl	a,#0xfb
   37D2 F0                 2749 	movx	@dptr,a
   37D3 22                 2750 	ret
                           2751 ;------------------------------------------------------------
                           2752 ;Allocation info for local variables in function 'loadspeedtbl_pll'
                           2753 ;------------------------------------------------------------
                           2754 ;rate                      Allocated to registers r2 
                           2755 ;temp                      Allocated to stack - offset 1
                           2756 ;fbck                      Allocated to registers r3 
                           2757 ;rate_no                   Allocated to registers r5 
                           2758 ;------------------------------------------------------------
                           2759 ;	../../shared/src/spd_ctrl.c:287: void loadspeedtbl_pll(uint8_t rate) {
                           2760 ;	-----------------------------------------
                           2761 ;	 function loadspeedtbl_pll
                           2762 ;	-----------------------------------------
   37D4                    2763 _loadspeedtbl_pll:
   37D4 C0 18              2764 	push	_bp
   37D6 85 81 18           2765 	mov	_bp,sp
   37D9 05 81              2766 	inc	sp
   37DB 05 81              2767 	inc	sp
   37DD AA 82              2768 	mov	r2,dpl
                           2769 ;	../../shared/src/spd_ctrl.c:291: fbck = fbck_sel;
   37DF 90 A3 19           2770 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   37E2 E0                 2771 	movx	a,@dptr
   37E3 03                 2772 	rr	a
   37E4 54 01              2773 	anl	a,#0x01
   37E6 FB                 2774 	mov	r3,a
                           2775 ;	../../shared/src/spd_ctrl.c:293: reg_MCU_DEBUG0_LANE_7_0 = 0x35;
   37E7 90 22 B4           2776 	mov	dptr,#_MCU_DEBUG0_LANE
   37EA 74 35              2777 	mov	a,#0x35
   37EC F0                 2778 	movx	@dptr,a
                           2779 ;	../../shared/src/spd_ctrl.c:295: if(phy_mode==SERDES)
   37ED 90 A3 16           2780 	mov	dptr,#(_SYSTEM + 0x0002)
   37F0 E0                 2781 	movx	a,@dptr
   37F1 54 07              2782 	anl	a,#0x07
   37F3 FC                 2783 	mov	r4,a
   37F4 BC 04 05           2784 	cjne	r4,#0x04,00102$
                           2785 ;	../../shared/src/spd_ctrl.c:302: rate = gen_pll_rate;
   37F7 90 67 8C           2786 	mov	dptr,#_gen_pll_rate
   37FA E0                 2787 	movx	a,@dptr
   37FB FA                 2788 	mov	r2,a
   37FC                    2789 00102$:
                           2790 ;	../../shared/src/spd_ctrl.c:304: rate_no				= lc_speedtable[fbck][rate][spdoft_pll_rate_sel];
   37FC EB                 2791 	mov	a,r3
   37FD 75 F0 E0           2792 	mov	b,#0xE0
   3800 A4                 2793 	mul	ab
   3801 FB                 2794 	mov	r3,a
   3802 AC F0              2795 	mov	r4,b
   3804 8B 05              2796 	mov	ar5,r3
   3806 74 E0              2797 	mov	a,#(_lc_speedtable >> 8)
   3808 2C                 2798 	add	a,r4
   3809 FE                 2799 	mov	r6,a
   380A EA                 2800 	mov	a,r2
   380B C4                 2801 	swap	a
   380C 23                 2802 	rl	a
   380D 54 E0              2803 	anl	a,#0xe0
   380F FA                 2804 	mov	r2,a
   3810 2D                 2805 	add	a,r5
   3811 FD                 2806 	mov	r5,a
   3812 E4                 2807 	clr	a
   3813 3E                 2808 	addc	a,r6
   3814 FE                 2809 	mov	r6,a
   3815 8D 82              2810 	mov	dpl,r5
   3817 8E 83              2811 	mov	dph,r6
   3819 A3                 2812 	inc	dptr
   381A E0                 2813 	movx	a,@dptr
   381B FD                 2814 	mov	r5,a
                           2815 ;	../../shared/src/spd_ctrl.c:305: if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
   381C 74 01              2816 	mov	a,#0x01
   381E B5 05 00           2817 	cjne	a,ar5,00126$
   3821                    2818 00126$:
   3821 40 0A              2819 	jc	00103$
   3823 90 A3 16           2820 	mov	dptr,#(_SYSTEM + 0x0002)
   3826 E0                 2821 	movx	a,@dptr
   3827 54 07              2822 	anl	a,#0x07
   3829 FE                 2823 	mov	r6,a
   382A BE 04 02           2824 	cjne	r6,#0x04,00104$
   382D                    2825 00103$:
   382D 7D 00              2826 	mov	r5,#0x00
   382F                    2827 00104$:
                           2828 ;	../../shared/src/spd_ctrl.c:306: PLL_RATE_SEL = rate_no;
   382F 90 E6 1E           2829 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   3832 ED                 2830 	mov	a,r5
   3833 F0                 2831 	movx	@dptr,a
                           2832 ;	../../shared/src/spd_ctrl.c:308: reg_PLL_REG_SEL_2_0		= lc_speedtable[fbck][rate][spdoft_pll_reg_sel];
   3834 8B 05              2833 	mov	ar5,r3
   3836 74 E0              2834 	mov	a,#(_lc_speedtable >> 8)
   3838 2C                 2835 	add	a,r4
   3839 FE                 2836 	mov	r6,a
   383A EA                 2837 	mov	a,r2
   383B 2D                 2838 	add	a,r5
   383C F5 82              2839 	mov	dpl,a
   383E E4                 2840 	clr	a
   383F 3E                 2841 	addc	a,r6
   3840 F5 83              2842 	mov	dph,a
   3842 E0                 2843 	movx	a,@dptr
   3843 90 82 DC           2844 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_183
   3846 C4                 2845 	swap	a
   3847 54 70              2846 	anl	a,#(0xf0&0x70)
   3849 F5 F0              2847 	mov	b,a
   384B E0                 2848 	movx	a,@dptr
   384C 54 8F              2849 	anl	a,#0x8f
   384E 45 F0              2850 	orl	a,b
   3850 F0                 2851 	movx	@dptr,a
                           2852 ;	../../shared/src/spd_ctrl.c:309: reg_FBDIV_7_0 			= lc_speedtable[fbck][rate][spdoft_fbdiv];
   3851 8B 05              2853 	mov	ar5,r3
   3853 74 E0              2854 	mov	a,#(_lc_speedtable >> 8)
   3855 2C                 2855 	add	a,r4
   3856 FE                 2856 	mov	r6,a
   3857 EA                 2857 	mov	a,r2
   3858 2D                 2858 	add	a,r5
   3859 FD                 2859 	mov	r5,a
   385A E4                 2860 	clr	a
   385B 3E                 2861 	addc	a,r6
   385C FE                 2862 	mov	r6,a
   385D 8D 82              2863 	mov	dpl,r5
   385F 8E 83              2864 	mov	dph,r6
   3861 A3                 2865 	inc	dptr
   3862 A3                 2866 	inc	dptr
   3863 E0                 2867 	movx	a,@dptr
   3864 90 82 A4           2868 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_169
   3867 F0                 2869 	movx	@dptr,a
                           2870 ;	../../shared/src/spd_ctrl.c:310: reg_FBDIV_9_8			= lc_speedtable[fbck][rate][spdoft_fbdiv+1];
   3868 8B 05              2871 	mov	ar5,r3
   386A 74 E0              2872 	mov	a,#(_lc_speedtable >> 8)
   386C 2C                 2873 	add	a,r4
   386D FE                 2874 	mov	r6,a
   386E EA                 2875 	mov	a,r2
   386F 2D                 2876 	add	a,r5
   3870 FD                 2877 	mov	r5,a
   3871 E4                 2878 	clr	a
   3872 3E                 2879 	addc	a,r6
   3873 FE                 2880 	mov	r6,a
   3874 8D 82              2881 	mov	dpl,r5
   3876 8E 83              2882 	mov	dph,r6
   3878 A3                 2883 	inc	dptr
   3879 A3                 2884 	inc	dptr
   387A A3                 2885 	inc	dptr
   387B E0                 2886 	movx	a,@dptr
   387C 90 82 A0           2887 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_168
   387F C4                 2888 	swap	a
   3880 54 30              2889 	anl	a,#(0xf0&0x30)
   3882 F5 F0              2890 	mov	b,a
   3884 E0                 2891 	movx	a,@dptr
   3885 54 CF              2892 	anl	a,#0xcf
   3887 45 F0              2893 	orl	a,b
   3889 F0                 2894 	movx	@dptr,a
                           2895 ;	../../shared/src/spd_ctrl.c:311: reg_REFDIV_3_0 			= lc_speedtable[fbck][rate][spdoft_refdiv];
   388A 8B 05              2896 	mov	ar5,r3
   388C 74 E0              2897 	mov	a,#(_lc_speedtable >> 8)
   388E 2C                 2898 	add	a,r4
   388F FE                 2899 	mov	r6,a
   3890 EA                 2900 	mov	a,r2
   3891 2D                 2901 	add	a,r5
   3892 FD                 2902 	mov	r5,a
   3893 E4                 2903 	clr	a
   3894 3E                 2904 	addc	a,r6
   3895 FE                 2905 	mov	r6,a
   3896 74 06              2906 	mov	a,#0x06
   3898 2D                 2907 	add	a,r5
   3899 F5 82              2908 	mov	dpl,a
   389B E4                 2909 	clr	a
   389C 3E                 2910 	addc	a,r6
   389D F5 83              2911 	mov	dph,a
   389F E0                 2912 	movx	a,@dptr
   38A0 90 82 A8           2913 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_170
   38A3 C4                 2914 	swap	a
   38A4 54 F0              2915 	anl	a,#(0xf0&0xf0)
   38A6 F5 F0              2916 	mov	b,a
   38A8 E0                 2917 	movx	a,@dptr
   38A9 54 0F              2918 	anl	a,#0x0f
   38AB 45 F0              2919 	orl	a,b
   38AD F0                 2920 	movx	@dptr,a
                           2921 ;	../../shared/src/spd_ctrl.c:312: reg_VIND_BAND_SEL 		= lc_speedtable[fbck][rate][spdoft_vind_band_sel];
   38AE 8B 05              2922 	mov	ar5,r3
   38B0 74 E0              2923 	mov	a,#(_lc_speedtable >> 8)
   38B2 2C                 2924 	add	a,r4
   38B3 FE                 2925 	mov	r6,a
   38B4 EA                 2926 	mov	a,r2
   38B5 2D                 2927 	add	a,r5
   38B6 FD                 2928 	mov	r5,a
   38B7 E4                 2929 	clr	a
   38B8 3E                 2930 	addc	a,r6
   38B9 FE                 2931 	mov	r6,a
   38BA 74 07              2932 	mov	a,#0x07
   38BC 2D                 2933 	add	a,r5
   38BD F5 82              2934 	mov	dpl,a
   38BF E4                 2935 	clr	a
   38C0 3E                 2936 	addc	a,r6
   38C1 F5 83              2937 	mov	dph,a
   38C3 E0                 2938 	movx	a,@dptr
   38C4 90 82 9C           2939 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_167
   38C7 13                 2940 	rrc	a
   38C8 E0                 2941 	movx	a,@dptr
   38C9 92 E1              2942 	mov	acc.1,c
   38CB F0                 2943 	movx	@dptr,a
                           2944 ;	../../shared/src/spd_ctrl.c:313: if(reg_RING_REF_DIV_SEL==1) {
   38CC 90 82 D4           2945 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   38CF E0                 2946 	movx	a,@dptr
   38D0 23                 2947 	rl	a
   38D1 54 01              2948 	anl	a,#0x01
   38D3 FD                 2949 	mov	r5,a
   38D4 BD 01 42           2950 	cjne	r5,#0x01,00107$
                           2951 ;	../../shared/src/spd_ctrl.c:314: reg_DIV_1G_7_0 		= lc_speedtable[fbck][rate][spdoft_div_1g_fbck];
   38D7 8B 05              2952 	mov	ar5,r3
   38D9 74 E0              2953 	mov	a,#(_lc_speedtable >> 8)
   38DB 2C                 2954 	add	a,r4
   38DC FE                 2955 	mov	r6,a
   38DD EA                 2956 	mov	a,r2
   38DE 2D                 2957 	add	a,r5
   38DF FD                 2958 	mov	r5,a
   38E0 E4                 2959 	clr	a
   38E1 3E                 2960 	addc	a,r6
   38E2 FE                 2961 	mov	r6,a
   38E3 74 0B              2962 	mov	a,#0x0B
   38E5 2D                 2963 	add	a,r5
   38E6 F5 82              2964 	mov	dpl,a
   38E8 E4                 2965 	clr	a
   38E9 3E                 2966 	addc	a,r6
   38EA F5 83              2967 	mov	dph,a
   38EC E0                 2968 	movx	a,@dptr
   38ED 90 82 E8           2969 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_186
   38F0 F0                 2970 	movx	@dptr,a
                           2971 ;	../../shared/src/spd_ctrl.c:315: reg_DIV_1G_9_8 		= lc_speedtable[fbck][rate][spdoft_div_1g_fbck+1];
   38F1 8B 05              2972 	mov	ar5,r3
   38F3 74 E0              2973 	mov	a,#(_lc_speedtable >> 8)
   38F5 2C                 2974 	add	a,r4
   38F6 FE                 2975 	mov	r6,a
   38F7 EA                 2976 	mov	a,r2
   38F8 2D                 2977 	add	a,r5
   38F9 FD                 2978 	mov	r5,a
   38FA E4                 2979 	clr	a
   38FB 3E                 2980 	addc	a,r6
   38FC FE                 2981 	mov	r6,a
   38FD 74 0C              2982 	mov	a,#0x0C
   38FF 2D                 2983 	add	a,r5
   3900 F5 82              2984 	mov	dpl,a
   3902 E4                 2985 	clr	a
   3903 3E                 2986 	addc	a,r6
   3904 F5 83              2987 	mov	dph,a
   3906 E0                 2988 	movx	a,@dptr
   3907 FD                 2989 	mov	r5,a
   3908 90 82 E4           2990 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_185
   390B 03                 2991 	rr	a
   390C 03                 2992 	rr	a
   390D 54 C0              2993 	anl	a,#(0xc0&0xc0)
   390F F5 F0              2994 	mov	b,a
   3911 E0                 2995 	movx	a,@dptr
   3912 54 3F              2996 	anl	a,#0x3f
   3914 45 F0              2997 	orl	a,b
   3916 F0                 2998 	movx	@dptr,a
   3917 80 40              2999 	sjmp	00108$
   3919                    3000 00107$:
                           3001 ;	../../shared/src/spd_ctrl.c:318: reg_DIV_1G_7_0 		= lc_speedtable[fbck][rate][spdoft_div_1g];
   3919 8B 05              3002 	mov	ar5,r3
   391B 74 E0              3003 	mov	a,#(_lc_speedtable >> 8)
   391D 2C                 3004 	add	a,r4
   391E FE                 3005 	mov	r6,a
   391F EA                 3006 	mov	a,r2
   3920 2D                 3007 	add	a,r5
   3921 FD                 3008 	mov	r5,a
   3922 E4                 3009 	clr	a
   3923 3E                 3010 	addc	a,r6
   3924 FE                 3011 	mov	r6,a
   3925 74 09              3012 	mov	a,#0x09
   3927 2D                 3013 	add	a,r5
   3928 F5 82              3014 	mov	dpl,a
   392A E4                 3015 	clr	a
   392B 3E                 3016 	addc	a,r6
   392C F5 83              3017 	mov	dph,a
   392E E0                 3018 	movx	a,@dptr
   392F 90 82 E8           3019 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_186
   3932 F0                 3020 	movx	@dptr,a
                           3021 ;	../../shared/src/spd_ctrl.c:319: reg_DIV_1G_9_8 		= lc_speedtable[fbck][rate][spdoft_div_1g+1];
   3933 8B 05              3022 	mov	ar5,r3
   3935 74 E0              3023 	mov	a,#(_lc_speedtable >> 8)
   3937 2C                 3024 	add	a,r4
   3938 FE                 3025 	mov	r6,a
   3939 EA                 3026 	mov	a,r2
   393A 2D                 3027 	add	a,r5
   393B FD                 3028 	mov	r5,a
   393C E4                 3029 	clr	a
   393D 3E                 3030 	addc	a,r6
   393E FE                 3031 	mov	r6,a
   393F 74 0A              3032 	mov	a,#0x0A
   3941 2D                 3033 	add	a,r5
   3942 F5 82              3034 	mov	dpl,a
   3944 E4                 3035 	clr	a
   3945 3E                 3036 	addc	a,r6
   3946 F5 83              3037 	mov	dph,a
   3948 E0                 3038 	movx	a,@dptr
   3949 FD                 3039 	mov	r5,a
   394A 90 82 E4           3040 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_185
   394D 03                 3041 	rr	a
   394E 03                 3042 	rr	a
   394F 54 C0              3043 	anl	a,#(0xc0&0xc0)
   3951 F5 F0              3044 	mov	b,a
   3953 E0                 3045 	movx	a,@dptr
   3954 54 3F              3046 	anl	a,#0x3f
   3956 45 F0              3047 	orl	a,b
   3958 F0                 3048 	movx	@dptr,a
   3959                    3049 00108$:
                           3050 ;	../../shared/src/spd_ctrl.c:321: reg_ICP_LC_4_0			= lc_speedtable[fbck][rate][spdoft_icp_lc];
   3959 8B 05              3051 	mov	ar5,r3
   395B 74 E0              3052 	mov	a,#(_lc_speedtable >> 8)
   395D 2C                 3053 	add	a,r4
   395E FE                 3054 	mov	r6,a
   395F EA                 3055 	mov	a,r2
   3960 2D                 3056 	add	a,r5
   3961 FD                 3057 	mov	r5,a
   3962 E4                 3058 	clr	a
   3963 3E                 3059 	addc	a,r6
   3964 FE                 3060 	mov	r6,a
   3965 74 0D              3061 	mov	a,#0x0D
   3967 2D                 3062 	add	a,r5
   3968 F5 82              3063 	mov	dpl,a
   396A E4                 3064 	clr	a
   396B 3E                 3065 	addc	a,r6
   396C F5 83              3066 	mov	dph,a
   396E E0                 3067 	movx	a,@dptr
   396F 90 83 34           3068 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_205
   3972 54 1F              3069 	anl	a,#0x1f
   3974 F5 F0              3070 	mov	b,a
   3976 E0                 3071 	movx	a,@dptr
   3977 54 E0              3072 	anl	a,#0xe0
   3979 45 F0              3073 	orl	a,b
   397B F0                 3074 	movx	@dptr,a
                           3075 ;	../../shared/src/spd_ctrl.c:322: reg_PLL_LPFR_1_0		= lc_speedtable[fbck][rate][spdoft_pll_lpfr];
   397C 8B 05              3076 	mov	ar5,r3
   397E 74 E0              3077 	mov	a,#(_lc_speedtable >> 8)
   3980 2C                 3078 	add	a,r4
   3981 FE                 3079 	mov	r6,a
   3982 EA                 3080 	mov	a,r2
   3983 2D                 3081 	add	a,r5
   3984 FD                 3082 	mov	r5,a
   3985 E4                 3083 	clr	a
   3986 3E                 3084 	addc	a,r6
   3987 FE                 3085 	mov	r6,a
   3988 74 0E              3086 	mov	a,#0x0E
   398A 2D                 3087 	add	a,r5
   398B F5 82              3088 	mov	dpl,a
   398D E4                 3089 	clr	a
   398E 3E                 3090 	addc	a,r6
   398F F5 83              3091 	mov	dph,a
   3991 E0                 3092 	movx	a,@dptr
   3992 90 82 A8           3093 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_170
   3995 54 03              3094 	anl	a,#0x03
   3997 F5 F0              3095 	mov	b,a
   3999 E0                 3096 	movx	a,@dptr
   399A 54 FC              3097 	anl	a,#0xfc
   399C 45 F0              3098 	orl	a,b
   399E F0                 3099 	movx	@dptr,a
                           3100 ;	../../shared/src/spd_ctrl.c:323: reg_PLL_LPFC_1_0		= lc_speedtable[fbck][rate][spdoft_pll_lpfc];
   399F 8B 05              3101 	mov	ar5,r3
   39A1 74 E0              3102 	mov	a,#(_lc_speedtable >> 8)
   39A3 2C                 3103 	add	a,r4
   39A4 FE                 3104 	mov	r6,a
   39A5 EA                 3105 	mov	a,r2
   39A6 2D                 3106 	add	a,r5
   39A7 FD                 3107 	mov	r5,a
   39A8 E4                 3108 	clr	a
   39A9 3E                 3109 	addc	a,r6
   39AA FE                 3110 	mov	r6,a
   39AB 74 0F              3111 	mov	a,#0x0F
   39AD 2D                 3112 	add	a,r5
   39AE F5 82              3113 	mov	dpl,a
   39B0 E4                 3114 	clr	a
   39B1 3E                 3115 	addc	a,r6
   39B2 F5 83              3116 	mov	dph,a
   39B4 E0                 3117 	movx	a,@dptr
   39B5 90 82 A8           3118 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_170
   39B8 25 E0              3119 	add	a,acc
   39BA 25 E0              3120 	add	a,acc
   39BC 54 0C              3121 	anl	a,#0x0c
   39BE F5 F0              3122 	mov	b,a
   39C0 E0                 3123 	movx	a,@dptr
   39C1 54 F3              3124 	anl	a,#0xf3
   39C3 45 F0              3125 	orl	a,b
   39C5 F0                 3126 	movx	@dptr,a
                           3127 ;	../../shared/src/spd_ctrl.c:324: cmx_G_INTPI_LCPLL_7_0		= lc_speedtable[fbck][rate][spdoft_intpi_lcpll];
   39C6 8B 05              3128 	mov	ar5,r3
   39C8 74 E0              3129 	mov	a,#(_lc_speedtable >> 8)
   39CA 2C                 3130 	add	a,r4
   39CB FE                 3131 	mov	r6,a
   39CC EA                 3132 	mov	a,r2
   39CD 2D                 3133 	add	a,r5
   39CE FD                 3134 	mov	r5,a
   39CF E4                 3135 	clr	a
   39D0 3E                 3136 	addc	a,r6
   39D1 FE                 3137 	mov	r6,a
   39D2 74 10              3138 	mov	a,#0x10
   39D4 2D                 3139 	add	a,r5
   39D5 F5 82              3140 	mov	dpl,a
   39D7 E4                 3141 	clr	a
   39D8 3E                 3142 	addc	a,r6
   39D9 F5 83              3143 	mov	dph,a
   39DB E0                 3144 	movx	a,@dptr
                           3145 ;	../../shared/src/spd_ctrl.c:325: reg_INTPI_LCPLL_3_0 = cmx_G_INTPI_LCPLL_7_0;
   39DC 90 E6 56           3146 	mov	dptr,#(_CAL_DATA1 + 0x0002)
   39DF F0                 3147 	movx	@dptr,a
   39E0 E0                 3148 	movx	a,@dptr
   39E1 90 82 0C           3149 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   39E4 C4                 3150 	swap	a
   39E5 54 F0              3151 	anl	a,#(0xf0&0xf0)
   39E7 F5 F0              3152 	mov	b,a
   39E9 E0                 3153 	movx	a,@dptr
   39EA 54 0F              3154 	anl	a,#0x0f
   39EC 45 F0              3155 	orl	a,b
   39EE F0                 3156 	movx	@dptr,a
                           3157 ;	../../shared/src/spd_ctrl.c:326: reg_INTPI_RING_3_0 = cmx_G_INTPI_RING_7_0;
   39EF 90 E6 57           3158 	mov	dptr,#(_CAL_DATA1 + 0x0003)
   39F2 E0                 3159 	movx	a,@dptr
   39F3 90 82 0C           3160 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   39F6 54 0F              3161 	anl	a,#0x0f
   39F8 F5 F0              3162 	mov	b,a
   39FA E0                 3163 	movx	a,@dptr
   39FB 54 F0              3164 	anl	a,#0xf0
   39FD 45 F0              3165 	orl	a,b
   39FF F0                 3166 	movx	@dptr,a
                           3167 ;	../../shared/src/spd_ctrl.c:327: reg_TX_INTPR_1_0		= lc_speedtable[fbck][rate][spdoft_tx_intpr];
   3A00 8B 05              3168 	mov	ar5,r3
   3A02 74 E0              3169 	mov	a,#(_lc_speedtable >> 8)
   3A04 2C                 3170 	add	a,r4
   3A05 FE                 3171 	mov	r6,a
   3A06 EA                 3172 	mov	a,r2
   3A07 2D                 3173 	add	a,r5
   3A08 FD                 3174 	mov	r5,a
   3A09 E4                 3175 	clr	a
   3A0A 3E                 3176 	addc	a,r6
   3A0B FE                 3177 	mov	r6,a
   3A0C 74 11              3178 	mov	a,#0x11
   3A0E 2D                 3179 	add	a,r5
   3A0F F5 82              3180 	mov	dpl,a
   3A11 E4                 3181 	clr	a
   3A12 3E                 3182 	addc	a,r6
   3A13 F5 83              3183 	mov	dph,a
   3A15 E0                 3184 	movx	a,@dptr
   3A16 90 82 EC           3185 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_187
   3A19 03                 3186 	rr	a
   3A1A 03                 3187 	rr	a
   3A1B 54 C0              3188 	anl	a,#(0xc0&0xc0)
   3A1D F5 F0              3189 	mov	b,a
   3A1F E0                 3190 	movx	a,@dptr
   3A20 54 3F              3191 	anl	a,#0x3f
   3A22 45 F0              3192 	orl	a,b
   3A24 F0                 3193 	movx	@dptr,a
                           3194 ;	../../shared/src/spd_ctrl.c:328: reg_INIT_TXFOFFS_9_0_b0		= lc_speedtable[fbck][rate][spdoft_init_txfoffs]; 
   3A25 8B 05              3195 	mov	ar5,r3
   3A27 74 E0              3196 	mov	a,#(_lc_speedtable >> 8)
   3A29 2C                 3197 	add	a,r4
   3A2A FE                 3198 	mov	r6,a
   3A2B EA                 3199 	mov	a,r2
   3A2C 2D                 3200 	add	a,r5
   3A2D FD                 3201 	mov	r5,a
   3A2E E4                 3202 	clr	a
   3A2F 3E                 3203 	addc	a,r6
   3A30 FE                 3204 	mov	r6,a
   3A31 74 12              3205 	mov	a,#0x12
   3A33 2D                 3206 	add	a,r5
   3A34 F5 82              3207 	mov	dpl,a
   3A36 E4                 3208 	clr	a
   3A37 3E                 3209 	addc	a,r6
   3A38 F5 83              3210 	mov	dph,a
   3A3A E0                 3211 	movx	a,@dptr
   3A3B 90 A0 08           3212 	mov	dptr,#_DTX_REG0
   3A3E F0                 3213 	movx	@dptr,a
                           3214 ;	../../shared/src/spd_ctrl.c:329: reg_INIT_TXFOFFS_9_0_b1		= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];
   3A3F 8B 05              3215 	mov	ar5,r3
   3A41 74 E0              3216 	mov	a,#(_lc_speedtable >> 8)
   3A43 2C                 3217 	add	a,r4
   3A44 FE                 3218 	mov	r6,a
   3A45 EA                 3219 	mov	a,r2
   3A46 2D                 3220 	add	a,r5
   3A47 FD                 3221 	mov	r5,a
   3A48 E4                 3222 	clr	a
   3A49 3E                 3223 	addc	a,r6
   3A4A FE                 3224 	mov	r6,a
   3A4B 74 13              3225 	mov	a,#0x13
   3A4D 2D                 3226 	add	a,r5
   3A4E F5 82              3227 	mov	dpl,a
   3A50 E4                 3228 	clr	a
   3A51 3E                 3229 	addc	a,r6
   3A52 F5 83              3230 	mov	dph,a
   3A54 E0                 3231 	movx	a,@dptr
   3A55 90 A0 09           3232 	mov	dptr,#(_DTX_REG0 + 0x0001)
   3A58 54 03              3233 	anl	a,#0x03
   3A5A F5 F0              3234 	mov	b,a
   3A5C E0                 3235 	movx	a,@dptr
   3A5D 54 FC              3236 	anl	a,#0xfc
   3A5F 45 F0              3237 	orl	a,b
   3A61 F0                 3238 	movx	@dptr,a
                           3239 ;	../../shared/src/spd_ctrl.c:330: temp				= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
   3A62 8B 05              3240 	mov	ar5,r3
   3A64 74 E0              3241 	mov	a,#(_lc_speedtable >> 8)
   3A66 2C                 3242 	add	a,r4
   3A67 FE                 3243 	mov	r6,a
   3A68 EA                 3244 	mov	a,r2
   3A69 2D                 3245 	add	a,r5
   3A6A FD                 3246 	mov	r5,a
   3A6B E4                 3247 	clr	a
   3A6C 3E                 3248 	addc	a,r6
   3A6D FE                 3249 	mov	r6,a
   3A6E 74 15              3250 	mov	a,#0x15
   3A70 2D                 3251 	add	a,r5
   3A71 F5 82              3252 	mov	dpl,a
   3A73 E4                 3253 	clr	a
   3A74 3E                 3254 	addc	a,r6
   3A75 F5 83              3255 	mov	dph,a
   3A77 E0                 3256 	movx	a,@dptr
   3A78 FD                 3257 	mov	r5,a
   3A79 A8 18              3258 	mov	r0,_bp
   3A7B 08                 3259 	inc	r0
   3A7C A6 05              3260 	mov	@r0,ar5
   3A7E 08                 3261 	inc	r0
   3A7F 76 00              3262 	mov	@r0,#0x00
   3A81 A8 18              3263 	mov	r0,_bp
   3A83 08                 3264 	inc	r0
   3A84 E6                 3265 	mov	a,@r0
   3A85 08                 3266 	inc	r0
   3A86 F6                 3267 	mov	@r0,a
   3A87 18                 3268 	dec	r0
   3A88 76 00              3269 	mov	@r0,#0x00
                           3270 ;	../../shared/src/spd_ctrl.c:331: temp				+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];
   3A8A 8B 07              3271 	mov	ar7,r3
   3A8C 74 E0              3272 	mov	a,#(_lc_speedtable >> 8)
   3A8E 2C                 3273 	add	a,r4
   3A8F FD                 3274 	mov	r5,a
   3A90 EA                 3275 	mov	a,r2
   3A91 2F                 3276 	add	a,r7
   3A92 FF                 3277 	mov	r7,a
   3A93 E4                 3278 	clr	a
   3A94 3D                 3279 	addc	a,r5
   3A95 FD                 3280 	mov	r5,a
   3A96 74 14              3281 	mov	a,#0x14
   3A98 2F                 3282 	add	a,r7
   3A99 F5 82              3283 	mov	dpl,a
   3A9B E4                 3284 	clr	a
   3A9C 3D                 3285 	addc	a,r5
   3A9D F5 83              3286 	mov	dph,a
   3A9F E0                 3287 	movx	a,@dptr
   3AA0 FD                 3288 	mov	r5,a
   3AA1 7E 00              3289 	mov	r6,#0x00
   3AA3 A8 18              3290 	mov	r0,_bp
   3AA5 08                 3291 	inc	r0
   3AA6 ED                 3292 	mov	a,r5
   3AA7 26                 3293 	add	a,@r0
   3AA8 F6                 3294 	mov	@r0,a
   3AA9 EE                 3295 	mov	a,r6
   3AAA 08                 3296 	inc	r0
   3AAB 36                 3297 	addc	a,@r0
   3AAC F6                 3298 	mov	@r0,a
                           3299 ;	../../shared/src/spd_ctrl.c:332: temp <<= FBC_RATIO;
   3AAD 90 E6 14           3300 	mov	dptr,#_CONTROL_CONFIG4
   3AB0 E0                 3301 	movx	a,@dptr
   3AB1 FD                 3302 	mov	r5,a
   3AB2 8D F0              3303 	mov	b,r5
   3AB4 05 F0              3304 	inc	b
   3AB6 A8 18              3305 	mov	r0,_bp
   3AB8 08                 3306 	inc	r0
   3AB9 80 09              3307 	sjmp	00133$
   3ABB                    3308 00132$:
   3ABB E6                 3309 	mov	a,@r0
   3ABC 25 E0              3310 	add	a,acc
   3ABE F6                 3311 	mov	@r0,a
   3ABF 08                 3312 	inc	r0
   3AC0 E6                 3313 	mov	a,@r0
   3AC1 33                 3314 	rlc	a
   3AC2 F6                 3315 	mov	@r0,a
   3AC3 18                 3316 	dec	r0
   3AC4                    3317 00133$:
   3AC4 D5 F0 F4           3318 	djnz	b,00132$
                           3319 ;	../../shared/src/spd_ctrl.c:333: cmx_SPEED_THRESH_15_0 = temp;
   3AC7 90 E6 1C           3320 	mov	dptr,#_CONTROL_CONFIG6
   3ACA A8 18              3321 	mov	r0,_bp
   3ACC 08                 3322 	inc	r0
   3ACD E6                 3323 	mov	a,@r0
   3ACE F0                 3324 	movx	@dptr,a
   3ACF A3                 3325 	inc	dptr
   3AD0 08                 3326 	inc	r0
   3AD1 E6                 3327 	mov	a,@r0
   3AD2 F0                 3328 	movx	@dptr,a
                           3329 ;	../../shared/src/spd_ctrl.c:335: reg_LCCAP_USB			= lc_speedtable[fbck][rate][spdoft_lccap_usb];
   3AD3 8B 05              3330 	mov	ar5,r3
   3AD5 74 E0              3331 	mov	a,#(_lc_speedtable >> 8)
   3AD7 2C                 3332 	add	a,r4
   3AD8 FE                 3333 	mov	r6,a
   3AD9 EA                 3334 	mov	a,r2
   3ADA 2D                 3335 	add	a,r5
   3ADB FD                 3336 	mov	r5,a
   3ADC E4                 3337 	clr	a
   3ADD 3E                 3338 	addc	a,r6
   3ADE FE                 3339 	mov	r6,a
   3ADF 74 16              3340 	mov	a,#0x16
   3AE1 2D                 3341 	add	a,r5
   3AE2 F5 82              3342 	mov	dpl,a
   3AE4 E4                 3343 	clr	a
   3AE5 3E                 3344 	addc	a,r6
   3AE6 F5 83              3345 	mov	dph,a
   3AE8 E0                 3346 	movx	a,@dptr
   3AE9 90 82 C0           3347 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_176
   3AEC 13                 3348 	rrc	a
   3AED E0                 3349 	movx	a,@dptr
   3AEE 92 E4              3350 	mov	acc.4,c
   3AF0 F0                 3351 	movx	@dptr,a
                           3352 ;	../../shared/src/spd_ctrl.c:336: reg_SSC_STEP_125PPM_3_0 	= lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm]; 
   3AF1 8B 05              3353 	mov	ar5,r3
   3AF3 74 E0              3354 	mov	a,#(_lc_speedtable >> 8)
   3AF5 2C                 3355 	add	a,r4
   3AF6 FE                 3356 	mov	r6,a
   3AF7 EA                 3357 	mov	a,r2
   3AF8 2D                 3358 	add	a,r5
   3AF9 FD                 3359 	mov	r5,a
   3AFA E4                 3360 	clr	a
   3AFB 3E                 3361 	addc	a,r6
   3AFC FE                 3362 	mov	r6,a
   3AFD 74 18              3363 	mov	a,#0x18
   3AFF 2D                 3364 	add	a,r5
   3B00 F5 82              3365 	mov	dpl,a
   3B02 E4                 3366 	clr	a
   3B03 3E                 3367 	addc	a,r6
   3B04 F5 83              3368 	mov	dph,a
   3B06 E0                 3369 	movx	a,@dptr
   3B07 90 A0 09           3370 	mov	dptr,#(_DTX_REG0 + 0x0001)
   3B0A 25 E0              3371 	add	a,acc
   3B0C 25 E0              3372 	add	a,acc
   3B0E 54 3C              3373 	anl	a,#0x3c
   3B10 F5 F0              3374 	mov	b,a
   3B12 E0                 3375 	movx	a,@dptr
   3B13 54 C3              3376 	anl	a,#0xc3
   3B15 45 F0              3377 	orl	a,b
   3B17 F0                 3378 	movx	@dptr,a
                           3379 ;	../../shared/src/spd_ctrl.c:337: reg_SSC_M_12_0_b0		= lc_speedtable[fbck][rate][spdoft_ssc_m];
   3B18 8B 05              3380 	mov	ar5,r3
   3B1A 74 E0              3381 	mov	a,#(_lc_speedtable >> 8)
   3B1C 2C                 3382 	add	a,r4
   3B1D FE                 3383 	mov	r6,a
   3B1E EA                 3384 	mov	a,r2
   3B1F 2D                 3385 	add	a,r5
   3B20 FD                 3386 	mov	r5,a
   3B21 E4                 3387 	clr	a
   3B22 3E                 3388 	addc	a,r6
   3B23 FE                 3389 	mov	r6,a
   3B24 74 19              3390 	mov	a,#0x19
   3B26 2D                 3391 	add	a,r5
   3B27 F5 82              3392 	mov	dpl,a
   3B29 E4                 3393 	clr	a
   3B2A 3E                 3394 	addc	a,r6
   3B2B F5 83              3395 	mov	dph,a
   3B2D E0                 3396 	movx	a,@dptr
   3B2E 90 A0 0E           3397 	mov	dptr,#(_DTX_REG1 + 0x0002)
   3B31 F0                 3398 	movx	@dptr,a
                           3399 ;	../../shared/src/spd_ctrl.c:338: reg_SSC_M_12_0_b1		= lc_speedtable[fbck][rate][spdoft_ssc_m+1];
   3B32 8B 05              3400 	mov	ar5,r3
   3B34 74 E0              3401 	mov	a,#(_lc_speedtable >> 8)
   3B36 2C                 3402 	add	a,r4
   3B37 FE                 3403 	mov	r6,a
   3B38 EA                 3404 	mov	a,r2
   3B39 2D                 3405 	add	a,r5
   3B3A FD                 3406 	mov	r5,a
   3B3B E4                 3407 	clr	a
   3B3C 3E                 3408 	addc	a,r6
   3B3D FE                 3409 	mov	r6,a
   3B3E 74 1A              3410 	mov	a,#0x1A
   3B40 2D                 3411 	add	a,r5
   3B41 F5 82              3412 	mov	dpl,a
   3B43 E4                 3413 	clr	a
   3B44 3E                 3414 	addc	a,r6
   3B45 F5 83              3415 	mov	dph,a
   3B47 E0                 3416 	movx	a,@dptr
   3B48 90 A0 0F           3417 	mov	dptr,#(_DTX_REG1 + 0x0003)
   3B4B 54 1F              3418 	anl	a,#0x1f
   3B4D F5 F0              3419 	mov	b,a
   3B4F E0                 3420 	movx	a,@dptr
   3B50 54 E0              3421 	anl	a,#0xe0
   3B52 45 F0              3422 	orl	a,b
   3B54 F0                 3423 	movx	@dptr,a
                           3424 ;	../../shared/src/spd_ctrl.c:346: reg_LCPLLCLK_DIV2_SEL = lc_speedtable[fbck][rate][spdoft_lcpllclk_div2_sel];
   3B55 74 E0              3425 	mov	a,#(_lc_speedtable >> 8)
   3B57 2C                 3426 	add	a,r4
   3B58 FC                 3427 	mov	r4,a
   3B59 EA                 3428 	mov	a,r2
   3B5A 2B                 3429 	add	a,r3
   3B5B FA                 3430 	mov	r2,a
   3B5C E4                 3431 	clr	a
   3B5D 3C                 3432 	addc	a,r4
   3B5E FD                 3433 	mov	r5,a
   3B5F 74 08              3434 	mov	a,#0x08
   3B61 2A                 3435 	add	a,r2
   3B62 F5 82              3436 	mov	dpl,a
   3B64 E4                 3437 	clr	a
   3B65 3D                 3438 	addc	a,r5
   3B66 F5 83              3439 	mov	dph,a
   3B68 E0                 3440 	movx	a,@dptr
   3B69 90 83 3C           3441 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   3B6C 13                 3442 	rrc	a
   3B6D E0                 3443 	movx	a,@dptr
   3B6E 92 E1              3444 	mov	acc.1,c
   3B70 F0                 3445 	movx	@dptr,a
                           3446 ;	../../shared/src/spd_ctrl.c:347: if(mcuid==master_mcu && !use_ring_pll && phy_mode==PCIE) {
   3B71 90 22 00           3447 	mov	dptr,#_MCU_CONTROL_LANE
   3B74 E0                 3448 	movx	a,@dptr
   3B75 FA                 3449 	mov	r2,a
   3B76 90 E6 50           3450 	mov	dptr,#_MCU_CONFIG
   3B79 E0                 3451 	movx	a,@dptr
   3B7A FB                 3452 	mov	r3,a
   3B7B EA                 3453 	mov	a,r2
   3B7C B5 03 1C           3454 	cjne	a,ar3,00112$
   3B7F 20 10 19           3455 	jb	_use_ring_pll,00112$
   3B82 90 A3 16           3456 	mov	dptr,#(_SYSTEM + 0x0002)
   3B85 E0                 3457 	movx	a,@dptr
   3B86 54 07              3458 	anl	a,#0x07
   3B88 FA                 3459 	mov	r2,a
   3B89 BA 03 0F           3460 	cjne	r2,#0x03,00112$
                           3461 ;	../../shared/src/spd_ctrl.c:348: if (gen_tx == 4)
   3B8C 90 66 15           3462 	mov	dptr,#_gen_tx
   3B8F E0                 3463 	movx	a,@dptr
   3B90 FA                 3464 	mov	r2,a
   3B91 BA 04 07           3465 	cjne	r2,#0x04,00112$
                           3466 ;	../../shared/src/spd_ctrl.c:349: reg_LCPLLCLK_DIV2_SEL = 1;
   3B94 90 83 3C           3467 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   3B97 E0                 3468 	movx	a,@dptr
   3B98 44 02              3469 	orl	a,#0x02
   3B9A F0                 3470 	movx	@dptr,a
   3B9B                    3471 00112$:
                           3472 ;	../../shared/src/spd_ctrl.c:353: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   3B9B 90 22 B4           3473 	mov	dptr,#_MCU_DEBUG0_LANE
   3B9E 74 39              3474 	mov	a,#0x39
   3BA0 F0                 3475 	movx	@dptr,a
   3BA1 85 18 81           3476 	mov	sp,_bp
   3BA4 D0 18              3477 	pop	_bp
   3BA6 22                 3478 	ret
                           3479 ;------------------------------------------------------------
                           3480 ;Allocation info for local variables in function 'loadspeedtbl_ringpll'
                           3481 ;------------------------------------------------------------
                           3482 ;rate                      Allocated to registers r2 
                           3483 ;temp                      Allocated to stack - offset 1
                           3484 ;fbck                      Allocated to registers r3 
                           3485 ;ck1g                      Allocated to registers r4 
                           3486 ;rate_no                   Allocated to registers r3 
                           3487 ;sloc0                     Allocated to stack - offset 3
                           3488 ;------------------------------------------------------------
                           3489 ;	../../shared/src/spd_ctrl.c:356: void loadspeedtbl_ringpll(uint8_t rate) {
                           3490 ;	-----------------------------------------
                           3491 ;	 function loadspeedtbl_ringpll
                           3492 ;	-----------------------------------------
   3BA7                    3493 _loadspeedtbl_ringpll:
   3BA7 C0 18              3494 	push	_bp
   3BA9 E5 81              3495 	mov	a,sp
   3BAB F5 18              3496 	mov	_bp,a
   3BAD 24 04              3497 	add	a,#0x04
   3BAF F5 81              3498 	mov	sp,a
   3BB1 AA 82              3499 	mov	r2,dpl
                           3500 ;	../../shared/src/spd_ctrl.c:360: fbck = fbck_sel_ring;
   3BB3 90 A3 18           3501 	mov	dptr,#_PM_CMN_REG1
   3BB6 E0                 3502 	movx	a,@dptr
   3BB7 03                 3503 	rr	a
   3BB8 03                 3504 	rr	a
   3BB9 54 01              3505 	anl	a,#0x01
   3BBB FB                 3506 	mov	r3,a
                           3507 ;	../../shared/src/spd_ctrl.c:361: reg_MCU_DEBUG0_LANE_7_0 = 0x36;
   3BBC 90 22 B4           3508 	mov	dptr,#_MCU_DEBUG0_LANE
   3BBF 74 36              3509 	mov	a,#0x36
   3BC1 F0                 3510 	movx	@dptr,a
                           3511 ;	../../shared/src/spd_ctrl.c:366: ck1g = ring_use_250m;
   3BC2 A2 13              3512 	mov	c,_ring_use_250m
   3BC4 E4                 3513 	clr	a
   3BC5 33                 3514 	rlc	a
   3BC6 FC                 3515 	mov	r4,a
                           3516 ;	../../shared/src/spd_ctrl.c:368: if(phy_mode==SERDES) rate = gen_pll_rate;
   3BC7 90 A3 16           3517 	mov	dptr,#(_SYSTEM + 0x0002)
   3BCA E0                 3518 	movx	a,@dptr
   3BCB 54 07              3519 	anl	a,#0x07
   3BCD FD                 3520 	mov	r5,a
   3BCE BD 04 05           3521 	cjne	r5,#0x04,00102$
   3BD1 90 67 8C           3522 	mov	dptr,#_gen_pll_rate
   3BD4 E0                 3523 	movx	a,@dptr
   3BD5 FA                 3524 	mov	r2,a
   3BD6                    3525 00102$:
                           3526 ;	../../shared/src/spd_ctrl.c:370: rate_no					= ring_speedtable[ck1g][fbck][rate][spdoft_pll_rate_sel_ring];
   3BD6 7D 00              3527 	mov	r5,#0x00
   3BD8 C0 02              3528 	push	ar2
   3BDA C0 03              3529 	push	ar3
   3BDC C0 04              3530 	push	ar4
   3BDE C0 05              3531 	push	ar5
   3BE0 90 01 20           3532 	mov	dptr,#0x0120
   3BE3 12 78 4F           3533 	lcall	__mulint
   3BE6 AC 82              3534 	mov	r4,dpl
   3BE8 AD 83              3535 	mov	r5,dph
   3BEA 15 81              3536 	dec	sp
   3BEC 15 81              3537 	dec	sp
   3BEE D0 03              3538 	pop	ar3
   3BF0 D0 02              3539 	pop	ar2
   3BF2 EC                 3540 	mov	a,r4
   3BF3 24 C0              3541 	add	a,#_ring_speedtable
   3BF5 FE                 3542 	mov	r6,a
   3BF6 ED                 3543 	mov	a,r5
   3BF7 34 E1              3544 	addc	a,#(_ring_speedtable >> 8)
   3BF9 FF                 3545 	mov	r7,a
   3BFA E5 18              3546 	mov	a,_bp
   3BFC 24 03              3547 	add	a,#0x03
   3BFE F8                 3548 	mov	r0,a
   3BFF EB                 3549 	mov	a,r3
   3C00 75 F0 90           3550 	mov	b,#0x90
   3C03 A4                 3551 	mul	ab
   3C04 F6                 3552 	mov	@r0,a
   3C05 08                 3553 	inc	r0
   3C06 A6 F0              3554 	mov	@r0,b
   3C08 E5 18              3555 	mov	a,_bp
   3C0A 24 03              3556 	add	a,#0x03
   3C0C F8                 3557 	mov	r0,a
   3C0D E6                 3558 	mov	a,@r0
   3C0E 2E                 3559 	add	a,r6
   3C0F FE                 3560 	mov	r6,a
   3C10 08                 3561 	inc	r0
   3C11 E6                 3562 	mov	a,@r0
   3C12 3F                 3563 	addc	a,r7
   3C13 FF                 3564 	mov	r7,a
   3C14 EA                 3565 	mov	a,r2
   3C15 75 F0 24           3566 	mov	b,#0x24
   3C18 A4                 3567 	mul	ab
   3C19 FA                 3568 	mov	r2,a
   3C1A 2E                 3569 	add	a,r6
   3C1B F5 82              3570 	mov	dpl,a
   3C1D E4                 3571 	clr	a
   3C1E 3F                 3572 	addc	a,r7
   3C1F F5 83              3573 	mov	dph,a
   3C21 E0                 3574 	movx	a,@dptr
   3C22 FB                 3575 	mov	r3,a
                           3576 ;	../../shared/src/spd_ctrl.c:371: if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
   3C23 74 01              3577 	mov	a,#0x01
   3C25 B5 03 00           3578 	cjne	a,ar3,00116$
   3C28                    3579 00116$:
   3C28 40 0A              3580 	jc	00103$
   3C2A 90 A3 16           3581 	mov	dptr,#(_SYSTEM + 0x0002)
   3C2D E0                 3582 	movx	a,@dptr
   3C2E 54 07              3583 	anl	a,#0x07
   3C30 FE                 3584 	mov	r6,a
   3C31 BE 04 02           3585 	cjne	r6,#0x04,00104$
   3C34                    3586 00103$:
   3C34 7B 00              3587 	mov	r3,#0x00
   3C36                    3588 00104$:
                           3589 ;	../../shared/src/spd_ctrl.c:372: PLL_RATE_SEL_RING = rate_no;
   3C36 90 E6 1F           3590 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   3C39 EB                 3591 	mov	a,r3
   3C3A F0                 3592 	movx	@dptr,a
                           3593 ;	../../shared/src/spd_ctrl.c:377: reg_PLL_REFDIV_RING_3_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_refdiv_ring];
   3C3B EC                 3594 	mov	a,r4
   3C3C 24 C0              3595 	add	a,#_ring_speedtable
   3C3E FB                 3596 	mov	r3,a
   3C3F ED                 3597 	mov	a,r5
   3C40 34 E1              3598 	addc	a,#(_ring_speedtable >> 8)
   3C42 FE                 3599 	mov	r6,a
   3C43 E5 18              3600 	mov	a,_bp
   3C45 24 03              3601 	add	a,#0x03
   3C47 F8                 3602 	mov	r0,a
   3C48 E6                 3603 	mov	a,@r0
   3C49 2B                 3604 	add	a,r3
   3C4A FB                 3605 	mov	r3,a
   3C4B 08                 3606 	inc	r0
   3C4C E6                 3607 	mov	a,@r0
   3C4D 3E                 3608 	addc	a,r6
   3C4E FE                 3609 	mov	r6,a
   3C4F EA                 3610 	mov	a,r2
   3C50 2B                 3611 	add	a,r3
   3C51 FB                 3612 	mov	r3,a
   3C52 E4                 3613 	clr	a
   3C53 3E                 3614 	addc	a,r6
   3C54 FE                 3615 	mov	r6,a
   3C55 8B 82              3616 	mov	dpl,r3
   3C57 8E 83              3617 	mov	dph,r6
   3C59 A3                 3618 	inc	dptr
   3C5A A3                 3619 	inc	dptr
   3C5B A3                 3620 	inc	dptr
   3C5C E0                 3621 	movx	a,@dptr
   3C5D 90 82 F0           3622 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   3C60 C4                 3623 	swap	a
   3C61 03                 3624 	rr	a
   3C62 54 78              3625 	anl	a,#(0xf8&0x78)
   3C64 F5 F0              3626 	mov	b,a
   3C66 E0                 3627 	movx	a,@dptr
   3C67 54 87              3628 	anl	a,#0x87
   3C69 45 F0              3629 	orl	a,b
   3C6B F0                 3630 	movx	@dptr,a
                           3631 ;	../../shared/src/spd_ctrl.c:379: if(reg_RING_REF_DIV_SEL==1) {
   3C6C 90 82 D4           3632 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   3C6F E0                 3633 	movx	a,@dptr
   3C70 23                 3634 	rl	a
   3C71 54 01              3635 	anl	a,#0x01
   3C73 FB                 3636 	mov	r3,a
   3C74 BB 01 02           3637 	cjne	r3,#0x01,00120$
   3C77 80 03              3638 	sjmp	00121$
   3C79                    3639 00120$:
   3C79 02 3D 34           3640 	ljmp	00107$
   3C7C                    3641 00121$:
                           3642 ;	../../shared/src/spd_ctrl.c:386: reg_PLL_FBDIV_RING_7_0 			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring_fbck];
   3C7C EC                 3643 	mov	a,r4
   3C7D 24 C0              3644 	add	a,#_ring_speedtable
   3C7F FB                 3645 	mov	r3,a
   3C80 ED                 3646 	mov	a,r5
   3C81 34 E1              3647 	addc	a,#(_ring_speedtable >> 8)
   3C83 FE                 3648 	mov	r6,a
   3C84 E5 18              3649 	mov	a,_bp
   3C86 24 03              3650 	add	a,#0x03
   3C88 F8                 3651 	mov	r0,a
   3C89 E6                 3652 	mov	a,@r0
   3C8A 2B                 3653 	add	a,r3
   3C8B FB                 3654 	mov	r3,a
   3C8C 08                 3655 	inc	r0
   3C8D E6                 3656 	mov	a,@r0
   3C8E 3E                 3657 	addc	a,r6
   3C8F FE                 3658 	mov	r6,a
   3C90 EA                 3659 	mov	a,r2
   3C91 2B                 3660 	add	a,r3
   3C92 FB                 3661 	mov	r3,a
   3C93 E4                 3662 	clr	a
   3C94 3E                 3663 	addc	a,r6
   3C95 FE                 3664 	mov	r6,a
   3C96 74 06              3665 	mov	a,#0x06
   3C98 2B                 3666 	add	a,r3
   3C99 F5 82              3667 	mov	dpl,a
   3C9B E4                 3668 	clr	a
   3C9C 3E                 3669 	addc	a,r6
   3C9D F5 83              3670 	mov	dph,a
   3C9F E0                 3671 	movx	a,@dptr
   3CA0 90 82 F4           3672 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   3CA3 F0                 3673 	movx	@dptr,a
                           3674 ;	../../shared/src/spd_ctrl.c:387: reg_PLL_FBDIV_RING_9_8			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring_fbck+1];
   3CA4 EC                 3675 	mov	a,r4
   3CA5 24 C0              3676 	add	a,#_ring_speedtable
   3CA7 FB                 3677 	mov	r3,a
   3CA8 ED                 3678 	mov	a,r5
   3CA9 34 E1              3679 	addc	a,#(_ring_speedtable >> 8)
   3CAB FE                 3680 	mov	r6,a
   3CAC E5 18              3681 	mov	a,_bp
   3CAE 24 03              3682 	add	a,#0x03
   3CB0 F8                 3683 	mov	r0,a
   3CB1 E6                 3684 	mov	a,@r0
   3CB2 2B                 3685 	add	a,r3
   3CB3 FB                 3686 	mov	r3,a
   3CB4 08                 3687 	inc	r0
   3CB5 E6                 3688 	mov	a,@r0
   3CB6 3E                 3689 	addc	a,r6
   3CB7 FE                 3690 	mov	r6,a
   3CB8 EA                 3691 	mov	a,r2
   3CB9 2B                 3692 	add	a,r3
   3CBA FB                 3693 	mov	r3,a
   3CBB E4                 3694 	clr	a
   3CBC 3E                 3695 	addc	a,r6
   3CBD FE                 3696 	mov	r6,a
   3CBE 74 07              3697 	mov	a,#0x07
   3CC0 2B                 3698 	add	a,r3
   3CC1 F5 82              3699 	mov	dpl,a
   3CC3 E4                 3700 	clr	a
   3CC4 3E                 3701 	addc	a,r6
   3CC5 F5 83              3702 	mov	dph,a
   3CC7 E0                 3703 	movx	a,@dptr
   3CC8 90 82 F0           3704 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   3CCB 25 E0              3705 	add	a,acc
   3CCD 54 06              3706 	anl	a,#0x06
   3CCF F5 F0              3707 	mov	b,a
   3CD1 E0                 3708 	movx	a,@dptr
   3CD2 54 F9              3709 	anl	a,#0xf9
   3CD4 45 F0              3710 	orl	a,b
   3CD6 F0                 3711 	movx	@dptr,a
                           3712 ;	../../shared/src/spd_ctrl.c:388: reg_INIT_TXFOFFS_RING_9_0_b0		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring_fbck];
   3CD7 EC                 3713 	mov	a,r4
   3CD8 24 C0              3714 	add	a,#_ring_speedtable
   3CDA FB                 3715 	mov	r3,a
   3CDB ED                 3716 	mov	a,r5
   3CDC 34 E1              3717 	addc	a,#(_ring_speedtable >> 8)
   3CDE FE                 3718 	mov	r6,a
   3CDF E5 18              3719 	mov	a,_bp
   3CE1 24 03              3720 	add	a,#0x03
   3CE3 F8                 3721 	mov	r0,a
   3CE4 E6                 3722 	mov	a,@r0
   3CE5 2B                 3723 	add	a,r3
   3CE6 FB                 3724 	mov	r3,a
   3CE7 08                 3725 	inc	r0
   3CE8 E6                 3726 	mov	a,@r0
   3CE9 3E                 3727 	addc	a,r6
   3CEA FE                 3728 	mov	r6,a
   3CEB EA                 3729 	mov	a,r2
   3CEC 2B                 3730 	add	a,r3
   3CED FB                 3731 	mov	r3,a
   3CEE E4                 3732 	clr	a
   3CEF 3E                 3733 	addc	a,r6
   3CF0 FE                 3734 	mov	r6,a
   3CF1 74 15              3735 	mov	a,#0x15
   3CF3 2B                 3736 	add	a,r3
   3CF4 F5 82              3737 	mov	dpl,a
   3CF6 E4                 3738 	clr	a
   3CF7 3E                 3739 	addc	a,r6
   3CF8 F5 83              3740 	mov	dph,a
   3CFA E0                 3741 	movx	a,@dptr
   3CFB 90 A0 10           3742 	mov	dptr,#_DTX_REG2
   3CFE F0                 3743 	movx	@dptr,a
                           3744 ;	../../shared/src/spd_ctrl.c:389: reg_INIT_TXFOFFS_RING_9_0_b1		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring_fbck+1];
   3CFF EC                 3745 	mov	a,r4
   3D00 24 C0              3746 	add	a,#_ring_speedtable
   3D02 FB                 3747 	mov	r3,a
   3D03 ED                 3748 	mov	a,r5
   3D04 34 E1              3749 	addc	a,#(_ring_speedtable >> 8)
   3D06 FE                 3750 	mov	r6,a
   3D07 E5 18              3751 	mov	a,_bp
   3D09 24 03              3752 	add	a,#0x03
   3D0B F8                 3753 	mov	r0,a
   3D0C E6                 3754 	mov	a,@r0
   3D0D 2B                 3755 	add	a,r3
   3D0E FB                 3756 	mov	r3,a
   3D0F 08                 3757 	inc	r0
   3D10 E6                 3758 	mov	a,@r0
   3D11 3E                 3759 	addc	a,r6
   3D12 FE                 3760 	mov	r6,a
   3D13 EA                 3761 	mov	a,r2
   3D14 2B                 3762 	add	a,r3
   3D15 FB                 3763 	mov	r3,a
   3D16 E4                 3764 	clr	a
   3D17 3E                 3765 	addc	a,r6
   3D18 FE                 3766 	mov	r6,a
   3D19 74 16              3767 	mov	a,#0x16
   3D1B 2B                 3768 	add	a,r3
   3D1C F5 82              3769 	mov	dpl,a
   3D1E E4                 3770 	clr	a
   3D1F 3E                 3771 	addc	a,r6
   3D20 F5 83              3772 	mov	dph,a
   3D22 E0                 3773 	movx	a,@dptr
   3D23 FB                 3774 	mov	r3,a
   3D24 90 A0 11           3775 	mov	dptr,#(_DTX_REG2 + 0x0001)
   3D27 54 03              3776 	anl	a,#0x03
   3D29 F5 F0              3777 	mov	b,a
   3D2B E0                 3778 	movx	a,@dptr
   3D2C 54 FC              3779 	anl	a,#0xfc
   3D2E 45 F0              3780 	orl	a,b
   3D30 F0                 3781 	movx	@dptr,a
   3D31 02 3D E8           3782 	ljmp	00108$
   3D34                    3783 00107$:
                           3784 ;	../../shared/src/spd_ctrl.c:399: reg_PLL_FBDIV_RING_7_0 			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring];
   3D34 EC                 3785 	mov	a,r4
   3D35 24 C0              3786 	add	a,#_ring_speedtable
   3D37 FB                 3787 	mov	r3,a
   3D38 ED                 3788 	mov	a,r5
   3D39 34 E1              3789 	addc	a,#(_ring_speedtable >> 8)
   3D3B FE                 3790 	mov	r6,a
   3D3C E5 18              3791 	mov	a,_bp
   3D3E 24 03              3792 	add	a,#0x03
   3D40 F8                 3793 	mov	r0,a
   3D41 E6                 3794 	mov	a,@r0
   3D42 2B                 3795 	add	a,r3
   3D43 FB                 3796 	mov	r3,a
   3D44 08                 3797 	inc	r0
   3D45 E6                 3798 	mov	a,@r0
   3D46 3E                 3799 	addc	a,r6
   3D47 FE                 3800 	mov	r6,a
   3D48 EA                 3801 	mov	a,r2
   3D49 2B                 3802 	add	a,r3
   3D4A FB                 3803 	mov	r3,a
   3D4B E4                 3804 	clr	a
   3D4C 3E                 3805 	addc	a,r6
   3D4D FE                 3806 	mov	r6,a
   3D4E 8B 82              3807 	mov	dpl,r3
   3D50 8E 83              3808 	mov	dph,r6
   3D52 A3                 3809 	inc	dptr
   3D53 A3                 3810 	inc	dptr
   3D54 A3                 3811 	inc	dptr
   3D55 A3                 3812 	inc	dptr
   3D56 E0                 3813 	movx	a,@dptr
   3D57 90 82 F4           3814 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   3D5A F0                 3815 	movx	@dptr,a
                           3816 ;	../../shared/src/spd_ctrl.c:400: reg_PLL_FBDIV_RING_9_8			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring+1];
   3D5B EC                 3817 	mov	a,r4
   3D5C 24 C0              3818 	add	a,#_ring_speedtable
   3D5E FB                 3819 	mov	r3,a
   3D5F ED                 3820 	mov	a,r5
   3D60 34 E1              3821 	addc	a,#(_ring_speedtable >> 8)
   3D62 FE                 3822 	mov	r6,a
   3D63 E5 18              3823 	mov	a,_bp
   3D65 24 03              3824 	add	a,#0x03
   3D67 F8                 3825 	mov	r0,a
   3D68 E6                 3826 	mov	a,@r0
   3D69 2B                 3827 	add	a,r3
   3D6A FB                 3828 	mov	r3,a
   3D6B 08                 3829 	inc	r0
   3D6C E6                 3830 	mov	a,@r0
   3D6D 3E                 3831 	addc	a,r6
   3D6E FE                 3832 	mov	r6,a
   3D6F EA                 3833 	mov	a,r2
   3D70 2B                 3834 	add	a,r3
   3D71 FB                 3835 	mov	r3,a
   3D72 E4                 3836 	clr	a
   3D73 3E                 3837 	addc	a,r6
   3D74 FE                 3838 	mov	r6,a
   3D75 8B 82              3839 	mov	dpl,r3
   3D77 8E 83              3840 	mov	dph,r6
   3D79 A3                 3841 	inc	dptr
   3D7A A3                 3842 	inc	dptr
   3D7B A3                 3843 	inc	dptr
   3D7C A3                 3844 	inc	dptr
   3D7D A3                 3845 	inc	dptr
   3D7E E0                 3846 	movx	a,@dptr
   3D7F 90 82 F0           3847 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   3D82 25 E0              3848 	add	a,acc
   3D84 54 06              3849 	anl	a,#0x06
   3D86 F5 F0              3850 	mov	b,a
   3D88 E0                 3851 	movx	a,@dptr
   3D89 54 F9              3852 	anl	a,#0xf9
   3D8B 45 F0              3853 	orl	a,b
   3D8D F0                 3854 	movx	@dptr,a
                           3855 ;	../../shared/src/spd_ctrl.c:401: reg_INIT_TXFOFFS_RING_9_0_b0		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring];
   3D8E EC                 3856 	mov	a,r4
   3D8F 24 C0              3857 	add	a,#_ring_speedtable
   3D91 FB                 3858 	mov	r3,a
   3D92 ED                 3859 	mov	a,r5
   3D93 34 E1              3860 	addc	a,#(_ring_speedtable >> 8)
   3D95 FE                 3861 	mov	r6,a
   3D96 E5 18              3862 	mov	a,_bp
   3D98 24 03              3863 	add	a,#0x03
   3D9A F8                 3864 	mov	r0,a
   3D9B E6                 3865 	mov	a,@r0
   3D9C 2B                 3866 	add	a,r3
   3D9D FB                 3867 	mov	r3,a
   3D9E 08                 3868 	inc	r0
   3D9F E6                 3869 	mov	a,@r0
   3DA0 3E                 3870 	addc	a,r6
   3DA1 FE                 3871 	mov	r6,a
   3DA2 EA                 3872 	mov	a,r2
   3DA3 2B                 3873 	add	a,r3
   3DA4 FB                 3874 	mov	r3,a
   3DA5 E4                 3875 	clr	a
   3DA6 3E                 3876 	addc	a,r6
   3DA7 FE                 3877 	mov	r6,a
   3DA8 74 13              3878 	mov	a,#0x13
   3DAA 2B                 3879 	add	a,r3
   3DAB F5 82              3880 	mov	dpl,a
   3DAD E4                 3881 	clr	a
   3DAE 3E                 3882 	addc	a,r6
   3DAF F5 83              3883 	mov	dph,a
   3DB1 E0                 3884 	movx	a,@dptr
   3DB2 90 A0 10           3885 	mov	dptr,#_DTX_REG2
   3DB5 F0                 3886 	movx	@dptr,a
                           3887 ;	../../shared/src/spd_ctrl.c:402: reg_INIT_TXFOFFS_RING_9_0_b1		= ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring+1];
   3DB6 EC                 3888 	mov	a,r4
   3DB7 24 C0              3889 	add	a,#_ring_speedtable
   3DB9 FB                 3890 	mov	r3,a
   3DBA ED                 3891 	mov	a,r5
   3DBB 34 E1              3892 	addc	a,#(_ring_speedtable >> 8)
   3DBD FE                 3893 	mov	r6,a
   3DBE E5 18              3894 	mov	a,_bp
   3DC0 24 03              3895 	add	a,#0x03
   3DC2 F8                 3896 	mov	r0,a
   3DC3 E6                 3897 	mov	a,@r0
   3DC4 2B                 3898 	add	a,r3
   3DC5 FB                 3899 	mov	r3,a
   3DC6 08                 3900 	inc	r0
   3DC7 E6                 3901 	mov	a,@r0
   3DC8 3E                 3902 	addc	a,r6
   3DC9 FE                 3903 	mov	r6,a
   3DCA EA                 3904 	mov	a,r2
   3DCB 2B                 3905 	add	a,r3
   3DCC FB                 3906 	mov	r3,a
   3DCD E4                 3907 	clr	a
   3DCE 3E                 3908 	addc	a,r6
   3DCF FE                 3909 	mov	r6,a
   3DD0 74 14              3910 	mov	a,#0x14
   3DD2 2B                 3911 	add	a,r3
   3DD3 F5 82              3912 	mov	dpl,a
   3DD5 E4                 3913 	clr	a
   3DD6 3E                 3914 	addc	a,r6
   3DD7 F5 83              3915 	mov	dph,a
   3DD9 E0                 3916 	movx	a,@dptr
   3DDA FB                 3917 	mov	r3,a
   3DDB 90 A0 11           3918 	mov	dptr,#(_DTX_REG2 + 0x0001)
   3DDE 54 03              3919 	anl	a,#0x03
   3DE0 F5 F0              3920 	mov	b,a
   3DE2 E0                 3921 	movx	a,@dptr
   3DE3 54 FC              3922 	anl	a,#0xfc
   3DE5 45 F0              3923 	orl	a,b
   3DE7 F0                 3924 	movx	@dptr,a
   3DE8                    3925 00108$:
                           3926 ;	../../shared/src/spd_ctrl.c:406: cmx_G_INTPI_RING_7_0				= ring_speedtable[ck1g][fbck][rate][spdoft_intpi_ring];
   3DE8 EC                 3927 	mov	a,r4
   3DE9 24 C0              3928 	add	a,#_ring_speedtable
   3DEB FB                 3929 	mov	r3,a
   3DEC ED                 3930 	mov	a,r5
   3DED 34 E1              3931 	addc	a,#(_ring_speedtable >> 8)
   3DEF FE                 3932 	mov	r6,a
   3DF0 E5 18              3933 	mov	a,_bp
   3DF2 24 03              3934 	add	a,#0x03
   3DF4 F8                 3935 	mov	r0,a
   3DF5 E6                 3936 	mov	a,@r0
   3DF6 2B                 3937 	add	a,r3
   3DF7 FB                 3938 	mov	r3,a
   3DF8 08                 3939 	inc	r0
   3DF9 E6                 3940 	mov	a,@r0
   3DFA 3E                 3941 	addc	a,r6
   3DFB FE                 3942 	mov	r6,a
   3DFC EA                 3943 	mov	a,r2
   3DFD 2B                 3944 	add	a,r3
   3DFE FB                 3945 	mov	r3,a
   3DFF E4                 3946 	clr	a
   3E00 3E                 3947 	addc	a,r6
   3E01 FE                 3948 	mov	r6,a
   3E02 74 0D              3949 	mov	a,#0x0D
   3E04 2B                 3950 	add	a,r3
   3E05 F5 82              3951 	mov	dpl,a
   3E07 E4                 3952 	clr	a
   3E08 3E                 3953 	addc	a,r6
   3E09 F5 83              3954 	mov	dph,a
   3E0B E0                 3955 	movx	a,@dptr
   3E0C 90 E6 57           3956 	mov	dptr,#(_CAL_DATA1 + 0x0003)
   3E0F F0                 3957 	movx	@dptr,a
                           3958 ;	../../shared/src/spd_ctrl.c:407: reg_INTPI_LCPLL_3_0 = cmx_G_INTPI_LCPLL_7_0;
   3E10 90 E6 56           3959 	mov	dptr,#(_CAL_DATA1 + 0x0002)
   3E13 E0                 3960 	movx	a,@dptr
   3E14 90 82 0C           3961 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   3E17 C4                 3962 	swap	a
   3E18 54 F0              3963 	anl	a,#(0xf0&0xf0)
   3E1A F5 F0              3964 	mov	b,a
   3E1C E0                 3965 	movx	a,@dptr
   3E1D 54 0F              3966 	anl	a,#0x0f
   3E1F 45 F0              3967 	orl	a,b
   3E21 F0                 3968 	movx	@dptr,a
                           3969 ;	../../shared/src/spd_ctrl.c:408: reg_INTPI_RING_3_0 = cmx_G_INTPI_RING_7_0;
   3E22 90 E6 57           3970 	mov	dptr,#(_CAL_DATA1 + 0x0003)
   3E25 E0                 3971 	movx	a,@dptr
   3E26 90 82 0C           3972 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_131
   3E29 54 0F              3973 	anl	a,#0x0f
   3E2B F5 F0              3974 	mov	b,a
   3E2D E0                 3975 	movx	a,@dptr
   3E2E 54 F0              3976 	anl	a,#0xf0
   3E30 45 F0              3977 	orl	a,b
   3E32 F0                 3978 	movx	@dptr,a
                           3979 ;	../../shared/src/spd_ctrl.c:409: reg_TX_INTPR_RING_1_0				= ring_speedtable[ck1g][fbck][rate][spdoft_tx_intpr_ring];
   3E33 EC                 3980 	mov	a,r4
   3E34 24 C0              3981 	add	a,#_ring_speedtable
   3E36 FB                 3982 	mov	r3,a
   3E37 ED                 3983 	mov	a,r5
   3E38 34 E1              3984 	addc	a,#(_ring_speedtable >> 8)
   3E3A FE                 3985 	mov	r6,a
   3E3B E5 18              3986 	mov	a,_bp
   3E3D 24 03              3987 	add	a,#0x03
   3E3F F8                 3988 	mov	r0,a
   3E40 E6                 3989 	mov	a,@r0
   3E41 2B                 3990 	add	a,r3
   3E42 FB                 3991 	mov	r3,a
   3E43 08                 3992 	inc	r0
   3E44 E6                 3993 	mov	a,@r0
   3E45 3E                 3994 	addc	a,r6
   3E46 FE                 3995 	mov	r6,a
   3E47 EA                 3996 	mov	a,r2
   3E48 2B                 3997 	add	a,r3
   3E49 FB                 3998 	mov	r3,a
   3E4A E4                 3999 	clr	a
   3E4B 3E                 4000 	addc	a,r6
   3E4C FE                 4001 	mov	r6,a
   3E4D 74 0E              4002 	mov	a,#0x0E
   3E4F 2B                 4003 	add	a,r3
   3E50 F5 82              4004 	mov	dpl,a
   3E52 E4                 4005 	clr	a
   3E53 3E                 4006 	addc	a,r6
   3E54 F5 83              4007 	mov	dph,a
   3E56 E0                 4008 	movx	a,@dptr
   3E57 90 83 10           4009 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   3E5A C4                 4010 	swap	a
   3E5B 54 30              4011 	anl	a,#(0xf0&0x30)
   3E5D F5 F0              4012 	mov	b,a
   3E5F E0                 4013 	movx	a,@dptr
   3E60 54 CF              4014 	anl	a,#0xcf
   3E62 45 F0              4015 	orl	a,b
   3E64 F0                 4016 	movx	@dptr,a
                           4017 ;	../../shared/src/spd_ctrl.c:417: reg_ICP_RING_3_0				= ring_speedtable[ck1g][fbck][rate][spdoft_icp_ring];
   3E65 EC                 4018 	mov	a,r4
   3E66 24 C0              4019 	add	a,#_ring_speedtable
   3E68 FB                 4020 	mov	r3,a
   3E69 ED                 4021 	mov	a,r5
   3E6A 34 E1              4022 	addc	a,#(_ring_speedtable >> 8)
   3E6C FE                 4023 	mov	r6,a
   3E6D E5 18              4024 	mov	a,_bp
   3E6F 24 03              4025 	add	a,#0x03
   3E71 F8                 4026 	mov	r0,a
   3E72 E6                 4027 	mov	a,@r0
   3E73 2B                 4028 	add	a,r3
   3E74 FB                 4029 	mov	r3,a
   3E75 08                 4030 	inc	r0
   3E76 E6                 4031 	mov	a,@r0
   3E77 3E                 4032 	addc	a,r6
   3E78 FE                 4033 	mov	r6,a
   3E79 EA                 4034 	mov	a,r2
   3E7A 2B                 4035 	add	a,r3
   3E7B FB                 4036 	mov	r3,a
   3E7C E4                 4037 	clr	a
   3E7D 3E                 4038 	addc	a,r6
   3E7E FE                 4039 	mov	r6,a
   3E7F 74 08              4040 	mov	a,#0x08
   3E81 2B                 4041 	add	a,r3
   3E82 F5 82              4042 	mov	dpl,a
   3E84 E4                 4043 	clr	a
   3E85 3E                 4044 	addc	a,r6
   3E86 F5 83              4045 	mov	dph,a
   3E88 E0                 4046 	movx	a,@dptr
   3E89 90 82 F8           4047 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_190
   3E8C C4                 4048 	swap	a
   3E8D 54 F0              4049 	anl	a,#(0xf0&0xf0)
   3E8F F5 F0              4050 	mov	b,a
   3E91 E0                 4051 	movx	a,@dptr
   3E92 54 0F              4052 	anl	a,#0x0f
   3E94 45 F0              4053 	orl	a,b
   3E96 F0                 4054 	movx	@dptr,a
                           4055 ;	../../shared/src/spd_ctrl.c:418: reg_PLL_BAND_SEL_RING				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_band_sel_ring];
   3E97 EC                 4056 	mov	a,r4
   3E98 24 C0              4057 	add	a,#_ring_speedtable
   3E9A FB                 4058 	mov	r3,a
   3E9B ED                 4059 	mov	a,r5
   3E9C 34 E1              4060 	addc	a,#(_ring_speedtable >> 8)
   3E9E FE                 4061 	mov	r6,a
   3E9F E5 18              4062 	mov	a,_bp
   3EA1 24 03              4063 	add	a,#0x03
   3EA3 F8                 4064 	mov	r0,a
   3EA4 E6                 4065 	mov	a,@r0
   3EA5 2B                 4066 	add	a,r3
   3EA6 FB                 4067 	mov	r3,a
   3EA7 08                 4068 	inc	r0
   3EA8 E6                 4069 	mov	a,@r0
   3EA9 3E                 4070 	addc	a,r6
   3EAA FE                 4071 	mov	r6,a
   3EAB EA                 4072 	mov	a,r2
   3EAC 2B                 4073 	add	a,r3
   3EAD FB                 4074 	mov	r3,a
   3EAE E4                 4075 	clr	a
   3EAF 3E                 4076 	addc	a,r6
   3EB0 FE                 4077 	mov	r6,a
   3EB1 74 0F              4078 	mov	a,#0x0F
   3EB3 2B                 4079 	add	a,r3
   3EB4 F5 82              4080 	mov	dpl,a
   3EB6 E4                 4081 	clr	a
   3EB7 3E                 4082 	addc	a,r6
   3EB8 F5 83              4083 	mov	dph,a
   3EBA E0                 4084 	movx	a,@dptr
   3EBB 90 83 00           4085 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   3EBE 13                 4086 	rrc	a
   3EBF E0                 4087 	movx	a,@dptr
   3EC0 92 E2              4088 	mov	acc.2,c
   3EC2 F0                 4089 	movx	@dptr,a
                           4090 ;	../../shared/src/spd_ctrl.c:419: reg_PLL_LPF_C1_SEL_RING_1_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_c1_sel_ring]; 
   3EC3 EC                 4091 	mov	a,r4
   3EC4 24 C0              4092 	add	a,#_ring_speedtable
   3EC6 FB                 4093 	mov	r3,a
   3EC7 ED                 4094 	mov	a,r5
   3EC8 34 E1              4095 	addc	a,#(_ring_speedtable >> 8)
   3ECA FE                 4096 	mov	r6,a
   3ECB E5 18              4097 	mov	a,_bp
   3ECD 24 03              4098 	add	a,#0x03
   3ECF F8                 4099 	mov	r0,a
   3ED0 E6                 4100 	mov	a,@r0
   3ED1 2B                 4101 	add	a,r3
   3ED2 FB                 4102 	mov	r3,a
   3ED3 08                 4103 	inc	r0
   3ED4 E6                 4104 	mov	a,@r0
   3ED5 3E                 4105 	addc	a,r6
   3ED6 FE                 4106 	mov	r6,a
   3ED7 EA                 4107 	mov	a,r2
   3ED8 2B                 4108 	add	a,r3
   3ED9 FB                 4109 	mov	r3,a
   3EDA E4                 4110 	clr	a
   3EDB 3E                 4111 	addc	a,r6
   3EDC FE                 4112 	mov	r6,a
   3EDD 74 10              4113 	mov	a,#0x10
   3EDF 2B                 4114 	add	a,r3
   3EE0 F5 82              4115 	mov	dpl,a
   3EE2 E4                 4116 	clr	a
   3EE3 3E                 4117 	addc	a,r6
   3EE4 F5 83              4118 	mov	dph,a
   3EE6 E0                 4119 	movx	a,@dptr
   3EE7 90 82 FC           4120 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_191
   3EEA 03                 4121 	rr	a
   3EEB 03                 4122 	rr	a
   3EEC 54 C0              4123 	anl	a,#(0xc0&0xc0)
   3EEE F5 F0              4124 	mov	b,a
   3EF0 E0                 4125 	movx	a,@dptr
   3EF1 54 3F              4126 	anl	a,#0x3f
   3EF3 45 F0              4127 	orl	a,b
   3EF5 F0                 4128 	movx	@dptr,a
                           4129 ;	../../shared/src/spd_ctrl.c:420: reg_PLL_LPF_C2_SEL_RING_1_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_c2_sel_ring]; 
   3EF6 EC                 4130 	mov	a,r4
   3EF7 24 C0              4131 	add	a,#_ring_speedtable
   3EF9 FB                 4132 	mov	r3,a
   3EFA ED                 4133 	mov	a,r5
   3EFB 34 E1              4134 	addc	a,#(_ring_speedtable >> 8)
   3EFD FE                 4135 	mov	r6,a
   3EFE E5 18              4136 	mov	a,_bp
   3F00 24 03              4137 	add	a,#0x03
   3F02 F8                 4138 	mov	r0,a
   3F03 E6                 4139 	mov	a,@r0
   3F04 2B                 4140 	add	a,r3
   3F05 FB                 4141 	mov	r3,a
   3F06 08                 4142 	inc	r0
   3F07 E6                 4143 	mov	a,@r0
   3F08 3E                 4144 	addc	a,r6
   3F09 FE                 4145 	mov	r6,a
   3F0A EA                 4146 	mov	a,r2
   3F0B 2B                 4147 	add	a,r3
   3F0C FB                 4148 	mov	r3,a
   3F0D E4                 4149 	clr	a
   3F0E 3E                 4150 	addc	a,r6
   3F0F FE                 4151 	mov	r6,a
   3F10 74 11              4152 	mov	a,#0x11
   3F12 2B                 4153 	add	a,r3
   3F13 F5 82              4154 	mov	dpl,a
   3F15 E4                 4155 	clr	a
   3F16 3E                 4156 	addc	a,r6
   3F17 F5 83              4157 	mov	dph,a
   3F19 E0                 4158 	movx	a,@dptr
   3F1A 90 82 FC           4159 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_191
   3F1D C4                 4160 	swap	a
   3F1E 54 30              4161 	anl	a,#(0xf0&0x30)
   3F20 F5 F0              4162 	mov	b,a
   3F22 E0                 4163 	movx	a,@dptr
   3F23 54 CF              4164 	anl	a,#0xcf
   3F25 45 F0              4165 	orl	a,b
   3F27 F0                 4166 	movx	@dptr,a
                           4167 ;	../../shared/src/spd_ctrl.c:421: reg_PLL_LPF_R1_SEL_RING_2_0			= ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_r1_sel_ring]; 
   3F28 EC                 4168 	mov	a,r4
   3F29 24 C0              4169 	add	a,#_ring_speedtable
   3F2B FB                 4170 	mov	r3,a
   3F2C ED                 4171 	mov	a,r5
   3F2D 34 E1              4172 	addc	a,#(_ring_speedtable >> 8)
   3F2F FE                 4173 	mov	r6,a
   3F30 E5 18              4174 	mov	a,_bp
   3F32 24 03              4175 	add	a,#0x03
   3F34 F8                 4176 	mov	r0,a
   3F35 E6                 4177 	mov	a,@r0
   3F36 2B                 4178 	add	a,r3
   3F37 FB                 4179 	mov	r3,a
   3F38 08                 4180 	inc	r0
   3F39 E6                 4181 	mov	a,@r0
   3F3A 3E                 4182 	addc	a,r6
   3F3B FE                 4183 	mov	r6,a
   3F3C EA                 4184 	mov	a,r2
   3F3D 2B                 4185 	add	a,r3
   3F3E FB                 4186 	mov	r3,a
   3F3F E4                 4187 	clr	a
   3F40 3E                 4188 	addc	a,r6
   3F41 FE                 4189 	mov	r6,a
   3F42 74 12              4190 	mov	a,#0x12
   3F44 2B                 4191 	add	a,r3
   3F45 F5 82              4192 	mov	dpl,a
   3F47 E4                 4193 	clr	a
   3F48 3E                 4194 	addc	a,r6
   3F49 F5 83              4195 	mov	dph,a
   3F4B E0                 4196 	movx	a,@dptr
   3F4C 90 82 F8           4197 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_190
   3F4F 25 E0              4198 	add	a,acc
   3F51 54 0E              4199 	anl	a,#0x0e
   3F53 F5 F0              4200 	mov	b,a
   3F55 E0                 4201 	movx	a,@dptr
   3F56 54 F1              4202 	anl	a,#0xf1
   3F58 45 F0              4203 	orl	a,b
   3F5A F0                 4204 	movx	@dptr,a
                           4205 ;	../../shared/src/spd_ctrl.c:423: temp			= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring+1]; 	temp<<=8;
   3F5B EC                 4206 	mov	a,r4
   3F5C 24 C0              4207 	add	a,#_ring_speedtable
   3F5E FB                 4208 	mov	r3,a
   3F5F ED                 4209 	mov	a,r5
   3F60 34 E1              4210 	addc	a,#(_ring_speedtable >> 8)
   3F62 FE                 4211 	mov	r6,a
   3F63 E5 18              4212 	mov	a,_bp
   3F65 24 03              4213 	add	a,#0x03
   3F67 F8                 4214 	mov	r0,a
   3F68 E6                 4215 	mov	a,@r0
   3F69 2B                 4216 	add	a,r3
   3F6A FB                 4217 	mov	r3,a
   3F6B 08                 4218 	inc	r0
   3F6C E6                 4219 	mov	a,@r0
   3F6D 3E                 4220 	addc	a,r6
   3F6E FE                 4221 	mov	r6,a
   3F6F EA                 4222 	mov	a,r2
   3F70 2B                 4223 	add	a,r3
   3F71 FB                 4224 	mov	r3,a
   3F72 E4                 4225 	clr	a
   3F73 3E                 4226 	addc	a,r6
   3F74 FE                 4227 	mov	r6,a
   3F75 74 0A              4228 	mov	a,#0x0A
   3F77 2B                 4229 	add	a,r3
   3F78 F5 82              4230 	mov	dpl,a
   3F7A E4                 4231 	clr	a
   3F7B 3E                 4232 	addc	a,r6
   3F7C F5 83              4233 	mov	dph,a
   3F7E E0                 4234 	movx	a,@dptr
   3F7F FB                 4235 	mov	r3,a
   3F80 A8 18              4236 	mov	r0,_bp
   3F82 08                 4237 	inc	r0
   3F83 A6 03              4238 	mov	@r0,ar3
   3F85 08                 4239 	inc	r0
   3F86 76 00              4240 	mov	@r0,#0x00
   3F88 A8 18              4241 	mov	r0,_bp
   3F8A 08                 4242 	inc	r0
   3F8B E6                 4243 	mov	a,@r0
   3F8C 08                 4244 	inc	r0
   3F8D F6                 4245 	mov	@r0,a
   3F8E 18                 4246 	dec	r0
   3F8F 76 00              4247 	mov	@r0,#0x00
                           4248 ;	../../shared/src/spd_ctrl.c:424: temp			+= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring];
   3F91 EC                 4249 	mov	a,r4
   3F92 24 C0              4250 	add	a,#_ring_speedtable
   3F94 FF                 4251 	mov	r7,a
   3F95 ED                 4252 	mov	a,r5
   3F96 34 E1              4253 	addc	a,#(_ring_speedtable >> 8)
   3F98 FB                 4254 	mov	r3,a
   3F99 E5 18              4255 	mov	a,_bp
   3F9B 24 03              4256 	add	a,#0x03
   3F9D F8                 4257 	mov	r0,a
   3F9E E6                 4258 	mov	a,@r0
   3F9F 2F                 4259 	add	a,r7
   3FA0 FF                 4260 	mov	r7,a
   3FA1 08                 4261 	inc	r0
   3FA2 E6                 4262 	mov	a,@r0
   3FA3 3B                 4263 	addc	a,r3
   3FA4 FB                 4264 	mov	r3,a
   3FA5 EA                 4265 	mov	a,r2
   3FA6 2F                 4266 	add	a,r7
   3FA7 FF                 4267 	mov	r7,a
   3FA8 E4                 4268 	clr	a
   3FA9 3B                 4269 	addc	a,r3
   3FAA FB                 4270 	mov	r3,a
   3FAB 74 09              4271 	mov	a,#0x09
   3FAD 2F                 4272 	add	a,r7
   3FAE F5 82              4273 	mov	dpl,a
   3FB0 E4                 4274 	clr	a
   3FB1 3B                 4275 	addc	a,r3
   3FB2 F5 83              4276 	mov	dph,a
   3FB4 E0                 4277 	movx	a,@dptr
   3FB5 FB                 4278 	mov	r3,a
   3FB6 7E 00              4279 	mov	r6,#0x00
   3FB8 A8 18              4280 	mov	r0,_bp
   3FBA 08                 4281 	inc	r0
   3FBB EB                 4282 	mov	a,r3
   3FBC 26                 4283 	add	a,@r0
   3FBD F6                 4284 	mov	@r0,a
   3FBE EE                 4285 	mov	a,r6
   3FBF 08                 4286 	inc	r0
   3FC0 36                 4287 	addc	a,@r0
   3FC1 F6                 4288 	mov	@r0,a
                           4289 ;	../../shared/src/spd_ctrl.c:425: temp <<= FBC_RATIO;
   3FC2 90 E6 14           4290 	mov	dptr,#_CONTROL_CONFIG4
   3FC5 E0                 4291 	movx	a,@dptr
   3FC6 FB                 4292 	mov	r3,a
   3FC7 8B F0              4293 	mov	b,r3
   3FC9 05 F0              4294 	inc	b
   3FCB A8 18              4295 	mov	r0,_bp
   3FCD 08                 4296 	inc	r0
   3FCE 80 09              4297 	sjmp	00123$
   3FD0                    4298 00122$:
   3FD0 E6                 4299 	mov	a,@r0
   3FD1 25 E0              4300 	add	a,acc
   3FD3 F6                 4301 	mov	@r0,a
   3FD4 08                 4302 	inc	r0
   3FD5 E6                 4303 	mov	a,@r0
   3FD6 33                 4304 	rlc	a
   3FD7 F6                 4305 	mov	@r0,a
   3FD8 18                 4306 	dec	r0
   3FD9                    4307 00123$:
   3FD9 D5 F0 F4           4308 	djnz	b,00122$
                           4309 ;	../../shared/src/spd_ctrl.c:426: cmx_PLL_SPEED_THRESH_RING_15_0 = temp;
   3FDC 90 E6 18           4310 	mov	dptr,#_CONTROL_CONFIG5
   3FDF A8 18              4311 	mov	r0,_bp
   3FE1 08                 4312 	inc	r0
   3FE2 E6                 4313 	mov	a,@r0
   3FE3 F0                 4314 	movx	@dptr,a
   3FE4 A3                 4315 	inc	dptr
   3FE5 08                 4316 	inc	r0
   3FE6 E6                 4317 	mov	a,@r0
   3FE7 F0                 4318 	movx	@dptr,a
                           4319 ;	../../shared/src/spd_ctrl.c:433: reg_SSC_STEP_125PPM_RING_3_0		= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_125ppm_ring];
   3FE8 EC                 4320 	mov	a,r4
   3FE9 24 C0              4321 	add	a,#_ring_speedtable
   3FEB FB                 4322 	mov	r3,a
   3FEC ED                 4323 	mov	a,r5
   3FED 34 E1              4324 	addc	a,#(_ring_speedtable >> 8)
   3FEF FE                 4325 	mov	r6,a
   3FF0 E5 18              4326 	mov	a,_bp
   3FF2 24 03              4327 	add	a,#0x03
   3FF4 F8                 4328 	mov	r0,a
   3FF5 E6                 4329 	mov	a,@r0
   3FF6 2B                 4330 	add	a,r3
   3FF7 FB                 4331 	mov	r3,a
   3FF8 08                 4332 	inc	r0
   3FF9 E6                 4333 	mov	a,@r0
   3FFA 3E                 4334 	addc	a,r6
   3FFB FE                 4335 	mov	r6,a
   3FFC EA                 4336 	mov	a,r2
   3FFD 2B                 4337 	add	a,r3
   3FFE FB                 4338 	mov	r3,a
   3FFF E4                 4339 	clr	a
   4000 3E                 4340 	addc	a,r6
   4001 FE                 4341 	mov	r6,a
   4002 74 18              4342 	mov	a,#0x18
   4004 2B                 4343 	add	a,r3
   4005 F5 82              4344 	mov	dpl,a
   4007 E4                 4345 	clr	a
   4008 3E                 4346 	addc	a,r6
   4009 F5 83              4347 	mov	dph,a
   400B E0                 4348 	movx	a,@dptr
   400C 90 A0 0C           4349 	mov	dptr,#_DTX_REG1
   400F 54 0F              4350 	anl	a,#0x0f
   4011 F5 F0              4351 	mov	b,a
   4013 E0                 4352 	movx	a,@dptr
   4014 54 F0              4353 	anl	a,#0xf0
   4016 45 F0              4354 	orl	a,b
   4018 F0                 4355 	movx	@dptr,a
                           4356 ;	../../shared/src/spd_ctrl.c:434: reg_SSC_M_RING_12_0_b0			= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
   4019 EC                 4357 	mov	a,r4
   401A 24 C0              4358 	add	a,#_ring_speedtable
   401C FB                 4359 	mov	r3,a
   401D ED                 4360 	mov	a,r5
   401E 34 E1              4361 	addc	a,#(_ring_speedtable >> 8)
   4020 FE                 4362 	mov	r6,a
   4021 E5 18              4363 	mov	a,_bp
   4023 24 03              4364 	add	a,#0x03
   4025 F8                 4365 	mov	r0,a
   4026 E6                 4366 	mov	a,@r0
   4027 2B                 4367 	add	a,r3
   4028 FB                 4368 	mov	r3,a
   4029 08                 4369 	inc	r0
   402A E6                 4370 	mov	a,@r0
   402B 3E                 4371 	addc	a,r6
   402C FE                 4372 	mov	r6,a
   402D EA                 4373 	mov	a,r2
   402E 2B                 4374 	add	a,r3
   402F FB                 4375 	mov	r3,a
   4030 E4                 4376 	clr	a
   4031 3E                 4377 	addc	a,r6
   4032 FE                 4378 	mov	r6,a
   4033 74 19              4379 	mov	a,#0x19
   4035 2B                 4380 	add	a,r3
   4036 F5 82              4381 	mov	dpl,a
   4038 E4                 4382 	clr	a
   4039 3E                 4383 	addc	a,r6
   403A F5 83              4384 	mov	dph,a
   403C E0                 4385 	movx	a,@dptr
   403D 90 A0 16           4386 	mov	dptr,#(_DTX_REG3 + 0x0002)
   4040 F0                 4387 	movx	@dptr,a
                           4388 ;	../../shared/src/spd_ctrl.c:435: reg_SSC_M_RING_12_0_b1			= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];
   4041 EC                 4389 	mov	a,r4
   4042 24 C0              4390 	add	a,#_ring_speedtable
   4044 FC                 4391 	mov	r4,a
   4045 ED                 4392 	mov	a,r5
   4046 34 E1              4393 	addc	a,#(_ring_speedtable >> 8)
   4048 FD                 4394 	mov	r5,a
   4049 E5 18              4395 	mov	a,_bp
   404B 24 03              4396 	add	a,#0x03
   404D F8                 4397 	mov	r0,a
   404E E6                 4398 	mov	a,@r0
   404F 2C                 4399 	add	a,r4
   4050 FC                 4400 	mov	r4,a
   4051 08                 4401 	inc	r0
   4052 E6                 4402 	mov	a,@r0
   4053 3D                 4403 	addc	a,r5
   4054 FD                 4404 	mov	r5,a
   4055 EA                 4405 	mov	a,r2
   4056 2C                 4406 	add	a,r4
   4057 FA                 4407 	mov	r2,a
   4058 E4                 4408 	clr	a
   4059 3D                 4409 	addc	a,r5
   405A FB                 4410 	mov	r3,a
   405B 74 1A              4411 	mov	a,#0x1A
   405D 2A                 4412 	add	a,r2
   405E F5 82              4413 	mov	dpl,a
   4060 E4                 4414 	clr	a
   4061 3B                 4415 	addc	a,r3
   4062 F5 83              4416 	mov	dph,a
   4064 E0                 4417 	movx	a,@dptr
   4065 90 A0 17           4418 	mov	dptr,#(_DTX_REG3 + 0x0003)
   4068 54 1F              4419 	anl	a,#0x1f
   406A F5 F0              4420 	mov	b,a
   406C E0                 4421 	movx	a,@dptr
   406D 54 E0              4422 	anl	a,#0xe0
   406F 45 F0              4423 	orl	a,b
   4071 F0                 4424 	movx	@dptr,a
                           4425 ;	../../shared/src/spd_ctrl.c:438: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   4072 90 22 B4           4426 	mov	dptr,#_MCU_DEBUG0_LANE
   4075 74 39              4427 	mov	a,#0x39
   4077 F0                 4428 	movx	@dptr,a
   4078 85 18 81           4429 	mov	sp,_bp
   407B D0 18              4430 	pop	_bp
   407D 22                 4431 	ret
                           4432 ;------------------------------------------------------------
                           4433 ;Allocation info for local variables in function 'loadspeedtbl_gen'
                           4434 ;------------------------------------------------------------
                           4435 ;temp                      Allocated to registers r3 r4 
                           4436 ;gen                       Allocated to stack - offset 1
                           4437 ;------------------------------------------------------------
                           4438 ;	../../shared/src/spd_ctrl.c:455: void loadspeedtbl_gen(void) {
                           4439 ;	-----------------------------------------
                           4440 ;	 function loadspeedtbl_gen
                           4441 ;	-----------------------------------------
   407E                    4442 _loadspeedtbl_gen:
   407E C0 18              4443 	push	_bp
   4080 85 81 18           4444 	mov	_bp,sp
   4083 05 81              4445 	inc	sp
                           4446 ;	../../shared/src/spd_ctrl.c:460: gen = gen_tx;
   4085 90 66 15           4447 	mov	dptr,#_gen_tx
   4088 E0                 4448 	movx	a,@dptr
   4089 FA                 4449 	mov	r2,a
   408A A8 18              4450 	mov	r0,_bp
   408C 08                 4451 	inc	r0
   408D A6 02              4452 	mov	@r0,ar2
                           4453 ;	../../shared/src/spd_ctrl.c:472: if( gen_tx < 2) {
   408F BA 02 00           4454 	cjne	r2,#0x02,00211$
   4092                    4455 00211$:
   4092 50 17              4456 	jnc	00102$
                           4457 ;	../../shared/src/spd_ctrl.c:473: reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
   4094 90 20 37           4458 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   4097 E0                 4459 	movx	a,@dptr
   4098 54 7F              4460 	anl	a,#0x7f
   409A F0                 4461 	movx	@dptr,a
   409B 90 21 07           4462 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   409E E0                 4463 	movx	a,@dptr
   409F 54 7F              4464 	anl	a,#0x7f
   40A1 F0                 4465 	movx	@dptr,a
                           4466 ;	../../shared/src/spd_ctrl.c:475: reg_TX_DEEMPH_FM_REG_LANE = 0;
   40A2 90 20 0C           4467 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   40A5 E0                 4468 	movx	a,@dptr
   40A6 54 F7              4469 	anl	a,#0xf7
   40A8 F0                 4470 	movx	@dptr,a
   40A9 80 15              4471 	sjmp	00103$
   40AB                    4472 00102$:
                           4473 ;	../../shared/src/spd_ctrl.c:479: reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
   40AB 90 20 37           4474 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   40AE E0                 4475 	movx	a,@dptr
   40AF 44 80              4476 	orl	a,#0x80
   40B1 F0                 4477 	movx	@dptr,a
   40B2 90 21 07           4478 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   40B5 E0                 4479 	movx	a,@dptr
   40B6 44 80              4480 	orl	a,#0x80
   40B8 F0                 4481 	movx	@dptr,a
                           4482 ;	../../shared/src/spd_ctrl.c:481: reg_TX_DEEMPH_FM_REG_LANE = 1;
   40B9 90 20 0C           4483 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   40BC E0                 4484 	movx	a,@dptr
   40BD 44 08              4485 	orl	a,#0x08
   40BF F0                 4486 	movx	@dptr,a
   40C0                    4487 00103$:
                           4488 ;	../../shared/src/spd_ctrl.c:486: if(mcuid==master_mcu && !use_ring_pll && phy_mode==PCIE) {
   40C0 90 22 00           4489 	mov	dptr,#_MCU_CONTROL_LANE
   40C3 E0                 4490 	movx	a,@dptr
   40C4 FC                 4491 	mov	r4,a
   40C5 90 E6 50           4492 	mov	dptr,#_MCU_CONFIG
   40C8 E0                 4493 	movx	a,@dptr
   40C9 FD                 4494 	mov	r5,a
   40CA EC                 4495 	mov	a,r4
   40CB B5 05 20           4496 	cjne	a,ar5,00108$
   40CE 20 10 1D           4497 	jb	_use_ring_pll,00108$
   40D1 90 A3 16           4498 	mov	dptr,#(_SYSTEM + 0x0002)
   40D4 E0                 4499 	movx	a,@dptr
   40D5 54 07              4500 	anl	a,#0x07
   40D7 FC                 4501 	mov	r4,a
   40D8 BC 03 13           4502 	cjne	r4,#0x03,00108$
                           4503 ;	../../shared/src/spd_ctrl.c:488: if (gen_tx == 4)
   40DB BA 04 09           4504 	cjne	r2,#0x04,00105$
                           4505 ;	../../shared/src/spd_ctrl.c:489: reg_LCPLLCLK_DIV2_SEL = 1;
   40DE 90 83 3C           4506 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   40E1 E0                 4507 	movx	a,@dptr
   40E2 44 02              4508 	orl	a,#0x02
   40E4 F0                 4509 	movx	@dptr,a
   40E5 80 07              4510 	sjmp	00108$
   40E7                    4511 00105$:
                           4512 ;	../../shared/src/spd_ctrl.c:491: reg_LCPLLCLK_DIV2_SEL = 0;
   40E7 90 83 3C           4513 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   40EA E0                 4514 	movx	a,@dptr
   40EB 54 FD              4515 	anl	a,#0xfd
   40ED F0                 4516 	movx	@dptr,a
   40EE                    4517 00108$:
                           4518 ;	../../shared/src/spd_ctrl.c:497: gen_pll_rate = speedtable[gen][spdoft_pll_rate_sel_tx]; 
   40EE A8 18              4519 	mov	r0,_bp
   40F0 08                 4520 	inc	r0
   40F1 E6                 4521 	mov	a,@r0
   40F2 75 F0 50           4522 	mov	b,#0x50
   40F5 A4                 4523 	mul	ab
   40F6 FC                 4524 	mov	r4,a
   40F7 AD F0              4525 	mov	r5,b
   40F9 24 04              4526 	add	a,#_speedtable
   40FB F5 82              4527 	mov	dpl,a
   40FD ED                 4528 	mov	a,r5
   40FE 34 63              4529 	addc	a,#(_speedtable >> 8)
   4100 F5 83              4530 	mov	dph,a
   4102 E0                 4531 	movx	a,@dptr
   4103 FE                 4532 	mov	r6,a
   4104 90 67 8C           4533 	mov	dptr,#_gen_pll_rate
   4107 F0                 4534 	movx	@dptr,a
                           4535 ;	../../shared/src/spd_ctrl.c:498: if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
   4108 74 01              4536 	mov	a,#0x01
   410A B5 06 00           4537 	cjne	a,ar6,00220$
   410D                    4538 00220$:
   410D 40 0A              4539 	jc	00111$
   410F 90 A3 16           4540 	mov	dptr,#(_SYSTEM + 0x0002)
   4112 E0                 4541 	movx	a,@dptr
   4113 54 07              4542 	anl	a,#0x07
   4115 FF                 4543 	mov	r7,a
   4116 BF 04 04           4544 	cjne	r7,#0x04,00112$
   4119                    4545 00111$:
   4119 C2 0F              4546 	clr	_tx_pll_rate
   411B 80 05              4547 	sjmp	00113$
   411D                    4548 00112$:
                           4549 ;	../../shared/src/spd_ctrl.c:499: else tx_pll_rate = gen_pll_rate;
   411D EE                 4550 	mov	a,r6
   411E 24 FF              4551 	add	a,#0xff
   4120 92 0F              4552 	mov	_tx_pll_rate,c
   4122                    4553 00113$:
                           4554 ;	../../shared/src/spd_ctrl.c:500: use_ring_pll = speedtable[gen][spdoft_tx_ck_sel_lane]; 
   4122 EC                 4555 	mov	a,r4
   4123 24 04              4556 	add	a,#_speedtable
   4125 FF                 4557 	mov	r7,a
   4126 ED                 4558 	mov	a,r5
   4127 34 63              4559 	addc	a,#(_speedtable >> 8)
   4129 FB                 4560 	mov	r3,a
   412A 8F 82              4561 	mov	dpl,r7
   412C 8B 83              4562 	mov	dph,r3
   412E A3                 4563 	inc	dptr
   412F E0                 4564 	movx	a,@dptr
   4130 24 FF              4565 	add	a,#0xff
   4132 92 10              4566 	mov	_use_ring_pll,c
                           4567 ;	../../shared/src/spd_ctrl.c:502: reg_MCU_DEBUG0_LANE_7_0 = 0x33;
   4134 90 22 B4           4568 	mov	dptr,#_MCU_DEBUG0_LANE
   4137 74 33              4569 	mov	a,#0x33
   4139 F0                 4570 	movx	@dptr,a
                           4571 ;	../../shared/src/spd_ctrl.c:503: reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
   413A 90 22 B5           4572 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   413D EA                 4573 	mov	a,r2
   413E F0                 4574 	movx	@dptr,a
                           4575 ;	../../shared/src/spd_ctrl.c:504: reg_MCU_DEBUG2_LANE_7_0 = gen;
   413F 90 22 B6           4576 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   4142 A8 18              4577 	mov	r0,_bp
   4144 08                 4578 	inc	r0
   4145 E6                 4579 	mov	a,@r0
   4146 F0                 4580 	movx	@dptr,a
                           4581 ;	../../shared/src/spd_ctrl.c:505: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   4147 90 22 B7           4582 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   414A EE                 4583 	mov	a,r6
   414B F0                 4584 	movx	@dptr,a
                           4585 ;	../../shared/src/spd_ctrl.c:506: reg_MCU_DEBUG4_LANE_7_0 = max_gen;
   414C 90 63 00           4586 	mov	dptr,#_max_gen
   414F E0                 4587 	movx	a,@dptr
   4150 90 22 B8           4588 	mov	dptr,#_MCU_DEBUG1_LANE
   4153 F0                 4589 	movx	@dptr,a
                           4590 ;	../../shared/src/spd_ctrl.c:507: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   4154 A2 12              4591 	mov	c,_ring_pll_enabled
   4156 E4                 4592 	clr	a
   4157 33                 4593 	rlc	a
   4158 90 22 B9           4594 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   415B F0                 4595 	movx	@dptr,a
                           4596 ;	../../shared/src/spd_ctrl.c:508: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   415C A2 10              4597 	mov	c,_use_ring_pll
   415E E4                 4598 	clr	a
   415F 33                 4599 	rlc	a
   4160 90 22 BA           4600 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   4163 F0                 4601 	movx	@dptr,a
                           4602 ;	../../shared/src/spd_ctrl.c:509: reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
   4164 A2 0F              4603 	mov	c,_tx_pll_rate
   4166 E4                 4604 	clr	a
   4167 33                 4605 	rlc	a
   4168 90 22 BB           4606 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0003)
   416B F0                 4607 	movx	@dptr,a
                           4608 ;	../../shared/src/spd_ctrl.c:510: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   416C 90 66 24           4609 	mov	dptr,#_ring_lane_sel
   416F E0                 4610 	movx	a,@dptr
   4170 FA                 4611 	mov	r2,a
   4171 90 22 BC           4612 	mov	dptr,#_MCU_DEBUG2_LANE
   4174 F0                 4613 	movx	@dptr,a
                           4614 ;	../../shared/src/spd_ctrl.c:513: if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
   4175 EC                 4615 	mov	a,r4
   4176 24 04              4616 	add	a,#_speedtable
   4178 FB                 4617 	mov	r3,a
   4179 ED                 4618 	mov	a,r5
   417A 34 63              4619 	addc	a,#(_speedtable >> 8)
   417C FE                 4620 	mov	r6,a
   417D 74 35              4621 	mov	a,#0x35
   417F 2B                 4622 	add	a,r3
   4180 FB                 4623 	mov	r3,a
   4181 E4                 4624 	clr	a
   4182 3E                 4625 	addc	a,r6
   4183 FE                 4626 	mov	r6,a
   4184 8B 82              4627 	mov	dpl,r3
   4186 8E 83              4628 	mov	dph,r6
   4188 E0                 4629 	movx	a,@dptr
   4189 60 07              4630 	jz	00116$
   418B 90 00 60           4631 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   418E E0                 4632 	movx	a,@dptr
   418F 44 20              4633 	orl	a,#0x20
   4191 F0                 4634 	movx	@dptr,a
   4192                    4635 00116$:
                           4636 ;	../../shared/src/spd_ctrl.c:514: if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE = 1;
   4192 EC                 4637 	mov	a,r4
   4193 24 04              4638 	add	a,#_speedtable
   4195 FB                 4639 	mov	r3,a
   4196 ED                 4640 	mov	a,r5
   4197 34 63              4641 	addc	a,#(_speedtable >> 8)
   4199 FE                 4642 	mov	r6,a
   419A 74 33              4643 	mov	a,#0x33
   419C 2B                 4644 	add	a,r3
   419D FB                 4645 	mov	r3,a
   419E E4                 4646 	clr	a
   419F 3E                 4647 	addc	a,r6
   41A0 FE                 4648 	mov	r6,a
   41A1 8B 82              4649 	mov	dpl,r3
   41A3 8E 83              4650 	mov	dph,r6
   41A5 E0                 4651 	movx	a,@dptr
   41A6 60 07              4652 	jz	00118$
   41A8 90 00 60           4653 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   41AB E0                 4654 	movx	a,@dptr
   41AC 44 80              4655 	orl	a,#0x80
   41AE F0                 4656 	movx	@dptr,a
   41AF                    4657 00118$:
                           4658 ;	../../shared/src/spd_ctrl.c:515: if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE = 1;
   41AF EC                 4659 	mov	a,r4
   41B0 24 04              4660 	add	a,#_speedtable
   41B2 FB                 4661 	mov	r3,a
   41B3 ED                 4662 	mov	a,r5
   41B4 34 63              4663 	addc	a,#(_speedtable >> 8)
   41B6 FE                 4664 	mov	r6,a
   41B7 74 2F              4665 	mov	a,#0x2F
   41B9 2B                 4666 	add	a,r3
   41BA FB                 4667 	mov	r3,a
   41BB E4                 4668 	clr	a
   41BC 3E                 4669 	addc	a,r6
   41BD FE                 4670 	mov	r6,a
   41BE 8B 82              4671 	mov	dpl,r3
   41C0 8E 83              4672 	mov	dph,r6
   41C2 E0                 4673 	movx	a,@dptr
   41C3 60 07              4674 	jz	00120$
   41C5 90 00 5C           4675 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   41C8 E0                 4676 	movx	a,@dptr
   41C9 44 08              4677 	orl	a,#0x08
   41CB F0                 4678 	movx	@dptr,a
   41CC                    4679 00120$:
                           4680 ;	../../shared/src/spd_ctrl.c:516: if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) { 
   41CC 90 A3 16           4681 	mov	dptr,#(_SYSTEM + 0x0002)
   41CF E0                 4682 	movx	a,@dptr
   41D0 54 07              4683 	anl	a,#0x07
   41D2 70 12              4684 	jnz	00131$
   41D4 90 22 30           4685 	mov	dptr,#_MCU_STATUS0_LANE
   41D7 E0                 4686 	movx	a,@dptr
   41D8 FB                 4687 	mov	r3,a
   41D9 BB 19 0A           4688 	cjne	r3,#0x19,00131$
   41DC 90 66 2B           4689 	mov	dptr,#_pwrsq_on
   41DF E0                 4690 	movx	a,@dptr
   41E0 FB                 4691 	mov	r3,a
   41E1 70 03              4692 	jnz	00230$
   41E3 02 42 77           4693 	ljmp	00132$
   41E6                    4694 00230$:
   41E6                    4695 00131$:
                           4696 ;	../../shared/src/spd_ctrl.c:517: if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
   41E6 EC                 4697 	mov	a,r4
   41E7 24 04              4698 	add	a,#_speedtable
   41E9 FB                 4699 	mov	r3,a
   41EA ED                 4700 	mov	a,r5
   41EB 34 63              4701 	addc	a,#(_speedtable >> 8)
   41ED FE                 4702 	mov	r6,a
   41EE 74 36              4703 	mov	a,#0x36
   41F0 2B                 4704 	add	a,r3
   41F1 FB                 4705 	mov	r3,a
   41F2 E4                 4706 	clr	a
   41F3 3E                 4707 	addc	a,r6
   41F4 FE                 4708 	mov	r6,a
   41F5 8B 82              4709 	mov	dpl,r3
   41F7 8E 83              4710 	mov	dph,r6
   41F9 E0                 4711 	movx	a,@dptr
   41FA 60 07              4712 	jz	00122$
   41FC 90 00 60           4713 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   41FF E0                 4714 	movx	a,@dptr
   4200 44 10              4715 	orl	a,#0x10
   4202 F0                 4716 	movx	@dptr,a
   4203                    4717 00122$:
                           4718 ;	../../shared/src/spd_ctrl.c:518: if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
   4203 EC                 4719 	mov	a,r4
   4204 24 04              4720 	add	a,#_speedtable
   4206 FB                 4721 	mov	r3,a
   4207 ED                 4722 	mov	a,r5
   4208 34 63              4723 	addc	a,#(_speedtable >> 8)
   420A FE                 4724 	mov	r6,a
   420B 74 34              4725 	mov	a,#0x34
   420D 2B                 4726 	add	a,r3
   420E FB                 4727 	mov	r3,a
   420F E4                 4728 	clr	a
   4210 3E                 4729 	addc	a,r6
   4211 FE                 4730 	mov	r6,a
   4212 8B 82              4731 	mov	dpl,r3
   4214 8E 83              4732 	mov	dph,r6
   4216 E0                 4733 	movx	a,@dptr
   4217 60 07              4734 	jz	00124$
   4219 90 00 60           4735 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   421C E0                 4736 	movx	a,@dptr
   421D 44 40              4737 	orl	a,#0x40
   421F F0                 4738 	movx	@dptr,a
   4220                    4739 00124$:
                           4740 ;	../../shared/src/spd_ctrl.c:519: if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE = 1;
   4220 EC                 4741 	mov	a,r4
   4221 24 04              4742 	add	a,#_speedtable
   4223 FB                 4743 	mov	r3,a
   4224 ED                 4744 	mov	a,r5
   4225 34 63              4745 	addc	a,#(_speedtable >> 8)
   4227 FE                 4746 	mov	r6,a
   4228 74 32              4747 	mov	a,#0x32
   422A 2B                 4748 	add	a,r3
   422B FB                 4749 	mov	r3,a
   422C E4                 4750 	clr	a
   422D 3E                 4751 	addc	a,r6
   422E FE                 4752 	mov	r6,a
   422F 8B 82              4753 	mov	dpl,r3
   4231 8E 83              4754 	mov	dph,r6
   4233 E0                 4755 	movx	a,@dptr
   4234 60 07              4756 	jz	00126$
   4236 90 00 5C           4757 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4239 E0                 4758 	movx	a,@dptr
   423A 44 01              4759 	orl	a,#0x01
   423C F0                 4760 	movx	@dptr,a
   423D                    4761 00126$:
                           4762 ;	../../shared/src/spd_ctrl.c:520: if(speedtable[gen][spdoft_pu_f1n_d_e_lane]) reg_PU_F1N_D_E_LANE = 1;
   423D EC                 4763 	mov	a,r4
   423E 24 04              4764 	add	a,#_speedtable
   4240 FB                 4765 	mov	r3,a
   4241 ED                 4766 	mov	a,r5
   4242 34 63              4767 	addc	a,#(_speedtable >> 8)
   4244 FE                 4768 	mov	r6,a
   4245 74 30              4769 	mov	a,#0x30
   4247 2B                 4770 	add	a,r3
   4248 FB                 4771 	mov	r3,a
   4249 E4                 4772 	clr	a
   424A 3E                 4773 	addc	a,r6
   424B FE                 4774 	mov	r6,a
   424C 8B 82              4775 	mov	dpl,r3
   424E 8E 83              4776 	mov	dph,r6
   4250 E0                 4777 	movx	a,@dptr
   4251 60 07              4778 	jz	00128$
   4253 90 00 5C           4779 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4256 E0                 4780 	movx	a,@dptr
   4257 44 04              4781 	orl	a,#0x04
   4259 F0                 4782 	movx	@dptr,a
   425A                    4783 00128$:
                           4784 ;	../../shared/src/spd_ctrl.c:521: if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE = 1;
   425A EC                 4785 	mov	a,r4
   425B 24 04              4786 	add	a,#_speedtable
   425D FB                 4787 	mov	r3,a
   425E ED                 4788 	mov	a,r5
   425F 34 63              4789 	addc	a,#(_speedtable >> 8)
   4261 FE                 4790 	mov	r6,a
   4262 74 31              4791 	mov	a,#0x31
   4264 2B                 4792 	add	a,r3
   4265 FB                 4793 	mov	r3,a
   4266 E4                 4794 	clr	a
   4267 3E                 4795 	addc	a,r6
   4268 FE                 4796 	mov	r6,a
   4269 8B 82              4797 	mov	dpl,r3
   426B 8E 83              4798 	mov	dph,r6
   426D E0                 4799 	movx	a,@dptr
   426E 60 07              4800 	jz	00132$
   4270 90 00 5C           4801 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4273 E0                 4802 	movx	a,@dptr
   4274 44 02              4803 	orl	a,#0x02
   4276 F0                 4804 	movx	@dptr,a
   4277                    4805 00132$:
                           4806 ;	../../shared/src/spd_ctrl.c:525: reg_TX_SPEED_DIV_LANE_2_0		= speedtable[gen][spdoft_tx_speed_div_lane]; 
   4277 EC                 4807 	mov	a,r4
   4278 24 04              4808 	add	a,#_speedtable
   427A FB                 4809 	mov	r3,a
   427B ED                 4810 	mov	a,r5
   427C 34 63              4811 	addc	a,#(_speedtable >> 8)
   427E FE                 4812 	mov	r6,a
   427F 8B 82              4813 	mov	dpl,r3
   4281 8E 83              4814 	mov	dph,r6
   4283 A3                 4815 	inc	dptr
   4284 A3                 4816 	inc	dptr
   4285 A3                 4817 	inc	dptr
   4286 E0                 4818 	movx	a,@dptr
   4287 90 02 58           4819 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   428A 54 07              4820 	anl	a,#0x07
   428C F5 F0              4821 	mov	b,a
   428E E0                 4822 	movx	a,@dptr
   428F 54 F8              4823 	anl	a,#0xf8
   4291 45 F0              4824 	orl	a,b
   4293 F0                 4825 	movx	@dptr,a
                           4826 ;	../../shared/src/spd_ctrl.c:526: reg_TXSPEED_DIV_LANE_2_0 		= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use
   4294 EC                 4827 	mov	a,r4
   4295 24 04              4828 	add	a,#_speedtable
   4297 FB                 4829 	mov	r3,a
   4298 ED                 4830 	mov	a,r5
   4299 34 63              4831 	addc	a,#(_speedtable >> 8)
   429B FE                 4832 	mov	r6,a
   429C 8B 82              4833 	mov	dpl,r3
   429E 8E 83              4834 	mov	dph,r6
   42A0 A3                 4835 	inc	dptr
   42A1 A3                 4836 	inc	dptr
   42A2 A3                 4837 	inc	dptr
   42A3 E0                 4838 	movx	a,@dptr
   42A4 90 20 30           4839 	mov	dptr,#_SPD_CTRL_TX_LANE_REG1_LANE
   42A7 54 07              4840 	anl	a,#0x07
   42A9 F5 F0              4841 	mov	b,a
   42AB E0                 4842 	movx	a,@dptr
   42AC 54 F8              4843 	anl	a,#0xf8
   42AE 45 F0              4844 	orl	a,b
   42B0 F0                 4845 	movx	@dptr,a
                           4846 ;	../../shared/src/spd_ctrl.c:528: reg_RX_SPEED_DIV_LANE_2_0		= speedtable[gen][spdoft_rx_speed_div_lane]; 
   42B1 EC                 4847 	mov	a,r4
   42B2 24 04              4848 	add	a,#_speedtable
   42B4 FB                 4849 	mov	r3,a
   42B5 ED                 4850 	mov	a,r5
   42B6 34 63              4851 	addc	a,#(_speedtable >> 8)
   42B8 FE                 4852 	mov	r6,a
   42B9 74 18              4853 	mov	a,#0x18
   42BB 2B                 4854 	add	a,r3
   42BC F5 82              4855 	mov	dpl,a
   42BE E4                 4856 	clr	a
   42BF 3E                 4857 	addc	a,r6
   42C0 F5 83              4858 	mov	dph,a
   42C2 E0                 4859 	movx	a,@dptr
   42C3 90 02 28           4860 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   42C6 25 E0              4861 	add	a,acc
   42C8 25 E0              4862 	add	a,acc
   42CA 54 1C              4863 	anl	a,#0x1c
   42CC F5 F0              4864 	mov	b,a
   42CE E0                 4865 	movx	a,@dptr
   42CF 54 E3              4866 	anl	a,#0xe3
   42D1 45 F0              4867 	orl	a,b
   42D3 F0                 4868 	movx	@dptr,a
                           4869 ;	../../shared/src/spd_ctrl.c:529: reg_DTL_CLK_SPEEDUP_LANE_2_0  		= speedtable[gen][spdoft_dtl_clk_speedup_lane]; 
   42D4 EC                 4870 	mov	a,r4
   42D5 24 04              4871 	add	a,#_speedtable
   42D7 FB                 4872 	mov	r3,a
   42D8 ED                 4873 	mov	a,r5
   42D9 34 63              4874 	addc	a,#(_speedtable >> 8)
   42DB FE                 4875 	mov	r6,a
   42DC 74 19              4876 	mov	a,#0x19
   42DE 2B                 4877 	add	a,r3
   42DF F5 82              4878 	mov	dpl,a
   42E1 E4                 4879 	clr	a
   42E2 3E                 4880 	addc	a,r6
   42E3 F5 83              4881 	mov	dph,a
   42E5 E0                 4882 	movx	a,@dptr
   42E6 90 02 28           4883 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   42E9 C4                 4884 	swap	a
   42EA 23                 4885 	rl	a
   42EB 54 E0              4886 	anl	a,#(0xe0&0xe0)
   42ED F5 F0              4887 	mov	b,a
   42EF E0                 4888 	movx	a,@dptr
   42F0 54 1F              4889 	anl	a,#0x1f
   42F2 45 F0              4890 	orl	a,b
   42F4 F0                 4891 	movx	@dptr,a
                           4892 ;	../../shared/src/spd_ctrl.c:530: reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];
   42F5 EC                 4893 	mov	a,r4
   42F6 24 04              4894 	add	a,#_speedtable
   42F8 FB                 4895 	mov	r3,a
   42F9 ED                 4896 	mov	a,r5
   42FA 34 63              4897 	addc	a,#(_speedtable >> 8)
   42FC FE                 4898 	mov	r6,a
   42FD 74 21              4899 	mov	a,#0x21
   42FF 2B                 4900 	add	a,r3
   4300 F5 82              4901 	mov	dpl,a
   4302 E4                 4902 	clr	a
   4303 3E                 4903 	addc	a,r6
   4304 F5 83              4904 	mov	dph,a
   4306 E0                 4905 	movx	a,@dptr
   4307 90 02 38           4906 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   430A 25 E0              4907 	add	a,acc
   430C 54 0E              4908 	anl	a,#0x0e
   430E F5 F0              4909 	mov	b,a
   4310 E0                 4910 	movx	a,@dptr
   4311 54 F1              4911 	anl	a,#0xf1
   4313 45 F0              4912 	orl	a,b
   4315 F0                 4913 	movx	@dptr,a
                           4914 ;	../../shared/src/spd_ctrl.c:532: switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
   4316 90 60 02           4915 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   4319 E0                 4916 	movx	a,@dptr
   431A C4                 4917 	swap	a
   431B 54 03              4918 	anl	a,#0x03
   431D FB                 4919 	mov	r3,a
   431E 25 E0              4920 	add	a,acc
   4320 2B                 4921 	add	a,r3
   4321 90 43 25           4922 	mov	dptr,#00236$
   4324 73                 4923 	jmp	@a+dptr
   4325                    4924 00236$:
   4325 02 43 31           4925 	ljmp	00135$
   4328 02 43 39           4926 	ljmp	00136$
   432B 02 43 41           4927 	ljmp	00137$
   432E 02 43 49           4928 	ljmp	00138$
                           4929 ;	../../shared/src/spd_ctrl.c:533: case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
   4331                    4930 00135$:
   4331 90 00 78           4931 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   4334 74 24              4932 	mov	a,#0x24
   4336 F0                 4933 	movx	@dptr,a
                           4934 ;	../../shared/src/spd_ctrl.c:534: case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
   4337 80 16              4935 	sjmp	00139$
   4339                    4936 00136$:
   4339 90 00 78           4937 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   433C 74 84              4938 	mov	a,#0x84
   433E F0                 4939 	movx	@dptr,a
                           4940 ;	../../shared/src/spd_ctrl.c:535: case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
   433F 80 0E              4941 	sjmp	00139$
   4341                    4942 00137$:
   4341 90 00 78           4943 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   4344 74 2B              4944 	mov	a,#0x2B
   4346 F0                 4945 	movx	@dptr,a
                           4946 ;	../../shared/src/spd_ctrl.c:536: case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
   4347 80 06              4947 	sjmp	00139$
   4349                    4948 00138$:
   4349 90 00 78           4949 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_30
   434C 74 42              4950 	mov	a,#0x42
   434E F0                 4951 	movx	@dptr,a
                           4952 ;	../../shared/src/spd_ctrl.c:537: }
   434F                    4953 00139$:
                           4954 ;	../../shared/src/spd_ctrl.c:538: if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
   434F 90 02 28           4955 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   4352 E0                 4956 	movx	a,@dptr
   4353 03                 4957 	rr	a
   4354 03                 4958 	rr	a
   4355 54 07              4959 	anl	a,#0x07
   4357 FB                 4960 	mov	r3,a
   4358 20 E2 03           4961 	jb	acc.2,00237$
   435B 02 43 DD           4962 	ljmp	00151$
   435E                    4963 00237$:
                           4964 ;	../../shared/src/spd_ctrl.c:539: switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
   435E 90 60 02           4965 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   4361 E0                 4966 	movx	a,@dptr
   4362 23                 4967 	rl	a
   4363 23                 4968 	rl	a
   4364 54 03              4969 	anl	a,#0x03
   4366 FB                 4970 	mov	r3,a
   4367 25 E0              4971 	add	a,acc
   4369 2B                 4972 	add	a,r3
   436A 90 43 6E           4973 	mov	dptr,#00238$
   436D 73                 4974 	jmp	@a+dptr
   436E                    4975 00238$:
   436E 02 43 7A           4976 	ljmp	00140$
   4371 02 43 93           4977 	ljmp	00141$
   4374 02 43 AC           4978 	ljmp	00142$
   4377 02 43 C5           4979 	ljmp	00143$
                           4980 ;	../../shared/src/spd_ctrl.c:540: case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   437A                    4981 00140$:
   437A 90 02 6C           4982 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   437D E0                 4983 	movx	a,@dptr
   437E FB                 4984 	mov	r3,a
   437F 74 04              4985 	mov	a,#0x04
   4381 5B                 4986 	anl	a,r3
   4382 44 40              4987 	orl	a,#0x40
   4384 FB                 4988 	mov	r3,a
   4385 90 02 6C           4989 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4388 F0                 4990 	movx	@dptr,a
   4389 90 02 60           4991 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   438C E0                 4992 	movx	a,@dptr
   438D 44 08              4993 	orl	a,#0x08
   438F F0                 4994 	movx	@dptr,a
   4390 02 44 57           4995 	ljmp	00152$
                           4996 ;	../../shared/src/spd_ctrl.c:541: case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   4393                    4997 00141$:
   4393 90 02 6C           4998 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4396 E0                 4999 	movx	a,@dptr
   4397 FB                 5000 	mov	r3,a
   4398 74 04              5001 	mov	a,#0x04
   439A 5B                 5002 	anl	a,r3
   439B 44 82              5003 	orl	a,#0x82
   439D FB                 5004 	mov	r3,a
   439E 90 02 6C           5005 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   43A1 F0                 5006 	movx	@dptr,a
   43A2 90 02 60           5007 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   43A5 E0                 5008 	movx	a,@dptr
   43A6 44 08              5009 	orl	a,#0x08
   43A8 F0                 5010 	movx	@dptr,a
   43A9 02 44 57           5011 	ljmp	00152$
                           5012 ;	../../shared/src/spd_ctrl.c:542: case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   43AC                    5013 00142$:
   43AC 90 02 6C           5014 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   43AF E0                 5015 	movx	a,@dptr
   43B0 FB                 5016 	mov	r3,a
   43B1 74 04              5017 	mov	a,#0x04
   43B3 5B                 5018 	anl	a,r3
   43B4 44 5B              5019 	orl	a,#0x5B
   43B6 FB                 5020 	mov	r3,a
   43B7 90 02 6C           5021 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   43BA F0                 5022 	movx	@dptr,a
   43BB 90 02 60           5023 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   43BE E0                 5024 	movx	a,@dptr
   43BF 44 08              5025 	orl	a,#0x08
   43C1 F0                 5026 	movx	@dptr,a
   43C2 02 44 57           5027 	ljmp	00152$
                           5028 ;	../../shared/src/spd_ctrl.c:543: case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   43C5                    5029 00143$:
   43C5 90 02 6C           5030 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   43C8 E0                 5031 	movx	a,@dptr
   43C9 FB                 5032 	mov	r3,a
   43CA 74 04              5033 	mov	a,#0x04
   43CC 5B                 5034 	anl	a,r3
   43CD 44 8A              5035 	orl	a,#0x8A
   43CF FB                 5036 	mov	r3,a
   43D0 90 02 6C           5037 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   43D3 F0                 5038 	movx	@dptr,a
   43D4 90 02 60           5039 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   43D7 E0                 5040 	movx	a,@dptr
   43D8 44 08              5041 	orl	a,#0x08
   43DA F0                 5042 	movx	@dptr,a
                           5043 ;	../../shared/src/spd_ctrl.c:544: }
   43DB 80 7A              5044 	sjmp	00152$
   43DD                    5045 00151$:
                           5046 ;	../../shared/src/spd_ctrl.c:547: switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
   43DD 90 60 02           5047 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   43E0 E0                 5048 	movx	a,@dptr
   43E1 23                 5049 	rl	a
   43E2 23                 5050 	rl	a
   43E3 54 03              5051 	anl	a,#0x03
   43E5 FB                 5052 	mov	r3,a
   43E6 25 E0              5053 	add	a,acc
   43E8 2B                 5054 	add	a,r3
   43E9 90 43 ED           5055 	mov	dptr,#00239$
   43EC 73                 5056 	jmp	@a+dptr
   43ED                    5057 00239$:
   43ED 02 43 F9           5058 	ljmp	00145$
   43F0 02 44 11           5059 	ljmp	00146$
   43F3 02 44 29           5060 	ljmp	00147$
   43F6 02 44 41           5061 	ljmp	00148$
                           5062 ;	../../shared/src/spd_ctrl.c:548: case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   43F9                    5063 00145$:
   43F9 90 02 6C           5064 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   43FC E0                 5065 	movx	a,@dptr
   43FD FB                 5066 	mov	r3,a
   43FE 74 04              5067 	mov	a,#0x04
   4400 5B                 5068 	anl	a,r3
   4401 44 20              5069 	orl	a,#0x20
   4403 FB                 5070 	mov	r3,a
   4404 90 02 6C           5071 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4407 F0                 5072 	movx	@dptr,a
   4408 90 02 60           5073 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   440B E0                 5074 	movx	a,@dptr
   440C 44 08              5075 	orl	a,#0x08
   440E F0                 5076 	movx	@dptr,a
                           5077 ;	../../shared/src/spd_ctrl.c:549: case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
   440F 80 46              5078 	sjmp	00152$
   4411                    5079 00146$:
   4411 90 02 6C           5080 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4414 E0                 5081 	movx	a,@dptr
   4415 FB                 5082 	mov	r3,a
   4416 74 04              5083 	mov	a,#0x04
   4418 5B                 5084 	anl	a,r3
   4419 44 80              5085 	orl	a,#0x80
   441B FB                 5086 	mov	r3,a
   441C 90 02 6C           5087 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   441F F0                 5088 	movx	@dptr,a
   4420 90 02 60           5089 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4423 E0                 5090 	movx	a,@dptr
   4424 44 08              5091 	orl	a,#0x08
   4426 F0                 5092 	movx	@dptr,a
                           5093 ;	../../shared/src/spd_ctrl.c:550: case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
   4427 80 2E              5094 	sjmp	00152$
   4429                    5095 00147$:
   4429 90 02 6C           5096 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   442C E0                 5097 	movx	a,@dptr
   442D FB                 5098 	mov	r3,a
   442E 74 04              5099 	mov	a,#0x04
   4430 5B                 5100 	anl	a,r3
   4431 44 2B              5101 	orl	a,#0x2B
   4433 FB                 5102 	mov	r3,a
   4434 90 02 6C           5103 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4437 F0                 5104 	movx	@dptr,a
   4438 90 02 60           5105 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   443B E0                 5106 	movx	a,@dptr
   443C 54 F7              5107 	anl	a,#0xf7
   443E F0                 5108 	movx	@dptr,a
                           5109 ;	../../shared/src/spd_ctrl.c:551: case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
   443F 80 16              5110 	sjmp	00152$
   4441                    5111 00148$:
   4441 90 02 6C           5112 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   4444 E0                 5113 	movx	a,@dptr
   4445 FB                 5114 	mov	r3,a
   4446 74 04              5115 	mov	a,#0x04
   4448 5B                 5116 	anl	a,r3
   4449 44 42              5117 	orl	a,#0x42
   444B FB                 5118 	mov	r3,a
   444C 90 02 6C           5119 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_155
   444F F0                 5120 	movx	@dptr,a
   4450 90 02 60           5121 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   4453 E0                 5122 	movx	a,@dptr
   4454 54 F7              5123 	anl	a,#0xf7
   4456 F0                 5124 	movx	@dptr,a
                           5125 ;	../../shared/src/spd_ctrl.c:552: }
   4457                    5126 00152$:
                           5127 ;	../../shared/src/spd_ctrl.c:555: reg_RX_SELMUFF_LANE_2_0 		= speedtable[gen][spdoft_rx_selmuff_lane];
   4457 EC                 5128 	mov	a,r4
   4458 24 04              5129 	add	a,#_speedtable
   445A FB                 5130 	mov	r3,a
   445B ED                 5131 	mov	a,r5
   445C 34 63              5132 	addc	a,#(_speedtable >> 8)
   445E FE                 5133 	mov	r6,a
   445F 74 23              5134 	mov	a,#0x23
   4461 2B                 5135 	add	a,r3
   4462 F5 82              5136 	mov	dpl,a
   4464 E4                 5137 	clr	a
   4465 3E                 5138 	addc	a,r6
   4466 F5 83              5139 	mov	dph,a
   4468 E0                 5140 	movx	a,@dptr
   4469 90 21 65           5141 	mov	dptr,#(_DTL_REG1 + 0x0001)
   446C C4                 5142 	swap	a
   446D 23                 5143 	rl	a
   446E 54 E0              5144 	anl	a,#(0xe0&0xe0)
   4470 F5 F0              5145 	mov	b,a
   4472 E0                 5146 	movx	a,@dptr
   4473 54 1F              5147 	anl	a,#0x1f
   4475 45 F0              5148 	orl	a,b
   4477 F0                 5149 	movx	@dptr,a
                           5150 ;	../../shared/src/spd_ctrl.c:556: dfe_dis					= speedtable[gen][spdoft_reg_dfe_dis_lane];
   4478 EC                 5151 	mov	a,r4
   4479 24 04              5152 	add	a,#_speedtable
   447B FB                 5153 	mov	r3,a
   447C ED                 5154 	mov	a,r5
   447D 34 63              5155 	addc	a,#(_speedtable >> 8)
   447F FE                 5156 	mov	r6,a
   4480 74 41              5157 	mov	a,#0x41
   4482 2B                 5158 	add	a,r3
   4483 F5 82              5159 	mov	dpl,a
   4485 E4                 5160 	clr	a
   4486 3E                 5161 	addc	a,r6
   4487 F5 83              5162 	mov	dph,a
   4489 E0                 5163 	movx	a,@dptr
   448A FB                 5164 	mov	r3,a
   448B 90 66 F7           5165 	mov	dptr,#_dfe_dis
   448E F0                 5166 	movx	@dptr,a
                           5167 ;	../../shared/src/spd_ctrl.c:557: reg_DFE_TAP_SETTLE_SCALE_LANE_1_0	= speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
   448F EC                 5168 	mov	a,r4
   4490 24 04              5169 	add	a,#_speedtable
   4492 FE                 5170 	mov	r6,a
   4493 ED                 5171 	mov	a,r5
   4494 34 63              5172 	addc	a,#(_speedtable >> 8)
   4496 FF                 5173 	mov	r7,a
   4497 74 42              5174 	mov	a,#0x42
   4499 2E                 5175 	add	a,r6
   449A F5 82              5176 	mov	dpl,a
   449C E4                 5177 	clr	a
   449D 3F                 5178 	addc	a,r7
   449E F5 83              5179 	mov	dph,a
   44A0 E0                 5180 	movx	a,@dptr
   44A1 90 24 0B           5181 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   44A4 54 03              5182 	anl	a,#0x03
   44A6 F5 F0              5183 	mov	b,a
   44A8 E0                 5184 	movx	a,@dptr
   44A9 54 FC              5185 	anl	a,#0xfc
   44AB 45 F0              5186 	orl	a,b
   44AD F0                 5187 	movx	@dptr,a
                           5188 ;	../../shared/src/spd_ctrl.c:558: reg_FFE_DATA_RATE_LANE_3_0  		= speedtable[gen][spdoft_ffe_data_rate_lane];
   44AE EC                 5189 	mov	a,r4
   44AF 24 04              5190 	add	a,#_speedtable
   44B1 FE                 5191 	mov	r6,a
   44B2 ED                 5192 	mov	a,r5
   44B3 34 63              5193 	addc	a,#(_speedtable >> 8)
   44B5 FF                 5194 	mov	r7,a
   44B6 74 43              5195 	mov	a,#0x43
   44B8 2E                 5196 	add	a,r6
   44B9 F5 82              5197 	mov	dpl,a
   44BB E4                 5198 	clr	a
   44BC 3F                 5199 	addc	a,r7
   44BD F5 83              5200 	mov	dph,a
   44BF E0                 5201 	movx	a,@dptr
   44C0 FE                 5202 	mov	r6,a
   44C1 90 02 08           5203 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_130
   44C4 C4                 5204 	swap	a
   44C5 54 F0              5205 	anl	a,#(0xf0&0xf0)
   44C7 F5 F0              5206 	mov	b,a
   44C9 E0                 5207 	movx	a,@dptr
   44CA 54 0F              5208 	anl	a,#0x0f
   44CC 45 F0              5209 	orl	a,b
   44CE F0                 5210 	movx	@dptr,a
                           5211 ;	../../shared/src/spd_ctrl.c:559: reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;
   44CF EB                 5212 	mov	a,r3
   44D0 B4 01 00           5213 	cjne	a,#0x01,00240$
   44D3                    5214 00240$:
   44D3 E4                 5215 	clr	a
   44D4 33                 5216 	rlc	a
   44D5 FE                 5217 	mov	r6,a
   44D6 90 24 10           5218 	mov	dptr,#_RX_EQ_CLK_CTRL
   44D9 13                 5219 	rrc	a
   44DA E0                 5220 	movx	a,@dptr
   44DB 92 E4              5221 	mov	acc.4,c
   44DD F0                 5222 	movx	@dptr,a
   44DE 90 24 0C           5223 	mov	dptr,#_DFE_CTRL_REG3
   44E1 EB                 5224 	mov	a,r3
   44E2 13                 5225 	rrc	a
   44E3 E0                 5226 	movx	a,@dptr
   44E4 92 E6              5227 	mov	acc.6,c
   44E6 F0                 5228 	movx	@dptr,a
                           5229 ;	../../shared/src/spd_ctrl.c:561: if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
   44E7 90 A3 16           5230 	mov	dptr,#(_SYSTEM + 0x0002)
   44EA E0                 5231 	movx	a,@dptr
   44EB 54 07              5232 	anl	a,#0x07
   44ED 70 12              5233 	jnz	00164$
   44EF 90 22 30           5234 	mov	dptr,#_MCU_STATUS0_LANE
   44F2 E0                 5235 	movx	a,@dptr
   44F3 FB                 5236 	mov	r3,a
   44F4 BB 19 0A           5237 	cjne	r3,#0x19,00164$
   44F7 90 66 2B           5238 	mov	dptr,#_pwrsq_on
   44FA E0                 5239 	movx	a,@dptr
   44FB FB                 5240 	mov	r3,a
   44FC 70 03              5241 	jnz	00244$
   44FE 02 4B 83           5242 	ljmp	00165$
   4501                    5243 00244$:
   4501                    5244 00164$:
                           5245 ;	../../shared/src/spd_ctrl.c:562: reg_TX_CK_SEL_LANE 			= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
   4501 90 66 23           5246 	mov	dptr,#_serdes_ring_lane_en
   4504 E0                 5247 	movx	a,@dptr
   4505 FB                 5248 	mov	r3,a
   4506 EA                 5249 	mov	a,r2
   4507 5B                 5250 	anl	a,r3
   4508 FE                 5251 	mov	r6,a
   4509 A2 10              5252 	mov	c,_use_ring_pll
   450B E4                 5253 	clr	a
   450C 33                 5254 	rlc	a
   450D 42 06              5255 	orl	ar6,a
   450F 90 02 58           5256 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   4512 EE                 5257 	mov	a,r6
   4513 13                 5258 	rrc	a
   4514 E0                 5259 	movx	a,@dptr
   4515 92 E3              5260 	mov	acc.3,c
   4517 F0                 5261 	movx	@dptr,a
                           5262 ;	../../shared/src/spd_ctrl.c:563: reg_TX_CK_SEL_DIG_LANE			= reg_TX_CK_SEL_LANE;	//duplicated for digital use
   4518 90 02 58           5263 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   451B E0                 5264 	movx	a,@dptr
   451C C4                 5265 	swap	a
   451D 23                 5266 	rl	a
   451E 54 01              5267 	anl	a,#0x01
   4520 90 20 21           5268 	mov	dptr,#(_CLKGEN_TX_LANE_REG1_LANE + 0x0001)
   4523 13                 5269 	rrc	a
   4524 E0                 5270 	movx	a,@dptr
   4525 92 E0              5271 	mov	acc.0,c
   4527 F0                 5272 	movx	@dptr,a
                           5273 ;	../../shared/src/spd_ctrl.c:564: reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];  
   4528 EC                 5274 	mov	a,r4
   4529 24 04              5275 	add	a,#_speedtable
   452B FE                 5276 	mov	r6,a
   452C ED                 5277 	mov	a,r5
   452D 34 63              5278 	addc	a,#(_speedtable >> 8)
   452F FF                 5279 	mov	r7,a
   4530 8E 82              5280 	mov	dpl,r6
   4532 8F 83              5281 	mov	dph,r7
   4534 A3                 5282 	inc	dptr
   4535 A3                 5283 	inc	dptr
   4536 A3                 5284 	inc	dptr
   4537 A3                 5285 	inc	dptr
   4538 E0                 5286 	movx	a,@dptr
   4539 90 00 48           5287 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_18
   453C C4                 5288 	swap	a
   453D 23                 5289 	rl	a
   453E 54 E0              5290 	anl	a,#(0xe0&0xe0)
   4540 F5 F0              5291 	mov	b,a
   4542 E0                 5292 	movx	a,@dptr
   4543 54 1F              5293 	anl	a,#0x1f
   4545 45 F0              5294 	orl	a,b
   4547 F0                 5295 	movx	@dptr,a
                           5296 ;	../../shared/src/spd_ctrl.c:565: reg_TX_REG_SPEED_TRK_DATA_LANE_2_0	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];
   4548 EC                 5297 	mov	a,r4
   4549 24 04              5298 	add	a,#_speedtable
   454B FE                 5299 	mov	r6,a
   454C ED                 5300 	mov	a,r5
   454D 34 63              5301 	addc	a,#(_speedtable >> 8)
   454F FF                 5302 	mov	r7,a
   4550 8E 82              5303 	mov	dpl,r6
   4552 8F 83              5304 	mov	dph,r7
   4554 A3                 5305 	inc	dptr
   4555 A3                 5306 	inc	dptr
   4556 A3                 5307 	inc	dptr
   4557 A3                 5308 	inc	dptr
   4558 A3                 5309 	inc	dptr
   4559 E0                 5310 	movx	a,@dptr
   455A 90 00 48           5311 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_18
   455D 25 E0              5312 	add	a,acc
   455F 25 E0              5313 	add	a,acc
   4561 54 1C              5314 	anl	a,#0x1c
   4563 F5 F0              5315 	mov	b,a
   4565 E0                 5316 	movx	a,@dptr
   4566 54 E3              5317 	anl	a,#0xe3
   4568 45 F0              5318 	orl	a,b
   456A F0                 5319 	movx	@dptr,a
                           5320 ;	../../shared/src/spd_ctrl.c:567: reg_TX_EM_CTRL_REG_EN_LANE		= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
   456B EC                 5321 	mov	a,r4
   456C 24 04              5322 	add	a,#_speedtable
   456E FE                 5323 	mov	r6,a
   456F ED                 5324 	mov	a,r5
   4570 34 63              5325 	addc	a,#(_speedtable >> 8)
   4572 FF                 5326 	mov	r7,a
   4573 74 08              5327 	mov	a,#0x08
   4575 2E                 5328 	add	a,r6
   4576 F5 82              5329 	mov	dpl,a
   4578 E4                 5330 	clr	a
   4579 3F                 5331 	addc	a,r7
   457A F5 83              5332 	mov	dph,a
   457C E0                 5333 	movx	a,@dptr
   457D 90 26 53           5334 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0003)
   4580 13                 5335 	rrc	a
   4581 E0                 5336 	movx	a,@dptr
   4582 92 E7              5337 	mov	acc.7,c
   4584 F0                 5338 	movx	@dptr,a
                           5339 ;	../../shared/src/spd_ctrl.c:569: reg_TX_COE_FM_PIPE_LANE			= speedtable[gen][spdoft_tx_coe_fm_pipe_lane];
   4585 EC                 5340 	mov	a,r4
   4586 24 04              5341 	add	a,#_speedtable
   4588 FE                 5342 	mov	r6,a
   4589 ED                 5343 	mov	a,r5
   458A 34 63              5344 	addc	a,#(_speedtable >> 8)
   458C FF                 5345 	mov	r7,a
   458D 74 06              5346 	mov	a,#0x06
   458F 2E                 5347 	add	a,r6
   4590 F5 82              5348 	mov	dpl,a
   4592 E4                 5349 	clr	a
   4593 3F                 5350 	addc	a,r7
   4594 F5 83              5351 	mov	dph,a
   4596 E0                 5352 	movx	a,@dptr
   4597 90 26 30           5353 	mov	dptr,#_TX_TRAIN_DRIVER_REG2
   459A 13                 5354 	rrc	a
   459B E0                 5355 	movx	a,@dptr
   459C 92 E2              5356 	mov	acc.2,c
   459E F0                 5357 	movx	@dptr,a
                           5358 ;	../../shared/src/spd_ctrl.c:570: reg_PCIE_GEN12_SEL_LANE			= speedtable[gen][spdoft_pcie_gen12_sel_lane];
   459F EC                 5359 	mov	a,r4
   45A0 24 04              5360 	add	a,#_speedtable
   45A2 FE                 5361 	mov	r6,a
   45A3 ED                 5362 	mov	a,r5
   45A4 34 63              5363 	addc	a,#(_speedtable >> 8)
   45A6 FF                 5364 	mov	r7,a
   45A7 74 07              5365 	mov	a,#0x07
   45A9 2E                 5366 	add	a,r6
   45AA F5 82              5367 	mov	dpl,a
   45AC E4                 5368 	clr	a
   45AD 3F                 5369 	addc	a,r7
   45AE F5 83              5370 	mov	dph,a
   45B0 E0                 5371 	movx	a,@dptr
   45B1 90 26 4D           5372 	mov	dptr,#(_TX_EMPH_CTRL_REG0 + 0x0001)
   45B4 13                 5373 	rrc	a
   45B5 E0                 5374 	movx	a,@dptr
   45B6 92 E2              5375 	mov	acc.2,c
   45B8 F0                 5376 	movx	@dptr,a
                           5377 ;	../../shared/src/spd_ctrl.c:574: reg_ANA_TX_EM_PRE_EN_LANE		= speedtable[gen][spdoft_tx_em_pre_en_lane];
   45B9 EC                 5378 	mov	a,r4
   45BA 24 04              5379 	add	a,#_speedtable
   45BC FE                 5380 	mov	r6,a
   45BD ED                 5381 	mov	a,r5
   45BE 34 63              5382 	addc	a,#(_speedtable >> 8)
   45C0 FF                 5383 	mov	r7,a
   45C1 74 09              5384 	mov	a,#0x09
   45C3 2E                 5385 	add	a,r6
   45C4 F5 82              5386 	mov	dpl,a
   45C6 E4                 5387 	clr	a
   45C7 3F                 5388 	addc	a,r7
   45C8 F5 83              5389 	mov	dph,a
   45CA E0                 5390 	movx	a,@dptr
   45CB 90 26 52           5391 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   45CE 13                 5392 	rrc	a
   45CF E0                 5393 	movx	a,@dptr
   45D0 92 E6              5394 	mov	acc.6,c
   45D2 F0                 5395 	movx	@dptr,a
                           5396 ;	../../shared/src/spd_ctrl.c:575: reg_ANA_TX_EM_PEAK_EN_LANE		= speedtable[gen][spdoft_tx_em_peak_en_lane];
   45D3 EC                 5397 	mov	a,r4
   45D4 24 04              5398 	add	a,#_speedtable
   45D6 FE                 5399 	mov	r6,a
   45D7 ED                 5400 	mov	a,r5
   45D8 34 63              5401 	addc	a,#(_speedtable >> 8)
   45DA FF                 5402 	mov	r7,a
   45DB 74 0A              5403 	mov	a,#0x0A
   45DD 2E                 5404 	add	a,r6
   45DE F5 82              5405 	mov	dpl,a
   45E0 E4                 5406 	clr	a
   45E1 3F                 5407 	addc	a,r7
   45E2 F5 83              5408 	mov	dph,a
   45E4 E0                 5409 	movx	a,@dptr
   45E5 90 26 52           5410 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   45E8 13                 5411 	rrc	a
   45E9 E0                 5412 	movx	a,@dptr
   45EA 92 E7              5413 	mov	acc.7,c
   45EC F0                 5414 	movx	@dptr,a
                           5415 ;	../../shared/src/spd_ctrl.c:576: if(phy_mode != PCIE)
   45ED 90 A3 16           5416 	mov	dptr,#(_SYSTEM + 0x0002)
   45F0 E0                 5417 	movx	a,@dptr
   45F1 54 07              5418 	anl	a,#0x07
   45F3 FE                 5419 	mov	r6,a
   45F4 BE 03 02           5420 	cjne	r6,#0x03,00245$
   45F7 80 1B              5421 	sjmp	00154$
   45F9                    5422 00245$:
                           5423 ;	../../shared/src/spd_ctrl.c:577: reg_ANA_TX_EM_PO_EN_LANE	= speedtable[gen][spdoft_tx_em_po_en_lane];
   45F9 EC                 5424 	mov	a,r4
   45FA 24 04              5425 	add	a,#_speedtable
   45FC FE                 5426 	mov	r6,a
   45FD ED                 5427 	mov	a,r5
   45FE 34 63              5428 	addc	a,#(_speedtable >> 8)
   4600 FF                 5429 	mov	r7,a
   4601 74 0B              5430 	mov	a,#0x0B
   4603 2E                 5431 	add	a,r6
   4604 F5 82              5432 	mov	dpl,a
   4606 E4                 5433 	clr	a
   4607 3F                 5434 	addc	a,r7
   4608 F5 83              5435 	mov	dph,a
   460A E0                 5436 	movx	a,@dptr
   460B FE                 5437 	mov	r6,a
   460C 90 26 52           5438 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   460F 13                 5439 	rrc	a
   4610 E0                 5440 	movx	a,@dptr
   4611 92 E5              5441 	mov	acc.5,c
   4613 F0                 5442 	movx	@dptr,a
   4614                    5443 00154$:
                           5444 ;	../../shared/src/spd_ctrl.c:579: reg_SLEWRATE_EN_LANE_1_0		= speedtable[gen][spdoft_slewrate_en_lane];
   4614 EC                 5445 	mov	a,r4
   4615 24 04              5446 	add	a,#_speedtable
   4617 FE                 5447 	mov	r6,a
   4618 ED                 5448 	mov	a,r5
   4619 34 63              5449 	addc	a,#(_speedtable >> 8)
   461B FF                 5450 	mov	r7,a
   461C 74 0C              5451 	mov	a,#0x0C
   461E 2E                 5452 	add	a,r6
   461F F5 82              5453 	mov	dpl,a
   4621 E4                 5454 	clr	a
   4622 3F                 5455 	addc	a,r7
   4623 F5 83              5456 	mov	dph,a
   4625 E0                 5457 	movx	a,@dptr
   4626 90 00 4C           5458 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   4629 03                 5459 	rr	a
   462A 03                 5460 	rr	a
   462B 54 C0              5461 	anl	a,#(0xc0&0xc0)
   462D F5 F0              5462 	mov	b,a
   462F E0                 5463 	movx	a,@dptr
   4630 54 3F              5464 	anl	a,#0x3f
   4632 45 F0              5465 	orl	a,b
   4634 F0                 5466 	movx	@dptr,a
                           5467 ;	../../shared/src/spd_ctrl.c:580: reg_SLEWCTRL1_LANE_1_0			= speedtable[gen][spdoft_slewctrl1_lane];
   4635 EC                 5468 	mov	a,r4
   4636 24 04              5469 	add	a,#_speedtable
   4638 FE                 5470 	mov	r6,a
   4639 ED                 5471 	mov	a,r5
   463A 34 63              5472 	addc	a,#(_speedtable >> 8)
   463C FF                 5473 	mov	r7,a
   463D 74 0D              5474 	mov	a,#0x0D
   463F 2E                 5475 	add	a,r6
   4640 F5 82              5476 	mov	dpl,a
   4642 E4                 5477 	clr	a
   4643 3F                 5478 	addc	a,r7
   4644 F5 83              5479 	mov	dph,a
   4646 E0                 5480 	movx	a,@dptr
   4647 90 00 4C           5481 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   464A 25 E0              5482 	add	a,acc
   464C 25 E0              5483 	add	a,acc
   464E 54 0C              5484 	anl	a,#0x0c
   4650 F5 F0              5485 	mov	b,a
   4652 E0                 5486 	movx	a,@dptr
   4653 54 F3              5487 	anl	a,#0xf3
   4655 45 F0              5488 	orl	a,b
   4657 F0                 5489 	movx	@dptr,a
                           5490 ;	../../shared/src/spd_ctrl.c:581: reg_SLEWCTRL0_LANE_1_0			= speedtable[gen][spdoft_slewctrl0_lane];
   4658 EC                 5491 	mov	a,r4
   4659 24 04              5492 	add	a,#_speedtable
   465B FE                 5493 	mov	r6,a
   465C ED                 5494 	mov	a,r5
   465D 34 63              5495 	addc	a,#(_speedtable >> 8)
   465F FF                 5496 	mov	r7,a
   4660 74 0E              5497 	mov	a,#0x0E
   4662 2E                 5498 	add	a,r6
   4663 F5 82              5499 	mov	dpl,a
   4665 E4                 5500 	clr	a
   4666 3F                 5501 	addc	a,r7
   4667 F5 83              5502 	mov	dph,a
   4669 E0                 5503 	movx	a,@dptr
   466A 90 00 4C           5504 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   466D C4                 5505 	swap	a
   466E 54 30              5506 	anl	a,#(0xf0&0x30)
   4670 F5 F0              5507 	mov	b,a
   4672 E0                 5508 	movx	a,@dptr
   4673 54 CF              5509 	anl	a,#0xcf
   4675 45 F0              5510 	orl	a,b
   4677 F0                 5511 	movx	@dptr,a
                           5512 ;	../../shared/src/spd_ctrl.c:582: reg_TX_TRAIN_PAT_SEL_LANE_1_0		= speedtable[gen][spdoft_tx_train_pat_sel_lane];
   4678 EC                 5513 	mov	a,r4
   4679 24 04              5514 	add	a,#_speedtable
   467B FE                 5515 	mov	r6,a
   467C ED                 5516 	mov	a,r5
   467D 34 63              5517 	addc	a,#(_speedtable >> 8)
   467F FF                 5518 	mov	r7,a
   4680 74 0F              5519 	mov	a,#0x0F
   4682 2E                 5520 	add	a,r6
   4683 F5 82              5521 	mov	dpl,a
   4685 E4                 5522 	clr	a
   4686 3F                 5523 	addc	a,r7
   4687 F5 83              5524 	mov	dph,a
   4689 E0                 5525 	movx	a,@dptr
   468A 90 23 00           5526 	mov	dptr,#_PT_CONTROL0
   468D C4                 5527 	swap	a
   468E 54 30              5528 	anl	a,#(0xf0&0x30)
   4690 F5 F0              5529 	mov	b,a
   4692 E0                 5530 	movx	a,@dptr
   4693 54 CF              5531 	anl	a,#0xcf
   4695 45 F0              5532 	orl	a,b
   4697 F0                 5533 	movx	@dptr,a
                           5534 ;	../../shared/src/spd_ctrl.c:583: reg_TRAIN_PAT_NUM_LANE_8_0_b0		= speedtable[gen][spdoft_train_pat_num_lane];
   4698 EC                 5535 	mov	a,r4
   4699 24 04              5536 	add	a,#_speedtable
   469B FE                 5537 	mov	r6,a
   469C ED                 5538 	mov	a,r5
   469D 34 63              5539 	addc	a,#(_speedtable >> 8)
   469F FF                 5540 	mov	r7,a
   46A0 74 10              5541 	mov	a,#0x10
   46A2 2E                 5542 	add	a,r6
   46A3 F5 82              5543 	mov	dpl,a
   46A5 E4                 5544 	clr	a
   46A6 3F                 5545 	addc	a,r7
   46A7 F5 83              5546 	mov	dph,a
   46A9 E0                 5547 	movx	a,@dptr
   46AA 90 21 24           5548 	mov	dptr,#_FRAME_SYNC_DET_REG1
   46AD F0                 5549 	movx	@dptr,a
                           5550 ;	../../shared/src/spd_ctrl.c:584: reg_TRAIN_PAT_NUM_LANE_8_0_b1		= speedtable[gen][spdoft_train_pat_num_lane+1];
   46AE EC                 5551 	mov	a,r4
   46AF 24 04              5552 	add	a,#_speedtable
   46B1 FE                 5553 	mov	r6,a
   46B2 ED                 5554 	mov	a,r5
   46B3 34 63              5555 	addc	a,#(_speedtable >> 8)
   46B5 FF                 5556 	mov	r7,a
   46B6 74 11              5557 	mov	a,#0x11
   46B8 2E                 5558 	add	a,r6
   46B9 F5 82              5559 	mov	dpl,a
   46BB E4                 5560 	clr	a
   46BC 3F                 5561 	addc	a,r7
   46BD F5 83              5562 	mov	dph,a
   46BF E0                 5563 	movx	a,@dptr
   46C0 90 21 25           5564 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0001)
   46C3 13                 5565 	rrc	a
   46C4 E0                 5566 	movx	a,@dptr
   46C5 92 E0              5567 	mov	acc.0,c
   46C7 F0                 5568 	movx	@dptr,a
                           5569 ;	../../shared/src/spd_ctrl.c:585: reg_TX_TRAIN_PAT_TOGGLE_LANE		= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
   46C8 EC                 5570 	mov	a,r4
   46C9 24 04              5571 	add	a,#_speedtable
   46CB FE                 5572 	mov	r6,a
   46CC ED                 5573 	mov	a,r5
   46CD 34 63              5574 	addc	a,#(_speedtable >> 8)
   46CF FF                 5575 	mov	r7,a
   46D0 74 12              5576 	mov	a,#0x12
   46D2 2E                 5577 	add	a,r6
   46D3 F5 82              5578 	mov	dpl,a
   46D5 E4                 5579 	clr	a
   46D6 3F                 5580 	addc	a,r7
   46D7 F5 83              5581 	mov	dph,a
   46D9 E0                 5582 	movx	a,@dptr
   46DA 90 26 25           5583 	mov	dptr,#(_TX_TRAIN_PATTTERN_REG0 + 0x0001)
   46DD 13                 5584 	rrc	a
   46DE E0                 5585 	movx	a,@dptr
   46DF 92 E1              5586 	mov	acc.1,c
   46E1 F0                 5587 	movx	@dptr,a
                           5588 ;	../../shared/src/spd_ctrl.c:586: reg_PACKET_SYNC_DIS_LANE		= speedtable[gen][spdoft_packet_sync_dis_lane];
   46E2 EC                 5589 	mov	a,r4
   46E3 24 04              5590 	add	a,#_speedtable
   46E5 FE                 5591 	mov	r6,a
   46E6 ED                 5592 	mov	a,r5
   46E7 34 63              5593 	addc	a,#(_speedtable >> 8)
   46E9 FF                 5594 	mov	r7,a
   46EA 74 13              5595 	mov	a,#0x13
   46EC 2E                 5596 	add	a,r6
   46ED F5 82              5597 	mov	dpl,a
   46EF E4                 5598 	clr	a
   46F0 3F                 5599 	addc	a,r7
   46F1 F5 83              5600 	mov	dph,a
   46F3 E0                 5601 	movx	a,@dptr
   46F4 90 21 25           5602 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0001)
   46F7 13                 5603 	rrc	a
   46F8 E0                 5604 	movx	a,@dptr
   46F9 92 E7              5605 	mov	acc.7,c
   46FB F0                 5606 	movx	@dptr,a
                           5607 ;	../../shared/src/spd_ctrl.c:587: reg_SYNC_DET_DIS_LANE			= speedtable[gen][spdoft_sync_det_dis_lane];
   46FC EC                 5608 	mov	a,r4
   46FD 24 04              5609 	add	a,#_speedtable
   46FF FE                 5610 	mov	r6,a
   4700 ED                 5611 	mov	a,r5
   4701 34 63              5612 	addc	a,#(_speedtable >> 8)
   4703 FF                 5613 	mov	r7,a
   4704 74 14              5614 	mov	a,#0x14
   4706 2E                 5615 	add	a,r6
   4707 F5 82              5616 	mov	dpl,a
   4709 E4                 5617 	clr	a
   470A 3F                 5618 	addc	a,r7
   470B F5 83              5619 	mov	dph,a
   470D E0                 5620 	movx	a,@dptr
   470E 90 21 26           5621 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   4711 13                 5622 	rrc	a
   4712 E0                 5623 	movx	a,@dptr
   4713 92 E0              5624 	mov	acc.0,c
   4715 F0                 5625 	movx	@dptr,a
                           5626 ;	../../shared/src/spd_ctrl.c:591: rx_pll_rate				= speedtable[gen][spdoft_pll_rate_sel_rx]; 
   4716 EC                 5627 	mov	a,r4
   4717 24 04              5628 	add	a,#_speedtable
   4719 FE                 5629 	mov	r6,a
   471A ED                 5630 	mov	a,r5
   471B 34 63              5631 	addc	a,#(_speedtable >> 8)
   471D FF                 5632 	mov	r7,a
   471E 74 15              5633 	mov	a,#0x15
   4720 2E                 5634 	add	a,r6
   4721 F5 82              5635 	mov	dpl,a
   4723 E4                 5636 	clr	a
   4724 3F                 5637 	addc	a,r7
   4725 F5 83              5638 	mov	dph,a
   4727 E0                 5639 	movx	a,@dptr
   4728 24 FF              5640 	add	a,#0xff
   472A 92 0E              5641 	mov	_rx_pll_rate,c
                           5642 ;	../../shared/src/spd_ctrl.c:592: if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
   472C 90 A3 16           5643 	mov	dptr,#(_SYSTEM + 0x0002)
   472F E0                 5644 	movx	a,@dptr
   4730 54 07              5645 	anl	a,#0x07
   4732 FE                 5646 	mov	r6,a
   4733 BE 04 02           5647 	cjne	r6,#0x04,00156$
   4736 C2 0E              5648 	clr	_rx_pll_rate
   4738                    5649 00156$:
                           5650 ;	../../shared/src/spd_ctrl.c:593: reg_RX_CK_SEL_LANE 			= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);  
   4738 EC                 5651 	mov	a,r4
   4739 24 04              5652 	add	a,#_speedtable
   473B FE                 5653 	mov	r6,a
   473C ED                 5654 	mov	a,r5
   473D 34 63              5655 	addc	a,#(_speedtable >> 8)
   473F FF                 5656 	mov	r7,a
   4740 74 16              5657 	mov	a,#0x16
   4742 2E                 5658 	add	a,r6
   4743 F5 82              5659 	mov	dpl,a
   4745 E4                 5660 	clr	a
   4746 3F                 5661 	addc	a,r7
   4747 F5 83              5662 	mov	dph,a
   4749 EB                 5663 	mov	a,r3
   474A 52 02              5664 	anl	ar2,a
   474C E0                 5665 	movx	a,@dptr
   474D 42 02              5666 	orl	ar2,a
   474F 90 02 58           5667 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   4752 EA                 5668 	mov	a,r2
   4753 13                 5669 	rrc	a
   4754 E0                 5670 	movx	a,@dptr
   4755 92 E4              5671 	mov	acc.4,c
   4757 F0                 5672 	movx	@dptr,a
                           5673 ;	../../shared/src/spd_ctrl.c:594: reg_INTPI_LANE_3_0			= speedtable[gen][spdoft_intpi_lane]; 
   4758 EC                 5674 	mov	a,r4
   4759 24 04              5675 	add	a,#_speedtable
   475B FA                 5676 	mov	r2,a
   475C ED                 5677 	mov	a,r5
   475D 34 63              5678 	addc	a,#(_speedtable >> 8)
   475F FB                 5679 	mov	r3,a
   4760 74 1A              5680 	mov	a,#0x1A
   4762 2A                 5681 	add	a,r2
   4763 F5 82              5682 	mov	dpl,a
   4765 E4                 5683 	clr	a
   4766 3B                 5684 	addc	a,r3
   4767 F5 83              5685 	mov	dph,a
   4769 E0                 5686 	movx	a,@dptr
   476A 90 00 2C           5687 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_11
   476D 25 E0              5688 	add	a,acc
   476F 54 1E              5689 	anl	a,#0x1e
   4771 F5 F0              5690 	mov	b,a
   4773 E0                 5691 	movx	a,@dptr
   4774 54 E1              5692 	anl	a,#0xe1
   4776 45 F0              5693 	orl	a,b
   4778 F0                 5694 	movx	@dptr,a
                           5695 ;	../../shared/src/spd_ctrl.c:595: reg_INTPR_LANE_1_0			= speedtable[gen][spdoft_intpr_lane];
   4779 EC                 5696 	mov	a,r4
   477A 24 04              5697 	add	a,#_speedtable
   477C FA                 5698 	mov	r2,a
   477D ED                 5699 	mov	a,r5
   477E 34 63              5700 	addc	a,#(_speedtable >> 8)
   4780 FB                 5701 	mov	r3,a
   4781 74 1B              5702 	mov	a,#0x1B
   4783 2A                 5703 	add	a,r2
   4784 F5 82              5704 	mov	dpl,a
   4786 E4                 5705 	clr	a
   4787 3B                 5706 	addc	a,r3
   4788 F5 83              5707 	mov	dph,a
   478A E0                 5708 	movx	a,@dptr
   478B 90 02 14           5709 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_133
   478E 54 03              5710 	anl	a,#0x03
   4790 F5 F0              5711 	mov	b,a
   4792 E0                 5712 	movx	a,@dptr
   4793 54 FC              5713 	anl	a,#0xfc
   4795 45 F0              5714 	orl	a,b
   4797 F0                 5715 	movx	@dptr,a
                           5716 ;	../../shared/src/spd_ctrl.c:596: reg_DLL_FREQ_SEL_LANE_1_0		= speedtable[gen][spdoft_dll_freq_sel_lane];
   4798 EC                 5717 	mov	a,r4
   4799 24 04              5718 	add	a,#_speedtable
   479B FA                 5719 	mov	r2,a
   479C ED                 5720 	mov	a,r5
   479D 34 63              5721 	addc	a,#(_speedtable >> 8)
   479F FB                 5722 	mov	r3,a
   47A0 74 1C              5723 	mov	a,#0x1C
   47A2 2A                 5724 	add	a,r2
   47A3 F5 82              5725 	mov	dpl,a
   47A5 E4                 5726 	clr	a
   47A6 3B                 5727 	addc	a,r3
   47A7 F5 83              5728 	mov	dph,a
   47A9 E0                 5729 	movx	a,@dptr
   47AA 90 00 1C           5730 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   47AD 03                 5731 	rr	a
   47AE 03                 5732 	rr	a
   47AF 54 C0              5733 	anl	a,#(0xc0&0xc0)
   47B1 F5 F0              5734 	mov	b,a
   47B3 E0                 5735 	movx	a,@dptr
   47B4 54 3F              5736 	anl	a,#0x3f
   47B6 45 F0              5737 	orl	a,b
   47B8 F0                 5738 	movx	@dptr,a
                           5739 ;	../../shared/src/spd_ctrl.c:597: if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
   47B9 EC                 5740 	mov	a,r4
   47BA 24 04              5741 	add	a,#_speedtable
   47BC FA                 5742 	mov	r2,a
   47BD ED                 5743 	mov	a,r5
   47BE 34 63              5744 	addc	a,#(_speedtable >> 8)
   47C0 FB                 5745 	mov	r3,a
   47C1 74 1C              5746 	mov	a,#0x1C
   47C3 2A                 5747 	add	a,r2
   47C4 F5 82              5748 	mov	dpl,a
   47C6 E4                 5749 	clr	a
   47C7 3B                 5750 	addc	a,r3
   47C8 F5 83              5751 	mov	dph,a
   47CA E0                 5752 	movx	a,@dptr
   47CB FA                 5753 	mov	r2,a
   47CC 30 E2 09           5754 	jnb	acc.2,00159$
   47CF 90 00 74           5755 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   47D2 E0                 5756 	movx	a,@dptr
   47D3 44 40              5757 	orl	a,#0x40
   47D5 F0                 5758 	movx	@dptr,a
   47D6 80 07              5759 	sjmp	00160$
   47D8                    5760 00159$:
                           5761 ;	../../shared/src/spd_ctrl.c:598: else reg_DLL_FREQ_SEL_LANE_2 = 0;
   47D8 90 00 74           5762 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   47DB E0                 5763 	movx	a,@dptr
   47DC 54 BF              5764 	anl	a,#0xbf
   47DE F0                 5765 	movx	@dptr,a
   47DF                    5766 00160$:
                           5767 ;	../../shared/src/spd_ctrl.c:599: reg_EOM_DLL_FREQ_SEL_LANE_1_0		= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
   47DF EC                 5768 	mov	a,r4
   47E0 24 04              5769 	add	a,#_speedtable
   47E2 FA                 5770 	mov	r2,a
   47E3 ED                 5771 	mov	a,r5
   47E4 34 63              5772 	addc	a,#(_speedtable >> 8)
   47E6 FB                 5773 	mov	r3,a
   47E7 74 1D              5774 	mov	a,#0x1D
   47E9 2A                 5775 	add	a,r2
   47EA F5 82              5776 	mov	dpl,a
   47EC E4                 5777 	clr	a
   47ED 3B                 5778 	addc	a,r3
   47EE F5 83              5779 	mov	dph,a
   47F0 E0                 5780 	movx	a,@dptr
   47F1 90 00 20           5781 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   47F4 54 03              5782 	anl	a,#0x03
   47F6 F5 F0              5783 	mov	b,a
   47F8 E0                 5784 	movx	a,@dptr
   47F9 54 FC              5785 	anl	a,#0xfc
   47FB 45 F0              5786 	orl	a,b
   47FD F0                 5787 	movx	@dptr,a
                           5788 ;	../../shared/src/spd_ctrl.c:600: if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
   47FE EC                 5789 	mov	a,r4
   47FF 24 04              5790 	add	a,#_speedtable
   4801 FA                 5791 	mov	r2,a
   4802 ED                 5792 	mov	a,r5
   4803 34 63              5793 	addc	a,#(_speedtable >> 8)
   4805 FB                 5794 	mov	r3,a
   4806 74 1D              5795 	mov	a,#0x1D
   4808 2A                 5796 	add	a,r2
   4809 F5 82              5797 	mov	dpl,a
   480B E4                 5798 	clr	a
   480C 3B                 5799 	addc	a,r3
   480D F5 83              5800 	mov	dph,a
   480F E0                 5801 	movx	a,@dptr
   4810 FA                 5802 	mov	r2,a
   4811 30 E2 09           5803 	jnb	acc.2,00162$
   4814 90 00 74           5804 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   4817 E0                 5805 	movx	a,@dptr
   4818 44 80              5806 	orl	a,#0x80
   481A F0                 5807 	movx	@dptr,a
   481B 80 07              5808 	sjmp	00163$
   481D                    5809 00162$:
                           5810 ;	../../shared/src/spd_ctrl.c:601: else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
   481D 90 00 74           5811 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_29
   4820 E0                 5812 	movx	a,@dptr
   4821 54 7F              5813 	anl	a,#0x7f
   4823 F0                 5814 	movx	@dptr,a
   4824                    5815 00163$:
                           5816 ;	../../shared/src/spd_ctrl.c:602: reg_ALIGN90_8G_EN_LANE			= speedtable[gen][spdoft_align90_8g_en_lane];
   4824 EC                 5817 	mov	a,r4
   4825 24 04              5818 	add	a,#_speedtable
   4827 FA                 5819 	mov	r2,a
   4828 ED                 5820 	mov	a,r5
   4829 34 63              5821 	addc	a,#(_speedtable >> 8)
   482B FB                 5822 	mov	r3,a
   482C 74 1E              5823 	mov	a,#0x1E
   482E 2A                 5824 	add	a,r2
   482F F5 82              5825 	mov	dpl,a
   4831 E4                 5826 	clr	a
   4832 3B                 5827 	addc	a,r3
   4833 F5 83              5828 	mov	dph,a
   4835 E0                 5829 	movx	a,@dptr
   4836 90 00 70           5830 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_28
   4839 13                 5831 	rrc	a
   483A E0                 5832 	movx	a,@dptr
   483B 92 E3              5833 	mov	acc.3,c
   483D F0                 5834 	movx	@dptr,a
                           5835 ;	../../shared/src/spd_ctrl.c:603: reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
   483E EC                 5836 	mov	a,r4
   483F 24 04              5837 	add	a,#_speedtable
   4841 FA                 5838 	mov	r2,a
   4842 ED                 5839 	mov	a,r5
   4843 34 63              5840 	addc	a,#(_speedtable >> 8)
   4845 FB                 5841 	mov	r3,a
   4846 74 1F              5842 	mov	a,#0x1F
   4848 2A                 5843 	add	a,r2
   4849 F5 82              5844 	mov	dpl,a
   484B E4                 5845 	clr	a
   484C 3B                 5846 	addc	a,r3
   484D F5 83              5847 	mov	dph,a
   484F E0                 5848 	movx	a,@dptr
   4850 90 02 38           5849 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   4853 C4                 5850 	swap	a
   4854 23                 5851 	rl	a
   4855 54 E0              5852 	anl	a,#(0xe0&0xe0)
   4857 F5 F0              5853 	mov	b,a
   4859 E0                 5854 	movx	a,@dptr
   485A 54 1F              5855 	anl	a,#0x1f
   485C 45 F0              5856 	orl	a,b
   485E F0                 5857 	movx	@dptr,a
                           5858 ;	../../shared/src/spd_ctrl.c:604: reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
   485F EC                 5859 	mov	a,r4
   4860 24 04              5860 	add	a,#_speedtable
   4862 FA                 5861 	mov	r2,a
   4863 ED                 5862 	mov	a,r5
   4864 34 63              5863 	addc	a,#(_speedtable >> 8)
   4866 FB                 5864 	mov	r3,a
   4867 74 20              5865 	mov	a,#0x20
   4869 2A                 5866 	add	a,r2
   486A F5 82              5867 	mov	dpl,a
   486C E4                 5868 	clr	a
   486D 3B                 5869 	addc	a,r3
   486E F5 83              5870 	mov	dph,a
   4870 E0                 5871 	movx	a,@dptr
   4871 90 02 38           5872 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   4874 13                 5873 	rrc	a
   4875 E0                 5874 	movx	a,@dptr
   4876 92 E4              5875 	mov	acc.4,c
   4878 F0                 5876 	movx	@dptr,a
                           5877 ;	../../shared/src/spd_ctrl.c:605: reg_RX_SELMUFI_LANE_2_0			= speedtable[gen][spdoft_rx_selmufi_lane];
   4879 EC                 5878 	mov	a,r4
   487A 24 04              5879 	add	a,#_speedtable
   487C FA                 5880 	mov	r2,a
   487D ED                 5881 	mov	a,r5
   487E 34 63              5882 	addc	a,#(_speedtable >> 8)
   4880 FB                 5883 	mov	r3,a
   4881 74 22              5884 	mov	a,#0x22
   4883 2A                 5885 	add	a,r2
   4884 F5 82              5886 	mov	dpl,a
   4886 E4                 5887 	clr	a
   4887 3B                 5888 	addc	a,r3
   4888 F5 83              5889 	mov	dph,a
   488A E0                 5890 	movx	a,@dptr
   488B 90 21 65           5891 	mov	dptr,#(_DTL_REG1 + 0x0001)
   488E 25 E0              5892 	add	a,acc
   4890 25 E0              5893 	add	a,acc
   4892 54 1C              5894 	anl	a,#0x1c
   4894 F5 F0              5895 	mov	b,a
   4896 E0                 5896 	movx	a,@dptr
   4897 54 E3              5897 	anl	a,#0xe3
   4899 45 F0              5898 	orl	a,b
   489B F0                 5899 	movx	@dptr,a
                           5900 ;	../../shared/src/spd_ctrl.c:606: reg_REG_SELMUPI_LANE_3_0		= speedtable[gen][spdoft_reg_selmupi_lane];
   489C EC                 5901 	mov	a,r4
   489D 24 04              5902 	add	a,#_speedtable
   489F FA                 5903 	mov	r2,a
   48A0 ED                 5904 	mov	a,r5
   48A1 34 63              5905 	addc	a,#(_speedtable >> 8)
   48A3 FB                 5906 	mov	r3,a
   48A4 74 24              5907 	mov	a,#0x24
   48A6 2A                 5908 	add	a,r2
   48A7 F5 82              5909 	mov	dpl,a
   48A9 E4                 5910 	clr	a
   48AA 3B                 5911 	addc	a,r3
   48AB F5 83              5912 	mov	dph,a
   48AD E0                 5913 	movx	a,@dptr
   48AE 90 02 2C           5914 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_139
   48B1 54 0F              5915 	anl	a,#0x0f
   48B3 F5 F0              5916 	mov	b,a
   48B5 E0                 5917 	movx	a,@dptr
   48B6 54 F0              5918 	anl	a,#0xf0
   48B8 45 F0              5919 	orl	a,b
   48BA F0                 5920 	movx	@dptr,a
                           5921 ;	../../shared/src/spd_ctrl.c:607: reg_REG_SELMUPF_LANE_3_0		= speedtable[gen][spdoft_reg_selmupf_lane];
   48BB EC                 5922 	mov	a,r4
   48BC 24 04              5923 	add	a,#_speedtable
   48BE FA                 5924 	mov	r2,a
   48BF ED                 5925 	mov	a,r5
   48C0 34 63              5926 	addc	a,#(_speedtable >> 8)
   48C2 FB                 5927 	mov	r3,a
   48C3 74 25              5928 	mov	a,#0x25
   48C5 2A                 5929 	add	a,r2
   48C6 F5 82              5930 	mov	dpl,a
   48C8 E4                 5931 	clr	a
   48C9 3B                 5932 	addc	a,r3
   48CA F5 83              5933 	mov	dph,a
   48CC E0                 5934 	movx	a,@dptr
   48CD 90 02 30           5935 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_140
   48D0 C4                 5936 	swap	a
   48D1 54 F0              5937 	anl	a,#(0xf0&0xf0)
   48D3 F5 F0              5938 	mov	b,a
   48D5 E0                 5939 	movx	a,@dptr
   48D6 54 0F              5940 	anl	a,#0x0f
   48D8 45 F0              5941 	orl	a,b
   48DA F0                 5942 	movx	@dptr,a
                           5943 ;	../../shared/src/spd_ctrl.c:608: reg_DTL_CLK_MODE_LANE_1_0		= speedtable[gen][spdoft_dtl_clk_mode_lane];
   48DB EC                 5944 	mov	a,r4
   48DC 24 04              5945 	add	a,#_speedtable
   48DE FA                 5946 	mov	r2,a
   48DF ED                 5947 	mov	a,r5
   48E0 34 63              5948 	addc	a,#(_speedtable >> 8)
   48E2 FB                 5949 	mov	r3,a
   48E3 74 2A              5950 	mov	a,#0x2A
   48E5 2A                 5951 	add	a,r2
   48E6 F5 82              5952 	mov	dpl,a
   48E8 E4                 5953 	clr	a
   48E9 3B                 5954 	addc	a,r3
   48EA F5 83              5955 	mov	dph,a
   48EC E0                 5956 	movx	a,@dptr
   48ED 90 21 63           5957 	mov	dptr,#(_DTL_REG0 + 0x0003)
   48F0 C4                 5958 	swap	a
   48F1 54 30              5959 	anl	a,#(0xf0&0x30)
   48F3 F5 F0              5960 	mov	b,a
   48F5 E0                 5961 	movx	a,@dptr
   48F6 54 CF              5962 	anl	a,#0xcf
   48F8 45 F0              5963 	orl	a,b
   48FA F0                 5964 	movx	@dptr,a
                           5965 ;	../../shared/src/spd_ctrl.c:609: reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
   48FB EC                 5966 	mov	a,r4
   48FC 24 04              5967 	add	a,#_speedtable
   48FE FA                 5968 	mov	r2,a
   48FF ED                 5969 	mov	a,r5
   4900 34 63              5970 	addc	a,#(_speedtable >> 8)
   4902 FB                 5971 	mov	r3,a
   4903 74 2B              5972 	mov	a,#0x2B
   4905 2A                 5973 	add	a,r2
   4906 F5 82              5974 	mov	dpl,a
   4908 E4                 5975 	clr	a
   4909 3B                 5976 	addc	a,r3
   490A F5 83              5977 	mov	dph,a
   490C E0                 5978 	movx	a,@dptr
   490D 90 21 68           5979 	mov	dptr,#_DTL_REG2
   4910 F0                 5980 	movx	@dptr,a
                           5981 ;	../../shared/src/spd_ctrl.c:610: reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
   4911 EC                 5982 	mov	a,r4
   4912 24 04              5983 	add	a,#_speedtable
   4914 FA                 5984 	mov	r2,a
   4915 ED                 5985 	mov	a,r5
   4916 34 63              5986 	addc	a,#(_speedtable >> 8)
   4918 FB                 5987 	mov	r3,a
   4919 74 2C              5988 	mov	a,#0x2C
   491B 2A                 5989 	add	a,r2
   491C F5 82              5990 	mov	dpl,a
   491E E4                 5991 	clr	a
   491F 3B                 5992 	addc	a,r3
   4920 F5 83              5993 	mov	dph,a
   4922 E0                 5994 	movx	a,@dptr
   4923 90 21 69           5995 	mov	dptr,#(_DTL_REG2 + 0x0001)
   4926 54 3F              5996 	anl	a,#0x3f
   4928 F5 F0              5997 	mov	b,a
   492A E0                 5998 	movx	a,@dptr
   492B 54 C0              5999 	anl	a,#0xc0
   492D 45 F0              6000 	orl	a,b
   492F F0                 6001 	movx	@dptr,a
                           6002 ;	../../shared/src/spd_ctrl.c:611: reg_INIT_RXFOFFS_LANE_9_0_b0		= speedtable[gen][spdoft_init_rxfoffs_lane];
   4930 EC                 6003 	mov	a,r4
   4931 24 04              6004 	add	a,#_speedtable
   4933 FA                 6005 	mov	r2,a
   4934 ED                 6006 	mov	a,r5
   4935 34 63              6007 	addc	a,#(_speedtable >> 8)
   4937 FB                 6008 	mov	r3,a
   4938 74 2D              6009 	mov	a,#0x2D
   493A 2A                 6010 	add	a,r2
   493B F5 82              6011 	mov	dpl,a
   493D E4                 6012 	clr	a
   493E 3B                 6013 	addc	a,r3
   493F F5 83              6014 	mov	dph,a
   4941 E0                 6015 	movx	a,@dptr
   4942 90 21 64           6016 	mov	dptr,#_DTL_REG1
   4945 F0                 6017 	movx	@dptr,a
                           6018 ;	../../shared/src/spd_ctrl.c:612: reg_INIT_RXFOFFS_LANE_9_0_b1		= speedtable[gen][spdoft_init_rxfoffs_lane+1];
   4946 EC                 6019 	mov	a,r4
   4947 24 04              6020 	add	a,#_speedtable
   4949 FA                 6021 	mov	r2,a
   494A ED                 6022 	mov	a,r5
   494B 34 63              6023 	addc	a,#(_speedtable >> 8)
   494D FB                 6024 	mov	r3,a
   494E 74 2E              6025 	mov	a,#0x2E
   4950 2A                 6026 	add	a,r2
   4951 F5 82              6027 	mov	dpl,a
   4953 E4                 6028 	clr	a
   4954 3B                 6029 	addc	a,r3
   4955 F5 83              6030 	mov	dph,a
   4957 E0                 6031 	movx	a,@dptr
   4958 90 21 65           6032 	mov	dptr,#(_DTL_REG1 + 0x0001)
   495B 54 03              6033 	anl	a,#0x03
   495D F5 F0              6034 	mov	b,a
   495F E0                 6035 	movx	a,@dptr
   4960 54 FC              6036 	anl	a,#0xfc
   4962 45 F0              6037 	orl	a,b
   4964 F0                 6038 	movx	@dptr,a
                           6039 ;	../../shared/src/spd_ctrl.c:615: reg_RXCLK_25M_CTRL_LANE_1_0		= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
   4965 EC                 6040 	mov	a,r4
   4966 24 04              6041 	add	a,#_speedtable
   4968 FA                 6042 	mov	r2,a
   4969 ED                 6043 	mov	a,r5
   496A 34 63              6044 	addc	a,#(_speedtable >> 8)
   496C FB                 6045 	mov	r3,a
   496D 74 26              6046 	mov	a,#0x26
   496F 2A                 6047 	add	a,r2
   4970 F5 82              6048 	mov	dpl,a
   4972 E4                 6049 	clr	a
   4973 3B                 6050 	addc	a,r3
   4974 F5 83              6051 	mov	dph,a
   4976 E0                 6052 	movx	a,@dptr
   4977 90 02 60           6053 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   497A 25 E0              6054 	add	a,acc
   497C 54 06              6055 	anl	a,#0x06
   497E F5 F0              6056 	mov	b,a
   4980 E0                 6057 	movx	a,@dptr
   4981 54 F9              6058 	anl	a,#0xf9
   4983 45 F0              6059 	orl	a,b
   4985 F0                 6060 	movx	@dptr,a
                           6061 ;	../../shared/src/spd_ctrl.c:616: reg_RXCLK_25M_DIV1P5_EN_LANE		= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
   4986 EC                 6062 	mov	a,r4
   4987 24 04              6063 	add	a,#_speedtable
   4989 FA                 6064 	mov	r2,a
   498A ED                 6065 	mov	a,r5
   498B 34 63              6066 	addc	a,#(_speedtable >> 8)
   498D FB                 6067 	mov	r3,a
   498E 74 27              6068 	mov	a,#0x27
   4990 2A                 6069 	add	a,r2
   4991 F5 82              6070 	mov	dpl,a
   4993 E4                 6071 	clr	a
   4994 3B                 6072 	addc	a,r3
   4995 F5 83              6073 	mov	dph,a
   4997 E0                 6074 	movx	a,@dptr
   4998 90 02 60           6075 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   499B 13                 6076 	rrc	a
   499C E0                 6077 	movx	a,@dptr
   499D 92 E0              6078 	mov	acc.0,c
   499F F0                 6079 	movx	@dptr,a
                           6080 ;	../../shared/src/spd_ctrl.c:617: reg_RXCLK_25M_DIV_LANE_7_0		= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
   49A0 EC                 6081 	mov	a,r4
   49A1 24 04              6082 	add	a,#_speedtable
   49A3 FA                 6083 	mov	r2,a
   49A4 ED                 6084 	mov	a,r5
   49A5 34 63              6085 	addc	a,#(_speedtable >> 8)
   49A7 FB                 6086 	mov	r3,a
   49A8 74 28              6087 	mov	a,#0x28
   49AA 2A                 6088 	add	a,r2
   49AB F5 82              6089 	mov	dpl,a
   49AD E4                 6090 	clr	a
   49AE 3B                 6091 	addc	a,r3
   49AF F5 83              6092 	mov	dph,a
   49B1 E0                 6093 	movx	a,@dptr
   49B2 90 02 68           6094 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_154
   49B5 F0                 6095 	movx	@dptr,a
                           6096 ;	../../shared/src/spd_ctrl.c:618: reg_RXCLK_25M_FIX_DIV_EN_LANE		= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
   49B6 EC                 6097 	mov	a,r4
   49B7 24 04              6098 	add	a,#_speedtable
   49B9 FA                 6099 	mov	r2,a
   49BA ED                 6100 	mov	a,r5
   49BB 34 63              6101 	addc	a,#(_speedtable >> 8)
   49BD FB                 6102 	mov	r3,a
   49BE 74 29              6103 	mov	a,#0x29
   49C0 2A                 6104 	add	a,r2
   49C1 F5 82              6105 	mov	dpl,a
   49C3 E4                 6106 	clr	a
   49C4 3B                 6107 	addc	a,r3
   49C5 F5 83              6108 	mov	dph,a
   49C7 E0                 6109 	movx	a,@dptr
   49C8 90 02 60           6110 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_152
   49CB 13                 6111 	rrc	a
   49CC E0                 6112 	movx	a,@dptr
   49CD 92 E5              6113 	mov	acc.5,c
   49CF F0                 6114 	movx	@dptr,a
                           6115 ;	../../shared/src/spd_ctrl.c:622: rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
   49D0 EC                 6116 	mov	a,r4
   49D1 24 04              6117 	add	a,#_speedtable
   49D3 FA                 6118 	mov	r2,a
   49D4 ED                 6119 	mov	a,r5
   49D5 34 63              6120 	addc	a,#(_speedtable >> 8)
   49D7 FB                 6121 	mov	r3,a
   49D8 74 44              6122 	mov	a,#0x44
   49DA 2A                 6123 	add	a,r2
   49DB F5 82              6124 	mov	dpl,a
   49DD E4                 6125 	clr	a
   49DE 3B                 6126 	addc	a,r3
   49DF F5 83              6127 	mov	dph,a
   49E1 E0                 6128 	movx	a,@dptr
   49E2 90 66 36           6129 	mov	dptr,#_rxdll_temp_a_lane
   49E5 F0                 6130 	movx	@dptr,a
                           6131 ;	../../shared/src/spd_ctrl.c:623: rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];
   49E6 EC                 6132 	mov	a,r4
   49E7 24 04              6133 	add	a,#_speedtable
   49E9 FA                 6134 	mov	r2,a
   49EA ED                 6135 	mov	a,r5
   49EB 34 63              6136 	addc	a,#(_speedtable >> 8)
   49ED FB                 6137 	mov	r3,a
   49EE 74 45              6138 	mov	a,#0x45
   49F0 2A                 6139 	add	a,r2
   49F1 F5 82              6140 	mov	dpl,a
   49F3 E4                 6141 	clr	a
   49F4 3B                 6142 	addc	a,r3
   49F5 F5 83              6143 	mov	dph,a
   49F7 E0                 6144 	movx	a,@dptr
   49F8 90 66 37           6145 	mov	dptr,#_rxdll_temp_b_lane
   49FB F0                 6146 	movx	@dptr,a
                           6147 ;	../../shared/src/spd_ctrl.c:626: reg_PATH_DISABLE_EDGE_LANE		= speedtable[gen][spdoft_path_disable_edge_lane];
   49FC EC                 6148 	mov	a,r4
   49FD 24 04              6149 	add	a,#_speedtable
   49FF FA                 6150 	mov	r2,a
   4A00 ED                 6151 	mov	a,r5
   4A01 34 63              6152 	addc	a,#(_speedtable >> 8)
   4A03 FB                 6153 	mov	r3,a
   4A04 74 37              6154 	mov	a,#0x37
   4A06 2A                 6155 	add	a,r2
   4A07 F5 82              6156 	mov	dpl,a
   4A09 E4                 6157 	clr	a
   4A0A 3B                 6158 	addc	a,r3
   4A0B F5 83              6159 	mov	dph,a
   4A0D E0                 6160 	movx	a,@dptr
   4A0E 90 00 4C           6161 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   4A11 13                 6162 	rrc	a
   4A12 E0                 6163 	movx	a,@dptr
   4A13 92 E1              6164 	mov	acc.1,c
   4A15 F0                 6165 	movx	@dptr,a
                           6166 ;	../../shared/src/spd_ctrl.c:627: reg_ANA_RX_DFE_F1_POL_EN_D_LANE		= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
   4A16 EC                 6167 	mov	a,r4
   4A17 24 04              6168 	add	a,#_speedtable
   4A19 FA                 6169 	mov	r2,a
   4A1A ED                 6170 	mov	a,r5
   4A1B 34 63              6171 	addc	a,#(_speedtable >> 8)
   4A1D FB                 6172 	mov	r3,a
   4A1E 74 38              6173 	mov	a,#0x38
   4A20 2A                 6174 	add	a,r2
   4A21 F5 82              6175 	mov	dpl,a
   4A23 E4                 6176 	clr	a
   4A24 3B                 6177 	addc	a,r3
   4A25 F5 83              6178 	mov	dph,a
   4A27 E0                 6179 	movx	a,@dptr
   4A28 90 24 19           6180 	mov	dptr,#(_DFE_ANA_REG0 + 0x0001)
   4A2B 13                 6181 	rrc	a
   4A2C E0                 6182 	movx	a,@dptr
   4A2D 92 E2              6183 	mov	acc.2,c
   4A2F F0                 6184 	movx	@dptr,a
                           6185 ;	../../shared/src/spd_ctrl.c:628: reg_ANA_RX_DFE_F1_POL_EN_S_LANE		= speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
   4A30 EC                 6186 	mov	a,r4
   4A31 24 04              6187 	add	a,#_speedtable
   4A33 FA                 6188 	mov	r2,a
   4A34 ED                 6189 	mov	a,r5
   4A35 34 63              6190 	addc	a,#(_speedtable >> 8)
   4A37 FB                 6191 	mov	r3,a
   4A38 74 39              6192 	mov	a,#0x39
   4A3A 2A                 6193 	add	a,r2
   4A3B F5 82              6194 	mov	dpl,a
   4A3D E4                 6195 	clr	a
   4A3E 3B                 6196 	addc	a,r3
   4A3F F5 83              6197 	mov	dph,a
   4A41 E0                 6198 	movx	a,@dptr
   4A42 90 24 19           6199 	mov	dptr,#(_DFE_ANA_REG0 + 0x0001)
   4A45 13                 6200 	rrc	a
   4A46 E0                 6201 	movx	a,@dptr
   4A47 92 E3              6202 	mov	acc.3,c
   4A49 F0                 6203 	movx	@dptr,a
                           6204 ;	../../shared/src/spd_ctrl.c:629: reg_ANA_RX_DFE_F1_POL_D_LANE		= speedtable[gen][spdoft_dfe_f1_pol_d_lane];
   4A4A EC                 6205 	mov	a,r4
   4A4B 24 04              6206 	add	a,#_speedtable
   4A4D FA                 6207 	mov	r2,a
   4A4E ED                 6208 	mov	a,r5
   4A4F 34 63              6209 	addc	a,#(_speedtable >> 8)
   4A51 FB                 6210 	mov	r3,a
   4A52 74 3A              6211 	mov	a,#0x3A
   4A54 2A                 6212 	add	a,r2
   4A55 F5 82              6213 	mov	dpl,a
   4A57 E4                 6214 	clr	a
   4A58 3B                 6215 	addc	a,r3
   4A59 F5 83              6216 	mov	dph,a
   4A5B E0                 6217 	movx	a,@dptr
   4A5C 90 24 1A           6218 	mov	dptr,#(_DFE_ANA_REG0 + 0x0002)
   4A5F 13                 6219 	rrc	a
   4A60 E0                 6220 	movx	a,@dptr
   4A61 92 E2              6221 	mov	acc.2,c
   4A63 F0                 6222 	movx	@dptr,a
                           6223 ;	../../shared/src/spd_ctrl.c:630: reg_ANA_RX_DFE_F1_POL_S_LANE		= speedtable[gen][spdoft_dfe_f1_pol_s_lane];
   4A64 EC                 6224 	mov	a,r4
   4A65 24 04              6225 	add	a,#_speedtable
   4A67 FA                 6226 	mov	r2,a
   4A68 ED                 6227 	mov	a,r5
   4A69 34 63              6228 	addc	a,#(_speedtable >> 8)
   4A6B FB                 6229 	mov	r3,a
   4A6C 74 3B              6230 	mov	a,#0x3B
   4A6E 2A                 6231 	add	a,r2
   4A6F F5 82              6232 	mov	dpl,a
   4A71 E4                 6233 	clr	a
   4A72 3B                 6234 	addc	a,r3
   4A73 F5 83              6235 	mov	dph,a
   4A75 E0                 6236 	movx	a,@dptr
   4A76 90 24 1A           6237 	mov	dptr,#(_DFE_ANA_REG0 + 0x0002)
   4A79 13                 6238 	rrc	a
   4A7A E0                 6239 	movx	a,@dptr
   4A7B 92 E3              6240 	mov	acc.3,c
   4A7D F0                 6241 	movx	@dptr,a
                           6242 ;	../../shared/src/spd_ctrl.c:631: reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
   4A7E EC                 6243 	mov	a,r4
   4A7F 24 04              6244 	add	a,#_speedtable
   4A81 FA                 6245 	mov	r2,a
   4A82 ED                 6246 	mov	a,r5
   4A83 34 63              6247 	addc	a,#(_speedtable >> 8)
   4A85 FB                 6248 	mov	r3,a
   4A86 74 3C              6249 	mov	a,#0x3C
   4A88 2A                 6250 	add	a,r2
   4A89 F5 82              6251 	mov	dpl,a
   4A8B E4                 6252 	clr	a
   4A8C 3B                 6253 	addc	a,r3
   4A8D F5 83              6254 	mov	dph,a
   4A8F E0                 6255 	movx	a,@dptr
   4A90 90 24 1D           6256 	mov	dptr,#(_DFE_ANA_REG1 + 0x0001)
   4A93 13                 6257 	rrc	a
   4A94 E0                 6258 	movx	a,@dptr
   4A95 92 E2              6259 	mov	acc.2,c
   4A97 F0                 6260 	movx	@dptr,a
                           6261 ;	../../shared/src/spd_ctrl.c:632: reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
   4A98 EC                 6262 	mov	a,r4
   4A99 24 04              6263 	add	a,#_speedtable
   4A9B FA                 6264 	mov	r2,a
   4A9C ED                 6265 	mov	a,r5
   4A9D 34 63              6266 	addc	a,#(_speedtable >> 8)
   4A9F FB                 6267 	mov	r3,a
   4AA0 74 3D              6268 	mov	a,#0x3D
   4AA2 2A                 6269 	add	a,r2
   4AA3 F5 82              6270 	mov	dpl,a
   4AA5 E4                 6271 	clr	a
   4AA6 3B                 6272 	addc	a,r3
   4AA7 F5 83              6273 	mov	dph,a
   4AA9 E0                 6274 	movx	a,@dptr
   4AAA 90 24 1D           6275 	mov	dptr,#(_DFE_ANA_REG1 + 0x0001)
   4AAD 13                 6276 	rrc	a
   4AAE E0                 6277 	movx	a,@dptr
   4AAF 92 E3              6278 	mov	acc.3,c
   4AB1 F0                 6279 	movx	@dptr,a
                           6280 ;	../../shared/src/spd_ctrl.c:633: reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
   4AB2 EC                 6281 	mov	a,r4
   4AB3 24 04              6282 	add	a,#_speedtable
   4AB5 FA                 6283 	mov	r2,a
   4AB6 ED                 6284 	mov	a,r5
   4AB7 34 63              6285 	addc	a,#(_speedtable >> 8)
   4AB9 FB                 6286 	mov	r3,a
   4ABA 74 3E              6287 	mov	a,#0x3E
   4ABC 2A                 6288 	add	a,r2
   4ABD F5 82              6289 	mov	dpl,a
   4ABF E4                 6290 	clr	a
   4AC0 3B                 6291 	addc	a,r3
   4AC1 F5 83              6292 	mov	dph,a
   4AC3 E0                 6293 	movx	a,@dptr
   4AC4 90 24 1E           6294 	mov	dptr,#(_DFE_ANA_REG1 + 0x0002)
   4AC7 13                 6295 	rrc	a
   4AC8 E0                 6296 	movx	a,@dptr
   4AC9 92 E2              6297 	mov	acc.2,c
   4ACB F0                 6298 	movx	@dptr,a
                           6299 ;	../../shared/src/spd_ctrl.c:634: reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
   4ACC EC                 6300 	mov	a,r4
   4ACD 24 04              6301 	add	a,#_speedtable
   4ACF FA                 6302 	mov	r2,a
   4AD0 ED                 6303 	mov	a,r5
   4AD1 34 63              6304 	addc	a,#(_speedtable >> 8)
   4AD3 FB                 6305 	mov	r3,a
   4AD4 74 3F              6306 	mov	a,#0x3F
   4AD6 2A                 6307 	add	a,r2
   4AD7 F5 82              6308 	mov	dpl,a
   4AD9 E4                 6309 	clr	a
   4ADA 3B                 6310 	addc	a,r3
   4ADB F5 83              6311 	mov	dph,a
   4ADD E0                 6312 	movx	a,@dptr
   4ADE 90 24 1E           6313 	mov	dptr,#(_DFE_ANA_REG1 + 0x0002)
   4AE1 13                 6314 	rrc	a
   4AE2 E0                 6315 	movx	a,@dptr
   4AE3 92 E3              6316 	mov	acc.3,c
   4AE5 F0                 6317 	movx	@dptr,a
                           6318 ;	../../shared/src/spd_ctrl.c:635: reg_DFE_FULL_RATE_MODE_LANE		= speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];
   4AE6 EC                 6319 	mov	a,r4
   4AE7 24 04              6320 	add	a,#_speedtable
   4AE9 FA                 6321 	mov	r2,a
   4AEA ED                 6322 	mov	a,r5
   4AEB 34 63              6323 	addc	a,#(_speedtable >> 8)
   4AED FB                 6324 	mov	r3,a
   4AEE 74 40              6325 	mov	a,#0x40
   4AF0 2A                 6326 	add	a,r2
   4AF1 F5 82              6327 	mov	dpl,a
   4AF3 E4                 6328 	clr	a
   4AF4 3B                 6329 	addc	a,r3
   4AF5 F5 83              6330 	mov	dph,a
   4AF7 E0                 6331 	movx	a,@dptr
   4AF8 90 24 0D           6332 	mov	dptr,#(_DFE_CTRL_REG3 + 0x0001)
   4AFB 13                 6333 	rrc	a
   4AFC E0                 6334 	movx	a,@dptr
   4AFD 92 E0              6335 	mov	acc.0,c
   4AFF F0                 6336 	movx	@dptr,a
                           6337 ;	../../shared/src/spd_ctrl.c:638: reg_PU_F1N_S_O_LANE			= speedtable[gen][spdoft_pu_f1n_s_o_lane];
   4B00 EC                 6338 	mov	a,r4
   4B01 24 04              6339 	add	a,#_speedtable
   4B03 FA                 6340 	mov	r2,a
   4B04 ED                 6341 	mov	a,r5
   4B05 34 63              6342 	addc	a,#(_speedtable >> 8)
   4B07 FB                 6343 	mov	r3,a
   4B08 74 36              6344 	mov	a,#0x36
   4B0A 2A                 6345 	add	a,r2
   4B0B F5 82              6346 	mov	dpl,a
   4B0D E4                 6347 	clr	a
   4B0E 3B                 6348 	addc	a,r3
   4B0F F5 83              6349 	mov	dph,a
   4B11 E0                 6350 	movx	a,@dptr
   4B12 90 00 60           6351 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4B15 13                 6352 	rrc	a
   4B16 E0                 6353 	movx	a,@dptr
   4B17 92 E4              6354 	mov	acc.4,c
   4B19 F0                 6355 	movx	@dptr,a
                           6356 ;	../../shared/src/spd_ctrl.c:639: reg_PU_F1N_D_O_LANE			= speedtable[gen][spdoft_pu_f1n_d_o_lane];
   4B1A EC                 6357 	mov	a,r4
   4B1B 24 04              6358 	add	a,#_speedtable
   4B1D FA                 6359 	mov	r2,a
   4B1E ED                 6360 	mov	a,r5
   4B1F 34 63              6361 	addc	a,#(_speedtable >> 8)
   4B21 FB                 6362 	mov	r3,a
   4B22 74 34              6363 	mov	a,#0x34
   4B24 2A                 6364 	add	a,r2
   4B25 F5 82              6365 	mov	dpl,a
   4B27 E4                 6366 	clr	a
   4B28 3B                 6367 	addc	a,r3
   4B29 F5 83              6368 	mov	dph,a
   4B2B E0                 6369 	movx	a,@dptr
   4B2C 90 00 60           6370 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4B2F 13                 6371 	rrc	a
   4B30 E0                 6372 	movx	a,@dptr
   4B31 92 E6              6373 	mov	acc.6,c
   4B33 F0                 6374 	movx	@dptr,a
                           6375 ;	../../shared/src/spd_ctrl.c:640: reg_PU_F1N_S_E_LANE			= speedtable[gen][spdoft_pu_f1n_s_e_lane];
   4B34 EC                 6376 	mov	a,r4
   4B35 24 04              6377 	add	a,#_speedtable
   4B37 FA                 6378 	mov	r2,a
   4B38 ED                 6379 	mov	a,r5
   4B39 34 63              6380 	addc	a,#(_speedtable >> 8)
   4B3B FB                 6381 	mov	r3,a
   4B3C 74 32              6382 	mov	a,#0x32
   4B3E 2A                 6383 	add	a,r2
   4B3F F5 82              6384 	mov	dpl,a
   4B41 E4                 6385 	clr	a
   4B42 3B                 6386 	addc	a,r3
   4B43 F5 83              6387 	mov	dph,a
   4B45 E0                 6388 	movx	a,@dptr
   4B46 90 00 5C           6389 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4B49 13                 6390 	rrc	a
   4B4A E0                 6391 	movx	a,@dptr
   4B4B 92 E0              6392 	mov	acc.0,c
   4B4D F0                 6393 	movx	@dptr,a
                           6394 ;	../../shared/src/spd_ctrl.c:641: reg_PU_F1N_D_E_LANE			= speedtable[gen][spdoft_pu_f1n_d_e_lane];
   4B4E EC                 6395 	mov	a,r4
   4B4F 24 04              6396 	add	a,#_speedtable
   4B51 FA                 6397 	mov	r2,a
   4B52 ED                 6398 	mov	a,r5
   4B53 34 63              6399 	addc	a,#(_speedtable >> 8)
   4B55 FB                 6400 	mov	r3,a
   4B56 74 30              6401 	mov	a,#0x30
   4B58 2A                 6402 	add	a,r2
   4B59 F5 82              6403 	mov	dpl,a
   4B5B E4                 6404 	clr	a
   4B5C 3B                 6405 	addc	a,r3
   4B5D F5 83              6406 	mov	dph,a
   4B5F E0                 6407 	movx	a,@dptr
   4B60 90 00 5C           6408 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4B63 13                 6409 	rrc	a
   4B64 E0                 6410 	movx	a,@dptr
   4B65 92 E2              6411 	mov	acc.2,c
   4B67 F0                 6412 	movx	@dptr,a
                           6413 ;	../../shared/src/spd_ctrl.c:642: reg_PU_F1P_S_E_LANE			= speedtable[gen][spdoft_pu_f1p_s_e_lane];
   4B68 EC                 6414 	mov	a,r4
   4B69 24 04              6415 	add	a,#_speedtable
   4B6B FA                 6416 	mov	r2,a
   4B6C ED                 6417 	mov	a,r5
   4B6D 34 63              6418 	addc	a,#(_speedtable >> 8)
   4B6F FB                 6419 	mov	r3,a
   4B70 74 31              6420 	mov	a,#0x31
   4B72 2A                 6421 	add	a,r2
   4B73 F5 82              6422 	mov	dpl,a
   4B75 E4                 6423 	clr	a
   4B76 3B                 6424 	addc	a,r3
   4B77 F5 83              6425 	mov	dph,a
   4B79 E0                 6426 	movx	a,@dptr
   4B7A FA                 6427 	mov	r2,a
   4B7B 90 00 5C           6428 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4B7E 13                 6429 	rrc	a
   4B7F E0                 6430 	movx	a,@dptr
   4B80 92 E1              6431 	mov	acc.1,c
   4B82 F0                 6432 	movx	@dptr,a
   4B83                    6433 00165$:
                           6434 ;	../../shared/src/spd_ctrl.c:645: reg_PU_F1P_S_O_LANE			= speedtable[gen][spdoft_pu_f1p_s_o_lane];
   4B83 EC                 6435 	mov	a,r4
   4B84 24 04              6436 	add	a,#_speedtable
   4B86 FA                 6437 	mov	r2,a
   4B87 ED                 6438 	mov	a,r5
   4B88 34 63              6439 	addc	a,#(_speedtable >> 8)
   4B8A FB                 6440 	mov	r3,a
   4B8B 74 35              6441 	mov	a,#0x35
   4B8D 2A                 6442 	add	a,r2
   4B8E F5 82              6443 	mov	dpl,a
   4B90 E4                 6444 	clr	a
   4B91 3B                 6445 	addc	a,r3
   4B92 F5 83              6446 	mov	dph,a
   4B94 E0                 6447 	movx	a,@dptr
   4B95 90 00 60           6448 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4B98 13                 6449 	rrc	a
   4B99 E0                 6450 	movx	a,@dptr
   4B9A 92 E5              6451 	mov	acc.5,c
   4B9C F0                 6452 	movx	@dptr,a
                           6453 ;	../../shared/src/spd_ctrl.c:646: reg_PU_F1P_D_O_LANE			= speedtable[gen][spdoft_pu_f1p_d_o_lane];
   4B9D EC                 6454 	mov	a,r4
   4B9E 24 04              6455 	add	a,#_speedtable
   4BA0 FA                 6456 	mov	r2,a
   4BA1 ED                 6457 	mov	a,r5
   4BA2 34 63              6458 	addc	a,#(_speedtable >> 8)
   4BA4 FB                 6459 	mov	r3,a
   4BA5 74 33              6460 	mov	a,#0x33
   4BA7 2A                 6461 	add	a,r2
   4BA8 F5 82              6462 	mov	dpl,a
   4BAA E4                 6463 	clr	a
   4BAB 3B                 6464 	addc	a,r3
   4BAC F5 83              6465 	mov	dph,a
   4BAE E0                 6466 	movx	a,@dptr
   4BAF 90 00 60           6467 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   4BB2 13                 6468 	rrc	a
   4BB3 E0                 6469 	movx	a,@dptr
   4BB4 92 E7              6470 	mov	acc.7,c
   4BB6 F0                 6471 	movx	@dptr,a
                           6472 ;	../../shared/src/spd_ctrl.c:647: reg_PU_F1P_D_E_LANE			= speedtable[gen][spdoft_pu_f1p_d_e_lane];
   4BB7 EC                 6473 	mov	a,r4
   4BB8 24 04              6474 	add	a,#_speedtable
   4BBA FC                 6475 	mov	r4,a
   4BBB ED                 6476 	mov	a,r5
   4BBC 34 63              6477 	addc	a,#(_speedtable >> 8)
   4BBE FD                 6478 	mov	r5,a
   4BBF 74 2F              6479 	mov	a,#0x2F
   4BC1 2C                 6480 	add	a,r4
   4BC2 F5 82              6481 	mov	dpl,a
   4BC4 E4                 6482 	clr	a
   4BC5 3D                 6483 	addc	a,r5
   4BC6 F5 83              6484 	mov	dph,a
   4BC8 E0                 6485 	movx	a,@dptr
   4BC9 FA                 6486 	mov	r2,a
   4BCA 90 00 5C           6487 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   4BCD 13                 6488 	rrc	a
   4BCE E0                 6489 	movx	a,@dptr
   4BCF 92 E3              6490 	mov	acc.3,c
   4BD1 F0                 6491 	movx	@dptr,a
                           6492 ;	../../shared/src/spd_ctrl.c:650: if(cmx_TX_SSC_CTRL_SEL) {
   4BD2 90 E6 13           6493 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   4BD5 E0                 6494 	movx	a,@dptr
   4BD6 20 E4 03           6495 	jb	acc.4,00250$
   4BD9 02 4C 88           6496 	ljmp	00175$
   4BDC                    6497 00250$:
                           6498 ;	../../shared/src/spd_ctrl.c:651: reg_SSC_EN_FM_REG_LANE = 1;
   4BDC 90 20 0C           6499 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   4BDF E0                 6500 	movx	a,@dptr
   4BE0 44 02              6501 	orl	a,#0x02
   4BE2 F0                 6502 	movx	@dptr,a
                           6503 ;	../../shared/src/spd_ctrl.c:652: if(train_save_tb[gen].ssc_en) 
   4BE3 A8 18              6504 	mov	r0,_bp
   4BE5 08                 6505 	inc	r0
   4BE6 E6                 6506 	mov	a,@r0
   4BE7 25 E0              6507 	add	a,acc
   4BE9 25 E0              6508 	add	a,acc
   4BEB FA                 6509 	mov	r2,a
   4BEC 24 98              6510 	add	a,#_train_save_tb
   4BEE FB                 6511 	mov	r3,a
   4BEF E4                 6512 	clr	a
   4BF0 34 E6              6513 	addc	a,#(_train_save_tb >> 8)
   4BF2 FC                 6514 	mov	r4,a
   4BF3 8B 82              6515 	mov	dpl,r3
   4BF5 8C 83              6516 	mov	dph,r4
   4BF7 E0                 6517 	movx	a,@dptr
   4BF8 30 E0 09           6518 	jnb	acc.0,00169$
                           6519 ;	../../shared/src/spd_ctrl.c:653: reg_SSC_EN_LANE = 1;
   4BFB 90 20 0C           6520 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   4BFE E0                 6521 	movx	a,@dptr
   4BFF 44 04              6522 	orl	a,#0x04
   4C01 F0                 6523 	movx	@dptr,a
   4C02 80 07              6524 	sjmp	00170$
   4C04                    6525 00169$:
                           6526 ;	../../shared/src/spd_ctrl.c:654: else reg_SSC_EN_LANE = 0;
   4C04 90 20 0C           6527 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   4C07 E0                 6528 	movx	a,@dptr
   4C08 54 FB              6529 	anl	a,#0xfb
   4C0A F0                 6530 	movx	@dptr,a
   4C0B                    6531 00170$:
                           6532 ;	../../shared/src/spd_ctrl.c:656: if(use_ring_pll) {
   4C0B 30 10 3F           6533 	jnb	_use_ring_pll,00172$
                           6534 ;	../../shared/src/spd_ctrl.c:661: reg_SSC_DSPREAD_TX_RING			= tx_tb[gen].ssc_dspread;
   4C0E EA                 6535 	mov	a,r2
   4C0F 24 84              6536 	add	a,#_tx_tb
   4C11 FB                 6537 	mov	r3,a
   4C12 E4                 6538 	clr	a
   4C13 34 E6              6539 	addc	a,#(_tx_tb >> 8)
   4C15 FC                 6540 	mov	r4,a
   4C16 8B 82              6541 	mov	dpl,r3
   4C18 8C 83              6542 	mov	dph,r4
   4C1A A3                 6543 	inc	dptr
   4C1B A3                 6544 	inc	dptr
   4C1C A3                 6545 	inc	dptr
   4C1D E0                 6546 	movx	a,@dptr
   4C1E 23                 6547 	rl	a
   4C1F 54 01              6548 	anl	a,#0x01
   4C21 90 A0 13           6549 	mov	dptr,#(_DTX_REG2 + 0x0003)
   4C24 13                 6550 	rrc	a
   4C25 E0                 6551 	movx	a,@dptr
   4C26 92 E6              6552 	mov	acc.6,c
   4C28 F0                 6553 	movx	@dptr,a
                           6554 ;	../../shared/src/spd_ctrl.c:662: reg_SSC_AMP_RING_6_0			= tx_tb[gen].ssc_amp;
   4C29 EA                 6555 	mov	a,r2
   4C2A 24 84              6556 	add	a,#_tx_tb
   4C2C FB                 6557 	mov	r3,a
   4C2D E4                 6558 	clr	a
   4C2E 34 E6              6559 	addc	a,#(_tx_tb >> 8)
   4C30 FC                 6560 	mov	r4,a
   4C31 8B 82              6561 	mov	dpl,r3
   4C33 8C 83              6562 	mov	dph,r4
   4C35 A3                 6563 	inc	dptr
   4C36 A3                 6564 	inc	dptr
   4C37 A3                 6565 	inc	dptr
   4C38 E0                 6566 	movx	a,@dptr
   4C39 54 7F              6567 	anl	a,#0x7f
   4C3B FB                 6568 	mov	r3,a
   4C3C 90 A0 1B           6569 	mov	dptr,#(_DTX_REG4 + 0x0003)
   4C3F 25 E0              6570 	add	a,acc
   4C41 54 FE              6571 	anl	a,#0xfe
   4C43 F5 F0              6572 	mov	b,a
   4C45 E0                 6573 	movx	a,@dptr
   4C46 54 01              6574 	anl	a,#0x01
   4C48 45 F0              6575 	orl	a,b
   4C4A F0                 6576 	movx	@dptr,a
   4C4B 80 3B              6577 	sjmp	00175$
   4C4D                    6578 00172$:
                           6579 ;	../../shared/src/spd_ctrl.c:666: reg_SSC_DSPREAD_TX 			= tx_tb[gen].ssc_dspread;
   4C4D EA                 6580 	mov	a,r2
   4C4E 24 84              6581 	add	a,#_tx_tb
   4C50 FB                 6582 	mov	r3,a
   4C51 E4                 6583 	clr	a
   4C52 34 E6              6584 	addc	a,#(_tx_tb >> 8)
   4C54 FC                 6585 	mov	r4,a
   4C55 8B 82              6586 	mov	dpl,r3
   4C57 8C 83              6587 	mov	dph,r4
   4C59 A3                 6588 	inc	dptr
   4C5A A3                 6589 	inc	dptr
   4C5B A3                 6590 	inc	dptr
   4C5C E0                 6591 	movx	a,@dptr
   4C5D 23                 6592 	rl	a
   4C5E 54 01              6593 	anl	a,#0x01
   4C60 90 A0 0B           6594 	mov	dptr,#(_DTX_REG0 + 0x0003)
   4C63 13                 6595 	rrc	a
   4C64 E0                 6596 	movx	a,@dptr
   4C65 92 E6              6597 	mov	acc.6,c
   4C67 F0                 6598 	movx	@dptr,a
                           6599 ;	../../shared/src/spd_ctrl.c:667: reg_SSC_AMP_6_0				= tx_tb[gen].ssc_amp;
   4C68 EA                 6600 	mov	a,r2
   4C69 24 84              6601 	add	a,#_tx_tb
   4C6B FA                 6602 	mov	r2,a
   4C6C E4                 6603 	clr	a
   4C6D 34 E6              6604 	addc	a,#(_tx_tb >> 8)
   4C6F FB                 6605 	mov	r3,a
   4C70 8A 82              6606 	mov	dpl,r2
   4C72 8B 83              6607 	mov	dph,r3
   4C74 A3                 6608 	inc	dptr
   4C75 A3                 6609 	inc	dptr
   4C76 A3                 6610 	inc	dptr
   4C77 E0                 6611 	movx	a,@dptr
   4C78 54 7F              6612 	anl	a,#0x7f
   4C7A FA                 6613 	mov	r2,a
   4C7B 90 A0 12           6614 	mov	dptr,#(_DTX_REG2 + 0x0002)
   4C7E 54 7F              6615 	anl	a,#0x7f
   4C80 F5 F0              6616 	mov	b,a
   4C82 E0                 6617 	movx	a,@dptr
   4C83 54 80              6618 	anl	a,#0x80
   4C85 45 F0              6619 	orl	a,b
   4C87 F0                 6620 	movx	@dptr,a
   4C88                    6621 00175$:
                           6622 ;	../../shared/src/spd_ctrl.c:672: if(sq_thrs_ratio_gen_en & (0x01<<gen)) {
   4C88 A8 18              6623 	mov	r0,_bp
   4C8A 08                 6624 	inc	r0
   4C8B 86 F0              6625 	mov	b,@r0
   4C8D 05 F0              6626 	inc	b
   4C8F 7A 01              6627 	mov	r2,#0x01
   4C91 7B 00              6628 	mov	r3,#0x00
   4C93 80 06              6629 	sjmp	00254$
   4C95                    6630 00253$:
   4C95 EA                 6631 	mov	a,r2
   4C96 2A                 6632 	add	a,r2
   4C97 FA                 6633 	mov	r2,a
   4C98 EB                 6634 	mov	a,r3
   4C99 33                 6635 	rlc	a
   4C9A FB                 6636 	mov	r3,a
   4C9B                    6637 00254$:
   4C9B D5 F0 F7           6638 	djnz	b,00253$
   4C9E 90 67 A7           6639 	mov	dptr,#_sq_thrs_ratio_gen_en
   4CA1 E0                 6640 	movx	a,@dptr
   4CA2 FC                 6641 	mov	r4,a
   4CA3 7D 00              6642 	mov	r5,#0x00
   4CA5 52 02              6643 	anl	ar2,a
   4CA7 ED                 6644 	mov	a,r5
   4CA8 52 03              6645 	anl	ar3,a
   4CAA EA                 6646 	mov	a,r2
   4CAB 4B                 6647 	orl	a,r3
   4CAC 60 77              6648 	jz	00180$
                           6649 ;	../../shared/src/spd_ctrl.c:673: sq_thrs_ratio = sq_thrs_ratio_tb[gen];
   4CAE A8 18              6650 	mov	r0,_bp
   4CB0 08                 6651 	inc	r0
   4CB1 E6                 6652 	mov	a,@r0
   4CB2 24 7C              6653 	add	a,#_sq_thrs_ratio_tb
   4CB4 F5 82              6654 	mov	dpl,a
   4CB6 E4                 6655 	clr	a
   4CB7 34 60              6656 	addc	a,#(_sq_thrs_ratio_tb >> 8)
   4CB9 F5 83              6657 	mov	dph,a
   4CBB E0                 6658 	movx	a,@dptr
   4CBC FA                 6659 	mov	r2,a
   4CBD 90 67 A6           6660 	mov	dptr,#_sq_thrs_ratio
   4CC0 F0                 6661 	movx	@dptr,a
                           6662 ;	../../shared/src/spd_ctrl.c:674: temp = lnx_CAL_SQ_THRESH_LANE_7_0;
   4CC1 90 60 13           6663 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   4CC4 E0                 6664 	movx	a,@dptr
   4CC5 FB                 6665 	mov	r3,a
   4CC6 7C 00              6666 	mov	r4,#0x00
                           6667 ;	../../shared/src/spd_ctrl.c:675: if(sq_thrs_ratio==0)
   4CC8 EA                 6668 	mov	a,r2
   4CC9 70 15              6669 	jnz	00177$
                           6670 ;	../../shared/src/spd_ctrl.c:676: reg_SQ_THRESH_LANE_5_0 = (uint8_t)temp;
   4CCB 8B 05              6671 	mov	ar5,r3
   4CCD 90 00 10           6672 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   4CD0 ED                 6673 	mov	a,r5
   4CD1 2D                 6674 	add	a,r5
   4CD2 25 E0              6675 	add	a,acc
   4CD4 54 FC              6676 	anl	a,#0xfc
   4CD6 F5 F0              6677 	mov	b,a
   4CD8 E0                 6678 	movx	a,@dptr
   4CD9 54 03              6679 	anl	a,#0x03
   4CDB 45 F0              6680 	orl	a,b
   4CDD F0                 6681 	movx	@dptr,a
   4CDE 80 45              6682 	sjmp	00180$
   4CE0                    6683 00177$:
                           6684 ;	../../shared/src/spd_ctrl.c:678: temp = temp * sq_thrs_ratio;
   4CE0 7D 00              6685 	mov	r5,#0x00
   4CE2 C0 02              6686 	push	ar2
   4CE4 C0 05              6687 	push	ar5
   4CE6 8B 82              6688 	mov	dpl,r3
   4CE8 8C 83              6689 	mov	dph,r4
   4CEA 12 78 4F           6690 	lcall	__mulint
   4CED AA 82              6691 	mov	r2,dpl
   4CEF AD 83              6692 	mov	r5,dph
   4CF1 15 81              6693 	dec	sp
   4CF3 15 81              6694 	dec	sp
   4CF5 8A 03              6695 	mov	ar3,r2
   4CF7 8D 04              6696 	mov	ar4,r5
                           6697 ;	../../shared/src/spd_ctrl.c:679: reg_SQ_THRESH_LANE_5_0 = (lnx_CAL_SQ_THRESH_LANE_7_0&0x20) | ((uint8_t)(temp>>5));
   4CF9 90 60 13           6698 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   4CFC E0                 6699 	movx	a,@dptr
   4CFD FA                 6700 	mov	r2,a
   4CFE 53 02 20           6701 	anl	ar2,#0x20
   4D01 EC                 6702 	mov	a,r4
   4D02 C4                 6703 	swap	a
   4D03 03                 6704 	rr	a
   4D04 CB                 6705 	xch	a,r3
   4D05 C4                 6706 	swap	a
   4D06 03                 6707 	rr	a
   4D07 54 07              6708 	anl	a,#0x07
   4D09 6B                 6709 	xrl	a,r3
   4D0A CB                 6710 	xch	a,r3
   4D0B 54 07              6711 	anl	a,#0x07
   4D0D CB                 6712 	xch	a,r3
   4D0E 6B                 6713 	xrl	a,r3
   4D0F CB                 6714 	xch	a,r3
   4D10 FC                 6715 	mov	r4,a
   4D11 EB                 6716 	mov	a,r3
   4D12 42 02              6717 	orl	ar2,a
   4D14 90 00 10           6718 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   4D17 EA                 6719 	mov	a,r2
   4D18 2A                 6720 	add	a,r2
   4D19 25 E0              6721 	add	a,acc
   4D1B 54 FC              6722 	anl	a,#0xfc
   4D1D F5 F0              6723 	mov	b,a
   4D1F E0                 6724 	movx	a,@dptr
   4D20 54 03              6725 	anl	a,#0x03
   4D22 45 F0              6726 	orl	a,b
   4D24 F0                 6727 	movx	@dptr,a
   4D25                    6728 00180$:
                           6729 ;	../../shared/src/spd_ctrl.c:692: reg_MCU_DEBUG0_LANE_7_0 = 0x39;
   4D25 90 22 B4           6730 	mov	dptr,#_MCU_DEBUG0_LANE
   4D28 74 39              6731 	mov	a,#0x39
   4D2A F0                 6732 	movx	@dptr,a
   4D2B 85 18 81           6733 	mov	sp,_bp
   4D2E D0 18              6734 	pop	_bp
   4D30 22                 6735 	ret
                           6736 ;------------------------------------------------------------
                           6737 ;Allocation info for local variables in function 'loadSpeedtbl'
                           6738 ;------------------------------------------------------------
                           6739 ;------------------------------------------------------------
                           6740 ;	../../shared/src/spd_ctrl.c:696: void loadSpeedtbl(void) {
                           6741 ;	-----------------------------------------
                           6742 ;	 function loadSpeedtbl
                           6743 ;	-----------------------------------------
   4D31                    6744 _loadSpeedtbl:
                           6745 ;	../../shared/src/spd_ctrl.c:698: loadspeedtbl_gen();
   4D31 12 40 7E           6746 	lcall	_loadspeedtbl_gen
                           6747 ;	../../shared/src/spd_ctrl.c:706: if( mcuid== master_mcu ) {
   4D34 90 22 00           6748 	mov	dptr,#_MCU_CONTROL_LANE
   4D37 E0                 6749 	movx	a,@dptr
   4D38 FA                 6750 	mov	r2,a
   4D39 90 E6 50           6751 	mov	dptr,#_MCU_CONFIG
   4D3C E0                 6752 	movx	a,@dptr
   4D3D FB                 6753 	mov	r3,a
   4D3E EA                 6754 	mov	a,r2
   4D3F B5 03 36           6755 	cjne	a,ar3,00111$
                           6756 ;	../../shared/src/spd_ctrl.c:709: if(!use_ring_pll) {
   4D42 20 10 1C           6757 	jb	_use_ring_pll,00107$
                           6758 ;	../../shared/src/spd_ctrl.c:712: if (phy_mode==PCIE)
   4D45 90 A3 16           6759 	mov	dptr,#(_SYSTEM + 0x0002)
   4D48 E0                 6760 	movx	a,@dptr
   4D49 54 07              6761 	anl	a,#0x07
   4D4B FA                 6762 	mov	r2,a
   4D4C BA 03 09           6763 	cjne	r2,#0x03,00102$
                           6764 ;	../../shared/src/spd_ctrl.c:715: loadspeedtbl_pll(gen_pll_rate);
   4D4F 90 67 8C           6765 	mov	dptr,#_gen_pll_rate
   4D52 E0                 6766 	movx	a,@dptr
   4D53 F5 82              6767 	mov	dpl,a
   4D55 02 37 D4           6768 	ljmp	_loadspeedtbl_pll
   4D58                    6769 00102$:
                           6770 ;	../../shared/src/spd_ctrl.c:718: loadspeedtbl_pll(tx_pll_rate);
   4D58 A2 0F              6771 	mov	c,_tx_pll_rate
   4D5A E4                 6772 	clr	a
   4D5B 33                 6773 	rlc	a
   4D5C F5 82              6774 	mov	dpl,a
   4D5E 02 37 D4           6775 	ljmp	_loadspeedtbl_pll
   4D61                    6776 00107$:
                           6777 ;	../../shared/src/spd_ctrl.c:722: if( tx_pll_rate != PLL_RATE_SEL_RING )
   4D61 90 E6 1F           6778 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   4D64 E0                 6779 	movx	a,@dptr
   4D65 FA                 6780 	mov	r2,a
   4D66 A2 0F              6781 	mov	c,_tx_pll_rate
   4D68 E4                 6782 	clr	a
   4D69 33                 6783 	rlc	a
   4D6A FB                 6784 	mov	r3,a
   4D6B B5 02 01           6785 	cjne	a,ar2,00122$
   4D6E 22                 6786 	ret
   4D6F                    6787 00122$:
                           6788 ;	../../shared/src/spd_ctrl.c:723: loadspeedtbl_ringpll(tx_pll_rate);
   4D6F A2 0F              6789 	mov	c,_tx_pll_rate
   4D71 E4                 6790 	clr	a
   4D72 33                 6791 	rlc	a
   4D73 F5 82              6792 	mov	dpl,a
   4D75 02 3B A7           6793 	ljmp	_loadspeedtbl_ringpll
   4D78                    6794 00111$:
   4D78 22                 6795 	ret
                           6796 ;------------------------------------------------------------
                           6797 ;Allocation info for local variables in function 'loadSpdtbl_4_fcnt'
                           6798 ;------------------------------------------------------------
                           6799 ;fbck                      Allocated to registers 
                           6800 ;rate                      Allocated to registers r2 
                           6801 ;------------------------------------------------------------
                           6802 ;	../../shared/src/spd_ctrl.c:732: void loadSpdtbl_4_fcnt(void) {
                           6803 ;	-----------------------------------------
                           6804 ;	 function loadSpdtbl_4_fcnt
                           6805 ;	-----------------------------------------
   4D79                    6806 _loadSpdtbl_4_fcnt:
                           6807 ;	../../shared/src/spd_ctrl.c:736: if(phy_mode==SERDES) rate = gen_pll_rate;
   4D79 90 A3 16           6808 	mov	dptr,#(_SYSTEM + 0x0002)
   4D7C E0                 6809 	movx	a,@dptr
   4D7D 54 07              6810 	anl	a,#0x07
   4D7F FA                 6811 	mov	r2,a
   4D80 BA 04 07           6812 	cjne	r2,#0x04,00102$
   4D83 90 67 8C           6813 	mov	dptr,#_gen_pll_rate
   4D86 E0                 6814 	movx	a,@dptr
   4D87 FA                 6815 	mov	r2,a
   4D88 80 06              6816 	sjmp	00103$
   4D8A                    6817 00102$:
                           6818 ;	../../shared/src/spd_ctrl.c:737: else rate = PLL_RATE_SEL;
   4D8A 90 E6 1E           6819 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   4D8D E0                 6820 	movx	a,@dptr
   4D8E FB                 6821 	mov	r3,a
   4D8F FA                 6822 	mov	r2,a
   4D90                    6823 00103$:
                           6824 ;	../../shared/src/spd_ctrl.c:739: reg_FBDIV_7_0 		= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
   4D90 EA                 6825 	mov	a,r2
   4D91 C4                 6826 	swap	a
   4D92 23                 6827 	rl	a
   4D93 54 E0              6828 	anl	a,#0xe0
   4D95 FA                 6829 	mov	r2,a
   4D96 FB                 6830 	mov	r3,a
   4D97 7C E0              6831 	mov	r4,#(_lc_speedtable >> 8)
   4D99 8B 82              6832 	mov	dpl,r3
   4D9B 8C 83              6833 	mov	dph,r4
   4D9D A3                 6834 	inc	dptr
   4D9E A3                 6835 	inc	dptr
   4D9F A3                 6836 	inc	dptr
   4DA0 A3                 6837 	inc	dptr
   4DA1 E0                 6838 	movx	a,@dptr
   4DA2 90 82 A4           6839 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_169
   4DA5 F0                 6840 	movx	@dptr,a
                           6841 ;	../../shared/src/spd_ctrl.c:740: reg_FBDIV_9_8 		= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];
   4DA6 7B E0              6842 	mov	r3,#(_lc_speedtable >> 8)
   4DA8 8A 82              6843 	mov	dpl,r2
   4DAA 8B 83              6844 	mov	dph,r3
   4DAC A3                 6845 	inc	dptr
   4DAD A3                 6846 	inc	dptr
   4DAE A3                 6847 	inc	dptr
   4DAF A3                 6848 	inc	dptr
   4DB0 A3                 6849 	inc	dptr
   4DB1 E0                 6850 	movx	a,@dptr
   4DB2 90 82 A0           6851 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_168
   4DB5 C4                 6852 	swap	a
   4DB6 54 30              6853 	anl	a,#(0xf0&0x30)
   4DB8 F5 F0              6854 	mov	b,a
   4DBA E0                 6855 	movx	a,@dptr
   4DBB 54 CF              6856 	anl	a,#0xcf
   4DBD 45 F0              6857 	orl	a,b
   4DBF F0                 6858 	movx	@dptr,a
                           6859 ;	../../shared/src/spd_ctrl.c:741: reg_ANA_FBCK_SEL = 0;
   4DC0 90 A3 19           6860 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   4DC3 E0                 6861 	movx	a,@dptr
   4DC4 54 FD              6862 	anl	a,#0xfd
   4DC6 F0                 6863 	movx	@dptr,a
   4DC7 22                 6864 	ret
                           6865 ;------------------------------------------------------------
                           6866 ;Allocation info for local variables in function 'ringloadSpdtbl_4_fcnt'
                           6867 ;------------------------------------------------------------
                           6868 ;fbck                      Allocated to registers 
                           6869 ;ck1g                      Allocated to registers r2 
                           6870 ;rate                      Allocated to registers r3 
                           6871 ;------------------------------------------------------------
                           6872 ;	../../shared/src/spd_ctrl.c:745: void ringloadSpdtbl_4_fcnt(void) {
                           6873 ;	-----------------------------------------
                           6874 ;	 function ringloadSpdtbl_4_fcnt
                           6875 ;	-----------------------------------------
   4DC8                    6876 _ringloadSpdtbl_4_fcnt:
                           6877 ;	../../shared/src/spd_ctrl.c:749: ck1g = ring_use_250m;
   4DC8 A2 13              6878 	mov	c,_ring_use_250m
   4DCA E4                 6879 	clr	a
   4DCB 33                 6880 	rlc	a
   4DCC FA                 6881 	mov	r2,a
                           6882 ;	../../shared/src/spd_ctrl.c:750: if(phy_mode==SERDES) rate = gen_pll_rate;
   4DCD 90 A3 16           6883 	mov	dptr,#(_SYSTEM + 0x0002)
   4DD0 E0                 6884 	movx	a,@dptr
   4DD1 54 07              6885 	anl	a,#0x07
   4DD3 FB                 6886 	mov	r3,a
   4DD4 BB 04 07           6887 	cjne	r3,#0x04,00102$
   4DD7 90 67 8C           6888 	mov	dptr,#_gen_pll_rate
   4DDA E0                 6889 	movx	a,@dptr
   4DDB FB                 6890 	mov	r3,a
   4DDC 80 06              6891 	sjmp	00103$
   4DDE                    6892 00102$:
                           6893 ;	../../shared/src/spd_ctrl.c:751: else rate = PLL_RATE_SEL_RING;
   4DDE 90 E6 1F           6894 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   4DE1 E0                 6895 	movx	a,@dptr
   4DE2 FC                 6896 	mov	r4,a
   4DE3 FB                 6897 	mov	r3,a
   4DE4                    6898 00103$:
                           6899 ;	../../shared/src/spd_ctrl.c:758: reg_PLL_FBDIV_RING_7_0 = ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring];
   4DE4 7C 00              6900 	mov	r4,#0x00
   4DE6 C0 03              6901 	push	ar3
   4DE8 C0 02              6902 	push	ar2
   4DEA C0 04              6903 	push	ar4
   4DEC 90 01 20           6904 	mov	dptr,#0x0120
   4DEF 12 78 4F           6905 	lcall	__mulint
   4DF2 AA 82              6906 	mov	r2,dpl
   4DF4 AC 83              6907 	mov	r4,dph
   4DF6 15 81              6908 	dec	sp
   4DF8 15 81              6909 	dec	sp
   4DFA D0 03              6910 	pop	ar3
   4DFC EA                 6911 	mov	a,r2
   4DFD 24 C0              6912 	add	a,#_ring_speedtable
   4DFF FD                 6913 	mov	r5,a
   4E00 EC                 6914 	mov	a,r4
   4E01 34 E1              6915 	addc	a,#(_ring_speedtable >> 8)
   4E03 FE                 6916 	mov	r6,a
   4E04 EB                 6917 	mov	a,r3
   4E05 75 F0 24           6918 	mov	b,#0x24
   4E08 A4                 6919 	mul	ab
   4E09 FB                 6920 	mov	r3,a
   4E0A 2D                 6921 	add	a,r5
   4E0B FD                 6922 	mov	r5,a
   4E0C E4                 6923 	clr	a
   4E0D 3E                 6924 	addc	a,r6
   4E0E FE                 6925 	mov	r6,a
   4E0F 74 0B              6926 	mov	a,#0x0B
   4E11 2D                 6927 	add	a,r5
   4E12 F5 82              6928 	mov	dpl,a
   4E14 E4                 6929 	clr	a
   4E15 3E                 6930 	addc	a,r6
   4E16 F5 83              6931 	mov	dph,a
   4E18 E0                 6932 	movx	a,@dptr
   4E19 90 82 F4           6933 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   4E1C F0                 6934 	movx	@dptr,a
                           6935 ;	../../shared/src/spd_ctrl.c:759: reg_PLL_FBDIV_RING_9_8 = ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring+1];
   4E1D EA                 6936 	mov	a,r2
   4E1E 24 C0              6937 	add	a,#_ring_speedtable
   4E20 FA                 6938 	mov	r2,a
   4E21 EC                 6939 	mov	a,r4
   4E22 34 E1              6940 	addc	a,#(_ring_speedtable >> 8)
   4E24 FC                 6941 	mov	r4,a
   4E25 EB                 6942 	mov	a,r3
   4E26 2A                 6943 	add	a,r2
   4E27 FB                 6944 	mov	r3,a
   4E28 E4                 6945 	clr	a
   4E29 3C                 6946 	addc	a,r4
   4E2A FD                 6947 	mov	r5,a
   4E2B 74 0C              6948 	mov	a,#0x0C
   4E2D 2B                 6949 	add	a,r3
   4E2E F5 82              6950 	mov	dpl,a
   4E30 E4                 6951 	clr	a
   4E31 3D                 6952 	addc	a,r5
   4E32 F5 83              6953 	mov	dph,a
   4E34 E0                 6954 	movx	a,@dptr
   4E35 90 82 F0           6955 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   4E38 25 E0              6956 	add	a,acc
   4E3A 54 06              6957 	anl	a,#0x06
   4E3C F5 F0              6958 	mov	b,a
   4E3E E0                 6959 	movx	a,@dptr
   4E3F 54 F9              6960 	anl	a,#0xf9
   4E41 45 F0              6961 	orl	a,b
   4E43 F0                 6962 	movx	@dptr,a
                           6963 ;	../../shared/src/spd_ctrl.c:760: reg_ANA_FBCK_SEL_RING = 0;
   4E44 90 A3 18           6964 	mov	dptr,#_PM_CMN_REG1
   4E47 E0                 6965 	movx	a,@dptr
   4E48 54 FB              6966 	anl	a,#0xfb
   4E4A F0                 6967 	movx	@dptr,a
   4E4B 22                 6968 	ret
                           6969 	.area CSEG    (CODE)
                           6970 	.area CONST   (CODE)
                           6971 	.area CABS    (ABS,CODE)
