                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:27 2018
                              5 ;--------------------------------------------------------
                              6 	.module misc_rom
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _memcpy_prom_to_xdat
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
                            980 	.globl _delay01
                            981 	.globl _sign_abs_up
                            982 	.globl _sign_abs_dn
                            983 	.globl _is_num_toggle_pat
                            984 	.globl _is_toggle_pat
                            985 	.globl _set_test_pattern
                            986 	.globl _recover_test_pattern
                            987 	.globl _read_tsen
                            988 	.globl _u16div
                            989 	.globl _u16mul
                            990 	.globl _short_delay
                            991 	.globl _short_delay_0
                            992 	.globl _max
                            993 	.globl _min
                            994 	.globl _clamp
                            995 	.globl _clamp_u8
                            996 	.globl _clamp16
                            997 	.globl _abs
                            998 	.globl _abs16
                            999 	.globl _memcpy
                           1000 	.globl _memset0
                           1001 	.globl _conv_thermo_2_bi
                           1002 ;--------------------------------------------------------
                           1003 ; special function registers
                           1004 ;--------------------------------------------------------
                           1005 	.area RSEG    (ABS,DATA)
   0000                    1006 	.org 0x0000
                    0080   1007 _P0	=	0x0080
                    0082   1008 _DPL	=	0x0082
                    0083   1009 _DPH	=	0x0083
                    0086   1010 _WDTREL	=	0x0086
                    0087   1011 _PCON	=	0x0087
                    0088   1012 _TCON	=	0x0088
                    0089   1013 _TMOD	=	0x0089
                    008A   1014 _TL0	=	0x008a
                    008B   1015 _TL1	=	0x008b
                    008C   1016 _TH0	=	0x008c
                    008D   1017 _TH1	=	0x008d
                    008E   1018 _CKCON	=	0x008e
                    0090   1019 _P1	=	0x0090
                    0092   1020 _DPS	=	0x0092
                    0094   1021 _PSBANK	=	0x0094
                    0098   1022 _SCON	=	0x0098
                    0099   1023 _SBUF	=	0x0099
                    009A   1024 _IEN2	=	0x009a
                    00A0   1025 _P2	=	0x00a0
                    00A1   1026 _DMAS0	=	0x00a1
                    00A2   1027 _DMAS1	=	0x00a2
                    00A3   1028 _DMAS2	=	0x00a3
                    00A4   1029 _DMAT0	=	0x00a4
                    00A5   1030 _DMAT1	=	0x00a5
                    00A6   1031 _DMAT2	=	0x00a6
                    00A8   1032 _IEN0	=	0x00a8
                    00A9   1033 _IP0	=	0x00a9
                    00AA   1034 _S0RELL	=	0x00aa
                    00B0   1035 _P3	=	0x00b0
                    00B1   1036 _DMAC0	=	0x00b1
                    00B2   1037 _DMAC1	=	0x00b2
                    00B3   1038 _DMAC2	=	0x00b3
                    00B4   1039 _DMASEL	=	0x00b4
                    00B5   1040 _DMAM0	=	0x00b5
                    00B6   1041 _DMAM1	=	0x00b6
                    00B8   1042 _IEN1	=	0x00b8
                    00B9   1043 _IP1	=	0x00b9
                    00BA   1044 _S0RELH	=	0x00ba
                    00C0   1045 _IRCON	=	0x00c0
                    00C1   1046 _CCEN	=	0x00c1
                    00C8   1047 _T2CON	=	0x00c8
                    00CA   1048 _RCAP2L	=	0x00ca
                    00CB   1049 _RCAP2H	=	0x00cb
                    00CC   1050 _TL2	=	0x00cc
                    00CD   1051 _TH2	=	0x00cd
                    00D0   1052 _PSW	=	0x00d0
                    00D8   1053 _ADCON	=	0x00d8
                    00E0   1054 _ACC	=	0x00e0
                    00E8   1055 _EIE	=	0x00e8
                    00F0   1056 _B	=	0x00f0
                    00F7   1057 _SRST	=	0x00f7
                    8C8A   1058 _TMR0	=	0x8c8a
                    8D8B   1059 _TMR1	=	0x8d8b
                    CDCC   1060 _TMR2	=	0xcdcc
                    A2A1   1061 _DMASA	=	0xa2a1
                    A5A4   1062 _DMATA	=	0xa5a4
                    B2B1   1063 _DMAC	=	0xb2b1
                           1064 ;--------------------------------------------------------
                           1065 ; special function bits
                           1066 ;--------------------------------------------------------
                           1067 	.area RSEG    (ABS,DATA)
   0000                    1068 	.org 0x0000
                    0080   1069 _P0_0	=	0x0080
                    0081   1070 _P0_1	=	0x0081
                    0082   1071 _P0_2	=	0x0082
                    0083   1072 _P0_3	=	0x0083
                    0084   1073 _P0_4	=	0x0084
                    0085   1074 _P0_5	=	0x0085
                    0086   1075 _P0_6	=	0x0086
                    0087   1076 _P0_7	=	0x0087
                    0090   1077 _P1_0	=	0x0090
                    0091   1078 _P1_1	=	0x0091
                    0092   1079 _P1_2	=	0x0092
                    0093   1080 _P1_3	=	0x0093
                    0094   1081 _P1_4	=	0x0094
                    0095   1082 _P1_5	=	0x0095
                    0096   1083 _P1_6	=	0x0096
                    0097   1084 _P1_7	=	0x0097
                    00A0   1085 _P2_0	=	0x00a0
                    00A1   1086 _P2_1	=	0x00a1
                    00A2   1087 _P2_2	=	0x00a2
                    00A3   1088 _P2_3	=	0x00a3
                    00A4   1089 _P2_4	=	0x00a4
                    00A5   1090 _P2_5	=	0x00a5
                    00A6   1091 _P2_6	=	0x00a6
                    00A7   1092 _P2_7	=	0x00a7
                    00B0   1093 _P3_0	=	0x00b0
                    00B1   1094 _P3_1	=	0x00b1
                    00B2   1095 _P3_2	=	0x00b2
                    00B3   1096 _P3_3	=	0x00b3
                    00B4   1097 _P3_4	=	0x00b4
                    00B5   1098 _P3_5	=	0x00b5
                    00B6   1099 _P3_6	=	0x00b6
                    00B7   1100 _P3_7	=	0x00b7
                    0088   1101 _IT0	=	0x0088
                    0089   1102 _IE0	=	0x0089
                    008A   1103 _IT1	=	0x008a
                    008B   1104 _IE1	=	0x008b
                    008C   1105 _TR0	=	0x008c
                    008D   1106 _TF0	=	0x008d
                    008E   1107 _TR1	=	0x008e
                    008F   1108 _TF1	=	0x008f
                    00A8   1109 _EX0	=	0x00a8
                    00A9   1110 _ET0	=	0x00a9
                    00AA   1111 _EX1	=	0x00aa
                    00AB   1112 _ET1	=	0x00ab
                    00AC   1113 _ES	=	0x00ac
                    00AD   1114 _ET2	=	0x00ad
                    00AE   1115 _WDT	=	0x00ae
                    00AF   1116 _EA	=	0x00af
                    00B8   1117 _EX7	=	0x00b8
                    00B9   1118 _EX2	=	0x00b9
                    00BA   1119 _EX3	=	0x00ba
                    00BB   1120 _EX4	=	0x00bb
                    00BC   1121 _EX5	=	0x00bc
                    00BD   1122 _EX6	=	0x00bd
                    00BE   1123 _PS1	=	0x00be
                    009A   1124 _ES1	=	0x009a
                    009B   1125 _EX8	=	0x009b
                    009C   1126 _EX9	=	0x009c
                    009D   1127 _EX10	=	0x009d
                    009E   1128 _EX11	=	0x009e
                    009F   1129 _EX12	=	0x009f
                    0098   1130 _RI	=	0x0098
                    0099   1131 _TI	=	0x0099
                    00C6   1132 _TF2	=	0x00c6
                           1133 ;--------------------------------------------------------
                           1134 ; overlayable register banks
                           1135 ;--------------------------------------------------------
                           1136 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1137 	.ds 8
                           1138 ;--------------------------------------------------------
                           1139 ; overlayable bit register bank
                           1140 ;--------------------------------------------------------
                           1141 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1142 bits:
   0025                    1143 	.ds 1
                    8000   1144 	b0 = bits[0]
                    8100   1145 	b1 = bits[1]
                    8200   1146 	b2 = bits[2]
                    8300   1147 	b3 = bits[3]
                    8400   1148 	b4 = bits[4]
                    8500   1149 	b5 = bits[5]
                    8600   1150 	b6 = bits[6]
                    8700   1151 	b7 = bits[7]
                           1152 ;--------------------------------------------------------
                           1153 ; internal ram data
                           1154 ;--------------------------------------------------------
                           1155 	.area DSEG    (DATA)
                           1156 ;--------------------------------------------------------
                           1157 ; overlayable items in internal ram 
                           1158 ;--------------------------------------------------------
                           1159 	.area OSEG    (OVR,DATA)
                           1160 ;--------------------------------------------------------
                           1161 ; indirectly addressable internal ram data
                           1162 ;--------------------------------------------------------
                           1163 	.area ISEG    (DATA)
                           1164 ;--------------------------------------------------------
                           1165 ; absolute internal ram data
                           1166 ;--------------------------------------------------------
                           1167 	.area IABS    (ABS,DATA)
                           1168 	.area IABS    (ABS,DATA)
                           1169 ;--------------------------------------------------------
                           1170 ; bit data
                           1171 ;--------------------------------------------------------
                           1172 	.area BSEG    (BIT)
                           1173 ;--------------------------------------------------------
                           1174 ; paged external ram data
                           1175 ;--------------------------------------------------------
                           1176 	.area PSEG    (PAG,XDATA)
                           1177 ;--------------------------------------------------------
                           1178 ; external ram data
                           1179 ;--------------------------------------------------------
                           1180 	.area XSEG    (XDATA)
                    1000   1181 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1182 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1183 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1184 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1185 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1186 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1187 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1188 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1189 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1190 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1191 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1192 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1193 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1194 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1195 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1196 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1197 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1198 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1199 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1200 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1201 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1202 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1203 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1204 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1205 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1206 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1207 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1208 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1209 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1210 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1211 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1212 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1213 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1214 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1215 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1216 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1217 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1218 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1219 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1220 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1221 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1222 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1223 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1224 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1225 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1226 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1227 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1228 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1229 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1230 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1231 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1232 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1233 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1234 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1235 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1236 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1237 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1238 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1239 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1240 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1241 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1242 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1243 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1244 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1245 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1246 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1247 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1248 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1249 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1250 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1251 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1252 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1253 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1254 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1255 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1256 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1257 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1258 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1259 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1260 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1261 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1262 _ANA_DFEE_REG_20	=	0x0480
                    0484   1263 _ANA_DFEE_REG_21	=	0x0484
                    0488   1264 _ANA_DFEE_REG_22	=	0x0488
                    048C   1265 _ANA_DFEE_REG_23	=	0x048c
                    0490   1266 _ANA_DFEE_REG_24	=	0x0490
                    0494   1267 _ANA_DFEE_REG_25	=	0x0494
                    0498   1268 _ANA_DFEE_REG_26	=	0x0498
                    049C   1269 _ANA_DFEE_REG_27	=	0x049c
                    0400   1270 _ANA_DFEE_REG_00	=	0x0400
                    0404   1271 _ANA_DFEE_REG_01	=	0x0404
                    0408   1272 _ANA_DFEE_REG_02	=	0x0408
                    040C   1273 _ANA_DFEE_REG_03	=	0x040c
                    0410   1274 _ANA_DFEE_REG_04	=	0x0410
                    0414   1275 _ANA_DFEE_REG_05	=	0x0414
                    0418   1276 _ANA_DFEE_REG_06	=	0x0418
                    041C   1277 _ANA_DFEE_REG_07	=	0x041c
                    0420   1278 _ANA_DFEE_REG_08	=	0x0420
                    0424   1279 _ANA_DFEE_REG_09	=	0x0424
                    0428   1280 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1281 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1282 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1283 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1284 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1285 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1286 _ANA_DFEE_REG_10	=	0x0440
                    0444   1287 _ANA_DFEE_REG_11	=	0x0444
                    0448   1288 _ANA_DFEE_REG_12	=	0x0448
                    044C   1289 _ANA_DFEE_REG_13	=	0x044c
                    0450   1290 _ANA_DFEE_REG_14	=	0x0450
                    0454   1291 _ANA_DFEE_REG_15	=	0x0454
                    0458   1292 _ANA_DFEE_REG_16	=	0x0458
                    045C   1293 _ANA_DFEE_REG_17	=	0x045c
                    0460   1294 _ANA_DFEE_REG_18	=	0x0460
                    0464   1295 _ANA_DFEE_REG_19	=	0x0464
                    0468   1296 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1297 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1298 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1299 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1300 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1301 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1302 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1303 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1304 _ANA_DFEO_REG_10	=	0x0840
                    0844   1305 _ANA_DFEO_REG_11	=	0x0844
                    0848   1306 _ANA_DFEO_REG_12	=	0x0848
                    084C   1307 _ANA_DFEO_REG_13	=	0x084c
                    0850   1308 _ANA_DFEO_REG_14	=	0x0850
                    0854   1309 _ANA_DFEO_REG_15	=	0x0854
                    0858   1310 _ANA_DFEO_REG_16	=	0x0858
                    085C   1311 _ANA_DFEO_REG_17	=	0x085c
                    0860   1312 _ANA_DFEO_REG_18	=	0x0860
                    0864   1313 _ANA_DFEO_REG_19	=	0x0864
                    0868   1314 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1315 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1316 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1317 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1318 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1319 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1320 _ANA_DFEO_REG_20	=	0x0880
                    0884   1321 _ANA_DFEO_REG_21	=	0x0884
                    0888   1322 _ANA_DFEO_REG_22	=	0x0888
                    088C   1323 _ANA_DFEO_REG_23	=	0x088c
                    0890   1324 _ANA_DFEO_REG_24	=	0x0890
                    0894   1325 _ANA_DFEO_REG_25	=	0x0894
                    0898   1326 _ANA_DFEO_REG_26	=	0x0898
                    089C   1327 _ANA_DFEO_REG_27	=	0x089c
                    0800   1328 _ANA_DFEO_REG_00	=	0x0800
                    0804   1329 _ANA_DFEO_REG_01	=	0x0804
                    0808   1330 _ANA_DFEO_REG_02	=	0x0808
                    080C   1331 _ANA_DFEO_REG_03	=	0x080c
                    0810   1332 _ANA_DFEO_REG_04	=	0x0810
                    0814   1333 _ANA_DFEO_REG_05	=	0x0814
                    0818   1334 _ANA_DFEO_REG_06	=	0x0818
                    081C   1335 _ANA_DFEO_REG_07	=	0x081c
                    0820   1336 _ANA_DFEO_REG_08	=	0x0820
                    0824   1337 _ANA_DFEO_REG_09	=	0x0824
                    0828   1338 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1339 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1340 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1341 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1342 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1343 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1344 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1345 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1346 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1347 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1348 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1349 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1350 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1351 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1352 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1353 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1354 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1355 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1356 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1357 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1358 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1359 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1360 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1361 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1362 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1363 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1364 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1365 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1366 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1367 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1368 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1369 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1370 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1371 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1372 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1373 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1374 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1375 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1376 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1377 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1378 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1379 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1380 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1381 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1382 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1383 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1384 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1385 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1386 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1387 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1388 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1389 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1390 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1391 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1392 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1393 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1394 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1395 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1396 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1397 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1398 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1399 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1400 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1401 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1402 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1403 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1404 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1405 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1406 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1407 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1408 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1409 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1410 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1411 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1412 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1413 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1414 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1415 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1416 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1417 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1418 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1419 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1420 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1421 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1422 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1423 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1424 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1425 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1426 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1427 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1428 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1429 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1430 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1431 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1432 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1433 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1434 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1435 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1436 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1437 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1438 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1439 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1440 _TX_SYSTEM_LANE	=	0x2034
                    203C   1441 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1442 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1443 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1444 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1445 __FIELDNAME__LANE	=	0x204c
                    2050   1446 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1447 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1448 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1449 _MON_TOP	=	0x205c
                    2100   1450 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1451 _RX_SYSTEM_LANE	=	0x2104
                    2108   1452 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1453 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1454 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1455 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1456 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1457 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1458 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1459 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1460 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1461 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1462 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1463 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1464 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1465 _CDR_LOCK_REG	=	0x213c
                    2140   1466 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1467 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1468 _RX_DATA_PATH_REG	=	0x2148
                    214C   1469 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1470 _RX_CALIBRATION_REG	=	0x2150
                    2158   1471 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1472 _DTL_REG0	=	0x2160
                    2164   1473 _DTL_REG1	=	0x2164
                    2168   1474 _DTL_REG2	=	0x2168
                    216C   1475 _DTL_REG3	=	0x216c
                    2170   1476 _SQ_REG0	=	0x2170
                    4000   1477 _LANE_CFG0	=	0x4000
                    4004   1478 _LANE_STATUS0	=	0x4004
                    4008   1479 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1480 _LANE_CFG2_LANE	=	0x400c
                    4010   1481 _LANE_CFG4	=	0x4010
                    4014   1482 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1483 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1484 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1485 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1486 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1487 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1488 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1489 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1490 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1491 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1492 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1493 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1494 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1495 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1496 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1497 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1498 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1499 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1500 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1501 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1502 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1503 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1504 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1505 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1506 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1507 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1508 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1509 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1510 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1511 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1512 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1513 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1514 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1515 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1516 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1517 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1518 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1519 _MCU_CONTROL_LANE	=	0x2200
                    2204   1520 _MCU_GPIO	=	0x2204
                    2208   1521 _CACHE_DEBUG0	=	0x2208
                    220C   1522 _CACHE_DEBUG1	=	0x220c
                    2210   1523 _LANE_SYSTEM0	=	0x2210
                    2230   1524 _MCU_STATUS0_LANE	=	0x2230
                    2234   1525 _MCU_STATUS1_LANE	=	0x2234
                    2238   1526 _MCU_STATUS2_LANE	=	0x2238
                    223C   1527 _MCU_STATUS3_LANE	=	0x223c
                    2240   1528 _MCU_INT0_CONTROL	=	0x2240
                    2244   1529 _MCU_INT1_CONTROL	=	0x2244
                    2248   1530 _MCU_INT2_CONTROL	=	0x2248
                    224C   1531 _MCU_INT3_CONTROL	=	0x224c
                    2250   1532 _MCU_INT4_CONTROL	=	0x2250
                    2254   1533 _MCU_INT5_CONTROL	=	0x2254
                    2258   1534 _MCU_INT6_CONTROL	=	0x2258
                    225C   1535 _MCU_INT7_CONTROL	=	0x225c
                    2260   1536 _MCU_INT8_CONTROL	=	0x2260
                    2264   1537 _MCU_INT9_CONTROL	=	0x2264
                    2268   1538 _MCU_INT10_CONTROL	=	0x2268
                    226C   1539 _MCU_INT11_CONTROL	=	0x226c
                    2270   1540 _MCU_INT12_CONTROL	=	0x2270
                    2274   1541 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1542 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1543 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1544 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1545 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1546 _MCU_IRQ_LANE	=	0x2288
                    228C   1547 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1548 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1549 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1550 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1551 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1552 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1553 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1554 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1555 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1556 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1557 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1558 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1559 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1560 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1561 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1562 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1563 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1564 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1565 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1566 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1567 _MCU_WDT_LANE	=	0x22dc
                    22E0   1568 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1569 _MCU_COMMAND0	=	0x22e4
                    22F4   1570 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1571 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1572 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1573 _PT_CONTROL0	=	0x2300
                    2304   1574 _PT_CONTROL1	=	0x2304
                    2308   1575 _PT_USER_PATTERN0	=	0x2308
                    230C   1576 _PT_USER_PATTERN1	=	0x230c
                    2310   1577 _PT_USER_PATTERN2	=	0x2310
                    2314   1578 _PT_COUNTER0	=	0x2314
                    2318   1579 _PT_COUNTER1	=	0x2318
                    231C   1580 _PT_COUNTER2	=	0x231c
                    2400   1581 _DFE_CTRL_REG0	=	0x2400
                    2404   1582 _DFE_CTRL_REG1	=	0x2404
                    2408   1583 _DFE_CTRL_REG2	=	0x2408
                    240C   1584 _DFE_CTRL_REG3	=	0x240c
                    2410   1585 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1586 _DFE_CTRL_REG4	=	0x2414
                    2418   1587 _DFE_ANA_REG0	=	0x2418
                    241C   1588 _DFE_ANA_REG1	=	0x241c
                    2420   1589 _DFE_STEP_REG0	=	0x2420
                    2424   1590 _DFE_STEP_REG1	=	0x2424
                    2430   1591 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1592 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1593 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1594 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1595 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1596 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1597 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1598 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1599 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1600 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1601 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1602 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1603 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1604 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1605 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1606 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1607 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1608 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1609 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1610 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1611 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1612 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1613 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1614 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1615 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1616 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1617 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1618 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1619 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1620 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1621 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1622 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1623 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1624 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1625 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1626 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1627 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1628 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1629 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1630 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1631 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1632 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1633 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1634 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1635 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1636 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1637 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1638 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1639 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1640 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1641 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1642 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1643 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1644 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1645 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1646 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1647 _CAL_OFST_REG0	=	0x2518
                    251C   1648 _CAL_OFST_REG1	=	0x251c
                    2520   1649 _CAL_OFST_REG2	=	0x2520
                    2530   1650 _DFE_DCE_REG0	=	0x2530
                    2540   1651 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1652 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1653 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1654 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1655 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1656 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1657 _EOM_VLD_REG0	=	0x2560
                    2564   1658 _EOM_VLD_REG1	=	0x2564
                    2568   1659 _EOM_VLD_REG2	=	0x2568
                    256C   1660 _EOM_VLD_REG3	=	0x256c
                    2570   1661 _EOM_ERR_REG0	=	0x2570
                    2574   1662 _EOM_ERR_REG1	=	0x2574
                    2578   1663 _EOM_ERR_REG2	=	0x2578
                    257C   1664 _EOM_ERR_REG3	=	0x257c
                    2580   1665 _EOM_REG0	=	0x2580
                    25F0   1666 _EOM_VLD_REG4	=	0x25f0
                    25F4   1667 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1668 _CAL_CTRL1_LANE	=	0x6000
                    6004   1669 _CAL_CTRL2_LANE	=	0x6004
                    6008   1670 _CAL_CTRL3_LANE	=	0x6008
                    600C   1671 _CAL_CTRL4_LANE	=	0x600c
                    6010   1672 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1673 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1674 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1675 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1676 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1677 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1678 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1679 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1680 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1681 _DFE_CONTROL_0	=	0x6034
                    6038   1682 _DFE_CONTROL_1	=	0x6038
                    6040   1683 _DFE_CONTROL_2	=	0x6040
                    6044   1684 _DFE_CONTROL_3	=	0x6044
                    6048   1685 _DFE_CONTROL_4	=	0x6048
                    604C   1686 _DFE_CONTROL_5	=	0x604c
                    6050   1687 _TRAIN_CONTROL_0	=	0x6050
                    6054   1688 _TRAIN_CONTROL_1	=	0x6054
                    6058   1689 _TRAIN_CONTROL_2	=	0x6058
                    605C   1690 _RPTA_CONFIG_0	=	0x605c
                    6060   1691 _RPTA_CONFIG_1	=	0x6060
                    6064   1692 _DLL_CAL	=	0x6064
                    6068   1693 _TRAIN_PARA_0	=	0x6068
                    606C   1694 _TRAIN_PARA_1	=	0x606c
                    6070   1695 _TRAIN_PARA_2	=	0x6070
                    6074   1696 _TRAIN_PARA_3	=	0x6074
                    6078   1697 _DFE_CONTROL_6	=	0x6078
                    607C   1698 _DFE_TEST_0	=	0x607c
                    6080   1699 _DFE_TEST_1	=	0x6080
                    6084   1700 _DFE_TEST_4	=	0x6084
                    6088   1701 _DFE_TEST_5	=	0x6088
                    608C   1702 _DFE_CONTROL_7	=	0x608c
                    6090   1703 _DFE_CONTROL_8	=	0x6090
                    6094   1704 _DFE_CONTROL_9	=	0x6094
                    6098   1705 _DFE_CONTROL_10	=	0x6098
                    609C   1706 _DFE_CONTROL_11	=	0x609c
                    60A0   1707 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1708 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1709 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1710 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1711 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1712 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1713 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1714 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1715 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1716 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1717 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1718 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1719 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1720 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1721 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1722 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1723 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1724 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1725 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1726 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1727 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1728 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1729 _END_XDAT_LANE	=	0x60f8
                    A000   1730 _TX_CMN_REG	=	0xa000
                    A008   1731 _DTX_REG0	=	0xa008
                    A00C   1732 _DTX_REG1	=	0xa00c
                    A010   1733 _DTX_REG2	=	0xa010
                    A014   1734 _DTX_REG3	=	0xa014
                    A018   1735 _DTX_REG4	=	0xa018
                    A01C   1736 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1737 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1738 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1739 _SRIS_REG0	=	0xa02c
                    A030   1740 _SRIS_REG1	=	0xa030
                    A100   1741 _RX_CMN_0	=	0xa100
                    A110   1742 _DFE_STATIC_REG0	=	0xa110
                    A114   1743 _DFE_STATIC_REG1	=	0xa114
                    A118   1744 _DFE_STATIC_REG3	=	0xa118
                    A11C   1745 _DFE_STATIC_REG4	=	0xa11c
                    A120   1746 _DFE_STATIC_REG5	=	0xa120
                    A124   1747 _DFE_STATIC_REG6	=	0xa124
                    4200   1748 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1749 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1750 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1751 _GLOB_MISC_CTRL	=	0x420c
                    4210   1752 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1753 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1754 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1755 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1756 _GLOB_PM_CFG0	=	0x4220
                    4224   1757 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1758 _GLOB_COUNTER_HI	=	0x4228
                    422C   1759 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1760 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1761 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1762 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1763 _GLOB_BIST_CTRL	=	0x423c
                    4240   1764 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1765 _GLOB_BIST_START	=	0x4244
                    4248   1766 _GLOB_BIST_MASK	=	0x4248
                    424C   1767 _GLOB_BIST_RESULT	=	0x424c
                    4250   1768 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1769 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1770 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1771 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1772 _MCU_CONTROL_0	=	0xa200
                    A204   1773 _MCU_CONTROL_1	=	0xa204
                    A208   1774 _MCU_CONTROL_2	=	0xa208
                    A20C   1775 _MCU_CONTROL_3	=	0xa20c
                    A210   1776 _MCU_CONTROL_4	=	0xa210
                    A214   1777 _MCU_DEBUG0	=	0xa214
                    A218   1778 _MCU_DEBUG1	=	0xa218
                    A21C   1779 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1780 _MEMORY_CONTROL_1	=	0xa220
                    A224   1781 _MEMORY_CONTROL_2	=	0xa224
                    A228   1782 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1783 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1784 _MCU_INFO_0	=	0xa234
                    A238   1785 _MCU_INFO_1	=	0xa238
                    A23C   1786 _MCU_INFO_2	=	0xa23c
                    A240   1787 _MCU_INFO_3	=	0xa240
                    A244   1788 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1789 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1790 _MEM_IRQ	=	0xa2e4
                    A2E8   1791 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1792 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1793 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1794 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1795 _MCU_SYNC1	=	0xa2f8
                    A2FC   1796 _MCU_SYNC2	=	0xa2fc
                    A300   1797 _TEST0	=	0xa300
                    A304   1798 _TEST1	=	0xa304
                    A308   1799 _TEST2	=	0xa308
                    A30C   1800 _TEST3	=	0xa30c
                    A310   1801 _TEST4	=	0xa310
                    A314   1802 _SYSTEM	=	0xa314
                    A318   1803 _PM_CMN_REG1	=	0xa318
                    A31C   1804 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1805 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1806 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1807 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1808 _PLLCAL_REG0	=	0xa32c
                    A330   1809 _PLLCAL_REG1	=	0xa330
                    A334   1810 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1811 _SPD_CMN_REG1	=	0xa338
                    A33C   1812 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1813 _CMN_CALIBRATION	=	0xa340
                    A344   1814 __FIELDNAME_	=	0xa344
                    A348   1815 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1816 _PM_CMN_REG2	=	0xa34c
                    A354   1817 _TEST5	=	0xa354
                    A358   1818 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1819 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1820 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1821 _MCU_SDT_CMN	=	0xa364
                    A368   1822 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1823 _MCU_INT_ADDR	=	0xa36c
                    A370   1824 _CMN_ISR_2	=	0xa370
                    A374   1825 _CMN_ISR_MASK_2	=	0xa374
                    A378   1826 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1827 _CMN_MCU_GPIO	=	0xa37c
                    A380   1828 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1829 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1830 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1831 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1832 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1833 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1834 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1835 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1836 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1837 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1838 _CMN_ISR_1	=	0xa3a8
                    A3AC   1839 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1840 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1841 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1842 _CID_REG0	=	0xa3f8
                    A3FC   1843 _CID_REG1	=	0xa3fc
                    E600   1844 _FW_REV	=	0xe600
                    E604   1845 _CONTROL_CONFIG0	=	0xe604
                    E608   1846 _CONTROL_CONFIG1	=	0xe608
                    E60C   1847 _CONTROL_CONFIG2	=	0xe60c
                    E610   1848 _CONTROL_CONFIG3	=	0xe610
                    E614   1849 _CONTROL_CONFIG4	=	0xe614
                    E618   1850 _CONTROL_CONFIG5	=	0xe618
                    E61C   1851 _CONTROL_CONFIG6	=	0xe61c
                    E620   1852 _CONTROL_CONFIG7	=	0xe620
                    E624   1853 _CAL_DATA0	=	0xe624
                    E628   1854 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1855 _CONTROL_CONFIG8	=	0xe62c
                    E630   1856 _CONTROL_CONFIG9	=	0xe630
                    E634   1857 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1858 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1859 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1860 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1861 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1862 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1863 _CAL_STATUS_READ	=	0xe64c
                    E650   1864 _MCU_CONFIG	=	0xe650
                    E654   1865 _CAL_DATA1	=	0xe654
                    E658   1866 _LOOP_CNTS	=	0xe658
                    E65C   1867 _MCU_CONFIG1	=	0xe65c
                    E660   1868 _TIMER_SEL1	=	0xe660
                    E664   1869 _TIMER_SEL2	=	0xe664
                    E668   1870 _TIMER_SEL3	=	0xe668
                    E66C   1871 _G_SELLV_TXCLK	=	0xe66c
                    E670   1872 _G_SELLV_TXDATA	=	0xe670
                    E674   1873 _G_SELLV_TXPRE	=	0xe674
                    E678   1874 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1875 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1876 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1877 _SAS_PRESET0_TB	=	0xe684
                    E688   1878 _SAS_PRESET1_TB	=	0xe688
                    E68C   1879 _SAS_PRESET2_TB	=	0xe68c
                    E690   1880 _ETH_PRESET0_TB	=	0xe690
                    E694   1881 _ETH_PRESET1_TB	=	0xe694
                    E698   1882 _TX_SAVE_0	=	0xe698
                    E69C   1883 _TX_SAVE_1	=	0xe69c
                    E6A0   1884 _TX_SAVE_2	=	0xe6a0
                    E6A4   1885 _TX_SAVE_3	=	0xe6a4
                    E6A8   1886 _TX_SAVE_4	=	0xe6a8
                    E6AC   1887 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1888 _SYNC_INFO	=	0xe6b0
                    E6B4   1889 _MCU_INFO_4	=	0xe6b4
                    E6B8   1890 _MCU_INFO_5	=	0xe6b8
                    E6BC   1891 _MCU_INFO_12	=	0xe6bc
                    E6C0   1892 _MCU_INFO_13	=	0xe6c0
                    E6C4   1893 _END_XDAT_CMN	=	0xe6c4
                    2600   1894 _DME_ENC_REG0	=	0x2600
                    2604   1895 _DME_ENC_REG1	=	0x2604
                    2608   1896 _DME_ENC_REG2	=	0x2608
                    260C   1897 _DME_DEC_REG0	=	0x260c
                    2610   1898 _DME_DEC_REG1	=	0x2610
                    2614   1899 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1900 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1901 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1902 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1903 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1904 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1905 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1906 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1907 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1908 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1909 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1910 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1911 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1912 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1913 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1914 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1915 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1916 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1917 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1918 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1919 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1920 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1921 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1922 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1923 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1924 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1925 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1926 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1927 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1928 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1929 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1930 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1931 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1932 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1933 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1934 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1935 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1936 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1937 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1938 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1939 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1940 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1941 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1942 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1943 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1944 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1945 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1946 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1947 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1948 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1949 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1950 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1951 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1952 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1953 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1954 _CDS_READ_MISC0	=	0x6170
                    6174   1955 _CDS_READ_MISC1	=	0x6174
                    6214   1956 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1957 _lc_speedtable	=	0xe000
                    E1C0   1958 _ring_speedtable	=	0xe1c0
                    E5C0   1959 _phy_mode_cmn_table	=	0xe5c0
                    6300   1960 _max_gen	=	0x6300
                    6301   1961 _min_gen	=	0x6301
                    6304   1962 _speedtable	=	0x6304
                    65D4   1963 _phy_mode_lane_table	=	0x65d4
                    60B4   1964 _rc_save	=	0x60b4
                    60D0   1965 _txffe_save	=	0x60d0
                    60E4   1966 _phase_save	=	0x60e4
                    6030   1967 _train_gn1_index	=	0x6030
                    6031   1968 _train_g1_index	=	0x6031
                    6032   1969 _train_g0_index	=	0x6032
                    E6B0   1970 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1971 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1972 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1973 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1974 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1975 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1976 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1977 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1978 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1979 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1980 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1981 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1982 _lnx_cal_txdcc	=	0x65da
                    65DE   1983 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1984 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1985 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1986 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1987 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1988 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1989 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1990 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1991 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1992 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1993 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1994 _lnx_cal_eom_dpher	=	0x6610
                    6612   1995 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1996 _lnx_cal_align90_dac	=	0x661a
                    6622   1997 _lnx_cal_align90_gm	=	0x6622
                    662A   1998 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1999 _lnx_cal_sellv_txclk	=	0x6634
                    663E   2000 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   2001 _lnx_cal_sellv_txpre	=	0x6648
                    6652   2002 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   2003 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   2004 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   2005 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   2006 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   2007 _lnx_calx_txdcc	=	0x6499
                    649F   2008 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   2009 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   2010 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   2011 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2012 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2013 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2014 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2015 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2016 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2017 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2018 _lnx_calx_align90_gm	=	0x64d8
                    6100   2019 _cds28	=	0x6100
                    6178   2020 _dfe_sm	=	0x6178
                    61B8   2021 _dfe_sm_dc	=	0x61b8
                    61C0   2022 _dfe_sm_save	=	0x61c0
                    03FC   2023 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2024 _tx_tb	=	0xe684
                    E698   2025 _train_save_tb	=	0xe698
                    607C   2026 _sq_thrs_ratio_tb	=	0x607c
                           2027 ;--------------------------------------------------------
                           2028 ; absolute external ram data
                           2029 ;--------------------------------------------------------
                           2030 	.area XABS    (ABS,XDATA)
                           2031 ;--------------------------------------------------------
                           2032 ; external initialized ram data
                           2033 ;--------------------------------------------------------
                           2034 	.area HOME    (CODE)
                           2035 	.area GSINIT0 (CODE)
                           2036 	.area GSINIT1 (CODE)
                           2037 	.area GSINIT2 (CODE)
                           2038 	.area GSINIT3 (CODE)
                           2039 	.area GSINIT4 (CODE)
                           2040 	.area GSINIT5 (CODE)
                           2041 	.area GSINIT  (CODE)
                           2042 	.area GSFINAL (CODE)
                           2043 	.area CSEG    (CODE)
                           2044 ;--------------------------------------------------------
                           2045 ; global & static initialisations
                           2046 ;--------------------------------------------------------
                           2047 	.area HOME    (CODE)
                           2048 	.area GSINIT  (CODE)
                           2049 	.area GSFINAL (CODE)
                           2050 	.area GSINIT  (CODE)
                           2051 ;--------------------------------------------------------
                           2052 ; Home
                           2053 ;--------------------------------------------------------
                           2054 	.area HOME    (CODE)
                           2055 	.area HOME    (CODE)
                           2056 ;--------------------------------------------------------
                           2057 ; code
                           2058 ;--------------------------------------------------------
                           2059 	.area BANK2   (CODE)
                           2060 ;------------------------------------------------------------
                           2061 ;Allocation info for local variables in function 'delay01'
                           2062 ;------------------------------------------------------------
                           2063 ;t                         Allocated to registers r2 r3 
                           2064 ;a                         Allocated to registers r2 r3 
                           2065 ;i                         Allocated to registers r4 r5 
                           2066 ;------------------------------------------------------------
                           2067 ;	../../shared/src/misc_rom.c:25: void delay01(int16_t t) BANKING_CTRL{
                           2068 ;	-----------------------------------------
                           2069 ;	 function delay01
                           2070 ;	-----------------------------------------
   BC16                    2071 _delay01:
                    0002   2072 	ar2 = 0x02
                    0003   2073 	ar3 = 0x03
                    0004   2074 	ar4 = 0x04
                    0005   2075 	ar5 = 0x05
                    0006   2076 	ar6 = 0x06
                    0007   2077 	ar7 = 0x07
                    0000   2078 	ar0 = 0x00
                    0001   2079 	ar1 = 0x01
   BC16 AA 82              2080 	mov	r2,dpl
   BC18 AB 83              2081 	mov	r3,dph
                           2082 ;	../../shared/src/misc_rom.c:29: if (t < 3) {
   BC1A C3                 2083 	clr	c
   BC1B EA                 2084 	mov	a,r2
   BC1C 94 03              2085 	subb	a,#0x03
   BC1E EB                 2086 	mov	a,r3
   BC1F 64 80              2087 	xrl	a,#0x80
   BC21 94 80              2088 	subb	a,#0x80
   BC23 50 03              2089 	jnc	00104$
                           2090 ;	../../shared/src/misc_rom.c:31: return;
   BC25 02 BD 30           2091 	ljmp	00126$
   BC28                    2092 00104$:
                           2093 ;	../../shared/src/misc_rom.c:32: } else if (t < 11) {
   BC28 C3                 2094 	clr	c
   BC29 EA                 2095 	mov	a,r2
   BC2A 94 0B              2096 	subb	a,#0x0B
   BC2C EB                 2097 	mov	a,r3
   BC2D 64 80              2098 	xrl	a,#0x80
   BC2F 94 80              2099 	subb	a,#0x80
   BC31 40 03              2100 	jc	00142$
   BC33 02 BC 71           2101 	ljmp	00105$
   BC36                    2102 00142$:
                           2103 ;	../../shared/src/misc_rom.c:33: for (i = 3; i < t; i++) {
   BC36 7C 03              2104 	mov	r4,#0x03
   BC38 7D 00              2105 	mov	r5,#0x00
   BC3A                    2106 00122$:
   BC3A C3                 2107 	clr	c
   BC3B EC                 2108 	mov	a,r4
   BC3C 9A                 2109 	subb	a,r2
   BC3D ED                 2110 	mov	a,r5
   BC3E 64 80              2111 	xrl	a,#0x80
   BC40 8B F0              2112 	mov	b,r3
   BC42 63 F0 80           2113 	xrl	b,#0x80
   BC45 95 F0              2114 	subb	a,b
   BC47 40 03              2115 	jc	00143$
   BC49 02 BC 6E           2116 	ljmp	00125$
   BC4C                    2117 00143$:
                           2118 ;	../../shared/src/misc_rom.c:61: __endasm;
                           2119 	
   BC4C 00                 2120 	    nop
   BC4D 00                 2121 	    nop
   BC4E 00                 2122 	    nop
   BC4F 00                 2123 	    nop
   BC50 00                 2124 	    nop
   BC51 00                 2125 	    nop
   BC52 00                 2126 	    nop
   BC53 00                 2127 	    nop
   BC54 00                 2128 	    nop
   BC55 00                 2129 	    nop
   BC56 00                 2130 	    nop
   BC57 00                 2131 	    nop
   BC58 00                 2132 	    nop
   BC59 00                 2133 	    nop
   BC5A 00                 2134 	    nop
   BC5B 00                 2135 	    nop
   BC5C 00                 2136 	    nop
   BC5D 00                 2137 	    nop
   BC5E 00                 2138 	    nop
   BC5F 00                 2139 	    nop
   BC60 00                 2140 	    nop
   BC61 00                 2141 	    nop
   BC62 00                 2142 	    nop
   BC63 00                 2143 	    nop
   BC64 00                 2144 	    nop
   BC65 00                 2145 	    nop
                           2146 	   
                           2147 ;	../../shared/src/misc_rom.c:33: for (i = 3; i < t; i++) {
   BC66 0C                 2148 	inc	r4
   BC67 BC 00 D0           2149 	cjne	r4,#0x00,00122$
   BC6A 0D                 2150 	inc	r5
   BC6B 02 BC 3A           2151 	ljmp	00122$
   BC6E                    2152 00125$:
                           2153 ;	../../shared/src/misc_rom.c:63: return;
   BC6E 02 BD 30           2154 	ljmp	00126$
   BC71                    2155 00105$:
                           2156 ;	../../shared/src/misc_rom.c:65: a = u16mul(mcuclk_mc, t); //elapse time 675nSec
   BC71 90 66 19           2157 	mov	dptr,#_mcuclk_mc
   BC74 E0                 2158 	movx	a,@dptr
   BC75 FC                 2159 	mov	r4,a
   BC76 7D 00              2160 	mov	r5,#0x00
   BC78 C0 02              2161 	push	ar2
   BC7A C0 03              2162 	push	ar3
   BC7C 8C 82              2163 	mov	dpl,r4
   BC7E 8D 83              2164 	mov	dph,r5
   BC80 78 8D              2165 	mov	r0,#_u16mul
   BC82 79 BF              2166 	mov	r1,#(_u16mul >> 8)
   BC84 7A 02              2167 	mov	r2,#(_u16mul >> 16)
   BC86 12 00 B3           2168 	lcall	__sdcc_banked_call
   BC89 AA 82              2169 	mov	r2,dpl
   BC8B AB 83              2170 	mov	r3,dph
   BC8D 15 81              2171 	dec	sp
   BC8F 15 81              2172 	dec	sp
                           2173 ;	../../shared/src/misc_rom.c:66: a += 4; a >>= 3; // divide by 8
   BC91 74 04              2174 	mov	a,#0x04
   BC93 2A                 2175 	add	a,r2
   BC94 FA                 2176 	mov	r2,a
   BC95 E4                 2177 	clr	a
   BC96 3B                 2178 	addc	a,r3
   BC97 FB                 2179 	mov	r3,a
   BC98 C4                 2180 	swap	a
   BC99 23                 2181 	rl	a
   BC9A CA                 2182 	xch	a,r2
   BC9B C4                 2183 	swap	a
   BC9C 23                 2184 	rl	a
   BC9D 54 1F              2185 	anl	a,#0x1f
   BC9F 6A                 2186 	xrl	a,r2
   BCA0 CA                 2187 	xch	a,r2
   BCA1 54 1F              2188 	anl	a,#0x1f
   BCA3 CA                 2189 	xch	a,r2
   BCA4 6A                 2190 	xrl	a,r2
   BCA5 CA                 2191 	xch	a,r2
   BCA6 30 E4 02           2192 	jnb	acc.4,00144$
   BCA9 44 E0              2193 	orl	a,#0xe0
   BCAB                    2194 00144$:
   BCAB FB                 2195 	mov	r3,a
                           2196 ;	../../shared/src/misc_rom.c:67: if (a <= 25) return;
   BCAC C3                 2197 	clr	c
   BCAD 74 19              2198 	mov	a,#0x19
   BCAF 9A                 2199 	subb	a,r2
   BCB0 74 80              2200 	mov	a,#(0x00 ^ 0x80)
   BCB2 8B F0              2201 	mov	b,r3
   BCB4 63 F0 80           2202 	xrl	b,#0x80
   BCB7 95 F0              2203 	subb	a,b
   BCB9 40 02              2204 	jc	00107$
   BCBB 80 73              2205 	sjmp	00126$
   BCBD                    2206 00107$:
                           2207 ;	../../shared/src/misc_rom.c:68: a = -a;
   BCBD C3                 2208 	clr	c
   BCBE E4                 2209 	clr	a
   BCBF 9A                 2210 	subb	a,r2
   BCC0 FA                 2211 	mov	r2,a
   BCC1 E4                 2212 	clr	a
   BCC2 9B                 2213 	subb	a,r3
   BCC3 FB                 2214 	mov	r3,a
                           2215 ;	../../shared/src/misc_rom.c:70: if (BYPASS_DELAY == 0) {
   BCC4 90 E6 06           2216 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BCC7 E0                 2217 	movx	a,@dptr
   BCC8 54 1C              2218 	anl	a,#0x1c
   BCCA 70 14              2219 	jnz	00120$
                           2220 ;	../../shared/src/misc_rom.c:71: TMR0 = a + 25;  //a+compensation
   BCCC 74 19              2221 	mov	a,#0x19
   BCCE 2A                 2222 	add	a,r2
   BCCF F5 8A              2223 	mov	_TMR0,a
   BCD1 E4                 2224 	clr	a
   BCD2 3B                 2225 	addc	a,r3
   BCD3 F5 8C              2226 	mov	(_TMR0 >> 8),a
                           2227 ;	../../shared/src/misc_rom.c:74: TR0 = 1;
   BCD5 D2 8C              2228 	setb	_TR0
                           2229 ;	../../shared/src/misc_rom.c:77: while (TF0 != 1) {};
   BCD7                    2230 00108$:
   BCD7 30 8D FD           2231 	jnb	_TF0,00108$
                           2232 ;	../../shared/src/misc_rom.c:80: TR0 = 0;
   BCDA C2 8C              2233 	clr	_TR0
                           2234 ;	../../shared/src/misc_rom.c:81: TF0 = 0;
   BCDC C2 8D              2235 	clr	_TF0
   BCDE 80 50              2236 	sjmp	00126$
   BCE0                    2237 00120$:
                           2238 ;	../../shared/src/misc_rom.c:83: if(( PHY_STATUS == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
   BCE0 90 22 30           2239 	mov	dptr,#_MCU_STATUS0_LANE
   BCE3 E0                 2240 	movx	a,@dptr
   BCE4 FC                 2241 	mov	r4,a
   BCE5 BC 02 07           2242 	cjne	r4,#0x02,00118$
   BCE8 90 E6 06           2243 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BCEB E0                 2244 	movx	a,@dptr
   BCEC 20 E5 41           2245 	jb	acc.5,00126$
   BCEF                    2246 00118$:
                           2247 ;	../../shared/src/misc_rom.c:84: ( BYPASS_DELAY>=4 )) {
   BCEF 90 E6 06           2248 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BCF2 E0                 2249 	movx	a,@dptr
   BCF3 03                 2250 	rr	a
   BCF4 03                 2251 	rr	a
   BCF5 54 07              2252 	anl	a,#0x07
   BCF7 FC                 2253 	mov	r4,a
   BCF8 C3                 2254 	clr	c
   BCF9 64 80              2255 	xrl	a,#0x80
   BCFB 94 84              2256 	subb	a,#0x84
   BCFD 50 31              2257 	jnc	00126$
                           2258 ;	../../shared/src/misc_rom.c:87: a >>= BYPASS_DELAY;
   BCFF 90 E6 06           2259 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BD02 E0                 2260 	movx	a,@dptr
   BD03 03                 2261 	rr	a
   BD04 03                 2262 	rr	a
   BD05 54 07              2263 	anl	a,#0x07
   BD07 FC                 2264 	mov	r4,a
   BD08 8C F0              2265 	mov	b,r4
   BD0A 05 F0              2266 	inc	b
   BD0C 85 02 8A           2267 	mov	_TMR0,ar2
   BD0F 85 03 8C           2268 	mov	(_TMR0 >> 8),ar3
   BD12 EB                 2269 	mov	a,r3
   BD13 33                 2270 	rlc	a
   BD14 92 D2              2271 	mov	ov,c
   BD16 80 0C              2272 	sjmp	00153$
   BD18                    2273 00152$:
   BD18 A2 D2              2274 	mov	c,ov
   BD1A E5 8C              2275 	mov	a,(_TMR0 >> 8)
   BD1C 13                 2276 	rrc	a
   BD1D F5 8C              2277 	mov	(_TMR0 >> 8),a
   BD1F E5 8A              2278 	mov	a,_TMR0
   BD21 13                 2279 	rrc	a
   BD22 F5 8A              2280 	mov	_TMR0,a
   BD24                    2281 00153$:
   BD24 D5 F0 F1           2282 	djnz	b,00152$
                           2283 ;	../../shared/src/misc_rom.c:89: TR0 = 1;
   BD27 D2 8C              2284 	setb	_TR0
                           2285 ;	../../shared/src/misc_rom.c:90: while (TF0 != 1) {};
   BD29                    2286 00111$:
   BD29 30 8D FD           2287 	jnb	_TF0,00111$
                           2288 ;	../../shared/src/misc_rom.c:91: TR0 = 0;
   BD2C C2 8C              2289 	clr	_TR0
                           2290 ;	../../shared/src/misc_rom.c:92: TF0 = 0;
   BD2E C2 8D              2291 	clr	_TF0
   BD30                    2292 00126$:
   BD30 02 00 C5           2293 	ljmp	__sdcc_banked_ret
                           2294 ;------------------------------------------------------------
                           2295 ;Allocation info for local variables in function 'sign_abs_up'
                           2296 ;------------------------------------------------------------
                           2297 ;dcc_cnt                   Allocated to registers r2 
                           2298 ;result                    Allocated to registers r3 
                           2299 ;------------------------------------------------------------
                           2300 ;	../../shared/src/misc_rom.c:133: uint8_t sign_abs_up(uint8_t dcc_cnt) BANKING_CTRL {
                           2301 ;	-----------------------------------------
                           2302 ;	 function sign_abs_up
                           2303 ;	-----------------------------------------
   BD33                    2304 _sign_abs_up:
   BD33 AA 82              2305 	mov	r2,dpl
                           2306 ;	../../shared/src/misc_rom.c:136: if (dcc_cnt == 63) {  //sign = 1, abs = 1_1111
   BD35 BA 3F 04           2307 	cjne	r2,#0x3F,00108$
                           2308 ;	../../shared/src/misc_rom.c:137: result = 63;
   BD38 7B 3F              2309 	mov	r3,#0x3F
   BD3A 80 14              2310 	sjmp	00109$
   BD3C                    2311 00108$:
                           2312 ;	../../shared/src/misc_rom.c:139: else if (dcc_cnt == 0) { //sign = 0, abs = 0_0000
   BD3C EA                 2313 	mov	a,r2
   BD3D 70 04              2314 	jnz	00105$
                           2315 ;	../../shared/src/misc_rom.c:140: result = 32;       //sign = 1, abs = 0_0000
   BD3F 7B 20              2316 	mov	r3,#0x20
   BD41 80 0D              2317 	sjmp	00109$
   BD43                    2318 00105$:
                           2319 ;	../../shared/src/misc_rom.c:142: else if (dcc_cnt >= 32) { //sign = 1, abs >= 0_0000
   BD43 BA 20 00           2320 	cjne	r2,#0x20,00118$
   BD46                    2321 00118$:
   BD46 40 05              2322 	jc	00102$
                           2323 ;	../../shared/src/misc_rom.c:143: result = dcc_cnt + 1;
   BD48 EA                 2324 	mov	a,r2
   BD49 04                 2325 	inc	a
   BD4A FB                 2326 	mov	r3,a
   BD4B 80 03              2327 	sjmp	00109$
   BD4D                    2328 00102$:
                           2329 ;	../../shared/src/misc_rom.c:146: result = dcc_cnt - 1;
   BD4D EA                 2330 	mov	a,r2
   BD4E 14                 2331 	dec	a
   BD4F FB                 2332 	mov	r3,a
   BD50                    2333 00109$:
                           2334 ;	../../shared/src/misc_rom.c:149: return result;
   BD50 8B 82              2335 	mov	dpl,r3
   BD52 02 00 C5           2336 	ljmp	__sdcc_banked_ret
                           2337 ;------------------------------------------------------------
                           2338 ;Allocation info for local variables in function 'sign_abs_dn'
                           2339 ;------------------------------------------------------------
                           2340 ;dcc_cnt                   Allocated to registers r2 
                           2341 ;result                    Allocated to registers r3 
                           2342 ;------------------------------------------------------------
                           2343 ;	../../shared/src/misc_rom.c:152: uint8_t sign_abs_dn(uint8_t dcc_cnt) BANKING_CTRL {
                           2344 ;	-----------------------------------------
                           2345 ;	 function sign_abs_dn
                           2346 ;	-----------------------------------------
   BD55                    2347 _sign_abs_dn:
   BD55 AA 82              2348 	mov	r2,dpl
                           2349 ;	../../shared/src/misc_rom.c:155: if (dcc_cnt == 31) {  //sign = 0, abs = 1_1111
   BD57 BA 1F 04           2350 	cjne	r2,#0x1F,00108$
                           2351 ;	../../shared/src/misc_rom.c:156: result = 31;
   BD5A 7B 1F              2352 	mov	r3,#0x1F
   BD5C 80 16              2353 	sjmp	00109$
   BD5E                    2354 00108$:
                           2355 ;	../../shared/src/misc_rom.c:158: else if (dcc_cnt == 32) { //sign = 1, abs = 0_0000
   BD5E BA 20 04           2356 	cjne	r2,#0x20,00105$
                           2357 ;	../../shared/src/misc_rom.c:159: result = 0;       //sign = 0, abs = 0_0000
   BD61 7B 00              2358 	mov	r3,#0x00
   BD63 80 0F              2359 	sjmp	00109$
   BD65                    2360 00105$:
                           2361 ;	../../shared/src/misc_rom.c:161: else if (dcc_cnt > 32) { //sign = 1, abs > 0_0000
   BD65 74 20              2362 	mov	a,#0x20
   BD67 B5 02 00           2363 	cjne	a,ar2,00119$
   BD6A                    2364 00119$:
   BD6A 50 05              2365 	jnc	00102$
                           2366 ;	../../shared/src/misc_rom.c:162: result = dcc_cnt - 1;
   BD6C EA                 2367 	mov	a,r2
   BD6D 14                 2368 	dec	a
   BD6E FB                 2369 	mov	r3,a
   BD6F 80 03              2370 	sjmp	00109$
   BD71                    2371 00102$:
                           2372 ;	../../shared/src/misc_rom.c:165: result = dcc_cnt + 1;
   BD71 EA                 2373 	mov	a,r2
   BD72 04                 2374 	inc	a
   BD73 FB                 2375 	mov	r3,a
   BD74                    2376 00109$:
                           2377 ;	../../shared/src/misc_rom.c:168: return result;
   BD74 8B 82              2378 	mov	dpl,r3
   BD76 02 00 C5           2379 	ljmp	__sdcc_banked_ret
                           2380 ;------------------------------------------------------------
                           2381 ;Allocation info for local variables in function 'is_num_toggle_pat'
                           2382 ;------------------------------------------------------------
                           2383 ;output_cnt                Allocated to stack - offset -4
                           2384 ;target_toggles            Allocated to stack - offset -5
                           2385 ;val                       Allocated to registers r2 
                           2386 ;toggle_cnt                Allocated to registers r4 
                           2387 ;prev_state                Allocated to registers b0 
                           2388 ;new_state                 Allocated to registers b1 
                           2389 ;mask                      Allocated to registers r3 
                           2390 ;------------------------------------------------------------
                           2391 ;	../../shared/src/misc_rom.c:195: BIT is_num_toggle_pat( uint8_t val, uint8_t output_cnt, uint8_t target_toggles  ) BANKING_CTRL {
                           2392 ;	-----------------------------------------
                           2393 ;	 function is_num_toggle_pat
                           2394 ;	-----------------------------------------
   BD79                    2395 _is_num_toggle_pat:
   BD79 C0 18              2396 	push	_bp
   BD7B 85 81 18           2397 	mov	_bp,sp
                           2398 ;	../../shared/src/misc_rom.c:197: BIT prev_state = ( val & 0x01 );	// [0] state
   BD7E E5 82              2399 	mov	a,dpl
   BD80 FA                 2400 	mov	r2,a
   BD81 13                 2401 	rrc	a
   BD82 92 28              2402 	mov	b0,c
                           2403 ;	../../shared/src/misc_rom.c:198: BIT new_state = ( val & 0x02 );		// [1] state
   BD84 EA                 2404 	mov	a,r2
   BD85 A2 E1              2405 	mov	c,acc[1]
   BD87 92 29              2406 	mov	b1,c
                           2407 ;	../../shared/src/misc_rom.c:199: uint8_t mask = 0x02;	// Current bit mask
   BD89 7B 02              2408 	mov	r3,#0x02
                           2409 ;	../../shared/src/misc_rom.c:201: while ( mask < 0x40 && output_cnt > 1 ) {
   BD8B 7C 00              2410 	mov	r4,#0x00
   BD8D E5 18              2411 	mov	a,_bp
   BD8F 24 FC              2412 	add	a,#0xfc
   BD91 F8                 2413 	mov	r0,a
   BD92 86 05              2414 	mov	ar5,@r0
   BD94                    2415 00104$:
   BD94 BB 40 00           2416 	cjne	r3,#0x40,00114$
   BD97                    2417 00114$:
   BD97 50 24              2418 	jnc	00106$
   BD99 74 01              2419 	mov	a,#0x01
   BD9B B5 05 00           2420 	cjne	a,ar5,00116$
   BD9E                    2421 00116$:
   BD9E 50 1D              2422 	jnc	00106$
                           2423 ;	../../shared/src/misc_rom.c:202: if ( new_state != prev_state ) {
   BDA0 A2 29              2424 	mov	c,b1
   BDA2 20 28 01           2425 	jb	b0,00118$
   BDA5 B3                 2426 	cpl	c
   BDA6                    2427 00118$:
   BDA6 40 05              2428 	jc	00102$
                           2429 ;	../../shared/src/misc_rom.c:203: ++toggle_cnt;
   BDA8 0C                 2430 	inc	r4
                           2431 ;	../../shared/src/misc_rom.c:204: prev_state = new_state;
   BDA9 A2 29              2432 	mov	c,b1
   BDAB 92 28              2433 	mov	b0,c
   BDAD                    2434 00102$:
                           2435 ;	../../shared/src/misc_rom.c:206: mask <<= 1;
   BDAD EB                 2436 	mov	a,r3
   BDAE 2B                 2437 	add	a,r3
   BDAF FB                 2438 	mov	r3,a
                           2439 ;	../../shared/src/misc_rom.c:207: --output_cnt;
   BDB0 1D                 2440 	dec	r5
                           2441 ;	../../shared/src/misc_rom.c:208: new_state = val & mask;
   BDB1 D3                 2442 	setb	c
   BDB2 EB                 2443 	mov	a,r3
   BDB3 5A                 2444 	anl	a,r2
   BDB4 70 01              2445 	jnz	00120$
   BDB6 C3                 2446 	clr	c
   BDB7                    2447 00120$:
   BDB7 92 2A              2448 	mov  b2,c
   BDB9 92 29              2449 	mov	b1,c
   BDBB 80 D7              2450 	sjmp	00104$
   BDBD                    2451 00106$:
                           2452 ;	../../shared/src/misc_rom.c:210: return toggle_cnt >= target_toggles;
   BDBD E5 18              2453 	mov	a,_bp
   BDBF 24 FB              2454 	add	a,#0xfb
   BDC1 F8                 2455 	mov	r0,a
   BDC2 C3                 2456 	clr	c
   BDC3 EC                 2457 	mov	a,r4
   BDC4 96                 2458 	subb	a,@r0
   BDC5 92 28              2459 	mov  b0,c
   BDC7 B3                 2460 	cpl	c
   BDC8 D0 18              2461 	pop	_bp
   BDCA 02 00 C5           2462 	ljmp	__sdcc_banked_ret
                           2463 ;------------------------------------------------------------
                           2464 ;Allocation info for local variables in function 'is_toggle_pat'
                           2465 ;------------------------------------------------------------
                           2466 ;output_cnt                Allocated to stack - offset -4
                           2467 ;val                       Allocated to registers r2 
                           2468 ;------------------------------------------------------------
                           2469 ;	../../shared/src/misc_rom.c:213: BIT is_toggle_pat( uint8_t val, uint8_t output_cnt  ) BANKING_CTRL {
                           2470 ;	-----------------------------------------
                           2471 ;	 function is_toggle_pat
                           2472 ;	-----------------------------------------
   BDCD                    2473 _is_toggle_pat:
   BDCD C0 18              2474 	push	_bp
   BDCF 85 81 18           2475 	mov	_bp,sp
   BDD2 AA 82              2476 	mov	r2,dpl
                           2477 ;	../../shared/src/misc_rom.c:214: return is_num_toggle_pat( val, output_cnt, 3 );
   BDD4 74 03              2478 	mov	a,#0x03
   BDD6 C0 E0              2479 	push	acc
   BDD8 E5 18              2480 	mov	a,_bp
   BDDA 24 FC              2481 	add	a,#0xfc
   BDDC F8                 2482 	mov	r0,a
   BDDD E6                 2483 	mov	a,@r0
   BDDE C0 E0              2484 	push	acc
   BDE0 8A 82              2485 	mov	dpl,r2
   BDE2 78 79              2486 	mov	r0,#_is_num_toggle_pat
   BDE4 79 BD              2487 	mov	r1,#(_is_num_toggle_pat >> 8)
   BDE6 7A 02              2488 	mov	r2,#(_is_num_toggle_pat >> 16)
   BDE8 12 00 B3           2489 	lcall	__sdcc_banked_call
   BDEB 15 81              2490 	dec	sp
   BDED 15 81              2491 	dec	sp
   BDEF D0 18              2492 	pop	_bp
   BDF1 02 00 C5           2493 	ljmp	__sdcc_banked_ret
                           2494 ;------------------------------------------------------------
                           2495 ;Allocation info for local variables in function 'set_test_pattern'
                           2496 ;------------------------------------------------------------
                           2497 ;pt_4t_en                  Allocated to registers r2 
                           2498 ;------------------------------------------------------------
                           2499 ;	../../shared/src/misc_rom.c:217: void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL {
                           2500 ;	-----------------------------------------
                           2501 ;	 function set_test_pattern
                           2502 ;	-----------------------------------------
   BDF4                    2503 _set_test_pattern:
   BDF4 AA 82              2504 	mov	r2,dpl
                           2505 ;	../../shared/src/misc_rom.c:218: save_local_ana_tx2rx_lpbk_en_lane  =  reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE;
   BDF6 90 02 44           2506 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   BDF9 E0                 2507 	movx	a,@dptr
   BDFA 23                 2508 	rl	a
   BDFB 23                 2509 	rl	a
   BDFC 54 01              2510 	anl	a,#0x01
   BDFE 90 66 04           2511 	mov	dptr,#_save_local_ana_tx2rx_lpbk_en_lane
   BE01 F0                 2512 	movx	@dptr,a
                           2513 ;	../../shared/src/misc_rom.c:219: save_pt_tx_pattern_sel_lane_5_0_b0 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b0;
   BE02 90 23 02           2514 	mov	dptr,#(_PT_CONTROL0 + 0x0002)
   BE05 E0                 2515 	movx	a,@dptr
   BE06 23                 2516 	rl	a
   BE07 23                 2517 	rl	a
   BE08 54 03              2518 	anl	a,#0x03
   BE0A 90 66 00           2519 	mov	dptr,#_save_pt_tx_pattern_sel_lane_5_0_b0
   BE0D F0                 2520 	movx	@dptr,a
                           2521 ;	../../shared/src/misc_rom.c:220: save_pt_tx_pattern_sel_lane_5_0_b1 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b1;
   BE0E 90 23 03           2522 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE11 E0                 2523 	movx	a,@dptr
   BE12 54 0F              2524 	anl	a,#0x0f
   BE14 90 66 01           2525 	mov	dptr,#_save_pt_tx_pattern_sel_lane_5_0_b1
   BE17 F0                 2526 	movx	@dptr,a
                           2527 ;	../../shared/src/misc_rom.c:221: save_pt_en_lane 				   =  reg_PT_EN_LANE;
   BE18 90 23 03           2528 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE1B E0                 2529 	movx	a,@dptr
   BE1C 23                 2530 	rl	a
   BE1D 54 01              2531 	anl	a,#0x01
   BE1F 90 66 02           2532 	mov	dptr,#_save_pt_en_lane
   BE22 F0                 2533 	movx	@dptr,a
                           2534 ;	../../shared/src/misc_rom.c:222: save_pt_tx_clk_en_lane             =  reg_PT_TX_CLK_EN_LANE;
   BE23 90 20 22           2535 	mov	dptr,#(_CLKGEN_TX_LANE_REG1_LANE + 0x0002)
   BE26 E0                 2536 	movx	a,@dptr
   BE27 23                 2537 	rl	a
   BE28 23                 2538 	rl	a
   BE29 54 01              2539 	anl	a,#0x01
   BE2B FB                 2540 	mov	r3,a
   BE2C 90 66 03           2541 	mov	dptr,#_save_pt_tx_clk_en_lane
   BE2F F0                 2542 	movx	@dptr,a
                           2543 ;	../../shared/src/misc_rom.c:224: reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = 1;
   BE30 90 02 44           2544 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   BE33 E0                 2545 	movx	a,@dptr
   BE34 44 40              2546 	orl	a,#0x40
   BE36 F0                 2547 	movx	@dptr,a
                           2548 ;	../../shared/src/misc_rom.c:225: if( pt_4t_en ) {
   BE37 EA                 2549 	mov	a,r2
   BE38 60 12              2550 	jz	00102$
                           2551 ;	../../shared/src/misc_rom.c:226: reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x03; // 4T pattern = 0x0b
   BE3A 90 23 02           2552 	mov	dptr,#(_PT_CONTROL0 + 0x0002)
   BE3D E0                 2553 	movx	a,@dptr
   BE3E 44 C0              2554 	orl	a,#0xc0
   BE40 F0                 2555 	movx	@dptr,a
                           2556 ;	../../shared/src/misc_rom.c:227: reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x02;
   BE41 90 23 03           2557 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE44 E0                 2558 	movx	a,@dptr
   BE45 54 F0              2559 	anl	a,#0xf0
   BE47 44 02              2560 	orl	a,#0x02
   BE49 F0                 2561 	movx	@dptr,a
   BE4A 80 10              2562 	sjmp	00103$
   BE4C                    2563 00102$:
                           2564 ;	../../shared/src/misc_rom.c:230: reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x00; //PRBS7:0x10
   BE4C 90 23 02           2565 	mov	dptr,#(_PT_CONTROL0 + 0x0002)
   BE4F E0                 2566 	movx	a,@dptr
   BE50 54 3F              2567 	anl	a,#0x3f
   BE52 F0                 2568 	movx	@dptr,a
                           2569 ;	../../shared/src/misc_rom.c:231: reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x04;
   BE53 90 23 03           2570 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE56 E0                 2571 	movx	a,@dptr
   BE57 54 F0              2572 	anl	a,#0xf0
   BE59 44 04              2573 	orl	a,#0x04
   BE5B F0                 2574 	movx	@dptr,a
   BE5C                    2575 00103$:
                           2576 ;	../../shared/src/misc_rom.c:234: reg_PT_EN_LANE = 1;
   BE5C 90 23 03           2577 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE5F E0                 2578 	movx	a,@dptr
   BE60 44 80              2579 	orl	a,#0x80
   BE62 F0                 2580 	movx	@dptr,a
                           2581 ;	../../shared/src/misc_rom.c:235: reg_PT_TX_CLK_EN_LANE = 1;
   BE63 90 20 22           2582 	mov	dptr,#(_CLKGEN_TX_LANE_REG1_LANE + 0x0002)
   BE66 E0                 2583 	movx	a,@dptr
   BE67 44 40              2584 	orl	a,#0x40
   BE69 F0                 2585 	movx	@dptr,a
   BE6A 02 00 C5           2586 	ljmp	__sdcc_banked_ret
                           2587 ;------------------------------------------------------------
                           2588 ;Allocation info for local variables in function 'recover_test_pattern'
                           2589 ;------------------------------------------------------------
                           2590 ;------------------------------------------------------------
                           2591 ;	../../shared/src/misc_rom.c:238: void recover_test_pattern(void) BANKING_CTRL {
                           2592 ;	-----------------------------------------
                           2593 ;	 function recover_test_pattern
                           2594 ;	-----------------------------------------
   BE6D                    2595 _recover_test_pattern:
                           2596 ;	../../shared/src/misc_rom.c:239: reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
   BE6D 90 66 00           2597 	mov	dptr,#_save_pt_tx_pattern_sel_lane_5_0_b0
   BE70 E0                 2598 	movx	a,@dptr
   BE71 90 23 02           2599 	mov	dptr,#(_PT_CONTROL0 + 0x0002)
   BE74 03                 2600 	rr	a
   BE75 03                 2601 	rr	a
   BE76 54 C0              2602 	anl	a,#(0xc0&0xc0)
   BE78 F5 F0              2603 	mov	b,a
   BE7A E0                 2604 	movx	a,@dptr
   BE7B 54 3F              2605 	anl	a,#0x3f
   BE7D 45 F0              2606 	orl	a,b
   BE7F F0                 2607 	movx	@dptr,a
                           2608 ;	../../shared/src/misc_rom.c:240: reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;
   BE80 90 66 01           2609 	mov	dptr,#_save_pt_tx_pattern_sel_lane_5_0_b1
   BE83 E0                 2610 	movx	a,@dptr
   BE84 90 23 03           2611 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE87 54 0F              2612 	anl	a,#0x0f
   BE89 F5 F0              2613 	mov	b,a
   BE8B E0                 2614 	movx	a,@dptr
   BE8C 54 F0              2615 	anl	a,#0xf0
   BE8E 45 F0              2616 	orl	a,b
   BE90 F0                 2617 	movx	@dptr,a
                           2618 ;	../../shared/src/misc_rom.c:241: reg_PT_EN_LANE                    = save_pt_en_lane;
   BE91 90 66 02           2619 	mov	dptr,#_save_pt_en_lane
   BE94 E0                 2620 	movx	a,@dptr
   BE95 90 23 03           2621 	mov	dptr,#(_PT_CONTROL0 + 0x0003)
   BE98 13                 2622 	rrc	a
   BE99 E0                 2623 	movx	a,@dptr
   BE9A 92 E7              2624 	mov	acc.7,c
   BE9C F0                 2625 	movx	@dptr,a
                           2626 ;	../../shared/src/misc_rom.c:242: reg_PT_TX_CLK_EN_LANE             = save_pt_tx_clk_en_lane;
   BE9D 90 66 03           2627 	mov	dptr,#_save_pt_tx_clk_en_lane
   BEA0 E0                 2628 	movx	a,@dptr
   BEA1 90 20 22           2629 	mov	dptr,#(_CLKGEN_TX_LANE_REG1_LANE + 0x0002)
   BEA4 13                 2630 	rrc	a
   BEA5 E0                 2631 	movx	a,@dptr
   BEA6 92 E6              2632 	mov	acc.6,c
   BEA8 F0                 2633 	movx	@dptr,a
                           2634 ;	../../shared/src/misc_rom.c:243: reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = save_local_ana_tx2rx_lpbk_en_lane;
   BEA9 90 66 04           2635 	mov	dptr,#_save_local_ana_tx2rx_lpbk_en_lane
   BEAC E0                 2636 	movx	a,@dptr
   BEAD FA                 2637 	mov	r2,a
   BEAE 90 02 44           2638 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   BEB1 13                 2639 	rrc	a
   BEB2 E0                 2640 	movx	a,@dptr
   BEB3 92 E6              2641 	mov	acc.6,c
   BEB5 F0                 2642 	movx	@dptr,a
   BEB6 02 00 C5           2643 	ljmp	__sdcc_banked_ret
                           2644 ;------------------------------------------------------------
                           2645 ;Allocation info for local variables in function 'read_tsen'
                           2646 ;------------------------------------------------------------
                           2647 ;dat                       Allocated to registers r2 r3 
                           2648 ;------------------------------------------------------------
                           2649 ;	../../shared/src/misc_rom.c:256: int16_t read_tsen(void) BANKING_CTRL {
                           2650 ;	-----------------------------------------
                           2651 ;	 function read_tsen
                           2652 ;	-----------------------------------------
   BEB9                    2653 _read_tsen:
                           2654 ;	../../shared/src/misc_rom.c:261: if(SIMENV_ON==0) {
   BEB9 90 E6 06           2655 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BEBC E0                 2656 	movx	a,@dptr
   BEBD 54 1C              2657 	anl	a,#0x1c
   BEBF 70 23              2658 	jnz	00105$
   BEC1 90 E6 06           2659 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BEC4 E0                 2660 	movx	a,@dptr
   BEC5 20 E5 1C           2661 	jb	acc.5,00105$
   BEC8 90 E6 06           2662 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BECB E0                 2663 	movx	a,@dptr
   BECC 20 E6 15           2664 	jb	acc.6,00105$
   BECF 90 E6 06           2665 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BED2 E0                 2666 	movx	a,@dptr
   BED3 20 E7 0E           2667 	jb	acc.7,00105$
   BED6 90 E6 06           2668 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   BED9 E0                 2669 	movx	a,@dptr
   BEDA 20 E1 07           2670 	jb	acc.1,00105$
                           2671 ;	../../shared/src/misc_rom.c:262: while(reg_TSEN_ADC_RDY==0);
   BEDD                    2672 00101$:
   BEDD 90 A3 29           2673 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   BEE0 E0                 2674 	movx	a,@dptr
   BEE1 30 E2 F9           2675 	jnb	acc.2,00101$
   BEE4                    2676 00105$:
                           2677 ;	../../shared/src/misc_rom.c:265: reg_TSEN_ADC_RD_REQ = 1;
   BEE4 90 A3 29           2678 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   BEE7 E0                 2679 	movx	a,@dptr
   BEE8 44 08              2680 	orl	a,#0x08
   BEEA F0                 2681 	movx	@dptr,a
                           2682 ;	../../shared/src/misc_rom.c:267: if( reg_TSEN_ADC_DATA_9_0_b1 & 0x02 ) {
   BEEB 90 A3 29           2683 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   BEEE E0                 2684 	movx	a,@dptr
   BEEF 54 03              2685 	anl	a,#0x03
   BEF1 FA                 2686 	mov	r2,a
   BEF2 30 E1 1A           2687 	jnb	acc.1,00107$
                           2688 ;	../../shared/src/misc_rom.c:268: dat = 0xfc00 | (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;
   BEF5 90 A3 29           2689 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   BEF8 E0                 2690 	movx	a,@dptr
   BEF9 54 03              2691 	anl	a,#0x03
   BEFB FB                 2692 	mov	r3,a
   BEFC 7A 00              2693 	mov	r2,#0x00
   BEFE 43 03 FC           2694 	orl	ar3,#0xFC
   BF01 90 A3 28           2695 	mov	dptr,#_ANA_TSEN_CONTROL
   BF04 E0                 2696 	movx	a,@dptr
   BF05 FC                 2697 	mov	r4,a
   BF06 7D 00              2698 	mov	r5,#0x00
   BF08 42 02              2699 	orl	ar2,a
   BF0A ED                 2700 	mov	a,r5
   BF0B 42 03              2701 	orl	ar3,a
   BF0D 80 19              2702 	sjmp	00108$
   BF0F                    2703 00107$:
                           2704 ;	../../shared/src/misc_rom.c:271: dat = (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;
   BF0F 90 A3 29           2705 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   BF12 E0                 2706 	movx	a,@dptr
   BF13 54 03              2707 	anl	a,#0x03
   BF15 FD                 2708 	mov	r5,a
   BF16 7C 00              2709 	mov	r4,#0x00
   BF18 90 A3 28           2710 	mov	dptr,#_ANA_TSEN_CONTROL
   BF1B E0                 2711 	movx	a,@dptr
   BF1C FE                 2712 	mov	r6,a
   BF1D 7F 00              2713 	mov	r7,#0x00
   BF1F 42 04              2714 	orl	ar4,a
   BF21 EF                 2715 	mov	a,r7
   BF22 42 05              2716 	orl	ar5,a
   BF24 8C 02              2717 	mov	ar2,r4
   BF26 8D 03              2718 	mov	ar3,r5
   BF28                    2719 00108$:
                           2720 ;	../../shared/src/misc_rom.c:274: if(dat==0&& reg_TSEN_ADC_RDY==0) dat = -234; //return 0xfef0; //2f0=18'
   BF28 EA                 2721 	mov	a,r2
   BF29 4B                 2722 	orl	a,r3
   BF2A 70 0B              2723 	jnz	00110$
   BF2C 90 A3 29           2724 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   BF2F E0                 2725 	movx	a,@dptr
   BF30 20 E2 04           2726 	jb	acc.2,00110$
   BF33 7A 16              2727 	mov	r2,#0x16
   BF35 7B FF              2728 	mov	r3,#0xFF
   BF37                    2729 00110$:
                           2730 ;	../../shared/src/misc_rom.c:282: return dat;
   BF37 8A 82              2731 	mov	dpl,r2
   BF39 8B 83              2732 	mov	dph,r3
   BF3B 02 00 C5           2733 	ljmp	__sdcc_banked_ret
                           2734 ;------------------------------------------------------------
                           2735 ;Allocation info for local variables in function 'u16div'
                           2736 ;------------------------------------------------------------
                           2737 ;y                         Allocated to stack - offset -5
                           2738 ;x                         Allocated to registers r2 r3 
                           2739 ;reste                     Allocated to registers r4 r5 
                           2740 ;count                     Allocated to registers r6 
                           2741 ;c                         Allocated to registers b0 
                           2742 ;------------------------------------------------------------
                           2743 ;	../../shared/src/misc_rom.c:285: uint16_t u16div(uint16_t x, uint16_t y) BANKING_CTRL
                           2744 ;	-----------------------------------------
                           2745 ;	 function u16div
                           2746 ;	-----------------------------------------
   BF3E                    2747 _u16div:
   BF3E C0 18              2748 	push	_bp
   BF40 85 81 18           2749 	mov	_bp,sp
   BF43 AA 82              2750 	mov	r2,dpl
   BF45 AB 83              2751 	mov	r3,dph
                           2752 ;	../../shared/src/misc_rom.c:287: uint16_t reste = 0;
   BF47 7C 00              2753 	mov	r4,#0x00
   BF49 7D 00              2754 	mov	r5,#0x00
                           2755 ;	../../shared/src/misc_rom.c:291: do
   BF4B 7E 10              2756 	mov	r6,#0x10
   BF4D                    2757 00105$:
                           2758 ;	../../shared/src/misc_rom.c:293: c = ( x >> 15 ) & 1;
   BF4D EB                 2759 	mov	a,r3
   BF4E 33                 2760 	rlc	a
   BF4F 92 28              2761 	mov	b0,c
                           2762 ;	../../shared/src/misc_rom.c:294: x <<= 1;
   BF51 EB                 2763 	mov	a,r3
   BF52 CA                 2764 	xch	a,r2
   BF53 25 E0              2765 	add	a,acc
   BF55 CA                 2766 	xch	a,r2
   BF56 33                 2767 	rlc	a
   BF57 FB                 2768 	mov	r3,a
                           2769 ;	../../shared/src/misc_rom.c:295: reste <<= 1;
   BF58 ED                 2770 	mov	a,r5
   BF59 CC                 2771 	xch	a,r4
   BF5A 25 E0              2772 	add	a,acc
   BF5C CC                 2773 	xch	a,r4
   BF5D 33                 2774 	rlc	a
   BF5E FD                 2775 	mov	r5,a
                           2776 ;	../../shared/src/misc_rom.c:296: if (c)
   BF5F 30 28 03           2777 	jnb	b0,00102$
                           2778 ;	../../shared/src/misc_rom.c:297: reste |= 1;
   BF62 43 04 01           2779 	orl	ar4,#0x01
   BF65                    2780 00102$:
                           2781 ;	../../shared/src/misc_rom.c:299: if (reste >= y)
   BF65 E5 18              2782 	mov	a,_bp
   BF67 24 FB              2783 	add	a,#0xfb
   BF69 F8                 2784 	mov	r0,a
   BF6A C3                 2785 	clr	c
   BF6B EC                 2786 	mov	a,r4
   BF6C 96                 2787 	subb	a,@r0
   BF6D ED                 2788 	mov	a,r5
   BF6E 08                 2789 	inc	r0
   BF6F 96                 2790 	subb	a,@r0
   BF70 40 10              2791 	jc	00106$
                           2792 ;	../../shared/src/misc_rom.c:301: reste -= y;
   BF72 E5 18              2793 	mov	a,_bp
   BF74 24 FB              2794 	add	a,#0xfb
   BF76 F8                 2795 	mov	r0,a
   BF77 EC                 2796 	mov	a,r4
   BF78 C3                 2797 	clr	c
   BF79 96                 2798 	subb	a,@r0
   BF7A FC                 2799 	mov	r4,a
   BF7B ED                 2800 	mov	a,r5
   BF7C 08                 2801 	inc	r0
   BF7D 96                 2802 	subb	a,@r0
   BF7E FD                 2803 	mov	r5,a
                           2804 ;	../../shared/src/misc_rom.c:303: x |= 1;
   BF7F 43 02 01           2805 	orl	ar2,#0x01
   BF82                    2806 00106$:
                           2807 ;	../../shared/src/misc_rom.c:306: while (--count);
   BF82 DE C9              2808 	djnz	r6,00105$
                           2809 ;	../../shared/src/misc_rom.c:307: return x;
   BF84 8A 82              2810 	mov	dpl,r2
   BF86 8B 83              2811 	mov	dph,r3
   BF88 D0 18              2812 	pop	_bp
   BF8A 02 00 C5           2813 	ljmp	__sdcc_banked_ret
                           2814 ;------------------------------------------------------------
                           2815 ;Allocation info for local variables in function 'u16mul'
                           2816 ;------------------------------------------------------------
                           2817 ;b                         Allocated to stack - offset -5
                           2818 ;a                         Allocated to registers r2 r3 
                           2819 ;x                         Allocated to stack - offset 1
                           2820 ;y                         Allocated to stack - offset 3
                           2821 ;t                         Allocated to stack - offset 5
                           2822 ;------------------------------------------------------------
                           2823 ;	../../shared/src/misc_rom.c:317: uint16_t u16mul (uint16_t a, uint16_t b) BANKING_CTRL
                           2824 ;	-----------------------------------------
                           2825 ;	 function u16mul
                           2826 ;	-----------------------------------------
   BF8D                    2827 _u16mul:
   BF8D C0 18              2828 	push	_bp
   BF8F E5 81              2829 	mov	a,sp
   BF91 F5 18              2830 	mov	_bp,a
   BF93 24 06              2831 	add	a,#0x06
   BF95 F5 81              2832 	mov	sp,a
   BF97 AA 82              2833 	mov	r2,dpl
   BF99 AB 83              2834 	mov	r3,dph
                           2835 ;	../../shared/src/misc_rom.c:322: x.val = a;
   BF9B E5 18              2836 	mov	a,_bp
   BF9D 04                 2837 	inc	a
   BF9E F8                 2838 	mov	r0,a
   BF9F A6 02              2839 	mov	@r0,ar2
   BFA1 08                 2840 	inc	r0
   BFA2 A6 03              2841 	mov	@r0,ar3
                           2842 ;	../../shared/src/misc_rom.c:323: y.val = b;
   BFA4 E5 18              2843 	mov	a,_bp
   BFA6 24 03              2844 	add	a,#0x03
   BFA8 F8                 2845 	mov	r0,a
   BFA9 E5 18              2846 	mov	a,_bp
   BFAB 24 FB              2847 	add	a,#0xfb
   BFAD F9                 2848 	mov	r1,a
   BFAE E7                 2849 	mov	a,@r1
   BFAF F6                 2850 	mov	@r0,a
   BFB0 08                 2851 	inc	r0
   BFB1 09                 2852 	inc	r1
   BFB2 E7                 2853 	mov	a,@r1
   BFB3 F6                 2854 	mov	@r0,a
                           2855 ;	../../shared/src/misc_rom.c:325: t.val = x.s.lo * y.s.lo;
   BFB4 E5 18              2856 	mov	a,_bp
   BFB6 24 05              2857 	add	a,#0x05
   BFB8 F8                 2858 	mov	r0,a
   BFB9 A9 18              2859 	mov	r1,_bp
   BFBB 09                 2860 	inc	r1
   BFBC 87 02              2861 	mov	ar2,@r1
   BFBE E5 18              2862 	mov	a,_bp
   BFC0 24 03              2863 	add	a,#0x03
   BFC2 FB                 2864 	mov	r3,a
   BFC3 C0 00              2865 	push	ar0
   BFC5 A8 03              2866 	mov	r0,ar3
   BFC7 86 04              2867 	mov	ar4,@r0
   BFC9 D0 00              2868 	pop	ar0
   BFCB 8A F0              2869 	mov	b,r2
   BFCD EC                 2870 	mov	a,r4
   BFCE A4                 2871 	mul	ab
   BFCF F6                 2872 	mov	@r0,a
   BFD0 08                 2873 	inc	r0
   BFD1 A6 F0              2874 	mov	@r0,b
                           2875 ;	../../shared/src/misc_rom.c:326: t.s.hi += (x.s.lo * y.s.hi) + (x.s.hi * y.s.lo);
   BFD3 E5 18              2876 	mov	a,_bp
   BFD5 24 05              2877 	add	a,#0x05
   BFD7 04                 2878 	inc	a
   BFD8 F8                 2879 	mov	r0,a
   BFD9 86 05              2880 	mov	ar5,@r0
   BFDB 0B                 2881 	inc	r3
   BFDC C0 00              2882 	push	ar0
   BFDE A8 03              2883 	mov	r0,ar3
   BFE0 86 03              2884 	mov	ar3,@r0
   BFE2 D0 00              2885 	pop	ar0
   BFE4 8A F0              2886 	mov	b,r2
   BFE6 EB                 2887 	mov	a,r3
   BFE7 A4                 2888 	mul	ab
   BFE8 FA                 2889 	mov	r2,a
   BFE9 09                 2890 	inc	r1
   BFEA 87 03              2891 	mov	ar3,@r1
   BFEC 8B F0              2892 	mov	b,r3
   BFEE EC                 2893 	mov	a,r4
   BFEF A4                 2894 	mul	ab
   BFF0 2A                 2895 	add	a,r2
   BFF1 2D                 2896 	add	a,r5
   BFF2 F6                 2897 	mov	@r0,a
                           2898 ;	../../shared/src/misc_rom.c:328: return t.val;
   BFF3 E5 18              2899 	mov	a,_bp
   BFF5 24 05              2900 	add	a,#0x05
   BFF7 F8                 2901 	mov	r0,a
   BFF8 86 82              2902 	mov	dpl,@r0
   BFFA 08                 2903 	inc	r0
   BFFB 86 83              2904 	mov	dph,@r0
   BFFD 85 18 81           2905 	mov	sp,_bp
   C000 D0 18              2906 	pop	_bp
   C002 02 00 C5           2907 	ljmp	__sdcc_banked_ret
                           2908 ;------------------------------------------------------------
                           2909 ;Allocation info for local variables in function 'short_delay'
                           2910 ;------------------------------------------------------------
                           2911 ;------------------------------------------------------------
                           2912 ;	../../shared/src/misc_rom.c:331: void short_delay(void) BANKING_CTRL { //100nS @400MHz
                           2913 ;	-----------------------------------------
                           2914 ;	 function short_delay
                           2915 ;	-----------------------------------------
   C005                    2916 _short_delay:
                           2917 ;	../../shared/src/misc_rom.c:340: __endasm;
                           2918 	
   C005 00                 2919 	  nop
   C006 00                 2920 	  nop
   C007 00                 2921 	  nop
   C008 00                 2922 	  nop
   C009 00                 2923 	  nop
   C00A 00                 2924 	  nop
   C00B 00                 2925 	  nop
                           2926 	 
   C00C 02 00 C5           2927 	ljmp	__sdcc_banked_ret
                           2928 ;------------------------------------------------------------
                           2929 ;Allocation info for local variables in function 'short_delay_0'
                           2930 ;------------------------------------------------------------
                           2931 ;------------------------------------------------------------
                           2932 ;	../../shared/src/misc_rom.c:342: void short_delay_0(void) BANKING_CTRL{
                           2933 ;	-----------------------------------------
                           2934 ;	 function short_delay_0
                           2935 ;	-----------------------------------------
   C00F                    2936 _short_delay_0:
                           2937 ;	../../shared/src/misc_rom.c:344: }
   C00F 02 00 C5           2938 	ljmp	__sdcc_banked_ret
                           2939 ;------------------------------------------------------------
                           2940 ;Allocation info for local variables in function 'max'
                           2941 ;------------------------------------------------------------
                           2942 ;b                         Allocated to stack - offset -4
                           2943 ;a                         Allocated to registers r2 
                           2944 ;------------------------------------------------------------
                           2945 ;	../../shared/src/misc_rom.c:346: int8_t max(int8_t a, int8_t b) BANKING_CTRL{
                           2946 ;	-----------------------------------------
                           2947 ;	 function max
                           2948 ;	-----------------------------------------
   C012                    2949 _max:
   C012 C0 18              2950 	push	_bp
   C014 85 81 18           2951 	mov	_bp,sp
   C017 AA 82              2952 	mov	r2,dpl
                           2953 ;	../../shared/src/misc_rom.c:347: return a>b?a:b;
   C019 E5 18              2954 	mov	a,_bp
   C01B 24 FC              2955 	add	a,#0xfc
   C01D F8                 2956 	mov	r0,a
   C01E C3                 2957 	clr	c
   C01F E6                 2958 	mov	a,@r0
   C020 64 80              2959 	xrl	a,#0x80
   C022 8A F0              2960 	mov	b,r2
   C024 63 F0 80           2961 	xrl	b,#0x80
   C027 95 F0              2962 	subb	a,b
   C029 50 02              2963 	jnc	00103$
   C02B 80 07              2964 	sjmp	00104$
   C02D                    2965 00103$:
   C02D E5 18              2966 	mov	a,_bp
   C02F 24 FC              2967 	add	a,#0xfc
   C031 F8                 2968 	mov	r0,a
   C032 86 02              2969 	mov	ar2,@r0
   C034                    2970 00104$:
   C034 8A 82              2971 	mov	dpl,r2
   C036 D0 18              2972 	pop	_bp
   C038 02 00 C5           2973 	ljmp	__sdcc_banked_ret
                           2974 ;------------------------------------------------------------
                           2975 ;Allocation info for local variables in function 'min'
                           2976 ;------------------------------------------------------------
                           2977 ;b                         Allocated to stack - offset -4
                           2978 ;a                         Allocated to registers r2 
                           2979 ;------------------------------------------------------------
                           2980 ;	../../shared/src/misc_rom.c:350: int8_t min(int8_t a, int8_t b) BANKING_CTRL{
                           2981 ;	-----------------------------------------
                           2982 ;	 function min
                           2983 ;	-----------------------------------------
   C03B                    2984 _min:
   C03B C0 18              2985 	push	_bp
   C03D 85 81 18           2986 	mov	_bp,sp
   C040 AA 82              2987 	mov	r2,dpl
                           2988 ;	../../shared/src/misc_rom.c:351: return a<b?a:b;
   C042 E5 18              2989 	mov	a,_bp
   C044 24 FC              2990 	add	a,#0xfc
   C046 F8                 2991 	mov	r0,a
   C047 C3                 2992 	clr	c
   C048 EA                 2993 	mov	a,r2
   C049 64 80              2994 	xrl	a,#0x80
   C04B 86 F0              2995 	mov	b,@r0
   C04D 63 F0 80           2996 	xrl	b,#0x80
   C050 95 F0              2997 	subb	a,b
   C052 50 02              2998 	jnc	00103$
   C054 80 07              2999 	sjmp	00104$
   C056                    3000 00103$:
   C056 E5 18              3001 	mov	a,_bp
   C058 24 FC              3002 	add	a,#0xfc
   C05A F8                 3003 	mov	r0,a
   C05B 86 02              3004 	mov	ar2,@r0
   C05D                    3005 00104$:
   C05D 8A 82              3006 	mov	dpl,r2
   C05F D0 18              3007 	pop	_bp
   C061 02 00 C5           3008 	ljmp	__sdcc_banked_ret
                           3009 ;------------------------------------------------------------
                           3010 ;Allocation info for local variables in function 'clamp'
                           3011 ;------------------------------------------------------------
                           3012 ;ub                        Allocated to stack - offset -4
                           3013 ;db                        Allocated to stack - offset -5
                           3014 ;a                         Allocated to registers r2 
                           3015 ;------------------------------------------------------------
                           3016 ;	../../shared/src/misc_rom.c:354: int8_t clamp(int8_t a, int8_t ub, int8_t db) BANKING_CTRL{
                           3017 ;	-----------------------------------------
                           3018 ;	 function clamp
                           3019 ;	-----------------------------------------
   C064                    3020 _clamp:
   C064 C0 18              3021 	push	_bp
   C066 85 81 18           3022 	mov	_bp,sp
   C069 AA 82              3023 	mov	r2,dpl
                           3024 ;	../../shared/src/misc_rom.c:355: return a<db?db:a>ub?ub:a;
   C06B E5 18              3025 	mov	a,_bp
   C06D 24 FB              3026 	add	a,#0xfb
   C06F F8                 3027 	mov	r0,a
   C070 C3                 3028 	clr	c
   C071 EA                 3029 	mov	a,r2
   C072 64 80              3030 	xrl	a,#0x80
   C074 86 F0              3031 	mov	b,@r0
   C076 63 F0 80           3032 	xrl	b,#0x80
   C079 95 F0              3033 	subb	a,b
   C07B 50 09              3034 	jnc	00103$
   C07D E5 18              3035 	mov	a,_bp
   C07F 24 FB              3036 	add	a,#0xfb
   C081 F8                 3037 	mov	r0,a
   C082 86 03              3038 	mov	ar3,@r0
   C084 80 1F              3039 	sjmp	00104$
   C086                    3040 00103$:
   C086 E5 18              3041 	mov	a,_bp
   C088 24 FC              3042 	add	a,#0xfc
   C08A F8                 3043 	mov	r0,a
   C08B C3                 3044 	clr	c
   C08C E6                 3045 	mov	a,@r0
   C08D 64 80              3046 	xrl	a,#0x80
   C08F 8A F0              3047 	mov	b,r2
   C091 63 F0 80           3048 	xrl	b,#0x80
   C094 95 F0              3049 	subb	a,b
   C096 50 09              3050 	jnc	00105$
   C098 E5 18              3051 	mov	a,_bp
   C09A 24 FC              3052 	add	a,#0xfc
   C09C F8                 3053 	mov	r0,a
   C09D 86 04              3054 	mov	ar4,@r0
   C09F 80 02              3055 	sjmp	00106$
   C0A1                    3056 00105$:
   C0A1 8A 04              3057 	mov	ar4,r2
   C0A3                    3058 00106$:
   C0A3 8C 03              3059 	mov	ar3,r4
   C0A5                    3060 00104$:
   C0A5 8B 82              3061 	mov	dpl,r3
   C0A7 D0 18              3062 	pop	_bp
   C0A9 02 00 C5           3063 	ljmp	__sdcc_banked_ret
                           3064 ;------------------------------------------------------------
                           3065 ;Allocation info for local variables in function 'clamp_u8'
                           3066 ;------------------------------------------------------------
                           3067 ;ub                        Allocated to stack - offset -4
                           3068 ;db                        Allocated to stack - offset -5
                           3069 ;a                         Allocated to registers r2 
                           3070 ;------------------------------------------------------------
                           3071 ;	../../shared/src/misc_rom.c:358: uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db) BANKING_CTRL{
                           3072 ;	-----------------------------------------
                           3073 ;	 function clamp_u8
                           3074 ;	-----------------------------------------
   C0AC                    3075 _clamp_u8:
   C0AC C0 18              3076 	push	_bp
   C0AE 85 81 18           3077 	mov	_bp,sp
   C0B1 AA 82              3078 	mov	r2,dpl
                           3079 ;	../../shared/src/misc_rom.c:361: return a<db?db:a>ub?ub:a;
   C0B3 E5 18              3080 	mov	a,_bp
   C0B5 24 FB              3081 	add	a,#0xfb
   C0B7 F8                 3082 	mov	r0,a
   C0B8 C3                 3083 	clr	c
   C0B9 EA                 3084 	mov	a,r2
   C0BA 96                 3085 	subb	a,@r0
   C0BB 50 09              3086 	jnc	00103$
   C0BD E5 18              3087 	mov	a,_bp
   C0BF 24 FB              3088 	add	a,#0xfb
   C0C1 F8                 3089 	mov	r0,a
   C0C2 86 03              3090 	mov	ar3,@r0
   C0C4 80 18              3091 	sjmp	00104$
   C0C6                    3092 00103$:
   C0C6 E5 18              3093 	mov	a,_bp
   C0C8 24 FC              3094 	add	a,#0xfc
   C0CA F8                 3095 	mov	r0,a
   C0CB E6                 3096 	mov	a,@r0
   C0CC B5 02 00           3097 	cjne	a,ar2,00110$
   C0CF                    3098 00110$:
   C0CF 50 09              3099 	jnc	00105$
   C0D1 E5 18              3100 	mov	a,_bp
   C0D3 24 FC              3101 	add	a,#0xfc
   C0D5 F8                 3102 	mov	r0,a
   C0D6 86 04              3103 	mov	ar4,@r0
   C0D8 80 02              3104 	sjmp	00106$
   C0DA                    3105 00105$:
   C0DA 8A 04              3106 	mov	ar4,r2
   C0DC                    3107 00106$:
   C0DC 8C 03              3108 	mov	ar3,r4
   C0DE                    3109 00104$:
   C0DE 8B 82              3110 	mov	dpl,r3
   C0E0 D0 18              3111 	pop	_bp
   C0E2 02 00 C5           3112 	ljmp	__sdcc_banked_ret
                           3113 ;------------------------------------------------------------
                           3114 ;Allocation info for local variables in function 'clamp16'
                           3115 ;------------------------------------------------------------
                           3116 ;ub                        Allocated to stack - offset -5
                           3117 ;db                        Allocated to stack - offset -7
                           3118 ;a                         Allocated to registers r2 r3 
                           3119 ;------------------------------------------------------------
                           3120 ;	../../shared/src/misc_rom.c:364: int16_t clamp16(int16_t a, int16_t ub, int16_t db) BANKING_CTRL{
                           3121 ;	-----------------------------------------
                           3122 ;	 function clamp16
                           3123 ;	-----------------------------------------
   C0E5                    3124 _clamp16:
   C0E5 C0 18              3125 	push	_bp
   C0E7 85 81 18           3126 	mov	_bp,sp
   C0EA AA 82              3127 	mov	r2,dpl
   C0EC AB 83              3128 	mov	r3,dph
                           3129 ;	../../shared/src/misc_rom.c:365: return a<db?db:a>ub?ub:a;
   C0EE E5 18              3130 	mov	a,_bp
   C0F0 24 F9              3131 	add	a,#0xf9
   C0F2 F8                 3132 	mov	r0,a
   C0F3 C3                 3133 	clr	c
   C0F4 EA                 3134 	mov	a,r2
   C0F5 96                 3135 	subb	a,@r0
   C0F6 EB                 3136 	mov	a,r3
   C0F7 64 80              3137 	xrl	a,#0x80
   C0F9 08                 3138 	inc	r0
   C0FA 86 F0              3139 	mov	b,@r0
   C0FC 63 F0 80           3140 	xrl	b,#0x80
   C0FF 95 F0              3141 	subb	a,b
   C101 50 0C              3142 	jnc	00103$
   C103 E5 18              3143 	mov	a,_bp
   C105 24 F9              3144 	add	a,#0xf9
   C107 F8                 3145 	mov	r0,a
   C108 86 04              3146 	mov	ar4,@r0
   C10A 08                 3147 	inc	r0
   C10B 86 05              3148 	mov	ar5,@r0
   C10D 80 29              3149 	sjmp	00104$
   C10F                    3150 00103$:
   C10F E5 18              3151 	mov	a,_bp
   C111 24 FB              3152 	add	a,#0xfb
   C113 F8                 3153 	mov	r0,a
   C114 C3                 3154 	clr	c
   C115 E6                 3155 	mov	a,@r0
   C116 9A                 3156 	subb	a,r2
   C117 08                 3157 	inc	r0
   C118 E6                 3158 	mov	a,@r0
   C119 64 80              3159 	xrl	a,#0x80
   C11B 8B F0              3160 	mov	b,r3
   C11D 63 F0 80           3161 	xrl	b,#0x80
   C120 95 F0              3162 	subb	a,b
   C122 50 0C              3163 	jnc	00105$
   C124 E5 18              3164 	mov	a,_bp
   C126 24 FB              3165 	add	a,#0xfb
   C128 F8                 3166 	mov	r0,a
   C129 86 06              3167 	mov	ar6,@r0
   C12B 08                 3168 	inc	r0
   C12C 86 07              3169 	mov	ar7,@r0
   C12E 80 04              3170 	sjmp	00106$
   C130                    3171 00105$:
   C130 8A 06              3172 	mov	ar6,r2
   C132 8B 07              3173 	mov	ar7,r3
   C134                    3174 00106$:
   C134 8E 04              3175 	mov	ar4,r6
   C136 8F 05              3176 	mov	ar5,r7
   C138                    3177 00104$:
   C138 8C 82              3178 	mov	dpl,r4
   C13A 8D 83              3179 	mov	dph,r5
   C13C D0 18              3180 	pop	_bp
   C13E 02 00 C5           3181 	ljmp	__sdcc_banked_ret
                           3182 ;------------------------------------------------------------
                           3183 ;Allocation info for local variables in function 'abs'
                           3184 ;------------------------------------------------------------
                           3185 ;a                         Allocated to registers r2 
                           3186 ;------------------------------------------------------------
                           3187 ;	../../shared/src/misc_rom.c:368: int8_t abs(int8_t a) BANKING_CTRL{
                           3188 ;	-----------------------------------------
                           3189 ;	 function abs
                           3190 ;	-----------------------------------------
   C141                    3191 _abs:
                           3192 ;	../../shared/src/misc_rom.c:369: return a>=0?a:-a;
   C141 E5 82              3193 	mov	a,dpl
   C143 FA                 3194 	mov	r2,a
   C144 33                 3195 	rlc	a
   C145 B3                 3196 	cpl	c
   C146 E4                 3197 	clr	a
   C147 33                 3198 	rlc	a
   C148 FB                 3199 	mov	r3,a
   C149 60 04              3200 	jz	00103$
   C14B 8A 03              3201 	mov	ar3,r2
   C14D 80 04              3202 	sjmp	00104$
   C14F                    3203 00103$:
   C14F C3                 3204 	clr	c
   C150 E4                 3205 	clr	a
   C151 9A                 3206 	subb	a,r2
   C152 FB                 3207 	mov	r3,a
   C153                    3208 00104$:
   C153 8B 82              3209 	mov	dpl,r3
   C155 02 00 C5           3210 	ljmp	__sdcc_banked_ret
                           3211 ;------------------------------------------------------------
                           3212 ;Allocation info for local variables in function 'abs16'
                           3213 ;------------------------------------------------------------
                           3214 ;a                         Allocated to registers r2 r3 
                           3215 ;------------------------------------------------------------
                           3216 ;	../../shared/src/misc_rom.c:372: int16_t abs16(int16_t a) BANKING_CTRL{
                           3217 ;	-----------------------------------------
                           3218 ;	 function abs16
                           3219 ;	-----------------------------------------
   C158                    3220 _abs16:
   C158 AA 82              3221 	mov	r2,dpl
                           3222 ;	../../shared/src/misc_rom.c:373: return a>=0?a:-a;
   C15A E5 83              3223 	mov	a,dph
   C15C FB                 3224 	mov	r3,a
   C15D 33                 3225 	rlc	a
   C15E B3                 3226 	cpl	c
   C15F E4                 3227 	clr	a
   C160 33                 3228 	rlc	a
   C161 FC                 3229 	mov	r4,a
   C162 60 06              3230 	jz	00103$
   C164 8A 04              3231 	mov	ar4,r2
   C166 8B 05              3232 	mov	ar5,r3
   C168 80 07              3233 	sjmp	00104$
   C16A                    3234 00103$:
   C16A C3                 3235 	clr	c
   C16B E4                 3236 	clr	a
   C16C 9A                 3237 	subb	a,r2
   C16D FC                 3238 	mov	r4,a
   C16E E4                 3239 	clr	a
   C16F 9B                 3240 	subb	a,r3
   C170 FD                 3241 	mov	r5,a
   C171                    3242 00104$:
   C171 8C 82              3243 	mov	dpl,r4
   C173 8D 83              3244 	mov	dph,r5
   C175 02 00 C5           3245 	ljmp	__sdcc_banked_ret
                           3246 ;------------------------------------------------------------
                           3247 ;Allocation info for local variables in function 'memcpy'
                           3248 ;------------------------------------------------------------
                           3249 ;src                       Allocated to stack - offset -6
                           3250 ;n                         Allocated to stack - offset -8
                           3251 ;des                       Allocated to registers r2 r3 r4 
                           3252 ;------------------------------------------------------------
                           3253 ;	../../shared/src/misc_rom.c:386: void memcpy(uint8_t *des, uint8_t *src, int n) BANKING_CTRL{
                           3254 ;	-----------------------------------------
                           3255 ;	 function memcpy
                           3256 ;	-----------------------------------------
   C178                    3257 _memcpy:
   C178 C0 18              3258 	push	_bp
   C17A 85 81 18           3259 	mov	_bp,sp
   C17D AA 82              3260 	mov	r2,dpl
   C17F AB 83              3261 	mov	r3,dph
   C181 AC F0              3262 	mov	r4,b
                           3263 ;	../../shared/src/misc_rom.c:388: DMASEL = DMA0; 
   C183 75 B4 00           3264 	mov	_DMASEL,#0x00
                           3265 ;	../../shared/src/misc_rom.c:389: DMAM0 = 0x66; //01100110
   C186 75 B5 66           3266 	mov	_DMAM0,#0x66
                           3267 ;	../../shared/src/misc_rom.c:390: DMAM1 = 0x1f;
   C189 75 B6 1F           3268 	mov	_DMAM1,#0x1F
                           3269 ;	../../shared/src/misc_rom.c:391: DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
                           3270 ;	../../shared/src/misc_rom.c:392: DMASA = (uint16_t)src;
   C18C E4                 3271 	clr	a
   C18D F5 A3              3272 	mov	_DMAS2,a
   C18F F5 A6              3273 	mov	_DMAT2,a
   C191 F5 B3              3274 	mov	_DMAC2,a
   C193 E5 18              3275 	mov	a,_bp
   C195 24 FA              3276 	add	a,#0xfa
   C197 F8                 3277 	mov	r0,a
   C198 86 A1              3278 	mov	_DMASA,@r0
   C19A 08                 3279 	inc	r0
   C19B 86 A2              3280 	mov	(_DMASA >> 8),@r0
                           3281 ;	../../shared/src/misc_rom.c:393: DMATA = (uint16_t)des;
   C19D 8A A4              3282 	mov	_DMATA,r2
   C19F 8B A5              3283 	mov	(_DMATA >> 8),r3
                           3284 ;	../../shared/src/misc_rom.c:394: DMAC = n - 1;
   C1A1 E5 18              3285 	mov	a,_bp
   C1A3 24 F8              3286 	add	a,#0xf8
   C1A5 F8                 3287 	mov	r0,a
   C1A6 E6                 3288 	mov	a,@r0
   C1A7 24 FF              3289 	add	a,#0xff
   C1A9 F5 B1              3290 	mov	_DMAC,a
   C1AB 08                 3291 	inc	r0
   C1AC E6                 3292 	mov	a,@r0
   C1AD 34 FF              3293 	addc	a,#0xff
   C1AF F5 B2              3294 	mov	(_DMAC >> 8),a
                           3295 ;	../../shared/src/misc_rom.c:395: DMASEL = 0x80; 
   C1B1 75 B4 80           3296 	mov	_DMASEL,#0x80
                           3297 ;	../../shared/src/misc_rom.c:396: while(DMASEL&0x80);
   C1B4                    3298 00101$:
   C1B4 E5 B4              3299 	mov	a,_DMASEL
   C1B6 20 E7 FB           3300 	jb	acc.7,00101$
   C1B9 D0 18              3301 	pop	_bp
   C1BB 02 00 C5           3302 	ljmp	__sdcc_banked_ret
                           3303 ;------------------------------------------------------------
                           3304 ;Allocation info for local variables in function 'memcpy_prom_to_xdat'
                           3305 ;------------------------------------------------------------
                           3306 ;src                       Allocated to stack - offset -7
                           3307 ;n                         Allocated to stack - offset -9
                           3308 ;des                       Allocated to registers r2 r3 r4 r5 
                           3309 ;------------------------------------------------------------
                           3310 ;	../../shared/src/misc_rom.c:400: void memcpy_prom_to_xdat(uint32_t des, uint32_t src, uint16_t n) BANKING_CTRL{
                           3311 ;	-----------------------------------------
                           3312 ;	 function memcpy_prom_to_xdat
                           3313 ;	-----------------------------------------
   C1BE                    3314 _memcpy_prom_to_xdat:
   C1BE C0 18              3315 	push	_bp
   C1C0 85 81 18           3316 	mov	_bp,sp
   C1C3 AA 82              3317 	mov	r2,dpl
   C1C5 AB 83              3318 	mov	r3,dph
   C1C7 AC F0              3319 	mov	r4,b
   C1C9 FD                 3320 	mov	r5,a
                           3321 ;	../../shared/src/misc_rom.c:402: DMASEL = DMA0; 
   C1CA 75 B4 00           3322 	mov	_DMASEL,#0x00
                           3323 ;	../../shared/src/misc_rom.c:403: DMAM0 = 0x62; //01100010
   C1CD 75 B5 62           3324 	mov	_DMAM0,#0x62
                           3325 ;	../../shared/src/misc_rom.c:404: DMAM1 = 0x1f;
   C1D0 75 B6 1F           3326 	mov	_DMAM1,#0x1F
                           3327 ;	../../shared/src/misc_rom.c:405: DMAT2 = 0; DMAC2 = 0;
                           3328 ;	../../shared/src/misc_rom.c:406: DMAS2 = (uint8_t)(src>>16);
   C1D3 E4                 3329 	clr	a
   C1D4 F5 A6              3330 	mov	_DMAT2,a
   C1D6 F5 B3              3331 	mov	_DMAC2,a
   C1D8 E5 18              3332 	mov	a,_bp
   C1DA 24 F9              3333 	add	a,#0xf9
   C1DC F8                 3334 	mov	r0,a
   C1DD 08                 3335 	inc	r0
   C1DE 08                 3336 	inc	r0
   C1DF 86 A3              3337 	mov	_DMAS2,@r0
                           3338 ;	../../shared/src/misc_rom.c:407: DMASA = (uint16_t)src;
   C1E1 E5 18              3339 	mov	a,_bp
   C1E3 24 F9              3340 	add	a,#0xf9
   C1E5 F8                 3341 	mov	r0,a
   C1E6 86 A1              3342 	mov	_DMASA,@r0
   C1E8 08                 3343 	inc	r0
   C1E9 86 A2              3344 	mov	(_DMASA >> 8),@r0
                           3345 ;	../../shared/src/misc_rom.c:408: DMATA = (uint16_t)des;
   C1EB 8A A4              3346 	mov	_DMATA,r2
   C1ED 8B A5              3347 	mov	(_DMATA >> 8),r3
                           3348 ;	../../shared/src/misc_rom.c:409: DMAC = n - 1;
   C1EF E5 18              3349 	mov	a,_bp
   C1F1 24 F7              3350 	add	a,#0xf7
   C1F3 F8                 3351 	mov	r0,a
   C1F4 E6                 3352 	mov	a,@r0
   C1F5 24 FF              3353 	add	a,#0xff
   C1F7 F5 B1              3354 	mov	_DMAC,a
   C1F9 08                 3355 	inc	r0
   C1FA E6                 3356 	mov	a,@r0
   C1FB 34 FF              3357 	addc	a,#0xff
   C1FD F5 B2              3358 	mov	(_DMAC >> 8),a
                           3359 ;	../../shared/src/misc_rom.c:410: DMASEL = 0x80; 
   C1FF 75 B4 80           3360 	mov	_DMASEL,#0x80
                           3361 ;	../../shared/src/misc_rom.c:411: while(DMASEL&0x80);
   C202                    3362 00101$:
   C202 E5 B4              3363 	mov	a,_DMASEL
   C204 20 E7 FB           3364 	jb	acc.7,00101$
   C207 D0 18              3365 	pop	_bp
   C209 02 00 C5           3366 	ljmp	__sdcc_banked_ret
                           3367 ;------------------------------------------------------------
                           3368 ;Allocation info for local variables in function 'memset0'
                           3369 ;------------------------------------------------------------
                           3370 ;n                         Allocated to stack - offset -5
                           3371 ;dest                      Allocated to registers r2 r3 r4 
                           3372 ;------------------------------------------------------------
                           3373 ;	../../shared/src/misc_rom.c:415: void memset0(uint8_t *dest, int n) BANKING_CTRL{
                           3374 ;	-----------------------------------------
                           3375 ;	 function memset0
                           3376 ;	-----------------------------------------
   C20C                    3377 _memset0:
   C20C C0 18              3378 	push	_bp
   C20E 85 81 18           3379 	mov	_bp,sp
   C211 AA 82              3380 	mov	r2,dpl
   C213 AB 83              3381 	mov	r3,dph
   C215 AC F0              3382 	mov	r4,b
                           3383 ;	../../shared/src/misc_rom.c:417: DMASEL = DMA1; 
   C217 75 B4 01           3384 	mov	_DMASEL,#0x01
                           3385 ;	../../shared/src/misc_rom.c:418: DMAM0 = 0x64; //10100100
   C21A 75 B5 64           3386 	mov	_DMAM0,#0x64
                           3387 ;	../../shared/src/misc_rom.c:419: DMAM1 = 0x1f;
   C21D 75 B6 1F           3388 	mov	_DMAM1,#0x1F
                           3389 ;	../../shared/src/misc_rom.c:420: DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
   C220 75 A3 00           3390 	mov	_DMAS2,#0x00
   C223 75 A6 00           3391 	mov	_DMAT2,#0x00
   C226 75 B3 00           3392 	mov	_DMAC2,#0x00
                           3393 ;	../../shared/src/misc_rom.c:421: DMASA = (uint16_t)&DFE_CONTROL_2;
   C229 75 A1 40           3394 	mov	_DMASA,#_DFE_CONTROL_2
   C22C 75 A2 60           3395 	mov	(_DMASA >> 8),#(_DFE_CONTROL_2 >> 8)
                           3396 ;	../../shared/src/misc_rom.c:422: DMATA = (uint16_t)dest;
   C22F 8A A4              3397 	mov	_DMATA,r2
   C231 8B A5              3398 	mov	(_DMATA >> 8),r3
                           3399 ;	../../shared/src/misc_rom.c:423: DMAC = n - 1;
   C233 E5 18              3400 	mov	a,_bp
   C235 24 FB              3401 	add	a,#0xfb
   C237 F8                 3402 	mov	r0,a
   C238 E6                 3403 	mov	a,@r0
   C239 24 FF              3404 	add	a,#0xff
   C23B F5 B1              3405 	mov	_DMAC,a
   C23D 08                 3406 	inc	r0
   C23E E6                 3407 	mov	a,@r0
   C23F 34 FF              3408 	addc	a,#0xff
   C241 F5 B2              3409 	mov	(_DMAC >> 8),a
                           3410 ;	../../shared/src/misc_rom.c:424: DMASEL = 0x81; 
   C243 75 B4 81           3411 	mov	_DMASEL,#0x81
                           3412 ;	../../shared/src/misc_rom.c:425: while(DMASEL&0x80);
   C246                    3413 00101$:
   C246 E5 B4              3414 	mov	a,_DMASEL
   C248 20 E7 FB           3415 	jb	acc.7,00101$
   C24B D0 18              3416 	pop	_bp
   C24D 02 00 C5           3417 	ljmp	__sdcc_banked_ret
                           3418 ;------------------------------------------------------------
                           3419 ;Allocation info for local variables in function 'conv_thermo_2_bi'
                           3420 ;------------------------------------------------------------
                           3421 ;val                       Allocated to registers r2 
                           3422 ;index                     Allocated to registers r3 
                           3423 ;------------------------------------------------------------
                           3424 ;	../../shared/src/misc_rom.c:428: uint8_t conv_thermo_2_bi(uint8_t val) BANKING_CTRL{
                           3425 ;	-----------------------------------------
                           3426 ;	 function conv_thermo_2_bi
                           3427 ;	-----------------------------------------
   C250                    3428 _conv_thermo_2_bi:
   C250 AA 82              3429 	mov	r2,dpl
                           3430 ;	../../shared/src/misc_rom.c:431: while(val!=0) {
   C252 7B 00              3431 	mov	r3,#0x00
   C254                    3432 00101$:
   C254 EA                 3433 	mov	a,r2
   C255 60 07              3434 	jz	00103$
                           3435 ;	../../shared/src/misc_rom.c:432: val >>= 1; index++;
   C257 EA                 3436 	mov	a,r2
   C258 C3                 3437 	clr	c
   C259 13                 3438 	rrc	a
   C25A FA                 3439 	mov	r2,a
   C25B 0B                 3440 	inc	r3
   C25C 80 F6              3441 	sjmp	00101$
   C25E                    3442 00103$:
                           3443 ;	../../shared/src/misc_rom.c:434: return index;
   C25E 8B 82              3444 	mov	dpl,r3
   C260 02 00 C5           3445 	ljmp	__sdcc_banked_ret
                           3446 	.area CSEG    (CODE)
                           3447 	.area BANK2   (CODE)
                           3448 	.area CABS    (ABS,CODE)
