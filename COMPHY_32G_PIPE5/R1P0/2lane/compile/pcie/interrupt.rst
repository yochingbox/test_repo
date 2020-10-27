                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:26 2018
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
   1621                    2066 _short_delay_1p4s:
                    0002   2067 	ar2 = 0x02
                    0003   2068 	ar3 = 0x03
                    0004   2069 	ar4 = 0x04
                    0005   2070 	ar5 = 0x05
                    0006   2071 	ar6 = 0x06
                    0007   2072 	ar7 = 0x07
                    0000   2073 	ar0 = 0x00
                    0001   2074 	ar1 = 0x01
                           2075 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   1621 7A 0E              2076 	mov	r2,#0x0E
   1623 7B 00              2077 	mov	r3,#0x00
   1625                    2078 00103$:
                           2079 ;	../../shared/src/interrupt.c:29: __endasm;
                           2080 	
   1625 00                 2081 	  nop
   1626 00                 2082 	  nop
   1627 00                 2083 	  nop
   1628 00                 2084 	  nop
   1629 00                 2085 	  nop
   162A 00                 2086 	  nop
   162B 00                 2087 	  nop
   162C 00                 2088 	  nop
   162D 00                 2089 	  nop
   162E 00                 2090 	  nop
                           2091 	 
   162F 1A                 2092 	dec	r2
   1630 BA FF 01           2093 	cjne	r2,#0xff,00109$
   1633 1B                 2094 	dec	r3
   1634                    2095 00109$:
                           2096 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   1634 EA                 2097 	mov	a,r2
   1635 4B                 2098 	orl	a,r3
   1636 60 03              2099 	jz	00110$
   1638 02 16 25           2100 	ljmp	00103$
   163B                    2101 00110$:
   163B 22                 2102 	ret
                           2103 ;------------------------------------------------------------
                           2104 ;Allocation info for local variables in function 'mcu_reset'
                           2105 ;------------------------------------------------------------
                           2106 ;------------------------------------------------------------
                           2107 ;	../../shared/src/interrupt.c:34: static inline void mcu_reset(void) {
                           2108 ;	-----------------------------------------
                           2109 ;	 function mcu_reset
                           2110 ;	-----------------------------------------
   163C                    2111 _mcu_reset:
                           2112 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   163C 90 22 33           2113 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   163F 74 FF              2114 	mov	a,#0xFF
   1641 F0                 2115 	movx	@dptr,a
                           2116 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1642 90 22 0B           2117 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1645 E0                 2118 	movx	a,@dptr
   1646 54 7F              2119 	anl	a,#0x7f
   1648 F0                 2120 	movx	@dptr,a
                           2121 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1649 75 F7 01           2122 	mov	_SRST,#0x01
                           2123 ;	../../shared/src/interrupt.c:38: SRST = 1;
   164C 75 F7 01           2124 	mov	_SRST,#0x01
   164F 22                 2125 	ret
                           2126 ;------------------------------------------------------------
                           2127 ;Allocation info for local variables in function 'sync_status_lane_en_0'
                           2128 ;------------------------------------------------------------
                           2129 ;lane_en                   Allocated to registers r2 
                           2130 ;------------------------------------------------------------
                           2131 ;	../../shared/src/interrupt.c:41: static inline void sync_status_lane_en_0(uint8_t lane_en) {
                           2132 ;	-----------------------------------------
                           2133 ;	 function sync_status_lane_en_0
                           2134 ;	-----------------------------------------
   1650                    2135 _sync_status_lane_en_0:
   1650 AA 82              2136 	mov	r2,dpl
                           2137 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   1652 90 22 36           2138 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   1655 EA                 2139 	mov	a,r2
   1656 F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   1657 90 22 00           2142 	mov	dptr,#_MCU_CONTROL_LANE
   165A E0                 2143 	movx	a,@dptr
   165B 70 06              2144 	jnz	00102$
                           2145 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   165D 90 E6 BE           2146 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   1660 EA                 2147 	mov	a,r2
   1661 F0                 2148 	movx	@dptr,a
   1662 22                 2149 	ret
   1663                    2150 00102$:
                           2151 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   1663 90 E6 C2           2152 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   1666 EA                 2153 	mov	a,r2
   1667 F0                 2154 	movx	@dptr,a
   1668 22                 2155 	ret
                           2156 ;------------------------------------------------------------
                           2157 ;Allocation info for local variables in function 'timer0_isr'
                           2158 ;------------------------------------------------------------
                           2159 ;------------------------------------------------------------
                           2160 ;	../../shared/src/interrupt.c:49: void timer0_isr (void) __interrupt (1) __using (2)
                           2161 ;	-----------------------------------------
                           2162 ;	 function timer0_isr
                           2163 ;	-----------------------------------------
   1669                    2164 _timer0_isr:
                    0012   2165 	ar2 = 0x12
                    0013   2166 	ar3 = 0x13
                    0014   2167 	ar4 = 0x14
                    0015   2168 	ar5 = 0x15
                    0016   2169 	ar6 = 0x16
                    0017   2170 	ar7 = 0x17
                    0010   2171 	ar0 = 0x10
                    0011   2172 	ar1 = 0x11
   1669 C0 E0              2173 	push	acc
   166B C0 82              2174 	push	dpl
   166D C0 83              2175 	push	dph
   166F C0 D0              2176 	push	psw
   1671 75 D0 10           2177 	mov	psw,#0x10
                           2178 ;	../../shared/src/interrupt.c:51: EA = 0;
   1674 C2 AF              2179 	clr	_EA
                           2180 ;	../../shared/src/interrupt.c:52: PHY_INT_LANE = 0xF0;
   1676 90 22 33           2181 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1679 74 F0              2182 	mov	a,#0xF0
   167B F0                 2183 	movx	@dptr,a
                           2184 ;	../../shared/src/interrupt.c:53: TF0 = 0;
   167C C2 8D              2185 	clr	_TF0
                           2186 ;	../../shared/src/interrupt.c:54: TR0 = 0;
   167E C2 8C              2187 	clr	_TR0
                           2188 ;	../../shared/src/interrupt.c:67: PHY_INT_LANE = 0xFF;
   1680 90 22 33           2189 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1683 74 FF              2190 	mov	a,#0xFF
   1685 F0                 2191 	movx	@dptr,a
                           2192 ;	../../shared/src/interrupt.c:68: EA = 1;
   1686 D2 AF              2193 	setb	_EA
   1688 D0 D0              2194 	pop	psw
   168A D0 83              2195 	pop	dph
   168C D0 82              2196 	pop	dpl
   168E D0 E0              2197 	pop	acc
   1690 32                 2198 	reti
                           2199 ;	eliminated unneeded push/pop b
                           2200 ;------------------------------------------------------------
                           2201 ;Allocation info for local variables in function 'timer1_isr'
                           2202 ;------------------------------------------------------------
                           2203 ;------------------------------------------------------------
                           2204 ;	../../shared/src/interrupt.c:71: void timer1_isr (void) __interrupt (3) __using (2)
                           2205 ;	-----------------------------------------
                           2206 ;	 function timer1_isr
                           2207 ;	-----------------------------------------
   1691                    2208 _timer1_isr:
   1691 C0 D0              2209 	push	psw
   1693 75 D0 10           2210 	mov	psw,#0x10
                           2211 ;	../../shared/src/interrupt.c:73: EA = 0;
   1696 C2 AF              2212 	clr	_EA
                           2213 ;	../../shared/src/interrupt.c:74: TR1 = 0;
   1698 C2 8E              2214 	clr	_TR1
                           2215 ;	../../shared/src/interrupt.c:75: TF1 = 0;
   169A C2 8F              2216 	clr	_TF1
                           2217 ;	../../shared/src/interrupt.c:76: timeout = 1;
   169C D2 03              2218 	setb	_timeout
                           2219 ;	../../shared/src/interrupt.c:77: EA = 1;
   169E D2 AF              2220 	setb	_EA
   16A0 D0 D0              2221 	pop	psw
   16A2 32                 2222 	reti
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
   16A3                    2235 _timer2_isr:
   16A3 C0 E0              2236 	push	acc
   16A5 C0 F0              2237 	push	b
   16A7 C0 82              2238 	push	dpl
   16A9 C0 83              2239 	push	dph
   16AB C0 D0              2240 	push	psw
   16AD 75 D0 10           2241 	mov	psw,#0x10
                           2242 ;	../../shared/src/interrupt.c:82: EA = 0;
   16B0 C2 AF              2243 	clr	_EA
                           2244 ;	../../shared/src/interrupt.c:83: PHY_INT_LANE = 0xF2;
   16B2 90 22 33           2245 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   16B5 74 F2              2246 	mov	a,#0xF2
   16B7 F0                 2247 	movx	@dptr,a
                           2248 ;	../../shared/src/interrupt.c:84: T2CON = 0x78;//60;
   16B8 75 C8 78           2249 	mov	_T2CON,#0x78
                           2250 ;	../../shared/src/interrupt.c:85: TF2 = 0;
   16BB C2 C6              2251 	clr	_TF2
                           2252 ;	../../shared/src/interrupt.c:86: timeout2 = 1;
   16BD D2 04              2253 	setb	_timeout2
                           2254 ;	../../shared/src/interrupt.c:88: if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train && train_timer_int) {
   16BF 90 60 33           2255 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   16C2 E0                 2256 	movx	a,@dptr
   16C3 20 E5 03           2257 	jb	acc.5,00134$
   16C6 02 17 5C           2258 	ljmp	00117$
   16C9                    2259 00134$:
   16C9 20 06 03           2260 	jb	_do_train,00135$
   16CC 02 17 5C           2261 	ljmp	00117$
   16CF                    2262 00135$:
   16CF 90 66 CC           2263 	mov	dptr,#_train_timer_int
   16D2 E0                 2264 	movx	a,@dptr
   16D3 FA                 2265 	mov	r2,a
   16D4 70 03              2266 	jnz	00136$
   16D6 02 17 5C           2267 	ljmp	00117$
   16D9                    2268 00136$:
                           2269 ;	../../shared/src/interrupt.c:89: if(phy_mode<=SAS) {
   16D9 90 A3 16           2270 	mov	dptr,#(_SYSTEM + 0x0002)
   16DC E0                 2271 	movx	a,@dptr
   16DD 54 07              2272 	anl	a,#0x07
   16DF FA                 2273 	mov	r2,a
   16E0 C3                 2274 	clr	c
   16E1 74 81              2275 	mov	a,#(0x01 ^ 0x80)
   16E3 8A F0              2276 	mov	b,r2
   16E5 63 F0 80           2277 	xrl	b,#0x80
   16E8 95 F0              2278 	subb	a,b
   16EA 40 60              2279 	jc	00111$
                           2280 ;	../../shared/src/interrupt.c:90: if(reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0) {
   16EC 90 26 7B           2281 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   16EF E0                 2282 	movx	a,@dptr
   16F0 20 E4 10           2283 	jb	acc.4,00105$
                           2284 ;	../../shared/src/interrupt.c:91: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //2=MTTT timer expire for local phy
   16F3 90 26 1C           2285 	mov	dptr,#_TX_TRAIN_IF_REG2
   16F6 E0                 2286 	movx	a,@dptr
   16F7 54 7F              2287 	anl	a,#0x7f
   16F9 F0                 2288 	movx	@dptr,a
                           2289 ;	../../shared/src/interrupt.c:92: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1;
   16FA 90 26 1D           2290 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   16FD E0                 2291 	movx	a,@dptr
   16FE 44 01              2292 	orl	a,#0x01
   1700 F0                 2293 	movx	@dptr,a
   1701 80 26              2294 	sjmp	00106$
   1703                    2295 00105$:
                           2296 ;	../../shared/src/interrupt.c:94: else if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x80)==0) {
   1703 90 26 71           2297 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0001)
   1706 E0                 2298 	movx	a,@dptr
   1707 FA                 2299 	mov	r2,a
   1708 20 E7 10           2300 	jb	acc.7,00102$
                           2301 ;	../../shared/src/interrupt.c:95: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //3=does not get remote phy's complete status
   170B 90 26 1C           2302 	mov	dptr,#_TX_TRAIN_IF_REG2
   170E E0                 2303 	movx	a,@dptr
   170F 44 80              2304 	orl	a,#0x80
   1711 F0                 2305 	movx	@dptr,a
                           2306 ;	../../shared/src/interrupt.c:96: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1;
   1712 90 26 1D           2307 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   1715 E0                 2308 	movx	a,@dptr
   1716 44 01              2309 	orl	a,#0x01
   1718 F0                 2310 	movx	@dptr,a
   1719 80 0E              2311 	sjmp	00106$
   171B                    2312 00102$:
                           2313 ;	../../shared/src/interrupt.c:99: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1;
   171B 90 26 1C           2314 	mov	dptr,#_TX_TRAIN_IF_REG2
   171E E0                 2315 	movx	a,@dptr
   171F 44 80              2316 	orl	a,#0x80
   1721 F0                 2317 	movx	@dptr,a
                           2318 ;	../../shared/src/interrupt.c:100: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0;
   1722 90 26 1D           2319 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   1725 E0                 2320 	movx	a,@dptr
   1726 54 FE              2321 	anl	a,#0xfe
   1728 F0                 2322 	movx	@dptr,a
   1729                    2323 00106$:
                           2324 ;	../../shared/src/interrupt.c:102: if(link_train_mode==0 && reg_FRAME_LOCK_LANE==0){
   1729 90 26 7B           2325 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   172C E0                 2326 	movx	a,@dptr
   172D 20 E7 1C           2327 	jb	acc.7,00111$
   1730 90 21 26           2328 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   1733 E0                 2329 	movx	a,@dptr
   1734 20 E2 15           2330 	jb	acc.2,00111$
                           2331 ;	../../shared/src/interrupt.c:103: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
   1737 90 60 5A           2332 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   173A E0                 2333 	movx	a,@dptr
   173B 44 02              2334 	orl	a,#0x02
   173D F0                 2335 	movx	@dptr,a
                           2336 ;	../../shared/src/interrupt.c:104: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
   173E 90 26 1C           2337 	mov	dptr,#_TX_TRAIN_IF_REG2
   1741 E0                 2338 	movx	a,@dptr
   1742 54 7F              2339 	anl	a,#0x7f
   1744 F0                 2340 	movx	@dptr,a
                           2341 ;	../../shared/src/interrupt.c:105: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0;
   1745 90 26 1D           2342 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   1748 E0                 2343 	movx	a,@dptr
   1749 54 FE              2344 	anl	a,#0xfe
   174B F0                 2345 	movx	@dptr,a
   174C                    2346 00111$:
                           2347 ;	../../shared/src/interrupt.c:108: lnx_TX_TRAIN_FAIL_INT_LANE = 1;
   174C 90 60 59           2348 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   174F E0                 2349 	movx	a,@dptr
   1750 44 80              2350 	orl	a,#0x80
   1752 F0                 2351 	movx	@dptr,a
                           2352 ;	../../shared/src/interrupt.c:109: reg_TX_TRAIN_FAILED_LANE = 1;
   1753 90 26 7B           2353 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1756 E0                 2354 	movx	a,@dptr
   1757 44 08              2355 	orl	a,#0x08
   1759 F0                 2356 	movx	@dptr,a
   175A 80 18              2357 	sjmp	00118$
   175C                    2358 00117$:
                           2359 ;	../../shared/src/interrupt.c:111: else if(reg_RX_TRAIN_COMPLETE_LANE==0 && do_rxtrain && train_timer_int) {
   175C 90 26 7B           2360 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   175F E0                 2361 	movx	a,@dptr
   1760 20 E0 11           2362 	jb	acc.0,00118$
   1763 30 07 0E           2363 	jnb	_do_rxtrain,00118$
   1766 90 66 CC           2364 	mov	dptr,#_train_timer_int
   1769 E0                 2365 	movx	a,@dptr
   176A FA                 2366 	mov	r2,a
   176B 60 07              2367 	jz	00118$
                           2368 ;	../../shared/src/interrupt.c:112: reg_RX_TRAIN_FAILED_LANE = 1;
   176D 90 26 7A           2369 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   1770 E0                 2370 	movx	a,@dptr
   1771 44 80              2371 	orl	a,#0x80
   1773 F0                 2372 	movx	@dptr,a
   1774                    2373 00118$:
                           2374 ;	../../shared/src/interrupt.c:115: PHY_INT_LANE = 0xFF;
   1774 90 22 33           2375 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1777 74 FF              2376 	mov	a,#0xFF
   1779 F0                 2377 	movx	@dptr,a
                           2378 ;	../../shared/src/interrupt.c:116: EA = 1;
   177A D2 AF              2379 	setb	_EA
   177C D0 D0              2380 	pop	psw
   177E D0 83              2381 	pop	dph
   1780 D0 82              2382 	pop	dpl
   1782 D0 F0              2383 	pop	b
   1784 D0 E0              2384 	pop	acc
   1786 32                 2385 	reti
                           2386 ;------------------------------------------------------------
                           2387 ;Allocation info for local variables in function 'int0_isr'
                           2388 ;------------------------------------------------------------
                           2389 ;------------------------------------------------------------
                           2390 ;	../../shared/src/interrupt.c:119: void int0_isr (void) __interrupt (0)  __using (2)  
                           2391 ;	-----------------------------------------
                           2392 ;	 function int0_isr
                           2393 ;	-----------------------------------------
   1787                    2394 _int0_isr:
   1787 C0 E0              2395 	push	acc
   1789 C0 82              2396 	push	dpl
   178B C0 83              2397 	push	dph
   178D C0 D0              2398 	push	psw
   178F 75 D0 10           2399 	mov	psw,#0x10
                           2400 ;	../../shared/src/interrupt.c:121: PHY_INT_LANE = 13;
                           2401 ;	../../shared/src/interrupt.c:125: PHY_INT_LANE = 0xFF;
   1792 90 22 33           2402 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1795 74 0D              2403 	mov	a,#0x0D
   1797 F0                 2404 	movx	@dptr,a
   1798 74 FF              2405 	mov	a,#0xFF
   179A F0                 2406 	movx	@dptr,a
   179B D0 D0              2407 	pop	psw
   179D D0 83              2408 	pop	dph
   179F D0 82              2409 	pop	dpl
   17A1 D0 E0              2410 	pop	acc
   17A3 32                 2411 	reti
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
   17A4                    2423 _int3_isr:
   17A4 C0 E0              2424 	push	acc
   17A6 C0 82              2425 	push	dpl
   17A8 C0 83              2426 	push	dph
   17AA C0 D0              2427 	push	psw
   17AC 75 D0 10           2428 	mov	psw,#0x10
                           2429 ;	../../shared/src/interrupt.c:130: EA = 0;
   17AF C2 AF              2430 	clr	_EA
                           2431 ;	../../shared/src/interrupt.c:131: PHY_INT_LANE = 3;
   17B1 90 22 33           2432 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   17B4 74 03              2433 	mov	a,#0x03
   17B6 F0                 2434 	movx	@dptr,a
                           2435 ;	../../shared/src/interrupt.c:133: if( reg_INT_REFCLK_DIS_CHG_ISR_LANE ) {
   17B7 90 20 1B           2436 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   17BA E0                 2437 	movx	a,@dptr
   17BB 30 E1 08           2438 	jnb	acc.1,00102$
                           2439 ;	../../shared/src/interrupt.c:134: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x02;
                           2440 ;	../../shared/src/interrupt.c:135: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   17BE 90 20 53           2441 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   17C1 74 02              2442 	mov	a,#0x02
   17C3 F0                 2443 	movx	@dptr,a
   17C4 E4                 2444 	clr	a
   17C5 F0                 2445 	movx	@dptr,a
   17C6                    2446 00102$:
                           2447 ;	../../shared/src/interrupt.c:146: if( reg_INT_PU_IVREF_CHG_ISR_LANE ) {
   17C6 90 20 1B           2448 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   17C9 E0                 2449 	movx	a,@dptr
   17CA 30 E2 48           2450 	jnb	acc.2,00108$
                           2451 ;	../../shared/src/interrupt.c:147: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x04;
                           2452 ;	../../shared/src/interrupt.c:148: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   17CD 90 20 53           2453 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   17D0 74 04              2454 	mov	a,#0x04
   17D2 F0                 2455 	movx	@dptr,a
   17D3 E4                 2456 	clr	a
   17D4 F0                 2457 	movx	@dptr,a
                           2458 ;	../../shared/src/interrupt.c:150: if(reg_PIN_PU_IVREF_RD==0 && reg_PIN_PU_PLL_RD_LANE==0 && mcuid== master_mcu ) {
   17D5 90 A3 1B           2459 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   17D8 E0                 2460 	movx	a,@dptr
   17D9 20 E5 39           2461 	jb	acc.5,00108$
   17DC 90 20 07           2462 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   17DF E0                 2463 	movx	a,@dptr
   17E0 20 E5 32           2464 	jb	acc.5,00108$
   17E3 90 22 00           2465 	mov	dptr,#_MCU_CONTROL_LANE
   17E6 E0                 2466 	movx	a,@dptr
   17E7 FA                 2467 	mov	r2,a
   17E8 90 E6 50           2468 	mov	dptr,#_MCU_CONFIG
   17EB E0                 2469 	movx	a,@dptr
   17EC FB                 2470 	mov	r3,a
   17ED EA                 2471 	mov	a,r2
   17EE B5 13 24           2472 	cjne	a,ar3,00108$
                           2473 ;	../../shared/src/interrupt.c:151: PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
                           2474 ;	../../shared/src/interrupt.c:152: PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
                           2475 ;	../../shared/src/interrupt.c:153: PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
                           2476 ;	../../shared/src/interrupt.c:154: PM_CMN_REG2.BT.B2 = 0;
   17F1 90 A3 4E           2477 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   17F4 74 0E              2478 	mov	a,#0x0E
   17F6 F0                 2479 	movx	@dptr,a
   17F7 74 0C              2480 	mov	a,#0x0C
   17F9 F0                 2481 	movx	@dptr,a
   17FA 74 08              2482 	mov	a,#0x08
   17FC F0                 2483 	movx	@dptr,a
                           2484 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   17FD E4                 2485 	clr	a
   17FE F0                 2486 	movx	@dptr,a
   17FF 90 22 36           2487 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   1802 F0                 2488 	movx	@dptr,a
                           2489 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   1803 90 22 00           2490 	mov	dptr,#_MCU_CONTROL_LANE
   1806 E0                 2491 	movx	a,@dptr
   1807 70 07              2492 	jnz	00110$
                           2493 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   1809 90 E6 BE           2494 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   180C E4                 2495 	clr	a
   180D F0                 2496 	movx	@dptr,a
   180E 80 05              2497 	sjmp	00108$
   1810                    2498 00110$:
                           2499 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   1810 90 E6 C2           2500 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   1813 E4                 2501 	clr	a
   1814 F0                 2502 	movx	@dptr,a
                           2503 ;	../../shared/src/interrupt.c:155: sync_status_lane_en_0(0);
   1815                    2504 00108$:
                           2505 ;	../../shared/src/interrupt.c:159: PHY_INT_LANE = 0xFF;
   1815 90 22 33           2506 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1818 74 FF              2507 	mov	a,#0xFF
   181A F0                 2508 	movx	@dptr,a
                           2509 ;	../../shared/src/interrupt.c:161: EA = 1;
   181B D2 AF              2510 	setb	_EA
   181D D0 D0              2511 	pop	psw
   181F D0 83              2512 	pop	dph
   1821 D0 82              2513 	pop	dpl
   1823 D0 E0              2514 	pop	acc
   1825 32                 2515 	reti
                           2516 ;	eliminated unneeded push/pop b
                           2517 ;------------------------------------------------------------
                           2518 ;Allocation info for local variables in function 'int1_isr'
                           2519 ;------------------------------------------------------------
                           2520 ;int_pll_or_chg            Allocated to stack - offset 1
                           2521 ;__00032404                Allocated to registers 
                           2522 ;lane_en                   Allocated to registers 
                           2523 ;__00032406                Allocated to registers 
                           2524 ;lane_en                   Allocated to registers 
                           2525 ;------------------------------------------------------------
                           2526 ;	../../shared/src/interrupt.c:164: void int1_isr (void) __interrupt (2)  __using (2) //pcie
                           2527 ;	-----------------------------------------
                           2528 ;	 function int1_isr
                           2529 ;	-----------------------------------------
   1826                    2530 _int1_isr:
   1826 C0 E0              2531 	push	acc
   1828 C0 82              2532 	push	dpl
   182A C0 83              2533 	push	dph
   182C C0 D0              2534 	push	psw
   182E 75 D0 10           2535 	mov	psw,#0x10
   1831 C0 18              2536 	push	_bp
   1833 85 81 18           2537 	mov	_bp,sp
   1836 05 81              2538 	inc	sp
                           2539 ;	../../shared/src/interrupt.c:169: EA = 0;
   1838 C2 AF              2540 	clr	_EA
                           2541 ;	../../shared/src/interrupt.c:172: PHY_INT_LANE = 1;
   183A 90 22 33           2542 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   183D 74 01              2543 	mov	a,#0x01
   183F F0                 2544 	movx	@dptr,a
                           2545 ;	../../shared/src/interrupt.c:175: if(reg_DPHY_ANA_LANE_DISABLE_ISR_LANE) {
   1840 90 20 1A           2546 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   1843 E0                 2547 	movx	a,@dptr
   1844 20 E1 03           2548 	jb	acc.1,00193$
   1847 02 18 B7           2549 	ljmp	00111$
   184A                    2550 00193$:
                           2551 ;	../../shared/src/interrupt.c:176: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x02;
                           2552 ;	../../shared/src/interrupt.c:177: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
   184A 90 20 52           2553 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0002)
   184D 74 02              2554 	mov	a,#0x02
   184F F0                 2555 	movx	@dptr,a
   1850 E4                 2556 	clr	a
   1851 F0                 2557 	movx	@dptr,a
                           2558 ;	../../shared/src/interrupt.c:179: switch(mcuid) {
   1852 90 22 00           2559 	mov	dptr,#_MCU_CONTROL_LANE
   1855 E0                 2560 	movx	a,@dptr
   1856 FA                 2561 	mov	r2,a
   1857 60 05              2562 	jz	00101$
                           2563 ;	../../shared/src/interrupt.c:180: case MCU_LANE0:
   1859 BA 01 1C           2564 	cjne	r2,#0x01,00103$
   185C 80 0E              2565 	sjmp	00102$
   185E                    2566 00101$:
                           2567 ;	../../shared/src/interrupt.c:181: cmx_LANE_DIS_LANE0_7_0 = reg_LANE_DISABLE_RD_LANE;
   185E 90 20 34           2568 	mov	dptr,#_TX_SYSTEM_LANE
   1861 E0                 2569 	movx	a,@dptr
   1862 54 01              2570 	anl	a,#0x01
   1864 FA                 2571 	mov	r2,a
   1865 90 E6 51           2572 	mov	dptr,#(_MCU_CONFIG + 0x0001)
   1868 EA                 2573 	mov	a,r2
   1869 F0                 2574 	movx	@dptr,a
                           2575 ;	../../shared/src/interrupt.c:182: break;
                           2576 ;	../../shared/src/interrupt.c:183: case MCU_LANE1:
   186A 80 0C              2577 	sjmp	00103$
   186C                    2578 00102$:
                           2579 ;	../../shared/src/interrupt.c:184: cmx_LANE_DIS_LANE1_7_0 = reg_LANE_DISABLE_RD_LANE;
   186C 90 20 34           2580 	mov	dptr,#_TX_SYSTEM_LANE
   186F E0                 2581 	movx	a,@dptr
   1870 54 01              2582 	anl	a,#0x01
   1872 FA                 2583 	mov	r2,a
   1873 90 E6 52           2584 	mov	dptr,#(_MCU_CONFIG + 0x0002)
   1876 EA                 2585 	mov	a,r2
   1877 F0                 2586 	movx	@dptr,a
                           2587 ;	../../shared/src/interrupt.c:194: }
   1878                    2588 00103$:
                           2589 ;	../../shared/src/interrupt.c:196: if(reg_LANE_DISABLE_RD_LANE==0) {
   1878 90 20 34           2590 	mov	dptr,#_TX_SYSTEM_LANE
   187B E0                 2591 	movx	a,@dptr
   187C 20 E0 17           2592 	jb	acc.0,00108$
                           2593 ;	../../shared/src/interrupt.c:197: reg_LANE_ALIGN_READY_OUT = 0;
   187F 90 A0 2F           2594 	mov	dptr,#(_SRIS_REG0 + 0x0003)
   1882 E0                 2595 	movx	a,@dptr
   1883 54 EF              2596 	anl	a,#0xef
   1885 F0                 2597 	movx	@dptr,a
                           2598 ;	../../shared/src/interrupt.c:198: reg_LANE_ALIGN_READY_OUT_FORCE = 0;
   1886 90 A0 2F           2599 	mov	dptr,#(_SRIS_REG0 + 0x0003)
   1889 E0                 2600 	movx	a,@dptr
   188A 54 DF              2601 	anl	a,#0xdf
   188C F0                 2602 	movx	@dptr,a
                           2603 ;	../../shared/src/interrupt.c:199: reg_TXCLK_SYNC_START_OUT = 0;
   188D 90 A3 27           2604 	mov	dptr,#(_INPUT_CMN_PIN_REG2 + 0x0003)
   1890 E0                 2605 	movx	a,@dptr
   1891 54 F7              2606 	anl	a,#0xf7
   1893 F0                 2607 	movx	@dptr,a
   1894 80 21              2608 	sjmp	00111$
   1896                    2609 00108$:
                           2610 ;	../../shared/src/interrupt.c:202: if ( cmx_LANE_DIS_LANE0_7_0 && cmx_LANE_DIS_LANE1_7_0
   1896 90 E6 51           2611 	mov	dptr,#(_MCU_CONFIG + 0x0001)
   1899 E0                 2612 	movx	a,@dptr
   189A 60 1B              2613 	jz	00111$
   189C 90 E6 52           2614 	mov	dptr,#(_MCU_CONFIG + 0x0002)
   189F E0                 2615 	movx	a,@dptr
   18A0 60 15              2616 	jz	00111$
                           2617 ;	../../shared/src/interrupt.c:207: reg_LANE_ALIGN_READY_OUT = 1; //control sequence to de-glitch
   18A2 90 A0 2F           2618 	mov	dptr,#(_SRIS_REG0 + 0x0003)
   18A5 E0                 2619 	movx	a,@dptr
   18A6 44 10              2620 	orl	a,#0x10
   18A8 F0                 2621 	movx	@dptr,a
                           2622 ;	../../shared/src/interrupt.c:208: reg_LANE_ALIGN_READY_OUT_FORCE = 1;
   18A9 90 A0 2F           2623 	mov	dptr,#(_SRIS_REG0 + 0x0003)
   18AC E0                 2624 	movx	a,@dptr
   18AD 44 20              2625 	orl	a,#0x20
   18AF F0                 2626 	movx	@dptr,a
                           2627 ;	../../shared/src/interrupt.c:209: reg_TXCLK_SYNC_START_OUT = 1;
   18B0 90 A3 27           2628 	mov	dptr,#(_INPUT_CMN_PIN_REG2 + 0x0003)
   18B3 E0                 2629 	movx	a,@dptr
   18B4 44 08              2630 	orl	a,#0x08
   18B6 F0                 2631 	movx	@dptr,a
   18B7                    2632 00111$:
                           2633 ;	../../shared/src/interrupt.c:215: if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) {
   18B7 90 20 1B           2634 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   18BA E0                 2635 	movx	a,@dptr
   18BB 30 E0 10           2636 	jnb	acc.0,00113$
   18BE 90 22 00           2637 	mov	dptr,#_MCU_CONTROL_LANE
   18C1 E0                 2638 	movx	a,@dptr
   18C2 FA                 2639 	mov	r2,a
   18C3 90 E6 50           2640 	mov	dptr,#_MCU_CONFIG
   18C6 E0                 2641 	movx	a,@dptr
   18C7 FB                 2642 	mov	r3,a
   18C8 EA                 2643 	mov	a,r2
   18C9 B5 13 02           2644 	cjne	a,ar3,00113$
                           2645 ;	../../shared/src/interrupt.c:216: int_pll_or_chg = 1;
   18CC 7A 01              2646 	mov	r2,#0x01
   18CE                    2647 00113$:
                           2648 ;	../../shared/src/interrupt.c:224: if(reg_INT_POWER_STATE_VALID_RISE_ISR_LANE) {
   18CE 90 20 1B           2649 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   18D1 E0                 2650 	movx	a,@dptr
   18D2 20 E4 03           2651 	jb	acc.4,00202$
   18D5 02 1A 56           2652 	ljmp	00149$
   18D8                    2653 00202$:
                           2654 ;	../../shared/src/interrupt.c:225: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x1b; // clear reg_INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE, reg_INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE, reg_INT_RX_INIT_RISE_ISR_LANE, INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE
                           2655 ;	../../shared/src/interrupt.c:226: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   18D8 90 20 53           2656 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   18DB 74 1B              2657 	mov	a,#0x1B
   18DD F0                 2658 	movx	@dptr,a
   18DE E4                 2659 	clr	a
   18DF F0                 2660 	movx	@dptr,a
                           2661 ;	../../shared/src/interrupt.c:228: if( reg_PIN_PU_PLL_RD_LANE == 1 )
   18E0 90 20 07           2662 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   18E3 E0                 2663 	movx	a,@dptr
   18E4 C4                 2664 	swap	a
   18E5 03                 2665 	rr	a
   18E6 54 01              2666 	anl	a,#0x01
   18E8 FB                 2667 	mov	r3,a
   18E9 BB 01 1C           2668 	cjne	r3,#0x01,00116$
                           2669 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   18EC 90 22 36           2670 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   18EF 74 01              2671 	mov	a,#0x01
   18F1 F0                 2672 	movx	@dptr,a
                           2673 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   18F2 90 22 00           2674 	mov	dptr,#_MCU_CONTROL_LANE
   18F5 E0                 2675 	movx	a,@dptr
   18F6 70 08              2676 	jnz	00151$
                           2677 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   18F8 90 E6 BE           2678 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   18FB 74 01              2679 	mov	a,#0x01
   18FD F0                 2680 	movx	@dptr,a
   18FE 80 1F              2681 	sjmp	00117$
   1900                    2682 00151$:
                           2683 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   1900 90 E6 C2           2684 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   1903 74 01              2685 	mov	a,#0x01
   1905 F0                 2686 	movx	@dptr,a
                           2687 ;	../../shared/src/interrupt.c:229: sync_status_lane_en_0(1);
   1906 80 17              2688 	sjmp	00117$
   1908                    2689 00116$:
                           2690 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   1908 90 22 36           2691 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   190B E4                 2692 	clr	a
   190C F0                 2693 	movx	@dptr,a
                           2694 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   190D 90 22 00           2695 	mov	dptr,#_MCU_CONTROL_LANE
   1910 E0                 2696 	movx	a,@dptr
   1911 70 07              2697 	jnz	00155$
                           2698 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   1913 90 E6 BE           2699 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   1916 E4                 2700 	clr	a
   1917 F0                 2701 	movx	@dptr,a
   1918 80 05              2702 	sjmp	00117$
   191A                    2703 00155$:
                           2704 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   191A 90 E6 C2           2705 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   191D E4                 2706 	clr	a
   191E F0                 2707 	movx	@dptr,a
                           2708 ;	../../shared/src/interrupt.c:231: sync_status_lane_en_0(0);
   191F                    2709 00117$:
                           2710 ;	../../shared/src/interrupt.c:233: switch(PHY_STATUS) {
   191F 90 22 30           2711 	mov	dptr,#_MCU_STATUS0_LANE
   1922 E0                 2712 	movx	a,@dptr
   1923 FB                 2713 	mov	r3,a
   1924 BB 1B 02           2714 	cjne	r3,#0x1B,00207$
   1927 80 2B              2715 	sjmp	00119$
   1929                    2716 00207$:
   1929 BB 20 02           2717 	cjne	r3,#0x20,00208$
   192C 80 5F              2718 	sjmp	00128$
   192E                    2719 00208$:
   192E BB 21 02           2720 	cjne	r3,#0x21,00209$
   1931 80 21              2721 	sjmp	00119$
   1933                    2722 00209$:
   1933 BB 22 02           2723 	cjne	r3,#0x22,00210$
   1936 80 6B              2724 	sjmp	00133$
   1938                    2725 00210$:
   1938 BB 23 02           2726 	cjne	r3,#0x23,00211$
   193B 80 66              2727 	sjmp	00133$
   193D                    2728 00211$:
   193D BB 24 02           2729 	cjne	r3,#0x24,00212$
   1940 80 4B              2730 	sjmp	00128$
   1942                    2731 00212$:
   1942 BB 25 02           2732 	cjne	r3,#0x25,00213$
   1945 80 46              2733 	sjmp	00128$
   1947                    2734 00213$:
   1947 BB 26 02           2735 	cjne	r3,#0x26,00214$
   194A 80 41              2736 	sjmp	00128$
   194C                    2737 00214$:
   194C BB 33 02           2738 	cjne	r3,#0x33,00215$
   194F 80 52              2739 	sjmp	00133$
   1951                    2740 00215$:
   1951 02 19 F8           2741 	ljmp	00140$
                           2742 ;	../../shared/src/interrupt.c:235: case ST_P2_WK:
   1954                    2743 00119$:
                           2744 ;	../../shared/src/interrupt.c:236: if( reg_PIN_PU_PLL_RD_LANE == 1 ) {
   1954 90 20 07           2745 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   1957 E0                 2746 	movx	a,@dptr
   1958 C4                 2747 	swap	a
   1959 03                 2748 	rr	a
   195A 54 01              2749 	anl	a,#0x01
   195C FB                 2750 	mov	r3,a
   195D BB 01 0B           2751 	cjne	r3,#0x01,00123$
                           2752 ;	../../shared/src/interrupt.c:237: do_wake = 1; //p2->p1 or p0
   1960 D2 05              2753 	setb	_do_wake
                           2754 ;	../../shared/src/interrupt.c:238: SYNC_SATUS_P2_2_P1_ON = 1; // request to check tx alignment
   1962 90 E6 B2           2755 	mov	dptr,#(_SYNC_INFO + 0x0002)
   1965 74 01              2756 	mov	a,#0x01
   1967 F0                 2757 	movx	@dptr,a
   1968 02 1A 56           2758 	ljmp	00149$
   196B                    2759 00123$:
                           2760 ;	../../shared/src/interrupt.c:241: else if( int_pll_or_chg ) { //already P2, but need to turn on/off pu_pll/dtx
   196B EA                 2761 	mov	a,r2
   196C 70 03              2762 	jnz	00218$
   196E 02 1A 56           2763 	ljmp	00149$
   1971                    2764 00218$:
                           2765 ;	../../shared/src/interrupt.c:242: PHY_NS = ST_P2;
   1971 90 22 31           2766 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1974 74 21              2767 	mov	a,#0x21
   1976 F0                 2768 	movx	@dptr,a
                           2769 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1977 90 22 33           2770 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   197A 74 FF              2771 	mov	a,#0xFF
   197C F0                 2772 	movx	@dptr,a
                           2773 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   197D 90 22 0B           2774 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1980 E0                 2775 	movx	a,@dptr
   1981 54 7F              2776 	anl	a,#0x7f
   1983 F0                 2777 	movx	@dptr,a
                           2778 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1984 75 F7 01           2779 	mov	_SRST,#0x01
                           2780 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1987 75 F7 01           2781 	mov	_SRST,#0x01
                           2782 ;	../../shared/src/interrupt.c:245: break;
   198A 02 1A 56           2783 	ljmp	00149$
                           2784 ;	../../shared/src/interrupt.c:249: case ST_P1OFF_WK:
   198D                    2785 00128$:
                           2786 ;	../../shared/src/interrupt.c:250: if( reg_PIN_PU_PLL_RD_LANE == 1 ) {
   198D 90 20 07           2787 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   1990 E0                 2788 	movx	a,@dptr
   1991 C4                 2789 	swap	a
   1992 03                 2790 	rr	a
   1993 54 01              2791 	anl	a,#0x01
   1995 FA                 2792 	mov	r2,a
   1996 BA 01 02           2793 	cjne	r2,#0x01,00219$
   1999 80 03              2794 	sjmp	00220$
   199B                    2795 00219$:
   199B 02 1A 56           2796 	ljmp	00149$
   199E                    2797 00220$:
                           2798 ;	../../shared/src/interrupt.c:251: do_wake = 1; //p2->p1 or p0
   199E D2 05              2799 	setb	_do_wake
                           2800 ;	../../shared/src/interrupt.c:254: break;
   19A0 02 1A 56           2801 	ljmp	00149$
                           2802 ;	../../shared/src/interrupt.c:257: case ST_P1_TXDETRX:
   19A3                    2803 00133$:
                           2804 ;	../../shared/src/interrupt.c:258: if(reg_PIN_PU_PLL_RD_LANE == 0) {
   19A3 90 20 07           2805 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   19A6 E0                 2806 	movx	a,@dptr
   19A7 20 E5 23           2807 	jb	acc.5,00138$
                           2808 ;	../../shared/src/interrupt.c:259: reg_PIN_PLL_READY_TX_LANE = 0;
   19AA 90 20 02           2809 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   19AD E0                 2810 	movx	a,@dptr
   19AE 54 FB              2811 	anl	a,#0xfb
   19B0 F0                 2812 	movx	@dptr,a
                           2813 ;	../../shared/src/interrupt.c:260: PHY_NS = ST_P2; //p1->p2, p1->p2->p1.clkreq
   19B1 90 22 31           2814 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   19B4 74 21              2815 	mov	a,#0x21
   19B6 F0                 2816 	movx	@dptr,a
                           2817 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   19B7 90 22 33           2818 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   19BA 74 FF              2819 	mov	a,#0xFF
   19BC F0                 2820 	movx	@dptr,a
                           2821 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   19BD 90 22 0B           2822 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   19C0 E0                 2823 	movx	a,@dptr
   19C1 54 7F              2824 	anl	a,#0x7f
   19C3 F0                 2825 	movx	@dptr,a
                           2826 ;	../../shared/src/interrupt.c:37: SRST = 1;
   19C4 75 F7 01           2827 	mov	_SRST,#0x01
                           2828 ;	../../shared/src/interrupt.c:38: SRST = 1;
   19C7 75 F7 01           2829 	mov	_SRST,#0x01
                           2830 ;	../../shared/src/interrupt.c:262: mcu_reset();
   19CA 02 1A 56           2831 	ljmp	00149$
   19CD                    2832 00138$:
                           2833 ;	../../shared/src/interrupt.c:264: else if(reg_PIN_PU_RX_RD_LANE == 1){
   19CD 90 21 02           2834 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   19D0 E0                 2835 	movx	a,@dptr
   19D1 03                 2836 	rr	a
   19D2 03                 2837 	rr	a
   19D3 54 01              2838 	anl	a,#0x01
   19D5 FA                 2839 	mov	r2,a
   19D6 BA 01 04           2840 	cjne	r2,#0x01,00135$
                           2841 ;	../../shared/src/interrupt.c:265: do_wake = 1; //p1->p0
   19D9 D2 05              2842 	setb	_do_wake
   19DB 80 79              2843 	sjmp	00149$
   19DD                    2844 00135$:
                           2845 ;	../../shared/src/interrupt.c:270: PHY_NS = ST_P1;
   19DD 90 22 31           2846 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   19E0 74 22              2847 	mov	a,#0x22
   19E2 F0                 2848 	movx	@dptr,a
                           2849 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   19E3 90 22 33           2850 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   19E6 74 FF              2851 	mov	a,#0xFF
   19E8 F0                 2852 	movx	@dptr,a
                           2853 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   19E9 90 22 0B           2854 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   19EC E0                 2855 	movx	a,@dptr
   19ED 54 7F              2856 	anl	a,#0x7f
   19EF F0                 2857 	movx	@dptr,a
                           2858 ;	../../shared/src/interrupt.c:37: SRST = 1;
   19F0 75 F7 01           2859 	mov	_SRST,#0x01
                           2860 ;	../../shared/src/interrupt.c:38: SRST = 1;
   19F3 75 F7 01           2861 	mov	_SRST,#0x01
                           2862 ;	../../shared/src/interrupt.c:273: break;
                           2863 ;	../../shared/src/interrupt.c:274: default:
   19F6 80 5E              2864 	sjmp	00149$
   19F8                    2865 00140$:
                           2866 ;	../../shared/src/interrupt.c:276: if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) {
   19F8 90 20 07           2867 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   19FB E0                 2868 	movx	a,@dptr
   19FC 30 E5 07           2869 	jnb	acc.5,00143$
   19FF 90 20 07           2870 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   1A02 E0                 2871 	movx	a,@dptr
   1A03 20 E4 29           2872 	jb	acc.4,00144$
   1A06                    2873 00143$:
                           2874 ;	../../shared/src/interrupt.c:277: reg_PIN_PLL_READY_TX_LANE = 0;
   1A06 90 20 02           2875 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1A09 E0                 2876 	movx	a,@dptr
   1A0A 54 FB              2877 	anl	a,#0xfb
   1A0C F0                 2878 	movx	@dptr,a
                           2879 ;	../../shared/src/interrupt.c:278: reg_PIN_PLL_READY_RX_LANE = 0;
   1A0D 90 21 02           2880 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A10 E0                 2881 	movx	a,@dptr
   1A11 54 BF              2882 	anl	a,#0xbf
   1A13 F0                 2883 	movx	@dptr,a
                           2884 ;	../../shared/src/interrupt.c:279: PHY_NS = ST_P2;
   1A14 90 22 31           2885 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1A17 74 21              2886 	mov	a,#0x21
   1A19 F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1A1A 90 22 33           2889 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A1D 74 FF              2890 	mov	a,#0xFF
   1A1F F0                 2891 	movx	@dptr,a
                           2892 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1A20 90 22 0B           2893 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1A23 E0                 2894 	movx	a,@dptr
   1A24 54 7F              2895 	anl	a,#0x7f
   1A26 F0                 2896 	movx	@dptr,a
                           2897 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1A27 75 F7 01           2898 	mov	_SRST,#0x01
                           2899 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1A2A 75 F7 01           2900 	mov	_SRST,#0x01
                           2901 ;	../../shared/src/interrupt.c:280: mcu_reset();
   1A2D 80 27              2902 	sjmp	00149$
   1A2F                    2903 00144$:
                           2904 ;	../../shared/src/interrupt.c:282: else if( reg_PIN_PU_RX_RD_LANE==0 ) {
   1A2F 90 21 02           2905 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A32 E0                 2906 	movx	a,@dptr
   1A33 20 E2 20           2907 	jb	acc.2,00149$
                           2908 ;	../../shared/src/interrupt.c:283: reg_PIN_PLL_READY_RX_LANE = 0;
   1A36 90 21 02           2909 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1A39 E0                 2910 	movx	a,@dptr
   1A3A 54 BF              2911 	anl	a,#0xbf
   1A3C F0                 2912 	movx	@dptr,a
                           2913 ;	../../shared/src/interrupt.c:284: PHY_NS = ST_P1;
   1A3D 90 22 31           2914 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1A40 74 22              2915 	mov	a,#0x22
   1A42 F0                 2916 	movx	@dptr,a
                           2917 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1A43 90 22 33           2918 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A46 74 FF              2919 	mov	a,#0xFF
   1A48 F0                 2920 	movx	@dptr,a
                           2921 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1A49 90 22 0B           2922 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1A4C E0                 2923 	movx	a,@dptr
   1A4D 54 7F              2924 	anl	a,#0x7f
   1A4F F0                 2925 	movx	@dptr,a
                           2926 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1A50 75 F7 01           2927 	mov	_SRST,#0x01
                           2928 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1A53 75 F7 01           2929 	mov	_SRST,#0x01
                           2930 ;	../../shared/src/interrupt.c:290: }
   1A56                    2931 00149$:
                           2932 ;	../../shared/src/interrupt.c:293: PHY_INT_LANE = 0xFF;
   1A56 90 22 33           2933 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A59 74 FF              2934 	mov	a,#0xFF
   1A5B F0                 2935 	movx	@dptr,a
                           2936 ;	../../shared/src/interrupt.c:295: EA = 1;
   1A5C D2 AF              2937 	setb	_EA
   1A5E 85 18 81           2938 	mov	sp,_bp
   1A61 D0 18              2939 	pop	_bp
   1A63 D0 D0              2940 	pop	psw
   1A65 D0 83              2941 	pop	dph
   1A67 D0 82              2942 	pop	dpl
   1A69 D0 E0              2943 	pop	acc
   1A6B 32                 2944 	reti
                           2945 ;	eliminated unneeded push/pop b
                           2946 ;------------------------------------------------------------
                           2947 ;Allocation info for local variables in function 'int8_isr'
                           2948 ;------------------------------------------------------------
                           2949 ;__00042416                Allocated to registers 
                           2950 ;lane_en                   Allocated to registers 
                           2951 ;------------------------------------------------------------
                           2952 ;	../../shared/src/interrupt.c:299: void int8_isr (void) __interrupt (17)  __using (2)
                           2953 ;	-----------------------------------------
                           2954 ;	 function int8_isr
                           2955 ;	-----------------------------------------
   1A6C                    2956 _int8_isr:
   1A6C C0 E0              2957 	push	acc
   1A6E C0 82              2958 	push	dpl
   1A70 C0 83              2959 	push	dph
   1A72 C0 D0              2960 	push	psw
   1A74 75 D0 10           2961 	mov	psw,#0x10
                           2962 ;	../../shared/src/interrupt.c:303: EA = 0;
   1A77 C2 AF              2963 	clr	_EA
                           2964 ;	../../shared/src/interrupt.c:304: EX8 = 0; //reg_INT_ENABLE_ALL_LANE = 0;
   1A79 C2 9B              2965 	clr	_EX8
                           2966 ;	../../shared/src/interrupt.c:305: PHY_INT_LANE = 8;
   1A7B 90 22 33           2967 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1A7E 74 08              2968 	mov	a,#0x08
   1A80 F0                 2969 	movx	@dptr,a
                           2970 ;	../../shared/src/interrupt.c:307: if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
   1A81 90 20 1A           2971 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   1A84 E0                 2972 	movx	a,@dptr
   1A85 20 E7 03           2973 	jb	acc.7,00137$
   1A88 02 1B 0B           2974 	ljmp	00110$
   1A8B                    2975 00137$:
                           2976 ;	../../shared/src/interrupt.c:310: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x80;
                           2977 ;	../../shared/src/interrupt.c:311: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
   1A8B 90 20 52           2978 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0002)
   1A8E 74 80              2979 	mov	a,#0x80
   1A90 F0                 2980 	movx	@dptr,a
   1A91 E4                 2981 	clr	a
   1A92 F0                 2982 	movx	@dptr,a
                           2983 ;	../../shared/src/interrupt.c:312: if( reg_PIN_TXDETRX_EN_RD_LANE == 1) {
   1A93 90 20 07           2984 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   1A96 E0                 2985 	movx	a,@dptr
   1A97 54 01              2986 	anl	a,#0x01
   1A99 FA                 2987 	mov	r2,a
   1A9A BA 01 6E           2988 	cjne	r2,#0x01,00110$
                           2989 ;	../../shared/src/interrupt.c:313: switch(PHY_STATUS) {
   1A9D 90 22 30           2990 	mov	dptr,#_MCU_STATUS0_LANE
   1AA0 E0                 2991 	movx	a,@dptr
   1AA1 FA                 2992 	mov	r2,a
   1AA2 BA 1B 02           2993 	cjne	r2,#0x1B,00140$
   1AA5 80 0F              2994 	sjmp	00102$
   1AA7                    2995 00140$:
   1AA7 BA 21 02           2996 	cjne	r2,#0x21,00141$
   1AAA 80 0A              2997 	sjmp	00102$
   1AAC                    2998 00141$:
   1AAC BA 22 02           2999 	cjne	r2,#0x22,00142$
   1AAF 80 22              3000 	sjmp	00104$
   1AB1                    3001 00142$:
                           3002 ;	../../shared/src/interrupt.c:315: case ST_P2_WK: PHY_NS = ST_P2_TXDETRX;	EX8 = 1;  mcu_reset(); break;
   1AB1 BA 23 3C           3003 	cjne	r2,#0x23,00105$
   1AB4 80 1D              3004 	sjmp	00104$
   1AB6                    3005 00102$:
   1AB6 90 22 31           3006 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1AB9 74 20              3007 	mov	a,#0x20
   1ABB F0                 3008 	movx	@dptr,a
   1ABC D2 9B              3009 	setb	_EX8
                           3010 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1ABE 90 22 33           3011 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1AC1 74 FF              3012 	mov	a,#0xFF
   1AC3 F0                 3013 	movx	@dptr,a
                           3014 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1AC4 90 22 0B           3015 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1AC7 E0                 3016 	movx	a,@dptr
   1AC8 54 7F              3017 	anl	a,#0x7f
   1ACA F0                 3018 	movx	@dptr,a
                           3019 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1ACB 75 F7 01           3020 	mov	_SRST,#0x01
                           3021 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1ACE 75 F7 01           3022 	mov	_SRST,#0x01
                           3023 ;	../../shared/src/interrupt.c:315: case ST_P2_WK: PHY_NS = ST_P2_TXDETRX;	EX8 = 1;  mcu_reset(); break;
                           3024 ;	../../shared/src/interrupt.c:317: case ST_P1_WK: PHY_NS = ST_P1_TXDETRX;	EX8 = 1;  mcu_reset(); break;
   1AD1 80 23              3025 	sjmp	00106$
   1AD3                    3026 00104$:
   1AD3 90 22 31           3027 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1AD6 74 33              3028 	mov	a,#0x33
   1AD8 F0                 3029 	movx	@dptr,a
   1AD9 D2 9B              3030 	setb	_EX8
                           3031 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1ADB 90 22 33           3032 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1ADE 74 FF              3033 	mov	a,#0xFF
   1AE0 F0                 3034 	movx	@dptr,a
                           3035 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1AE1 90 22 0B           3036 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1AE4 E0                 3037 	movx	a,@dptr
   1AE5 54 7F              3038 	anl	a,#0x7f
   1AE7 F0                 3039 	movx	@dptr,a
                           3040 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1AE8 75 F7 01           3041 	mov	_SRST,#0x01
                           3042 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1AEB 75 F7 01           3043 	mov	_SRST,#0x01
                           3044 ;	../../shared/src/interrupt.c:317: case ST_P1_WK: PHY_NS = ST_P1_TXDETRX;	EX8 = 1;  mcu_reset(); break;
                           3045 ;	../../shared/src/interrupt.c:318: default: PHY_NS = ST_TXDETRX; break; //P0
   1AEE 80 06              3046 	sjmp	00106$
   1AF0                    3047 00105$:
   1AF0 90 22 31           3048 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1AF3 74 1F              3049 	mov	a,#0x1F
   1AF5 F0                 3050 	movx	@dptr,a
                           3051 ;	../../shared/src/interrupt.c:319: }
   1AF6                    3052 00106$:
                           3053 ;	../../shared/src/interrupt.c:322: EX8 = 1; mcu_reset();
   1AF6 D2 9B              3054 	setb	_EX8
                           3055 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1AF8 90 22 33           3056 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1AFB 74 FF              3057 	mov	a,#0xFF
   1AFD F0                 3058 	movx	@dptr,a
                           3059 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1AFE 90 22 0B           3060 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1B01 E0                 3061 	movx	a,@dptr
   1B02 54 7F              3062 	anl	a,#0x7f
   1B04 F0                 3063 	movx	@dptr,a
                           3064 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1B05 75 F7 01           3065 	mov	_SRST,#0x01
                           3066 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1B08 75 F7 01           3067 	mov	_SRST,#0x01
                           3068 ;	../../shared/src/interrupt.c:322: EX8 = 1; mcu_reset();
   1B0B                    3069 00110$:
                           3070 ;	../../shared/src/interrupt.c:326: if( reg_INT_BEACON_TX_EN_CHG_ISR_LANE ) {
   1B0B 90 20 1A           3071 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   1B0E E0                 3072 	movx	a,@dptr
   1B0F 30 E6 45           3073 	jnb	acc.6,00117$
                           3074 ;	../../shared/src/interrupt.c:329: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x40;
                           3075 ;	../../shared/src/interrupt.c:330: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
   1B12 90 20 52           3076 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0002)
   1B15 74 40              3077 	mov	a,#0x40
   1B17 F0                 3078 	movx	@dptr,a
   1B18 E4                 3079 	clr	a
   1B19 F0                 3080 	movx	@dptr,a
                           3081 ;	../../shared/src/interrupt.c:332: if( reg_PIN_PU_PLL_RD_LANE==0 ) { //P2
   1B1A 90 20 07           3082 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   1B1D E0                 3083 	movx	a,@dptr
   1B1E 20 E5 26           3084 	jb	acc.5,00115$
                           3085 ;	../../shared/src/interrupt.c:42: SYNC_STATUS_LANE_EN = lane_en;
   1B21 90 22 36           3086 	mov	dptr,#(_MCU_STATUS1_LANE + 0x0002)
   1B24 E4                 3087 	clr	a
   1B25 F0                 3088 	movx	@dptr,a
                           3089 ;	../../shared/src/interrupt.c:43: if (mcuid == MCU_LANE0)
   1B26 90 22 00           3090 	mov	dptr,#_MCU_CONTROL_LANE
   1B29 E0                 3091 	movx	a,@dptr
   1B2A 70 07              3092 	jnz	00122$
                           3093 ;	../../shared/src/interrupt.c:44: SYNC_STATUS_LANE0_EN = lane_en;
   1B2C 90 E6 BE           3094 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   1B2F E4                 3095 	clr	a
   1B30 F0                 3096 	movx	@dptr,a
   1B31 80 05              3097 	sjmp	00124$
   1B33                    3098 00122$:
                           3099 ;	../../shared/src/interrupt.c:46: SYNC_STATUS_LANE1_EN = lane_en;
   1B33 90 E6 C2           3100 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   1B36 E4                 3101 	clr	a
   1B37 F0                 3102 	movx	@dptr,a
                           3103 ;	../../shared/src/interrupt.c:333: sync_status_lane_en_0(0);
   1B38                    3104 00124$:
                           3105 ;	../../shared/src/interrupt.c:334: if( reg_PIN_TX_ACJTAG_EN_RD_LANE==1 ) {
   1B38 90 20 06           3106 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0002)
   1B3B E0                 3107 	movx	a,@dptr
   1B3C 23                 3108 	rl	a
   1B3D 54 01              3109 	anl	a,#0x01
   1B3F FA                 3110 	mov	r2,a
   1B40 BA 01 02           3111 	cjne	r2,#0x01,00147$
   1B43 80 02              3112 	sjmp	00115$
   1B45                    3113 00147$:
                           3114 ;	../../shared/src/interrupt.c:339: do_wake = 1;
   1B45 D2 05              3115 	setb	_do_wake
   1B47                    3116 00115$:
                           3117 ;	../../shared/src/interrupt.c:343: reg_ANA_BEACON_EN_LANE = reg_PIN_TX_ACJTAG_EN_RD_LANE;
   1B47 90 20 06           3118 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0002)
   1B4A E0                 3119 	movx	a,@dptr
   1B4B 23                 3120 	rl	a
   1B4C 54 01              3121 	anl	a,#0x01
   1B4E FA                 3122 	mov	r2,a
   1B4F 90 20 00           3123 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   1B52 13                 3124 	rrc	a
   1B53 E0                 3125 	movx	a,@dptr
   1B54 92 E6              3126 	mov	acc.6,c
   1B56 F0                 3127 	movx	@dptr,a
   1B57                    3128 00117$:
                           3129 ;	../../shared/src/interrupt.c:346: PHY_INT_LANE = 0xFF;
   1B57 90 22 33           3130 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1B5A 74 FF              3131 	mov	a,#0xFF
   1B5C F0                 3132 	movx	@dptr,a
                           3133 ;	../../shared/src/interrupt.c:347: EX8 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   1B5D D2 9B              3134 	setb	_EX8
                           3135 ;	../../shared/src/interrupt.c:348: EA = 1;
   1B5F D2 AF              3136 	setb	_EA
   1B61 D0 D0              3137 	pop	psw
   1B63 D0 83              3138 	pop	dph
   1B65 D0 82              3139 	pop	dpl
   1B67 D0 E0              3140 	pop	acc
   1B69 32                 3141 	reti
                           3142 ;	eliminated unneeded push/pop b
                           3143 ;------------------------------------------------------------
                           3144 ;Allocation info for local variables in function 'int9_isr'
                           3145 ;------------------------------------------------------------
                           3146 ;------------------------------------------------------------
                           3147 ;	../../shared/src/interrupt.c:354: void int9_isr (void) __interrupt (18)  __using (2)// sata_sas pm ctrl
                           3148 ;	-----------------------------------------
                           3149 ;	 function int9_isr
                           3150 ;	-----------------------------------------
   1B6A                    3151 _int9_isr:
   1B6A C0 D0              3152 	push	psw
   1B6C 75 D0 10           3153 	mov	psw,#0x10
                           3154 ;	../../shared/src/interrupt.c:450: }
   1B6F D0 D0              3155 	pop	psw
   1B71 32                 3156 	reti
                           3157 ;	eliminated unneeded push/pop dpl
                           3158 ;	eliminated unneeded push/pop dph
                           3159 ;	eliminated unneeded push/pop b
                           3160 ;	eliminated unneeded push/pop acc
                           3161 ;------------------------------------------------------------
                           3162 ;Allocation info for local variables in function 'int2_isr'
                           3163 ;------------------------------------------------------------
                           3164 ;------------------------------------------------------------
                           3165 ;	../../shared/src/interrupt.c:453: void int2_isr (void) __interrupt (9) __using (2) //gen
                           3166 ;	-----------------------------------------
                           3167 ;	 function int2_isr
                           3168 ;	-----------------------------------------
   1B72                    3169 _int2_isr:
   1B72 C0 E0              3170 	push	acc
   1B74 C0 82              3171 	push	dpl
   1B76 C0 83              3172 	push	dph
   1B78 C0 D0              3173 	push	psw
   1B7A 75 D0 10           3174 	mov	psw,#0x10
                           3175 ;	../../shared/src/interrupt.c:455: EA = 0;
   1B7D C2 AF              3176 	clr	_EA
                           3177 ;	../../shared/src/interrupt.c:457: PHY_INT_LANE = 0x2;
   1B7F 90 22 33           3178 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1B82 74 02              3179 	mov	a,#0x02
   1B84 F0                 3180 	movx	@dptr,a
                           3181 ;	../../shared/src/interrupt.c:459: if(reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
   1B85 90 20 2B           3182 	mov	dptr,#(_SPD_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   1B88 E0                 3183 	movx	a,@dptr
   1B89 30 E6 0F           3184 	jnb	acc.6,00102$
                           3185 ;	../../shared/src/interrupt.c:462: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x40;
                           3186 ;	../../shared/src/interrupt.c:463: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
   1B8C 90 20 57           3187 	mov	dptr,#(_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE + 0x0003)
   1B8F 74 40              3188 	mov	a,#0x40
   1B91 F0                 3189 	movx	@dptr,a
   1B92 E4                 3190 	clr	a
   1B93 F0                 3191 	movx	@dptr,a
                           3192 ;	../../shared/src/interrupt.c:464: reg_PIN_PLL_READY_RX_LANE = 0;
   1B94 90 21 02           3193 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1B97 E0                 3194 	movx	a,@dptr
   1B98 54 BF              3195 	anl	a,#0xbf
   1B9A F0                 3196 	movx	@dptr,a
   1B9B                    3197 00102$:
                           3198 ;	../../shared/src/interrupt.c:466: if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
   1B9B 90 20 2B           3199 	mov	dptr,#(_SPD_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   1B9E E0                 3200 	movx	a,@dptr
   1B9F 30 E7 0F           3201 	jnb	acc.7,00104$
                           3202 ;	../../shared/src/interrupt.c:469: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x80;
                           3203 ;	../../shared/src/interrupt.c:470: SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
   1BA2 90 20 57           3204 	mov	dptr,#(_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE + 0x0003)
   1BA5 74 80              3205 	mov	a,#0x80
   1BA7 F0                 3206 	movx	@dptr,a
   1BA8 E4                 3207 	clr	a
   1BA9 F0                 3208 	movx	@dptr,a
                           3209 ;	../../shared/src/interrupt.c:471: reg_PIN_PLL_READY_TX_LANE = 0;
   1BAA 90 20 02           3210 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1BAD E0                 3211 	movx	a,@dptr
   1BAE 54 FB              3212 	anl	a,#0xfb
   1BB0 F0                 3213 	movx	@dptr,a
   1BB1                    3214 00104$:
                           3215 ;	../../shared/src/interrupt.c:474: if(reg_ANA_RX_PU_DLY2_LANE && reg_ANA_PU_TX_LANE) {
   1BB1 90 21 4C           3216 	mov	dptr,#_INPUT_RX_PIN_REG3_LANE
   1BB4 E0                 3217 	movx	a,@dptr
   1BB5 30 E0 3F           3218 	jnb	acc.0,00109$
   1BB8 90 20 03           3219 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   1BBB E0                 3220 	movx	a,@dptr
   1BBC 30 E6 38           3221 	jnb	acc.6,00109$
                           3222 ;	../../shared/src/interrupt.c:475: if(phy_mode == SERDES) { PHY_NS = ST_CAL; PHY_STATUS_INT |= SPDCHG_ON;}
   1BBF 90 A3 16           3223 	mov	dptr,#(_SYSTEM + 0x0002)
   1BC2 E0                 3224 	movx	a,@dptr
   1BC3 54 07              3225 	anl	a,#0x07
   1BC5 FA                 3226 	mov	r2,a
   1BC6 BA 04 15           3227 	cjne	r2,#0x04,00106$
   1BC9 90 22 31           3228 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1BCC 74 03              3229 	mov	a,#0x03
   1BCE F0                 3230 	movx	@dptr,a
   1BCF 90 22 38           3231 	mov	dptr,#_MCU_STATUS2_LANE
   1BD2 E0                 3232 	movx	a,@dptr
   1BD3 FA                 3233 	mov	r2,a
   1BD4 43 12 01           3234 	orl	ar2,#0x01
   1BD7 90 22 38           3235 	mov	dptr,#_MCU_STATUS2_LANE
   1BDA EA                 3236 	mov	a,r2
   1BDB F0                 3237 	movx	@dptr,a
   1BDC 80 06              3238 	sjmp	00107$
   1BDE                    3239 00106$:
                           3240 ;	../../shared/src/interrupt.c:476: else PHY_NS = ST_SPDCHG;
   1BDE 90 22 31           3241 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1BE1 74 19              3242 	mov	a,#0x19
   1BE3 F0                 3243 	movx	@dptr,a
   1BE4                    3244 00107$:
                           3245 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1BE4 90 22 33           3246 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1BE7 74 FF              3247 	mov	a,#0xFF
   1BE9 F0                 3248 	movx	@dptr,a
                           3249 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1BEA 90 22 0B           3250 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1BED E0                 3251 	movx	a,@dptr
   1BEE 54 7F              3252 	anl	a,#0x7f
   1BF0 F0                 3253 	movx	@dptr,a
                           3254 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1BF1 75 F7 01           3255 	mov	_SRST,#0x01
                           3256 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1BF4 75 F7 01           3257 	mov	_SRST,#0x01
                           3258 ;	../../shared/src/interrupt.c:479: mcu_reset();
   1BF7                    3259 00109$:
                           3260 ;	../../shared/src/interrupt.c:482: PHY_INT_LANE = 0xFF;
   1BF7 90 22 33           3261 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1BFA 74 FF              3262 	mov	a,#0xFF
   1BFC F0                 3263 	movx	@dptr,a
                           3264 ;	../../shared/src/interrupt.c:483: EA = 1;
   1BFD D2 AF              3265 	setb	_EA
   1BFF D0 D0              3266 	pop	psw
   1C01 D0 83              3267 	pop	dph
   1C03 D0 82              3268 	pop	dpl
   1C05 D0 E0              3269 	pop	acc
   1C07 32                 3270 	reti
                           3271 ;	eliminated unneeded push/pop b
                           3272 ;------------------------------------------------------------
                           3273 ;Allocation info for local variables in function 'int11_isr'
                           3274 ;------------------------------------------------------------
                           3275 ;------------------------------------------------------------
                           3276 ;	../../shared/src/interrupt.c:486: void int11_isr (void) __interrupt (20)  __using (2)  //rx_train
                           3277 ;	-----------------------------------------
                           3278 ;	 function int11_isr
                           3279 ;	-----------------------------------------
   1C08                    3280 _int11_isr:
   1C08 C0 E0              3281 	push	acc
   1C0A C0 82              3282 	push	dpl
   1C0C C0 83              3283 	push	dph
   1C0E C0 D0              3284 	push	psw
   1C10 75 D0 10           3285 	mov	psw,#0x10
                           3286 ;	../../shared/src/interrupt.c:488: EA = 0;
   1C13 C2 AF              3287 	clr	_EA
                           3288 ;	../../shared/src/interrupt.c:489: EX11 = 0 ;//reg_INT_ENABLE_ALL_LANE = 0;
   1C15 C2 9E              3289 	clr	_EX11
                           3290 ;	../../shared/src/interrupt.c:490: PHY_INT_LANE = 11;
   1C17 90 22 33           3291 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1C1A 74 0B              3292 	mov	a,#0x0B
   1C1C F0                 3293 	movx	@dptr,a
                           3294 ;	../../shared/src/interrupt.c:492: if( reg_PIN_RX_TRAIN_ENABLE_ISR_LANE ) {
   1C1D 90 26 5C           3295 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   1C20 E0                 3296 	movx	a,@dptr
   1C21 20 E0 03           3297 	jb	acc.0,00130$
   1C24 02 1C 9A           3298 	ljmp	00111$
   1C27                    3299 00130$:
                           3300 ;	../../shared/src/interrupt.c:495: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
                           3301 ;	../../shared/src/interrupt.c:496: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
   1C27 90 26 64           3302 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   1C2A 74 01              3303 	mov	a,#0x01
   1C2C F0                 3304 	movx	@dptr,a
   1C2D E4                 3305 	clr	a
   1C2E F0                 3306 	movx	@dptr,a
                           3307 ;	../../shared/src/interrupt.c:498: reg_MCU_DEBUG0_LANE_7_0 = do_rxtrain;
   1C2F A2 07              3308 	mov	c,_do_rxtrain
   1C31 E4                 3309 	clr	a
   1C32 33                 3310 	rlc	a
   1C33 FA                 3311 	mov	r2,a
   1C34 90 22 B4           3312 	mov	dptr,#_MCU_DEBUG0_LANE
   1C37 EA                 3313 	mov	a,r2
   1C38 F0                 3314 	movx	@dptr,a
                           3315 ;	../../shared/src/interrupt.c:500: if(reg_PIN_PLL_READY_TX_LANE) {
   1C39 90 20 02           3316 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   1C3C E0                 3317 	movx	a,@dptr
   1C3D 30 E2 5A           3318 	jnb	acc.2,00111$
                           3319 ;	../../shared/src/interrupt.c:501: if( !do_rxtrain ) {
   1C40 20 07 24           3320 	jb	_do_rxtrain,00106$
                           3321 ;	../../shared/src/interrupt.c:502: if(reg_PIN_RX_TRAIN_ENABLE_RD_LANE) { //train start
   1C43 90 26 79           3322 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1C46 E0                 3323 	movx	a,@dptr
   1C47 30 E5 50           3324 	jnb	acc.5,00111$
                           3325 ;	../../shared/src/interrupt.c:503: reg_RX_TRAIN_ON_LANE = 1;
   1C4A 90 26 7B           3326 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1C4D E0                 3327 	movx	a,@dptr
   1C4E 44 04              3328 	orl	a,#0x04
   1C50 F0                 3329 	movx	@dptr,a
                           3330 ;	../../shared/src/interrupt.c:504: do_rxtrain = 1;
   1C51 D2 07              3331 	setb	_do_rxtrain
                           3332 ;	../../shared/src/interrupt.c:505: train_timer_int = 0;
   1C53 90 66 CC           3333 	mov	dptr,#_train_timer_int
   1C56 E4                 3334 	clr	a
   1C57 F0                 3335 	movx	@dptr,a
                           3336 ;	../../shared/src/interrupt.c:506: timeout = 0;
   1C58 C2 03              3337 	clr	_timeout
                           3338 ;	../../shared/src/interrupt.c:507: timeout_stop2;
   1C5A 75 C8 60           3339 	mov	_T2CON,#0x60
   1C5D C2 C6              3340 	clr	_TF2
                           3341 ;	../../shared/src/interrupt.c:508: PHY_NS = ST_TRXTRAIN;
   1C5F 90 22 31           3342 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1C62 74 28              3343 	mov	a,#0x28
   1C64 F0                 3344 	movx	@dptr,a
   1C65 80 33              3345 	sjmp	00111$
   1C67                    3346 00106$:
                           3347 ;	../../shared/src/interrupt.c:516: if(PHY_NS == ST_TXTRAIN) {
   1C67 90 22 31           3348 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1C6A E0                 3349 	movx	a,@dptr
   1C6B FA                 3350 	mov	r2,a
   1C6C BA 29 10           3351 	cjne	r2,#0x29,00104$
                           3352 ;	../../shared/src/interrupt.c:517: do_rxtrain = 0;
   1C6F C2 07              3353 	clr	_do_rxtrain
                           3354 ;	../../shared/src/interrupt.c:518: reg_RX_TRAIN_COMPLETE_LANE = 0;
   1C71 90 26 7B           3355 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1C74 E0                 3356 	movx	a,@dptr
   1C75 54 FE              3357 	anl	a,#0xfe
   1C77 F0                 3358 	movx	@dptr,a
                           3359 ;	../../shared/src/interrupt.c:519: reg_RX_TRAIN_ON_LANE = 0;
   1C78 90 26 7B           3360 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1C7B E0                 3361 	movx	a,@dptr
   1C7C 54 FB              3362 	anl	a,#0xfb
   1C7E F0                 3363 	movx	@dptr,a
   1C7F                    3364 00104$:
                           3365 ;	../../shared/src/interrupt.c:522: PHY_NS = ST_RXTRAIN;
   1C7F 90 22 31           3366 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1C82 74 2A              3367 	mov	a,#0x2A
   1C84 F0                 3368 	movx	@dptr,a
                           3369 ;	../../shared/src/interrupt.c:523: EX11 = 1; mcu_reset();
   1C85 D2 9E              3370 	setb	_EX11
                           3371 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1C87 90 22 33           3372 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1C8A 74 FF              3373 	mov	a,#0xFF
   1C8C F0                 3374 	movx	@dptr,a
                           3375 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1C8D 90 22 0B           3376 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1C90 E0                 3377 	movx	a,@dptr
   1C91 54 7F              3378 	anl	a,#0x7f
   1C93 F0                 3379 	movx	@dptr,a
                           3380 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1C94 75 F7 01           3381 	mov	_SRST,#0x01
                           3382 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1C97 75 F7 01           3383 	mov	_SRST,#0x01
                           3384 ;	../../shared/src/interrupt.c:523: EX11 = 1; mcu_reset();
   1C9A                    3385 00111$:
                           3386 ;	../../shared/src/interrupt.c:528: if(reg_FRAME_UNLOCK_ISR_LANE) {
   1C9A 90 21 43           3387 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   1C9D E0                 3388 	movx	a,@dptr
   1C9E 30 E5 2B           3389 	jnb	acc.5,00117$
                           3390 ;	../../shared/src/interrupt.c:529: reg_FRAME_UNLOCK_ISR_CLEAR_LANE = 1;
                           3391 ;	../../shared/src/interrupt.c:530: reg_FRAME_UNLOCK_ISR_CLEAR_LANE = 0;
   1CA1 90 21 5B           3392 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   1CA4 E0                 3393 	movx	a,@dptr
   1CA5 44 20              3394 	orl	a,#0x20
   1CA7 F0                 3395 	movx	@dptr,a
   1CA8 E0                 3396 	movx	a,@dptr
   1CA9 54 DF              3397 	anl	a,#0xdf
   1CAB F0                 3398 	movx	@dptr,a
                           3399 ;	../../shared/src/interrupt.c:532: if(link_train_mode==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && reg_FRAME_LOCK_LANE==0) {
   1CAC 90 26 7B           3400 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1CAF E0                 3401 	movx	a,@dptr
   1CB0 20 E7 19           3402 	jb	acc.7,00117$
   1CB3 90 26 79           3403 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1CB6 E0                 3404 	movx	a,@dptr
   1CB7 30 E6 12           3405 	jnb	acc.6,00117$
   1CBA 90 21 26           3406 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   1CBD E0                 3407 	movx	a,@dptr
   1CBE 20 E2 0B           3408 	jb	acc.2,00117$
                           3409 ;	../../shared/src/interrupt.c:533: reg_TIMER_3_EN_LANE = 0;
                           3410 ;	../../shared/src/interrupt.c:534: reg_TIMER_3_EN_LANE = 1;
   1CC1 90 22 74           3411 	mov	dptr,#_MCU_TIMER_CONTROL
   1CC4 E0                 3412 	movx	a,@dptr
   1CC5 54 F7              3413 	anl	a,#0xf7
   1CC7 F0                 3414 	movx	@dptr,a
   1CC8 E0                 3415 	movx	a,@dptr
   1CC9 44 08              3416 	orl	a,#0x08
   1CCB F0                 3417 	movx	@dptr,a
   1CCC                    3418 00117$:
                           3419 ;	../../shared/src/interrupt.c:538: PHY_INT_LANE = 0xFF;
   1CCC 90 22 33           3420 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1CCF 74 FF              3421 	mov	a,#0xFF
   1CD1 F0                 3422 	movx	@dptr,a
                           3423 ;	../../shared/src/interrupt.c:540: EX11 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   1CD2 D2 9E              3424 	setb	_EX11
                           3425 ;	../../shared/src/interrupt.c:541: EA = 1;
   1CD4 D2 AF              3426 	setb	_EA
   1CD6 D0 D0              3427 	pop	psw
   1CD8 D0 83              3428 	pop	dph
   1CDA D0 82              3429 	pop	dpl
   1CDC D0 E0              3430 	pop	acc
   1CDE 32                 3431 	reti
                           3432 ;	eliminated unneeded push/pop b
                           3433 ;------------------------------------------------------------
                           3434 ;Allocation info for local variables in function 'int5_isr'
                           3435 ;------------------------------------------------------------
                           3436 ;------------------------------------------------------------
                           3437 ;	../../shared/src/interrupt.c:545: void int5_isr (void) __interrupt (12) __using (2) //txtrain
                           3438 ;	-----------------------------------------
                           3439 ;	 function int5_isr
                           3440 ;	-----------------------------------------
   1CDF                    3441 _int5_isr:
   1CDF C0 E0              3442 	push	acc
   1CE1 C0 82              3443 	push	dpl
   1CE3 C0 83              3444 	push	dph
   1CE5 C0 D0              3445 	push	psw
   1CE7 75 D0 10           3446 	mov	psw,#0x10
                           3447 ;	../../shared/src/interrupt.c:547: EA = 0;
   1CEA C2 AF              3448 	clr	_EA
                           3449 ;	../../shared/src/interrupt.c:548: PHY_INT_LANE = 5;
   1CEC 90 22 33           3450 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1CEF 74 05              3451 	mov	a,#0x05
   1CF1 F0                 3452 	movx	@dptr,a
                           3453 ;	../../shared/src/interrupt.c:552: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x02;
                           3454 ;	../../shared/src/interrupt.c:553: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
   1CF2 90 26 64           3455 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   1CF5 74 02              3456 	mov	a,#0x02
   1CF7 F0                 3457 	movx	@dptr,a
   1CF8 E4                 3458 	clr	a
   1CF9 F0                 3459 	movx	@dptr,a
                           3460 ;	../../shared/src/interrupt.c:555: reg_MCU_DEBUG0_LANE_7_0 = do_train;
   1CFA A2 06              3461 	mov	c,_do_train
   1CFC E4                 3462 	clr	a
   1CFD 33                 3463 	rlc	a
   1CFE FA                 3464 	mov	r2,a
   1CFF 90 22 B4           3465 	mov	dptr,#_MCU_DEBUG0_LANE
   1D02 EA                 3466 	mov	a,r2
   1D03 F0                 3467 	movx	@dptr,a
                           3468 ;	../../shared/src/interrupt.c:558: if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==0) {
   1D04 90 26 79           3469 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1D07 E0                 3470 	movx	a,@dptr
   1D08 20 E6 03           3471 	jb	acc.6,00143$
   1D0B 02 1D 8E           3472 	ljmp	00122$
   1D0E                    3473 00143$:
   1D0E 30 06 03           3474 	jnb	_do_train,00144$
   1D11 02 1D 8E           3475 	ljmp	00122$
   1D14                    3476 00144$:
                           3477 ;	../../shared/src/interrupt.c:562: reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design
   1D14 90 26 7B           3478 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D17 E0                 3479 	movx	a,@dptr
   1D18 44 02              3480 	orl	a,#0x02
   1D1A F0                 3481 	movx	@dptr,a
                           3482 ;	../../shared/src/interrupt.c:564: PHY_NS = ST_TRXTRAIN;
   1D1B 90 22 31           3483 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1D1E 74 28              3484 	mov	a,#0x28
   1D20 F0                 3485 	movx	@dptr,a
                           3486 ;	../../shared/src/interrupt.c:565: do_train = 1;
   1D21 D2 06              3487 	setb	_do_train
                           3488 ;	../../shared/src/interrupt.c:566: if((phy_mode != PCIE) && (cmx_TX_TRAIN_MODE == 1))
   1D23 90 A3 16           3489 	mov	dptr,#(_SYSTEM + 0x0002)
   1D26 E0                 3490 	movx	a,@dptr
   1D27 54 07              3491 	anl	a,#0x07
   1D29 FA                 3492 	mov	r2,a
   1D2A BA 03 02           3493 	cjne	r2,#0x03,00145$
   1D2D 80 12              3494 	sjmp	00102$
   1D2F                    3495 00145$:
   1D2F 90 E6 28           3496 	mov	dptr,#_TRAIN_IF_CONFIG
   1D32 E0                 3497 	movx	a,@dptr
   1D33 03                 3498 	rr	a
   1D34 54 01              3499 	anl	a,#0x01
   1D36 FA                 3500 	mov	r2,a
   1D37 BA 01 07           3501 	cjne	r2,#0x01,00102$
                           3502 ;	../../shared/src/interrupt.c:567: reg_ANA_TX_EM_PEAK_EN_LANE = 1;
   1D3A 90 26 52           3503 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   1D3D E0                 3504 	movx	a,@dptr
   1D3E 44 80              3505 	orl	a,#0x80
   1D40 F0                 3506 	movx	@dptr,a
   1D41                    3507 00102$:
                           3508 ;	../../shared/src/interrupt.c:568: train_comp = 0;
   1D41 90 67 11           3509 	mov	dptr,#_train_comp
   1D44 E4                 3510 	clr	a
   1D45 F0                 3511 	movx	@dptr,a
                           3512 ;	../../shared/src/interrupt.c:570: timeout = 0;
   1D46 C2 03              3513 	clr	_timeout
                           3514 ;	../../shared/src/interrupt.c:571: timeout_stop2;
   1D48 75 C8 60           3515 	mov	_T2CON,#0x60
   1D4B C2 C6              3516 	clr	_TF2
                           3517 ;	../../shared/src/interrupt.c:572: reg_INT4_TIMER3_INT_EN_LANE = 0;
   1D4D 90 22 50           3518 	mov	dptr,#_MCU_INT4_CONTROL
   1D50 E0                 3519 	movx	a,@dptr
   1D51 54 DF              3520 	anl	a,#0xdf
   1D53 F0                 3521 	movx	@dptr,a
                           3522 ;	../../shared/src/interrupt.c:573: train_timer_int = 0;
   1D54 90 66 CC           3523 	mov	dptr,#_train_timer_int
   1D57 E4                 3524 	clr	a
   1D58 F0                 3525 	movx	@dptr,a
                           3526 ;	../../shared/src/interrupt.c:574: reg_FRAME_UNLOCK_ISR_LANE = 0;
   1D59 90 21 43           3527 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   1D5C E0                 3528 	movx	a,@dptr
   1D5D 54 DF              3529 	anl	a,#0xdf
   1D5F F0                 3530 	movx	@dptr,a
                           3531 ;	../../shared/src/interrupt.c:575: reg_FRAME_LOCK_ISR_LANE = 0;
   1D60 90 21 43           3532 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   1D63 E0                 3533 	movx	a,@dptr
   1D64 54 BF              3534 	anl	a,#0xbf
   1D66 F0                 3535 	movx	@dptr,a
                           3536 ;	../../shared/src/interrupt.c:576: reg_INT_TIMER3_ISR_CLEAR_LANE = 1;
                           3537 ;	../../shared/src/interrupt.c:577: reg_INT_TIMER3_ISR_CLEAR_LANE = 0;
   1D67 90 22 D8           3538 	mov	dptr,#_MCU_IRQ_ISR_LANE
   1D6A E0                 3539 	movx	a,@dptr
   1D6B 44 08              3540 	orl	a,#0x08
   1D6D F0                 3541 	movx	@dptr,a
   1D6E E0                 3542 	movx	a,@dptr
   1D6F 54 F7              3543 	anl	a,#0xf7
   1D71 F0                 3544 	movx	@dptr,a
                           3545 ;	../../shared/src/interrupt.c:580: if(link_train_mode) {
   1D72 90 26 7B           3546 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D75 E0                 3547 	movx	a,@dptr
   1D76 30 E7 07           3548 	jnb	acc.7,00105$
                           3549 ;	../../shared/src/interrupt.c:581: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   1D79 90 26 04           3550 	mov	dptr,#_DME_ENC_REG1
   1D7C E4                 3551 	clr	a
   1D7D F0                 3552 	movx	@dptr,a
   1D7E A3                 3553 	inc	dptr
   1D7F F0                 3554 	movx	@dptr,a
   1D80                    3555 00105$:
                           3556 ;	../../shared/src/interrupt.c:605: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1;
                           3557 ;	../../shared/src/interrupt.c:606: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   1D80 90 26 7A           3558 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   1D83 E0                 3559 	movx	a,@dptr
   1D84 44 20              3560 	orl	a,#0x20
   1D86 F0                 3561 	movx	@dptr,a
   1D87 E0                 3562 	movx	a,@dptr
   1D88 54 DF              3563 	anl	a,#0xdf
   1D8A F0                 3564 	movx	@dptr,a
   1D8B 02 1E 69           3565 	ljmp	00123$
   1D8E                    3566 00122$:
                           3567 ;	../../shared/src/interrupt.c:608: else if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==1) {
   1D8E 90 26 79           3568 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1D91 E0                 3569 	movx	a,@dptr
   1D92 30 E6 31           3570 	jnb	acc.6,00117$
   1D95 30 06 2E           3571 	jnb	_do_train,00117$
   1D98 90 26 7B           3572 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1D9B E0                 3573 	movx	a,@dptr
   1D9C C4                 3574 	swap	a
   1D9D 54 01              3575 	anl	a,#0x01
   1D9F FA                 3576 	mov	r2,a
   1DA0 BA 01 23           3577 	cjne	r2,#0x01,00117$
                           3578 ;	../../shared/src/interrupt.c:609: PHY_NS = ST_TRXTRAIN;
   1DA3 90 22 31           3579 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1DA6 74 28              3580 	mov	a,#0x28
   1DA8 F0                 3581 	movx	@dptr,a
                           3582 ;	../../shared/src/interrupt.c:610: train_comp = 0;
   1DA9 90 67 11           3583 	mov	dptr,#_train_comp
   1DAC E4                 3584 	clr	a
   1DAD F0                 3585 	movx	@dptr,a
                           3586 ;	../../shared/src/interrupt.c:611: timeout = 0;
   1DAE C2 03              3587 	clr	_timeout
                           3588 ;	../../shared/src/interrupt.c:612: timeout_stop2;
   1DB0 75 C8 60           3589 	mov	_T2CON,#0x60
   1DB3 C2 C6              3590 	clr	_TF2
                           3591 ;	../../shared/src/interrupt.c:613: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   1DB5 90 26 78           3592 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1DB8 E0                 3593 	movx	a,@dptr
   1DB9 54 FB              3594 	anl	a,#0xfb
   1DBB F0                 3595 	movx	@dptr,a
                           3596 ;	../../shared/src/interrupt.c:614: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;
   1DBC 90 26 7B           3597 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1DBF E0                 3598 	movx	a,@dptr
   1DC0 54 EF              3599 	anl	a,#0xef
   1DC2 F0                 3600 	movx	@dptr,a
   1DC3 02 1E 69           3601 	ljmp	00123$
   1DC6                    3602 00117$:
                           3603 ;	../../shared/src/interrupt.c:617: else if ( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0){ //abort
   1DC6 90 26 79           3604 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1DC9 E0                 3605 	movx	a,@dptr
   1DCA 20 E6 44           3606 	jb	acc.6,00112$
   1DCD 30 06 41           3607 	jnb	_do_train,00112$
   1DD0 90 26 7B           3608 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1DD3 E0                 3609 	movx	a,@dptr
   1DD4 20 E4 3A           3610 	jb	acc.4,00112$
                           3611 ;	../../shared/src/interrupt.c:618: if(PHY_NS == ST_RXTRAIN) {
   1DD7 90 22 31           3612 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1DDA E0                 3613 	movx	a,@dptr
   1DDB FA                 3614 	mov	r2,a
   1DDC BA 2A 17           3615 	cjne	r2,#0x2A,00107$
                           3616 ;	../../shared/src/interrupt.c:619: do_train = 0;
   1DDF C2 06              3617 	clr	_do_train
                           3618 ;	../../shared/src/interrupt.c:620: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   1DE1 90 26 78           3619 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1DE4 E0                 3620 	movx	a,@dptr
   1DE5 54 FB              3621 	anl	a,#0xfb
   1DE7 F0                 3622 	movx	@dptr,a
                           3623 ;	../../shared/src/interrupt.c:621: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;
   1DE8 90 26 7B           3624 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1DEB E0                 3625 	movx	a,@dptr
   1DEC 54 EF              3626 	anl	a,#0xef
   1DEE F0                 3627 	movx	@dptr,a
                           3628 ;	../../shared/src/interrupt.c:622: reg_TX_TRAIN_ON_LANE = 0;
   1DEF 90 26 7B           3629 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1DF2 E0                 3630 	movx	a,@dptr
   1DF3 54 FD              3631 	anl	a,#0xfd
   1DF5 F0                 3632 	movx	@dptr,a
   1DF6                    3633 00107$:
                           3634 ;	../../shared/src/interrupt.c:629: PHY_NS = ST_TXTRAIN;
   1DF6 90 22 31           3635 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1DF9 74 29              3636 	mov	a,#0x29
   1DFB F0                 3637 	movx	@dptr,a
                           3638 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1DFC 90 22 33           3639 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1DFF 74 FF              3640 	mov	a,#0xFF
   1E01 F0                 3641 	movx	@dptr,a
                           3642 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1E02 90 22 0B           3643 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1E05 E0                 3644 	movx	a,@dptr
   1E06 54 7F              3645 	anl	a,#0x7f
   1E08 F0                 3646 	movx	@dptr,a
                           3647 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1E09 75 F7 01           3648 	mov	_SRST,#0x01
                           3649 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1E0C 75 F7 01           3650 	mov	_SRST,#0x01
                           3651 ;	../../shared/src/interrupt.c:630: mcu_reset();
   1E0F 80 58              3652 	sjmp	00123$
   1E11                    3653 00112$:
                           3654 ;	../../shared/src/interrupt.c:633: else if (reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==1) {//reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0 ////assume H->L->H  restart
   1E11 90 26 79           3655 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1E14 E0                 3656 	movx	a,@dptr
   1E15 30 E6 51           3657 	jnb	acc.6,00123$
   1E18 30 06 4E           3658 	jnb	_do_train,00123$
                           3659 ;	../../shared/src/interrupt.c:634: train_comp = 0;
   1E1B 90 67 11           3660 	mov	dptr,#_train_comp
   1E1E E4                 3661 	clr	a
   1E1F F0                 3662 	movx	@dptr,a
                           3663 ;	../../shared/src/interrupt.c:635: timeout = 0;
   1E20 C2 03              3664 	clr	_timeout
                           3665 ;	../../shared/src/interrupt.c:636: timeout_stop2;
   1E22 75 C8 60           3666 	mov	_T2CON,#0x60
   1E25 C2 C6              3667 	clr	_TF2
                           3668 ;	../../shared/src/interrupt.c:637: reg_INT4_TIMER3_INT_EN_LANE = 0;
   1E27 90 22 50           3669 	mov	dptr,#_MCU_INT4_CONTROL
   1E2A E0                 3670 	movx	a,@dptr
   1E2B 54 DF              3671 	anl	a,#0xdf
   1E2D F0                 3672 	movx	@dptr,a
                           3673 ;	../../shared/src/interrupt.c:638: reg_TIMER_3_EN_LANE = 0;
   1E2E 90 22 74           3674 	mov	dptr,#_MCU_TIMER_CONTROL
   1E31 E0                 3675 	movx	a,@dptr
   1E32 54 F7              3676 	anl	a,#0xf7
   1E34 F0                 3677 	movx	@dptr,a
                           3678 ;	../../shared/src/interrupt.c:639: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   1E35 90 26 78           3679 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1E38 E0                 3680 	movx	a,@dptr
   1E39 54 FB              3681 	anl	a,#0xfb
   1E3B F0                 3682 	movx	@dptr,a
                           3683 ;	../../shared/src/interrupt.c:640: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;
   1E3C 90 26 7B           3684 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1E3F E0                 3685 	movx	a,@dptr
   1E40 54 EF              3686 	anl	a,#0xef
   1E42 F0                 3687 	movx	@dptr,a
                           3688 ;	../../shared/src/interrupt.c:641: reg_TX_TRAIN_ON_LANE = 0;
   1E43 90 26 7B           3689 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1E46 E0                 3690 	movx	a,@dptr
   1E47 54 FD              3691 	anl	a,#0xfd
   1E49 F0                 3692 	movx	@dptr,a
                           3693 ;	../../shared/src/interrupt.c:645: tx_init_bit = 1;
   1E4A 90 67 10           3694 	mov	dptr,#_tx_init_bit
   1E4D 74 01              3695 	mov	a,#0x01
   1E4F F0                 3696 	movx	@dptr,a
                           3697 ;	../../shared/src/interrupt.c:646: PHY_NS = ST_TXTRAIN;
   1E50 90 22 31           3698 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1E53 74 29              3699 	mov	a,#0x29
   1E55 F0                 3700 	movx	@dptr,a
                           3701 ;	../../shared/src/interrupt.c:35: PHY_INT_LANE = 0xFF;
   1E56 90 22 33           3702 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E59 74 FF              3703 	mov	a,#0xFF
   1E5B F0                 3704 	movx	@dptr,a
                           3705 ;	../../shared/src/interrupt.c:36: reg_INT_ENABLE_ALL_LANE = 0;
   1E5C 90 22 0B           3706 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   1E5F E0                 3707 	movx	a,@dptr
   1E60 54 7F              3708 	anl	a,#0x7f
   1E62 F0                 3709 	movx	@dptr,a
                           3710 ;	../../shared/src/interrupt.c:37: SRST = 1;
   1E63 75 F7 01           3711 	mov	_SRST,#0x01
                           3712 ;	../../shared/src/interrupt.c:38: SRST = 1;
   1E66 75 F7 01           3713 	mov	_SRST,#0x01
                           3714 ;	../../shared/src/interrupt.c:647: mcu_reset();
   1E69                    3715 00123$:
                           3716 ;	../../shared/src/interrupt.c:651: PHY_INT_LANE = 0xff;
   1E69 90 22 33           3717 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E6C 74 FF              3718 	mov	a,#0xFF
   1E6E F0                 3719 	movx	@dptr,a
                           3720 ;	../../shared/src/interrupt.c:652: EA = 1;
   1E6F D2 AF              3721 	setb	_EA
   1E71 D0 D0              3722 	pop	psw
   1E73 D0 83              3723 	pop	dph
   1E75 D0 82              3724 	pop	dpl
   1E77 D0 E0              3725 	pop	acc
   1E79 32                 3726 	reti
                           3727 ;	eliminated unneeded push/pop b
                           3728 ;------------------------------------------------------------
                           3729 ;Allocation info for local variables in function 'int10_isr'
                           3730 ;------------------------------------------------------------
                           3731 ;------------------------------------------------------------
                           3732 ;	../../shared/src/interrupt.c:655: void int10_isr (void) __interrupt (19)  __using (2) //rx_init
                           3733 ;	-----------------------------------------
                           3734 ;	 function int10_isr
                           3735 ;	-----------------------------------------
   1E7A                    3736 _int10_isr:
   1E7A C0 E0              3737 	push	acc
   1E7C C0 82              3738 	push	dpl
   1E7E C0 83              3739 	push	dph
   1E80 C0 D0              3740 	push	psw
   1E82 75 D0 10           3741 	mov	psw,#0x10
                           3742 ;	../../shared/src/interrupt.c:657: EA = 0;
   1E85 C2 AF              3743 	clr	_EA
                           3744 ;	../../shared/src/interrupt.c:659: reg_RX_INIT_DONE_LANE = 0;
   1E87 90 21 02           3745 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1E8A E0                 3746 	movx	a,@dptr
   1E8B 54 F7              3747 	anl	a,#0xf7
   1E8D F0                 3748 	movx	@dptr,a
                           3749 ;	../../shared/src/interrupt.c:660: PHY_INT_LANE = 10;
   1E8E 90 22 33           3750 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1E91 74 0A              3751 	mov	a,#0x0A
   1E93 F0                 3752 	movx	@dptr,a
                           3753 ;	../../shared/src/interrupt.c:666: if(SKIP_RX_INIT) {
   1E94 90 22 3A           3754 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   1E97 E0                 3755 	movx	a,@dptr
   1E98 60 0E              3756 	jz	00102$
                           3757 ;	../../shared/src/interrupt.c:667: SKIP_RX_INIT = 0;
   1E9A 90 22 3A           3758 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   1E9D E4                 3759 	clr	a
   1E9E F0                 3760 	movx	@dptr,a
                           3761 ;	../../shared/src/interrupt.c:669: reg_RX_INIT_DONE_LANE = 1;
   1E9F 90 21 02           3762 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   1EA2 E0                 3763 	movx	a,@dptr
   1EA3 44 08              3764 	orl	a,#0x08
   1EA5 F0                 3765 	movx	@dptr,a
   1EA6 80 08              3766 	sjmp	00103$
   1EA8                    3767 00102$:
                           3768 ;	../../shared/src/interrupt.c:672: do_rxinit = 1;
   1EA8 D2 08              3769 	setb	_do_rxinit
                           3770 ;	../../shared/src/interrupt.c:673: PHY_NS = ST_DTL;
   1EAA 90 22 31           3771 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   1EAD 74 2C              3772 	mov	a,#0x2C
   1EAF F0                 3773 	movx	@dptr,a
   1EB0                    3774 00103$:
                           3775 ;	../../shared/src/interrupt.c:678: PHY_INT_LANE = 0xFF;
   1EB0 90 22 33           3776 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1EB3 74 FF              3777 	mov	a,#0xFF
   1EB5 F0                 3778 	movx	@dptr,a
                           3779 ;	../../shared/src/interrupt.c:680: EA = 1;
   1EB6 D2 AF              3780 	setb	_EA
   1EB8 D0 D0              3781 	pop	psw
   1EBA D0 83              3782 	pop	dph
   1EBC D0 82              3783 	pop	dpl
   1EBE D0 E0              3784 	pop	acc
   1EC0 32                 3785 	reti
                           3786 ;	eliminated unneeded push/pop b
                           3787 ;------------------------------------------------------------
                           3788 ;Allocation info for local variables in function 'int7_isr'
                           3789 ;------------------------------------------------------------
                           3790 ;n                         Allocated to registers r4 
                           3791 ;rm_stat                   Allocated to stack - offset 1
                           3792 ;error_code                Allocated to registers r2 
                           3793 ;c0                        Allocated to stack - offset 2
                           3794 ;c1                        Allocated to stack - offset 3
                           3795 ;cn1                       Allocated to stack - offset 4
                           3796 ;ce                        Allocated to stack - offset 5
                           3797 ;remote_ctrl_h             Allocated to registers r6 
                           3798 ;remote_ctrl_l             Allocated to registers r7 
                           3799 ;remote_status_h           Allocated to registers r3 
                           3800 ;remote_ctrl_16            Allocated to registers r4 r5 
                           3801 ;remote_status_16          Allocated to stack - offset 6
                           3802 ;dual_arg                  Allocated to registers 
                           3803 ;single_arg                Allocated to stack - offset 8
                           3804 ;i                         Allocated to registers r2 r3 
                           3805 ;------------------------------------------------------------
                           3806 ;	../../shared/src/interrupt.c:694: void int7_isr (void) __interrupt (8)  __using (2) // remote ctrl valid
                           3807 ;	-----------------------------------------
                           3808 ;	 function int7_isr
                           3809 ;	-----------------------------------------
   1EC1                    3810 _int7_isr:
   1EC1 C0 25              3811 	push	bits
   1EC3 C0 E0              3812 	push	acc
   1EC5 C0 F0              3813 	push	b
   1EC7 C0 82              3814 	push	dpl
   1EC9 C0 83              3815 	push	dph
   1ECB C0 D0              3816 	push	psw
   1ECD 75 D0 10           3817 	mov	psw,#0x10
   1ED0 C0 18              3818 	push	_bp
   1ED2 E5 81              3819 	mov	a,sp
   1ED4 F5 18              3820 	mov	_bp,a
   1ED6 24 08              3821 	add	a,#0x08
   1ED8 F5 81              3822 	mov	sp,a
                           3823 ;	../../shared/src/interrupt.c:703: error_code = 0;
   1EDA 7A 00              3824 	mov	r2,#0x00
                           3825 ;	../../shared/src/interrupt.c:705: single_arg = 0;
   1EDC E5 18              3826 	mov	a,_bp
   1EDE 24 08              3827 	add	a,#0x08
   1EE0 F8                 3828 	mov	r0,a
   1EE1 76 00              3829 	mov	@r0,#0x00
                           3830 ;	../../shared/src/interrupt.c:707: EA = 0;
   1EE3 C2 AF              3831 	clr	_EA
                           3832 ;	../../shared/src/interrupt.c:709: PHY_INT_LANE = 7;
   1EE5 90 22 33           3833 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   1EE8 74 07              3834 	mov	a,#0x07
   1EEA F0                 3835 	movx	@dptr,a
                           3836 ;	../../shared/src/interrupt.c:711: if(reg_REMOTE_CTRL_VALID_ISR_LANE) 
   1EEB 90 26 5D           3837 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   1EEE E0                 3838 	movx	a,@dptr
   1EEF 20 E1 03           3839 	jb	acc.1,00389$
   1EF2 02 27 3F           3840 	ljmp	00291$
   1EF5                    3841 00389$:
                           3842 ;	../../shared/src/interrupt.c:713: reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 1;
                           3843 ;	../../shared/src/interrupt.c:714: reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 0;
   1EF5 90 26 65           3844 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   1EF8 E0                 3845 	movx	a,@dptr
   1EF9 44 02              3846 	orl	a,#0x02
   1EFB F0                 3847 	movx	@dptr,a
   1EFC E0                 3848 	movx	a,@dptr
   1EFD 54 FD              3849 	anl	a,#0xfd
   1EFF F0                 3850 	movx	@dptr,a
                           3851 ;	../../shared/src/interrupt.c:716: EA = 1; //for nested int
   1F00 D2 AF              3852 	setb	_EA
                           3853 ;	../../shared/src/interrupt.c:718: if( reg_TX_TRAIN_ON_LANE || reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) {
   1F02 90 26 7B           3854 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   1F05 E0                 3855 	movx	a,@dptr
   1F06 20 E1 0A           3856 	jb	acc.1,00287$
   1F09 90 26 78           3857 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1F0C E0                 3858 	movx	a,@dptr
   1F0D 20 E0 03           3859 	jb	acc.0,00391$
   1F10 02 27 3F           3860 	ljmp	00291$
   1F13                    3861 00391$:
   1F13                    3862 00287$:
                           3863 ;	../../shared/src/interrupt.c:720: remote_ctrl_16 = device_remote_control_bits;
   1F13 90 26 72           3864 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   1F16 E0                 3865 	movx	a,@dptr
   1F17 FC                 3866 	mov	r4,a
   1F18 A3                 3867 	inc	dptr
   1F19 E0                 3868 	movx	a,@dptr
   1F1A FD                 3869 	mov	r5,a
                           3870 ;	../../shared/src/interrupt.c:721: remote_status_16 = device_remote_status_bits;
   1F1B 90 26 70           3871 	mov	dptr,#_TX_TRAIN_IF_REG6
   1F1E E0                 3872 	movx	a,@dptr
   1F1F FE                 3873 	mov	r6,a
   1F20 A3                 3874 	inc	dptr
   1F21 E0                 3875 	movx	a,@dptr
   1F22 FF                 3876 	mov	r7,a
   1F23 E5 18              3877 	mov	a,_bp
   1F25 24 06              3878 	add	a,#0x06
   1F27 F8                 3879 	mov	r0,a
   1F28 A6 16              3880 	mov	@r0,ar6
   1F2A 08                 3881 	inc	r0
   1F2B A6 17              3882 	mov	@r0,ar7
                           3883 ;	../../shared/src/interrupt.c:722: if( remote_ctrl_16 != device_remote_control_bits || remote_status_16 != device_remote_status_bits) {
   1F2D 90 26 72           3884 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   1F30 E0                 3885 	movx	a,@dptr
   1F31 FB                 3886 	mov	r3,a
   1F32 A3                 3887 	inc	dptr
   1F33 E0                 3888 	movx	a,@dptr
   1F34 FE                 3889 	mov	r6,a
   1F35 EC                 3890 	mov	a,r4
   1F36 B5 13 1C           3891 	cjne	a,ar3,00101$
   1F39 ED                 3892 	mov	a,r5
   1F3A B5 16 18           3893 	cjne	a,ar6,00101$
   1F3D 90 26 70           3894 	mov	dptr,#_TX_TRAIN_IF_REG6
   1F40 E0                 3895 	movx	a,@dptr
   1F41 FE                 3896 	mov	r6,a
   1F42 A3                 3897 	inc	dptr
   1F43 E0                 3898 	movx	a,@dptr
   1F44 FF                 3899 	mov	r7,a
   1F45 E5 18              3900 	mov	a,_bp
   1F47 24 06              3901 	add	a,#0x06
   1F49 F8                 3902 	mov	r0,a
   1F4A E6                 3903 	mov	a,@r0
   1F4B B5 16 07           3904 	cjne	a,ar6,00394$
   1F4E 08                 3905 	inc	r0
   1F4F E6                 3906 	mov	a,@r0
   1F50 B5 17 02           3907 	cjne	a,ar7,00394$
   1F53 80 1E              3908 	sjmp	00102$
   1F55                    3909 00394$:
   1F55                    3910 00101$:
                           3911 ;	../../shared/src/interrupt.c:723: remote_ctrl_16 = device_remote_control_bits;
   1F55 90 26 72           3912 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   1F58 E0                 3913 	movx	a,@dptr
   1F59 FE                 3914 	mov	r6,a
   1F5A A3                 3915 	inc	dptr
   1F5B E0                 3916 	movx	a,@dptr
   1F5C FF                 3917 	mov	r7,a
   1F5D 8E 14              3918 	mov	ar4,r6
   1F5F 8F 15              3919 	mov	ar5,r7
                           3920 ;	../../shared/src/interrupt.c:724: remote_status_16 = device_remote_status_bits;
   1F61 90 26 70           3921 	mov	dptr,#_TX_TRAIN_IF_REG6
   1F64 E0                 3922 	movx	a,@dptr
   1F65 FE                 3923 	mov	r6,a
   1F66 A3                 3924 	inc	dptr
   1F67 E0                 3925 	movx	a,@dptr
   1F68 FF                 3926 	mov	r7,a
   1F69 E5 18              3927 	mov	a,_bp
   1F6B 24 06              3928 	add	a,#0x06
   1F6D F8                 3929 	mov	r0,a
   1F6E A6 16              3930 	mov	@r0,ar6
   1F70 08                 3931 	inc	r0
   1F71 A6 17              3932 	mov	@r0,ar7
   1F73                    3933 00102$:
                           3934 ;	../../shared/src/interrupt.c:726: remote_ctrl_h = (uint8_t)(remote_ctrl_16>>8);
   1F73 8D 16              3935 	mov	ar6,r5
                           3936 ;	../../shared/src/interrupt.c:727: remote_ctrl_l = (uint8_t)(remote_ctrl_16);
   1F75 8C 17              3937 	mov	ar7,r4
                           3938 ;	../../shared/src/interrupt.c:728: remote_status_h = (uint8_t)(remote_status_16>>8);
   1F77 E5 18              3939 	mov	a,_bp
   1F79 24 06              3940 	add	a,#0x06
   1F7B F8                 3941 	mov	r0,a
   1F7C 08                 3942 	inc	r0
   1F7D 86 13              3943 	mov	ar3,@r0
                           3944 ;	../../shared/src/interrupt.c:781: if( (do_train && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==1) ||
   1F7F 30 06 14           3945 	jnb	_do_train,00286$
   1F82 C0 13              3946 	push	ar3
   1F84 90 26 79           3947 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1F87 E0                 3948 	movx	a,@dptr
   1F88 23                 3949 	rl	a
   1F89 23                 3950 	rl	a
   1F8A 54 01              3951 	anl	a,#0x01
   1F8C FB                 3952 	mov	r3,a
   1F8D BB 01 04           3953 	cjne	r3,#0x01,00396$
   1F90 D0 13              3954 	pop	ar3
   1F92 80 27              3955 	sjmp	00281$
   1F94                    3956 00396$:
   1F94 D0 13              3957 	pop	ar3
   1F96                    3958 00286$:
                           3959 ;	../../shared/src/interrupt.c:782: (do_tx_apta && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 &&
   1F96 20 0A 03           3960 	jb	_do_tx_apta,00397$
   1F99 02 27 3F           3961 	ljmp	00291$
   1F9C                    3962 00397$:
   1F9C 90 26 79           3963 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   1F9F E0                 3964 	movx	a,@dptr
   1FA0 30 E6 03           3965 	jnb	acc.6,00398$
   1FA3 02 27 3F           3966 	ljmp	00291$
   1FA6                    3967 00398$:
                           3968 ;	../../shared/src/interrupt.c:783: reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==1)) {
   1FA6 C0 13              3969 	push	ar3
   1FA8 90 26 78           3970 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   1FAB E0                 3971 	movx	a,@dptr
   1FAC 54 01              3972 	anl	a,#0x01
   1FAE FB                 3973 	mov	r3,a
   1FAF BB 01 02           3974 	cjne	r3,#0x01,00399$
   1FB2 80 05              3975 	sjmp	00400$
   1FB4                    3976 00399$:
   1FB4 D0 13              3977 	pop	ar3
   1FB6 02 27 3F           3978 	ljmp	00291$
   1FB9                    3979 00400$:
   1FB9 D0 13              3980 	pop	ar3
   1FBB                    3981 00281$:
                           3982 ;	../../shared/src/interrupt.c:791: c1 = (remote_ctrl_l>>4)&03;
   1FBB C0 13              3983 	push	ar3
   1FBD EF                 3984 	mov	a,r7
   1FBE C4                 3985 	swap	a
   1FBF 54 0F              3986 	anl	a,#0x0f
   1FC1 FB                 3987 	mov	r3,a
   1FC2 E5 18              3988 	mov	a,_bp
   1FC4 24 03              3989 	add	a,#0x03
   1FC6 F8                 3990 	mov	r0,a
   1FC7 74 03              3991 	mov	a,#0x03
   1FC9 5B                 3992 	anl	a,r3
   1FCA F6                 3993 	mov	@r0,a
                           3994 ;	../../shared/src/interrupt.c:792: c0 = (remote_ctrl_l>>2)&03;
   1FCB EF                 3995 	mov	a,r7
   1FCC 03                 3996 	rr	a
   1FCD 03                 3997 	rr	a
   1FCE 54 3F              3998 	anl	a,#0x3f
   1FD0 FB                 3999 	mov	r3,a
   1FD1 A8 18              4000 	mov	r0,_bp
   1FD3 08                 4001 	inc	r0
   1FD4 08                 4002 	inc	r0
   1FD5 74 03              4003 	mov	a,#0x03
   1FD7 5B                 4004 	anl	a,r3
   1FD8 F6                 4005 	mov	@r0,a
                           4006 ;	../../shared/src/interrupt.c:793: cn1 = remote_ctrl_l&03;
   1FD9 E5 18              4007 	mov	a,_bp
   1FDB 24 04              4008 	add	a,#0x04
   1FDD F8                 4009 	mov	r0,a
   1FDE 74 03              4010 	mov	a,#0x03
   1FE0 5F                 4011 	anl	a,r7
   1FE1 F6                 4012 	mov	@r0,a
                           4013 ;	../../shared/src/interrupt.c:795: rm_stat = READY;
   1FE2 A8 18              4014 	mov	r0,_bp
   1FE4 08                 4015 	inc	r0
   1FE5 76 00              4016 	mov	@r0,#0x00
                           4017 ;	../../shared/src/interrupt.c:807: if(phy_mode == 4) { //ethernet
   1FE7 90 A3 16           4018 	mov	dptr,#(_SYSTEM + 0x0002)
   1FEA E0                 4019 	movx	a,@dptr
   1FEB 54 07              4020 	anl	a,#0x07
   1FED FB                 4021 	mov	r3,a
   1FEE BB 04 02           4022 	cjne	r3,#0x04,00401$
   1FF1 80 04              4023 	sjmp	00402$
   1FF3                    4024 00401$:
   1FF3 D0 13              4025 	pop	ar3
   1FF5 80 39              4026 	sjmp	00140$
   1FF7                    4027 00402$:
                           4028 ;	../../shared/src/interrupt.c:808: ce = (uint8_t)((remote_ctrl_h>>4) & 0x03);
   1FF7 EE                 4029 	mov	a,r6
   1FF8 C4                 4030 	swap	a
   1FF9 54 0F              4031 	anl	a,#0x0f
   1FFB FB                 4032 	mov	r3,a
   1FFC E5 18              4033 	mov	a,_bp
   1FFE 24 05              4034 	add	a,#0x05
   2000 F8                 4035 	mov	r0,a
   2001 74 03              4036 	mov	a,#0x03
   2003 5B                 4037 	anl	a,r3
   2004 F6                 4038 	mov	@r0,a
                           4039 ;	../../shared/src/interrupt.c:809: if(ce&0x1) ce = 4;
   2005 E5 18              4040 	mov	a,_bp
   2007 24 05              4041 	add	a,#0x05
   2009 F8                 4042 	mov	r0,a
   200A E6                 4043 	mov	a,@r0
   200B D0 13              4044 	pop	ar3
   200D 30 E0 0A           4045 	jnb	acc.0,00107$
   2010 E5 18              4046 	mov	a,_bp
   2012 24 05              4047 	add	a,#0x05
   2014 F8                 4048 	mov	r0,a
   2015 76 04              4049 	mov	@r0,#0x04
   2017 02 21 17           4050 	ljmp	00141$
   201A                    4051 00107$:
                           4052 ;	../../shared/src/interrupt.c:810: else if(ce&0x2) ce = 5;
   201A E5 18              4053 	mov	a,_bp
   201C 24 05              4054 	add	a,#0x05
   201E F8                 4055 	mov	r0,a
   201F E6                 4056 	mov	a,@r0
   2020 20 E1 03           4057 	jb	acc.1,00404$
   2023 02 21 17           4058 	ljmp	00141$
   2026                    4059 00404$:
   2026 E5 18              4060 	mov	a,_bp
   2028 24 05              4061 	add	a,#0x05
   202A F8                 4062 	mov	r0,a
   202B 76 05              4063 	mov	@r0,#0x05
   202D 02 21 17           4064 	ljmp	00141$
   2030                    4065 00140$:
                           4066 ;	../../shared/src/interrupt.c:813: if( (remote_ctrl_h&0xe0) == 0) { //pattern check
   2030 EE                 4067 	mov	a,r6
   2031 54 E0              4068 	anl	a,#0xE0
   2033 60 1C              4069 	jz	00114$
                           4070 ;	../../shared/src/interrupt.c:816: else if( (remote_ctrl_h&0xe0) == 0xe0) { //error code coming, do nothing
   2035 C0 17              4071 	push	ar7
   2037 74 E0              4072 	mov	a,#0xE0
   2039 5E                 4073 	anl	a,r6
   203A FF                 4074 	mov	r7,a
   203B BF E0 05           4075 	cjne	r7,#0xE0,00406$
   203E D0 17              4076 	pop	ar7
   2040 02 27 3F           4077 	ljmp	00291$
   2043                    4078 00406$:
   2043 D0 17              4079 	pop	ar7
                           4080 ;	../../shared/src/interrupt.c:820: lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 1;
   2045 90 60 5A           4081 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   2048 E0                 4082 	movx	a,@dptr
   2049 44 08              4083 	orl	a,#0x08
   204B F0                 4084 	movx	@dptr,a
                           4085 ;	../../shared/src/interrupt.c:821: error_code = RESERVED_PATTERN_TYPE;
   204C 7A 02              4086 	mov	r2,#0x02
                           4087 ;	../../shared/src/interrupt.c:822: goto ext_int;
   204E 02 26 45           4088 	ljmp	00266$
   2051                    4089 00114$:
                           4090 ;	../../shared/src/interrupt.c:826: if( (((remote_ctrl_h&0xe0)==0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   2051 EE                 4091 	mov	a,r6
   2052 54 E0              4092 	anl	a,#0xE0
   2054 70 1E              4093 	jnz	00121$
   2056 EC                 4094 	mov	a,r4
   2057 54 C0              4095 	anl	a,#0xC0
   2059 70 05              4096 	jnz	00409$
   205B ED                 4097 	mov	a,r5
   205C 54 13              4098 	anl	a,#0x13
   205E 60 02              4099 	jz	00410$
   2060                    4100 00409$:
   2060 80 3F              4101 	sjmp	00115$
   2062                    4102 00410$:
                           4103 ;	../../shared/src/interrupt.c:827: (remote_status_16 & 0x1fc0))) || //0001 1111 1100 0000
   2062 E5 18              4104 	mov	a,_bp
   2064 24 06              4105 	add	a,#0x06
   2066 F8                 4106 	mov	r0,a
   2067 E6                 4107 	mov	a,@r0
   2068 54 C0              4108 	anl	a,#0xC0
   206A 70 06              4109 	jnz	00411$
   206C 08                 4110 	inc	r0
   206D E6                 4111 	mov	a,@r0
   206E 54 1F              4112 	anl	a,#0x1F
   2070 60 02              4113 	jz	00412$
   2072                    4114 00411$:
   2072 80 2D              4115 	sjmp	00115$
   2074                    4116 00412$:
   2074                    4117 00121$:
                           4118 ;	../../shared/src/interrupt.c:828: (((remote_ctrl_h&0xe0)==0xe0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   2074 C0 13              4119 	push	ar3
   2076 74 E0              4120 	mov	a,#0xE0
   2078 5E                 4121 	anl	a,r6
   2079 FB                 4122 	mov	r3,a
   207A BB E0 02           4123 	cjne	r3,#0xE0,00413$
   207D 80 04              4124 	sjmp	00414$
   207F                    4125 00413$:
   207F D0 13              4126 	pop	ar3
   2081 80 23              4127 	sjmp	00116$
   2083                    4128 00414$:
   2083 D0 13              4129 	pop	ar3
   2085 EC                 4130 	mov	a,r4
   2086 54 C0              4131 	anl	a,#0xC0
   2088 70 05              4132 	jnz	00415$
   208A ED                 4133 	mov	a,r5
   208B 54 13              4134 	anl	a,#0x13
   208D 60 02              4135 	jz	00416$
   208F                    4136 00415$:
   208F 80 10              4137 	sjmp	00115$
   2091                    4138 00416$:
                           4139 ;	../../shared/src/interrupt.c:829: (remote_status_16 & 0xdfc0))) //1101 1111 1100 0000 
   2091 E5 18              4140 	mov	a,_bp
   2093 24 06              4141 	add	a,#0x06
   2095 F8                 4142 	mov	r0,a
   2096 E6                 4143 	mov	a,@r0
   2097 54 C0              4144 	anl	a,#0xC0
   2099 70 06              4145 	jnz	00417$
   209B 08                 4146 	inc	r0
   209C E6                 4147 	mov	a,@r0
   209D 54 DF              4148 	anl	a,#0xDF
   209F 60 05              4149 	jz	00116$
   20A1                    4150 00417$:
   20A1                    4151 00115$:
                           4152 ;	../../shared/src/interrupt.c:831: error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
   20A1 7A 03              4153 	mov	r2,#0x03
                           4154 ;	../../shared/src/interrupt.c:832: goto ext_int;
   20A3 02 26 45           4155 	ljmp	00266$
   20A6                    4156 00116$:
                           4157 ;	../../shared/src/interrupt.c:835: ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);
   20A6 EE                 4158 	mov	a,r6
   20A7 03                 4159 	rr	a
   20A8 03                 4160 	rr	a
   20A9 54 3F              4161 	anl	a,#0x3f
   20AB FC                 4162 	mov	r4,a
   20AC E5 18              4163 	mov	a,_bp
   20AE 24 05              4164 	add	a,#0x05
   20B0 F8                 4165 	mov	r0,a
   20B1 74 03              4166 	mov	a,#0x03
   20B3 5C                 4167 	anl	a,r4
   20B4 F6                 4168 	mov	@r0,a
                           4169 ;	../../shared/src/interrupt.c:837: if((ce>0) && (remote_ctrl_l&0x3f) != 0) {
   20B5 E5 18              4170 	mov	a,_bp
   20B7 24 05              4171 	add	a,#0x05
   20B9 F8                 4172 	mov	r0,a
   20BA E6                 4173 	mov	a,@r0
   20BB 60 0A              4174 	jz	00123$
   20BD EF                 4175 	mov	a,r7
   20BE 54 3F              4176 	anl	a,#0x3F
   20C0 60 05              4177 	jz	00123$
                           4178 ;	../../shared/src/interrupt.c:838: error_code = RESERVED_COMB_COE_REQ;
   20C2 7A 1A              4179 	mov	r2,#0x1A
                           4180 ;	../../shared/src/interrupt.c:839: goto ext_int;
   20C4 02 26 45           4181 	ljmp	00266$
   20C7                    4182 00123$:
                           4183 ;	../../shared/src/interrupt.c:842: ce = remote_ctrl_l & 0x3f;
   20C7 E5 18              4184 	mov	a,_bp
   20C9 24 05              4185 	add	a,#0x05
   20CB F8                 4186 	mov	r0,a
   20CC 74 3F              4187 	mov	a,#0x3F
   20CE 5F                 4188 	anl	a,r7
   20CF F6                 4189 	mov	@r0,a
                           4190 ;	../../shared/src/interrupt.c:843: if((ce&0x03)==0x03) error_code = RESERVED_COE_1_REQ;
   20D0 E5 18              4191 	mov	a,_bp
   20D2 24 05              4192 	add	a,#0x05
   20D4 F8                 4193 	mov	r0,a
   20D5 74 03              4194 	mov	a,#0x03
   20D7 56                 4195 	anl	a,@r0
   20D8 FD                 4196 	mov	r5,a
   20D9 BD 03 02           4197 	cjne	r5,#0x03,00126$
   20DC 7A 11              4198 	mov	r2,#0x11
   20DE                    4199 00126$:
                           4200 ;	../../shared/src/interrupt.c:844: if((ce&0x0c)==0x0c) {
   20DE E5 18              4201 	mov	a,_bp
   20E0 24 05              4202 	add	a,#0x05
   20E2 F8                 4203 	mov	r0,a
   20E3 74 0C              4204 	mov	a,#0x0C
   20E5 56                 4205 	anl	a,@r0
   20E6 FD                 4206 	mov	r5,a
   20E7 BD 0C 09           4207 	cjne	r5,#0x0C,00131$
                           4208 ;	../../shared/src/interrupt.c:845: if(error_code==0) error_code = RESERVED_COE_2_REQ;
   20EA EA                 4209 	mov	a,r2
   20EB 70 04              4210 	jnz	00128$
   20ED 7A 13              4211 	mov	r2,#0x13
   20EF 80 02              4212 	sjmp	00131$
   20F1                    4213 00128$:
                           4214 ;	../../shared/src/interrupt.c:846: else error_code = MULTI_RESERVED_COE_REQ;
   20F1 7A 10              4215 	mov	r2,#0x10
   20F3                    4216 00131$:
                           4217 ;	../../shared/src/interrupt.c:848: if((ce&0x30)==0x30) {
   20F3 E5 18              4218 	mov	a,_bp
   20F5 24 05              4219 	add	a,#0x05
   20F7 F8                 4220 	mov	r0,a
   20F8 74 30              4221 	mov	a,#0x30
   20FA 56                 4222 	anl	a,@r0
   20FB FD                 4223 	mov	r5,a
   20FC BD 30 09           4224 	cjne	r5,#0x30,00136$
                           4225 ;	../../shared/src/interrupt.c:849: if(error_code==0) error_code = RESERVED_COE_3_REQ;
   20FF EA                 4226 	mov	a,r2
   2100 70 04              4227 	jnz	00133$
   2102 7A 15              4228 	mov	r2,#0x15
   2104 80 02              4229 	sjmp	00136$
   2106                    4230 00133$:
                           4231 ;	../../shared/src/interrupt.c:850: else error_code = MULTI_RESERVED_COE_REQ;
   2106 7A 10              4232 	mov	r2,#0x10
   2108                    4233 00136$:
                           4234 ;	../../shared/src/interrupt.c:852: if(error_code>0) goto ext_int;
   2108 EA                 4235 	mov	a,r2
   2109 60 03              4236 	jz	00428$
   210B 02 26 45           4237 	ljmp	00266$
   210E                    4238 00428$:
                           4239 ;	../../shared/src/interrupt.c:855: ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);
   210E E5 18              4240 	mov	a,_bp
   2110 24 05              4241 	add	a,#0x05
   2112 F8                 4242 	mov	r0,a
   2113 74 03              4243 	mov	a,#0x03
   2115 5C                 4244 	anl	a,r4
   2116 F6                 4245 	mov	@r0,a
   2117                    4246 00141$:
                           4247 ;	../../shared/src/interrupt.c:858: if(ce > 0) {	//ref1, ref2, no_eq
   2117 E5 18              4248 	mov	a,_bp
   2119 24 05              4249 	add	a,#0x05
   211B F8                 4250 	mov	r0,a
   211C E6                 4251 	mov	a,@r0
   211D 70 03              4252 	jnz	00429$
   211F 02 22 10           4253 	ljmp	00264$
   2122                    4254 00429$:
                           4255 ;	../../shared/src/interrupt.c:861: if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing 
   2122 EB                 4256 	mov	a,r3
   2123 30 E7 03           4257 	jnb	acc.7,00430$
   2126 02 27 3F           4258 	ljmp	00291$
   2129                    4259 00430$:
                           4260 ;	../../shared/src/interrupt.c:862: if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing
   2129 EB                 4261 	mov	a,r3
   212A 30 E6 0F           4262 	jnb	acc.6,00145$
   212D 90 A3 16           4263 	mov	dptr,#(_SYSTEM + 0x0002)
   2130 E0                 4264 	movx	a,@dptr
   2131 54 07              4265 	anl	a,#0x07
   2133 FC                 4266 	mov	r4,a
   2134 BC 04 02           4267 	cjne	r4,#0x04,00432$
   2137 80 03              4268 	sjmp	00433$
   2139                    4269 00432$:
   2139 02 27 3F           4270 	ljmp	00291$
   213C                    4271 00433$:
   213C                    4272 00145$:
                           4273 ;	../../shared/src/interrupt.c:867: if(txffe_force_en==0) {
   213C 90 67 A4           4274 	mov	dptr,#_txffe_force_en
   213F E0                 4275 	movx	a,@dptr
   2140 FC                 4276 	mov	r4,a
   2141 60 03              4277 	jz	00434$
   2143 02 26 45           4278 	ljmp	00266$
   2146                    4279 00434$:
                           4280 ;	../../shared/src/interrupt.c:871: LINK_TRAIN_MODE0.BT.B0 = local_tx_preset_tb[ce][0]; //tx_em_po
   2146 E5 18              4281 	mov	a,_bp
   2148 24 05              4282 	add	a,#0x05
   214A F8                 4283 	mov	r0,a
   214B E6                 4284 	mov	a,@r0
   214C 25 E0              4285 	add	a,acc
   214E FC                 4286 	mov	r4,a
   214F 24 B0              4287 	add	a,#_local_tx_preset_tb
   2151 F5 82              4288 	mov	dpl,a
   2153 E4                 4289 	clr	a
   2154 34 E6              4290 	addc	a,#(_local_tx_preset_tb >> 8)
   2156 F5 83              4291 	mov	dph,a
   2158 E0                 4292 	movx	a,@dptr
   2159 90 26 50           4293 	mov	dptr,#_LINK_TRAIN_MODE0
   215C F0                 4294 	movx	@dptr,a
                           4295 ;	../../shared/src/interrupt.c:872: LINK_TRAIN_MODE0.BT.B1 = local_tx_preset_tb[ce][1]; //tx_em_pre, tx_em_peak
   215D EC                 4296 	mov	a,r4
   215E 24 B0              4297 	add	a,#_local_tx_preset_tb
   2160 FC                 4298 	mov	r4,a
   2161 E4                 4299 	clr	a
   2162 34 E6              4300 	addc	a,#(_local_tx_preset_tb >> 8)
   2164 FD                 4301 	mov	r5,a
   2165 8C 82              4302 	mov	dpl,r4
   2167 8D 83              4303 	mov	dph,r5
   2169 A3                 4304 	inc	dptr
   216A E0                 4305 	movx	a,@dptr
   216B 90 26 51           4306 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   216E F0                 4307 	movx	@dptr,a
                           4308 ;	../../shared/src/interrupt.c:874: if(tx_emph1_index >= tx_emph1_max)  rm_stat = C1_is_min;
   216F 90 26 50           4309 	mov	dptr,#_LINK_TRAIN_MODE0
   2172 E0                 4310 	movx	a,@dptr
   2173 C4                 4311 	swap	a
   2174 54 0F              4312 	anl	a,#0x0f
   2176 FC                 4313 	mov	r4,a
   2177 90 60 0F           4314 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   217A E0                 4315 	movx	a,@dptr
   217B 54 0F              4316 	anl	a,#0x0f
   217D FD                 4317 	mov	r5,a
   217E EC                 4318 	mov	a,r4
   217F B5 15 00           4319 	cjne	a,ar5,00435$
   2182                    4320 00435$:
   2182 40 07              4321 	jc	00151$
   2184 A8 18              4322 	mov	r0,_bp
   2186 08                 4323 	inc	r0
   2187 76 20              4324 	mov	@r0,#0x20
   2189 80 14              4325 	sjmp	00152$
   218B                    4326 00151$:
                           4327 ;	../../shared/src/interrupt.c:875: else if(tx_emph1_index <= tx_emph1_min)  rm_stat = C1_is_max;
   218B 90 26 50           4328 	mov	dptr,#_LINK_TRAIN_MODE0
   218E E0                 4329 	movx	a,@dptr
   218F 54 F0              4330 	anl	a,#0xf0
   2191 70 07              4331 	jnz	00148$
   2193 A8 18              4332 	mov	r0,_bp
   2195 08                 4333 	inc	r0
   2196 76 30              4334 	mov	@r0,#0x30
   2198 80 05              4335 	sjmp	00152$
   219A                    4336 00148$:
                           4337 ;	../../shared/src/interrupt.c:876: else  rm_stat = C1_updated;
   219A A8 18              4338 	mov	r0,_bp
   219C 08                 4339 	inc	r0
   219D 76 10              4340 	mov	@r0,#0x10
   219F                    4341 00152$:
                           4342 ;	../../shared/src/interrupt.c:878: if(tx_amp_index >= tx_amp_max)  rm_stat |= C0_is_min;
   219F 90 26 51           4343 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   21A2 E0                 4344 	movx	a,@dptr
   21A3 C4                 4345 	swap	a
   21A4 54 0F              4346 	anl	a,#0x0f
   21A6 FC                 4347 	mov	r4,a
   21A7 90 60 0E           4348 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0002)
   21AA E0                 4349 	movx	a,@dptr
   21AB 54 0F              4350 	anl	a,#0x0f
   21AD FD                 4351 	mov	r5,a
   21AE EC                 4352 	mov	a,r4
   21AF B5 15 00           4353 	cjne	a,ar5,00438$
   21B2                    4354 00438$:
   21B2 40 09              4355 	jc	00157$
   21B4 A8 18              4356 	mov	r0,_bp
   21B6 08                 4357 	inc	r0
   21B7 E6                 4358 	mov	a,@r0
   21B8 44 08              4359 	orl	a,#0x08
   21BA F6                 4360 	mov	@r0,a
   21BB 80 18              4361 	sjmp	00158$
   21BD                    4362 00157$:
                           4363 ;	../../shared/src/interrupt.c:879: else if(tx_amp_index <= tx_amp_min)  rm_stat |= C0_is_max;
   21BD 90 26 51           4364 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   21C0 E0                 4365 	movx	a,@dptr
   21C1 54 F0              4366 	anl	a,#0xf0
   21C3 70 09              4367 	jnz	00154$
   21C5 A8 18              4368 	mov	r0,_bp
   21C7 08                 4369 	inc	r0
   21C8 E6                 4370 	mov	a,@r0
   21C9 44 0C              4371 	orl	a,#0x0C
   21CB F6                 4372 	mov	@r0,a
   21CC 80 07              4373 	sjmp	00158$
   21CE                    4374 00154$:
                           4375 ;	../../shared/src/interrupt.c:880: else  rm_stat |= C0_updated;
   21CE A8 18              4376 	mov	r0,_bp
   21D0 08                 4377 	inc	r0
   21D1 E6                 4378 	mov	a,@r0
   21D2 44 04              4379 	orl	a,#0x04
   21D4 F6                 4380 	mov	@r0,a
   21D5                    4381 00158$:
                           4382 ;	../../shared/src/interrupt.c:882: if(tx_emph0_index >= tx_emph0_max)  rm_stat |= Cn1_is_min;
   21D5 90 26 51           4383 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   21D8 E0                 4384 	movx	a,@dptr
   21D9 54 0F              4385 	anl	a,#0x0f
   21DB FC                 4386 	mov	r4,a
   21DC 90 60 0F           4387 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   21DF E0                 4388 	movx	a,@dptr
   21E0 C4                 4389 	swap	a
   21E1 54 0F              4390 	anl	a,#0x0f
   21E3 FD                 4391 	mov	r5,a
   21E4 EC                 4392 	mov	a,r4
   21E5 B5 15 00           4393 	cjne	a,ar5,00441$
   21E8                    4394 00441$:
   21E8 40 0A              4395 	jc	00163$
   21EA A8 18              4396 	mov	r0,_bp
   21EC 08                 4397 	inc	r0
   21ED E6                 4398 	mov	a,@r0
   21EE 44 02              4399 	orl	a,#0x02
   21F0 F6                 4400 	mov	@r0,a
   21F1 02 26 45           4401 	ljmp	00266$
   21F4                    4402 00163$:
                           4403 ;	../../shared/src/interrupt.c:883: else if(tx_emph0_index <= tx_emph0_min)  rm_stat |= Cn1_is_max;
   21F4 90 26 51           4404 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   21F7 E0                 4405 	movx	a,@dptr
   21F8 54 0F              4406 	anl	a,#0x0f
   21FA 70 0A              4407 	jnz	00160$
   21FC A8 18              4408 	mov	r0,_bp
   21FE 08                 4409 	inc	r0
   21FF E6                 4410 	mov	a,@r0
   2200 44 03              4411 	orl	a,#0x03
   2202 F6                 4412 	mov	@r0,a
   2203 02 26 45           4413 	ljmp	00266$
   2206                    4414 00160$:
                           4415 ;	../../shared/src/interrupt.c:884: else  rm_stat |= Cn1_updated;
   2206 A8 18              4416 	mov	r0,_bp
   2208 08                 4417 	inc	r0
   2209 E6                 4418 	mov	a,@r0
   220A 44 01              4419 	orl	a,#0x01
   220C F6                 4420 	mov	@r0,a
   220D 02 26 45           4421 	ljmp	00266$
   2210                    4422 00264$:
                           4423 ;	../../shared/src/interrupt.c:892: ce = remote_ctrl_l & 0x3f;
   2210 E5 18              4424 	mov	a,_bp
   2212 24 05              4425 	add	a,#0x05
   2214 F8                 4426 	mov	r0,a
   2215 74 3F              4427 	mov	a,#0x3F
   2217 5F                 4428 	anl	a,r7
   2218 F6                 4429 	mov	@r0,a
                           4430 ;	../../shared/src/interrupt.c:893: if( ce != 0 ) {
   2219 E5 18              4431 	mov	a,_bp
   221B 24 05              4432 	add	a,#0x05
   221D F8                 4433 	mov	r0,a
   221E E6                 4434 	mov	a,@r0
   221F 70 03              4435 	jnz	00444$
   2221 02 26 45           4436 	ljmp	00266$
   2224                    4437 00444$:
                           4438 ;	../../shared/src/interrupt.c:895: for(n=0; n<11; n++) {
   2224 7C 00              4439 	mov	r4,#0x00
   2226                    4440 00169$:
   2226 BC 0B 00           4441 	cjne	r4,#0x0B,00445$
   2229                    4442 00445$:
   2229 50 14              4443 	jnc	00172$
                           4444 ;	../../shared/src/interrupt.c:896: if (ce == valid_coe_tbl[n] ) break;
   222B EC                 4445 	mov	a,r4
   222C 90 28 CD           4446 	mov	dptr,#_valid_coe_tbl
   222F 93                 4447 	movc	a,@a+dptr
   2230 FD                 4448 	mov	r5,a
   2231 E5 18              4449 	mov	a,_bp
   2233 24 05              4450 	add	a,#0x05
   2235 F8                 4451 	mov	r0,a
   2236 E6                 4452 	mov	a,@r0
   2237 B5 15 02           4453 	cjne	a,ar5,00447$
   223A 80 03              4454 	sjmp	00172$
   223C                    4455 00447$:
                           4456 ;	../../shared/src/interrupt.c:895: for(n=0; n<11; n++) {
   223C 0C                 4457 	inc	r4
   223D 80 E7              4458 	sjmp	00169$
   223F                    4459 00172$:
                           4460 ;	../../shared/src/interrupt.c:899: if(n>=11) {
   223F BC 0B 00           4461 	cjne	r4,#0x0B,00448$
   2242                    4462 00448$:
   2242 40 0C              4463 	jc	00259$
                           4464 ;	../../shared/src/interrupt.c:915: lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 1;
   2244 90 60 5A           4465 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   2247 E0                 4466 	movx	a,@dptr
   2248 44 10              4467 	orl	a,#0x10
   224A F0                 4468 	movx	@dptr,a
                           4469 ;	../../shared/src/interrupt.c:916: error_code = RESERVED_COMB_COE_REQ;
   224B 7A 1A              4470 	mov	r2,#0x1A
                           4471 ;	../../shared/src/interrupt.c:917: goto ext_int;
   224D 02 26 45           4472 	ljmp	00266$
   2250                    4473 00259$:
                           4474 ;	../../shared/src/interrupt.c:922: if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing ==> No need to check remote TRAIN_COMP in firmware
   2250 EB                 4475 	mov	a,r3
   2251 30 E7 03           4476 	jnb	acc.7,00450$
   2254 02 27 3F           4477 	ljmp	00291$
   2257                    4478 00450$:
                           4479 ;	../../shared/src/interrupt.c:923: if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing
   2257 EB                 4480 	mov	a,r3
   2258 30 E6 0F           4481 	jnb	acc.6,00176$
   225B 90 A3 16           4482 	mov	dptr,#(_SYSTEM + 0x0002)
   225E E0                 4483 	movx	a,@dptr
   225F 54 07              4484 	anl	a,#0x07
   2261 FB                 4485 	mov	r3,a
   2262 BB 04 02           4486 	cjne	r3,#0x04,00452$
   2265 80 03              4487 	sjmp	00453$
   2267                    4488 00452$:
   2267 02 27 3F           4489 	ljmp	00291$
   226A                    4490 00453$:
   226A                    4491 00176$:
                           4492 ;	../../shared/src/interrupt.c:924: if(txffe_force_en==0) {
   226A 90 67 A4           4493 	mov	dptr,#_txffe_force_en
   226D E0                 4494 	movx	a,@dptr
   226E FB                 4495 	mov	r3,a
   226F 60 03              4496 	jz	00454$
   2271 02 25 03           4497 	ljmp	00218$
   2274                    4498 00454$:
                           4499 ;	../../shared/src/interrupt.c:925: tx_amp_is_max = (tx_amp_index >= tx_amp_max);
   2274 90 26 51           4500 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2277 E0                 4501 	movx	a,@dptr
   2278 C4                 4502 	swap	a
   2279 54 0F              4503 	anl	a,#0x0f
   227B FB                 4504 	mov	r3,a
   227C 90 60 0E           4505 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0002)
   227F E0                 4506 	movx	a,@dptr
   2280 54 0F              4507 	anl	a,#0x0f
   2282 FC                 4508 	mov	r4,a
   2283 EB                 4509 	mov	a,r3
   2284 B5 14 00           4510 	cjne	a,ar4,00455$
   2287                    4511 00455$:
   2287 92 28              4512 	mov  b0,c
   2289 B3                 4513 	cpl	c
   228A 92 17              4514 	mov	_tx_amp_is_max,c
                           4515 ;	../../shared/src/interrupt.c:926: tx_amp_is_min = (tx_amp_index <= tx_amp_min);
   228C 90 26 51           4516 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   228F E0                 4517 	movx	a,@dptr
   2290 C4                 4518 	swap	a
   2291 54 0F              4519 	anl	a,#0x0f
   2293 FB                 4520 	mov	r3,a
   2294 B4 01 00           4521 	cjne	a,#0x01,00456$
   2297                    4522 00456$:
   2297 92 18              4523 	mov	_tx_amp_is_min,c
                           4524 ;	../../shared/src/interrupt.c:927: tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
   2299 90 26 51           4525 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   229C E0                 4526 	movx	a,@dptr
   229D 54 0F              4527 	anl	a,#0x0f
   229F FB                 4528 	mov	r3,a
   22A0 90 60 0F           4529 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   22A3 E0                 4530 	movx	a,@dptr
   22A4 C4                 4531 	swap	a
   22A5 54 0F              4532 	anl	a,#0x0f
   22A7 FC                 4533 	mov	r4,a
   22A8 EB                 4534 	mov	a,r3
   22A9 B5 14 00           4535 	cjne	a,ar4,00457$
   22AC                    4536 00457$:
   22AC 92 28              4537 	mov  b0,c
   22AE B3                 4538 	cpl	c
   22AF 92 19              4539 	mov	_tx_emph0_is_max,c
                           4540 ;	../../shared/src/interrupt.c:928: tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
   22B1 90 26 51           4541 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   22B4 E0                 4542 	movx	a,@dptr
   22B5 54 0F              4543 	anl	a,#0x0f
   22B7 FB                 4544 	mov	r3,a
   22B8 B4 01 00           4545 	cjne	a,#0x01,00458$
   22BB                    4546 00458$:
   22BB 92 1A              4547 	mov	_tx_emph0_is_min,c
                           4548 ;	../../shared/src/interrupt.c:929: tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
   22BD 90 26 50           4549 	mov	dptr,#_LINK_TRAIN_MODE0
   22C0 E0                 4550 	movx	a,@dptr
   22C1 C4                 4551 	swap	a
   22C2 54 0F              4552 	anl	a,#0x0f
   22C4 FB                 4553 	mov	r3,a
   22C5 90 60 0F           4554 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   22C8 E0                 4555 	movx	a,@dptr
   22C9 54 0F              4556 	anl	a,#0x0f
   22CB FC                 4557 	mov	r4,a
   22CC EB                 4558 	mov	a,r3
   22CD B5 14 00           4559 	cjne	a,ar4,00459$
   22D0                    4560 00459$:
   22D0 92 28              4561 	mov  b0,c
   22D2 B3                 4562 	cpl	c
   22D3 92 1B              4563 	mov	_tx_emph1_is_max,c
                           4564 ;	../../shared/src/interrupt.c:930: tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
   22D5 90 26 50           4565 	mov	dptr,#_LINK_TRAIN_MODE0
   22D8 E0                 4566 	movx	a,@dptr
   22D9 C4                 4567 	swap	a
   22DA 54 0F              4568 	anl	a,#0x0f
   22DC FB                 4569 	mov	r3,a
   22DD B4 01 00           4570 	cjne	a,#0x01,00460$
   22E0                    4571 00460$:
   22E0 92 1C              4572 	mov	_tx_emph1_is_min,c
                           4573 ;	../../shared/src/interrupt.c:933: switch (ce) {
   22E2 E5 18              4574 	mov	a,_bp
   22E4 24 05              4575 	add	a,#0x05
   22E6 F8                 4576 	mov	r0,a
   22E7 B6 01 03           4577 	cjne	@r0,#0x01,00461$
   22EA 02 24 5C           4578 	ljmp	00201$
   22ED                    4579 00461$:
   22ED E5 18              4580 	mov	a,_bp
   22EF 24 05              4581 	add	a,#0x05
   22F1 F8                 4582 	mov	r0,a
   22F2 B6 02 03           4583 	cjne	@r0,#0x02,00462$
   22F5 02 24 22           4584 	ljmp	00196$
   22F8                    4585 00462$:
   22F8 E5 18              4586 	mov	a,_bp
   22FA 24 05              4587 	add	a,#0x05
   22FC F8                 4588 	mov	r0,a
   22FD B6 04 03           4589 	cjne	@r0,#0x04,00463$
   2300 02 24 01           4590 	ljmp	00193$
   2303                    4591 00463$:
   2303 E5 18              4592 	mov	a,_bp
   2305 24 05              4593 	add	a,#0x05
   2307 F8                 4594 	mov	r0,a
   2308 B6 05 02           4595 	cjne	@r0,#0x05,00464$
   230B 80 66              4596 	sjmp	00181$
   230D                    4597 00464$:
   230D E5 18              4598 	mov	a,_bp
   230F 24 05              4599 	add	a,#0x05
   2311 F8                 4600 	mov	r0,a
   2312 B6 08 03           4601 	cjne	@r0,#0x08,00465$
   2315 02 23 E0           4602 	ljmp	00190$
   2318                    4603 00465$:
   2318 E5 18              4604 	mov	a,_bp
   231A 24 05              4605 	add	a,#0x05
   231C F8                 4606 	mov	r0,a
   231D B6 0A 02           4607 	cjne	@r0,#0x0A,00466$
   2320 80 2E              4608 	sjmp	00178$
   2322                    4609 00466$:
   2322 E5 18              4610 	mov	a,_bp
   2324 24 05              4611 	add	a,#0x05
   2326 F8                 4612 	mov	r0,a
   2327 B6 10 03           4613 	cjne	@r0,#0x10,00467$
   232A 02 24 CD           4614 	ljmp	00211$
   232D                    4615 00467$:
   232D E5 18              4616 	mov	a,_bp
   232F 24 05              4617 	add	a,#0x05
   2331 F8                 4618 	mov	r0,a
   2332 B6 14 03           4619 	cjne	@r0,#0x14,00468$
   2335 02 23 BB           4620 	ljmp	00187$
   2338                    4621 00468$:
   2338 E5 18              4622 	mov	a,_bp
   233A 24 05              4623 	add	a,#0x05
   233C F8                 4624 	mov	r0,a
   233D B6 20 03           4625 	cjne	@r0,#0x20,00469$
   2340 02 24 95           4626 	ljmp	00206$
   2343                    4627 00469$:
   2343 E5 18              4628 	mov	a,_bp
   2345 24 05              4629 	add	a,#0x05
   2347 F8                 4630 	mov	r0,a
   2348 B6 28 02           4631 	cjne	@r0,#0x28,00470$
   234B 80 49              4632 	sjmp	00184$
   234D                    4633 00470$:
   234D 02 25 03           4634 	ljmp	00218$
                           4635 ;	../../shared/src/interrupt.c:934: case 0x0a: if(tx_emph0_is_max==0) tx_emph0_index++; single_arg = 1; break;
   2350                    4636 00178$:
   2350 20 19 16           4637 	jb	_tx_emph0_is_max,00180$
   2353 90 26 51           4638 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2356 E0                 4639 	movx	a,@dptr
   2357 54 0F              4640 	anl	a,#0x0f
   2359 FB                 4641 	mov	r3,a
   235A 0B                 4642 	inc	r3
   235B 90 26 51           4643 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   235E EB                 4644 	mov	a,r3
   235F 54 0F              4645 	anl	a,#0x0f
   2361 F5 F0              4646 	mov	b,a
   2363 E0                 4647 	movx	a,@dptr
   2364 54 F0              4648 	anl	a,#0xf0
   2366 45 F0              4649 	orl	a,b
   2368 F0                 4650 	movx	@dptr,a
   2369                    4651 00180$:
   2369 E5 18              4652 	mov	a,_bp
   236B 24 08              4653 	add	a,#0x08
   236D F8                 4654 	mov	r0,a
   236E 76 01              4655 	mov	@r0,#0x01
   2370 02 25 03           4656 	ljmp	00218$
                           4657 ;	../../shared/src/interrupt.c:935: case 0x05: if(tx_emph0_is_min==0) tx_emph0_index--; single_arg = 1; break;
   2373                    4658 00181$:
   2373 20 1A 16           4659 	jb	_tx_emph0_is_min,00183$
   2376 90 26 51           4660 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2379 E0                 4661 	movx	a,@dptr
   237A 54 0F              4662 	anl	a,#0x0f
   237C FB                 4663 	mov	r3,a
   237D 1B                 4664 	dec	r3
   237E 90 26 51           4665 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2381 EB                 4666 	mov	a,r3
   2382 54 0F              4667 	anl	a,#0x0f
   2384 F5 F0              4668 	mov	b,a
   2386 E0                 4669 	movx	a,@dptr
   2387 54 F0              4670 	anl	a,#0xf0
   2389 45 F0              4671 	orl	a,b
   238B F0                 4672 	movx	@dptr,a
   238C                    4673 00183$:
   238C E5 18              4674 	mov	a,_bp
   238E 24 08              4675 	add	a,#0x08
   2390 F8                 4676 	mov	r0,a
   2391 76 01              4677 	mov	@r0,#0x01
   2393 02 25 03           4678 	ljmp	00218$
                           4679 ;	../../shared/src/interrupt.c:936: case 0x28: if(tx_emph1_is_max==0) tx_emph1_index++; single_arg = 2; break;
   2396                    4680 00184$:
   2396 20 1B 18           4681 	jb	_tx_emph1_is_max,00186$
   2399 90 26 50           4682 	mov	dptr,#_LINK_TRAIN_MODE0
   239C E0                 4683 	movx	a,@dptr
   239D C4                 4684 	swap	a
   239E 54 0F              4685 	anl	a,#0x0f
   23A0 FB                 4686 	mov	r3,a
   23A1 0B                 4687 	inc	r3
   23A2 90 26 50           4688 	mov	dptr,#_LINK_TRAIN_MODE0
   23A5 EB                 4689 	mov	a,r3
   23A6 C4                 4690 	swap	a
   23A7 54 F0              4691 	anl	a,#(0xf0&0xf0)
   23A9 F5 F0              4692 	mov	b,a
   23AB E0                 4693 	movx	a,@dptr
   23AC 54 0F              4694 	anl	a,#0x0f
   23AE 45 F0              4695 	orl	a,b
   23B0 F0                 4696 	movx	@dptr,a
   23B1                    4697 00186$:
   23B1 E5 18              4698 	mov	a,_bp
   23B3 24 08              4699 	add	a,#0x08
   23B5 F8                 4700 	mov	r0,a
   23B6 76 02              4701 	mov	@r0,#0x02
   23B8 02 25 03           4702 	ljmp	00218$
                           4703 ;	../../shared/src/interrupt.c:937: case 0x14: if(tx_emph1_is_min==0) tx_emph1_index--; single_arg = 2; break;
   23BB                    4704 00187$:
   23BB 20 1C 18           4705 	jb	_tx_emph1_is_min,00189$
   23BE 90 26 50           4706 	mov	dptr,#_LINK_TRAIN_MODE0
   23C1 E0                 4707 	movx	a,@dptr
   23C2 C4                 4708 	swap	a
   23C3 54 0F              4709 	anl	a,#0x0f
   23C5 FB                 4710 	mov	r3,a
   23C6 1B                 4711 	dec	r3
   23C7 90 26 50           4712 	mov	dptr,#_LINK_TRAIN_MODE0
   23CA EB                 4713 	mov	a,r3
   23CB C4                 4714 	swap	a
   23CC 54 F0              4715 	anl	a,#(0xf0&0xf0)
   23CE F5 F0              4716 	mov	b,a
   23D0 E0                 4717 	movx	a,@dptr
   23D1 54 0F              4718 	anl	a,#0x0f
   23D3 45 F0              4719 	orl	a,b
   23D5 F0                 4720 	movx	@dptr,a
   23D6                    4721 00189$:
   23D6 E5 18              4722 	mov	a,_bp
   23D8 24 08              4723 	add	a,#0x08
   23DA F8                 4724 	mov	r0,a
   23DB 76 02              4725 	mov	@r0,#0x02
   23DD 02 25 03           4726 	ljmp	00218$
                           4727 ;	../../shared/src/interrupt.c:938: case 0x08: if(tx_amp_is_max==0)   tx_amp_index++;   break;
   23E0                    4728 00190$:
   23E0 30 17 03           4729 	jnb	_tx_amp_is_max,00475$
   23E3 02 25 03           4730 	ljmp	00218$
   23E6                    4731 00475$:
   23E6 90 26 51           4732 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   23E9 E0                 4733 	movx	a,@dptr
   23EA C4                 4734 	swap	a
   23EB 54 0F              4735 	anl	a,#0x0f
   23ED FB                 4736 	mov	r3,a
   23EE 0B                 4737 	inc	r3
   23EF 90 26 51           4738 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   23F2 EB                 4739 	mov	a,r3
   23F3 C4                 4740 	swap	a
   23F4 54 F0              4741 	anl	a,#(0xf0&0xf0)
   23F6 F5 F0              4742 	mov	b,a
   23F8 E0                 4743 	movx	a,@dptr
   23F9 54 0F              4744 	anl	a,#0x0f
   23FB 45 F0              4745 	orl	a,b
   23FD F0                 4746 	movx	@dptr,a
   23FE 02 25 03           4747 	ljmp	00218$
                           4748 ;	../../shared/src/interrupt.c:939: case 0x04: if(tx_amp_is_min==0)   tx_amp_index--;   break;
   2401                    4749 00193$:
   2401 30 18 03           4750 	jnb	_tx_amp_is_min,00476$
   2404 02 25 03           4751 	ljmp	00218$
   2407                    4752 00476$:
   2407 90 26 51           4753 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   240A E0                 4754 	movx	a,@dptr
   240B C4                 4755 	swap	a
   240C 54 0F              4756 	anl	a,#0x0f
   240E FB                 4757 	mov	r3,a
   240F 1B                 4758 	dec	r3
   2410 90 26 51           4759 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2413 EB                 4760 	mov	a,r3
   2414 C4                 4761 	swap	a
   2415 54 F0              4762 	anl	a,#(0xf0&0xf0)
   2417 F5 F0              4763 	mov	b,a
   2419 E0                 4764 	movx	a,@dptr
   241A 54 0F              4765 	anl	a,#0x0f
   241C 45 F0              4766 	orl	a,b
   241E F0                 4767 	movx	@dptr,a
   241F 02 25 03           4768 	ljmp	00218$
                           4769 ;	../../shared/src/interrupt.c:940: case 0x02: if( tx_emph0_is_max==0) {
   2422                    4770 00196$:
   2422 30 19 03           4771 	jnb	_tx_emph0_is_max,00477$
   2425 02 25 03           4772 	ljmp	00218$
   2428                    4773 00477$:
                           4774 ;	../../shared/src/interrupt.c:941: if(tx_amp_is_min==0)tx_amp_index--;
   2428 20 18 18           4775 	jb	_tx_amp_is_min,00198$
   242B 90 26 51           4776 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   242E E0                 4777 	movx	a,@dptr
   242F C4                 4778 	swap	a
   2430 54 0F              4779 	anl	a,#0x0f
   2432 FB                 4780 	mov	r3,a
   2433 1B                 4781 	dec	r3
   2434 90 26 51           4782 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2437 EB                 4783 	mov	a,r3
   2438 C4                 4784 	swap	a
   2439 54 F0              4785 	anl	a,#(0xf0&0xf0)
   243B F5 F0              4786 	mov	b,a
   243D E0                 4787 	movx	a,@dptr
   243E 54 0F              4788 	anl	a,#0x0f
   2440 45 F0              4789 	orl	a,b
   2442 F0                 4790 	movx	@dptr,a
   2443                    4791 00198$:
                           4792 ;	../../shared/src/interrupt.c:942: tx_emph0_index++;
   2443 90 26 51           4793 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2446 E0                 4794 	movx	a,@dptr
   2447 54 0F              4795 	anl	a,#0x0f
   2449 FB                 4796 	mov	r3,a
   244A 0B                 4797 	inc	r3
   244B 90 26 51           4798 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   244E EB                 4799 	mov	a,r3
   244F 54 0F              4800 	anl	a,#0x0f
   2451 F5 F0              4801 	mov	b,a
   2453 E0                 4802 	movx	a,@dptr
   2454 54 F0              4803 	anl	a,#0xf0
   2456 45 F0              4804 	orl	a,b
   2458 F0                 4805 	movx	@dptr,a
                           4806 ;	../../shared/src/interrupt.c:945: break;
   2459 02 25 03           4807 	ljmp	00218$
                           4808 ;	../../shared/src/interrupt.c:946: case 0x01: if(tx_emph0_is_min==0) {
   245C                    4809 00201$:
   245C 30 1A 03           4810 	jnb	_tx_emph0_is_min,00479$
   245F 02 25 03           4811 	ljmp	00218$
   2462                    4812 00479$:
                           4813 ;	../../shared/src/interrupt.c:947: if(tx_amp_is_max==0) tx_amp_index++; 
   2462 20 17 18           4814 	jb	_tx_amp_is_max,00203$
   2465 90 26 51           4815 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2468 E0                 4816 	movx	a,@dptr
   2469 C4                 4817 	swap	a
   246A 54 0F              4818 	anl	a,#0x0f
   246C FB                 4819 	mov	r3,a
   246D 0B                 4820 	inc	r3
   246E 90 26 51           4821 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2471 EB                 4822 	mov	a,r3
   2472 C4                 4823 	swap	a
   2473 54 F0              4824 	anl	a,#(0xf0&0xf0)
   2475 F5 F0              4825 	mov	b,a
   2477 E0                 4826 	movx	a,@dptr
   2478 54 0F              4827 	anl	a,#0x0f
   247A 45 F0              4828 	orl	a,b
   247C F0                 4829 	movx	@dptr,a
   247D                    4830 00203$:
                           4831 ;	../../shared/src/interrupt.c:948: tx_emph0_index--;
   247D 90 26 51           4832 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2480 E0                 4833 	movx	a,@dptr
   2481 54 0F              4834 	anl	a,#0x0f
   2483 FB                 4835 	mov	r3,a
   2484 1B                 4836 	dec	r3
   2485 90 26 51           4837 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2488 EB                 4838 	mov	a,r3
   2489 54 0F              4839 	anl	a,#0x0f
   248B F5 F0              4840 	mov	b,a
   248D E0                 4841 	movx	a,@dptr
   248E 54 F0              4842 	anl	a,#0xf0
   2490 45 F0              4843 	orl	a,b
   2492 F0                 4844 	movx	@dptr,a
                           4845 ;	../../shared/src/interrupt.c:951: break;
                           4846 ;	../../shared/src/interrupt.c:952: case 0x20: if(tx_emph1_is_max==0) {
   2493 80 6E              4847 	sjmp	00218$
   2495                    4848 00206$:
   2495 20 1B 6B           4849 	jb	_tx_emph1_is_max,00218$
                           4850 ;	../../shared/src/interrupt.c:953: tx_emph1_index++;
   2498 90 26 50           4851 	mov	dptr,#_LINK_TRAIN_MODE0
   249B E0                 4852 	movx	a,@dptr
   249C C4                 4853 	swap	a
   249D 54 0F              4854 	anl	a,#0x0f
   249F FB                 4855 	mov	r3,a
   24A0 0B                 4856 	inc	r3
   24A1 90 26 50           4857 	mov	dptr,#_LINK_TRAIN_MODE0
   24A4 EB                 4858 	mov	a,r3
   24A5 C4                 4859 	swap	a
   24A6 54 F0              4860 	anl	a,#(0xf0&0xf0)
   24A8 F5 F0              4861 	mov	b,a
   24AA E0                 4862 	movx	a,@dptr
   24AB 54 0F              4863 	anl	a,#0x0f
   24AD 45 F0              4864 	orl	a,b
   24AF F0                 4865 	movx	@dptr,a
                           4866 ;	../../shared/src/interrupt.c:954: if(tx_amp_is_min==0) tx_amp_index--;   
   24B0 20 18 50           4867 	jb	_tx_amp_is_min,00218$
   24B3 90 26 51           4868 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24B6 E0                 4869 	movx	a,@dptr
   24B7 C4                 4870 	swap	a
   24B8 54 0F              4871 	anl	a,#0x0f
   24BA FB                 4872 	mov	r3,a
   24BB 1B                 4873 	dec	r3
   24BC 90 26 51           4874 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24BF EB                 4875 	mov	a,r3
   24C0 C4                 4876 	swap	a
   24C1 54 F0              4877 	anl	a,#(0xf0&0xf0)
   24C3 F5 F0              4878 	mov	b,a
   24C5 E0                 4879 	movx	a,@dptr
   24C6 54 0F              4880 	anl	a,#0x0f
   24C8 45 F0              4881 	orl	a,b
   24CA F0                 4882 	movx	@dptr,a
                           4883 ;	../../shared/src/interrupt.c:957: break;
                           4884 ;	../../shared/src/interrupt.c:958: case 0x10: if(tx_emph1_is_min==0) {
   24CB 80 36              4885 	sjmp	00218$
   24CD                    4886 00211$:
   24CD 20 1C 33           4887 	jb	_tx_emph1_is_min,00218$
                           4888 ;	../../shared/src/interrupt.c:959: tx_emph1_index--; 
   24D0 90 26 50           4889 	mov	dptr,#_LINK_TRAIN_MODE0
   24D3 E0                 4890 	movx	a,@dptr
   24D4 C4                 4891 	swap	a
   24D5 54 0F              4892 	anl	a,#0x0f
   24D7 FB                 4893 	mov	r3,a
   24D8 1B                 4894 	dec	r3
   24D9 90 26 50           4895 	mov	dptr,#_LINK_TRAIN_MODE0
   24DC EB                 4896 	mov	a,r3
   24DD C4                 4897 	swap	a
   24DE 54 F0              4898 	anl	a,#(0xf0&0xf0)
   24E0 F5 F0              4899 	mov	b,a
   24E2 E0                 4900 	movx	a,@dptr
   24E3 54 0F              4901 	anl	a,#0x0f
   24E5 45 F0              4902 	orl	a,b
   24E7 F0                 4903 	movx	@dptr,a
                           4904 ;	../../shared/src/interrupt.c:960: if(tx_amp_is_max==0) tx_amp_index++;
   24E8 20 17 18           4905 	jb	_tx_amp_is_max,00218$
   24EB 90 26 51           4906 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24EE E0                 4907 	movx	a,@dptr
   24EF C4                 4908 	swap	a
   24F0 54 0F              4909 	anl	a,#0x0f
   24F2 FB                 4910 	mov	r3,a
   24F3 0B                 4911 	inc	r3
   24F4 90 26 51           4912 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   24F7 EB                 4913 	mov	a,r3
   24F8 C4                 4914 	swap	a
   24F9 54 F0              4915 	anl	a,#(0xf0&0xf0)
   24FB F5 F0              4916 	mov	b,a
   24FD E0                 4917 	movx	a,@dptr
   24FE 54 0F              4918 	anl	a,#0x0f
   2500 45 F0              4919 	orl	a,b
   2502 F0                 4920 	movx	@dptr,a
                           4921 ;	../../shared/src/interrupt.c:964: }
   2503                    4922 00218$:
                           4923 ;	../../shared/src/interrupt.c:967: tx_amp_is_max = (tx_amp_index >= tx_amp_max);
   2503 90 26 51           4924 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2506 E0                 4925 	movx	a,@dptr
   2507 C4                 4926 	swap	a
   2508 54 0F              4927 	anl	a,#0x0f
   250A FB                 4928 	mov	r3,a
   250B 90 60 0E           4929 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0002)
   250E E0                 4930 	movx	a,@dptr
   250F 54 0F              4931 	anl	a,#0x0f
   2511 FC                 4932 	mov	r4,a
   2512 EB                 4933 	mov	a,r3
   2513 B5 14 00           4934 	cjne	a,ar4,00485$
   2516                    4935 00485$:
   2516 92 28              4936 	mov  b0,c
   2518 B3                 4937 	cpl	c
   2519 92 17              4938 	mov	_tx_amp_is_max,c
                           4939 ;	../../shared/src/interrupt.c:968: tx_amp_is_min = (tx_amp_index <= tx_amp_min);
   251B 90 26 51           4940 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   251E E0                 4941 	movx	a,@dptr
   251F C4                 4942 	swap	a
   2520 54 0F              4943 	anl	a,#0x0f
   2522 FB                 4944 	mov	r3,a
   2523 B4 01 00           4945 	cjne	a,#0x01,00486$
   2526                    4946 00486$:
   2526 92 18              4947 	mov	_tx_amp_is_min,c
                           4948 ;	../../shared/src/interrupt.c:969: tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
   2528 90 26 51           4949 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   252B E0                 4950 	movx	a,@dptr
   252C 54 0F              4951 	anl	a,#0x0f
   252E FB                 4952 	mov	r3,a
   252F 90 60 0F           4953 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   2532 E0                 4954 	movx	a,@dptr
   2533 C4                 4955 	swap	a
   2534 54 0F              4956 	anl	a,#0x0f
   2536 FC                 4957 	mov	r4,a
   2537 EB                 4958 	mov	a,r3
   2538 B5 14 00           4959 	cjne	a,ar4,00487$
   253B                    4960 00487$:
   253B 92 28              4961 	mov  b0,c
   253D B3                 4962 	cpl	c
   253E 92 19              4963 	mov	_tx_emph0_is_max,c
                           4964 ;	../../shared/src/interrupt.c:970: tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
   2540 90 26 51           4965 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   2543 E0                 4966 	movx	a,@dptr
   2544 54 0F              4967 	anl	a,#0x0f
   2546 FB                 4968 	mov	r3,a
   2547 B4 01 00           4969 	cjne	a,#0x01,00488$
   254A                    4970 00488$:
   254A 92 1A              4971 	mov	_tx_emph0_is_min,c
                           4972 ;	../../shared/src/interrupt.c:971: tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
   254C 90 26 50           4973 	mov	dptr,#_LINK_TRAIN_MODE0
   254F E0                 4974 	movx	a,@dptr
   2550 C4                 4975 	swap	a
   2551 54 0F              4976 	anl	a,#0x0f
   2553 FB                 4977 	mov	r3,a
   2554 90 60 0F           4978 	mov	dptr,#(_CAL_CTRL4_LANE + 0x0003)
   2557 E0                 4979 	movx	a,@dptr
   2558 54 0F              4980 	anl	a,#0x0f
   255A FC                 4981 	mov	r4,a
   255B EB                 4982 	mov	a,r3
   255C B5 14 00           4983 	cjne	a,ar4,00489$
   255F                    4984 00489$:
   255F 92 28              4985 	mov  b0,c
   2561 B3                 4986 	cpl	c
   2562 92 1B              4987 	mov	_tx_emph1_is_max,c
                           4988 ;	../../shared/src/interrupt.c:972: tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
   2564 90 26 50           4989 	mov	dptr,#_LINK_TRAIN_MODE0
   2567 E0                 4990 	movx	a,@dptr
   2568 C4                 4991 	swap	a
   2569 54 0F              4992 	anl	a,#0x0f
   256B FB                 4993 	mov	r3,a
   256C B4 01 00           4994 	cjne	a,#0x01,00490$
   256F                    4995 00490$:
   256F 92 1C              4996 	mov	_tx_emph1_is_min,c
                           4997 ;	../../shared/src/interrupt.c:975: if( c1 == INC ) {
   2571 E5 18              4998 	mov	a,_bp
   2573 24 03              4999 	add	a,#0x03
   2575 F8                 5000 	mov	r0,a
   2576 B6 01 11           5001 	cjne	@r0,#0x01,00228$
                           5002 ;	../../shared/src/interrupt.c:976: if(tx_emph1_is_min) rm_stat |= C1_is_max;
   2579 30 1C 07           5003 	jnb	_tx_emph1_is_min,00220$
   257C A8 18              5004 	mov	r0,_bp
   257E 08                 5005 	inc	r0
   257F 76 30              5006 	mov	@r0,#0x30
   2581 80 1E              5007 	sjmp	00229$
   2583                    5008 00220$:
                           5009 ;	../../shared/src/interrupt.c:977: else rm_stat |= C1_updated;
   2583 A8 18              5010 	mov	r0,_bp
   2585 08                 5011 	inc	r0
   2586 76 10              5012 	mov	@r0,#0x10
   2588 80 17              5013 	sjmp	00229$
   258A                    5014 00228$:
                           5015 ;	../../shared/src/interrupt.c:979: else if( c1 == DEC ) {
   258A E5 18              5016 	mov	a,_bp
   258C 24 03              5017 	add	a,#0x03
   258E F8                 5018 	mov	r0,a
   258F B6 02 0F           5019 	cjne	@r0,#0x02,00229$
                           5020 ;	../../shared/src/interrupt.c:980: if (tx_emph1_is_max) rm_stat |= C1_is_min;
   2592 30 1B 07           5021 	jnb	_tx_emph1_is_max,00223$
   2595 A8 18              5022 	mov	r0,_bp
   2597 08                 5023 	inc	r0
   2598 76 20              5024 	mov	@r0,#0x20
   259A 80 05              5025 	sjmp	00229$
   259C                    5026 00223$:
                           5027 ;	../../shared/src/interrupt.c:981: else rm_stat |= C1_updated;
   259C A8 18              5028 	mov	r0,_bp
   259E 08                 5029 	inc	r0
   259F 76 10              5030 	mov	@r0,#0x10
   25A1                    5031 00229$:
                           5032 ;	../../shared/src/interrupt.c:984: if( single_arg == 0 ) {
   25A1 E5 18              5033 	mov	a,_bp
   25A3 24 08              5034 	add	a,#0x08
   25A5 F8                 5035 	mov	r0,a
   25A6 E6                 5036 	mov	a,@r0
   25A7 70 36              5037 	jnz	00242$
                           5038 ;	../../shared/src/interrupt.c:985: if( c0 == INC ) {
   25A9 A8 18              5039 	mov	r0,_bp
   25AB 08                 5040 	inc	r0
   25AC 08                 5041 	inc	r0
   25AD B6 01 15           5042 	cjne	@r0,#0x01,00239$
                           5043 ;	../../shared/src/interrupt.c:986: if(tx_amp_is_min ) rm_stat |= C0_is_max;
   25B0 30 18 09           5044 	jnb	_tx_amp_is_min,00231$
   25B3 A8 18              5045 	mov	r0,_bp
   25B5 08                 5046 	inc	r0
   25B6 E6                 5047 	mov	a,@r0
   25B7 44 0C              5048 	orl	a,#0x0C
   25B9 F6                 5049 	mov	@r0,a
   25BA 80 23              5050 	sjmp	00242$
   25BC                    5051 00231$:
                           5052 ;	../../shared/src/interrupt.c:987: else rm_stat |= C0_updated;
   25BC A8 18              5053 	mov	r0,_bp
   25BE 08                 5054 	inc	r0
   25BF E6                 5055 	mov	a,@r0
   25C0 44 04              5056 	orl	a,#0x04
   25C2 F6                 5057 	mov	@r0,a
   25C3 80 1A              5058 	sjmp	00242$
   25C5                    5059 00239$:
                           5060 ;	../../shared/src/interrupt.c:989: else if( c0 == DEC ) {
   25C5 A8 18              5061 	mov	r0,_bp
   25C7 08                 5062 	inc	r0
   25C8 08                 5063 	inc	r0
   25C9 B6 02 13           5064 	cjne	@r0,#0x02,00242$
                           5065 ;	../../shared/src/interrupt.c:990: if(tx_amp_is_max ) rm_stat |= C0_is_min;
   25CC 30 17 09           5066 	jnb	_tx_amp_is_max,00234$
   25CF A8 18              5067 	mov	r0,_bp
   25D1 08                 5068 	inc	r0
   25D2 E6                 5069 	mov	a,@r0
   25D3 44 08              5070 	orl	a,#0x08
   25D5 F6                 5071 	mov	@r0,a
   25D6 80 07              5072 	sjmp	00242$
   25D8                    5073 00234$:
                           5074 ;	../../shared/src/interrupt.c:991: else rm_stat |= C0_updated;
   25D8 A8 18              5075 	mov	r0,_bp
   25DA 08                 5076 	inc	r0
   25DB E6                 5077 	mov	a,@r0
   25DC 44 04              5078 	orl	a,#0x04
   25DE F6                 5079 	mov	@r0,a
   25DF                    5080 00242$:
                           5081 ;	../../shared/src/interrupt.c:995: if( cn1 == INC ) {
   25DF E5 18              5082 	mov	a,_bp
   25E1 24 04              5083 	add	a,#0x04
   25E3 F8                 5084 	mov	r0,a
   25E4 B6 01 15           5085 	cjne	@r0,#0x01,00252$
                           5086 ;	../../shared/src/interrupt.c:996: if(tx_emph0_is_min) rm_stat |= Cn1_is_max;
   25E7 30 1A 09           5087 	jnb	_tx_emph0_is_min,00244$
   25EA A8 18              5088 	mov	r0,_bp
   25EC 08                 5089 	inc	r0
   25ED E6                 5090 	mov	a,@r0
   25EE 44 03              5091 	orl	a,#0x03
   25F0 F6                 5092 	mov	@r0,a
   25F1 80 24              5093 	sjmp	00253$
   25F3                    5094 00244$:
                           5095 ;	../../shared/src/interrupt.c:997: else rm_stat |= Cn1_updated;
   25F3 A8 18              5096 	mov	r0,_bp
   25F5 08                 5097 	inc	r0
   25F6 E6                 5098 	mov	a,@r0
   25F7 44 01              5099 	orl	a,#0x01
   25F9 F6                 5100 	mov	@r0,a
   25FA 80 1B              5101 	sjmp	00253$
   25FC                    5102 00252$:
                           5103 ;	../../shared/src/interrupt.c:999: else if( cn1 == DEC ) {
   25FC E5 18              5104 	mov	a,_bp
   25FE 24 04              5105 	add	a,#0x04
   2600 F8                 5106 	mov	r0,a
   2601 B6 02 13           5107 	cjne	@r0,#0x02,00253$
                           5108 ;	../../shared/src/interrupt.c:1000: if(tx_emph0_is_max) rm_stat |= Cn1_is_min;
   2604 30 19 09           5109 	jnb	_tx_emph0_is_max,00247$
   2607 A8 18              5110 	mov	r0,_bp
   2609 08                 5111 	inc	r0
   260A E6                 5112 	mov	a,@r0
   260B 44 02              5113 	orl	a,#0x02
   260D F6                 5114 	mov	@r0,a
   260E 80 07              5115 	sjmp	00253$
   2610                    5116 00247$:
                           5117 ;	../../shared/src/interrupt.c:1001: else rm_stat |= Cn1_updated;
   2610 A8 18              5118 	mov	r0,_bp
   2612 08                 5119 	inc	r0
   2613 E6                 5120 	mov	a,@r0
   2614 44 01              5121 	orl	a,#0x01
   2616 F6                 5122 	mov	@r0,a
   2617                    5123 00253$:
                           5124 ;	../../shared/src/interrupt.c:1004: if( single_arg == 1 ) rm_stat |= (rm_stat<<2);
   2617 E5 18              5125 	mov	a,_bp
   2619 24 08              5126 	add	a,#0x08
   261B F8                 5127 	mov	r0,a
   261C B6 01 0F           5128 	cjne	@r0,#0x01,00255$
   261F A8 18              5129 	mov	r0,_bp
   2621 08                 5130 	inc	r0
   2622 E6                 5131 	mov	a,@r0
   2623 25 E0              5132 	add	a,acc
   2625 25 E0              5133 	add	a,acc
   2627 FB                 5134 	mov	r3,a
   2628 A8 18              5135 	mov	r0,_bp
   262A 08                 5136 	inc	r0
   262B EB                 5137 	mov	a,r3
   262C 46                 5138 	orl	a,@r0
   262D F6                 5139 	mov	@r0,a
   262E                    5140 00255$:
                           5141 ;	../../shared/src/interrupt.c:1005: if( single_arg == 2 ) rm_stat |= (rm_stat>>2);
   262E E5 18              5142 	mov	a,_bp
   2630 24 08              5143 	add	a,#0x08
   2632 F8                 5144 	mov	r0,a
   2633 B6 02 0F           5145 	cjne	@r0,#0x02,00266$
   2636 A8 18              5146 	mov	r0,_bp
   2638 08                 5147 	inc	r0
   2639 E6                 5148 	mov	a,@r0
   263A 03                 5149 	rr	a
   263B 03                 5150 	rr	a
   263C 54 3F              5151 	anl	a,#0x3f
   263E FB                 5152 	mov	r3,a
   263F A8 18              5153 	mov	r0,_bp
   2641 08                 5154 	inc	r0
   2642 EB                 5155 	mov	a,r3
   2643 46                 5156 	orl	a,@r0
   2644 F6                 5157 	mov	@r0,a
                           5158 ;	../../shared/src/interrupt.c:1016: ext_int:
   2645                    5159 00266$:
                           5160 ;	../../shared/src/interrupt.c:1018: if(error_code>0 && phy_mode<=SAS) { //send error code  
   2645 EA                 5161 	mov	a,r2
   2646 70 03              5162 	jnz	00514$
   2648 02 26 D7           5163 	ljmp	00277$
   264B                    5164 00514$:
   264B 90 A3 16           5165 	mov	dptr,#(_SYSTEM + 0x0002)
   264E E0                 5166 	movx	a,@dptr
   264F 54 07              5167 	anl	a,#0x07
   2651 FB                 5168 	mov	r3,a
   2652 C3                 5169 	clr	c
   2653 74 81              5170 	mov	a,#(0x01 ^ 0x80)
   2655 8B F0              5171 	mov	b,r3
   2657 63 F0 80           5172 	xrl	b,#0x80
   265A 95 F0              5173 	subb	a,b
   265C 50 03              5174 	jnc	00515$
   265E 02 26 D7           5175 	ljmp	00277$
   2661                    5176 00515$:
                           5177 ;	../../shared/src/interrupt.c:1021: reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (remote_ctrl_h&0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000;
   2661 74 0C              5178 	mov	a,#0x0C
   2663 5E                 5179 	anl	a,r6
   2664 44 E0              5180 	orl	a,#0xE0
   2666 90 26 07           5181 	mov	dptr,#(_DME_ENC_REG1 + 0x0003)
   2669 F0                 5182 	movx	@dptr,a
                           5183 ;	../../shared/src/interrupt.c:1022: reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = remote_ctrl_l&0x3f;
   266A 53 17 3F           5184 	anl	ar7,#0x3F
   266D 90 26 06           5185 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   2670 EF                 5186 	mov	a,r7
   2671 F0                 5187 	movx	@dptr,a
                           5188 ;	../../shared/src/interrupt.c:1024: reg_LOCAL_STATUS_FIELD_LANE_15_0 = error_code;
   2672 7B 00              5189 	mov	r3,#0x00
   2674 90 26 04           5190 	mov	dptr,#_DME_ENC_REG1
   2677 EA                 5191 	mov	a,r2
   2678 F0                 5192 	movx	@dptr,a
   2679 A3                 5193 	inc	dptr
   267A EB                 5194 	mov	a,r3
   267B F0                 5195 	movx	@dptr,a
                           5196 ;	../../shared/src/interrupt.c:1025: reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;
   267C 90 26 00           5197 	mov	dptr,#_DME_ENC_REG0
   267F E0                 5198 	movx	a,@dptr
   2680 44 20              5199 	orl	a,#0x20
   2682 F0                 5200 	movx	@dptr,a
   2683 E0                 5201 	movx	a,@dptr
   2684 54 DF              5202 	anl	a,#0xdf
   2686 F0                 5203 	movx	@dptr,a
                           5204 ;	../../shared/src/interrupt.c:1026: lnx_ERROR_TTIU_DETECTED_LANE = 1;
   2687 90 60 0A           5205 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   268A E0                 5206 	movx	a,@dptr
   268B 44 01              5207 	orl	a,#0x01
   268D F0                 5208 	movx	@dptr,a
                           5209 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   268E 7A 0E              5210 	mov	r2,#0x0E
   2690 7B 00              5211 	mov	r3,#0x00
   2692                    5212 00295$:
                           5213 ;	../../shared/src/interrupt.c:29: __endasm;
                           5214 	
   2692 00                 5215 	  nop
   2693 00                 5216 	  nop
   2694 00                 5217 	  nop
   2695 00                 5218 	  nop
   2696 00                 5219 	  nop
   2697 00                 5220 	  nop
   2698 00                 5221 	  nop
   2699 00                 5222 	  nop
   269A 00                 5223 	  nop
   269B 00                 5224 	  nop
                           5225 	 
   269C 1A                 5226 	dec	r2
   269D BA FF 01           5227 	cjne	r2,#0xff,00516$
   26A0 1B                 5228 	dec	r3
   26A1                    5229 00516$:
                           5230 ;	../../shared/src/interrupt.c:16: for (i=0; i<14; i++) {
   26A1 EA                 5231 	mov	a,r2
   26A2 4B                 5232 	orl	a,r3
   26A3 60 03              5233 	jz	00517$
   26A5 02 26 92           5234 	ljmp	00295$
   26A8                    5235 00517$:
                           5236 ;	../../shared/src/interrupt.c:1030: reg_LOCAL_CTRL_FIELD_LANE_15_0 = pre_local_ctrl;
   26A8 90 67 9C           5237 	mov	dptr,#_pre_local_ctrl
   26AB E0                 5238 	movx	a,@dptr
   26AC FA                 5239 	mov	r2,a
   26AD A3                 5240 	inc	dptr
   26AE E0                 5241 	movx	a,@dptr
   26AF FB                 5242 	mov	r3,a
   26B0 90 26 06           5243 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   26B3 EA                 5244 	mov	a,r2
   26B4 F0                 5245 	movx	@dptr,a
   26B5 A3                 5246 	inc	dptr
   26B6 EB                 5247 	mov	a,r3
   26B7 F0                 5248 	movx	@dptr,a
                           5249 ;	../../shared/src/interrupt.c:1031: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   26B8 90 26 04           5250 	mov	dptr,#_DME_ENC_REG1
   26BB E4                 5251 	clr	a
   26BC F0                 5252 	movx	@dptr,a
   26BD A3                 5253 	inc	dptr
   26BE F0                 5254 	movx	@dptr,a
                           5255 ;	../../shared/src/interrupt.c:1032: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
                           5256 ;	../../shared/src/interrupt.c:1033: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   26BF 90 26 7A           5257 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   26C2 E0                 5258 	movx	a,@dptr
   26C3 44 40              5259 	orl	a,#0x40
   26C5 F0                 5260 	movx	@dptr,a
   26C6 E0                 5261 	movx	a,@dptr
   26C7 54 BF              5262 	anl	a,#0xbf
   26C9 F0                 5263 	movx	@dptr,a
   26CA E0                 5264 	movx	a,@dptr
   26CB 44 20              5265 	orl	a,#0x20
   26CD F0                 5266 	movx	@dptr,a
   26CE 90 26 7A           5267 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   26D1 E0                 5268 	movx	a,@dptr
   26D2 54 DF              5269 	anl	a,#0xdf
   26D4 F0                 5270 	movx	@dptr,a
   26D5 80 68              5271 	sjmp	00291$
   26D7                    5272 00277$:
                           5273 ;	../../shared/src/interrupt.c:1049: reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)rm_stat;
   26D7 A8 18              5274 	mov	r0,_bp
   26D9 08                 5275 	inc	r0
   26DA 86 12              5276 	mov	ar2,@r0
   26DC 7B 00              5277 	mov	r3,#0x00
   26DE 90 26 04           5278 	mov	dptr,#_DME_ENC_REG1
   26E1 EA                 5279 	mov	a,r2
   26E2 F0                 5280 	movx	@dptr,a
   26E3 A3                 5281 	inc	dptr
   26E4 EB                 5282 	mov	a,r3
   26E5 F0                 5283 	movx	@dptr,a
                           5284 ;	../../shared/src/interrupt.c:1050: if( link_train_mode==0 && do_tx_apta==0) {
   26E6 90 26 7B           5285 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   26E9 E0                 5286 	movx	a,@dptr
   26EA 20 E7 40           5287 	jb	acc.7,00274$
   26ED 20 0A 3D           5288 	jb	_do_tx_apta,00274$
                           5289 ;	../../shared/src/interrupt.c:1051: if( train_comp ) reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x80;
   26F0 90 67 11           5290 	mov	dptr,#_train_comp
   26F3 E0                 5291 	movx	a,@dptr
   26F4 FA                 5292 	mov	r2,a
   26F5 60 0F              5293 	jz	00271$
   26F7 90 26 05           5294 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   26FA E0                 5295 	movx	a,@dptr
   26FB FA                 5296 	mov	r2,a
   26FC 43 12 80           5297 	orl	ar2,#0x80
   26FF 90 26 05           5298 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   2702 EA                 5299 	mov	a,r2
   2703 F0                 5300 	movx	@dptr,a
   2704 80 27              5301 	sjmp	00274$
   2706                    5302 00271$:
                           5303 ;	../../shared/src/interrupt.c:1052: else if( tx_init_bit && phy_mode<=SAS)
   2706 90 67 10           5304 	mov	dptr,#_tx_init_bit
   2709 E0                 5305 	movx	a,@dptr
   270A FA                 5306 	mov	r2,a
   270B 60 20              5307 	jz	00274$
   270D 90 A3 16           5308 	mov	dptr,#(_SYSTEM + 0x0002)
   2710 E0                 5309 	movx	a,@dptr
   2711 54 07              5310 	anl	a,#0x07
   2713 FA                 5311 	mov	r2,a
   2714 C3                 5312 	clr	c
   2715 74 81              5313 	mov	a,#(0x01 ^ 0x80)
   2717 8A F0              5314 	mov	b,r2
   2719 63 F0 80           5315 	xrl	b,#0x80
   271C 95 F0              5316 	subb	a,b
   271E 40 0D              5317 	jc	00274$
                           5318 ;	../../shared/src/interrupt.c:1053: reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x40;
   2720 90 26 05           5319 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   2723 E0                 5320 	movx	a,@dptr
   2724 FA                 5321 	mov	r2,a
   2725 43 12 40           5322 	orl	ar2,#0x40
   2728 90 26 05           5323 	mov	dptr,#(_DME_ENC_REG1 + 0x0001)
   272B EA                 5324 	mov	a,r2
   272C F0                 5325 	movx	@dptr,a
   272D                    5326 00274$:
                           5327 ;	../../shared/src/interrupt.c:1060: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   272D 90 26 7A           5328 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   2730 E0                 5329 	movx	a,@dptr
   2731 44 20              5330 	orl	a,#0x20
   2733 F0                 5331 	movx	@dptr,a
   2734 E0                 5332 	movx	a,@dptr
   2735 54 DF              5333 	anl	a,#0xdf
   2737 F0                 5334 	movx	@dptr,a
                           5335 ;	../../shared/src/interrupt.c:1061: lnx_ERROR_TTIU_DETECTED_LANE = 0;
   2738 90 60 0A           5336 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   273B E0                 5337 	movx	a,@dptr
   273C 54 FE              5338 	anl	a,#0xfe
   273E F0                 5339 	movx	@dptr,a
                           5340 ;	../../shared/src/interrupt.c:1070: ext_int0:
   273F                    5341 00291$:
                           5342 ;	../../shared/src/interrupt.c:1080: PHY_INT_LANE = 0xFF;
   273F 90 22 33           5343 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2742 74 FF              5344 	mov	a,#0xFF
   2744 F0                 5345 	movx	@dptr,a
                           5346 ;	../../shared/src/interrupt.c:1082: EA = 1;
   2745 D2 AF              5347 	setb	_EA
   2747 85 18 81           5348 	mov	sp,_bp
   274A D0 18              5349 	pop	_bp
   274C D0 D0              5350 	pop	psw
   274E D0 83              5351 	pop	dph
   2750 D0 82              5352 	pop	dpl
   2752 D0 F0              5353 	pop	b
   2754 D0 E0              5354 	pop	acc
   2756 D0 25              5355 	pop	bits
   2758 32                 5356 	reti
                           5357 ;------------------------------------------------------------
                           5358 ;Allocation info for local variables in function 'int6_isr'
                           5359 ;------------------------------------------------------------
                           5360 ;------------------------------------------------------------
                           5361 ;	../../shared/src/interrupt.c:1085: void int6_isr (void) __interrupt (13) __using (2) 
                           5362 ;	-----------------------------------------
                           5363 ;	 function int6_isr
                           5364 ;	-----------------------------------------
   2759                    5365 _int6_isr:
   2759 C0 D0              5366 	push	psw
   275B 75 D0 10           5367 	mov	psw,#0x10
                           5368 ;	../../shared/src/interrupt.c:1088: EA = 0;
   275E C2 AF              5369 	clr	_EA
                           5370 ;	../../shared/src/interrupt.c:1115: EA = 1;
   2760 D2 AF              5371 	setb	_EA
   2762 D0 D0              5372 	pop	psw
   2764 32                 5373 	reti
                           5374 ;	eliminated unneeded push/pop dpl
                           5375 ;	eliminated unneeded push/pop dph
                           5376 ;	eliminated unneeded push/pop b
                           5377 ;	eliminated unneeded push/pop acc
                           5378 ;------------------------------------------------------------
                           5379 ;Allocation info for local variables in function 'int12_isr'
                           5380 ;------------------------------------------------------------
                           5381 ;------------------------------------------------------------
                           5382 ;	../../shared/src/interrupt.c:1119: void int12_isr (void) __interrupt (21)  __using (2) 
                           5383 ;	-----------------------------------------
                           5384 ;	 function int12_isr
                           5385 ;	-----------------------------------------
   2765                    5386 _int12_isr:
   2765 C0 D0              5387 	push	psw
   2767 75 D0 10           5388 	mov	psw,#0x10
                           5389 ;	../../shared/src/interrupt.c:1121: EA = 0;
   276A C2 AF              5390 	clr	_EA
                           5391 ;	../../shared/src/interrupt.c:1122: EX12 = 0; //reg_INT_ENABLE_ALL_LANE = 0;
   276C C2 9F              5392 	clr	_EX12
                           5393 ;	../../shared/src/interrupt.c:1155: EX12 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   276E D2 9F              5394 	setb	_EX12
                           5395 ;	../../shared/src/interrupt.c:1156: EA = 1;
   2770 D2 AF              5396 	setb	_EA
   2772 D0 D0              5397 	pop	psw
   2774 32                 5398 	reti
                           5399 ;	eliminated unneeded push/pop dpl
                           5400 ;	eliminated unneeded push/pop dph
                           5401 ;	eliminated unneeded push/pop b
                           5402 ;	eliminated unneeded push/pop acc
                           5403 ;------------------------------------------------------------
                           5404 ;Allocation info for local variables in function 'int4_isr'
                           5405 ;------------------------------------------------------------
                           5406 ;------------------------------------------------------------
                           5407 ;	../../shared/src/interrupt.c:1159: void int4_isr (void) __interrupt (11)  __using (2) 
                           5408 ;	-----------------------------------------
                           5409 ;	 function int4_isr
                           5410 ;	-----------------------------------------
   2775                    5411 _int4_isr:
   2775 C0 E0              5412 	push	acc
   2777 C0 F0              5413 	push	b
   2779 C0 82              5414 	push	dpl
   277B C0 83              5415 	push	dph
   277D C0 D0              5416 	push	psw
   277F 75 D0 10           5417 	mov	psw,#0x10
                           5418 ;	../../shared/src/interrupt.c:1161: EA = 0;
   2782 C2 AF              5419 	clr	_EA
                           5420 ;	../../shared/src/interrupt.c:1162: EX4 = 4; //reg_INT_ENABLE_ALL_LANE = 0;
   2784 D2 BB              5421 	setb	_EX4
                           5422 ;	../../shared/src/interrupt.c:1164: PHY_INT_LANE = 4;
   2786 90 22 33           5423 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   2789 74 04              5424 	mov	a,#0x04
   278B F0                 5425 	movx	@dptr,a
                           5426 ;	../../shared/src/interrupt.c:1167: if(reg_INT_TIMER3_ISR_LANE) {
   278C 90 22 88           5427 	mov	dptr,#_MCU_IRQ_LANE
   278F E0                 5428 	movx	a,@dptr
   2790 30 E3 59           5429 	jnb	acc.3,00110$
                           5430 ;	../../shared/src/interrupt.c:1168: reg_INT_TIMER3_ISR_CLEAR_LANE = 1;
                           5431 ;	../../shared/src/interrupt.c:1169: reg_INT_TIMER3_ISR_CLEAR_LANE = 0;
   2793 90 22 D8           5432 	mov	dptr,#_MCU_IRQ_ISR_LANE
   2796 E0                 5433 	movx	a,@dptr
   2797 44 08              5434 	orl	a,#0x08
   2799 F0                 5435 	movx	@dptr,a
   279A E0                 5436 	movx	a,@dptr
   279B 54 F7              5437 	anl	a,#0xf7
   279D F0                 5438 	movx	@dptr,a
                           5439 ;	../../shared/src/interrupt.c:1171: if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE && do_train && train_timer_int && link_train_mode==0 && reg_FRAME_LOCK_LANE==0) {
   279E 90 60 33           5440 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   27A1 E0                 5441 	movx	a,@dptr
   27A2 30 E4 47           5442 	jnb	acc.4,00110$
   27A5 30 06 44           5443 	jnb	_do_train,00110$
   27A8 90 66 CC           5444 	mov	dptr,#_train_timer_int
   27AB E0                 5445 	movx	a,@dptr
   27AC FA                 5446 	mov	r2,a
   27AD 60 3D              5447 	jz	00110$
   27AF 90 26 7B           5448 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   27B2 E0                 5449 	movx	a,@dptr
   27B3 20 E7 36           5450 	jb	acc.7,00110$
   27B6 90 21 26           5451 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   27B9 E0                 5452 	movx	a,@dptr
   27BA 20 E2 2F           5453 	jb	acc.2,00110$
                           5454 ;	../../shared/src/interrupt.c:1172: if(phy_mode<=SAS) {
   27BD 90 A3 16           5455 	mov	dptr,#(_SYSTEM + 0x0002)
   27C0 E0                 5456 	movx	a,@dptr
   27C1 54 07              5457 	anl	a,#0x07
   27C3 FA                 5458 	mov	r2,a
   27C4 C3                 5459 	clr	c
   27C5 74 81              5460 	mov	a,#(0x01 ^ 0x80)
   27C7 8A F0              5461 	mov	b,r2
   27C9 63 F0 80           5462 	xrl	b,#0x80
   27CC 95 F0              5463 	subb	a,b
   27CE 40 15              5464 	jc	00102$
                           5465 ;	../../shared/src/interrupt.c:1173: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
   27D0 90 60 5A           5466 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   27D3 E0                 5467 	movx	a,@dptr
   27D4 44 02              5468 	orl	a,#0x02
   27D6 F0                 5469 	movx	@dptr,a
                           5470 ;	../../shared/src/interrupt.c:1174: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
   27D7 90 26 1C           5471 	mov	dptr,#_TX_TRAIN_IF_REG2
   27DA E0                 5472 	movx	a,@dptr
   27DB 54 7F              5473 	anl	a,#0x7f
   27DD F0                 5474 	movx	@dptr,a
                           5475 ;	../../shared/src/interrupt.c:1175: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0;
   27DE 90 26 1D           5476 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   27E1 E0                 5477 	movx	a,@dptr
   27E2 54 FE              5478 	anl	a,#0xfe
   27E4 F0                 5479 	movx	@dptr,a
   27E5                    5480 00102$:
                           5481 ;	../../shared/src/interrupt.c:1177: reg_TX_TRAIN_FAILED_LANE = 1;
   27E5 90 26 7B           5482 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   27E8 E0                 5483 	movx	a,@dptr
   27E9 44 08              5484 	orl	a,#0x08
   27EB F0                 5485 	movx	@dptr,a
   27EC                    5486 00110$:
                           5487 ;	../../shared/src/interrupt.c:1183: if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE) {
   27EC 90 22 88           5488 	mov	dptr,#_MCU_IRQ_LANE
   27EF E0                 5489 	movx	a,@dptr
   27F0 30 E5 19           5490 	jnb	acc.5,00114$
                           5491 ;	../../shared/src/interrupt.c:1184: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
                           5492 ;	../../shared/src/interrupt.c:1185: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
   27F3 90 22 D8           5493 	mov	dptr,#_MCU_IRQ_ISR_LANE
   27F6 E0                 5494 	movx	a,@dptr
   27F7 44 20              5495 	orl	a,#0x20
   27F9 F0                 5496 	movx	@dptr,a
   27FA E0                 5497 	movx	a,@dptr
   27FB 54 DF              5498 	anl	a,#0xdf
   27FD F0                 5499 	movx	@dptr,a
                           5500 ;	../../shared/src/interrupt.c:1187: if(PHY_MCU_REMOTE_REQ_LANE==0) 
   27FE 90 22 E4           5501 	mov	dptr,#_MCU_COMMAND0
   2801 E0                 5502 	movx	a,@dptr
   2802 20 E0 07           5503 	jb	acc.0,00114$
                           5504 ;	../../shared/src/interrupt.c:1188: lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
   2805 90 60 33           5505 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   2808 E0                 5506 	movx	a,@dptr
   2809 54 FE              5507 	anl	a,#0xfe
   280B F0                 5508 	movx	@dptr,a
   280C                    5509 00114$:
                           5510 ;	../../shared/src/interrupt.c:1198: if( reg_MCU_REMOTE_REQ_ISR ) {
   280C 90 A2 E4           5511 	mov	dptr,#_MEM_IRQ
   280F E0                 5512 	movx	a,@dptr
   2810 20 E2 03           5513 	jb	acc.2,00163$
   2813 02 28 A2           5514 	ljmp	00134$
   2816                    5515 00163$:
                           5516 ;	../../shared/src/interrupt.c:1199: reg_MCU_REMOTE_REQ_ISR_CLEAR = 1;
                           5517 ;	../../shared/src/interrupt.c:1200: reg_MCU_REMOTE_REQ_ISR_CLEAR = 0;
   2816 90 A2 F4           5518 	mov	dptr,#_MEM_IRQ_CLEAR
   2819 E0                 5519 	movx	a,@dptr
   281A 44 04              5520 	orl	a,#0x04
   281C F0                 5521 	movx	@dptr,a
   281D E0                 5522 	movx	a,@dptr
   281E 54 FB              5523 	anl	a,#0xfb
   2820 F0                 5524 	movx	@dptr,a
                           5525 ;	../../shared/src/interrupt.c:1202: if(reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_CLEAR ) reg_MCU_LOCAL_STATUS_7_0 = 0;
   2821 90 A2 FC           5526 	mov	dptr,#_MCU_SYNC2
   2824 E0                 5527 	movx	a,@dptr
   2825 70 07              5528 	jnz	00128$
   2827 90 A2 FA           5529 	mov	dptr,#(_MCU_SYNC1 + 0x0002)
   282A E4                 5530 	clr	a
   282B F0                 5531 	movx	@dptr,a
   282C 80 5E              5532 	sjmp	00129$
   282E                    5533 00128$:
                           5534 ;	../../shared/src/interrupt.c:1203: else if((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PU_PLL_ON && reg_ANA_PU_PLL) ||
   282E 90 A2 FC           5535 	mov	dptr,#_MCU_SYNC2
   2831 E0                 5536 	movx	a,@dptr
   2832 FA                 5537 	mov	r2,a
   2833 BA 02 07           5538 	cjne	r2,#0x02,00120$
   2836 90 A3 1B           5539 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   2839 E0                 5540 	movx	a,@dptr
   283A 20 E2 3D           5541 	jb	acc.2,00115$
   283D                    5542 00120$:
                           5543 ;	../../shared/src/interrupt.c:1204: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_ON) && reg_ANA_PLL_CLK_READY) ||
   283D 90 A2 FC           5544 	mov	dptr,#_MCU_SYNC2
   2840 E0                 5545 	movx	a,@dptr
   2841 FA                 5546 	mov	r2,a
   2842 BA 03 07           5547 	cjne	r2,#0x03,00122$
   2845 90 A3 4F           5548 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   2848 E0                 5549 	movx	a,@dptr
   2849 20 E0 2E           5550 	jb	acc.0,00115$
   284C                    5551 00122$:
                           5552 ;	../../shared/src/interrupt.c:1205: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_LOCK_ON) && reg_ANA_PLL_LOCK_RD) ||
   284C 90 A2 FC           5553 	mov	dptr,#_MCU_SYNC2
   284F E0                 5554 	movx	a,@dptr
   2850 FA                 5555 	mov	r2,a
   2851 BA 04 07           5556 	cjne	r2,#0x04,00124$
   2854 90 A3 19           5557 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   2857 E0                 5558 	movx	a,@dptr
   2858 20 E6 1F           5559 	jb	acc.6,00115$
   285B                    5560 00124$:
                           5561 ;	../../shared/src/interrupt.c:1207: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_RING_ON) && reg_ANA_PLL_CLK_READY_RING) ||
   285B 90 A2 FC           5562 	mov	dptr,#_MCU_SYNC2
   285E E0                 5563 	movx	a,@dptr
   285F FA                 5564 	mov	r2,a
   2860 BA 05 07           5565 	cjne	r2,#0x05,00126$
   2863 90 A3 4E           5566 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   2866 E0                 5567 	movx	a,@dptr
   2867 20 E5 10           5568 	jb	acc.5,00115$
   286A                    5569 00126$:
                           5570 ;	../../shared/src/interrupt.c:1208: ((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CAL_LOOP_DONE) && (PHY_STATUS_INT&LCPLL_CAL_LOOP_DONE)) )
   286A 90 A2 FC           5571 	mov	dptr,#_MCU_SYNC2
   286D E0                 5572 	movx	a,@dptr
   286E FA                 5573 	mov	r2,a
   286F BA 06 14           5574 	cjne	r2,#0x06,00116$
   2872 90 22 38           5575 	mov	dptr,#_MCU_STATUS2_LANE
   2875 E0                 5576 	movx	a,@dptr
   2876 FA                 5577 	mov	r2,a
   2877 30 E1 0C           5578 	jnb	acc.1,00116$
   287A                    5579 00115$:
                           5580 ;	../../shared/src/interrupt.c:1209: reg_MCU_LOCAL_STATUS_7_0 = reg_MCU_REMOTE_COMMAND_RD_7_0;
   287A 90 A2 FC           5581 	mov	dptr,#_MCU_SYNC2
   287D E0                 5582 	movx	a,@dptr
   287E FA                 5583 	mov	r2,a
   287F 90 A2 FA           5584 	mov	dptr,#(_MCU_SYNC1 + 0x0002)
   2882 EA                 5585 	mov	a,r2
   2883 F0                 5586 	movx	@dptr,a
   2884 80 06              5587 	sjmp	00129$
   2886                    5588 00116$:
                           5589 ;	../../shared/src/interrupt.c:1210: else 	reg_MCU_LOCAL_STATUS_7_0 = CHECK_WAIT;
   2886 90 A2 FA           5590 	mov	dptr,#(_MCU_SYNC1 + 0x0002)
   2889 74 01              5591 	mov	a,#0x01
   288B F0                 5592 	movx	@dptr,a
   288C                    5593 00129$:
                           5594 ;	../../shared/src/interrupt.c:1212: if(reg_MCU_REMOTE_COMMAND_RD_7_0) {
   288C 90 A2 FC           5595 	mov	dptr,#_MCU_SYNC2
   288F E0                 5596 	movx	a,@dptr
   2890 60 09              5597 	jz	00131$
                           5598 ;	../../shared/src/interrupt.c:1213: reg_MCU_LOCAL_ACK = 1;
   2892 90 A2 FB           5599 	mov	dptr,#(_MCU_SYNC1 + 0x0003)
   2895 E0                 5600 	movx	a,@dptr
   2896 44 01              5601 	orl	a,#0x01
   2898 F0                 5602 	movx	@dptr,a
   2899 80 07              5603 	sjmp	00134$
   289B                    5604 00131$:
                           5605 ;	../../shared/src/interrupt.c:1216: reg_MCU_LOCAL_ACK = 0;
   289B 90 A2 FB           5606 	mov	dptr,#(_MCU_SYNC1 + 0x0003)
   289E E0                 5607 	movx	a,@dptr
   289F 54 FE              5608 	anl	a,#0xfe
   28A1 F0                 5609 	movx	@dptr,a
   28A2                    5610 00134$:
                           5611 ;	../../shared/src/interrupt.c:1219: PHY_INT_LANE = 0xFF;
   28A2 90 22 33           5612 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0003)
   28A5 74 FF              5613 	mov	a,#0xFF
   28A7 F0                 5614 	movx	@dptr,a
                           5615 ;	../../shared/src/interrupt.c:1221: EX4 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   28A8 D2 BB              5616 	setb	_EX4
                           5617 ;	../../shared/src/interrupt.c:1222: EA = 1;
   28AA D2 AF              5618 	setb	_EA
   28AC D0 D0              5619 	pop	psw
   28AE D0 83              5620 	pop	dph
   28B0 D0 82              5621 	pop	dpl
   28B2 D0 F0              5622 	pop	b
   28B4 D0 E0              5623 	pop	acc
   28B6 32                 5624 	reti
                           5625 ;------------------------------------------------------------
                           5626 ;Allocation info for local variables in function 'uart0_isr'
                           5627 ;------------------------------------------------------------
                           5628 ;------------------------------------------------------------
                           5629 ;	../../shared/src/interrupt.c:1225: void uart0_isr(void) __interrupt(4) __using (2)
                           5630 ;	-----------------------------------------
                           5631 ;	 function uart0_isr
                           5632 ;	-----------------------------------------
   28B7                    5633 _uart0_isr:
   28B7 C0 D0              5634 	push	psw
   28B9 75 D0 10           5635 	mov	psw,#0x10
                           5636 ;	../../shared/src/interrupt.c:1227: EA = 0;
   28BC C2 AF              5637 	clr	_EA
                           5638 ;	../../shared/src/interrupt.c:1228: if(RI) {
                           5639 ;	../../shared/src/interrupt.c:1229: RI = 0;
   28BE 10 98 02           5640 	jbc	_RI,00109$
   28C1 80 00              5641 	sjmp	00102$
   28C3                    5642 00109$:
   28C3                    5643 00102$:
                           5644 ;	../../shared/src/interrupt.c:1237: if(TI) {
                           5645 ;	../../shared/src/interrupt.c:1238: TI = 0;
   28C3 10 99 02           5646 	jbc	_TI,00110$
   28C6 80 00              5647 	sjmp	00104$
   28C8                    5648 00110$:
   28C8                    5649 00104$:
                           5650 ;	../../shared/src/interrupt.c:1244: EA = 1;
   28C8 D2 AF              5651 	setb	_EA
   28CA D0 D0              5652 	pop	psw
   28CC 32                 5653 	reti
                           5654 ;	eliminated unneeded push/pop dpl
                           5655 ;	eliminated unneeded push/pop dph
                           5656 ;	eliminated unneeded push/pop b
                           5657 ;	eliminated unneeded push/pop acc
                           5658 	.area CSEG    (CODE)
                           5659 	.area CSEG    (CODE)
   28CD                    5660 _valid_coe_tbl:
   28CD 00                 5661 	.db #0x00	; 0
   28CE 04                 5662 	.db #0x04	; 4
   28CF 05                 5663 	.db #0x05	; 5
   28D0 08                 5664 	.db #0x08	; 8
   28D1 0A                 5665 	.db #0x0A	; 10
   28D2 14                 5666 	.db #0x14	; 20
   28D3 28                 5667 	.db #0x28	; 40
   28D4 02                 5668 	.db #0x02	; 2
   28D5 01                 5669 	.db #0x01	; 1
   28D6 20                 5670 	.db #0x20	; 32
   28D7 10                 5671 	.db #0x10	; 16
                           5672 	.area CABS    (ABS,CODE)
