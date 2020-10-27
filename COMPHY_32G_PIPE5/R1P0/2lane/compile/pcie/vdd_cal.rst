                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:35 2018
                              5 ;--------------------------------------------------------
                              6 	.module vdd_cal
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _vdd_cal_set_pass
                             13 	.globl _vdd_cal_calen
                             14 	.globl _get_vdd_cal
                             15 	.globl _save_vdd_cal
                             16 	.globl _set_vdd_cal
                             17 	.globl _TF2
                             18 	.globl _TI
                             19 	.globl _RI
                             20 	.globl _EX12
                             21 	.globl _EX11
                             22 	.globl _EX10
                             23 	.globl _EX9
                             24 	.globl _EX8
                             25 	.globl _ES1
                             26 	.globl _PS1
                             27 	.globl _EX6
                             28 	.globl _EX5
                             29 	.globl _EX4
                             30 	.globl _EX3
                             31 	.globl _EX2
                             32 	.globl _EX7
                             33 	.globl _EA
                             34 	.globl _WDT
                             35 	.globl _ET2
                             36 	.globl _ES
                             37 	.globl _ET1
                             38 	.globl _EX1
                             39 	.globl _ET0
                             40 	.globl _EX0
                             41 	.globl _TF1
                             42 	.globl _TR1
                             43 	.globl _TF0
                             44 	.globl _TR0
                             45 	.globl _IE1
                             46 	.globl _IT1
                             47 	.globl _IE0
                             48 	.globl _IT0
                             49 	.globl _P3_7
                             50 	.globl _P3_6
                             51 	.globl _P3_5
                             52 	.globl _P3_4
                             53 	.globl _P3_3
                             54 	.globl _P3_2
                             55 	.globl _P3_1
                             56 	.globl _P3_0
                             57 	.globl _P2_7
                             58 	.globl _P2_6
                             59 	.globl _P2_5
                             60 	.globl _P2_4
                             61 	.globl _P2_3
                             62 	.globl _P2_2
                             63 	.globl _P2_1
                             64 	.globl _P2_0
                             65 	.globl _P1_7
                             66 	.globl _P1_6
                             67 	.globl _P1_5
                             68 	.globl _P1_4
                             69 	.globl _P1_3
                             70 	.globl _P1_2
                             71 	.globl _P1_1
                             72 	.globl _P1_0
                             73 	.globl _P0_7
                             74 	.globl _P0_6
                             75 	.globl _P0_5
                             76 	.globl _P0_4
                             77 	.globl _P0_3
                             78 	.globl _P0_2
                             79 	.globl _P0_1
                             80 	.globl _P0_0
                             81 	.globl _DMAC
                             82 	.globl _DMATA
                             83 	.globl _DMASA
                             84 	.globl _TMR2
                             85 	.globl _TMR1
                             86 	.globl _TMR0
                             87 	.globl _SRST
                             88 	.globl _B
                             89 	.globl _EIE
                             90 	.globl _ACC
                             91 	.globl _ADCON
                             92 	.globl _PSW
                             93 	.globl _TH2
                             94 	.globl _TL2
                             95 	.globl _RCAP2H
                             96 	.globl _RCAP2L
                             97 	.globl _T2CON
                             98 	.globl _CCEN
                             99 	.globl _IRCON
                            100 	.globl _S0RELH
                            101 	.globl _IP1
                            102 	.globl _IEN1
                            103 	.globl _DMAM1
                            104 	.globl _DMAM0
                            105 	.globl _DMASEL
                            106 	.globl _DMAC2
                            107 	.globl _DMAC1
                            108 	.globl _DMAC0
                            109 	.globl _P3
                            110 	.globl _S0RELL
                            111 	.globl _IP0
                            112 	.globl _IEN0
                            113 	.globl _DMAT2
                            114 	.globl _DMAT1
                            115 	.globl _DMAT0
                            116 	.globl _DMAS2
                            117 	.globl _DMAS1
                            118 	.globl _DMAS0
                            119 	.globl _P2
                            120 	.globl _IEN2
                            121 	.globl _SBUF
                            122 	.globl _SCON
                            123 	.globl _PSBANK
                            124 	.globl _DPS
                            125 	.globl _P1
                            126 	.globl _CKCON
                            127 	.globl _TH1
                            128 	.globl _TH0
                            129 	.globl _TL1
                            130 	.globl _TL0
                            131 	.globl _TMOD
                            132 	.globl _TCON
                            133 	.globl _PCON
                            134 	.globl _WDTREL
                            135 	.globl _DPH
                            136 	.globl _DPL
                            137 	.globl _P0
                            138 	.globl _sq_thrs_ratio_tb
                            139 	.globl _train_save_tb
                            140 	.globl _tx_tb
                            141 	.globl _UPHY_ANAREG_REV_0
                            142 	.globl _dfe_sm_save
                            143 	.globl _dfe_sm_dc
                            144 	.globl _dfe_sm
                            145 	.globl _cds28
                            146 	.globl _lnx_calx_align90_gm
                            147 	.globl _lnx_calx_align90_dac
                            148 	.globl _lnx_calx_align90_dummy_clk
                            149 	.globl _lnx_calx_eom_dpher
                            150 	.globl _lnx_calx_vdda_dll_eom_sel
                            151 	.globl _lnx_calx_dll_eom_gmsel
                            152 	.globl _lnx_calx_vdda_dll_sel
                            153 	.globl _lnx_calx_dll_gmsel
                            154 	.globl _lnx_calx_rxdcc_dll_hg
                            155 	.globl _lnx_calx_rxdcc_dll
                            156 	.globl _lnx_calx_txdcc_hg
                            157 	.globl _lnx_calx_txdcc
                            158 	.globl _lnx_calx_txdcc_pdiv_hg
                            159 	.globl _lnx_calx_txdcc_pdiv
                            160 	.globl _lnx_spdoft_tx_preset_index_lane
                            161 	.globl _lnx_cal_sellv_rxeomclk
                            162 	.globl _lnx_cal_sellv_rxsampler
                            163 	.globl _lnx_cal_sellv_txpre
                            164 	.globl _lnx_cal_sellv_rxdataclk
                            165 	.globl _lnx_cal_sellv_txclk
                            166 	.globl _lnx_cal_sellv_txdata
                            167 	.globl _lnx_cal_align90_gm
                            168 	.globl _lnx_cal_align90_dac
                            169 	.globl _lnx_cal_align90_dummy_clk
                            170 	.globl _lnx_cal_eom_dpher
                            171 	.globl _lnx_cal_vdda_dll_eom_sel
                            172 	.globl _lnx_cal_dll_eom_gmsel
                            173 	.globl _lnx_cal_vdda_dll_sel
                            174 	.globl _lnx_cal_dll_gmsel
                            175 	.globl _lnx_cal_rxdcc_eom_hg
                            176 	.globl _lnx_cal_rxdcc_eom
                            177 	.globl _lnx_cal_rxdcc_data_hg
                            178 	.globl _lnx_cal_rxdcc_data
                            179 	.globl _lnx_cal_rxdcc_dll_hg
                            180 	.globl _lnx_cal_rxdcc_dll
                            181 	.globl _lnx_cal_txdcc_hg
                            182 	.globl _lnx_cal_txdcc
                            183 	.globl _lnx_cal_txdcc_pdiv_hg
                            184 	.globl _lnx_cal_txdcc_pdiv
                            185 	.globl _cmx_cal_sllp_dac_fine_ring
                            186 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            187 	.globl _cmx_cal_pll_speed_ring
                            188 	.globl _cmx_cal_plldcc
                            189 	.globl _cmx_cal_lccap_lsb
                            190 	.globl _cmx_cal_lccap_msb
                            191 	.globl _cmx_cal_lcvco_dac_msb
                            192 	.globl _cmx_cal_lcvco_dac_lsb
                            193 	.globl _cmx_cal_lcvco_dac
                            194 	.globl _local_tx_preset_tb
                            195 	.globl _train_g0_index
                            196 	.globl _train_g1_index
                            197 	.globl _train_gn1_index
                            198 	.globl _phase_save
                            199 	.globl _txffe_save
                            200 	.globl _rc_save
                            201 	.globl _phy_mode_lane_table
                            202 	.globl _speedtable
                            203 	.globl _min_gen
                            204 	.globl _max_gen
                            205 	.globl _phy_mode_cmn_table
                            206 	.globl _ring_speedtable
                            207 	.globl _lc_speedtable
                            208 	.globl _TXTRAIN_IF_REG0
                            209 	.globl _CDS_READ_MISC1
                            210 	.globl _CDS_READ_MISC0
                            211 	.globl _DFE_READ_F0D_RIGHT_ODD
                            212 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            213 	.globl _DFE_READ_F0D_LEFT_ODD
                            214 	.globl _DFE_READ_F0D_LEFT_EVEN
                            215 	.globl _DFE_READ_F0D_ODD
                            216 	.globl _DFE_READ_F0D_EVEN
                            217 	.globl _DFE_READ_F0B_ODD
                            218 	.globl _DFE_READ_F0B_EVEN
                            219 	.globl _DFE_READ_F0A_ODD
                            220 	.globl _DFE_READ_F0A_EVEN
                            221 	.globl _DFE_READ_ODD_REG8
                            222 	.globl _DFE_READ_EVEN_REG8
                            223 	.globl _DFE_READ_ODD_REG7
                            224 	.globl _DFE_READ_ODD_REG6
                            225 	.globl _DFE_READ_ODD_REG5
                            226 	.globl _DFE_READ_ODD_REG4
                            227 	.globl _DFE_READ_ODD_REG3
                            228 	.globl _DFE_READ_ODD_REG2
                            229 	.globl _DFE_READ_ODD_REG1
                            230 	.globl _DFE_READ_ODD_REG0
                            231 	.globl _DFE_READ_EVEN_REG7
                            232 	.globl _DFE_READ_EVEN_REG6
                            233 	.globl _DFE_READ_EVEN_REG5
                            234 	.globl _DFE_READ_EVEN_REG4
                            235 	.globl _DFE_READ_EVEN_REG3
                            236 	.globl _DFE_READ_EVEN_REG2
                            237 	.globl _DFE_READ_EVEN_REG1
                            238 	.globl _DFE_READ_EVEN_REG0
                            239 	.globl _TX_TRAIN_IF_REG8
                            240 	.globl _TX_TRAIN_CTRL_LANE
                            241 	.globl _TX_TRAIN_IF_REG7
                            242 	.globl _TX_TRAIN_IF_REG6
                            243 	.globl _TX_TRAIN_IF_REG5
                            244 	.globl _TX_TRAIN_IF_REG4
                            245 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            246 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            247 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            248 	.globl _TX_AMP_CTRL_REG0
                            249 	.globl _TX_DRV_RD_OUT_REG0
                            250 	.globl _LINK_TRAIN_MODE0
                            251 	.globl _TX_EMPH_CTRL_REG0
                            252 	.globl _TX_TRAIN_DEFAULT_REG5
                            253 	.globl _TX_TRAIN_DEFAULT_REG4
                            254 	.globl _TX_TRAIN_DEFAULT_REG3
                            255 	.globl _TX_TRAIN_DEFAULT_REG2
                            256 	.globl _TX_TRAIN_DEFAULT_REG1
                            257 	.globl _TX_TRAIN_DEFAULT_REG0
                            258 	.globl _TX_TRAIN_DRIVER_REG2
                            259 	.globl _TX_TRAIN_DRIVER_REG1
                            260 	.globl _TX_TRAIN_DRIVER_REG0
                            261 	.globl _TX_TRAIN_PATTTERN_REG0
                            262 	.globl _TX_TRAIN_IF_REG3
                            263 	.globl _TX_TRAIN_IF_REG2
                            264 	.globl _TX_TRAIN_IF_REG1
                            265 	.globl _TX_TRAIN_IF_REG0
                            266 	.globl _DME_DEC_REG1
                            267 	.globl _DME_DEC_REG0
                            268 	.globl _DME_ENC_REG2
                            269 	.globl _DME_ENC_REG1
                            270 	.globl _DME_ENC_REG0
                            271 	.globl _END_XDAT_CMN
                            272 	.globl _MCU_INFO_13
                            273 	.globl _MCU_INFO_12
                            274 	.globl _MCU_INFO_5
                            275 	.globl _MCU_INFO_4
                            276 	.globl _SYNC_INFO
                            277 	.globl _CDS_EYE_CLK_THR
                            278 	.globl _TX_SAVE_4
                            279 	.globl _TX_SAVE_3
                            280 	.globl _TX_SAVE_2
                            281 	.globl _TX_SAVE_1
                            282 	.globl _TX_SAVE_0
                            283 	.globl _ETH_PRESET1_TB
                            284 	.globl _ETH_PRESET0_TB
                            285 	.globl _SAS_PRESET2_TB
                            286 	.globl _SAS_PRESET1_TB
                            287 	.globl _SAS_PRESET0_TB
                            288 	.globl _G_SELLV_RXSAMPLER
                            289 	.globl _G_SELLV_RXDATACLK
                            290 	.globl _G_SELLV_RXEOMCLK
                            291 	.globl _G_SELLV_TXPRE
                            292 	.globl _G_SELLV_TXDATA
                            293 	.globl _G_SELLV_TXCLK
                            294 	.globl _TIMER_SEL3
                            295 	.globl _TIMER_SEL2
                            296 	.globl _TIMER_SEL1
                            297 	.globl _MCU_CONFIG1
                            298 	.globl _LOOP_CNTS
                            299 	.globl _CAL_DATA1
                            300 	.globl _MCU_CONFIG
                            301 	.globl _CAL_STATUS_READ
                            302 	.globl _CAL_TIME_OUT_AND_DIS
                            303 	.globl _CON_CAL_STEP_SIZE5
                            304 	.globl _CON_CAL_STEP_SIZE4
                            305 	.globl _CON_CAL_STEP_SIZE3
                            306 	.globl _CON_CAL_STEP_SIZE2
                            307 	.globl _CON_CAL_STEP_SIZE1
                            308 	.globl _CONTROL_CONFIG9
                            309 	.globl _CONTROL_CONFIG8
                            310 	.globl _TRAIN_IF_CONFIG
                            311 	.globl _CAL_DATA0
                            312 	.globl _CONTROL_CONFIG7
                            313 	.globl _CONTROL_CONFIG6
                            314 	.globl _CONTROL_CONFIG5
                            315 	.globl _CONTROL_CONFIG4
                            316 	.globl _CONTROL_CONFIG3
                            317 	.globl _CONTROL_CONFIG2
                            318 	.globl _CONTROL_CONFIG1
                            319 	.globl _CONTROL_CONFIG0
                            320 	.globl _FW_REV
                            321 	.globl _CID_REG1
                            322 	.globl _CID_REG0
                            323 	.globl _CMN_MCU_REG
                            324 	.globl _SET_LANE_ISR
                            325 	.globl _CMN_ISR_MASK_1
                            326 	.globl _CMN_ISR_1
                            327 	.globl _CMN_MCU_TIMER3_CONTROL
                            328 	.globl _CMN_MCU_TIMER2_CONTROL
                            329 	.globl _CMN_MCU_TIMER1_CONTROL
                            330 	.globl _CMN_MCU_TIMER0_CONTROL
                            331 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            332 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            333 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            334 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            335 	.globl _CMN_MCU_TIMER_CONTROL
                            336 	.globl _CMN_CACHE_DEBUG1
                            337 	.globl _CMN_MCU_GPIO
                            338 	.globl _CMN_ISR_CLEAR_2
                            339 	.globl _CMN_ISR_MASK_2
                            340 	.globl _CMN_ISR_2
                            341 	.globl _MCU_INT_ADDR
                            342 	.globl _CMN_CACHE_DEBUG0
                            343 	.globl _MCU_SDT_CMN
                            344 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            345 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            346 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            347 	.globl _TEST5
                            348 	.globl _PM_CMN_REG2
                            349 	.globl _INPUT_CMN_PIN_REG3
                            350 	.globl __FIELDNAME_
                            351 	.globl _CMN_CALIBRATION
                            352 	.globl _OUTPUT_CMN_PIN_REG0
                            353 	.globl _SPD_CMN_REG1
                            354 	.globl _CLKGEN_CMN_REG1
                            355 	.globl _PLLCAL_REG1
                            356 	.globl _PLLCAL_REG0
                            357 	.globl _ANA_TSEN_CONTROL
                            358 	.globl _INPUT_CMN_PIN_REG2
                            359 	.globl _INPUT_CMN_PIN_REG1
                            360 	.globl _INPUT_CMN_PIN_REG0
                            361 	.globl _PM_CMN_REG1
                            362 	.globl _SYSTEM
                            363 	.globl _TEST4
                            364 	.globl _TEST3
                            365 	.globl _TEST2
                            366 	.globl _TEST1
                            367 	.globl _TEST0
                            368 	.globl _MCU_SYNC2
                            369 	.globl _MCU_SYNC1
                            370 	.globl _MEM_IRQ_CLEAR
                            371 	.globl _APB_CONTROL_REG
                            372 	.globl _ANA_IF_CMN_REG0
                            373 	.globl _MEM_IRQ_MASK
                            374 	.globl _MEM_IRQ
                            375 	.globl _ANA_IF_CMN_REG1
                            376 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            377 	.globl _MCU_INFO_3
                            378 	.globl _MCU_INFO_2
                            379 	.globl _MCU_INFO_1
                            380 	.globl _MCU_INFO_0
                            381 	.globl _MEMORY_CONTROL_4
                            382 	.globl _MEMORY_CONTROL_3
                            383 	.globl _MEMORY_CONTROL_2
                            384 	.globl _MEMORY_CONTROL_1
                            385 	.globl _MEMORY_CONTROL_0
                            386 	.globl _MCU_DEBUG1
                            387 	.globl _MCU_DEBUG0
                            388 	.globl _MCU_CONTROL_4
                            389 	.globl _MCU_CONTROL_3
                            390 	.globl _MCU_CONTROL_2
                            391 	.globl _MCU_CONTROL_1
                            392 	.globl _MCU_CONTROL_0
                            393 	.globl _GLOB_L1_SUBSTATES_CFG
                            394 	.globl _GLOB_PIPE_REVISION
                            395 	.globl _GLOB_BIST_DATA_HI
                            396 	.globl _GLOB_BIST_SEQR_CFG
                            397 	.globl _GLOB_BIST_RESULT
                            398 	.globl _GLOB_BIST_MASK
                            399 	.globl _GLOB_BIST_START
                            400 	.globl _GLOB_BIST_LANE_TYPE
                            401 	.globl _GLOB_BIST_CTRL
                            402 	.globl _GLOB_DP_BAL_CFG4
                            403 	.globl _GLOB_DP_BAL_CFG2
                            404 	.globl _GLOB_DP_BAL_CFG0
                            405 	.globl _GLOB_PM_DP_CTRL
                            406 	.globl _GLOB_COUNTER_HI
                            407 	.globl _GLOB_COUNTER_CTRL
                            408 	.globl _GLOB_PM_CFG0
                            409 	.globl _GLOB_DP_SAL_CFG5
                            410 	.globl _GLOB_DP_SAL_CFG3
                            411 	.globl _GLOB_DP_SAL_CFG1
                            412 	.globl _GLOB_DP_SAL_CFG
                            413 	.globl _GLOB_MISC_CTRL
                            414 	.globl _GLOB_CLK_SRC_HI
                            415 	.globl _GLOB_CLK_SRC_LO
                            416 	.globl _GLOB_RST_CLK_CTRL
                            417 	.globl _DFE_STATIC_REG6
                            418 	.globl _DFE_STATIC_REG5
                            419 	.globl _DFE_STATIC_REG4
                            420 	.globl _DFE_STATIC_REG3
                            421 	.globl _DFE_STATIC_REG1
                            422 	.globl _DFE_STATIC_REG0
                            423 	.globl _RX_CMN_0
                            424 	.globl _SRIS_REG1
                            425 	.globl _SRIS_REG0
                            426 	.globl _DTX_PHY_ALIGN_REG2
                            427 	.globl _DTX_PHY_ALIGN_REG1
                            428 	.globl _DTX_PHY_ALIGN_REG0
                            429 	.globl _DTX_REG4
                            430 	.globl _DTX_REG3
                            431 	.globl _DTX_REG2
                            432 	.globl _DTX_REG1
                            433 	.globl _DTX_REG0
                            434 	.globl _TX_CMN_REG
                            435 	.globl _END_XDAT_LANE
                            436 	.globl _TRAIN_CONTROL_17
                            437 	.globl _TRAIN_CONTROL_16
                            438 	.globl _TRAIN_CONTROL_15
                            439 	.globl _TRAIN_CONTROL_14
                            440 	.globl _TRAIN_CONTROL_13
                            441 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            442 	.globl _ESM_POP_N_CNT_LOW_LANE
                            443 	.globl _TRAIN_CONTROL_12
                            444 	.globl _TRAIN_CONTROL_11
                            445 	.globl _TRAIN_CONTROL_10
                            446 	.globl _TRAIN_CONTROL_9
                            447 	.globl _TRAIN_CONTROL_8
                            448 	.globl _TRAIN_CONTROL_7
                            449 	.globl _TRAIN_CONTROL_6
                            450 	.globl _TRAIN_CONTROL_5
                            451 	.globl _TRAIN_CONTROL_4
                            452 	.globl _TRAIN_CONTROL_3
                            453 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            454 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            455 	.globl _ESM_POP_P_CNT_LOW_LANE
                            456 	.globl _CDS_CTRL_REG1
                            457 	.globl _CDS_CTRL_REG0
                            458 	.globl _DFE_CONTROL_11
                            459 	.globl _DFE_CONTROL_10
                            460 	.globl _DFE_CONTROL_9
                            461 	.globl _DFE_CONTROL_8
                            462 	.globl _DFE_CONTROL_7
                            463 	.globl _DFE_TEST_5
                            464 	.globl _DFE_TEST_4
                            465 	.globl _DFE_TEST_1
                            466 	.globl _DFE_TEST_0
                            467 	.globl _DFE_CONTROL_6
                            468 	.globl _TRAIN_PARA_3
                            469 	.globl _TRAIN_PARA_2
                            470 	.globl _TRAIN_PARA_1
                            471 	.globl _TRAIN_PARA_0
                            472 	.globl _DLL_CAL
                            473 	.globl _RPTA_CONFIG_1
                            474 	.globl _RPTA_CONFIG_0
                            475 	.globl _TRAIN_CONTROL_2
                            476 	.globl _TRAIN_CONTROL_1
                            477 	.globl _TRAIN_CONTROL_0
                            478 	.globl _DFE_CONTROL_5
                            479 	.globl _DFE_CONTROL_4
                            480 	.globl _DFE_CONTROL_3
                            481 	.globl _DFE_CONTROL_2
                            482 	.globl _DFE_CONTROL_1
                            483 	.globl _DFE_CONTROL_0
                            484 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            485 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            486 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            487 	.globl _PHY_LOCAL_VALUE_LANE
                            488 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            489 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            490 	.globl _CAL_SAVE_DATA3_LANE
                            491 	.globl _CAL_SAVE_DATA2_LANE
                            492 	.globl _CAL_SAVE_DATA1_LANE
                            493 	.globl _CAL_CTRL4_LANE
                            494 	.globl _CAL_CTRL3_LANE
                            495 	.globl _CAL_CTRL2_LANE
                            496 	.globl _CAL_CTRL1_LANE
                            497 	.globl _LANE_MARGIN_REG0
                            498 	.globl _EOM_VLD_REG4
                            499 	.globl _EOM_REG0
                            500 	.globl _EOM_ERR_REG3
                            501 	.globl _EOM_ERR_REG2
                            502 	.globl _EOM_ERR_REG1
                            503 	.globl _EOM_ERR_REG0
                            504 	.globl _EOM_VLD_REG3
                            505 	.globl _EOM_VLD_REG2
                            506 	.globl _EOM_VLD_REG1
                            507 	.globl _EOM_VLD_REG0
                            508 	.globl _DFE_STATIC_LANE_REG6
                            509 	.globl _DFE_STATIC_LANE_REG5
                            510 	.globl _DFE_STATIC_LANE_REG4
                            511 	.globl _DFE_STATIC_LANE_REG3
                            512 	.globl _DFE_STATIC_LANE_REG1
                            513 	.globl _DFE_STATIC_LANE_REG0
                            514 	.globl _DFE_DCE_REG0
                            515 	.globl _CAL_OFST_REG2
                            516 	.globl _CAL_OFST_REG1
                            517 	.globl _CAL_OFST_REG0
                            518 	.globl _DFE_READ_ODD_2C_REG8
                            519 	.globl _DFE_READ_EVEN_2C_REG8
                            520 	.globl _DFE_READ_ODD_2C_REG7
                            521 	.globl _DFE_READ_ODD_2C_REG6
                            522 	.globl _DFE_READ_ODD_2C_REG5
                            523 	.globl _DFE_READ_ODD_2C_REG4
                            524 	.globl _DFE_READ_ODD_2C_REG3
                            525 	.globl _DFE_READ_ODD_2C_REG2
                            526 	.globl _DFE_READ_ODD_2C_REG1
                            527 	.globl _DFE_READ_ODD_2C_REG0
                            528 	.globl _DFE_READ_EVEN_2C_REG7
                            529 	.globl _DFE_READ_EVEN_2C_REG6
                            530 	.globl _DFE_READ_EVEN_2C_REG5
                            531 	.globl _DFE_READ_EVEN_2C_REG4
                            532 	.globl _DFE_READ_EVEN_2C_REG3
                            533 	.globl _DFE_READ_EVEN_2C_REG2
                            534 	.globl _DFE_READ_EVEN_2C_REG1
                            535 	.globl _DFE_READ_EVEN_2C_REG0
                            536 	.globl _DFE_READ_ODD_SM_REG8
                            537 	.globl _DFE_READ_EVEN_SM_REG8
                            538 	.globl _DFE_READ_ODD_SM_REG7
                            539 	.globl _DFE_READ_ODD_SM_REG6
                            540 	.globl _DFE_READ_ODD_SM_REG5
                            541 	.globl _DFE_READ_ODD_SM_REG4
                            542 	.globl _DFE_READ_ODD_SM_REG3
                            543 	.globl _DFE_READ_ODD_SM_REG2
                            544 	.globl _DFE_READ_ODD_SM_REG1
                            545 	.globl _DFE_READ_ODD_SM_REG0
                            546 	.globl _DFE_READ_EVEN_SM_REG7
                            547 	.globl _DFE_READ_EVEN_SM_REG6
                            548 	.globl _DFE_READ_EVEN_SM_REG5
                            549 	.globl _DFE_READ_EVEN_SM_REG4
                            550 	.globl _DFE_READ_EVEN_SM_REG3
                            551 	.globl _DFE_READ_EVEN_SM_REG2
                            552 	.globl _DFE_READ_EVEN_SM_REG1
                            553 	.globl _DFE_READ_EVEN_SM_REG0
                            554 	.globl _DFE_FEXT_ODD_REG7
                            555 	.globl _DFE_FEXT_ODD_REG6
                            556 	.globl _DFE_FEXT_ODD_REG5
                            557 	.globl _DFE_FEXT_ODD_REG4
                            558 	.globl _DFE_FEXT_ODD_REG3
                            559 	.globl _DFE_FEXT_ODD_REG2
                            560 	.globl _DFE_FEXT_ODD_REG1
                            561 	.globl _DFE_FEXT_ODD_REG0
                            562 	.globl _DFE_FEXT_EVEN_REG7
                            563 	.globl _DFE_FEXT_EVEN_REG6
                            564 	.globl _DFE_FEXT_EVEN_REG5
                            565 	.globl _DFE_FEXT_EVEN_REG4
                            566 	.globl _DFE_FEXT_EVEN_REG3
                            567 	.globl _DFE_FEXT_EVEN_REG2
                            568 	.globl _DFE_FEXT_EVEN_REG1
                            569 	.globl _DFE_FEXT_EVEN_REG0
                            570 	.globl _DFE_DC_ODD_REG8
                            571 	.globl _DFE_DC_EVEN_REG8
                            572 	.globl _DFE_FEN_ODD_REG
                            573 	.globl _DFE_FEN_EVEN_REG
                            574 	.globl _DFE_STEP_REG1
                            575 	.globl _DFE_STEP_REG0
                            576 	.globl _DFE_ANA_REG1
                            577 	.globl _DFE_ANA_REG0
                            578 	.globl _DFE_CTRL_REG4
                            579 	.globl _RX_EQ_CLK_CTRL
                            580 	.globl _DFE_CTRL_REG3
                            581 	.globl _DFE_CTRL_REG2
                            582 	.globl _DFE_CTRL_REG1
                            583 	.globl _DFE_CTRL_REG0
                            584 	.globl _PT_COUNTER2
                            585 	.globl _PT_COUNTER1
                            586 	.globl _PT_COUNTER0
                            587 	.globl _PT_USER_PATTERN2
                            588 	.globl _PT_USER_PATTERN1
                            589 	.globl _PT_USER_PATTERN0
                            590 	.globl _PT_CONTROL1
                            591 	.globl _PT_CONTROL0
                            592 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            593 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            594 	.globl _MEM_ECC_ERR_ADDRESS0
                            595 	.globl _MCU_COMMAND0
                            596 	.globl _MCU_INT_CONTROL_13
                            597 	.globl _MCU_WDT_LANE
                            598 	.globl _MCU_IRQ_ISR_LANE
                            599 	.globl _ANA_IF_DFEO_REG0
                            600 	.globl _ANA_IF_DFEE_REG0
                            601 	.globl _ANA_IF_TRX_REG0
                            602 	.globl _EXT_INT_CONTROL
                            603 	.globl _MCU_DEBUG_LANE
                            604 	.globl _MCU_DEBUG3_LANE
                            605 	.globl _MCU_DEBUG2_LANE
                            606 	.globl _MCU_DEBUG1_LANE
                            607 	.globl _MCU_DEBUG0_LANE
                            608 	.globl _MCU_TIMER_CTRL_7_LANE
                            609 	.globl _MCU_TIMER_CTRL_6_LANE
                            610 	.globl _MCU_TIMER_CTRL_5_LANE
                            611 	.globl _MCU_TIMER_CTRL_4_LANE
                            612 	.globl _MCU_TIMER_CTRL_3_LANE
                            613 	.globl _MCU_TIMER_CTRL_2_LANE
                            614 	.globl _MCU_TIMER_CTRL_1_LANE
                            615 	.globl _MCU_MEM_REG2_LANE
                            616 	.globl _MCU_MEM_REG1_LANE
                            617 	.globl _MCU_IRQ_MASK_LANE
                            618 	.globl _MCU_IRQ_LANE
                            619 	.globl _MCU_TIMER3_CONTROL
                            620 	.globl _MCU_TIMER2_CONTROL
                            621 	.globl _MCU_TIMER1_CONTROL
                            622 	.globl _MCU_TIMER0_CONTROL
                            623 	.globl _MCU_TIMER_CONTROL
                            624 	.globl _MCU_INT12_CONTROL
                            625 	.globl _MCU_INT11_CONTROL
                            626 	.globl _MCU_INT10_CONTROL
                            627 	.globl _MCU_INT9_CONTROL
                            628 	.globl _MCU_INT8_CONTROL
                            629 	.globl _MCU_INT7_CONTROL
                            630 	.globl _MCU_INT6_CONTROL
                            631 	.globl _MCU_INT5_CONTROL
                            632 	.globl _MCU_INT4_CONTROL
                            633 	.globl _MCU_INT3_CONTROL
                            634 	.globl _MCU_INT2_CONTROL
                            635 	.globl _MCU_INT1_CONTROL
                            636 	.globl _MCU_INT0_CONTROL
                            637 	.globl _MCU_STATUS3_LANE
                            638 	.globl _MCU_STATUS2_LANE
                            639 	.globl _MCU_STATUS1_LANE
                            640 	.globl _MCU_STATUS0_LANE
                            641 	.globl _LANE_SYSTEM0
                            642 	.globl _CACHE_DEBUG1
                            643 	.globl _CACHE_DEBUG0
                            644 	.globl _MCU_GPIO
                            645 	.globl _MCU_CONTROL_LANE
                            646 	.globl _LANE_32G_PRESET_CFG16_LANE
                            647 	.globl _LANE_32G_PRESET_CFG14_LANE
                            648 	.globl _LANE_32G_PRESET_CFG12_LANE
                            649 	.globl _LANE_32G_PRESET_CFG10_LANE
                            650 	.globl _LANE_32G_PRESET_CFG8_LANE
                            651 	.globl _LANE_32G_PRESET_CFG6_LANE
                            652 	.globl _LANE_32G_PRESET_CFG4_LANE
                            653 	.globl _LANE_32G_PRESET_CFG2_LANE
                            654 	.globl _LANE_32G_PRESET_CFG0_LANE
                            655 	.globl _LANE_EQ_32G_CFG0_LANE
                            656 	.globl _LANE_16G_PRESET_CFG16_LANE
                            657 	.globl _LANE_16G_PRESET_CFG14_LANE
                            658 	.globl _LANE_16G_PRESET_CFG12_LANE
                            659 	.globl _LANE_16G_PRESET_CFG10_LANE
                            660 	.globl _LANE_16G_PRESET_CFG8_LANE
                            661 	.globl _LANE_16G_PRESET_CFG6_LANE
                            662 	.globl _LANE_16G_PRESET_CFG4_LANE
                            663 	.globl _LANE_16G_PRESET_CFG2_LANE
                            664 	.globl _LANE_16G_PRESET_CFG0_LANE
                            665 	.globl _LANE_EQ_16G_CFG0_LANE
                            666 	.globl _LANE_REMOTE_SET_LANE
                            667 	.globl _LANE_COEFF_MAX0_LANE
                            668 	.globl _LANE_PRESET_CFG16_LANE
                            669 	.globl _LANE_PRESET_CFG14_LANE
                            670 	.globl _LANE_PRESET_CFG12_LANE
                            671 	.globl _LANE_PRESET_CFG10_LANE
                            672 	.globl _LANE_PRESET_CFG8_LANE
                            673 	.globl _LANE_PRESET_CFG6_LANE
                            674 	.globl _LANE_PRESET_CFG4_LANE
                            675 	.globl _LANE_PRESET_CFG2_LANE
                            676 	.globl _LANE_PRESET_CFG0_LANE
                            677 	.globl _LANE_EQ_CFG1_LANE
                            678 	.globl _LANE_EQ_CFG0_LANE
                            679 	.globl _LANE_USB_DP_CFG2_LANE
                            680 	.globl _LANE_USB_DP_CFG1_LANE
                            681 	.globl _LANE_DP_PIE8_CFG0_LANE
                            682 	.globl _LANE_CFG_STATUS3_LANE
                            683 	.globl _LANE_CFG4
                            684 	.globl _LANE_CFG2_LANE
                            685 	.globl _LANE_CFG_STATUS2_LANE
                            686 	.globl _LANE_STATUS0
                            687 	.globl _LANE_CFG0
                            688 	.globl _SQ_REG0
                            689 	.globl _DTL_REG3
                            690 	.globl _DTL_REG2
                            691 	.globl _DTL_REG1
                            692 	.globl _DTL_REG0
                            693 	.globl _RX_LANE_INTERRUPT_REG1
                            694 	.globl _RX_CALIBRATION_REG
                            695 	.globl _INPUT_RX_PIN_REG3_LANE
                            696 	.globl _RX_DATA_PATH_REG
                            697 	.globl _RX_LANE_INTERRUPT_MASK
                            698 	.globl _RX_LANE_INTERRUPT
                            699 	.globl _CDR_LOCK_REG
                            700 	.globl _FRAME_SYNC_DET_REG6
                            701 	.globl _FRAME_SYNC_DET_REG5
                            702 	.globl _FRAME_SYNC_DET_REG4
                            703 	.globl _FRAME_SYNC_DET_REG3
                            704 	.globl _FRAME_SYNC_DET_REG2
                            705 	.globl _FRAME_SYNC_DET_REG1
                            706 	.globl _FRAME_SYNC_DET_REG0
                            707 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            708 	.globl _DIG_RX_RSVD_REG0
                            709 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            710 	.globl _INPUT_RX_PIN_REG2_LANE
                            711 	.globl _INPUT_RX_PIN_REG1_LANE
                            712 	.globl _INPUT_RX_PIN_REG0_LANE
                            713 	.globl _RX_SYSTEM_LANE
                            714 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            715 	.globl _MON_TOP
                            716 	.globl _ANALOG_TX_REALTIME_REG_1
                            717 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            718 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            719 	.globl __FIELDNAME__LANE
                            720 	.globl _INPUT_TX_PIN_REG5_LANE
                            721 	.globl _DIG_TX_RSVD_REG0
                            722 	.globl _TX_CALIBRATION_LANE
                            723 	.globl _INPUT_TX_PIN_REG4_LANE
                            724 	.globl _TX_SYSTEM_LANE
                            725 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            726 	.globl _SPD_CTRL_INTERRUPT_REG2
                            727 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            728 	.globl _TX_SPEED_CONVERT_LANE
                            729 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            730 	.globl _PM_CTRL_INTERRUPT_REG2
                            731 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            732 	.globl _INPUT_TX_PIN_REG3_LANE
                            733 	.globl _INPUT_TX_PIN_REG2_LANE
                            734 	.globl _INPUT_TX_PIN_REG1_LANE
                            735 	.globl _INPUT_TX_PIN_REG0_LANE
                            736 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            737 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            823 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            824 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            825 	.globl _ANA_DFEO_REG_0B
                            826 	.globl _ANA_DFEO_REG_0A
                            827 	.globl _ANA_DFEO_REG_09
                            828 	.globl _ANA_DFEO_REG_08
                            829 	.globl _ANA_DFEO_REG_07
                            830 	.globl _ANA_DFEO_REG_06
                            831 	.globl _ANA_DFEO_REG_05
                            832 	.globl _ANA_DFEO_REG_04
                            833 	.globl _ANA_DFEO_REG_03
                            834 	.globl _ANA_DFEO_REG_02
                            835 	.globl _ANA_DFEO_REG_01
                            836 	.globl _ANA_DFEO_REG_00
                            837 	.globl _ANA_DFEO_REG_27
                            838 	.globl _ANA_DFEO_REG_26
                            839 	.globl _ANA_DFEO_REG_25
                            840 	.globl _ANA_DFEO_REG_24
                            841 	.globl _ANA_DFEO_REG_23
                            842 	.globl _ANA_DFEO_REG_22
                            843 	.globl _ANA_DFEO_REG_21
                            844 	.globl _ANA_DFEO_REG_20
                            845 	.globl _ANA_DFEO_REG_1F
                            846 	.globl _ANA_DFEO_REG_1E
                            847 	.globl _ANA_DFEO_REG_1D
                            848 	.globl _ANA_DFEO_REG_1C
                            849 	.globl _ANA_DFEO_REG_1B
                            850 	.globl _ANA_DFEO_REG_1A
                            851 	.globl _ANA_DFEO_REG_19
                            852 	.globl _ANA_DFEO_REG_18
                            853 	.globl _ANA_DFEO_REG_17
                            854 	.globl _ANA_DFEO_REG_16
                            855 	.globl _ANA_DFEO_REG_15
                            856 	.globl _ANA_DFEO_REG_14
                            857 	.globl _ANA_DFEO_REG_13
                            858 	.globl _ANA_DFEO_REG_12
                            859 	.globl _ANA_DFEO_REG_11
                            860 	.globl _ANA_DFEO_REG_10
                            861 	.globl _ANA_DFEO_REG_0F
                            862 	.globl _ANA_DFEO_REG_0E
                            863 	.globl _ANA_DFEO_REG_0D
                            864 	.globl _ANA_DFEO_REG_0C
                            865 	.globl _ANA_DFEE_REG_1D
                            866 	.globl _ANA_DFEE_REG_1C
                            867 	.globl _ANA_DFEE_REG_1B
                            868 	.globl _ANA_DFEE_REG_1A
                            869 	.globl _ANA_DFEE_REG_19
                            870 	.globl _ANA_DFEE_REG_18
                            871 	.globl _ANA_DFEE_REG_17
                            872 	.globl _ANA_DFEE_REG_16
                            873 	.globl _ANA_DFEE_REG_15
                            874 	.globl _ANA_DFEE_REG_14
                            875 	.globl _ANA_DFEE_REG_13
                            876 	.globl _ANA_DFEE_REG_12
                            877 	.globl _ANA_DFEE_REG_11
                            878 	.globl _ANA_DFEE_REG_10
                            879 	.globl _ANA_DFEE_REG_0F
                            880 	.globl _ANA_DFEE_REG_0E
                            881 	.globl _ANA_DFEE_REG_0D
                            882 	.globl _ANA_DFEE_REG_0C
                            883 	.globl _ANA_DFEE_REG_0B
                            884 	.globl _ANA_DFEE_REG_0A
                            885 	.globl _ANA_DFEE_REG_09
                            886 	.globl _ANA_DFEE_REG_08
                            887 	.globl _ANA_DFEE_REG_07
                            888 	.globl _ANA_DFEE_REG_06
                            889 	.globl _ANA_DFEE_REG_05
                            890 	.globl _ANA_DFEE_REG_04
                            891 	.globl _ANA_DFEE_REG_03
                            892 	.globl _ANA_DFEE_REG_02
                            893 	.globl _ANA_DFEE_REG_01
                            894 	.globl _ANA_DFEE_REG_00
                            895 	.globl _ANA_DFEE_REG_27
                            896 	.globl _ANA_DFEE_REG_26
                            897 	.globl _ANA_DFEE_REG_25
                            898 	.globl _ANA_DFEE_REG_24
                            899 	.globl _ANA_DFEE_REG_23
                            900 	.globl _ANA_DFEE_REG_22
                            901 	.globl _ANA_DFEE_REG_21
                            902 	.globl _ANA_DFEE_REG_20
                            903 	.globl _ANA_DFEE_REG_1F
                            904 	.globl _ANA_DFEE_REG_1E
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            936 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            937 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            966 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            967 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            982 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            983 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            984 	.globl _vdd_cal
                            985 	.globl _vdd_cal_sel
                            986 	.globl _vdd_cal_op
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
                           2032 ;Allocation info for local variables in function 'vdd_cal'
                           2033 ;------------------------------------------------------------
                           2034 ;sel                       Allocated to registers r2 
                           2035 ;------------------------------------------------------------
                           2036 ;	../../shared/src/vdd_cal.c:46: void vdd_cal( void ) BANKING_CTRL {
                           2037 ;	-----------------------------------------
                           2038 ;	 function vdd_cal
                           2039 ;	-----------------------------------------
   E745                    2040 _vdd_cal:
                    0002   2041 	ar2 = 0x02
                    0003   2042 	ar3 = 0x03
                    0004   2043 	ar4 = 0x04
                    0005   2044 	ar5 = 0x05
                    0006   2045 	ar6 = 0x06
                    0007   2046 	ar7 = 0x07
                    0000   2047 	ar0 = 0x00
                    0001   2048 	ar1 = 0x01
                           2049 ;	../../shared/src/vdd_cal.c:48: set_test_pattern(0); //PRBS7
   E745 75 82 00           2050 	mov	dpl,#0x00
   E748 78 F4              2051 	mov	r0,#_set_test_pattern
   E74A 79 BD              2052 	mov	r1,#(_set_test_pattern >> 8)
   E74C 7A 02              2053 	mov	r2,#(_set_test_pattern >> 16)
   E74E 12 00 B3           2054 	lcall	__sdcc_banked_call
                           2055 ;	../../shared/src/vdd_cal.c:49: for(sel=0; sel<6; sel++) {
   E751 7A 00              2056 	mov	r2,#0x00
   E753                    2057 00101$:
   E753 BA 06 00           2058 	cjne	r2,#0x06,00110$
   E756                    2059 00110$:
   E756 50 12              2060 	jnc	00104$
                           2061 ;	../../shared/src/vdd_cal.c:50: vdd_cal_sel(sel);
   E758 8A 82              2062 	mov	dpl,r2
   E75A C0 02              2063 	push	ar2
   E75C 78 84              2064 	mov	r0,#_vdd_cal_sel
   E75E 79 EC              2065 	mov	r1,#(_vdd_cal_sel >> 8)
   E760 7A 02              2066 	mov	r2,#(_vdd_cal_sel >> 16)
   E762 12 00 B3           2067 	lcall	__sdcc_banked_call
   E765 D0 02              2068 	pop	ar2
                           2069 ;	../../shared/src/vdd_cal.c:49: for(sel=0; sel<6; sel++) {
   E767 0A                 2070 	inc	r2
   E768 80 E9              2071 	sjmp	00101$
   E76A                    2072 00104$:
                           2073 ;	../../shared/src/vdd_cal.c:52: recover_test_pattern();
   E76A 78 6D              2074 	mov	r0,#_recover_test_pattern
   E76C 79 BE              2075 	mov	r1,#(_recover_test_pattern >> 8)
   E76E 7A 02              2076 	mov	r2,#(_recover_test_pattern >> 16)
   E770 12 00 B3           2077 	lcall	__sdcc_banked_call
   E773 02 00 C5           2078 	ljmp	__sdcc_banked_ret
                           2079 ;------------------------------------------------------------
                           2080 ;Allocation info for local variables in function 'set_vdd_cal'
                           2081 ;------------------------------------------------------------
                           2082 ;val                       Allocated to stack - offset -4
                           2083 ;sel                       Allocated to registers r2 
                           2084 ;------------------------------------------------------------
                           2085 ;	../../shared/src/vdd_cal.c:95: void set_vdd_cal( uint8_t sel, uint8_t val ) BANKING_CTRL {
                           2086 ;	-----------------------------------------
                           2087 ;	 function set_vdd_cal
                           2088 ;	-----------------------------------------
   E776                    2089 _set_vdd_cal:
   E776 C0 18              2090 	push	_bp
   E778 85 81 18           2091 	mov	_bp,sp
   E77B AA 82              2092 	mov	r2,dpl
                           2093 ;	../../shared/src/vdd_cal.c:97: switch(mcuid) {
   E77D 90 22 00           2094 	mov	dptr,#_MCU_CONTROL_LANE
   E780 E0                 2095 	movx	a,@dptr
   E781 FB                 2096 	mov	r3,a
   E782 60 08              2097 	jz	00101$
   E784 BB 01 02           2098 	cjne	r3,#0x01,00133$
   E787 80 72              2099 	sjmp	00109$
   E789                    2100 00133$:
   E789 02 E8 61           2101 	ljmp	00117$
                           2102 ;	../../shared/src/vdd_cal.c:98: case MCU_LANE0:
   E78C                    2103 00101$:
                           2104 ;	../../shared/src/vdd_cal.c:99: switch(sel) {
   E78C 74 05              2105 	mov	a,#0x05
   E78E B5 02 00           2106 	cjne	a,ar2,00134$
   E791                    2107 00134$:
   E791 50 03              2108 	jnc	00135$
   E793 02 E8 61           2109 	ljmp	00117$
   E796                    2110 00135$:
   E796 EA                 2111 	mov	a,r2
   E797 2A                 2112 	add	a,r2
   E798 2A                 2113 	add	a,r2
   E799 90 E7 9D           2114 	mov	dptr,#00136$
   E79C 73                 2115 	jmp	@a+dptr
   E79D                    2116 00136$:
   E79D 02 E7 AF           2117 	ljmp	00102$
   E7A0 02 E7 BC           2118 	ljmp	00103$
   E7A3 02 E7 C9           2119 	ljmp	00104$
   E7A6 02 E7 D6           2120 	ljmp	00105$
   E7A9 02 E7 E3           2121 	ljmp	00106$
   E7AC 02 E7 EF           2122 	ljmp	00107$
                           2123 ;	../../shared/src/vdd_cal.c:100: case SELLV_TXCLK: 	 cmx_G_SELLV_TXCLK_CH0_7_0 = val;  break;
   E7AF                    2124 00102$:
   E7AF 90 E6 6F           2125 	mov	dptr,#(_G_SELLV_TXCLK + 0x0003)
   E7B2 E5 18              2126 	mov	a,_bp
   E7B4 24 FC              2127 	add	a,#0xfc
   E7B6 F8                 2128 	mov	r0,a
   E7B7 E6                 2129 	mov	a,@r0
   E7B8 F0                 2130 	movx	@dptr,a
   E7B9 02 E8 61           2131 	ljmp	00117$
                           2132 ;	../../shared/src/vdd_cal.c:101: case SELLV_TXDATA:   cmx_G_SELLV_TXDATA_CH0_7_0 = val; break;
   E7BC                    2133 00103$:
   E7BC 90 E6 73           2134 	mov	dptr,#(_G_SELLV_TXDATA + 0x0003)
   E7BF E5 18              2135 	mov	a,_bp
   E7C1 24 FC              2136 	add	a,#0xfc
   E7C3 F8                 2137 	mov	r0,a
   E7C4 E6                 2138 	mov	a,@r0
   E7C5 F0                 2139 	movx	@dptr,a
   E7C6 02 E8 61           2140 	ljmp	00117$
                           2141 ;	../../shared/src/vdd_cal.c:102: case SELLV_TXPRE:    cmx_G_SELLV_TXPRE_CH0_7_0 = val;  break;
   E7C9                    2142 00104$:
   E7C9 90 E6 77           2143 	mov	dptr,#(_G_SELLV_TXPRE + 0x0003)
   E7CC E5 18              2144 	mov	a,_bp
   E7CE 24 FC              2145 	add	a,#0xfc
   E7D0 F8                 2146 	mov	r0,a
   E7D1 E6                 2147 	mov	a,@r0
   E7D2 F0                 2148 	movx	@dptr,a
   E7D3 02 E8 61           2149 	ljmp	00117$
                           2150 ;	../../shared/src/vdd_cal.c:103: case SELLV_RXEOMCLK: cmx_G_SELLV_RXEOMCLK_CH0_7_0 = val; break;
   E7D6                    2151 00105$:
   E7D6 90 E6 7B           2152 	mov	dptr,#(_G_SELLV_RXEOMCLK + 0x0003)
   E7D9 E5 18              2153 	mov	a,_bp
   E7DB 24 FC              2154 	add	a,#0xfc
   E7DD F8                 2155 	mov	r0,a
   E7DE E6                 2156 	mov	a,@r0
   E7DF F0                 2157 	movx	@dptr,a
   E7E0 02 E8 61           2158 	ljmp	00117$
                           2159 ;	../../shared/src/vdd_cal.c:104: case SELLV_RXDATACLK:cmx_G_SELLV_RXDATACLK_CH0_7_0 = val; break; 
   E7E3                    2160 00106$:
   E7E3 90 E6 7F           2161 	mov	dptr,#(_G_SELLV_RXDATACLK + 0x0003)
   E7E6 E5 18              2162 	mov	a,_bp
   E7E8 24 FC              2163 	add	a,#0xfc
   E7EA F8                 2164 	mov	r0,a
   E7EB E6                 2165 	mov	a,@r0
   E7EC F0                 2166 	movx	@dptr,a
                           2167 ;	../../shared/src/vdd_cal.c:105: case SELLV_RXSAMPLER:cmx_G_SELLV_RXSAMPELR_CH0_7_0 = val; break;
   E7ED 80 72              2168 	sjmp	00117$
   E7EF                    2169 00107$:
   E7EF 90 E6 83           2170 	mov	dptr,#(_G_SELLV_RXSAMPLER + 0x0003)
   E7F2 E5 18              2171 	mov	a,_bp
   E7F4 24 FC              2172 	add	a,#0xfc
   E7F6 F8                 2173 	mov	r0,a
   E7F7 E6                 2174 	mov	a,@r0
   E7F8 F0                 2175 	movx	@dptr,a
                           2176 ;	../../shared/src/vdd_cal.c:107: break;	
                           2177 ;	../../shared/src/vdd_cal.c:108: case MCU_LANE1:
   E7F9 80 66              2178 	sjmp	00117$
   E7FB                    2179 00109$:
                           2180 ;	../../shared/src/vdd_cal.c:109: switch(sel) {
   E7FB 74 05              2181 	mov	a,#0x05
   E7FD B5 02 00           2182 	cjne	a,ar2,00137$
   E800                    2183 00137$:
   E800 40 5F              2184 	jc	00117$
   E802 EA                 2185 	mov	a,r2
   E803 2A                 2186 	add	a,r2
   E804 2A                 2187 	add	a,r2
   E805 90 E8 09           2188 	mov	dptr,#00139$
   E808 73                 2189 	jmp	@a+dptr
   E809                    2190 00139$:
   E809 02 E8 1B           2191 	ljmp	00110$
   E80C 02 E8 27           2192 	ljmp	00111$
   E80F 02 E8 33           2193 	ljmp	00112$
   E812 02 E8 3F           2194 	ljmp	00113$
   E815 02 E8 4B           2195 	ljmp	00114$
   E818 02 E8 57           2196 	ljmp	00115$
                           2197 ;	../../shared/src/vdd_cal.c:110: case SELLV_TXCLK: 	 cmx_G_SELLV_TXCLK_CH1_7_0 = val;  break;
   E81B                    2198 00110$:
   E81B 90 E6 6E           2199 	mov	dptr,#(_G_SELLV_TXCLK + 0x0002)
   E81E E5 18              2200 	mov	a,_bp
   E820 24 FC              2201 	add	a,#0xfc
   E822 F8                 2202 	mov	r0,a
   E823 E6                 2203 	mov	a,@r0
   E824 F0                 2204 	movx	@dptr,a
                           2205 ;	../../shared/src/vdd_cal.c:111: case SELLV_TXDATA:   cmx_G_SELLV_TXDATA_CH1_7_0 = val; break;
   E825 80 3A              2206 	sjmp	00117$
   E827                    2207 00111$:
   E827 90 E6 72           2208 	mov	dptr,#(_G_SELLV_TXDATA + 0x0002)
   E82A E5 18              2209 	mov	a,_bp
   E82C 24 FC              2210 	add	a,#0xfc
   E82E F8                 2211 	mov	r0,a
   E82F E6                 2212 	mov	a,@r0
   E830 F0                 2213 	movx	@dptr,a
                           2214 ;	../../shared/src/vdd_cal.c:112: case SELLV_TXPRE:    cmx_G_SELLV_TXPRE_CH1_7_0 = val;  break;
   E831 80 2E              2215 	sjmp	00117$
   E833                    2216 00112$:
   E833 90 E6 76           2217 	mov	dptr,#(_G_SELLV_TXPRE + 0x0002)
   E836 E5 18              2218 	mov	a,_bp
   E838 24 FC              2219 	add	a,#0xfc
   E83A F8                 2220 	mov	r0,a
   E83B E6                 2221 	mov	a,@r0
   E83C F0                 2222 	movx	@dptr,a
                           2223 ;	../../shared/src/vdd_cal.c:113: case SELLV_RXEOMCLK: cmx_G_SELLV_RXEOMCLK_CH1_7_0 = val; break;
   E83D 80 22              2224 	sjmp	00117$
   E83F                    2225 00113$:
   E83F 90 E6 7A           2226 	mov	dptr,#(_G_SELLV_RXEOMCLK + 0x0002)
   E842 E5 18              2227 	mov	a,_bp
   E844 24 FC              2228 	add	a,#0xfc
   E846 F8                 2229 	mov	r0,a
   E847 E6                 2230 	mov	a,@r0
   E848 F0                 2231 	movx	@dptr,a
                           2232 ;	../../shared/src/vdd_cal.c:114: case SELLV_RXDATACLK:cmx_G_SELLV_RXDATACLK_CH1_7_0 = val; break; 
   E849 80 16              2233 	sjmp	00117$
   E84B                    2234 00114$:
   E84B 90 E6 7E           2235 	mov	dptr,#(_G_SELLV_RXDATACLK + 0x0002)
   E84E E5 18              2236 	mov	a,_bp
   E850 24 FC              2237 	add	a,#0xfc
   E852 F8                 2238 	mov	r0,a
   E853 E6                 2239 	mov	a,@r0
   E854 F0                 2240 	movx	@dptr,a
                           2241 ;	../../shared/src/vdd_cal.c:115: case SELLV_RXSAMPLER:cmx_G_SELLV_RXSAMPELR_CH1_7_0 = val; break;
   E855 80 0A              2242 	sjmp	00117$
   E857                    2243 00115$:
   E857 90 E6 82           2244 	mov	dptr,#(_G_SELLV_RXSAMPLER + 0x0002)
   E85A E5 18              2245 	mov	a,_bp
   E85C 24 FC              2246 	add	a,#0xfc
   E85E F8                 2247 	mov	r0,a
   E85F E6                 2248 	mov	a,@r0
   E860 F0                 2249 	movx	@dptr,a
                           2250 ;	../../shared/src/vdd_cal.c:140: }
   E861                    2251 00117$:
                           2252 ;	../../shared/src/vdd_cal.c:142: switch(sel) {
   E861 74 05              2253 	mov	a,#0x05
   E863 B5 02 00           2254 	cjne	a,ar2,00140$
   E866                    2255 00140$:
   E866 50 03              2256 	jnc	00141$
   E868 02 E9 68           2257 	ljmp	00125$
   E86B                    2258 00141$:
   E86B EA                 2259 	mov	a,r2
   E86C 2A                 2260 	add	a,r2
   E86D 2A                 2261 	add	a,r2
   E86E 90 E8 72           2262 	mov	dptr,#00142$
   E871 73                 2263 	jmp	@a+dptr
   E872                    2264 00142$:
   E872 02 E8 84           2265 	ljmp	00118$
   E875 02 E8 AB           2266 	ljmp	00119$
   E878 02 E8 D2           2267 	ljmp	00120$
   E87B 02 E8 F8           2268 	ljmp	00121$
   E87E 02 E9 1E           2269 	ljmp	00122$
   E881 02 E9 44           2270 	ljmp	00123$
                           2271 ;	../../shared/src/vdd_cal.c:143: case SELLV_TXCLK: 	 
   E884                    2272 00118$:
                           2273 ;	../../shared/src/vdd_cal.c:144: reg_SELLV_TXCLK_CH0_3_0 = cmx_G_SELLV_TXCLK_CH0_7_0;  
   E884 90 E6 6F           2274 	mov	dptr,#(_G_SELLV_TXCLK + 0x0003)
   E887 E0                 2275 	movx	a,@dptr
   E888 90 82 70           2276 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_156
   E88B C4                 2277 	swap	a
   E88C 54 F0              2278 	anl	a,#(0xf0&0xf0)
   E88E F5 F0              2279 	mov	b,a
   E890 E0                 2280 	movx	a,@dptr
   E891 54 0F              2281 	anl	a,#0x0f
   E893 45 F0              2282 	orl	a,b
   E895 F0                 2283 	movx	@dptr,a
                           2284 ;	../../shared/src/vdd_cal.c:145: reg_SELLV_TXCLK_CH1_3_0 = cmx_G_SELLV_TXCLK_CH1_7_0;  
   E896 90 E6 6E           2285 	mov	dptr,#(_G_SELLV_TXCLK + 0x0002)
   E899 E0                 2286 	movx	a,@dptr
   E89A FA                 2287 	mov	r2,a
   E89B 90 82 70           2288 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_156
   E89E 54 0F              2289 	anl	a,#0x0f
   E8A0 F5 F0              2290 	mov	b,a
   E8A2 E0                 2291 	movx	a,@dptr
   E8A3 54 F0              2292 	anl	a,#0xf0
   E8A5 45 F0              2293 	orl	a,b
   E8A7 F0                 2294 	movx	@dptr,a
                           2295 ;	../../shared/src/vdd_cal.c:150: break;
   E8A8 02 E9 68           2296 	ljmp	00125$
                           2297 ;	../../shared/src/vdd_cal.c:151: case SELLV_TXDATA:   
   E8AB                    2298 00119$:
                           2299 ;	../../shared/src/vdd_cal.c:152: reg_SELLV_TXDATA_CH0_3_0 = cmx_G_SELLV_TXDATA_CH0_7_0;  
   E8AB 90 E6 73           2300 	mov	dptr,#(_G_SELLV_TXDATA + 0x0003)
   E8AE E0                 2301 	movx	a,@dptr
   E8AF 90 82 78           2302 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_158
   E8B2 C4                 2303 	swap	a
   E8B3 54 F0              2304 	anl	a,#(0xf0&0xf0)
   E8B5 F5 F0              2305 	mov	b,a
   E8B7 E0                 2306 	movx	a,@dptr
   E8B8 54 0F              2307 	anl	a,#0x0f
   E8BA 45 F0              2308 	orl	a,b
   E8BC F0                 2309 	movx	@dptr,a
                           2310 ;	../../shared/src/vdd_cal.c:153: reg_SELLV_TXDATA_CH1_3_0 = cmx_G_SELLV_TXDATA_CH1_7_0;  
   E8BD 90 E6 72           2311 	mov	dptr,#(_G_SELLV_TXDATA + 0x0002)
   E8C0 E0                 2312 	movx	a,@dptr
   E8C1 FA                 2313 	mov	r2,a
   E8C2 90 82 78           2314 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_158
   E8C5 54 0F              2315 	anl	a,#0x0f
   E8C7 F5 F0              2316 	mov	b,a
   E8C9 E0                 2317 	movx	a,@dptr
   E8CA 54 F0              2318 	anl	a,#0xf0
   E8CC 45 F0              2319 	orl	a,b
   E8CE F0                 2320 	movx	@dptr,a
                           2321 ;	../../shared/src/vdd_cal.c:158: break;
   E8CF 02 E9 68           2322 	ljmp	00125$
                           2323 ;	../../shared/src/vdd_cal.c:159: case SELLV_TXPRE:    
   E8D2                    2324 00120$:
                           2325 ;	../../shared/src/vdd_cal.c:160: reg_SELLV_TXPRE_CH0_3_0 = cmx_G_SELLV_TXPRE_CH0_7_0;  
   E8D2 90 E6 77           2326 	mov	dptr,#(_G_SELLV_TXPRE + 0x0003)
   E8D5 E0                 2327 	movx	a,@dptr
   E8D6 90 82 80           2328 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_160
   E8D9 C4                 2329 	swap	a
   E8DA 54 F0              2330 	anl	a,#(0xf0&0xf0)
   E8DC F5 F0              2331 	mov	b,a
   E8DE E0                 2332 	movx	a,@dptr
   E8DF 54 0F              2333 	anl	a,#0x0f
   E8E1 45 F0              2334 	orl	a,b
   E8E3 F0                 2335 	movx	@dptr,a
                           2336 ;	../../shared/src/vdd_cal.c:161: reg_SELLV_TXPRE_CH1_3_0 = cmx_G_SELLV_TXPRE_CH1_7_0;  
   E8E4 90 E6 76           2337 	mov	dptr,#(_G_SELLV_TXPRE + 0x0002)
   E8E7 E0                 2338 	movx	a,@dptr
   E8E8 FA                 2339 	mov	r2,a
   E8E9 90 82 80           2340 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_160
   E8EC 54 0F              2341 	anl	a,#0x0f
   E8EE F5 F0              2342 	mov	b,a
   E8F0 E0                 2343 	movx	a,@dptr
   E8F1 54 F0              2344 	anl	a,#0xf0
   E8F3 45 F0              2345 	orl	a,b
   E8F5 F0                 2346 	movx	@dptr,a
                           2347 ;	../../shared/src/vdd_cal.c:166: break;
                           2348 ;	../../shared/src/vdd_cal.c:167: case SELLV_RXEOMCLK: 
   E8F6 80 70              2349 	sjmp	00125$
   E8F8                    2350 00121$:
                           2351 ;	../../shared/src/vdd_cal.c:168: reg_SELLV_RXEOMCLK_CH0_3_0 = cmx_G_SELLV_RXEOMCLK_CH0_7_0;  
   E8F8 90 E6 7B           2352 	mov	dptr,#(_G_SELLV_RXEOMCLK + 0x0003)
   E8FB E0                 2353 	movx	a,@dptr
   E8FC 90 82 40           2354 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_144
   E8FF C4                 2355 	swap	a
   E900 54 F0              2356 	anl	a,#(0xf0&0xf0)
   E902 F5 F0              2357 	mov	b,a
   E904 E0                 2358 	movx	a,@dptr
   E905 54 0F              2359 	anl	a,#0x0f
   E907 45 F0              2360 	orl	a,b
   E909 F0                 2361 	movx	@dptr,a
                           2362 ;	../../shared/src/vdd_cal.c:169: reg_SELLV_RXEOMCLK_CH1_3_0 = cmx_G_SELLV_RXEOMCLK_CH1_7_0;  
   E90A 90 E6 7A           2363 	mov	dptr,#(_G_SELLV_RXEOMCLK + 0x0002)
   E90D E0                 2364 	movx	a,@dptr
   E90E FA                 2365 	mov	r2,a
   E90F 90 82 40           2366 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_144
   E912 54 0F              2367 	anl	a,#0x0f
   E914 F5 F0              2368 	mov	b,a
   E916 E0                 2369 	movx	a,@dptr
   E917 54 F0              2370 	anl	a,#0xf0
   E919 45 F0              2371 	orl	a,b
   E91B F0                 2372 	movx	@dptr,a
                           2373 ;	../../shared/src/vdd_cal.c:174: break;
                           2374 ;	../../shared/src/vdd_cal.c:175: case SELLV_RXDATACLK:
   E91C 80 4A              2375 	sjmp	00125$
   E91E                    2376 00122$:
                           2377 ;	../../shared/src/vdd_cal.c:176: reg_SELLV_RXDATACLK_CH0_3_0 = cmx_G_SELLV_RXDATACLK_CH0_7_0;  
   E91E 90 E6 7F           2378 	mov	dptr,#(_G_SELLV_RXDATACLK + 0x0003)
   E921 E0                 2379 	movx	a,@dptr
   E922 90 82 38           2380 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_142
   E925 C4                 2381 	swap	a
   E926 54 F0              2382 	anl	a,#(0xf0&0xf0)
   E928 F5 F0              2383 	mov	b,a
   E92A E0                 2384 	movx	a,@dptr
   E92B 54 0F              2385 	anl	a,#0x0f
   E92D 45 F0              2386 	orl	a,b
   E92F F0                 2387 	movx	@dptr,a
                           2388 ;	../../shared/src/vdd_cal.c:177: reg_SELLV_RXDATACLK_CH1_3_0 = cmx_G_SELLV_RXDATACLK_CH1_7_0;  
   E930 90 E6 7E           2389 	mov	dptr,#(_G_SELLV_RXDATACLK + 0x0002)
   E933 E0                 2390 	movx	a,@dptr
   E934 FA                 2391 	mov	r2,a
   E935 90 82 38           2392 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_142
   E938 54 0F              2393 	anl	a,#0x0f
   E93A F5 F0              2394 	mov	b,a
   E93C E0                 2395 	movx	a,@dptr
   E93D 54 F0              2396 	anl	a,#0xf0
   E93F 45 F0              2397 	orl	a,b
   E941 F0                 2398 	movx	@dptr,a
                           2399 ;	../../shared/src/vdd_cal.c:182: break; 
                           2400 ;	../../shared/src/vdd_cal.c:183: case SELLV_RXSAMPLER:
   E942 80 24              2401 	sjmp	00125$
   E944                    2402 00123$:
                           2403 ;	../../shared/src/vdd_cal.c:184: reg_SELLV_RXSAMPELR_CH0_3_0 = cmx_G_SELLV_RXSAMPELR_CH0_7_0;  
   E944 90 E6 83           2404 	mov	dptr,#(_G_SELLV_RXSAMPLER + 0x0003)
   E947 E0                 2405 	movx	a,@dptr
   E948 90 82 48           2406 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_146
   E94B C4                 2407 	swap	a
   E94C 54 F0              2408 	anl	a,#(0xf0&0xf0)
   E94E F5 F0              2409 	mov	b,a
   E950 E0                 2410 	movx	a,@dptr
   E951 54 0F              2411 	anl	a,#0x0f
   E953 45 F0              2412 	orl	a,b
   E955 F0                 2413 	movx	@dptr,a
                           2414 ;	../../shared/src/vdd_cal.c:185: reg_SELLV_RXSAMPELR_CH1_3_0 = cmx_G_SELLV_RXSAMPELR_CH1_7_0;  
   E956 90 E6 82           2415 	mov	dptr,#(_G_SELLV_RXSAMPLER + 0x0002)
   E959 E0                 2416 	movx	a,@dptr
   E95A FA                 2417 	mov	r2,a
   E95B 90 82 48           2418 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_146
   E95E 54 0F              2419 	anl	a,#0x0f
   E960 F5 F0              2420 	mov	b,a
   E962 E0                 2421 	movx	a,@dptr
   E963 54 F0              2422 	anl	a,#0xf0
   E965 45 F0              2423 	orl	a,b
   E967 F0                 2424 	movx	@dptr,a
                           2425 ;	../../shared/src/vdd_cal.c:191: }	
   E968                    2426 00125$:
   E968 D0 18              2427 	pop	_bp
   E96A 02 00 C5           2428 	ljmp	__sdcc_banked_ret
                           2429 ;------------------------------------------------------------
                           2430 ;Allocation info for local variables in function 'save_vdd_cal'
                           2431 ;------------------------------------------------------------
                           2432 ;cont                      Allocated to stack - offset -4
                           2433 ;val                       Allocated to stack - offset -5
                           2434 ;sel                       Allocated to registers r2 
                           2435 ;i                         Allocated to registers r3 
                           2436 ;gen                       Allocated to registers r4 
                           2437 ;------------------------------------------------------------
                           2438 ;	../../shared/src/vdd_cal.c:244: void save_vdd_cal(uint8_t sel, uint8_t cont, uint8_t val) BANKING_CTRL {
                           2439 ;	-----------------------------------------
                           2440 ;	 function save_vdd_cal
                           2441 ;	-----------------------------------------
   E96D                    2442 _save_vdd_cal:
   E96D C0 18              2443 	push	_bp
   E96F 85 81 18           2444 	mov	_bp,sp
   E972 AA 82              2445 	mov	r2,dpl
                           2446 ;	../../shared/src/vdd_cal.c:247: i = cont;
   E974 E5 18              2447 	mov	a,_bp
   E976 24 FC              2448 	add	a,#0xfc
   E978 F8                 2449 	mov	r0,a
   E979 86 03              2450 	mov	ar3,@r0
                           2451 ;	../../shared/src/vdd_cal.c:248: gen = gen_tx;
   E97B 90 66 15           2452 	mov	dptr,#_gen_tx
   E97E E0                 2453 	movx	a,@dptr
   E97F FC                 2454 	mov	r4,a
                           2455 ;	../../shared/src/vdd_cal.c:249: if(phy_mode == SERDES) gen = 0;
   E980 90 A3 16           2456 	mov	dptr,#(_SYSTEM + 0x0002)
   E983 E0                 2457 	movx	a,@dptr
   E984 54 07              2458 	anl	a,#0x07
   E986 FD                 2459 	mov	r5,a
   E987 BD 04 02           2460 	cjne	r5,#0x04,00102$
   E98A 7C 00              2461 	mov	r4,#0x00
   E98C                    2462 00102$:
                           2463 ;	../../shared/src/vdd_cal.c:251: switch(sel) {
   E98C 74 05              2464 	mov	a,#0x05
   E98E B5 02 00           2465 	cjne	a,ar2,00116$
   E991                    2466 00116$:
   E991 50 03              2467 	jnc	00117$
   E993 02 EA 5C           2468 	ljmp	00110$
   E996                    2469 00117$:
   E996 EA                 2470 	mov	a,r2
   E997 2A                 2471 	add	a,r2
   E998 2A                 2472 	add	a,r2
   E999 90 E9 9D           2473 	mov	dptr,#00118$
   E99C 73                 2474 	jmp	@a+dptr
   E99D                    2475 00118$:
   E99D 02 E9 AF           2476 	ljmp	00103$
   E9A0 02 E9 CD           2477 	ljmp	00104$
   E9A3 02 E9 EA           2478 	ljmp	00105$
   E9A6 02 EA 07           2479 	ljmp	00106$
   E9A9 02 EA 24           2480 	ljmp	00107$
   E9AC 02 EA 41           2481 	ljmp	00108$
                           2482 ;	../../shared/src/vdd_cal.c:252: case SELLV_TXCLK:  lnx_cal_sellv_txclk[i][gen] = val;  break;
   E9AF                    2483 00103$:
   E9AF EB                 2484 	mov	a,r3
   E9B0 75 F0 05           2485 	mov	b,#0x05
   E9B3 A4                 2486 	mul	ab
   E9B4 24 34              2487 	add	a,#_lnx_cal_sellv_txclk
   E9B6 FA                 2488 	mov	r2,a
   E9B7 E4                 2489 	clr	a
   E9B8 34 66              2490 	addc	a,#(_lnx_cal_sellv_txclk >> 8)
   E9BA FD                 2491 	mov	r5,a
   E9BB EC                 2492 	mov	a,r4
   E9BC 2A                 2493 	add	a,r2
   E9BD F5 82              2494 	mov	dpl,a
   E9BF E4                 2495 	clr	a
   E9C0 3D                 2496 	addc	a,r5
   E9C1 F5 83              2497 	mov	dph,a
   E9C3 E5 18              2498 	mov	a,_bp
   E9C5 24 FB              2499 	add	a,#0xfb
   E9C7 F8                 2500 	mov	r0,a
   E9C8 E6                 2501 	mov	a,@r0
   E9C9 F0                 2502 	movx	@dptr,a
   E9CA 02 EA 5C           2503 	ljmp	00110$
                           2504 ;	../../shared/src/vdd_cal.c:253: case SELLV_TXDATA: lnx_cal_sellv_txdata[i][gen] = val;  break;  
   E9CD                    2505 00104$:
   E9CD EB                 2506 	mov	a,r3
   E9CE 75 F0 05           2507 	mov	b,#0x05
   E9D1 A4                 2508 	mul	ab
   E9D2 24 2A              2509 	add	a,#_lnx_cal_sellv_txdata
   E9D4 FA                 2510 	mov	r2,a
   E9D5 E4                 2511 	clr	a
   E9D6 34 66              2512 	addc	a,#(_lnx_cal_sellv_txdata >> 8)
   E9D8 FD                 2513 	mov	r5,a
   E9D9 EC                 2514 	mov	a,r4
   E9DA 2A                 2515 	add	a,r2
   E9DB F5 82              2516 	mov	dpl,a
   E9DD E4                 2517 	clr	a
   E9DE 3D                 2518 	addc	a,r5
   E9DF F5 83              2519 	mov	dph,a
   E9E1 E5 18              2520 	mov	a,_bp
   E9E3 24 FB              2521 	add	a,#0xfb
   E9E5 F8                 2522 	mov	r0,a
   E9E6 E6                 2523 	mov	a,@r0
   E9E7 F0                 2524 	movx	@dptr,a
                           2525 ;	../../shared/src/vdd_cal.c:254: case SELLV_TXPRE:  lnx_cal_sellv_txpre[i][gen] = val;  break;  
   E9E8 80 72              2526 	sjmp	00110$
   E9EA                    2527 00105$:
   E9EA EB                 2528 	mov	a,r3
   E9EB 75 F0 05           2529 	mov	b,#0x05
   E9EE A4                 2530 	mul	ab
   E9EF 24 48              2531 	add	a,#_lnx_cal_sellv_txpre
   E9F1 FA                 2532 	mov	r2,a
   E9F2 E4                 2533 	clr	a
   E9F3 34 66              2534 	addc	a,#(_lnx_cal_sellv_txpre >> 8)
   E9F5 FD                 2535 	mov	r5,a
   E9F6 EC                 2536 	mov	a,r4
   E9F7 2A                 2537 	add	a,r2
   E9F8 F5 82              2538 	mov	dpl,a
   E9FA E4                 2539 	clr	a
   E9FB 3D                 2540 	addc	a,r5
   E9FC F5 83              2541 	mov	dph,a
   E9FE E5 18              2542 	mov	a,_bp
   EA00 24 FB              2543 	add	a,#0xfb
   EA02 F8                 2544 	mov	r0,a
   EA03 E6                 2545 	mov	a,@r0
   EA04 F0                 2546 	movx	@dptr,a
                           2547 ;	../../shared/src/vdd_cal.c:255: case SELLV_RXEOMCLK:  lnx_cal_sellv_rxeomclk[i][gen] = val;  break;
   EA05 80 55              2548 	sjmp	00110$
   EA07                    2549 00106$:
   EA07 EB                 2550 	mov	a,r3
   EA08 75 F0 05           2551 	mov	b,#0x05
   EA0B A4                 2552 	mul	ab
   EA0C 24 5C              2553 	add	a,#_lnx_cal_sellv_rxeomclk
   EA0E FA                 2554 	mov	r2,a
   EA0F E4                 2555 	clr	a
   EA10 34 66              2556 	addc	a,#(_lnx_cal_sellv_rxeomclk >> 8)
   EA12 FD                 2557 	mov	r5,a
   EA13 EC                 2558 	mov	a,r4
   EA14 2A                 2559 	add	a,r2
   EA15 F5 82              2560 	mov	dpl,a
   EA17 E4                 2561 	clr	a
   EA18 3D                 2562 	addc	a,r5
   EA19 F5 83              2563 	mov	dph,a
   EA1B E5 18              2564 	mov	a,_bp
   EA1D 24 FB              2565 	add	a,#0xfb
   EA1F F8                 2566 	mov	r0,a
   EA20 E6                 2567 	mov	a,@r0
   EA21 F0                 2568 	movx	@dptr,a
                           2569 ;	../../shared/src/vdd_cal.c:256: case SELLV_RXDATACLK: lnx_cal_sellv_rxdataclk[i][gen] = val;  break;
   EA22 80 38              2570 	sjmp	00110$
   EA24                    2571 00107$:
   EA24 EB                 2572 	mov	a,r3
   EA25 75 F0 05           2573 	mov	b,#0x05
   EA28 A4                 2574 	mul	ab
   EA29 24 3E              2575 	add	a,#_lnx_cal_sellv_rxdataclk
   EA2B FA                 2576 	mov	r2,a
   EA2C E4                 2577 	clr	a
   EA2D 34 66              2578 	addc	a,#(_lnx_cal_sellv_rxdataclk >> 8)
   EA2F FD                 2579 	mov	r5,a
   EA30 EC                 2580 	mov	a,r4
   EA31 2A                 2581 	add	a,r2
   EA32 F5 82              2582 	mov	dpl,a
   EA34 E4                 2583 	clr	a
   EA35 3D                 2584 	addc	a,r5
   EA36 F5 83              2585 	mov	dph,a
   EA38 E5 18              2586 	mov	a,_bp
   EA3A 24 FB              2587 	add	a,#0xfb
   EA3C F8                 2588 	mov	r0,a
   EA3D E6                 2589 	mov	a,@r0
   EA3E F0                 2590 	movx	@dptr,a
                           2591 ;	../../shared/src/vdd_cal.c:257: case SELLV_RXSAMPLER: lnx_cal_sellv_rxsampler[i][gen] = val;  break;
   EA3F 80 1B              2592 	sjmp	00110$
   EA41                    2593 00108$:
   EA41 EB                 2594 	mov	a,r3
   EA42 75 F0 05           2595 	mov	b,#0x05
   EA45 A4                 2596 	mul	ab
   EA46 24 52              2597 	add	a,#_lnx_cal_sellv_rxsampler
   EA48 FA                 2598 	mov	r2,a
   EA49 E4                 2599 	clr	a
   EA4A 34 66              2600 	addc	a,#(_lnx_cal_sellv_rxsampler >> 8)
   EA4C FB                 2601 	mov	r3,a
   EA4D EC                 2602 	mov	a,r4
   EA4E 2A                 2603 	add	a,r2
   EA4F F5 82              2604 	mov	dpl,a
   EA51 E4                 2605 	clr	a
   EA52 3B                 2606 	addc	a,r3
   EA53 F5 83              2607 	mov	dph,a
   EA55 E5 18              2608 	mov	a,_bp
   EA57 24 FB              2609 	add	a,#0xfb
   EA59 F8                 2610 	mov	r0,a
   EA5A E6                 2611 	mov	a,@r0
   EA5B F0                 2612 	movx	@dptr,a
                           2613 ;	../../shared/src/vdd_cal.c:258: }	
   EA5C                    2614 00110$:
   EA5C D0 18              2615 	pop	_bp
   EA5E 02 00 C5           2616 	ljmp	__sdcc_banked_ret
                           2617 ;------------------------------------------------------------
                           2618 ;Allocation info for local variables in function 'get_vdd_cal'
                           2619 ;------------------------------------------------------------
                           2620 ;sel                       Allocated to registers r2 
                           2621 ;i                         Allocated to registers r3 
                           2622 ;gen                       Allocated to registers r4 
                           2623 ;val                       Allocated to stack - offset 1
                           2624 ;------------------------------------------------------------
                           2625 ;	../../shared/src/vdd_cal.c:261: uint8_t get_vdd_cal(uint8_t sel) BANKING_CTRL {
                           2626 ;	-----------------------------------------
                           2627 ;	 function get_vdd_cal
                           2628 ;	-----------------------------------------
   EA61                    2629 _get_vdd_cal:
   EA61 C0 18              2630 	push	_bp
   EA63 85 81 18           2631 	mov	_bp,sp
   EA66 05 81              2632 	inc	sp
   EA68 AA 82              2633 	mov	r2,dpl
                           2634 ;	../../shared/src/vdd_cal.c:264: i = cont_cal_on;
   EA6A A2 16              2635 	mov	c,_cont_cal_on
   EA6C E4                 2636 	clr	a
   EA6D 33                 2637 	rlc	a
   EA6E FB                 2638 	mov	r3,a
                           2639 ;	../../shared/src/vdd_cal.c:265: gen = gen_tx;
   EA6F 90 66 15           2640 	mov	dptr,#_gen_tx
   EA72 E0                 2641 	movx	a,@dptr
   EA73 FC                 2642 	mov	r4,a
                           2643 ;	../../shared/src/vdd_cal.c:266: if(phy_mode == SERDES) gen = 0;
   EA74 90 A3 16           2644 	mov	dptr,#(_SYSTEM + 0x0002)
   EA77 E0                 2645 	movx	a,@dptr
   EA78 54 07              2646 	anl	a,#0x07
   EA7A FD                 2647 	mov	r5,a
   EA7B BD 04 02           2648 	cjne	r5,#0x04,00102$
   EA7E 7C 00              2649 	mov	r4,#0x00
   EA80                    2650 00102$:
                           2651 ;	../../shared/src/vdd_cal.c:268: switch(sel) {
   EA80 74 05              2652 	mov	a,#0x05
   EA82 B5 02 00           2653 	cjne	a,ar2,00116$
   EA85                    2654 00116$:
   EA85 50 03              2655 	jnc	00117$
   EA87 02 EB 36           2656 	ljmp	00109$
   EA8A                    2657 00117$:
   EA8A EA                 2658 	mov	a,r2
   EA8B 2A                 2659 	add	a,r2
   EA8C 2A                 2660 	add	a,r2
   EA8D 90 EA 91           2661 	mov	dptr,#00118$
   EA90 73                 2662 	jmp	@a+dptr
   EA91                    2663 00118$:
   EA91 02 EA A3           2664 	ljmp	00103$
   EA94 02 EA BB           2665 	ljmp	00104$
   EA97 02 EA D4           2666 	ljmp	00105$
   EA9A 02 EA ED           2667 	ljmp	00106$
   EA9D 02 EB 06           2668 	ljmp	00107$
   EAA0 02 EB 1F           2669 	ljmp	00108$
                           2670 ;	../../shared/src/vdd_cal.c:269: case SELLV_TXCLK:  val = lnx_cal_sellv_txclk[i][gen];  break;
   EAA3                    2671 00103$:
   EAA3 EB                 2672 	mov	a,r3
   EAA4 75 F0 05           2673 	mov	b,#0x05
   EAA7 A4                 2674 	mul	ab
   EAA8 24 34              2675 	add	a,#_lnx_cal_sellv_txclk
   EAAA FA                 2676 	mov	r2,a
   EAAB E4                 2677 	clr	a
   EAAC 34 66              2678 	addc	a,#(_lnx_cal_sellv_txclk >> 8)
   EAAE FD                 2679 	mov	r5,a
   EAAF EC                 2680 	mov	a,r4
   EAB0 2A                 2681 	add	a,r2
   EAB1 F5 82              2682 	mov	dpl,a
   EAB3 E4                 2683 	clr	a
   EAB4 3D                 2684 	addc	a,r5
   EAB5 F5 83              2685 	mov	dph,a
   EAB7 E0                 2686 	movx	a,@dptr
   EAB8 FA                 2687 	mov	r2,a
                           2688 ;	../../shared/src/vdd_cal.c:270: case SELLV_TXDATA: val = lnx_cal_sellv_txdata[i][gen];  break;  
   EAB9 80 7B              2689 	sjmp	00109$
   EABB                    2690 00104$:
   EABB EB                 2691 	mov	a,r3
   EABC 75 F0 05           2692 	mov	b,#0x05
   EABF A4                 2693 	mul	ab
   EAC0 24 2A              2694 	add	a,#_lnx_cal_sellv_txdata
   EAC2 FD                 2695 	mov	r5,a
   EAC3 E4                 2696 	clr	a
   EAC4 34 66              2697 	addc	a,#(_lnx_cal_sellv_txdata >> 8)
   EAC6 FE                 2698 	mov	r6,a
   EAC7 EC                 2699 	mov	a,r4
   EAC8 2D                 2700 	add	a,r5
   EAC9 F5 82              2701 	mov	dpl,a
   EACB E4                 2702 	clr	a
   EACC 3E                 2703 	addc	a,r6
   EACD F5 83              2704 	mov	dph,a
   EACF E0                 2705 	movx	a,@dptr
   EAD0 FD                 2706 	mov	r5,a
   EAD1 FA                 2707 	mov	r2,a
                           2708 ;	../../shared/src/vdd_cal.c:271: case SELLV_TXPRE:  val = lnx_cal_sellv_txpre[i][gen];  break;  
   EAD2 80 62              2709 	sjmp	00109$
   EAD4                    2710 00105$:
   EAD4 EB                 2711 	mov	a,r3
   EAD5 75 F0 05           2712 	mov	b,#0x05
   EAD8 A4                 2713 	mul	ab
   EAD9 24 48              2714 	add	a,#_lnx_cal_sellv_txpre
   EADB FD                 2715 	mov	r5,a
   EADC E4                 2716 	clr	a
   EADD 34 66              2717 	addc	a,#(_lnx_cal_sellv_txpre >> 8)
   EADF FE                 2718 	mov	r6,a
   EAE0 EC                 2719 	mov	a,r4
   EAE1 2D                 2720 	add	a,r5
   EAE2 F5 82              2721 	mov	dpl,a
   EAE4 E4                 2722 	clr	a
   EAE5 3E                 2723 	addc	a,r6
   EAE6 F5 83              2724 	mov	dph,a
   EAE8 E0                 2725 	movx	a,@dptr
   EAE9 FD                 2726 	mov	r5,a
   EAEA FA                 2727 	mov	r2,a
                           2728 ;	../../shared/src/vdd_cal.c:272: case SELLV_RXEOMCLK:  val = lnx_cal_sellv_rxeomclk[i][gen];  break;
   EAEB 80 49              2729 	sjmp	00109$
   EAED                    2730 00106$:
   EAED EB                 2731 	mov	a,r3
   EAEE 75 F0 05           2732 	mov	b,#0x05
   EAF1 A4                 2733 	mul	ab
   EAF2 24 5C              2734 	add	a,#_lnx_cal_sellv_rxeomclk
   EAF4 FD                 2735 	mov	r5,a
   EAF5 E4                 2736 	clr	a
   EAF6 34 66              2737 	addc	a,#(_lnx_cal_sellv_rxeomclk >> 8)
   EAF8 FE                 2738 	mov	r6,a
   EAF9 EC                 2739 	mov	a,r4
   EAFA 2D                 2740 	add	a,r5
   EAFB F5 82              2741 	mov	dpl,a
   EAFD E4                 2742 	clr	a
   EAFE 3E                 2743 	addc	a,r6
   EAFF F5 83              2744 	mov	dph,a
   EB01 E0                 2745 	movx	a,@dptr
   EB02 FD                 2746 	mov	r5,a
   EB03 FA                 2747 	mov	r2,a
                           2748 ;	../../shared/src/vdd_cal.c:273: case SELLV_RXDATACLK: val = lnx_cal_sellv_rxdataclk[i][gen];  break;
   EB04 80 30              2749 	sjmp	00109$
   EB06                    2750 00107$:
   EB06 EB                 2751 	mov	a,r3
   EB07 75 F0 05           2752 	mov	b,#0x05
   EB0A A4                 2753 	mul	ab
   EB0B 24 3E              2754 	add	a,#_lnx_cal_sellv_rxdataclk
   EB0D FD                 2755 	mov	r5,a
   EB0E E4                 2756 	clr	a
   EB0F 34 66              2757 	addc	a,#(_lnx_cal_sellv_rxdataclk >> 8)
   EB11 FE                 2758 	mov	r6,a
   EB12 EC                 2759 	mov	a,r4
   EB13 2D                 2760 	add	a,r5
   EB14 F5 82              2761 	mov	dpl,a
   EB16 E4                 2762 	clr	a
   EB17 3E                 2763 	addc	a,r6
   EB18 F5 83              2764 	mov	dph,a
   EB1A E0                 2765 	movx	a,@dptr
   EB1B FD                 2766 	mov	r5,a
   EB1C FA                 2767 	mov	r2,a
                           2768 ;	../../shared/src/vdd_cal.c:274: case SELLV_RXSAMPLER: val = lnx_cal_sellv_rxsampler[i][gen];  break;
   EB1D 80 17              2769 	sjmp	00109$
   EB1F                    2770 00108$:
   EB1F EB                 2771 	mov	a,r3
   EB20 75 F0 05           2772 	mov	b,#0x05
   EB23 A4                 2773 	mul	ab
   EB24 24 52              2774 	add	a,#_lnx_cal_sellv_rxsampler
   EB26 FB                 2775 	mov	r3,a
   EB27 E4                 2776 	clr	a
   EB28 34 66              2777 	addc	a,#(_lnx_cal_sellv_rxsampler >> 8)
   EB2A FD                 2778 	mov	r5,a
   EB2B EC                 2779 	mov	a,r4
   EB2C 2B                 2780 	add	a,r3
   EB2D F5 82              2781 	mov	dpl,a
   EB2F E4                 2782 	clr	a
   EB30 3D                 2783 	addc	a,r5
   EB31 F5 83              2784 	mov	dph,a
   EB33 E0                 2785 	movx	a,@dptr
   EB34 FB                 2786 	mov	r3,a
   EB35 FA                 2787 	mov	r2,a
                           2788 ;	../../shared/src/vdd_cal.c:275: }	
   EB36                    2789 00109$:
                           2790 ;	../../shared/src/vdd_cal.c:277: return val;
   EB36 8A 82              2791 	mov	dpl,r2
   EB38 85 18 81           2792 	mov	sp,_bp
   EB3B D0 18              2793 	pop	_bp
   EB3D 02 00 C5           2794 	ljmp	__sdcc_banked_ret
                           2795 ;------------------------------------------------------------
                           2796 ;Allocation info for local variables in function 'vdd_cal_calen'
                           2797 ;------------------------------------------------------------
                           2798 ;val                       Allocated to stack - offset -4
                           2799 ;sel                       Allocated to registers r2 
                           2800 ;------------------------------------------------------------
                           2801 ;	../../shared/src/vdd_cal.c:280: void vdd_cal_calen(uint8_t sel, uint8_t val ) BANKING_CTRL {
                           2802 ;	-----------------------------------------
                           2803 ;	 function vdd_cal_calen
                           2804 ;	-----------------------------------------
   EB40                    2805 _vdd_cal_calen:
   EB40 C0 18              2806 	push	_bp
   EB42 85 81 18           2807 	mov	_bp,sp
   EB45 AA 82              2808 	mov	r2,dpl
                           2809 ;	../../shared/src/vdd_cal.c:281: switch(sel) {
   EB47 74 05              2810 	mov	a,#0x05
   EB49 B5 02 00           2811 	cjne	a,ar2,00111$
   EB4C                    2812 00111$:
   EB4C 50 03              2813 	jnc	00112$
   EB4E 02 EB F2           2814 	ljmp	00108$
   EB51                    2815 00112$:
   EB51 EA                 2816 	mov	a,r2
   EB52 2A                 2817 	add	a,r2
   EB53 2A                 2818 	add	a,r2
   EB54 90 EB 58           2819 	mov	dptr,#00113$
   EB57 73                 2820 	jmp	@a+dptr
   EB58                    2821 00113$:
   EB58 02 EB 6A           2822 	ljmp	00101$
   EB5B 02 EB 7A           2823 	ljmp	00102$
   EB5E 02 EB 8A           2824 	ljmp	00103$
   EB61 02 EB 9A           2825 	ljmp	00104$
   EB64 02 EB B8           2826 	ljmp	00105$
   EB67 02 EB D6           2827 	ljmp	00106$
                           2828 ;	../../shared/src/vdd_cal.c:282: case SELLV_TXCLK:  reg_CALEN_VDDA_TXCLK_LANE = val;  break;
   EB6A                    2829 00101$:
   EB6A 90 02 3C           2830 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_143
   EB6D E5 18              2831 	mov	a,_bp
   EB6F 24 FC              2832 	add	a,#0xfc
   EB71 F8                 2833 	mov	r0,a
   EB72 E6                 2834 	mov	a,@r0
   EB73 13                 2835 	rrc	a
   EB74 E0                 2836 	movx	a,@dptr
   EB75 92 E5              2837 	mov	acc.5,c
   EB77 F0                 2838 	movx	@dptr,a
                           2839 ;	../../shared/src/vdd_cal.c:283: case SELLV_TXDATA: reg_CALEN_VDDA_TXDATA_LANE = val;  break;
   EB78 80 78              2840 	sjmp	00108$
   EB7A                    2841 00102$:
   EB7A 90 02 3C           2842 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_143
   EB7D E5 18              2843 	mov	a,_bp
   EB7F 24 FC              2844 	add	a,#0xfc
   EB81 F8                 2845 	mov	r0,a
   EB82 E6                 2846 	mov	a,@r0
   EB83 13                 2847 	rrc	a
   EB84 E0                 2848 	movx	a,@dptr
   EB85 92 E4              2849 	mov	acc.4,c
   EB87 F0                 2850 	movx	@dptr,a
                           2851 ;	../../shared/src/vdd_cal.c:284: case SELLV_TXPRE:  reg_CALEN_VDDA_TXPRE_LANE = val;  break;
   EB88 80 68              2852 	sjmp	00108$
   EB8A                    2853 00103$:
   EB8A 90 02 3C           2854 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_143
   EB8D E5 18              2855 	mov	a,_bp
   EB8F 24 FC              2856 	add	a,#0xfc
   EB91 F8                 2857 	mov	r0,a
   EB92 E6                 2858 	mov	a,@r0
   EB93 13                 2859 	rrc	a
   EB94 E0                 2860 	movx	a,@dptr
   EB95 92 E3              2861 	mov	acc.3,c
   EB97 F0                 2862 	movx	@dptr,a
                           2863 ;	../../shared/src/vdd_cal.c:285: case SELLV_RXEOMCLK:  reg_CALEN_VDDA_RXEOMCLK_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
   EB98 80 58              2864 	sjmp	00108$
   EB9A                    2865 00104$:
   EB9A 90 02 3C           2866 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_143
   EB9D E5 18              2867 	mov	a,_bp
   EB9F 24 FC              2868 	add	a,#0xfc
   EBA1 F8                 2869 	mov	r0,a
   EBA2 E6                 2870 	mov	a,@r0
   EBA3 13                 2871 	rrc	a
   EBA4 E0                 2872 	movx	a,@dptr
   EBA5 92 E6              2873 	mov	acc.6,c
   EBA7 F0                 2874 	movx	@dptr,a
   EBA8 90 00 60           2875 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   EBAB E5 18              2876 	mov	a,_bp
   EBAD 24 FC              2877 	add	a,#0xfc
   EBAF F8                 2878 	mov	r0,a
   EBB0 E6                 2879 	mov	a,@r0
   EBB1 13                 2880 	rrc	a
   EBB2 E0                 2881 	movx	a,@dptr
   EBB3 92 E2              2882 	mov	acc.2,c
   EBB5 F0                 2883 	movx	@dptr,a
                           2884 ;	../../shared/src/vdd_cal.c:286: case SELLV_RXDATACLK: reg_CALEN_VDDA_RXDATACLK_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
   EBB6 80 3A              2885 	sjmp	00108$
   EBB8                    2886 00105$:
   EBB8 90 02 3C           2887 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_143
   EBBB E5 18              2888 	mov	a,_bp
   EBBD 24 FC              2889 	add	a,#0xfc
   EBBF F8                 2890 	mov	r0,a
   EBC0 E6                 2891 	mov	a,@r0
   EBC1 13                 2892 	rrc	a
   EBC2 E0                 2893 	movx	a,@dptr
   EBC3 92 E7              2894 	mov	acc.7,c
   EBC5 F0                 2895 	movx	@dptr,a
   EBC6 90 00 60           2896 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   EBC9 E5 18              2897 	mov	a,_bp
   EBCB 24 FC              2898 	add	a,#0xfc
   EBCD F8                 2899 	mov	r0,a
   EBCE E6                 2900 	mov	a,@r0
   EBCF 13                 2901 	rrc	a
   EBD0 E0                 2902 	movx	a,@dptr
   EBD1 92 E2              2903 	mov	acc.2,c
   EBD3 F0                 2904 	movx	@dptr,a
                           2905 ;	../../shared/src/vdd_cal.c:287: case SELLV_RXSAMPLER: reg_CALEN_VDDA_RXSAMPLER_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
   EBD4 80 1C              2906 	sjmp	00108$
   EBD6                    2907 00106$:
   EBD6 90 02 38           2908 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_142
   EBD9 E5 18              2909 	mov	a,_bp
   EBDB 24 FC              2910 	add	a,#0xfc
   EBDD F8                 2911 	mov	r0,a
   EBDE E6                 2912 	mov	a,@r0
   EBDF 13                 2913 	rrc	a
   EBE0 E0                 2914 	movx	a,@dptr
   EBE1 92 E0              2915 	mov	acc.0,c
   EBE3 F0                 2916 	movx	@dptr,a
   EBE4 90 00 60           2917 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   EBE7 E5 18              2918 	mov	a,_bp
   EBE9 24 FC              2919 	add	a,#0xfc
   EBEB F8                 2920 	mov	r0,a
   EBEC E6                 2921 	mov	a,@r0
   EBED 13                 2922 	rrc	a
   EBEE E0                 2923 	movx	a,@dptr
   EBEF 92 E2              2924 	mov	acc.2,c
   EBF1 F0                 2925 	movx	@dptr,a
                           2926 ;	../../shared/src/vdd_cal.c:288: }	
   EBF2                    2927 00108$:
   EBF2 D0 18              2928 	pop	_bp
   EBF4 02 00 C5           2929 	ljmp	__sdcc_banked_ret
                           2930 ;------------------------------------------------------------
                           2931 ;Allocation info for local variables in function 'vdd_cal_set_pass'
                           2932 ;------------------------------------------------------------
                           2933 ;val                       Allocated to stack - offset -4
                           2934 ;sel                       Allocated to registers r2 
                           2935 ;------------------------------------------------------------
                           2936 ;	../../shared/src/vdd_cal.c:291: void vdd_cal_set_pass(uint8_t sel, uint8_t val ) BANKING_CTRL {
                           2937 ;	-----------------------------------------
                           2938 ;	 function vdd_cal_set_pass
                           2939 ;	-----------------------------------------
   EBF7                    2940 _vdd_cal_set_pass:
   EBF7 C0 18              2941 	push	_bp
   EBF9 85 81 18           2942 	mov	_bp,sp
   EBFC AA 82              2943 	mov	r2,dpl
                           2944 ;	../../shared/src/vdd_cal.c:292: switch(sel) {
   EBFE 74 05              2945 	mov	a,#0x05
   EC00 B5 02 00           2946 	cjne	a,ar2,00111$
   EC03                    2947 00111$:
   EC03 50 03              2948 	jnc	00112$
   EC05 02 EC 7F           2949 	ljmp	00108$
   EC08                    2950 00112$:
   EC08 EA                 2951 	mov	a,r2
   EC09 2A                 2952 	add	a,r2
   EC0A 2A                 2953 	add	a,r2
   EC0B 90 EC 0F           2954 	mov	dptr,#00113$
   EC0E 73                 2955 	jmp	@a+dptr
   EC0F                    2956 00113$:
   EC0F 02 EC 21           2957 	ljmp	00101$
   EC12 02 EC 31           2958 	ljmp	00102$
   EC15 02 EC 41           2959 	ljmp	00103$
   EC18 02 EC 51           2960 	ljmp	00104$
   EC1B 02 EC 61           2961 	ljmp	00105$
   EC1E 02 EC 71           2962 	ljmp	00106$
                           2963 ;	../../shared/src/vdd_cal.c:293: case SELLV_TXCLK:  lnx_SELLV_TXCLK_PASS_LANE = val;  break;
   EC21                    2964 00101$:
   EC21 90 60 06           2965 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   EC24 E5 18              2966 	mov	a,_bp
   EC26 24 FC              2967 	add	a,#0xfc
   EC28 F8                 2968 	mov	r0,a
   EC29 E6                 2969 	mov	a,@r0
   EC2A 13                 2970 	rrc	a
   EC2B E0                 2971 	movx	a,@dptr
   EC2C 92 E6              2972 	mov	acc.6,c
   EC2E F0                 2973 	movx	@dptr,a
                           2974 ;	../../shared/src/vdd_cal.c:294: case SELLV_TXDATA: lnx_SELLV_TXDATA_PASS_LANE = val;  break;
   EC2F 80 4E              2975 	sjmp	00108$
   EC31                    2976 00102$:
   EC31 90 60 06           2977 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   EC34 E5 18              2978 	mov	a,_bp
   EC36 24 FC              2979 	add	a,#0xfc
   EC38 F8                 2980 	mov	r0,a
   EC39 E6                 2981 	mov	a,@r0
   EC3A 13                 2982 	rrc	a
   EC3B E0                 2983 	movx	a,@dptr
   EC3C 92 E7              2984 	mov	acc.7,c
   EC3E F0                 2985 	movx	@dptr,a
                           2986 ;	../../shared/src/vdd_cal.c:295: case SELLV_TXPRE:  lnx_SELLV_TXPRE_PASS_LANE = val;  break;
   EC3F 80 3E              2987 	sjmp	00108$
   EC41                    2988 00103$:
   EC41 90 60 07           2989 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0003)
   EC44 E5 18              2990 	mov	a,_bp
   EC46 24 FC              2991 	add	a,#0xfc
   EC48 F8                 2992 	mov	r0,a
   EC49 E6                 2993 	mov	a,@r0
   EC4A 13                 2994 	rrc	a
   EC4B E0                 2995 	movx	a,@dptr
   EC4C 92 E0              2996 	mov	acc.0,c
   EC4E F0                 2997 	movx	@dptr,a
                           2998 ;	../../shared/src/vdd_cal.c:296: case SELLV_RXEOMCLK:  lnx_SELLV_RXEOMCLK_PASS_LANE = val;  break;
   EC4F 80 2E              2999 	sjmp	00108$
   EC51                    3000 00104$:
   EC51 90 60 07           3001 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0003)
   EC54 E5 18              3002 	mov	a,_bp
   EC56 24 FC              3003 	add	a,#0xfc
   EC58 F8                 3004 	mov	r0,a
   EC59 E6                 3005 	mov	a,@r0
   EC5A 13                 3006 	rrc	a
   EC5B E0                 3007 	movx	a,@dptr
   EC5C 92 E3              3008 	mov	acc.3,c
   EC5E F0                 3009 	movx	@dptr,a
                           3010 ;	../../shared/src/vdd_cal.c:297: case SELLV_RXDATACLK: lnx_SELLV_RXDATACLK_PASS_LANE = val;  break;
   EC5F 80 1E              3011 	sjmp	00108$
   EC61                    3012 00105$:
   EC61 90 60 07           3013 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0003)
   EC64 E5 18              3014 	mov	a,_bp
   EC66 24 FC              3015 	add	a,#0xfc
   EC68 F8                 3016 	mov	r0,a
   EC69 E6                 3017 	mov	a,@r0
   EC6A 13                 3018 	rrc	a
   EC6B E0                 3019 	movx	a,@dptr
   EC6C 92 E2              3020 	mov	acc.2,c
   EC6E F0                 3021 	movx	@dptr,a
                           3022 ;	../../shared/src/vdd_cal.c:298: case SELLV_RXSAMPLER: lnx_SELLV_RXSAMPLER_PASS_LANE = val;  break;
   EC6F 80 0E              3023 	sjmp	00108$
   EC71                    3024 00106$:
   EC71 90 60 07           3025 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0003)
   EC74 E5 18              3026 	mov	a,_bp
   EC76 24 FC              3027 	add	a,#0xfc
   EC78 F8                 3028 	mov	r0,a
   EC79 E6                 3029 	mov	a,@r0
   EC7A 13                 3030 	rrc	a
   EC7B E0                 3031 	movx	a,@dptr
   EC7C 92 E4              3032 	mov	acc.4,c
   EC7E F0                 3033 	movx	@dptr,a
                           3034 ;	../../shared/src/vdd_cal.c:299: }	
   EC7F                    3035 00108$:
   EC7F D0 18              3036 	pop	_bp
   EC81 02 00 C5           3037 	ljmp	__sdcc_banked_ret
                           3038 ;------------------------------------------------------------
                           3039 ;Allocation info for local variables in function 'vdd_cal_sel'
                           3040 ;------------------------------------------------------------
                           3041 ;sel                       Allocated to registers r2 
                           3042 ;cal_value                 Allocated to registers 
                           3043 ;pass                      Allocated to registers 
                           3044 ;------------------------------------------------------------
                           3045 ;	../../shared/src/vdd_cal.c:302: void vdd_cal_sel( uint8_t sel ) BANKING_CTRL {
                           3046 ;	-----------------------------------------
                           3047 ;	 function vdd_cal_sel
                           3048 ;	-----------------------------------------
   EC84                    3049 _vdd_cal_sel:
   EC84 AA 82              3050 	mov	r2,dpl
                           3051 ;	../../shared/src/vdd_cal.c:306: lnx_VDD_CAL_DONE_LANE = 0;
   EC86 90 60 01           3052 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   EC89 E0                 3053 	movx	a,@dptr
   EC8A 54 7F              3054 	anl	a,#0x7f
   EC8C F0                 3055 	movx	@dptr,a
                           3056 ;	../../shared/src/vdd_cal.c:308: if( cmx_VDD_CAL_EXT_EN ) {
   EC8D 90 E6 0A           3057 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   EC90 E0                 3058 	movx	a,@dptr
   EC91 30 E7 2A           3059 	jnb	acc.7,00102$
                           3060 ;	../../shared/src/vdd_cal.c:309: cal_value = get_vdd_cal(sel);
   EC94 8A 82              3061 	mov	dpl,r2
   EC96 C0 02              3062 	push	ar2
   EC98 78 61              3063 	mov	r0,#_get_vdd_cal
   EC9A 79 EA              3064 	mov	r1,#(_get_vdd_cal >> 8)
   EC9C 7A 02              3065 	mov	r2,#(_get_vdd_cal >> 16)
   EC9E 12 00 B3           3066 	lcall	__sdcc_banked_call
   ECA1 AB 82              3067 	mov	r3,dpl
   ECA3 D0 02              3068 	pop	ar2
                           3069 ;	../../shared/src/vdd_cal.c:310: set_vdd_cal(sel, cal_value);
   ECA5 C0 03              3070 	push	ar3
   ECA7 8A 82              3071 	mov	dpl,r2
   ECA9 78 76              3072 	mov	r0,#_set_vdd_cal
   ECAB 79 E7              3073 	mov	r1,#(_set_vdd_cal >> 8)
   ECAD 7A 02              3074 	mov	r2,#(_set_vdd_cal >> 16)
   ECAF 12 00 B3           3075 	lcall	__sdcc_banked_call
   ECB2 15 81              3076 	dec	sp
                           3077 ;	../../shared/src/vdd_cal.c:311: lnx_VDD_CAL_DONE_LANE = 1;
   ECB4 90 60 01           3078 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   ECB7 E0                 3079 	movx	a,@dptr
   ECB8 44 80              3080 	orl	a,#0x80
   ECBA F0                 3081 	movx	@dptr,a
                           3082 ;	../../shared/src/vdd_cal.c:312: return;
   ECBB 02 ED 46           3083 	ljmp	00111$
   ECBE                    3084 00102$:
                           3085 ;	../../shared/src/vdd_cal.c:316: if ( cont_cal_on == 1 ) {
   ECBE 30 16 28           3086 	jnb	_cont_cal_on,00110$
                           3087 ;	../../shared/src/vdd_cal.c:317: if( sel<=SELLV_TXPRE && (/*PU_TX == 1 0 ||*/ ANA_IDLE == 1))
   ECC1 74 02              3088 	mov	a,#0x02
   ECC3 B5 02 00           3089 	cjne	a,ar2,00121$
   ECC6                    3090 00121$:
   ECC6 E4                 3091 	clr	a
   ECC7 33                 3092 	rlc	a
   ECC8 FB                 3093 	mov	r3,a
   ECC9 70 0E              3094 	jnz	00104$
   ECCB 90 20 07           3095 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   ECCE E0                 3096 	movx	a,@dptr
   ECCF 03                 3097 	rr	a
   ECD0 03                 3098 	rr	a
   ECD1 54 01              3099 	anl	a,#0x01
   ECD3 FC                 3100 	mov	r4,a
   ECD4 BC 01 02           3101 	cjne	r4,#0x01,00104$
                           3102 ;	../../shared/src/vdd_cal.c:318: return;
   ECD7 80 6D              3103 	sjmp	00111$
   ECD9                    3104 00104$:
                           3105 ;	../../shared/src/vdd_cal.c:319: if( sel>SELLV_TXPRE && (/*PU_RX == 1 0 ||*/ SQ_OUT == 1))
   ECD9 EB                 3106 	mov	a,r3
   ECDA 60 0D              3107 	jz	00110$
   ECDC 90 21 50           3108 	mov	dptr,#_RX_CALIBRATION_REG
   ECDF E0                 3109 	movx	a,@dptr
   ECE0 C4                 3110 	swap	a
   ECE1 54 01              3111 	anl	a,#0x01
   ECE3 FB                 3112 	mov	r3,a
   ECE4 BB 01 02           3113 	cjne	r3,#0x01,00110$
                           3114 ;	../../shared/src/vdd_cal.c:320: return;
   ECE7 80 5D              3115 	sjmp	00111$
   ECE9                    3116 00110$:
                           3117 ;	../../shared/src/vdd_cal.c:323: PHY_STATUS = ST_VDD_CAL;
   ECE9 90 22 30           3118 	mov	dptr,#_MCU_STATUS0_LANE
   ECEC 74 07              3119 	mov	a,#0x07
   ECEE F0                 3120 	movx	@dptr,a
                           3121 ;	../../shared/src/vdd_cal.c:328: TRXDCCIN_SEL = 0;
   ECEF 90 00 44           3122 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   ECF2 E0                 3123 	movx	a,@dptr
   ECF3 54 1F              3124 	anl	a,#0x1f
   ECF5 F0                 3125 	movx	@dptr,a
                           3126 ;	../../shared/src/vdd_cal.c:329: vdd_cal_calen(sel,1);
   ECF6 C0 02              3127 	push	ar2
   ECF8 74 01              3128 	mov	a,#0x01
   ECFA C0 E0              3129 	push	acc
   ECFC 8A 82              3130 	mov	dpl,r2
   ECFE 78 40              3131 	mov	r0,#_vdd_cal_calen
   ED00 79 EB              3132 	mov	r1,#(_vdd_cal_calen >> 8)
   ED02 7A 02              3133 	mov	r2,#(_vdd_cal_calen >> 16)
   ED04 12 00 B3           3134 	lcall	__sdcc_banked_call
   ED07 15 81              3135 	dec	sp
   ED09 D0 02              3136 	pop	ar2
                           3137 ;	../../shared/src/vdd_cal.c:331: pass = vdd_cal_op(sel);
   ED0B 8A 82              3138 	mov	dpl,r2
   ED0D C0 02              3139 	push	ar2
   ED0F 78 49              3140 	mov	r0,#_vdd_cal_op
   ED11 79 ED              3141 	mov	r1,#(_vdd_cal_op >> 8)
   ED13 7A 02              3142 	mov	r2,#(_vdd_cal_op >> 16)
   ED15 12 00 B3           3143 	lcall	__sdcc_banked_call
   ED18 AB 82              3144 	mov	r3,dpl
   ED1A D0 02              3145 	pop	ar2
                           3146 ;	../../shared/src/vdd_cal.c:333: vdd_cal_set_pass(sel, pass);
   ED1C C0 02              3147 	push	ar2
   ED1E C0 03              3148 	push	ar3
   ED20 8A 82              3149 	mov	dpl,r2
   ED22 78 F7              3150 	mov	r0,#_vdd_cal_set_pass
   ED24 79 EB              3151 	mov	r1,#(_vdd_cal_set_pass >> 8)
   ED26 7A 02              3152 	mov	r2,#(_vdd_cal_set_pass >> 16)
   ED28 12 00 B3           3153 	lcall	__sdcc_banked_call
   ED2B 15 81              3154 	dec	sp
   ED2D D0 02              3155 	pop	ar2
                           3156 ;	../../shared/src/vdd_cal.c:334: vdd_cal_calen(sel,0);
   ED2F E4                 3157 	clr	a
   ED30 C0 E0              3158 	push	acc
   ED32 8A 82              3159 	mov	dpl,r2
   ED34 78 40              3160 	mov	r0,#_vdd_cal_calen
   ED36 79 EB              3161 	mov	r1,#(_vdd_cal_calen >> 8)
   ED38 7A 02              3162 	mov	r2,#(_vdd_cal_calen >> 16)
   ED3A 12 00 B3           3163 	lcall	__sdcc_banked_call
   ED3D 15 81              3164 	dec	sp
                           3165 ;	../../shared/src/vdd_cal.c:337: lnx_VDD_CAL_DONE_LANE = 1;
   ED3F 90 60 01           3166 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   ED42 E0                 3167 	movx	a,@dptr
   ED43 44 80              3168 	orl	a,#0x80
   ED45 F0                 3169 	movx	@dptr,a
   ED46                    3170 00111$:
   ED46 02 00 C5           3171 	ljmp	__sdcc_banked_ret
                           3172 ;------------------------------------------------------------
                           3173 ;Allocation info for local variables in function 'vdd_cal_op'
                           3174 ;------------------------------------------------------------
                           3175 ;sel                       Allocated to registers r2 
                           3176 ;op_done                   Allocated to registers r3 
                           3177 ;done_ptn                  Allocated to registers r4 
                           3178 ;run_cnt                   Allocated to registers r6 
                           3179 ;cal_value                 Allocated to registers r5 
                           3180 ;------------------------------------------------------------
                           3181 ;	../../shared/src/vdd_cal.c:341: bool vdd_cal_op (uint8_t sel ) BANKING_CTRL
                           3182 ;	-----------------------------------------
                           3183 ;	 function vdd_cal_op
                           3184 ;	-----------------------------------------
   ED49                    3185 _vdd_cal_op:
   ED49 AA 82              3186 	mov	r2,dpl
                           3187 ;	../../shared/src/vdd_cal.c:346: delay01(10);
   ED4B 90 00 0A           3188 	mov	dptr,#0x000A
   ED4E C0 02              3189 	push	ar2
   ED50 78 16              3190 	mov	r0,#_delay01
   ED52 79 BC              3191 	mov	r1,#(_delay01 >> 8)
   ED54 7A 02              3192 	mov	r2,#(_delay01 >> 16)
   ED56 12 00 B3           3193 	lcall	__sdcc_banked_call
   ED59 D0 02              3194 	pop	ar2
                           3195 ;	../../shared/src/vdd_cal.c:348: op_done =	0;
   ED5B 7B 00              3196 	mov	r3,#0x00
                           3197 ;	../../shared/src/vdd_cal.c:349: done_ptn=	0;
   ED5D 7C 00              3198 	mov	r4,#0x00
                           3199 ;	../../shared/src/vdd_cal.c:351: if (!cont_cal_on) //one time
   ED5F 20 16 4B           3200 	jb	_cont_cal_on,00102$
                           3201 ;	../../shared/src/vdd_cal.c:353: cal_value = tag_sellv_xx_default;
   ED62 7D 08              3202 	mov	r5,#0x08
                           3203 ;	../../shared/src/vdd_cal.c:354: set_vdd_cal(sel, tag_sellv_xx_default);
   ED64 C0 02              3204 	push	ar2
   ED66 C0 03              3205 	push	ar3
   ED68 C0 04              3206 	push	ar4
   ED6A C0 05              3207 	push	ar5
   ED6C 74 08              3208 	mov	a,#0x08
   ED6E C0 E0              3209 	push	acc
   ED70 8A 82              3210 	mov	dpl,r2
   ED72 78 76              3211 	mov	r0,#_set_vdd_cal
   ED74 79 E7              3212 	mov	r1,#(_set_vdd_cal >> 8)
   ED76 7A 02              3213 	mov	r2,#(_set_vdd_cal >> 16)
   ED78 12 00 B3           3214 	lcall	__sdcc_banked_call
   ED7B 15 81              3215 	dec	sp
                           3216 ;	../../shared/src/vdd_cal.c:356: TXDCC_CLK = 1;
   ED7D 90 02 20           3217 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   ED80 E0                 3218 	movx	a,@dptr
   ED81 44 01              3219 	orl	a,#0x01
   ED83 F0                 3220 	movx	@dptr,a
                           3221 ;	../../shared/src/vdd_cal.c:358: delay01(150);
   ED84 90 00 96           3222 	mov	dptr,#0x0096
   ED87 78 16              3223 	mov	r0,#_delay01
   ED89 79 BC              3224 	mov	r1,#(_delay01 >> 8)
   ED8B 7A 02              3225 	mov	r2,#(_delay01 >> 16)
   ED8D 12 00 B3           3226 	lcall	__sdcc_banked_call
                           3227 ;	../../shared/src/vdd_cal.c:359: TXDCC_CLK = 0;
   ED90 90 02 20           3228 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   ED93 E0                 3229 	movx	a,@dptr
   ED94 54 FE              3230 	anl	a,#0xfe
   ED96 F0                 3231 	movx	@dptr,a
                           3232 ;	../../shared/src/vdd_cal.c:361: delay01(150);
   ED97 90 00 96           3233 	mov	dptr,#0x0096
   ED9A 78 16              3234 	mov	r0,#_delay01
   ED9C 79 BC              3235 	mov	r1,#(_delay01 >> 8)
   ED9E 7A 02              3236 	mov	r2,#(_delay01 >> 16)
   EDA0 12 00 B3           3237 	lcall	__sdcc_banked_call
   EDA3 D0 05              3238 	pop	ar5
   EDA5 D0 04              3239 	pop	ar4
   EDA7 D0 03              3240 	pop	ar3
   EDA9 D0 02              3241 	pop	ar2
   EDAB 80 1B              3242 	sjmp	00132$
   EDAD                    3243 00102$:
                           3244 ;	../../shared/src/vdd_cal.c:364: cal_value = get_vdd_cal(sel);
   EDAD 8A 82              3245 	mov	dpl,r2
   EDAF C0 02              3246 	push	ar2
   EDB1 C0 03              3247 	push	ar3
   EDB3 C0 04              3248 	push	ar4
   EDB5 78 61              3249 	mov	r0,#_get_vdd_cal
   EDB7 79 EA              3250 	mov	r1,#(_get_vdd_cal >> 8)
   EDB9 7A 02              3251 	mov	r2,#(_get_vdd_cal >> 16)
   EDBB 12 00 B3           3252 	lcall	__sdcc_banked_call
   EDBE AE 82              3253 	mov	r6,dpl
   EDC0 D0 04              3254 	pop	ar4
   EDC2 D0 03              3255 	pop	ar3
   EDC4 D0 02              3256 	pop	ar2
   EDC6 8E 05              3257 	mov	ar5,r6
                           3258 ;	../../shared/src/vdd_cal.c:367: while (op_done == 0) {
   EDC8                    3259 00132$:
   EDC8 7E 00              3260 	mov	r6,#0x00
   EDCA                    3261 00117$:
                           3262 ;	../../shared/src/vdd_cal.c:369: done_ptn <<= 1;
   EDCA EC                 3263 	mov	a,r4
   EDCB 2C                 3264 	add	a,r4
   EDCC FC                 3265 	mov	r4,a
                           3266 ;	../../shared/src/vdd_cal.c:370: set_vdd_cal(sel, cal_value);
   EDCD C0 02              3267 	push	ar2
   EDCF C0 03              3268 	push	ar3
   EDD1 C0 04              3269 	push	ar4
   EDD3 C0 05              3270 	push	ar5
   EDD5 C0 06              3271 	push	ar6
   EDD7 C0 05              3272 	push	ar5
   EDD9 8A 82              3273 	mov	dpl,r2
   EDDB 78 76              3274 	mov	r0,#_set_vdd_cal
   EDDD 79 E7              3275 	mov	r1,#(_set_vdd_cal >> 8)
   EDDF 7A 02              3276 	mov	r2,#(_set_vdd_cal >> 16)
   EDE1 12 00 B3           3277 	lcall	__sdcc_banked_call
   EDE4 15 81              3278 	dec	sp
                           3279 ;	../../shared/src/vdd_cal.c:372: TXDCC_CLK = 1;
   EDE6 90 02 20           3280 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   EDE9 E0                 3281 	movx	a,@dptr
   EDEA 44 01              3282 	orl	a,#0x01
   EDEC F0                 3283 	movx	@dptr,a
                           3284 ;	../../shared/src/vdd_cal.c:374: delay01(150);
   EDED 90 00 96           3285 	mov	dptr,#0x0096
   EDF0 78 16              3286 	mov	r0,#_delay01
   EDF2 79 BC              3287 	mov	r1,#(_delay01 >> 8)
   EDF4 7A 02              3288 	mov	r2,#(_delay01 >> 16)
   EDF6 12 00 B3           3289 	lcall	__sdcc_banked_call
                           3290 ;	../../shared/src/vdd_cal.c:375: TXDCC_CLK = 0;
   EDF9 90 02 20           3291 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   EDFC E0                 3292 	movx	a,@dptr
   EDFD 54 FE              3293 	anl	a,#0xfe
   EDFF F0                 3294 	movx	@dptr,a
                           3295 ;	../../shared/src/vdd_cal.c:377: delay01(150);
   EE00 90 00 96           3296 	mov	dptr,#0x0096
   EE03 78 16              3297 	mov	r0,#_delay01
   EE05 79 BC              3298 	mov	r1,#(_delay01 >> 8)
   EE07 7A 02              3299 	mov	r2,#(_delay01 >> 16)
   EE09 12 00 B3           3300 	lcall	__sdcc_banked_call
   EE0C D0 06              3301 	pop	ar6
   EE0E D0 05              3302 	pop	ar5
   EE10 D0 04              3303 	pop	ar4
   EE12 D0 03              3304 	pop	ar3
   EE14 D0 02              3305 	pop	ar2
                           3306 ;	../../shared/src/vdd_cal.c:379: if(HIVDDR == 1) {
   EE16 90 20 40           3307 	mov	dptr,#_TX_CALIBRATION_LANE
   EE19 E0                 3308 	movx	a,@dptr
   EE1A 54 01              3309 	anl	a,#0x01
   EE1C FF                 3310 	mov	r7,a
   EE1D BF 01 09           3311 	cjne	r7,#0x01,00109$
                           3312 ;	../../shared/src/vdd_cal.c:380: done_ptn |= 0x01;
   EE20 43 04 01           3313 	orl	ar4,#0x01
                           3314 ;	../../shared/src/vdd_cal.c:381: if (cal_value > tag_MIN_VALUE ) cal_value--;
   EE23 ED                 3315 	mov	a,r5
   EE24 60 09              3316 	jz	00110$
   EE26 1D                 3317 	dec	r5
   EE27 80 06              3318 	sjmp	00110$
   EE29                    3319 00109$:
                           3320 ;	../../shared/src/vdd_cal.c:384: if (cal_value < tag_MAX_VALUE) cal_value++;
   EE29 BD 0F 00           3321 	cjne	r5,#0x0F,00138$
   EE2C                    3322 00138$:
   EE2C 50 01              3323 	jnc	00110$
   EE2E 0D                 3324 	inc	r5
   EE2F                    3325 00110$:
                           3326 ;	../../shared/src/vdd_cal.c:387: done_ptn &= 0x0f;
   EE2F 53 04 0F           3327 	anl	ar4,#0x0F
                           3328 ;	../../shared/src/vdd_cal.c:388: if ((done_ptn == 0xa) || (done_ptn == 0x5)) {op_done = 1; break;}
   EE32 BC 0A 02           3329 	cjne	r4,#0x0A,00140$
   EE35 80 03              3330 	sjmp	00111$
   EE37                    3331 00140$:
   EE37 BC 05 04           3332 	cjne	r4,#0x05,00112$
   EE3A                    3333 00111$:
   EE3A 7B 01              3334 	mov	r3,#0x01
   EE3C 80 0C              3335 	sjmp	00119$
   EE3E                    3336 00112$:
                           3337 ;	../../shared/src/vdd_cal.c:389: if ((cont_cal_on) || (run_cnt >= tag_MAX_RUN)) {break;}
   EE3E 20 16 09           3338 	jb	_cont_cal_on,00119$
   EE41 BE 20 00           3339 	cjne	r6,#0x20,00144$
   EE44                    3340 00144$:
   EE44 50 04              3341 	jnc	00119$
                           3342 ;	../../shared/src/vdd_cal.c:392: run_cnt++;
   EE46 0E                 3343 	inc	r6
   EE47 02 ED CA           3344 	ljmp	00117$
   EE4A                    3345 00119$:
                           3346 ;	../../shared/src/vdd_cal.c:395: save_vdd_cal(sel, cont_cal_on, cal_value);
   EE4A C0 02              3347 	push	ar2
   EE4C C0 03              3348 	push	ar3
   EE4E C0 05              3349 	push	ar5
   EE50 C0 05              3350 	push	ar5
   EE52 A2 16              3351 	mov	c,_cont_cal_on
   EE54 E4                 3352 	clr	a
   EE55 33                 3353 	rlc	a
   EE56 C0 E0              3354 	push	acc
   EE58 8A 82              3355 	mov	dpl,r2
   EE5A 78 6D              3356 	mov	r0,#_save_vdd_cal
   EE5C 79 E9              3357 	mov	r1,#(_save_vdd_cal >> 8)
   EE5E 7A 02              3358 	mov	r2,#(_save_vdd_cal >> 16)
   EE60 12 00 B3           3359 	lcall	__sdcc_banked_call
   EE63 15 81              3360 	dec	sp
   EE65 15 81              3361 	dec	sp
   EE67 D0 05              3362 	pop	ar5
   EE69 D0 03              3363 	pop	ar3
   EE6B D0 02              3364 	pop	ar2
                           3365 ;	../../shared/src/vdd_cal.c:396: if(!cont_cal_on) save_vdd_cal(sel, 1, cal_value);
   EE6D 20 16 19           3366 	jb	_cont_cal_on,00121$
   EE70 C0 03              3367 	push	ar3
   EE72 C0 05              3368 	push	ar5
   EE74 74 01              3369 	mov	a,#0x01
   EE76 C0 E0              3370 	push	acc
   EE78 8A 82              3371 	mov	dpl,r2
   EE7A 78 6D              3372 	mov	r0,#_save_vdd_cal
   EE7C 79 E9              3373 	mov	r1,#(_save_vdd_cal >> 8)
   EE7E 7A 02              3374 	mov	r2,#(_save_vdd_cal >> 16)
   EE80 12 00 B3           3375 	lcall	__sdcc_banked_call
   EE83 15 81              3376 	dec	sp
   EE85 15 81              3377 	dec	sp
   EE87 D0 03              3378 	pop	ar3
   EE89                    3379 00121$:
                           3380 ;	../../shared/src/vdd_cal.c:398: return op_done;
   EE89 8B 82              3381 	mov	dpl,r3
   EE8B 02 00 C5           3382 	ljmp	__sdcc_banked_ret
                           3383 	.area CSEG    (CODE)
                           3384 	.area BANK2   (CODE)
                           3385 	.area CABS    (ABS,CODE)
