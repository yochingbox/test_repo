                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:26 2018
                              5 ;--------------------------------------------------------
                              6 	.module imp_cal
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _tximp_thermo_tb
                             13 	.globl _toggle_impcal_out_req
                             14 	.globl _TF2
                             15 	.globl _TI
                             16 	.globl _RI
                             17 	.globl _EX12
                             18 	.globl _EX11
                             19 	.globl _EX10
                             20 	.globl _EX9
                             21 	.globl _EX8
                             22 	.globl _ES1
                             23 	.globl _PS1
                             24 	.globl _EX6
                             25 	.globl _EX5
                             26 	.globl _EX4
                             27 	.globl _EX3
                             28 	.globl _EX2
                             29 	.globl _EX7
                             30 	.globl _EA
                             31 	.globl _WDT
                             32 	.globl _ET2
                             33 	.globl _ES
                             34 	.globl _ET1
                             35 	.globl _EX1
                             36 	.globl _ET0
                             37 	.globl _EX0
                             38 	.globl _TF1
                             39 	.globl _TR1
                             40 	.globl _TF0
                             41 	.globl _TR0
                             42 	.globl _IE1
                             43 	.globl _IT1
                             44 	.globl _IE0
                             45 	.globl _IT0
                             46 	.globl _P3_7
                             47 	.globl _P3_6
                             48 	.globl _P3_5
                             49 	.globl _P3_4
                             50 	.globl _P3_3
                             51 	.globl _P3_2
                             52 	.globl _P3_1
                             53 	.globl _P3_0
                             54 	.globl _P2_7
                             55 	.globl _P2_6
                             56 	.globl _P2_5
                             57 	.globl _P2_4
                             58 	.globl _P2_3
                             59 	.globl _P2_2
                             60 	.globl _P2_1
                             61 	.globl _P2_0
                             62 	.globl _P1_7
                             63 	.globl _P1_6
                             64 	.globl _P1_5
                             65 	.globl _P1_4
                             66 	.globl _P1_3
                             67 	.globl _P1_2
                             68 	.globl _P1_1
                             69 	.globl _P1_0
                             70 	.globl _P0_7
                             71 	.globl _P0_6
                             72 	.globl _P0_5
                             73 	.globl _P0_4
                             74 	.globl _P0_3
                             75 	.globl _P0_2
                             76 	.globl _P0_1
                             77 	.globl _P0_0
                             78 	.globl _DMAC
                             79 	.globl _DMATA
                             80 	.globl _DMASA
                             81 	.globl _TMR2
                             82 	.globl _TMR1
                             83 	.globl _TMR0
                             84 	.globl _SRST
                             85 	.globl _B
                             86 	.globl _EIE
                             87 	.globl _ACC
                             88 	.globl _ADCON
                             89 	.globl _PSW
                             90 	.globl _TH2
                             91 	.globl _TL2
                             92 	.globl _RCAP2H
                             93 	.globl _RCAP2L
                             94 	.globl _T2CON
                             95 	.globl _CCEN
                             96 	.globl _IRCON
                             97 	.globl _S0RELH
                             98 	.globl _IP1
                             99 	.globl _IEN1
                            100 	.globl _DMAM1
                            101 	.globl _DMAM0
                            102 	.globl _DMASEL
                            103 	.globl _DMAC2
                            104 	.globl _DMAC1
                            105 	.globl _DMAC0
                            106 	.globl _P3
                            107 	.globl _S0RELL
                            108 	.globl _IP0
                            109 	.globl _IEN0
                            110 	.globl _DMAT2
                            111 	.globl _DMAT1
                            112 	.globl _DMAT0
                            113 	.globl _DMAS2
                            114 	.globl _DMAS1
                            115 	.globl _DMAS0
                            116 	.globl _P2
                            117 	.globl _IEN2
                            118 	.globl _SBUF
                            119 	.globl _SCON
                            120 	.globl _PSBANK
                            121 	.globl _DPS
                            122 	.globl _P1
                            123 	.globl _CKCON
                            124 	.globl _TH1
                            125 	.globl _TH0
                            126 	.globl _TL1
                            127 	.globl _TL0
                            128 	.globl _TMOD
                            129 	.globl _TCON
                            130 	.globl _PCON
                            131 	.globl _WDTREL
                            132 	.globl _DPH
                            133 	.globl _DPL
                            134 	.globl _P0
                            135 	.globl _sq_thrs_ratio_tb
                            136 	.globl _train_save_tb
                            137 	.globl _tx_tb
                            138 	.globl _UPHY_ANAREG_REV_0
                            139 	.globl _dfe_sm_save
                            140 	.globl _dfe_sm_dc
                            141 	.globl _dfe_sm
                            142 	.globl _cds28
                            143 	.globl _lnx_calx_align90_gm
                            144 	.globl _lnx_calx_align90_dac
                            145 	.globl _lnx_calx_align90_dummy_clk
                            146 	.globl _lnx_calx_eom_dpher
                            147 	.globl _lnx_calx_vdda_dll_eom_sel
                            148 	.globl _lnx_calx_dll_eom_gmsel
                            149 	.globl _lnx_calx_vdda_dll_sel
                            150 	.globl _lnx_calx_dll_gmsel
                            151 	.globl _lnx_calx_rxdcc_dll_hg
                            152 	.globl _lnx_calx_rxdcc_dll
                            153 	.globl _lnx_calx_txdcc_hg
                            154 	.globl _lnx_calx_txdcc
                            155 	.globl _lnx_calx_txdcc_pdiv_hg
                            156 	.globl _lnx_calx_txdcc_pdiv
                            157 	.globl _lnx_spdoft_tx_preset_index_lane
                            158 	.globl _lnx_cal_sellv_rxeomclk
                            159 	.globl _lnx_cal_sellv_rxsampler
                            160 	.globl _lnx_cal_sellv_txpre
                            161 	.globl _lnx_cal_sellv_rxdataclk
                            162 	.globl _lnx_cal_sellv_txclk
                            163 	.globl _lnx_cal_sellv_txdata
                            164 	.globl _lnx_cal_align90_gm
                            165 	.globl _lnx_cal_align90_dac
                            166 	.globl _lnx_cal_align90_dummy_clk
                            167 	.globl _lnx_cal_eom_dpher
                            168 	.globl _lnx_cal_vdda_dll_eom_sel
                            169 	.globl _lnx_cal_dll_eom_gmsel
                            170 	.globl _lnx_cal_vdda_dll_sel
                            171 	.globl _lnx_cal_dll_gmsel
                            172 	.globl _lnx_cal_rxdcc_eom_hg
                            173 	.globl _lnx_cal_rxdcc_eom
                            174 	.globl _lnx_cal_rxdcc_data_hg
                            175 	.globl _lnx_cal_rxdcc_data
                            176 	.globl _lnx_cal_rxdcc_dll_hg
                            177 	.globl _lnx_cal_rxdcc_dll
                            178 	.globl _lnx_cal_txdcc_hg
                            179 	.globl _lnx_cal_txdcc
                            180 	.globl _lnx_cal_txdcc_pdiv_hg
                            181 	.globl _lnx_cal_txdcc_pdiv
                            182 	.globl _cmx_cal_sllp_dac_fine_ring
                            183 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            184 	.globl _cmx_cal_pll_speed_ring
                            185 	.globl _cmx_cal_plldcc
                            186 	.globl _cmx_cal_lccap_lsb
                            187 	.globl _cmx_cal_lccap_msb
                            188 	.globl _cmx_cal_lcvco_dac_msb
                            189 	.globl _cmx_cal_lcvco_dac_lsb
                            190 	.globl _cmx_cal_lcvco_dac
                            191 	.globl _local_tx_preset_tb
                            192 	.globl _train_g0_index
                            193 	.globl _train_g1_index
                            194 	.globl _train_gn1_index
                            195 	.globl _phase_save
                            196 	.globl _txffe_save
                            197 	.globl _rc_save
                            198 	.globl _phy_mode_lane_table
                            199 	.globl _speedtable
                            200 	.globl _min_gen
                            201 	.globl _max_gen
                            202 	.globl _phy_mode_cmn_table
                            203 	.globl _ring_speedtable
                            204 	.globl _lc_speedtable
                            205 	.globl _TXTRAIN_IF_REG0
                            206 	.globl _CDS_READ_MISC1
                            207 	.globl _CDS_READ_MISC0
                            208 	.globl _DFE_READ_F0D_RIGHT_ODD
                            209 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            210 	.globl _DFE_READ_F0D_LEFT_ODD
                            211 	.globl _DFE_READ_F0D_LEFT_EVEN
                            212 	.globl _DFE_READ_F0D_ODD
                            213 	.globl _DFE_READ_F0D_EVEN
                            214 	.globl _DFE_READ_F0B_ODD
                            215 	.globl _DFE_READ_F0B_EVEN
                            216 	.globl _DFE_READ_F0A_ODD
                            217 	.globl _DFE_READ_F0A_EVEN
                            218 	.globl _DFE_READ_ODD_REG8
                            219 	.globl _DFE_READ_EVEN_REG8
                            220 	.globl _DFE_READ_ODD_REG7
                            221 	.globl _DFE_READ_ODD_REG6
                            222 	.globl _DFE_READ_ODD_REG5
                            223 	.globl _DFE_READ_ODD_REG4
                            224 	.globl _DFE_READ_ODD_REG3
                            225 	.globl _DFE_READ_ODD_REG2
                            226 	.globl _DFE_READ_ODD_REG1
                            227 	.globl _DFE_READ_ODD_REG0
                            228 	.globl _DFE_READ_EVEN_REG7
                            229 	.globl _DFE_READ_EVEN_REG6
                            230 	.globl _DFE_READ_EVEN_REG5
                            231 	.globl _DFE_READ_EVEN_REG4
                            232 	.globl _DFE_READ_EVEN_REG3
                            233 	.globl _DFE_READ_EVEN_REG2
                            234 	.globl _DFE_READ_EVEN_REG1
                            235 	.globl _DFE_READ_EVEN_REG0
                            236 	.globl _TX_TRAIN_IF_REG8
                            237 	.globl _TX_TRAIN_CTRL_LANE
                            238 	.globl _TX_TRAIN_IF_REG7
                            239 	.globl _TX_TRAIN_IF_REG6
                            240 	.globl _TX_TRAIN_IF_REG5
                            241 	.globl _TX_TRAIN_IF_REG4
                            242 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            244 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            245 	.globl _TX_AMP_CTRL_REG0
                            246 	.globl _TX_DRV_RD_OUT_REG0
                            247 	.globl _LINK_TRAIN_MODE0
                            248 	.globl _TX_EMPH_CTRL_REG0
                            249 	.globl _TX_TRAIN_DEFAULT_REG5
                            250 	.globl _TX_TRAIN_DEFAULT_REG4
                            251 	.globl _TX_TRAIN_DEFAULT_REG3
                            252 	.globl _TX_TRAIN_DEFAULT_REG2
                            253 	.globl _TX_TRAIN_DEFAULT_REG1
                            254 	.globl _TX_TRAIN_DEFAULT_REG0
                            255 	.globl _TX_TRAIN_DRIVER_REG2
                            256 	.globl _TX_TRAIN_DRIVER_REG1
                            257 	.globl _TX_TRAIN_DRIVER_REG0
                            258 	.globl _TX_TRAIN_PATTTERN_REG0
                            259 	.globl _TX_TRAIN_IF_REG3
                            260 	.globl _TX_TRAIN_IF_REG2
                            261 	.globl _TX_TRAIN_IF_REG1
                            262 	.globl _TX_TRAIN_IF_REG0
                            263 	.globl _DME_DEC_REG1
                            264 	.globl _DME_DEC_REG0
                            265 	.globl _DME_ENC_REG2
                            266 	.globl _DME_ENC_REG1
                            267 	.globl _DME_ENC_REG0
                            268 	.globl _END_XDAT_CMN
                            269 	.globl _MCU_INFO_13
                            270 	.globl _MCU_INFO_12
                            271 	.globl _MCU_INFO_5
                            272 	.globl _MCU_INFO_4
                            273 	.globl _SYNC_INFO
                            274 	.globl _CDS_EYE_CLK_THR
                            275 	.globl _TX_SAVE_4
                            276 	.globl _TX_SAVE_3
                            277 	.globl _TX_SAVE_2
                            278 	.globl _TX_SAVE_1
                            279 	.globl _TX_SAVE_0
                            280 	.globl _ETH_PRESET1_TB
                            281 	.globl _ETH_PRESET0_TB
                            282 	.globl _SAS_PRESET2_TB
                            283 	.globl _SAS_PRESET1_TB
                            284 	.globl _SAS_PRESET0_TB
                            285 	.globl _G_SELLV_RXSAMPLER
                            286 	.globl _G_SELLV_RXDATACLK
                            287 	.globl _G_SELLV_RXEOMCLK
                            288 	.globl _G_SELLV_TXPRE
                            289 	.globl _G_SELLV_TXDATA
                            290 	.globl _G_SELLV_TXCLK
                            291 	.globl _TIMER_SEL3
                            292 	.globl _TIMER_SEL2
                            293 	.globl _TIMER_SEL1
                            294 	.globl _MCU_CONFIG1
                            295 	.globl _LOOP_CNTS
                            296 	.globl _CAL_DATA1
                            297 	.globl _MCU_CONFIG
                            298 	.globl _CAL_STATUS_READ
                            299 	.globl _CAL_TIME_OUT_AND_DIS
                            300 	.globl _CON_CAL_STEP_SIZE5
                            301 	.globl _CON_CAL_STEP_SIZE4
                            302 	.globl _CON_CAL_STEP_SIZE3
                            303 	.globl _CON_CAL_STEP_SIZE2
                            304 	.globl _CON_CAL_STEP_SIZE1
                            305 	.globl _CONTROL_CONFIG9
                            306 	.globl _CONTROL_CONFIG8
                            307 	.globl _TRAIN_IF_CONFIG
                            308 	.globl _CAL_DATA0
                            309 	.globl _CONTROL_CONFIG7
                            310 	.globl _CONTROL_CONFIG6
                            311 	.globl _CONTROL_CONFIG5
                            312 	.globl _CONTROL_CONFIG4
                            313 	.globl _CONTROL_CONFIG3
                            314 	.globl _CONTROL_CONFIG2
                            315 	.globl _CONTROL_CONFIG1
                            316 	.globl _CONTROL_CONFIG0
                            317 	.globl _FW_REV
                            318 	.globl _CID_REG1
                            319 	.globl _CID_REG0
                            320 	.globl _CMN_MCU_REG
                            321 	.globl _SET_LANE_ISR
                            322 	.globl _CMN_ISR_MASK_1
                            323 	.globl _CMN_ISR_1
                            324 	.globl _CMN_MCU_TIMER3_CONTROL
                            325 	.globl _CMN_MCU_TIMER2_CONTROL
                            326 	.globl _CMN_MCU_TIMER1_CONTROL
                            327 	.globl _CMN_MCU_TIMER0_CONTROL
                            328 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            329 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            331 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            332 	.globl _CMN_MCU_TIMER_CONTROL
                            333 	.globl _CMN_CACHE_DEBUG1
                            334 	.globl _CMN_MCU_GPIO
                            335 	.globl _CMN_ISR_CLEAR_2
                            336 	.globl _CMN_ISR_MASK_2
                            337 	.globl _CMN_ISR_2
                            338 	.globl _MCU_INT_ADDR
                            339 	.globl _CMN_CACHE_DEBUG0
                            340 	.globl _MCU_SDT_CMN
                            341 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            343 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            344 	.globl _TEST5
                            345 	.globl _PM_CMN_REG2
                            346 	.globl _INPUT_CMN_PIN_REG3
                            347 	.globl __FIELDNAME_
                            348 	.globl _CMN_CALIBRATION
                            349 	.globl _OUTPUT_CMN_PIN_REG0
                            350 	.globl _SPD_CMN_REG1
                            351 	.globl _CLKGEN_CMN_REG1
                            352 	.globl _PLLCAL_REG1
                            353 	.globl _PLLCAL_REG0
                            354 	.globl _ANA_TSEN_CONTROL
                            355 	.globl _INPUT_CMN_PIN_REG2
                            356 	.globl _INPUT_CMN_PIN_REG1
                            357 	.globl _INPUT_CMN_PIN_REG0
                            358 	.globl _PM_CMN_REG1
                            359 	.globl _SYSTEM
                            360 	.globl _TEST4
                            361 	.globl _TEST3
                            362 	.globl _TEST2
                            363 	.globl _TEST1
                            364 	.globl _TEST0
                            365 	.globl _MCU_SYNC2
                            366 	.globl _MCU_SYNC1
                            367 	.globl _MEM_IRQ_CLEAR
                            368 	.globl _APB_CONTROL_REG
                            369 	.globl _ANA_IF_CMN_REG0
                            370 	.globl _MEM_IRQ_MASK
                            371 	.globl _MEM_IRQ
                            372 	.globl _ANA_IF_CMN_REG1
                            373 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            374 	.globl _MCU_INFO_3
                            375 	.globl _MCU_INFO_2
                            376 	.globl _MCU_INFO_1
                            377 	.globl _MCU_INFO_0
                            378 	.globl _MEMORY_CONTROL_4
                            379 	.globl _MEMORY_CONTROL_3
                            380 	.globl _MEMORY_CONTROL_2
                            381 	.globl _MEMORY_CONTROL_1
                            382 	.globl _MEMORY_CONTROL_0
                            383 	.globl _MCU_DEBUG1
                            384 	.globl _MCU_DEBUG0
                            385 	.globl _MCU_CONTROL_4
                            386 	.globl _MCU_CONTROL_3
                            387 	.globl _MCU_CONTROL_2
                            388 	.globl _MCU_CONTROL_1
                            389 	.globl _MCU_CONTROL_0
                            390 	.globl _GLOB_L1_SUBSTATES_CFG
                            391 	.globl _GLOB_PIPE_REVISION
                            392 	.globl _GLOB_BIST_DATA_HI
                            393 	.globl _GLOB_BIST_SEQR_CFG
                            394 	.globl _GLOB_BIST_RESULT
                            395 	.globl _GLOB_BIST_MASK
                            396 	.globl _GLOB_BIST_START
                            397 	.globl _GLOB_BIST_LANE_TYPE
                            398 	.globl _GLOB_BIST_CTRL
                            399 	.globl _GLOB_DP_BAL_CFG4
                            400 	.globl _GLOB_DP_BAL_CFG2
                            401 	.globl _GLOB_DP_BAL_CFG0
                            402 	.globl _GLOB_PM_DP_CTRL
                            403 	.globl _GLOB_COUNTER_HI
                            404 	.globl _GLOB_COUNTER_CTRL
                            405 	.globl _GLOB_PM_CFG0
                            406 	.globl _GLOB_DP_SAL_CFG5
                            407 	.globl _GLOB_DP_SAL_CFG3
                            408 	.globl _GLOB_DP_SAL_CFG1
                            409 	.globl _GLOB_DP_SAL_CFG
                            410 	.globl _GLOB_MISC_CTRL
                            411 	.globl _GLOB_CLK_SRC_HI
                            412 	.globl _GLOB_CLK_SRC_LO
                            413 	.globl _GLOB_RST_CLK_CTRL
                            414 	.globl _DFE_STATIC_REG6
                            415 	.globl _DFE_STATIC_REG5
                            416 	.globl _DFE_STATIC_REG4
                            417 	.globl _DFE_STATIC_REG3
                            418 	.globl _DFE_STATIC_REG1
                            419 	.globl _DFE_STATIC_REG0
                            420 	.globl _RX_CMN_0
                            421 	.globl _SRIS_REG1
                            422 	.globl _SRIS_REG0
                            423 	.globl _DTX_PHY_ALIGN_REG2
                            424 	.globl _DTX_PHY_ALIGN_REG1
                            425 	.globl _DTX_PHY_ALIGN_REG0
                            426 	.globl _DTX_REG4
                            427 	.globl _DTX_REG3
                            428 	.globl _DTX_REG2
                            429 	.globl _DTX_REG1
                            430 	.globl _DTX_REG0
                            431 	.globl _TX_CMN_REG
                            432 	.globl _END_XDAT_LANE
                            433 	.globl _TRAIN_CONTROL_17
                            434 	.globl _TRAIN_CONTROL_16
                            435 	.globl _TRAIN_CONTROL_15
                            436 	.globl _TRAIN_CONTROL_14
                            437 	.globl _TRAIN_CONTROL_13
                            438 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            439 	.globl _ESM_POP_N_CNT_LOW_LANE
                            440 	.globl _TRAIN_CONTROL_12
                            441 	.globl _TRAIN_CONTROL_11
                            442 	.globl _TRAIN_CONTROL_10
                            443 	.globl _TRAIN_CONTROL_9
                            444 	.globl _TRAIN_CONTROL_8
                            445 	.globl _TRAIN_CONTROL_7
                            446 	.globl _TRAIN_CONTROL_6
                            447 	.globl _TRAIN_CONTROL_5
                            448 	.globl _TRAIN_CONTROL_4
                            449 	.globl _TRAIN_CONTROL_3
                            450 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            451 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            452 	.globl _ESM_POP_P_CNT_LOW_LANE
                            453 	.globl _CDS_CTRL_REG1
                            454 	.globl _CDS_CTRL_REG0
                            455 	.globl _DFE_CONTROL_11
                            456 	.globl _DFE_CONTROL_10
                            457 	.globl _DFE_CONTROL_9
                            458 	.globl _DFE_CONTROL_8
                            459 	.globl _DFE_CONTROL_7
                            460 	.globl _DFE_TEST_5
                            461 	.globl _DFE_TEST_4
                            462 	.globl _DFE_TEST_1
                            463 	.globl _DFE_TEST_0
                            464 	.globl _DFE_CONTROL_6
                            465 	.globl _TRAIN_PARA_3
                            466 	.globl _TRAIN_PARA_2
                            467 	.globl _TRAIN_PARA_1
                            468 	.globl _TRAIN_PARA_0
                            469 	.globl _DLL_CAL
                            470 	.globl _RPTA_CONFIG_1
                            471 	.globl _RPTA_CONFIG_0
                            472 	.globl _TRAIN_CONTROL_2
                            473 	.globl _TRAIN_CONTROL_1
                            474 	.globl _TRAIN_CONTROL_0
                            475 	.globl _DFE_CONTROL_5
                            476 	.globl _DFE_CONTROL_4
                            477 	.globl _DFE_CONTROL_3
                            478 	.globl _DFE_CONTROL_2
                            479 	.globl _DFE_CONTROL_1
                            480 	.globl _DFE_CONTROL_0
                            481 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            482 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            483 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            484 	.globl _PHY_LOCAL_VALUE_LANE
                            485 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            486 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            487 	.globl _CAL_SAVE_DATA3_LANE
                            488 	.globl _CAL_SAVE_DATA2_LANE
                            489 	.globl _CAL_SAVE_DATA1_LANE
                            490 	.globl _CAL_CTRL4_LANE
                            491 	.globl _CAL_CTRL3_LANE
                            492 	.globl _CAL_CTRL2_LANE
                            493 	.globl _CAL_CTRL1_LANE
                            494 	.globl _LANE_MARGIN_REG0
                            495 	.globl _EOM_VLD_REG4
                            496 	.globl _EOM_REG0
                            497 	.globl _EOM_ERR_REG3
                            498 	.globl _EOM_ERR_REG2
                            499 	.globl _EOM_ERR_REG1
                            500 	.globl _EOM_ERR_REG0
                            501 	.globl _EOM_VLD_REG3
                            502 	.globl _EOM_VLD_REG2
                            503 	.globl _EOM_VLD_REG1
                            504 	.globl _EOM_VLD_REG0
                            505 	.globl _DFE_STATIC_LANE_REG6
                            506 	.globl _DFE_STATIC_LANE_REG5
                            507 	.globl _DFE_STATIC_LANE_REG4
                            508 	.globl _DFE_STATIC_LANE_REG3
                            509 	.globl _DFE_STATIC_LANE_REG1
                            510 	.globl _DFE_STATIC_LANE_REG0
                            511 	.globl _DFE_DCE_REG0
                            512 	.globl _CAL_OFST_REG2
                            513 	.globl _CAL_OFST_REG1
                            514 	.globl _CAL_OFST_REG0
                            515 	.globl _DFE_READ_ODD_2C_REG8
                            516 	.globl _DFE_READ_EVEN_2C_REG8
                            517 	.globl _DFE_READ_ODD_2C_REG7
                            518 	.globl _DFE_READ_ODD_2C_REG6
                            519 	.globl _DFE_READ_ODD_2C_REG5
                            520 	.globl _DFE_READ_ODD_2C_REG4
                            521 	.globl _DFE_READ_ODD_2C_REG3
                            522 	.globl _DFE_READ_ODD_2C_REG2
                            523 	.globl _DFE_READ_ODD_2C_REG1
                            524 	.globl _DFE_READ_ODD_2C_REG0
                            525 	.globl _DFE_READ_EVEN_2C_REG7
                            526 	.globl _DFE_READ_EVEN_2C_REG6
                            527 	.globl _DFE_READ_EVEN_2C_REG5
                            528 	.globl _DFE_READ_EVEN_2C_REG4
                            529 	.globl _DFE_READ_EVEN_2C_REG3
                            530 	.globl _DFE_READ_EVEN_2C_REG2
                            531 	.globl _DFE_READ_EVEN_2C_REG1
                            532 	.globl _DFE_READ_EVEN_2C_REG0
                            533 	.globl _DFE_READ_ODD_SM_REG8
                            534 	.globl _DFE_READ_EVEN_SM_REG8
                            535 	.globl _DFE_READ_ODD_SM_REG7
                            536 	.globl _DFE_READ_ODD_SM_REG6
                            537 	.globl _DFE_READ_ODD_SM_REG5
                            538 	.globl _DFE_READ_ODD_SM_REG4
                            539 	.globl _DFE_READ_ODD_SM_REG3
                            540 	.globl _DFE_READ_ODD_SM_REG2
                            541 	.globl _DFE_READ_ODD_SM_REG1
                            542 	.globl _DFE_READ_ODD_SM_REG0
                            543 	.globl _DFE_READ_EVEN_SM_REG7
                            544 	.globl _DFE_READ_EVEN_SM_REG6
                            545 	.globl _DFE_READ_EVEN_SM_REG5
                            546 	.globl _DFE_READ_EVEN_SM_REG4
                            547 	.globl _DFE_READ_EVEN_SM_REG3
                            548 	.globl _DFE_READ_EVEN_SM_REG2
                            549 	.globl _DFE_READ_EVEN_SM_REG1
                            550 	.globl _DFE_READ_EVEN_SM_REG0
                            551 	.globl _DFE_FEXT_ODD_REG7
                            552 	.globl _DFE_FEXT_ODD_REG6
                            553 	.globl _DFE_FEXT_ODD_REG5
                            554 	.globl _DFE_FEXT_ODD_REG4
                            555 	.globl _DFE_FEXT_ODD_REG3
                            556 	.globl _DFE_FEXT_ODD_REG2
                            557 	.globl _DFE_FEXT_ODD_REG1
                            558 	.globl _DFE_FEXT_ODD_REG0
                            559 	.globl _DFE_FEXT_EVEN_REG7
                            560 	.globl _DFE_FEXT_EVEN_REG6
                            561 	.globl _DFE_FEXT_EVEN_REG5
                            562 	.globl _DFE_FEXT_EVEN_REG4
                            563 	.globl _DFE_FEXT_EVEN_REG3
                            564 	.globl _DFE_FEXT_EVEN_REG2
                            565 	.globl _DFE_FEXT_EVEN_REG1
                            566 	.globl _DFE_FEXT_EVEN_REG0
                            567 	.globl _DFE_DC_ODD_REG8
                            568 	.globl _DFE_DC_EVEN_REG8
                            569 	.globl _DFE_FEN_ODD_REG
                            570 	.globl _DFE_FEN_EVEN_REG
                            571 	.globl _DFE_STEP_REG1
                            572 	.globl _DFE_STEP_REG0
                            573 	.globl _DFE_ANA_REG1
                            574 	.globl _DFE_ANA_REG0
                            575 	.globl _DFE_CTRL_REG4
                            576 	.globl _RX_EQ_CLK_CTRL
                            577 	.globl _DFE_CTRL_REG3
                            578 	.globl _DFE_CTRL_REG2
                            579 	.globl _DFE_CTRL_REG1
                            580 	.globl _DFE_CTRL_REG0
                            581 	.globl _PT_COUNTER2
                            582 	.globl _PT_COUNTER1
                            583 	.globl _PT_COUNTER0
                            584 	.globl _PT_USER_PATTERN2
                            585 	.globl _PT_USER_PATTERN1
                            586 	.globl _PT_USER_PATTERN0
                            587 	.globl _PT_CONTROL1
                            588 	.globl _PT_CONTROL0
                            589 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            590 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            591 	.globl _MEM_ECC_ERR_ADDRESS0
                            592 	.globl _MCU_COMMAND0
                            593 	.globl _MCU_INT_CONTROL_13
                            594 	.globl _MCU_WDT_LANE
                            595 	.globl _MCU_IRQ_ISR_LANE
                            596 	.globl _ANA_IF_DFEO_REG0
                            597 	.globl _ANA_IF_DFEE_REG0
                            598 	.globl _ANA_IF_TRX_REG0
                            599 	.globl _EXT_INT_CONTROL
                            600 	.globl _MCU_DEBUG_LANE
                            601 	.globl _MCU_DEBUG3_LANE
                            602 	.globl _MCU_DEBUG2_LANE
                            603 	.globl _MCU_DEBUG1_LANE
                            604 	.globl _MCU_DEBUG0_LANE
                            605 	.globl _MCU_TIMER_CTRL_7_LANE
                            606 	.globl _MCU_TIMER_CTRL_6_LANE
                            607 	.globl _MCU_TIMER_CTRL_5_LANE
                            608 	.globl _MCU_TIMER_CTRL_4_LANE
                            609 	.globl _MCU_TIMER_CTRL_3_LANE
                            610 	.globl _MCU_TIMER_CTRL_2_LANE
                            611 	.globl _MCU_TIMER_CTRL_1_LANE
                            612 	.globl _MCU_MEM_REG2_LANE
                            613 	.globl _MCU_MEM_REG1_LANE
                            614 	.globl _MCU_IRQ_MASK_LANE
                            615 	.globl _MCU_IRQ_LANE
                            616 	.globl _MCU_TIMER3_CONTROL
                            617 	.globl _MCU_TIMER2_CONTROL
                            618 	.globl _MCU_TIMER1_CONTROL
                            619 	.globl _MCU_TIMER0_CONTROL
                            620 	.globl _MCU_TIMER_CONTROL
                            621 	.globl _MCU_INT12_CONTROL
                            622 	.globl _MCU_INT11_CONTROL
                            623 	.globl _MCU_INT10_CONTROL
                            624 	.globl _MCU_INT9_CONTROL
                            625 	.globl _MCU_INT8_CONTROL
                            626 	.globl _MCU_INT7_CONTROL
                            627 	.globl _MCU_INT6_CONTROL
                            628 	.globl _MCU_INT5_CONTROL
                            629 	.globl _MCU_INT4_CONTROL
                            630 	.globl _MCU_INT3_CONTROL
                            631 	.globl _MCU_INT2_CONTROL
                            632 	.globl _MCU_INT1_CONTROL
                            633 	.globl _MCU_INT0_CONTROL
                            634 	.globl _MCU_STATUS3_LANE
                            635 	.globl _MCU_STATUS2_LANE
                            636 	.globl _MCU_STATUS1_LANE
                            637 	.globl _MCU_STATUS0_LANE
                            638 	.globl _LANE_SYSTEM0
                            639 	.globl _CACHE_DEBUG1
                            640 	.globl _CACHE_DEBUG0
                            641 	.globl _MCU_GPIO
                            642 	.globl _MCU_CONTROL_LANE
                            643 	.globl _LANE_32G_PRESET_CFG16_LANE
                            644 	.globl _LANE_32G_PRESET_CFG14_LANE
                            645 	.globl _LANE_32G_PRESET_CFG12_LANE
                            646 	.globl _LANE_32G_PRESET_CFG10_LANE
                            647 	.globl _LANE_32G_PRESET_CFG8_LANE
                            648 	.globl _LANE_32G_PRESET_CFG6_LANE
                            649 	.globl _LANE_32G_PRESET_CFG4_LANE
                            650 	.globl _LANE_32G_PRESET_CFG2_LANE
                            651 	.globl _LANE_32G_PRESET_CFG0_LANE
                            652 	.globl _LANE_EQ_32G_CFG0_LANE
                            653 	.globl _LANE_16G_PRESET_CFG16_LANE
                            654 	.globl _LANE_16G_PRESET_CFG14_LANE
                            655 	.globl _LANE_16G_PRESET_CFG12_LANE
                            656 	.globl _LANE_16G_PRESET_CFG10_LANE
                            657 	.globl _LANE_16G_PRESET_CFG8_LANE
                            658 	.globl _LANE_16G_PRESET_CFG6_LANE
                            659 	.globl _LANE_16G_PRESET_CFG4_LANE
                            660 	.globl _LANE_16G_PRESET_CFG2_LANE
                            661 	.globl _LANE_16G_PRESET_CFG0_LANE
                            662 	.globl _LANE_EQ_16G_CFG0_LANE
                            663 	.globl _LANE_REMOTE_SET_LANE
                            664 	.globl _LANE_COEFF_MAX0_LANE
                            665 	.globl _LANE_PRESET_CFG16_LANE
                            666 	.globl _LANE_PRESET_CFG14_LANE
                            667 	.globl _LANE_PRESET_CFG12_LANE
                            668 	.globl _LANE_PRESET_CFG10_LANE
                            669 	.globl _LANE_PRESET_CFG8_LANE
                            670 	.globl _LANE_PRESET_CFG6_LANE
                            671 	.globl _LANE_PRESET_CFG4_LANE
                            672 	.globl _LANE_PRESET_CFG2_LANE
                            673 	.globl _LANE_PRESET_CFG0_LANE
                            674 	.globl _LANE_EQ_CFG1_LANE
                            675 	.globl _LANE_EQ_CFG0_LANE
                            676 	.globl _LANE_USB_DP_CFG2_LANE
                            677 	.globl _LANE_USB_DP_CFG1_LANE
                            678 	.globl _LANE_DP_PIE8_CFG0_LANE
                            679 	.globl _LANE_CFG_STATUS3_LANE
                            680 	.globl _LANE_CFG4
                            681 	.globl _LANE_CFG2_LANE
                            682 	.globl _LANE_CFG_STATUS2_LANE
                            683 	.globl _LANE_STATUS0
                            684 	.globl _LANE_CFG0
                            685 	.globl _SQ_REG0
                            686 	.globl _DTL_REG3
                            687 	.globl _DTL_REG2
                            688 	.globl _DTL_REG1
                            689 	.globl _DTL_REG0
                            690 	.globl _RX_LANE_INTERRUPT_REG1
                            691 	.globl _RX_CALIBRATION_REG
                            692 	.globl _INPUT_RX_PIN_REG3_LANE
                            693 	.globl _RX_DATA_PATH_REG
                            694 	.globl _RX_LANE_INTERRUPT_MASK
                            695 	.globl _RX_LANE_INTERRUPT
                            696 	.globl _CDR_LOCK_REG
                            697 	.globl _FRAME_SYNC_DET_REG6
                            698 	.globl _FRAME_SYNC_DET_REG5
                            699 	.globl _FRAME_SYNC_DET_REG4
                            700 	.globl _FRAME_SYNC_DET_REG3
                            701 	.globl _FRAME_SYNC_DET_REG2
                            702 	.globl _FRAME_SYNC_DET_REG1
                            703 	.globl _FRAME_SYNC_DET_REG0
                            704 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            705 	.globl _DIG_RX_RSVD_REG0
                            706 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            707 	.globl _INPUT_RX_PIN_REG2_LANE
                            708 	.globl _INPUT_RX_PIN_REG1_LANE
                            709 	.globl _INPUT_RX_PIN_REG0_LANE
                            710 	.globl _RX_SYSTEM_LANE
                            711 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            712 	.globl _MON_TOP
                            713 	.globl _ANALOG_TX_REALTIME_REG_1
                            714 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            715 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            716 	.globl __FIELDNAME__LANE
                            717 	.globl _INPUT_TX_PIN_REG5_LANE
                            718 	.globl _DIG_TX_RSVD_REG0
                            719 	.globl _TX_CALIBRATION_LANE
                            720 	.globl _INPUT_TX_PIN_REG4_LANE
                            721 	.globl _TX_SYSTEM_LANE
                            722 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            723 	.globl _SPD_CTRL_INTERRUPT_REG2
                            724 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            725 	.globl _TX_SPEED_CONVERT_LANE
                            726 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            727 	.globl _PM_CTRL_INTERRUPT_REG2
                            728 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            729 	.globl _INPUT_TX_PIN_REG3_LANE
                            730 	.globl _INPUT_TX_PIN_REG2_LANE
                            731 	.globl _INPUT_TX_PIN_REG1_LANE
                            732 	.globl _INPUT_TX_PIN_REG0_LANE
                            733 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            734 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            735 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            822 	.globl _ANA_DFEO_REG_0B
                            823 	.globl _ANA_DFEO_REG_0A
                            824 	.globl _ANA_DFEO_REG_09
                            825 	.globl _ANA_DFEO_REG_08
                            826 	.globl _ANA_DFEO_REG_07
                            827 	.globl _ANA_DFEO_REG_06
                            828 	.globl _ANA_DFEO_REG_05
                            829 	.globl _ANA_DFEO_REG_04
                            830 	.globl _ANA_DFEO_REG_03
                            831 	.globl _ANA_DFEO_REG_02
                            832 	.globl _ANA_DFEO_REG_01
                            833 	.globl _ANA_DFEO_REG_00
                            834 	.globl _ANA_DFEO_REG_27
                            835 	.globl _ANA_DFEO_REG_26
                            836 	.globl _ANA_DFEO_REG_25
                            837 	.globl _ANA_DFEO_REG_24
                            838 	.globl _ANA_DFEO_REG_23
                            839 	.globl _ANA_DFEO_REG_22
                            840 	.globl _ANA_DFEO_REG_21
                            841 	.globl _ANA_DFEO_REG_20
                            842 	.globl _ANA_DFEO_REG_1F
                            843 	.globl _ANA_DFEO_REG_1E
                            844 	.globl _ANA_DFEO_REG_1D
                            845 	.globl _ANA_DFEO_REG_1C
                            846 	.globl _ANA_DFEO_REG_1B
                            847 	.globl _ANA_DFEO_REG_1A
                            848 	.globl _ANA_DFEO_REG_19
                            849 	.globl _ANA_DFEO_REG_18
                            850 	.globl _ANA_DFEO_REG_17
                            851 	.globl _ANA_DFEO_REG_16
                            852 	.globl _ANA_DFEO_REG_15
                            853 	.globl _ANA_DFEO_REG_14
                            854 	.globl _ANA_DFEO_REG_13
                            855 	.globl _ANA_DFEO_REG_12
                            856 	.globl _ANA_DFEO_REG_11
                            857 	.globl _ANA_DFEO_REG_10
                            858 	.globl _ANA_DFEO_REG_0F
                            859 	.globl _ANA_DFEO_REG_0E
                            860 	.globl _ANA_DFEO_REG_0D
                            861 	.globl _ANA_DFEO_REG_0C
                            862 	.globl _ANA_DFEE_REG_1D
                            863 	.globl _ANA_DFEE_REG_1C
                            864 	.globl _ANA_DFEE_REG_1B
                            865 	.globl _ANA_DFEE_REG_1A
                            866 	.globl _ANA_DFEE_REG_19
                            867 	.globl _ANA_DFEE_REG_18
                            868 	.globl _ANA_DFEE_REG_17
                            869 	.globl _ANA_DFEE_REG_16
                            870 	.globl _ANA_DFEE_REG_15
                            871 	.globl _ANA_DFEE_REG_14
                            872 	.globl _ANA_DFEE_REG_13
                            873 	.globl _ANA_DFEE_REG_12
                            874 	.globl _ANA_DFEE_REG_11
                            875 	.globl _ANA_DFEE_REG_10
                            876 	.globl _ANA_DFEE_REG_0F
                            877 	.globl _ANA_DFEE_REG_0E
                            878 	.globl _ANA_DFEE_REG_0D
                            879 	.globl _ANA_DFEE_REG_0C
                            880 	.globl _ANA_DFEE_REG_0B
                            881 	.globl _ANA_DFEE_REG_0A
                            882 	.globl _ANA_DFEE_REG_09
                            883 	.globl _ANA_DFEE_REG_08
                            884 	.globl _ANA_DFEE_REG_07
                            885 	.globl _ANA_DFEE_REG_06
                            886 	.globl _ANA_DFEE_REG_05
                            887 	.globl _ANA_DFEE_REG_04
                            888 	.globl _ANA_DFEE_REG_03
                            889 	.globl _ANA_DFEE_REG_02
                            890 	.globl _ANA_DFEE_REG_01
                            891 	.globl _ANA_DFEE_REG_00
                            892 	.globl _ANA_DFEE_REG_27
                            893 	.globl _ANA_DFEE_REG_26
                            894 	.globl _ANA_DFEE_REG_25
                            895 	.globl _ANA_DFEE_REG_24
                            896 	.globl _ANA_DFEE_REG_23
                            897 	.globl _ANA_DFEE_REG_22
                            898 	.globl _ANA_DFEE_REG_21
                            899 	.globl _ANA_DFEE_REG_20
                            900 	.globl _ANA_DFEE_REG_1F
                            901 	.globl _ANA_DFEE_REG_1E
                            902 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            935 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            965 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            981 	.globl _tximp_cal
                            982 	.globl _rximp_cal
                            983 ;--------------------------------------------------------
                            984 ; special function registers
                            985 ;--------------------------------------------------------
                            986 	.area RSEG    (ABS,DATA)
   0000                     987 	.org 0x0000
                    0080    988 _P0	=	0x0080
                    0082    989 _DPL	=	0x0082
                    0083    990 _DPH	=	0x0083
                    0086    991 _WDTREL	=	0x0086
                    0087    992 _PCON	=	0x0087
                    0088    993 _TCON	=	0x0088
                    0089    994 _TMOD	=	0x0089
                    008A    995 _TL0	=	0x008a
                    008B    996 _TL1	=	0x008b
                    008C    997 _TH0	=	0x008c
                    008D    998 _TH1	=	0x008d
                    008E    999 _CKCON	=	0x008e
                    0090   1000 _P1	=	0x0090
                    0092   1001 _DPS	=	0x0092
                    0094   1002 _PSBANK	=	0x0094
                    0098   1003 _SCON	=	0x0098
                    0099   1004 _SBUF	=	0x0099
                    009A   1005 _IEN2	=	0x009a
                    00A0   1006 _P2	=	0x00a0
                    00A1   1007 _DMAS0	=	0x00a1
                    00A2   1008 _DMAS1	=	0x00a2
                    00A3   1009 _DMAS2	=	0x00a3
                    00A4   1010 _DMAT0	=	0x00a4
                    00A5   1011 _DMAT1	=	0x00a5
                    00A6   1012 _DMAT2	=	0x00a6
                    00A8   1013 _IEN0	=	0x00a8
                    00A9   1014 _IP0	=	0x00a9
                    00AA   1015 _S0RELL	=	0x00aa
                    00B0   1016 _P3	=	0x00b0
                    00B1   1017 _DMAC0	=	0x00b1
                    00B2   1018 _DMAC1	=	0x00b2
                    00B3   1019 _DMAC2	=	0x00b3
                    00B4   1020 _DMASEL	=	0x00b4
                    00B5   1021 _DMAM0	=	0x00b5
                    00B6   1022 _DMAM1	=	0x00b6
                    00B8   1023 _IEN1	=	0x00b8
                    00B9   1024 _IP1	=	0x00b9
                    00BA   1025 _S0RELH	=	0x00ba
                    00C0   1026 _IRCON	=	0x00c0
                    00C1   1027 _CCEN	=	0x00c1
                    00C8   1028 _T2CON	=	0x00c8
                    00CA   1029 _RCAP2L	=	0x00ca
                    00CB   1030 _RCAP2H	=	0x00cb
                    00CC   1031 _TL2	=	0x00cc
                    00CD   1032 _TH2	=	0x00cd
                    00D0   1033 _PSW	=	0x00d0
                    00D8   1034 _ADCON	=	0x00d8
                    00E0   1035 _ACC	=	0x00e0
                    00E8   1036 _EIE	=	0x00e8
                    00F0   1037 _B	=	0x00f0
                    00F7   1038 _SRST	=	0x00f7
                    8C8A   1039 _TMR0	=	0x8c8a
                    8D8B   1040 _TMR1	=	0x8d8b
                    CDCC   1041 _TMR2	=	0xcdcc
                    A2A1   1042 _DMASA	=	0xa2a1
                    A5A4   1043 _DMATA	=	0xa5a4
                    B2B1   1044 _DMAC	=	0xb2b1
                           1045 ;--------------------------------------------------------
                           1046 ; special function bits
                           1047 ;--------------------------------------------------------
                           1048 	.area RSEG    (ABS,DATA)
   0000                    1049 	.org 0x0000
                    0080   1050 _P0_0	=	0x0080
                    0081   1051 _P0_1	=	0x0081
                    0082   1052 _P0_2	=	0x0082
                    0083   1053 _P0_3	=	0x0083
                    0084   1054 _P0_4	=	0x0084
                    0085   1055 _P0_5	=	0x0085
                    0086   1056 _P0_6	=	0x0086
                    0087   1057 _P0_7	=	0x0087
                    0090   1058 _P1_0	=	0x0090
                    0091   1059 _P1_1	=	0x0091
                    0092   1060 _P1_2	=	0x0092
                    0093   1061 _P1_3	=	0x0093
                    0094   1062 _P1_4	=	0x0094
                    0095   1063 _P1_5	=	0x0095
                    0096   1064 _P1_6	=	0x0096
                    0097   1065 _P1_7	=	0x0097
                    00A0   1066 _P2_0	=	0x00a0
                    00A1   1067 _P2_1	=	0x00a1
                    00A2   1068 _P2_2	=	0x00a2
                    00A3   1069 _P2_3	=	0x00a3
                    00A4   1070 _P2_4	=	0x00a4
                    00A5   1071 _P2_5	=	0x00a5
                    00A6   1072 _P2_6	=	0x00a6
                    00A7   1073 _P2_7	=	0x00a7
                    00B0   1074 _P3_0	=	0x00b0
                    00B1   1075 _P3_1	=	0x00b1
                    00B2   1076 _P3_2	=	0x00b2
                    00B3   1077 _P3_3	=	0x00b3
                    00B4   1078 _P3_4	=	0x00b4
                    00B5   1079 _P3_5	=	0x00b5
                    00B6   1080 _P3_6	=	0x00b6
                    00B7   1081 _P3_7	=	0x00b7
                    0088   1082 _IT0	=	0x0088
                    0089   1083 _IE0	=	0x0089
                    008A   1084 _IT1	=	0x008a
                    008B   1085 _IE1	=	0x008b
                    008C   1086 _TR0	=	0x008c
                    008D   1087 _TF0	=	0x008d
                    008E   1088 _TR1	=	0x008e
                    008F   1089 _TF1	=	0x008f
                    00A8   1090 _EX0	=	0x00a8
                    00A9   1091 _ET0	=	0x00a9
                    00AA   1092 _EX1	=	0x00aa
                    00AB   1093 _ET1	=	0x00ab
                    00AC   1094 _ES	=	0x00ac
                    00AD   1095 _ET2	=	0x00ad
                    00AE   1096 _WDT	=	0x00ae
                    00AF   1097 _EA	=	0x00af
                    00B8   1098 _EX7	=	0x00b8
                    00B9   1099 _EX2	=	0x00b9
                    00BA   1100 _EX3	=	0x00ba
                    00BB   1101 _EX4	=	0x00bb
                    00BC   1102 _EX5	=	0x00bc
                    00BD   1103 _EX6	=	0x00bd
                    00BE   1104 _PS1	=	0x00be
                    009A   1105 _ES1	=	0x009a
                    009B   1106 _EX8	=	0x009b
                    009C   1107 _EX9	=	0x009c
                    009D   1108 _EX10	=	0x009d
                    009E   1109 _EX11	=	0x009e
                    009F   1110 _EX12	=	0x009f
                    0098   1111 _RI	=	0x0098
                    0099   1112 _TI	=	0x0099
                    00C6   1113 _TF2	=	0x00c6
                           1114 ;--------------------------------------------------------
                           1115 ; overlayable register banks
                           1116 ;--------------------------------------------------------
                           1117 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1118 	.ds 8
                           1119 ;--------------------------------------------------------
                           1120 ; overlayable bit register bank
                           1121 ;--------------------------------------------------------
                           1122 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1123 bits:
   0025                    1124 	.ds 1
                    8000   1125 	b0 = bits[0]
                    8100   1126 	b1 = bits[1]
                    8200   1127 	b2 = bits[2]
                    8300   1128 	b3 = bits[3]
                    8400   1129 	b4 = bits[4]
                    8500   1130 	b5 = bits[5]
                    8600   1131 	b6 = bits[6]
                    8700   1132 	b7 = bits[7]
                           1133 ;--------------------------------------------------------
                           1134 ; internal ram data
                           1135 ;--------------------------------------------------------
                           1136 	.area DSEG    (DATA)
                           1137 ;--------------------------------------------------------
                           1138 ; overlayable items in internal ram 
                           1139 ;--------------------------------------------------------
                           1140 	.area OSEG    (OVR,DATA)
                           1141 ;--------------------------------------------------------
                           1142 ; indirectly addressable internal ram data
                           1143 ;--------------------------------------------------------
                           1144 	.area ISEG    (DATA)
                           1145 ;--------------------------------------------------------
                           1146 ; absolute internal ram data
                           1147 ;--------------------------------------------------------
                           1148 	.area IABS    (ABS,DATA)
                           1149 	.area IABS    (ABS,DATA)
                           1150 ;--------------------------------------------------------
                           1151 ; bit data
                           1152 ;--------------------------------------------------------
                           1153 	.area BSEG    (BIT)
                           1154 ;--------------------------------------------------------
                           1155 ; paged external ram data
                           1156 ;--------------------------------------------------------
                           1157 	.area PSEG    (PAG,XDATA)
                           1158 ;--------------------------------------------------------
                           1159 ; external ram data
                           1160 ;--------------------------------------------------------
                           1161 	.area XSEG    (XDATA)
                    1000   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1178 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1179 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1180 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1181 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1182 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1183 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1184 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1185 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1186 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1187 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1188 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1189 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1190 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1191 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1192 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1193 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1194 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1195 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1196 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1197 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1198 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1199 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1200 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1201 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1202 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1203 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1204 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1205 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1206 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1207 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1208 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1209 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1210 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1211 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1212 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1213 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1214 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1215 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1216 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1217 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1218 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1219 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1220 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1221 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1222 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1223 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1224 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1225 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1226 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1227 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1228 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1229 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1230 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1231 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1232 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1233 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1234 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1235 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1236 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1237 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1238 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1239 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1240 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1241 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1242 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1243 _ANA_DFEE_REG_20	=	0x0480
                    0484   1244 _ANA_DFEE_REG_21	=	0x0484
                    0488   1245 _ANA_DFEE_REG_22	=	0x0488
                    048C   1246 _ANA_DFEE_REG_23	=	0x048c
                    0490   1247 _ANA_DFEE_REG_24	=	0x0490
                    0494   1248 _ANA_DFEE_REG_25	=	0x0494
                    0498   1249 _ANA_DFEE_REG_26	=	0x0498
                    049C   1250 _ANA_DFEE_REG_27	=	0x049c
                    0400   1251 _ANA_DFEE_REG_00	=	0x0400
                    0404   1252 _ANA_DFEE_REG_01	=	0x0404
                    0408   1253 _ANA_DFEE_REG_02	=	0x0408
                    040C   1254 _ANA_DFEE_REG_03	=	0x040c
                    0410   1255 _ANA_DFEE_REG_04	=	0x0410
                    0414   1256 _ANA_DFEE_REG_05	=	0x0414
                    0418   1257 _ANA_DFEE_REG_06	=	0x0418
                    041C   1258 _ANA_DFEE_REG_07	=	0x041c
                    0420   1259 _ANA_DFEE_REG_08	=	0x0420
                    0424   1260 _ANA_DFEE_REG_09	=	0x0424
                    0428   1261 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1262 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1263 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1264 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1265 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1266 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1267 _ANA_DFEE_REG_10	=	0x0440
                    0444   1268 _ANA_DFEE_REG_11	=	0x0444
                    0448   1269 _ANA_DFEE_REG_12	=	0x0448
                    044C   1270 _ANA_DFEE_REG_13	=	0x044c
                    0450   1271 _ANA_DFEE_REG_14	=	0x0450
                    0454   1272 _ANA_DFEE_REG_15	=	0x0454
                    0458   1273 _ANA_DFEE_REG_16	=	0x0458
                    045C   1274 _ANA_DFEE_REG_17	=	0x045c
                    0460   1275 _ANA_DFEE_REG_18	=	0x0460
                    0464   1276 _ANA_DFEE_REG_19	=	0x0464
                    0468   1277 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1278 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1279 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1280 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1281 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1282 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1283 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1284 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1285 _ANA_DFEO_REG_10	=	0x0840
                    0844   1286 _ANA_DFEO_REG_11	=	0x0844
                    0848   1287 _ANA_DFEO_REG_12	=	0x0848
                    084C   1288 _ANA_DFEO_REG_13	=	0x084c
                    0850   1289 _ANA_DFEO_REG_14	=	0x0850
                    0854   1290 _ANA_DFEO_REG_15	=	0x0854
                    0858   1291 _ANA_DFEO_REG_16	=	0x0858
                    085C   1292 _ANA_DFEO_REG_17	=	0x085c
                    0860   1293 _ANA_DFEO_REG_18	=	0x0860
                    0864   1294 _ANA_DFEO_REG_19	=	0x0864
                    0868   1295 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1296 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1297 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1298 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1299 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1300 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1301 _ANA_DFEO_REG_20	=	0x0880
                    0884   1302 _ANA_DFEO_REG_21	=	0x0884
                    0888   1303 _ANA_DFEO_REG_22	=	0x0888
                    088C   1304 _ANA_DFEO_REG_23	=	0x088c
                    0890   1305 _ANA_DFEO_REG_24	=	0x0890
                    0894   1306 _ANA_DFEO_REG_25	=	0x0894
                    0898   1307 _ANA_DFEO_REG_26	=	0x0898
                    089C   1308 _ANA_DFEO_REG_27	=	0x089c
                    0800   1309 _ANA_DFEO_REG_00	=	0x0800
                    0804   1310 _ANA_DFEO_REG_01	=	0x0804
                    0808   1311 _ANA_DFEO_REG_02	=	0x0808
                    080C   1312 _ANA_DFEO_REG_03	=	0x080c
                    0810   1313 _ANA_DFEO_REG_04	=	0x0810
                    0814   1314 _ANA_DFEO_REG_05	=	0x0814
                    0818   1315 _ANA_DFEO_REG_06	=	0x0818
                    081C   1316 _ANA_DFEO_REG_07	=	0x081c
                    0820   1317 _ANA_DFEO_REG_08	=	0x0820
                    0824   1318 _ANA_DFEO_REG_09	=	0x0824
                    0828   1319 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1320 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1321 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1322 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1323 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1324 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1325 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1326 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1327 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1328 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1329 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1330 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1331 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1332 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1333 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1334 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1335 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1336 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1337 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1338 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1339 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1340 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1341 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1342 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1343 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1344 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1345 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1346 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1347 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1348 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1349 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1350 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1351 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1352 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1353 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1354 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1355 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1356 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1357 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1358 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1359 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1360 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1361 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1362 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1363 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1364 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1365 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1366 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1367 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1368 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1369 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1370 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1371 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1372 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1373 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1374 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1375 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1376 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1377 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1378 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1379 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1380 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1381 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1382 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1383 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1384 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1385 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1386 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1387 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1388 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1389 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1390 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1391 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1392 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1393 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1394 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1395 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1396 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1397 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1398 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1399 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1400 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1401 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1402 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1403 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1404 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1405 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1406 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1407 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1408 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1409 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1410 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1411 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1412 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1413 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1414 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1415 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1416 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1417 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1418 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1419 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1420 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1421 _TX_SYSTEM_LANE	=	0x2034
                    203C   1422 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1423 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1424 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1425 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1426 __FIELDNAME__LANE	=	0x204c
                    2050   1427 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1428 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1429 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1430 _MON_TOP	=	0x205c
                    2100   1431 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1432 _RX_SYSTEM_LANE	=	0x2104
                    2108   1433 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1434 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1435 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1436 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1437 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1438 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1439 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1440 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1441 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1442 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1443 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1444 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1445 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1446 _CDR_LOCK_REG	=	0x213c
                    2140   1447 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1448 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1449 _RX_DATA_PATH_REG	=	0x2148
                    214C   1450 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1451 _RX_CALIBRATION_REG	=	0x2150
                    2158   1452 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1453 _DTL_REG0	=	0x2160
                    2164   1454 _DTL_REG1	=	0x2164
                    2168   1455 _DTL_REG2	=	0x2168
                    216C   1456 _DTL_REG3	=	0x216c
                    2170   1457 _SQ_REG0	=	0x2170
                    4000   1458 _LANE_CFG0	=	0x4000
                    4004   1459 _LANE_STATUS0	=	0x4004
                    4008   1460 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1461 _LANE_CFG2_LANE	=	0x400c
                    4010   1462 _LANE_CFG4	=	0x4010
                    4014   1463 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1464 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1465 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1466 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1467 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1468 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1469 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1470 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1471 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1472 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1473 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1474 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1475 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1476 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1477 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1478 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1479 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1480 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1481 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1482 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1483 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1484 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1485 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1486 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1487 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1488 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1489 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1490 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1491 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1492 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1493 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1494 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1495 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1496 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1497 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1498 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1499 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1500 _MCU_CONTROL_LANE	=	0x2200
                    2204   1501 _MCU_GPIO	=	0x2204
                    2208   1502 _CACHE_DEBUG0	=	0x2208
                    220C   1503 _CACHE_DEBUG1	=	0x220c
                    2210   1504 _LANE_SYSTEM0	=	0x2210
                    2230   1505 _MCU_STATUS0_LANE	=	0x2230
                    2234   1506 _MCU_STATUS1_LANE	=	0x2234
                    2238   1507 _MCU_STATUS2_LANE	=	0x2238
                    223C   1508 _MCU_STATUS3_LANE	=	0x223c
                    2240   1509 _MCU_INT0_CONTROL	=	0x2240
                    2244   1510 _MCU_INT1_CONTROL	=	0x2244
                    2248   1511 _MCU_INT2_CONTROL	=	0x2248
                    224C   1512 _MCU_INT3_CONTROL	=	0x224c
                    2250   1513 _MCU_INT4_CONTROL	=	0x2250
                    2254   1514 _MCU_INT5_CONTROL	=	0x2254
                    2258   1515 _MCU_INT6_CONTROL	=	0x2258
                    225C   1516 _MCU_INT7_CONTROL	=	0x225c
                    2260   1517 _MCU_INT8_CONTROL	=	0x2260
                    2264   1518 _MCU_INT9_CONTROL	=	0x2264
                    2268   1519 _MCU_INT10_CONTROL	=	0x2268
                    226C   1520 _MCU_INT11_CONTROL	=	0x226c
                    2270   1521 _MCU_INT12_CONTROL	=	0x2270
                    2274   1522 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1523 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1524 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1525 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1526 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1527 _MCU_IRQ_LANE	=	0x2288
                    228C   1528 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1529 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1530 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1531 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1532 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1533 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1534 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1535 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1536 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1537 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1538 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1539 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1540 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1541 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1542 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1543 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1544 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1545 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1546 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1547 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1548 _MCU_WDT_LANE	=	0x22dc
                    22E0   1549 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1550 _MCU_COMMAND0	=	0x22e4
                    22F4   1551 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1552 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1553 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1554 _PT_CONTROL0	=	0x2300
                    2304   1555 _PT_CONTROL1	=	0x2304
                    2308   1556 _PT_USER_PATTERN0	=	0x2308
                    230C   1557 _PT_USER_PATTERN1	=	0x230c
                    2310   1558 _PT_USER_PATTERN2	=	0x2310
                    2314   1559 _PT_COUNTER0	=	0x2314
                    2318   1560 _PT_COUNTER1	=	0x2318
                    231C   1561 _PT_COUNTER2	=	0x231c
                    2400   1562 _DFE_CTRL_REG0	=	0x2400
                    2404   1563 _DFE_CTRL_REG1	=	0x2404
                    2408   1564 _DFE_CTRL_REG2	=	0x2408
                    240C   1565 _DFE_CTRL_REG3	=	0x240c
                    2410   1566 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1567 _DFE_CTRL_REG4	=	0x2414
                    2418   1568 _DFE_ANA_REG0	=	0x2418
                    241C   1569 _DFE_ANA_REG1	=	0x241c
                    2420   1570 _DFE_STEP_REG0	=	0x2420
                    2424   1571 _DFE_STEP_REG1	=	0x2424
                    2430   1572 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1573 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1574 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1575 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1576 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1577 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1578 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1579 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1580 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1581 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1582 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1583 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1584 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1585 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1586 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1587 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1588 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1589 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1590 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1591 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1592 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1593 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1594 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1595 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1596 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1597 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1598 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1599 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1600 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1601 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1602 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1603 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1604 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1605 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1606 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1607 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1608 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1609 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1610 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1611 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1612 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1613 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1614 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1615 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1616 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1617 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1618 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1619 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1620 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1621 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1622 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1623 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1624 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1625 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1626 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1627 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1628 _CAL_OFST_REG0	=	0x2518
                    251C   1629 _CAL_OFST_REG1	=	0x251c
                    2520   1630 _CAL_OFST_REG2	=	0x2520
                    2530   1631 _DFE_DCE_REG0	=	0x2530
                    2540   1632 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1633 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1634 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1635 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1636 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1637 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1638 _EOM_VLD_REG0	=	0x2560
                    2564   1639 _EOM_VLD_REG1	=	0x2564
                    2568   1640 _EOM_VLD_REG2	=	0x2568
                    256C   1641 _EOM_VLD_REG3	=	0x256c
                    2570   1642 _EOM_ERR_REG0	=	0x2570
                    2574   1643 _EOM_ERR_REG1	=	0x2574
                    2578   1644 _EOM_ERR_REG2	=	0x2578
                    257C   1645 _EOM_ERR_REG3	=	0x257c
                    2580   1646 _EOM_REG0	=	0x2580
                    25F0   1647 _EOM_VLD_REG4	=	0x25f0
                    25F4   1648 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1649 _CAL_CTRL1_LANE	=	0x6000
                    6004   1650 _CAL_CTRL2_LANE	=	0x6004
                    6008   1651 _CAL_CTRL3_LANE	=	0x6008
                    600C   1652 _CAL_CTRL4_LANE	=	0x600c
                    6010   1653 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1654 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1655 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1656 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1657 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1658 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1659 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1660 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1661 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1662 _DFE_CONTROL_0	=	0x6034
                    6038   1663 _DFE_CONTROL_1	=	0x6038
                    6040   1664 _DFE_CONTROL_2	=	0x6040
                    6044   1665 _DFE_CONTROL_3	=	0x6044
                    6048   1666 _DFE_CONTROL_4	=	0x6048
                    604C   1667 _DFE_CONTROL_5	=	0x604c
                    6050   1668 _TRAIN_CONTROL_0	=	0x6050
                    6054   1669 _TRAIN_CONTROL_1	=	0x6054
                    6058   1670 _TRAIN_CONTROL_2	=	0x6058
                    605C   1671 _RPTA_CONFIG_0	=	0x605c
                    6060   1672 _RPTA_CONFIG_1	=	0x6060
                    6064   1673 _DLL_CAL	=	0x6064
                    6068   1674 _TRAIN_PARA_0	=	0x6068
                    606C   1675 _TRAIN_PARA_1	=	0x606c
                    6070   1676 _TRAIN_PARA_2	=	0x6070
                    6074   1677 _TRAIN_PARA_3	=	0x6074
                    6078   1678 _DFE_CONTROL_6	=	0x6078
                    607C   1679 _DFE_TEST_0	=	0x607c
                    6080   1680 _DFE_TEST_1	=	0x6080
                    6084   1681 _DFE_TEST_4	=	0x6084
                    6088   1682 _DFE_TEST_5	=	0x6088
                    608C   1683 _DFE_CONTROL_7	=	0x608c
                    6090   1684 _DFE_CONTROL_8	=	0x6090
                    6094   1685 _DFE_CONTROL_9	=	0x6094
                    6098   1686 _DFE_CONTROL_10	=	0x6098
                    609C   1687 _DFE_CONTROL_11	=	0x609c
                    60A0   1688 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1689 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1690 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1691 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1692 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1693 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1694 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1695 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1696 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1697 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1698 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1699 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1700 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1701 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1702 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1703 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1704 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1705 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1706 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1707 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1708 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1709 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1710 _END_XDAT_LANE	=	0x60f8
                    A000   1711 _TX_CMN_REG	=	0xa000
                    A008   1712 _DTX_REG0	=	0xa008
                    A00C   1713 _DTX_REG1	=	0xa00c
                    A010   1714 _DTX_REG2	=	0xa010
                    A014   1715 _DTX_REG3	=	0xa014
                    A018   1716 _DTX_REG4	=	0xa018
                    A01C   1717 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1718 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1719 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1720 _SRIS_REG0	=	0xa02c
                    A030   1721 _SRIS_REG1	=	0xa030
                    A100   1722 _RX_CMN_0	=	0xa100
                    A110   1723 _DFE_STATIC_REG0	=	0xa110
                    A114   1724 _DFE_STATIC_REG1	=	0xa114
                    A118   1725 _DFE_STATIC_REG3	=	0xa118
                    A11C   1726 _DFE_STATIC_REG4	=	0xa11c
                    A120   1727 _DFE_STATIC_REG5	=	0xa120
                    A124   1728 _DFE_STATIC_REG6	=	0xa124
                    4200   1729 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1730 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1731 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1732 _GLOB_MISC_CTRL	=	0x420c
                    4210   1733 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1734 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1735 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1736 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1737 _GLOB_PM_CFG0	=	0x4220
                    4224   1738 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1739 _GLOB_COUNTER_HI	=	0x4228
                    422C   1740 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1741 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1742 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1743 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1744 _GLOB_BIST_CTRL	=	0x423c
                    4240   1745 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1746 _GLOB_BIST_START	=	0x4244
                    4248   1747 _GLOB_BIST_MASK	=	0x4248
                    424C   1748 _GLOB_BIST_RESULT	=	0x424c
                    4250   1749 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1750 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1751 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1752 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1753 _MCU_CONTROL_0	=	0xa200
                    A204   1754 _MCU_CONTROL_1	=	0xa204
                    A208   1755 _MCU_CONTROL_2	=	0xa208
                    A20C   1756 _MCU_CONTROL_3	=	0xa20c
                    A210   1757 _MCU_CONTROL_4	=	0xa210
                    A214   1758 _MCU_DEBUG0	=	0xa214
                    A218   1759 _MCU_DEBUG1	=	0xa218
                    A21C   1760 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1761 _MEMORY_CONTROL_1	=	0xa220
                    A224   1762 _MEMORY_CONTROL_2	=	0xa224
                    A228   1763 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1764 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1765 _MCU_INFO_0	=	0xa234
                    A238   1766 _MCU_INFO_1	=	0xa238
                    A23C   1767 _MCU_INFO_2	=	0xa23c
                    A240   1768 _MCU_INFO_3	=	0xa240
                    A244   1769 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1770 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1771 _MEM_IRQ	=	0xa2e4
                    A2E8   1772 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1773 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1774 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1775 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1776 _MCU_SYNC1	=	0xa2f8
                    A2FC   1777 _MCU_SYNC2	=	0xa2fc
                    A300   1778 _TEST0	=	0xa300
                    A304   1779 _TEST1	=	0xa304
                    A308   1780 _TEST2	=	0xa308
                    A30C   1781 _TEST3	=	0xa30c
                    A310   1782 _TEST4	=	0xa310
                    A314   1783 _SYSTEM	=	0xa314
                    A318   1784 _PM_CMN_REG1	=	0xa318
                    A31C   1785 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1786 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1787 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1788 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1789 _PLLCAL_REG0	=	0xa32c
                    A330   1790 _PLLCAL_REG1	=	0xa330
                    A334   1791 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1792 _SPD_CMN_REG1	=	0xa338
                    A33C   1793 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1794 _CMN_CALIBRATION	=	0xa340
                    A344   1795 __FIELDNAME_	=	0xa344
                    A348   1796 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1797 _PM_CMN_REG2	=	0xa34c
                    A354   1798 _TEST5	=	0xa354
                    A358   1799 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1800 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1801 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1802 _MCU_SDT_CMN	=	0xa364
                    A368   1803 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1804 _MCU_INT_ADDR	=	0xa36c
                    A370   1805 _CMN_ISR_2	=	0xa370
                    A374   1806 _CMN_ISR_MASK_2	=	0xa374
                    A378   1807 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1808 _CMN_MCU_GPIO	=	0xa37c
                    A380   1809 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1810 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1811 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1812 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1813 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1814 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1815 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1816 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1817 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1818 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1819 _CMN_ISR_1	=	0xa3a8
                    A3AC   1820 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1821 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1822 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1823 _CID_REG0	=	0xa3f8
                    A3FC   1824 _CID_REG1	=	0xa3fc
                    E600   1825 _FW_REV	=	0xe600
                    E604   1826 _CONTROL_CONFIG0	=	0xe604
                    E608   1827 _CONTROL_CONFIG1	=	0xe608
                    E60C   1828 _CONTROL_CONFIG2	=	0xe60c
                    E610   1829 _CONTROL_CONFIG3	=	0xe610
                    E614   1830 _CONTROL_CONFIG4	=	0xe614
                    E618   1831 _CONTROL_CONFIG5	=	0xe618
                    E61C   1832 _CONTROL_CONFIG6	=	0xe61c
                    E620   1833 _CONTROL_CONFIG7	=	0xe620
                    E624   1834 _CAL_DATA0	=	0xe624
                    E628   1835 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1836 _CONTROL_CONFIG8	=	0xe62c
                    E630   1837 _CONTROL_CONFIG9	=	0xe630
                    E634   1838 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1839 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1840 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1841 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1842 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1843 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1844 _CAL_STATUS_READ	=	0xe64c
                    E650   1845 _MCU_CONFIG	=	0xe650
                    E654   1846 _CAL_DATA1	=	0xe654
                    E658   1847 _LOOP_CNTS	=	0xe658
                    E65C   1848 _MCU_CONFIG1	=	0xe65c
                    E660   1849 _TIMER_SEL1	=	0xe660
                    E664   1850 _TIMER_SEL2	=	0xe664
                    E668   1851 _TIMER_SEL3	=	0xe668
                    E66C   1852 _G_SELLV_TXCLK	=	0xe66c
                    E670   1853 _G_SELLV_TXDATA	=	0xe670
                    E674   1854 _G_SELLV_TXPRE	=	0xe674
                    E678   1855 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1856 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1857 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1858 _SAS_PRESET0_TB	=	0xe684
                    E688   1859 _SAS_PRESET1_TB	=	0xe688
                    E68C   1860 _SAS_PRESET2_TB	=	0xe68c
                    E690   1861 _ETH_PRESET0_TB	=	0xe690
                    E694   1862 _ETH_PRESET1_TB	=	0xe694
                    E698   1863 _TX_SAVE_0	=	0xe698
                    E69C   1864 _TX_SAVE_1	=	0xe69c
                    E6A0   1865 _TX_SAVE_2	=	0xe6a0
                    E6A4   1866 _TX_SAVE_3	=	0xe6a4
                    E6A8   1867 _TX_SAVE_4	=	0xe6a8
                    E6AC   1868 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1869 _SYNC_INFO	=	0xe6b0
                    E6B4   1870 _MCU_INFO_4	=	0xe6b4
                    E6B8   1871 _MCU_INFO_5	=	0xe6b8
                    E6BC   1872 _MCU_INFO_12	=	0xe6bc
                    E6C0   1873 _MCU_INFO_13	=	0xe6c0
                    E6C4   1874 _END_XDAT_CMN	=	0xe6c4
                    2600   1875 _DME_ENC_REG0	=	0x2600
                    2604   1876 _DME_ENC_REG1	=	0x2604
                    2608   1877 _DME_ENC_REG2	=	0x2608
                    260C   1878 _DME_DEC_REG0	=	0x260c
                    2610   1879 _DME_DEC_REG1	=	0x2610
                    2614   1880 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1881 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1882 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1883 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1884 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1885 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1886 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1887 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1888 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1889 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1890 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1891 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1892 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1893 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1894 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1895 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1896 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1897 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1898 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1899 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1900 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1901 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1902 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1903 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1904 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1905 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1906 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1907 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1908 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1909 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1910 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1911 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1912 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1913 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1914 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1915 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1916 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1917 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1918 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1919 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1920 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1921 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1922 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1923 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1924 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1925 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1926 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1927 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1928 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1929 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1930 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1931 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1932 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1933 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1934 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1935 _CDS_READ_MISC0	=	0x6170
                    6174   1936 _CDS_READ_MISC1	=	0x6174
                    6214   1937 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1938 _lc_speedtable	=	0xe000
                    E1C0   1939 _ring_speedtable	=	0xe1c0
                    E5C0   1940 _phy_mode_cmn_table	=	0xe5c0
                    6300   1941 _max_gen	=	0x6300
                    6301   1942 _min_gen	=	0x6301
                    6304   1943 _speedtable	=	0x6304
                    65D4   1944 _phy_mode_lane_table	=	0x65d4
                    60B4   1945 _rc_save	=	0x60b4
                    60D0   1946 _txffe_save	=	0x60d0
                    60E4   1947 _phase_save	=	0x60e4
                    6030   1948 _train_gn1_index	=	0x6030
                    6031   1949 _train_g1_index	=	0x6031
                    6032   1950 _train_g0_index	=	0x6032
                    E6B0   1951 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1952 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1953 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1954 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1955 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1956 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1957 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1958 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1959 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1960 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1961 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1962 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1963 _lnx_cal_txdcc	=	0x65da
                    65DE   1964 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1965 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1966 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1967 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1968 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1969 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1970 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1971 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1972 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1973 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1974 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1975 _lnx_cal_eom_dpher	=	0x6610
                    6612   1976 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1977 _lnx_cal_align90_dac	=	0x661a
                    6622   1978 _lnx_cal_align90_gm	=	0x6622
                    662A   1979 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1980 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1981 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1982 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1983 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1984 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1985 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1986 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1987 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1988 _lnx_calx_txdcc	=	0x6499
                    649F   1989 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1990 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1991 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1992 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1993 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1994 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1995 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1996 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1997 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1998 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1999 _lnx_calx_align90_gm	=	0x64d8
                    6100   2000 _cds28	=	0x6100
                    6178   2001 _dfe_sm	=	0x6178
                    61B8   2002 _dfe_sm_dc	=	0x61b8
                    61C0   2003 _dfe_sm_save	=	0x61c0
                    03FC   2004 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2005 _tx_tb	=	0xe684
                    E698   2006 _train_save_tb	=	0xe698
                    607C   2007 _sq_thrs_ratio_tb	=	0x607c
                           2008 ;--------------------------------------------------------
                           2009 ; absolute external ram data
                           2010 ;--------------------------------------------------------
                           2011 	.area XABS    (ABS,XDATA)
                           2012 ;--------------------------------------------------------
                           2013 ; external initialized ram data
                           2014 ;--------------------------------------------------------
                           2015 	.area HOME    (CODE)
                           2016 	.area GSINIT0 (CODE)
                           2017 	.area GSINIT1 (CODE)
                           2018 	.area GSINIT2 (CODE)
                           2019 	.area GSINIT3 (CODE)
                           2020 	.area GSINIT4 (CODE)
                           2021 	.area GSINIT5 (CODE)
                           2022 	.area GSINIT  (CODE)
                           2023 	.area GSFINAL (CODE)
                           2024 	.area CSEG    (CODE)
                           2025 ;--------------------------------------------------------
                           2026 ; global & static initialisations
                           2027 ;--------------------------------------------------------
                           2028 	.area HOME    (CODE)
                           2029 	.area GSINIT  (CODE)
                           2030 	.area GSFINAL (CODE)
                           2031 	.area GSINIT  (CODE)
                           2032 ;--------------------------------------------------------
                           2033 ; Home
                           2034 ;--------------------------------------------------------
                           2035 	.area HOME    (CODE)
                           2036 	.area HOME    (CODE)
                           2037 ;--------------------------------------------------------
                           2038 ; code
                           2039 ;--------------------------------------------------------
                           2040 	.area BANK2   (CODE)
                           2041 ;------------------------------------------------------------
                           2042 ;Allocation info for local variables in function 'toggle_impcal_out_req'
                           2043 ;------------------------------------------------------------
                           2044 ;comp_out                  Allocated to registers r2 
                           2045 ;------------------------------------------------------------
                           2046 ;	../../shared/src/imp_cal.c:66: uint8_t  toggle_impcal_out_req( void ) BANKING_CTRL {
                           2047 ;	-----------------------------------------
                           2048 ;	 function toggle_impcal_out_req
                           2049 ;	-----------------------------------------
   B392                    2050 _toggle_impcal_out_req:
                    0002   2051 	ar2 = 0x02
                    0003   2052 	ar3 = 0x03
                    0004   2053 	ar4 = 0x04
                    0005   2054 	ar5 = 0x05
                    0006   2055 	ar6 = 0x06
                    0007   2056 	ar7 = 0x07
                    0000   2057 	ar0 = 0x00
                    0001   2058 	ar1 = 0x01
                           2059 ;	../../shared/src/imp_cal.c:69: comp_out = 0;
   B392 7A 00              2060 	mov	r2,#0x00
                           2061 ;	../../shared/src/imp_cal.c:70: TXRXIMP_CKCAL = 1;
   B394 90 82 2C           2062 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   B397 E0                 2063 	movx	a,@dptr
   B398 44 80              2064 	orl	a,#0x80
   B39A F0                 2065 	movx	@dptr,a
                           2066 ;	../../shared/src/imp_cal.c:71: delay01(50); //resets analog comparator
   B39B 90 00 32           2067 	mov	dptr,#0x0032
   B39E C0 02              2068 	push	ar2
   B3A0 78 16              2069 	mov	r0,#_delay01
   B3A2 79 BC              2070 	mov	r1,#(_delay01 >> 8)
   B3A4 7A 02              2071 	mov	r2,#(_delay01 >> 16)
   B3A6 12 00 B3           2072 	lcall	__sdcc_banked_call
                           2073 ;	../../shared/src/imp_cal.c:72: TXRXIMP_CKCAL = 0;
   B3A9 90 82 2C           2074 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   B3AC E0                 2075 	movx	a,@dptr
   B3AD 54 7F              2076 	anl	a,#0x7f
   B3AF F0                 2077 	movx	@dptr,a
                           2078 ;	../../shared/src/imp_cal.c:73: delay01(20); //analog settling time
   B3B0 90 00 14           2079 	mov	dptr,#0x0014
   B3B3 78 16              2080 	mov	r0,#_delay01
   B3B5 79 BC              2081 	mov	r1,#(_delay01 >> 8)
   B3B7 7A 02              2082 	mov	r2,#(_delay01 >> 16)
   B3B9 12 00 B3           2083 	lcall	__sdcc_banked_call
   B3BC D0 02              2084 	pop	ar2
                           2085 ;	../../shared/src/imp_cal.c:75: IMPCAL_OUT_REQ = 1;
                           2086 ;	../../shared/src/imp_cal.c:76: IMPCAL_OUT_REQ = 0;
   B3BE 90 A3 40           2087 	mov	dptr,#_CMN_CALIBRATION
   B3C1 E0                 2088 	movx	a,@dptr
   B3C2 44 10              2089 	orl	a,#0x10
   B3C4 F0                 2090 	movx	@dptr,a
   B3C5 E0                 2091 	movx	a,@dptr
   B3C6 54 EF              2092 	anl	a,#0xef
   B3C8 F0                 2093 	movx	@dptr,a
                           2094 ;	../../shared/src/imp_cal.c:78: if(TXRX_IMPCALOUT) comp_out = 1;
   B3C9 90 A3 40           2095 	mov	dptr,#_CMN_CALIBRATION
   B3CC E0                 2096 	movx	a,@dptr
   B3CD 30 E3 02           2097 	jnb	acc.3,00102$
   B3D0 7A 01              2098 	mov	r2,#0x01
   B3D2                    2099 00102$:
                           2100 ;	../../shared/src/imp_cal.c:80: return comp_out;
   B3D2 8A 82              2101 	mov	dpl,r2
   B3D4 02 00 C5           2102 	ljmp	__sdcc_banked_ret
                           2103 ;------------------------------------------------------------
                           2104 ;Allocation info for local variables in function 'tximp_cal'
                           2105 ;------------------------------------------------------------
                           2106 ;i                         Allocated to stack - offset 1
                           2107 ;cnt                       Allocated to registers r5 
                           2108 ;dir                       Allocated to registers r2 
                           2109 ;min_reached_n             Allocated to registers r4 
                           2110 ;max_reached_n             Allocated to registers r2 
                           2111 ;min_reached_p             Allocated to registers r2 
                           2112 ;max_reached_p             Allocated to registers r3 
                           2113 ;tximp_h                   Allocated to stack - offset 2
                           2114 ;tximp_l                   Allocated to registers r6 
                           2115 ;sum                       Allocated to stack - offset 3
                           2116 ;ave                       Allocated to registers r2 r4 
                           2117 ;ave_0                     Allocated to stack - offset 5
                           2118 ;ana_tximpcal_out          Allocated to registers r7 
                           2119 ;pre_val                   Allocated to stack - offset 7
                           2120 ;------------------------------------------------------------
                           2121 ;	../../shared/src/imp_cal.c:84: void tximp_cal( void ) BANKING_CTRL {
                           2122 ;	-----------------------------------------
                           2123 ;	 function tximp_cal
                           2124 ;	-----------------------------------------
   B3D7                    2125 _tximp_cal:
   B3D7 C0 18              2126 	push	_bp
   B3D9 E5 81              2127 	mov	a,sp
   B3DB F5 18              2128 	mov	_bp,a
   B3DD 24 07              2129 	add	a,#0x07
   B3DF F5 81              2130 	mov	sp,a
                           2131 ;	../../shared/src/imp_cal.c:91: lnx_TXIMP_CAL_DONE_LANE = 0;
   B3E1 90 60 01           2132 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   B3E4 E0                 2133 	movx	a,@dptr
   B3E5 54 DF              2134 	anl	a,#0xdf
   B3E7 F0                 2135 	movx	@dptr,a
                           2136 ;	../../shared/src/imp_cal.c:93: if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
   B3E8 90 E6 0A           2137 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   B3EB E0                 2138 	movx	a,@dptr
   B3EC C4                 2139 	swap	a
   B3ED 03                 2140 	rr	a
   B3EE 54 01              2141 	anl	a,#0x01
   B3F0 FA                 2142 	mov	r2,a
   B3F1 BA 01 52           2143 	cjne	r2,#0x01,00102$
                           2144 ;	../../shared/src/imp_cal.c:94: TXIMP_TUNEN = lnx_CAL_TXIMP_TUNEN_LANE_7_0;
   B3F4 90 60 18           2145 	mov	dptr,#_CAL_SAVE_DATA3_LANE
   B3F7 E0                 2146 	movx	a,@dptr
   B3F8 90 02 40           2147 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B3FB 54 0F              2148 	anl	a,#0x0f
   B3FD F5 F0              2149 	mov	b,a
   B3FF E0                 2150 	movx	a,@dptr
   B400 54 F0              2151 	anl	a,#0xf0
   B402 45 F0              2152 	orl	a,b
   B404 F0                 2153 	movx	@dptr,a
                           2154 ;	../../shared/src/imp_cal.c:95: TXIMP_TUNEN0 = lnx_CAL_TXIMP_TUNEN0_LANE_7_0;
   B405 90 60 19           2155 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0001)
   B408 E0                 2156 	movx	a,@dptr
   B409 90 02 54           2157 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B40C 54 07              2158 	anl	a,#0x07
   B40E F5 F0              2159 	mov	b,a
   B410 E0                 2160 	movx	a,@dptr
   B411 54 F8              2161 	anl	a,#0xf8
   B413 45 F0              2162 	orl	a,b
   B415 F0                 2163 	movx	@dptr,a
                           2164 ;	../../shared/src/imp_cal.c:96: TXIMP_TUNEP = lnx_CAL_TXIMP_TUNEP_LANE_7_0;
   B416 90 60 1A           2165 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0002)
   B419 E0                 2166 	movx	a,@dptr
   B41A 90 02 40           2167 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B41D C4                 2168 	swap	a
   B41E 54 F0              2169 	anl	a,#(0xf0&0xf0)
   B420 F5 F0              2170 	mov	b,a
   B422 E0                 2171 	movx	a,@dptr
   B423 54 0F              2172 	anl	a,#0x0f
   B425 45 F0              2173 	orl	a,b
   B427 F0                 2174 	movx	@dptr,a
                           2175 ;	../../shared/src/imp_cal.c:97: TXIMP_TUNEP0 = lnx_CAL_TXIMP_TUNEP0_LANE_7_0;
   B428 90 60 1B           2176 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0003)
   B42B E0                 2177 	movx	a,@dptr
   B42C FA                 2178 	mov	r2,a
   B42D 90 02 54           2179 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B430 C4                 2180 	swap	a
   B431 03                 2181 	rr	a
   B432 54 38              2182 	anl	a,#(0xf8&0x38)
   B434 F5 F0              2183 	mov	b,a
   B436 E0                 2184 	movx	a,@dptr
   B437 54 C7              2185 	anl	a,#0xc7
   B439 45 F0              2186 	orl	a,b
   B43B F0                 2187 	movx	@dptr,a
                           2188 ;	../../shared/src/imp_cal.c:99: lnx_TXIMP_CAL_DONE_LANE = 1;
   B43C 90 60 01           2189 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   B43F E0                 2190 	movx	a,@dptr
   B440 44 20              2191 	orl	a,#0x20
   B442 F0                 2192 	movx	@dptr,a
                           2193 ;	../../shared/src/imp_cal.c:100: return;
   B443 02 BA 86           2194 	ljmp	00212$
   B446                    2195 00102$:
                           2196 ;	../../shared/src/imp_cal.c:103: PHY_STATUS = ST_TXIMP_CAL;
   B446 90 22 30           2197 	mov	dptr,#_MCU_STATUS0_LANE
   B449 74 18              2198 	mov	a,#0x18
   B44B F0                 2199 	movx	@dptr,a
                           2200 ;	../../shared/src/imp_cal.c:105: lnx_TXIMP_CAL_PASS_LANE = 0;
   B44C 90 60 05           2201 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   B44F E0                 2202 	movx	a,@dptr
   B450 54 7F              2203 	anl	a,#0x7f
   B452 F0                 2204 	movx	@dptr,a
                           2205 ;	../../shared/src/imp_cal.c:106: lnx_TXIMP_CAL_TIMEOUT_LANE = 0;
   B453 90 60 0A           2206 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   B456 E0                 2207 	movx	a,@dptr
   B457 54 BF              2208 	anl	a,#0xbf
   B459 F0                 2209 	movx	@dptr,a
                           2210 ;	../../shared/src/imp_cal.c:109: set_test_pattern(1);
   B45A 75 82 01           2211 	mov	dpl,#0x01
   B45D 78 F4              2212 	mov	r0,#_set_test_pattern
   B45F 79 BD              2213 	mov	r1,#(_set_test_pattern >> 8)
   B461 7A 02              2214 	mov	r2,#(_set_test_pattern >> 16)
   B463 12 00 B3           2215 	lcall	__sdcc_banked_call
                           2216 ;	../../shared/src/imp_cal.c:111: TXIMPCAL_DRVAMP_2_0 = TX_VREF_TXDRV_SEL;
   B466 90 26 5B           2217 	mov	dptr,#(_TX_AMP_CTRL_REG0 + 0x0003)
   B469 E0                 2218 	movx	a,@dptr
   B46A C4                 2219 	swap	a
   B46B 23                 2220 	rl	a
   B46C 54 07              2221 	anl	a,#0x07
   B46E 90 82 04           2222 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_129
   B471 C4                 2223 	swap	a
   B472 23                 2224 	rl	a
   B473 54 E0              2225 	anl	a,#(0xe0&0xe0)
   B475 F5 F0              2226 	mov	b,a
   B477 E0                 2227 	movx	a,@dptr
   B478 54 1F              2228 	anl	a,#0x1f
   B47A 45 F0              2229 	orl	a,b
   B47C F0                 2230 	movx	@dptr,a
                           2231 ;	../../shared/src/imp_cal.c:113: delay01(100); //10us delay between reg_TXIMPCAL_EN and reg_TX_IMPCAL_EN_LANE
   B47D 90 00 64           2232 	mov	dptr,#0x0064
   B480 78 16              2233 	mov	r0,#_delay01
   B482 79 BC              2234 	mov	r1,#(_delay01 >> 8)
   B484 7A 02              2235 	mov	r2,#(_delay01 >> 16)
   B486 12 00 B3           2236 	lcall	__sdcc_banked_call
                           2237 ;	../../shared/src/imp_cal.c:115: TX_IMPCAL_EN = 1;
   B489 90 02 54           2238 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B48C E0                 2239 	movx	a,@dptr
   B48D 44 80              2240 	orl	a,#0x80
   B48F F0                 2241 	movx	@dptr,a
                           2242 ;	../../shared/src/imp_cal.c:118: TX_IMPCAL_BOT = 1;
   B490 90 02 4C           2243 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   B493 E0                 2244 	movx	a,@dptr
   B494 44 01              2245 	orl	a,#0x01
   B496 F0                 2246 	movx	@dptr,a
                           2247 ;	../../shared/src/imp_cal.c:120: sum = 0;
   B497 E5 18              2248 	mov	a,_bp
   B499 24 03              2249 	add	a,#0x03
   B49B F8                 2250 	mov	r0,a
   B49C 76 00              2251 	mov	@r0,#0x00
   B49E 08                 2252 	inc	r0
   B49F 76 00              2253 	mov	@r0,#0x00
                           2254 ;	../../shared/src/imp_cal.c:122: for(i=0; i<2; i++) {
   B4A1 A8 18              2255 	mov	r0,_bp
   B4A3 08                 2256 	inc	r0
   B4A4 76 00              2257 	mov	@r0,#0x00
   B4A6                    2258 00204$:
   B4A6 A8 18              2259 	mov	r0,_bp
   B4A8 08                 2260 	inc	r0
   B4A9 B6 02 00           2261 	cjne	@r0,#0x02,00273$
   B4AC                    2262 00273$:
   B4AC 40 03              2263 	jc	00274$
   B4AE 02 B6 83           2264 	ljmp	00207$
   B4B1                    2265 00274$:
                           2266 ;	../../shared/src/imp_cal.c:123: if(i==1) TX_IMPCAL_SIDE = 1;
   B4B1 A8 18              2267 	mov	r0,_bp
   B4B3 08                 2268 	inc	r0
   B4B4 B6 01 09           2269 	cjne	@r0,#0x01,00104$
   B4B7 90 02 54           2270 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B4BA E0                 2271 	movx	a,@dptr
   B4BB 44 40              2272 	orl	a,#0x40
   B4BD F0                 2273 	movx	@dptr,a
   B4BE 80 07              2274 	sjmp	00105$
   B4C0                    2275 00104$:
                           2276 ;	../../shared/src/imp_cal.c:124: else TX_IMPCAL_SIDE = 0;
   B4C0 90 02 54           2277 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B4C3 E0                 2278 	movx	a,@dptr
   B4C4 54 BF              2279 	anl	a,#0xbf
   B4C6 F0                 2280 	movx	@dptr,a
   B4C7                    2281 00105$:
                           2282 ;	../../shared/src/imp_cal.c:126: TXIMP_TUNEN = 0x8; // 4'b1000	
   B4C7 90 02 40           2283 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B4CA E0                 2284 	movx	a,@dptr
   B4CB 54 F0              2285 	anl	a,#0xf0
   B4CD 44 08              2286 	orl	a,#0x08
   B4CF F0                 2287 	movx	@dptr,a
                           2288 ;	../../shared/src/imp_cal.c:127: TXIMP_TUNEN0 = 0x7; // 3'b111 (1/6LSB of TXIMP_TUNEN)
   B4D0 90 02 54           2289 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B4D3 E0                 2290 	movx	a,@dptr
   B4D4 44 07              2291 	orl	a,#0x07
   B4D6 F0                 2292 	movx	@dptr,a
                           2293 ;	../../shared/src/imp_cal.c:129: tximp_h = 8; tximp_l = 3;
   B4D7 A8 18              2294 	mov	r0,_bp
   B4D9 08                 2295 	inc	r0
   B4DA 08                 2296 	inc	r0
   B4DB 76 08              2297 	mov	@r0,#0x08
   B4DD 7E 03              2298 	mov	r6,#0x03
                           2299 ;	../../shared/src/imp_cal.c:133: pre_val = toggle_impcal_out_req();
   B4DF C0 06              2300 	push	ar6
   B4E1 78 92              2301 	mov	r0,#_toggle_impcal_out_req
   B4E3 79 B3              2302 	mov	r1,#(_toggle_impcal_out_req >> 8)
   B4E5 7A 02              2303 	mov	r2,#(_toggle_impcal_out_req >> 16)
   B4E7 12 00 B3           2304 	lcall	__sdcc_banked_call
   B4EA AF 82              2305 	mov	r7,dpl
   B4EC D0 06              2306 	pop	ar6
   B4EE E5 18              2307 	mov	a,_bp
   B4F0 24 07              2308 	add	a,#0x07
   B4F2 F8                 2309 	mov	r0,a
   B4F3 A6 07              2310 	mov	@r0,ar7
                           2311 ;	../../shared/src/imp_cal.c:135: min_reached_n = 0;
   B4F5 7C 00              2312 	mov	r4,#0x00
                           2313 ;	../../shared/src/imp_cal.c:136: max_reached_n = 0;
   B4F7 7A 00              2314 	mov	r2,#0x00
                           2315 ;	../../shared/src/imp_cal.c:138: do {
   B4F9 7D 00              2316 	mov	r5,#0x00
   B4FB                    2317 00126$:
                           2318 ;	../../shared/src/imp_cal.c:139: ana_tximpcal_out = toggle_impcal_out_req();
   B4FB C0 02              2319 	push	ar2
   B4FD C0 04              2320 	push	ar4
   B4FF C0 05              2321 	push	ar5
   B501 C0 06              2322 	push	ar6
   B503 78 92              2323 	mov	r0,#_toggle_impcal_out_req
   B505 79 B3              2324 	mov	r1,#(_toggle_impcal_out_req >> 8)
   B507 7A 02              2325 	mov	r2,#(_toggle_impcal_out_req >> 16)
   B509 12 00 B3           2326 	lcall	__sdcc_banked_call
   B50C AB 82              2327 	mov	r3,dpl
   B50E D0 06              2328 	pop	ar6
   B510 D0 05              2329 	pop	ar5
   B512 D0 04              2330 	pop	ar4
   B514 D0 02              2331 	pop	ar2
   B516 8B 07              2332 	mov	ar7,r3
                           2333 ;	../../shared/src/imp_cal.c:141: if ( ana_tximpcal_out != pre_val ) break; //exit at first toggle
   B518 E5 18              2334 	mov	a,_bp
   B51A 24 07              2335 	add	a,#0x07
   B51C F8                 2336 	mov	r0,a
   B51D E6                 2337 	mov	a,@r0
   B51E B5 07 69           2338 	cjne	a,ar7,00128$
                           2339 ;	../../shared/src/imp_cal.c:143: if( tximp_h == 0x0) min_reached_n += 1;
   B521 A8 18              2340 	mov	r0,_bp
   B523 08                 2341 	inc	r0
   B524 08                 2342 	inc	r0
   B525 E6                 2343 	mov	a,@r0
   B526 70 03              2344 	jnz	00111$
   B528 0C                 2345 	inc	r4
   B529 80 08              2346 	sjmp	00112$
   B52B                    2347 00111$:
                           2348 ;	../../shared/src/imp_cal.c:144: else if( tximp_h == 0xf) max_reached_n += 1;
   B52B A8 18              2349 	mov	r0,_bp
   B52D 08                 2350 	inc	r0
   B52E 08                 2351 	inc	r0
   B52F B6 0F 01           2352 	cjne	@r0,#0x0F,00112$
   B532 0A                 2353 	inc	r2
   B533                    2354 00112$:
                           2355 ;	../../shared/src/imp_cal.c:146: if( ana_tximpcal_out == 0 ) {
   B533 EF                 2356 	mov	a,r7
                           2357 ;	../../shared/src/imp_cal.c:147: max_reached_n = 0;
   B534 70 10              2358 	jnz	00124$
   B536 FA                 2359 	mov	r2,a
                           2360 ;	../../shared/src/imp_cal.c:148: if( min_reached_n == 0) tximp_h--; //decrement DAC value with underflow protection
   B537 EC                 2361 	mov	a,r4
   B538 70 07              2362 	jnz	00116$
   B53A A8 18              2363 	mov	r0,_bp
   B53C 08                 2364 	inc	r0
   B53D 08                 2365 	inc	r0
   B53E 16                 2366 	dec	@r0
   B53F 80 16              2367 	sjmp	00125$
   B541                    2368 00116$:
                           2369 ;	../../shared/src/imp_cal.c:149: else if ( min_reached_n == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
   B541 BC 02 13           2370 	cjne	r4,#0x02,00125$
   B544 80 44              2371 	sjmp	00128$
   B546                    2372 00124$:
                           2373 ;	../../shared/src/imp_cal.c:152: min_reached_n = 0;
   B546 7C 00              2374 	mov	r4,#0x00
                           2375 ;	../../shared/src/imp_cal.c:153: if( max_reached_n == 0) tximp_h++; //increment DAC value with overflow protection
   B548 EA                 2376 	mov	a,r2
   B549 70 07              2377 	jnz	00121$
   B54B A8 18              2378 	mov	r0,_bp
   B54D 08                 2379 	inc	r0
   B54E 08                 2380 	inc	r0
   B54F 06                 2381 	inc	@r0
   B550 80 05              2382 	sjmp	00125$
   B552                    2383 00121$:
                           2384 ;	../../shared/src/imp_cal.c:154: else if ( max_reached_n == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples	
   B552 BA 02 02           2385 	cjne	r2,#0x02,00286$
   B555 80 33              2386 	sjmp	00128$
   B557                    2387 00286$:
   B557                    2388 00125$:
                           2389 ;	../../shared/src/imp_cal.c:157: TXIMP_TUNEN = tximp_h;
   B557 C0 04              2390 	push	ar4
   B559 90 02 40           2391 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B55C A8 18              2392 	mov	r0,_bp
   B55E 08                 2393 	inc	r0
   B55F 08                 2394 	inc	r0
   B560 E6                 2395 	mov	a,@r0
   B561 54 0F              2396 	anl	a,#0x0f
   B563 F5 F0              2397 	mov	b,a
   B565 E0                 2398 	movx	a,@dptr
   B566 54 F0              2399 	anl	a,#0xf0
   B568 45 F0              2400 	orl	a,b
   B56A F0                 2401 	movx	@dptr,a
                           2402 ;	../../shared/src/imp_cal.c:159: } while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps
   B56B 8D 04              2403 	mov	ar4,r5
   B56D 0D                 2404 	inc	r5
   B56E BC 10 00           2405 	cjne	r4,#0x10,00287$
   B571                    2406 00287$:
   B571 E4                 2407 	clr	a
   B572 33                 2408 	rlc	a
   B573 FC                 2409 	mov	r4,a
   B574 90 E6 48           2410 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   B577 E0                 2411 	movx	a,@dptr
   B578 23                 2412 	rl	a
   B579 23                 2413 	rl	a
   B57A 54 01              2414 	anl	a,#0x01
   B57C FB                 2415 	mov	r3,a
   B57D E4                 2416 	clr	a
   B57E BB 01 01           2417 	cjne	r3,#0x01,00288$
   B581 04                 2418 	inc	a
   B582                    2419 00288$:
   B582 4C                 2420 	orl	a,r4
   B583 D0 04              2421 	pop	ar4
   B585 60 03              2422 	jz	00290$
   B587 02 B4 FB           2423 	ljmp	00126$
   B58A                    2424 00290$:
   B58A                    2425 00128$:
                           2426 ;	../../shared/src/imp_cal.c:161: if( cnt >= 16 ) {
   B58A BD 10 00           2427 	cjne	r5,#0x10,00291$
   B58D                    2428 00291$:
   B58D 40 09              2429 	jc	00133$
                           2430 ;	../../shared/src/imp_cal.c:162: lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
   B58F 90 60 0A           2431 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   B592 E0                 2432 	movx	a,@dptr
   B593 44 40              2433 	orl	a,#0x40
   B595 F0                 2434 	movx	@dptr,a
   B596 80 1D              2435 	sjmp	00134$
   B598                    2436 00133$:
                           2437 ;	../../shared/src/imp_cal.c:164: else if( ana_tximpcal_out == 1 && max_reached_n == 0 ) { //previously toggled from 0->1
   B598 BF 01 1A           2438 	cjne	r7,#0x01,00134$
   B59B EA                 2439 	mov	a,r2
   B59C 70 17              2440 	jnz	00134$
                           2441 ;	../../shared/src/imp_cal.c:165: tximp_h++;
   B59E A8 18              2442 	mov	r0,_bp
   B5A0 08                 2443 	inc	r0
   B5A1 08                 2444 	inc	r0
   B5A2 06                 2445 	inc	@r0
                           2446 ;	../../shared/src/imp_cal.c:166: TXIMP_TUNEN = tximp_h;
   B5A3 90 02 40           2447 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B5A6 A8 18              2448 	mov	r0,_bp
   B5A8 08                 2449 	inc	r0
   B5A9 08                 2450 	inc	r0
   B5AA E6                 2451 	mov	a,@r0
   B5AB 54 0F              2452 	anl	a,#0x0f
   B5AD F5 F0              2453 	mov	b,a
   B5AF E0                 2454 	movx	a,@dptr
   B5B0 54 F0              2455 	anl	a,#0xf0
   B5B2 45 F0              2456 	orl	a,b
   B5B4 F0                 2457 	movx	@dptr,a
   B5B5                    2458 00134$:
                           2459 ;	../../shared/src/imp_cal.c:170: dir = 0;
   B5B5 7A 00              2460 	mov	r2,#0x00
                           2461 ;	../../shared/src/imp_cal.c:172: do {
   B5B7 7C 00              2462 	mov	r4,#0x00
   B5B9                    2463 00146$:
                           2464 ;	../../shared/src/imp_cal.c:173: if( tximp_l == 0x0 ) break; //exit once thermal code reaches 000
   B5B9 EE                 2465 	mov	a,r6
   B5BA 70 03              2466 	jnz	00296$
   B5BC 02 B6 48           2467 	ljmp	00148$
   B5BF                    2468 00296$:
                           2469 ;	../../shared/src/imp_cal.c:175: ana_tximpcal_out = toggle_impcal_out_req();
   B5BF C0 04              2470 	push	ar4
   B5C1 C0 02              2471 	push	ar2
   B5C3 C0 04              2472 	push	ar4
   B5C5 C0 06              2473 	push	ar6
   B5C7 78 92              2474 	mov	r0,#_toggle_impcal_out_req
   B5C9 79 B3              2475 	mov	r1,#(_toggle_impcal_out_req >> 8)
   B5CB 7A 02              2476 	mov	r2,#(_toggle_impcal_out_req >> 16)
   B5CD 12 00 B3           2477 	lcall	__sdcc_banked_call
   B5D0 AB 82              2478 	mov	r3,dpl
   B5D2 D0 06              2479 	pop	ar6
   B5D4 D0 04              2480 	pop	ar4
   B5D6 D0 02              2481 	pop	ar2
   B5D8 8B 07              2482 	mov	ar7,r3
                           2483 ;	../../shared/src/imp_cal.c:177: if( ana_tximpcal_out == 0 ) {
   B5DA D0 04              2484 	pop	ar4
   B5DC EF                 2485 	mov	a,r7
   B5DD 70 06              2486 	jnz	00142$
                           2487 ;	../../shared/src/imp_cal.c:178: if( tximp_l > 0 ) tximp_l--;
   B5DF EE                 2488 	mov	a,r6
   B5E0 60 09              2489 	jz	00143$
   B5E2 1E                 2490 	dec	r6
   B5E3 80 06              2491 	sjmp	00143$
   B5E5                    2492 00142$:
                           2493 ;	../../shared/src/imp_cal.c:181: if( tximp_l < 3 ) tximp_l++;
   B5E5 BE 03 00           2494 	cjne	r6,#0x03,00299$
   B5E8                    2495 00299$:
   B5E8 50 01              2496 	jnc	00143$
   B5EA 0E                 2497 	inc	r6
   B5EB                    2498 00143$:
                           2499 ;	../../shared/src/imp_cal.c:184: TXIMP_TUNEN0 = tximp_thermo_tb[tximp_l];
   B5EB EE                 2500 	mov	a,r6
   B5EC 90 BC 12           2501 	mov	dptr,#_tximp_thermo_tb
   B5EF 93                 2502 	movc	a,@a+dptr
   B5F0 90 02 54           2503 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B5F3 54 07              2504 	anl	a,#0x07
   B5F5 F5 F0              2505 	mov	b,a
   B5F7 E0                 2506 	movx	a,@dptr
   B5F8 54 F8              2507 	anl	a,#0xf8
   B5FA 45 F0              2508 	orl	a,b
   B5FC F0                 2509 	movx	@dptr,a
                           2510 ;	../../shared/src/imp_cal.c:186: dir = (dir << 1 ) | ana_tximpcal_out;
   B5FD EA                 2511 	mov	a,r2
   B5FE 2A                 2512 	add	a,r2
   B5FF FD                 2513 	mov	r5,a
   B600 EF                 2514 	mov	a,r7
   B601 42 05              2515 	orl	ar5,a
   B603 8D 02              2516 	mov	ar2,r5
                           2517 ;	../../shared/src/imp_cal.c:187: if ( is_toggle_pat( dir, cnt + 1 ) ) break;
   B605 EC                 2518 	mov	a,r4
   B606 04                 2519 	inc	a
   B607 FD                 2520 	mov	r5,a
   B608 C0 02              2521 	push	ar2
   B60A C0 04              2522 	push	ar4
   B60C C0 06              2523 	push	ar6
   B60E C0 05              2524 	push	ar5
   B610 8A 82              2525 	mov	dpl,r2
   B612 78 CD              2526 	mov	r0,#_is_toggle_pat
   B614 79 BD              2527 	mov	r1,#(_is_toggle_pat >> 8)
   B616 7A 02              2528 	mov	r2,#(_is_toggle_pat >> 16)
   B618 12 00 B3           2529 	lcall	__sdcc_banked_call
   B61B 15 81              2530 	dec	sp
   B61D D0 06              2531 	pop	ar6
   B61F D0 04              2532 	pop	ar4
   B621 D0 02              2533 	pop	ar2
   B623 92 28              2534 	mov	b0,c
   B625 40 21              2535 	jc	00148$
                           2536 ;	../../shared/src/imp_cal.c:189: } while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps
   B627 C0 02              2537 	push	ar2
   B629 8C 02              2538 	mov	ar2,r4
   B62B 0C                 2539 	inc	r4
   B62C BA 10 00           2540 	cjne	r2,#0x10,00302$
   B62F                    2541 00302$:
   B62F E4                 2542 	clr	a
   B630 33                 2543 	rlc	a
   B631 FA                 2544 	mov	r2,a
   B632 90 E6 48           2545 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   B635 E0                 2546 	movx	a,@dptr
   B636 23                 2547 	rl	a
   B637 23                 2548 	rl	a
   B638 54 01              2549 	anl	a,#0x01
   B63A FB                 2550 	mov	r3,a
   B63B E4                 2551 	clr	a
   B63C BB 01 01           2552 	cjne	r3,#0x01,00303$
   B63F 04                 2553 	inc	a
   B640                    2554 00303$:
   B640 4A                 2555 	orl	a,r2
   B641 D0 02              2556 	pop	ar2
   B643 60 03              2557 	jz	00305$
   B645 02 B5 B9           2558 	ljmp	00146$
   B648                    2559 00305$:
   B648                    2560 00148$:
                           2561 ;	../../shared/src/imp_cal.c:191: if( cnt >= 16 ) {
   B648 BC 10 00           2562 	cjne	r4,#0x10,00306$
   B64B                    2563 00306$:
   B64B 40 07              2564 	jc	00150$
                           2565 ;	../../shared/src/imp_cal.c:192: lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
   B64D 90 60 0A           2566 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   B650 E0                 2567 	movx	a,@dptr
   B651 44 40              2568 	orl	a,#0x40
   B653 F0                 2569 	movx	@dptr,a
   B654                    2570 00150$:
                           2571 ;	../../shared/src/imp_cal.c:195: sum += tximp_h * 6;
   B654 A8 18              2572 	mov	r0,_bp
   B656 08                 2573 	inc	r0
   B657 08                 2574 	inc	r0
   B658 E6                 2575 	mov	a,@r0
   B659 75 F0 06           2576 	mov	b,#0x06
   B65C A4                 2577 	mul	ab
   B65D FB                 2578 	mov	r3,a
   B65E AD F0              2579 	mov	r5,b
   B660 E5 18              2580 	mov	a,_bp
   B662 24 03              2581 	add	a,#0x03
   B664 F8                 2582 	mov	r0,a
   B665 EB                 2583 	mov	a,r3
   B666 26                 2584 	add	a,@r0
   B667 F6                 2585 	mov	@r0,a
   B668 ED                 2586 	mov	a,r5
   B669 08                 2587 	inc	r0
   B66A 36                 2588 	addc	a,@r0
   B66B F6                 2589 	mov	@r0,a
                           2590 ;	../../shared/src/imp_cal.c:196: sum += tximp_l;
   B66C 8E 03              2591 	mov	ar3,r6
   B66E 7D 00              2592 	mov	r5,#0x00
   B670 E5 18              2593 	mov	a,_bp
   B672 24 03              2594 	add	a,#0x03
   B674 F8                 2595 	mov	r0,a
   B675 EB                 2596 	mov	a,r3
   B676 26                 2597 	add	a,@r0
   B677 F6                 2598 	mov	@r0,a
   B678 ED                 2599 	mov	a,r5
   B679 08                 2600 	inc	r0
   B67A 36                 2601 	addc	a,@r0
   B67B F6                 2602 	mov	@r0,a
                           2603 ;	../../shared/src/imp_cal.c:122: for(i=0; i<2; i++) {
   B67C A8 18              2604 	mov	r0,_bp
   B67E 08                 2605 	inc	r0
   B67F 06                 2606 	inc	@r0
   B680 02 B4 A6           2607 	ljmp	00204$
   B683                    2608 00207$:
                           2609 ;	../../shared/src/imp_cal.c:202: ave = u16div( sum >> 1,  6); //ave = (sum / 2) / 6
   B683 E5 18              2610 	mov	a,_bp
   B685 24 03              2611 	add	a,#0x03
   B687 F8                 2612 	mov	r0,a
   B688 86 03              2613 	mov	ar3,@r0
   B68A 08                 2614 	inc	r0
   B68B E6                 2615 	mov	a,@r0
   B68C C3                 2616 	clr	c
   B68D 13                 2617 	rrc	a
   B68E CB                 2618 	xch	a,r3
   B68F 13                 2619 	rrc	a
   B690 CB                 2620 	xch	a,r3
   B691 FD                 2621 	mov	r5,a
   B692 74 06              2622 	mov	a,#0x06
   B694 C0 E0              2623 	push	acc
   B696 E4                 2624 	clr	a
   B697 C0 E0              2625 	push	acc
   B699 8B 82              2626 	mov	dpl,r3
   B69B 8D 83              2627 	mov	dph,r5
   B69D 78 3E              2628 	mov	r0,#_u16div
   B69F 79 BF              2629 	mov	r1,#(_u16div >> 8)
   B6A1 7A 02              2630 	mov	r2,#(_u16div >> 16)
   B6A3 12 00 B3           2631 	lcall	__sdcc_banked_call
   B6A6 AB 82              2632 	mov	r3,dpl
   B6A8 AD 83              2633 	mov	r5,dph
   B6AA 15 81              2634 	dec	sp
   B6AC 15 81              2635 	dec	sp
   B6AE 8B 02              2636 	mov	ar2,r3
   B6B0 8D 04              2637 	mov	ar4,r5
                           2638 ;	../../shared/src/imp_cal.c:203: ave_0 = (uint16_t)((sum - u16mul(ave, 12)) >> 1);
   B6B2 C0 02              2639 	push	ar2
   B6B4 C0 04              2640 	push	ar4
   B6B6 74 0C              2641 	mov	a,#0x0C
   B6B8 C0 E0              2642 	push	acc
   B6BA E4                 2643 	clr	a
   B6BB C0 E0              2644 	push	acc
   B6BD 8A 82              2645 	mov	dpl,r2
   B6BF 8C 83              2646 	mov	dph,r4
   B6C1 78 8D              2647 	mov	r0,#_u16mul
   B6C3 79 BF              2648 	mov	r1,#(_u16mul >> 8)
   B6C5 7A 02              2649 	mov	r2,#(_u16mul >> 16)
   B6C7 12 00 B3           2650 	lcall	__sdcc_banked_call
   B6CA AB 82              2651 	mov	r3,dpl
   B6CC AD 83              2652 	mov	r5,dph
   B6CE 15 81              2653 	dec	sp
   B6D0 15 81              2654 	dec	sp
   B6D2 D0 04              2655 	pop	ar4
   B6D4 D0 02              2656 	pop	ar2
   B6D6 E5 18              2657 	mov	a,_bp
   B6D8 24 03              2658 	add	a,#0x03
   B6DA F8                 2659 	mov	r0,a
   B6DB E6                 2660 	mov	a,@r0
   B6DC C3                 2661 	clr	c
   B6DD 9B                 2662 	subb	a,r3
   B6DE FB                 2663 	mov	r3,a
   B6DF 08                 2664 	inc	r0
   B6E0 E6                 2665 	mov	a,@r0
   B6E1 9D                 2666 	subb	a,r5
   B6E2 FD                 2667 	mov	r5,a
   B6E3 E5 18              2668 	mov	a,_bp
   B6E5 24 05              2669 	add	a,#0x05
   B6E7 F8                 2670 	mov	r0,a
   B6E8 A6 03              2671 	mov	@r0,ar3
   B6EA ED                 2672 	mov	a,r5
   B6EB C3                 2673 	clr	c
   B6EC 13                 2674 	rrc	a
   B6ED C6                 2675 	xch	a,@r0
   B6EE 13                 2676 	rrc	a
   B6EF C6                 2677 	xch	a,@r0
   B6F0 08                 2678 	inc	r0
   B6F1 F6                 2679 	mov	@r0,a
                           2680 ;	../../shared/src/imp_cal.c:204: lnx_CAL_TXIMP_TUNEN_LANE_7_0 = (uint8_t)(ave & 0x0f);	
   B6F2 74 0F              2681 	mov	a,#0x0F
   B6F4 5A                 2682 	anl	a,r2
   B6F5 FB                 2683 	mov	r3,a
   B6F6 7D 00              2684 	mov	r5,#0x00
   B6F8 90 60 18           2685 	mov	dptr,#_CAL_SAVE_DATA3_LANE
   B6FB EB                 2686 	mov	a,r3
   B6FC F0                 2687 	movx	@dptr,a
                           2688 ;	../../shared/src/imp_cal.c:206: tximp_l = ave_0 > 2 ? 3 : ave_0;  //how about 5/6, 4/6 ??
   B6FD E5 18              2689 	mov	a,_bp
   B6FF 24 05              2690 	add	a,#0x05
   B701 F8                 2691 	mov	r0,a
   B702 C3                 2692 	clr	c
   B703 74 02              2693 	mov	a,#0x02
   B705 96                 2694 	subb	a,@r0
   B706 E4                 2695 	clr	a
   B707 08                 2696 	inc	r0
   B708 96                 2697 	subb	a,@r0
   B709 50 06              2698 	jnc	00214$
   B70B 7B 03              2699 	mov	r3,#0x03
   B70D 7D 00              2700 	mov	r5,#0x00
   B70F 80 0A              2701 	sjmp	00215$
   B711                    2702 00214$:
   B711 E5 18              2703 	mov	a,_bp
   B713 24 05              2704 	add	a,#0x05
   B715 F8                 2705 	mov	r0,a
   B716 86 03              2706 	mov	ar3,@r0
   B718 08                 2707 	inc	r0
   B719 86 05              2708 	mov	ar5,@r0
   B71B                    2709 00215$:
                           2710 ;	../../shared/src/imp_cal.c:207: lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = tximp_thermo_tb[ tximp_l ];
   B71B EB                 2711 	mov	a,r3
   B71C FE                 2712 	mov	r6,a
   B71D 90 BC 12           2713 	mov	dptr,#_tximp_thermo_tb
   B720 93                 2714 	movc	a,@a+dptr
                           2715 ;	../../shared/src/imp_cal.c:209: TXIMP_TUNEN0 = lnx_CAL_TXIMP_TUNEN0_LANE_7_0;
   B721 90 60 19           2716 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0001)
   B724 F0                 2717 	movx	@dptr,a
   B725 E0                 2718 	movx	a,@dptr
   B726 90 02 54           2719 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B729 54 07              2720 	anl	a,#0x07
   B72B F5 F0              2721 	mov	b,a
   B72D E0                 2722 	movx	a,@dptr
   B72E 54 F8              2723 	anl	a,#0xf8
   B730 45 F0              2724 	orl	a,b
   B732 F0                 2725 	movx	@dptr,a
                           2726 ;	../../shared/src/imp_cal.c:210: TXIMP_TUNEN = lnx_CAL_TXIMP_TUNEN_LANE_7_0;
   B733 90 60 18           2727 	mov	dptr,#_CAL_SAVE_DATA3_LANE
   B736 E0                 2728 	movx	a,@dptr
   B737 FB                 2729 	mov	r3,a
   B738 90 02 40           2730 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B73B 54 0F              2731 	anl	a,#0x0f
   B73D F5 F0              2732 	mov	b,a
   B73F E0                 2733 	movx	a,@dptr
   B740 54 F0              2734 	anl	a,#0xf0
   B742 45 F0              2735 	orl	a,b
   B744 F0                 2736 	movx	@dptr,a
                           2737 ;	../../shared/src/imp_cal.c:213: TX_IMPCAL_BOT = 0;		
   B745 90 02 4C           2738 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   B748 E0                 2739 	movx	a,@dptr
   B749 54 FE              2740 	anl	a,#0xfe
   B74B F0                 2741 	movx	@dptr,a
                           2742 ;	../../shared/src/imp_cal.c:215: sum = 0;
   B74C E5 18              2743 	mov	a,_bp
   B74E 24 03              2744 	add	a,#0x03
   B750 F8                 2745 	mov	r0,a
   B751 76 00              2746 	mov	@r0,#0x00
   B753 08                 2747 	inc	r0
   B754 76 00              2748 	mov	@r0,#0x00
                           2749 ;	../../shared/src/imp_cal.c:217: for(i=0; i<4; i++) {
   B756 A8 18              2750 	mov	r0,_bp
   B758 08                 2751 	inc	r0
   B759 76 00              2752 	mov	@r0,#0x00
   B75B                    2753 00208$:
   B75B A8 18              2754 	mov	r0,_bp
   B75D 08                 2755 	inc	r0
   B75E B6 04 00           2756 	cjne	@r0,#0x04,00309$
   B761                    2757 00309$:
   B761 40 03              2758 	jc	00310$
   B763 02 B9 7A           2759 	ljmp	00211$
   B766                    2760 00310$:
                           2761 ;	../../shared/src/imp_cal.c:218: if(i==1|i==3) TX_IMPCAL_SIDE = 1; //1'b1 during iteration i = 1, 3
   B766 A8 18              2762 	mov	r0,_bp
   B768 08                 2763 	inc	r0
   B769 E4                 2764 	clr	a
   B76A B6 01 01           2765 	cjne	@r0,#0x01,00311$
   B76D 04                 2766 	inc	a
   B76E                    2767 00311$:
   B76E FD                 2768 	mov	r5,a
   B76F A8 18              2769 	mov	r0,_bp
   B771 08                 2770 	inc	r0
   B772 E4                 2771 	clr	a
   B773 B6 03 01           2772 	cjne	@r0,#0x03,00313$
   B776 04                 2773 	inc	a
   B777                    2774 00313$:
   B777 4D                 2775 	orl	a,r5
   B778 60 09              2776 	jz	00152$
   B77A 90 02 54           2777 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B77D E0                 2778 	movx	a,@dptr
   B77E 44 40              2779 	orl	a,#0x40
   B780 F0                 2780 	movx	@dptr,a
   B781 80 07              2781 	sjmp	00153$
   B783                    2782 00152$:
                           2783 ;	../../shared/src/imp_cal.c:219: else TX_IMPCAL_SIDE = 0; //1'b0 during iteration i = 0, 2
   B783 90 02 54           2784 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B786 E0                 2785 	movx	a,@dptr
   B787 54 BF              2786 	anl	a,#0xbf
   B789 F0                 2787 	movx	@dptr,a
   B78A                    2788 00153$:
                           2789 ;	../../shared/src/imp_cal.c:221: if(i==2|i==3) RCALP_2ND_EN = 1; //1'b1 during iteration i = 2, 3
   B78A A8 18              2790 	mov	r0,_bp
   B78C 08                 2791 	inc	r0
   B78D E4                 2792 	clr	a
   B78E B6 02 01           2793 	cjne	@r0,#0x02,00316$
   B791 04                 2794 	inc	a
   B792                    2795 00316$:
   B792 FD                 2796 	mov	r5,a
   B793 A8 18              2797 	mov	r0,_bp
   B795 08                 2798 	inc	r0
   B796 E4                 2799 	clr	a
   B797 B6 03 01           2800 	cjne	@r0,#0x03,00318$
   B79A 04                 2801 	inc	a
   B79B                    2802 00318$:
   B79B 4D                 2803 	orl	a,r5
   B79C 60 09              2804 	jz	00155$
   B79E 90 02 50           2805 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   B7A1 E0                 2806 	movx	a,@dptr
   B7A2 44 40              2807 	orl	a,#0x40
   B7A4 F0                 2808 	movx	@dptr,a
   B7A5 80 07              2809 	sjmp	00156$
   B7A7                    2810 00155$:
                           2811 ;	../../shared/src/imp_cal.c:222: else RCALP_2ND_EN = 0; //1'b0 during iteration i = 0, 1
   B7A7 90 02 50           2812 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   B7AA E0                 2813 	movx	a,@dptr
   B7AB 54 BF              2814 	anl	a,#0xbf
   B7AD F0                 2815 	movx	@dptr,a
   B7AE                    2816 00156$:
                           2817 ;	../../shared/src/imp_cal.c:224: TXIMP_TUNEP = 0x8; // 4'b1000
   B7AE 90 02 40           2818 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B7B1 E0                 2819 	movx	a,@dptr
   B7B2 54 0F              2820 	anl	a,#0x0f
   B7B4 44 80              2821 	orl	a,#0x80
   B7B6 F0                 2822 	movx	@dptr,a
                           2823 ;	../../shared/src/imp_cal.c:225: TXIMP_TUNEP0 = 0x0; // 3'b000 (1/6LSB of TXIMP_TUNEP)
   B7B7 90 02 54           2824 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B7BA E0                 2825 	movx	a,@dptr
   B7BB 54 C7              2826 	anl	a,#0xc7
   B7BD F0                 2827 	movx	@dptr,a
                           2828 ;	../../shared/src/imp_cal.c:227: tximp_h = 8; tximp_l = 0;
   B7BE A8 18              2829 	mov	r0,_bp
   B7C0 08                 2830 	inc	r0
   B7C1 08                 2831 	inc	r0
   B7C2 76 08              2832 	mov	@r0,#0x08
   B7C4 7E 00              2833 	mov	r6,#0x00
                           2834 ;	../../shared/src/imp_cal.c:231: pre_val = toggle_impcal_out_req();
   B7C6 C0 06              2835 	push	ar6
   B7C8 78 92              2836 	mov	r0,#_toggle_impcal_out_req
   B7CA 79 B3              2837 	mov	r1,#(_toggle_impcal_out_req >> 8)
   B7CC 7A 02              2838 	mov	r2,#(_toggle_impcal_out_req >> 16)
   B7CE 12 00 B3           2839 	lcall	__sdcc_banked_call
   B7D1 AD 82              2840 	mov	r5,dpl
   B7D3 D0 06              2841 	pop	ar6
   B7D5 E5 18              2842 	mov	a,_bp
   B7D7 24 07              2843 	add	a,#0x07
   B7D9 F8                 2844 	mov	r0,a
   B7DA A6 05              2845 	mov	@r0,ar5
                           2846 ;	../../shared/src/imp_cal.c:233: min_reached_p = 0;
   B7DC 7A 00              2847 	mov	r2,#0x00
                           2848 ;	../../shared/src/imp_cal.c:234: max_reached_p = 0;
   B7DE 7B 00              2849 	mov	r3,#0x00
                           2850 ;	../../shared/src/imp_cal.c:236: do {
   B7E0 7C 00              2851 	mov	r4,#0x00
   B7E2                    2852 00177$:
                           2853 ;	../../shared/src/imp_cal.c:237: ana_tximpcal_out = toggle_impcal_out_req();
   B7E2 C0 03              2854 	push	ar3
   B7E4 C0 02              2855 	push	ar2
   B7E6 C0 04              2856 	push	ar4
   B7E8 C0 06              2857 	push	ar6
   B7EA 78 92              2858 	mov	r0,#_toggle_impcal_out_req
   B7EC 79 B3              2859 	mov	r1,#(_toggle_impcal_out_req >> 8)
   B7EE 7A 02              2860 	mov	r2,#(_toggle_impcal_out_req >> 16)
   B7F0 12 00 B3           2861 	lcall	__sdcc_banked_call
   B7F3 AB 82              2862 	mov	r3,dpl
   B7F5 D0 06              2863 	pop	ar6
   B7F7 D0 04              2864 	pop	ar4
   B7F9 D0 02              2865 	pop	ar2
   B7FB 8B 07              2866 	mov	ar7,r3
                           2867 ;	../../shared/src/imp_cal.c:239: if ( ana_tximpcal_out != pre_val ) break; //exit at first toggle
   B7FD E5 18              2868 	mov	a,_bp
   B7FF 24 07              2869 	add	a,#0x07
   B801 F8                 2870 	mov	r0,a
   B802 E6                 2871 	mov	a,@r0
   B803 B5 07 02           2872 	cjne	a,ar7,00321$
   B806 80 04              2873 	sjmp	00322$
   B808                    2874 00321$:
   B808 D0 03              2875 	pop	ar3
   B80A 80 6C              2876 	sjmp	00179$
   B80C                    2877 00322$:
   B80C D0 03              2878 	pop	ar3
                           2879 ;	../../shared/src/imp_cal.c:241: if( tximp_h == 0x0) min_reached_p += 1;
   B80E A8 18              2880 	mov	r0,_bp
   B810 08                 2881 	inc	r0
   B811 08                 2882 	inc	r0
   B812 E6                 2883 	mov	a,@r0
   B813 70 03              2884 	jnz	00162$
   B815 0A                 2885 	inc	r2
   B816 80 08              2886 	sjmp	00163$
   B818                    2887 00162$:
                           2888 ;	../../shared/src/imp_cal.c:242: else if( tximp_h == 0xf) max_reached_p += 1;
   B818 A8 18              2889 	mov	r0,_bp
   B81A 08                 2890 	inc	r0
   B81B 08                 2891 	inc	r0
   B81C B6 0F 01           2892 	cjne	@r0,#0x0F,00163$
   B81F 0B                 2893 	inc	r3
   B820                    2894 00163$:
                           2895 ;	../../shared/src/imp_cal.c:244: if( ana_tximpcal_out == 0 ) {
   B820 EF                 2896 	mov	a,r7
                           2897 ;	../../shared/src/imp_cal.c:245: max_reached_p = 0;
   B821 70 10              2898 	jnz	00175$
   B823 FB                 2899 	mov	r3,a
                           2900 ;	../../shared/src/imp_cal.c:246: if( min_reached_p == 0) tximp_h--; //decrement DAC value with underflow protection
   B824 EA                 2901 	mov	a,r2
   B825 70 07              2902 	jnz	00167$
   B827 A8 18              2903 	mov	r0,_bp
   B829 08                 2904 	inc	r0
   B82A 08                 2905 	inc	r0
   B82B 16                 2906 	dec	@r0
   B82C 80 16              2907 	sjmp	00176$
   B82E                    2908 00167$:
                           2909 ;	../../shared/src/imp_cal.c:247: else if ( min_reached_p == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
   B82E BA 02 13           2910 	cjne	r2,#0x02,00176$
   B831 80 45              2911 	sjmp	00179$
   B833                    2912 00175$:
                           2913 ;	../../shared/src/imp_cal.c:250: min_reached_p = 0;
   B833 7A 00              2914 	mov	r2,#0x00
                           2915 ;	../../shared/src/imp_cal.c:251: if( max_reached_p == 0) tximp_h++; //increment DAC value with overflow protection
   B835 EB                 2916 	mov	a,r3
   B836 70 07              2917 	jnz	00172$
   B838 A8 18              2918 	mov	r0,_bp
   B83A 08                 2919 	inc	r0
   B83B 08                 2920 	inc	r0
   B83C 06                 2921 	inc	@r0
   B83D 80 05              2922 	sjmp	00176$
   B83F                    2923 00172$:
                           2924 ;	../../shared/src/imp_cal.c:252: else if ( max_reached_p == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples	
   B83F BB 02 02           2925 	cjne	r3,#0x02,00330$
   B842 80 34              2926 	sjmp	00179$
   B844                    2927 00330$:
   B844                    2928 00176$:
                           2929 ;	../../shared/src/imp_cal.c:255: TXIMP_TUNEP = tximp_h;
   B844 C0 03              2930 	push	ar3
   B846 90 02 40           2931 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B849 A8 18              2932 	mov	r0,_bp
   B84B 08                 2933 	inc	r0
   B84C 08                 2934 	inc	r0
   B84D E6                 2935 	mov	a,@r0
   B84E C4                 2936 	swap	a
   B84F 54 F0              2937 	anl	a,#(0xf0&0xf0)
   B851 F5 F0              2938 	mov	b,a
   B853 E0                 2939 	movx	a,@dptr
   B854 54 0F              2940 	anl	a,#0x0f
   B856 45 F0              2941 	orl	a,b
   B858 F0                 2942 	movx	@dptr,a
                           2943 ;	../../shared/src/imp_cal.c:257: } while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps
   B859 8C 03              2944 	mov	ar3,r4
   B85B 0C                 2945 	inc	r4
   B85C BB 10 00           2946 	cjne	r3,#0x10,00331$
   B85F                    2947 00331$:
   B85F E4                 2948 	clr	a
   B860 33                 2949 	rlc	a
   B861 FB                 2950 	mov	r3,a
   B862 90 E6 48           2951 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   B865 E0                 2952 	movx	a,@dptr
   B866 23                 2953 	rl	a
   B867 23                 2954 	rl	a
   B868 54 01              2955 	anl	a,#0x01
   B86A FD                 2956 	mov	r5,a
   B86B E4                 2957 	clr	a
   B86C BD 01 01           2958 	cjne	r5,#0x01,00332$
   B86F 04                 2959 	inc	a
   B870                    2960 00332$:
   B870 4B                 2961 	orl	a,r3
   B871 D0 03              2962 	pop	ar3
   B873 60 03              2963 	jz	00334$
   B875 02 B7 E2           2964 	ljmp	00177$
   B878                    2965 00334$:
   B878                    2966 00179$:
                           2967 ;	../../shared/src/imp_cal.c:259: if( cnt >= 16 ) {
   B878 BC 10 00           2968 	cjne	r4,#0x10,00335$
   B87B                    2969 00335$:
   B87B 40 09              2970 	jc	00184$
                           2971 ;	../../shared/src/imp_cal.c:260: lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
   B87D 90 60 0A           2972 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   B880 E0                 2973 	movx	a,@dptr
   B881 44 40              2974 	orl	a,#0x40
   B883 F0                 2975 	movx	@dptr,a
   B884 80 1E              2976 	sjmp	00185$
   B886                    2977 00184$:
                           2978 ;	../../shared/src/imp_cal.c:262: else if( ana_tximpcal_out == 0 && min_reached_p == 0 ) { //previously toggled from 1->0
   B886 EF                 2979 	mov	a,r7
   B887 70 1B              2980 	jnz	00185$
   B889 EA                 2981 	mov	a,r2
   B88A 70 18              2982 	jnz	00185$
                           2983 ;	../../shared/src/imp_cal.c:263: tximp_h--;
   B88C A8 18              2984 	mov	r0,_bp
   B88E 08                 2985 	inc	r0
   B88F 08                 2986 	inc	r0
   B890 16                 2987 	dec	@r0
                           2988 ;	../../shared/src/imp_cal.c:264: TXIMP_TUNEP = tximp_h;
   B891 90 02 40           2989 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   B894 A8 18              2990 	mov	r0,_bp
   B896 08                 2991 	inc	r0
   B897 08                 2992 	inc	r0
   B898 E6                 2993 	mov	a,@r0
   B899 C4                 2994 	swap	a
   B89A 54 F0              2995 	anl	a,#(0xf0&0xf0)
   B89C F5 F0              2996 	mov	b,a
   B89E E0                 2997 	movx	a,@dptr
   B89F 54 0F              2998 	anl	a,#0x0f
   B8A1 45 F0              2999 	orl	a,b
   B8A3 F0                 3000 	movx	@dptr,a
   B8A4                    3001 00185$:
                           3002 ;	../../shared/src/imp_cal.c:268: dir = 0;
   B8A4 7A 00              3003 	mov	r2,#0x00
                           3004 ;	../../shared/src/imp_cal.c:270: do {
   B8A6 7D 00              3005 	mov	r5,#0x00
   B8A8                    3006 00197$:
                           3007 ;	../../shared/src/imp_cal.c:271: if( tximp_l == 3 ) break; //exit once thermal code reaches 111
   B8A8 BE 03 03           3008 	cjne	r6,#0x03,00339$
   B8AB 02 B9 3F           3009 	ljmp	00199$
   B8AE                    3010 00339$:
                           3011 ;	../../shared/src/imp_cal.c:273: ana_tximpcal_out = toggle_impcal_out_req();
   B8AE C0 05              3012 	push	ar5
   B8B0 C0 02              3013 	push	ar2
   B8B2 C0 06              3014 	push	ar6
   B8B4 78 92              3015 	mov	r0,#_toggle_impcal_out_req
   B8B6 79 B3              3016 	mov	r1,#(_toggle_impcal_out_req >> 8)
   B8B8 7A 02              3017 	mov	r2,#(_toggle_impcal_out_req >> 16)
   B8BA 12 00 B3           3018 	lcall	__sdcc_banked_call
   B8BD AD 82              3019 	mov	r5,dpl
   B8BF D0 06              3020 	pop	ar6
   B8C1 D0 02              3021 	pop	ar2
   B8C3 8D 07              3022 	mov	ar7,r5
                           3023 ;	../../shared/src/imp_cal.c:275: if( ana_tximpcal_out == 0 ) {
   B8C5 D0 05              3024 	pop	ar5
   B8C7 EF                 3025 	mov	a,r7
   B8C8 70 06              3026 	jnz	00193$
                           3027 ;	../../shared/src/imp_cal.c:276: if( tximp_l > 0 ) tximp_l--;
   B8CA EE                 3028 	mov	a,r6
   B8CB 60 09              3029 	jz	00194$
   B8CD 1E                 3030 	dec	r6
   B8CE 80 06              3031 	sjmp	00194$
   B8D0                    3032 00193$:
                           3033 ;	../../shared/src/imp_cal.c:279: if( tximp_l < 3 ) tximp_l++;
   B8D0 BE 03 00           3034 	cjne	r6,#0x03,00342$
   B8D3                    3035 00342$:
   B8D3 50 01              3036 	jnc	00194$
   B8D5 0E                 3037 	inc	r6
   B8D6                    3038 00194$:
                           3039 ;	../../shared/src/imp_cal.c:282: TXIMP_TUNEP0 = tximp_thermo_tb[tximp_l];
   B8D6 EE                 3040 	mov	a,r6
   B8D7 24 12              3041 	add	a,#_tximp_thermo_tb
   B8D9 F5 82              3042 	mov	dpl,a
   B8DB E4                 3043 	clr	a
   B8DC 34 BC              3044 	addc	a,#(_tximp_thermo_tb >> 8)
   B8DE F5 83              3045 	mov	dph,a
   B8E0 C0 06              3046 	push	ar6
   B8E2 E4                 3047 	clr	a
   B8E3 93                 3048 	movc	a,@a+dptr
   B8E4 90 02 54           3049 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   B8E7 C4                 3050 	swap	a
   B8E8 03                 3051 	rr	a
   B8E9 54 38              3052 	anl	a,#(0xf8&0x38)
   B8EB F5 F0              3053 	mov	b,a
   B8ED E0                 3054 	movx	a,@dptr
   B8EE 54 C7              3055 	anl	a,#0xc7
   B8F0 45 F0              3056 	orl	a,b
   B8F2 F0                 3057 	movx	@dptr,a
                           3058 ;	../../shared/src/imp_cal.c:284: dir = (dir << 1 ) | ana_tximpcal_out;
   B8F3 EA                 3059 	mov	a,r2
   B8F4 2A                 3060 	add	a,r2
   B8F5 42 07              3061 	orl	ar7,a
   B8F7 8F 02              3062 	mov	ar2,r7
                           3063 ;	../../shared/src/imp_cal.c:285: if ( is_toggle_pat( dir, cnt + 1 ) ) break;
   B8F9 ED                 3064 	mov	a,r5
   B8FA 04                 3065 	inc	a
   B8FB FE                 3066 	mov	r6,a
   B8FC C0 02              3067 	push	ar2
   B8FE C0 05              3068 	push	ar5
   B900 C0 06              3069 	push	ar6
   B902 C0 06              3070 	push	ar6
   B904 8A 82              3071 	mov	dpl,r2
   B906 78 CD              3072 	mov	r0,#_is_toggle_pat
   B908 79 BD              3073 	mov	r1,#(_is_toggle_pat >> 8)
   B90A 7A 02              3074 	mov	r2,#(_is_toggle_pat >> 16)
   B90C 12 00 B3           3075 	lcall	__sdcc_banked_call
   B90F 15 81              3076 	dec	sp
   B911 D0 06              3077 	pop	ar6
   B913 D0 05              3078 	pop	ar5
   B915 D0 02              3079 	pop	ar2
   B917 92 28              3080 	mov	b0,c
   B919 D0 06              3081 	pop	ar6
   B91B 20 28 21           3082 	jb	b0,00199$
                           3083 ;	../../shared/src/imp_cal.c:287: } while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps
   B91E C0 02              3084 	push	ar2
   B920 8D 07              3085 	mov	ar7,r5
   B922 0D                 3086 	inc	r5
   B923 BF 10 00           3087 	cjne	r7,#0x10,00345$
   B926                    3088 00345$:
   B926 E4                 3089 	clr	a
   B927 33                 3090 	rlc	a
   B928 FF                 3091 	mov	r7,a
   B929 90 E6 48           3092 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   B92C E0                 3093 	movx	a,@dptr
   B92D 23                 3094 	rl	a
   B92E 23                 3095 	rl	a
   B92F 54 01              3096 	anl	a,#0x01
   B931 FA                 3097 	mov	r2,a
   B932 E4                 3098 	clr	a
   B933 BA 01 01           3099 	cjne	r2,#0x01,00346$
   B936 04                 3100 	inc	a
   B937                    3101 00346$:
   B937 4F                 3102 	orl	a,r7
   B938 D0 02              3103 	pop	ar2
   B93A 60 03              3104 	jz	00348$
   B93C 02 B8 A8           3105 	ljmp	00197$
   B93F                    3106 00348$:
   B93F                    3107 00199$:
                           3108 ;	../../shared/src/imp_cal.c:289: if( cnt >= 16 ) {
   B93F BD 10 00           3109 	cjne	r5,#0x10,00349$
   B942                    3110 00349$:
   B942 40 07              3111 	jc	00201$
                           3112 ;	../../shared/src/imp_cal.c:290: lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
   B944 90 60 0A           3113 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   B947 E0                 3114 	movx	a,@dptr
   B948 44 40              3115 	orl	a,#0x40
   B94A F0                 3116 	movx	@dptr,a
   B94B                    3117 00201$:
                           3118 ;	../../shared/src/imp_cal.c:293: sum += tximp_h* 6;
   B94B A8 18              3119 	mov	r0,_bp
   B94D 08                 3120 	inc	r0
   B94E 08                 3121 	inc	r0
   B94F E6                 3122 	mov	a,@r0
   B950 75 F0 06           3123 	mov	b,#0x06
   B953 A4                 3124 	mul	ab
   B954 FD                 3125 	mov	r5,a
   B955 AF F0              3126 	mov	r7,b
   B957 E5 18              3127 	mov	a,_bp
   B959 24 03              3128 	add	a,#0x03
   B95B F8                 3129 	mov	r0,a
   B95C ED                 3130 	mov	a,r5
   B95D 26                 3131 	add	a,@r0
   B95E F6                 3132 	mov	@r0,a
   B95F EF                 3133 	mov	a,r7
   B960 08                 3134 	inc	r0
   B961 36                 3135 	addc	a,@r0
   B962 F6                 3136 	mov	@r0,a
                           3137 ;	../../shared/src/imp_cal.c:294: sum += tximp_l;
   B963 8E 05              3138 	mov	ar5,r6
   B965 7F 00              3139 	mov	r7,#0x00
   B967 E5 18              3140 	mov	a,_bp
   B969 24 03              3141 	add	a,#0x03
   B96B F8                 3142 	mov	r0,a
   B96C ED                 3143 	mov	a,r5
   B96D 26                 3144 	add	a,@r0
   B96E F6                 3145 	mov	@r0,a
   B96F EF                 3146 	mov	a,r7
   B970 08                 3147 	inc	r0
   B971 36                 3148 	addc	a,@r0
   B972 F6                 3149 	mov	@r0,a
                           3150 ;	../../shared/src/imp_cal.c:217: for(i=0; i<4; i++) {
   B973 A8 18              3151 	mov	r0,_bp
   B975 08                 3152 	inc	r0
   B976 06                 3153 	inc	@r0
   B977 02 B7 5B           3154 	ljmp	00208$
   B97A                    3155 00211$:
                           3156 ;	../../shared/src/imp_cal.c:300: ave = u16div( sum >> 2, 6 ); //ave = (sum / 2) / 6
   B97A E5 18              3157 	mov	a,_bp
   B97C 24 03              3158 	add	a,#0x03
   B97E F8                 3159 	mov	r0,a
   B97F 86 05              3160 	mov	ar5,@r0
   B981 08                 3161 	inc	r0
   B982 E6                 3162 	mov	a,@r0
   B983 C3                 3163 	clr	c
   B984 13                 3164 	rrc	a
   B985 CD                 3165 	xch	a,r5
   B986 13                 3166 	rrc	a
   B987 CD                 3167 	xch	a,r5
   B988 C3                 3168 	clr	c
   B989 13                 3169 	rrc	a
   B98A CD                 3170 	xch	a,r5
   B98B 13                 3171 	rrc	a
   B98C CD                 3172 	xch	a,r5
   B98D FF                 3173 	mov	r7,a
   B98E 74 06              3174 	mov	a,#0x06
   B990 C0 E0              3175 	push	acc
   B992 E4                 3176 	clr	a
   B993 C0 E0              3177 	push	acc
   B995 8D 82              3178 	mov	dpl,r5
   B997 8F 83              3179 	mov	dph,r7
   B999 78 3E              3180 	mov	r0,#_u16div
   B99B 79 BF              3181 	mov	r1,#(_u16div >> 8)
   B99D 7A 02              3182 	mov	r2,#(_u16div >> 16)
   B99F 12 00 B3           3183 	lcall	__sdcc_banked_call
   B9A2 AD 82              3184 	mov	r5,dpl
   B9A4 AF 83              3185 	mov	r7,dph
   B9A6 15 81              3186 	dec	sp
   B9A8 15 81              3187 	dec	sp
   B9AA 8D 02              3188 	mov	ar2,r5
   B9AC 8F 04              3189 	mov	ar4,r7
                           3190 ;	../../shared/src/imp_cal.c:301: ave_0 = (uint16_t)((sum - u16mul(ave, 24)) >> 2);
   B9AE C0 02              3191 	push	ar2
   B9B0 C0 04              3192 	push	ar4
   B9B2 74 18              3193 	mov	a,#0x18
   B9B4 C0 E0              3194 	push	acc
   B9B6 E4                 3195 	clr	a
   B9B7 C0 E0              3196 	push	acc
   B9B9 8A 82              3197 	mov	dpl,r2
   B9BB 8C 83              3198 	mov	dph,r4
   B9BD 78 8D              3199 	mov	r0,#_u16mul
   B9BF 79 BF              3200 	mov	r1,#(_u16mul >> 8)
   B9C1 7A 02              3201 	mov	r2,#(_u16mul >> 16)
   B9C3 12 00 B3           3202 	lcall	__sdcc_banked_call
   B9C6 AD 82              3203 	mov	r5,dpl
   B9C8 AF 83              3204 	mov	r7,dph
   B9CA 15 81              3205 	dec	sp
   B9CC 15 81              3206 	dec	sp
   B9CE D0 04              3207 	pop	ar4
   B9D0 D0 02              3208 	pop	ar2
   B9D2 E5 18              3209 	mov	a,_bp
   B9D4 24 03              3210 	add	a,#0x03
   B9D6 F8                 3211 	mov	r0,a
   B9D7 E6                 3212 	mov	a,@r0
   B9D8 C3                 3213 	clr	c
   B9D9 9D                 3214 	subb	a,r5
   B9DA FD                 3215 	mov	r5,a
   B9DB 08                 3216 	inc	r0
   B9DC E6                 3217 	mov	a,@r0
   B9DD 9F                 3218 	subb	a,r7
   B9DE FF                 3219 	mov	r7,a
   B9DF E5 18              3220 	mov	a,_bp
   B9E1 24 05              3221 	add	a,#0x05
   B9E3 F8                 3222 	mov	r0,a
   B9E4 A6 05              3223 	mov	@r0,ar5
   B9E6 EF                 3224 	mov	a,r7
   B9E7 C3                 3225 	clr	c
   B9E8 13                 3226 	rrc	a
   B9E9 C6                 3227 	xch	a,@r0
   B9EA 13                 3228 	rrc	a
   B9EB C6                 3229 	xch	a,@r0
   B9EC C3                 3230 	clr	c
   B9ED 13                 3231 	rrc	a
   B9EE C6                 3232 	xch	a,@r0
   B9EF 13                 3233 	rrc	a
   B9F0 C6                 3234 	xch	a,@r0
   B9F1 08                 3235 	inc	r0
   B9F2 F6                 3236 	mov	@r0,a
                           3237 ;	../../shared/src/imp_cal.c:302: lnx_CAL_TXIMP_TUNEP_LANE_7_0 =(uint8_t)(ave & 0x0f);
   B9F3 74 0F              3238 	mov	a,#0x0F
   B9F5 5A                 3239 	anl	a,r2
   B9F6 FD                 3240 	mov	r5,a
   B9F7 7F 00              3241 	mov	r7,#0x00
   B9F9 90 60 1A           3242 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0002)
   B9FC ED                 3243 	mov	a,r5
   B9FD F0                 3244 	movx	@dptr,a
                           3245 ;	../../shared/src/imp_cal.c:304: tximp_l = ave_0 > 2 ? 3 : ave_0;
   B9FE E5 18              3246 	mov	a,_bp
   BA00 24 05              3247 	add	a,#0x05
   BA02 F8                 3248 	mov	r0,a
   BA03 C3                 3249 	clr	c
   BA04 74 02              3250 	mov	a,#0x02
   BA06 96                 3251 	subb	a,@r0
   BA07 E4                 3252 	clr	a
   BA08 08                 3253 	inc	r0
   BA09 96                 3254 	subb	a,@r0
   BA0A 50 06              3255 	jnc	00216$
   BA0C 7D 03              3256 	mov	r5,#0x03
   BA0E 7F 00              3257 	mov	r7,#0x00
   BA10 80 0A              3258 	sjmp	00217$
   BA12                    3259 00216$:
   BA12 E5 18              3260 	mov	a,_bp
   BA14 24 05              3261 	add	a,#0x05
   BA16 F8                 3262 	mov	r0,a
   BA17 86 05              3263 	mov	ar5,@r0
   BA19 08                 3264 	inc	r0
   BA1A 86 07              3265 	mov	ar7,@r0
   BA1C                    3266 00217$:
                           3267 ;	../../shared/src/imp_cal.c:305: lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = tximp_thermo_tb[ tximp_l ];
   BA1C ED                 3268 	mov	a,r5
   BA1D FE                 3269 	mov	r6,a
   BA1E 90 BC 12           3270 	mov	dptr,#_tximp_thermo_tb
   BA21 93                 3271 	movc	a,@a+dptr
   BA22 90 60 1B           3272 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0003)
   BA25 F0                 3273 	movx	@dptr,a
                           3274 ;	../../shared/src/imp_cal.c:307: TXIMP_TUNEP = lnx_CAL_TXIMP_TUNEP_LANE_7_0;
   BA26 90 60 1A           3275 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0002)
   BA29 E0                 3276 	movx	a,@dptr
   BA2A 90 02 40           3277 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_144
   BA2D C4                 3278 	swap	a
   BA2E 54 F0              3279 	anl	a,#(0xf0&0xf0)
   BA30 F5 F0              3280 	mov	b,a
   BA32 E0                 3281 	movx	a,@dptr
   BA33 54 0F              3282 	anl	a,#0x0f
   BA35 45 F0              3283 	orl	a,b
   BA37 F0                 3284 	movx	@dptr,a
                           3285 ;	../../shared/src/imp_cal.c:308: TXIMP_TUNEP0 = lnx_CAL_TXIMP_TUNEP0_LANE_7_0;
   BA38 90 60 1B           3286 	mov	dptr,#(_CAL_SAVE_DATA3_LANE + 0x0003)
   BA3B E0                 3287 	movx	a,@dptr
   BA3C FD                 3288 	mov	r5,a
   BA3D 90 02 54           3289 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   BA40 C4                 3290 	swap	a
   BA41 03                 3291 	rr	a
   BA42 54 38              3292 	anl	a,#(0xf8&0x38)
   BA44 F5 F0              3293 	mov	b,a
   BA46 E0                 3294 	movx	a,@dptr
   BA47 54 C7              3295 	anl	a,#0xc7
   BA49 45 F0              3296 	orl	a,b
   BA4B F0                 3297 	movx	@dptr,a
                           3298 ;	../../shared/src/imp_cal.c:310: if( lnx_TXIMP_CAL_TIMEOUT_LANE == 0 ) {
   BA4C 90 60 0A           3299 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   BA4F E0                 3300 	movx	a,@dptr
   BA50 20 E6 07           3301 	jb	acc.6,00203$
                           3302 ;	../../shared/src/imp_cal.c:311: lnx_TXIMP_CAL_PASS_LANE = 1;
   BA53 90 60 05           3303 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   BA56 E0                 3304 	movx	a,@dptr
   BA57 44 80              3305 	orl	a,#0x80
   BA59 F0                 3306 	movx	@dptr,a
   BA5A                    3307 00203$:
                           3308 ;	../../shared/src/imp_cal.c:314: TX_IMPCAL_BOT = 0;
   BA5A 90 02 4C           3309 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   BA5D E0                 3310 	movx	a,@dptr
   BA5E 54 FE              3311 	anl	a,#0xfe
   BA60 F0                 3312 	movx	@dptr,a
                           3313 ;	../../shared/src/imp_cal.c:315: TX_IMPCAL_SIDE = 0;
   BA61 90 02 54           3314 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   BA64 E0                 3315 	movx	a,@dptr
   BA65 54 BF              3316 	anl	a,#0xbf
   BA67 F0                 3317 	movx	@dptr,a
                           3318 ;	../../shared/src/imp_cal.c:316: RCALP_2ND_EN = 0;
   BA68 90 02 50           3319 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   BA6B E0                 3320 	movx	a,@dptr
   BA6C 54 BF              3321 	anl	a,#0xbf
   BA6E F0                 3322 	movx	@dptr,a
                           3323 ;	../../shared/src/imp_cal.c:317: TX_IMPCAL_EN = 0;
   BA6F 90 02 54           3324 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_149
   BA72 E0                 3325 	movx	a,@dptr
   BA73 54 7F              3326 	anl	a,#0x7f
   BA75 F0                 3327 	movx	@dptr,a
                           3328 ;	../../shared/src/imp_cal.c:319: recover_test_pattern();
   BA76 78 6D              3329 	mov	r0,#_recover_test_pattern
   BA78 79 BE              3330 	mov	r1,#(_recover_test_pattern >> 8)
   BA7A 7A 02              3331 	mov	r2,#(_recover_test_pattern >> 16)
   BA7C 12 00 B3           3332 	lcall	__sdcc_banked_call
                           3333 ;	../../shared/src/imp_cal.c:321: lnx_TXIMP_CAL_DONE_LANE = 1;
   BA7F 90 60 01           3334 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   BA82 E0                 3335 	movx	a,@dptr
   BA83 44 20              3336 	orl	a,#0x20
   BA85 F0                 3337 	movx	@dptr,a
   BA86                    3338 00212$:
   BA86 85 18 81           3339 	mov	sp,_bp
   BA89 D0 18              3340 	pop	_bp
   BA8B 02 00 C5           3341 	ljmp	__sdcc_banked_ret
                           3342 ;------------------------------------------------------------
                           3343 ;Allocation info for local variables in function 'rximp_cal'
                           3344 ;------------------------------------------------------------
                           3345 ;cnt                       Allocated to registers r3 
                           3346 ;rximp                     Allocated to registers r2 
                           3347 ;min_reached               Allocated to registers r4 
                           3348 ;max_reached               Allocated to stack - offset 1
                           3349 ;dir                       Allocated to registers r6 
                           3350 ;ana_rximpcal_out          Allocated to registers r5 
                           3351 ;------------------------------------------------------------
                           3352 ;	../../shared/src/imp_cal.c:335: void rximp_cal( void ) BANKING_CTRL {
                           3353 ;	-----------------------------------------
                           3354 ;	 function rximp_cal
                           3355 ;	-----------------------------------------
   BA8E                    3356 _rximp_cal:
   BA8E C0 18              3357 	push	_bp
   BA90 85 81 18           3358 	mov	_bp,sp
   BA93 05 81              3359 	inc	sp
                           3360 ;	../../shared/src/imp_cal.c:339: lnx_RXIMP_CAL_DONE_LANE = 0;	
   BA95 90 60 01           3361 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   BA98 E0                 3362 	movx	a,@dptr
   BA99 54 BF              3363 	anl	a,#0xbf
   BA9B F0                 3364 	movx	@dptr,a
                           3365 ;	../../shared/src/imp_cal.c:341: if( cmx_RXIMP_CAL_EXT_EN == 1) {
   BA9C 90 E6 0A           3366 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   BA9F E0                 3367 	movx	a,@dptr
   BAA0 23                 3368 	rl	a
   BAA1 23                 3369 	rl	a
   BAA2 54 01              3370 	anl	a,#0x01
   BAA4 FA                 3371 	mov	r2,a
   BAA5 BA 01 20           3372 	cjne	r2,#0x01,00102$
                           3373 ;	../../shared/src/imp_cal.c:342: IMPCAL_RX_LANE = lnx_CAL_RX_IMP_LANE_7_0;
   BAA8 90 60 15           3374 	mov	dptr,#(_CAL_SAVE_DATA2_LANE + 0x0001)
   BAAB E0                 3375 	movx	a,@dptr
   BAAC FA                 3376 	mov	r2,a
   BAAD 90 00 08           3377 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_2
   BAB0 25 E0              3378 	add	a,acc
   BAB2 25 E0              3379 	add	a,acc
   BAB4 54 7C              3380 	anl	a,#0x7c
   BAB6 F5 F0              3381 	mov	b,a
   BAB8 E0                 3382 	movx	a,@dptr
   BAB9 54 83              3383 	anl	a,#0x83
   BABB 45 F0              3384 	orl	a,b
   BABD F0                 3385 	movx	@dptr,a
                           3386 ;	../../shared/src/imp_cal.c:344: lnx_RXIMP_CAL_DONE_LANE = 1;
   BABE 90 60 01           3387 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   BAC1 E0                 3388 	movx	a,@dptr
   BAC2 44 40              3389 	orl	a,#0x40
   BAC4 F0                 3390 	movx	@dptr,a
                           3391 ;	../../shared/src/imp_cal.c:345: return;
   BAC5 02 BC 0A           3392 	ljmp	00131$
   BAC8                    3393 00102$:
                           3394 ;	../../shared/src/imp_cal.c:348: PHY_STATUS = ST_RXIMP_CAL;
   BAC8 90 22 30           3395 	mov	dptr,#_MCU_STATUS0_LANE
   BACB 74 17              3396 	mov	a,#0x17
   BACD F0                 3397 	movx	@dptr,a
                           3398 ;	../../shared/src/imp_cal.c:350: lnx_RXIMP_CAL_PASS_LANE = 0;
   BACE 90 60 06           3399 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   BAD1 E0                 3400 	movx	a,@dptr
   BAD2 54 FE              3401 	anl	a,#0xfe
   BAD4 F0                 3402 	movx	@dptr,a
                           3403 ;	../../shared/src/imp_cal.c:351: lnx_RXIMP_CAL_TIMEOUT_LANE = 0;
   BAD5 90 60 0A           3404 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   BAD8 E0                 3405 	movx	a,@dptr
   BAD9 54 7F              3406 	anl	a,#0x7f
   BADB F0                 3407 	movx	@dptr,a
                           3408 ;	../../shared/src/imp_cal.c:353: delay01(100); //10us delay between reg_RXIMPCAL_EN and reg_RX_IMPCAL_EN_LANE
   BADC 90 00 64           3409 	mov	dptr,#0x0064
   BADF 78 16              3410 	mov	r0,#_delay01
   BAE1 79 BC              3411 	mov	r1,#(_delay01 >> 8)
   BAE3 7A 02              3412 	mov	r2,#(_delay01 >> 16)
   BAE5 12 00 B3           3413 	lcall	__sdcc_banked_call
                           3414 ;	../../shared/src/imp_cal.c:354: RX_IMPCAL_EN = 1;
   BAE8 90 00 08           3415 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_2
   BAEB E0                 3416 	movx	a,@dptr
   BAEC 44 80              3417 	orl	a,#0x80
   BAEE F0                 3418 	movx	@dptr,a
                           3419 ;	../../shared/src/imp_cal.c:356: RXIMP_IVREF = 0x0c;
   BAEF 90 82 08           3420 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_130
   BAF2 E0                 3421 	movx	a,@dptr
   BAF3 54 07              3422 	anl	a,#0x07
   BAF5 44 60              3423 	orl	a,#0x60
   BAF7 F0                 3424 	movx	@dptr,a
                           3425 ;	../../shared/src/imp_cal.c:357: rximp = 0x0c;
   BAF8 7A 0C              3426 	mov	r2,#0x0C
                           3427 ;	../../shared/src/imp_cal.c:359: cnt = 0;
   BAFA 7B 00              3428 	mov	r3,#0x00
                           3429 ;	../../shared/src/imp_cal.c:361: min_reached = 0;
   BAFC 7C 00              3430 	mov	r4,#0x00
                           3431 ;	../../shared/src/imp_cal.c:362: max_reached = 0;
   BAFE A8 18              3432 	mov	r0,_bp
   BB00 08                 3433 	inc	r0
   BB01 76 00              3434 	mov	@r0,#0x00
                           3435 ;	../../shared/src/imp_cal.c:363: dir = 0;
   BB03 7E 00              3436 	mov	r6,#0x00
                           3437 ;	../../shared/src/imp_cal.c:365: do {
   BB05 7F 00              3438 	mov	r7,#0x00
   BB07                    3439 00125$:
                           3440 ;	../../shared/src/imp_cal.c:366: ana_rximpcal_out = toggle_impcal_out_req();
   BB07 C0 03              3441 	push	ar3
   BB09 C0 02              3442 	push	ar2
   BB0B C0 04              3443 	push	ar4
   BB0D C0 06              3444 	push	ar6
   BB0F C0 07              3445 	push	ar7
   BB11 78 92              3446 	mov	r0,#_toggle_impcal_out_req
   BB13 79 B3              3447 	mov	r1,#(_toggle_impcal_out_req >> 8)
   BB15 7A 02              3448 	mov	r2,#(_toggle_impcal_out_req >> 16)
   BB17 12 00 B3           3449 	lcall	__sdcc_banked_call
   BB1A AB 82              3450 	mov	r3,dpl
   BB1C D0 07              3451 	pop	ar7
   BB1E D0 06              3452 	pop	ar6
   BB20 D0 04              3453 	pop	ar4
   BB22 D0 02              3454 	pop	ar2
   BB24 8B 05              3455 	mov	ar5,r3
                           3456 ;	../../shared/src/imp_cal.c:368: if( rximp == 0x00) min_reached += 1;
   BB26 D0 03              3457 	pop	ar3
   BB28 EA                 3458 	mov	a,r2
   BB29 70 03              3459 	jnz	00106$
   BB2B 0C                 3460 	inc	r4
   BB2C 80 07              3461 	sjmp	00107$
   BB2E                    3462 00106$:
                           3463 ;	../../shared/src/imp_cal.c:369: else if( rximp == 0x1f) max_reached += 1;
   BB2E BA 1F 04           3464 	cjne	r2,#0x1F,00107$
   BB31 A8 18              3465 	mov	r0,_bp
   BB33 08                 3466 	inc	r0
   BB34 06                 3467 	inc	@r0
   BB35                    3468 00107$:
                           3469 ;	../../shared/src/imp_cal.c:371: if( ana_rximpcal_out == 0 ) {
   BB35 ED                 3470 	mov	a,r5
   BB36 70 13              3471 	jnz	00119$
                           3472 ;	../../shared/src/imp_cal.c:372: max_reached = 0;
   BB38 A8 18              3473 	mov	r0,_bp
   BB3A 08                 3474 	inc	r0
   BB3B 76 00              3475 	mov	@r0,#0x00
                           3476 ;	../../shared/src/imp_cal.c:373: if( min_reached == 0) rximp--; //decrement DAC value with underflow protection
   BB3D EC                 3477 	mov	a,r4
   BB3E 70 03              3478 	jnz	00111$
   BB40 1A                 3479 	dec	r2
   BB41 80 1B              3480 	sjmp	00120$
   BB43                    3481 00111$:
                           3482 ;	../../shared/src/imp_cal.c:374: else if ( min_reached == 2 ) break; //exit calibration when DAC value is 0x00 with analog result at 0 for 2 consecutive samples
   BB43 BC 02 03           3483 	cjne	r4,#0x02,00151$
   BB46 02 BB D1           3484 	ljmp	00127$
   BB49                    3485 00151$:
   BB49 80 13              3486 	sjmp	00120$
   BB4B                    3487 00119$:
                           3488 ;	../../shared/src/imp_cal.c:377: min_reached = 0;
   BB4B 7C 00              3489 	mov	r4,#0x00
                           3490 ;	../../shared/src/imp_cal.c:378: if( max_reached == 0) rximp++; //increment DAC value with overflow protection
   BB4D A8 18              3491 	mov	r0,_bp
   BB4F 08                 3492 	inc	r0
   BB50 E6                 3493 	mov	a,@r0
   BB51 70 03              3494 	jnz	00116$
   BB53 0A                 3495 	inc	r2
   BB54 80 08              3496 	sjmp	00120$
   BB56                    3497 00116$:
                           3498 ;	../../shared/src/imp_cal.c:379: else if ( max_reached == 2 ) break; //exit calibration when DAC value is 0x1f with analog result at 1 for 2 consecutive samples	
   BB56 A8 18              3499 	mov	r0,_bp
   BB58 08                 3500 	inc	r0
   BB59 B6 02 02           3501 	cjne	@r0,#0x02,00153$
   BB5C 80 73              3502 	sjmp	00127$
   BB5E                    3503 00153$:
   BB5E                    3504 00120$:
                           3505 ;	../../shared/src/imp_cal.c:382: dir = (dir << 1 ) | ana_rximpcal_out;
   BB5E C0 03              3506 	push	ar3
   BB60 EE                 3507 	mov	a,r6
   BB61 2E                 3508 	add	a,r6
   BB62 FB                 3509 	mov	r3,a
   BB63 ED                 3510 	mov	a,r5
   BB64 42 03              3511 	orl	ar3,a
   BB66 8B 06              3512 	mov	ar6,r3
                           3513 ;	../../shared/src/imp_cal.c:383: if ( is_toggle_pat( dir, cnt + 1 ) ) {
   BB68 EF                 3514 	mov	a,r7
   BB69 04                 3515 	inc	a
   BB6A FB                 3516 	mov	r3,a
   BB6B C0 02              3517 	push	ar2
   BB6D C0 03              3518 	push	ar3
   BB6F C0 04              3519 	push	ar4
   BB71 C0 05              3520 	push	ar5
   BB73 C0 06              3521 	push	ar6
   BB75 C0 07              3522 	push	ar7
   BB77 C0 03              3523 	push	ar3
   BB79 8E 82              3524 	mov	dpl,r6
   BB7B 78 CD              3525 	mov	r0,#_is_toggle_pat
   BB7D 79 BD              3526 	mov	r1,#(_is_toggle_pat >> 8)
   BB7F 7A 02              3527 	mov	r2,#(_is_toggle_pat >> 16)
   BB81 12 00 B3           3528 	lcall	__sdcc_banked_call
   BB84 15 81              3529 	dec	sp
   BB86 D0 07              3530 	pop	ar7
   BB88 D0 06              3531 	pop	ar6
   BB8A D0 05              3532 	pop	ar5
   BB8C D0 04              3533 	pop	ar4
   BB8E D0 03              3534 	pop	ar3
   BB90 D0 02              3535 	pop	ar2
   BB92 92 28              3536 	mov	b0,c
   BB94 D0 03              3537 	pop	ar3
   BB96 30 28 06           3538 	jnb	b0,00124$
                           3539 ;	../../shared/src/imp_cal.c:384: if( ana_rximpcal_out == 0 ) rximp++; //result will be the bigger value of the toggling values
   BB99 ED                 3540 	mov	a,r5
   BB9A 70 35              3541 	jnz	00127$
   BB9C 0A                 3542 	inc	r2
                           3543 ;	../../shared/src/imp_cal.c:385: break;
   BB9D 80 32              3544 	sjmp	00127$
   BB9F                    3545 00124$:
                           3546 ;	../../shared/src/imp_cal.c:388: RXIMP_IVREF = rximp;
   BB9F C0 06              3547 	push	ar6
   BBA1 90 82 08           3548 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_130
   BBA4 EA                 3549 	mov	a,r2
   BBA5 C4                 3550 	swap	a
   BBA6 03                 3551 	rr	a
   BBA7 54 F8              3552 	anl	a,#(0xf8&0xf8)
   BBA9 F5 F0              3553 	mov	b,a
   BBAB E0                 3554 	movx	a,@dptr
   BBAC 54 07              3555 	anl	a,#0x07
   BBAE 45 F0              3556 	orl	a,b
   BBB0 F0                 3557 	movx	@dptr,a
                           3558 ;	../../shared/src/imp_cal.c:390: } while ( (cnt++ < 40) | (cmx_RXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 40 steps
   BBB1 8F 06              3559 	mov	ar6,r7
   BBB3 0F                 3560 	inc	r7
   BBB4 8F 03              3561 	mov	ar3,r7
   BBB6 BE 28 00           3562 	cjne	r6,#0x28,00156$
   BBB9                    3563 00156$:
   BBB9 E4                 3564 	clr	a
   BBBA 33                 3565 	rlc	a
   BBBB FE                 3566 	mov	r6,a
   BBBC 90 E6 48           3567 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   BBBF E0                 3568 	movx	a,@dptr
   BBC0 23                 3569 	rl	a
   BBC1 54 01              3570 	anl	a,#0x01
   BBC3 FD                 3571 	mov	r5,a
   BBC4 E4                 3572 	clr	a
   BBC5 BD 01 01           3573 	cjne	r5,#0x01,00157$
   BBC8 04                 3574 	inc	a
   BBC9                    3575 00157$:
   BBC9 4E                 3576 	orl	a,r6
   BBCA D0 06              3577 	pop	ar6
   BBCC 60 03              3578 	jz	00159$
   BBCE 02 BB 07           3579 	ljmp	00125$
   BBD1                    3580 00159$:
   BBD1                    3581 00127$:
                           3582 ;	../../shared/src/imp_cal.c:392: if( cnt >= 40 ) {
   BBD1 BB 28 00           3583 	cjne	r3,#0x28,00160$
   BBD4                    3584 00160$:
   BBD4 40 09              3585 	jc	00129$
                           3586 ;	../../shared/src/imp_cal.c:393: lnx_RXIMP_CAL_TIMEOUT_LANE = 1;
   BBD6 90 60 0A           3587 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   BBD9 E0                 3588 	movx	a,@dptr
   BBDA 44 80              3589 	orl	a,#0x80
   BBDC F0                 3590 	movx	@dptr,a
   BBDD 80 07              3591 	sjmp	00130$
   BBDF                    3592 00129$:
                           3593 ;	../../shared/src/imp_cal.c:396: lnx_RXIMP_CAL_PASS_LANE = 1;
   BBDF 90 60 06           3594 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   BBE2 E0                 3595 	movx	a,@dptr
   BBE3 44 01              3596 	orl	a,#0x01
   BBE5 F0                 3597 	movx	@dptr,a
   BBE6                    3598 00130$:
                           3599 ;	../../shared/src/imp_cal.c:398: lnx_CAL_RX_IMP_LANE_7_0 = rximp; 
   BBE6 90 60 15           3600 	mov	dptr,#(_CAL_SAVE_DATA2_LANE + 0x0001)
   BBE9 EA                 3601 	mov	a,r2
   BBEA F0                 3602 	movx	@dptr,a
                           3603 ;	../../shared/src/imp_cal.c:399: IMPCAL_RX_LANE = rximp; 
   BBEB 90 00 08           3604 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_2
   BBEE EA                 3605 	mov	a,r2
   BBEF 2A                 3606 	add	a,r2
   BBF0 25 E0              3607 	add	a,acc
   BBF2 54 7C              3608 	anl	a,#0x7c
   BBF4 F5 F0              3609 	mov	b,a
   BBF6 E0                 3610 	movx	a,@dptr
   BBF7 54 83              3611 	anl	a,#0x83
   BBF9 45 F0              3612 	orl	a,b
   BBFB F0                 3613 	movx	@dptr,a
                           3614 ;	../../shared/src/imp_cal.c:401: RX_IMPCAL_EN = 0;
   BBFC 90 00 08           3615 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_2
   BBFF E0                 3616 	movx	a,@dptr
   BC00 54 7F              3617 	anl	a,#0x7f
   BC02 F0                 3618 	movx	@dptr,a
                           3619 ;	../../shared/src/imp_cal.c:403: lnx_RXIMP_CAL_DONE_LANE = 1;
   BC03 90 60 01           3620 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   BC06 E0                 3621 	movx	a,@dptr
   BC07 44 40              3622 	orl	a,#0x40
   BC09 F0                 3623 	movx	@dptr,a
   BC0A                    3624 00131$:
   BC0A 85 18 81           3625 	mov	sp,_bp
   BC0D D0 18              3626 	pop	_bp
   BC0F 02 00 C5           3627 	ljmp	__sdcc_banked_ret
                           3628 	.area CSEG    (CODE)
                           3629 	.area BANK2   (CODE)
   BC12                    3630 _tximp_thermo_tb:
   BC12 00                 3631 	.db #0x00	; 0
   BC13 01                 3632 	.db #0x01	; 1
   BC14 03                 3633 	.db #0x03	; 3
   BC15 07                 3634 	.db #0x07	; 7
                           3635 	.area CABS    (ABS,CODE)
