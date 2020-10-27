                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:58 2018
                              5 ;--------------------------------------------------------
                              6 	.module interrupt
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _valid_coe_tbl
                             13 	.globl _uart0_isr
                             14 	.globl _int4_isr
                             15 	.globl _int12_isr
                             16 	.globl _int6_isr
                             17 	.globl _int7_isr
                             18 	.globl _int10_isr
                             19 	.globl _int5_isr
                             20 	.globl _int11_isr
                             21 	.globl _int2_isr
                             22 	.globl _int9_isr
                             23 	.globl _int8_isr
                             24 	.globl _int1_isr
                             25 	.globl _int3_isr
                             26 	.globl _int0_isr
                             27 	.globl _timer2_isr
                             28 	.globl _timer1_isr
                             29 	.globl _timer0_isr
                             30 	.globl _TF2
                             31 	.globl _TI
                             32 	.globl _RI
                             33 	.globl _EX12
                             34 	.globl _EX11
                             35 	.globl _EX10
                             36 	.globl _EX9
                             37 	.globl _EX8
                             38 	.globl _ES1
                             39 	.globl _PS1
                             40 	.globl _EX6
                             41 	.globl _EX5
                             42 	.globl _EX4
                             43 	.globl _EX3
                             44 	.globl _EX2
                             45 	.globl _EX7
                             46 	.globl _EA
                             47 	.globl _WDT
                             48 	.globl _ET2
                             49 	.globl _ES
                             50 	.globl _ET1
                             51 	.globl _EX1
                             52 	.globl _ET0
                             53 	.globl _EX0
                             54 	.globl _TF1
                             55 	.globl _TR1
                             56 	.globl _TF0
                             57 	.globl _TR0
                             58 	.globl _IE1
                             59 	.globl _IT1
                             60 	.globl _IE0
                             61 	.globl _IT0
                             62 	.globl _P3_7
                             63 	.globl _P3_6
                             64 	.globl _P3_5
                             65 	.globl _P3_4
                             66 	.globl _P3_3
                             67 	.globl _P3_2
                             68 	.globl _P3_1
                             69 	.globl _P3_0
                             70 	.globl _P2_7
                             71 	.globl _P2_6
                             72 	.globl _P2_5
                             73 	.globl _P2_4
                             74 	.globl _P2_3
                             75 	.globl _P2_2
                             76 	.globl _P2_1
                             77 	.globl _P2_0
                             78 	.globl _P1_7
                             79 	.globl _P1_6
                             80 	.globl _P1_5
                             81 	.globl _P1_4
                             82 	.globl _P1_3
                             83 	.globl _P1_2
                             84 	.globl _P1_1
                             85 	.globl _P1_0
                             86 	.globl _P0_7
                             87 	.globl _P0_6
                             88 	.globl _P0_5
                             89 	.globl _P0_4
                             90 	.globl _P0_3
                             91 	.globl _P0_2
                             92 	.globl _P0_1
                             93 	.globl _P0_0
                             94 	.globl _DMAC
                             95 	.globl _DMATA
                             96 	.globl _DMASA
                             97 	.globl _TMR2
                             98 	.globl _TMR1
                             99 	.globl _TMR0
                            100 	.globl _SRST
                            101 	.globl _B
                            102 	.globl _EIE
                            103 	.globl _ACC
                            104 	.globl _ADCON
                            105 	.globl _PSW
                            106 	.globl _TH2
                            107 	.globl _TL2
                            108 	.globl _RCAP2H
                            109 	.globl _RCAP2L
                            110 	.globl _T2CON
                            111 	.globl _CCEN
                            112 	.globl _IRCON
                            113 	.globl _S0RELH
                            114 	.globl _IP1
                            115 	.globl _IEN1
                            116 	.globl _DMAM1
                            117 	.globl _DMAM0
                            118 	.globl _DMASEL
                            119 	.globl _DMAC2
                            120 	.globl _DMAC1
                            121 	.globl _DMAC0
                            122 	.globl _P3
                            123 	.globl _S0RELL
                            124 	.globl _IP0
                            125 	.globl _IEN0
                            126 	.globl _DMAT2
                            127 	.globl _DMAT1
                            128 	.globl _DMAT0
                            129 	.globl _DMAS2
                            130 	.globl _DMAS1
                            131 	.globl _DMAS0
                            132 	.globl _P2
                            133 	.globl _IEN2
                            134 	.globl _SBUF
                            135 	.globl _SCON
                            136 	.globl _PSBANK
                            137 	.globl _DPS
                            138 	.globl _P1
                            139 	.globl _CKCON
                            140 	.globl _TH1
                            141 	.globl _TH0
                            142 	.globl _TL1
                            143 	.globl _TL0
                            144 	.globl _TMOD
                            145 	.globl _TCON
                            146 	.globl _PCON
                            147 	.globl _WDTREL
                            148 	.globl _DPH
                            149 	.globl _DPL
                            150 	.globl _P0
                            151 	.globl _sq_thrs_ratio_tb
                            152 	.globl _train_save_tb
                            153 	.globl _tx_tb
                            154 	.globl _UPHY_ANAREG_REV_0
                            155 	.globl _dfe_sm_save
                            156 	.globl _dfe_sm_dc
                            157 	.globl _dfe_sm
                            158 	.globl _cds28
                            159 	.globl _lnx_calx_align90_gm
                            160 	.globl _lnx_calx_align90_dac
                            161 	.globl _lnx_calx_align90_dummy_clk
                            162 	.globl _lnx_calx_eom_dpher
                            163 	.globl _lnx_calx_vdda_dll_eom_sel
                            164 	.globl _lnx_calx_dll_eom_gmsel
                            165 	.globl _lnx_calx_vdda_dll_sel
                            166 	.globl _lnx_calx_dll_gmsel
                            167 	.globl _lnx_calx_rxdcc_dll_hg
                            168 	.globl _lnx_calx_rxdcc_dll
                            169 	.globl _lnx_calx_txdcc_hg
                            170 	.globl _lnx_calx_txdcc
                            171 	.globl _lnx_calx_txdcc_pdiv_hg
                            172 	.globl _lnx_calx_txdcc_pdiv
                            173 	.globl _lnx_spdoft_tx_preset_index_lane
                            174 	.globl _lnx_cal_sellv_rxeomclk
                            175 	.globl _lnx_cal_sellv_rxsampler
                            176 	.globl _lnx_cal_sellv_txpre
                            177 	.globl _lnx_cal_sellv_rxdataclk
                            178 	.globl _lnx_cal_sellv_txclk
                            179 	.globl _lnx_cal_sellv_txdata
                            180 	.globl _lnx_cal_align90_gm
                            181 	.globl _lnx_cal_align90_dac
                            182 	.globl _lnx_cal_align90_dummy_clk
                            183 	.globl _lnx_cal_eom_dpher
                            184 	.globl _lnx_cal_vdda_dll_eom_sel
                            185 	.globl _lnx_cal_dll_eom_gmsel
                            186 	.globl _lnx_cal_vdda_dll_sel
                            187 	.globl _lnx_cal_dll_gmsel
                            188 	.globl _lnx_cal_rxdcc_eom_hg
                            189 	.globl _lnx_cal_rxdcc_eom
                            190 	.globl _lnx_cal_rxdcc_data_hg
                            191 	.globl _lnx_cal_rxdcc_data
                            192 	.globl _lnx_cal_rxdcc_dll_hg
                            193 	.globl _lnx_cal_rxdcc_dll
                            194 	.globl _lnx_cal_txdcc_hg
                            195 	.globl _lnx_cal_txdcc
                            196 	.globl _lnx_cal_txdcc_pdiv_hg
                            197 	.globl _lnx_cal_txdcc_pdiv
                            198 	.globl _cmx_cal_sllp_dac_fine_ring
                            199 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            200 	.globl _cmx_cal_pll_speed_ring
                            201 	.globl _cmx_cal_plldcc
                            202 	.globl _cmx_cal_lccap_lsb
                            203 	.globl _cmx_cal_lccap_msb
                            204 	.globl _cmx_cal_lcvco_dac_msb
                            205 	.globl _cmx_cal_lcvco_dac_lsb
                            206 	.globl _cmx_cal_lcvco_dac
                            207 	.globl _local_tx_preset_tb
                            208 	.globl _train_g0_index
                            209 	.globl _train_g1_index
                            210 	.globl _train_gn1_index
                            211 	.globl _phase_save
                            212 	.globl _txffe_save
                            213 	.globl _rc_save
                            214 	.globl _phy_mode_lane_table
                            215 	.globl _speedtable
                            216 	.globl _min_gen
                            217 	.globl _max_gen
                            218 	.globl _phy_mode_cmn_table
                            219 	.globl _ring_speedtable
                            220 	.globl _lc_speedtable
                            221 	.globl _TXTRAIN_IF_REG0
                            222 	.globl _CDS_READ_MISC1
                            223 	.globl _CDS_READ_MISC0
                            224 	.globl _DFE_READ_F0D_RIGHT_ODD
                            225 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            226 	.globl _DFE_READ_F0D_LEFT_ODD
                            227 	.globl _DFE_READ_F0D_LEFT_EVEN
                            228 	.globl _DFE_READ_F0D_ODD
                            229 	.globl _DFE_READ_F0D_EVEN
                            230 	.globl _DFE_READ_F0B_ODD
                            231 	.globl _DFE_READ_F0B_EVEN
                            232 	.globl _DFE_READ_F0A_ODD
                            233 	.globl _DFE_READ_F0A_EVEN
                            234 	.globl _DFE_READ_ODD_REG8
                            235 	.globl _DFE_READ_EVEN_REG8
                            236 	.globl _DFE_READ_ODD_REG7
                            237 	.globl _DFE_READ_ODD_REG6
                            238 	.globl _DFE_READ_ODD_REG5
                            239 	.globl _DFE_READ_ODD_REG4
                            240 	.globl _DFE_READ_ODD_REG3
                            241 	.globl _DFE_READ_ODD_REG2
                            242 	.globl _DFE_READ_ODD_REG1
                            243 	.globl _DFE_READ_ODD_REG0
                            244 	.globl _DFE_READ_EVEN_REG7
                            245 	.globl _DFE_READ_EVEN_REG6
                            246 	.globl _DFE_READ_EVEN_REG5
                            247 	.globl _DFE_READ_EVEN_REG4
                            248 	.globl _DFE_READ_EVEN_REG3
                            249 	.globl _DFE_READ_EVEN_REG2
                            250 	.globl _DFE_READ_EVEN_REG1
                            251 	.globl _DFE_READ_EVEN_REG0
                            252 	.globl _TX_TRAIN_IF_REG8
                            253 	.globl _TX_TRAIN_CTRL_LANE
                            254 	.globl _TX_TRAIN_IF_REG7
                            255 	.globl _TX_TRAIN_IF_REG6
                            256 	.globl _TX_TRAIN_IF_REG5
                            257 	.globl _TX_TRAIN_IF_REG4
                            258 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            259 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            260 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            261 	.globl _TX_AMP_CTRL_REG0
                            262 	.globl _TX_DRV_RD_OUT_REG0
                            263 	.globl _LINK_TRAIN_MODE0
                            264 	.globl _TX_EMPH_CTRL_REG0
                            265 	.globl _TX_TRAIN_DEFAULT_REG5
                            266 	.globl _TX_TRAIN_DEFAULT_REG4
                            267 	.globl _TX_TRAIN_DEFAULT_REG3
                            268 	.globl _TX_TRAIN_DEFAULT_REG2
                            269 	.globl _TX_TRAIN_DEFAULT_REG1
                            270 	.globl _TX_TRAIN_DEFAULT_REG0
                            271 	.globl _TX_TRAIN_DRIVER_REG2
                            272 	.globl _TX_TRAIN_DRIVER_REG1
                            273 	.globl _TX_TRAIN_DRIVER_REG0
                            274 	.globl _TX_TRAIN_PATTTERN_REG0
                            275 	.globl _TX_TRAIN_IF_REG3
                            276 	.globl _TX_TRAIN_IF_REG2
                            277 	.globl _TX_TRAIN_IF_REG1
                            278 	.globl _TX_TRAIN_IF_REG0
                            279 	.globl _DME_DEC_REG1
                            280 	.globl _DME_DEC_REG0
                            281 	.globl _DME_ENC_REG2
                            282 	.globl _DME_ENC_REG1
                            283 	.globl _DME_ENC_REG0
                            284 	.globl _END_XDAT_CMN
                            285 	.globl _MCU_INFO_13
                            286 	.globl _MCU_INFO_12
                            287 	.globl _MCU_INFO_5
                            288 	.globl _MCU_INFO_4
                            289 	.globl _SYNC_INFO
                            290 	.globl _CDS_EYE_CLK_THR
                            291 	.globl _TX_SAVE_4
                            292 	.globl _TX_SAVE_3
                            293 	.globl _TX_SAVE_2
                            294 	.globl _TX_SAVE_1
                            295 	.globl _TX_SAVE_0
                            296 	.globl _ETH_PRESET1_TB
                            297 	.globl _ETH_PRESET0_TB
                            298 	.globl _SAS_PRESET2_TB
                            299 	.globl _SAS_PRESET1_TB
                            300 	.globl _SAS_PRESET0_TB
                            301 	.globl _G_SELLV_RXSAMPLER
                            302 	.globl _G_SELLV_RXDATACLK
                            303 	.globl _G_SELLV_RXEOMCLK
                            304 	.globl _G_SELLV_TXPRE
                            305 	.globl _G_SELLV_TXDATA
                            306 	.globl _G_SELLV_TXCLK
                            307 	.globl _TIMER_SEL3
                            308 	.globl _TIMER_SEL2
                            309 	.globl _TIMER_SEL1
                            310 	.globl _MCU_CONFIG1
                            311 	.globl _LOOP_CNTS
                            312 	.globl _CAL_DATA1
                            313 	.globl _MCU_CONFIG
                            314 	.globl _CAL_STATUS_READ
                            315 	.globl _CAL_TIME_OUT_AND_DIS
                            316 	.globl _CON_CAL_STEP_SIZE5
                            317 	.globl _CON_CAL_STEP_SIZE4
                            318 	.globl _CON_CAL_STEP_SIZE3
                            319 	.globl _CON_CAL_STEP_SIZE2
                            320 	.globl _CON_CAL_STEP_SIZE1
                            321 	.globl _CONTROL_CONFIG9
                            322 	.globl _CONTROL_CONFIG8
                            323 	.globl _TRAIN_IF_CONFIG
                            324 	.globl _CAL_DATA0
                            325 	.globl _CONTROL_CONFIG7
                            326 	.globl _CONTROL_CONFIG6
                            327 	.globl _CONTROL_CONFIG5
                            328 	.globl _CONTROL_CONFIG4
                            329 	.globl _CONTROL_CONFIG3
                            330 	.globl _CONTROL_CONFIG2
                            331 	.globl _CONTROL_CONFIG1
                            332 	.globl _CONTROL_CONFIG0
                            333 	.globl _FW_REV
                            334 	.globl _CID_REG1
                            335 	.globl _CID_REG0
                            336 	.globl _CMN_MCU_REG
                            337 	.globl _SET_LANE_ISR
                            338 	.globl _CMN_ISR_MASK_1
                            339 	.globl _CMN_ISR_1
                            340 	.globl _CMN_MCU_TIMER3_CONTROL
                            341 	.globl _CMN_MCU_TIMER2_CONTROL
                            342 	.globl _CMN_MCU_TIMER1_CONTROL
                            343 	.globl _CMN_MCU_TIMER0_CONTROL
                            344 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            345 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            346 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            347 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            348 	.globl _CMN_MCU_TIMER_CONTROL
                            349 	.globl _CMN_CACHE_DEBUG1
                            350 	.globl _CMN_MCU_GPIO
                            351 	.globl _CMN_ISR_CLEAR_2
                            352 	.globl _CMN_ISR_MASK_2
                            353 	.globl _CMN_ISR_2
                            354 	.globl _MCU_INT_ADDR
                            355 	.globl _CMN_CACHE_DEBUG0
                            356 	.globl _MCU_SDT_CMN
                            357 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            358 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            359 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            360 	.globl _TEST5
                            361 	.globl _PM_CMN_REG2
                            362 	.globl _INPUT_CMN_PIN_REG3
                            363 	.globl __FIELDNAME_
                            364 	.globl _CMN_CALIBRATION
                            365 	.globl _OUTPUT_CMN_PIN_REG0
                            366 	.globl _SPD_CMN_REG1
                            367 	.globl _CLKGEN_CMN_REG1
                            368 	.globl _PLLCAL_REG1
                            369 	.globl _PLLCAL_REG0
                            370 	.globl _ANA_TSEN_CONTROL
                            371 	.globl _INPUT_CMN_PIN_REG2
                            372 	.globl _INPUT_CMN_PIN_REG1
                            373 	.globl _INPUT_CMN_PIN_REG0
                            374 	.globl _PM_CMN_REG1
                            375 	.globl _SYSTEM
                            376 	.globl _TEST4
                            377 	.globl _TEST3
                            378 	.globl _TEST2
                            379 	.globl _TEST1
                            380 	.globl _TEST0
                            381 	.globl _MCU_SYNC2
                            382 	.globl _MCU_SYNC1
                            383 	.globl _MEM_IRQ_CLEAR
                            384 	.globl _APB_CONTROL_REG
                            385 	.globl _ANA_IF_CMN_REG0
                            386 	.globl _MEM_IRQ_MASK
                            387 	.globl _MEM_IRQ
                            388 	.globl _ANA_IF_CMN_REG1
                            389 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            390 	.globl _MCU_INFO_3
                            391 	.globl _MCU_INFO_2
                            392 	.globl _MCU_INFO_1
                            393 	.globl _MCU_INFO_0
                            394 	.globl _MEMORY_CONTROL_4
                            395 	.globl _MEMORY_CONTROL_3
                            396 	.globl _MEMORY_CONTROL_2
                            397 	.globl _MEMORY_CONTROL_1
                            398 	.globl _MEMORY_CONTROL_0
                            399 	.globl _MCU_DEBUG1
                            400 	.globl _MCU_DEBUG0
                            401 	.globl _MCU_CONTROL_4
                            402 	.globl _MCU_CONTROL_3
                            403 	.globl _MCU_CONTROL_2
                            404 	.globl _MCU_CONTROL_1
                            405 	.globl _MCU_CONTROL_0
                            406 	.globl _GLOB_L1_SUBSTATES_CFG
                            407 	.globl _GLOB_PIPE_REVISION
                            408 	.globl _GLOB_BIST_DATA_HI
                            409 	.globl _GLOB_BIST_SEQR_CFG
                            410 	.globl _GLOB_BIST_RESULT
                            411 	.globl _GLOB_BIST_MASK
                            412 	.globl _GLOB_BIST_START
                            413 	.globl _GLOB_BIST_LANE_TYPE
                            414 	.globl _GLOB_BIST_CTRL
                            415 	.globl _GLOB_DP_BAL_CFG4
                            416 	.globl _GLOB_DP_BAL_CFG2
                            417 	.globl _GLOB_DP_BAL_CFG0
                            418 	.globl _GLOB_PM_DP_CTRL
                            419 	.globl _GLOB_COUNTER_HI
                            420 	.globl _GLOB_COUNTER_CTRL
                            421 	.globl _GLOB_PM_CFG0
                            422 	.globl _GLOB_DP_SAL_CFG5
                            423 	.globl _GLOB_DP_SAL_CFG3
                            424 	.globl _GLOB_DP_SAL_CFG1
                            425 	.globl _GLOB_DP_SAL_CFG
                            426 	.globl _GLOB_MISC_CTRL
                            427 	.globl _GLOB_CLK_SRC_HI
                            428 	.globl _GLOB_CLK_SRC_LO
                            429 	.globl _GLOB_RST_CLK_CTRL
                            430 	.globl _DFE_STATIC_REG6
                            431 	.globl _DFE_STATIC_REG5
                            432 	.globl _DFE_STATIC_REG4
                            433 	.globl _DFE_STATIC_REG3
                            434 	.globl _DFE_STATIC_REG1
                            435 	.globl _DFE_STATIC_REG0
                            436 	.globl _RX_CMN_0
                            437 	.globl _SRIS_REG1
                            438 	.globl _SRIS_REG0
                            439 	.globl _DTX_PHY_ALIGN_REG2
                            440 	.globl _DTX_PHY_ALIGN_REG1
                            441 	.globl _DTX_PHY_ALIGN_REG0
                            442 	.globl _DTX_REG4
                            443 	.globl _DTX_REG3
                            444 	.globl _DTX_REG2
                            445 	.globl _DTX_REG1
                            446 	.globl _DTX_REG0
                            447 	.globl _TX_CMN_REG
                            448 	.globl _END_XDAT_LANE
                            449 	.globl _TRAIN_CONTROL_17
                            450 	.globl _TRAIN_CONTROL_16
                            451 	.globl _TRAIN_CONTROL_15
                            452 	.globl _TRAIN_CONTROL_14
                            453 	.globl _TRAIN_CONTROL_13
                            454 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            455 	.globl _ESM_POP_N_CNT_LOW_LANE
                            456 	.globl _TRAIN_CONTROL_12
                            457 	.globl _TRAIN_CONTROL_11
                            458 	.globl _TRAIN_CONTROL_10
                            459 	.globl _TRAIN_CONTROL_9
                            460 	.globl _TRAIN_CONTROL_8
                            461 	.globl _TRAIN_CONTROL_7
                            462 	.globl _TRAIN_CONTROL_6
                            463 	.globl _TRAIN_CONTROL_5
                            464 	.globl _TRAIN_CONTROL_4
                            465 	.globl _TRAIN_CONTROL_3
                            466 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            467 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            468 	.globl _ESM_POP_P_CNT_LOW_LANE
                            469 	.globl _CDS_CTRL_REG1
                            470 	.globl _CDS_CTRL_REG0
                            471 	.globl _DFE_CONTROL_11
                            472 	.globl _DFE_CONTROL_10
                            473 	.globl _DFE_CONTROL_9
                            474 	.globl _DFE_CONTROL_8
                            475 	.globl _DFE_CONTROL_7
                            476 	.globl _DFE_TEST_5
                            477 	.globl _DFE_TEST_4
                            478 	.globl _DFE_TEST_1
                            479 	.globl _DFE_TEST_0
                            480 	.globl _DFE_CONTROL_6
                            481 	.globl _TRAIN_PARA_3
                            482 	.globl _TRAIN_PARA_2
                            483 	.globl _TRAIN_PARA_1
                            484 	.globl _TRAIN_PARA_0
                            485 	.globl _DLL_CAL
                            486 	.globl _RPTA_CONFIG_1
                            487 	.globl _RPTA_CONFIG_0
                            488 	.globl _TRAIN_CONTROL_2
                            489 	.globl _TRAIN_CONTROL_1
                            490 	.globl _TRAIN_CONTROL_0
                            491 	.globl _DFE_CONTROL_5
                            492 	.globl _DFE_CONTROL_4
                            493 	.globl _DFE_CONTROL_3
                            494 	.globl _DFE_CONTROL_2
                            495 	.globl _DFE_CONTROL_1
                            496 	.globl _DFE_CONTROL_0
                            497 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            498 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            499 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            500 	.globl _PHY_LOCAL_VALUE_LANE
                            501 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            502 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            503 	.globl _CAL_SAVE_DATA3_LANE
                            504 	.globl _CAL_SAVE_DATA2_LANE
                            505 	.globl _CAL_SAVE_DATA1_LANE
                            506 	.globl _CAL_CTRL4_LANE
                            507 	.globl _CAL_CTRL3_LANE
                            508 	.globl _CAL_CTRL2_LANE
                            509 	.globl _CAL_CTRL1_LANE
                            510 	.globl _LANE_MARGIN_REG0
                            511 	.globl _EOM_VLD_REG4
                            512 	.globl _EOM_REG0
                            513 	.globl _EOM_ERR_REG3
                            514 	.globl _EOM_ERR_REG2
                            515 	.globl _EOM_ERR_REG1
                            516 	.globl _EOM_ERR_REG0
                            517 	.globl _EOM_VLD_REG3
                            518 	.globl _EOM_VLD_REG2
                            519 	.globl _EOM_VLD_REG1
                            520 	.globl _EOM_VLD_REG0
                            521 	.globl _DFE_STATIC_LANE_REG6
                            522 	.globl _DFE_STATIC_LANE_REG5
                            523 	.globl _DFE_STATIC_LANE_REG4
                            524 	.globl _DFE_STATIC_LANE_REG3
                            525 	.globl _DFE_STATIC_LANE_REG1
                            526 	.globl _DFE_STATIC_LANE_REG0
                            527 	.globl _DFE_DCE_REG0
                            528 	.globl _CAL_OFST_REG2
                            529 	.globl _CAL_OFST_REG1
                            530 	.globl _CAL_OFST_REG0
                            531 	.globl _DFE_READ_ODD_2C_REG8
                            532 	.globl _DFE_READ_EVEN_2C_REG8
                            533 	.globl _DFE_READ_ODD_2C_REG7
                            534 	.globl _DFE_READ_ODD_2C_REG6
                            535 	.globl _DFE_READ_ODD_2C_REG5
                            536 	.globl _DFE_READ_ODD_2C_REG4
                            537 	.globl _DFE_READ_ODD_2C_REG3
                            538 	.globl _DFE_READ_ODD_2C_REG2
                            539 	.globl _DFE_READ_ODD_2C_REG1
                            540 	.globl _DFE_READ_ODD_2C_REG0
                            541 	.globl _DFE_READ_EVEN_2C_REG7
                            542 	.globl _DFE_READ_EVEN_2C_REG6
                            543 	.globl _DFE_READ_EVEN_2C_REG5
                            544 	.globl _DFE_READ_EVEN_2C_REG4
                            545 	.globl _DFE_READ_EVEN_2C_REG3
                            546 	.globl _DFE_READ_EVEN_2C_REG2
                            547 	.globl _DFE_READ_EVEN_2C_REG1
                            548 	.globl _DFE_READ_EVEN_2C_REG0
                            549 	.globl _DFE_READ_ODD_SM_REG8
                            550 	.globl _DFE_READ_EVEN_SM_REG8
                            551 	.globl _DFE_READ_ODD_SM_REG7
                            552 	.globl _DFE_READ_ODD_SM_REG6
                            553 	.globl _DFE_READ_ODD_SM_REG5
                            554 	.globl _DFE_READ_ODD_SM_REG4
                            555 	.globl _DFE_READ_ODD_SM_REG3
                            556 	.globl _DFE_READ_ODD_SM_REG2
                            557 	.globl _DFE_READ_ODD_SM_REG1
                            558 	.globl _DFE_READ_ODD_SM_REG0
                            559 	.globl _DFE_READ_EVEN_SM_REG7
                            560 	.globl _DFE_READ_EVEN_SM_REG6
                            561 	.globl _DFE_READ_EVEN_SM_REG5
                            562 	.globl _DFE_READ_EVEN_SM_REG4
                            563 	.globl _DFE_READ_EVEN_SM_REG3
                            564 	.globl _DFE_READ_EVEN_SM_REG2
                            565 	.globl _DFE_READ_EVEN_SM_REG1
                            566 	.globl _DFE_READ_EVEN_SM_REG0
                            567 	.globl _DFE_FEXT_ODD_REG7
                            568 	.globl _DFE_FEXT_ODD_REG6
                            569 	.globl _DFE_FEXT_ODD_REG5
                            570 	.globl _DFE_FEXT_ODD_REG4
                            571 	.globl _DFE_FEXT_ODD_REG3
                            572 	.globl _DFE_FEXT_ODD_REG2
                            573 	.globl _DFE_FEXT_ODD_REG1
                            574 	.globl _DFE_FEXT_ODD_REG0
                            575 	.globl _DFE_FEXT_EVEN_REG7
                            576 	.globl _DFE_FEXT_EVEN_REG6
                            577 	.globl _DFE_FEXT_EVEN_REG5
                            578 	.globl _DFE_FEXT_EVEN_REG4
                            579 	.globl _DFE_FEXT_EVEN_REG3
                            580 	.globl _DFE_FEXT_EVEN_REG2
                            581 	.globl _DFE_FEXT_EVEN_REG1
                            582 	.globl _DFE_FEXT_EVEN_REG0
                            583 	.globl _DFE_DC_ODD_REG8
                            584 	.globl _DFE_DC_EVEN_REG8
                            585 	.globl _DFE_FEN_ODD_REG
                            586 	.globl _DFE_FEN_EVEN_REG
                            587 	.globl _DFE_STEP_REG1
                            588 	.globl _DFE_STEP_REG0
                            589 	.globl _DFE_ANA_REG1
                            590 	.globl _DFE_ANA_REG0
                            591 	.globl _DFE_CTRL_REG4
                            592 	.globl _RX_EQ_CLK_CTRL
                            593 	.globl _DFE_CTRL_REG3
                            594 	.globl _DFE_CTRL_REG2
                            595 	.globl _DFE_CTRL_REG1
                            596 	.globl _DFE_CTRL_REG0
                            597 	.globl _PT_COUNTER2
                            598 	.globl _PT_COUNTER1
                            599 	.globl _PT_COUNTER0
                            600 	.globl _PT_USER_PATTERN2
                            601 	.globl _PT_USER_PATTERN1
                            602 	.globl _PT_USER_PATTERN0
                            603 	.globl _PT_CONTROL1
                            604 	.globl _PT_CONTROL0
                            605 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            606 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            607 	.globl _MEM_ECC_ERR_ADDRESS0
                            608 	.globl _MCU_COMMAND0
                            609 	.globl _MCU_INT_CONTROL_13
                            610 	.globl _MCU_WDT_LANE
                            611 	.globl _MCU_IRQ_ISR_LANE
                            612 	.globl _ANA_IF_DFEO_REG0
                            613 	.globl _ANA_IF_DFEE_REG0
                            614 	.globl _ANA_IF_TRX_REG0
                            615 	.globl _EXT_INT_CONTROL
                            616 	.globl _MCU_DEBUG_LANE
                            617 	.globl _MCU_DEBUG3_LANE
                            618 	.globl _MCU_DEBUG2_LANE
                            619 	.globl _MCU_DEBUG1_LANE
                            620 	.globl _MCU_DEBUG0_LANE
                            621 	.globl _MCU_TIMER_CTRL_7_LANE
                            622 	.globl _MCU_TIMER_CTRL_6_LANE
                            623 	.globl _MCU_TIMER_CTRL_5_LANE
                            624 	.globl _MCU_TIMER_CTRL_4_LANE
                            625 	.globl _MCU_TIMER_CTRL_3_LANE
                            626 	.globl _MCU_TIMER_CTRL_2_LANE
                            627 	.globl _MCU_TIMER_CTRL_1_LANE
                            628 	.globl _MCU_MEM_REG2_LANE
                            629 	.globl _MCU_MEM_REG1_LANE
                            630 	.globl _MCU_IRQ_MASK_LANE
                            631 	.globl _MCU_IRQ_LANE
                            632 	.globl _MCU_TIMER3_CONTROL
                            633 	.globl _MCU_TIMER2_CONTROL
                            634 	.globl _MCU_TIMER1_CONTROL
                            635 	.globl _MCU_TIMER0_CONTROL
                            636 	.globl _MCU_TIMER_CONTROL
                            637 	.globl _MCU_INT12_CONTROL
                            638 	.globl _MCU_INT11_CONTROL
                            639 	.globl _MCU_INT10_CONTROL
                            640 	.globl _MCU_INT9_CONTROL
                            641 	.globl _MCU_INT8_CONTROL
                            642 	.globl _MCU_INT7_CONTROL
                            643 	.globl _MCU_INT6_CONTROL
                            644 	.globl _MCU_INT5_CONTROL
                            645 	.globl _MCU_INT4_CONTROL
                            646 	.globl _MCU_INT3_CONTROL
                            647 	.globl _MCU_INT2_CONTROL
                            648 	.globl _MCU_INT1_CONTROL
                            649 	.globl _MCU_INT0_CONTROL
                            650 	.globl _MCU_STATUS3_LANE
                            651 	.globl _MCU_STATUS2_LANE
                            652 	.globl _MCU_STATUS1_LANE
                            653 	.globl _MCU_STATUS0_LANE
                            654 	.globl _LANE_SYSTEM0
                            655 	.globl _CACHE_DEBUG1
                            656 	.globl _CACHE_DEBUG0
                            657 	.globl _MCU_GPIO
                            658 	.globl _MCU_CONTROL_LANE
                            659 	.globl _LANE_32G_PRESET_CFG16_LANE
                            660 	.globl _LANE_32G_PRESET_CFG14_LANE
                            661 	.globl _LANE_32G_PRESET_CFG12_LANE
                            662 	.globl _LANE_32G_PRESET_CFG10_LANE
                            663 	.globl _LANE_32G_PRESET_CFG8_LANE
                            664 	.globl _LANE_32G_PRESET_CFG6_LANE
                            665 	.globl _LANE_32G_PRESET_CFG4_LANE
                            666 	.globl _LANE_32G_PRESET_CFG2_LANE
                            667 	.globl _LANE_32G_PRESET_CFG0_LANE
                            668 	.globl _LANE_EQ_32G_CFG0_LANE
                            669 	.globl _LANE_16G_PRESET_CFG16_LANE
                            670 	.globl _LANE_16G_PRESET_CFG14_LANE
                            671 	.globl _LANE_16G_PRESET_CFG12_LANE
                            672 	.globl _LANE_16G_PRESET_CFG10_LANE
                            673 	.globl _LANE_16G_PRESET_CFG8_LANE
                            674 	.globl _LANE_16G_PRESET_CFG6_LANE
                            675 	.globl _LANE_16G_PRESET_CFG4_LANE
                            676 	.globl _LANE_16G_PRESET_CFG2_LANE
                            677 	.globl _LANE_16G_PRESET_CFG0_LANE
                            678 	.globl _LANE_EQ_16G_CFG0_LANE
                            679 	.globl _LANE_REMOTE_SET_LANE
                            680 	.globl _LANE_COEFF_MAX0_LANE
                            681 	.globl _LANE_PRESET_CFG16_LANE
                            682 	.globl _LANE_PRESET_CFG14_LANE
                            683 	.globl _LANE_PRESET_CFG12_LANE
                            684 	.globl _LANE_PRESET_CFG10_LANE
                            685 	.globl _LANE_PRESET_CFG8_LANE
                            686 	.globl _LANE_PRESET_CFG6_LANE
                            687 	.globl _LANE_PRESET_CFG4_LANE
                            688 	.globl _LANE_PRESET_CFG2_LANE
                            689 	.globl _LANE_PRESET_CFG0_LANE
                            690 	.globl _LANE_EQ_CFG1_LANE
                            691 	.globl _LANE_EQ_CFG0_LANE
                            692 	.globl _LANE_USB_DP_CFG2_LANE
                            693 	.globl _LANE_USB_DP_CFG1_LANE
                            694 	.globl _LANE_DP_PIE8_CFG0_LANE
                            695 	.globl _LANE_CFG_STATUS3_LANE
                            696 	.globl _LANE_CFG4
                            697 	.globl _LANE_CFG2_LANE
                            698 	.globl _LANE_CFG_STATUS2_LANE
                            699 	.globl _LANE_STATUS0
                            700 	.globl _LANE_CFG0
                            701 	.globl _SQ_REG0
                            702 	.globl _DTL_REG3
                            703 	.globl _DTL_REG2
                            704 	.globl _DTL_REG1
                            705 	.globl _DTL_REG0
                            706 	.globl _RX_LANE_INTERRUPT_REG1
                            707 	.globl _RX_CALIBRATION_REG
                            708 	.globl _INPUT_RX_PIN_REG3_LANE
                            709 	.globl _RX_DATA_PATH_REG
                            710 	.globl _RX_LANE_INTERRUPT_MASK
                            711 	.globl _RX_LANE_INTERRUPT
                            712 	.globl _CDR_LOCK_REG
                            713 	.globl _FRAME_SYNC_DET_REG6
                            714 	.globl _FRAME_SYNC_DET_REG5
                            715 	.globl _FRAME_SYNC_DET_REG4
                            716 	.globl _FRAME_SYNC_DET_REG3
                            717 	.globl _FRAME_SYNC_DET_REG2
                            718 	.globl _FRAME_SYNC_DET_REG1
                            719 	.globl _FRAME_SYNC_DET_REG0
                            720 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            721 	.globl _DIG_RX_RSVD_REG0
                            722 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            723 	.globl _INPUT_RX_PIN_REG2_LANE
                            724 	.globl _INPUT_RX_PIN_REG1_LANE
                            725 	.globl _INPUT_RX_PIN_REG0_LANE
                            726 	.globl _RX_SYSTEM_LANE
                            727 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            728 	.globl _MON_TOP
                            729 	.globl _ANALOG_TX_REALTIME_REG_1
                            730 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            731 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            732 	.globl __FIELDNAME__LANE
                            733 	.globl _INPUT_TX_PIN_REG5_LANE
                            734 	.globl _DIG_TX_RSVD_REG0
                            735 	.globl _TX_CALIBRATION_LANE
                            736 	.globl _INPUT_TX_PIN_REG4_LANE
                            737 	.globl _TX_SYSTEM_LANE
                            738 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            739 	.globl _SPD_CTRL_INTERRUPT_REG2
                            740 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            741 	.globl _TX_SPEED_CONVERT_LANE
                            742 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            743 	.globl _PM_CTRL_INTERRUPT_REG2
                            744 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            745 	.globl _INPUT_TX_PIN_REG3_LANE
                            746 	.globl _INPUT_TX_PIN_REG2_LANE
                            747 	.globl _INPUT_TX_PIN_REG1_LANE
                            748 	.globl _INPUT_TX_PIN_REG0_LANE
                            749 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            750 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            823 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            824 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            825 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            826 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            827 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            828 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            829 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            830 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            831 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            832 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            833 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            834 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            835 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            836 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            837 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            838 	.globl _ANA_DFEO_REG_0B
                            839 	.globl _ANA_DFEO_REG_0A
                            840 	.globl _ANA_DFEO_REG_09
                            841 	.globl _ANA_DFEO_REG_08
                            842 	.globl _ANA_DFEO_REG_07
                            843 	.globl _ANA_DFEO_REG_06
                            844 	.globl _ANA_DFEO_REG_05
                            845 	.globl _ANA_DFEO_REG_04
                            846 	.globl _ANA_DFEO_REG_03
                            847 	.globl _ANA_DFEO_REG_02
                            848 	.globl _ANA_DFEO_REG_01
                            849 	.globl _ANA_DFEO_REG_00
                            850 	.globl _ANA_DFEO_REG_27
                            851 	.globl _ANA_DFEO_REG_26
                            852 	.globl _ANA_DFEO_REG_25
                            853 	.globl _ANA_DFEO_REG_24
                            854 	.globl _ANA_DFEO_REG_23
                            855 	.globl _ANA_DFEO_REG_22
                            856 	.globl _ANA_DFEO_REG_21
                            857 	.globl _ANA_DFEO_REG_20
                            858 	.globl _ANA_DFEO_REG_1F
                            859 	.globl _ANA_DFEO_REG_1E
                            860 	.globl _ANA_DFEO_REG_1D
                            861 	.globl _ANA_DFEO_REG_1C
                            862 	.globl _ANA_DFEO_REG_1B
                            863 	.globl _ANA_DFEO_REG_1A
                            864 	.globl _ANA_DFEO_REG_19
                            865 	.globl _ANA_DFEO_REG_18
                            866 	.globl _ANA_DFEO_REG_17
                            867 	.globl _ANA_DFEO_REG_16
                            868 	.globl _ANA_DFEO_REG_15
                            869 	.globl _ANA_DFEO_REG_14
                            870 	.globl _ANA_DFEO_REG_13
                            871 	.globl _ANA_DFEO_REG_12
                            872 	.globl _ANA_DFEO_REG_11
                            873 	.globl _ANA_DFEO_REG_10
                            874 	.globl _ANA_DFEO_REG_0F
                            875 	.globl _ANA_DFEO_REG_0E
                            876 	.globl _ANA_DFEO_REG_0D
                            877 	.globl _ANA_DFEO_REG_0C
                            878 	.globl _ANA_DFEE_REG_1D
                            879 	.globl _ANA_DFEE_REG_1C
                            880 	.globl _ANA_DFEE_REG_1B
                            881 	.globl _ANA_DFEE_REG_1A
                            882 	.globl _ANA_DFEE_REG_19
                            883 	.globl _ANA_DFEE_REG_18
                            884 	.globl _ANA_DFEE_REG_17
                            885 	.globl _ANA_DFEE_REG_16
                            886 	.globl _ANA_DFEE_REG_15
                            887 	.globl _ANA_DFEE_REG_14
                            888 	.globl _ANA_DFEE_REG_13
                            889 	.globl _ANA_DFEE_REG_12
                            890 	.globl _ANA_DFEE_REG_11
                            891 	.globl _ANA_DFEE_REG_10
                            892 	.globl _ANA_DFEE_REG_0F
                            893 	.globl _ANA_DFEE_REG_0E
                            894 	.globl _ANA_DFEE_REG_0D
                            895 	.globl _ANA_DFEE_REG_0C
                            896 	.globl _ANA_DFEE_REG_0B
                            897 	.globl _ANA_DFEE_REG_0A
                            898 	.globl _ANA_DFEE_REG_09
                            899 	.globl _ANA_DFEE_REG_08
                            900 	.globl _ANA_DFEE_REG_07
                            901 	.globl _ANA_DFEE_REG_06
                            902 	.globl _ANA_DFEE_REG_05
                            903 	.globl _ANA_DFEE_REG_04
                            904 	.globl _ANA_DFEE_REG_03
                            905 	.globl _ANA_DFEE_REG_02
                            906 	.globl _ANA_DFEE_REG_01
                            907 	.globl _ANA_DFEE_REG_00
                            908 	.globl _ANA_DFEE_REG_27
                            909 	.globl _ANA_DFEE_REG_26
                            910 	.globl _ANA_DFEE_REG_25
                            911 	.globl _ANA_DFEE_REG_24
                            912 	.globl _ANA_DFEE_REG_23
                            913 	.globl _ANA_DFEE_REG_22
                            914 	.globl _ANA_DFEE_REG_21
                            915 	.globl _ANA_DFEE_REG_20
                            916 	.globl _ANA_DFEE_REG_1F
                            917 	.globl _ANA_DFEE_REG_1E
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            936 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            937 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            938 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            939 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            940 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            941 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            942 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            943 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            944 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            945 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            946 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            947 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            948 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            949 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            950 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            966 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            967 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            968 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            969 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            970 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            971 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            972 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            973 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            974 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            975 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            976 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            977 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            978 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            979 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            980 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            982 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            983 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            984 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            985 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            986 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            987 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            988 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            989 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            990 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            991 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            992 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            993 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            994 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            995 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            996 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            997 ;--------------------------------------------------------
                            998 ; special function registers
                            999 ;--------------------------------------------------------
                           1000 	.area RSEG    (ABS,DATA)
   0000                    1001 	.org 0x0000
                    0080   1002 _P0	=	0x0080
                    0082   1003 _DPL	=	0x0082
                    0083   1004 _DPH	=	0x0083
                    0086   1005 _WDTREL	=	0x0086
                    0087   1006 _PCON	=	0x0087
                    0088   1007 _TCON	=	0x0088
                    0089   1008 _TMOD	=	0x0089
                    008A   1009 _TL0	=	0x008a
                    008B   1010 _TL1	=	0x008b
                    008C   1011 _TH0	=	0x008c
                    008D   1012 _TH1	=	0x008d
                    008E   1013 _CKCON	=	0x008e
                    0090   1014 _P1	=	0x0090
                    0092   1015 _DPS	=	0x0092
                    0094   1016 _PSBANK	=	0x0094
                    0098   1017 _SCON	=	0x0098
                    0099   1018 _SBUF	=	0x0099
                    009A   1019 _IEN2	=	0x009a
                    00A0   1020 _P2	=	0x00a0
                    00A1   1021 _DMAS0	=	0x00a1
                    00A2   1022 _DMAS1	=	0x00a2
                    00A3   1023 _DMAS2	=	0x00a3
                    00A4   1024 _DMAT0	=	0x00a4
                    00A5   1025 _DMAT1	=	0x00a5
                    00A6   1026 _DMAT2	=	0x00a6
                    00A8   1027 _IEN0	=	0x00a8
                    00A9   1028 _IP0	=	0x00a9
                    00AA   1029 _S0RELL	=	0x00aa
                    00B0   1030 _P3	=	0x00b0
                    00B1   1031 _DMAC0	=	0x00b1
                    00B2   1032 _DMAC1	=	0x00b2
                    00B3   1033 _DMAC2	=	0x00b3
                    00B4   1034 _DMASEL	=	0x00b4
                    00B5   1035 _DMAM0	=	0x00b5
                    00B6   1036 _DMAM1	=	0x00b6
                    00B8   1037 _IEN1	=	0x00b8
                    00B9   1038 _IP1	=	0x00b9
                    00BA   1039 _S0RELH	=	0x00ba
                    00C0   1040 _IRCON	=	0x00c0
                    00C1   1041 _CCEN	=	0x00c1
                    00C8   1042 _T2CON	=	0x00c8
                    00CA   1043 _RCAP2L	=	0x00ca
                    00CB   1044 _RCAP2H	=	0x00cb
                    00CC   1045 _TL2	=	0x00cc
                    00CD   1046 _TH2	=	0x00cd
                    00D0   1047 _PSW	=	0x00d0
                    00D8   1048 _ADCON	=	0x00d8
                    00E0   1049 _ACC	=	0x00e0
                    00E8   1050 _EIE	=	0x00e8
                    00F0   1051 _B	=	0x00f0
                    00F7   1052 _SRST	=	0x00f7
                    8C8A   1053 _TMR0	=	0x8c8a
                    8D8B   1054 _TMR1	=	0x8d8b
                    CDCC   1055 _TMR2	=	0xcdcc
                    A2A1   1056 _DMASA	=	0xa2a1
                    A5A4   1057 _DMATA	=	0xa5a4
                    B2B1   1058 _DMAC	=	0xb2b1
                           1059 ;--------------------------------------------------------
                           1060 ; special function bits
                           1061 ;--------------------------------------------------------
                           1062 	.area RSEG    (ABS,DATA)
   0000                    1063 	.org 0x0000
                    0080   1064 _P0_0	=	0x0080
                    0081   1065 _P0_1	=	0x0081
                    0082   1066 _P0_2	=	0x0082
                    0083   1067 _P0_3	=	0x0083
                    0084   1068 _P0_4	=	0x0084
                    0085   1069 _P0_5	=	0x0085
                    0086   1070 _P0_6	=	0x0086
                    0087   1071 _P0_7	=	0x0087
                    0090   1072 _P1_0	=	0x0090
                    0091   1073 _P1_1	=	0x0091
                    0092   1074 _P1_2	=	0x0092
                    0093   1075 _P1_3	=	0x0093
                    0094   1076 _P1_4	=	0x0094
                    0095   1077 _P1_5	=	0x0095
                    0096   1078 _P1_6	=	0x0096
                    0097   1079 _P1_7	=	0x0097
                    00A0   1080 _P2_0	=	0x00a0
                    00A1   1081 _P2_1	=	0x00a1
                    00A2   1082 _P2_2	=	0x00a2
                    00A3   1083 _P2_3	=	0x00a3
                    00A4   1084 _P2_4	=	0x00a4
                    00A5   1085 _P2_5	=	0x00a5
                    00A6   1086 _P2_6	=	0x00a6
                    00A7   1087 _P2_7	=	0x00a7
                    00B0   1088 _P3_0	=	0x00b0
                    00B1   1089 _P3_1	=	0x00b1
                    00B2   1090 _P3_2	=	0x00b2
                    00B3   1091 _P3_3	=	0x00b3
                    00B4   1092 _P3_4	=	0x00b4
                    00B5   1093 _P3_5	=	0x00b5
                    00B6   1094 _P3_6	=	0x00b6
                    00B7   1095 _P3_7	=	0x00b7
                    0088   1096 _IT0	=	0x0088
                    0089   1097 _IE0	=	0x0089
                    008A   1098 _IT1	=	0x008a
                    008B   1099 _IE1	=	0x008b
                    008C   1100 _TR0	=	0x008c
                    008D   1101 _TF0	=	0x008d
                    008E   1102 _TR1	=	0x008e
                    008F   1103 _TF1	=	0x008f
                    00A8   1104 _EX0	=	0x00a8
                    00A9   1105 _ET0	=	0x00a9
                    00AA   1106 _EX1	=	0x00aa
                    00AB   1107 _ET1	=	0x00ab
                    00AC   1108 _ES	=	0x00ac
                    00AD   1109 _ET2	=	0x00ad
                    00AE   1110 _WDT	=	0x00ae
                    00AF   1111 _EA	=	0x00af
                    00B8   1112 _EX7	=	0x00b8
                    00B9   1113 _EX2	=	0x00b9
                    00BA   1114 _EX3	=	0x00ba
                    00BB   1115 _EX4	=	0x00bb
                    00BC   1116 _EX5	=	0x00bc
                    00BD   1117 _EX6	=	0x00bd
                    00BE   1118 _PS1	=	0x00be
                    009A   1119 _ES1	=	0x009a
                    009B   1120 _EX8	=	0x009b
                    009C   1121 _EX9	=	0x009c
                    009D   1122 _EX10	=	0x009d
                    009E   1123 _EX11	=	0x009e
                    009F   1124 _EX12	=	0x009f
                    0098   1125 _RI	=	0x0098
                    0099   1126 _TI	=	0x0099
                    00C6   1127 _TF2	=	0x00c6
                           1128 ;--------------------------------------------------------
                           1129 ; overlayable register banks
                           1130 ;--------------------------------------------------------
                           1131 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1132 	.ds 8
                           1133 	.area REG_BANK_2	(REL,OVR,DATA)
   0010                    1134 	.ds 8
                           1135 ;--------------------------------------------------------
                           1136 ; overlayable bit register bank
                           1137 ;--------------------------------------------------------
                           1138 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1139 bits:
   0025                    1140 	.ds 1
                    8000   1141 	b0 = bits[0]
                    8100   1142 	b1 = bits[1]
                    8200   1143 	b2 = bits[2]
                    8300   1144 	b3 = bits[3]
                    8400   1145 	b4 = bits[4]
                    8500   1146 	b5 = bits[5]
                    8600   1147 	b6 = bits[6]
                    8700   1148 	b7 = bits[7]
                           1149 ;--------------------------------------------------------
                           1150 ; internal ram data
                           1151 ;--------------------------------------------------------
                           1152 	.area DSEG    (DATA)
                           1153 ;--------------------------------------------------------
                           1154 ; overlayable items in internal ram 
                           1155 ;--------------------------------------------------------
                           1156 	.area OSEG    (OVR,DATA)
                           1157 ;--------------------------------------------------------
                           1158 ; indirectly addressable internal ram data
                           1159 ;--------------------------------------------------------
                           1160 	.area ISEG    (DATA)
                           1161 ;--------------------------------------------------------
                           1162 ; absolute internal ram data
                           1163 ;--------------------------------------------------------
                           1164 	.area IABS    (ABS,DATA)
                           1165 	.area IABS    (ABS,DATA)
                           1166 ;--------------------------------------------------------
                           1167 ; bit data
                           1168 ;--------------------------------------------------------
                           1169 	.area BSEG    (BIT)
                           1170 ;--------------------------------------------------------
                           1171 ; paged external ram data
                           1172 ;--------------------------------------------------------
                           1173 	.area PSEG    (PAG,XDATA)
                           1174 ;--------------------------------------------------------
                           1175 ; external ram data
                           1176 ;--------------------------------------------------------
                           1177 	.area XSEG    (XDATA)
                    1000   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1180 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1181 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1182 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1183 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1184 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1185 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1186 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1187 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1188 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1189 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1190 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1191 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1192 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1193 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1194 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1195 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1196 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1197 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1198 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1199 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1200 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1201 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1202 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1203 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1204 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1205 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1206 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1207 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1208 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1209 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1210 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1211 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1212 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1213 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1214 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1215 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1216 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1217 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1218 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1219 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1220 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1221 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1222 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1223 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1224 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1225 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1226 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1227 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1228 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1229 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1230 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1231 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1232 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1233 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1234 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1235 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1236 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1237 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1238 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1239 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1240 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1241 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1242 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1243 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1244 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1245 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1246 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1247 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1248 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1249 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1250 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1251 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1252 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1253 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1254 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1255 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1256 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1257 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1258 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1259 _ANA_DFEE_REG_20	=	0x0480
                    0484   1260 _ANA_DFEE_REG_21	=	0x0484
                    0488   1261 _ANA_DFEE_REG_22	=	0x0488
                    048C   1262 _ANA_DFEE_REG_23	=	0x048c
                    0490   1263 _ANA_DFEE_REG_24	=	0x0490
                    0494   1264 _ANA_DFEE_REG_25	=	0x0494
                    0498   1265 _ANA_DFEE_REG_26	=	0x0498
                    049C   1266 _ANA_DFEE_REG_27	=	0x049c
                    0400   1267 _ANA_DFEE_REG_00	=	0x0400
                    0404   1268 _ANA_DFEE_REG_01	=	0x0404
                    0408   1269 _ANA_DFEE_REG_02	=	0x0408
                    040C   1270 _ANA_DFEE_REG_03	=	0x040c
                    0410   1271 _ANA_DFEE_REG_04	=	0x0410
                    0414   1272 _ANA_DFEE_REG_05	=	0x0414
                    0418   1273 _ANA_DFEE_REG_06	=	0x0418
                    041C   1274 _ANA_DFEE_REG_07	=	0x041c
                    0420   1275 _ANA_DFEE_REG_08	=	0x0420
                    0424   1276 _ANA_DFEE_REG_09	=	0x0424
                    0428   1277 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1278 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1279 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1280 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1281 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1282 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1283 _ANA_DFEE_REG_10	=	0x0440
                    0444   1284 _ANA_DFEE_REG_11	=	0x0444
                    0448   1285 _ANA_DFEE_REG_12	=	0x0448
                    044C   1286 _ANA_DFEE_REG_13	=	0x044c
                    0450   1287 _ANA_DFEE_REG_14	=	0x0450
                    0454   1288 _ANA_DFEE_REG_15	=	0x0454
                    0458   1289 _ANA_DFEE_REG_16	=	0x0458
                    045C   1290 _ANA_DFEE_REG_17	=	0x045c
                    0460   1291 _ANA_DFEE_REG_18	=	0x0460
                    0464   1292 _ANA_DFEE_REG_19	=	0x0464
                    0468   1293 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1294 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1295 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1296 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1297 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1298 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1299 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1300 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1301 _ANA_DFEO_REG_10	=	0x0840
                    0844   1302 _ANA_DFEO_REG_11	=	0x0844
                    0848   1303 _ANA_DFEO_REG_12	=	0x0848
                    084C   1304 _ANA_DFEO_REG_13	=	0x084c
                    0850   1305 _ANA_DFEO_REG_14	=	0x0850
                    0854   1306 _ANA_DFEO_REG_15	=	0x0854
                    0858   1307 _ANA_DFEO_REG_16	=	0x0858
                    085C   1308 _ANA_DFEO_REG_17	=	0x085c
                    0860   1309 _ANA_DFEO_REG_18	=	0x0860
                    0864   1310 _ANA_DFEO_REG_19	=	0x0864
                    0868   1311 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1312 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1313 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1314 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1315 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1316 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1317 _ANA_DFEO_REG_20	=	0x0880
                    0884   1318 _ANA_DFEO_REG_21	=	0x0884
                    0888   1319 _ANA_DFEO_REG_22	=	0x0888
                    088C   1320 _ANA_DFEO_REG_23	=	0x088c
                    0890   1321 _ANA_DFEO_REG_24	=	0x0890
                    0894   1322 _ANA_DFEO_REG_25	=	0x0894
                    0898   1323 _ANA_DFEO_REG_26	=	0x0898
                    089C   1324 _ANA_DFEO_REG_27	=	0x089c
                    0800   1325 _ANA_DFEO_REG_00	=	0x0800
                    0804   1326 _ANA_DFEO_REG_01	=	0x0804
                    0808   1327 _ANA_DFEO_REG_02	=	0x0808
                    080C   1328 _ANA_DFEO_REG_03	=	0x080c
                    0810   1329 _ANA_DFEO_REG_04	=	0x0810
                    0814   1330 _ANA_DFEO_REG_05	=	0x0814
                    0818   1331 _ANA_DFEO_REG_06	=	0x0818
                    081C   1332 _ANA_DFEO_REG_07	=	0x081c
                    0820   1333 _ANA_DFEO_REG_08	=	0x0820
                    0824   1334 _ANA_DFEO_REG_09	=	0x0824
                    0828   1335 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1336 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1337 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1338 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1339 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1340 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1341 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1342 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1343 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1344 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1345 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1346 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1347 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1348 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1349 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1350 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1351 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1352 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1353 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1354 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1355 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1356 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1357 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1358 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1359 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1360 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1361 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1362 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1363 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1364 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1365 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1366 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1367 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1368 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1369 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1370 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1371 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1372 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1373 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1374 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1375 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1376 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1377 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1378 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1379 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1380 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1381 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1382 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1383 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1384 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1385 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1386 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1387 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1388 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1389 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1390 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1391 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1392 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1393 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1394 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1395 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1396 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1397 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1398 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1399 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1400 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1401 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1402 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1403 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1404 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1405 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1406 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1407 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1408 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1409 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1410 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1411 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1412 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1413 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1414 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1415 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1416 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1417 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1418 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1419 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1420 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1421 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1422 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1423 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1424 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1425 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1426 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1427 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1428 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1429 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1430 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1431 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1432 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1433 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1434 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1435 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1436 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1437 _TX_SYSTEM_LANE	=	0x2034
                    203C   1438 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1439 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1440 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1441 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1442 __FIELDNAME__LANE	=	0x204c
                    2050   1443 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1444 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1445 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1446 _MON_TOP	=	0x205c
                    2100   1447 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1448 _RX_SYSTEM_LANE	=	0x2104
                    2108   1449 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1450 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1451 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1452 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1453 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1454 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1455 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1456 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1457 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1458 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1459 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1460 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1461 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1462 _CDR_LOCK_REG	=	0x213c
                    2140   1463 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1464 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1465 _RX_DATA_PATH_REG	=	0x2148
                    214C   1466 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1467 _RX_CALIBRATION_REG	=	0x2150
                    2158   1468 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1469 _DTL_REG0	=	0x2160
                    2164   1470 _DTL_REG1	=	0x2164
                    2168   1471 _DTL_REG2	=	0x2168
                    216C   1472 _DTL_REG3	=	0x216c
                    2170   1473 _SQ_REG0	=	0x2170
                    4000   1474 _LANE_CFG0	=	0x4000
                    4004   1475 _LANE_STATUS0	=	0x4004
                    4008   1476 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1477 _LANE_CFG2_LANE	=	0x400c
                    4010   1478 _LANE_CFG4	=	0x4010
                    4014   1479 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1480 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1481 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1482 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1483 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1484 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1485 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1486 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1487 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1488 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1489 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1490 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1491 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1492 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1493 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1494 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1495 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1496 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1497 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1498 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1499 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1500 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1501 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1502 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1503 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1504 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1505 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1506 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1507 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1508 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1509 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1510 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1511 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1512 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1513 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1514 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1515 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1516 _MCU_CONTROL_LANE	=	0x2200
                    2204   1517 _MCU_GPIO	=	0x2204
                    2208   1518 _CACHE_DEBUG0	=	0x2208
                    220C   1519 _CACHE_DEBUG1	=	0x220c
                    2210   1520 _LANE_SYSTEM0	=	0x2210
                    2230   1521 _MCU_STATUS0_LANE	=	0x2230
                    2234   1522 _MCU_STATUS1_LANE	=	0x2234
                    2238   1523 _MCU_STATUS2_LANE	=	0x2238
                    223C   1524 _MCU_STATUS3_LANE	=	0x223c
                    2240   1525 _MCU_INT0_CONTROL	=	0x2240
                    2244   1526 _MCU_INT1_CONTROL	=	0x2244
                    2248   1527 _MCU_INT2_CONTROL	=	0x2248
                    224C   1528 _MCU_INT3_CONTROL	=	0x224c
                    2250   1529 _MCU_INT4_CONTROL	=	0x2250
                    2254   1530 _MCU_INT5_CONTROL	=	0x2254
                    2258   1531 _MCU_INT6_CONTROL	=	0x2258
                    225C   1532 _MCU_INT7_CONTROL	=	0x225c
                    2260   1533 _MCU_INT8_CONTROL	=	0x2260
                    2264   1534 _MCU_INT9_CONTROL	=	0x2264
                    2268   1535 _MCU_INT10_CONTROL	=	0x2268
                    226C   1536 _MCU_INT11_CONTROL	=	0x226c
                    2270   1537 _MCU_INT12_CONTROL	=	0x2270
                    2274   1538 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1539 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1540 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1541 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1542 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1543 _MCU_IRQ_LANE	=	0x2288
                    228C   1544 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1545 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1546 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1547 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1548 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1549 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1550 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1551 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1552 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1553 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1554 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1555 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1556 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1557 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1558 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1559 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1560 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1561 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1562 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1563 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1564 _MCU_WDT_LANE	=	0x22dc
                    22E0   1565 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1566 _MCU_COMMAND0	=	0x22e4
                    22F4   1567 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1568 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1569 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1570 _PT_CONTROL0	=	0x2300
                    2304   1571 _PT_CONTROL1	=	0x2304
                    2308   1572 _PT_USER_PATTERN0	=	0x2308
                    230C   1573 _PT_USER_PATTERN1	=	0x230c
                    2310   1574 _PT_USER_PATTERN2	=	0x2310
                    2314   1575 _PT_COUNTER0	=	0x2314
                    2318   1576 _PT_COUNTER1	=	0x2318
                    231C   1577 _PT_COUNTER2	=	0x231c
                    2400   1578 _DFE_CTRL_REG0	=	0x2400
                    2404   1579 _DFE_CTRL_REG1	=	0x2404
                    2408   1580 _DFE_CTRL_REG2	=	0x2408
                    240C   1581 _DFE_CTRL_REG3	=	0x240c
                    2410   1582 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1583 _DFE_CTRL_REG4	=	0x2414
                    2418   1584 _DFE_ANA_REG0	=	0x2418
                    241C   1585 _DFE_ANA_REG1	=	0x241c
                    2420   1586 _DFE_STEP_REG0	=	0x2420
                    2424   1587 _DFE_STEP_REG1	=	0x2424
                    2430   1588 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1589 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1590 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1591 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1592 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1593 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1594 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1595 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1596 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1597 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1598 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1599 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1600 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1601 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1602 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1603 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1604 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1605 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1606 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1607 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1608 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1609 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1610 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1611 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1612 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1613 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1614 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1615 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1616 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1617 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1618 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1619 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1620 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1621 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1622 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1623 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1624 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1625 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1626 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1627 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1628 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1629 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1630 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1631 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1632 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1633 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1634 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1635 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1636 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1637 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1638 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1639 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1640 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1641 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1642 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1643 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1644 _CAL_OFST_REG0	=	0x2518
                    251C   1645 _CAL_OFST_REG1	=	0x251c
                    2520   1646 _CAL_OFST_REG2	=	0x2520
                    2530   1647 _DFE_DCE_REG0	=	0x2530
                    2540   1648 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1649 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1650 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1651 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1652 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1653 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1654 _EOM_VLD_REG0	=	0x2560
                    2564   1655 _EOM_VLD_REG1	=	0x2564
                    2568   1656 _EOM_VLD_REG2	=	0x2568
                    256C   1657 _EOM_VLD_REG3	=	0x256c
                    2570   1658 _EOM_ERR_REG0	=	0x2570
                    2574   1659 _EOM_ERR_REG1	=	0x2574
                    2578   1660 _EOM_ERR_REG2	=	0x2578
                    257C   1661 _EOM_ERR_REG3	=	0x257c
                    2580   1662 _EOM_REG0	=	0x2580
                    25F0   1663 _EOM_VLD_REG4	=	0x25f0
                    25F4   1664 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1665 _CAL_CTRL1_LANE	=	0x6000
                    6004   1666 _CAL_CTRL2_LANE	=	0x6004
                    6008   1667 _CAL_CTRL3_LANE	=	0x6008
                    600C   1668 _CAL_CTRL4_LANE	=	0x600c
                    6010   1669 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1670 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1671 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1672 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1673 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1674 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1675 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1676 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1677 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1678 _DFE_CONTROL_0	=	0x6034
                    6038   1679 _DFE_CONTROL_1	=	0x6038
                    6040   1680 _DFE_CONTROL_2	=	0x6040
                    6044   1681 _DFE_CONTROL_3	=	0x6044
                    6048   1682 _DFE_CONTROL_4	=	0x6048
                    604C   1683 _DFE_CONTROL_5	=	0x604c
                    6050   1684 _TRAIN_CONTROL_0	=	0x6050
                    6054   1685 _TRAIN_CONTROL_1	=	0x6054
                    6058   1686 _TRAIN_CONTROL_2	=	0x6058
                    605C   1687 _RPTA_CONFIG_0	=	0x605c
                    6060   1688 _RPTA_CONFIG_1	=	0x6060
                    6064   1689 _DLL_CAL	=	0x6064
                    6068   1690 _TRAIN_PARA_0	=	0x6068
                    606C   1691 _TRAIN_PARA_1	=	0x606c
                    6070   1692 _TRAIN_PARA_2	=	0x6070
                    6074   1693 _TRAIN_PARA_3	=	0x6074
                    6078   1694 _DFE_CONTROL_6	=	0x6078
                    607C   1695 _DFE_TEST_0	=	0x607c
                    6080   1696 _DFE_TEST_1	=	0x6080
                    6084   1697 _DFE_TEST_4	=	0x6084
                    6088   1698 _DFE_TEST_5	=	0x6088
                    608C   1699 _DFE_CONTROL_7	=	0x608c
                    6090   1700 _DFE_CONTROL_8	=	0x6090
                    6094   1701 _DFE_CONTROL_9	=	0x6094
                    6098   1702 _DFE_CONTROL_10	=	0x6098
                    609C   1703 _DFE_CONTROL_11	=	0x609c
                    60A0   1704 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1705 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1706 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1707 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1708 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1709 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1710 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1711 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1712 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1713 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1714 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1715 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1716 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1717 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1718 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1719 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1720 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1721 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1722 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1723 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1724 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1725 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1726 _END_XDAT_LANE	=	0x60f8
                    A000   1727 _TX_CMN_REG	=	0xa000
                    A008   1728 _DTX_REG0	=	0xa008
                    A00C   1729 _DTX_REG1	=	0xa00c
                    A010   1730 _DTX_REG2	=	0xa010
                    A014   1731 _DTX_REG3	=	0xa014
                    A018   1732 _DTX_REG4	=	0xa018
                    A01C   1733 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1734 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1735 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1736 _SRIS_REG0	=	0xa02c
                    A030   1737 _SRIS_REG1	=	0xa030
                    A100   1738 _RX_CMN_0	=	0xa100
                    A110   1739 _DFE_STATIC_REG0	=	0xa110
                    A114   1740 _DFE_STATIC_REG1	=	0xa114
                    A118   1741 _DFE_STATIC_REG3	=	0xa118
                    A11C   1742 _DFE_STATIC_REG4	=	0xa11c
                    A120   1743 _DFE_STATIC_REG5	=	0xa120
                    A124   1744 _DFE_STATIC_REG6	=	0xa124
                    4200   1745 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1746 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1747 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1748 _GLOB_MISC_CTRL	=	0x420c
                    4210   1749 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1750 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1751 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1752 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1753 _GLOB_PM_CFG0	=	0x4220
                    4224   1754 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1755 _GLOB_COUNTER_HI	=	0x4228
                    422C   1756 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1757 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1758 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1759 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1760 _GLOB_BIST_CTRL	=	0x423c
                    4240   1761 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1762 _GLOB_BIST_START	=	0x4244
                    4248   1763 _GLOB_BIST_MASK	=	0x4248
                    424C   1764 _GLOB_BIST_RESULT	=	0x424c
                    4250   1765 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1766 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1767 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1768 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1769 _MCU_CONTROL_0	=	0xa200
                    A204   1770 _MCU_CONTROL_1	=	0xa204
                    A208   1771 _MCU_CONTROL_2	=	0xa208
                    A20C   1772 _MCU_CONTROL_3	=	0xa20c
                    A210   1773 _MCU_CONTROL_4	=	0xa210
                    A214   1774 _MCU_DEBUG0	=	0xa214
                    A218   1775 _MCU_DEBUG1	=	0xa218
                    A21C   1776 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1777 _MEMORY_CONTROL_1	=	0xa220
                    A224   1778 _MEMORY_CONTROL_2	=	0xa224
                    A228   1779 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1780 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1781 _MCU_INFO_0	=	0xa234
                    A238   1782 _MCU_INFO_1	=	0xa238
                    A23C   1783 _MCU_INFO_2	=	0xa23c
                    A240   1784 _MCU_INFO_3	=	0xa240
                    A244   1785 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1786 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1787 _MEM_IRQ	=	0xa2e4
                    A2E8   1788 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1789 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1790 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1791 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1792 _MCU_SYNC1	=	0xa2f8
                    A2FC   1793 _MCU_SYNC2	=	0xa2fc
                    A300   1794 _TEST0	=	0xa300
                    A304   1795 _TEST1	=	0xa304
                    A308   1796 _TEST2	=	0xa308
                    A30C   1797 _TEST3	=	0xa30c
                    A310   1798 _TEST4	=	0xa310
                    A314   1799 _SYSTEM	=	0xa314
                    A318   1800 _PM_CMN_REG1	=	0xa318
                    A31C   1801 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1802 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1803 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1804 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1805 _PLLCAL_REG0	=	0xa32c
                    A330   1806 _PLLCAL_REG1	=	0xa330
                    A334   1807 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1808 _SPD_CMN_REG1	=	0xa338
                    A33C   1809 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1810 _CMN_CALIBRATION	=	0xa340
                    A344   1811 __FIELDNAME_	=	0xa344
                    A348   1812 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1813 _PM_CMN_REG2	=	0xa34c
                    A354   1814 _TEST5	=	0xa354
                    A358   1815 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1816 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1817 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1818 _MCU_SDT_CMN	=	0xa364
                    A368   1819 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1820 _MCU_INT_ADDR	=	0xa36c
                    A370   1821 _CMN_ISR_2	=	0xa370
                    A374   1822 _CMN_ISR_MASK_2	=	0xa374
                    A378   1823 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1824 _CMN_MCU_GPIO	=	0xa37c
                    A380   1825 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1826 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1827 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1828 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1829 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1830 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1831 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1832 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1833 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1834 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1835 _CMN_ISR_1	=	0xa3a8
                    A3AC   1836 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1837 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1838 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1839 _CID_REG0	=	0xa3f8
                    A3FC   1840 _CID_REG1	=	0xa3fc
                    E600   1841 _FW_REV	=	0xe600
                    E604   1842 _CONTROL_CONFIG0	=	0xe604
                    E608   1843 _CONTROL_CONFIG1	=	0xe608
                    E60C   1844 _CONTROL_CONFIG2	=	0xe60c
                    E610   1845 _CONTROL_CONFIG3	=	0xe610
                    E614   1846 _CONTROL_CONFIG4	=	0xe614
                    E618   1847 _CONTROL_CONFIG5	=	0xe618
                    E61C   1848 _CONTROL_CONFIG6	=	0xe61c
                    E620   1849 _CONTROL_CONFIG7	=	0xe620
                    E624   1850 _CAL_DATA0	=	0xe624
                    E628   1851 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1852 _CONTROL_CONFIG8	=	0xe62c
                    E630   1853 _CONTROL_CONFIG9	=	0xe630
                    E634   1854 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1855 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1856 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1857 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1858 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1859 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1860 _CAL_STATUS_READ	=	0xe64c
                    E650   1861 _MCU_CONFIG	=	0xe650
                    E654   1862 _CAL_DATA1	=	0xe654
                    E658   1863 _LOOP_CNTS	=	0xe658
                    E65C   1864 _MCU_CONFIG1	=	0xe65c
                    E660   1865 _TIMER_SEL1	=	0xe660
                    E664   1866 _TIMER_SEL2	=	0xe664
                    E668   1867 _TIMER_SEL3	=	0xe668
                    E66C   1868 _G_SELLV_TXCLK	=	0xe66c
                    E670   1869 _G_SELLV_TXDATA	=	0xe670
                    E674   1870 _G_SELLV_TXPRE	=	0xe674
                    E678   1871 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1872 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1873 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1874 _SAS_PRESET0_TB	=	0xe684
                    E688   1875 _SAS_PRESET1_TB	=	0xe688
                    E68C   1876 _SAS_PRESET2_TB	=	0xe68c
                    E690   1877 _ETH_PRESET0_TB	=	0xe690
                    E694   1878 _ETH_PRESET1_TB	=	0xe694
                    E698   1879 _TX_SAVE_0	=	0xe698
                    E69C   1880 _TX_SAVE_1	=	0xe69c
                    E6A0   1881 _TX_SAVE_2	=	0xe6a0
                    E6A4   1882 _TX_SAVE_3	=	0xe6a4
                    E6A8   1883 _TX_SAVE_4	=	0xe6a8
                    E6AC   1884 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1885 _SYNC_INFO	=	0xe6b0
                    E6B4   1886 _MCU_INFO_4	=	0xe6b4
                    E6B8   1887 _MCU_INFO_5	=	0xe6b8
                    E6BC   1888 _MCU_INFO_12	=	0xe6bc
                    E6C0   1889 _MCU_INFO_13	=	0xe6c0
                    E6C4   1890 _END_XDAT_CMN	=	0xe6c4
                    2600   1891 _DME_ENC_REG0	=	0x2600
                    2604   1892 _DME_ENC_REG1	=	0x2604
                    2608   1893 _DME_ENC_REG2	=	0x2608
                    260C   1894 _DME_DEC_REG0	=	0x260c
                    2610   1895 _DME_DEC_REG1	=	0x2610
                    2614   1896 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1897 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1898 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1899 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1900 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1901 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1902 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1903 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1904 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1905 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1906 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1907 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1908 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1909 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1910 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1911 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1912 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1913 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1914 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1915 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1916 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1917 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1918 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1919 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1920 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1921 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1922 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1923 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1924 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1925 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1926 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1927 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1928 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1929 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1930 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1931 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1932 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1933 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1934 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1935 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1936 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1937 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1938 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1939 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1940 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1941 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1942 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1943 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1944 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1945 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1946 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1947 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1948 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1949 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1950 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1951 _CDS_READ_MISC0	=	0x6170
                    6174   1952 _CDS_READ_MISC1	=	0x6174
                    6214   1953 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1954 _lc_speedtable	=	0xe000
                    E1C0   1955 _ring_speedtable	=	0xe1c0
                    E5C0   1956 _phy_mode_cmn_table	=	0xe5c0
                    6300   1957 _max_gen	=	0x6300
                    6301   1958 _min_gen	=	0x6301
                    6304   1959 _speedtable	=	0x6304
                    65D4   1960 _phy_mode_lane_table	=	0x65d4
                    60B4   1961 _rc_save	=	0x60b4
                    60D0   1962 _txffe_save	=	0x60d0
                    60E4   1963 _phase_save	=	0x60e4
                    6030   1964 _train_gn1_index	=	0x6030
                    6031   1965 _train_g1_index	=	0x6031
                    6032   1966 _train_g0_index	=	0x6032
                    E6B0   1967 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1968 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1969 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1970 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1971 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1972 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1973 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1974 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1975 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1976 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1977 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1978 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1979 _lnx_cal_txdcc	=	0x65da
                    65DE   1980 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1981 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1982 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1983 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1984 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1985 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1986 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1987 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1988 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1989 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1990 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1991 _lnx_cal_eom_dpher	=	0x6610
                    6612   1992 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1993 _lnx_cal_align90_dac	=	0x661a
                    6622   1994 _lnx_cal_align90_gm	=	0x6622
                    662A   1995 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1996 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1997 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1998 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1999 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   2000 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   2001 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   2002 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   2003 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   2004 _lnx_calx_txdcc	=	0x6499
                    649F   2005 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   2006 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   2007 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   2008 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2009 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2010 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2011 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2012 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2013 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2014 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2015 _lnx_calx_align90_gm	=	0x64d8
                    6100   2016 _cds28	=	0x6100
                    6178   2017 _dfe_sm	=	0x6178
                    61B8   2018 _dfe_sm_dc	=	0x61b8
                    61C0   2019 _dfe_sm_save	=	0x61c0
                    03FC   2020 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2021 _tx_tb	=	0xe684
                    E698   2022 _train_save_tb	=	0xe698
                    607C   2023 _sq_thrs_ratio_tb	=	0x607c
                           2024 ;--------------------------------------------------------
                           2025 ; absolute external ram data
                           2026 ;--------------------------------------------------------
                           2027 	.area XABS    (ABS,XDATA)
                           2028 ;--------------------------------------------------------
                           2029 ; external initialized ram data
                           2030 ;--------------------------------------------------------
                           2031 	.area HOME    (CODE)
                           2032 	.area GSINIT0 (CODE)
                           2033 	.area GSINIT1 (CODE)
                           2034 	.area GSINIT2 (CODE)
                           2035 	.area GSINIT3 (CODE)
                           2036 	.area GSINIT4 (CODE)
                           2037 	.area GSINIT5 (CODE)
                           2038 	.area GSINIT  (CODE)
                           2039 	.area GSFINAL (CODE)
                           2040 	.area CSEG    (CODE)
                           2041 ;--------------------------------------------------------
                           2042 ; global & static initialisations
                           2043 ;--------------------------------------------------------
                           2044 	.area HOME    (CODE)
                           2045 	.area GSINIT  (CODE)
                           2046 	.area GSFINAL (CODE)
                           2047 	.area GSINIT  (CODE)
                           2048 ;--------------------------------------------------------
                           2049 ; Home
                           2050 ;--------------------------------------------------------
                           2051 	.area HOME    (CODE)
                           2052 	.area HOME    (CODE)
                           2053 ;--------------------------------------------------------
                           2054 ; code
                           2055 ;--------------------------------------------------------
                           2056 	.area CSEG    (CODE)
                           2057 ;------------------------------------------------------------
                           2058 ;Allocation info for local variables in function 'short_delay_1p4s'
                           2059 ;------------------------------------------------------------
                           2060 ;i                         Allocated to registers r2 r3 
                           2061 ;------------------------------------------------------------
                           2062 ;	../../shared/src/interrupt.c:13: static inline void short_delay_1p4s(void) {
                           2063 ;	-----------------------------------------
                           2064 ;	 function short_delay_1p4s
                           2065 ;	-----------------------------------------
   1659                    2066 _short_delay_1p4s:
                    0002   2067 	ar2 = 0x02
                    0003   2068 	ar3 = 0x03
                    0004   2069 	ar4 = 0x04
                    0005   2070 	ar5 = 0x05
                    0006   2071 	ar6 = 0x06
                    0007   2072 	ar7 = 0x07
                    0000   2073 	ar0 = 0x00
                    0001   2074 	ar1 = 0x01
                           2075 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   1659 7A 0E              2076 	mov	r2,#0x0E
   165B 7B 00              2077 	mov	r3,#0x00
   165D                    2078 00103$:
                           2079 ;	../../shared/src/interrupt.c:29: __endasm;
                           2080 	
   165D 00                 2081 	  nop
   165E 00                 2082 	  nop
   165F 00                 2083 	  nop
   1660 00                 2084 	  nop
   1661 00                 2085 	  nop
   1662 00                 2086 	  nop
   1663 00                 2087 	  nop
   1664 00                 2088 	  nop
   1665 00                 2089 	  nop
   1666 00                 2090 	  nop
                           2091 	 
   1667 1A                 2092 	dec	r2
   1668 BA FF 01           2093 	cjne	r2,#0xff,00109$
   166B 1B                 2094 	dec	r3
   166C                    2095 00109$:
                           2096 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   166C EA                 2097 	mov	a,r2
   166D 4B                 2098 	orl	a,r3
   166E 60 03              2099 	jz	00110$
   1670 02 16 5D           2100 	ljmp	00103$
   1673                    2101 00110$:
   1673 22                 2102 	ret
                           2103 ;------------------------------------------------------------
                           2104 ;Allocation info for local variables in function 'mcu_reset'
                           2105 ;------------------------------------------------------------
                           2106 ;------------------------------------------------------------
                           2107 ;	../../shared/src/interrupt.c:34: static inline void mcu_reset(void) {
                           2108 ;	-----------------------------------------
                           2109 ;	 function mcu_reset
                           2110 ;	-----------------------------------------
   1674                    2111 _mcu_reset:
                           2112 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1674 90 22 33           2113 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1677 74 FF              2114 	mov	a,#0xFF
   1679 F0                 2115 	movx	@dptr,a
                           2116 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   167A 90 22 0B           2117 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   167D E0                 2118 	movx	a,@dptr
   167E 54 7F              2119 	anl	a,#0x7f
   1680 F0                 2120 	movx	@dptr,a
                           2121 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1681 75 F7 01           2122 	mov	_SRST,#0x01
                           2123 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1684 75 F7 01           2124 	mov	_SRST,#0x01
   1687 22                 2125 	ret
                           2126 ;------------------------------------------------------------
                           2127 ;Allocation info for local variables in function 'sync_status_lane_en_0'
                           2128 ;------------------------------------------------------------
                           2129 ;lane_en                   Allocated to registers r2 
                           2130 ;------------------------------------------------------------
                           2131 ;	../../shared/src/interrupt.c:41: static inline void sync_status_lane_en_0(uint8_t lane_en) {
                           2132 ;	-----------------------------------------
                           2133 ;	 function sync_status_lane_en_0
                           2134 ;	-----------------------------------------
   1688                    2135 _sync_status_lane_en_0:
   1688 AA 82              2136 	mov	r2,dpl
                           2137 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   168A 90 22 36           2138 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   168D EA                 2139 	mov	a,r2
   168E F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   168F 90 22 00           2142 	mov	dptr,#_MCU_CONTROL_LANE
   1692 E0                 2143 	movx	a,@dptr
   1693 70 06              2144 	jnz	00102$
                           2145 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   1695 90 E6 BE           2146 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   1698 EA                 2147 	mov	a,r2
   1699 F0                 2148 	movx	@dptr,a
   169A 22                 2149 	ret
   169B                    2150 00102$:
                           2151 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   169B 90 E6 C2           2152 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   169E EA                 2153 	mov	a,r2
   169F F0                 2154 	movx	@dptr,a
   16A0 22                 2155 	ret
                           2156 ;------------------------------------------------------------
                           2157 ;Allocation info for local variables in function 'timer0_isr'
                           2158 ;------------------------------------------------------------
                           2159 ;------------------------------------------------------------
                           2160 ;	../../shared/src/interrupt.c:49: void timer0_isr (void) __interrupt (1) __using (2)
                           2161 ;	-----------------------------------------
                           2162 ;	 function timer0_isr
                           2163 ;	-----------------------------------------
   16A1                    2164 _timer0_isr:
                    0012   2165 	ar2 = 0x12
                    0013   2166 	ar3 = 0x13
                    0014   2167 	ar4 = 0x14
                    0015   2168 	ar5 = 0x15
                    0016   2169 	ar6 = 0x16
                    0017   2170 	ar7 = 0x17
                    0010   2171 	ar0 = 0x10
                    0011   2172 	ar1 = 0x11
   16A1 C0 E0              2173 	push	acc
   16A3 C0 82              2174 	push	dpl
   16A5 C0 83              2175 	push	dph
   16A7 C0 D0              2176 	push	psw
   16A9 75 D0 10           2177 	mov	psw,#0x10
                           2178 ;	../../shared/src/interrupt.c:51: EA = 0;
   16AC C2 AF              2179 	clr	_EA
                           2180 ;	../../shared/src/interrupt.c:52: PHY_INT_LANE = 0xF0;
   16AE 90 22 33           2181 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   16B1 74 F0              2182 	mov	a,#0xF0
   16B3 F0                 2183 	movx	@dptr,a
                           2184 ;	../../shared/src/interrupt.c:53: TF0 = 0;
   16B4 C2 8D              2185 	clr	_TF0
                           2186 ;	../../shared/src/interrupt.c:54: TR0 = 0;
   16B6 C2 8C              2187 	clr	_TR0
                           2188 ;	../../shared/src/interrupt.c:67: PHY_INT_LANE = 0xFF;
   16B8 90 22 33           2189 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   16BB 74 FF              2190 	mov	a,#0xFF
   16BD F0                 2191 	movx	@dptr,a
                           2192 ;	../../shared/src/interrupt.c:68: EA = 1;
   16BE D2 AF              2193 	setb	_EA
   16C0 D0 D0              2194 	pop	psw
   16C2 D0 83              2195 	pop	dph
   16C4 D0 82              2196 	pop	dpl
   16C6 D0 E0              2197 	pop	acc
   16C8 32                 2198 	reti
                           2199 ;	eliminated unneeded push/pop b
                           2200 ;------------------------------------------------------------
                           2201 ;Allocation info for local variables in function 'timer1_isr'
                           2202 ;------------------------------------------------------------
                           2203 ;------------------------------------------------------------
                           2204 ;	../../shared/src/interrupt.c:71: void timer1_isr (void) __interrupt (3) __using (2)
                           2205 ;	-----------------------------------------
                           2206 ;	 function timer1_isr
                           2207 ;	-----------------------------------------
   16C9                    2208 _timer1_isr:
   16C9 C0 D0              2209 	push	psw
   16CB 75 D0 10           2210 	mov	psw,#0x10
                           2211 ;	../../shared/src/interrupt.c:73: EA = 0;
   16CE C2 AF              2212 	clr	_EA
                           2213 ;	../../shared/src/interrupt.c:74: TR1 = 0;
   16D0 C2 8E              2214 	clr	_TR1
                           2215 ;	../../shared/src/interrupt.c:75: TF1 = 0;
   16D2 C2 8F              2216 	clr	_TF1
                           2217 ;	../../shared/src/interrupt.c:76: timeout = 1;
   16D4 D2 03              2218 	setb	_timeout
                           2219 ;	../../shared/src/interrupt.c:77: EA = 1;
   16D6 D2 AF              2220 	setb	_EA
   16D8 D0 D0              2221 	pop	psw
   16DA 32                 2222 	reti
                           2223 ;	eliminated unneeded push/pop dpl
                           2224 ;	eliminated unneeded push/pop dph
                           2225 ;	eliminated unneeded push/pop b
                           2226 ;	eliminated unneeded push/pop acc
                           2227 ;------------------------------------------------------------
                           2228 ;Allocation info for local variables in function 'timer2_isr'
                           2229 ;------------------------------------------------------------
                           2230 ;------------------------------------------------------------
                           2231 ;	../../shared/src/interrupt.c:80: void timer2_isr (void) __interrupt (5) __using (2)
                           2232 ;	-----------------------------------------
                           2233 ;	 function timer2_isr
                           2234 ;	-----------------------------------------
   16DB                    2235 _timer2_isr:
   16DB C0 E0              2236 	push	acc
   16DD C0 F0              2237 	push	b
   16DF C0 82              2238 	push	dpl
   16E1 C0 83              2239 	push	dph
   16E3 C0 D0              2240 	push	psw
   16E5 75 D0 10           2241 	mov	psw,#0x10
                           2242 ;	../../shared/src/interrupt.c:82: EA = 0;
   16E8 C2 AF              2243 	clr	_EA
                           2244 ;	../../shared/src/interrupt.c:83: PHY_INT_LANE = 0xF2;
   16EA 90 22 33           2245 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   16ED 74 F2              2246 	mov	a,#0xF2
   16EF F0                 2247 	movx	@dptr,a
                           2248 ;	../../shared/src/interrupt.c:84: T2CON = 0x78;//60;
   16F0 75 C8 78           2249 	mov	_T2CON,#0x78
                           2250 ;	../../shared/src/interrupt.c:85: TF2 = 0;
   16F3 C2 C6              2251 	clr	_TF2
                           2252 ;	../../shared/src/interrupt.c:86: timeout2 = 1;
   16F5 D2 04              2253 	setb	_timeout2
                           2254 ;	../../shared/src/interrupt.c:88: if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train && train_timer_int) {
   16F7 90 60 33           2255 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   16FA E0                 2256 	movx	a,@dptr
   16FB 20 E5 03           2257 	jb	acc.5,00134$
   16FE 02 17 94           2258 	ljmp	00117$
   1701                    2259 00134$:
   1701 20 06 03           2260 	jb	_do_train,00135$
   1704 02 17 94           2261 	ljmp	00117$
   1707                    2262 00135$:
   1707 90 66 CC           2263 	mov	dptr,#_train_timer_int
   170A E0                 2264 	movx	a,@dptr
   170B FA                 2265 	mov	r2,a
   170C 70 03              2266 	jnz	00136$
   170E 02 17 94           2267 	ljmp	00117$
   1711                    2268 00136$:
                           2269 ;	../../shared/src/interrupt.c:89: if(phy_mode<=SAS) {
   1711 90 A3 16           2270 	mov	dptr,#(_SYSTEM + 0x0002)
   1714 E0                 2271 	movx	a,@dptr
   1715 54 07              2272 	anl	a,#0x07
   1717 FA                 2273 	mov	r2,a
   1718 C3                 2274 	clr	c
   1719 74 81              2275 	mov	a,#(0x01 ^ 0x80)
   171B 8A F0              2276 	mov	b,r2
   171D 63 F0 80           2277 	xrl	b,#0x80
   1720 95 F0              2278 	subb	a,b
   1722 40 60              2279 	jc	00111$
                           2280 ;	../../shared/src/interrupt.c:90: if(reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0) {
   1724 90 26 7B           2281 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1727 E0                 2282 	movx	a,@dptr
   1728 20 E4 10           2283 	jb	acc.4,00105$
                           2284 ;	../../shared/src/interrupt.c:91: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //2=MTTT timer expire for local phy
   172B 90 26 1C           2285 	mov	dptr,#_TX_TRAIN_IF_REG2
   172E E0                 2286 	movx	a,@dptr
   172F 54 7F              2287 	anl	a,#0x7f
   1731 F0                 2288 	movx	@dptr,a
                           2289 ;	../../shared/src/interrupt.c:92: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1;
   1732 90 26 1D           2290 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   1735 E0                 2291 	movx	a,@dptr
   1736 44 01              2292 	orl	a,#0x01
   1738 F0                 2293 	movx	@dptr,a
   1739 80 26              2294 	sjmp	00106$
   173B                    2295 00105$:
                           2296 ;	../../shared/src/interrupt.c:94: else if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x80)==0) {
   173B 90 26 71           2297 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0001)
   173E E0                 2298 	movx	a,@dptr
   173F FA                 2299 	mov	r2,a
   1740 20 E7 10           2300 	jb	acc.7,00102$
                           2301 ;	../../shared/src/interrupt.c:95: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //3=does not get remote phy's complete status
   1743 90 26 1C           2302 	mov	dptr,#_TX_TRAIN_IF_REG2
   1746 E0                 2303 	movx	a,@dptr
   1747 44 80              2304 	orl	a,#0x80
   1749 F0                 2305 	movx	@dptr,a
                           2306 ;	../../shared/src/interrupt.c:96: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1;
   174A 90 26 1D           2307 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   174D E0                 2308 	movx	a,@dptr
   174E 44 01              2309 	orl	a,#0x01
   1750 F0                 2310 	movx	@dptr,a
   1751 80 0E              2311 	sjmp	00106$
   1753                    2312 00102$:
                           2313 ;	../../shared/src/interrupt.c:99: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1;
   1753 90 26 1C           2314 	mov	dptr,#_TX_TRAIN_IF_REG2
   1756 E0                 2315 	movx	a,@dptr
   1757 44 80              2316 	orl	a,#0x80
   1759 F0                 2317 	movx	@dptr,a
                           2318 ;	../../shared/src/interrupt.c:100: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0;
   175A 90 26 1D           2319 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   175D E0                 2320 	movx	a,@dptr
   175E 54 FE              2321 	anl	a,#0xfe
   1760 F0                 2322 	movx	@dptr,a
   1761                    2323 00106$:
                           2324 ;	../../shared/src/interrupt.c:102: if(link_train_mode==0 && reg_FRAME_LOCK_LANE==0){
   1761 90 26 7B           2325 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1764 E0                 2326 	movx	a,@dptr
   1765 20 E7 1C           2327 	jb	acc.7,00111$
   1768 90 21 26           2328 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   176B E0                 2329 	movx	a,@dptr
   176C 20 E2 15           2330 	jb	acc.2,00111$
                           2331 ;	../../shared/src/interrupt.c:103: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
   176F 90 60 5A           2332 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   1772 E0                 2333 	movx	a,@dptr
   1773 44 02              2334 	orl	a,#0x02
   1775 F0                 2335 	movx	@dptr,a
                           2336 ;	../../shared/src/interrupt.c:104: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
   1776 90 26 1C           2337 	mov	dptr,#_TX_TRAIN_IF_REG2
   1779 E0                 2338 	movx	a,@dptr
   177A 54 7F              2339 	anl	a,#0x7f
   177C F0                 2340 	movx	@dptr,a
                           2341 ;	../../shared/src/interrupt.c:105: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0;
   177D 90 26 1D           2342 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   1780 E0                 2343 	movx	a,@dptr
   1781 54 FE              2344 	anl	a,#0xfe
   1783 F0                 2345 	movx	@dptr,a
   1784                    2346 00111$:
                           2347 ;	../../shared/src/interrupt.c:108: lnx_TX_TRAIN_FAIL_INT_LANE = 1;
   1784 90 60 59           2348 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   1787 E0                 2349 	movx	a,@dptr
   1788 44 80              2350 	orl	a,#0x80
   178A F0                 2351 	movx	@dptr,a
                           2352 ;	../../shared/src/interrupt.c:109: reg_TX_TRAIN_FAILED_LANE = 1;
   178B 90 26 7B           2353 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   178E E0                 2354 	movx	a,@dptr
   178F 44 08              2355 	orl	a,#0x08
   1791 F0                 2356 	movx	@dptr,a
   1792 80 18              2357 	sjmp	00118$
   1794                    2358 00117$:
                           2359 ;	../../shared/src/interrupt.c:111: else if(reg_RX_TRAIN_COMPLETE_LANE==0 && do_rxtrain && train_timer_int) {
   1794 90 26 7B           2360 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1797 E0                 2361 	movx	a,@dptr
   1798 20 E0 11           2362 	jb	acc.0,00118$
   179B 30 07 0E           2363 	jnb	_do_rxtrain,00118$
   179E 90 66 CC           2364 	mov	dptr,#_train_timer_int
   17A1 E0                 2365 	movx	a,@dptr
   17A2 FA                 2366 	mov	r2,a
   17A3 60 07              2367 	jz	00118$
                           2368 ;	../../shared/src/interrupt.c:112: reg_RX_TRAIN_FAILED_LANE = 1;
   17A5 90 26 7A           2369 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   17A8 E0                 2370 	movx	a,@dptr
   17A9 44 80              2371 	orl	a,#0x80
   17AB F0                 2372 	movx	@dptr,a
   17AC                    2373 00118$:
                           2374 ;	../../shared/src/interrupt.c:115: PHY_INT_LANE = 0xFF;
   17AC 90 22 33           2375 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   17AF 74 FF              2376 	mov	a,#0xFF
   17B1 F0                 2377 	movx	@dptr,a
                           2378 ;	../../shared/src/interrupt.c:116: EA = 1;
   17B2 D2 AF              2379 	setb	_EA
   17B4 D0 D0              2380 	pop	psw
   17B6 D0 83              2381 	pop	dph
   17B8 D0 82              2382 	pop	dpl
   17BA D0 F0              2383 	pop	b
   17BC D0 E0              2384 	pop	acc
   17BE 32                 2385 	reti
                           2386 ;------------------------------------------------------------
                           2387 ;Allocation info for local variables in function 'int0_isr'
                           2388 ;------------------------------------------------------------
                           2389 ;------------------------------------------------------------
                           2390 ;	../../shared/src/interrupt.c:119: void int0_isr (void) __interrupt (0)  __using (2)  
                           2391 ;	-----------------------------------------
                           2392 ;	 function int0_isr
                           2393 ;	-----------------------------------------
   17BF                    2394 _int0_isr:
   17BF C0 E0              2395 	push	acc
   17C1 C0 82              2396 	push	dpl
   17C3 C0 83              2397 	push	dph
   17C5 C0 D0              2398 	push	psw
   17C7 75 D0 10           2399 	mov	psw,#0x10
                           2400 ;	../../shared/src/interrupt.c:121: PHY_INT_LANE = 13;
                           2401 ;	../../shared/src/interrupt.c:125: PHY_INT_LANE = 0xFF;
   17CA 90 22 33           2402 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   17CD 74 0D              2403 	mov	a,#0x0D
   17CF F0                 2404 	movx	@dptr,a
   17D0 74 FF              2405 	mov	a,#0xFF
   17D2 F0                 2406 	movx	@dptr,a
   17D3 D0 D0              2407 	pop	psw
   17D5 D0 83              2408 	pop	dph
   17D7 D0 82              2409 	pop	dpl
   17D9 D0 E0              2410 	pop	acc
   17DB 32                 2411 	reti
                           2412 ;	eliminated unneeded push/pop b
                           2413 ;------------------------------------------------------------
                           2414 ;Allocation info for local variables in function 'int3_isr'
                           2415 ;------------------------------------------------------------
                           2416 ;__00042402                Allocated to registers 
                           2417 ;lane_en                   Allocated to registers 
                           2418 ;------------------------------------------------------------
                           2419 ;	../../shared/src/interrupt.c:128: void int3_isr (void) __interrupt (10)  __using (2) //refclk_dis
                           2420 ;	-----------------------------------------
                           2421 ;	 function int3_isr
                           2422 ;	-----------------------------------------
   17DC                    2423 _int3_isr:
   17DC C0 E0              2424 	push	acc
   17DE C0 82              2425 	push	dpl
   17E0 C0 83              2426 	push	dph
   17E2 C0 D0              2427 	push	psw
   17E4 75 D0 10           2428 	mov	psw,#0x10
                           2429 ;	../../shared/src/interrupt.c:130: EA = 0;
   17E7 C2 AF              2430 	clr	_EA
                           2431 ;	../../shared/src/interrupt.c:131: PHY_INT_LANE = 3;
   17E9 90 22 33           2432 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   17EC 74 03              2433 	mov	a,#0x03
   17EE F0                 2434 	movx	@dptr,a
                           2435 ;	../../shared/src/interrupt.c:133: if( reg_INT_REFCLK_DIS_CHG_ISR_LANE ) {
   17EF 90 20 1B           2436 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   17F2 E0                 2437 	movx	a,@dptr
   17F3 30 E1 08           2438 	jnb	acc.1,00102$
                           2439 ;	../../shared/src/interrupt.c:134: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x02;
                           2440 ;	../../shared/src/interrupt.c:135: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   17F6 90 20 53           2441 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   17F9 74 02              2442 	mov	a,#0x02
   17FB F0                 2443 	movx	@dptr,a
   17FC E4                 2444 	clr	a
   17FD F0                 2445 	movx	@dptr,a
   17FE                    2446 00102$:
                           2447 ;	../../shared/src/interrupt.c:146: if( reg_INT_PU_IVREF_CHG_ISR_LANE ) {
   17FE 90 20 1B           2448 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   1801 E0                 2449 	movx	a,@dptr
   1802 30 E2 48           2450 	jnb	acc.2,00108$
                           2451 ;	../../shared/src/interrupt.c:147: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x04;
                           2452 ;	../../shared/src/interrupt.c:148: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   1805 90 20 53           2453 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   1808 74 04              2454 	mov	a,#0x04
   180A F0                 2455 	movx	@dptr,a
   180B E4                 2456 	clr	a
   180C F0                 2457 	movx	@dptr,a
                           2458 ;	../../shared/src/interrupt.c:150: if(reg_PIN_PU_IVREF_RD==0 && reg_PIN_PU_PLL_RD_LANE==0 && mcuid== master_mcu ) {
   180D 90 A3 1B           2459 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   1810 E0                 2460 	movx	a,@dptr
   1811 20 E5 39           2461 	jb	acc.5,00108$
   1814 90 20 07           2462 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   1817 E0                 2463 	movx	a,@dptr
   1818 20 E5 32           2464 	jb	acc.5,00108$
   181B 90 22 00           2465 	mov	dptr,#_MCU_CONTROL_LANE
   181E E0                 2466 	movx	a,@dptr
   181F FA                 2467 	mov	r2,a
   1820 90 E6 50           2468 	mov	dptr,#_MCU_CONFIG
   1823 E0                 2469 	movx	a,@dptr
   1824 FB                 2470 	mov	r3,a
   1825 EA                 2471 	mov	a,r2
   1826 B5 13 24           2472 	cjne	a,ar3,00108$
                           2473 ;	../../shared/src/interrupt.c:151: PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
                           2474 ;	../../shared/src/interrupt.c:152: PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
                           2475 ;	../../shared/src/interrupt.c:153: PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
                           2476 ;	../../shared/src/interrupt.c:154: PM_CMN_REG2.BT.B2 = 0;
   1829 90 A3 4E           2477 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   182C 74 0E              2478 	mov	a,#0x0E
   182E F0                 2479 	movx	@dptr,a
   182F 74 0C              2480 	mov	a,#0x0C
   1831 F0                 2481 	movx	@dptr,a
   1832 74 08              2482 	mov	a,#0x08
   1834 F0                 2483 	movx	@dptr,a
                           2484 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   1835 E4                 2485 	clr	a
   1836 F0                 2486 	movx	@dptr,a
   1837 90 22 36           2487 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   183A F0                 2488 	movx	@dptr,a
                           2489 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   183B 90 22 00           2490 	mov	dptr,#_MCU_CONTROL_LANE
   183E E0                 2491 	movx	a,@dptr
   183F 70 07              2492 	jnz	00110$
                           2493 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   1841 90 E6 BE           2494 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   1844 E4                 2495 	clr	a
   1845 F0                 2496 	movx	@dptr,a
   1846 80 05              2497 	sjmp	00108$
   1848                    2498 00110$:
                           2499 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   1848 90 E6 C2           2500 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   184B E4                 2501 	clr	a
   184C F0                 2502 	movx	@dptr,a
                           2503 ;	../../shared/src/interrupt.c:155: sync_status_lane_en_0(0);
   184D                    2504 00108$:
                           2505 ;	../../shared/src/interrupt.c:159: PHY_INT_LANE = 0xFF;
   184D 90 22 33           2506 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1850 74 FF              2507 	mov	a,#0xFF
   1852 F0                 2508 	movx	@dptr,a
                           2509 ;	../../shared/src/interrupt.c:161: EA = 1;
   1853 D2 AF              2510 	setb	_EA
   1855 D0 D0              2511 	pop	psw
   1857 D0 83              2512 	pop	dph
   1859 D0 82              2513 	pop	dpl
   185B D0 E0              2514 	pop	acc
   185D 32                 2515 	reti
                           2516 ;	eliminated unneeded push/pop b
                           2517 ;------------------------------------------------------------
                           2518 ;Allocation info for local variables in function 'int1_isr'
                           2519 ;------------------------------------------------------------
                           2520 ;------------------------------------------------------------
                           2521 ;	../../shared/src/interrupt.c:164: void int1_isr (void) __interrupt (2)  __using (2) //pcie
                           2522 ;	-----------------------------------------
                           2523 ;	 function int1_isr
                           2524 ;	-----------------------------------------
   185E                    2525 _int1_isr:
   185E C0 D0              2526 	push	psw
   1860 75 D0 10           2527 	mov	psw,#0x10
                           2528 ;	../../shared/src/interrupt.c:297: }
   1863 D0 D0              2529 	pop	psw
   1865 32                 2530 	reti
                           2531 ;	eliminated unneeded push/pop dpl
                           2532 ;	eliminated unneeded push/pop dph
                           2533 ;	eliminated unneeded push/pop b
                           2534 ;	eliminated unneeded push/pop acc
                           2535 ;------------------------------------------------------------
                           2536 ;Allocation info for local variables in function 'int8_isr'
                           2537 ;------------------------------------------------------------
                           2538 ;------------------------------------------------------------
                           2539 ;	../../shared/src/interrupt.c:299: void int8_isr (void) __interrupt (17)  __using (2)
                           2540 ;	-----------------------------------------
                           2541 ;	 function int8_isr
                           2542 ;	-----------------------------------------
   1866                    2543 _int8_isr:
   1866 C0 D0              2544 	push	psw
   1868 75 D0 10           2545 	mov	psw,#0x10
                           2546 ;	../../shared/src/interrupt.c:351: }
   186B D0 D0              2547 	pop	psw
   186D 32                 2548 	reti
                           2549 ;	eliminated unneeded push/pop dpl
                           2550 ;	eliminated unneeded push/pop dph
                           2551 ;	eliminated unneeded push/pop b
                           2552 ;	eliminated unneeded push/pop acc
                           2553 ;------------------------------------------------------------
                           2554 ;Allocation info for local variables in function 'int9_isr'
                           2555 ;------------------------------------------------------------
                           2556 ;int_pll_or_chg            Allocated to registers r2 
                           2557 ;__00052404                Allocated to registers 
                           2558 ;lane_en                   Allocated to registers 
                           2559 ;__00052407                Allocated to registers 
                           2560 ;lane_en                   Allocated to registers 
                           2561 ;------------------------------------------------------------
                           2562 ;	../../shared/src/interrupt.c:354: void int9_isr (void) __interrupt (18)  __using (2)// sata_sas pm ctrl
                           2563 ;	-----------------------------------------
                           2564 ;	 function int9_isr
                           2565 ;	-----------------------------------------
   186E                    2566 _int9_isr:
   186E C0 E0              2567 	push	acc
   1870 C0 82              2568 	push	dpl
   1872 C0 83              2569 	push	dph
   1874 C0 D0              2570 	push	psw
   1876 75 D0 10           2571 	mov	psw,#0x10
                           2572 ;	../../shared/src/interrupt.c:357: bool int_pll_or_chg = 0;
   1879 7A 00              2573 	mov	r2,#0x00
                           2574 ;	../../shared/src/interrupt.c:358: EA = 0;
   187B C2 AF              2575 	clr	_EA
                           2576 ;	../../shared/src/interrupt.c:360: PHY_INT_LANE = 9;
   187D 90 22 33           2577 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1880 74 09              2578 	mov	a,#0x09
   1882 F0                 2579 	movx	@dptr,a
                           2580 ;	../../shared/src/interrupt.c:362: if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) {
   1883 90 20 1B           2581 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   1886 E0                 2582 	movx	a,@dptr
   1887 30 E0 10           2583 	jnb	acc.0,00102$
   188A 90 22 00           2584 	mov	dptr,#_MCU_CONTROL_LANE
   188D E0                 2585 	movx	a,@dptr
   188E FB                 2586 	mov	r3,a
   188F 90 E6 50           2587 	mov	dptr,#_MCU_CONFIG
   1892 E0                 2588 	movx	a,@dptr
   1893 FC                 2589 	mov	r4,a
   1894 EB                 2590 	mov	a,r3
   1895 B5 14 02           2591 	cjne	a,ar4,00102$
                           2592 ;	../../shared/src/interrupt.c:363: int_pll_or_chg = 1;
   1898 7A 01              2593 	mov	r2,#0x01
   189A                    2594 00102$:
                           2595 ;	../../shared/src/interrupt.c:369: if((PM_CTRL_INTERRUPT_REG1_LANE.BT.B3&0xe1) != 0 ) 
   189A 90 20 1B           2596 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   189D E0                 2597 	movx	a,@dptr
   189E FB                 2598 	mov	r3,a
   189F 54 E1              2599 	anl	a,#0xE1
   18A1 70 03              2600 	jnz	00175$
   18A3 02 1A 56           2601 	ljmp	00137$
   18A6                    2602 00175$:
                           2603 ;	../../shared/src/interrupt.c:371: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xfb;
                           2604 ;	../../shared/src/interrupt.c:372: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   18A6 90 20 53           2605 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   18A9 74 FB              2606 	mov	a,#0xFB
   18AB F0                 2607 	movx	@dptr,a
   18AC E4                 2608 	clr	a
   18AD F0                 2609 	movx	@dptr,a
                           2610 ;	../../shared/src/interrupt.c:374: switch(PHY_STATUS) {
   18AE 90 22 30           2611 	mov	dptr,#_MCU_STATUS0_LANE
   18B1 E0                 2612 	movx	a,@dptr
   18B2 FB                 2613 	mov	r3,a
   18B3 BB 1A 02           2614 	cjne	r3,#0x1A,00176$
   18B6 80 12              2615 	sjmp	00106$
   18B8                    2616 00176$:
   18B8 BB 1D 02           2617 	cjne	r3,#0x1D,00177$
   18BB 80 5A              2618 	sjmp	00112$
   18BD                    2619 00177$:
   18BD BB 2F 02           2620 	cjne	r3,#0x2F,00178$
   18C0 80 08              2621 	sjmp	00106$
   18C2                    2622 00178$:
   18C2 BB 30 02           2623 	cjne	r3,#0x30,00179$
   18C5 80 03              2624 	sjmp	00180$
   18C7                    2625 00179$:
   18C7 02 19 A5           2626 	ljmp	00120$
   18CA                    2627 00180$:
                           2628 ;	../../shared/src/interrupt.c:377: case ST_SLUMBER:
   18CA                    2629 00106$:
                           2630 ;	../../shared/src/interrupt.c:378: if(reg_PIN_PU_PLL_RD_LANE == 1){
   18CA 90 20 07           2631 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   18CD E0                 2632 	movx	a,@dptr
   18CE C4                 2633 	swap	a
   18CF 03                 2634 	rr	a
   18D0 54 01              2635 	anl	a,#0x01
   18D2 FB                 2636 	mov	r3,a
   18D3 BB 01 1F           2637 	cjne	r3,#0x01,00110$
                           2638 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   18D6 90 22 36           2639 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   18D9 74 01              2640 	mov	a,#0x01
   18DB F0                 2641 	movx	@dptr,a
                           2642 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   18DC 90 22 00           2643 	mov	dptr,#_MCU_CONTROL_LANE
   18DF E0                 2644 	movx	a,@dptr
   18E0 70 08              2645 	jnz	00139$
                           2646 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   18E2 90 E6 BE           2647 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   18E5 74 01              2648 	mov	a,#0x01
   18E7 F0                 2649 	movx	@dptr,a
   18E8 80 06              2650 	sjmp	00141$
   18EA                    2651 00139$:
                           2652 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   18EA 90 E6 C2           2653 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   18ED 74 01              2654 	mov	a,#0x01
   18EF F0                 2655 	movx	@dptr,a
                           2656 ;	../../shared/src/interrupt.c:379: sync_status_lane_en_0(1);
   18F0                    2657 00141$:
                           2658 ;	../../shared/src/interrupt.c:380: do_wake = 1;
   18F0 D2 05              2659 	setb	_do_wake
   18F2 02 1A 56           2660 	ljmp	00137$
   18F5                    2661 00110$:
                           2662 ;	../../shared/src/interrupt.c:383: if(int_pll_or_chg) { //already slumber, but need to turn on/off pu_pll/dtx
   18F5 EA                 2663 	mov	a,r2
   18F6 70 03              2664 	jnz	00184$
   18F8 02 1A 56           2665 	ljmp	00137$
   18FB                    2666 00184$:
                           2667 ;	../../shared/src/interrupt.c:384: PHY_NS = ST_SLUMBER;
   18FB 90 22 31           2668 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   18FE 74 1A              2669 	mov	a,#0x1A
   1900 F0                 2670 	movx	@dptr,a
                           2671 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1901 90 22 33           2672 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1904 74 FF              2673 	mov	a,#0xFF
   1906 F0                 2674 	movx	@dptr,a
                           2675 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1907 90 22 0B           2676 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   190A E0                 2677 	movx	a,@dptr
   190B 54 7F              2678 	anl	a,#0x7f
   190D F0                 2679 	movx	@dptr,a
                           2680 ;	../../shared/src/interrupt.c:37: SRST = 1;
   190E 75 F7 01           2681 	mov	_SRST,#0x01
                           2682 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1911 75 F7 01           2683 	mov	_SRST,#0x01
                           2684 ;	../../shared/src/interrupt.c:388: break;
   1914 02 1A 56           2685 	ljmp	00137$
                           2686 ;	../../shared/src/interrupt.c:389: case ST_PSLUMBER_RX:
   1917                    2687 00112$:
                           2688 ;	../../shared/src/interrupt.c:390: if(reg_PIN_PU_PLL_RD_LANE == 0) {
   1917 90 20 07           2689 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   191A E0                 2690 	movx	a,@dptr
   191B 20 E5 3E           2691 	jb	acc.5,00114$
                           2692 ;	../../shared/src/interrupt.c:391: PHY_NS = ST_SLUMBER;
   191E 90 22 31           2693 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1921 74 1A              2694 	mov	a,#0x1A
   1923 F0                 2695 	movx	@dptr,a
                           2696 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   1924 90 22 36           2697 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   1927 E4                 2698 	clr	a
   1928 F0                 2699 	movx	@dptr,a
                           2700 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   1929 90 22 00           2701 	mov	dptr,#_MCU_CONTROL_LANE
   192C E0                 2702 	movx	a,@dptr
   192D 70 07              2703 	jnz	00144$
                           2704 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   192F 90 E6 BE           2705 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   1932 E4                 2706 	clr	a
   1933 F0                 2707 	movx	@dptr,a
   1934 80 05              2708 	sjmp	00146$
   1936                    2709 00144$:
                           2710 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   1936 90 E6 C2           2711 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   1939 E4                 2712 	clr	a
   193A F0                 2713 	movx	@dptr,a
                           2714 ;	../../shared/src/interrupt.c:392: sync_status_lane_en_0(0);
   193B                    2715 00146$:
                           2716 ;	../../shared/src/interrupt.c:393: reg_PIN_PLL_READY_TX_LANE = 0;
   193B 90 20 02           2717 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   193E E0                 2718 	movx	a,@dptr
   193F 54 FB              2719 	anl	a,#0xfb
   1941 F0                 2720 	movx	@dptr,a
                           2721 ;	../../shared/src/interrupt.c:394: reg_PIN_PLL_READY_RX_LANE = 0;
   1942 90 21 02           2722 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1945 E0                 2723 	movx	a,@dptr
   1946 54 BF              2724 	anl	a,#0xbf
   1948 F0                 2725 	movx	@dptr,a
                           2726 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1949 90 22 33           2727 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   194C 74 FF              2728 	mov	a,#0xFF
   194E F0                 2729 	movx	@dptr,a
                           2730 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   194F 90 22 0B           2731 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1952 E0                 2732 	movx	a,@dptr
   1953 54 7F              2733 	anl	a,#0x7f
   1955 F0                 2734 	movx	@dptr,a
                           2735 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1956 75 F7 01           2736 	mov	_SRST,#0x01
                           2737 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1959 75 F7 01           2738 	mov	_SRST,#0x01
                           2739 ;	../../shared/src/interrupt.c:395: mcu_reset();
   195C                    2740 00114$:
                           2741 ;	../../shared/src/interrupt.c:397: if(reg_PIN_PU_TX_RD_LANE == 0) {
   195C 90 20 07           2742 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   195F E0                 2743 	movx	a,@dptr
   1960 20 E4 1E           2744 	jb	acc.4,00116$
                           2745 ;	../../shared/src/interrupt.c:398: reg_PIN_PLL_READY_TX_LANE = 0;
   1963 90 20 02           2746 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1966 E0                 2747 	movx	a,@dptr
   1967 54 FB              2748 	anl	a,#0xfb
   1969 F0                 2749 	movx	@dptr,a
                           2750 ;	../../shared/src/interrupt.c:399: reg_PIN_PLL_READY_TX_LANE = 0;
   196A 90 20 02           2751 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   196D E0                 2752 	movx	a,@dptr
   196E 54 FB              2753 	anl	a,#0xfb
   1970 F0                 2754 	movx	@dptr,a
                           2755 ;	../../shared/src/interrupt.c:400: reg_PIN_PLL_READY_TX_LANE = 0;
   1971 90 20 02           2756 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1974 E0                 2757 	movx	a,@dptr
   1975 54 FB              2758 	anl	a,#0xfb
   1977 F0                 2759 	movx	@dptr,a
                           2760 ;	../../shared/src/interrupt.c:401: reg_ANA_PU_TX_LANE = 0;
   1978 90 20 03           2761 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   197B E0                 2762 	movx	a,@dptr
   197C 54 BF              2763 	anl	a,#0xbf
   197E F0                 2764 	movx	@dptr,a
   197F 80 0E              2765 	sjmp	00117$
   1981                    2766 00116$:
                           2767 ;	../../shared/src/interrupt.c:404: reg_ANA_PU_TX_LANE = 1;
   1981 90 20 03           2768 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   1984 E0                 2769 	movx	a,@dptr
   1985 44 40              2770 	orl	a,#0x40
   1987 F0                 2771 	movx	@dptr,a
                           2772 ;	../../shared/src/interrupt.c:405: reg_PIN_PLL_READY_TX_LANE = 1;
   1988 90 20 02           2773 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   198B E0                 2774 	movx	a,@dptr
   198C 44 04              2775 	orl	a,#0x04
   198E F0                 2776 	movx	@dptr,a
   198F                    2777 00117$:
                           2778 ;	../../shared/src/interrupt.c:407: if(reg_PIN_PU_RX_RD_LANE == 1){
   198F 90 21 02           2779 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1992 E0                 2780 	movx	a,@dptr
   1993 03                 2781 	rr	a
   1994 03                 2782 	rr	a
   1995 54 01              2783 	anl	a,#0x01
   1997 FA                 2784 	mov	r2,a
   1998 BA 01 02           2785 	cjne	r2,#0x01,00188$
   199B 80 03              2786 	sjmp	00189$
   199D                    2787 00188$:
   199D 02 1A 56           2788 	ljmp	00137$
   19A0                    2789 00189$:
                           2790 ;	../../shared/src/interrupt.c:408: do_wake = 1;
   19A0 D2 05              2791 	setb	_do_wake
                           2792 ;	../../shared/src/interrupt.c:410: break;
   19A2 02 1A 56           2793 	ljmp	00137$
                           2794 ;	../../shared/src/interrupt.c:411: default:
   19A5                    2795 00120$:
                           2796 ;	../../shared/src/interrupt.c:412: if(reg_PIN_PU_PLL_RD_LANE == 0){
   19A5 90 20 07           2797 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   19A8 E0                 2798 	movx	a,@dptr
   19A9 20 E5 2A           2799 	jb	acc.5,00133$
                           2800 ;	../../shared/src/interrupt.c:413: PHY_NS = ST_SLUMBER;
   19AC 90 22 31           2801 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   19AF 74 1A              2802 	mov	a,#0x1A
   19B1 F0                 2803 	movx	@dptr,a
                           2804 ;	../../shared/src/interrupt.c:414: reg_PIN_PLL_READY_TX_LANE = 0;
   19B2 90 20 02           2805 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   19B5 E0                 2806 	movx	a,@dptr
   19B6 54 FB              2807 	anl	a,#0xfb
   19B8 F0                 2808 	movx	@dptr,a
                           2809 ;	../../shared/src/interrupt.c:415: reg_PIN_PLL_READY_RX_LANE = 0;
   19B9 90 21 02           2810 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   19BC E0                 2811 	movx	a,@dptr
   19BD 54 BF              2812 	anl	a,#0xbf
   19BF F0                 2813 	movx	@dptr,a
                           2814 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   19C0 90 22 33           2815 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   19C3 74 FF              2816 	mov	a,#0xFF
   19C5 F0                 2817 	movx	@dptr,a
                           2818 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   19C6 90 22 0B           2819 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   19C9 E0                 2820 	movx	a,@dptr
   19CA 54 7F              2821 	anl	a,#0x7f
   19CC F0                 2822 	movx	@dptr,a
                           2823 ;	../../shared/src/interrupt.c:37: SRST = 1;
   19CD 75 F7 01           2824 	mov	_SRST,#0x01
                           2825 ;	../../shared/src/interrupt.c:38: SRST = 1;
   19D0 75 F7 01           2826 	mov	_SRST,#0x01
                           2827 ;	../../shared/src/interrupt.c:418: mcu_reset();
   19D3 02 1A 56           2828 	ljmp	00137$
   19D6                    2829 00133$:
                           2830 ;	../../shared/src/interrupt.c:421: if(pwrsq_on==0) {
   19D6 90 66 2B           2831 	mov	dptr,#_pwrsq_on
   19D9 E0                 2832 	movx	a,@dptr
   19DA FA                 2833 	mov	r2,a
   19DB 70 33              2834 	jnz	00125$
                           2835 ;	../../shared/src/interrupt.c:422: if(reg_PIN_PU_TX_RD_LANE == 0) {
   19DD 90 20 07           2836 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   19E0 E0                 2837 	movx	a,@dptr
   19E1 20 E4 1E           2838 	jb	acc.4,00122$
                           2839 ;	../../shared/src/interrupt.c:423: reg_PIN_PLL_READY_TX_LANE = 0;
   19E4 90 20 02           2840 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   19E7 E0                 2841 	movx	a,@dptr
   19E8 54 FB              2842 	anl	a,#0xfb
   19EA F0                 2843 	movx	@dptr,a
                           2844 ;	../../shared/src/interrupt.c:424: reg_PIN_PLL_READY_TX_LANE = 0; //65nsec needed from pll_ready_tx to ana_pu_tx
   19EB 90 20 02           2845 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   19EE E0                 2846 	movx	a,@dptr
   19EF 54 FB              2847 	anl	a,#0xfb
   19F1 F0                 2848 	movx	@dptr,a
                           2849 ;	../../shared/src/interrupt.c:425: reg_PIN_PLL_READY_TX_LANE = 0;
   19F2 90 20 02           2850 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   19F5 E0                 2851 	movx	a,@dptr
   19F6 54 FB              2852 	anl	a,#0xfb
   19F8 F0                 2853 	movx	@dptr,a
                           2854 ;	../../shared/src/interrupt.c:426: reg_ANA_PU_TX_LANE = 0;
   19F9 90 20 03           2855 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   19FC E0                 2856 	movx	a,@dptr
   19FD 54 BF              2857 	anl	a,#0xbf
   19FF F0                 2858 	movx	@dptr,a
   1A00 80 0E              2859 	sjmp	00125$
   1A02                    2860 00122$:
                           2861 ;	../../shared/src/interrupt.c:429: reg_ANA_PU_TX_LANE = 1;
   1A02 90 20 03           2862 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   1A05 E0                 2863 	movx	a,@dptr
   1A06 44 40              2864 	orl	a,#0x40
   1A08 F0                 2865 	movx	@dptr,a
                           2866 ;	../../shared/src/interrupt.c:430: reg_PIN_PLL_READY_TX_LANE = 1;
   1A09 90 20 02           2867 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1A0C E0                 2868 	movx	a,@dptr
   1A0D 44 04              2869 	orl	a,#0x04
   1A0F F0                 2870 	movx	@dptr,a
   1A10                    2871 00125$:
                           2872 ;	../../shared/src/interrupt.c:433: if(reg_PIN_PU_RX_RD_LANE == 0 && cmx_FORCE_PARTIAL_PU_RX_ON==0){
   1A10 90 21 02           2873 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A13 E0                 2874 	movx	a,@dptr
   1A14 20 E2 27           2875 	jb	acc.2,00127$
   1A17 90 E6 04           2876 	mov	dptr,#_CONTROL_CONFIG0
   1A1A E0                 2877 	movx	a,@dptr
   1A1B 20 E7 20           2878 	jb	acc.7,00127$
                           2879 ;	../../shared/src/interrupt.c:434: reg_PIN_PLL_READY_RX_LANE = 0;
   1A1E 90 21 02           2880 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A21 E0                 2881 	movx	a,@dptr
   1A22 54 BF              2882 	anl	a,#0xbf
   1A24 F0                 2883 	movx	@dptr,a
                           2884 ;	../../shared/src/interrupt.c:435: PHY_NS = ST_PSLUMBER_RX;
   1A25 90 22 31           2885 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1A28 74 1D              2886 	mov	a,#0x1D
   1A2A F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1A2B 90 22 33           2889 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A2E 74 FF              2890 	mov	a,#0xFF
   1A30 F0                 2891 	movx	@dptr,a
                           2892 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1A31 90 22 0B           2893 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1A34 E0                 2894 	movx	a,@dptr
   1A35 54 7F              2895 	anl	a,#0x7f
   1A37 F0                 2896 	movx	@dptr,a
                           2897 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1A38 75 F7 01           2898 	mov	_SRST,#0x01
                           2899 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1A3B 75 F7 01           2900 	mov	_SRST,#0x01
                           2901 ;	../../shared/src/interrupt.c:438: mcu_reset();
   1A3E                    2902 00127$:
                           2903 ;	../../shared/src/interrupt.c:440: if(reg_PIN_PU_RX_RD_LANE == 0 && cmx_FORCE_PARTIAL_PU_RX_ON==1)
   1A3E 90 21 02           2904 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A41 E0                 2905 	movx	a,@dptr
   1A42 20 E2 11           2906 	jb	acc.2,00137$
   1A45 90 E6 04           2907 	mov	dptr,#_CONTROL_CONFIG0
   1A48 E0                 2908 	movx	a,@dptr
   1A49 23                 2909 	rl	a
   1A4A 54 01              2910 	anl	a,#0x01
   1A4C FA                 2911 	mov	r2,a
   1A4D BA 01 06           2912 	cjne	r2,#0x01,00137$
                           2913 ;	../../shared/src/interrupt.c:441: SKIP_RX_INIT = 1;
   1A50 90 22 3A           2914 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   1A53 74 01              2915 	mov	a,#0x01
   1A55 F0                 2916 	movx	@dptr,a
                           2917 ;	../../shared/src/interrupt.c:443: }
   1A56                    2918 00137$:
                           2919 ;	../../shared/src/interrupt.c:446: PHY_INT_LANE = 0xFF;
   1A56 90 22 33           2920 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A59 74 FF              2921 	mov	a,#0xFF
   1A5B F0                 2922 	movx	@dptr,a
                           2923 ;	../../shared/src/interrupt.c:448: EA = 1;
   1A5C D2 AF              2924 	setb	_EA
   1A5E D0 D0              2925 	pop	psw
   1A60 D0 83              2926 	pop	dph
   1A62 D0 82              2927 	pop	dpl
   1A64 D0 E0              2928 	pop	acc
   1A66 32                 2929 	reti
                           2930 ;	eliminated unneeded push/pop b
                           2931 ;------------------------------------------------------------
                           2932 ;Allocation info for local variables in function 'int2_isr'
                           2933 ;------------------------------------------------------------
                           2934 ;------------------------------------------------------------
                           2935 ;	../../shared/src/interrupt.c:453: void int2_isr (void) __interrupt (9) __using (2) //gen
                           2936 ;	-----------------------------------------
                           2937 ;	 function int2_isr
                           2938 ;	-----------------------------------------
   1A67                    2939 _int2_isr:
   1A67 C0 E0              2940 	push	acc
   1A69 C0 82              2941 	push	dpl
   1A6B C0 83              2942 	push	dph
   1A6D C0 D0              2943 	push	psw
   1A6F 75 D0 10           2944 	mov	psw,#0x10
                           2945 ;	../../shared/src/interrupt.c:455: EA = 0;
   1A72 C2 AF              2946 	clr	_EA
                           2947 ;	../../shared/src/interrupt.c:457: PHY_INT_LANE = 0x2;
   1A74 90 22 33           2948 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A77 74 02              2949 	mov	a,#0x02
   1A79 F0                 2950 	movx	@dptr,a
                           2951 ;	../../shared/src/interrupt.c:459: if(reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
   1A7A 90 20 2B           2952 	mov	dptr,#(_SPD_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   1A7D E0                 2953 	movx	a,@dptr
   1A7E 30 E6 0F           2954 	jnb	acc.6,00102$
                           2955 ;	../../shared/src/interrupt.c:462: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x40;
                           2956 ;	../../shared/src/interrupt.c:463: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
   1A81 90 20 57           2957 	mov	dptr,#(_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE + 0x0003)
   1A84 74 40              2958 	mov	a,#0x40
   1A86 F0                 2959 	movx	@dptr,a
   1A87 E4                 2960 	clr	a
   1A88 F0                 2961 	movx	@dptr,a
                           2962 ;	../../shared/src/interrupt.c:464: reg_PIN_PLL_READY_RX_LANE = 0;
   1A89 90 21 02           2963 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A8C E0                 2964 	movx	a,@dptr
   1A8D 54 BF              2965 	anl	a,#0xbf
   1A8F F0                 2966 	movx	@dptr,a
   1A90                    2967 00102$:
                           2968 ;	../../shared/src/interrupt.c:466: if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
   1A90 90 20 2B           2969 	mov	dptr,#(_SPD_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   1A93 E0                 2970 	movx	a,@dptr
   1A94 30 E7 0F           2971 	jnb	acc.7,00104$
                           2972 ;	../../shared/src/interrupt.c:469: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x80;
                           2973 ;	../../shared/src/interrupt.c:470: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
   1A97 90 20 57           2974 	mov	dptr,#(_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE + 0x0003)
   1A9A 74 80              2975 	mov	a,#0x80
   1A9C F0                 2976 	movx	@dptr,a
   1A9D E4                 2977 	clr	a
   1A9E F0                 2978 	movx	@dptr,a
                           2979 ;	../../shared/src/interrupt.c:471: reg_PIN_PLL_READY_TX_LANE = 0;
   1A9F 90 20 02           2980 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1AA2 E0                 2981 	movx	a,@dptr
   1AA3 54 FB              2982 	anl	a,#0xfb
   1AA5 F0                 2983 	movx	@dptr,a
   1AA6                    2984 00104$:
                           2985 ;	../../shared/src/interrupt.c:474: if(reg_ANA_RX_PU_DLY2_LANE && reg_ANA_PU_TX_LANE) {
   1AA6 90 21 4C           2986 	mov	dptr,#_INPUT_RX_PIN_REG3_LANE
   1AA9 E0                 2987 	movx	a,@dptr
   1AAA 30 E0 3F           2988 	jnb	acc.0,00109$
   1AAD 90 20 03           2989 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   1AB0 E0                 2990 	movx	a,@dptr
   1AB1 30 E6 38           2991 	jnb	acc.6,00109$
                           2992 ;	../../shared/src/interrupt.c:475: if(phy_mode == SERDES) { PHY_NS = ST_CAL; PHY_STATUS_INT |= SPDCHG_ON;}
   1AB4 90 A3 16           2993 	mov	dptr,#(_SYSTEM + 0x0002)
   1AB7 E0                 2994 	movx	a,@dptr
   1AB8 54 07              2995 	anl	a,#0x07
   1ABA FA                 2996 	mov	r2,a
   1ABB BA 04 15           2997 	cjne	r2,#0x04,00106$
   1ABE 90 22 31           2998 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1AC1 74 03              2999 	mov	a,#0x03
   1AC3 F0                 3000 	movx	@dptr,a
   1AC4 90 22 38           3001 	mov	dptr,#_MCU_STATUS2_LANE
   1AC7 E0                 3002 	movx	a,@dptr
   1AC8 FA                 3003 	mov	r2,a
   1AC9 43 12 01           3004 	orl	ar2,#0x01
   1ACC 90 22 38           3005 	mov	dptr,#_MCU_STATUS2_LANE
   1ACF EA                 3006 	mov	a,r2
   1AD0 F0                 3007 	movx	@dptr,a
   1AD1 80 06              3008 	sjmp	00107$
   1AD3                    3009 00106$:
                           3010 ;	../../shared/src/interrupt.c:476: else PHY_NS = ST_SPDCHG;
   1AD3 90 22 31           3011 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1AD6 74 19              3012 	mov	a,#0x19
   1AD8 F0                 3013 	movx	@dptr,a
   1AD9                    3014 00107$:
                           3015 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1AD9 90 22 33           3016 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1ADC 74 FF              3017 	mov	a,#0xFF
   1ADE F0                 3018 	movx	@dptr,a
                           3019 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1ADF 90 22 0B           3020 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1AE2 E0                 3021 	movx	a,@dptr
   1AE3 54 7F              3022 	anl	a,#0x7f
   1AE5 F0                 3023 	movx	@dptr,a
                           3024 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1AE6 75 F7 01           3025 	mov	_SRST,#0x01
                           3026 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1AE9 75 F7 01           3027 	mov	_SRST,#0x01
                           3028 ;	../../shared/src/interrupt.c:479: mcu_reset();
   1AEC                    3029 00109$:
                           3030 ;	../../shared/src/interrupt.c:482: PHY_INT_LANE = 0xFF;
   1AEC 90 22 33           3031 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1AEF 74 FF              3032 	mov	a,#0xFF
   1AF1 F0                 3033 	movx	@dptr,a
                           3034 ;	../../shared/src/interrupt.c:483: EA = 1;
   1AF2 D2 AF              3035 	setb	_EA
   1AF4 D0 D0              3036 	pop	psw
   1AF6 D0 83              3037 	pop	dph
   1AF8 D0 82              3038 	pop	dpl
   1AFA D0 E0              3039 	pop	acc
   1AFC 32                 3040 	reti
                           3041 ;	eliminated unneeded push/pop b
                           3042 ;------------------------------------------------------------
                           3043 ;Allocation info for local variables in function 'int11_isr'
                           3044 ;------------------------------------------------------------
                           3045 ;------------------------------------------------------------
                           3046 ;	../../shared/src/interrupt.c:486: void int11_isr (void) __interrupt (20)  __using (2)  //rx_train
                           3047 ;	-----------------------------------------
                           3048 ;	 function int11_isr
                           3049 ;	-----------------------------------------
   1AFD                    3050 _int11_isr:
   1AFD C0 E0              3051 	push	acc
   1AFF C0 82              3052 	push	dpl
   1B01 C0 83              3053 	push	dph
   1B03 C0 D0              3054 	push	psw
   1B05 75 D0 10           3055 	mov	psw,#0x10
                           3056 ;	../../shared/src/interrupt.c:488: EA = 0;
   1B08 C2 AF              3057 	clr	_EA
                           3058 ;	../../shared/src/interrupt.c:489: EX11 = 0 ;//reg_INT_ENABLE_ALL_LANE = 0;
   1B0A C2 9E              3059 	clr	_EX11
                           3060 ;	../../shared/src/interrupt.c:490: PHY_INT_LANE = 11;
   1B0C 90 22 33           3061 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1B0F 74 0B              3062 	mov	a,#0x0B
   1B11 F0                 3063 	movx	@dptr,a
                           3064 ;	../../shared/src/interrupt.c:492: if( reg_PIN_RX_TRAIN_ENABLE_ISR_LANE ) {
   1B12 90 26 5C           3065 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   1B15 E0                 3066 	movx	a,@dptr
   1B16 20 E0 03           3067 	jb	acc.0,00130$
   1B19 02 1B 8F           3068 	ljmp	00111$
   1B1C                    3069 00130$:
                           3070 ;	../../shared/src/interrupt.c:495: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
                           3071 ;	../../shared/src/interrupt.c:496: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
   1B1C 90 26 64           3072 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   1B1F 74 01              3073 	mov	a,#0x01
   1B21 F0                 3074 	movx	@dptr,a
   1B22 E4                 3075 	clr	a
   1B23 F0                 3076 	movx	@dptr,a
                           3077 ;	../../shared/src/interrupt.c:498: reg_MCU_DEBUG0_LANE_7_0 = do_rxtrain;
   1B24 A2 07              3078 	mov	c,_do_rxtrain
   1B26 E4                 3079 	clr	a
   1B27 33                 3080 	rlc	a
   1B28 FA                 3081 	mov	r2,a
   1B29 90 22 B4           3082 	mov	dptr,#_MCU_DEBUG0_LANE
   1B2C EA                 3083 	mov	a,r2
   1B2D F0                 3084 	movx	@dptr,a
                           3085 ;	../../shared/src/interrupt.c:500: if(reg_PIN_PLL_READY_TX_LANE) {
   1B2E 90 20 02           3086 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1B31 E0                 3087 	movx	a,@dptr
   1B32 30 E2 5A           3088 	jnb	acc.2,00111$
                           3089 ;	../../shared/src/interrupt.c:501: if( !do_rxtrain ) {
   1B35 20 07 24           3090 	jb	_do_rxtrain,00106$
                           3091 ;	../../shared/src/interrupt.c:502: if(reg_PIN_RX_TRAIN_ENABLE_RD_LANE) { //train start
   1B38 90 26 79           3092 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1B3B E0                 3093 	movx	a,@dptr
   1B3C 30 E5 50           3094 	jnb	acc.5,00111$
                           3095 ;	../../shared/src/interrupt.c:503: reg_RX_TRAIN_ON_LANE = 1;
   1B3F 90 26 7B           3096 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1B42 E0                 3097 	movx	a,@dptr
   1B43 44 04              3098 	orl	a,#0x04
   1B45 F0                 3099 	movx	@dptr,a
                           3100 ;	../../shared/src/interrupt.c:504: do_rxtrain = 1;
   1B46 D2 07              3101 	setb	_do_rxtrain
                           3102 ;	../../shared/src/interrupt.c:505: train_timer_int = 0;
   1B48 90 66 CC           3103 	mov	dptr,#_train_timer_int
   1B4B E4                 3104 	clr	a
   1B4C F0                 3105 	movx	@dptr,a
                           3106 ;	../../shared/src/interrupt.c:506: timeout = 0;
   1B4D C2 03              3107 	clr	_timeout
                           3108 ;	../../shared/src/interrupt.c:507: timeout_stop2;
   1B4F 75 C8 60           3109 	mov	_T2CON,#0x60
   1B52 C2 C6              3110 	clr	_TF2
                           3111 ;	../../shared/src/interrupt.c:508: PHY_NS = ST_TRXTRAIN;
   1B54 90 22 31           3112 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1B57 74 28              3113 	mov	a,#0x28
   1B59 F0                 3114 	movx	@dptr,a
   1B5A 80 33              3115 	sjmp	00111$
   1B5C                    3116 00106$:
                           3117 ;	../../shared/src/interrupt.c:516: if(PHY_NS == ST_TXTRAIN) {
   1B5C 90 22 31           3118 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1B5F E0                 3119 	movx	a,@dptr
   1B60 FA                 3120 	mov	r2,a
   1B61 BA 29 10           3121 	cjne	r2,#0x29,00104$
                           3122 ;	../../shared/src/interrupt.c:517: do_rxtrain = 0;
   1B64 C2 07              3123 	clr	_do_rxtrain
                           3124 ;	../../shared/src/interrupt.c:518: reg_RX_TRAIN_COMPLETE_LANE = 0;
   1B66 90 26 7B           3125 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1B69 E0                 3126 	movx	a,@dptr
   1B6A 54 FE              3127 	anl	a,#0xfe
   1B6C F0                 3128 	movx	@dptr,a
                           3129 ;	../../shared/src/interrupt.c:519: reg_RX_TRAIN_ON_LANE = 0;
   1B6D 90 26 7B           3130 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1B70 E0                 3131 	movx	a,@dptr
   1B71 54 FB              3132 	anl	a,#0xfb
   1B73 F0                 3133 	movx	@dptr,a
   1B74                    3134 00104$:
                           3135 ;	../../shared/src/interrupt.c:522: PHY_NS = ST_RXTRAIN;
   1B74 90 22 31           3136 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1B77 74 2A              3137 	mov	a,#0x2A
   1B79 F0                 3138 	movx	@dptr,a
                           3139 ;	../../shared/src/interrupt.c:523: EX11 = 1; mcu_reset();
   1B7A D2 9E              3140 	setb	_EX11
                           3141 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1B7C 90 22 33           3142 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1B7F 74 FF              3143 	mov	a,#0xFF
   1B81 F0                 3144 	movx	@dptr,a
                           3145 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1B82 90 22 0B           3146 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1B85 E0                 3147 	movx	a,@dptr
   1B86 54 7F              3148 	anl	a,#0x7f
   1B88 F0                 3149 	movx	@dptr,a
                           3150 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1B89 75 F7 01           3151 	mov	_SRST,#0x01
                           3152 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1B8C 75 F7 01           3153 	mov	_SRST,#0x01
                           3154 ;	../../shared/src/interrupt.c:523: EX11 = 1; mcu_reset();
   1B8F                    3155 00111$:
                           3156 ;	../../shared/src/interrupt.c:528: if(reg_FRAME_UNLOCK_ISR_LANE) {
   1B8F 90 21 43           3157 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   1B92 E0                 3158 	movx	a,@dptr
   1B93 30 E5 2B           3159 	jnb	acc.5,00117$
                           3160 ;	../../shared/src/interrupt.c:529: reg_FRAME_UNLOCK_ISR_CLEAR_LANE = 1;
                           3161 ;	../../shared/src/interrupt.c:530: reg_FRAME_UNLOCK_ISR_CLEAR_LANE = 0;
   1B96 90 21 5B           3162 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   1B99 E0                 3163 	movx	a,@dptr
   1B9A 44 20              3164 	orl	a,#0x20
   1B9C F0                 3165 	movx	@dptr,a
   1B9D E0                 3166 	movx	a,@dptr
   1B9E 54 DF              3167 	anl	a,#0xdf
   1BA0 F0                 3168 	movx	@dptr,a
                           3169 ;	../../shared/src/interrupt.c:532: if(link_train_mode==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && reg_FRAME_LOCK_LANE==0) {
   1BA1 90 26 7B           3170 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1BA4 E0                 3171 	movx	a,@dptr
   1BA5 20 E7 19           3172 	jb	acc.7,00117$
   1BA8 90 26 79           3173 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1BAB E0                 3174 	movx	a,@dptr
   1BAC 30 E6 12           3175 	jnb	acc.6,00117$
   1BAF 90 21 26           3176 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   1BB2 E0                 3177 	movx	a,@dptr
   1BB3 20 E2 0B           3178 	jb	acc.2,00117$
                           3179 ;	../../shared/src/interrupt.c:533: reg_TIMER_3_EN_LANE = 0;
                           3180 ;	../../shared/src/interrupt.c:534: reg_TIMER_3_EN_LANE = 1;
   1BB6 90 22 74           3181 	mov	dptr,#_MCU_TIMER_CONTROL
   1BB9 E0                 3182 	movx	a,@dptr
   1BBA 54 F7              3183 	anl	a,#0xf7
   1BBC F0                 3184 	movx	@dptr,a
   1BBD E0                 3185 	movx	a,@dptr
   1BBE 44 08              3186 	orl	a,#0x08
   1BC0 F0                 3187 	movx	@dptr,a
   1BC1                    3188 00117$:
                           3189 ;	../../shared/src/interrupt.c:538: PHY_INT_LANE = 0xFF;
   1BC1 90 22 33           3190 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1BC4 74 FF              3191 	mov	a,#0xFF
   1BC6 F0                 3192 	movx	@dptr,a
                           3193 ;	../../shared/src/interrupt.c:540: EX11 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   1BC7 D2 9E              3194 	setb	_EX11
                           3195 ;	../../shared/src/interrupt.c:541: EA = 1;
   1BC9 D2 AF              3196 	setb	_EA
   1BCB D0 D0              3197 	pop	psw
   1BCD D0 83              3198 	pop	dph
   1BCF D0 82              3199 	pop	dpl
   1BD1 D0 E0              3200 	pop	acc
   1BD3 32                 3201 	reti
                           3202 ;	eliminated unneeded push/pop b
                           3203 ;------------------------------------------------------------
                           3204 ;Allocation info for local variables in function 'int5_isr'
                           3205 ;------------------------------------------------------------
                           3206 ;------------------------------------------------------------
                           3207 ;	../../shared/src/interrupt.c:545: void int5_isr (void) __interrupt (12) __using (2) //txtrain
                           3208 ;	-----------------------------------------
                           3209 ;	 function int5_isr
                           3210 ;	-----------------------------------------
   1BD4                    3211 _int5_isr:
   1BD4 C0 E0              3212 	push	acc
   1BD6 C0 82              3213 	push	dpl
   1BD8 C0 83              3214 	push	dph
   1BDA C0 D0              3215 	push	psw
   1BDC 75 D0 10           3216 	mov	psw,#0x10
                           3217 ;	../../shared/src/interrupt.c:547: EA = 0;
   1BDF C2 AF              3218 	clr	_EA
                           3219 ;	../../shared/src/interrupt.c:548: PHY_INT_LANE = 5;
   1BE1 90 22 33           3220 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1BE4 74 05              3221 	mov	a,#0x05
   1BE6 F0                 3222 	movx	@dptr,a
                           3223 ;	../../shared/src/interrupt.c:552: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x02;
                           3224 ;	../../shared/src/interrupt.c:553: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
   1BE7 90 26 64           3225 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   1BEA 74 02              3226 	mov	a,#0x02
   1BEC F0                 3227 	movx	@dptr,a
   1BED E4                 3228 	clr	a
   1BEE F0                 3229 	movx	@dptr,a
                           3230 ;	../../shared/src/interrupt.c:555: reg_MCU_DEBUG0_LANE_7_0 = do_train;
   1BEF A2 06              3231 	mov	c,_do_train
   1BF1 E4                 3232 	clr	a
   1BF2 33                 3233 	rlc	a
   1BF3 FA                 3234 	mov	r2,a
   1BF4 90 22 B4           3235 	mov	dptr,#_MCU_DEBUG0_LANE
   1BF7 F0                 3236 	movx	@dptr,a
                           3237 ;	../../shared/src/interrupt.c:558: if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==0) {
   1BF8 90 26 79           3238 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1BFB E0                 3239 	movx	a,@dptr
   1BFC 20 E6 03           3240 	jb	acc.6,00157$
   1BFF 02 1C DE           3241 	ljmp	00132$
   1C02                    3242 00157$:
   1C02 30 06 03           3243 	jnb	_do_train,00158$
   1C05 02 1C DE           3244 	ljmp	00132$
   1C08                    3245 00158$:
                           3246 ;	../../shared/src/interrupt.c:560: if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1; } //force to 32bit
   1C08 90 A3 16           3247 	mov	dptr,#(_SYSTEM + 0x0002)
   1C0B E0                 3248 	movx	a,@dptr
   1C0C 54 07              3249 	anl	a,#0x07
   1C0E FA                 3250 	mov	r2,a
   1C0F BA 04 0E           3251 	cjne	r2,#0x04,00102$
   1C12 90 20 37           3252 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   1C15 E0                 3253 	movx	a,@dptr
   1C16 44 80              3254 	orl	a,#0x80
   1C18 F0                 3255 	movx	@dptr,a
   1C19 90 21 07           3256 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   1C1C E0                 3257 	movx	a,@dptr
   1C1D 44 80              3258 	orl	a,#0x80
   1C1F F0                 3259 	movx	@dptr,a
   1C20                    3260 00102$:
                           3261 ;	../../shared/src/interrupt.c:562: reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design
   1C20 90 26 7B           3262 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1C23 E0                 3263 	movx	a,@dptr
   1C24 44 02              3264 	orl	a,#0x02
   1C26 F0                 3265 	movx	@dptr,a
                           3266 ;	../../shared/src/interrupt.c:564: PHY_NS = ST_TRXTRAIN;
   1C27 90 22 31           3267 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1C2A 74 28              3268 	mov	a,#0x28
   1C2C F0                 3269 	movx	@dptr,a
                           3270 ;	../../shared/src/interrupt.c:565: do_train = 1;
   1C2D D2 06              3271 	setb	_do_train
                           3272 ;	../../shared/src/interrupt.c:566: if((phy_mode != PCIE) && (cmx_TX_TRAIN_MODE == 1))
   1C2F 90 A3 16           3273 	mov	dptr,#(_SYSTEM + 0x0002)
   1C32 E0                 3274 	movx	a,@dptr
   1C33 54 07              3275 	anl	a,#0x07
   1C35 FA                 3276 	mov	r2,a
   1C36 BA 03 02           3277 	cjne	r2,#0x03,00161$
   1C39 80 12              3278 	sjmp	00104$
   1C3B                    3279 00161$:
   1C3B 90 E6 28           3280 	mov	dptr,#_TRAIN_IF_CONFIG
   1C3E E0                 3281 	movx	a,@dptr
   1C3F 03                 3282 	rr	a
   1C40 54 01              3283 	anl	a,#0x01
   1C42 FA                 3284 	mov	r2,a
   1C43 BA 01 07           3285 	cjne	r2,#0x01,00104$
                           3286 ;	../../shared/src/interrupt.c:567: reg_ANA_TX_EM_PEAK_EN_LANE = 1;
   1C46 90 26 52           3287 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   1C49 E0                 3288 	movx	a,@dptr
   1C4A 44 80              3289 	orl	a,#0x80
   1C4C F0                 3290 	movx	@dptr,a
   1C4D                    3291 00104$:
                           3292 ;	../../shared/src/interrupt.c:568: train_comp = 0;
   1C4D 90 67 11           3293 	mov	dptr,#_train_comp
   1C50 E4                 3294 	clr	a
   1C51 F0                 3295 	movx	@dptr,a
                           3296 ;	../../shared/src/interrupt.c:570: timeout = 0;
   1C52 C2 03              3297 	clr	_timeout
                           3298 ;	../../shared/src/interrupt.c:571: timeout_stop2;
   1C54 75 C8 60           3299 	mov	_T2CON,#0x60
   1C57 C2 C6              3300 	clr	_TF2
                           3301 ;	../../shared/src/interrupt.c:572: reg_INT4_TIMER3_INT_EN_LANE = 0;
   1C59 90 22 50           3302 	mov	dptr,#_MCU_INT4_CONTROL
   1C5C E0                 3303 	movx	a,@dptr
   1C5D 54 DF              3304 	anl	a,#0xdf
   1C5F F0                 3305 	movx	@dptr,a
                           3306 ;	../../shared/src/interrupt.c:573: train_timer_int = 0;
   1C60 90 66 CC           3307 	mov	dptr,#_train_timer_int
   1C63 E4                 3308 	clr	a
   1C64 F0                 3309 	movx	@dptr,a
                           3310 ;	../../shared/src/interrupt.c:574: reg_FRAME_UNLOCK_ISR_LANE = 0;
   1C65 90 21 43           3311 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   1C68 E0                 3312 	movx	a,@dptr
   1C69 54 DF              3313 	anl	a,#0xdf
   1C6B F0                 3314 	movx	@dptr,a
                           3315 ;	../../shared/src/interrupt.c:575: reg_FRAME_LOCK_ISR_LANE = 0;
   1C6C 90 21 43           3316 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   1C6F E0                 3317 	movx	a,@dptr
   1C70 54 BF              3318 	anl	a,#0xbf
   1C72 F0                 3319 	movx	@dptr,a
                           3320 ;	../../shared/src/interrupt.c:576: reg_INT_TIMER3_ISR_CLEAR_LANE = 1;
                           3321 ;	../../shared/src/interrupt.c:577: reg_INT_TIMER3_ISR_CLEAR_LANE = 0;
   1C73 90 22 D8           3322 	mov	dptr,#_MCU_IRQ_ISR_LANE
   1C76 E0                 3323 	movx	a,@dptr
   1C77 44 08              3324 	orl	a,#0x08
   1C79 F0                 3325 	movx	@dptr,a
   1C7A E0                 3326 	movx	a,@dptr
   1C7B 54 F7              3327 	anl	a,#0xf7
   1C7D F0                 3328 	movx	@dptr,a
                           3329 ;	../../shared/src/interrupt.c:580: if(link_train_mode) {
   1C7E 90 26 7B           3330 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1C81 E0                 3331 	movx	a,@dptr
   1C82 30 E7 09           3332 	jnb	acc.7,00110$
                           3333 ;	../../shared/src/interrupt.c:581: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   1C85 90 26 04           3334 	mov	dptr,#_DME_ENC_REG1
   1C88 E4                 3335 	clr	a
   1C89 F0                 3336 	movx	@dptr,a
   1C8A A3                 3337 	inc	dptr
   1C8B F0                 3338 	movx	@dptr,a
   1C8C 80 42              3339 	sjmp	00111$
   1C8E                    3340 00110$:
                           3341 ;	../../shared/src/interrupt.c:589: tx_init_bit = 1;
   1C8E 90 67 10           3342 	mov	dptr,#_tx_init_bit
   1C91 74 01              3343 	mov	a,#0x01
   1C93 F0                 3344 	movx	@dptr,a
                           3345 ;	../../shared/src/interrupt.c:590: if(phy_mode == SERDES) { //Ethernet
   1C94 90 A3 16           3346 	mov	dptr,#(_SYSTEM + 0x0002)
   1C97 E0                 3347 	movx	a,@dptr
   1C98 54 07              3348 	anl	a,#0x07
   1C9A FA                 3349 	mov	r2,a
   1C9B BA 04 10           3350 	cjne	r2,#0x04,00107$
                           3351 ;	../../shared/src/interrupt.c:591: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x0000; //tx_comp=0
   1C9E 90 26 04           3352 	mov	dptr,#_DME_ENC_REG1
   1CA1 E4                 3353 	clr	a
   1CA2 F0                 3354 	movx	@dptr,a
   1CA3 A3                 3355 	inc	dptr
   1CA4 F0                 3356 	movx	@dptr,a
                           3357 ;	../../shared/src/interrupt.c:592: reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;        //hold
   1CA5 90 26 06           3358 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   1CA8 E4                 3359 	clr	a
   1CA9 F0                 3360 	movx	@dptr,a
   1CAA A3                 3361 	inc	dptr
   1CAB F0                 3362 	movx	@dptr,a
   1CAC 80 10              3363 	sjmp	00108$
   1CAE                    3364 00107$:
                           3365 ;	../../shared/src/interrupt.c:595: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x4000; //tx_comp=0,tx_init=1
   1CAE 90 26 04           3366 	mov	dptr,#_DME_ENC_REG1
   1CB1 E4                 3367 	clr	a
   1CB2 F0                 3368 	movx	@dptr,a
   1CB3 A3                 3369 	inc	dptr
   1CB4 74 40              3370 	mov	a,#0x40
   1CB6 F0                 3371 	movx	@dptr,a
                           3372 ;	../../shared/src/interrupt.c:596: reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;	   //hold
   1CB7 90 26 06           3373 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   1CBA E4                 3374 	clr	a
   1CBB F0                 3375 	movx	@dptr,a
   1CBC A3                 3376 	inc	dptr
   1CBD F0                 3377 	movx	@dptr,a
   1CBE                    3378 00108$:
                           3379 ;	../../shared/src/interrupt.c:600: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1;
                           3380 ;	../../shared/src/interrupt.c:601: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   1CBE 90 26 7A           3381 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   1CC1 E0                 3382 	movx	a,@dptr
   1CC2 44 40              3383 	orl	a,#0x40
   1CC4 F0                 3384 	movx	@dptr,a
   1CC5 E0                 3385 	movx	a,@dptr
   1CC6 54 BF              3386 	anl	a,#0xbf
   1CC8 F0                 3387 	movx	@dptr,a
                           3388 ;	../../shared/src/interrupt.c:602: lnx_ERROR_TTIU_DETECTED_LANE = 0;
   1CC9 90 60 0A           3389 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   1CCC E0                 3390 	movx	a,@dptr
   1CCD 54 FE              3391 	anl	a,#0xfe
   1CCF F0                 3392 	movx	@dptr,a
   1CD0                    3393 00111$:
                           3394 ;	../../shared/src/interrupt.c:605: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1;
                           3395 ;	../../shared/src/interrupt.c:606: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   1CD0 90 26 7A           3396 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   1CD3 E0                 3397 	movx	a,@dptr
   1CD4 44 20              3398 	orl	a,#0x20
   1CD6 F0                 3399 	movx	@dptr,a
   1CD7 E0                 3400 	movx	a,@dptr
   1CD8 54 DF              3401 	anl	a,#0xdf
   1CDA F0                 3402 	movx	@dptr,a
   1CDB 02 1D FF           3403 	ljmp	00133$
   1CDE                    3404 00132$:
                           3405 ;	../../shared/src/interrupt.c:608: else if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==1) {
   1CDE 90 26 79           3406 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1CE1 E0                 3407 	movx	a,@dptr
   1CE2 30 E6 31           3408 	jnb	acc.6,00127$
   1CE5 30 06 2E           3409 	jnb	_do_train,00127$
   1CE8 90 26 7B           3410 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1CEB E0                 3411 	movx	a,@dptr
   1CEC C4                 3412 	swap	a
   1CED 54 01              3413 	anl	a,#0x01
   1CEF FA                 3414 	mov	r2,a
   1CF0 BA 01 23           3415 	cjne	r2,#0x01,00127$
                           3416 ;	../../shared/src/interrupt.c:609: PHY_NS = ST_TRXTRAIN;
   1CF3 90 22 31           3417 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1CF6 74 28              3418 	mov	a,#0x28
   1CF8 F0                 3419 	movx	@dptr,a
                           3420 ;	../../shared/src/interrupt.c:610: train_comp = 0;
   1CF9 90 67 11           3421 	mov	dptr,#_train_comp
   1CFC E4                 3422 	clr	a
   1CFD F0                 3423 	movx	@dptr,a
                           3424 ;	../../shared/src/interrupt.c:611: timeout = 0;
   1CFE C2 03              3425 	clr	_timeout
                           3426 ;	../../shared/src/interrupt.c:612: timeout_stop2;
   1D00 75 C8 60           3427 	mov	_T2CON,#0x60
   1D03 C2 C6              3428 	clr	_TF2
                           3429 ;	../../shared/src/interrupt.c:613: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   1D05 90 26 78           3430 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1D08 E0                 3431 	movx	a,@dptr
   1D09 54 FB              3432 	anl	a,#0xfb
   1D0B F0                 3433 	movx	@dptr,a
                           3434 ;	../../shared/src/interrupt.c:614: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;
   1D0C 90 26 7B           3435 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D0F E0                 3436 	movx	a,@dptr
   1D10 54 EF              3437 	anl	a,#0xef
   1D12 F0                 3438 	movx	@dptr,a
   1D13 02 1D FF           3439 	ljmp	00133$
   1D16                    3440 00127$:
                           3441 ;	../../shared/src/interrupt.c:617: else if ( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0){ //abort
   1D16 90 26 79           3442 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1D19 E0                 3443 	movx	a,@dptr
   1D1A 20 E6 67           3444 	jb	acc.6,00122$
   1D1D 30 06 64           3445 	jnb	_do_train,00122$
   1D20 90 26 7B           3446 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D23 E0                 3447 	movx	a,@dptr
   1D24 20 E4 5D           3448 	jb	acc.4,00122$
                           3449 ;	../../shared/src/interrupt.c:618: if(PHY_NS == ST_RXTRAIN) {
   1D27 90 22 31           3450 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1D2A E0                 3451 	movx	a,@dptr
   1D2B FA                 3452 	mov	r2,a
   1D2C BA 2A 3A           3453 	cjne	r2,#0x2A,00115$
                           3454 ;	../../shared/src/interrupt.c:619: do_train = 0;
   1D2F C2 06              3455 	clr	_do_train
                           3456 ;	../../shared/src/interrupt.c:620: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   1D31 90 26 78           3457 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1D34 E0                 3458 	movx	a,@dptr
   1D35 54 FB              3459 	anl	a,#0xfb
   1D37 F0                 3460 	movx	@dptr,a
                           3461 ;	../../shared/src/interrupt.c:621: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;
   1D38 90 26 7B           3462 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D3B E0                 3463 	movx	a,@dptr
   1D3C 54 EF              3464 	anl	a,#0xef
   1D3E F0                 3465 	movx	@dptr,a
                           3466 ;	../../shared/src/interrupt.c:622: reg_TX_TRAIN_ON_LANE = 0;
   1D3F 90 26 7B           3467 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D42 E0                 3468 	movx	a,@dptr
   1D43 54 FD              3469 	anl	a,#0xfd
   1D45 F0                 3470 	movx	@dptr,a
                           3471 ;	../../shared/src/interrupt.c:624: if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; }
   1D46 90 A3 16           3472 	mov	dptr,#(_SYSTEM + 0x0002)
   1D49 E0                 3473 	movx	a,@dptr
   1D4A 54 07              3474 	anl	a,#0x07
   1D4C FA                 3475 	mov	r2,a
   1D4D BA 04 19           3476 	cjne	r2,#0x04,00115$
   1D50 90 67 B0           3477 	mov	dptr,#_tx_sel_bit
   1D53 E0                 3478 	movx	a,@dptr
   1D54 90 20 37           3479 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   1D57 13                 3480 	rrc	a
   1D58 E0                 3481 	movx	a,@dptr
   1D59 92 E7              3482 	mov	acc.7,c
   1D5B F0                 3483 	movx	@dptr,a
   1D5C 90 67 B1           3484 	mov	dptr,#_rx_sel_bit
   1D5F E0                 3485 	movx	a,@dptr
   1D60 FA                 3486 	mov	r2,a
   1D61 90 21 07           3487 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   1D64 13                 3488 	rrc	a
   1D65 E0                 3489 	movx	a,@dptr
   1D66 92 E7              3490 	mov	acc.7,c
   1D68 F0                 3491 	movx	@dptr,a
   1D69                    3492 00115$:
                           3493 ;	../../shared/src/interrupt.c:629: PHY_NS = ST_TXTRAIN;
   1D69 90 22 31           3494 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1D6C 74 29              3495 	mov	a,#0x29
   1D6E F0                 3496 	movx	@dptr,a
                           3497 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1D6F 90 22 33           3498 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1D72 74 FF              3499 	mov	a,#0xFF
   1D74 F0                 3500 	movx	@dptr,a
                           3501 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1D75 90 22 0B           3502 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1D78 E0                 3503 	movx	a,@dptr
   1D79 54 7F              3504 	anl	a,#0x7f
   1D7B F0                 3505 	movx	@dptr,a
                           3506 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1D7C 75 F7 01           3507 	mov	_SRST,#0x01
                           3508 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1D7F 75 F7 01           3509 	mov	_SRST,#0x01
                           3510 ;	../../shared/src/interrupt.c:630: mcu_reset();
   1D82 80 7B              3511 	sjmp	00133$
   1D84                    3512 00122$:
                           3513 ;	../../shared/src/interrupt.c:633: else if (reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==1) {//reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0 ////assume H->L->H  restart
   1D84 90 26 79           3514 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1D87 E0                 3515 	movx	a,@dptr
   1D88 30 E6 74           3516 	jnb	acc.6,00133$
   1D8B 30 06 71           3517 	jnb	_do_train,00133$
                           3518 ;	../../shared/src/interrupt.c:634: train_comp = 0;
   1D8E 90 67 11           3519 	mov	dptr,#_train_comp
   1D91 E4                 3520 	clr	a
   1D92 F0                 3521 	movx	@dptr,a
                           3522 ;	../../shared/src/interrupt.c:635: timeout = 0;
   1D93 C2 03              3523 	clr	_timeout
                           3524 ;	../../shared/src/interrupt.c:636: timeout_stop2;
   1D95 75 C8 60           3525 	mov	_T2CON,#0x60
   1D98 C2 C6              3526 	clr	_TF2
                           3527 ;	../../shared/src/interrupt.c:637: reg_INT4_TIMER3_INT_EN_LANE = 0;
   1D9A 90 22 50           3528 	mov	dptr,#_MCU_INT4_CONTROL
   1D9D E0                 3529 	movx	a,@dptr
   1D9E 54 DF              3530 	anl	a,#0xdf
   1DA0 F0                 3531 	movx	@dptr,a
                           3532 ;	../../shared/src/interrupt.c:638: reg_TIMER_3_EN_LANE = 0;
   1DA1 90 22 74           3533 	mov	dptr,#_MCU_TIMER_CONTROL
   1DA4 E0                 3534 	movx	a,@dptr
   1DA5 54 F7              3535 	anl	a,#0xf7
   1DA7 F0                 3536 	movx	@dptr,a
                           3537 ;	../../shared/src/interrupt.c:639: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   1DA8 90 26 78           3538 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1DAB E0                 3539 	movx	a,@dptr
   1DAC 54 FB              3540 	anl	a,#0xfb
   1DAE F0                 3541 	movx	@dptr,a
                           3542 ;	../../shared/src/interrupt.c:640: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;
   1DAF 90 26 7B           3543 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1DB2 E0                 3544 	movx	a,@dptr
   1DB3 54 EF              3545 	anl	a,#0xef
   1DB5 F0                 3546 	movx	@dptr,a
                           3547 ;	../../shared/src/interrupt.c:641: reg_TX_TRAIN_ON_LANE = 0;
   1DB6 90 26 7B           3548 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1DB9 E0                 3549 	movx	a,@dptr
   1DBA 54 FD              3550 	anl	a,#0xfd
   1DBC F0                 3551 	movx	@dptr,a
                           3552 ;	../../shared/src/interrupt.c:643: if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; }
   1DBD 90 A3 16           3553 	mov	dptr,#(_SYSTEM + 0x0002)
   1DC0 E0                 3554 	movx	a,@dptr
   1DC1 54 07              3555 	anl	a,#0x07
   1DC3 FA                 3556 	mov	r2,a
   1DC4 BA 04 19           3557 	cjne	r2,#0x04,00117$
   1DC7 90 67 B0           3558 	mov	dptr,#_tx_sel_bit
   1DCA E0                 3559 	movx	a,@dptr
   1DCB 90 20 37           3560 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   1DCE 13                 3561 	rrc	a
   1DCF E0                 3562 	movx	a,@dptr
   1DD0 92 E7              3563 	mov	acc.7,c
   1DD2 F0                 3564 	movx	@dptr,a
   1DD3 90 67 B1           3565 	mov	dptr,#_rx_sel_bit
   1DD6 E0                 3566 	movx	a,@dptr
   1DD7 FA                 3567 	mov	r2,a
   1DD8 90 21 07           3568 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   1DDB 13                 3569 	rrc	a
   1DDC E0                 3570 	movx	a,@dptr
   1DDD 92 E7              3571 	mov	acc.7,c
   1DDF F0                 3572 	movx	@dptr,a
   1DE0                    3573 00117$:
                           3574 ;	../../shared/src/interrupt.c:645: tx_init_bit = 1;
   1DE0 90 67 10           3575 	mov	dptr,#_tx_init_bit
   1DE3 74 01              3576 	mov	a,#0x01
   1DE5 F0                 3577 	movx	@dptr,a
                           3578 ;	../../shared/src/interrupt.c:646: PHY_NS = ST_TXTRAIN;
   1DE6 90 22 31           3579 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1DE9 74 29              3580 	mov	a,#0x29
   1DEB F0                 3581 	movx	@dptr,a
                           3582 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1DEC 90 22 33           3583 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1DEF 74 FF              3584 	mov	a,#0xFF
   1DF1 F0                 3585 	movx	@dptr,a
                           3586 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1DF2 90 22 0B           3587 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1DF5 E0                 3588 	movx	a,@dptr
   1DF6 54 7F              3589 	anl	a,#0x7f
   1DF8 F0                 3590 	movx	@dptr,a
                           3591 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1DF9 75 F7 01           3592 	mov	_SRST,#0x01
                           3593 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1DFC 75 F7 01           3594 	mov	_SRST,#0x01
                           3595 ;	../../shared/src/interrupt.c:647: mcu_reset();
   1DFF                    3596 00133$:
                           3597 ;	../../shared/src/interrupt.c:651: PHY_INT_LANE = 0xff;
   1DFF 90 22 33           3598 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E02 74 FF              3599 	mov	a,#0xFF
   1E04 F0                 3600 	movx	@dptr,a
                           3601 ;	../../shared/src/interrupt.c:652: EA = 1;
   1E05 D2 AF              3602 	setb	_EA
   1E07 D0 D0              3603 	pop	psw
   1E09 D0 83              3604 	pop	dph
   1E0B D0 82              3605 	pop	dpl
   1E0D D0 E0              3606 	pop	acc
   1E0F 32                 3607 	reti
                           3608 ;	eliminated unneeded push/pop b
                           3609 ;------------------------------------------------------------
                           3610 ;Allocation info for local variables in function 'int10_isr'
                           3611 ;------------------------------------------------------------
                           3612 ;------------------------------------------------------------
                           3613 ;	../../shared/src/interrupt.c:655: void int10_isr (void) __interrupt (19)  __using (2) //rx_init
                           3614 ;	-----------------------------------------
                           3615 ;	 function int10_isr
                           3616 ;	-----------------------------------------
   1E10                    3617 _int10_isr:
   1E10 C0 E0              3618 	push	acc
   1E12 C0 82              3619 	push	dpl
   1E14 C0 83              3620 	push	dph
   1E16 C0 D0              3621 	push	psw
   1E18 75 D0 10           3622 	mov	psw,#0x10
                           3623 ;	../../shared/src/interrupt.c:657: EA = 0;
   1E1B C2 AF              3624 	clr	_EA
                           3625 ;	../../shared/src/interrupt.c:659: reg_RX_INIT_DONE_LANE = 0;
   1E1D 90 21 02           3626 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1E20 E0                 3627 	movx	a,@dptr
   1E21 54 F7              3628 	anl	a,#0xf7
   1E23 F0                 3629 	movx	@dptr,a
                           3630 ;	../../shared/src/interrupt.c:660: PHY_INT_LANE = 10;
   1E24 90 22 33           3631 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E27 74 0A              3632 	mov	a,#0x0A
   1E29 F0                 3633 	movx	@dptr,a
                           3634 ;	../../shared/src/interrupt.c:666: if(SKIP_RX_INIT) {
   1E2A 90 22 3A           3635 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   1E2D E0                 3636 	movx	a,@dptr
   1E2E 60 0E              3637 	jz	00102$
                           3638 ;	../../shared/src/interrupt.c:667: SKIP_RX_INIT = 0;
   1E30 90 22 3A           3639 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   1E33 E4                 3640 	clr	a
   1E34 F0                 3641 	movx	@dptr,a
                           3642 ;	../../shared/src/interrupt.c:669: reg_RX_INIT_DONE_LANE = 1;
   1E35 90 21 02           3643 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1E38 E0                 3644 	movx	a,@dptr
   1E39 44 08              3645 	orl	a,#0x08
   1E3B F0                 3646 	movx	@dptr,a
   1E3C 80 08              3647 	sjmp	00103$
   1E3E                    3648 00102$:
                           3649 ;	../../shared/src/interrupt.c:672: do_rxinit = 1;
   1E3E D2 08              3650 	setb	_do_rxinit
                           3651 ;	../../shared/src/interrupt.c:673: PHY_NS = ST_DTL;
   1E40 90 22 31           3652 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1E43 74 2C              3653 	mov	a,#0x2C
   1E45 F0                 3654 	movx	@dptr,a
   1E46                    3655 00103$:
                           3656 ;	../../shared/src/interrupt.c:678: PHY_INT_LANE = 0xFF;
   1E46 90 22 33           3657 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E49 74 FF              3658 	mov	a,#0xFF
   1E4B F0                 3659 	movx	@dptr,a
                           3660 ;	../../shared/src/interrupt.c:680: EA = 1;
   1E4C D2 AF              3661 	setb	_EA
   1E4E D0 D0              3662 	pop	psw
   1E50 D0 83              3663 	pop	dph
   1E52 D0 82              3664 	pop	dpl
   1E54 D0 E0              3665 	pop	acc
   1E56 32                 3666 	reti
                           3667 ;	eliminated unneeded push/pop b
                           3668 ;------------------------------------------------------------
                           3669 ;Allocation info for local variables in function 'int7_isr'
                           3670 ;------------------------------------------------------------
                           3671 ;n                         Allocated to registers r4 
                           3672 ;rm_stat                   Allocated to stack - offset 1
                           3673 ;error_code                Allocated to registers r2 
                           3674 ;c0                        Allocated to stack - offset 2
                           3675 ;c1                        Allocated to stack - offset 3
                           3676 ;cn1                       Allocated to stack - offset 4
                           3677 ;ce                        Allocated to stack - offset 5
                           3678 ;remote_ctrl_h             Allocated to registers r6 
                           3679 ;remote_ctrl_l             Allocated to registers r7 
                           3680 ;remote_status_h           Allocated to registers r3 
                           3681 ;remote_ctrl_16            Allocated to registers r4 r5 
                           3682 ;remote_status_16          Allocated to stack - offset 6
                           3683 ;dual_arg                  Allocated to registers 
                           3684 ;single_arg                Allocated to stack - offset 8
                           3685 ;i                         Allocated to registers r2 r3 
                           3686 ;------------------------------------------------------------
                           3687 ;	../../shared/src/interrupt.c:694: void int7_isr (void) __interrupt (8)  __using (2) // remote ctrl valid
                           3688 ;	-----------------------------------------
                           3689 ;	 function int7_isr
                           3690 ;	-----------------------------------------
   1E57                    3691 _int7_isr:
   1E57 C0 25              3692 	push	bits
   1E59 C0 E0              3693 	push	acc
   1E5B C0 F0              3694 	push	b
   1E5D C0 82              3695 	push	dpl
   1E5F C0 83              3696 	push	dph
   1E61 C0 D0              3697 	push	psw
   1E63 75 D0 10           3698 	mov	psw,#0x10
   1E66 C0 18              3699 	push	_bp
   1E68 E5 81              3700 	mov	a,sp
   1E6A F5 18              3701 	mov	_bp,a
   1E6C 24 08              3702 	add	a,#0x08
   1E6E F5 81              3703 	mov	sp,a
                           3704 ;	../../shared/src/interrupt.c:703: error_code = 0;
   1E70 7A 00              3705 	mov	r2,#0x00
                           3706 ;	../../shared/src/interrupt.c:705: single_arg = 0;
   1E72 E5 18              3707 	mov	a,_bp
   1E74 24 08              3708 	add	a,#0x08
   1E76 F8                 3709 	mov	r0,a
   1E77 76 00              3710 	mov	@r0,#0x00
                           3711 ;	../../shared/src/interrupt.c:707: EA = 0;
   1E79 C2 AF              3712 	clr	_EA
                           3713 ;	../../shared/src/interrupt.c:709: PHY_INT_LANE = 7;
   1E7B 90 22 33           3714 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E7E 74 07              3715 	mov	a,#0x07
   1E80 F0                 3716 	movx	@dptr,a
                           3717 ;	../../shared/src/interrupt.c:711: if(reg_REMOTE_CTRL_VALID_ISR_LANE) 
   1E81 90 26 5D           3718 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   1E84 E0                 3719 	movx	a,@dptr
   1E85 20 E1 03           3720 	jb	acc.1,00457$
   1E88 02 28 93           3721 	ljmp	00335$
   1E8B                    3722 00457$:
                           3723 ;	../../shared/src/interrupt.c:713: reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 1;
                           3724 ;	../../shared/src/interrupt.c:714: reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 0;
   1E8B 90 26 65           3725 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   1E8E E0                 3726 	movx	a,@dptr
   1E8F 44 02              3727 	orl	a,#0x02
   1E91 F0                 3728 	movx	@dptr,a
   1E92 E0                 3729 	movx	a,@dptr
   1E93 54 FD              3730 	anl	a,#0xfd
   1E95 F0                 3731 	movx	@dptr,a
                           3732 ;	../../shared/src/interrupt.c:716: EA = 1; //for nested int
   1E96 D2 AF              3733 	setb	_EA
                           3734 ;	../../shared/src/interrupt.c:718: if( reg_TX_TRAIN_ON_LANE || reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) {
   1E98 90 26 7B           3735 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1E9B E0                 3736 	movx	a,@dptr
   1E9C 20 E1 0A           3737 	jb	acc.1,00331$
   1E9F 90 26 78           3738 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1EA2 E0                 3739 	movx	a,@dptr
   1EA3 20 E0 03           3740 	jb	acc.0,00459$
   1EA6 02 28 93           3741 	ljmp	00335$
   1EA9                    3742 00459$:
   1EA9                    3743 00331$:
                           3744 ;	../../shared/src/interrupt.c:720: remote_ctrl_16 = device_remote_control_bits;
   1EA9 90 26 72           3745 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   1EAC E0                 3746 	movx	a,@dptr
   1EAD FC                 3747 	mov	r4,a
   1EAE A3                 3748 	inc	dptr
   1EAF E0                 3749 	movx	a,@dptr
   1EB0 FD                 3750 	mov	r5,a
                           3751 ;	../../shared/src/interrupt.c:721: remote_status_16 = device_remote_status_bits;
   1EB1 90 26 70           3752 	mov	dptr,#_TX_TRAIN_IF_REG6
   1EB4 E0                 3753 	movx	a,@dptr
   1EB5 FE                 3754 	mov	r6,a
   1EB6 A3                 3755 	inc	dptr
   1EB7 E0                 3756 	movx	a,@dptr
   1EB8 FF                 3757 	mov	r7,a
   1EB9 E5 18              3758 	mov	a,_bp
   1EBB 24 06              3759 	add	a,#0x06
   1EBD F8                 3760 	mov	r0,a
   1EBE A6 16              3761 	mov	@r0,ar6
   1EC0 08                 3762 	inc	r0
   1EC1 A6 17              3763 	mov	@r0,ar7
                           3764 ;	../../shared/src/interrupt.c:722: if( remote_ctrl_16 != device_remote_control_bits || remote_status_16 != device_remote_status_bits) {
   1EC3 90 26 72           3765 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   1EC6 E0                 3766 	movx	a,@dptr
   1EC7 FB                 3767 	mov	r3,a
   1EC8 A3                 3768 	inc	dptr
   1EC9 E0                 3769 	movx	a,@dptr
   1ECA FE                 3770 	mov	r6,a
   1ECB EC                 3771 	mov	a,r4
   1ECC B5 13 1C           3772 	cjne	a,ar3,00101$
   1ECF ED                 3773 	mov	a,r5
   1ED0 B5 16 18           3774 	cjne	a,ar6,00101$
   1ED3 90 26 70           3775 	mov	dptr,#_TX_TRAIN_IF_REG6
   1ED6 E0                 3776 	movx	a,@dptr
   1ED7 FE                 3777 	mov	r6,a
   1ED8 A3                 3778 	inc	dptr
   1ED9 E0                 3779 	movx	a,@dptr
   1EDA FF                 3780 	mov	r7,a
   1EDB E5 18              3781 	mov	a,_bp
   1EDD 24 06              3782 	add	a,#0x06
   1EDF F8                 3783 	mov	r0,a
   1EE0 E6                 3784 	mov	a,@r0
   1EE1 B5 16 07           3785 	cjne	a,ar6,00462$
   1EE4 08                 3786 	inc	r0
   1EE5 E6                 3787 	mov	a,@r0
   1EE6 B5 17 02           3788 	cjne	a,ar7,00462$
   1EE9 80 1E              3789 	sjmp	00102$
   1EEB                    3790 00462$:
   1EEB                    3791 00101$:
                           3792 ;	../../shared/src/interrupt.c:723: remote_ctrl_16 = device_remote_control_bits;
   1EEB 90 26 72           3793 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   1EEE E0                 3794 	movx	a,@dptr
   1EEF FE                 3795 	mov	r6,a
   1EF0 A3                 3796 	inc	dptr
   1EF1 E0                 3797 	movx	a,@dptr
   1EF2 FF                 3798 	mov	r7,a
   1EF3 8E 14              3799 	mov	ar4,r6
   1EF5 8F 15              3800 	mov	ar5,r7
                           3801 ;	../../shared/src/interrupt.c:724: remote_status_16 = device_remote_status_bits;
   1EF7 90 26 70           3802 	mov	dptr,#_TX_TRAIN_IF_REG6
   1EFA E0                 3803 	movx	a,@dptr
   1EFB FE                 3804 	mov	r6,a
   1EFC A3                 3805 	inc	dptr
   1EFD E0                 3806 	movx	a,@dptr
   1EFE FF                 3807 	mov	r7,a
   1EFF E5 18              3808 	mov	a,_bp
   1F01 24 06              3809 	add	a,#0x06
   1F03 F8                 3810 	mov	r0,a
   1F04 A6 16              3811 	mov	@r0,ar6
   1F06 08                 3812 	inc	r0
   1F07 A6 17              3813 	mov	@r0,ar7
   1F09                    3814 00102$:
                           3815 ;	../../shared/src/interrupt.c:726: remote_ctrl_h = (uint8_t)(remote_ctrl_16>>8);
   1F09 8D 16              3816 	mov	ar6,r5
                           3817 ;	../../shared/src/interrupt.c:727: remote_ctrl_l = (uint8_t)(remote_ctrl_16);
   1F0B 8C 17              3818 	mov	ar7,r4
                           3819 ;	../../shared/src/interrupt.c:728: remote_status_h = (uint8_t)(remote_status_16>>8);
   1F0D E5 18              3820 	mov	a,_bp
   1F0F 24 06              3821 	add	a,#0x06
   1F11 F8                 3822 	mov	r0,a
   1F12 08                 3823 	inc	r0
   1F13 86 13              3824 	mov	ar3,@r0
                           3825 ;	../../shared/src/interrupt.c:732: if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) {
   1F15 90 26 79           3826 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1F18 E0                 3827 	movx	a,@dptr
   1F19 30 E6 03           3828 	jnb	acc.6,00463$
   1F1C 02 20 3B           3829 	ljmp	00127$
   1F1F                    3830 00463$:
   1F1F C0 13              3831 	push	ar3
   1F21 90 26 78           3832 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1F24 E0                 3833 	movx	a,@dptr
   1F25 54 01              3834 	anl	a,#0x01
   1F27 FB                 3835 	mov	r3,a
   1F28 BB 01 02           3836 	cjne	r3,#0x01,00464$
   1F2B 80 05              3837 	sjmp	00465$
   1F2D                    3838 00464$:
   1F2D D0 13              3839 	pop	ar3
   1F2F 02 20 3B           3840 	ljmp	00127$
   1F32                    3841 00465$:
   1F32 D0 13              3842 	pop	ar3
                           3843 ;	../../shared/src/interrupt.c:733: if( ((do_tx_apta) &&
   1F34 30 0A 31           3844 	jnb	_do_tx_apta,00125$
                           3845 ;	../../shared/src/interrupt.c:734: ((remote_ctrl_l&0x30)==0x30 || 
   1F37 C0 13              3846 	push	ar3
   1F39 74 30              3847 	mov	a,#0x30
   1F3B 5F                 3848 	anl	a,r7
   1F3C FB                 3849 	mov	r3,a
   1F3D BB 30 04           3850 	cjne	r3,#0x30,00467$
   1F40 D0 13              3851 	pop	ar3
   1F42 80 42              3852 	sjmp	00115$
   1F44                    3853 00467$:
                           3854 ;	../../shared/src/interrupt.c:735: (remote_ctrl_l&0x0c)==0x0c || 
   1F44 74 0C              3855 	mov	a,#0x0C
   1F46 5F                 3856 	anl	a,r7
   1F47 FB                 3857 	mov	r3,a
   1F48 BB 0C 04           3858 	cjne	r3,#0x0C,00468$
   1F4B D0 13              3859 	pop	ar3
   1F4D 80 37              3860 	sjmp	00115$
   1F4F                    3861 00468$:
                           3862 ;	../../shared/src/interrupt.c:736: (remote_ctrl_l&0x03)==0x03 ||
   1F4F 74 03              3863 	mov	a,#0x03
   1F51 5F                 3864 	anl	a,r7
   1F52 FB                 3865 	mov	r3,a
   1F53 BB 03 04           3866 	cjne	r3,#0x03,00469$
   1F56 D0 13              3867 	pop	ar3
   1F58 80 2C              3868 	sjmp	00115$
   1F5A                    3869 00469$:
   1F5A D0 13              3870 	pop	ar3
                           3871 ;	../../shared/src/interrupt.c:737: (remote_ctrl_16 & 0xf3c0) )) || 
   1F5C EC                 3872 	mov	a,r4
   1F5D 54 C0              3873 	anl	a,#0xC0
   1F5F 70 05              3874 	jnz	00470$
   1F61 ED                 3875 	mov	a,r5
   1F62 54 F3              3876 	anl	a,#0xF3
   1F64 60 02              3877 	jz	00471$
   1F66                    3878 00470$:
   1F66 80 1E              3879 	sjmp	00115$
   1F68                    3880 00471$:
   1F68                    3881 00125$:
   1F68 20 0A 42           3882 	jb	_do_tx_apta,00116$
                           3883 ;	../../shared/src/interrupt.c:739: (((remote_ctrl_l&0x3f)!=0) || 
   1F6B EF                 3884 	mov	a,r7
   1F6C 54 3F              3885 	anl	a,#0x3F
   1F6E 70 16              3886 	jnz	00115$
                           3887 ;	../../shared/src/interrupt.c:740: ((remote_ctrl_h&0x0c)==0) || ((remote_ctrl_h&0x0c)==0x8) ) ) ) {
   1F70 EE                 3888 	mov	a,r6
   1F71 54 0C              3889 	anl	a,#0x0C
   1F73 60 11              3890 	jz	00115$
   1F75 C0 13              3891 	push	ar3
   1F77 74 0C              3892 	mov	a,#0x0C
   1F79 5E                 3893 	anl	a,r6
   1F7A FB                 3894 	mov	r3,a
   1F7B BB 08 02           3895 	cjne	r3,#0x08,00476$
   1F7E 80 04              3896 	sjmp	00477$
   1F80                    3897 00476$:
   1F80 D0 13              3898 	pop	ar3
   1F82 80 29              3899 	sjmp	00116$
   1F84                    3900 00477$:
   1F84 D0 13              3901 	pop	ar3
   1F86                    3902 00115$:
                           3903 ;	../../shared/src/interrupt.c:741: do_tx_apta = 0;
   1F86 C2 0A              3904 	clr	_do_tx_apta
                           3905 ;	../../shared/src/interrupt.c:742: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f; // ADJUST_TERMINATE if remote_ctrl:err
   1F88 90 26 04           3906 	mov	dptr,#_DME_ENC_REG1
   1F8B 74 3F              3907 	mov	a,#0x3F
   1F8D F0                 3908 	movx	@dptr,a
   1F8E A3                 3909 	inc	dptr
   1F8F E4                 3910 	clr	a
   1F90 F0                 3911 	movx	@dptr,a
                           3912 ;	../../shared/src/interrupt.c:743: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1;
                           3913 ;	../../shared/src/interrupt.c:744: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   1F91 90 26 7A           3914 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   1F94 E0                 3915 	movx	a,@dptr
   1F95 44 20              3916 	orl	a,#0x20
   1F97 F0                 3917 	movx	@dptr,a
   1F98 E0                 3918 	movx	a,@dptr
   1F99 54 DF              3919 	anl	a,#0xdf
   1F9B F0                 3920 	movx	@dptr,a
                           3921 ;	../../shared/src/interrupt.c:745: lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0x01; //received wrong remote control request
   1F9C 90 60 09           3922 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0001)
   1F9F 74 01              3923 	mov	a,#0x01
   1FA1 F0                 3924 	movx	@dptr,a
                           3925 ;	../../shared/src/interrupt.c:746: PHY_INT_LANE = 0xFF;
   1FA2 90 22 33           3926 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1FA5 74 FF              3927 	mov	a,#0xFF
   1FA7 F0                 3928 	movx	@dptr,a
                           3929 ;	../../shared/src/interrupt.c:747: EA = 1;
   1FA8 D2 AF              3930 	setb	_EA
                           3931 ;	../../shared/src/interrupt.c:748: return;
   1FAA 02 28 9B           3932 	ljmp	00340$
   1FAD                    3933 00116$:
                           3934 ;	../../shared/src/interrupt.c:750: else if(((remote_ctrl_l&0x3f)==0)) {
   1FAD EF                 3935 	mov	a,r7
   1FAE 54 3F              3936 	anl	a,#0x3F
   1FB0 60 03              3937 	jz	00479$
   1FB2 02 20 3B           3938 	ljmp	00127$
   1FB5                    3939 00479$:
                           3940 ;	../../shared/src/interrupt.c:751: if((remote_ctrl_h&0x0c)==0x4) { //[11:10] //START
   1FB5 C0 13              3941 	push	ar3
   1FB7 74 0C              3942 	mov	a,#0x0C
   1FB9 5E                 3943 	anl	a,r6
   1FBA FB                 3944 	mov	r3,a
   1FBB BB 04 02           3945 	cjne	r3,#0x04,00480$
   1FBE 80 04              3946 	sjmp	00481$
   1FC0                    3947 00480$:
   1FC0 D0 13              3948 	pop	ar3
   1FC2 80 3A              3949 	sjmp	00111$
   1FC4                    3950 00481$:
   1FC4 D0 13              3951 	pop	ar3
                           3952 ;	../../shared/src/interrupt.c:752: if (do_tx_apta!=0) {
   1FC6 30 0A 11           3953 	jnb	_do_tx_apta,00105$
                           3954 ;	../../shared/src/interrupt.c:753: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f;
   1FC9 90 26 04           3955 	mov	dptr,#_DME_ENC_REG1
   1FCC 74 3F              3956 	mov	a,#0x3F
   1FCE F0                 3957 	movx	@dptr,a
   1FCF A3                 3958 	inc	dptr
   1FD0 E4                 3959 	clr	a
   1FD1 F0                 3960 	movx	@dptr,a
                           3961 ;	../../shared/src/interrupt.c:754: lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0x02; //received Received APTA_ADJUST(START) control after enter coeffient adjust stage
   1FD2 90 60 09           3962 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0001)
   1FD5 74 02              3963 	mov	a,#0x02
   1FD7 F0                 3964 	movx	@dptr,a
   1FD8 80 0E              3965 	sjmp	00106$
   1FDA                    3966 00105$:
                           3967 ;	../../shared/src/interrupt.c:757: do_tx_apta = 1;
   1FDA D2 0A              3968 	setb	_do_tx_apta
                           3969 ;	../../shared/src/interrupt.c:758: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   1FDC 90 26 04           3970 	mov	dptr,#_DME_ENC_REG1
   1FDF E4                 3971 	clr	a
   1FE0 F0                 3972 	movx	@dptr,a
   1FE1 A3                 3973 	inc	dptr
   1FE2 F0                 3974 	movx	@dptr,a
                           3975 ;	../../shared/src/interrupt.c:759: lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0;
   1FE3 90 60 09           3976 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0001)
   1FE6 E4                 3977 	clr	a
   1FE7 F0                 3978 	movx	@dptr,a
   1FE8                    3979 00106$:
                           3980 ;	../../shared/src/interrupt.c:761: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1;
                           3981 ;	../../shared/src/interrupt.c:762: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   1FE8 90 26 7A           3982 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   1FEB E0                 3983 	movx	a,@dptr
   1FEC 44 20              3984 	orl	a,#0x20
   1FEE F0                 3985 	movx	@dptr,a
   1FEF E0                 3986 	movx	a,@dptr
   1FF0 54 DF              3987 	anl	a,#0xdf
   1FF2 F0                 3988 	movx	@dptr,a
                           3989 ;	../../shared/src/interrupt.c:763: PHY_INT_LANE = 0xFF;
   1FF3 90 22 33           3990 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1FF6 74 FF              3991 	mov	a,#0xFF
   1FF8 F0                 3992 	movx	@dptr,a
                           3993 ;	../../shared/src/interrupt.c:764: EA = 1;
   1FF9 D2 AF              3994 	setb	_EA
                           3995 ;	../../shared/src/interrupt.c:765: return;
   1FFB 02 28 9B           3996 	ljmp	00340$
   1FFE                    3997 00111$:
                           3998 ;	../../shared/src/interrupt.c:767: else if( ((remote_ctrl_h&0x0c)==0x8)|| ((remote_ctrl_h&0x0c)==0xc) ) { //COMPLETE || TERMINATE
   1FFE C0 13              3999 	push	ar3
   2000 74 0C              4000 	mov	a,#0x0C
   2002 5E                 4001 	anl	a,r6
   2003 FB                 4002 	mov	r3,a
   2004 BB 08 04           4003 	cjne	r3,#0x08,00483$
   2007 D0 13              4004 	pop	ar3
   2009 80 0F              4005 	sjmp	00107$
   200B                    4006 00483$:
   200B 74 0C              4007 	mov	a,#0x0C
   200D 5E                 4008 	anl	a,r6
   200E FB                 4009 	mov	r3,a
   200F BB 0C 02           4010 	cjne	r3,#0x0C,00484$
   2012 80 04              4011 	sjmp	00485$
   2014                    4012 00484$:
   2014 D0 13              4013 	pop	ar3
   2016 80 23              4014 	sjmp	00127$
   2018                    4015 00485$:
   2018 D0 13              4016 	pop	ar3
   201A                    4017 00107$:
                           4018 ;	../../shared/src/interrupt.c:768: do_tx_apta = 0;
   201A C2 0A              4019 	clr	_do_tx_apta
                           4020 ;	../../shared/src/interrupt.c:769: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x15; // DUMMY_READY //0;
   201C 90 26 04           4021 	mov	dptr,#_DME_ENC_REG1
   201F 74 15              4022 	mov	a,#0x15
   2021 F0                 4023 	movx	@dptr,a
   2022 A3                 4024 	inc	dptr
   2023 E4                 4025 	clr	a
   2024 F0                 4026 	movx	@dptr,a
                           4027 ;	../../shared/src/interrupt.c:770: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1;
                           4028 ;	../../shared/src/interrupt.c:771: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   2025 90 26 7A           4029 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   2028 E0                 4030 	movx	a,@dptr
   2029 44 20              4031 	orl	a,#0x20
   202B F0                 4032 	movx	@dptr,a
   202C E0                 4033 	movx	a,@dptr
   202D 54 DF              4034 	anl	a,#0xdf
   202F F0                 4035 	movx	@dptr,a
                           4036 ;	../../shared/src/interrupt.c:773: PHY_INT_LANE = 0xFF;
   2030 90 22 33           4037 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2033 74 FF              4038 	mov	a,#0xFF
   2035 F0                 4039 	movx	@dptr,a
                           4040 ;	../../shared/src/interrupt.c:774: EA = 1;
   2036 D2 AF              4041 	setb	_EA
                           4042 ;	../../shared/src/interrupt.c:775: return;
   2038 02 28 9B           4043 	ljmp	00340$
   203B                    4044 00127$:
                           4045 ;	../../shared/src/interrupt.c:781: if( (do_train && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==1) ||
   203B 30 06 14           4046 	jnb	_do_train,00330$
   203E C0 13              4047 	push	ar3
   2040 90 26 79           4048 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   2043 E0                 4049 	movx	a,@dptr
   2044 23                 4050 	rl	a
   2045 23                 4051 	rl	a
   2046 54 01              4052 	anl	a,#0x01
   2048 FB                 4053 	mov	r3,a
   2049 BB 01 04           4054 	cjne	r3,#0x01,00487$
   204C D0 13              4055 	pop	ar3
   204E 80 27              4056 	sjmp	00325$
   2050                    4057 00487$:
   2050 D0 13              4058 	pop	ar3
   2052                    4059 00330$:
                           4060 ;	../../shared/src/interrupt.c:782: (do_tx_apta && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 &&
   2052 20 0A 03           4061 	jb	_do_tx_apta,00488$
   2055 02 28 93           4062 	ljmp	00335$
   2058                    4063 00488$:
   2058 90 26 79           4064 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   205B E0                 4065 	movx	a,@dptr
   205C 30 E6 03           4066 	jnb	acc.6,00489$
   205F 02 28 93           4067 	ljmp	00335$
   2062                    4068 00489$:
                           4069 ;	../../shared/src/interrupt.c:783: reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==1)) {
   2062 C0 13              4070 	push	ar3
   2064 90 26 78           4071 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   2067 E0                 4072 	movx	a,@dptr
   2068 54 01              4073 	anl	a,#0x01
   206A FB                 4074 	mov	r3,a
   206B BB 01 02           4075 	cjne	r3,#0x01,00490$
   206E 80 05              4076 	sjmp	00491$
   2070                    4077 00490$:
   2070 D0 13              4078 	pop	ar3
   2072 02 28 93           4079 	ljmp	00335$
   2075                    4080 00491$:
   2075 D0 13              4081 	pop	ar3
   2077                    4082 00325$:
                           4083 ;	../../shared/src/interrupt.c:791: c1 = (remote_ctrl_l>>4)&03;
   2077 C0 13              4084 	push	ar3
   2079 EF                 4085 	mov	a,r7
   207A C4                 4086 	swap	a
   207B 54 0F              4087 	anl	a,#0x0f
   207D FB                 4088 	mov	r3,a
   207E E5 18              4089 	mov	a,_bp
   2080 24 03              4090 	add	a,#0x03
   2082 F8                 4091 	mov	r0,a
   2083 74 03              4092 	mov	a,#0x03
   2085 5B                 4093 	anl	a,r3
   2086 F6                 4094 	mov	@r0,a
                           4095 ;	../../shared/src/interrupt.c:792: c0 = (remote_ctrl_l>>2)&03;
   2087 EF                 4096 	mov	a,r7
   2088 03                 4097 	rr	a
   2089 03                 4098 	rr	a
   208A 54 3F              4099 	anl	a,#0x3f
   208C FB                 4100 	mov	r3,a
   208D A8 18              4101 	mov	r0,_bp
   208F 08                 4102 	inc	r0
   2090 08                 4103 	inc	r0
   2091 74 03              4104 	mov	a,#0x03
   2093 5B                 4105 	anl	a,r3
   2094 F6                 4106 	mov	@r0,a
                           4107 ;	../../shared/src/interrupt.c:793: cn1 = remote_ctrl_l&03;
   2095 E5 18              4108 	mov	a,_bp
   2097 24 04              4109 	add	a,#0x04
   2099 F8                 4110 	mov	r0,a
   209A 74 03              4111 	mov	a,#0x03
   209C 5F                 4112 	anl	a,r7
   209D F6                 4113 	mov	@r0,a
                           4114 ;	../../shared/src/interrupt.c:794: ce = 0;
   209E E5 18              4115 	mov	a,_bp
   20A0 24 05              4116 	add	a,#0x05
   20A2 F8                 4117 	mov	r0,a
   20A3 76 00              4118 	mov	@r0,#0x00
                           4119 ;	../../shared/src/interrupt.c:795: rm_stat = READY;
   20A5 A8 18              4120 	mov	r0,_bp
   20A7 08                 4121 	inc	r0
   20A8 76 00              4122 	mov	@r0,#0x00
                           4123 ;	../../shared/src/interrupt.c:807: if(phy_mode == 4) { //ethernet
   20AA 90 A3 16           4124 	mov	dptr,#(_SYSTEM + 0x0002)
   20AD E0                 4125 	movx	a,@dptr
   20AE 54 07              4126 	anl	a,#0x07
   20B0 FB                 4127 	mov	r3,a
   20B1 BB 04 02           4128 	cjne	r3,#0x04,00492$
   20B4 80 04              4129 	sjmp	00493$
   20B6                    4130 00492$:
   20B6 D0 13              4131 	pop	ar3
   20B8 80 39              4132 	sjmp	00165$
   20BA                    4133 00493$:
                           4134 ;	../../shared/src/interrupt.c:808: ce = (uint8_t)((remote_ctrl_h>>4) & 0x03);
   20BA EE                 4135 	mov	a,r6
   20BB C4                 4136 	swap	a
   20BC 54 0F              4137 	anl	a,#0x0f
   20BE FB                 4138 	mov	r3,a
   20BF E5 18              4139 	mov	a,_bp
   20C1 24 05              4140 	add	a,#0x05
   20C3 F8                 4141 	mov	r0,a
   20C4 74 03              4142 	mov	a,#0x03
   20C6 5B                 4143 	anl	a,r3
   20C7 F6                 4144 	mov	@r0,a
                           4145 ;	../../shared/src/interrupt.c:809: if(ce&0x1) ce = 4;
   20C8 E5 18              4146 	mov	a,_bp
   20CA 24 05              4147 	add	a,#0x05
   20CC F8                 4148 	mov	r0,a
   20CD E6                 4149 	mov	a,@r0
   20CE D0 13              4150 	pop	ar3
   20D0 30 E0 0A           4151 	jnb	acc.0,00132$
   20D3 E5 18              4152 	mov	a,_bp
   20D5 24 05              4153 	add	a,#0x05
   20D7 F8                 4154 	mov	r0,a
   20D8 76 04              4155 	mov	@r0,#0x04
   20DA 02 21 DA           4156 	ljmp	00166$
   20DD                    4157 00132$:
                           4158 ;	../../shared/src/interrupt.c:810: else if(ce&0x2) ce = 5;
   20DD E5 18              4159 	mov	a,_bp
   20DF 24 05              4160 	add	a,#0x05
   20E1 F8                 4161 	mov	r0,a
   20E2 E6                 4162 	mov	a,@r0
   20E3 20 E1 03           4163 	jb	acc.1,00495$
   20E6 02 21 DA           4164 	ljmp	00166$
   20E9                    4165 00495$:
   20E9 E5 18              4166 	mov	a,_bp
   20EB 24 05              4167 	add	a,#0x05
   20ED F8                 4168 	mov	r0,a
   20EE 76 05              4169 	mov	@r0,#0x05
   20F0 02 21 DA           4170 	ljmp	00166$
   20F3                    4171 00165$:
                           4172 ;	../../shared/src/interrupt.c:813: if( (remote_ctrl_h&0xe0) == 0) { //pattern check
   20F3 EE                 4173 	mov	a,r6
   20F4 54 E0              4174 	anl	a,#0xE0
   20F6 60 1C              4175 	jz	00139$
                           4176 ;	../../shared/src/interrupt.c:816: else if( (remote_ctrl_h&0xe0) == 0xe0) { //error code coming, do nothing
   20F8 C0 17              4177 	push	ar7
   20FA 74 E0              4178 	mov	a,#0xE0
   20FC 5E                 4179 	anl	a,r6
   20FD FF                 4180 	mov	r7,a
   20FE BF E0 05           4181 	cjne	r7,#0xE0,00497$
   2101 D0 17              4182 	pop	ar7
   2103 02 28 93           4183 	ljmp	00335$
   2106                    4184 00497$:
   2106 D0 17              4185 	pop	ar7
                           4186 ;	../../shared/src/interrupt.c:820: lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 1;
   2108 90 60 5A           4187 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   210B E0                 4188 	movx	a,@dptr
   210C 44 08              4189 	orl	a,#0x08
   210E F0                 4190 	movx	@dptr,a
                           4191 ;	../../shared/src/interrupt.c:821: error_code = RESERVED_PATTERN_TYPE;
   210F 7A 02              4192 	mov	r2,#0x02
                           4193 ;	../../shared/src/interrupt.c:822: goto ext_int;
   2111 02 27 2C           4194 	ljmp	00294$
   2114                    4195 00139$:
                           4196 ;	../../shared/src/interrupt.c:826: if( (((remote_ctrl_h&0xe0)==0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   2114 EE                 4197 	mov	a,r6
   2115 54 E0              4198 	anl	a,#0xE0
   2117 70 1E              4199 	jnz	00146$
   2119 EC                 4200 	mov	a,r4
   211A 54 C0              4201 	anl	a,#0xC0
   211C 70 05              4202 	jnz	00500$
   211E ED                 4203 	mov	a,r5
   211F 54 13              4204 	anl	a,#0x13
   2121 60 02              4205 	jz	00501$
   2123                    4206 00500$:
   2123 80 3F              4207 	sjmp	00140$
   2125                    4208 00501$:
                           4209 ;	../../shared/src/interrupt.c:827: (remote_status_16 & 0x1fc0))) || //0001 1111 1100 0000
   2125 E5 18              4210 	mov	a,_bp
   2127 24 06              4211 	add	a,#0x06
   2129 F8                 4212 	mov	r0,a
   212A E6                 4213 	mov	a,@r0
   212B 54 C0              4214 	anl	a,#0xC0
   212D 70 06              4215 	jnz	00502$
   212F 08                 4216 	inc	r0
   2130 E6                 4217 	mov	a,@r0
   2131 54 1F              4218 	anl	a,#0x1F
   2133 60 02              4219 	jz	00503$
   2135                    4220 00502$:
   2135 80 2D              4221 	sjmp	00140$
   2137                    4222 00503$:
   2137                    4223 00146$:
                           4224 ;	../../shared/src/interrupt.c:828: (((remote_ctrl_h&0xe0)==0xe0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   2137 C0 13              4225 	push	ar3
   2139 74 E0              4226 	mov	a,#0xE0
   213B 5E                 4227 	anl	a,r6
   213C FB                 4228 	mov	r3,a
   213D BB E0 02           4229 	cjne	r3,#0xE0,00504$
   2140 80 04              4230 	sjmp	00505$
   2142                    4231 00504$:
   2142 D0 13              4232 	pop	ar3
   2144 80 23              4233 	sjmp	00141$
   2146                    4234 00505$:
   2146 D0 13              4235 	pop	ar3
   2148 EC                 4236 	mov	a,r4
   2149 54 C0              4237 	anl	a,#0xC0
   214B 70 05              4238 	jnz	00506$
   214D ED                 4239 	mov	a,r5
   214E 54 13              4240 	anl	a,#0x13
   2150 60 02              4241 	jz	00507$
   2152                    4242 00506$:
   2152 80 10              4243 	sjmp	00140$
   2154                    4244 00507$:
                           4245 ;	../../shared/src/interrupt.c:829: (remote_status_16 & 0xdfc0))) //1101 1111 1100 0000 
   2154 E5 18              4246 	mov	a,_bp
   2156 24 06              4247 	add	a,#0x06
   2158 F8                 4248 	mov	r0,a
   2159 E6                 4249 	mov	a,@r0
   215A 54 C0              4250 	anl	a,#0xC0
   215C 70 06              4251 	jnz	00508$
   215E 08                 4252 	inc	r0
   215F E6                 4253 	mov	a,@r0
   2160 54 DF              4254 	anl	a,#0xDF
   2162 60 05              4255 	jz	00141$
   2164                    4256 00508$:
   2164                    4257 00140$:
                           4258 ;	../../shared/src/interrupt.c:831: error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
   2164 7A 03              4259 	mov	r2,#0x03
                           4260 ;	../../shared/src/interrupt.c:832: goto ext_int;
   2166 02 27 2C           4261 	ljmp	00294$
   2169                    4262 00141$:
                           4263 ;	../../shared/src/interrupt.c:835: ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);
   2169 EE                 4264 	mov	a,r6
   216A 03                 4265 	rr	a
   216B 03                 4266 	rr	a
   216C 54 3F              4267 	anl	a,#0x3f
   216E FC                 4268 	mov	r4,a
   216F E5 18              4269 	mov	a,_bp
   2171 24 05              4270 	add	a,#0x05
   2173 F8                 4271 	mov	r0,a
   2174 74 03              4272 	mov	a,#0x03
   2176 5C                 4273 	anl	a,r4
   2177 F6                 4274 	mov	@r0,a
                           4275 ;	../../shared/src/interrupt.c:837: if((ce>0) && (remote_ctrl_l&0x3f) != 0) {
   2178 E5 18              4276 	mov	a,_bp
   217A 24 05              4277 	add	a,#0x05
   217C F8                 4278 	mov	r0,a
   217D E6                 4279 	mov	a,@r0
   217E 60 0A              4280 	jz	00148$
   2180 EF                 4281 	mov	a,r7
   2181 54 3F              4282 	anl	a,#0x3F
   2183 60 05              4283 	jz	00148$
                           4284 ;	../../shared/src/interrupt.c:838: error_code = RESERVED_COMB_COE_REQ;
   2185 7A 1A              4285 	mov	r2,#0x1A
                           4286 ;	../../shared/src/interrupt.c:839: goto ext_int;
   2187 02 27 2C           4287 	ljmp	00294$
   218A                    4288 00148$:
                           4289 ;	../../shared/src/interrupt.c:842: ce = remote_ctrl_l & 0x3f;
   218A E5 18              4290 	mov	a,_bp
   218C 24 05              4291 	add	a,#0x05
   218E F8                 4292 	mov	r0,a
   218F 74 3F              4293 	mov	a,#0x3F
   2191 5F                 4294 	anl	a,r7
   2192 F6                 4295 	mov	@r0,a
                           4296 ;	../../shared/src/interrupt.c:843: if((ce&0x03)==0x03) error_code = RESERVED_COE_1_REQ;
   2193 E5 18              4297 	mov	a,_bp
   2195 24 05              4298 	add	a,#0x05
   2197 F8                 4299 	mov	r0,a
   2198 74 03              4300 	mov	a,#0x03
   219A 56                 4301 	anl	a,@r0
   219B FD                 4302 	mov	r5,a
   219C BD 03 02           4303 	cjne	r5,#0x03,00151$
   219F 7A 11              4304 	mov	r2,#0x11
   21A1                    4305 00151$:
                           4306 ;	../../shared/src/interrupt.c:844: if((ce&0x0c)==0x0c) {
   21A1 E5 18              4307 	mov	a,_bp
   21A3 24 05              4308 	add	a,#0x05
   21A5 F8                 4309 	mov	r0,a
   21A6 74 0C              4310 	mov	a,#0x0C
   21A8 56                 4311 	anl	a,@r0
   21A9 FD                 4312 	mov	r5,a
   21AA BD 0C 09           4313 	cjne	r5,#0x0C,00156$
                           4314 ;	../../shared/src/interrupt.c:845: if(error_code==0) error_code = RESERVED_COE_2_REQ;
   21AD EA                 4315 	mov	a,r2
   21AE 70 04              4316 	jnz	00153$
   21B0 7A 13              4317 	mov	r2,#0x13
   21B2 80 02              4318 	sjmp	00156$
   21B4                    4319 00153$:
                           4320 ;	../../shared/src/interrupt.c:846: else error_code = MULTI_RESERVED_COE_REQ;
   21B4 7A 10              4321 	mov	r2,#0x10
   21B6                    4322 00156$:
                           4323 ;	../../shared/src/interrupt.c:848: if((ce&0x30)==0x30) {
   21B6 E5 18              4324 	mov	a,_bp
   21B8 24 05              4325 	add	a,#0x05
   21BA F8                 4326 	mov	r0,a
   21BB 74 30              4327 	mov	a,#0x30
   21BD 56                 4328 	anl	a,@r0
   21BE FD                 4329 	mov	r5,a
   21BF BD 30 09           4330 	cjne	r5,#0x30,00161$
                           4331 ;	../../shared/src/interrupt.c:849: if(error_code==0) error_code = RESERVED_COE_3_REQ;
   21C2 EA                 4332 	mov	a,r2
   21C3 70 04              4333 	jnz	00158$
   21C5 7A 15              4334 	mov	r2,#0x15
   21C7 80 02              4335 	sjmp	00161$
   21C9                    4336 00158$:
                           4337 ;	../../shared/src/interrupt.c:850: else error_code = MULTI_RESERVED_COE_REQ;
   21C9 7A 10              4338 	mov	r2,#0x10
   21CB                    4339 00161$:
                           4340 ;	../../shared/src/interrupt.c:852: if(error_code>0) goto ext_int;
   21CB EA                 4341 	mov	a,r2
   21CC 60 03              4342 	jz	00519$
   21CE 02 27 2C           4343 	ljmp	00294$
   21D1                    4344 00519$:
                           4345 ;	../../shared/src/interrupt.c:855: ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);
   21D1 E5 18              4346 	mov	a,_bp
   21D3 24 05              4347 	add	a,#0x05
   21D5 F8                 4348 	mov	r0,a
   21D6 74 03              4349 	mov	a,#0x03
   21D8 5C                 4350 	anl	a,r4
   21D9 F6                 4351 	mov	@r0,a
   21DA                    4352 00166$:
                           4353 ;	../../shared/src/interrupt.c:858: if(ce > 0) {	//ref1, ref2, no_eq
   21DA E5 18              4354 	mov	a,_bp
   21DC 24 05              4355 	add	a,#0x05
   21DE F8                 4356 	mov	r0,a
   21DF E6                 4357 	mov	a,@r0
   21E0 70 03              4358 	jnz	00520$
   21E2 02 22 D3           4359 	ljmp	00292$
   21E5                    4360 00520$:
                           4361 ;	../../shared/src/interrupt.c:861: if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing 
   21E5 EB                 4362 	mov	a,r3
   21E6 30 E7 03           4363 	jnb	acc.7,00521$
   21E9 02 28 93           4364 	ljmp	00335$
   21EC                    4365 00521$:
                           4366 ;	../../shared/src/interrupt.c:862: if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing
   21EC EB                 4367 	mov	a,r3
   21ED 30 E6 0F           4368 	jnb	acc.6,00170$
   21F0 90 A3 16           4369 	mov	dptr,#(_SYSTEM + 0x0002)
   21F3 E0                 4370 	movx	a,@dptr
   21F4 54 07              4371 	anl	a,#0x07
   21F6 FC                 4372 	mov	r4,a
   21F7 BC 04 02           4373 	cjne	r4,#0x04,00523$
   21FA 80 03              4374 	sjmp	00524$
   21FC                    4375 00523$:
   21FC 02 28 93           4376 	ljmp	00335$
   21FF                    4377 00524$:
   21FF                    4378 00170$:
                           4379 ;	../../shared/src/interrupt.c:867: if(txffe_force_en==0) {
   21FF 90 67 A4           4380 	mov	dptr,#_txffe_force_en
   2202 E0                 4381 	movx	a,@dptr
   2203 FC                 4382 	mov	r4,a
   2204 60 03              4383 	jz	00525$
   2206 02 27 2C           4384 	ljmp	00294$
   2209                    4385 00525$:
                           4386 ;	../../shared/src/interrupt.c:871: LINK_TRAIN_MODE0.BT.B0 = local_tx_preset_tb[ce][0]; //tx_em_po
   2209 E5 18              4387 	mov	a,_bp
   220B 24 05              4388 	add	a,#0x05
   220D F8                 4389 	mov	r0,a
   220E E6                 4390 	mov	a,@r0
   220F 25 E0              4391 	add	a,acc
   2211 FC                 4392 	mov	r4,a
   2212 24 B0              4393 	add	a,#_local_tx_preset_tb
   2214 F5 82              4394 	mov	dpl,a
   2216 E4                 4395 	clr	a
   2217 34 E6              4396 	addc	a,#(_local_tx_preset_tb >> 8)
   2219 F5 83              4397 	mov	dph,a
   221B E0                 4398 	movx	a,@dptr
   221C 90 26 50           4399 	mov	dptr,#_LINK_TRAIN_MODE0
   221F F0                 4400 	movx	@dptr,a
                           4401 ;	../../shared/src/interrupt.c:872: LINK_TRAIN_MODE0.BT.B1 = local_tx_preset_tb[ce][1]; //tx_em_pre, tx_em_peak
   2220 EC                 4402 	mov	a,r4
   2221 24 B0              4403 	add	a,#_local_tx_preset_tb
   2223 FC                 4404 	mov	r4,a
   2224 E4                 4405 	clr	a
   2225 34 E6              4406 	addc	a,#(_local_tx_preset_tb >> 8)
   2227 FD                 4407 	mov	r5,a
   2228 8C 82              4408 	mov	dpl,r4
   222A 8D 83              4409 	mov	dph,r5
   222C A3                 4410 	inc	dptr
   222D E0                 4411 	movx	a,@dptr
   222E 90 26 51           4412 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2231 F0                 4413 	movx	@dptr,a
                           4414 ;	../../shared/src/interrupt.c:874: if(tx_emph1_index >= tx_emph1_max)  rm_stat = C1_is_min;
   2232 90 26 50           4415 	mov	dptr,#_LINK_TRAIN_MODE0
   2235 E0                 4416 	movx	a,@dptr
   2236 C4                 4417 	swap	a
   2237 54 0F              4418 	anl	a,#0x0f
   2239 FC                 4419 	mov	r4,a
   223A 90 60 0F           4420 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   223D E0                 4421 	movx	a,@dptr
   223E 54 0F              4422 	anl	a,#0x0f
   2240 FD                 4423 	mov	r5,a
   2241 EC                 4424 	mov	a,r4
   2242 B5 15 00           4425 	cjne	a,ar5,00526$
   2245                    4426 00526$:
   2245 40 07              4427 	jc	00176$
   2247 A8 18              4428 	mov	r0,_bp
   2249 08                 4429 	inc	r0
   224A 76 20              4430 	mov	@r0,#0x20
   224C 80 14              4431 	sjmp	00177$
   224E                    4432 00176$:
                           4433 ;	../../shared/src/interrupt.c:875: else if(tx_emph1_index <= tx_emph1_min)  rm_stat = C1_is_max;
   224E 90 26 50           4434 	mov	dptr,#_LINK_TRAIN_MODE0
   2251 E0                 4435 	movx	a,@dptr
   2252 54 F0              4436 	anl	a,#0xf0
   2254 70 07              4437 	jnz	00173$
   2256 A8 18              4438 	mov	r0,_bp
   2258 08                 4439 	inc	r0
   2259 76 30              4440 	mov	@r0,#0x30
   225B 80 05              4441 	sjmp	00177$
   225D                    4442 00173$:
                           4443 ;	../../shared/src/interrupt.c:876: else  rm_stat = C1_updated;
   225D A8 18              4444 	mov	r0,_bp
   225F 08                 4445 	inc	r0
   2260 76 10              4446 	mov	@r0,#0x10
   2262                    4447 00177$:
                           4448 ;	../../shared/src/interrupt.c:878: if(tx_amp_index >= tx_amp_max)  rm_stat |= C0_is_min;
   2262 90 26 51           4449 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2265 E0                 4450 	movx	a,@dptr
   2266 C4                 4451 	swap	a
   2267 54 0F              4452 	anl	a,#0x0f
   2269 FC                 4453 	mov	r4,a
   226A 90 60 0E           4454 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0002)
   226D E0                 4455 	movx	a,@dptr
   226E 54 0F              4456 	anl	a,#0x0f
   2270 FD                 4457 	mov	r5,a
   2271 EC                 4458 	mov	a,r4
   2272 B5 15 00           4459 	cjne	a,ar5,00529$
   2275                    4460 00529$:
   2275 40 09              4461 	jc	00182$
   2277 A8 18              4462 	mov	r0,_bp
   2279 08                 4463 	inc	r0
   227A E6                 4464 	mov	a,@r0
   227B 44 08              4465 	orl	a,#0x08
   227D F6                 4466 	mov	@r0,a
   227E 80 18              4467 	sjmp	00183$
   2280                    4468 00182$:
                           4469 ;	../../shared/src/interrupt.c:879: else if(tx_amp_index <= tx_amp_min)  rm_stat |= C0_is_max;
   2280 90 26 51           4470 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2283 E0                 4471 	movx	a,@dptr
   2284 54 F0              4472 	anl	a,#0xf0
   2286 70 09              4473 	jnz	00179$
   2288 A8 18              4474 	mov	r0,_bp
   228A 08                 4475 	inc	r0
   228B E6                 4476 	mov	a,@r0
   228C 44 0C              4477 	orl	a,#0x0C
   228E F6                 4478 	mov	@r0,a
   228F 80 07              4479 	sjmp	00183$
   2291                    4480 00179$:
                           4481 ;	../../shared/src/interrupt.c:880: else  rm_stat |= C0_updated;
   2291 A8 18              4482 	mov	r0,_bp
   2293 08                 4483 	inc	r0
   2294 E6                 4484 	mov	a,@r0
   2295 44 04              4485 	orl	a,#0x04
   2297 F6                 4486 	mov	@r0,a
   2298                    4487 00183$:
                           4488 ;	../../shared/src/interrupt.c:882: if(tx_emph0_index >= tx_emph0_max)  rm_stat |= Cn1_is_min;
   2298 90 26 51           4489 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   229B E0                 4490 	movx	a,@dptr
   229C 54 0F              4491 	anl	a,#0x0f
   229E FC                 4492 	mov	r4,a
   229F 90 60 0F           4493 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   22A2 E0                 4494 	movx	a,@dptr
   22A3 C4                 4495 	swap	a
   22A4 54 0F              4496 	anl	a,#0x0f
   22A6 FD                 4497 	mov	r5,a
   22A7 EC                 4498 	mov	a,r4
   22A8 B5 15 00           4499 	cjne	a,ar5,00532$
   22AB                    4500 00532$:
   22AB 40 0A              4501 	jc	00188$
   22AD A8 18              4502 	mov	r0,_bp
   22AF 08                 4503 	inc	r0
   22B0 E6                 4504 	mov	a,@r0
   22B1 44 02              4505 	orl	a,#0x02
   22B3 F6                 4506 	mov	@r0,a
   22B4 02 27 2C           4507 	ljmp	00294$
   22B7                    4508 00188$:
                           4509 ;	../../shared/src/interrupt.c:883: else if(tx_emph0_index <= tx_emph0_min)  rm_stat |= Cn1_is_max;
   22B7 90 26 51           4510 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   22BA E0                 4511 	movx	a,@dptr
   22BB 54 0F              4512 	anl	a,#0x0f
   22BD 70 0A              4513 	jnz	00185$
   22BF A8 18              4514 	mov	r0,_bp
   22C1 08                 4515 	inc	r0
   22C2 E6                 4516 	mov	a,@r0
   22C3 44 03              4517 	orl	a,#0x03
   22C5 F6                 4518 	mov	@r0,a
   22C6 02 27 2C           4519 	ljmp	00294$
   22C9                    4520 00185$:
                           4521 ;	../../shared/src/interrupt.c:884: else  rm_stat |= Cn1_updated;
   22C9 A8 18              4522 	mov	r0,_bp
   22CB 08                 4523 	inc	r0
   22CC E6                 4524 	mov	a,@r0
   22CD 44 01              4525 	orl	a,#0x01
   22CF F6                 4526 	mov	@r0,a
   22D0 02 27 2C           4527 	ljmp	00294$
   22D3                    4528 00292$:
                           4529 ;	../../shared/src/interrupt.c:892: ce = remote_ctrl_l & 0x3f;
   22D3 E5 18              4530 	mov	a,_bp
   22D5 24 05              4531 	add	a,#0x05
   22D7 F8                 4532 	mov	r0,a
   22D8 74 3F              4533 	mov	a,#0x3F
   22DA 5F                 4534 	anl	a,r7
   22DB F6                 4535 	mov	@r0,a
                           4536 ;	../../shared/src/interrupt.c:893: if( ce != 0 ) {
   22DC E5 18              4537 	mov	a,_bp
   22DE 24 05              4538 	add	a,#0x05
   22E0 F8                 4539 	mov	r0,a
   22E1 E6                 4540 	mov	a,@r0
   22E2 70 03              4541 	jnz	00535$
   22E4 02 27 2C           4542 	ljmp	00294$
   22E7                    4543 00535$:
                           4544 ;	../../shared/src/interrupt.c:895: for(n=0; n<11; n++) {
   22E7 7C 00              4545 	mov	r4,#0x00
   22E9                    4546 00194$:
   22E9 BC 0B 00           4547 	cjne	r4,#0x0B,00536$
   22EC                    4548 00536$:
   22EC 50 14              4549 	jnc	00197$
                           4550 ;	../../shared/src/interrupt.c:896: if (ce == valid_coe_tbl[n] ) break;
   22EE EC                 4551 	mov	a,r4
   22EF 90 2B 07           4552 	mov	dptr,#_valid_coe_tbl
   22F2 93                 4553 	movc	a,@a+dptr
   22F3 FD                 4554 	mov	r5,a
   22F4 E5 18              4555 	mov	a,_bp
   22F6 24 05              4556 	add	a,#0x05
   22F8 F8                 4557 	mov	r0,a
   22F9 E6                 4558 	mov	a,@r0
   22FA B5 15 02           4559 	cjne	a,ar5,00538$
   22FD 80 03              4560 	sjmp	00197$
   22FF                    4561 00538$:
                           4562 ;	../../shared/src/interrupt.c:895: for(n=0; n<11; n++) {
   22FF 0C                 4563 	inc	r4
   2300 80 E7              4564 	sjmp	00194$
   2302                    4565 00197$:
                           4566 ;	../../shared/src/interrupt.c:899: if(n>=11) {
   2302 BC 0B 00           4567 	cjne	r4,#0x0B,00539$
   2305                    4568 00539$:
   2305 40 30              4569 	jc	00287$
                           4570 ;	../../shared/src/interrupt.c:901: if(do_tx_apta) {
                           4571 ;	../../shared/src/interrupt.c:904: do_tx_apta = 0;
   2307 10 0A 02           4572 	jbc	_do_tx_apta,00541$
   230A 80 1F              4573 	sjmp	00199$
   230C                    4574 00541$:
                           4575 ;	../../shared/src/interrupt.c:905: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f; // ADJUST_TERMINATE if remote_ctrl:err
   230C 90 26 04           4576 	mov	dptr,#_DME_ENC_REG1
   230F 74 3F              4577 	mov	a,#0x3F
   2311 F0                 4578 	movx	@dptr,a
   2312 A3                 4579 	inc	dptr
   2313 E4                 4580 	clr	a
   2314 F0                 4581 	movx	@dptr,a
                           4582 ;	../../shared/src/interrupt.c:906: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1;
                           4583 ;	../../shared/src/interrupt.c:907: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   2315 90 26 7A           4584 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   2318 E0                 4585 	movx	a,@dptr
   2319 44 20              4586 	orl	a,#0x20
   231B F0                 4587 	movx	@dptr,a
   231C E0                 4588 	movx	a,@dptr
   231D 54 DF              4589 	anl	a,#0xdf
   231F F0                 4590 	movx	@dptr,a
                           4591 ;	../../shared/src/interrupt.c:908: PHY_INT_LANE = 0xFF;
   2320 90 22 33           4592 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2323 74 FF              4593 	mov	a,#0xFF
   2325 F0                 4594 	movx	@dptr,a
                           4595 ;	../../shared/src/interrupt.c:909: EA = 1;
   2326 D2 AF              4596 	setb	_EA
                           4597 ;	../../shared/src/interrupt.c:910: return;
   2328 02 28 9B           4598 	ljmp	00340$
   232B                    4599 00199$:
                           4600 ;	../../shared/src/interrupt.c:915: lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 1;
   232B 90 60 5A           4601 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   232E E0                 4602 	movx	a,@dptr
   232F 44 10              4603 	orl	a,#0x10
   2331 F0                 4604 	movx	@dptr,a
                           4605 ;	../../shared/src/interrupt.c:916: error_code = RESERVED_COMB_COE_REQ;
   2332 7A 1A              4606 	mov	r2,#0x1A
                           4607 ;	../../shared/src/interrupt.c:917: goto ext_int;
   2334 02 27 2C           4608 	ljmp	00294$
   2337                    4609 00287$:
                           4610 ;	../../shared/src/interrupt.c:922: if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing ==> No need to check remote TRAIN_COMP in firmware
   2337 EB                 4611 	mov	a,r3
   2338 30 E7 03           4612 	jnb	acc.7,00542$
   233B 02 28 93           4613 	ljmp	00335$
   233E                    4614 00542$:
                           4615 ;	../../shared/src/interrupt.c:923: if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing
   233E EB                 4616 	mov	a,r3
   233F 30 E6 0F           4617 	jnb	acc.6,00204$
   2342 90 A3 16           4618 	mov	dptr,#(_SYSTEM + 0x0002)
   2345 E0                 4619 	movx	a,@dptr
   2346 54 07              4620 	anl	a,#0x07
   2348 FB                 4621 	mov	r3,a
   2349 BB 04 02           4622 	cjne	r3,#0x04,00544$
   234C 80 03              4623 	sjmp	00545$
   234E                    4624 00544$:
   234E 02 28 93           4625 	ljmp	00335$
   2351                    4626 00545$:
   2351                    4627 00204$:
                           4628 ;	../../shared/src/interrupt.c:924: if(txffe_force_en==0) {
   2351 90 67 A4           4629 	mov	dptr,#_txffe_force_en
   2354 E0                 4630 	movx	a,@dptr
   2355 FB                 4631 	mov	r3,a
   2356 60 03              4632 	jz	00546$
   2358 02 25 EA           4633 	ljmp	00246$
   235B                    4634 00546$:
                           4635 ;	../../shared/src/interrupt.c:925: tx_amp_is_max = (tx_amp_index >= tx_amp_max);
   235B 90 26 51           4636 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   235E E0                 4637 	movx	a,@dptr
   235F C4                 4638 	swap	a
   2360 54 0F              4639 	anl	a,#0x0f
   2362 FB                 4640 	mov	r3,a
   2363 90 60 0E           4641 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0002)
   2366 E0                 4642 	movx	a,@dptr
   2367 54 0F              4643 	anl	a,#0x0f
   2369 FC                 4644 	mov	r4,a
   236A EB                 4645 	mov	a,r3
   236B B5 14 00           4646 	cjne	a,ar4,00547$
   236E                    4647 00547$:
   236E 92 28              4648 	mov  b0,c
   2370 B3                 4649 	cpl	c
   2371 92 17              4650 	mov	_tx_amp_is_max,c
                           4651 ;	../../shared/src/interrupt.c:926: tx_amp_is_min = (tx_amp_index <= tx_amp_min);
   2373 90 26 51           4652 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2376 E0                 4653 	movx	a,@dptr
   2377 C4                 4654 	swap	a
   2378 54 0F              4655 	anl	a,#0x0f
   237A FB                 4656 	mov	r3,a
   237B B4 01 00           4657 	cjne	a,#0x01,00548$
   237E                    4658 00548$:
   237E 92 18              4659 	mov	_tx_amp_is_min,c
                           4660 ;	../../shared/src/interrupt.c:927: tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
   2380 90 26 51           4661 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2383 E0                 4662 	movx	a,@dptr
   2384 54 0F              4663 	anl	a,#0x0f
   2386 FB                 4664 	mov	r3,a
   2387 90 60 0F           4665 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   238A E0                 4666 	movx	a,@dptr
   238B C4                 4667 	swap	a
   238C 54 0F              4668 	anl	a,#0x0f
   238E FC                 4669 	mov	r4,a
   238F EB                 4670 	mov	a,r3
   2390 B5 14 00           4671 	cjne	a,ar4,00549$
   2393                    4672 00549$:
   2393 92 28              4673 	mov  b0,c
   2395 B3                 4674 	cpl	c
   2396 92 19              4675 	mov	_tx_emph0_is_max,c
                           4676 ;	../../shared/src/interrupt.c:928: tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
   2398 90 26 51           4677 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   239B E0                 4678 	movx	a,@dptr
   239C 54 0F              4679 	anl	a,#0x0f
   239E FB                 4680 	mov	r3,a
   239F B4 01 00           4681 	cjne	a,#0x01,00550$
   23A2                    4682 00550$:
   23A2 92 1A              4683 	mov	_tx_emph0_is_min,c
                           4684 ;	../../shared/src/interrupt.c:929: tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
   23A4 90 26 50           4685 	mov	dptr,#_LINK_TRAIN_MODE0
   23A7 E0                 4686 	movx	a,@dptr
   23A8 C4                 4687 	swap	a
   23A9 54 0F              4688 	anl	a,#0x0f
   23AB FB                 4689 	mov	r3,a
   23AC 90 60 0F           4690 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   23AF E0                 4691 	movx	a,@dptr
   23B0 54 0F              4692 	anl	a,#0x0f
   23B2 FC                 4693 	mov	r4,a
   23B3 EB                 4694 	mov	a,r3
   23B4 B5 14 00           4695 	cjne	a,ar4,00551$
   23B7                    4696 00551$:
   23B7 92 28              4697 	mov  b0,c
   23B9 B3                 4698 	cpl	c
   23BA 92 1B              4699 	mov	_tx_emph1_is_max,c
                           4700 ;	../../shared/src/interrupt.c:930: tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
   23BC 90 26 50           4701 	mov	dptr,#_LINK_TRAIN_MODE0
   23BF E0                 4702 	movx	a,@dptr
   23C0 C4                 4703 	swap	a
   23C1 54 0F              4704 	anl	a,#0x0f
   23C3 FB                 4705 	mov	r3,a
   23C4 B4 01 00           4706 	cjne	a,#0x01,00552$
   23C7                    4707 00552$:
   23C7 92 1C              4708 	mov	_tx_emph1_is_min,c
                           4709 ;	../../shared/src/interrupt.c:933: switch (ce) {
   23C9 E5 18              4710 	mov	a,_bp
   23CB 24 05              4711 	add	a,#0x05
   23CD F8                 4712 	mov	r0,a
   23CE B6 01 03           4713 	cjne	@r0,#0x01,00553$
   23D1 02 25 43           4714 	ljmp	00229$
   23D4                    4715 00553$:
   23D4 E5 18              4716 	mov	a,_bp
   23D6 24 05              4717 	add	a,#0x05
   23D8 F8                 4718 	mov	r0,a
   23D9 B6 02 03           4719 	cjne	@r0,#0x02,00554$
   23DC 02 25 09           4720 	ljmp	00224$
   23DF                    4721 00554$:
   23DF E5 18              4722 	mov	a,_bp
   23E1 24 05              4723 	add	a,#0x05
   23E3 F8                 4724 	mov	r0,a
   23E4 B6 04 03           4725 	cjne	@r0,#0x04,00555$
   23E7 02 24 E8           4726 	ljmp	00221$
   23EA                    4727 00555$:
   23EA E5 18              4728 	mov	a,_bp
   23EC 24 05              4729 	add	a,#0x05
   23EE F8                 4730 	mov	r0,a
   23EF B6 05 02           4731 	cjne	@r0,#0x05,00556$
   23F2 80 66              4732 	sjmp	00209$
   23F4                    4733 00556$:
   23F4 E5 18              4734 	mov	a,_bp
   23F6 24 05              4735 	add	a,#0x05
   23F8 F8                 4736 	mov	r0,a
   23F9 B6 08 03           4737 	cjne	@r0,#0x08,00557$
   23FC 02 24 C7           4738 	ljmp	00218$
   23FF                    4739 00557$:
   23FF E5 18              4740 	mov	a,_bp
   2401 24 05              4741 	add	a,#0x05
   2403 F8                 4742 	mov	r0,a
   2404 B6 0A 02           4743 	cjne	@r0,#0x0A,00558$
   2407 80 2E              4744 	sjmp	00206$
   2409                    4745 00558$:
   2409 E5 18              4746 	mov	a,_bp
   240B 24 05              4747 	add	a,#0x05
   240D F8                 4748 	mov	r0,a
   240E B6 10 03           4749 	cjne	@r0,#0x10,00559$
   2411 02 25 B4           4750 	ljmp	00239$
   2414                    4751 00559$:
   2414 E5 18              4752 	mov	a,_bp
   2416 24 05              4753 	add	a,#0x05
   2418 F8                 4754 	mov	r0,a
   2419 B6 14 03           4755 	cjne	@r0,#0x14,00560$
   241C 02 24 A2           4756 	ljmp	00215$
   241F                    4757 00560$:
   241F E5 18              4758 	mov	a,_bp
   2421 24 05              4759 	add	a,#0x05
   2423 F8                 4760 	mov	r0,a
   2424 B6 20 03           4761 	cjne	@r0,#0x20,00561$
   2427 02 25 7C           4762 	ljmp	00234$
   242A                    4763 00561$:
   242A E5 18              4764 	mov	a,_bp
   242C 24 05              4765 	add	a,#0x05
   242E F8                 4766 	mov	r0,a
   242F B6 28 02           4767 	cjne	@r0,#0x28,00562$
   2432 80 49              4768 	sjmp	00212$
   2434                    4769 00562$:
   2434 02 25 EA           4770 	ljmp	00246$
                           4771 ;	../../shared/src/interrupt.c:934: case 0x0a: if(tx_emph0_is_max==0) tx_emph0_index++; single_arg = 1; break;
   2437                    4772 00206$:
   2437 20 19 16           4773 	jb	_tx_emph0_is_max,00208$
   243A 90 26 51           4774 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   243D E0                 4775 	movx	a,@dptr
   243E 54 0F              4776 	anl	a,#0x0f
   2440 FB                 4777 	mov	r3,a
   2441 0B                 4778 	inc	r3
   2442 90 26 51           4779 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2445 EB                 4780 	mov	a,r3
   2446 54 0F              4781 	anl	a,#0x0f
   2448 F5 F0              4782 	mov	b,a
   244A E0                 4783 	movx	a,@dptr
   244B 54 F0              4784 	anl	a,#0xf0
   244D 45 F0              4785 	orl	a,b
   244F F0                 4786 	movx	@dptr,a
   2450                    4787 00208$:
   2450 E5 18              4788 	mov	a,_bp
   2452 24 08              4789 	add	a,#0x08
   2454 F8                 4790 	mov	r0,a
   2455 76 01              4791 	mov	@r0,#0x01
   2457 02 25 EA           4792 	ljmp	00246$
                           4793 ;	../../shared/src/interrupt.c:935: case 0x05: if(tx_emph0_is_min==0) tx_emph0_index--; single_arg = 1; break;
   245A                    4794 00209$:
   245A 20 1A 16           4795 	jb	_tx_emph0_is_min,00211$
   245D 90 26 51           4796 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2460 E0                 4797 	movx	a,@dptr
   2461 54 0F              4798 	anl	a,#0x0f
   2463 FB                 4799 	mov	r3,a
   2464 1B                 4800 	dec	r3
   2465 90 26 51           4801 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2468 EB                 4802 	mov	a,r3
   2469 54 0F              4803 	anl	a,#0x0f
   246B F5 F0              4804 	mov	b,a
   246D E0                 4805 	movx	a,@dptr
   246E 54 F0              4806 	anl	a,#0xf0
   2470 45 F0              4807 	orl	a,b
   2472 F0                 4808 	movx	@dptr,a
   2473                    4809 00211$:
   2473 E5 18              4810 	mov	a,_bp
   2475 24 08              4811 	add	a,#0x08
   2477 F8                 4812 	mov	r0,a
   2478 76 01              4813 	mov	@r0,#0x01
   247A 02 25 EA           4814 	ljmp	00246$
                           4815 ;	../../shared/src/interrupt.c:936: case 0x28: if(tx_emph1_is_max==0) tx_emph1_index++; single_arg = 2; break;
   247D                    4816 00212$:
   247D 20 1B 18           4817 	jb	_tx_emph1_is_max,00214$
   2480 90 26 50           4818 	mov	dptr,#_LINK_TRAIN_MODE0
   2483 E0                 4819 	movx	a,@dptr
   2484 C4                 4820 	swap	a
   2485 54 0F              4821 	anl	a,#0x0f
   2487 FB                 4822 	mov	r3,a
   2488 0B                 4823 	inc	r3
   2489 90 26 50           4824 	mov	dptr,#_LINK_TRAIN_MODE0
   248C EB                 4825 	mov	a,r3
   248D C4                 4826 	swap	a
   248E 54 F0              4827 	anl	a,#(0xf0&0xf0)
   2490 F5 F0              4828 	mov	b,a
   2492 E0                 4829 	movx	a,@dptr
   2493 54 0F              4830 	anl	a,#0x0f
   2495 45 F0              4831 	orl	a,b
   2497 F0                 4832 	movx	@dptr,a
   2498                    4833 00214$:
   2498 E5 18              4834 	mov	a,_bp
   249A 24 08              4835 	add	a,#0x08
   249C F8                 4836 	mov	r0,a
   249D 76 02              4837 	mov	@r0,#0x02
   249F 02 25 EA           4838 	ljmp	00246$
                           4839 ;	../../shared/src/interrupt.c:937: case 0x14: if(tx_emph1_is_min==0) tx_emph1_index--; single_arg = 2; break;
   24A2                    4840 00215$:
   24A2 20 1C 18           4841 	jb	_tx_emph1_is_min,00217$
   24A5 90 26 50           4842 	mov	dptr,#_LINK_TRAIN_MODE0
   24A8 E0                 4843 	movx	a,@dptr
   24A9 C4                 4844 	swap	a
   24AA 54 0F              4845 	anl	a,#0x0f
   24AC FB                 4846 	mov	r3,a
   24AD 1B                 4847 	dec	r3
   24AE 90 26 50           4848 	mov	dptr,#_LINK_TRAIN_MODE0
   24B1 EB                 4849 	mov	a,r3
   24B2 C4                 4850 	swap	a
   24B3 54 F0              4851 	anl	a,#(0xf0&0xf0)
   24B5 F5 F0              4852 	mov	b,a
   24B7 E0                 4853 	movx	a,@dptr
   24B8 54 0F              4854 	anl	a,#0x0f
   24BA 45 F0              4855 	orl	a,b
   24BC F0                 4856 	movx	@dptr,a
   24BD                    4857 00217$:
   24BD E5 18              4858 	mov	a,_bp
   24BF 24 08              4859 	add	a,#0x08
   24C1 F8                 4860 	mov	r0,a
   24C2 76 02              4861 	mov	@r0,#0x02
   24C4 02 25 EA           4862 	ljmp	00246$
                           4863 ;	../../shared/src/interrupt.c:938: case 0x08: if(tx_amp_is_max==0)   tx_amp_index++;   break;
   24C7                    4864 00218$:
   24C7 30 17 03           4865 	jnb	_tx_amp_is_max,00567$
   24CA 02 25 EA           4866 	ljmp	00246$
   24CD                    4867 00567$:
   24CD 90 26 51           4868 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24D0 E0                 4869 	movx	a,@dptr
   24D1 C4                 4870 	swap	a
   24D2 54 0F              4871 	anl	a,#0x0f
   24D4 FB                 4872 	mov	r3,a
   24D5 0B                 4873 	inc	r3
   24D6 90 26 51           4874 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24D9 EB                 4875 	mov	a,r3
   24DA C4                 4876 	swap	a
   24DB 54 F0              4877 	anl	a,#(0xf0&0xf0)
   24DD F5 F0              4878 	mov	b,a
   24DF E0                 4879 	movx	a,@dptr
   24E0 54 0F              4880 	anl	a,#0x0f
   24E2 45 F0              4881 	orl	a,b
   24E4 F0                 4882 	movx	@dptr,a
   24E5 02 25 EA           4883 	ljmp	00246$
                           4884 ;	../../shared/src/interrupt.c:939: case 0x04: if(tx_amp_is_min==0)   tx_amp_index--;   break;
   24E8                    4885 00221$:
   24E8 30 18 03           4886 	jnb	_tx_amp_is_min,00568$
   24EB 02 25 EA           4887 	ljmp	00246$
   24EE                    4888 00568$:
   24EE 90 26 51           4889 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24F1 E0                 4890 	movx	a,@dptr
   24F2 C4                 4891 	swap	a
   24F3 54 0F              4892 	anl	a,#0x0f
   24F5 FB                 4893 	mov	r3,a
   24F6 1B                 4894 	dec	r3
   24F7 90 26 51           4895 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24FA EB                 4896 	mov	a,r3
   24FB C4                 4897 	swap	a
   24FC 54 F0              4898 	anl	a,#(0xf0&0xf0)
   24FE F5 F0              4899 	mov	b,a
   2500 E0                 4900 	movx	a,@dptr
   2501 54 0F              4901 	anl	a,#0x0f
   2503 45 F0              4902 	orl	a,b
   2505 F0                 4903 	movx	@dptr,a
   2506 02 25 EA           4904 	ljmp	00246$
                           4905 ;	../../shared/src/interrupt.c:940: case 0x02: if( tx_emph0_is_max==0) {
   2509                    4906 00224$:
   2509 30 19 03           4907 	jnb	_tx_emph0_is_max,00569$
   250C 02 25 EA           4908 	ljmp	00246$
   250F                    4909 00569$:
                           4910 ;	../../shared/src/interrupt.c:941: if(tx_amp_is_min==0)tx_amp_index--;
   250F 20 18 18           4911 	jb	_tx_amp_is_min,00226$
   2512 90 26 51           4912 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2515 E0                 4913 	movx	a,@dptr
   2516 C4                 4914 	swap	a
   2517 54 0F              4915 	anl	a,#0x0f
   2519 FB                 4916 	mov	r3,a
   251A 1B                 4917 	dec	r3
   251B 90 26 51           4918 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   251E EB                 4919 	mov	a,r3
   251F C4                 4920 	swap	a
   2520 54 F0              4921 	anl	a,#(0xf0&0xf0)
   2522 F5 F0              4922 	mov	b,a
   2524 E0                 4923 	movx	a,@dptr
   2525 54 0F              4924 	anl	a,#0x0f
   2527 45 F0              4925 	orl	a,b
   2529 F0                 4926 	movx	@dptr,a
   252A                    4927 00226$:
                           4928 ;	../../shared/src/interrupt.c:942: tx_emph0_index++;
   252A 90 26 51           4929 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   252D E0                 4930 	movx	a,@dptr
   252E 54 0F              4931 	anl	a,#0x0f
   2530 FB                 4932 	mov	r3,a
   2531 0B                 4933 	inc	r3
   2532 90 26 51           4934 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2535 EB                 4935 	mov	a,r3
   2536 54 0F              4936 	anl	a,#0x0f
   2538 F5 F0              4937 	mov	b,a
   253A E0                 4938 	movx	a,@dptr
   253B 54 F0              4939 	anl	a,#0xf0
   253D 45 F0              4940 	orl	a,b
   253F F0                 4941 	movx	@dptr,a
                           4942 ;	../../shared/src/interrupt.c:945: break;
   2540 02 25 EA           4943 	ljmp	00246$
                           4944 ;	../../shared/src/interrupt.c:946: case 0x01: if(tx_emph0_is_min==0) {
   2543                    4945 00229$:
   2543 30 1A 03           4946 	jnb	_tx_emph0_is_min,00571$
   2546 02 25 EA           4947 	ljmp	00246$
   2549                    4948 00571$:
                           4949 ;	../../shared/src/interrupt.c:947: if(tx_amp_is_max==0) tx_amp_index++; 
   2549 20 17 18           4950 	jb	_tx_amp_is_max,00231$
   254C 90 26 51           4951 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   254F E0                 4952 	movx	a,@dptr
   2550 C4                 4953 	swap	a
   2551 54 0F              4954 	anl	a,#0x0f
   2553 FB                 4955 	mov	r3,a
   2554 0B                 4956 	inc	r3
   2555 90 26 51           4957 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2558 EB                 4958 	mov	a,r3
   2559 C4                 4959 	swap	a
   255A 54 F0              4960 	anl	a,#(0xf0&0xf0)
   255C F5 F0              4961 	mov	b,a
   255E E0                 4962 	movx	a,@dptr
   255F 54 0F              4963 	anl	a,#0x0f
   2561 45 F0              4964 	orl	a,b
   2563 F0                 4965 	movx	@dptr,a
   2564                    4966 00231$:
                           4967 ;	../../shared/src/interrupt.c:948: tx_emph0_index--;
   2564 90 26 51           4968 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2567 E0                 4969 	movx	a,@dptr
   2568 54 0F              4970 	anl	a,#0x0f
   256A FB                 4971 	mov	r3,a
   256B 1B                 4972 	dec	r3
   256C 90 26 51           4973 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   256F EB                 4974 	mov	a,r3
   2570 54 0F              4975 	anl	a,#0x0f
   2572 F5 F0              4976 	mov	b,a
   2574 E0                 4977 	movx	a,@dptr
   2575 54 F0              4978 	anl	a,#0xf0
   2577 45 F0              4979 	orl	a,b
   2579 F0                 4980 	movx	@dptr,a
                           4981 ;	../../shared/src/interrupt.c:951: break;
                           4982 ;	../../shared/src/interrupt.c:952: case 0x20: if(tx_emph1_is_max==0) {
   257A 80 6E              4983 	sjmp	00246$
   257C                    4984 00234$:
   257C 20 1B 6B           4985 	jb	_tx_emph1_is_max,00246$
                           4986 ;	../../shared/src/interrupt.c:953: tx_emph1_index++;
   257F 90 26 50           4987 	mov	dptr,#_LINK_TRAIN_MODE0
   2582 E0                 4988 	movx	a,@dptr
   2583 C4                 4989 	swap	a
   2584 54 0F              4990 	anl	a,#0x0f
   2586 FB                 4991 	mov	r3,a
   2587 0B                 4992 	inc	r3
   2588 90 26 50           4993 	mov	dptr,#_LINK_TRAIN_MODE0
   258B EB                 4994 	mov	a,r3
   258C C4                 4995 	swap	a
   258D 54 F0              4996 	anl	a,#(0xf0&0xf0)
   258F F5 F0              4997 	mov	b,a
   2591 E0                 4998 	movx	a,@dptr
   2592 54 0F              4999 	anl	a,#0x0f
   2594 45 F0              5000 	orl	a,b
   2596 F0                 5001 	movx	@dptr,a
                           5002 ;	../../shared/src/interrupt.c:954: if(tx_amp_is_min==0) tx_amp_index--;   
   2597 20 18 50           5003 	jb	_tx_amp_is_min,00246$
   259A 90 26 51           5004 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   259D E0                 5005 	movx	a,@dptr
   259E C4                 5006 	swap	a
   259F 54 0F              5007 	anl	a,#0x0f
   25A1 FB                 5008 	mov	r3,a
   25A2 1B                 5009 	dec	r3
   25A3 90 26 51           5010 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   25A6 EB                 5011 	mov	a,r3
   25A7 C4                 5012 	swap	a
   25A8 54 F0              5013 	anl	a,#(0xf0&0xf0)
   25AA F5 F0              5014 	mov	b,a
   25AC E0                 5015 	movx	a,@dptr
   25AD 54 0F              5016 	anl	a,#0x0f
   25AF 45 F0              5017 	orl	a,b
   25B1 F0                 5018 	movx	@dptr,a
                           5019 ;	../../shared/src/interrupt.c:957: break;
                           5020 ;	../../shared/src/interrupt.c:958: case 0x10: if(tx_emph1_is_min==0) {
   25B2 80 36              5021 	sjmp	00246$
   25B4                    5022 00239$:
   25B4 20 1C 33           5023 	jb	_tx_emph1_is_min,00246$
                           5024 ;	../../shared/src/interrupt.c:959: tx_emph1_index--; 
   25B7 90 26 50           5025 	mov	dptr,#_LINK_TRAIN_MODE0
   25BA E0                 5026 	movx	a,@dptr
   25BB C4                 5027 	swap	a
   25BC 54 0F              5028 	anl	a,#0x0f
   25BE FB                 5029 	mov	r3,a
   25BF 1B                 5030 	dec	r3
   25C0 90 26 50           5031 	mov	dptr,#_LINK_TRAIN_MODE0
   25C3 EB                 5032 	mov	a,r3
   25C4 C4                 5033 	swap	a
   25C5 54 F0              5034 	anl	a,#(0xf0&0xf0)
   25C7 F5 F0              5035 	mov	b,a
   25C9 E0                 5036 	movx	a,@dptr
   25CA 54 0F              5037 	anl	a,#0x0f
   25CC 45 F0              5038 	orl	a,b
   25CE F0                 5039 	movx	@dptr,a
                           5040 ;	../../shared/src/interrupt.c:960: if(tx_amp_is_max==0) tx_amp_index++;
   25CF 20 17 18           5041 	jb	_tx_amp_is_max,00246$
   25D2 90 26 51           5042 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   25D5 E0                 5043 	movx	a,@dptr
   25D6 C4                 5044 	swap	a
   25D7 54 0F              5045 	anl	a,#0x0f
   25D9 FB                 5046 	mov	r3,a
   25DA 0B                 5047 	inc	r3
   25DB 90 26 51           5048 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   25DE EB                 5049 	mov	a,r3
   25DF C4                 5050 	swap	a
   25E0 54 F0              5051 	anl	a,#(0xf0&0xf0)
   25E2 F5 F0              5052 	mov	b,a
   25E4 E0                 5053 	movx	a,@dptr
   25E5 54 0F              5054 	anl	a,#0x0f
   25E7 45 F0              5055 	orl	a,b
   25E9 F0                 5056 	movx	@dptr,a
                           5057 ;	../../shared/src/interrupt.c:964: }
   25EA                    5058 00246$:
                           5059 ;	../../shared/src/interrupt.c:967: tx_amp_is_max = (tx_amp_index >= tx_amp_max);
   25EA 90 26 51           5060 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   25ED E0                 5061 	movx	a,@dptr
   25EE C4                 5062 	swap	a
   25EF 54 0F              5063 	anl	a,#0x0f
   25F1 FB                 5064 	mov	r3,a
   25F2 90 60 0E           5065 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0002)
   25F5 E0                 5066 	movx	a,@dptr
   25F6 54 0F              5067 	anl	a,#0x0f
   25F8 FC                 5068 	mov	r4,a
   25F9 EB                 5069 	mov	a,r3
   25FA B5 14 00           5070 	cjne	a,ar4,00577$
   25FD                    5071 00577$:
   25FD 92 28              5072 	mov  b0,c
   25FF B3                 5073 	cpl	c
   2600 92 17              5074 	mov	_tx_amp_is_max,c
                           5075 ;	../../shared/src/interrupt.c:968: tx_amp_is_min = (tx_amp_index <= tx_amp_min);
   2602 90 26 51           5076 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2605 E0                 5077 	movx	a,@dptr
   2606 C4                 5078 	swap	a
   2607 54 0F              5079 	anl	a,#0x0f
   2609 FB                 5080 	mov	r3,a
   260A B4 01 00           5081 	cjne	a,#0x01,00578$
   260D                    5082 00578$:
   260D 92 18              5083 	mov	_tx_amp_is_min,c
                           5084 ;	../../shared/src/interrupt.c:969: tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
   260F 90 26 51           5085 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2612 E0                 5086 	movx	a,@dptr
   2613 54 0F              5087 	anl	a,#0x0f
   2615 FB                 5088 	mov	r3,a
   2616 90 60 0F           5089 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   2619 E0                 5090 	movx	a,@dptr
   261A C4                 5091 	swap	a
   261B 54 0F              5092 	anl	a,#0x0f
   261D FC                 5093 	mov	r4,a
   261E EB                 5094 	mov	a,r3
   261F B5 14 00           5095 	cjne	a,ar4,00579$
   2622                    5096 00579$:
   2622 92 28              5097 	mov  b0,c
   2624 B3                 5098 	cpl	c
   2625 92 19              5099 	mov	_tx_emph0_is_max,c
                           5100 ;	../../shared/src/interrupt.c:970: tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
   2627 90 26 51           5101 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   262A E0                 5102 	movx	a,@dptr
   262B 54 0F              5103 	anl	a,#0x0f
   262D FB                 5104 	mov	r3,a
   262E B4 01 00           5105 	cjne	a,#0x01,00580$
   2631                    5106 00580$:
   2631 92 1A              5107 	mov	_tx_emph0_is_min,c
                           5108 ;	../../shared/src/interrupt.c:971: tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
   2633 90 26 50           5109 	mov	dptr,#_LINK_TRAIN_MODE0
   2636 E0                 5110 	movx	a,@dptr
   2637 C4                 5111 	swap	a
   2638 54 0F              5112 	anl	a,#0x0f
   263A FB                 5113 	mov	r3,a
   263B 90 60 0F           5114 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   263E E0                 5115 	movx	a,@dptr
   263F 54 0F              5116 	anl	a,#0x0f
   2641 FC                 5117 	mov	r4,a
   2642 EB                 5118 	mov	a,r3
   2643 B5 14 00           5119 	cjne	a,ar4,00581$
   2646                    5120 00581$:
   2646 92 28              5121 	mov  b0,c
   2648 B3                 5122 	cpl	c
   2649 92 1B              5123 	mov	_tx_emph1_is_max,c
                           5124 ;	../../shared/src/interrupt.c:972: tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
   264B 90 26 50           5125 	mov	dptr,#_LINK_TRAIN_MODE0
   264E E0                 5126 	movx	a,@dptr
   264F C4                 5127 	swap	a
   2650 54 0F              5128 	anl	a,#0x0f
   2652 FB                 5129 	mov	r3,a
   2653 B4 01 00           5130 	cjne	a,#0x01,00582$
   2656                    5131 00582$:
   2656 92 1C              5132 	mov	_tx_emph1_is_min,c
                           5133 ;	../../shared/src/interrupt.c:975: if( c1 == INC ) {
   2658 E5 18              5134 	mov	a,_bp
   265A 24 03              5135 	add	a,#0x03
   265C F8                 5136 	mov	r0,a
   265D B6 01 11           5137 	cjne	@r0,#0x01,00256$
                           5138 ;	../../shared/src/interrupt.c:976: if(tx_emph1_is_min) rm_stat |= C1_is_max;
   2660 30 1C 07           5139 	jnb	_tx_emph1_is_min,00248$
   2663 A8 18              5140 	mov	r0,_bp
   2665 08                 5141 	inc	r0
   2666 76 30              5142 	mov	@r0,#0x30
   2668 80 1E              5143 	sjmp	00257$
   266A                    5144 00248$:
                           5145 ;	../../shared/src/interrupt.c:977: else rm_stat |= C1_updated;
   266A A8 18              5146 	mov	r0,_bp
   266C 08                 5147 	inc	r0
   266D 76 10              5148 	mov	@r0,#0x10
   266F 80 17              5149 	sjmp	00257$
   2671                    5150 00256$:
                           5151 ;	../../shared/src/interrupt.c:979: else if( c1 == DEC ) {
   2671 E5 18              5152 	mov	a,_bp
   2673 24 03              5153 	add	a,#0x03
   2675 F8                 5154 	mov	r0,a
   2676 B6 02 0F           5155 	cjne	@r0,#0x02,00257$
                           5156 ;	../../shared/src/interrupt.c:980: if (tx_emph1_is_max) rm_stat |= C1_is_min;
   2679 30 1B 07           5157 	jnb	_tx_emph1_is_max,00251$
   267C A8 18              5158 	mov	r0,_bp
   267E 08                 5159 	inc	r0
   267F 76 20              5160 	mov	@r0,#0x20
   2681 80 05              5161 	sjmp	00257$
   2683                    5162 00251$:
                           5163 ;	../../shared/src/interrupt.c:981: else rm_stat |= C1_updated;
   2683 A8 18              5164 	mov	r0,_bp
   2685 08                 5165 	inc	r0
   2686 76 10              5166 	mov	@r0,#0x10
   2688                    5167 00257$:
                           5168 ;	../../shared/src/interrupt.c:984: if( single_arg == 0 ) {
   2688 E5 18              5169 	mov	a,_bp
   268A 24 08              5170 	add	a,#0x08
   268C F8                 5171 	mov	r0,a
   268D E6                 5172 	mov	a,@r0
   268E 70 36              5173 	jnz	00270$
                           5174 ;	../../shared/src/interrupt.c:985: if( c0 == INC ) {
   2690 A8 18              5175 	mov	r0,_bp
   2692 08                 5176 	inc	r0
   2693 08                 5177 	inc	r0
   2694 B6 01 15           5178 	cjne	@r0,#0x01,00267$
                           5179 ;	../../shared/src/interrupt.c:986: if(tx_amp_is_min ) rm_stat |= C0_is_max;
   2697 30 18 09           5180 	jnb	_tx_amp_is_min,00259$
   269A A8 18              5181 	mov	r0,_bp
   269C 08                 5182 	inc	r0
   269D E6                 5183 	mov	a,@r0
   269E 44 0C              5184 	orl	a,#0x0C
   26A0 F6                 5185 	mov	@r0,a
   26A1 80 23              5186 	sjmp	00270$
   26A3                    5187 00259$:
                           5188 ;	../../shared/src/interrupt.c:987: else rm_stat |= C0_updated;
   26A3 A8 18              5189 	mov	r0,_bp
   26A5 08                 5190 	inc	r0
   26A6 E6                 5191 	mov	a,@r0
   26A7 44 04              5192 	orl	a,#0x04
   26A9 F6                 5193 	mov	@r0,a
   26AA 80 1A              5194 	sjmp	00270$
   26AC                    5195 00267$:
                           5196 ;	../../shared/src/interrupt.c:989: else if( c0 == DEC ) {
   26AC A8 18              5197 	mov	r0,_bp
   26AE 08                 5198 	inc	r0
   26AF 08                 5199 	inc	r0
   26B0 B6 02 13           5200 	cjne	@r0,#0x02,00270$
                           5201 ;	../../shared/src/interrupt.c:990: if(tx_amp_is_max ) rm_stat |= C0_is_min;
   26B3 30 17 09           5202 	jnb	_tx_amp_is_max,00262$
   26B6 A8 18              5203 	mov	r0,_bp
   26B8 08                 5204 	inc	r0
   26B9 E6                 5205 	mov	a,@r0
   26BA 44 08              5206 	orl	a,#0x08
   26BC F6                 5207 	mov	@r0,a
   26BD 80 07              5208 	sjmp	00270$
   26BF                    5209 00262$:
                           5210 ;	../../shared/src/interrupt.c:991: else rm_stat |= C0_updated;
   26BF A8 18              5211 	mov	r0,_bp
   26C1 08                 5212 	inc	r0
   26C2 E6                 5213 	mov	a,@r0
   26C3 44 04              5214 	orl	a,#0x04
   26C5 F6                 5215 	mov	@r0,a
   26C6                    5216 00270$:
                           5217 ;	../../shared/src/interrupt.c:995: if( cn1 == INC ) {
   26C6 E5 18              5218 	mov	a,_bp
   26C8 24 04              5219 	add	a,#0x04
   26CA F8                 5220 	mov	r0,a
   26CB B6 01 15           5221 	cjne	@r0,#0x01,00280$
                           5222 ;	../../shared/src/interrupt.c:996: if(tx_emph0_is_min) rm_stat |= Cn1_is_max;
   26CE 30 1A 09           5223 	jnb	_tx_emph0_is_min,00272$
   26D1 A8 18              5224 	mov	r0,_bp
   26D3 08                 5225 	inc	r0
   26D4 E6                 5226 	mov	a,@r0
   26D5 44 03              5227 	orl	a,#0x03
   26D7 F6                 5228 	mov	@r0,a
   26D8 80 24              5229 	sjmp	00281$
   26DA                    5230 00272$:
                           5231 ;	../../shared/src/interrupt.c:997: else rm_stat |= Cn1_updated;
   26DA A8 18              5232 	mov	r0,_bp
   26DC 08                 5233 	inc	r0
   26DD E6                 5234 	mov	a,@r0
   26DE 44 01              5235 	orl	a,#0x01
   26E0 F6                 5236 	mov	@r0,a
   26E1 80 1B              5237 	sjmp	00281$
   26E3                    5238 00280$:
                           5239 ;	../../shared/src/interrupt.c:999: else if( cn1 == DEC ) {
   26E3 E5 18              5240 	mov	a,_bp
   26E5 24 04              5241 	add	a,#0x04
   26E7 F8                 5242 	mov	r0,a
   26E8 B6 02 13           5243 	cjne	@r0,#0x02,00281$
                           5244 ;	../../shared/src/interrupt.c:1000: if(tx_emph0_is_max) rm_stat |= Cn1_is_min;
   26EB 30 19 09           5245 	jnb	_tx_emph0_is_max,00275$
   26EE A8 18              5246 	mov	r0,_bp
   26F0 08                 5247 	inc	r0
   26F1 E6                 5248 	mov	a,@r0
   26F2 44 02              5249 	orl	a,#0x02
   26F4 F6                 5250 	mov	@r0,a
   26F5 80 07              5251 	sjmp	00281$
   26F7                    5252 00275$:
                           5253 ;	../../shared/src/interrupt.c:1001: else rm_stat |= Cn1_updated;
   26F7 A8 18              5254 	mov	r0,_bp
   26F9 08                 5255 	inc	r0
   26FA E6                 5256 	mov	a,@r0
   26FB 44 01              5257 	orl	a,#0x01
   26FD F6                 5258 	mov	@r0,a
   26FE                    5259 00281$:
                           5260 ;	../../shared/src/interrupt.c:1004: if( single_arg == 1 ) rm_stat |= (rm_stat<<2);
   26FE E5 18              5261 	mov	a,_bp
   2700 24 08              5262 	add	a,#0x08
   2702 F8                 5263 	mov	r0,a
   2703 B6 01 0F           5264 	cjne	@r0,#0x01,00283$
   2706 A8 18              5265 	mov	r0,_bp
   2708 08                 5266 	inc	r0
   2709 E6                 5267 	mov	a,@r0
   270A 25 E0              5268 	add	a,acc
   270C 25 E0              5269 	add	a,acc
   270E FB                 5270 	mov	r3,a
   270F A8 18              5271 	mov	r0,_bp
   2711 08                 5272 	inc	r0
   2712 EB                 5273 	mov	a,r3
   2713 46                 5274 	orl	a,@r0
   2714 F6                 5275 	mov	@r0,a
   2715                    5276 00283$:
                           5277 ;	../../shared/src/interrupt.c:1005: if( single_arg == 2 ) rm_stat |= (rm_stat>>2);
   2715 E5 18              5278 	mov	a,_bp
   2717 24 08              5279 	add	a,#0x08
   2719 F8                 5280 	mov	r0,a
   271A B6 02 0F           5281 	cjne	@r0,#0x02,00294$
   271D A8 18              5282 	mov	r0,_bp
   271F 08                 5283 	inc	r0
   2720 E6                 5284 	mov	a,@r0
   2721 03                 5285 	rr	a
   2722 03                 5286 	rr	a
   2723 54 3F              5287 	anl	a,#0x3f
   2725 FB                 5288 	mov	r3,a
   2726 A8 18              5289 	mov	r0,_bp
   2728 08                 5290 	inc	r0
   2729 EB                 5291 	mov	a,r3
   272A 46                 5292 	orl	a,@r0
   272B F6                 5293 	mov	@r0,a
                           5294 ;	../../shared/src/interrupt.c:1016: ext_int:
   272C                    5295 00294$:
                           5296 ;	../../shared/src/interrupt.c:1018: if(error_code>0 && phy_mode<=SAS) { //send error code  
   272C EA                 5297 	mov	a,r2
   272D 70 03              5298 	jnz	00606$
   272F 02 27 BF           5299 	ljmp	00321$
   2732                    5300 00606$:
   2732 90 A3 16           5301 	mov	dptr,#(_SYSTEM + 0x0002)
   2735 E0                 5302 	movx	a,@dptr
   2736 54 07              5303 	anl	a,#0x07
   2738 FB                 5304 	mov	r3,a
   2739 C3                 5305 	clr	c
   273A 74 81              5306 	mov	a,#(0x01 ^ 0x80)
   273C 8B F0              5307 	mov	b,r3
   273E 63 F0 80           5308 	xrl	b,#0x80
   2741 95 F0              5309 	subb	a,b
   2743 50 03              5310 	jnc	00607$
   2745 02 27 BF           5311 	ljmp	00321$
   2748                    5312 00607$:
                           5313 ;	../../shared/src/interrupt.c:1021: reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (remote_ctrl_h&0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000;
   2748 74 0C              5314 	mov	a,#0x0C
   274A 5E                 5315 	anl	a,r6
   274B 44 E0              5316 	orl	a,#0xE0
   274D 90 26 07           5317 	mov	dptr,#(_DME_ENC_REG1 + 0x0003)
   2750 F0                 5318 	movx	@dptr,a
                           5319 ;	../../shared/src/interrupt.c:1022: reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = remote_ctrl_l&0x3f;
   2751 53 17 3F           5320 	anl	ar7,#0x3F
   2754 90 26 06           5321 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   2757 EF                 5322 	mov	a,r7
   2758 F0                 5323 	movx	@dptr,a
                           5324 ;	../../shared/src/interrupt.c:1024: reg_LOCAL_STATUS_FIELD_LANE_15_0 = error_code;
   2759 7B 00              5325 	mov	r3,#0x00
   275B 90 26 04           5326 	mov	dptr,#_DME_ENC_REG1
   275E EA                 5327 	mov	a,r2
   275F F0                 5328 	movx	@dptr,a
   2760 A3                 5329 	inc	dptr
   2761 EB                 5330 	mov	a,r3
   2762 F0                 5331 	movx	@dptr,a
                           5332 ;	../../shared/src/interrupt.c:1025: reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;
   2763 90 26 00           5333 	mov	dptr,#_DME_ENC_REG0
   2766 E0                 5334 	movx	a,@dptr
   2767 44 20              5335 	orl	a,#0x20
   2769 F0                 5336 	movx	@dptr,a
   276A E0                 5337 	movx	a,@dptr
   276B 54 DF              5338 	anl	a,#0xdf
   276D F0                 5339 	movx	@dptr,a
                           5340 ;	../../shared/src/interrupt.c:1026: lnx_ERROR_TTIU_DETECTED_LANE = 1;
   276E 90 60 0A           5341 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   2771 E0                 5342 	movx	a,@dptr
   2772 44 01              5343 	orl	a,#0x01
   2774 F0                 5344 	movx	@dptr,a
                           5345 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   2775 7A 0E              5346 	mov	r2,#0x0E
   2777 7B 00              5347 	mov	r3,#0x00
   2779                    5348 00339$:
                           5349 ;	../../shared/src/interrupt.c:29: __endasm;
                           5350 	
   2779 00                 5351 	  nop
   277A 00                 5352 	  nop
   277B 00                 5353 	  nop
   277C 00                 5354 	  nop
   277D 00                 5355 	  nop
   277E 00                 5356 	  nop
   277F 00                 5357 	  nop
   2780 00                 5358 	  nop
   2781 00                 5359 	  nop
   2782 00                 5360 	  nop
                           5361 	 
   2783 1A                 5362 	dec	r2
   2784 BA FF 01           5363 	cjne	r2,#0xff,00608$
   2787 1B                 5364 	dec	r3
   2788                    5365 00608$:
                           5366 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   2788 EA                 5367 	mov	a,r2
   2789 4B                 5368 	orl	a,r3
   278A 60 03              5369 	jz	00609$
   278C 02 27 79           5370 	ljmp	00339$
   278F                    5371 00609$:
                           5372 ;	../../shared/src/interrupt.c:1030: reg_LOCAL_CTRL_FIELD_LANE_15_0 = pre_local_ctrl;
   278F 90 67 9C           5373 	mov	dptr,#_pre_local_ctrl
   2792 E0                 5374 	movx	a,@dptr
   2793 FA                 5375 	mov	r2,a
   2794 A3                 5376 	inc	dptr
   2795 E0                 5377 	movx	a,@dptr
   2796 FB                 5378 	mov	r3,a
   2797 90 26 06           5379 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   279A EA                 5380 	mov	a,r2
   279B F0                 5381 	movx	@dptr,a
   279C A3                 5382 	inc	dptr
   279D EB                 5383 	mov	a,r3
   279E F0                 5384 	movx	@dptr,a
                           5385 ;	../../shared/src/interrupt.c:1031: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   279F 90 26 04           5386 	mov	dptr,#_DME_ENC_REG1
   27A2 E4                 5387 	clr	a
   27A3 F0                 5388 	movx	@dptr,a
   27A4 A3                 5389 	inc	dptr
   27A5 F0                 5390 	movx	@dptr,a
                           5391 ;	../../shared/src/interrupt.c:1032: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
                           5392 ;	../../shared/src/interrupt.c:1033: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   27A6 90 26 7A           5393 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   27A9 E0                 5394 	movx	a,@dptr
   27AA 44 40              5395 	orl	a,#0x40
   27AC F0                 5396 	movx	@dptr,a
   27AD E0                 5397 	movx	a,@dptr
   27AE 54 BF              5398 	anl	a,#0xbf
   27B0 F0                 5399 	movx	@dptr,a
   27B1 E0                 5400 	movx	a,@dptr
   27B2 44 20              5401 	orl	a,#0x20
   27B4 F0                 5402 	movx	@dptr,a
   27B5 90 26 7A           5403 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   27B8 E0                 5404 	movx	a,@dptr
   27B9 54 DF              5405 	anl	a,#0xdf
   27BB F0                 5406 	movx	@dptr,a
   27BC 02 28 93           5407 	ljmp	00335$
   27BF                    5408 00321$:
                           5409 ;	../../shared/src/interrupt.c:1039: if(do_tx_apta && cmx_APTA_LIMITED_STATUS_DIS==0) {
   27BF 30 0A 69           5410 	jnb	_do_tx_apta,00309$
   27C2 90 E6 04           5411 	mov	dptr,#_CONTROL_CONFIG0
   27C5 E0                 5412 	movx	a,@dptr
   27C6 20 E5 62           5413 	jb	acc.5,00309$
                           5414 ;	../../shared/src/interrupt.c:1040: switch(ce) { //APTA doesn't have min/max_update combination.
   27C9 E5 18              5415 	mov	a,_bp
   27CB 24 05              5416 	add	a,#0x05
   27CD F8                 5417 	mov	r0,a
   27CE B6 05 02           5418 	cjne	@r0,#0x05,00612$
   27D1 80 1E              5419 	sjmp	00295$
   27D3                    5420 00612$:
   27D3 E5 18              5421 	mov	a,_bp
   27D5 24 05              5422 	add	a,#0x05
   27D7 F8                 5423 	mov	r0,a
   27D8 B6 0A 02           5424 	cjne	@r0,#0x0A,00613$
   27DB 80 23              5425 	sjmp	00298$
   27DD                    5426 00613$:
   27DD E5 18              5427 	mov	a,_bp
   27DF 24 05              5428 	add	a,#0x05
   27E1 F8                 5429 	mov	r0,a
   27E2 B6 14 02           5430 	cjne	@r0,#0x14,00614$
   27E5 80 28              5431 	sjmp	00301$
   27E7                    5432 00614$:
   27E7 E5 18              5433 	mov	a,_bp
   27E9 24 05              5434 	add	a,#0x05
   27EB F8                 5435 	mov	r0,a
                           5436 ;	../../shared/src/interrupt.c:1041: case 0x05: if(rm_stat!=0x05) rm_stat = 0x0f; break;
   27EC B6 28 3C           5437 	cjne	@r0,#0x28,00309$
   27EF 80 2D              5438 	sjmp	00304$
   27F1                    5439 00295$:
   27F1 A8 18              5440 	mov	r0,_bp
   27F3 08                 5441 	inc	r0
   27F4 B6 05 02           5442 	cjne	@r0,#0x05,00616$
   27F7 80 32              5443 	sjmp	00309$
   27F9                    5444 00616$:
   27F9 A8 18              5445 	mov	r0,_bp
   27FB 08                 5446 	inc	r0
   27FC 76 0F              5447 	mov	@r0,#0x0F
                           5448 ;	../../shared/src/interrupt.c:1042: case 0x0a: if(rm_stat!=0x05) rm_stat = 0x0a; break;
   27FE 80 2B              5449 	sjmp	00309$
   2800                    5450 00298$:
   2800 A8 18              5451 	mov	r0,_bp
   2802 08                 5452 	inc	r0
   2803 B6 05 02           5453 	cjne	@r0,#0x05,00617$
   2806 80 23              5454 	sjmp	00309$
   2808                    5455 00617$:
   2808 A8 18              5456 	mov	r0,_bp
   280A 08                 5457 	inc	r0
   280B 76 0A              5458 	mov	@r0,#0x0A
                           5459 ;	../../shared/src/interrupt.c:1043: case 0x14: if(rm_stat!=0x14) rm_stat = 0x3c; break;
   280D 80 1C              5460 	sjmp	00309$
   280F                    5461 00301$:
   280F A8 18              5462 	mov	r0,_bp
   2811 08                 5463 	inc	r0
   2812 B6 14 02           5464 	cjne	@r0,#0x14,00618$
   2815 80 14              5465 	sjmp	00309$
   2817                    5466 00618$:
   2817 A8 18              5467 	mov	r0,_bp
   2819 08                 5468 	inc	r0
   281A 76 3C              5469 	mov	@r0,#0x3C
                           5470 ;	../../shared/src/interrupt.c:1044: case 0x28: if(rm_stat!=0x14) rm_stat = 0x28; break;
   281C 80 0D              5471 	sjmp	00309$
   281E                    5472 00304$:
   281E A8 18              5473 	mov	r0,_bp
   2820 08                 5474 	inc	r0
   2821 B6 14 02           5475 	cjne	@r0,#0x14,00619$
   2824 80 05              5476 	sjmp	00309$
   2826                    5477 00619$:
   2826 A8 18              5478 	mov	r0,_bp
   2828 08                 5479 	inc	r0
   2829 76 28              5480 	mov	@r0,#0x28
                           5481 ;	../../shared/src/interrupt.c:1045: }
   282B                    5482 00309$:
                           5483 ;	../../shared/src/interrupt.c:1049: reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)rm_stat;
   282B A8 18              5484 	mov	r0,_bp
   282D 08                 5485 	inc	r0
   282E 86 12              5486 	mov	ar2,@r0
   2830 7B 00              5487 	mov	r3,#0x00
   2832 90 26 04           5488 	mov	dptr,#_DME_ENC_REG1
   2835 EA                 5489 	mov	a,r2
   2836 F0                 5490 	movx	@dptr,a
   2837 A3                 5491 	inc	dptr
   2838 EB                 5492 	mov	a,r3
   2839 F0                 5493 	movx	@dptr,a
                           5494 ;	../../shared/src/interrupt.c:1050: if( link_train_mode==0 && do_tx_apta==0) {
   283A 90 26 7B           5495 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   283D E0                 5496 	movx	a,@dptr
   283E 20 E7 40           5497 	jb	acc.7,00318$
   2841 20 0A 3D           5498 	jb	_do_tx_apta,00318$
                           5499 ;	../../shared/src/interrupt.c:1051: if( train_comp ) reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x80;
   2844 90 67 11           5500 	mov	dptr,#_train_comp
   2847 E0                 5501 	movx	a,@dptr
   2848 FA                 5502 	mov	r2,a
   2849 60 0F              5503 	jz	00315$
   284B 90 26 05           5504 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   284E E0                 5505 	movx	a,@dptr
   284F FA                 5506 	mov	r2,a
   2850 43 12 80           5507 	orl	ar2,#0x80
   2853 90 26 05           5508 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   2856 EA                 5509 	mov	a,r2
   2857 F0                 5510 	movx	@dptr,a
   2858 80 27              5511 	sjmp	00318$
   285A                    5512 00315$:
                           5513 ;	../../shared/src/interrupt.c:1052: else if( tx_init_bit && phy_mode<=SAS)
   285A 90 67 10           5514 	mov	dptr,#_tx_init_bit
   285D E0                 5515 	movx	a,@dptr
   285E FA                 5516 	mov	r2,a
   285F 60 20              5517 	jz	00318$
   2861 90 A3 16           5518 	mov	dptr,#(_SYSTEM + 0x0002)
   2864 E0                 5519 	movx	a,@dptr
   2865 54 07              5520 	anl	a,#0x07
   2867 FA                 5521 	mov	r2,a
   2868 C3                 5522 	clr	c
   2869 74 81              5523 	mov	a,#(0x01 ^ 0x80)
   286B 8A F0              5524 	mov	b,r2
   286D 63 F0 80           5525 	xrl	b,#0x80
   2870 95 F0              5526 	subb	a,b
   2872 40 0D              5527 	jc	00318$
                           5528 ;	../../shared/src/interrupt.c:1053: reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x40;
   2874 90 26 05           5529 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   2877 E0                 5530 	movx	a,@dptr
   2878 FA                 5531 	mov	r2,a
   2879 43 12 40           5532 	orl	ar2,#0x40
   287C 90 26 05           5533 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   287F EA                 5534 	mov	a,r2
   2880 F0                 5535 	movx	@dptr,a
   2881                    5536 00318$:
                           5537 ;	../../shared/src/interrupt.c:1060: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   2881 90 26 7A           5538 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   2884 E0                 5539 	movx	a,@dptr
   2885 44 20              5540 	orl	a,#0x20
   2887 F0                 5541 	movx	@dptr,a
   2888 E0                 5542 	movx	a,@dptr
   2889 54 DF              5543 	anl	a,#0xdf
   288B F0                 5544 	movx	@dptr,a
                           5545 ;	../../shared/src/interrupt.c:1061: lnx_ERROR_TTIU_DETECTED_LANE = 0;
   288C 90 60 0A           5546 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   288F E0                 5547 	movx	a,@dptr
   2890 54 FE              5548 	anl	a,#0xfe
   2892 F0                 5549 	movx	@dptr,a
                           5550 ;	../../shared/src/interrupt.c:1070: ext_int0:
   2893                    5551 00335$:
                           5552 ;	../../shared/src/interrupt.c:1080: PHY_INT_LANE = 0xFF;
   2893 90 22 33           5553 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2896 74 FF              5554 	mov	a,#0xFF
   2898 F0                 5555 	movx	@dptr,a
                           5556 ;	../../shared/src/interrupt.c:1082: EA = 1;
   2899 D2 AF              5557 	setb	_EA
   289B                    5558 00340$:
   289B 85 18 81           5559 	mov	sp,_bp
   289E D0 18              5560 	pop	_bp
   28A0 D0 D0              5561 	pop	psw
   28A2 D0 83              5562 	pop	dph
   28A4 D0 82              5563 	pop	dpl
   28A6 D0 F0              5564 	pop	b
   28A8 D0 E0              5565 	pop	acc
   28AA D0 25              5566 	pop	bits
   28AC 32                 5567 	reti
                           5568 ;------------------------------------------------------------
                           5569 ;Allocation info for local variables in function 'int6_isr'
                           5570 ;------------------------------------------------------------
                           5571 ;------------------------------------------------------------
                           5572 ;	../../shared/src/interrupt.c:1085: void int6_isr (void) __interrupt (13) __using (2) 
                           5573 ;	-----------------------------------------
                           5574 ;	 function int6_isr
                           5575 ;	-----------------------------------------
   28AD                    5576 _int6_isr:
   28AD C0 E0              5577 	push	acc
   28AF C0 82              5578 	push	dpl
   28B1 C0 83              5579 	push	dph
   28B3 C0 D0              5580 	push	psw
   28B5 75 D0 10           5581 	mov	psw,#0x10
                           5582 ;	../../shared/src/interrupt.c:1088: EA = 0;
   28B8 C2 AF              5583 	clr	_EA
                           5584 ;	../../shared/src/interrupt.c:1091: PHY_INT_LANE = 6;
   28BA 90 22 33           5585 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   28BD 74 06              5586 	mov	a,#0x06
   28BF F0                 5587 	movx	@dptr,a
                           5588 ;	../../shared/src/interrupt.c:1093: reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
                           5589 ;	../../shared/src/interrupt.c:1094: reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
   28C0 90 26 64           5590 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   28C3 E0                 5591 	movx	a,@dptr
   28C4 44 08              5592 	orl	a,#0x08
   28C6 F0                 5593 	movx	@dptr,a
   28C7 E0                 5594 	movx	a,@dptr
   28C8 54 F7              5595 	anl	a,#0xf7
   28CA F0                 5596 	movx	@dptr,a
                           5597 ;	../../shared/src/interrupt.c:1097: if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) { //start trigger
   28CB 90 26 78           5598 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   28CE E0                 5599 	movx	a,@dptr
   28CF 54 01              5600 	anl	a,#0x01
   28D1 FA                 5601 	mov	r2,a
   28D2 BA 01 29           5602 	cjne	r2,#0x01,00104$
                           5603 ;	../../shared/src/interrupt.c:1098: PHY_NS = ST_APTA_TXTRAIN;
   28D5 90 22 31           5604 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   28D8 74 38              5605 	mov	a,#0x38
   28DA F0                 5606 	movx	@dptr,a
                           5607 ;	../../shared/src/interrupt.c:1099: do_rx_apta = 1;
   28DB D2 09              5608 	setb	_do_rx_apta
                           5609 ;	../../shared/src/interrupt.c:1100: if (cmx_TX_TRAIN_MODE == 1)
   28DD 90 E6 28           5610 	mov	dptr,#_TRAIN_IF_CONFIG
   28E0 E0                 5611 	movx	a,@dptr
   28E1 03                 5612 	rr	a
   28E2 54 01              5613 	anl	a,#0x01
   28E4 FA                 5614 	mov	r2,a
   28E5 BA 01 07           5615 	cjne	r2,#0x01,00102$
                           5616 ;	../../shared/src/interrupt.c:1101: reg_ANA_TX_EM_PEAK_EN_LANE = 1;
   28E8 90 26 52           5617 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   28EB E0                 5618 	movx	a,@dptr
   28EC 44 80              5619 	orl	a,#0x80
   28EE F0                 5620 	movx	@dptr,a
   28EF                    5621 00102$:
                           5622 ;	../../shared/src/interrupt.c:1102: reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
                           5623 ;	../../shared/src/interrupt.c:1103: reg_REMOTE_CTRL_FIELD_HIGH_LANE = 1;
                           5624 ;	../../shared/src/interrupt.c:1104: reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
   28EF 90 26 78           5625 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   28F2 E0                 5626 	movx	a,@dptr
   28F3 54 F7              5627 	anl	a,#0xf7
   28F5 F0                 5628 	movx	@dptr,a
   28F6 E0                 5629 	movx	a,@dptr
   28F7 44 08              5630 	orl	a,#0x08
   28F9 F0                 5631 	movx	@dptr,a
   28FA E0                 5632 	movx	a,@dptr
   28FB 54 F7              5633 	anl	a,#0xf7
   28FD F0                 5634 	movx	@dptr,a
   28FE                    5635 00104$:
                           5636 ;	../../shared/src/interrupt.c:1107: apta_sim_state = 0;
   28FE 90 67 A2           5637 	mov	dptr,#_apta_sim_state
   2901 E4                 5638 	clr	a
   2902 F0                 5639 	movx	@dptr,a
                           5640 ;	../../shared/src/interrupt.c:1111: PHY_INT_LANE = 0xFF;
   2903 90 22 33           5641 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2906 74 FF              5642 	mov	a,#0xFF
   2908 F0                 5643 	movx	@dptr,a
                           5644 ;	../../shared/src/interrupt.c:1115: EA = 1;
   2909 D2 AF              5645 	setb	_EA
   290B D0 D0              5646 	pop	psw
   290D D0 83              5647 	pop	dph
   290F D0 82              5648 	pop	dpl
   2911 D0 E0              5649 	pop	acc
   2913 32                 5650 	reti
                           5651 ;	eliminated unneeded push/pop b
                           5652 ;------------------------------------------------------------
                           5653 ;Allocation info for local variables in function 'int12_isr'
                           5654 ;------------------------------------------------------------
                           5655 ;------------------------------------------------------------
                           5656 ;	../../shared/src/interrupt.c:1119: void int12_isr (void) __interrupt (21)  __using (2) 
                           5657 ;	-----------------------------------------
                           5658 ;	 function int12_isr
                           5659 ;	-----------------------------------------
   2914                    5660 _int12_isr:
   2914 C0 E0              5661 	push	acc
   2916 C0 82              5662 	push	dpl
   2918 C0 83              5663 	push	dph
   291A C0 D0              5664 	push	psw
   291C 75 D0 10           5665 	mov	psw,#0x10
                           5666 ;	../../shared/src/interrupt.c:1121: EA = 0;
   291F C2 AF              5667 	clr	_EA
                           5668 ;	../../shared/src/interrupt.c:1122: EX12 = 0; //reg_INT_ENABLE_ALL_LANE = 0;
   2921 C2 9F              5669 	clr	_EX12
                           5670 ;	../../shared/src/interrupt.c:1124: PHY_INT_LANE = 12;
   2923 90 22 33           5671 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2926 74 0C              5672 	mov	a,#0x0C
   2928 F0                 5673 	movx	@dptr,a
                           5674 ;	../../shared/src/interrupt.c:1126: if(reg_FRAME_LOCK_ISR_LANE) {
   2929 90 21 43           5675 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   292C E0                 5676 	movx	a,@dptr
   292D 30 E6 20           5677 	jnb	acc.6,00105$
                           5678 ;	../../shared/src/interrupt.c:1127: reg_FRAME_LOCK_ISR_CLEAR_LANE = 1;
                           5679 ;	../../shared/src/interrupt.c:1128: reg_FRAME_LOCK_ISR_CLEAR_LANE = 0;
   2930 90 21 5B           5680 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   2933 E0                 5681 	movx	a,@dptr
   2934 44 40              5682 	orl	a,#0x40
   2936 F0                 5683 	movx	@dptr,a
   2937 E0                 5684 	movx	a,@dptr
   2938 54 BF              5685 	anl	a,#0xbf
   293A F0                 5686 	movx	@dptr,a
                           5687 ;	../../shared/src/interrupt.c:1130: if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && reg_FRAME_LOCK_LANE) {
   293B 90 26 79           5688 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   293E E0                 5689 	movx	a,@dptr
   293F 30 E6 0E           5690 	jnb	acc.6,00105$
   2942 90 21 26           5691 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   2945 E0                 5692 	movx	a,@dptr
   2946 30 E2 07           5693 	jnb	acc.2,00105$
                           5694 ;	../../shared/src/interrupt.c:1131: reg_TIMER_3_EN_LANE = 0;
   2949 90 22 74           5695 	mov	dptr,#_MCU_TIMER_CONTROL
   294C E0                 5696 	movx	a,@dptr
   294D 54 F7              5697 	anl	a,#0xf7
   294F F0                 5698 	movx	@dptr,a
   2950                    5699 00105$:
                           5700 ;	../../shared/src/interrupt.c:1136: if(reg_PIN_PAPTA_TRAIN_DISABLE_ISR_LANE) {
   2950 90 26 5E           5701 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0002)
   2953 E0                 5702 	movx	a,@dptr
   2954 30 E2 45           5703 	jnb	acc.2,00112$
                           5704 ;	../../shared/src/interrupt.c:1137: reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
                           5705 ;	../../shared/src/interrupt.c:1138: reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;
   2957 90 26 66           5706 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0002)
   295A E0                 5707 	movx	a,@dptr
   295B 44 04              5708 	orl	a,#0x04
   295D F0                 5709 	movx	@dptr,a
   295E E0                 5710 	movx	a,@dptr
   295F 54 FB              5711 	anl	a,#0xfb
   2961 F0                 5712 	movx	@dptr,a
                           5713 ;	../../shared/src/interrupt.c:1140: if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 0 && reg_PIN_PLL_READY_RX_LANE) { //terminate
   2962 90 26 78           5714 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   2965 E0                 5715 	movx	a,@dptr
   2966 20 E0 33           5716 	jb	acc.0,00112$
   2969 90 21 02           5717 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   296C E0                 5718 	movx	a,@dptr
   296D 30 E6 2C           5719 	jnb	acc.6,00112$
                           5720 ;	../../shared/src/interrupt.c:1141: do_tx_apta = 0;
   2970 C2 0A              5721 	clr	_do_tx_apta
                           5722 ;	../../shared/src/interrupt.c:1142: do_rx_apta = 0;
   2972 C2 09              5723 	clr	_do_rx_apta
                           5724 ;	../../shared/src/interrupt.c:1143: apta_sim_state = 0;
   2974 90 67 A2           5725 	mov	dptr,#_apta_sim_state
   2977 E4                 5726 	clr	a
   2978 F0                 5727 	movx	@dptr,a
                           5728 ;	../../shared/src/interrupt.c:1144: if(PHY_STATUS == ST_APTA_TXTRAIN) {
   2979 90 22 30           5729 	mov	dptr,#_MCU_STATUS0_LANE
   297C E0                 5730 	movx	a,@dptr
   297D FA                 5731 	mov	r2,a
   297E BA 38 1B           5732 	cjne	r2,#0x38,00112$
                           5733 ;	../../shared/src/interrupt.c:1145: PHY_NS = ST_APTA_TXTRAIN;
   2981 90 22 31           5734 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2984 74 38              5735 	mov	a,#0x38
   2986 F0                 5736 	movx	@dptr,a
                           5737 ;	../../shared/src/interrupt.c:1146: EX12 = 1; mcu_reset();
   2987 D2 9F              5738 	setb	_EX12
                           5739 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   2989 90 22 33           5740 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   298C 74 FF              5741 	mov	a,#0xFF
   298E F0                 5742 	movx	@dptr,a
                           5743 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   298F 90 22 0B           5744 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   2992 E0                 5745 	movx	a,@dptr
   2993 54 7F              5746 	anl	a,#0x7f
   2995 F0                 5747 	movx	@dptr,a
                           5748 ;	../../shared/src/interrupt.c:37: SRST = 1;
   2996 75 F7 01           5749 	mov	_SRST,#0x01
                           5750 ;	../../shared/src/interrupt.c:38: SRST = 1;
   2999 75 F7 01           5751 	mov	_SRST,#0x01
                           5752 ;	../../shared/src/interrupt.c:1146: EX12 = 1; mcu_reset();
   299C                    5753 00112$:
                           5754 ;	../../shared/src/interrupt.c:1152: PHY_INT_LANE = 0xFF;
   299C 90 22 33           5755 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   299F 74 FF              5756 	mov	a,#0xFF
   29A1 F0                 5757 	movx	@dptr,a
                           5758 ;	../../shared/src/interrupt.c:1155: EX12 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   29A2 D2 9F              5759 	setb	_EX12
                           5760 ;	../../shared/src/interrupt.c:1156: EA = 1;
   29A4 D2 AF              5761 	setb	_EA
   29A6 D0 D0              5762 	pop	psw
   29A8 D0 83              5763 	pop	dph
   29AA D0 82              5764 	pop	dpl
   29AC D0 E0              5765 	pop	acc
   29AE 32                 5766 	reti
                           5767 ;	eliminated unneeded push/pop b
                           5768 ;------------------------------------------------------------
                           5769 ;Allocation info for local variables in function 'int4_isr'
                           5770 ;------------------------------------------------------------
                           5771 ;------------------------------------------------------------
                           5772 ;	../../shared/src/interrupt.c:1159: void int4_isr (void) __interrupt (11)  __using (2) 
                           5773 ;	-----------------------------------------
                           5774 ;	 function int4_isr
                           5775 ;	-----------------------------------------
   29AF                    5776 _int4_isr:
   29AF C0 E0              5777 	push	acc
   29B1 C0 F0              5778 	push	b
   29B3 C0 82              5779 	push	dpl
   29B5 C0 83              5780 	push	dph
   29B7 C0 D0              5781 	push	psw
   29B9 75 D0 10           5782 	mov	psw,#0x10
                           5783 ;	../../shared/src/interrupt.c:1161: EA = 0;
   29BC C2 AF              5784 	clr	_EA
                           5785 ;	../../shared/src/interrupt.c:1162: EX4 = 4; //reg_INT_ENABLE_ALL_LANE = 0;
   29BE D2 BB              5786 	setb	_EX4
                           5787 ;	../../shared/src/interrupt.c:1164: PHY_INT_LANE = 4;
   29C0 90 22 33           5788 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   29C3 74 04              5789 	mov	a,#0x04
   29C5 F0                 5790 	movx	@dptr,a
                           5791 ;	../../shared/src/interrupt.c:1167: if(reg_INT_TIMER3_ISR_LANE) {
   29C6 90 22 88           5792 	mov	dptr,#_MCU_IRQ_LANE
   29C9 E0                 5793 	movx	a,@dptr
   29CA 30 E3 59           5794 	jnb	acc.3,00110$
                           5795 ;	../../shared/src/interrupt.c:1168: reg_INT_TIMER3_ISR_CLEAR_LANE = 1;
                           5796 ;	../../shared/src/interrupt.c:1169: reg_INT_TIMER3_ISR_CLEAR_LANE = 0;
   29CD 90 22 D8           5797 	mov	dptr,#_MCU_IRQ_ISR_LANE
   29D0 E0                 5798 	movx	a,@dptr
   29D1 44 08              5799 	orl	a,#0x08
   29D3 F0                 5800 	movx	@dptr,a
   29D4 E0                 5801 	movx	a,@dptr
   29D5 54 F7              5802 	anl	a,#0xf7
   29D7 F0                 5803 	movx	@dptr,a
                           5804 ;	../../shared/src/interrupt.c:1171: if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE && do_train && train_timer_int && link_train_mode==0 && reg_FRAME_LOCK_LANE==0) {
   29D8 90 60 33           5805 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   29DB E0                 5806 	movx	a,@dptr
   29DC 30 E4 47           5807 	jnb	acc.4,00110$
   29DF 30 06 44           5808 	jnb	_do_train,00110$
   29E2 90 66 CC           5809 	mov	dptr,#_train_timer_int
   29E5 E0                 5810 	movx	a,@dptr
   29E6 FA                 5811 	mov	r2,a
   29E7 60 3D              5812 	jz	00110$
   29E9 90 26 7B           5813 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   29EC E0                 5814 	movx	a,@dptr
   29ED 20 E7 36           5815 	jb	acc.7,00110$
   29F0 90 21 26           5816 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   29F3 E0                 5817 	movx	a,@dptr
   29F4 20 E2 2F           5818 	jb	acc.2,00110$
                           5819 ;	../../shared/src/interrupt.c:1172: if(phy_mode<=SAS) {
   29F7 90 A3 16           5820 	mov	dptr,#(_SYSTEM + 0x0002)
   29FA E0                 5821 	movx	a,@dptr
   29FB 54 07              5822 	anl	a,#0x07
   29FD FA                 5823 	mov	r2,a
   29FE C3                 5824 	clr	c
   29FF 74 81              5825 	mov	a,#(0x01 ^ 0x80)
   2A01 8A F0              5826 	mov	b,r2
   2A03 63 F0 80           5827 	xrl	b,#0x80
   2A06 95 F0              5828 	subb	a,b
   2A08 40 15              5829 	jc	00102$
                           5830 ;	../../shared/src/interrupt.c:1173: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
   2A0A 90 60 5A           5831 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   2A0D E0                 5832 	movx	a,@dptr
   2A0E 44 02              5833 	orl	a,#0x02
   2A10 F0                 5834 	movx	@dptr,a
                           5835 ;	../../shared/src/interrupt.c:1174: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
   2A11 90 26 1C           5836 	mov	dptr,#_TX_TRAIN_IF_REG2
   2A14 E0                 5837 	movx	a,@dptr
   2A15 54 7F              5838 	anl	a,#0x7f
   2A17 F0                 5839 	movx	@dptr,a
                           5840 ;	../../shared/src/interrupt.c:1175: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0;
   2A18 90 26 1D           5841 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   2A1B E0                 5842 	movx	a,@dptr
   2A1C 54 FE              5843 	anl	a,#0xfe
   2A1E F0                 5844 	movx	@dptr,a
   2A1F                    5845 00102$:
                           5846 ;	../../shared/src/interrupt.c:1177: reg_TX_TRAIN_FAILED_LANE = 1;
   2A1F 90 26 7B           5847 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   2A22 E0                 5848 	movx	a,@dptr
   2A23 44 08              5849 	orl	a,#0x08
   2A25 F0                 5850 	movx	@dptr,a
   2A26                    5851 00110$:
                           5852 ;	../../shared/src/interrupt.c:1183: if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE) {
   2A26 90 22 88           5853 	mov	dptr,#_MCU_IRQ_LANE
   2A29 E0                 5854 	movx	a,@dptr
   2A2A 30 E5 19           5855 	jnb	acc.5,00114$
                           5856 ;	../../shared/src/interrupt.c:1184: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
                           5857 ;	../../shared/src/interrupt.c:1185: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
   2A2D 90 22 D8           5858 	mov	dptr,#_MCU_IRQ_ISR_LANE
   2A30 E0                 5859 	movx	a,@dptr
   2A31 44 20              5860 	orl	a,#0x20
   2A33 F0                 5861 	movx	@dptr,a
   2A34 E0                 5862 	movx	a,@dptr
   2A35 54 DF              5863 	anl	a,#0xdf
   2A37 F0                 5864 	movx	@dptr,a
                           5865 ;	../../shared/src/interrupt.c:1187: if(PHY_MCU_REMOTE_REQ_LANE==0) 
   2A38 90 22 E4           5866 	mov	dptr,#_MCU_COMMAND0
   2A3B E0                 5867 	movx	a,@dptr
   2A3C 20 E0 07           5868 	jb	acc.0,00114$
                           5869 ;	../../shared/src/interrupt.c:1188: lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
   2A3F 90 60 33           5870 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   2A42 E0                 5871 	movx	a,@dptr
   2A43 54 FE              5872 	anl	a,#0xfe
   2A45 F0                 5873 	movx	@dptr,a
   2A46                    5874 00114$:
                           5875 ;	../../shared/src/interrupt.c:1198: if( reg_MCU_REMOTE_REQ_ISR ) {
   2A46 90 A2 E4           5876 	mov	dptr,#_MEM_IRQ
   2A49 E0                 5877 	movx	a,@dptr
   2A4A 20 E2 03           5878 	jb	acc.2,00163$
   2A4D 02 2A DC           5879 	ljmp	00134$
   2A50                    5880 00163$:
                           5881 ;	../../shared/src/interrupt.c:1199: reg_MCU_REMOTE_REQ_ISR_CLEAR = 1;
                           5882 ;	../../shared/src/interrupt.c:1200: reg_MCU_REMOTE_REQ_ISR_CLEAR = 0;
   2A50 90 A2 F4           5883 	mov	dptr,#_MEM_IRQ_CLEAR
   2A53 E0                 5884 	movx	a,@dptr
   2A54 44 04              5885 	orl	a,#0x04
   2A56 F0                 5886 	movx	@dptr,a
   2A57 E0                 5887 	movx	a,@dptr
   2A58 54 FB              5888 	anl	a,#0xfb
   2A5A F0                 5889 	movx	@dptr,a
                           5890 ;	../../shared/src/interrupt.c:1202: if(reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_CLEAR ) reg_MCU_LOCAL_STATUS_7_0 = 0;
   2A5B 90 A2 FC           5891 	mov	dptr,#_MCU_SYNC2
   2A5E E0                 5892 	movx	a,@dptr
   2A5F 70 07              5893 	jnz	00128$
   2A61 90 A2 FA           5894 	mov	dptr,#(_MCU_SYNC1 + 0x0002)
   2A64 E4                 5895 	clr	a
   2A65 F0                 5896 	movx	@dptr,a
   2A66 80 5E              5897 	sjmp	00129$
   2A68                    5898 00128$:
                           5899 ;	../../shared/src/interrupt.c:1203: else if((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PU_PLL_ON && reg_ANA_PU_PLL) ||
   2A68 90 A2 FC           5900 	mov	dptr,#_MCU_SYNC2
   2A6B E0                 5901 	movx	a,@dptr
   2A6C FA                 5902 	mov	r2,a
   2A6D BA 02 07           5903 	cjne	r2,#0x02,00120$
   2A70 90 A3 1B           5904 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   2A73 E0                 5905 	movx	a,@dptr
   2A74 20 E2 3D           5906 	jb	acc.2,00115$
   2A77                    5907 00120$:
                           5908 ;	../../shared/src/interrupt.c:1204: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_ON) && reg_ANA_PLL_CLK_READY) ||
   2A77 90 A2 FC           5909 	mov	dptr,#_MCU_SYNC2
   2A7A E0                 5910 	movx	a,@dptr
   2A7B FA                 5911 	mov	r2,a
   2A7C BA 03 07           5912 	cjne	r2,#0x03,00122$
   2A7F 90 A3 4F           5913 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   2A82 E0                 5914 	movx	a,@dptr
   2A83 20 E0 2E           5915 	jb	acc.0,00115$
   2A86                    5916 00122$:
                           5917 ;	../../shared/src/interrupt.c:1205: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_LOCK_ON) && reg_ANA_PLL_LOCK_RD) ||
   2A86 90 A2 FC           5918 	mov	dptr,#_MCU_SYNC2
   2A89 E0                 5919 	movx	a,@dptr
   2A8A FA                 5920 	mov	r2,a
   2A8B BA 04 07           5921 	cjne	r2,#0x04,00124$
   2A8E 90 A3 19           5922 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   2A91 E0                 5923 	movx	a,@dptr
   2A92 20 E6 1F           5924 	jb	acc.6,00115$
   2A95                    5925 00124$:
                           5926 ;	../../shared/src/interrupt.c:1207: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_RING_ON) && reg_ANA_PLL_CLK_READY_RING) ||
   2A95 90 A2 FC           5927 	mov	dptr,#_MCU_SYNC2
   2A98 E0                 5928 	movx	a,@dptr
   2A99 FA                 5929 	mov	r2,a
   2A9A BA 05 07           5930 	cjne	r2,#0x05,00126$
   2A9D 90 A3 4E           5931 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   2AA0 E0                 5932 	movx	a,@dptr
   2AA1 20 E5 10           5933 	jb	acc.5,00115$
   2AA4                    5934 00126$:
                           5935 ;	../../shared/src/interrupt.c:1208: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CAL_LOOP_DONE) && (PHY_STATUS_INT&LCPLL_CAL_LOOP_DONE)) )
   2AA4 90 A2 FC           5936 	mov	dptr,#_MCU_SYNC2
   2AA7 E0                 5937 	movx	a,@dptr
   2AA8 FA                 5938 	mov	r2,a
   2AA9 BA 06 14           5939 	cjne	r2,#0x06,00116$
   2AAC 90 22 38           5940 	mov	dptr,#_MCU_STATUS2_LANE
   2AAF E0                 5941 	movx	a,@dptr
   2AB0 FA                 5942 	mov	r2,a
   2AB1 30 E1 0C           5943 	jnb	acc.1,00116$
   2AB4                    5944 00115$:
                           5945 ;	../../shared/src/interrupt.c:1209: reg_MCU_LOCAL_STATUS_7_0 = reg_MCU_REMOTE_COMMAND_RD_7_0;
   2AB4 90 A2 FC           5946 	mov	dptr,#_MCU_SYNC2
   2AB7 E0                 5947 	movx	a,@dptr
   2AB8 FA                 5948 	mov	r2,a
   2AB9 90 A2 FA           5949 	mov	dptr,#(_MCU_SYNC1 + 0x0002)
   2ABC EA                 5950 	mov	a,r2
   2ABD F0                 5951 	movx	@dptr,a
   2ABE 80 06              5952 	sjmp	00129$
   2AC0                    5953 00116$:
                           5954 ;	../../shared/src/interrupt.c:1210: else 	reg_MCU_LOCAL_STATUS_7_0 = CHECK_WAIT;
   2AC0 90 A2 FA           5955 	mov	dptr,#(_MCU_SYNC1 + 0x0002)
   2AC3 74 01              5956 	mov	a,#0x01
   2AC5 F0                 5957 	movx	@dptr,a
   2AC6                    5958 00129$:
                           5959 ;	../../shared/src/interrupt.c:1212: if(reg_MCU_REMOTE_COMMAND_RD_7_0) {
   2AC6 90 A2 FC           5960 	mov	dptr,#_MCU_SYNC2
   2AC9 E0                 5961 	movx	a,@dptr
   2ACA 60 09              5962 	jz	00131$
                           5963 ;	../../shared/src/interrupt.c:1213: reg_MCU_LOCAL_ACK = 1;
   2ACC 90 A2 FB           5964 	mov	dptr,#(_MCU_SYNC1 + 0x0003)
   2ACF E0                 5965 	movx	a,@dptr
   2AD0 44 01              5966 	orl	a,#0x01
   2AD2 F0                 5967 	movx	@dptr,a
   2AD3 80 07              5968 	sjmp	00134$
   2AD5                    5969 00131$:
                           5970 ;	../../shared/src/interrupt.c:1216: reg_MCU_LOCAL_ACK = 0;
   2AD5 90 A2 FB           5971 	mov	dptr,#(_MCU_SYNC1 + 0x0003)
   2AD8 E0                 5972 	movx	a,@dptr
   2AD9 54 FE              5973 	anl	a,#0xfe
   2ADB F0                 5974 	movx	@dptr,a
   2ADC                    5975 00134$:
                           5976 ;	../../shared/src/interrupt.c:1219: PHY_INT_LANE = 0xFF;
   2ADC 90 22 33           5977 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2ADF 74 FF              5978 	mov	a,#0xFF
   2AE1 F0                 5979 	movx	@dptr,a
                           5980 ;	../../shared/src/interrupt.c:1221: EX4 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   2AE2 D2 BB              5981 	setb	_EX4
                           5982 ;	../../shared/src/interrupt.c:1222: EA = 1;
   2AE4 D2 AF              5983 	setb	_EA
   2AE6 D0 D0              5984 	pop	psw
   2AE8 D0 83              5985 	pop	dph
   2AEA D0 82              5986 	pop	dpl
   2AEC D0 F0              5987 	pop	b
   2AEE D0 E0              5988 	pop	acc
   2AF0 32                 5989 	reti
                           5990 ;------------------------------------------------------------
                           5991 ;Allocation info for local variables in function 'uart0_isr'
                           5992 ;------------------------------------------------------------
                           5993 ;------------------------------------------------------------
                           5994 ;	../../shared/src/interrupt.c:1225: void uart0_isr(void) __interrupt(4) __using (2)
                           5995 ;	-----------------------------------------
                           5996 ;	 function uart0_isr
                           5997 ;	-----------------------------------------
   2AF1                    5998 _uart0_isr:
   2AF1 C0 D0              5999 	push	psw
   2AF3 75 D0 10           6000 	mov	psw,#0x10
                           6001 ;	../../shared/src/interrupt.c:1227: EA = 0;
   2AF6 C2 AF              6002 	clr	_EA
                           6003 ;	../../shared/src/interrupt.c:1228: if(RI) {
                           6004 ;	../../shared/src/interrupt.c:1229: RI = 0;
   2AF8 10 98 02           6005 	jbc	_RI,00109$
   2AFB 80 00              6006 	sjmp	00102$
   2AFD                    6007 00109$:
   2AFD                    6008 00102$:
                           6009 ;	../../shared/src/interrupt.c:1237: if(TI) {
                           6010 ;	../../shared/src/interrupt.c:1238: TI = 0;
   2AFD 10 99 02           6011 	jbc	_TI,00110$
   2B00 80 00              6012 	sjmp	00104$
   2B02                    6013 00110$:
   2B02                    6014 00104$:
                           6015 ;	../../shared/src/interrupt.c:1244: EA = 1;
   2B02 D2 AF              6016 	setb	_EA
   2B04 D0 D0              6017 	pop	psw
   2B06 32                 6018 	reti
                           6019 ;	eliminated unneeded push/pop dpl
                           6020 ;	eliminated unneeded push/pop dph
                           6021 ;	eliminated unneeded push/pop b
                           6022 ;	eliminated unneeded push/pop acc
                           6023 	.area CSEG    (CODE)
                           6024 	.area CSEG    (CODE)
   2B07                    6025 _valid_coe_tbl:
   2B07 00                 6026 	.db #0x00	; 0
   2B08 04                 6027 	.db #0x04	; 4
   2B09 05                 6028 	.db #0x05	; 5
   2B0A 08                 6029 	.db #0x08	; 8
   2B0B 0A                 6030 	.db #0x0A	; 10
   2B0C 14                 6031 	.db #0x14	; 20
   2B0D 28                 6032 	.db #0x28	; 40
   2B0E 02                 6033 	.db #0x02	; 2
   2B0F 01                 6034 	.db #0x01	; 1
   2B10 20                 6035 	.db #0x20	; 32
   2B11 10                 6036 	.db #0x10	; 16
                           6037 	.area CABS    (ABS,CODE)
