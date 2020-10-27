                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:44 2018
                              5 ;--------------------------------------------------------
                              6 	.module pll_cal_rom
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _lccap_msb_thermo_tb
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
                            980 	.globl _set_lcvco_dac
                            981 	.globl _pll_cal_loop
                            982 	.globl _pll_amp_cal
                            983 	.globl _pll_amp_dac_dec
                            984 	.globl _pll_amp_dac_inc
                            985 	.globl _pll_amp_cal_cont
                            986 	.globl _pllcal_load
                            987 	.globl _check_pll_lock
                            988 	.globl _pllcal_save
                            989 	.globl _temp_level_todic_rd
                            990 ;--------------------------------------------------------
                            991 ; special function registers
                            992 ;--------------------------------------------------------
                            993 	.area RSEG    (ABS,DATA)
   0000                     994 	.org 0x0000
                    0080    995 _P0	=	0x0080
                    0082    996 _DPL	=	0x0082
                    0083    997 _DPH	=	0x0083
                    0086    998 _WDTREL	=	0x0086
                    0087    999 _PCON	=	0x0087
                    0088   1000 _TCON	=	0x0088
                    0089   1001 _TMOD	=	0x0089
                    008A   1002 _TL0	=	0x008a
                    008B   1003 _TL1	=	0x008b
                    008C   1004 _TH0	=	0x008c
                    008D   1005 _TH1	=	0x008d
                    008E   1006 _CKCON	=	0x008e
                    0090   1007 _P1	=	0x0090
                    0092   1008 _DPS	=	0x0092
                    0094   1009 _PSBANK	=	0x0094
                    0098   1010 _SCON	=	0x0098
                    0099   1011 _SBUF	=	0x0099
                    009A   1012 _IEN2	=	0x009a
                    00A0   1013 _P2	=	0x00a0
                    00A1   1014 _DMAS0	=	0x00a1
                    00A2   1015 _DMAS1	=	0x00a2
                    00A3   1016 _DMAS2	=	0x00a3
                    00A4   1017 _DMAT0	=	0x00a4
                    00A5   1018 _DMAT1	=	0x00a5
                    00A6   1019 _DMAT2	=	0x00a6
                    00A8   1020 _IEN0	=	0x00a8
                    00A9   1021 _IP0	=	0x00a9
                    00AA   1022 _S0RELL	=	0x00aa
                    00B0   1023 _P3	=	0x00b0
                    00B1   1024 _DMAC0	=	0x00b1
                    00B2   1025 _DMAC1	=	0x00b2
                    00B3   1026 _DMAC2	=	0x00b3
                    00B4   1027 _DMASEL	=	0x00b4
                    00B5   1028 _DMAM0	=	0x00b5
                    00B6   1029 _DMAM1	=	0x00b6
                    00B8   1030 _IEN1	=	0x00b8
                    00B9   1031 _IP1	=	0x00b9
                    00BA   1032 _S0RELH	=	0x00ba
                    00C0   1033 _IRCON	=	0x00c0
                    00C1   1034 _CCEN	=	0x00c1
                    00C8   1035 _T2CON	=	0x00c8
                    00CA   1036 _RCAP2L	=	0x00ca
                    00CB   1037 _RCAP2H	=	0x00cb
                    00CC   1038 _TL2	=	0x00cc
                    00CD   1039 _TH2	=	0x00cd
                    00D0   1040 _PSW	=	0x00d0
                    00D8   1041 _ADCON	=	0x00d8
                    00E0   1042 _ACC	=	0x00e0
                    00E8   1043 _EIE	=	0x00e8
                    00F0   1044 _B	=	0x00f0
                    00F7   1045 _SRST	=	0x00f7
                    8C8A   1046 _TMR0	=	0x8c8a
                    8D8B   1047 _TMR1	=	0x8d8b
                    CDCC   1048 _TMR2	=	0xcdcc
                    A2A1   1049 _DMASA	=	0xa2a1
                    A5A4   1050 _DMATA	=	0xa5a4
                    B2B1   1051 _DMAC	=	0xb2b1
                           1052 ;--------------------------------------------------------
                           1053 ; special function bits
                           1054 ;--------------------------------------------------------
                           1055 	.area RSEG    (ABS,DATA)
   0000                    1056 	.org 0x0000
                    0080   1057 _P0_0	=	0x0080
                    0081   1058 _P0_1	=	0x0081
                    0082   1059 _P0_2	=	0x0082
                    0083   1060 _P0_3	=	0x0083
                    0084   1061 _P0_4	=	0x0084
                    0085   1062 _P0_5	=	0x0085
                    0086   1063 _P0_6	=	0x0086
                    0087   1064 _P0_7	=	0x0087
                    0090   1065 _P1_0	=	0x0090
                    0091   1066 _P1_1	=	0x0091
                    0092   1067 _P1_2	=	0x0092
                    0093   1068 _P1_3	=	0x0093
                    0094   1069 _P1_4	=	0x0094
                    0095   1070 _P1_5	=	0x0095
                    0096   1071 _P1_6	=	0x0096
                    0097   1072 _P1_7	=	0x0097
                    00A0   1073 _P2_0	=	0x00a0
                    00A1   1074 _P2_1	=	0x00a1
                    00A2   1075 _P2_2	=	0x00a2
                    00A3   1076 _P2_3	=	0x00a3
                    00A4   1077 _P2_4	=	0x00a4
                    00A5   1078 _P2_5	=	0x00a5
                    00A6   1079 _P2_6	=	0x00a6
                    00A7   1080 _P2_7	=	0x00a7
                    00B0   1081 _P3_0	=	0x00b0
                    00B1   1082 _P3_1	=	0x00b1
                    00B2   1083 _P3_2	=	0x00b2
                    00B3   1084 _P3_3	=	0x00b3
                    00B4   1085 _P3_4	=	0x00b4
                    00B5   1086 _P3_5	=	0x00b5
                    00B6   1087 _P3_6	=	0x00b6
                    00B7   1088 _P3_7	=	0x00b7
                    0088   1089 _IT0	=	0x0088
                    0089   1090 _IE0	=	0x0089
                    008A   1091 _IT1	=	0x008a
                    008B   1092 _IE1	=	0x008b
                    008C   1093 _TR0	=	0x008c
                    008D   1094 _TF0	=	0x008d
                    008E   1095 _TR1	=	0x008e
                    008F   1096 _TF1	=	0x008f
                    00A8   1097 _EX0	=	0x00a8
                    00A9   1098 _ET0	=	0x00a9
                    00AA   1099 _EX1	=	0x00aa
                    00AB   1100 _ET1	=	0x00ab
                    00AC   1101 _ES	=	0x00ac
                    00AD   1102 _ET2	=	0x00ad
                    00AE   1103 _WDT	=	0x00ae
                    00AF   1104 _EA	=	0x00af
                    00B8   1105 _EX7	=	0x00b8
                    00B9   1106 _EX2	=	0x00b9
                    00BA   1107 _EX3	=	0x00ba
                    00BB   1108 _EX4	=	0x00bb
                    00BC   1109 _EX5	=	0x00bc
                    00BD   1110 _EX6	=	0x00bd
                    00BE   1111 _PS1	=	0x00be
                    009A   1112 _ES1	=	0x009a
                    009B   1113 _EX8	=	0x009b
                    009C   1114 _EX9	=	0x009c
                    009D   1115 _EX10	=	0x009d
                    009E   1116 _EX11	=	0x009e
                    009F   1117 _EX12	=	0x009f
                    0098   1118 _RI	=	0x0098
                    0099   1119 _TI	=	0x0099
                    00C6   1120 _TF2	=	0x00c6
                           1121 ;--------------------------------------------------------
                           1122 ; overlayable register banks
                           1123 ;--------------------------------------------------------
                           1124 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1125 	.ds 8
                           1126 ;--------------------------------------------------------
                           1127 ; internal ram data
                           1128 ;--------------------------------------------------------
                           1129 	.area DSEG    (DATA)
                           1130 ;--------------------------------------------------------
                           1131 ; overlayable items in internal ram 
                           1132 ;--------------------------------------------------------
                           1133 	.area OSEG    (OVR,DATA)
                           1134 ;--------------------------------------------------------
                           1135 ; indirectly addressable internal ram data
                           1136 ;--------------------------------------------------------
                           1137 	.area ISEG    (DATA)
                           1138 ;--------------------------------------------------------
                           1139 ; absolute internal ram data
                           1140 ;--------------------------------------------------------
                           1141 	.area IABS    (ABS,DATA)
                           1142 	.area IABS    (ABS,DATA)
                           1143 ;--------------------------------------------------------
                           1144 ; bit data
                           1145 ;--------------------------------------------------------
                           1146 	.area BSEG    (BIT)
                           1147 ;--------------------------------------------------------
                           1148 ; paged external ram data
                           1149 ;--------------------------------------------------------
                           1150 	.area PSEG    (PAG,XDATA)
                           1151 ;--------------------------------------------------------
                           1152 ; external ram data
                           1153 ;--------------------------------------------------------
                           1154 	.area XSEG    (XDATA)
                    1000   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1171 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1172 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1173 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1174 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1175 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1176 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1177 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1178 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1179 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1180 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1181 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1182 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1183 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1184 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1185 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1186 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1187 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1188 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1189 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1190 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1191 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1192 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1193 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1194 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1195 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1196 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1197 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1198 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1199 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1200 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1201 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1202 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1203 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1204 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1205 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1206 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1207 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1208 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1209 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1210 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1211 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1212 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1213 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1214 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1215 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1216 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1217 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1218 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1219 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1220 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1221 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1222 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1223 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1224 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1225 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1226 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1227 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1228 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1229 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1230 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1231 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1232 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1233 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1234 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1235 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1236 _ANA_DFEE_REG_20	=	0x0480
                    0484   1237 _ANA_DFEE_REG_21	=	0x0484
                    0488   1238 _ANA_DFEE_REG_22	=	0x0488
                    048C   1239 _ANA_DFEE_REG_23	=	0x048c
                    0490   1240 _ANA_DFEE_REG_24	=	0x0490
                    0494   1241 _ANA_DFEE_REG_25	=	0x0494
                    0498   1242 _ANA_DFEE_REG_26	=	0x0498
                    049C   1243 _ANA_DFEE_REG_27	=	0x049c
                    0400   1244 _ANA_DFEE_REG_00	=	0x0400
                    0404   1245 _ANA_DFEE_REG_01	=	0x0404
                    0408   1246 _ANA_DFEE_REG_02	=	0x0408
                    040C   1247 _ANA_DFEE_REG_03	=	0x040c
                    0410   1248 _ANA_DFEE_REG_04	=	0x0410
                    0414   1249 _ANA_DFEE_REG_05	=	0x0414
                    0418   1250 _ANA_DFEE_REG_06	=	0x0418
                    041C   1251 _ANA_DFEE_REG_07	=	0x041c
                    0420   1252 _ANA_DFEE_REG_08	=	0x0420
                    0424   1253 _ANA_DFEE_REG_09	=	0x0424
                    0428   1254 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1255 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1256 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1257 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1258 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1259 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1260 _ANA_DFEE_REG_10	=	0x0440
                    0444   1261 _ANA_DFEE_REG_11	=	0x0444
                    0448   1262 _ANA_DFEE_REG_12	=	0x0448
                    044C   1263 _ANA_DFEE_REG_13	=	0x044c
                    0450   1264 _ANA_DFEE_REG_14	=	0x0450
                    0454   1265 _ANA_DFEE_REG_15	=	0x0454
                    0458   1266 _ANA_DFEE_REG_16	=	0x0458
                    045C   1267 _ANA_DFEE_REG_17	=	0x045c
                    0460   1268 _ANA_DFEE_REG_18	=	0x0460
                    0464   1269 _ANA_DFEE_REG_19	=	0x0464
                    0468   1270 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1271 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1272 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1273 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1274 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1275 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1276 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1277 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1278 _ANA_DFEO_REG_10	=	0x0840
                    0844   1279 _ANA_DFEO_REG_11	=	0x0844
                    0848   1280 _ANA_DFEO_REG_12	=	0x0848
                    084C   1281 _ANA_DFEO_REG_13	=	0x084c
                    0850   1282 _ANA_DFEO_REG_14	=	0x0850
                    0854   1283 _ANA_DFEO_REG_15	=	0x0854
                    0858   1284 _ANA_DFEO_REG_16	=	0x0858
                    085C   1285 _ANA_DFEO_REG_17	=	0x085c
                    0860   1286 _ANA_DFEO_REG_18	=	0x0860
                    0864   1287 _ANA_DFEO_REG_19	=	0x0864
                    0868   1288 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1289 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1290 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1291 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1292 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1293 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1294 _ANA_DFEO_REG_20	=	0x0880
                    0884   1295 _ANA_DFEO_REG_21	=	0x0884
                    0888   1296 _ANA_DFEO_REG_22	=	0x0888
                    088C   1297 _ANA_DFEO_REG_23	=	0x088c
                    0890   1298 _ANA_DFEO_REG_24	=	0x0890
                    0894   1299 _ANA_DFEO_REG_25	=	0x0894
                    0898   1300 _ANA_DFEO_REG_26	=	0x0898
                    089C   1301 _ANA_DFEO_REG_27	=	0x089c
                    0800   1302 _ANA_DFEO_REG_00	=	0x0800
                    0804   1303 _ANA_DFEO_REG_01	=	0x0804
                    0808   1304 _ANA_DFEO_REG_02	=	0x0808
                    080C   1305 _ANA_DFEO_REG_03	=	0x080c
                    0810   1306 _ANA_DFEO_REG_04	=	0x0810
                    0814   1307 _ANA_DFEO_REG_05	=	0x0814
                    0818   1308 _ANA_DFEO_REG_06	=	0x0818
                    081C   1309 _ANA_DFEO_REG_07	=	0x081c
                    0820   1310 _ANA_DFEO_REG_08	=	0x0820
                    0824   1311 _ANA_DFEO_REG_09	=	0x0824
                    0828   1312 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1313 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1314 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1315 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1316 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1317 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1318 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1319 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1320 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1321 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1322 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1323 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1324 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1325 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1326 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1327 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1328 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1329 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1330 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1331 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1332 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1333 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1334 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1335 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1336 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1337 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1338 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1339 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1340 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1341 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1342 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1343 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1344 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1345 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1346 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1347 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1348 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1349 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1350 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1351 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1352 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1353 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1354 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1355 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1356 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1357 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1358 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1359 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1360 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1361 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1362 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1363 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1364 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1365 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1366 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1367 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1368 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1369 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1370 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1371 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1372 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1373 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1374 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1375 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1376 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1377 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1378 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1379 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1380 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1381 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1382 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1383 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1384 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1385 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1386 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1387 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1388 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1389 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1390 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1391 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1392 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1393 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1394 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1395 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1396 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1397 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1398 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1399 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1400 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1401 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1402 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1403 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1404 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1405 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1406 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1407 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1408 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1409 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1410 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1411 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1412 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1413 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1414 _TX_SYSTEM_LANE	=	0x2034
                    203C   1415 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1416 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1417 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1418 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1419 __FIELDNAME__LANE	=	0x204c
                    2050   1420 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1421 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1422 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1423 _MON_TOP	=	0x205c
                    2100   1424 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1425 _RX_SYSTEM_LANE	=	0x2104
                    2108   1426 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1427 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1428 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1429 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1430 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1431 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1432 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1433 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1434 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1435 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1436 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1437 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1438 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1439 _CDR_LOCK_REG	=	0x213c
                    2140   1440 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1441 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1442 _RX_DATA_PATH_REG	=	0x2148
                    214C   1443 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1444 _RX_CALIBRATION_REG	=	0x2150
                    2158   1445 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1446 _DTL_REG0	=	0x2160
                    2164   1447 _DTL_REG1	=	0x2164
                    2168   1448 _DTL_REG2	=	0x2168
                    216C   1449 _DTL_REG3	=	0x216c
                    2170   1450 _SQ_REG0	=	0x2170
                    4000   1451 _LANE_CFG0	=	0x4000
                    4004   1452 _LANE_STATUS0	=	0x4004
                    4008   1453 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1454 _LANE_CFG2_LANE	=	0x400c
                    4010   1455 _LANE_CFG4	=	0x4010
                    4014   1456 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1457 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1458 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1459 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1460 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1461 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1462 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1463 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1464 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1465 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1466 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1467 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1468 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1469 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1470 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1471 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1472 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1473 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1474 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1475 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1476 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1477 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1478 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1479 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1480 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1481 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1482 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1483 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1484 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1485 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1486 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1487 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1488 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1489 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1490 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1491 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1492 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1493 _MCU_CONTROL_LANE	=	0x2200
                    2204   1494 _MCU_GPIO	=	0x2204
                    2208   1495 _CACHE_DEBUG0	=	0x2208
                    220C   1496 _CACHE_DEBUG1	=	0x220c
                    2210   1497 _LANE_SYSTEM0	=	0x2210
                    2230   1498 _MCU_STATUS0_LANE	=	0x2230
                    2234   1499 _MCU_STATUS1_LANE	=	0x2234
                    2238   1500 _MCU_STATUS2_LANE	=	0x2238
                    223C   1501 _MCU_STATUS3_LANE	=	0x223c
                    2240   1502 _MCU_INT0_CONTROL	=	0x2240
                    2244   1503 _MCU_INT1_CONTROL	=	0x2244
                    2248   1504 _MCU_INT2_CONTROL	=	0x2248
                    224C   1505 _MCU_INT3_CONTROL	=	0x224c
                    2250   1506 _MCU_INT4_CONTROL	=	0x2250
                    2254   1507 _MCU_INT5_CONTROL	=	0x2254
                    2258   1508 _MCU_INT6_CONTROL	=	0x2258
                    225C   1509 _MCU_INT7_CONTROL	=	0x225c
                    2260   1510 _MCU_INT8_CONTROL	=	0x2260
                    2264   1511 _MCU_INT9_CONTROL	=	0x2264
                    2268   1512 _MCU_INT10_CONTROL	=	0x2268
                    226C   1513 _MCU_INT11_CONTROL	=	0x226c
                    2270   1514 _MCU_INT12_CONTROL	=	0x2270
                    2274   1515 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1516 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1517 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1518 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1519 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1520 _MCU_IRQ_LANE	=	0x2288
                    228C   1521 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1522 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1523 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1524 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1525 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1526 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1527 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1528 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1529 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1530 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1531 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1532 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1533 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1534 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1535 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1536 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1537 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1538 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1539 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1540 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1541 _MCU_WDT_LANE	=	0x22dc
                    22E0   1542 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1543 _MCU_COMMAND0	=	0x22e4
                    22F4   1544 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1545 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1546 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1547 _PT_CONTROL0	=	0x2300
                    2304   1548 _PT_CONTROL1	=	0x2304
                    2308   1549 _PT_USER_PATTERN0	=	0x2308
                    230C   1550 _PT_USER_PATTERN1	=	0x230c
                    2310   1551 _PT_USER_PATTERN2	=	0x2310
                    2314   1552 _PT_COUNTER0	=	0x2314
                    2318   1553 _PT_COUNTER1	=	0x2318
                    231C   1554 _PT_COUNTER2	=	0x231c
                    2400   1555 _DFE_CTRL_REG0	=	0x2400
                    2404   1556 _DFE_CTRL_REG1	=	0x2404
                    2408   1557 _DFE_CTRL_REG2	=	0x2408
                    240C   1558 _DFE_CTRL_REG3	=	0x240c
                    2410   1559 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1560 _DFE_CTRL_REG4	=	0x2414
                    2418   1561 _DFE_ANA_REG0	=	0x2418
                    241C   1562 _DFE_ANA_REG1	=	0x241c
                    2420   1563 _DFE_STEP_REG0	=	0x2420
                    2424   1564 _DFE_STEP_REG1	=	0x2424
                    2430   1565 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1566 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1567 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1568 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1569 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1570 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1571 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1572 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1573 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1574 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1575 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1576 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1577 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1578 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1579 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1580 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1581 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1582 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1583 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1584 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1585 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1586 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1587 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1588 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1589 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1590 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1591 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1592 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1593 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1594 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1595 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1596 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1597 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1598 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1599 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1600 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1601 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1602 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1603 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1604 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1605 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1606 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1607 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1608 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1609 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1610 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1611 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1612 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1613 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1614 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1615 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1616 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1617 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1618 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1619 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1620 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1621 _CAL_OFST_REG0	=	0x2518
                    251C   1622 _CAL_OFST_REG1	=	0x251c
                    2520   1623 _CAL_OFST_REG2	=	0x2520
                    2530   1624 _DFE_DCE_REG0	=	0x2530
                    2540   1625 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1626 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1627 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1628 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1629 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1630 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1631 _EOM_VLD_REG0	=	0x2560
                    2564   1632 _EOM_VLD_REG1	=	0x2564
                    2568   1633 _EOM_VLD_REG2	=	0x2568
                    256C   1634 _EOM_VLD_REG3	=	0x256c
                    2570   1635 _EOM_ERR_REG0	=	0x2570
                    2574   1636 _EOM_ERR_REG1	=	0x2574
                    2578   1637 _EOM_ERR_REG2	=	0x2578
                    257C   1638 _EOM_ERR_REG3	=	0x257c
                    2580   1639 _EOM_REG0	=	0x2580
                    25F0   1640 _EOM_VLD_REG4	=	0x25f0
                    25F4   1641 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1642 _CAL_CTRL1_LANE	=	0x6000
                    6004   1643 _CAL_CTRL2_LANE	=	0x6004
                    6008   1644 _CAL_CTRL3_LANE	=	0x6008
                    600C   1645 _CAL_CTRL4_LANE	=	0x600c
                    6010   1646 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1647 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1648 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1649 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1650 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1651 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1652 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1653 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1654 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1655 _DFE_CONTROL_0	=	0x6034
                    6038   1656 _DFE_CONTROL_1	=	0x6038
                    6040   1657 _DFE_CONTROL_2	=	0x6040
                    6044   1658 _DFE_CONTROL_3	=	0x6044
                    6048   1659 _DFE_CONTROL_4	=	0x6048
                    604C   1660 _DFE_CONTROL_5	=	0x604c
                    6050   1661 _TRAIN_CONTROL_0	=	0x6050
                    6054   1662 _TRAIN_CONTROL_1	=	0x6054
                    6058   1663 _TRAIN_CONTROL_2	=	0x6058
                    605C   1664 _RPTA_CONFIG_0	=	0x605c
                    6060   1665 _RPTA_CONFIG_1	=	0x6060
                    6064   1666 _DLL_CAL	=	0x6064
                    6068   1667 _TRAIN_PARA_0	=	0x6068
                    606C   1668 _TRAIN_PARA_1	=	0x606c
                    6070   1669 _TRAIN_PARA_2	=	0x6070
                    6074   1670 _TRAIN_PARA_3	=	0x6074
                    6078   1671 _DFE_CONTROL_6	=	0x6078
                    607C   1672 _DFE_TEST_0	=	0x607c
                    6080   1673 _DFE_TEST_1	=	0x6080
                    6084   1674 _DFE_TEST_4	=	0x6084
                    6088   1675 _DFE_TEST_5	=	0x6088
                    608C   1676 _DFE_CONTROL_7	=	0x608c
                    6090   1677 _DFE_CONTROL_8	=	0x6090
                    6094   1678 _DFE_CONTROL_9	=	0x6094
                    6098   1679 _DFE_CONTROL_10	=	0x6098
                    609C   1680 _DFE_CONTROL_11	=	0x609c
                    60A0   1681 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1682 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1683 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1684 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1685 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1686 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1687 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1688 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1689 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1690 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1691 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1692 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1693 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1694 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1695 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1696 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1697 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1698 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1699 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1700 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1701 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1702 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1703 _END_XDAT_LANE	=	0x60f8
                    A000   1704 _TX_CMN_REG	=	0xa000
                    A008   1705 _DTX_REG0	=	0xa008
                    A00C   1706 _DTX_REG1	=	0xa00c
                    A010   1707 _DTX_REG2	=	0xa010
                    A014   1708 _DTX_REG3	=	0xa014
                    A018   1709 _DTX_REG4	=	0xa018
                    A01C   1710 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1711 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1712 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1713 _SRIS_REG0	=	0xa02c
                    A030   1714 _SRIS_REG1	=	0xa030
                    A100   1715 _RX_CMN_0	=	0xa100
                    A110   1716 _DFE_STATIC_REG0	=	0xa110
                    A114   1717 _DFE_STATIC_REG1	=	0xa114
                    A118   1718 _DFE_STATIC_REG3	=	0xa118
                    A11C   1719 _DFE_STATIC_REG4	=	0xa11c
                    A120   1720 _DFE_STATIC_REG5	=	0xa120
                    A124   1721 _DFE_STATIC_REG6	=	0xa124
                    4200   1722 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1723 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1724 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1725 _GLOB_MISC_CTRL	=	0x420c
                    4210   1726 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1727 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1728 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1729 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1730 _GLOB_PM_CFG0	=	0x4220
                    4224   1731 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1732 _GLOB_COUNTER_HI	=	0x4228
                    422C   1733 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1734 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1735 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1736 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1737 _GLOB_BIST_CTRL	=	0x423c
                    4240   1738 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1739 _GLOB_BIST_START	=	0x4244
                    4248   1740 _GLOB_BIST_MASK	=	0x4248
                    424C   1741 _GLOB_BIST_RESULT	=	0x424c
                    4250   1742 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1743 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1744 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1745 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1746 _MCU_CONTROL_0	=	0xa200
                    A204   1747 _MCU_CONTROL_1	=	0xa204
                    A208   1748 _MCU_CONTROL_2	=	0xa208
                    A20C   1749 _MCU_CONTROL_3	=	0xa20c
                    A210   1750 _MCU_CONTROL_4	=	0xa210
                    A214   1751 _MCU_DEBUG0	=	0xa214
                    A218   1752 _MCU_DEBUG1	=	0xa218
                    A21C   1753 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1754 _MEMORY_CONTROL_1	=	0xa220
                    A224   1755 _MEMORY_CONTROL_2	=	0xa224
                    A228   1756 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1757 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1758 _MCU_INFO_0	=	0xa234
                    A238   1759 _MCU_INFO_1	=	0xa238
                    A23C   1760 _MCU_INFO_2	=	0xa23c
                    A240   1761 _MCU_INFO_3	=	0xa240
                    A244   1762 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1763 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1764 _MEM_IRQ	=	0xa2e4
                    A2E8   1765 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1766 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1767 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1768 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1769 _MCU_SYNC1	=	0xa2f8
                    A2FC   1770 _MCU_SYNC2	=	0xa2fc
                    A300   1771 _TEST0	=	0xa300
                    A304   1772 _TEST1	=	0xa304
                    A308   1773 _TEST2	=	0xa308
                    A30C   1774 _TEST3	=	0xa30c
                    A310   1775 _TEST4	=	0xa310
                    A314   1776 _SYSTEM	=	0xa314
                    A318   1777 _PM_CMN_REG1	=	0xa318
                    A31C   1778 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1779 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1780 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1781 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1782 _PLLCAL_REG0	=	0xa32c
                    A330   1783 _PLLCAL_REG1	=	0xa330
                    A334   1784 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1785 _SPD_CMN_REG1	=	0xa338
                    A33C   1786 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1787 _CMN_CALIBRATION	=	0xa340
                    A344   1788 __FIELDNAME_	=	0xa344
                    A348   1789 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1790 _PM_CMN_REG2	=	0xa34c
                    A354   1791 _TEST5	=	0xa354
                    A358   1792 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1793 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1794 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1795 _MCU_SDT_CMN	=	0xa364
                    A368   1796 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1797 _MCU_INT_ADDR	=	0xa36c
                    A370   1798 _CMN_ISR_2	=	0xa370
                    A374   1799 _CMN_ISR_MASK_2	=	0xa374
                    A378   1800 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1801 _CMN_MCU_GPIO	=	0xa37c
                    A380   1802 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1803 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1804 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1805 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1806 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1807 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1808 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1809 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1810 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1811 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1812 _CMN_ISR_1	=	0xa3a8
                    A3AC   1813 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1814 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1815 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1816 _CID_REG0	=	0xa3f8
                    A3FC   1817 _CID_REG1	=	0xa3fc
                    E600   1818 _FW_REV	=	0xe600
                    E604   1819 _CONTROL_CONFIG0	=	0xe604
                    E608   1820 _CONTROL_CONFIG1	=	0xe608
                    E60C   1821 _CONTROL_CONFIG2	=	0xe60c
                    E610   1822 _CONTROL_CONFIG3	=	0xe610
                    E614   1823 _CONTROL_CONFIG4	=	0xe614
                    E618   1824 _CONTROL_CONFIG5	=	0xe618
                    E61C   1825 _CONTROL_CONFIG6	=	0xe61c
                    E620   1826 _CONTROL_CONFIG7	=	0xe620
                    E624   1827 _CAL_DATA0	=	0xe624
                    E628   1828 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1829 _CONTROL_CONFIG8	=	0xe62c
                    E630   1830 _CONTROL_CONFIG9	=	0xe630
                    E634   1831 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1832 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1833 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1834 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1835 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1836 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1837 _CAL_STATUS_READ	=	0xe64c
                    E650   1838 _MCU_CONFIG	=	0xe650
                    E654   1839 _CAL_DATA1	=	0xe654
                    E658   1840 _LOOP_CNTS	=	0xe658
                    E65C   1841 _MCU_CONFIG1	=	0xe65c
                    E660   1842 _TIMER_SEL1	=	0xe660
                    E664   1843 _TIMER_SEL2	=	0xe664
                    E668   1844 _TIMER_SEL3	=	0xe668
                    E66C   1845 _G_SELLV_TXCLK	=	0xe66c
                    E670   1846 _G_SELLV_TXDATA	=	0xe670
                    E674   1847 _G_SELLV_TXPRE	=	0xe674
                    E678   1848 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1849 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1850 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1851 _SAS_PRESET0_TB	=	0xe684
                    E688   1852 _SAS_PRESET1_TB	=	0xe688
                    E68C   1853 _SAS_PRESET2_TB	=	0xe68c
                    E690   1854 _ETH_PRESET0_TB	=	0xe690
                    E694   1855 _ETH_PRESET1_TB	=	0xe694
                    E698   1856 _TX_SAVE_0	=	0xe698
                    E69C   1857 _TX_SAVE_1	=	0xe69c
                    E6A0   1858 _TX_SAVE_2	=	0xe6a0
                    E6A4   1859 _TX_SAVE_3	=	0xe6a4
                    E6A8   1860 _TX_SAVE_4	=	0xe6a8
                    E6AC   1861 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1862 _SYNC_INFO	=	0xe6b0
                    E6B4   1863 _MCU_INFO_4	=	0xe6b4
                    E6B8   1864 _MCU_INFO_5	=	0xe6b8
                    E6BC   1865 _MCU_INFO_12	=	0xe6bc
                    E6C0   1866 _MCU_INFO_13	=	0xe6c0
                    E6C4   1867 _END_XDAT_CMN	=	0xe6c4
                    2600   1868 _DME_ENC_REG0	=	0x2600
                    2604   1869 _DME_ENC_REG1	=	0x2604
                    2608   1870 _DME_ENC_REG2	=	0x2608
                    260C   1871 _DME_DEC_REG0	=	0x260c
                    2610   1872 _DME_DEC_REG1	=	0x2610
                    2614   1873 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1874 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1875 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1876 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1877 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1878 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1879 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1880 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1881 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1882 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1883 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1884 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1885 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1886 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1887 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1888 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1889 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1890 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1891 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1892 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1893 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1894 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1895 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1896 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1897 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1898 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1899 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1900 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1901 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1902 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1903 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1904 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1905 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1906 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1907 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1908 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1909 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1910 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1911 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1912 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1913 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1914 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1915 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1916 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1917 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1918 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1919 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1920 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1921 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1922 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1923 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1924 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1925 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1926 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1927 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1928 _CDS_READ_MISC0	=	0x6170
                    6174   1929 _CDS_READ_MISC1	=	0x6174
                    6214   1930 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1931 _lc_speedtable	=	0xe000
                    E1C0   1932 _ring_speedtable	=	0xe1c0
                    E5C0   1933 _phy_mode_cmn_table	=	0xe5c0
                    6300   1934 _max_gen	=	0x6300
                    6301   1935 _min_gen	=	0x6301
                    6304   1936 _speedtable	=	0x6304
                    65D4   1937 _phy_mode_lane_table	=	0x65d4
                    60B4   1938 _rc_save	=	0x60b4
                    60D0   1939 _txffe_save	=	0x60d0
                    60E4   1940 _phase_save	=	0x60e4
                    6030   1941 _train_gn1_index	=	0x6030
                    6031   1942 _train_g1_index	=	0x6031
                    6032   1943 _train_g0_index	=	0x6032
                    E6B0   1944 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1945 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1946 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1947 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1948 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1949 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1950 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1951 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1952 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1953 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1954 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1955 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1956 _lnx_cal_txdcc	=	0x65da
                    65DE   1957 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1958 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1959 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1960 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1961 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1962 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1963 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1964 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1965 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1966 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1967 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1968 _lnx_cal_eom_dpher	=	0x6610
                    6612   1969 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1970 _lnx_cal_align90_dac	=	0x661a
                    6622   1971 _lnx_cal_align90_gm	=	0x6622
                    662A   1972 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1973 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1974 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1975 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1976 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1977 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1978 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1979 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1980 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1981 _lnx_calx_txdcc	=	0x6499
                    649F   1982 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1983 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1984 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1985 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1986 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1987 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1988 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1989 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1990 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1991 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1992 _lnx_calx_align90_gm	=	0x64d8
                    6100   1993 _cds28	=	0x6100
                    6178   1994 _dfe_sm	=	0x6178
                    61B8   1995 _dfe_sm_dc	=	0x61b8
                    61C0   1996 _dfe_sm_save	=	0x61c0
                    03FC   1997 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1998 _tx_tb	=	0xe684
                    E698   1999 _train_save_tb	=	0xe698
                    607C   2000 _sq_thrs_ratio_tb	=	0x607c
                           2001 ;--------------------------------------------------------
                           2002 ; absolute external ram data
                           2003 ;--------------------------------------------------------
                           2004 	.area XABS    (ABS,XDATA)
                           2005 ;--------------------------------------------------------
                           2006 ; external initialized ram data
                           2007 ;--------------------------------------------------------
                           2008 	.area HOME    (CODE)
                           2009 	.area GSINIT0 (CODE)
                           2010 	.area GSINIT1 (CODE)
                           2011 	.area GSINIT2 (CODE)
                           2012 	.area GSINIT3 (CODE)
                           2013 	.area GSINIT4 (CODE)
                           2014 	.area GSINIT5 (CODE)
                           2015 	.area GSINIT  (CODE)
                           2016 	.area GSFINAL (CODE)
                           2017 	.area CSEG    (CODE)
                           2018 ;--------------------------------------------------------
                           2019 ; global & static initialisations
                           2020 ;--------------------------------------------------------
                           2021 	.area HOME    (CODE)
                           2022 	.area GSINIT  (CODE)
                           2023 	.area GSFINAL (CODE)
                           2024 	.area GSINIT  (CODE)
                           2025 ;--------------------------------------------------------
                           2026 ; Home
                           2027 ;--------------------------------------------------------
                           2028 	.area HOME    (CODE)
                           2029 	.area HOME    (CODE)
                           2030 ;--------------------------------------------------------
                           2031 ; code
                           2032 ;--------------------------------------------------------
                           2033 	.area BANK2   (CODE)
                           2034 ;------------------------------------------------------------
                           2035 ;Allocation info for local variables in function 'set_lcvco_dac'
                           2036 ;------------------------------------------------------------
                           2037 ;dac_l                     Allocated to stack - offset -4
                           2038 ;dac_h                     Allocated to registers r2 
                           2039 ;------------------------------------------------------------
                           2040 ;	../../shared/src/pll_cal_rom.c:76: void set_lcvco_dac(uint8_t dac_h, uint8_t dac_l) BANKING_CTRL {
                           2041 ;	-----------------------------------------
                           2042 ;	 function set_lcvco_dac
                           2043 ;	-----------------------------------------
   C263                    2044 _set_lcvco_dac:
                    0002   2045 	ar2 = 0x02
                    0003   2046 	ar3 = 0x03
                    0004   2047 	ar4 = 0x04
                    0005   2048 	ar5 = 0x05
                    0006   2049 	ar6 = 0x06
                    0007   2050 	ar7 = 0x07
                    0000   2051 	ar0 = 0x00
                    0001   2052 	ar1 = 0x01
   C263 C0 18              2053 	push	_bp
   C265 85 81 18           2054 	mov	_bp,sp
   C268 AA 82              2055 	mov	r2,dpl
                           2056 ;	../../shared/src/pll_cal_rom.c:78: UPHY14_CMN_ANAREG_TOP_173.BT.B0 = (dac_l<<3)|dac_h; 
   C26A E5 18              2057 	mov	a,_bp
   C26C 24 FC              2058 	add	a,#0xfc
   C26E F8                 2059 	mov	r0,a
   C26F E6                 2060 	mov	a,@r0
   C270 C4                 2061 	swap	a
   C271 03                 2062 	rr	a
   C272 54 F8              2063 	anl	a,#0xf8
   C274 FB                 2064 	mov	r3,a
   C275 42 02              2065 	orl	ar2,a
   C277 90 82 B4           2066 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C27A EA                 2067 	mov	a,r2
   C27B F0                 2068 	movx	@dptr,a
   C27C D0 18              2069 	pop	_bp
   C27E 02 00 C5           2070 	ljmp	__sdcc_banked_ret
                           2071 ;------------------------------------------------------------
                           2072 ;Allocation info for local variables in function 'pll_cal_loop'
                           2073 ;------------------------------------------------------------
                           2074 ;cnt_rdy                   Allocated to registers r4 
                           2075 ;lccap_msb_index           Allocated to registers r2 
                           2076 ;index                     Allocated to registers r3 
                           2077 ;lcvco_dac_msb             Allocated to registers r3 
                           2078 ;lcvco_dac_lsb             Allocated to registers r2 
                           2079 ;Fmea                      Allocated to registers r5 r6 
                           2080 ;temp                      Allocated to registers r2 r3 
                           2081 ;------------------------------------------------------------
                           2082 ;	../../shared/src/pll_cal_rom.c:82: void pll_cal_loop(void) BANKING_CTRL {
                           2083 ;	-----------------------------------------
                           2084 ;	 function pll_cal_loop
                           2085 ;	-----------------------------------------
   C281                    2086 _pll_cal_loop:
                           2087 ;	../../shared/src/pll_cal_rom.c:88: cmx_PLL_CAL_PASS = 1;
   C281 90 E6 4C           2088 	mov	dptr,#_CAL_STATUS_READ
   C284 E0                 2089 	movx	a,@dptr
   C285 44 40              2090 	orl	a,#0x40
   C287 F0                 2091 	movx	@dptr,a
                           2092 ;	../../shared/src/pll_cal_rom.c:89: cmx_PLL_AMP_CAL_PASS = 1;
   C288 90 E6 4D           2093 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   C28B E0                 2094 	movx	a,@dptr
   C28C 44 01              2095 	orl	a,#0x01
   C28E F0                 2096 	movx	@dptr,a
                           2097 ;	../../shared/src/pll_cal_rom.c:91: if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0)  reg_LCVCOCAL_BUF_EN = 1;
   C28F 90 E6 13           2098 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   C292 E0                 2099 	movx	a,@dptr
   C293 20 E2 07           2100 	jb	acc.2,00102$
   C296 90 82 D0           2101 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_180
   C299 E0                 2102 	movx	a,@dptr
   C29A 44 02              2103 	orl	a,#0x02
   C29C F0                 2104 	movx	@dptr,a
   C29D                    2105 00102$:
                           2106 ;	../../shared/src/pll_cal_rom.c:95: VCOAMP_VTH_SEL = TH_AMP; // one time for pwrsq
   C29D 90 E6 16           2107 	mov	dptr,#(_CONTROL_CONFIG4 + 0x0002)
   C2A0 E0                 2108 	movx	a,@dptr
   C2A1 90 82 C8           2109 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C2A4 54 0F              2110 	anl	a,#0x0f
   C2A6 F5 F0              2111 	mov	b,a
   C2A8 E0                 2112 	movx	a,@dptr
   C2A9 54 F0              2113 	anl	a,#0xf0
   C2AB 45 F0              2114 	orl	a,b
   C2AD F0                 2115 	movx	@dptr,a
                           2116 ;	../../shared/src/pll_cal_rom.c:97: temp = cmx_REFCLK_FREQ_7_0 << (FBC_RATIO+2);
   C2AE 90 E6 2F           2117 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   C2B1 E0                 2118 	movx	a,@dptr
   C2B2 FA                 2119 	mov	r2,a
   C2B3 7B 00              2120 	mov	r3,#0x00
   C2B5 90 E6 14           2121 	mov	dptr,#_CONTROL_CONFIG4
   C2B8 E0                 2122 	movx	a,@dptr
   C2B9 FC                 2123 	mov	r4,a
   C2BA 7D 00              2124 	mov	r5,#0x00
   C2BC 74 02              2125 	mov	a,#0x02
   C2BE 2C                 2126 	add	a,r4
   C2BF FC                 2127 	mov	r4,a
   C2C0 E4                 2128 	clr	a
   C2C1 3D                 2129 	addc	a,r5
   C2C2 FD                 2130 	mov	r5,a
   C2C3 8C F0              2131 	mov	b,r4
   C2C5 05 F0              2132 	inc	b
   C2C7 80 06              2133 	sjmp	00180$
   C2C9                    2134 00179$:
   C2C9 EA                 2135 	mov	a,r2
   C2CA 2A                 2136 	add	a,r2
   C2CB FA                 2137 	mov	r2,a
   C2CC EB                 2138 	mov	a,r3
   C2CD 33                 2139 	rlc	a
   C2CE FB                 2140 	mov	r3,a
   C2CF                    2141 00180$:
   C2CF D5 F0 F7           2142 	djnz	b,00179$
                           2143 ;	../../shared/src/pll_cal_rom.c:98: temp--;
   C2D2 1A                 2144 	dec	r2
   C2D3 BA FF 01           2145 	cjne	r2,#0xff,00181$
   C2D6 1B                 2146 	dec	r3
   C2D7                    2147 00181$:
                           2148 ;	../../shared/src/pll_cal_rom.c:99: reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
   C2D7 8A 04              2149 	mov	ar4,r2
   C2D9 90 A3 2C           2150 	mov	dptr,#_PLLCAL_REG0
   C2DC EC                 2151 	mov	a,r4
   C2DD F0                 2152 	movx	@dptr,a
                           2153 ;	../../shared/src/pll_cal_rom.c:100: reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
   C2DE 8B 02              2154 	mov	ar2,r3
   C2E0 90 A3 2D           2155 	mov	dptr,#(_PLLCAL_REG0 + 0x0001)
   C2E3 EA                 2156 	mov	a,r2
   C2E4 F0                 2157 	movx	@dptr,a
                           2158 ;	../../shared/src/pll_cal_rom.c:102: timeout=0;
   C2E5 C2 03              2159 	clr	_timeout
                           2160 ;	../../shared/src/pll_cal_rom.c:103: if(cmx_PLL_CAL_TIMEOUT_DIS==0) {	
   C2E7 90 E6 49           2161 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   C2EA E0                 2162 	movx	a,@dptr
   C2EB 20 E1 0A           2163 	jb	acc.1,00104$
                           2164 ;	../../shared/src/pll_cal_rom.c:104: timeout_start((uint16_t)Ttimeout_timer); 
   C2EE 75 8B 18           2165 	mov	_TMR1,#0x18
   C2F1 75 8D FC           2166 	mov	(_TMR1 >> 8),#0xFC
   C2F4 D2 8E              2167 	setb	_TR1
   C2F6 C2 03              2168 	clr	_timeout
   C2F8                    2169 00104$:
                           2170 ;	../../shared/src/pll_cal_rom.c:108: if(VIND_BAND_SEL == 1) { 
   C2F8 90 82 9C           2171 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_167
   C2FB E0                 2172 	movx	a,@dptr
   C2FC 03                 2173 	rr	a
   C2FD 54 01              2174 	anl	a,#0x01
   C2FF FA                 2175 	mov	r2,a
   C300 BA 01 06           2176 	cjne	r2,#0x01,00106$
                           2177 ;	../../shared/src/pll_cal_rom.c:109: lcvco_dac_lsb = 15;
   C303 7A 0F              2178 	mov	r2,#0x0F
                           2179 ;	../../shared/src/pll_cal_rom.c:110: lcvco_dac_msb = 5;
   C305 7B 05              2180 	mov	r3,#0x05
   C307 80 04              2181 	sjmp	00107$
   C309                    2182 00106$:
                           2183 ;	../../shared/src/pll_cal_rom.c:113: lcvco_dac_lsb = 15;
   C309 7A 0F              2184 	mov	r2,#0x0F
                           2185 ;	../../shared/src/pll_cal_rom.c:114: lcvco_dac_msb = 4;
   C30B 7B 04              2186 	mov	r3,#0x04
   C30D                    2187 00107$:
                           2188 ;	../../shared/src/pll_cal_rom.c:117: set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);
   C30D C0 02              2189 	push	ar2
   C30F 8B 82              2190 	mov	dpl,r3
   C311 78 63              2191 	mov	r0,#_set_lcvco_dac
   C313 79 C2              2192 	mov	r1,#(_set_lcvco_dac >> 8)
   C315 7A 02              2193 	mov	r2,#(_set_lcvco_dac >> 16)
   C317 12 00 B3           2194 	lcall	__sdcc_banked_call
   C31A 15 81              2195 	dec	sp
                           2196 ;	../../shared/src/pll_cal_rom.c:119: LCCAP_LSB = 0x1f; 
   C31C 90 82 C4           2197 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_177
   C31F E0                 2198 	movx	a,@dptr
   C320 44 F8              2199 	orl	a,#0xf8
   C322 F0                 2200 	movx	@dptr,a
                           2201 ;	../../shared/src/pll_cal_rom.c:120: LCCAP_MSB = 0;
   C323 90 82 C8           2202 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C326 E0                 2203 	movx	a,@dptr
   C327 54 0F              2204 	anl	a,#0x0f
   C329 F0                 2205 	movx	@dptr,a
                           2206 ;	../../shared/src/pll_cal_rom.c:122: lccap_msb_index = 0; index = 0;
   C32A 7A 00              2207 	mov	r2,#0x00
                           2208 ;	../../shared/src/pll_cal_rom.c:123: delay01(Tpfreq0); //3us
   C32C 90 E6 66           2209 	mov	dptr,#(_TIMER_SEL2 + 0x0002)
   C32F E0                 2210 	movx	a,@dptr
   C330 FB                 2211 	mov	r3,a
   C331 7C 00              2212 	mov	r4,#0x00
   C333 8B 82              2213 	mov	dpl,r3
   C335 8C 83              2214 	mov	dph,r4
   C337 C0 02              2215 	push	ar2
   C339 78 16              2216 	mov	r0,#_delay01
   C33B 79 BC              2217 	mov	r1,#(_delay01 >> 8)
   C33D 7A 02              2218 	mov	r2,#(_delay01 >> 16)
   C33F 12 00 B3           2219 	lcall	__sdcc_banked_call
                           2220 ;	../../shared/src/pll_cal_rom.c:124: pll_amp_cal();	
   C342 78 31              2221 	mov	r0,#_pll_amp_cal
   C344 79 C5              2222 	mov	r1,#(_pll_amp_cal >> 8)
   C346 7A 02              2223 	mov	r2,#(_pll_amp_cal >> 16)
   C348 12 00 B3           2224 	lcall	__sdcc_banked_call
                           2225 ;	../../shared/src/pll_cal_rom.c:125: delay01(Tpfreq1); //5us
   C34B 90 E6 67           2226 	mov	dptr,#(_TIMER_SEL2 + 0x0003)
   C34E E0                 2227 	movx	a,@dptr
   C34F FB                 2228 	mov	r3,a
   C350 7C 00              2229 	mov	r4,#0x00
   C352 8B 82              2230 	mov	dpl,r3
   C354 8C 83              2231 	mov	dph,r4
   C356 78 16              2232 	mov	r0,#_delay01
   C358 79 BC              2233 	mov	r1,#(_delay01 >> 8)
   C35A 7A 02              2234 	mov	r2,#(_delay01 >> 16)
   C35C 12 00 B3           2235 	lcall	__sdcc_banked_call
   C35F D0 02              2236 	pop	ar2
                           2237 ;	../../shared/src/pll_cal_rom.c:126: VCOAMP_VTH_SEL = TH_FREQ;
   C361 90 E6 17           2238 	mov	dptr,#(_CONTROL_CONFIG4 + 0x0003)
   C364 E0                 2239 	movx	a,@dptr
   C365 90 82 C8           2240 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C368 54 0F              2241 	anl	a,#0x0f
   C36A F5 F0              2242 	mov	b,a
   C36C E0                 2243 	movx	a,@dptr
   C36D 54 F0              2244 	anl	a,#0xf0
   C36F 45 F0              2245 	orl	a,b
   C371 F0                 2246 	movx	@dptr,a
                           2247 ;	../../shared/src/pll_cal_rom.c:128: do {	
   C372 7B 00              2248 	mov	r3,#0x00
   C374                    2249 00130$:
                           2250 ;	../../shared/src/pll_cal_rom.c:129: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   C374 90 A3 30           2251 	mov	dptr,#_PLLCAL_REG1
   C377 E0                 2252 	movx	a,@dptr
   C378 03                 2253 	rr	a
   C379 54 01              2254 	anl	a,#0x01
   C37B FC                 2255 	mov	r4,a
                           2256 ;	../../shared/src/pll_cal_rom.c:130: reg_FBC_CNT_START = 1; 
   C37C 90 A3 30           2257 	mov	dptr,#_PLLCAL_REG1
   C37F E0                 2258 	movx	a,@dptr
   C380 44 01              2259 	orl	a,#0x01
   C382 F0                 2260 	movx	@dptr,a
                           2261 ;	../../shared/src/pll_cal_rom.c:131: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   C383 EC                 2262 	mov	a,r4
   C384 60 0A              2263 	jz	00115$
   C386                    2264 00109$:
   C386 90 A3 30           2265 	mov	dptr,#_PLLCAL_REG1
   C389 E0                 2266 	movx	a,@dptr
   C38A 30 E1 03           2267 	jnb	acc.1,00115$
   C38D 30 03 F6           2268 	jnb	_timeout,00109$
                           2269 ;	../../shared/src/pll_cal_rom.c:132: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   C390                    2270 00115$:
   C390 90 A3 30           2271 	mov	dptr,#_PLLCAL_REG1
   C393 E0                 2272 	movx	a,@dptr
   C394 20 E1 03           2273 	jb	acc.1,00117$
   C397 30 03 F6           2274 	jnb	_timeout,00115$
   C39A                    2275 00117$:
                           2276 ;	../../shared/src/pll_cal_rom.c:133: reg_FBC_CNT_START = 0; 				
   C39A 90 A3 30           2277 	mov	dptr,#_PLLCAL_REG1
   C39D E0                 2278 	movx	a,@dptr
   C39E 54 FE              2279 	anl	a,#0xfe
   C3A0 F0                 2280 	movx	@dptr,a
                           2281 ;	../../shared/src/pll_cal_rom.c:134: if(timeout) break;
   C3A1 30 03 03           2282 	jnb	_timeout,00190$
   C3A4 02 C4 3A           2283 	ljmp	00150$
   C3A7                    2284 00190$:
                           2285 ;	../../shared/src/pll_cal_rom.c:135: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   C3A7 C0 02              2286 	push	ar2
   C3A9 90 A3 2E           2287 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   C3AC E0                 2288 	movx	a,@dptr
   C3AD FD                 2289 	mov	r5,a
   C3AE A3                 2290 	inc	dptr
   C3AF E0                 2291 	movx	a,@dptr
   C3B0 FE                 2292 	mov	r6,a
                           2293 ;	../../shared/src/pll_cal_rom.c:137: if( Fmea == Ftarget ) goto save_0; 
   C3B1 90 E6 1C           2294 	mov	dptr,#_CONTROL_CONFIG6
   C3B4 E0                 2295 	movx	a,@dptr
   C3B5 FF                 2296 	mov	r7,a
   C3B6 A3                 2297 	inc	dptr
   C3B7 E0                 2298 	movx	a,@dptr
   C3B8 FA                 2299 	mov	r2,a
   C3B9 ED                 2300 	mov	a,r5
   C3BA B5 07 09           2301 	cjne	a,ar7,00191$
   C3BD EE                 2302 	mov	a,r6
   C3BE B5 02 05           2303 	cjne	a,ar2,00191$
   C3C1 D0 02              2304 	pop	ar2
   C3C3 02 C5 0E           2305 	ljmp	00153$
   C3C6                    2306 00191$:
                           2307 ;	../../shared/src/pll_cal_rom.c:138: else if(Fmea < Ftarget ) break; //find MSB
   C3C6 90 E6 1C           2308 	mov	dptr,#_CONTROL_CONFIG6
   C3C9 E0                 2309 	movx	a,@dptr
   C3CA FF                 2310 	mov	r7,a
   C3CB A3                 2311 	inc	dptr
   C3CC E0                 2312 	movx	a,@dptr
   C3CD FA                 2313 	mov	r2,a
   C3CE C3                 2314 	clr	c
   C3CF ED                 2315 	mov	a,r5
   C3D0 9F                 2316 	subb	a,r7
   C3D1 EE                 2317 	mov	a,r6
   C3D2 9A                 2318 	subb	a,r2
   C3D3 D0 02              2319 	pop	ar2
   C3D5 40 63              2320 	jc	00150$
                           2321 ;	../../shared/src/pll_cal_rom.c:140: index++;
   C3D7 0B                 2322 	inc	r3
                           2323 ;	../../shared/src/pll_cal_rom.c:141: if( index > LCCAP_MSB_MAX_index ) {
   C3D8 74 04              2324 	mov	a,#0x04
   C3DA B5 03 00           2325 	cjne	a,ar3,00193$
   C3DD                    2326 00193$:
   C3DD 50 09              2327 	jnc	00121$
                           2328 ;	../../shared/src/pll_cal_rom.c:142: cmx_PLL_AMP_CAL_PASS = 0;
   C3DF 90 E6 4D           2329 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   C3E2 E0                 2330 	movx	a,@dptr
   C3E3 54 FE              2331 	anl	a,#0xfe
   C3E5 F0                 2332 	movx	@dptr,a
                           2333 ;	../../shared/src/pll_cal_rom.c:143: break;
   C3E6 80 52              2334 	sjmp	00150$
   C3E8                    2335 00121$:
                           2336 ;	../../shared/src/pll_cal_rom.c:145: lccap_msb_index = index;
                           2337 ;	../../shared/src/pll_cal_rom.c:146: LCCAP_MSB = lccap_msb_thermo_tb[lccap_msb_index];
   C3E8 EB                 2338 	mov	a,r3
   C3E9 FA                 2339 	mov	r2,a
   C3EA 90 C9 38           2340 	mov	dptr,#_lccap_msb_thermo_tb
   C3ED 93                 2341 	movc	a,@a+dptr
   C3EE 90 82 C8           2342 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C3F1 C4                 2343 	swap	a
   C3F2 54 F0              2344 	anl	a,#(0xf0&0xf0)
   C3F4 F5 F0              2345 	mov	b,a
   C3F6 E0                 2346 	movx	a,@dptr
   C3F7 54 0F              2347 	anl	a,#0x0f
   C3F9 45 F0              2348 	orl	a,b
   C3FB F0                 2349 	movx	@dptr,a
                           2350 ;	../../shared/src/pll_cal_rom.c:147: delay01(Tpfreq3);
   C3FC 90 E6 63           2351 	mov	dptr,#(_TIMER_SEL1 + 0x0003)
   C3FF E0                 2352 	movx	a,@dptr
   C400 FF                 2353 	mov	r7,a
   C401 C0 03              2354 	push	ar3
   C403 7B 00              2355 	mov	r3,#0x00
   C405 8F 82              2356 	mov	dpl,r7
   C407 8B 83              2357 	mov	dph,r3
   C409 C0 02              2358 	push	ar2
   C40B C0 03              2359 	push	ar3
   C40D 78 16              2360 	mov	r0,#_delay01
   C40F 79 BC              2361 	mov	r1,#(_delay01 >> 8)
   C411 7A 02              2362 	mov	r2,#(_delay01 >> 16)
   C413 12 00 B3           2363 	lcall	__sdcc_banked_call
   C416 D0 03              2364 	pop	ar3
   C418 D0 02              2365 	pop	ar2
                           2366 ;	../../shared/src/pll_cal_rom.c:149: if(VCOAMP_HI==0)
   C41A 90 A3 30           2367 	mov	dptr,#_PLLCAL_REG1
   C41D E0                 2368 	movx	a,@dptr
   C41E D0 03              2369 	pop	ar3
   C420 20 E2 11           2370 	jb	acc.2,00129$
                           2371 ;	../../shared/src/pll_cal_rom.c:150: pll_amp_cal();	
   C423 C0 02              2372 	push	ar2
   C425 C0 03              2373 	push	ar3
   C427 78 31              2374 	mov	r0,#_pll_amp_cal
   C429 79 C5              2375 	mov	r1,#(_pll_amp_cal >> 8)
   C42B 7A 02              2376 	mov	r2,#(_pll_amp_cal >> 16)
   C42D 12 00 B3           2377 	lcall	__sdcc_banked_call
   C430 D0 03              2378 	pop	ar3
   C432 D0 02              2379 	pop	ar2
   C434                    2380 00129$:
                           2381 ;	../../shared/src/pll_cal_rom.c:153: } while (!timeout);
   C434 20 03 03           2382 	jb	_timeout,00196$
   C437 02 C3 74           2383 	ljmp	00130$
   C43A                    2384 00196$:
                           2385 ;	../../shared/src/pll_cal_rom.c:155: do {
   C43A                    2386 00150$:
                           2387 ;	../../shared/src/pll_cal_rom.c:156: LCCAP_LSB--;
   C43A 90 82 C4           2388 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_177
   C43D E0                 2389 	movx	a,@dptr
   C43E C4                 2390 	swap	a
   C43F 23                 2391 	rl	a
   C440 54 1F              2392 	anl	a,#0x1f
   C442 FB                 2393 	mov	r3,a
   C443 1B                 2394 	dec	r3
   C444 90 82 C4           2395 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_177
   C447 EB                 2396 	mov	a,r3
   C448 C4                 2397 	swap	a
   C449 03                 2398 	rr	a
   C44A 54 F8              2399 	anl	a,#(0xf8&0xf8)
   C44C F5 F0              2400 	mov	b,a
   C44E E0                 2401 	movx	a,@dptr
   C44F 54 07              2402 	anl	a,#0x07
   C451 45 F0              2403 	orl	a,b
   C453 F0                 2404 	movx	@dptr,a
                           2405 ;	../../shared/src/pll_cal_rom.c:157: delay01(Tpfreq3);
   C454 90 E6 63           2406 	mov	dptr,#(_TIMER_SEL1 + 0x0003)
   C457 E0                 2407 	movx	a,@dptr
   C458 FB                 2408 	mov	r3,a
   C459 7F 00              2409 	mov	r7,#0x00
   C45B 8B 82              2410 	mov	dpl,r3
   C45D 8F 83              2411 	mov	dph,r7
   C45F C0 02              2412 	push	ar2
   C461 78 16              2413 	mov	r0,#_delay01
   C463 79 BC              2414 	mov	r1,#(_delay01 >> 8)
   C465 7A 02              2415 	mov	r2,#(_delay01 >> 16)
   C467 12 00 B3           2416 	lcall	__sdcc_banked_call
   C46A D0 02              2417 	pop	ar2
                           2418 ;	../../shared/src/pll_cal_rom.c:159: if(VCOAMP_HI==0) {
   C46C 90 A3 30           2419 	mov	dptr,#_PLLCAL_REG1
   C46F E0                 2420 	movx	a,@dptr
   C470 20 E2 1F           2421 	jb	acc.2,00134$
                           2422 ;	../../shared/src/pll_cal_rom.c:160: pll_amp_cal();
   C473 C0 02              2423 	push	ar2
   C475 78 31              2424 	mov	r0,#_pll_amp_cal
   C477 79 C5              2425 	mov	r1,#(_pll_amp_cal >> 8)
   C479 7A 02              2426 	mov	r2,#(_pll_amp_cal >> 16)
   C47B 12 00 B3           2427 	lcall	__sdcc_banked_call
   C47E D0 02              2428 	pop	ar2
                           2429 ;	../../shared/src/pll_cal_rom.c:161: VCOAMP_VTH_SEL = TH_FREQ;
   C480 90 E6 17           2430 	mov	dptr,#(_CONTROL_CONFIG4 + 0x0003)
   C483 E0                 2431 	movx	a,@dptr
   C484 FB                 2432 	mov	r3,a
   C485 90 82 C8           2433 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C488 54 0F              2434 	anl	a,#0x0f
   C48A F5 F0              2435 	mov	b,a
   C48C E0                 2436 	movx	a,@dptr
   C48D 54 F0              2437 	anl	a,#0xf0
   C48F 45 F0              2438 	orl	a,b
   C491 F0                 2439 	movx	@dptr,a
   C492                    2440 00134$:
                           2441 ;	../../shared/src/pll_cal_rom.c:164: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   C492 90 A3 30           2442 	mov	dptr,#_PLLCAL_REG1
   C495 E0                 2443 	movx	a,@dptr
   C496 03                 2444 	rr	a
   C497 54 01              2445 	anl	a,#0x01
   C499 FB                 2446 	mov	r3,a
   C49A FC                 2447 	mov	r4,a
                           2448 ;	../../shared/src/pll_cal_rom.c:165: reg_FBC_CNT_START = 1;
   C49B 90 A3 30           2449 	mov	dptr,#_PLLCAL_REG1
   C49E E0                 2450 	movx	a,@dptr
   C49F 44 01              2451 	orl	a,#0x01
   C4A1 F0                 2452 	movx	@dptr,a
                           2453 ;	../../shared/src/pll_cal_rom.c:166: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   C4A2 EC                 2454 	mov	a,r4
   C4A3 60 0A              2455 	jz	00142$
   C4A5                    2456 00136$:
   C4A5 90 A3 30           2457 	mov	dptr,#_PLLCAL_REG1
   C4A8 E0                 2458 	movx	a,@dptr
   C4A9 30 E1 03           2459 	jnb	acc.1,00142$
   C4AC 30 03 F6           2460 	jnb	_timeout,00136$
                           2461 ;	../../shared/src/pll_cal_rom.c:167: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   C4AF                    2462 00142$:
   C4AF 90 A3 30           2463 	mov	dptr,#_PLLCAL_REG1
   C4B2 E0                 2464 	movx	a,@dptr
   C4B3 20 E1 03           2465 	jb	acc.1,00144$
   C4B6 30 03 F6           2466 	jnb	_timeout,00142$
   C4B9                    2467 00144$:
                           2468 ;	../../shared/src/pll_cal_rom.c:168: reg_FBC_CNT_START = 0;
   C4B9 90 A3 30           2469 	mov	dptr,#_PLLCAL_REG1
   C4BC E0                 2470 	movx	a,@dptr
   C4BD 54 FE              2471 	anl	a,#0xfe
   C4BF F0                 2472 	movx	@dptr,a
                           2473 ;	../../shared/src/pll_cal_rom.c:169: if(timeout) break;
   C4C0 20 03 32           2474 	jb	_timeout,00152$
                           2475 ;	../../shared/src/pll_cal_rom.c:170: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   C4C3 90 A3 2E           2476 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   C4C6 E0                 2477 	movx	a,@dptr
   C4C7 FB                 2478 	mov	r3,a
   C4C8 A3                 2479 	inc	dptr
   C4C9 E0                 2480 	movx	a,@dptr
   C4CA FC                 2481 	mov	r4,a
   C4CB 8B 05              2482 	mov	ar5,r3
   C4CD 8C 06              2483 	mov	ar6,r4
                           2484 ;	../../shared/src/pll_cal_rom.c:172: if(LCCAP_LSB == LCCAP_LSB_MIN) {
   C4CF 90 82 C4           2485 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_177
   C4D2 E0                 2486 	movx	a,@dptr
   C4D3 54 F8              2487 	anl	a,#0xf8
   C4D5 70 09              2488 	jnz	00151$
                           2489 ;	../../shared/src/pll_cal_rom.c:173: cmx_PLL_AMP_CAL_PASS = 0;	
   C4D7 90 E6 4D           2490 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   C4DA E0                 2491 	movx	a,@dptr
   C4DB 54 FE              2492 	anl	a,#0xfe
   C4DD F0                 2493 	movx	@dptr,a
                           2494 ;	../../shared/src/pll_cal_rom.c:174: break;
   C4DE 80 15              2495 	sjmp	00152$
   C4E0                    2496 00151$:
                           2497 ;	../../shared/src/pll_cal_rom.c:177: } while ((Fmea < Ftarget) && !timeout); 
   C4E0 90 E6 1C           2498 	mov	dptr,#_CONTROL_CONFIG6
   C4E3 E0                 2499 	movx	a,@dptr
   C4E4 FB                 2500 	mov	r3,a
   C4E5 A3                 2501 	inc	dptr
   C4E6 E0                 2502 	movx	a,@dptr
   C4E7 FC                 2503 	mov	r4,a
   C4E8 C3                 2504 	clr	c
   C4E9 ED                 2505 	mov	a,r5
   C4EA 9B                 2506 	subb	a,r3
   C4EB EE                 2507 	mov	a,r6
   C4EC 9C                 2508 	subb	a,r4
   C4ED 50 06              2509 	jnc	00152$
   C4EF 20 03 03           2510 	jb	_timeout,00206$
   C4F2 02 C4 3A           2511 	ljmp	00150$
   C4F5                    2512 00206$:
   C4F5                    2513 00152$:
                           2514 ;	../../shared/src/pll_cal_rom.c:179: delay01(Tpfreq4); 
   C4F5 90 E6 64           2515 	mov	dptr,#_TIMER_SEL2
   C4F8 E0                 2516 	movx	a,@dptr
   C4F9 FB                 2517 	mov	r3,a
   C4FA A3                 2518 	inc	dptr
   C4FB E0                 2519 	movx	a,@dptr
   C4FC FC                 2520 	mov	r4,a
   C4FD 8B 82              2521 	mov	dpl,r3
   C4FF 8C 83              2522 	mov	dph,r4
   C501 C0 02              2523 	push	ar2
   C503 78 16              2524 	mov	r0,#_delay01
   C505 79 BC              2525 	mov	r1,#(_delay01 >> 8)
   C507 7A 02              2526 	mov	r2,#(_delay01 >> 16)
   C509 12 00 B3           2527 	lcall	__sdcc_banked_call
   C50C D0 02              2528 	pop	ar2
                           2529 ;	../../shared/src/pll_cal_rom.c:181: save_0:	
   C50E                    2530 00153$:
                           2531 ;	../../shared/src/pll_cal_rom.c:183: pllcal_save(PWR);
   C50E 75 82 00           2532 	mov	dpl,#0x00
   C511 C0 02              2533 	push	ar2
   C513 78 9D              2534 	mov	r0,#_pllcal_save
   C515 79 C8              2535 	mov	r1,#(_pllcal_save >> 8)
   C517 7A 02              2536 	mov	r2,#(_pllcal_save >> 16)
   C519 12 00 B3           2537 	lcall	__sdcc_banked_call
   C51C D0 02              2538 	pop	ar2
                           2539 ;	../../shared/src/pll_cal_rom.c:184: cal_lccap_msb_index[rate] 	= lccap_msb_index; 
   C51E 90 E6 1E           2540 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C521 E0                 2541 	movx	a,@dptr
   C522 FB                 2542 	mov	r3,a
   C523 24 1A              2543 	add	a,#_cal_lccap_msb_index
   C525 F5 82              2544 	mov	dpl,a
   C527 E4                 2545 	clr	a
   C528 34 66              2546 	addc	a,#(_cal_lccap_msb_index >> 8)
   C52A F5 83              2547 	mov	dph,a
   C52C EA                 2548 	mov	a,r2
   C52D F0                 2549 	movx	@dptr,a
   C52E 02 00 C5           2550 	ljmp	__sdcc_banked_ret
                           2551 ;------------------------------------------------------------
                           2552 ;Allocation info for local variables in function 'pll_amp_cal'
                           2553 ;------------------------------------------------------------
                           2554 ;min_cnt                   Allocated to registers r5 
                           2555 ;max_cnt                   Allocated to registers r4 
                           2556 ;dir                       Allocated to registers r2 
                           2557 ;vco_hi                    Allocated to registers r3 
                           2558 ;lcvco_dac_msb             Allocated to registers 
                           2559 ;lcvco_dac_lsb             Allocated to registers 
                           2560 ;------------------------------------------------------------
                           2561 ;	../../shared/src/pll_cal_rom.c:198: void pll_amp_cal(void) BANKING_CTRL {
                           2562 ;	-----------------------------------------
                           2563 ;	 function pll_amp_cal
                           2564 ;	-----------------------------------------
   C531                    2565 _pll_amp_cal:
                           2566 ;	../../shared/src/pll_cal_rom.c:206: cmx_PLL_AMP_CAL_PASS = 1;
   C531 90 E6 4D           2567 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   C534 E0                 2568 	movx	a,@dptr
   C535 44 01              2569 	orl	a,#0x01
   C537 F0                 2570 	movx	@dptr,a
                           2571 ;	../../shared/src/pll_cal_rom.c:207: cmx_PLL_AMP_CAL_DONE = 0;
   C538 90 E6 4C           2572 	mov	dptr,#_CAL_STATUS_READ
   C53B E0                 2573 	movx	a,@dptr
   C53C 54 EF              2574 	anl	a,#0xef
   C53E F0                 2575 	movx	@dptr,a
                           2576 ;	../../shared/src/pll_cal_rom.c:209: PLLAMPCAL_EN = 1;
   C53F 90 82 A0           2577 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_168
   C542 E0                 2578 	movx	a,@dptr
   C543 44 40              2579 	orl	a,#0x40
   C545 F0                 2580 	movx	@dptr,a
                           2581 ;	../../shared/src/pll_cal_rom.c:211: delay01(Tpamp0);
   C546 90 E6 60           2582 	mov	dptr,#_TIMER_SEL1
   C549 E0                 2583 	movx	a,@dptr
   C54A FA                 2584 	mov	r2,a
   C54B A3                 2585 	inc	dptr
   C54C E0                 2586 	movx	a,@dptr
   C54D FB                 2587 	mov	r3,a
   C54E 8A 82              2588 	mov	dpl,r2
   C550 8B 83              2589 	mov	dph,r3
   C552 78 16              2590 	mov	r0,#_delay01
   C554 79 BC              2591 	mov	r1,#(_delay01 >> 8)
   C556 7A 02              2592 	mov	r2,#(_delay01 >> 16)
   C558 12 00 B3           2593 	lcall	__sdcc_banked_call
                           2594 ;	../../shared/src/pll_cal_rom.c:212: dir = VCOAMP_HI; vco_hi = dir;
   C55B 90 A3 30           2595 	mov	dptr,#_PLLCAL_REG1
   C55E E0                 2596 	movx	a,@dptr
   C55F 03                 2597 	rr	a
   C560 03                 2598 	rr	a
   C561 54 01              2599 	anl	a,#0x01
   C563 FA                 2600 	mov	r2,a
   C564 FB                 2601 	mov	r3,a
                           2602 ;	../../shared/src/pll_cal_rom.c:213: do{
   C565 7C 00              2603 	mov	r4,#0x00
   C567 7D 00              2604 	mov	r5,#0x00
   C569                    2605 00120$:
                           2606 ;	../../shared/src/pll_cal_rom.c:214: dir&=0x0f;
   C569 53 02 0F           2607 	anl	ar2,#0x0F
                           2608 ;	../../shared/src/pll_cal_rom.c:215: if (dir == 0x5) break;
   C56C BA 05 03           2609 	cjne	r2,#0x05,00134$
   C56F 02 C6 4A           2610 	ljmp	00122$
   C572                    2611 00134$:
                           2612 ;	../../shared/src/pll_cal_rom.c:217: if(vco_hi == 1) {
   C572 BB 01 46           2613 	cjne	r3,#0x01,00110$
                           2614 ;	../../shared/src/pll_cal_rom.c:218: if(pll_amp_dac_dec() == _EXIT_FAIL) {
   C575 C0 02              2615 	push	ar2
   C577 C0 04              2616 	push	ar4
   C579 C0 05              2617 	push	ar5
   C57B 78 54              2618 	mov	r0,#_pll_amp_dac_dec
   C57D 79 C6              2619 	mov	r1,#(_pll_amp_dac_dec >> 8)
   C57F 7A 02              2620 	mov	r2,#(_pll_amp_dac_dec >> 16)
   C581 12 00 B3           2621 	lcall	__sdcc_banked_call
   C584 AE 82              2622 	mov	r6,dpl
   C586 D0 05              2623 	pop	ar5
   C588 D0 04              2624 	pop	ar4
   C58A D0 02              2625 	pop	ar2
   C58C BE 01 53           2626 	cjne	r6,#0x01,00111$
                           2627 ;	../../shared/src/pll_cal_rom.c:221: set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);
   C58F C0 02              2628 	push	ar2
   C591 C0 04              2629 	push	ar4
   C593 C0 05              2630 	push	ar5
   C595 74 10              2631 	mov	a,#0x10
   C597 C0 E0              2632 	push	acc
   C599 75 82 03           2633 	mov	dpl,#0x03
   C59C 78 63              2634 	mov	r0,#_set_lcvco_dac
   C59E 79 C2              2635 	mov	r1,#(_set_lcvco_dac >> 8)
   C5A0 7A 02              2636 	mov	r2,#(_set_lcvco_dac >> 16)
   C5A2 12 00 B3           2637 	lcall	__sdcc_banked_call
   C5A5 15 81              2638 	dec	sp
   C5A7 D0 05              2639 	pop	ar5
   C5A9 D0 04              2640 	pop	ar4
   C5AB D0 02              2641 	pop	ar2
                           2642 ;	../../shared/src/pll_cal_rom.c:223: min_cnt++;
   C5AD 0D                 2643 	inc	r5
                           2644 ;	../../shared/src/pll_cal_rom.c:224: if (min_cnt == 0x3) {
   C5AE BD 03 31           2645 	cjne	r5,#0x03,00111$
                           2646 ;	../../shared/src/pll_cal_rom.c:225: cmx_PLL_AMP_CAL_PASS = 0;
   C5B1 90 E6 4D           2647 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   C5B4 E0                 2648 	movx	a,@dptr
   C5B5 54 FE              2649 	anl	a,#0xfe
   C5B7 F0                 2650 	movx	@dptr,a
                           2651 ;	../../shared/src/pll_cal_rom.c:226: break;
   C5B8 02 C6 4A           2652 	ljmp	00122$
   C5BB                    2653 00110$:
                           2654 ;	../../shared/src/pll_cal_rom.c:231: if( pll_amp_dac_inc() == _EXIT_FAIL ){
   C5BB C0 02              2655 	push	ar2
   C5BD C0 04              2656 	push	ar4
   C5BF C0 05              2657 	push	ar5
   C5C1 78 8C              2658 	mov	r0,#_pll_amp_dac_inc
   C5C3 79 C6              2659 	mov	r1,#(_pll_amp_dac_inc >> 8)
   C5C5 7A 02              2660 	mov	r2,#(_pll_amp_dac_inc >> 16)
   C5C7 12 00 B3           2661 	lcall	__sdcc_banked_call
   C5CA AE 82              2662 	mov	r6,dpl
   C5CC D0 05              2663 	pop	ar5
   C5CE D0 04              2664 	pop	ar4
   C5D0 D0 02              2665 	pop	ar2
   C5D2 BE 01 0D           2666 	cjne	r6,#0x01,00111$
                           2667 ;	../../shared/src/pll_cal_rom.c:232: max_cnt++;
   C5D5 0C                 2668 	inc	r4
                           2669 ;	../../shared/src/pll_cal_rom.c:233: if (max_cnt == 0x3) {
   C5D6 BC 03 09           2670 	cjne	r4,#0x03,00111$
                           2671 ;	../../shared/src/pll_cal_rom.c:234: cmx_PLL_AMP_CAL_PASS = 0;
   C5D9 90 E6 4D           2672 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   C5DC E0                 2673 	movx	a,@dptr
   C5DD 54 FE              2674 	anl	a,#0xfe
   C5DF F0                 2675 	movx	@dptr,a
                           2676 ;	../../shared/src/pll_cal_rom.c:235: break;
   C5E0 80 68              2677 	sjmp	00122$
   C5E2                    2678 00111$:
                           2679 ;	../../shared/src/pll_cal_rom.c:240: if(cmx_PLLAMP_CAL_SPEEDUP_DISABLE==1) //slow
   C5E2 90 E6 13           2680 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   C5E5 E0                 2681 	movx	a,@dptr
   C5E6 03                 2682 	rr	a
   C5E7 03                 2683 	rr	a
   C5E8 54 01              2684 	anl	a,#0x01
   C5EA FE                 2685 	mov	r6,a
   C5EB BE 01 23           2686 	cjne	r6,#0x01,00113$
                           2687 ;	../../shared/src/pll_cal_rom.c:241: delay01(cmx_TPLLAMP1_SLOW_15_0);
   C5EE 90 E6 68           2688 	mov	dptr,#_TIMER_SEL3
   C5F1 E0                 2689 	movx	a,@dptr
   C5F2 FE                 2690 	mov	r6,a
   C5F3 A3                 2691 	inc	dptr
   C5F4 E0                 2692 	movx	a,@dptr
   C5F5 FF                 2693 	mov	r7,a
   C5F6 8E 82              2694 	mov	dpl,r6
   C5F8 8F 83              2695 	mov	dph,r7
   C5FA C0 02              2696 	push	ar2
   C5FC C0 04              2697 	push	ar4
   C5FE C0 05              2698 	push	ar5
   C600 78 16              2699 	mov	r0,#_delay01
   C602 79 BC              2700 	mov	r1,#(_delay01 >> 8)
   C604 7A 02              2701 	mov	r2,#(_delay01 >> 16)
   C606 12 00 B3           2702 	lcall	__sdcc_banked_call
   C609 D0 05              2703 	pop	ar5
   C60B D0 04              2704 	pop	ar4
   C60D D0 02              2705 	pop	ar2
   C60F 80 20              2706 	sjmp	00117$
   C611                    2707 00113$:
                           2708 ;	../../shared/src/pll_cal_rom.c:243: delay01(cmx_TPLLAMP1_FAST_7_0); //2.5u
   C611 90 E6 6A           2709 	mov	dptr,#(_TIMER_SEL3 + 0x0002)
   C614 E0                 2710 	movx	a,@dptr
   C615 FE                 2711 	mov	r6,a
   C616 7F 00              2712 	mov	r7,#0x00
   C618 8E 82              2713 	mov	dpl,r6
   C61A 8F 83              2714 	mov	dph,r7
   C61C C0 02              2715 	push	ar2
   C61E C0 04              2716 	push	ar4
   C620 C0 05              2717 	push	ar5
   C622 78 16              2718 	mov	r0,#_delay01
   C624 79 BC              2719 	mov	r1,#(_delay01 >> 8)
   C626 7A 02              2720 	mov	r2,#(_delay01 >> 16)
   C628 12 00 B3           2721 	lcall	__sdcc_banked_call
   C62B D0 05              2722 	pop	ar5
   C62D D0 04              2723 	pop	ar4
   C62F D0 02              2724 	pop	ar2
   C631                    2725 00117$:
                           2726 ;	../../shared/src/pll_cal_rom.c:246: dir <<= 1;
   C631 EA                 2727 	mov	a,r2
   C632 2A                 2728 	add	a,r2
   C633 FA                 2729 	mov	r2,a
                           2730 ;	../../shared/src/pll_cal_rom.c:247: vco_hi = VCOAMP_HI;
   C634 90 A3 30           2731 	mov	dptr,#_PLLCAL_REG1
   C637 E0                 2732 	movx	a,@dptr
   C638 03                 2733 	rr	a
   C639 03                 2734 	rr	a
   C63A 54 01              2735 	anl	a,#0x01
   C63C FE                 2736 	mov	r6,a
   C63D FB                 2737 	mov	r3,a
                           2738 ;	../../shared/src/pll_cal_rom.c:248: if (vco_hi == 1){
   C63E BB 01 03           2739 	cjne	r3,#0x01,00121$
                           2740 ;	../../shared/src/pll_cal_rom.c:249: dir |= 1;
   C641 43 02 01           2741 	orl	ar2,#0x01
   C644                    2742 00121$:
                           2743 ;	../../shared/src/pll_cal_rom.c:251: } while(!timeout);
   C644 20 03 03           2744 	jb	_timeout,00149$
   C647 02 C5 69           2745 	ljmp	00120$
   C64A                    2746 00149$:
   C64A                    2747 00122$:
                           2748 ;	../../shared/src/pll_cal_rom.c:253: cmx_PLL_AMP_CAL_DONE = 1;
   C64A 90 E6 4C           2749 	mov	dptr,#_CAL_STATUS_READ
   C64D E0                 2750 	movx	a,@dptr
   C64E 44 10              2751 	orl	a,#0x10
   C650 F0                 2752 	movx	@dptr,a
   C651 02 00 C5           2753 	ljmp	__sdcc_banked_ret
                           2754 ;------------------------------------------------------------
                           2755 ;Allocation info for local variables in function 'pll_amp_dac_dec'
                           2756 ;------------------------------------------------------------
                           2757 ;lcvco_dac_msb             Allocated to registers r2 
                           2758 ;lcvco_dac_lsb             Allocated to registers r3 
                           2759 ;------------------------------------------------------------
                           2760 ;	../../shared/src/pll_cal_rom.c:269: uint8_t pll_amp_dac_dec(void) BANKING_CTRL {
                           2761 ;	-----------------------------------------
                           2762 ;	 function pll_amp_dac_dec
                           2763 ;	-----------------------------------------
   C654                    2764 _pll_amp_dac_dec:
                           2765 ;	../../shared/src/pll_cal_rom.c:272: lcvco_dac_msb = LCVCO_DAC_MSB;
   C654 90 82 B4           2766 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C657 E0                 2767 	movx	a,@dptr
   C658 54 07              2768 	anl	a,#0x07
   C65A FA                 2769 	mov	r2,a
                           2770 ;	../../shared/src/pll_cal_rom.c:273: lcvco_dac_lsb = LCVCO_DAC_LSB;
   C65B 90 82 B4           2771 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C65E E0                 2772 	movx	a,@dptr
   C65F C4                 2773 	swap	a
   C660 23                 2774 	rl	a
   C661 54 1F              2775 	anl	a,#0x1f
                           2776 ;	../../shared/src/pll_cal_rom.c:275: if( lcvco_dac_lsb == LCVCO_DAC_LSB_MIN && lcvco_dac_msb==LCVCO_DAC_MSB_MIN ) 
   C663 FB                 2777 	mov	r3,a
   C664 70 08              2778 	jnz	00105$
   C666 EA                 2779 	mov	a,r2
   C667 70 05              2780 	jnz	00105$
                           2781 ;	../../shared/src/pll_cal_rom.c:276: return _EXIT_FAIL;
   C669 75 82 01           2782 	mov	dpl,#0x01
   C66C 80 1B              2783 	sjmp	00108$
   C66E                    2784 00105$:
                           2785 ;	../../shared/src/pll_cal_rom.c:277: else if(lcvco_dac_lsb==LCVCO_DAC_LSB_MIN) {
   C66E EB                 2786 	mov	a,r3
   C66F 70 05              2787 	jnz	00102$
                           2788 ;	../../shared/src/pll_cal_rom.c:278: lcvco_dac_msb--;
   C671 1A                 2789 	dec	r2
                           2790 ;	../../shared/src/pll_cal_rom.c:279: lcvco_dac_lsb = LCVCO_DAC_LSB_MAX;
   C672 7B 1F              2791 	mov	r3,#0x1F
   C674 80 01              2792 	sjmp	00106$
   C676                    2793 00102$:
                           2794 ;	../../shared/src/pll_cal_rom.c:282: lcvco_dac_lsb--;	
   C676 1B                 2795 	dec	r3
   C677                    2796 00106$:
                           2797 ;	../../shared/src/pll_cal_rom.c:284: set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);			
   C677 C0 03              2798 	push	ar3
   C679 8A 82              2799 	mov	dpl,r2
   C67B 78 63              2800 	mov	r0,#_set_lcvco_dac
   C67D 79 C2              2801 	mov	r1,#(_set_lcvco_dac >> 8)
   C67F 7A 02              2802 	mov	r2,#(_set_lcvco_dac >> 16)
   C681 12 00 B3           2803 	lcall	__sdcc_banked_call
   C684 15 81              2804 	dec	sp
                           2805 ;	../../shared/src/pll_cal_rom.c:286: return _EXIT_SUCCESS;
   C686 75 82 00           2806 	mov	dpl,#0x00
   C689                    2807 00108$:
   C689 02 00 C5           2808 	ljmp	__sdcc_banked_ret
                           2809 ;------------------------------------------------------------
                           2810 ;Allocation info for local variables in function 'pll_amp_dac_inc'
                           2811 ;------------------------------------------------------------
                           2812 ;lcvco_dac_msb             Allocated to registers r2 
                           2813 ;lcvco_dac_lsb             Allocated to registers r3 
                           2814 ;------------------------------------------------------------
                           2815 ;	../../shared/src/pll_cal_rom.c:289: uint8_t pll_amp_dac_inc(void) BANKING_CTRL {
                           2816 ;	-----------------------------------------
                           2817 ;	 function pll_amp_dac_inc
                           2818 ;	-----------------------------------------
   C68C                    2819 _pll_amp_dac_inc:
                           2820 ;	../../shared/src/pll_cal_rom.c:293: lcvco_dac_msb = LCVCO_DAC_MSB;
   C68C 90 82 B4           2821 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C68F E0                 2822 	movx	a,@dptr
   C690 54 07              2823 	anl	a,#0x07
   C692 FA                 2824 	mov	r2,a
                           2825 ;	../../shared/src/pll_cal_rom.c:294: lcvco_dac_lsb = LCVCO_DAC_LSB;
   C693 90 82 B4           2826 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C696 E0                 2827 	movx	a,@dptr
   C697 C4                 2828 	swap	a
   C698 23                 2829 	rl	a
   C699 54 1F              2830 	anl	a,#0x1f
   C69B FB                 2831 	mov	r3,a
                           2832 ;	../../shared/src/pll_cal_rom.c:296: if( lcvco_dac_lsb == LCVCO_DAC_LSB_MAX && lcvco_dac_msb==LCVCO_DAC_MSB_MAX ) {
   C69C E4                 2833 	clr	a
   C69D BB 1F 01           2834 	cjne	r3,#0x1F,00113$
   C6A0 04                 2835 	inc	a
   C6A1                    2836 00113$:
   C6A1 FC                 2837 	mov	r4,a
   C6A2 60 08              2838 	jz	00105$
   C6A4 BA 07 05           2839 	cjne	r2,#0x07,00105$
                           2840 ;	../../shared/src/pll_cal_rom.c:297: return _EXIT_FAIL;
   C6A7 75 82 01           2841 	mov	dpl,#0x01
   C6AA 80 1B              2842 	sjmp	00108$
   C6AC                    2843 00105$:
                           2844 ;	../../shared/src/pll_cal_rom.c:299: else if (lcvco_dac_lsb == LCVCO_DAC_LSB_MAX) {
   C6AC EC                 2845 	mov	a,r4
   C6AD 60 05              2846 	jz	00102$
                           2847 ;	../../shared/src/pll_cal_rom.c:300: lcvco_dac_msb++;	
   C6AF 0A                 2848 	inc	r2
                           2849 ;	../../shared/src/pll_cal_rom.c:301: lcvco_dac_lsb = LCVCO_DAC_LSB_MIN;
   C6B0 7B 00              2850 	mov	r3,#0x00
   C6B2 80 01              2851 	sjmp	00106$
   C6B4                    2852 00102$:
                           2853 ;	../../shared/src/pll_cal_rom.c:304: lcvco_dac_lsb++;
   C6B4 0B                 2854 	inc	r3
   C6B5                    2855 00106$:
                           2856 ;	../../shared/src/pll_cal_rom.c:307: set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);			
   C6B5 C0 03              2857 	push	ar3
   C6B7 8A 82              2858 	mov	dpl,r2
   C6B9 78 63              2859 	mov	r0,#_set_lcvco_dac
   C6BB 79 C2              2860 	mov	r1,#(_set_lcvco_dac >> 8)
   C6BD 7A 02              2861 	mov	r2,#(_set_lcvco_dac >> 16)
   C6BF 12 00 B3           2862 	lcall	__sdcc_banked_call
   C6C2 15 81              2863 	dec	sp
                           2864 ;	../../shared/src/pll_cal_rom.c:309: return _EXIT_SUCCESS;
   C6C4 75 82 00           2865 	mov	dpl,#0x00
   C6C7                    2866 00108$:
   C6C7 02 00 C5           2867 	ljmp	__sdcc_banked_ret
                           2868 ;------------------------------------------------------------
                           2869 ;Allocation info for local variables in function 'pll_amp_cal_cont'
                           2870 ;------------------------------------------------------------
                           2871 ;vcoamp_hi                 Allocated to registers r2 
                           2872 ;temp_lvl_todic_rd         Allocated to registers r3 
                           2873 ;------------------------------------------------------------
                           2874 ;	../../shared/src/pll_cal_rom.c:312: void pll_amp_cal_cont(void) BANKING_CTRL {
                           2875 ;	-----------------------------------------
                           2876 ;	 function pll_amp_cal_cont
                           2877 ;	-----------------------------------------
   C6CA                    2878 _pll_amp_cal_cont:
                           2879 ;	../../shared/src/pll_cal_rom.c:316: PHY_STATUS =  ST_PLLAMP_CAL_CONT;
   C6CA 90 22 30           2880 	mov	dptr,#_MCU_STATUS0_LANE
   C6CD 74 35              2881 	mov	a,#0x35
   C6CF F0                 2882 	movx	@dptr,a
                           2883 ;	../../shared/src/pll_cal_rom.c:318: cmx_PLL_AMP_CAL_DONE = 0;
   C6D0 90 E6 4C           2884 	mov	dptr,#_CAL_STATUS_READ
   C6D3 E0                 2885 	movx	a,@dptr
   C6D4 54 EF              2886 	anl	a,#0xef
   C6D6 F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/pll_cal_rom.c:320: vcoamp_hi = VCOAMP_HI;
   C6D7 90 A3 30           2889 	mov	dptr,#_PLLCAL_REG1
   C6DA E0                 2890 	movx	a,@dptr
   C6DB 03                 2891 	rr	a
   C6DC 03                 2892 	rr	a
   C6DD 54 01              2893 	anl	a,#0x01
                           2894 ;	../../shared/src/pll_cal_rom.c:322: if(vcoamp_hi==0) pllamp_step_cnt++;
   C6DF FA                 2895 	mov	r2,a
   C6E0 70 09              2896 	jnz	00102$
   C6E2 90 66 0E           2897 	mov	dptr,#_pllamp_step_cnt
   C6E5 E0                 2898 	movx	a,@dptr
   C6E6 24 01              2899 	add	a,#0x01
   C6E8 F0                 2900 	movx	@dptr,a
   C6E9 80 09              2901 	sjmp	00103$
   C6EB                    2902 00102$:
                           2903 ;	../../shared/src/pll_cal_rom.c:323: else pllamp_step_cnt--;
   C6EB 90 66 0E           2904 	mov	dptr,#_pllamp_step_cnt
   C6EE E0                 2905 	movx	a,@dptr
   C6EF 14                 2906 	dec	a
   C6F0 90 66 0E           2907 	mov	dptr,#_pllamp_step_cnt
   C6F3 F0                 2908 	movx	@dptr,a
   C6F4                    2909 00103$:
                           2910 ;	../../shared/src/pll_cal_rom.c:325: if(pllamp_step_cnt >= (cmx_PLLAMP_CAL_STEP_SIZE_7_0<<1) || pllamp_step_cnt==0) {
   C6F4 90 E6 3D           2911 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0001)
   C6F7 E0                 2912 	movx	a,@dptr
   C6F8 FB                 2913 	mov	r3,a
   C6F9 E4                 2914 	clr	a
   C6FA CB                 2915 	xch	a,r3
   C6FB 25 E0              2916 	add	a,acc
   C6FD CB                 2917 	xch	a,r3
   C6FE 33                 2918 	rlc	a
   C6FF FC                 2919 	mov	r4,a
   C700 90 66 0E           2920 	mov	dptr,#_pllamp_step_cnt
   C703 E0                 2921 	movx	a,@dptr
   C704 FD                 2922 	mov	r5,a
   C705 FE                 2923 	mov	r6,a
   C706 7F 00              2924 	mov	r7,#0x00
   C708 C3                 2925 	clr	c
   C709 EE                 2926 	mov	a,r6
   C70A 9B                 2927 	subb	a,r3
   C70B EF                 2928 	mov	a,r7
   C70C 64 80              2929 	xrl	a,#0x80
   C70E 8C F0              2930 	mov	b,r4
   C710 63 F0 80           2931 	xrl	b,#0x80
   C713 95 F0              2932 	subb	a,b
   C715 50 03              2933 	jnc	00104$
   C717 ED                 2934 	mov	a,r5
   C718 70 0B              2935 	jnz	00105$
   C71A                    2936 00104$:
                           2937 ;	../../shared/src/pll_cal_rom.c:326: pllamp_step_cnt = cmx_PLLAMP_CAL_STEP_SIZE_7_0;
   C71A 90 E6 3D           2938 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0001)
   C71D E0                 2939 	movx	a,@dptr
   C71E FB                 2940 	mov	r3,a
   C71F 90 66 0E           2941 	mov	dptr,#_pllamp_step_cnt
   C722 F0                 2942 	movx	@dptr,a
   C723 80 0A              2943 	sjmp	00106$
   C725                    2944 00105$:
                           2945 ;	../../shared/src/pll_cal_rom.c:329: cmx_PLL_AMP_CAL_DONE = 1;	
   C725 90 E6 4C           2946 	mov	dptr,#_CAL_STATUS_READ
   C728 E0                 2947 	movx	a,@dptr
   C729 44 10              2948 	orl	a,#0x10
   C72B F0                 2949 	movx	@dptr,a
                           2950 ;	../../shared/src/pll_cal_rom.c:330: return;
   C72C 02 C7 BA           2951 	ljmp	00119$
   C72F                    2952 00106$:
                           2953 ;	../../shared/src/pll_cal_rom.c:332: temp_lvl_todic_rd = temp_level_todic_rd();
   C72F C0 02              2954 	push	ar2
   C731 78 21              2955 	mov	r0,#_temp_level_todic_rd
   C733 79 C9              2956 	mov	r1,#(_temp_level_todic_rd >> 8)
   C735 7A 02              2957 	mov	r2,#(_temp_level_todic_rd >> 16)
   C737 12 00 B3           2958 	lcall	__sdcc_banked_call
   C73A AB 82              2959 	mov	r3,dpl
   C73C D0 02              2960 	pop	ar2
                           2961 ;	../../shared/src/pll_cal_rom.c:334: if( temp_lvl_todic_rd==0x02 && TEMPC_MUX_HOLD_SEL==TEMPC_MUX_HOLD_SEL_MAX && vcoamp_hi) { //high temp
   C73E BB 02 18           2962 	cjne	r3,#0x02,00115$
   C741 90 82 BC           2963 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_175
   C744 E0                 2964 	movx	a,@dptr
   C745 54 0F              2965 	anl	a,#0x0f
   C747 FC                 2966 	mov	r4,a
   C748 BC 0B 0E           2967 	cjne	r4,#0x0B,00115$
   C74B EA                 2968 	mov	a,r2
   C74C 60 0B              2969 	jz	00115$
                           2970 ;	../../shared/src/pll_cal_rom.c:336: pll_amp_dac_dec();
   C74E 78 54              2971 	mov	r0,#_pll_amp_dac_dec
   C750 79 C6              2972 	mov	r1,#(_pll_amp_dac_dec >> 8)
   C752 7A 02              2973 	mov	r2,#(_pll_amp_dac_dec >> 16)
   C754 12 00 B3           2974 	lcall	__sdcc_banked_call
   C757 80 22              2975 	sjmp	00116$
   C759                    2976 00115$:
                           2977 ;	../../shared/src/pll_cal_rom.c:338: else if( temp_lvl_todic_rd==0x01 && TEMPC_MUX_HOLD_SEL==0) { //low temp
   C759 BB 01 13           2978 	cjne	r3,#0x01,00111$
   C75C 90 82 BC           2979 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_175
   C75F E0                 2980 	movx	a,@dptr
   C760 54 0F              2981 	anl	a,#0x0f
   C762 70 0B              2982 	jnz	00111$
                           2983 ;	../../shared/src/pll_cal_rom.c:340: pll_amp_dac_inc();
   C764 78 8C              2984 	mov	r0,#_pll_amp_dac_inc
   C766 79 C6              2985 	mov	r1,#(_pll_amp_dac_inc >> 8)
   C768 7A 02              2986 	mov	r2,#(_pll_amp_dac_inc >> 16)
   C76A 12 00 B3           2987 	lcall	__sdcc_banked_call
   C76D 80 0C              2988 	sjmp	00116$
   C76F                    2989 00111$:
                           2990 ;	../../shared/src/pll_cal_rom.c:342: else if(vcoamp_hi==0) {
   C76F EA                 2991 	mov	a,r2
   C770 70 09              2992 	jnz	00116$
                           2993 ;	../../shared/src/pll_cal_rom.c:343: pll_amp_dac_inc();		
   C772 78 8C              2994 	mov	r0,#_pll_amp_dac_inc
   C774 79 C6              2995 	mov	r1,#(_pll_amp_dac_inc >> 8)
   C776 7A 02              2996 	mov	r2,#(_pll_amp_dac_inc >> 16)
   C778 12 00 B3           2997 	lcall	__sdcc_banked_call
   C77B                    2998 00116$:
                           2999 ;	../../shared/src/pll_cal_rom.c:346: cmx_cal_lcvco_dac_lsb[CONT][rate] = (reg_LCVCO_DAC_LSB_4_0 & 0x1f) | 0x00;  
   C77B 90 E6 1E           3000 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C77E E0                 3001 	movx	a,@dptr
   C77F 24 C3              3002 	add	a,#(_cmx_cal_lcvco_dac_lsb + 0x0002)
   C781 FA                 3003 	mov	r2,a
   C782 E4                 3004 	clr	a
   C783 34 E5              3005 	addc	a,#((_cmx_cal_lcvco_dac_lsb + 0x0002) >> 8)
   C785 FB                 3006 	mov	r3,a
   C786 90 82 B4           3007 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C789 E0                 3008 	movx	a,@dptr
   C78A C4                 3009 	swap	a
   C78B 23                 3010 	rl	a
   C78C 54 1F              3011 	anl	a,#0x1f
   C78E FC                 3012 	mov	r4,a
   C78F 53 04 1F           3013 	anl	ar4,#0x1F
   C792 8A 82              3014 	mov	dpl,r2
   C794 8B 83              3015 	mov	dph,r3
   C796 EC                 3016 	mov	a,r4
   C797 F0                 3017 	movx	@dptr,a
                           3018 ;	../../shared/src/pll_cal_rom.c:347: cmx_cal_lcvco_dac_msb[CONT][rate] = (reg_LCVCO_DAC_MSB_2_0 & 0x07) | 0x00; 			
   C798 90 E6 1E           3019 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C79B E0                 3020 	movx	a,@dptr
   C79C 24 C6              3021 	add	a,#(_cmx_cal_lcvco_dac_msb + 0x0002)
   C79E FA                 3022 	mov	r2,a
   C79F E4                 3023 	clr	a
   C7A0 34 E5              3024 	addc	a,#((_cmx_cal_lcvco_dac_msb + 0x0002) >> 8)
   C7A2 FB                 3025 	mov	r3,a
   C7A3 90 82 B4           3026 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C7A6 E0                 3027 	movx	a,@dptr
   C7A7 54 07              3028 	anl	a,#0x07
   C7A9 FC                 3029 	mov	r4,a
   C7AA 53 04 07           3030 	anl	ar4,#0x07
   C7AD 8A 82              3031 	mov	dpl,r2
   C7AF 8B 83              3032 	mov	dph,r3
   C7B1 EC                 3033 	mov	a,r4
   C7B2 F0                 3034 	movx	@dptr,a
                           3035 ;	../../shared/src/pll_cal_rom.c:349: cmx_PLL_AMP_CAL_DONE = 1;
   C7B3 90 E6 4C           3036 	mov	dptr,#_CAL_STATUS_READ
   C7B6 E0                 3037 	movx	a,@dptr
   C7B7 44 10              3038 	orl	a,#0x10
   C7B9 F0                 3039 	movx	@dptr,a
   C7BA                    3040 00119$:
   C7BA 02 00 C5           3041 	ljmp	__sdcc_banked_ret
                           3042 ;------------------------------------------------------------
                           3043 ;Allocation info for local variables in function 'pllcal_load'
                           3044 ;------------------------------------------------------------
                           3045 ;no                        Allocated to registers r2 
                           3046 ;lccap_msb_index           Allocated to registers r2 
                           3047 ;------------------------------------------------------------
                           3048 ;	../../shared/src/pll_cal_rom.c:353: void pllcal_load(uint8_t no) BANKING_CTRL {
                           3049 ;	-----------------------------------------
                           3050 ;	 function pllcal_load
                           3051 ;	-----------------------------------------
   C7BD                    3052 _pllcal_load:
                           3053 ;	../../shared/src/pll_cal_rom.c:357: set_lcvco_dac(cmx_cal_lcvco_dac_msb[no][rate], cmx_cal_lcvco_dac_lsb[no][rate]);			
   C7BD E5 82              3054 	mov	a,dpl
   C7BF FA                 3055 	mov	r2,a
   C7C0 25 E0              3056 	add	a,acc
   C7C2 FB                 3057 	mov	r3,a
   C7C3 24 C1              3058 	add	a,#_cmx_cal_lcvco_dac_lsb
   C7C5 FC                 3059 	mov	r4,a
   C7C6 E4                 3060 	clr	a
   C7C7 34 E5              3061 	addc	a,#(_cmx_cal_lcvco_dac_lsb >> 8)
   C7C9 FD                 3062 	mov	r5,a
   C7CA 90 E6 1E           3063 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C7CD E0                 3064 	movx	a,@dptr
   C7CE 2C                 3065 	add	a,r4
   C7CF F5 82              3066 	mov	dpl,a
   C7D1 E4                 3067 	clr	a
   C7D2 3D                 3068 	addc	a,r5
   C7D3 F5 83              3069 	mov	dph,a
   C7D5 E0                 3070 	movx	a,@dptr
   C7D6 FC                 3071 	mov	r4,a
   C7D7 EB                 3072 	mov	a,r3
   C7D8 24 C4              3073 	add	a,#_cmx_cal_lcvco_dac_msb
   C7DA FB                 3074 	mov	r3,a
   C7DB E4                 3075 	clr	a
   C7DC 34 E5              3076 	addc	a,#(_cmx_cal_lcvco_dac_msb >> 8)
   C7DE FD                 3077 	mov	r5,a
   C7DF 90 E6 1E           3078 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C7E2 E0                 3079 	movx	a,@dptr
   C7E3 2B                 3080 	add	a,r3
   C7E4 F5 82              3081 	mov	dpl,a
   C7E6 E4                 3082 	clr	a
   C7E7 3D                 3083 	addc	a,r5
   C7E8 F5 83              3084 	mov	dph,a
   C7EA E0                 3085 	movx	a,@dptr
   C7EB FB                 3086 	mov	r3,a
   C7EC C0 02              3087 	push	ar2
   C7EE C0 04              3088 	push	ar4
   C7F0 8B 82              3089 	mov	dpl,r3
   C7F2 78 63              3090 	mov	r0,#_set_lcvco_dac
   C7F4 79 C2              3091 	mov	r1,#(_set_lcvco_dac >> 8)
   C7F6 7A 02              3092 	mov	r2,#(_set_lcvco_dac >> 16)
   C7F8 12 00 B3           3093 	lcall	__sdcc_banked_call
   C7FB 15 81              3094 	dec	sp
   C7FD D0 02              3095 	pop	ar2
                           3096 ;	../../shared/src/pll_cal_rom.c:359: LCCAP_LSB 	  = cmx_cal_lccap_lsb[rate];
   C7FF 90 E6 1E           3097 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C802 E0                 3098 	movx	a,@dptr
   C803 24 C8              3099 	add	a,#_cmx_cal_lccap_lsb
   C805 F5 82              3100 	mov	dpl,a
   C807 E4                 3101 	clr	a
   C808 34 E5              3102 	addc	a,#(_cmx_cal_lccap_lsb >> 8)
   C80A F5 83              3103 	mov	dph,a
   C80C E0                 3104 	movx	a,@dptr
   C80D FB                 3105 	mov	r3,a
   C80E 90 82 C4           3106 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_177
   C811 C4                 3107 	swap	a
   C812 03                 3108 	rr	a
   C813 54 F8              3109 	anl	a,#(0xf8&0xf8)
   C815 F5 F0              3110 	mov	b,a
   C817 E0                 3111 	movx	a,@dptr
   C818 54 07              3112 	anl	a,#0x07
   C81A 45 F0              3113 	orl	a,b
   C81C F0                 3114 	movx	@dptr,a
                           3115 ;	../../shared/src/pll_cal_rom.c:360: if(no==PWR) 
   C81D EA                 3116 	mov	a,r2
   C81E 70 1D              3117 	jnz	00102$
                           3118 ;	../../shared/src/pll_cal_rom.c:361: lccap_msb_index = conv_thermo_2_bi( cmx_cal_lccap_msb[rate] );	
   C820 90 E6 1E           3119 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C823 E0                 3120 	movx	a,@dptr
   C824 24 CA              3121 	add	a,#_cmx_cal_lccap_msb
   C826 F5 82              3122 	mov	dpl,a
   C828 E4                 3123 	clr	a
   C829 34 E5              3124 	addc	a,#(_cmx_cal_lccap_msb >> 8)
   C82B F5 83              3125 	mov	dph,a
   C82D E0                 3126 	movx	a,@dptr
   C82E F5 82              3127 	mov	dpl,a
   C830 78 50              3128 	mov	r0,#_conv_thermo_2_bi
   C832 79 C2              3129 	mov	r1,#(_conv_thermo_2_bi >> 8)
   C834 7A 02              3130 	mov	r2,#(_conv_thermo_2_bi >> 16)
   C836 12 00 B3           3131 	lcall	__sdcc_banked_call
   C839 AA 82              3132 	mov	r2,dpl
   C83B 80 10              3133 	sjmp	00103$
   C83D                    3134 00102$:
                           3135 ;	../../shared/src/pll_cal_rom.c:362: else	lccap_msb_index  = cal_lccap_msb_index[rate];
   C83D 90 E6 1E           3136 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C840 E0                 3137 	movx	a,@dptr
   C841 24 1A              3138 	add	a,#_cal_lccap_msb_index
   C843 F5 82              3139 	mov	dpl,a
   C845 E4                 3140 	clr	a
   C846 34 66              3141 	addc	a,#(_cal_lccap_msb_index >> 8)
   C848 F5 83              3142 	mov	dph,a
   C84A E0                 3143 	movx	a,@dptr
   C84B FB                 3144 	mov	r3,a
   C84C FA                 3145 	mov	r2,a
   C84D                    3146 00103$:
                           3147 ;	../../shared/src/pll_cal_rom.c:363: if(lccap_msb_index>LCCAP_MSB_MAX_index) lccap_msb_index = LCCAP_MSB_MAX_index;
   C84D 74 04              3148 	mov	a,#0x04
   C84F B5 02 00           3149 	cjne	a,ar2,00111$
   C852                    3150 00111$:
   C852 50 02              3151 	jnc	00105$
   C854 7A 04              3152 	mov	r2,#0x04
   C856                    3153 00105$:
                           3154 ;	../../shared/src/pll_cal_rom.c:364: cal_lccap_msb_index[rate] 	= lccap_msb_index; 	
   C856 90 E6 1E           3155 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C859 E0                 3156 	movx	a,@dptr
   C85A FB                 3157 	mov	r3,a
   C85B 24 1A              3158 	add	a,#_cal_lccap_msb_index
   C85D F5 82              3159 	mov	dpl,a
   C85F E4                 3160 	clr	a
   C860 34 66              3161 	addc	a,#(_cal_lccap_msb_index >> 8)
   C862 F5 83              3162 	mov	dph,a
   C864 EA                 3163 	mov	a,r2
   C865 F0                 3164 	movx	@dptr,a
                           3165 ;	../../shared/src/pll_cal_rom.c:366: LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
   C866 EA                 3166 	mov	a,r2
   C867 90 C9 38           3167 	mov	dptr,#_lccap_msb_thermo_tb
   C86A 93                 3168 	movc	a,@a+dptr
   C86B FA                 3169 	mov	r2,a
   C86C 90 82 C8           3170 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C86F C4                 3171 	swap	a
   C870 54 F0              3172 	anl	a,#(0xf0&0xf0)
   C872 F5 F0              3173 	mov	b,a
   C874 E0                 3174 	movx	a,@dptr
   C875 54 0F              3175 	anl	a,#0x0f
   C877 45 F0              3176 	orl	a,b
   C879 F0                 3177 	movx	@dptr,a
   C87A 02 00 C5           3178 	ljmp	__sdcc_banked_ret
                           3179 ;------------------------------------------------------------
                           3180 ;Allocation info for local variables in function 'check_pll_lock'
                           3181 ;------------------------------------------------------------
                           3182 ;------------------------------------------------------------
                           3183 ;	../../shared/src/pll_cal_rom.c:369: void check_pll_lock(void) BANKING_CTRL {
                           3184 ;	-----------------------------------------
                           3185 ;	 function check_pll_lock
                           3186 ;	-----------------------------------------
   C87D                    3187 _check_pll_lock:
                           3188 ;	../../shared/src/pll_cal_rom.c:370: timeout = 0;
   C87D C2 03              3189 	clr	_timeout
                           3190 ;	../../shared/src/pll_cal_rom.c:371: if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
   C87F 90 E6 49           3191 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   C882 E0                 3192 	movx	a,@dptr
   C883 20 E1 0A           3193 	jb	acc.1,00104$
                           3194 ;	../../shared/src/pll_cal_rom.c:372: timeout_start((uint16_t)Ttimeout_timer); //50mS	
   C886 75 8B 18           3195 	mov	_TMR1,#0x18
   C889 75 8D FC           3196 	mov	(_TMR1 >> 8),#0xFC
   C88C D2 8E              3197 	setb	_TR1
   C88E C2 03              3198 	clr	_timeout
                           3199 ;	../../shared/src/pll_cal_rom.c:375: while(!reg_ANA_PLL_LOCK_RD && !timeout);
   C890                    3200 00104$:
   C890 90 A3 19           3201 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   C893 E0                 3202 	movx	a,@dptr
   C894 20 E6 03           3203 	jb	acc.6,00107$
   C897 30 03 F6           3204 	jnb	_timeout,00104$
   C89A                    3205 00107$:
   C89A 02 00 C5           3206 	ljmp	__sdcc_banked_ret
                           3207 ;------------------------------------------------------------
                           3208 ;Allocation info for local variables in function 'pllcal_save'
                           3209 ;------------------------------------------------------------
                           3210 ;no                        Allocated to registers r2 
                           3211 ;------------------------------------------------------------
                           3212 ;	../../shared/src/pll_cal_rom.c:379: void pllcal_save(uint8_t no) BANKING_CTRL {
                           3213 ;	-----------------------------------------
                           3214 ;	 function pllcal_save
                           3215 ;	-----------------------------------------
   C89D                    3216 _pllcal_save:
                           3217 ;	../../shared/src/pll_cal_rom.c:380: cmx_cal_lcvco_dac_lsb[no][rate] = (LCVCO_DAC_LSB & 0x1f) | 0x00; 
   C89D E5 82              3218 	mov	a,dpl
   C89F 25 82              3219 	add	a,dpl
   C8A1 FA                 3220 	mov	r2,a
   C8A2 24 C1              3221 	add	a,#_cmx_cal_lcvco_dac_lsb
   C8A4 FB                 3222 	mov	r3,a
   C8A5 E4                 3223 	clr	a
   C8A6 34 E5              3224 	addc	a,#(_cmx_cal_lcvco_dac_lsb >> 8)
   C8A8 FC                 3225 	mov	r4,a
   C8A9 90 E6 1E           3226 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C8AC E0                 3227 	movx	a,@dptr
   C8AD 2B                 3228 	add	a,r3
   C8AE FB                 3229 	mov	r3,a
   C8AF E4                 3230 	clr	a
   C8B0 3C                 3231 	addc	a,r4
   C8B1 FC                 3232 	mov	r4,a
   C8B2 90 82 B4           3233 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C8B5 E0                 3234 	movx	a,@dptr
   C8B6 C4                 3235 	swap	a
   C8B7 23                 3236 	rl	a
   C8B8 54 1F              3237 	anl	a,#0x1f
   C8BA FD                 3238 	mov	r5,a
   C8BB 53 05 1F           3239 	anl	ar5,#0x1F
   C8BE 8B 82              3240 	mov	dpl,r3
   C8C0 8C 83              3241 	mov	dph,r4
   C8C2 ED                 3242 	mov	a,r5
   C8C3 F0                 3243 	movx	@dptr,a
                           3244 ;	../../shared/src/pll_cal_rom.c:381: cmx_cal_lcvco_dac_msb[no][rate] = (LCVCO_DAC_MSB & 0x07) | 0x00; 
   C8C4 EA                 3245 	mov	a,r2
   C8C5 24 C4              3246 	add	a,#_cmx_cal_lcvco_dac_msb
   C8C7 FA                 3247 	mov	r2,a
   C8C8 E4                 3248 	clr	a
   C8C9 34 E5              3249 	addc	a,#(_cmx_cal_lcvco_dac_msb >> 8)
   C8CB FB                 3250 	mov	r3,a
   C8CC 90 E6 1E           3251 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C8CF E0                 3252 	movx	a,@dptr
   C8D0 2A                 3253 	add	a,r2
   C8D1 FA                 3254 	mov	r2,a
   C8D2 E4                 3255 	clr	a
   C8D3 3B                 3256 	addc	a,r3
   C8D4 FB                 3257 	mov	r3,a
   C8D5 90 82 B4           3258 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   C8D8 E0                 3259 	movx	a,@dptr
   C8D9 54 07              3260 	anl	a,#0x07
   C8DB FC                 3261 	mov	r4,a
   C8DC 53 04 07           3262 	anl	ar4,#0x07
   C8DF 8A 82              3263 	mov	dpl,r2
   C8E1 8B 83              3264 	mov	dph,r3
   C8E3 EC                 3265 	mov	a,r4
   C8E4 F0                 3266 	movx	@dptr,a
                           3267 ;	../../shared/src/pll_cal_rom.c:382: cmx_cal_lccap_lsb[rate]     = (LCCAP_LSB & 0x1f) | 0x00; 
   C8E5 90 E6 1E           3268 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C8E8 E0                 3269 	movx	a,@dptr
   C8E9 24 C8              3270 	add	a,#_cmx_cal_lccap_lsb
   C8EB FA                 3271 	mov	r2,a
   C8EC E4                 3272 	clr	a
   C8ED 34 E5              3273 	addc	a,#(_cmx_cal_lccap_lsb >> 8)
   C8EF FB                 3274 	mov	r3,a
   C8F0 90 82 C4           3275 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_177
   C8F3 E0                 3276 	movx	a,@dptr
   C8F4 C4                 3277 	swap	a
   C8F5 23                 3278 	rl	a
   C8F6 54 1F              3279 	anl	a,#0x1f
   C8F8 FC                 3280 	mov	r4,a
   C8F9 53 04 1F           3281 	anl	ar4,#0x1F
   C8FC 8A 82              3282 	mov	dpl,r2
   C8FE 8B 83              3283 	mov	dph,r3
   C900 EC                 3284 	mov	a,r4
   C901 F0                 3285 	movx	@dptr,a
                           3286 ;	../../shared/src/pll_cal_rom.c:383: cmx_cal_lccap_msb[rate]     = (LCCAP_MSB & 0x0f) | 0x00; 
   C902 90 E6 1E           3287 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C905 E0                 3288 	movx	a,@dptr
   C906 24 CA              3289 	add	a,#_cmx_cal_lccap_msb
   C908 FA                 3290 	mov	r2,a
   C909 E4                 3291 	clr	a
   C90A 34 E5              3292 	addc	a,#(_cmx_cal_lccap_msb >> 8)
   C90C FB                 3293 	mov	r3,a
   C90D 90 82 C8           3294 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   C910 E0                 3295 	movx	a,@dptr
   C911 C4                 3296 	swap	a
   C912 54 0F              3297 	anl	a,#0x0f
   C914 FC                 3298 	mov	r4,a
   C915 53 04 0F           3299 	anl	ar4,#0x0F
   C918 8A 82              3300 	mov	dpl,r2
   C91A 8B 83              3301 	mov	dph,r3
   C91C EC                 3302 	mov	a,r4
   C91D F0                 3303 	movx	@dptr,a
   C91E 02 00 C5           3304 	ljmp	__sdcc_banked_ret
                           3305 ;------------------------------------------------------------
                           3306 ;Allocation info for local variables in function 'temp_level_todic_rd'
                           3307 ;------------------------------------------------------------
                           3308 ;------------------------------------------------------------
                           3309 ;	../../shared/src/pll_cal_rom.c:386: uint8_t	temp_level_todic_rd(void) BANKING_CTRL
                           3310 ;	-----------------------------------------
                           3311 ;	 function temp_level_todic_rd
                           3312 ;	-----------------------------------------
   C921                    3313 _temp_level_todic_rd:
                           3314 ;	../../shared/src/pll_cal_rom.c:388: reg_ANA_TEMPC_LEVEL_TODIG_RD_REQ = 1;
                           3315 ;	../../shared/src/pll_cal_rom.c:389: reg_ANA_TEMPC_LEVEL_TODIG_RD_REQ = 0;
   C921 90 A3 40           3316 	mov	dptr,#_CMN_CALIBRATION
   C924 E0                 3317 	movx	a,@dptr
   C925 44 04              3318 	orl	a,#0x04
   C927 F0                 3319 	movx	@dptr,a
   C928 E0                 3320 	movx	a,@dptr
   C929 54 FB              3321 	anl	a,#0xfb
   C92B F0                 3322 	movx	@dptr,a
                           3323 ;	../../shared/src/pll_cal_rom.c:391: return reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0;
   C92C 90 A3 40           3324 	mov	dptr,#_CMN_CALIBRATION
   C92F E0                 3325 	movx	a,@dptr
   C930 54 03              3326 	anl	a,#0x03
   C932 FA                 3327 	mov	r2,a
   C933 F5 82              3328 	mov	dpl,a
   C935 02 00 C5           3329 	ljmp	__sdcc_banked_ret
                           3330 	.area CSEG    (CODE)
                           3331 	.area BANK2   (CODE)
   C938                    3332 _lccap_msb_thermo_tb:
   C938 00                 3333 	.db #0x00	; 0
   C939 01                 3334 	.db #0x01	; 1
   C93A 03                 3335 	.db #0x03	; 3
   C93B 07                 3336 	.db #0x07	; 7
   C93C 0F                 3337 	.db #0x0F	; 15
                           3338 	.area CABS    (ABS,CODE)
