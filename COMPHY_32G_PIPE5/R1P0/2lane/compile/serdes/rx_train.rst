                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:22:03 2018
                              5 ;--------------------------------------------------------
                              6 	.module rx_train
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _rx_ffe_set_r_pcie_tb
                             13 	.globl _rx_ffe_set_r_tb
                             14 	.globl _rx_ffe_set_c_tb
                             15 	.globl _TF2
                             16 	.globl _TI
                             17 	.globl _RI
                             18 	.globl _EX12
                             19 	.globl _EX11
                             20 	.globl _EX10
                             21 	.globl _EX9
                             22 	.globl _EX8
                             23 	.globl _ES1
                             24 	.globl _PS1
                             25 	.globl _EX6
                             26 	.globl _EX5
                             27 	.globl _EX4
                             28 	.globl _EX3
                             29 	.globl _EX2
                             30 	.globl _EX7
                             31 	.globl _EA
                             32 	.globl _WDT
                             33 	.globl _ET2
                             34 	.globl _ES
                             35 	.globl _ET1
                             36 	.globl _EX1
                             37 	.globl _ET0
                             38 	.globl _EX0
                             39 	.globl _TF1
                             40 	.globl _TR1
                             41 	.globl _TF0
                             42 	.globl _TR0
                             43 	.globl _IE1
                             44 	.globl _IT1
                             45 	.globl _IE0
                             46 	.globl _IT0
                             47 	.globl _P3_7
                             48 	.globl _P3_6
                             49 	.globl _P3_5
                             50 	.globl _P3_4
                             51 	.globl _P3_3
                             52 	.globl _P3_2
                             53 	.globl _P3_1
                             54 	.globl _P3_0
                             55 	.globl _P2_7
                             56 	.globl _P2_6
                             57 	.globl _P2_5
                             58 	.globl _P2_4
                             59 	.globl _P2_3
                             60 	.globl _P2_2
                             61 	.globl _P2_1
                             62 	.globl _P2_0
                             63 	.globl _P1_7
                             64 	.globl _P1_6
                             65 	.globl _P1_5
                             66 	.globl _P1_4
                             67 	.globl _P1_3
                             68 	.globl _P1_2
                             69 	.globl _P1_1
                             70 	.globl _P1_0
                             71 	.globl _P0_7
                             72 	.globl _P0_6
                             73 	.globl _P0_5
                             74 	.globl _P0_4
                             75 	.globl _P0_3
                             76 	.globl _P0_2
                             77 	.globl _P0_1
                             78 	.globl _P0_0
                             79 	.globl _DMAC
                             80 	.globl _DMATA
                             81 	.globl _DMASA
                             82 	.globl _TMR2
                             83 	.globl _TMR1
                             84 	.globl _TMR0
                             85 	.globl _SRST
                             86 	.globl _B
                             87 	.globl _EIE
                             88 	.globl _ACC
                             89 	.globl _ADCON
                             90 	.globl _PSW
                             91 	.globl _TH2
                             92 	.globl _TL2
                             93 	.globl _RCAP2H
                             94 	.globl _RCAP2L
                             95 	.globl _T2CON
                             96 	.globl _CCEN
                             97 	.globl _IRCON
                             98 	.globl _S0RELH
                             99 	.globl _IP1
                            100 	.globl _IEN1
                            101 	.globl _DMAM1
                            102 	.globl _DMAM0
                            103 	.globl _DMASEL
                            104 	.globl _DMAC2
                            105 	.globl _DMAC1
                            106 	.globl _DMAC0
                            107 	.globl _P3
                            108 	.globl _S0RELL
                            109 	.globl _IP0
                            110 	.globl _IEN0
                            111 	.globl _DMAT2
                            112 	.globl _DMAT1
                            113 	.globl _DMAT0
                            114 	.globl _DMAS2
                            115 	.globl _DMAS1
                            116 	.globl _DMAS0
                            117 	.globl _P2
                            118 	.globl _IEN2
                            119 	.globl _SBUF
                            120 	.globl _SCON
                            121 	.globl _PSBANK
                            122 	.globl _DPS
                            123 	.globl _P1
                            124 	.globl _CKCON
                            125 	.globl _TH1
                            126 	.globl _TH0
                            127 	.globl _TL1
                            128 	.globl _TL0
                            129 	.globl _TMOD
                            130 	.globl _TCON
                            131 	.globl _PCON
                            132 	.globl _WDTREL
                            133 	.globl _DPH
                            134 	.globl _DPL
                            135 	.globl _P0
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
                            982 	.globl _rx_train
                            983 	.globl _rx_train_dummy
                            984 	.globl _rx_ffe_train
                            985 	.globl _set_train
                            986 	.globl _RX_FFE_Comparision
                            987 	.globl _ffe_res2_adjust
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
                           2047 ;Allocation info for local variables in function 'rx_train'
                           2048 ;------------------------------------------------------------
                           2049 ;------------------------------------------------------------
                           2050 ;	../../shared/src/rx_train.c:36: void rx_train()
                           2051 ;	-----------------------------------------
                           2052 ;	 function rx_train
                           2053 ;	-----------------------------------------
   3226                    2054 _rx_train:
                    0002   2055 	ar2 = 0x02
                    0003   2056 	ar3 = 0x03
                    0004   2057 	ar4 = 0x04
                    0005   2058 	ar5 = 0x05
                    0006   2059 	ar6 = 0x06
                    0007   2060 	ar7 = 0x07
                    0000   2061 	ar0 = 0x00
                    0001   2062 	ar1 = 0x01
                           2063 ;	../../shared/src/rx_train.c:38: PHY_STATUS = ST_RXTRAIN;
   3226 90 22 30           2064 	mov	dptr,#_MCU_STATUS0_LANE
   3229 74 2A              2065 	mov	a,#0x2A
   322B F0                 2066 	movx	@dptr,a
                           2067 ;	../../shared/src/rx_train.c:44: rx.ffe_index2 = opt.rx_ffe_index;
   322C 90 66 93           2068 	mov	dptr,#(_opt + 0x0024)
   322F E0                 2069 	movx	a,@dptr
   3230 FA                 2070 	mov	r2,a
   3231 90 66 AE           2071 	mov	dptr,#(_rx + 0x0002)
   3234 F0                 2072 	movx	@dptr,a
                           2073 ;	../../shared/src/rx_train.c:54: ctrl_trx_ffe_updated = 0;
   3235 C2 25              2074 	clr	_ctrl_trx_ffe_updated
                           2075 ;	../../shared/src/rx_train.c:93: if(opt.excellent_eo && opt.saturated==0) { // if excellent EO and not saturated
   3237 90 66 98           2076 	mov	dptr,#(_opt + 0x0029)
   323A E0                 2077 	movx	a,@dptr
   323B 60 06              2078 	jz	00104$
   323D 90 66 97           2079 	mov	dptr,#(_opt + 0x0028)
   3240 E0                 2080 	movx	a,@dptr
   3241 60 10              2081 	jz	00105$
   3243                    2082 00104$:
                           2083 ;	../../shared/src/rx_train.c:97: opt2train();
   3243 12 60 02           2084 	lcall	_opt2train
                           2085 ;	../../shared/src/rx_train.c:98: if(lnx_BYPASS_CTLE_TRAIN_LANE==0)
   3246 90 60 98           2086 	mov	dptr,#_DFE_CONTROL_10
   3249 E0                 2087 	movx	a,@dptr
   324A 20 E7 03           2088 	jb	acc.7,00102$
                           2089 ;	../../shared/src/rx_train.c:99: rx_ffe_train();
   324D 12 32 E4           2090 	lcall	_rx_ffe_train
   3250                    2091 00102$:
                           2092 ;	../../shared/src/rx_train.c:100: opt2train();
   3250 12 60 02           2093 	lcall	_opt2train
   3253                    2094 00105$:
                           2095 ;	../../shared/src/rx_train.c:120: if(lnx_ADJUST_FFE_R2_LANE)	ffe_res2_adjust();
   3253 90 60 8E           2096 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   3256 E0                 2097 	movx	a,@dptr
   3257 30 E4 03           2098 	jnb	acc.4,00108$
   325A 12 34 5D           2099 	lcall	_ffe_res2_adjust
   325D                    2100 00108$:
                           2101 ;	../../shared/src/rx_train.c:127: dfe_cdr_phase_opt();
   325D 12 5D C4           2102 	lcall	_dfe_cdr_phase_opt
                           2103 ;	../../shared/src/rx_train.c:131: ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && ( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS );
   3260 90 60 4D           2104 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   3263 E0                 2105 	movx	a,@dptr
   3264 30 E7 1F           2106 	jnb	acc.7,00111$
   3267 90 67 18           2107 	mov	dptr,#_ctrl_rx_only_mode
   326A E0                 2108 	movx	a,@dptr
   326B FA                 2109 	mov	r2,a
   326C 70 0A              2110 	jnz	00118$
   326E 90 66 AC           2111 	mov	dptr,#_rx
   3271 E0                 2112 	movx	a,@dptr
   3272 70 04              2113 	jnz	00118$
   3274 C2 28              2114 	clr	b0
   3276 80 02              2115 	sjmp	00119$
   3278                    2116 00118$:
   3278 D2 28              2117 	setb	b0
   327A                    2118 00119$:
   327A 20 28 04           2119 	jb	b0,00115$
   327D C2 28              2120 	clr	b0
   327F 80 02              2121 	sjmp	00116$
   3281                    2122 00115$:
   3281 D2 28              2123 	setb	b0
   3283                    2124 00116$:
   3283 20 28 04           2125 	jb	b0,00112$
   3286                    2126 00111$:
   3286 C2 28              2127 	clr	b0
   3288 80 02              2128 	sjmp	00113$
   328A                    2129 00112$:
   328A D2 28              2130 	setb	b0
   328C                    2131 00113$:
   328C A2 28              2132 	mov	c,b0
   328E 92 1E              2133 	mov	_ctrl_cdr_phase_on,c
                           2134 ;	../../shared/src/rx_train.c:132: adapt_data_en = tag_TRAIN_USE_D; //0
   3290 90 60 44           2135 	mov	dptr,#_DFE_CONTROL_3
   3293 E0                 2136 	movx	a,@dptr
   3294 23                 2137 	rl	a
   3295 23                 2138 	rl	a
   3296 54 01              2139 	anl	a,#0x01
   3298 24 FF              2140 	add	a,#0xff
   329A 92 0D              2141 	mov	_adapt_data_en,c
                           2142 ;	../../shared/src/rx_train.c:133: adapt_slicer_en = tag_TRAIN_USE_S; //1		
   329C 90 60 44           2143 	mov	dptr,#_DFE_CONTROL_3
   329F E0                 2144 	movx	a,@dptr
   32A0 23                 2145 	rl	a
   32A1 54 01              2146 	anl	a,#0x01
   32A3 24 FF              2147 	add	a,#0xff
   32A5 92 0C              2148 	mov	_adapt_slicer_en,c
                           2149 ;	../../shared/src/rx_train.c:134: ph_control_mode = tag_TRAIN_PH_CONTROL_MODE; 
   32A7 90 60 44           2150 	mov	dptr,#_DFE_CONTROL_3
   32AA E0                 2151 	movx	a,@dptr
   32AB C4                 2152 	swap	a
   32AC 54 03              2153 	anl	a,#0x03
   32AE 90 66 F8           2154 	mov	dptr,#_ph_control_mode
   32B1 F0                 2155 	movx	@dptr,a
                           2156 ;	../../shared/src/rx_train.c:135: set_ph_mode();
   32B2 78 3B              2157 	mov	r0,#_set_ph_mode
   32B4 79 97              2158 	mov	r1,#(_set_ph_mode >> 8)
   32B6 7A 02              2159 	mov	r2,#(_set_ph_mode >> 16)
   32B8 12 00 B3           2160 	lcall	__sdcc_banked_call
                           2161 ;	../../shared/src/rx_train.c:142: dfe_cdr_phase_opt();  // do the DFE and CDR phase optimization
   32BB 12 5D C4           2162 	lcall	_dfe_cdr_phase_opt
                           2163 ;	../../shared/src/rx_train.c:143: update_opt_trx_ffe();	
   32BE 12 5D 77           2164 	lcall	_update_opt_trx_ffe
                           2165 ;	../../shared/src/rx_train.c:146: ctrl_rx_train_done = 1; // RX training is done after going through all stages
   32C1 D2 21              2166 	setb	_ctrl_rx_train_done
                           2167 ;	../../shared/src/rx_train.c:148: ctrl_trx_ffe_updated = (opt.rx_ffe_index != rx.ffe_index2);
   32C3 90 66 93           2168 	mov	dptr,#(_opt + 0x0024)
   32C6 E0                 2169 	movx	a,@dptr
   32C7 FA                 2170 	mov	r2,a
   32C8 90 66 AE           2171 	mov	dptr,#(_rx + 0x0002)
   32CB E0                 2172 	movx	a,@dptr
   32CC FB                 2173 	mov	r3,a
   32CD EA                 2174 	mov	a,r2
   32CE B5 03 03           2175 	cjne	a,ar3,00137$
   32D1 D3                 2176 	setb	c
   32D2 80 01              2177 	sjmp	00138$
   32D4                    2178 00137$:
   32D4 C3                 2179 	clr	c
   32D5                    2180 00138$:
   32D5 92 28              2181 	mov  b0,c
   32D7 B3                 2182 	cpl	c
   32D8 92 25              2183 	mov	_ctrl_trx_ffe_updated,c
   32DA 22                 2184 	ret
                           2185 ;------------------------------------------------------------
                           2186 ;Allocation info for local variables in function 'rx_train_dummy'
                           2187 ;------------------------------------------------------------
                           2188 ;------------------------------------------------------------
                           2189 ;	../../shared/src/rx_train.c:156: void rx_train_dummy(void) {
                           2190 ;	-----------------------------------------
                           2191 ;	 function rx_train_dummy
                           2192 ;	-----------------------------------------
   32DB                    2193 _rx_train_dummy:
                           2194 ;	../../shared/src/rx_train.c:159: PHY_STATUS = ST_RXTRAIN;
   32DB 90 22 30           2195 	mov	dptr,#_MCU_STATUS0_LANE
   32DE 74 2A              2196 	mov	a,#0x2A
   32E0 F0                 2197 	movx	@dptr,a
                           2198 ;	../../shared/src/rx_train.c:215: ctrl_rx_train_done = 1; // RX training is done after going through all stages
   32E1 D2 21              2199 	setb	_ctrl_rx_train_done
   32E3 22                 2200 	ret
                           2201 ;------------------------------------------------------------
                           2202 ;Allocation info for local variables in function 'rx_ffe_train'
                           2203 ;------------------------------------------------------------
                           2204 ;------------------------------------------------------------
                           2205 ;	../../shared/src/rx_train.c:241: void rx_ffe_train(void)
                           2206 ;	-----------------------------------------
                           2207 ;	 function rx_ffe_train
                           2208 ;	-----------------------------------------
   32E4                    2209 _rx_ffe_train:
                           2210 ;	../../shared/src/rx_train.c:247: ctrl_cdr_phase_on = 0; 
   32E4 C2 1E              2211 	clr	_ctrl_cdr_phase_on
                           2212 ;	../../shared/src/rx_train.c:283: set_train(); // train the FFEs within the set
   32E6 02 32 E9           2213 	ljmp	_set_train
                           2214 ;------------------------------------------------------------
                           2215 ;Allocation info for local variables in function 'set_train'
                           2216 ;------------------------------------------------------------
                           2217 ;i                         Allocated to registers r3 
                           2218 ;size_ffe_set              Allocated to registers r2 
                           2219 ;------------------------------------------------------------
                           2220 ;	../../shared/src/rx_train.c:293: void set_train(void)
                           2221 ;	-----------------------------------------
                           2222 ;	 function set_train
                           2223 ;	-----------------------------------------
   32E9                    2224 _set_train:
                           2225 ;	../../shared/src/rx_train.c:300: if( tx_status_pcie_mode ) 
   32E9 30 27 04           2226 	jnb	_tx_status_pcie_mode,00102$
                           2227 ;	../../shared/src/rx_train.c:301: size_ffe_set = 6; //5; //11;
   32EC 7A 06              2228 	mov	r2,#0x06
   32EE 80 02              2229 	sjmp	00118$
   32F0                    2230 00102$:
                           2231 ;	../../shared/src/rx_train.c:303: size_ffe_set = 16;
   32F0 7A 10              2232 	mov	r2,#0x10
                           2233 ;	../../shared/src/rx_train.c:305: while (i < size_ffe_set) //32 default, 16 fast when gain_train_with_C = 1//rx.size_ffe_set) // while the index is not the last one
   32F2                    2234 00118$:
   32F2 7B 00              2235 	mov	r3,#0x00
   32F4                    2236 00109$:
   32F4 EB                 2237 	mov	a,r3
   32F5 B5 02 00           2238 	cjne	a,ar2,00121$
   32F8                    2239 00121$:
   32F8 40 01              2240 	jc	00122$
   32FA 22                 2241 	ret
   32FB                    2242 00122$:
                           2243 ;	../../shared/src/rx_train.c:317: if( tx_status_pcie_mode ) 
   32FB 30 27 12           2244 	jnb	_tx_status_pcie_mode,00105$
                           2245 ;	../../shared/src/rx_train.c:318: train_r = rx_ffe_set_r_pcie_tb[i];
   32FE EB                 2246 	mov	a,r3
   32FF 2B                 2247 	add	a,r3
   3300 FC                 2248 	mov	r4,a
   3301 90 35 A5           2249 	mov	dptr,#_rx_ffe_set_r_pcie_tb
   3304 93                 2250 	movc	a,@a+dptr
   3305 CC                 2251 	xch	a,r4
   3306 A3                 2252 	inc	dptr
   3307 93                 2253 	movc	a,@a+dptr
   3308 FD                 2254 	mov	r5,a
   3309 90 66 C6           2255 	mov	dptr,#_train_r
   330C EC                 2256 	mov	a,r4
   330D F0                 2257 	movx	@dptr,a
   330E 80 10              2258 	sjmp	00106$
   3310                    2259 00105$:
                           2260 ;	../../shared/src/rx_train.c:320: train_r = rx_ffe_set_r_tb[i];
   3310 EB                 2261 	mov	a,r3
   3311 2B                 2262 	add	a,r3
   3312 FC                 2263 	mov	r4,a
   3313 90 35 65           2264 	mov	dptr,#_rx_ffe_set_r_tb
   3316 93                 2265 	movc	a,@a+dptr
   3317 CC                 2266 	xch	a,r4
   3318 A3                 2267 	inc	dptr
   3319 93                 2268 	movc	a,@a+dptr
   331A FD                 2269 	mov	r5,a
   331B 90 66 C6           2270 	mov	dptr,#_train_r
   331E EC                 2271 	mov	a,r4
   331F F0                 2272 	movx	@dptr,a
   3320                    2273 00106$:
                           2274 ;	../../shared/src/rx_train.c:322: if (tag_GAIN_TRAIN_WITH_C==0)  //1
   3320 90 60 3A           2275 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   3323 E0                 2276 	movx	a,@dptr
   3324 20 E0 10           2277 	jb	acc.0,00108$
                           2278 ;	../../shared/src/rx_train.c:323: train_c = rx_ffe_set_c_tb[i]; // update C		
   3327 EB                 2279 	mov	a,r3
   3328 2B                 2280 	add	a,r3
   3329 FC                 2281 	mov	r4,a
   332A 90 35 25           2282 	mov	dptr,#_rx_ffe_set_c_tb
   332D 93                 2283 	movc	a,@a+dptr
   332E CC                 2284 	xch	a,r4
   332F A3                 2285 	inc	dptr
   3330 93                 2286 	movc	a,@a+dptr
   3331 FD                 2287 	mov	r5,a
   3332 90 66 C5           2288 	mov	dptr,#_train_c
   3335 EC                 2289 	mov	a,r4
   3336 F0                 2290 	movx	@dptr,a
   3337                    2291 00108$:
                           2292 ;	../../shared/src/rx_train.c:326: Set_Rx_FFE();
   3337 C0 02              2293 	push	ar2
   3339 C0 03              2294 	push	ar3
   333B 12 60 A4           2295 	lcall	_Set_Rx_FFE
                           2296 ;	../../shared/src/rx_train.c:342: dfe_cdr_phase_opt(); // adapt DFE
   333E 12 5D C4           2297 	lcall	_dfe_cdr_phase_opt
                           2298 ;	../../shared/src/rx_train.c:343: RX_FFE_Comparision(); // compare the training RX FFE with the global optimal one
   3341 12 33 4C           2299 	lcall	_RX_FFE_Comparision
   3344 D0 03              2300 	pop	ar3
   3346 D0 02              2301 	pop	ar2
                           2302 ;	../../shared/src/rx_train.c:349: i++;	
   3348 0B                 2303 	inc	r3
   3349 02 32 F4           2304 	ljmp	00109$
                           2305 ;------------------------------------------------------------
                           2306 ;Allocation info for local variables in function 'RX_FFE_Comparision'
                           2307 ;------------------------------------------------------------
                           2308 ;------------------------------------------------------------
                           2309 ;	../../shared/src/rx_train.c:404: void RX_FFE_Comparision()
                           2310 ;	-----------------------------------------
                           2311 ;	 function RX_FFE_Comparision
                           2312 ;	-----------------------------------------
   334C                    2313 _RX_FFE_Comparision:
                           2314 ;	../../shared/src/rx_train.c:415: rx.ffe_updated = ((train.boost < opt.boost && train_c== opt_c) && train.level > 0)|| 
   334C 90 66 6B           2315 	mov	dptr,#(_train + 0x002b)
   334F E0                 2316 	movx	a,@dptr
   3350 FA                 2317 	mov	r2,a
   3351 A3                 2318 	inc	dptr
   3352 E0                 2319 	movx	a,@dptr
   3353 FB                 2320 	mov	r3,a
   3354 90 66 9A           2321 	mov	dptr,#(_opt + 0x002b)
   3357 E0                 2322 	movx	a,@dptr
   3358 FC                 2323 	mov	r4,a
   3359 A3                 2324 	inc	dptr
   335A E0                 2325 	movx	a,@dptr
   335B FD                 2326 	mov	r5,a
   335C C3                 2327 	clr	c
   335D EA                 2328 	mov	a,r2
   335E 9C                 2329 	subb	a,r4
   335F EB                 2330 	mov	a,r3
   3360 9D                 2331 	subb	a,r5
   3361 50 10              2332 	jnc	00117$
   3363 90 66 C5           2333 	mov	dptr,#_train_c
   3366 E0                 2334 	movx	a,@dptr
   3367 FA                 2335 	mov	r2,a
   3368 90 66 C7           2336 	mov	dptr,#_opt_c
   336B E0                 2337 	movx	a,@dptr
   336C FB                 2338 	mov	r3,a
   336D EA                 2339 	mov	a,r2
   336E B5 03 02           2340 	cjne	a,ar3,00170$
   3371 80 04              2341 	sjmp	00118$
   3373                    2342 00170$:
   3373                    2343 00117$:
   3373 7A 00              2344 	mov	r2,#0x00
   3375 80 02              2345 	sjmp	00119$
   3377                    2346 00118$:
   3377 7A 01              2347 	mov	r2,#0x01
   3379                    2348 00119$:
   3379 EA                 2349 	mov	a,r2
   337A 60 0F              2350 	jz	00114$
   337C 90 66 63           2351 	mov	dptr,#(_train + 0x0023)
   337F E0                 2352 	movx	a,@dptr
   3380 60 04              2353 	jz	00120$
   3382 7A 01              2354 	mov	r2,#0x01
   3384 80 02              2355 	sjmp	00121$
   3386                    2356 00120$:
   3386 7A 00              2357 	mov	r2,#0x00
   3388                    2358 00121$:
   3388 EA                 2359 	mov	a,r2
   3389 70 04              2360 	jnz	00115$
   338B                    2361 00114$:
   338B 7A 00              2362 	mov	r2,#0x00
   338D 80 02              2363 	sjmp	00116$
   338F                    2364 00115$:
   338F 7A 01              2365 	mov	r2,#0x01
   3391                    2366 00116$:
   3391 EA                 2367 	mov	a,r2
   3392 70 3B              2368 	jnz	00112$
                           2369 ;	../../shared/src/rx_train.c:416: (opt.level == 3 && train.level >= opt.level && train_c <opt_c) || 
   3394 90 66 92           2370 	mov	dptr,#(_opt + 0x0023)
   3397 E0                 2371 	movx	a,@dptr
   3398 FA                 2372 	mov	r2,a
   3399 BA 03 0E           2373 	cjne	r2,#0x03,00125$
   339C 90 66 63           2374 	mov	dptr,#(_train + 0x0023)
   339F E0                 2375 	movx	a,@dptr
   33A0 FB                 2376 	mov	r3,a
   33A1 B5 02 00           2377 	cjne	a,ar2,00177$
   33A4                    2378 00177$:
   33A4 B3                 2379 	cpl	c
   33A5 E4                 2380 	clr	a
   33A6 33                 2381 	rlc	a
   33A7 FA                 2382 	mov	r2,a
   33A8 70 04              2383 	jnz	00126$
   33AA                    2384 00125$:
   33AA 7A 00              2385 	mov	r2,#0x00
   33AC 80 02              2386 	sjmp	00127$
   33AE                    2387 00126$:
   33AE 7A 01              2388 	mov	r2,#0x01
   33B0                    2389 00127$:
   33B0 EA                 2390 	mov	a,r2
   33B1 60 10              2391 	jz	00122$
   33B3 90 66 C5           2392 	mov	dptr,#_train_c
   33B6 E0                 2393 	movx	a,@dptr
   33B7 FA                 2394 	mov	r2,a
   33B8 90 66 C7           2395 	mov	dptr,#_opt_c
   33BB E0                 2396 	movx	a,@dptr
   33BC FB                 2397 	mov	r3,a
   33BD EA                 2398 	mov	a,r2
   33BE B5 03 00           2399 	cjne	a,ar3,00181$
   33C1                    2400 00181$:
   33C1 40 04              2401 	jc	00123$
   33C3                    2402 00122$:
   33C3 7A 00              2403 	mov	r2,#0x00
   33C5 80 02              2404 	sjmp	00124$
   33C7                    2405 00123$:
   33C7 7A 01              2406 	mov	r2,#0x01
   33C9                    2407 00124$:
   33C9 EA                 2408 	mov	a,r2
   33CA 70 03              2409 	jnz	00112$
   33CC FA                 2410 	mov	r2,a
   33CD 80 02              2411 	sjmp	00113$
   33CF                    2412 00112$:
   33CF 7A 01              2413 	mov	r2,#0x01
   33D1                    2414 00113$:
   33D1 EA                 2415 	mov	a,r2
   33D2 70 5B              2416 	jnz	00109$
                           2417 ;	../../shared/src/rx_train.c:417: (train_c ==opt_c && train_c <tag_RX_C_SAT_THRES && train.level == 3 && 
   33D4 90 66 C5           2418 	mov	dptr,#_train_c
   33D7 E0                 2419 	movx	a,@dptr
   33D8 FA                 2420 	mov	r2,a
   33D9 90 66 C7           2421 	mov	dptr,#_opt_c
   33DC E0                 2422 	movx	a,@dptr
   33DD FB                 2423 	mov	r3,a
   33DE EA                 2424 	mov	a,r2
   33DF B5 03 05           2425 	cjne	a,ar3,00134$
   33E2 BA 03 00           2426 	cjne	r2,#0x03,00187$
   33E5                    2427 00187$:
   33E5 40 04              2428 	jc	00135$
   33E7                    2429 00134$:
   33E7 7A 00              2430 	mov	r2,#0x00
   33E9 80 02              2431 	sjmp	00136$
   33EB                    2432 00135$:
   33EB 7A 01              2433 	mov	r2,#0x01
   33ED                    2434 00136$:
   33ED EA                 2435 	mov	a,r2
   33EE 60 0A              2436 	jz	00131$
   33F0 90 66 63           2437 	mov	dptr,#(_train + 0x0023)
   33F3 E0                 2438 	movx	a,@dptr
   33F4 FA                 2439 	mov	r2,a
   33F5 BA 03 02           2440 	cjne	r2,#0x03,00190$
   33F8 80 04              2441 	sjmp	00132$
   33FA                    2442 00190$:
   33FA                    2443 00131$:
   33FA 7A 00              2444 	mov	r2,#0x00
   33FC 80 02              2445 	sjmp	00133$
   33FE                    2446 00132$:
   33FE 7A 01              2447 	mov	r2,#0x01
   3400                    2448 00133$:
   3400 EA                 2449 	mov	a,r2
   3401 60 20              2450 	jz	00128$
                           2451 ;	../../shared/src/rx_train.c:418: ((tag_DFE_SAT_PREFER_HIGH_DC && train_r>opt_r) || //1
   3403 90 66 C6           2452 	mov	dptr,#_train_r
   3406 E0                 2453 	movx	a,@dptr
   3407 FA                 2454 	mov	r2,a
   3408 90 66 C8           2455 	mov	dptr,#_opt_r
   340B E0                 2456 	movx	a,@dptr
   340C FB                 2457 	mov	r3,a
   340D B5 02 00           2458 	cjne	a,ar2,00192$
   3410                    2459 00192$:
   3410 40 04              2460 	jc	00141$
   3412 7A 00              2461 	mov	r2,#0x00
   3414 80 02              2462 	sjmp	00142$
   3416                    2463 00141$:
   3416 7A 01              2464 	mov	r2,#0x01
   3418                    2465 00142$:
   3418 EA                 2466 	mov	a,r2
                           2467 ;	../../shared/src/rx_train.c:419: (!tag_DFE_SAT_PREFER_HIGH_DC && train_r<opt_r)) ) ||
   3419 70 03              2468 	jnz	00138$
   341B FA                 2469 	mov	r2,a
   341C 80 02              2470 	sjmp	00139$
   341E                    2471 00138$:
   341E 7A 01              2472 	mov	r2,#0x01
   3420                    2473 00139$:
   3420 EA                 2474 	mov	a,r2
   3421 70 04              2475 	jnz	00129$
   3423                    2476 00128$:
   3423 7A 00              2477 	mov	r2,#0x00
   3425 80 02              2478 	sjmp	00130$
   3427                    2479 00129$:
   3427 7A 01              2480 	mov	r2,#0x01
   3429                    2481 00130$:
   3429 EA                 2482 	mov	a,r2
   342A 70 03              2483 	jnz	00109$
   342C FA                 2484 	mov	r2,a
   342D 80 02              2485 	sjmp	00110$
   342F                    2486 00109$:
   342F 7A 01              2487 	mov	r2,#0x01
   3431                    2488 00110$:
   3431 EA                 2489 	mov	a,r2
   3432 70 1B              2490 	jnz	00106$
                           2491 ;	../../shared/src/rx_train.c:420: (train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST);//1
   3434 90 66 63           2492 	mov	dptr,#(_train + 0x0023)
   3437 E0                 2493 	movx	a,@dptr
   3438 FA                 2494 	mov	r2,a
   3439 90 66 92           2495 	mov	dptr,#(_opt + 0x0023)
   343C E0                 2496 	movx	a,@dptr
   343D FB                 2497 	mov	r3,a
   343E B5 02 00           2498 	cjne	a,ar2,00198$
   3441                    2499 00198$:
   3441 40 04              2500 	jc	00147$
   3443 7A 00              2501 	mov	r2,#0x00
   3445 80 02              2502 	sjmp	00148$
   3447                    2503 00147$:
   3447 7A 01              2504 	mov	r2,#0x01
   3449                    2505 00148$:
   3449 EA                 2506 	mov	a,r2
   344A 70 03              2507 	jnz	00106$
   344C FA                 2508 	mov	r2,a
   344D 80 02              2509 	sjmp	00107$
   344F                    2510 00106$:
   344F 7A 01              2511 	mov	r2,#0x01
   3451                    2512 00107$:
                           2513 ;	../../shared/src/rx_train.c:469: if (rx.ffe_updated)
   3451 90 66 AD           2514 	mov	dptr,#(_rx + 0x0001)
   3454 EA                 2515 	mov	a,r2
   3455 F0                 2516 	movx	@dptr,a
   3456 E0                 2517 	movx	a,@dptr
   3457 60 03              2518 	jz	00103$
                           2519 ;	../../shared/src/rx_train.c:471: update_opt_trx_ffe();
   3459 02 5D 77           2520 	ljmp	_update_opt_trx_ffe
   345C                    2521 00103$:
   345C 22                 2522 	ret
                           2523 ;------------------------------------------------------------
                           2524 ;Allocation info for local variables in function 'ffe_res2_adjust'
                           2525 ;------------------------------------------------------------
                           2526 ;boostlevel                Allocated to registers r2 r3 
                           2527 ;------------------------------------------------------------
                           2528 ;	../../shared/src/rx_train.c:535: void ffe_res2_adjust(void) {
                           2529 ;	-----------------------------------------
                           2530 ;	 function ffe_res2_adjust
                           2531 ;	-----------------------------------------
   345D                    2532 _ffe_res2_adjust:
                           2533 ;	../../shared/src/rx_train.c:539: boostlevel = train.sumFtap - sumf_boost_target_c;
   345D 90 66 6D           2534 	mov	dptr,#(_train + 0x002d)
   3460 E0                 2535 	movx	a,@dptr
   3461 FA                 2536 	mov	r2,a
   3462 A3                 2537 	inc	dptr
   3463 E0                 2538 	movx	a,@dptr
   3464 FB                 2539 	mov	r3,a
   3465 90 66 CA           2540 	mov	dptr,#_sumf_boost_target_c
   3468 E0                 2541 	movx	a,@dptr
   3469 FC                 2542 	mov	r4,a
   346A 33                 2543 	rlc	a
   346B 95 E0              2544 	subb	a,acc
   346D FD                 2545 	mov	r5,a
   346E EA                 2546 	mov	a,r2
   346F C3                 2547 	clr	c
   3470 9C                 2548 	subb	a,r4
   3471 FA                 2549 	mov	r2,a
   3472 EB                 2550 	mov	a,r3
   3473 9D                 2551 	subb	a,r5
   3474 FB                 2552 	mov	r3,a
                           2553 ;	../../shared/src/rx_train.c:545: if( reg_FFE_RES1_SEL_LANE_3_0 == 0xB) {		
   3475 90 02 00           2554 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   3478 E0                 2555 	movx	a,@dptr
   3479 C4                 2556 	swap	a
   347A 54 0F              2557 	anl	a,#0x0f
   347C FC                 2558 	mov	r4,a
   347D BC 0B 02           2559 	cjne	r4,#0x0B,00122$
   3480 80 01              2560 	sjmp	00123$
   3482                    2561 00122$:
   3482 22                 2562 	ret
   3483                    2563 00123$:
                           2564 ;	../../shared/src/rx_train.c:546: if(boostlevel  > FFE_R2_LEVEL1) { //40
   3483 C3                 2565 	clr	c
   3484 74 28              2566 	mov	a,#0x28
   3486 9A                 2567 	subb	a,r2
   3487 74 80              2568 	mov	a,#(0x00 ^ 0x80)
   3489 8B F0              2569 	mov	b,r3
   348B 63 F0 80           2570 	xrl	b,#0x80
   348E 95 F0              2571 	subb	a,b
   3490 50 15              2572 	jnc	00111$
                           2573 ;	../../shared/src/rx_train.c:547: reg_FFE_RES2_SEL_E_LANE_3_0 = 4;
   3492 90 00 00           2574 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   3495 E0                 2575 	movx	a,@dptr
   3496 54 0F              2576 	anl	a,#0x0f
   3498 44 40              2577 	orl	a,#0x40
   349A F0                 2578 	movx	@dptr,a
                           2579 ;	../../shared/src/rx_train.c:548: reg_FFE_RES2_SEL_O_LANE_3_0 = 4;
   349B 90 02 04           2580 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   349E E0                 2581 	movx	a,@dptr
   349F 54 0F              2582 	anl	a,#0x0f
   34A1 44 40              2583 	orl	a,#0x40
   34A3 F0                 2584 	movx	@dptr,a
   34A4 02 35 1E           2585 	ljmp	00112$
   34A7                    2586 00111$:
                           2587 ;	../../shared/src/rx_train.c:550: else if(boostlevel  > FFE_R2_LEVEL2) { //30
   34A7 C3                 2588 	clr	c
   34A8 74 1E              2589 	mov	a,#0x1E
   34AA 9A                 2590 	subb	a,r2
   34AB 74 80              2591 	mov	a,#(0x00 ^ 0x80)
   34AD 8B F0              2592 	mov	b,r3
   34AF 63 F0 80           2593 	xrl	b,#0x80
   34B2 95 F0              2594 	subb	a,b
   34B4 50 14              2595 	jnc	00108$
                           2596 ;	../../shared/src/rx_train.c:551: reg_FFE_RES2_SEL_E_LANE_3_0 = 3;
   34B6 90 00 00           2597 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   34B9 E0                 2598 	movx	a,@dptr
   34BA 54 0F              2599 	anl	a,#0x0f
   34BC 44 30              2600 	orl	a,#0x30
   34BE F0                 2601 	movx	@dptr,a
                           2602 ;	../../shared/src/rx_train.c:552: reg_FFE_RES2_SEL_O_LANE_3_0 = 3;
   34BF 90 02 04           2603 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   34C2 E0                 2604 	movx	a,@dptr
   34C3 54 0F              2605 	anl	a,#0x0f
   34C5 44 30              2606 	orl	a,#0x30
   34C7 F0                 2607 	movx	@dptr,a
   34C8 80 54              2608 	sjmp	00112$
   34CA                    2609 00108$:
                           2610 ;	../../shared/src/rx_train.c:554: else if(boostlevel  > FFE_R2_LEVEL3) { //20
   34CA C3                 2611 	clr	c
   34CB 74 14              2612 	mov	a,#0x14
   34CD 9A                 2613 	subb	a,r2
   34CE 74 80              2614 	mov	a,#(0x00 ^ 0x80)
   34D0 8B F0              2615 	mov	b,r3
   34D2 63 F0 80           2616 	xrl	b,#0x80
   34D5 95 F0              2617 	subb	a,b
   34D7 50 14              2618 	jnc	00105$
                           2619 ;	../../shared/src/rx_train.c:555: reg_FFE_RES2_SEL_E_LANE_3_0 = 2;
   34D9 90 00 00           2620 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   34DC E0                 2621 	movx	a,@dptr
   34DD 54 0F              2622 	anl	a,#0x0f
   34DF 44 20              2623 	orl	a,#0x20
   34E1 F0                 2624 	movx	@dptr,a
                           2625 ;	../../shared/src/rx_train.c:556: reg_FFE_RES2_SEL_O_LANE_3_0 = 2;
   34E2 90 02 04           2626 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   34E5 E0                 2627 	movx	a,@dptr
   34E6 54 0F              2628 	anl	a,#0x0f
   34E8 44 20              2629 	orl	a,#0x20
   34EA F0                 2630 	movx	@dptr,a
   34EB 80 31              2631 	sjmp	00112$
   34ED                    2632 00105$:
                           2633 ;	../../shared/src/rx_train.c:558: else if(boostlevel  > FFE_R2_LEVEL4) {
   34ED C3                 2634 	clr	c
   34EE 74 0A              2635 	mov	a,#0x0A
   34F0 9A                 2636 	subb	a,r2
   34F1 74 80              2637 	mov	a,#(0x00 ^ 0x80)
   34F3 8B F0              2638 	mov	b,r3
   34F5 63 F0 80           2639 	xrl	b,#0x80
   34F8 95 F0              2640 	subb	a,b
   34FA 50 14              2641 	jnc	00102$
                           2642 ;	../../shared/src/rx_train.c:559: reg_FFE_RES2_SEL_E_LANE_3_0 = 1;
   34FC 90 00 00           2643 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   34FF E0                 2644 	movx	a,@dptr
   3500 54 0F              2645 	anl	a,#0x0f
   3502 44 10              2646 	orl	a,#0x10
   3504 F0                 2647 	movx	@dptr,a
                           2648 ;	../../shared/src/rx_train.c:560: reg_FFE_RES2_SEL_O_LANE_3_0 = 1;
   3505 90 02 04           2649 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   3508 E0                 2650 	movx	a,@dptr
   3509 54 0F              2651 	anl	a,#0x0f
   350B 44 10              2652 	orl	a,#0x10
   350D F0                 2653 	movx	@dptr,a
   350E 80 0E              2654 	sjmp	00112$
   3510                    2655 00102$:
                           2656 ;	../../shared/src/rx_train.c:563: reg_FFE_RES2_SEL_E_LANE_3_0 = 0;
   3510 90 00 00           2657 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   3513 E0                 2658 	movx	a,@dptr
   3514 54 0F              2659 	anl	a,#0x0f
   3516 F0                 2660 	movx	@dptr,a
                           2661 ;	../../shared/src/rx_train.c:564: reg_FFE_RES2_SEL_O_LANE_3_0 = 0;	
   3517 90 02 04           2662 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   351A E0                 2663 	movx	a,@dptr
   351B 54 0F              2664 	anl	a,#0x0f
   351D F0                 2665 	movx	@dptr,a
   351E                    2666 00112$:
                           2667 ;	../../shared/src/rx_train.c:567: r2_adj_on = 1;
   351E 90 66 C9           2668 	mov	dptr,#_r2_adj_on
   3521 74 01              2669 	mov	a,#0x01
   3523 F0                 2670 	movx	@dptr,a
   3524 22                 2671 	ret
                           2672 	.area CSEG    (CODE)
                           2673 	.area CSEG    (CODE)
   3525                    2674 _rx_ffe_set_c_tb:
   3525 0F 00              2675 	.byte #0x0F,#0x00	;  15
   3527 0F 00              2676 	.byte #0x0F,#0x00	;  15
   3529 0F 00              2677 	.byte #0x0F,#0x00	;  15
   352B 0F 00              2678 	.byte #0x0F,#0x00	;  15
   352D 0F 00              2679 	.byte #0x0F,#0x00	;  15
   352F 0F 00              2680 	.byte #0x0F,#0x00	;  15
   3531 0F 00              2681 	.byte #0x0F,#0x00	;  15
   3533 0F 00              2682 	.byte #0x0F,#0x00	;  15
   3535 0F 00              2683 	.byte #0x0F,#0x00	;  15
   3537 0F 00              2684 	.byte #0x0F,#0x00	;  15
   3539 0F 00              2685 	.byte #0x0F,#0x00	;  15
   353B 0F 00              2686 	.byte #0x0F,#0x00	;  15
   353D 0F 00              2687 	.byte #0x0F,#0x00	;  15
   353F 0F 00              2688 	.byte #0x0F,#0x00	;  15
   3541 0F 00              2689 	.byte #0x0F,#0x00	;  15
   3543 0F 00              2690 	.byte #0x0F,#0x00	;  15
   3545 0F 00              2691 	.byte #0x0F,#0x00	;  15
   3547 0E 00              2692 	.byte #0x0E,#0x00	;  14
   3549 0D 00              2693 	.byte #0x0D,#0x00	;  13
   354B 0C 00              2694 	.byte #0x0C,#0x00	;  12
   354D 0B 00              2695 	.byte #0x0B,#0x00	;  11
   354F 0A 00              2696 	.byte #0x0A,#0x00	;  10
   3551 09 00              2697 	.byte #0x09,#0x00	;  9
   3553 08 00              2698 	.byte #0x08,#0x00	;  8
   3555 07 00              2699 	.byte #0x07,#0x00	;  7
   3557 06 00              2700 	.byte #0x06,#0x00	;  6
   3559 05 00              2701 	.byte #0x05,#0x00	;  5
   355B 04 00              2702 	.byte #0x04,#0x00	;  4
   355D 03 00              2703 	.byte #0x03,#0x00	;  3
   355F 02 00              2704 	.byte #0x02,#0x00	;  2
   3561 01 00              2705 	.byte #0x01,#0x00	;  1
   3563 00 00              2706 	.byte #0x00,#0x00	;  0
   3565                    2707 _rx_ffe_set_r_tb:
   3565 00 00              2708 	.byte #0x00,#0x00	;  0
   3567 01 00              2709 	.byte #0x01,#0x00	;  1
   3569 02 00              2710 	.byte #0x02,#0x00	;  2
   356B 03 00              2711 	.byte #0x03,#0x00	;  3
   356D 04 00              2712 	.byte #0x04,#0x00	;  4
   356F 05 00              2713 	.byte #0x05,#0x00	;  5
   3571 06 00              2714 	.byte #0x06,#0x00	;  6
   3573 07 00              2715 	.byte #0x07,#0x00	;  7
   3575 08 00              2716 	.byte #0x08,#0x00	;  8
   3577 09 00              2717 	.byte #0x09,#0x00	;  9
   3579 0A 00              2718 	.byte #0x0A,#0x00	;  10
   357B 0B 00              2719 	.byte #0x0B,#0x00	;  11
   357D 0C 00              2720 	.byte #0x0C,#0x00	;  12
   357F 0D 00              2721 	.byte #0x0D,#0x00	;  13
   3581 0E 00              2722 	.byte #0x0E,#0x00	;  14
   3583 0F 00              2723 	.byte #0x0F,#0x00	;  15
   3585 0F 00              2724 	.byte #0x0F,#0x00	;  15
   3587 0F 00              2725 	.byte #0x0F,#0x00	;  15
   3589 0F 00              2726 	.byte #0x0F,#0x00	;  15
   358B 0F 00              2727 	.byte #0x0F,#0x00	;  15
   358D 0F 00              2728 	.byte #0x0F,#0x00	;  15
   358F 0F 00              2729 	.byte #0x0F,#0x00	;  15
   3591 0F 00              2730 	.byte #0x0F,#0x00	;  15
   3593 0F 00              2731 	.byte #0x0F,#0x00	;  15
   3595 0F 00              2732 	.byte #0x0F,#0x00	;  15
   3597 0F 00              2733 	.byte #0x0F,#0x00	;  15
   3599 0F 00              2734 	.byte #0x0F,#0x00	;  15
   359B 0F 00              2735 	.byte #0x0F,#0x00	;  15
   359D 0F 00              2736 	.byte #0x0F,#0x00	;  15
   359F 0F 00              2737 	.byte #0x0F,#0x00	;  15
   35A1 0F 00              2738 	.byte #0x0F,#0x00	;  15
   35A3 0F 00              2739 	.byte #0x0F,#0x00	;  15
   35A5                    2740 _rx_ffe_set_r_pcie_tb:
   35A5 00 00              2741 	.byte #0x00,#0x00	;  0
   35A7 02 00              2742 	.byte #0x02,#0x00	;  2
   35A9 04 00              2743 	.byte #0x04,#0x00	;  4
   35AB 06 00              2744 	.byte #0x06,#0x00	;  6
   35AD 09 00              2745 	.byte #0x09,#0x00	;  9
   35AF 0B 00              2746 	.byte #0x0B,#0x00	;  11
                           2747 	.area CABS    (ABS,CODE)
