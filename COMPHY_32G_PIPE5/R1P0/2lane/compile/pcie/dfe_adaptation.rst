                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:24 2018
                              5 ;--------------------------------------------------------
                              6 	.module dfe_adaptation
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _dfe_res_f567_sumFtap
                             13 	.globl _dfe_res_f4_sumFtap
                             14 	.globl _dfe_res_f3_sumFtap
                             15 	.globl _dfe_res_f2_sumFtap
                             16 	.globl _dfe_res_f1_sumFtap
                             17 	.globl _dfe_res_f0_sumFtap
                             18 	.globl _pre_calculation
                             19 	.globl _TF2
                             20 	.globl _TI
                             21 	.globl _RI
                             22 	.globl _EX12
                             23 	.globl _EX11
                             24 	.globl _EX10
                             25 	.globl _EX9
                             26 	.globl _EX8
                             27 	.globl _ES1
                             28 	.globl _PS1
                             29 	.globl _EX6
                             30 	.globl _EX5
                             31 	.globl _EX4
                             32 	.globl _EX3
                             33 	.globl _EX2
                             34 	.globl _EX7
                             35 	.globl _EA
                             36 	.globl _WDT
                             37 	.globl _ET2
                             38 	.globl _ES
                             39 	.globl _ET1
                             40 	.globl _EX1
                             41 	.globl _ET0
                             42 	.globl _EX0
                             43 	.globl _TF1
                             44 	.globl _TR1
                             45 	.globl _TF0
                             46 	.globl _TR0
                             47 	.globl _IE1
                             48 	.globl _IT1
                             49 	.globl _IE0
                             50 	.globl _IT0
                             51 	.globl _P3_7
                             52 	.globl _P3_6
                             53 	.globl _P3_5
                             54 	.globl _P3_4
                             55 	.globl _P3_3
                             56 	.globl _P3_2
                             57 	.globl _P3_1
                             58 	.globl _P3_0
                             59 	.globl _P2_7
                             60 	.globl _P2_6
                             61 	.globl _P2_5
                             62 	.globl _P2_4
                             63 	.globl _P2_3
                             64 	.globl _P2_2
                             65 	.globl _P2_1
                             66 	.globl _P2_0
                             67 	.globl _P1_7
                             68 	.globl _P1_6
                             69 	.globl _P1_5
                             70 	.globl _P1_4
                             71 	.globl _P1_3
                             72 	.globl _P1_2
                             73 	.globl _P1_1
                             74 	.globl _P1_0
                             75 	.globl _P0_7
                             76 	.globl _P0_6
                             77 	.globl _P0_5
                             78 	.globl _P0_4
                             79 	.globl _P0_3
                             80 	.globl _P0_2
                             81 	.globl _P0_1
                             82 	.globl _P0_0
                             83 	.globl _DMAC
                             84 	.globl _DMATA
                             85 	.globl _DMASA
                             86 	.globl _TMR2
                             87 	.globl _TMR1
                             88 	.globl _TMR0
                             89 	.globl _SRST
                             90 	.globl _B
                             91 	.globl _EIE
                             92 	.globl _ACC
                             93 	.globl _ADCON
                             94 	.globl _PSW
                             95 	.globl _TH2
                             96 	.globl _TL2
                             97 	.globl _RCAP2H
                             98 	.globl _RCAP2L
                             99 	.globl _T2CON
                            100 	.globl _CCEN
                            101 	.globl _IRCON
                            102 	.globl _S0RELH
                            103 	.globl _IP1
                            104 	.globl _IEN1
                            105 	.globl _DMAM1
                            106 	.globl _DMAM0
                            107 	.globl _DMASEL
                            108 	.globl _DMAC2
                            109 	.globl _DMAC1
                            110 	.globl _DMAC0
                            111 	.globl _P3
                            112 	.globl _S0RELL
                            113 	.globl _IP0
                            114 	.globl _IEN0
                            115 	.globl _DMAT2
                            116 	.globl _DMAT1
                            117 	.globl _DMAT0
                            118 	.globl _DMAS2
                            119 	.globl _DMAS1
                            120 	.globl _DMAS0
                            121 	.globl _P2
                            122 	.globl _IEN2
                            123 	.globl _SBUF
                            124 	.globl _SCON
                            125 	.globl _PSBANK
                            126 	.globl _DPS
                            127 	.globl _P1
                            128 	.globl _CKCON
                            129 	.globl _TH1
                            130 	.globl _TH0
                            131 	.globl _TL1
                            132 	.globl _TL0
                            133 	.globl _TMOD
                            134 	.globl _TCON
                            135 	.globl _PCON
                            136 	.globl _WDTREL
                            137 	.globl _DPH
                            138 	.globl _DPL
                            139 	.globl _P0
                            140 	.globl _sq_thrs_ratio_tb
                            141 	.globl _train_save_tb
                            142 	.globl _tx_tb
                            143 	.globl _UPHY_ANAREG_REV_0
                            144 	.globl _dfe_sm_save
                            145 	.globl _dfe_sm_dc
                            146 	.globl _dfe_sm
                            147 	.globl _cds28
                            148 	.globl _lnx_calx_align90_gm
                            149 	.globl _lnx_calx_align90_dac
                            150 	.globl _lnx_calx_align90_dummy_clk
                            151 	.globl _lnx_calx_eom_dpher
                            152 	.globl _lnx_calx_vdda_dll_eom_sel
                            153 	.globl _lnx_calx_dll_eom_gmsel
                            154 	.globl _lnx_calx_vdda_dll_sel
                            155 	.globl _lnx_calx_dll_gmsel
                            156 	.globl _lnx_calx_rxdcc_dll_hg
                            157 	.globl _lnx_calx_rxdcc_dll
                            158 	.globl _lnx_calx_txdcc_hg
                            159 	.globl _lnx_calx_txdcc
                            160 	.globl _lnx_calx_txdcc_pdiv_hg
                            161 	.globl _lnx_calx_txdcc_pdiv
                            162 	.globl _lnx_spdoft_tx_preset_index_lane
                            163 	.globl _lnx_cal_sellv_rxeomclk
                            164 	.globl _lnx_cal_sellv_rxsampler
                            165 	.globl _lnx_cal_sellv_txpre
                            166 	.globl _lnx_cal_sellv_rxdataclk
                            167 	.globl _lnx_cal_sellv_txclk
                            168 	.globl _lnx_cal_sellv_txdata
                            169 	.globl _lnx_cal_align90_gm
                            170 	.globl _lnx_cal_align90_dac
                            171 	.globl _lnx_cal_align90_dummy_clk
                            172 	.globl _lnx_cal_eom_dpher
                            173 	.globl _lnx_cal_vdda_dll_eom_sel
                            174 	.globl _lnx_cal_dll_eom_gmsel
                            175 	.globl _lnx_cal_vdda_dll_sel
                            176 	.globl _lnx_cal_dll_gmsel
                            177 	.globl _lnx_cal_rxdcc_eom_hg
                            178 	.globl _lnx_cal_rxdcc_eom
                            179 	.globl _lnx_cal_rxdcc_data_hg
                            180 	.globl _lnx_cal_rxdcc_data
                            181 	.globl _lnx_cal_rxdcc_dll_hg
                            182 	.globl _lnx_cal_rxdcc_dll
                            183 	.globl _lnx_cal_txdcc_hg
                            184 	.globl _lnx_cal_txdcc
                            185 	.globl _lnx_cal_txdcc_pdiv_hg
                            186 	.globl _lnx_cal_txdcc_pdiv
                            187 	.globl _cmx_cal_sllp_dac_fine_ring
                            188 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            189 	.globl _cmx_cal_pll_speed_ring
                            190 	.globl _cmx_cal_plldcc
                            191 	.globl _cmx_cal_lccap_lsb
                            192 	.globl _cmx_cal_lccap_msb
                            193 	.globl _cmx_cal_lcvco_dac_msb
                            194 	.globl _cmx_cal_lcvco_dac_lsb
                            195 	.globl _cmx_cal_lcvco_dac
                            196 	.globl _local_tx_preset_tb
                            197 	.globl _train_g0_index
                            198 	.globl _train_g1_index
                            199 	.globl _train_gn1_index
                            200 	.globl _phase_save
                            201 	.globl _txffe_save
                            202 	.globl _rc_save
                            203 	.globl _phy_mode_lane_table
                            204 	.globl _speedtable
                            205 	.globl _min_gen
                            206 	.globl _max_gen
                            207 	.globl _phy_mode_cmn_table
                            208 	.globl _ring_speedtable
                            209 	.globl _lc_speedtable
                            210 	.globl _TXTRAIN_IF_REG0
                            211 	.globl _CDS_READ_MISC1
                            212 	.globl _CDS_READ_MISC0
                            213 	.globl _DFE_READ_F0D_RIGHT_ODD
                            214 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            215 	.globl _DFE_READ_F0D_LEFT_ODD
                            216 	.globl _DFE_READ_F0D_LEFT_EVEN
                            217 	.globl _DFE_READ_F0D_ODD
                            218 	.globl _DFE_READ_F0D_EVEN
                            219 	.globl _DFE_READ_F0B_ODD
                            220 	.globl _DFE_READ_F0B_EVEN
                            221 	.globl _DFE_READ_F0A_ODD
                            222 	.globl _DFE_READ_F0A_EVEN
                            223 	.globl _DFE_READ_ODD_REG8
                            224 	.globl _DFE_READ_EVEN_REG8
                            225 	.globl _DFE_READ_ODD_REG7
                            226 	.globl _DFE_READ_ODD_REG6
                            227 	.globl _DFE_READ_ODD_REG5
                            228 	.globl _DFE_READ_ODD_REG4
                            229 	.globl _DFE_READ_ODD_REG3
                            230 	.globl _DFE_READ_ODD_REG2
                            231 	.globl _DFE_READ_ODD_REG1
                            232 	.globl _DFE_READ_ODD_REG0
                            233 	.globl _DFE_READ_EVEN_REG7
                            234 	.globl _DFE_READ_EVEN_REG6
                            235 	.globl _DFE_READ_EVEN_REG5
                            236 	.globl _DFE_READ_EVEN_REG4
                            237 	.globl _DFE_READ_EVEN_REG3
                            238 	.globl _DFE_READ_EVEN_REG2
                            239 	.globl _DFE_READ_EVEN_REG1
                            240 	.globl _DFE_READ_EVEN_REG0
                            241 	.globl _TX_TRAIN_IF_REG8
                            242 	.globl _TX_TRAIN_CTRL_LANE
                            243 	.globl _TX_TRAIN_IF_REG7
                            244 	.globl _TX_TRAIN_IF_REG6
                            245 	.globl _TX_TRAIN_IF_REG5
                            246 	.globl _TX_TRAIN_IF_REG4
                            247 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            248 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            249 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            250 	.globl _TX_AMP_CTRL_REG0
                            251 	.globl _TX_DRV_RD_OUT_REG0
                            252 	.globl _LINK_TRAIN_MODE0
                            253 	.globl _TX_EMPH_CTRL_REG0
                            254 	.globl _TX_TRAIN_DEFAULT_REG5
                            255 	.globl _TX_TRAIN_DEFAULT_REG4
                            256 	.globl _TX_TRAIN_DEFAULT_REG3
                            257 	.globl _TX_TRAIN_DEFAULT_REG2
                            258 	.globl _TX_TRAIN_DEFAULT_REG1
                            259 	.globl _TX_TRAIN_DEFAULT_REG0
                            260 	.globl _TX_TRAIN_DRIVER_REG2
                            261 	.globl _TX_TRAIN_DRIVER_REG1
                            262 	.globl _TX_TRAIN_DRIVER_REG0
                            263 	.globl _TX_TRAIN_PATTTERN_REG0
                            264 	.globl _TX_TRAIN_IF_REG3
                            265 	.globl _TX_TRAIN_IF_REG2
                            266 	.globl _TX_TRAIN_IF_REG1
                            267 	.globl _TX_TRAIN_IF_REG0
                            268 	.globl _DME_DEC_REG1
                            269 	.globl _DME_DEC_REG0
                            270 	.globl _DME_ENC_REG2
                            271 	.globl _DME_ENC_REG1
                            272 	.globl _DME_ENC_REG0
                            273 	.globl _END_XDAT_CMN
                            274 	.globl _MCU_INFO_13
                            275 	.globl _MCU_INFO_12
                            276 	.globl _MCU_INFO_5
                            277 	.globl _MCU_INFO_4
                            278 	.globl _SYNC_INFO
                            279 	.globl _CDS_EYE_CLK_THR
                            280 	.globl _TX_SAVE_4
                            281 	.globl _TX_SAVE_3
                            282 	.globl _TX_SAVE_2
                            283 	.globl _TX_SAVE_1
                            284 	.globl _TX_SAVE_0
                            285 	.globl _ETH_PRESET1_TB
                            286 	.globl _ETH_PRESET0_TB
                            287 	.globl _SAS_PRESET2_TB
                            288 	.globl _SAS_PRESET1_TB
                            289 	.globl _SAS_PRESET0_TB
                            290 	.globl _G_SELLV_RXSAMPLER
                            291 	.globl _G_SELLV_RXDATACLK
                            292 	.globl _G_SELLV_RXEOMCLK
                            293 	.globl _G_SELLV_TXPRE
                            294 	.globl _G_SELLV_TXDATA
                            295 	.globl _G_SELLV_TXCLK
                            296 	.globl _TIMER_SEL3
                            297 	.globl _TIMER_SEL2
                            298 	.globl _TIMER_SEL1
                            299 	.globl _MCU_CONFIG1
                            300 	.globl _LOOP_CNTS
                            301 	.globl _CAL_DATA1
                            302 	.globl _MCU_CONFIG
                            303 	.globl _CAL_STATUS_READ
                            304 	.globl _CAL_TIME_OUT_AND_DIS
                            305 	.globl _CON_CAL_STEP_SIZE5
                            306 	.globl _CON_CAL_STEP_SIZE4
                            307 	.globl _CON_CAL_STEP_SIZE3
                            308 	.globl _CON_CAL_STEP_SIZE2
                            309 	.globl _CON_CAL_STEP_SIZE1
                            310 	.globl _CONTROL_CONFIG9
                            311 	.globl _CONTROL_CONFIG8
                            312 	.globl _TRAIN_IF_CONFIG
                            313 	.globl _CAL_DATA0
                            314 	.globl _CONTROL_CONFIG7
                            315 	.globl _CONTROL_CONFIG6
                            316 	.globl _CONTROL_CONFIG5
                            317 	.globl _CONTROL_CONFIG4
                            318 	.globl _CONTROL_CONFIG3
                            319 	.globl _CONTROL_CONFIG2
                            320 	.globl _CONTROL_CONFIG1
                            321 	.globl _CONTROL_CONFIG0
                            322 	.globl _FW_REV
                            323 	.globl _CID_REG1
                            324 	.globl _CID_REG0
                            325 	.globl _CMN_MCU_REG
                            326 	.globl _SET_LANE_ISR
                            327 	.globl _CMN_ISR_MASK_1
                            328 	.globl _CMN_ISR_1
                            329 	.globl _CMN_MCU_TIMER3_CONTROL
                            330 	.globl _CMN_MCU_TIMER2_CONTROL
                            331 	.globl _CMN_MCU_TIMER1_CONTROL
                            332 	.globl _CMN_MCU_TIMER0_CONTROL
                            333 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            334 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            335 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            336 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            337 	.globl _CMN_MCU_TIMER_CONTROL
                            338 	.globl _CMN_CACHE_DEBUG1
                            339 	.globl _CMN_MCU_GPIO
                            340 	.globl _CMN_ISR_CLEAR_2
                            341 	.globl _CMN_ISR_MASK_2
                            342 	.globl _CMN_ISR_2
                            343 	.globl _MCU_INT_ADDR
                            344 	.globl _CMN_CACHE_DEBUG0
                            345 	.globl _MCU_SDT_CMN
                            346 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            347 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            348 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            349 	.globl _TEST5
                            350 	.globl _PM_CMN_REG2
                            351 	.globl _INPUT_CMN_PIN_REG3
                            352 	.globl __FIELDNAME_
                            353 	.globl _CMN_CALIBRATION
                            354 	.globl _OUTPUT_CMN_PIN_REG0
                            355 	.globl _SPD_CMN_REG1
                            356 	.globl _CLKGEN_CMN_REG1
                            357 	.globl _PLLCAL_REG1
                            358 	.globl _PLLCAL_REG0
                            359 	.globl _ANA_TSEN_CONTROL
                            360 	.globl _INPUT_CMN_PIN_REG2
                            361 	.globl _INPUT_CMN_PIN_REG1
                            362 	.globl _INPUT_CMN_PIN_REG0
                            363 	.globl _PM_CMN_REG1
                            364 	.globl _SYSTEM
                            365 	.globl _TEST4
                            366 	.globl _TEST3
                            367 	.globl _TEST2
                            368 	.globl _TEST1
                            369 	.globl _TEST0
                            370 	.globl _MCU_SYNC2
                            371 	.globl _MCU_SYNC1
                            372 	.globl _MEM_IRQ_CLEAR
                            373 	.globl _APB_CONTROL_REG
                            374 	.globl _ANA_IF_CMN_REG0
                            375 	.globl _MEM_IRQ_MASK
                            376 	.globl _MEM_IRQ
                            377 	.globl _ANA_IF_CMN_REG1
                            378 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            379 	.globl _MCU_INFO_3
                            380 	.globl _MCU_INFO_2
                            381 	.globl _MCU_INFO_1
                            382 	.globl _MCU_INFO_0
                            383 	.globl _MEMORY_CONTROL_4
                            384 	.globl _MEMORY_CONTROL_3
                            385 	.globl _MEMORY_CONTROL_2
                            386 	.globl _MEMORY_CONTROL_1
                            387 	.globl _MEMORY_CONTROL_0
                            388 	.globl _MCU_DEBUG1
                            389 	.globl _MCU_DEBUG0
                            390 	.globl _MCU_CONTROL_4
                            391 	.globl _MCU_CONTROL_3
                            392 	.globl _MCU_CONTROL_2
                            393 	.globl _MCU_CONTROL_1
                            394 	.globl _MCU_CONTROL_0
                            395 	.globl _GLOB_L1_SUBSTATES_CFG
                            396 	.globl _GLOB_PIPE_REVISION
                            397 	.globl _GLOB_BIST_DATA_HI
                            398 	.globl _GLOB_BIST_SEQR_CFG
                            399 	.globl _GLOB_BIST_RESULT
                            400 	.globl _GLOB_BIST_MASK
                            401 	.globl _GLOB_BIST_START
                            402 	.globl _GLOB_BIST_LANE_TYPE
                            403 	.globl _GLOB_BIST_CTRL
                            404 	.globl _GLOB_DP_BAL_CFG4
                            405 	.globl _GLOB_DP_BAL_CFG2
                            406 	.globl _GLOB_DP_BAL_CFG0
                            407 	.globl _GLOB_PM_DP_CTRL
                            408 	.globl _GLOB_COUNTER_HI
                            409 	.globl _GLOB_COUNTER_CTRL
                            410 	.globl _GLOB_PM_CFG0
                            411 	.globl _GLOB_DP_SAL_CFG5
                            412 	.globl _GLOB_DP_SAL_CFG3
                            413 	.globl _GLOB_DP_SAL_CFG1
                            414 	.globl _GLOB_DP_SAL_CFG
                            415 	.globl _GLOB_MISC_CTRL
                            416 	.globl _GLOB_CLK_SRC_HI
                            417 	.globl _GLOB_CLK_SRC_LO
                            418 	.globl _GLOB_RST_CLK_CTRL
                            419 	.globl _DFE_STATIC_REG6
                            420 	.globl _DFE_STATIC_REG5
                            421 	.globl _DFE_STATIC_REG4
                            422 	.globl _DFE_STATIC_REG3
                            423 	.globl _DFE_STATIC_REG1
                            424 	.globl _DFE_STATIC_REG0
                            425 	.globl _RX_CMN_0
                            426 	.globl _SRIS_REG1
                            427 	.globl _SRIS_REG0
                            428 	.globl _DTX_PHY_ALIGN_REG2
                            429 	.globl _DTX_PHY_ALIGN_REG1
                            430 	.globl _DTX_PHY_ALIGN_REG0
                            431 	.globl _DTX_REG4
                            432 	.globl _DTX_REG3
                            433 	.globl _DTX_REG2
                            434 	.globl _DTX_REG1
                            435 	.globl _DTX_REG0
                            436 	.globl _TX_CMN_REG
                            437 	.globl _END_XDAT_LANE
                            438 	.globl _TRAIN_CONTROL_17
                            439 	.globl _TRAIN_CONTROL_16
                            440 	.globl _TRAIN_CONTROL_15
                            441 	.globl _TRAIN_CONTROL_14
                            442 	.globl _TRAIN_CONTROL_13
                            443 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            444 	.globl _ESM_POP_N_CNT_LOW_LANE
                            445 	.globl _TRAIN_CONTROL_12
                            446 	.globl _TRAIN_CONTROL_11
                            447 	.globl _TRAIN_CONTROL_10
                            448 	.globl _TRAIN_CONTROL_9
                            449 	.globl _TRAIN_CONTROL_8
                            450 	.globl _TRAIN_CONTROL_7
                            451 	.globl _TRAIN_CONTROL_6
                            452 	.globl _TRAIN_CONTROL_5
                            453 	.globl _TRAIN_CONTROL_4
                            454 	.globl _TRAIN_CONTROL_3
                            455 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            456 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            457 	.globl _ESM_POP_P_CNT_LOW_LANE
                            458 	.globl _CDS_CTRL_REG1
                            459 	.globl _CDS_CTRL_REG0
                            460 	.globl _DFE_CONTROL_11
                            461 	.globl _DFE_CONTROL_10
                            462 	.globl _DFE_CONTROL_9
                            463 	.globl _DFE_CONTROL_8
                            464 	.globl _DFE_CONTROL_7
                            465 	.globl _DFE_TEST_5
                            466 	.globl _DFE_TEST_4
                            467 	.globl _DFE_TEST_1
                            468 	.globl _DFE_TEST_0
                            469 	.globl _DFE_CONTROL_6
                            470 	.globl _TRAIN_PARA_3
                            471 	.globl _TRAIN_PARA_2
                            472 	.globl _TRAIN_PARA_1
                            473 	.globl _TRAIN_PARA_0
                            474 	.globl _DLL_CAL
                            475 	.globl _RPTA_CONFIG_1
                            476 	.globl _RPTA_CONFIG_0
                            477 	.globl _TRAIN_CONTROL_2
                            478 	.globl _TRAIN_CONTROL_1
                            479 	.globl _TRAIN_CONTROL_0
                            480 	.globl _DFE_CONTROL_5
                            481 	.globl _DFE_CONTROL_4
                            482 	.globl _DFE_CONTROL_3
                            483 	.globl _DFE_CONTROL_2
                            484 	.globl _DFE_CONTROL_1
                            485 	.globl _DFE_CONTROL_0
                            486 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            487 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            488 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            489 	.globl _PHY_LOCAL_VALUE_LANE
                            490 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            491 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            492 	.globl _CAL_SAVE_DATA3_LANE
                            493 	.globl _CAL_SAVE_DATA2_LANE
                            494 	.globl _CAL_SAVE_DATA1_LANE
                            495 	.globl _CAL_CTRL4_LANE
                            496 	.globl _CAL_CTRL3_LANE
                            497 	.globl _CAL_CTRL2_LANE
                            498 	.globl _CAL_CTRL1_LANE
                            499 	.globl _LANE_MARGIN_REG0
                            500 	.globl _EOM_VLD_REG4
                            501 	.globl _EOM_REG0
                            502 	.globl _EOM_ERR_REG3
                            503 	.globl _EOM_ERR_REG2
                            504 	.globl _EOM_ERR_REG1
                            505 	.globl _EOM_ERR_REG0
                            506 	.globl _EOM_VLD_REG3
                            507 	.globl _EOM_VLD_REG2
                            508 	.globl _EOM_VLD_REG1
                            509 	.globl _EOM_VLD_REG0
                            510 	.globl _DFE_STATIC_LANE_REG6
                            511 	.globl _DFE_STATIC_LANE_REG5
                            512 	.globl _DFE_STATIC_LANE_REG4
                            513 	.globl _DFE_STATIC_LANE_REG3
                            514 	.globl _DFE_STATIC_LANE_REG1
                            515 	.globl _DFE_STATIC_LANE_REG0
                            516 	.globl _DFE_DCE_REG0
                            517 	.globl _CAL_OFST_REG2
                            518 	.globl _CAL_OFST_REG1
                            519 	.globl _CAL_OFST_REG0
                            520 	.globl _DFE_READ_ODD_2C_REG8
                            521 	.globl _DFE_READ_EVEN_2C_REG8
                            522 	.globl _DFE_READ_ODD_2C_REG7
                            523 	.globl _DFE_READ_ODD_2C_REG6
                            524 	.globl _DFE_READ_ODD_2C_REG5
                            525 	.globl _DFE_READ_ODD_2C_REG4
                            526 	.globl _DFE_READ_ODD_2C_REG3
                            527 	.globl _DFE_READ_ODD_2C_REG2
                            528 	.globl _DFE_READ_ODD_2C_REG1
                            529 	.globl _DFE_READ_ODD_2C_REG0
                            530 	.globl _DFE_READ_EVEN_2C_REG7
                            531 	.globl _DFE_READ_EVEN_2C_REG6
                            532 	.globl _DFE_READ_EVEN_2C_REG5
                            533 	.globl _DFE_READ_EVEN_2C_REG4
                            534 	.globl _DFE_READ_EVEN_2C_REG3
                            535 	.globl _DFE_READ_EVEN_2C_REG2
                            536 	.globl _DFE_READ_EVEN_2C_REG1
                            537 	.globl _DFE_READ_EVEN_2C_REG0
                            538 	.globl _DFE_READ_ODD_SM_REG8
                            539 	.globl _DFE_READ_EVEN_SM_REG8
                            540 	.globl _DFE_READ_ODD_SM_REG7
                            541 	.globl _DFE_READ_ODD_SM_REG6
                            542 	.globl _DFE_READ_ODD_SM_REG5
                            543 	.globl _DFE_READ_ODD_SM_REG4
                            544 	.globl _DFE_READ_ODD_SM_REG3
                            545 	.globl _DFE_READ_ODD_SM_REG2
                            546 	.globl _DFE_READ_ODD_SM_REG1
                            547 	.globl _DFE_READ_ODD_SM_REG0
                            548 	.globl _DFE_READ_EVEN_SM_REG7
                            549 	.globl _DFE_READ_EVEN_SM_REG6
                            550 	.globl _DFE_READ_EVEN_SM_REG5
                            551 	.globl _DFE_READ_EVEN_SM_REG4
                            552 	.globl _DFE_READ_EVEN_SM_REG3
                            553 	.globl _DFE_READ_EVEN_SM_REG2
                            554 	.globl _DFE_READ_EVEN_SM_REG1
                            555 	.globl _DFE_READ_EVEN_SM_REG0
                            556 	.globl _DFE_FEXT_ODD_REG7
                            557 	.globl _DFE_FEXT_ODD_REG6
                            558 	.globl _DFE_FEXT_ODD_REG5
                            559 	.globl _DFE_FEXT_ODD_REG4
                            560 	.globl _DFE_FEXT_ODD_REG3
                            561 	.globl _DFE_FEXT_ODD_REG2
                            562 	.globl _DFE_FEXT_ODD_REG1
                            563 	.globl _DFE_FEXT_ODD_REG0
                            564 	.globl _DFE_FEXT_EVEN_REG7
                            565 	.globl _DFE_FEXT_EVEN_REG6
                            566 	.globl _DFE_FEXT_EVEN_REG5
                            567 	.globl _DFE_FEXT_EVEN_REG4
                            568 	.globl _DFE_FEXT_EVEN_REG3
                            569 	.globl _DFE_FEXT_EVEN_REG2
                            570 	.globl _DFE_FEXT_EVEN_REG1
                            571 	.globl _DFE_FEXT_EVEN_REG0
                            572 	.globl _DFE_DC_ODD_REG8
                            573 	.globl _DFE_DC_EVEN_REG8
                            574 	.globl _DFE_FEN_ODD_REG
                            575 	.globl _DFE_FEN_EVEN_REG
                            576 	.globl _DFE_STEP_REG1
                            577 	.globl _DFE_STEP_REG0
                            578 	.globl _DFE_ANA_REG1
                            579 	.globl _DFE_ANA_REG0
                            580 	.globl _DFE_CTRL_REG4
                            581 	.globl _RX_EQ_CLK_CTRL
                            582 	.globl _DFE_CTRL_REG3
                            583 	.globl _DFE_CTRL_REG2
                            584 	.globl _DFE_CTRL_REG1
                            585 	.globl _DFE_CTRL_REG0
                            586 	.globl _PT_COUNTER2
                            587 	.globl _PT_COUNTER1
                            588 	.globl _PT_COUNTER0
                            589 	.globl _PT_USER_PATTERN2
                            590 	.globl _PT_USER_PATTERN1
                            591 	.globl _PT_USER_PATTERN0
                            592 	.globl _PT_CONTROL1
                            593 	.globl _PT_CONTROL0
                            594 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            595 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            596 	.globl _MEM_ECC_ERR_ADDRESS0
                            597 	.globl _MCU_COMMAND0
                            598 	.globl _MCU_INT_CONTROL_13
                            599 	.globl _MCU_WDT_LANE
                            600 	.globl _MCU_IRQ_ISR_LANE
                            601 	.globl _ANA_IF_DFEO_REG0
                            602 	.globl _ANA_IF_DFEE_REG0
                            603 	.globl _ANA_IF_TRX_REG0
                            604 	.globl _EXT_INT_CONTROL
                            605 	.globl _MCU_DEBUG_LANE
                            606 	.globl _MCU_DEBUG3_LANE
                            607 	.globl _MCU_DEBUG2_LANE
                            608 	.globl _MCU_DEBUG1_LANE
                            609 	.globl _MCU_DEBUG0_LANE
                            610 	.globl _MCU_TIMER_CTRL_7_LANE
                            611 	.globl _MCU_TIMER_CTRL_6_LANE
                            612 	.globl _MCU_TIMER_CTRL_5_LANE
                            613 	.globl _MCU_TIMER_CTRL_4_LANE
                            614 	.globl _MCU_TIMER_CTRL_3_LANE
                            615 	.globl _MCU_TIMER_CTRL_2_LANE
                            616 	.globl _MCU_TIMER_CTRL_1_LANE
                            617 	.globl _MCU_MEM_REG2_LANE
                            618 	.globl _MCU_MEM_REG1_LANE
                            619 	.globl _MCU_IRQ_MASK_LANE
                            620 	.globl _MCU_IRQ_LANE
                            621 	.globl _MCU_TIMER3_CONTROL
                            622 	.globl _MCU_TIMER2_CONTROL
                            623 	.globl _MCU_TIMER1_CONTROL
                            624 	.globl _MCU_TIMER0_CONTROL
                            625 	.globl _MCU_TIMER_CONTROL
                            626 	.globl _MCU_INT12_CONTROL
                            627 	.globl _MCU_INT11_CONTROL
                            628 	.globl _MCU_INT10_CONTROL
                            629 	.globl _MCU_INT9_CONTROL
                            630 	.globl _MCU_INT8_CONTROL
                            631 	.globl _MCU_INT7_CONTROL
                            632 	.globl _MCU_INT6_CONTROL
                            633 	.globl _MCU_INT5_CONTROL
                            634 	.globl _MCU_INT4_CONTROL
                            635 	.globl _MCU_INT3_CONTROL
                            636 	.globl _MCU_INT2_CONTROL
                            637 	.globl _MCU_INT1_CONTROL
                            638 	.globl _MCU_INT0_CONTROL
                            639 	.globl _MCU_STATUS3_LANE
                            640 	.globl _MCU_STATUS2_LANE
                            641 	.globl _MCU_STATUS1_LANE
                            642 	.globl _MCU_STATUS0_LANE
                            643 	.globl _LANE_SYSTEM0
                            644 	.globl _CACHE_DEBUG1
                            645 	.globl _CACHE_DEBUG0
                            646 	.globl _MCU_GPIO
                            647 	.globl _MCU_CONTROL_LANE
                            648 	.globl _LANE_32G_PRESET_CFG16_LANE
                            649 	.globl _LANE_32G_PRESET_CFG14_LANE
                            650 	.globl _LANE_32G_PRESET_CFG12_LANE
                            651 	.globl _LANE_32G_PRESET_CFG10_LANE
                            652 	.globl _LANE_32G_PRESET_CFG8_LANE
                            653 	.globl _LANE_32G_PRESET_CFG6_LANE
                            654 	.globl _LANE_32G_PRESET_CFG4_LANE
                            655 	.globl _LANE_32G_PRESET_CFG2_LANE
                            656 	.globl _LANE_32G_PRESET_CFG0_LANE
                            657 	.globl _LANE_EQ_32G_CFG0_LANE
                            658 	.globl _LANE_16G_PRESET_CFG16_LANE
                            659 	.globl _LANE_16G_PRESET_CFG14_LANE
                            660 	.globl _LANE_16G_PRESET_CFG12_LANE
                            661 	.globl _LANE_16G_PRESET_CFG10_LANE
                            662 	.globl _LANE_16G_PRESET_CFG8_LANE
                            663 	.globl _LANE_16G_PRESET_CFG6_LANE
                            664 	.globl _LANE_16G_PRESET_CFG4_LANE
                            665 	.globl _LANE_16G_PRESET_CFG2_LANE
                            666 	.globl _LANE_16G_PRESET_CFG0_LANE
                            667 	.globl _LANE_EQ_16G_CFG0_LANE
                            668 	.globl _LANE_REMOTE_SET_LANE
                            669 	.globl _LANE_COEFF_MAX0_LANE
                            670 	.globl _LANE_PRESET_CFG16_LANE
                            671 	.globl _LANE_PRESET_CFG14_LANE
                            672 	.globl _LANE_PRESET_CFG12_LANE
                            673 	.globl _LANE_PRESET_CFG10_LANE
                            674 	.globl _LANE_PRESET_CFG8_LANE
                            675 	.globl _LANE_PRESET_CFG6_LANE
                            676 	.globl _LANE_PRESET_CFG4_LANE
                            677 	.globl _LANE_PRESET_CFG2_LANE
                            678 	.globl _LANE_PRESET_CFG0_LANE
                            679 	.globl _LANE_EQ_CFG1_LANE
                            680 	.globl _LANE_EQ_CFG0_LANE
                            681 	.globl _LANE_USB_DP_CFG2_LANE
                            682 	.globl _LANE_USB_DP_CFG1_LANE
                            683 	.globl _LANE_DP_PIE8_CFG0_LANE
                            684 	.globl _LANE_CFG_STATUS3_LANE
                            685 	.globl _LANE_CFG4
                            686 	.globl _LANE_CFG2_LANE
                            687 	.globl _LANE_CFG_STATUS2_LANE
                            688 	.globl _LANE_STATUS0
                            689 	.globl _LANE_CFG0
                            690 	.globl _SQ_REG0
                            691 	.globl _DTL_REG3
                            692 	.globl _DTL_REG2
                            693 	.globl _DTL_REG1
                            694 	.globl _DTL_REG0
                            695 	.globl _RX_LANE_INTERRUPT_REG1
                            696 	.globl _RX_CALIBRATION_REG
                            697 	.globl _INPUT_RX_PIN_REG3_LANE
                            698 	.globl _RX_DATA_PATH_REG
                            699 	.globl _RX_LANE_INTERRUPT_MASK
                            700 	.globl _RX_LANE_INTERRUPT
                            701 	.globl _CDR_LOCK_REG
                            702 	.globl _FRAME_SYNC_DET_REG6
                            703 	.globl _FRAME_SYNC_DET_REG5
                            704 	.globl _FRAME_SYNC_DET_REG4
                            705 	.globl _FRAME_SYNC_DET_REG3
                            706 	.globl _FRAME_SYNC_DET_REG2
                            707 	.globl _FRAME_SYNC_DET_REG1
                            708 	.globl _FRAME_SYNC_DET_REG0
                            709 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            710 	.globl _DIG_RX_RSVD_REG0
                            711 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            712 	.globl _INPUT_RX_PIN_REG2_LANE
                            713 	.globl _INPUT_RX_PIN_REG1_LANE
                            714 	.globl _INPUT_RX_PIN_REG0_LANE
                            715 	.globl _RX_SYSTEM_LANE
                            716 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            717 	.globl _MON_TOP
                            718 	.globl _ANALOG_TX_REALTIME_REG_1
                            719 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            720 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            721 	.globl __FIELDNAME__LANE
                            722 	.globl _INPUT_TX_PIN_REG5_LANE
                            723 	.globl _DIG_TX_RSVD_REG0
                            724 	.globl _TX_CALIBRATION_LANE
                            725 	.globl _INPUT_TX_PIN_REG4_LANE
                            726 	.globl _TX_SYSTEM_LANE
                            727 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            728 	.globl _SPD_CTRL_INTERRUPT_REG2
                            729 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            730 	.globl _TX_SPEED_CONVERT_LANE
                            731 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            732 	.globl _PM_CTRL_INTERRUPT_REG2
                            733 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            734 	.globl _INPUT_TX_PIN_REG3_LANE
                            735 	.globl _INPUT_TX_PIN_REG2_LANE
                            736 	.globl _INPUT_TX_PIN_REG1_LANE
                            737 	.globl _INPUT_TX_PIN_REG0_LANE
                            738 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            739 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            823 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            824 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            825 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            826 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            827 	.globl _ANA_DFEO_REG_0B
                            828 	.globl _ANA_DFEO_REG_0A
                            829 	.globl _ANA_DFEO_REG_09
                            830 	.globl _ANA_DFEO_REG_08
                            831 	.globl _ANA_DFEO_REG_07
                            832 	.globl _ANA_DFEO_REG_06
                            833 	.globl _ANA_DFEO_REG_05
                            834 	.globl _ANA_DFEO_REG_04
                            835 	.globl _ANA_DFEO_REG_03
                            836 	.globl _ANA_DFEO_REG_02
                            837 	.globl _ANA_DFEO_REG_01
                            838 	.globl _ANA_DFEO_REG_00
                            839 	.globl _ANA_DFEO_REG_27
                            840 	.globl _ANA_DFEO_REG_26
                            841 	.globl _ANA_DFEO_REG_25
                            842 	.globl _ANA_DFEO_REG_24
                            843 	.globl _ANA_DFEO_REG_23
                            844 	.globl _ANA_DFEO_REG_22
                            845 	.globl _ANA_DFEO_REG_21
                            846 	.globl _ANA_DFEO_REG_20
                            847 	.globl _ANA_DFEO_REG_1F
                            848 	.globl _ANA_DFEO_REG_1E
                            849 	.globl _ANA_DFEO_REG_1D
                            850 	.globl _ANA_DFEO_REG_1C
                            851 	.globl _ANA_DFEO_REG_1B
                            852 	.globl _ANA_DFEO_REG_1A
                            853 	.globl _ANA_DFEO_REG_19
                            854 	.globl _ANA_DFEO_REG_18
                            855 	.globl _ANA_DFEO_REG_17
                            856 	.globl _ANA_DFEO_REG_16
                            857 	.globl _ANA_DFEO_REG_15
                            858 	.globl _ANA_DFEO_REG_14
                            859 	.globl _ANA_DFEO_REG_13
                            860 	.globl _ANA_DFEO_REG_12
                            861 	.globl _ANA_DFEO_REG_11
                            862 	.globl _ANA_DFEO_REG_10
                            863 	.globl _ANA_DFEO_REG_0F
                            864 	.globl _ANA_DFEO_REG_0E
                            865 	.globl _ANA_DFEO_REG_0D
                            866 	.globl _ANA_DFEO_REG_0C
                            867 	.globl _ANA_DFEE_REG_1D
                            868 	.globl _ANA_DFEE_REG_1C
                            869 	.globl _ANA_DFEE_REG_1B
                            870 	.globl _ANA_DFEE_REG_1A
                            871 	.globl _ANA_DFEE_REG_19
                            872 	.globl _ANA_DFEE_REG_18
                            873 	.globl _ANA_DFEE_REG_17
                            874 	.globl _ANA_DFEE_REG_16
                            875 	.globl _ANA_DFEE_REG_15
                            876 	.globl _ANA_DFEE_REG_14
                            877 	.globl _ANA_DFEE_REG_13
                            878 	.globl _ANA_DFEE_REG_12
                            879 	.globl _ANA_DFEE_REG_11
                            880 	.globl _ANA_DFEE_REG_10
                            881 	.globl _ANA_DFEE_REG_0F
                            882 	.globl _ANA_DFEE_REG_0E
                            883 	.globl _ANA_DFEE_REG_0D
                            884 	.globl _ANA_DFEE_REG_0C
                            885 	.globl _ANA_DFEE_REG_0B
                            886 	.globl _ANA_DFEE_REG_0A
                            887 	.globl _ANA_DFEE_REG_09
                            888 	.globl _ANA_DFEE_REG_08
                            889 	.globl _ANA_DFEE_REG_07
                            890 	.globl _ANA_DFEE_REG_06
                            891 	.globl _ANA_DFEE_REG_05
                            892 	.globl _ANA_DFEE_REG_04
                            893 	.globl _ANA_DFEE_REG_03
                            894 	.globl _ANA_DFEE_REG_02
                            895 	.globl _ANA_DFEE_REG_01
                            896 	.globl _ANA_DFEE_REG_00
                            897 	.globl _ANA_DFEE_REG_27
                            898 	.globl _ANA_DFEE_REG_26
                            899 	.globl _ANA_DFEE_REG_25
                            900 	.globl _ANA_DFEE_REG_24
                            901 	.globl _ANA_DFEE_REG_23
                            902 	.globl _ANA_DFEE_REG_22
                            903 	.globl _ANA_DFEE_REG_21
                            904 	.globl _ANA_DFEE_REG_20
                            905 	.globl _ANA_DFEE_REG_1F
                            906 	.globl _ANA_DFEE_REG_1E
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            936 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            937 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            938 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            939 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            966 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            967 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            968 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            969 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            982 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            983 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            984 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            985 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            986 	.globl _dfe_adaptation
                            987 	.globl _DFE_Final_Calculation
                            988 	.globl _level_ffe
                            989 	.globl _Check_F0d
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
                           2033 	.area BANK1   (CODE)
                           2034 ;------------------------------------------------------------
                           2035 ;Allocation info for local variables in function 'dfe_adaptation'
                           2036 ;------------------------------------------------------------
                           2037 ;cnt                       Allocated to stack - offset 1
                           2038 ;max_cnt                   Allocated to stack - offset 2
                           2039 ;dfe_err_loop_cnt          Allocated to registers r2 
                           2040 ;------------------------------------------------------------
                           2041 ;	../../shared/src/dfe_adaptation.c:30: void dfe_adaptation( void ) BANKING_CTRL {
                           2042 ;	-----------------------------------------
                           2043 ;	 function dfe_adaptation
                           2044 ;	-----------------------------------------
   9CEE                    2045 _dfe_adaptation:
                    0002   2046 	ar2 = 0x02
                    0003   2047 	ar3 = 0x03
                    0004   2048 	ar4 = 0x04
                    0005   2049 	ar5 = 0x05
                    0006   2050 	ar6 = 0x06
                    0007   2051 	ar7 = 0x07
                    0000   2052 	ar0 = 0x00
                    0001   2053 	ar1 = 0x01
                           2054 ;	../../shared/src/dfe_adaptation.c:35: lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch
   9CEE 90 60 38           2055 	mov	dptr,#_DFE_CONTROL_1
   9CF1 E0                 2056 	movx	a,@dptr
   9CF2 54 7F              2057 	anl	a,#0x7f
   9CF4 F0                 2058 	movx	@dptr,a
                           2059 ;	../../shared/src/dfe_adaptation.c:71: if(lnx_FORCE_CDS_CTRL_EN_LANE) 
   9CF5 90 60 98           2060 	mov	dptr,#_DFE_CONTROL_10
   9CF8 E0                 2061 	movx	a,@dptr
   9CF9 30 E1 10           2062 	jnb	acc.1,00102$
                           2063 ;	../../shared/src/dfe_adaptation.c:72: cds_tb = lnx_FORCE_CDS_CTRL_LANE_15_0;		
   9CFC 90 60 9C           2064 	mov	dptr,#_DFE_CONTROL_11
   9CFF E0                 2065 	movx	a,@dptr
   9D00 FA                 2066 	mov	r2,a
   9D01 A3                 2067 	inc	dptr
   9D02 E0                 2068 	movx	a,@dptr
   9D03 FB                 2069 	mov	r3,a
   9D04 90 61 74           2070 	mov	dptr,#_CDS_READ_MISC1
   9D07 EA                 2071 	mov	a,r2
   9D08 F0                 2072 	movx	@dptr,a
   9D09 A3                 2073 	inc	dptr
   9D0A EB                 2074 	mov	a,r3
   9D0B F0                 2075 	movx	@dptr,a
   9D0C                    2076 00102$:
                           2077 ;	../../shared/src/dfe_adaptation.c:82: dfe_err_found = 0;	dfe_err_loop_cnt = 3;
   9D0C 90 67 99           2078 	mov	dptr,#_dfe_err_found
   9D0F E4                 2079 	clr	a
   9D10 F0                 2080 	movx	@dptr,a
                           2081 ;	../../shared/src/dfe_adaptation.c:83: do {	
   9D11 7A 03              2082 	mov	r2,#0x03
   9D13                    2083 00110$:
                           2084 ;	../../shared/src/dfe_adaptation.c:84: cdr_dfe_scheme();
   9D13 C0 02              2085 	push	ar2
   9D15 78 96              2086 	mov	r0,#_cdr_dfe_scheme
   9D17 79 92              2087 	mov	r1,#(_cdr_dfe_scheme >> 8)
   9D19 7A 01              2088 	mov	r2,#(_cdr_dfe_scheme >> 16)
   9D1B 12 00 B3           2089 	lcall	__sdcc_banked_call
   9D1E D0 02              2090 	pop	ar2
                           2091 ;	../../shared/src/dfe_adaptation.c:85: if(dfe_err_found==0) break;
   9D20 90 67 99           2092 	mov	dptr,#_dfe_err_found
   9D23 E0                 2093 	movx	a,@dptr
   9D24 FB                 2094 	mov	r3,a
   9D25 60 27              2095 	jz	00112$
                           2096 ;	../../shared/src/dfe_adaptation.c:88: if(lnx_DFE_DBG_STEP_MODE_LANE_7_0==1) {
   9D27 90 60 37           2097 	mov	dptr,#(_DFE_CONTROL_0 + 0x0003)
   9D2A E0                 2098 	movx	a,@dptr
   9D2B FB                 2099 	mov	r3,a
   9D2C BB 01 10           2100 	cjne	r3,#0x01,00111$
                           2101 ;	../../shared/src/dfe_adaptation.c:89: lnx_DFE_DBG_STEP_LANE_7_0 = 1; 		
   9D2F 90 60 40           2102 	mov	dptr,#_DFE_CONTROL_2
   9D32 74 01              2103 	mov	a,#0x01
   9D34 F0                 2104 	movx	@dptr,a
                           2105 ;	../../shared/src/dfe_adaptation.c:90: while(lnx_DFE_DBG_STEP_LANE_7_0==1);		
   9D35                    2106 00105$:
   9D35 90 60 40           2107 	mov	dptr,#_DFE_CONTROL_2
   9D38 E0                 2108 	movx	a,@dptr
   9D39 FB                 2109 	mov	r3,a
   9D3A BB 01 02           2110 	cjne	r3,#0x01,00125$
   9D3D 80 F6              2111 	sjmp	00105$
   9D3F                    2112 00125$:
   9D3F                    2113 00111$:
                           2114 ;	../../shared/src/dfe_adaptation.c:93: } while( dfe_err_loop_cnt-->0);		
   9D3F 8A 03              2115 	mov	ar3,r2
   9D41 1A                 2116 	dec	r2
   9D42 C3                 2117 	clr	c
   9D43 74 80              2118 	mov	a,#(0x00 ^ 0x80)
   9D45 8B F0              2119 	mov	b,r3
   9D47 63 F0 80           2120 	xrl	b,#0x80
   9D4A 95 F0              2121 	subb	a,b
   9D4C 40 C5              2122 	jc	00110$
   9D4E                    2123 00112$:
                           2124 ;	../../shared/src/dfe_adaptation.c:134: DFE_Final_Calculation();
   9D4E 78 89              2125 	mov	r0,#_DFE_Final_Calculation
   9D50 79 A2              2126 	mov	r1,#(_DFE_Final_Calculation >> 8)
   9D52 7A 01              2127 	mov	r2,#(_DFE_Final_Calculation >> 16)
   9D54 12 00 B3           2128 	lcall	__sdcc_banked_call
                           2129 ;	../../shared/src/dfe_adaptation.c:136: level_ffe();
   9D57 78 38              2130 	mov	r0,#_level_ffe
   9D59 79 A8              2131 	mov	r1,#(_level_ffe >> 8)
   9D5B 7A 01              2132 	mov	r2,#(_level_ffe >> 16)
   9D5D 12 00 B3           2133 	lcall	__sdcc_banked_call
                           2134 ;	../../shared/src/dfe_adaptation.c:144: lnx_DFE_CAL_DONE_LANE = 1; 
   9D60 90 60 38           2135 	mov	dptr,#_DFE_CONTROL_1
   9D63 E0                 2136 	movx	a,@dptr
   9D64 44 80              2137 	orl	a,#0x80
   9D66 F0                 2138 	movx	@dptr,a
                           2139 ;	../../shared/src/dfe_adaptation.c:147: lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
   9D67 90 66 58           2140 	mov	dptr,#(_train + 0x0018)
   9D6A E0                 2141 	movx	a,@dptr
   9D6B FA                 2142 	mov	r2,a
   9D6C 90 60 4A           2143 	mov	dptr,#(_DFE_CONTROL_4 + 0x0002)
   9D6F EA                 2144 	mov	a,r2
   9D70 F0                 2145 	movx	@dptr,a
                           2146 ;	../../shared/src/dfe_adaptation.c:148: lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
   9D71 90 66 59           2147 	mov	dptr,#(_train + 0x0019)
   9D74 E0                 2148 	movx	a,@dptr
   9D75 FA                 2149 	mov	r2,a
   9D76 90 60 49           2150 	mov	dptr,#(_DFE_CONTROL_4 + 0x0001)
   9D79 EA                 2151 	mov	a,r2
   9D7A F0                 2152 	movx	@dptr,a
                           2153 ;	../../shared/src/dfe_adaptation.c:149: lnx_TRAIN_F0D_LANE_7_0 = train.eo;
   9D7B 90 66 5F           2154 	mov	dptr,#(_train + 0x001f)
   9D7E E0                 2155 	movx	a,@dptr
   9D7F FA                 2156 	mov	r2,a
   9D80 90 60 48           2157 	mov	dptr,#_DFE_CONTROL_4
   9D83 EA                 2158 	mov	a,r2
   9D84 F0                 2159 	movx	@dptr,a
                           2160 ;	../../shared/src/dfe_adaptation.c:150: lnx_TRAIN_F0B_LANE_7_0 = train.f0;
   9D85 90 66 5A           2161 	mov	dptr,#(_train + 0x001a)
   9D88 E0                 2162 	movx	a,@dptr
   9D89 FA                 2163 	mov	r2,a
   9D8A 90 60 4B           2164 	mov	dptr,#(_DFE_CONTROL_4 + 0x0003)
   9D8D EA                 2165 	mov	a,r2
   9D8E F0                 2166 	movx	@dptr,a
   9D8F 02 00 C5           2167 	ljmp	__sdcc_banked_ret
                           2168 ;------------------------------------------------------------
                           2169 ;Allocation info for local variables in function 'pre_calculation'
                           2170 ;------------------------------------------------------------
                           2171 ;val                       Allocated to registers r2 
                           2172 ;sum                       Allocated to registers r2 r3 
                           2173 ;------------------------------------------------------------
                           2174 ;	../../shared/src/dfe_adaptation.c:154: void pre_calculation(void) BANKING_CTRL {
                           2175 ;	-----------------------------------------
                           2176 ;	 function pre_calculation
                           2177 ;	-----------------------------------------
   9D92                    2178 _pre_calculation:
                           2179 ;	../../shared/src/dfe_adaptation.c:158: val = cds28.f0a.s_p_e;
   9D92 90 61 4A           2180 	mov	dptr,#(_cds28 + 0x004a)
   9D95 E0                 2181 	movx	a,@dptr
   9D96 FA                 2182 	mov	r2,a
                           2183 ;	../../shared/src/dfe_adaptation.c:159: val = max(cds28.f0a.s_n_e, val);
   9D97 90 61 4B           2184 	mov	dptr,#(_cds28 + 0x004b)
   9D9A E0                 2185 	movx	a,@dptr
   9D9B FB                 2186 	mov	r3,a
   9D9C C0 02              2187 	push	ar2
   9D9E 8B 82              2188 	mov	dpl,r3
   9DA0 78 12              2189 	mov	r0,#_max
   9DA2 79 C0              2190 	mov	r1,#(_max >> 8)
   9DA4 7A 02              2191 	mov	r2,#(_max >> 16)
   9DA6 12 00 B3           2192 	lcall	__sdcc_banked_call
   9DA9 AB 82              2193 	mov	r3,dpl
   9DAB 15 81              2194 	dec	sp
   9DAD 8B 02              2195 	mov	ar2,r3
                           2196 ;	../../shared/src/dfe_adaptation.c:160: val = max(cds28.f0a.s_p_o, val);
   9DAF 90 61 4E           2197 	mov	dptr,#(_cds28 + 0x004e)
   9DB2 E0                 2198 	movx	a,@dptr
   9DB3 FB                 2199 	mov	r3,a
   9DB4 C0 02              2200 	push	ar2
   9DB6 8B 82              2201 	mov	dpl,r3
   9DB8 78 12              2202 	mov	r0,#_max
   9DBA 79 C0              2203 	mov	r1,#(_max >> 8)
   9DBC 7A 02              2204 	mov	r2,#(_max >> 16)
   9DBE 12 00 B3           2205 	lcall	__sdcc_banked_call
   9DC1 AB 82              2206 	mov	r3,dpl
   9DC3 15 81              2207 	dec	sp
   9DC5 8B 02              2208 	mov	ar2,r3
                           2209 ;	../../shared/src/dfe_adaptation.c:161: train.f0a_max_slicer = max(cds28.f0a.s_n_o, val);
   9DC7 90 61 4F           2210 	mov	dptr,#(_cds28 + 0x004f)
   9DCA E0                 2211 	movx	a,@dptr
   9DCB FB                 2212 	mov	r3,a
   9DCC C0 02              2213 	push	ar2
   9DCE 8B 82              2214 	mov	dpl,r3
   9DD0 78 12              2215 	mov	r0,#_max
   9DD2 79 C0              2216 	mov	r1,#(_max >> 8)
   9DD4 7A 02              2217 	mov	r2,#(_max >> 16)
   9DD6 12 00 B3           2218 	lcall	__sdcc_banked_call
   9DD9 AB 82              2219 	mov	r3,dpl
   9DDB 15 81              2220 	dec	sp
   9DDD 90 66 43           2221 	mov	dptr,#(_train + 0x0003)
   9DE0 EB                 2222 	mov	a,r3
   9DE1 F0                 2223 	movx	@dptr,a
                           2224 ;	../../shared/src/dfe_adaptation.c:163: val = cds28.f0a.d_p_e;
   9DE2 90 61 48           2225 	mov	dptr,#(_cds28 + 0x0048)
   9DE5 E0                 2226 	movx	a,@dptr
   9DE6 FA                 2227 	mov	r2,a
                           2228 ;	../../shared/src/dfe_adaptation.c:164: val = max(cds28.f0a.d_n_e, val);
   9DE7 90 61 49           2229 	mov	dptr,#(_cds28 + 0x0049)
   9DEA E0                 2230 	movx	a,@dptr
   9DEB FB                 2231 	mov	r3,a
   9DEC C0 02              2232 	push	ar2
   9DEE 8B 82              2233 	mov	dpl,r3
   9DF0 78 12              2234 	mov	r0,#_max
   9DF2 79 C0              2235 	mov	r1,#(_max >> 8)
   9DF4 7A 02              2236 	mov	r2,#(_max >> 16)
   9DF6 12 00 B3           2237 	lcall	__sdcc_banked_call
   9DF9 AB 82              2238 	mov	r3,dpl
   9DFB 15 81              2239 	dec	sp
   9DFD 8B 02              2240 	mov	ar2,r3
                           2241 ;	../../shared/src/dfe_adaptation.c:165: val = max(cds28.f0a.d_p_o, val);
   9DFF 90 61 4C           2242 	mov	dptr,#(_cds28 + 0x004c)
   9E02 E0                 2243 	movx	a,@dptr
   9E03 FB                 2244 	mov	r3,a
   9E04 C0 02              2245 	push	ar2
   9E06 8B 82              2246 	mov	dpl,r3
   9E08 78 12              2247 	mov	r0,#_max
   9E0A 79 C0              2248 	mov	r1,#(_max >> 8)
   9E0C 7A 02              2249 	mov	r2,#(_max >> 16)
   9E0E 12 00 B3           2250 	lcall	__sdcc_banked_call
   9E11 AB 82              2251 	mov	r3,dpl
   9E13 15 81              2252 	dec	sp
   9E15 8B 02              2253 	mov	ar2,r3
                           2254 ;	../../shared/src/dfe_adaptation.c:166: train.f0a_max_data = max(cds28.f0a.d_n_o, val);
   9E17 90 61 4D           2255 	mov	dptr,#(_cds28 + 0x004d)
   9E1A E0                 2256 	movx	a,@dptr
   9E1B FB                 2257 	mov	r3,a
   9E1C C0 02              2258 	push	ar2
   9E1E 8B 82              2259 	mov	dpl,r3
   9E20 78 12              2260 	mov	r0,#_max
   9E22 79 C0              2261 	mov	r1,#(_max >> 8)
   9E24 7A 02              2262 	mov	r2,#(_max >> 16)
   9E26 12 00 B3           2263 	lcall	__sdcc_banked_call
   9E29 AA 82              2264 	mov	r2,dpl
   9E2B 15 81              2265 	dec	sp
   9E2D 90 66 42           2266 	mov	dptr,#(_train + 0x0002)
   9E30 EA                 2267 	mov	a,r2
   9E31 F0                 2268 	movx	@dptr,a
                           2269 ;	../../shared/src/dfe_adaptation.c:168: train.f0a_slicer = ( cds28.f0a.s_p_e + cds28.f0a.s_n_e + cds28.f0a.s_p_o + cds28.f0a.s_n_o ) >> 2;
   9E32 90 61 4A           2270 	mov	dptr,#(_cds28 + 0x004a)
   9E35 E0                 2271 	movx	a,@dptr
   9E36 FA                 2272 	mov	r2,a
   9E37 7B 00              2273 	mov	r3,#0x00
   9E39 90 61 4B           2274 	mov	dptr,#(_cds28 + 0x004b)
   9E3C E0                 2275 	movx	a,@dptr
   9E3D FC                 2276 	mov	r4,a
   9E3E 7D 00              2277 	mov	r5,#0x00
   9E40 EC                 2278 	mov	a,r4
   9E41 2A                 2279 	add	a,r2
   9E42 FA                 2280 	mov	r2,a
   9E43 ED                 2281 	mov	a,r5
   9E44 3B                 2282 	addc	a,r3
   9E45 FB                 2283 	mov	r3,a
   9E46 90 61 4E           2284 	mov	dptr,#(_cds28 + 0x004e)
   9E49 E0                 2285 	movx	a,@dptr
   9E4A FC                 2286 	mov	r4,a
   9E4B 7D 00              2287 	mov	r5,#0x00
   9E4D EC                 2288 	mov	a,r4
   9E4E 2A                 2289 	add	a,r2
   9E4F FA                 2290 	mov	r2,a
   9E50 ED                 2291 	mov	a,r5
   9E51 3B                 2292 	addc	a,r3
   9E52 FB                 2293 	mov	r3,a
   9E53 90 61 4F           2294 	mov	dptr,#(_cds28 + 0x004f)
   9E56 E0                 2295 	movx	a,@dptr
   9E57 FC                 2296 	mov	r4,a
   9E58 7D 00              2297 	mov	r5,#0x00
   9E5A EC                 2298 	mov	a,r4
   9E5B 2A                 2299 	add	a,r2
   9E5C FA                 2300 	mov	r2,a
   9E5D ED                 2301 	mov	a,r5
   9E5E 3B                 2302 	addc	a,r3
   9E5F A2 E7              2303 	mov	c,acc.7
   9E61 13                 2304 	rrc	a
   9E62 CA                 2305 	xch	a,r2
   9E63 13                 2306 	rrc	a
   9E64 CA                 2307 	xch	a,r2
   9E65 A2 E7              2308 	mov	c,acc.7
   9E67 13                 2309 	rrc	a
   9E68 CA                 2310 	xch	a,r2
   9E69 13                 2311 	rrc	a
   9E6A CA                 2312 	xch	a,r2
   9E6B 90 66 41           2313 	mov	dptr,#(_train + 0x0001)
   9E6E EA                 2314 	mov	a,r2
   9E6F F0                 2315 	movx	@dptr,a
                           2316 ;	../../shared/src/dfe_adaptation.c:169: train.f0a_data = ( cds28.f0a.d_p_e + cds28.f0a.d_n_e + cds28.f0a.d_p_o + cds28.f0a.d_n_o ) >> 2;
   9E70 90 61 48           2317 	mov	dptr,#(_cds28 + 0x0048)
   9E73 E0                 2318 	movx	a,@dptr
   9E74 FA                 2319 	mov	r2,a
   9E75 7B 00              2320 	mov	r3,#0x00
   9E77 90 61 49           2321 	mov	dptr,#(_cds28 + 0x0049)
   9E7A E0                 2322 	movx	a,@dptr
   9E7B FC                 2323 	mov	r4,a
   9E7C 7D 00              2324 	mov	r5,#0x00
   9E7E EC                 2325 	mov	a,r4
   9E7F 2A                 2326 	add	a,r2
   9E80 FA                 2327 	mov	r2,a
   9E81 ED                 2328 	mov	a,r5
   9E82 3B                 2329 	addc	a,r3
   9E83 FB                 2330 	mov	r3,a
   9E84 90 61 4C           2331 	mov	dptr,#(_cds28 + 0x004c)
   9E87 E0                 2332 	movx	a,@dptr
   9E88 FC                 2333 	mov	r4,a
   9E89 7D 00              2334 	mov	r5,#0x00
   9E8B EC                 2335 	mov	a,r4
   9E8C 2A                 2336 	add	a,r2
   9E8D FA                 2337 	mov	r2,a
   9E8E ED                 2338 	mov	a,r5
   9E8F 3B                 2339 	addc	a,r3
   9E90 FB                 2340 	mov	r3,a
   9E91 90 61 4D           2341 	mov	dptr,#(_cds28 + 0x004d)
   9E94 E0                 2342 	movx	a,@dptr
   9E95 FC                 2343 	mov	r4,a
   9E96 7D 00              2344 	mov	r5,#0x00
   9E98 EC                 2345 	mov	a,r4
   9E99 2A                 2346 	add	a,r2
   9E9A FA                 2347 	mov	r2,a
   9E9B ED                 2348 	mov	a,r5
   9E9C 3B                 2349 	addc	a,r3
   9E9D A2 E7              2350 	mov	c,acc.7
   9E9F 13                 2351 	rrc	a
   9EA0 CA                 2352 	xch	a,r2
   9EA1 13                 2353 	rrc	a
   9EA2 CA                 2354 	xch	a,r2
   9EA3 A2 E7              2355 	mov	c,acc.7
   9EA5 13                 2356 	rrc	a
   9EA6 CA                 2357 	xch	a,r2
   9EA7 13                 2358 	rrc	a
   9EA8 CA                 2359 	xch	a,r2
   9EA9 90 66 40           2360 	mov	dptr,#_train
   9EAC EA                 2361 	mov	a,r2
   9EAD F0                 2362 	movx	@dptr,a
                           2363 ;	../../shared/src/dfe_adaptation.c:170: train.f0_slicer = ( cds28.f0b.s_p_e + cds28.f0b.s_n_e + cds28.f0b.s_p_o + cds28.f0b.s_n_o ) >> 2;
   9EAE 90 61 52           2364 	mov	dptr,#(_cds28 + 0x0052)
   9EB1 E0                 2365 	movx	a,@dptr
   9EB2 FA                 2366 	mov	r2,a
   9EB3 7B 00              2367 	mov	r3,#0x00
   9EB5 90 61 53           2368 	mov	dptr,#(_cds28 + 0x0053)
   9EB8 E0                 2369 	movx	a,@dptr
   9EB9 FC                 2370 	mov	r4,a
   9EBA 7D 00              2371 	mov	r5,#0x00
   9EBC EC                 2372 	mov	a,r4
   9EBD 2A                 2373 	add	a,r2
   9EBE FA                 2374 	mov	r2,a
   9EBF ED                 2375 	mov	a,r5
   9EC0 3B                 2376 	addc	a,r3
   9EC1 FB                 2377 	mov	r3,a
   9EC2 90 61 56           2378 	mov	dptr,#(_cds28 + 0x0056)
   9EC5 E0                 2379 	movx	a,@dptr
   9EC6 FC                 2380 	mov	r4,a
   9EC7 7D 00              2381 	mov	r5,#0x00
   9EC9 EC                 2382 	mov	a,r4
   9ECA 2A                 2383 	add	a,r2
   9ECB FA                 2384 	mov	r2,a
   9ECC ED                 2385 	mov	a,r5
   9ECD 3B                 2386 	addc	a,r3
   9ECE FB                 2387 	mov	r3,a
   9ECF 90 61 57           2388 	mov	dptr,#(_cds28 + 0x0057)
   9ED2 E0                 2389 	movx	a,@dptr
   9ED3 FC                 2390 	mov	r4,a
   9ED4 7D 00              2391 	mov	r5,#0x00
   9ED6 EC                 2392 	mov	a,r4
   9ED7 2A                 2393 	add	a,r2
   9ED8 FA                 2394 	mov	r2,a
   9ED9 ED                 2395 	mov	a,r5
   9EDA 3B                 2396 	addc	a,r3
   9EDB A2 E7              2397 	mov	c,acc.7
   9EDD 13                 2398 	rrc	a
   9EDE CA                 2399 	xch	a,r2
   9EDF 13                 2400 	rrc	a
   9EE0 CA                 2401 	xch	a,r2
   9EE1 A2 E7              2402 	mov	c,acc.7
   9EE3 13                 2403 	rrc	a
   9EE4 CA                 2404 	xch	a,r2
   9EE5 13                 2405 	rrc	a
   9EE6 CA                 2406 	xch	a,r2
   9EE7 90 66 45           2407 	mov	dptr,#(_train + 0x0005)
   9EEA EA                 2408 	mov	a,r2
   9EEB F0                 2409 	movx	@dptr,a
                           2410 ;	../../shared/src/dfe_adaptation.c:171: train.f0_data = ( cds28.f0b.d_p_e + cds28.f0b.d_n_e + cds28.f0b.d_p_o + cds28.f0b.d_n_o ) >> 2;
   9EEC 90 61 50           2411 	mov	dptr,#(_cds28 + 0x0050)
   9EEF E0                 2412 	movx	a,@dptr
   9EF0 FA                 2413 	mov	r2,a
   9EF1 7B 00              2414 	mov	r3,#0x00
   9EF3 90 61 51           2415 	mov	dptr,#(_cds28 + 0x0051)
   9EF6 E0                 2416 	movx	a,@dptr
   9EF7 FC                 2417 	mov	r4,a
   9EF8 7D 00              2418 	mov	r5,#0x00
   9EFA EC                 2419 	mov	a,r4
   9EFB 2A                 2420 	add	a,r2
   9EFC FA                 2421 	mov	r2,a
   9EFD ED                 2422 	mov	a,r5
   9EFE 3B                 2423 	addc	a,r3
   9EFF FB                 2424 	mov	r3,a
   9F00 90 61 54           2425 	mov	dptr,#(_cds28 + 0x0054)
   9F03 E0                 2426 	movx	a,@dptr
   9F04 FC                 2427 	mov	r4,a
   9F05 7D 00              2428 	mov	r5,#0x00
   9F07 EC                 2429 	mov	a,r4
   9F08 2A                 2430 	add	a,r2
   9F09 FA                 2431 	mov	r2,a
   9F0A ED                 2432 	mov	a,r5
   9F0B 3B                 2433 	addc	a,r3
   9F0C FB                 2434 	mov	r3,a
   9F0D 90 61 55           2435 	mov	dptr,#(_cds28 + 0x0055)
   9F10 E0                 2436 	movx	a,@dptr
   9F11 FC                 2437 	mov	r4,a
   9F12 7D 00              2438 	mov	r5,#0x00
   9F14 EC                 2439 	mov	a,r4
   9F15 2A                 2440 	add	a,r2
   9F16 FA                 2441 	mov	r2,a
   9F17 ED                 2442 	mov	a,r5
   9F18 3B                 2443 	addc	a,r3
   9F19 A2 E7              2444 	mov	c,acc.7
   9F1B 13                 2445 	rrc	a
   9F1C CA                 2446 	xch	a,r2
   9F1D 13                 2447 	rrc	a
   9F1E CA                 2448 	xch	a,r2
   9F1F A2 E7              2449 	mov	c,acc.7
   9F21 13                 2450 	rrc	a
   9F22 CA                 2451 	xch	a,r2
   9F23 13                 2452 	rrc	a
   9F24 CA                 2453 	xch	a,r2
   9F25 90 66 44           2454 	mov	dptr,#(_train + 0x0004)
   9F28 EA                 2455 	mov	a,r2
   9F29 F0                 2456 	movx	@dptr,a
                           2457 ;	../../shared/src/dfe_adaptation.c:172: train.f1 = (cds28.dfe_2c.f1_e + cds28.dfe_2c.f1_o ) >> 1;
   9F2A 90 61 0C           2458 	mov	dptr,#(_cds28 + 0x000c)
   9F2D E0                 2459 	movx	a,@dptr
   9F2E FA                 2460 	mov	r2,a
   9F2F 33                 2461 	rlc	a
   9F30 95 E0              2462 	subb	a,acc
   9F32 FB                 2463 	mov	r3,a
   9F33 90 61 2C           2464 	mov	dptr,#(_cds28 + 0x002c)
   9F36 E0                 2465 	movx	a,@dptr
   9F37 FC                 2466 	mov	r4,a
   9F38 33                 2467 	rlc	a
   9F39 95 E0              2468 	subb	a,acc
   9F3B FD                 2469 	mov	r5,a
   9F3C EC                 2470 	mov	a,r4
   9F3D 2A                 2471 	add	a,r2
   9F3E FA                 2472 	mov	r2,a
   9F3F ED                 2473 	mov	a,r5
   9F40 3B                 2474 	addc	a,r3
   9F41 A2 E7              2475 	mov	c,acc.7
   9F43 13                 2476 	rrc	a
   9F44 CA                 2477 	xch	a,r2
   9F45 13                 2478 	rrc	a
   9F46 CA                 2479 	xch	a,r2
   9F47 90 66 46           2480 	mov	dptr,#(_train + 0x0006)
   9F4A EA                 2481 	mov	a,r2
   9F4B F0                 2482 	movx	@dptr,a
                           2483 ;	../../shared/src/dfe_adaptation.c:173: train.f2_data = (cds28.dfe_2c.f2_d_p_e + cds28.dfe_2c.f2_d_n_e + cds28.dfe_2c.f2_d_p_o + cds28.dfe_2c.f2_d_n_o ) >> 2; 
   9F4C 90 61 04           2484 	mov	dptr,#(_cds28 + 0x0004)
   9F4F E0                 2485 	movx	a,@dptr
   9F50 FA                 2486 	mov	r2,a
   9F51 33                 2487 	rlc	a
   9F52 95 E0              2488 	subb	a,acc
   9F54 FB                 2489 	mov	r3,a
   9F55 90 61 05           2490 	mov	dptr,#(_cds28 + 0x0005)
   9F58 E0                 2491 	movx	a,@dptr
   9F59 FC                 2492 	mov	r4,a
   9F5A 33                 2493 	rlc	a
   9F5B 95 E0              2494 	subb	a,acc
   9F5D FD                 2495 	mov	r5,a
   9F5E EC                 2496 	mov	a,r4
   9F5F 2A                 2497 	add	a,r2
   9F60 FA                 2498 	mov	r2,a
   9F61 ED                 2499 	mov	a,r5
   9F62 3B                 2500 	addc	a,r3
   9F63 FB                 2501 	mov	r3,a
   9F64 90 61 24           2502 	mov	dptr,#(_cds28 + 0x0024)
   9F67 E0                 2503 	movx	a,@dptr
   9F68 FC                 2504 	mov	r4,a
   9F69 33                 2505 	rlc	a
   9F6A 95 E0              2506 	subb	a,acc
   9F6C FD                 2507 	mov	r5,a
   9F6D EC                 2508 	mov	a,r4
   9F6E 2A                 2509 	add	a,r2
   9F6F FA                 2510 	mov	r2,a
   9F70 ED                 2511 	mov	a,r5
   9F71 3B                 2512 	addc	a,r3
   9F72 FB                 2513 	mov	r3,a
   9F73 90 61 25           2514 	mov	dptr,#(_cds28 + 0x0025)
   9F76 E0                 2515 	movx	a,@dptr
   9F77 FC                 2516 	mov	r4,a
   9F78 33                 2517 	rlc	a
   9F79 95 E0              2518 	subb	a,acc
   9F7B FD                 2519 	mov	r5,a
   9F7C EC                 2520 	mov	a,r4
   9F7D 2A                 2521 	add	a,r2
   9F7E FA                 2522 	mov	r2,a
   9F7F ED                 2523 	mov	a,r5
   9F80 3B                 2524 	addc	a,r3
   9F81 A2 E7              2525 	mov	c,acc.7
   9F83 13                 2526 	rrc	a
   9F84 CA                 2527 	xch	a,r2
   9F85 13                 2528 	rrc	a
   9F86 CA                 2529 	xch	a,r2
   9F87 A2 E7              2530 	mov	c,acc.7
   9F89 13                 2531 	rrc	a
   9F8A CA                 2532 	xch	a,r2
   9F8B 13                 2533 	rrc	a
   9F8C CA                 2534 	xch	a,r2
   9F8D 90 66 47           2535 	mov	dptr,#(_train + 0x0007)
   9F90 EA                 2536 	mov	a,r2
   9F91 F0                 2537 	movx	@dptr,a
                           2538 ;	../../shared/src/dfe_adaptation.c:174: train.f2_slicer = (cds28.dfe_2c.f2_s_p_e + cds28.dfe_2c.f2_s_n_e + cds28.dfe_2c.f2_s_p_o + cds28.dfe_2c.f2_s_n_o ) >> 2; 
   9F92 90 61 06           2539 	mov	dptr,#(_cds28 + 0x0006)
   9F95 E0                 2540 	movx	a,@dptr
   9F96 FA                 2541 	mov	r2,a
   9F97 33                 2542 	rlc	a
   9F98 95 E0              2543 	subb	a,acc
   9F9A FB                 2544 	mov	r3,a
   9F9B 90 61 07           2545 	mov	dptr,#(_cds28 + 0x0007)
   9F9E E0                 2546 	movx	a,@dptr
   9F9F FC                 2547 	mov	r4,a
   9FA0 33                 2548 	rlc	a
   9FA1 95 E0              2549 	subb	a,acc
   9FA3 FD                 2550 	mov	r5,a
   9FA4 EC                 2551 	mov	a,r4
   9FA5 2A                 2552 	add	a,r2
   9FA6 FA                 2553 	mov	r2,a
   9FA7 ED                 2554 	mov	a,r5
   9FA8 3B                 2555 	addc	a,r3
   9FA9 FB                 2556 	mov	r3,a
   9FAA 90 61 26           2557 	mov	dptr,#(_cds28 + 0x0026)
   9FAD E0                 2558 	movx	a,@dptr
   9FAE FC                 2559 	mov	r4,a
   9FAF 33                 2560 	rlc	a
   9FB0 95 E0              2561 	subb	a,acc
   9FB2 FD                 2562 	mov	r5,a
   9FB3 EC                 2563 	mov	a,r4
   9FB4 2A                 2564 	add	a,r2
   9FB5 FA                 2565 	mov	r2,a
   9FB6 ED                 2566 	mov	a,r5
   9FB7 3B                 2567 	addc	a,r3
   9FB8 FB                 2568 	mov	r3,a
   9FB9 90 61 27           2569 	mov	dptr,#(_cds28 + 0x0027)
   9FBC E0                 2570 	movx	a,@dptr
   9FBD FC                 2571 	mov	r4,a
   9FBE 33                 2572 	rlc	a
   9FBF 95 E0              2573 	subb	a,acc
   9FC1 FD                 2574 	mov	r5,a
   9FC2 EC                 2575 	mov	a,r4
   9FC3 2A                 2576 	add	a,r2
   9FC4 FA                 2577 	mov	r2,a
   9FC5 ED                 2578 	mov	a,r5
   9FC6 3B                 2579 	addc	a,r3
   9FC7 A2 E7              2580 	mov	c,acc.7
   9FC9 13                 2581 	rrc	a
   9FCA CA                 2582 	xch	a,r2
   9FCB 13                 2583 	rrc	a
   9FCC CA                 2584 	xch	a,r2
   9FCD A2 E7              2585 	mov	c,acc.7
   9FCF 13                 2586 	rrc	a
   9FD0 CA                 2587 	xch	a,r2
   9FD1 13                 2588 	rrc	a
   9FD2 CA                 2589 	xch	a,r2
   9FD3 90 66 48           2590 	mov	dptr,#(_train + 0x0008)
   9FD6 EA                 2591 	mov	a,r2
   9FD7 F0                 2592 	movx	@dptr,a
                           2593 ;	../../shared/src/dfe_adaptation.c:175: train.f3_data = (cds28.dfe_2c.f3_d_p_e + cds28.dfe_2c.f3_d_n_e + cds28.dfe_2c.f3_d_p_o + cds28.dfe_2c.f3_d_n_o ) >> 2; 
   9FD8 90 61 08           2594 	mov	dptr,#(_cds28 + 0x0008)
   9FDB E0                 2595 	movx	a,@dptr
   9FDC FA                 2596 	mov	r2,a
   9FDD 33                 2597 	rlc	a
   9FDE 95 E0              2598 	subb	a,acc
   9FE0 FB                 2599 	mov	r3,a
   9FE1 90 61 09           2600 	mov	dptr,#(_cds28 + 0x0009)
   9FE4 E0                 2601 	movx	a,@dptr
   9FE5 FC                 2602 	mov	r4,a
   9FE6 33                 2603 	rlc	a
   9FE7 95 E0              2604 	subb	a,acc
   9FE9 FD                 2605 	mov	r5,a
   9FEA EC                 2606 	mov	a,r4
   9FEB 2A                 2607 	add	a,r2
   9FEC FA                 2608 	mov	r2,a
   9FED ED                 2609 	mov	a,r5
   9FEE 3B                 2610 	addc	a,r3
   9FEF FB                 2611 	mov	r3,a
   9FF0 90 61 28           2612 	mov	dptr,#(_cds28 + 0x0028)
   9FF3 E0                 2613 	movx	a,@dptr
   9FF4 FC                 2614 	mov	r4,a
   9FF5 33                 2615 	rlc	a
   9FF6 95 E0              2616 	subb	a,acc
   9FF8 FD                 2617 	mov	r5,a
   9FF9 EC                 2618 	mov	a,r4
   9FFA 2A                 2619 	add	a,r2
   9FFB FA                 2620 	mov	r2,a
   9FFC ED                 2621 	mov	a,r5
   9FFD 3B                 2622 	addc	a,r3
   9FFE FB                 2623 	mov	r3,a
   9FFF 90 61 29           2624 	mov	dptr,#(_cds28 + 0x0029)
   A002 E0                 2625 	movx	a,@dptr
   A003 FC                 2626 	mov	r4,a
   A004 33                 2627 	rlc	a
   A005 95 E0              2628 	subb	a,acc
   A007 FD                 2629 	mov	r5,a
   A008 EC                 2630 	mov	a,r4
   A009 2A                 2631 	add	a,r2
   A00A FA                 2632 	mov	r2,a
   A00B ED                 2633 	mov	a,r5
   A00C 3B                 2634 	addc	a,r3
   A00D A2 E7              2635 	mov	c,acc.7
   A00F 13                 2636 	rrc	a
   A010 CA                 2637 	xch	a,r2
   A011 13                 2638 	rrc	a
   A012 CA                 2639 	xch	a,r2
   A013 A2 E7              2640 	mov	c,acc.7
   A015 13                 2641 	rrc	a
   A016 CA                 2642 	xch	a,r2
   A017 13                 2643 	rrc	a
   A018 CA                 2644 	xch	a,r2
   A019 90 66 49           2645 	mov	dptr,#(_train + 0x0009)
   A01C EA                 2646 	mov	a,r2
   A01D F0                 2647 	movx	@dptr,a
                           2648 ;	../../shared/src/dfe_adaptation.c:176: train.f3_slicer = (cds28.dfe_2c.f3_s_p_e + cds28.dfe_2c.f3_s_n_e + cds28.dfe_2c.f3_s_p_o + cds28.dfe_2c.f3_s_n_o ) >> 2; 
   A01E 90 61 0A           2649 	mov	dptr,#(_cds28 + 0x000a)
   A021 E0                 2650 	movx	a,@dptr
   A022 FA                 2651 	mov	r2,a
   A023 33                 2652 	rlc	a
   A024 95 E0              2653 	subb	a,acc
   A026 FB                 2654 	mov	r3,a
   A027 90 61 0B           2655 	mov	dptr,#(_cds28 + 0x000b)
   A02A E0                 2656 	movx	a,@dptr
   A02B FC                 2657 	mov	r4,a
   A02C 33                 2658 	rlc	a
   A02D 95 E0              2659 	subb	a,acc
   A02F FD                 2660 	mov	r5,a
   A030 EC                 2661 	mov	a,r4
   A031 2A                 2662 	add	a,r2
   A032 FA                 2663 	mov	r2,a
   A033 ED                 2664 	mov	a,r5
   A034 3B                 2665 	addc	a,r3
   A035 FB                 2666 	mov	r3,a
   A036 90 61 2A           2667 	mov	dptr,#(_cds28 + 0x002a)
   A039 E0                 2668 	movx	a,@dptr
   A03A FC                 2669 	mov	r4,a
   A03B 33                 2670 	rlc	a
   A03C 95 E0              2671 	subb	a,acc
   A03E FD                 2672 	mov	r5,a
   A03F EC                 2673 	mov	a,r4
   A040 2A                 2674 	add	a,r2
   A041 FA                 2675 	mov	r2,a
   A042 ED                 2676 	mov	a,r5
   A043 3B                 2677 	addc	a,r3
   A044 FB                 2678 	mov	r3,a
   A045 90 61 2B           2679 	mov	dptr,#(_cds28 + 0x002b)
   A048 E0                 2680 	movx	a,@dptr
   A049 FC                 2681 	mov	r4,a
   A04A 33                 2682 	rlc	a
   A04B 95 E0              2683 	subb	a,acc
   A04D FD                 2684 	mov	r5,a
   A04E EC                 2685 	mov	a,r4
   A04F 2A                 2686 	add	a,r2
   A050 FA                 2687 	mov	r2,a
   A051 ED                 2688 	mov	a,r5
   A052 3B                 2689 	addc	a,r3
   A053 A2 E7              2690 	mov	c,acc.7
   A055 13                 2691 	rrc	a
   A056 CA                 2692 	xch	a,r2
   A057 13                 2693 	rrc	a
   A058 CA                 2694 	xch	a,r2
   A059 A2 E7              2695 	mov	c,acc.7
   A05B 13                 2696 	rrc	a
   A05C CA                 2697 	xch	a,r2
   A05D 13                 2698 	rrc	a
   A05E CA                 2699 	xch	a,r2
   A05F 90 66 4A           2700 	mov	dptr,#(_train + 0x000a)
   A062 EA                 2701 	mov	a,r2
   A063 F0                 2702 	movx	@dptr,a
                           2703 ;	../../shared/src/dfe_adaptation.c:177: train.f4 = (cds28.dfe_2c.f4_e + cds28.dfe_2c.f4_o) >> 1;
   A064 90 61 0D           2704 	mov	dptr,#(_cds28 + 0x000d)
   A067 E0                 2705 	movx	a,@dptr
   A068 FA                 2706 	mov	r2,a
   A069 33                 2707 	rlc	a
   A06A 95 E0              2708 	subb	a,acc
   A06C FB                 2709 	mov	r3,a
   A06D 90 61 2D           2710 	mov	dptr,#(_cds28 + 0x002d)
   A070 E0                 2711 	movx	a,@dptr
   A071 FC                 2712 	mov	r4,a
   A072 33                 2713 	rlc	a
   A073 95 E0              2714 	subb	a,acc
   A075 FD                 2715 	mov	r5,a
   A076 EC                 2716 	mov	a,r4
   A077 2A                 2717 	add	a,r2
   A078 FA                 2718 	mov	r2,a
   A079 ED                 2719 	mov	a,r5
   A07A 3B                 2720 	addc	a,r3
   A07B A2 E7              2721 	mov	c,acc.7
   A07D 13                 2722 	rrc	a
   A07E CA                 2723 	xch	a,r2
   A07F 13                 2724 	rrc	a
   A080 CA                 2725 	xch	a,r2
   A081 90 66 4B           2726 	mov	dptr,#(_train + 0x000b)
   A084 EA                 2727 	mov	a,r2
   A085 F0                 2728 	movx	@dptr,a
                           2729 ;	../../shared/src/dfe_adaptation.c:178: train.f5 = (cds28.dfe_2c.f5_e + cds28.dfe_2c.f5_o) >> 1;
   A086 90 61 0E           2730 	mov	dptr,#(_cds28 + 0x000e)
   A089 E0                 2731 	movx	a,@dptr
   A08A FA                 2732 	mov	r2,a
   A08B 33                 2733 	rlc	a
   A08C 95 E0              2734 	subb	a,acc
   A08E FB                 2735 	mov	r3,a
   A08F 90 61 2E           2736 	mov	dptr,#(_cds28 + 0x002e)
   A092 E0                 2737 	movx	a,@dptr
   A093 FC                 2738 	mov	r4,a
   A094 33                 2739 	rlc	a
   A095 95 E0              2740 	subb	a,acc
   A097 FD                 2741 	mov	r5,a
   A098 EC                 2742 	mov	a,r4
   A099 2A                 2743 	add	a,r2
   A09A FA                 2744 	mov	r2,a
   A09B ED                 2745 	mov	a,r5
   A09C 3B                 2746 	addc	a,r3
   A09D A2 E7              2747 	mov	c,acc.7
   A09F 13                 2748 	rrc	a
   A0A0 CA                 2749 	xch	a,r2
   A0A1 13                 2750 	rrc	a
   A0A2 CA                 2751 	xch	a,r2
   A0A3 90 66 4C           2752 	mov	dptr,#(_train + 0x000c)
   A0A6 EA                 2753 	mov	a,r2
   A0A7 F0                 2754 	movx	@dptr,a
                           2755 ;	../../shared/src/dfe_adaptation.c:179: train.f6 = (cds28.dfe_2c.f6_e + cds28.dfe_2c.f6_o) >> 1;
   A0A8 90 61 0F           2756 	mov	dptr,#(_cds28 + 0x000f)
   A0AB E0                 2757 	movx	a,@dptr
   A0AC FA                 2758 	mov	r2,a
   A0AD 33                 2759 	rlc	a
   A0AE 95 E0              2760 	subb	a,acc
   A0B0 FB                 2761 	mov	r3,a
   A0B1 90 61 2F           2762 	mov	dptr,#(_cds28 + 0x002f)
   A0B4 E0                 2763 	movx	a,@dptr
   A0B5 FC                 2764 	mov	r4,a
   A0B6 33                 2765 	rlc	a
   A0B7 95 E0              2766 	subb	a,acc
   A0B9 FD                 2767 	mov	r5,a
   A0BA EC                 2768 	mov	a,r4
   A0BB 2A                 2769 	add	a,r2
   A0BC FA                 2770 	mov	r2,a
   A0BD ED                 2771 	mov	a,r5
   A0BE 3B                 2772 	addc	a,r3
   A0BF A2 E7              2773 	mov	c,acc.7
   A0C1 13                 2774 	rrc	a
   A0C2 CA                 2775 	xch	a,r2
   A0C3 13                 2776 	rrc	a
   A0C4 CA                 2777 	xch	a,r2
   A0C5 90 66 4D           2778 	mov	dptr,#(_train + 0x000d)
   A0C8 EA                 2779 	mov	a,r2
   A0C9 F0                 2780 	movx	@dptr,a
                           2781 ;	../../shared/src/dfe_adaptation.c:180: train.f7 = (cds28.dfe_2c.f7_e + cds28.dfe_2c.f7_o) >> 1;
   A0CA 90 61 10           2782 	mov	dptr,#(_cds28 + 0x0010)
   A0CD E0                 2783 	movx	a,@dptr
   A0CE FA                 2784 	mov	r2,a
   A0CF 33                 2785 	rlc	a
   A0D0 95 E0              2786 	subb	a,acc
   A0D2 FB                 2787 	mov	r3,a
   A0D3 90 61 30           2788 	mov	dptr,#(_cds28 + 0x0030)
   A0D6 E0                 2789 	movx	a,@dptr
   A0D7 FC                 2790 	mov	r4,a
   A0D8 33                 2791 	rlc	a
   A0D9 95 E0              2792 	subb	a,acc
   A0DB FD                 2793 	mov	r5,a
   A0DC EC                 2794 	mov	a,r4
   A0DD 2A                 2795 	add	a,r2
   A0DE FA                 2796 	mov	r2,a
   A0DF ED                 2797 	mov	a,r5
   A0E0 3B                 2798 	addc	a,r3
   A0E1 A2 E7              2799 	mov	c,acc.7
   A0E3 13                 2800 	rrc	a
   A0E4 CA                 2801 	xch	a,r2
   A0E5 13                 2802 	rrc	a
   A0E6 CA                 2803 	xch	a,r2
   A0E7 90 66 4E           2804 	mov	dptr,#(_train + 0x000e)
   A0EA EA                 2805 	mov	a,r2
   A0EB F0                 2806 	movx	@dptr,a
                           2807 ;	../../shared/src/dfe_adaptation.c:184: train.eo_slicer = ( cds28.f0d.s_p_e + cds28.f0d.s_n_e + cds28.f0d.s_p_o + cds28.f0d.s_n_o ) >> 2;
   A0EC 90 61 5A           2808 	mov	dptr,#(_cds28 + 0x005a)
   A0EF E0                 2809 	movx	a,@dptr
   A0F0 FA                 2810 	mov	r2,a
   A0F1 7B 00              2811 	mov	r3,#0x00
   A0F3 90 61 5B           2812 	mov	dptr,#(_cds28 + 0x005b)
   A0F6 E0                 2813 	movx	a,@dptr
   A0F7 FC                 2814 	mov	r4,a
   A0F8 7D 00              2815 	mov	r5,#0x00
   A0FA EC                 2816 	mov	a,r4
   A0FB 2A                 2817 	add	a,r2
   A0FC FA                 2818 	mov	r2,a
   A0FD ED                 2819 	mov	a,r5
   A0FE 3B                 2820 	addc	a,r3
   A0FF FB                 2821 	mov	r3,a
   A100 90 61 5E           2822 	mov	dptr,#(_cds28 + 0x005e)
   A103 E0                 2823 	movx	a,@dptr
   A104 FC                 2824 	mov	r4,a
   A105 7D 00              2825 	mov	r5,#0x00
   A107 EC                 2826 	mov	a,r4
   A108 2A                 2827 	add	a,r2
   A109 FA                 2828 	mov	r2,a
   A10A ED                 2829 	mov	a,r5
   A10B 3B                 2830 	addc	a,r3
   A10C FB                 2831 	mov	r3,a
   A10D 90 61 5F           2832 	mov	dptr,#(_cds28 + 0x005f)
   A110 E0                 2833 	movx	a,@dptr
   A111 FC                 2834 	mov	r4,a
   A112 7D 00              2835 	mov	r5,#0x00
   A114 EC                 2836 	mov	a,r4
   A115 2A                 2837 	add	a,r2
   A116 FA                 2838 	mov	r2,a
   A117 ED                 2839 	mov	a,r5
   A118 3B                 2840 	addc	a,r3
   A119 A2 E7              2841 	mov	c,acc.7
   A11B 13                 2842 	rrc	a
   A11C CA                 2843 	xch	a,r2
   A11D 13                 2844 	rrc	a
   A11E CA                 2845 	xch	a,r2
   A11F A2 E7              2846 	mov	c,acc.7
   A121 13                 2847 	rrc	a
   A122 CA                 2848 	xch	a,r2
   A123 13                 2849 	rrc	a
   A124 CA                 2850 	xch	a,r2
   A125 90 66 50           2851 	mov	dptr,#(_train + 0x0010)
   A128 EA                 2852 	mov	a,r2
   A129 F0                 2853 	movx	@dptr,a
                           2854 ;	../../shared/src/dfe_adaptation.c:185: train.eo_data = ( cds28.f0d.d_p_e + cds28.f0d.d_n_e + cds28.f0d.d_p_o + cds28.f0d.d_n_o ) >> 2;	
   A12A 90 61 58           2855 	mov	dptr,#(_cds28 + 0x0058)
   A12D E0                 2856 	movx	a,@dptr
   A12E FA                 2857 	mov	r2,a
   A12F 7B 00              2858 	mov	r3,#0x00
   A131 90 61 59           2859 	mov	dptr,#(_cds28 + 0x0059)
   A134 E0                 2860 	movx	a,@dptr
   A135 FC                 2861 	mov	r4,a
   A136 7D 00              2862 	mov	r5,#0x00
   A138 EC                 2863 	mov	a,r4
   A139 2A                 2864 	add	a,r2
   A13A FA                 2865 	mov	r2,a
   A13B ED                 2866 	mov	a,r5
   A13C 3B                 2867 	addc	a,r3
   A13D FB                 2868 	mov	r3,a
   A13E 90 61 5C           2869 	mov	dptr,#(_cds28 + 0x005c)
   A141 E0                 2870 	movx	a,@dptr
   A142 FC                 2871 	mov	r4,a
   A143 7D 00              2872 	mov	r5,#0x00
   A145 EC                 2873 	mov	a,r4
   A146 2A                 2874 	add	a,r2
   A147 FA                 2875 	mov	r2,a
   A148 ED                 2876 	mov	a,r5
   A149 3B                 2877 	addc	a,r3
   A14A FB                 2878 	mov	r3,a
   A14B 90 61 5D           2879 	mov	dptr,#(_cds28 + 0x005d)
   A14E E0                 2880 	movx	a,@dptr
   A14F FC                 2881 	mov	r4,a
   A150 7D 00              2882 	mov	r5,#0x00
   A152 EC                 2883 	mov	a,r4
   A153 2A                 2884 	add	a,r2
   A154 FA                 2885 	mov	r2,a
   A155 ED                 2886 	mov	a,r5
   A156 3B                 2887 	addc	a,r3
   A157 A2 E7              2888 	mov	c,acc.7
   A159 13                 2889 	rrc	a
   A15A CA                 2890 	xch	a,r2
   A15B 13                 2891 	rrc	a
   A15C CA                 2892 	xch	a,r2
   A15D A2 E7              2893 	mov	c,acc.7
   A15F 13                 2894 	rrc	a
   A160 CA                 2895 	xch	a,r2
   A161 13                 2896 	rrc	a
   A162 CA                 2897 	xch	a,r2
   A163 FB                 2898 	mov	r3,a
   A164 90 66 4F           2899 	mov	dptr,#(_train + 0x000f)
   A167 EA                 2900 	mov	a,r2
   A168 F0                 2901 	movx	@dptr,a
                           2902 ;	../../shared/src/dfe_adaptation.c:207: if(lnx_VH_EO_MODE_LANE) {
   A169 90 60 A0           2903 	mov	dptr,#_CDS_CTRL_REG0
   A16C E0                 2904 	movx	a,@dptr
   A16D 20 E3 03           2905 	jb	acc.3,00109$
   A170 02 A1 F0           2906 	ljmp	00102$
   A173                    2907 00109$:
                           2908 ;	../../shared/src/dfe_adaptation.c:208: train.f0d_slicer_left = ( cds28.f0d_left.s_p_e + cds28.f0d_left.s_n_e + cds28.f0d_left.s_p_o + cds28.f0d_left.s_n_o ) >> 2;
   A173 90 61 62           2909 	mov	dptr,#(_cds28 + 0x0062)
   A176 E0                 2910 	movx	a,@dptr
   A177 FA                 2911 	mov	r2,a
   A178 7B 00              2912 	mov	r3,#0x00
   A17A 90 61 63           2913 	mov	dptr,#(_cds28 + 0x0063)
   A17D E0                 2914 	movx	a,@dptr
   A17E FC                 2915 	mov	r4,a
   A17F 7D 00              2916 	mov	r5,#0x00
   A181 EC                 2917 	mov	a,r4
   A182 2A                 2918 	add	a,r2
   A183 FA                 2919 	mov	r2,a
   A184 ED                 2920 	mov	a,r5
   A185 3B                 2921 	addc	a,r3
   A186 FB                 2922 	mov	r3,a
   A187 90 61 66           2923 	mov	dptr,#(_cds28 + 0x0066)
   A18A E0                 2924 	movx	a,@dptr
   A18B FC                 2925 	mov	r4,a
   A18C 7D 00              2926 	mov	r5,#0x00
   A18E EC                 2927 	mov	a,r4
   A18F 2A                 2928 	add	a,r2
   A190 FA                 2929 	mov	r2,a
   A191 ED                 2930 	mov	a,r5
   A192 3B                 2931 	addc	a,r3
   A193 FB                 2932 	mov	r3,a
   A194 90 61 67           2933 	mov	dptr,#(_cds28 + 0x0067)
   A197 E0                 2934 	movx	a,@dptr
   A198 FC                 2935 	mov	r4,a
   A199 7D 00              2936 	mov	r5,#0x00
   A19B EC                 2937 	mov	a,r4
   A19C 2A                 2938 	add	a,r2
   A19D FA                 2939 	mov	r2,a
   A19E ED                 2940 	mov	a,r5
   A19F 3B                 2941 	addc	a,r3
   A1A0 A2 E7              2942 	mov	c,acc.7
   A1A2 13                 2943 	rrc	a
   A1A3 CA                 2944 	xch	a,r2
   A1A4 13                 2945 	rrc	a
   A1A5 CA                 2946 	xch	a,r2
   A1A6 A2 E7              2947 	mov	c,acc.7
   A1A8 13                 2948 	rrc	a
   A1A9 CA                 2949 	xch	a,r2
   A1AA 13                 2950 	rrc	a
   A1AB CA                 2951 	xch	a,r2
   A1AC 90 66 52           2952 	mov	dptr,#(_train + 0x0012)
   A1AF EA                 2953 	mov	a,r2
   A1B0 F0                 2954 	movx	@dptr,a
                           2955 ;	../../shared/src/dfe_adaptation.c:209: train.f0d_slicer_right = ( cds28.f0d_right.s_p_e + cds28.f0d_right.s_n_e + cds28.f0d_right.s_p_o + cds28.f0d_right.s_n_o ) >> 2;	
   A1B1 90 61 6A           2956 	mov	dptr,#(_cds28 + 0x006a)
   A1B4 E0                 2957 	movx	a,@dptr
   A1B5 FA                 2958 	mov	r2,a
   A1B6 7B 00              2959 	mov	r3,#0x00
   A1B8 90 61 6B           2960 	mov	dptr,#(_cds28 + 0x006b)
   A1BB E0                 2961 	movx	a,@dptr
   A1BC FC                 2962 	mov	r4,a
   A1BD 7D 00              2963 	mov	r5,#0x00
   A1BF EC                 2964 	mov	a,r4
   A1C0 2A                 2965 	add	a,r2
   A1C1 FA                 2966 	mov	r2,a
   A1C2 ED                 2967 	mov	a,r5
   A1C3 3B                 2968 	addc	a,r3
   A1C4 FB                 2969 	mov	r3,a
   A1C5 90 61 6E           2970 	mov	dptr,#(_cds28 + 0x006e)
   A1C8 E0                 2971 	movx	a,@dptr
   A1C9 FC                 2972 	mov	r4,a
   A1CA 7D 00              2973 	mov	r5,#0x00
   A1CC EC                 2974 	mov	a,r4
   A1CD 2A                 2975 	add	a,r2
   A1CE FA                 2976 	mov	r2,a
   A1CF ED                 2977 	mov	a,r5
   A1D0 3B                 2978 	addc	a,r3
   A1D1 FB                 2979 	mov	r3,a
   A1D2 90 61 6F           2980 	mov	dptr,#(_cds28 + 0x006f)
   A1D5 E0                 2981 	movx	a,@dptr
   A1D6 FC                 2982 	mov	r4,a
   A1D7 7D 00              2983 	mov	r5,#0x00
   A1D9 EC                 2984 	mov	a,r4
   A1DA 2A                 2985 	add	a,r2
   A1DB FA                 2986 	mov	r2,a
   A1DC ED                 2987 	mov	a,r5
   A1DD 3B                 2988 	addc	a,r3
   A1DE A2 E7              2989 	mov	c,acc.7
   A1E0 13                 2990 	rrc	a
   A1E1 CA                 2991 	xch	a,r2
   A1E2 13                 2992 	rrc	a
   A1E3 CA                 2993 	xch	a,r2
   A1E4 A2 E7              2994 	mov	c,acc.7
   A1E6 13                 2995 	rrc	a
   A1E7 CA                 2996 	xch	a,r2
   A1E8 13                 2997 	rrc	a
   A1E9 CA                 2998 	xch	a,r2
   A1EA FB                 2999 	mov	r3,a
   A1EB 90 66 54           3000 	mov	dptr,#(_train + 0x0014)
   A1EE EA                 3001 	mov	a,r2
   A1EF F0                 3002 	movx	@dptr,a
   A1F0                    3003 00102$:
                           3004 ;	../../shared/src/dfe_adaptation.c:213: train.eye_check_pass = cds28.eye_check_pass;
   A1F0 90 61 70           3005 	mov	dptr,#(_cds28 + 0x0070)
   A1F3 E0                 3006 	movx	a,@dptr
   A1F4 90 66 55           3007 	mov	dptr,#(_train + 0x0015)
   A1F7 F0                 3008 	movx	@dptr,a
                           3009 ;	../../shared/src/dfe_adaptation.c:215: if(cds_tb & dc_adapt_en) {
   A1F8 90 61 74           3010 	mov	dptr,#_CDS_READ_MISC1
   A1FB E0                 3011 	movx	a,@dptr
   A1FC FA                 3012 	mov	r2,a
   A1FD A3                 3013 	inc	dptr
   A1FE E0                 3014 	movx	a,@dptr
   A1FF FB                 3015 	mov	r3,a
   A200 20 E1 03           3016 	jb	acc.1,00110$
   A203 02 A2 86           3017 	ljmp	00105$
   A206                    3018 00110$:
                           3019 ;	../../shared/src/dfe_adaptation.c:216: sum = (int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0;
   A206 90 25 10           3020 	mov	dptr,#_DFE_READ_EVEN_2C_REG8
   A209 E0                 3021 	movx	a,@dptr
   A20A FA                 3022 	mov	r2,a
   A20B 33                 3023 	rlc	a
   A20C 95 E0              3024 	subb	a,acc
   A20E FB                 3025 	mov	r3,a
                           3026 ;	../../shared/src/dfe_adaptation.c:217: sum -= (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0;
   A20F 90 25 11           3027 	mov	dptr,#(_DFE_READ_EVEN_2C_REG8 + 0x0001)
   A212 E0                 3028 	movx	a,@dptr
   A213 FC                 3029 	mov	r4,a
   A214 33                 3030 	rlc	a
   A215 95 E0              3031 	subb	a,acc
   A217 FD                 3032 	mov	r5,a
   A218 EA                 3033 	mov	a,r2
   A219 C3                 3034 	clr	c
   A21A 9C                 3035 	subb	a,r4
   A21B FA                 3036 	mov	r2,a
   A21C EB                 3037 	mov	a,r3
   A21D 9D                 3038 	subb	a,r5
   A21E FB                 3039 	mov	r3,a
                           3040 ;	../../shared/src/dfe_adaptation.c:218: sum += (int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0;
   A21F 90 25 14           3041 	mov	dptr,#_DFE_READ_ODD_2C_REG8
   A222 E0                 3042 	movx	a,@dptr
   A223 FC                 3043 	mov	r4,a
   A224 33                 3044 	rlc	a
   A225 95 E0              3045 	subb	a,acc
   A227 FD                 3046 	mov	r5,a
   A228 EC                 3047 	mov	a,r4
   A229 2A                 3048 	add	a,r2
   A22A FA                 3049 	mov	r2,a
   A22B ED                 3050 	mov	a,r5
   A22C 3B                 3051 	addc	a,r3
   A22D FB                 3052 	mov	r3,a
                           3053 ;	../../shared/src/dfe_adaptation.c:219: sum -= (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0;		
   A22E 90 25 15           3054 	mov	dptr,#(_DFE_READ_ODD_2C_REG8 + 0x0001)
   A231 E0                 3055 	movx	a,@dptr
   A232 FC                 3056 	mov	r4,a
   A233 33                 3057 	rlc	a
   A234 95 E0              3058 	subb	a,acc
   A236 FD                 3059 	mov	r5,a
   A237 EA                 3060 	mov	a,r2
   A238 C3                 3061 	clr	c
   A239 9C                 3062 	subb	a,r4
   A23A FA                 3063 	mov	r2,a
   A23B EB                 3064 	mov	a,r3
   A23C 9D                 3065 	subb	a,r5
                           3066 ;	../../shared/src/dfe_adaptation.c:220: train.ofst_data = (int8_t)sum;
   A23D 8A 04              3067 	mov	ar4,r2
   A23F 90 66 56           3068 	mov	dptr,#(_train + 0x0016)
   A242 EC                 3069 	mov	a,r4
   A243 F0                 3070 	movx	@dptr,a
                           3071 ;	../../shared/src/dfe_adaptation.c:222: sum = (int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0;
   A244 90 25 12           3072 	mov	dptr,#(_DFE_READ_EVEN_2C_REG8 + 0x0002)
   A247 E0                 3073 	movx	a,@dptr
   A248 FA                 3074 	mov	r2,a
   A249 33                 3075 	rlc	a
   A24A 95 E0              3076 	subb	a,acc
   A24C FB                 3077 	mov	r3,a
                           3078 ;	../../shared/src/dfe_adaptation.c:223: sum -= (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0;
   A24D 90 25 13           3079 	mov	dptr,#(_DFE_READ_EVEN_2C_REG8 + 0x0003)
   A250 E0                 3080 	movx	a,@dptr
   A251 FC                 3081 	mov	r4,a
   A252 33                 3082 	rlc	a
   A253 95 E0              3083 	subb	a,acc
   A255 FD                 3084 	mov	r5,a
   A256 EA                 3085 	mov	a,r2
   A257 C3                 3086 	clr	c
   A258 9C                 3087 	subb	a,r4
   A259 FA                 3088 	mov	r2,a
   A25A EB                 3089 	mov	a,r3
   A25B 9D                 3090 	subb	a,r5
   A25C FB                 3091 	mov	r3,a
                           3092 ;	../../shared/src/dfe_adaptation.c:224: sum += (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0;
   A25D 90 25 16           3093 	mov	dptr,#(_DFE_READ_ODD_2C_REG8 + 0x0002)
   A260 E0                 3094 	movx	a,@dptr
   A261 FC                 3095 	mov	r4,a
   A262 33                 3096 	rlc	a
   A263 95 E0              3097 	subb	a,acc
   A265 FD                 3098 	mov	r5,a
   A266 EC                 3099 	mov	a,r4
   A267 2A                 3100 	add	a,r2
   A268 FA                 3101 	mov	r2,a
   A269 ED                 3102 	mov	a,r5
   A26A 3B                 3103 	addc	a,r3
   A26B FB                 3104 	mov	r3,a
                           3105 ;	../../shared/src/dfe_adaptation.c:225: sum -= (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0;		
   A26C 90 25 17           3106 	mov	dptr,#(_DFE_READ_ODD_2C_REG8 + 0x0003)
   A26F E0                 3107 	movx	a,@dptr
   A270 FC                 3108 	mov	r4,a
   A271 33                 3109 	rlc	a
   A272 95 E0              3110 	subb	a,acc
   A274 FD                 3111 	mov	r5,a
   A275 EA                 3112 	mov	a,r2
   A276 C3                 3113 	clr	c
   A277 9C                 3114 	subb	a,r4
   A278 FA                 3115 	mov	r2,a
   A279 EB                 3116 	mov	a,r3
   A27A 9D                 3117 	subb	a,r5
   A27B FB                 3118 	mov	r3,a
                           3119 ;	../../shared/src/dfe_adaptation.c:226: train.ofst_slicer = (int8_t)sum;		
   A27C 90 66 57           3120 	mov	dptr,#(_train + 0x0017)
   A27F EA                 3121 	mov	a,r2
   A280 F0                 3122 	movx	@dptr,a
                           3123 ;	../../shared/src/dfe_adaptation.c:228: ofst_sat = 0;		
   A281 90 67 96           3124 	mov	dptr,#_ofst_sat
   A284 E4                 3125 	clr	a
   A285 F0                 3126 	movx	@dptr,a
   A286                    3127 00105$:
   A286 02 00 C5           3128 	ljmp	__sdcc_banked_ret
                           3129 ;------------------------------------------------------------
                           3130 ;Allocation info for local variables in function 'DFE_Final_Calculation'
                           3131 ;------------------------------------------------------------
                           3132 ;f0_minus_abs_fn1          Allocated to registers r5 
                           3133 ;sum_my_abs_fx             Allocated to registers r2 r3 
                           3134 ;sloc0                     Allocated to stack - offset 1
                           3135 ;------------------------------------------------------------
                           3136 ;	../../shared/src/dfe_adaptation.c:244: void DFE_Final_Calculation( void ) BANKING_CTRL {
                           3137 ;	-----------------------------------------
                           3138 ;	 function DFE_Final_Calculation
                           3139 ;	-----------------------------------------
   A289                    3140 _DFE_Final_Calculation:
   A289 C0 18              3141 	push	_bp
   A28B 85 81 18           3142 	mov	_bp,sp
   A28E 05 81              3143 	inc	sp
                           3144 ;	../../shared/src/dfe_adaptation.c:293: pre_calculation();
   A290 78 92              3145 	mov	r0,#_pre_calculation
   A292 79 9D              3146 	mov	r1,#(_pre_calculation >> 8)
   A294 7A 01              3147 	mov	r2,#(_pre_calculation >> 16)
   A296 12 00 B3           3148 	lcall	__sdcc_banked_call
                           3149 ;	../../shared/src/dfe_adaptation.c:299: if ((adapt_data_en==1 && adapt_slicer_en==0) /*|| ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==0) */)
   A299 30 0D 37           3150 	jnb	_adapt_data_en,00106$
   A29C 20 0C 34           3151 	jb	_adapt_slicer_en,00106$
                           3152 ;	../../shared/src/dfe_adaptation.c:301: train.f0 = train.f0_data;
   A29F 90 66 44           3153 	mov	dptr,#(_train + 0x0004)
   A2A2 E0                 3154 	movx	a,@dptr
   A2A3 90 66 5A           3155 	mov	dptr,#(_train + 0x001a)
   A2A6 F0                 3156 	movx	@dptr,a
                           3157 ;	../../shared/src/dfe_adaptation.c:302: train.f0a = train.f0a_data;
   A2A7 90 66 40           3158 	mov	dptr,#_train
   A2AA E0                 3159 	movx	a,@dptr
   A2AB 90 66 59           3160 	mov	dptr,#(_train + 0x0019)
   A2AE F0                 3161 	movx	@dptr,a
                           3162 ;	../../shared/src/dfe_adaptation.c:303: train.f0a_max = train.f0a_max_data;
   A2AF 90 66 42           3163 	mov	dptr,#(_train + 0x0002)
   A2B2 E0                 3164 	movx	a,@dptr
   A2B3 90 66 58           3165 	mov	dptr,#(_train + 0x0018)
   A2B6 F0                 3166 	movx	@dptr,a
                           3167 ;	../../shared/src/dfe_adaptation.c:304: train.f2 = train.f2_data;
   A2B7 90 66 47           3168 	mov	dptr,#(_train + 0x0007)
   A2BA E0                 3169 	movx	a,@dptr
   A2BB 90 66 5B           3170 	mov	dptr,#(_train + 0x001b)
   A2BE F0                 3171 	movx	@dptr,a
                           3172 ;	../../shared/src/dfe_adaptation.c:305: train.f3 = train.f3_data;
   A2BF 90 66 49           3173 	mov	dptr,#(_train + 0x0009)
   A2C2 E0                 3174 	movx	a,@dptr
   A2C3 90 66 5C           3175 	mov	dptr,#(_train + 0x001c)
   A2C6 F0                 3176 	movx	@dptr,a
                           3177 ;	../../shared/src/dfe_adaptation.c:307: train.eo = train.eo_data;
   A2C7 90 66 4F           3178 	mov	dptr,#(_train + 0x000f)
   A2CA E0                 3179 	movx	a,@dptr
   A2CB FA                 3180 	mov	r2,a
   A2CC 90 66 5F           3181 	mov	dptr,#(_train + 0x001f)
   A2CF F0                 3182 	movx	@dptr,a
   A2D0 02 A3 EC           3183 	ljmp	00107$
   A2D3                    3184 00106$:
                           3185 ;	../../shared/src/dfe_adaptation.c:314: else if ((adapt_data_en==0 && adapt_slicer_en==1) /*|| (((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en=0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==1)*/ )
   A2D3 20 0D 37           3186 	jb	_adapt_data_en,00102$
   A2D6 30 0C 34           3187 	jnb	_adapt_slicer_en,00102$
                           3188 ;	../../shared/src/dfe_adaptation.c:316: train.f0 = train.f0_slicer;
   A2D9 90 66 45           3189 	mov	dptr,#(_train + 0x0005)
   A2DC E0                 3190 	movx	a,@dptr
   A2DD 90 66 5A           3191 	mov	dptr,#(_train + 0x001a)
   A2E0 F0                 3192 	movx	@dptr,a
                           3193 ;	../../shared/src/dfe_adaptation.c:317: train.f0a = train.f0a_slicer;
   A2E1 90 66 41           3194 	mov	dptr,#(_train + 0x0001)
   A2E4 E0                 3195 	movx	a,@dptr
   A2E5 90 66 59           3196 	mov	dptr,#(_train + 0x0019)
   A2E8 F0                 3197 	movx	@dptr,a
                           3198 ;	../../shared/src/dfe_adaptation.c:318: train.f0a_max = train.f0a_max_slicer;
   A2E9 90 66 43           3199 	mov	dptr,#(_train + 0x0003)
   A2EC E0                 3200 	movx	a,@dptr
   A2ED 90 66 58           3201 	mov	dptr,#(_train + 0x0018)
   A2F0 F0                 3202 	movx	@dptr,a
                           3203 ;	../../shared/src/dfe_adaptation.c:319: train.f2 = train.f2_slicer;
   A2F1 90 66 48           3204 	mov	dptr,#(_train + 0x0008)
   A2F4 E0                 3205 	movx	a,@dptr
   A2F5 90 66 5B           3206 	mov	dptr,#(_train + 0x001b)
   A2F8 F0                 3207 	movx	@dptr,a
                           3208 ;	../../shared/src/dfe_adaptation.c:320: train.f3 = train.f3_slicer;
   A2F9 90 66 4A           3209 	mov	dptr,#(_train + 0x000a)
   A2FC E0                 3210 	movx	a,@dptr
   A2FD 90 66 5C           3211 	mov	dptr,#(_train + 0x001c)
   A300 F0                 3212 	movx	@dptr,a
                           3213 ;	../../shared/src/dfe_adaptation.c:322: train.eo = train.eo_slicer;
   A301 90 66 50           3214 	mov	dptr,#(_train + 0x0010)
   A304 E0                 3215 	movx	a,@dptr
   A305 FA                 3216 	mov	r2,a
   A306 90 66 5F           3217 	mov	dptr,#(_train + 0x001f)
   A309 F0                 3218 	movx	@dptr,a
   A30A 02 A3 EC           3219 	ljmp	00107$
   A30D                    3220 00102$:
                           3221 ;	../../shared/src/dfe_adaptation.c:332: train.f0 = (train.f0_data + train.f0_slicer + 1)>>1;
   A30D 90 66 44           3222 	mov	dptr,#(_train + 0x0004)
   A310 E0                 3223 	movx	a,@dptr
   A311 FA                 3224 	mov	r2,a
   A312 7B 00              3225 	mov	r3,#0x00
   A314 90 66 45           3226 	mov	dptr,#(_train + 0x0005)
   A317 E0                 3227 	movx	a,@dptr
   A318 FC                 3228 	mov	r4,a
   A319 7D 00              3229 	mov	r5,#0x00
   A31B 2A                 3230 	add	a,r2
   A31C FA                 3231 	mov	r2,a
   A31D ED                 3232 	mov	a,r5
   A31E 3B                 3233 	addc	a,r3
   A31F FB                 3234 	mov	r3,a
   A320 0A                 3235 	inc	r2
   A321 BA 00 01           3236 	cjne	r2,#0x00,00165$
   A324 0B                 3237 	inc	r3
   A325                    3238 00165$:
   A325 EB                 3239 	mov	a,r3
   A326 A2 E7              3240 	mov	c,acc.7
   A328 13                 3241 	rrc	a
   A329 CA                 3242 	xch	a,r2
   A32A 13                 3243 	rrc	a
   A32B CA                 3244 	xch	a,r2
   A32C 90 66 5A           3245 	mov	dptr,#(_train + 0x001a)
   A32F EA                 3246 	mov	a,r2
   A330 F0                 3247 	movx	@dptr,a
                           3248 ;	../../shared/src/dfe_adaptation.c:333: train.f0a = (train.f0a_data + train.f0a_slicer + 1)>>1;
   A331 90 66 40           3249 	mov	dptr,#_train
   A334 E0                 3250 	movx	a,@dptr
   A335 FA                 3251 	mov	r2,a
   A336 7B 00              3252 	mov	r3,#0x00
   A338 90 66 41           3253 	mov	dptr,#(_train + 0x0001)
   A33B E0                 3254 	movx	a,@dptr
   A33C FC                 3255 	mov	r4,a
   A33D 7D 00              3256 	mov	r5,#0x00
   A33F 2A                 3257 	add	a,r2
   A340 FA                 3258 	mov	r2,a
   A341 ED                 3259 	mov	a,r5
   A342 3B                 3260 	addc	a,r3
   A343 FB                 3261 	mov	r3,a
   A344 0A                 3262 	inc	r2
   A345 BA 00 01           3263 	cjne	r2,#0x00,00166$
   A348 0B                 3264 	inc	r3
   A349                    3265 00166$:
   A349 EB                 3266 	mov	a,r3
   A34A A2 E7              3267 	mov	c,acc.7
   A34C 13                 3268 	rrc	a
   A34D CA                 3269 	xch	a,r2
   A34E 13                 3270 	rrc	a
   A34F CA                 3271 	xch	a,r2
   A350 90 66 59           3272 	mov	dptr,#(_train + 0x0019)
   A353 EA                 3273 	mov	a,r2
   A354 F0                 3274 	movx	@dptr,a
                           3275 ;	../../shared/src/dfe_adaptation.c:334: train.f0a_max = max(train.f0a_max_data, train.f0a_max_slicer);
   A355 90 66 43           3276 	mov	dptr,#(_train + 0x0003)
   A358 E0                 3277 	movx	a,@dptr
   A359 FA                 3278 	mov	r2,a
   A35A 90 66 42           3279 	mov	dptr,#(_train + 0x0002)
   A35D E0                 3280 	movx	a,@dptr
   A35E FB                 3281 	mov	r3,a
   A35F C0 02              3282 	push	ar2
   A361 8B 82              3283 	mov	dpl,r3
   A363 78 12              3284 	mov	r0,#_max
   A365 79 C0              3285 	mov	r1,#(_max >> 8)
   A367 7A 02              3286 	mov	r2,#(_max >> 16)
   A369 12 00 B3           3287 	lcall	__sdcc_banked_call
   A36C AA 82              3288 	mov	r2,dpl
   A36E 15 81              3289 	dec	sp
   A370 90 66 58           3290 	mov	dptr,#(_train + 0x0018)
   A373 EA                 3291 	mov	a,r2
   A374 F0                 3292 	movx	@dptr,a
                           3293 ;	../../shared/src/dfe_adaptation.c:335: train.f2 = (train.f2_data + train.f2_slicer + 1)>>1;
   A375 90 66 47           3294 	mov	dptr,#(_train + 0x0007)
   A378 E0                 3295 	movx	a,@dptr
   A379 FA                 3296 	mov	r2,a
   A37A 33                 3297 	rlc	a
   A37B 95 E0              3298 	subb	a,acc
   A37D FB                 3299 	mov	r3,a
   A37E 90 66 48           3300 	mov	dptr,#(_train + 0x0008)
   A381 E0                 3301 	movx	a,@dptr
   A382 FC                 3302 	mov	r4,a
   A383 33                 3303 	rlc	a
   A384 95 E0              3304 	subb	a,acc
   A386 FD                 3305 	mov	r5,a
   A387 EC                 3306 	mov	a,r4
   A388 2A                 3307 	add	a,r2
   A389 FA                 3308 	mov	r2,a
   A38A ED                 3309 	mov	a,r5
   A38B 3B                 3310 	addc	a,r3
   A38C FB                 3311 	mov	r3,a
   A38D 0A                 3312 	inc	r2
   A38E BA 00 01           3313 	cjne	r2,#0x00,00167$
   A391 0B                 3314 	inc	r3
   A392                    3315 00167$:
   A392 EB                 3316 	mov	a,r3
   A393 A2 E7              3317 	mov	c,acc.7
   A395 13                 3318 	rrc	a
   A396 CA                 3319 	xch	a,r2
   A397 13                 3320 	rrc	a
   A398 CA                 3321 	xch	a,r2
   A399 90 66 5B           3322 	mov	dptr,#(_train + 0x001b)
   A39C EA                 3323 	mov	a,r2
   A39D F0                 3324 	movx	@dptr,a
                           3325 ;	../../shared/src/dfe_adaptation.c:336: train.f3 = (train.f3_data + train.f3_slicer + 1)>>1;
   A39E 90 66 49           3326 	mov	dptr,#(_train + 0x0009)
   A3A1 E0                 3327 	movx	a,@dptr
   A3A2 FA                 3328 	mov	r2,a
   A3A3 33                 3329 	rlc	a
   A3A4 95 E0              3330 	subb	a,acc
   A3A6 FB                 3331 	mov	r3,a
   A3A7 90 66 4A           3332 	mov	dptr,#(_train + 0x000a)
   A3AA E0                 3333 	movx	a,@dptr
   A3AB FC                 3334 	mov	r4,a
   A3AC 33                 3335 	rlc	a
   A3AD 95 E0              3336 	subb	a,acc
   A3AF FD                 3337 	mov	r5,a
   A3B0 EC                 3338 	mov	a,r4
   A3B1 2A                 3339 	add	a,r2
   A3B2 FA                 3340 	mov	r2,a
   A3B3 ED                 3341 	mov	a,r5
   A3B4 3B                 3342 	addc	a,r3
   A3B5 FB                 3343 	mov	r3,a
   A3B6 0A                 3344 	inc	r2
   A3B7 BA 00 01           3345 	cjne	r2,#0x00,00168$
   A3BA 0B                 3346 	inc	r3
   A3BB                    3347 00168$:
   A3BB EB                 3348 	mov	a,r3
   A3BC A2 E7              3349 	mov	c,acc.7
   A3BE 13                 3350 	rrc	a
   A3BF CA                 3351 	xch	a,r2
   A3C0 13                 3352 	rrc	a
   A3C1 CA                 3353 	xch	a,r2
   A3C2 90 66 5C           3354 	mov	dptr,#(_train + 0x001c)
   A3C5 EA                 3355 	mov	a,r2
   A3C6 F0                 3356 	movx	@dptr,a
                           3357 ;	../../shared/src/dfe_adaptation.c:339: train.eo = (train.eo_data + train.eo_slicer + 1)>>1;
   A3C7 90 66 4F           3358 	mov	dptr,#(_train + 0x000f)
   A3CA E0                 3359 	movx	a,@dptr
   A3CB FA                 3360 	mov	r2,a
   A3CC 7B 00              3361 	mov	r3,#0x00
   A3CE 90 66 50           3362 	mov	dptr,#(_train + 0x0010)
   A3D1 E0                 3363 	movx	a,@dptr
   A3D2 FC                 3364 	mov	r4,a
   A3D3 7D 00              3365 	mov	r5,#0x00
   A3D5 2A                 3366 	add	a,r2
   A3D6 FA                 3367 	mov	r2,a
   A3D7 ED                 3368 	mov	a,r5
   A3D8 3B                 3369 	addc	a,r3
   A3D9 FB                 3370 	mov	r3,a
   A3DA 0A                 3371 	inc	r2
   A3DB BA 00 01           3372 	cjne	r2,#0x00,00169$
   A3DE 0B                 3373 	inc	r3
   A3DF                    3374 00169$:
   A3DF EB                 3375 	mov	a,r3
   A3E0 A2 E7              3376 	mov	c,acc.7
   A3E2 13                 3377 	rrc	a
   A3E3 CA                 3378 	xch	a,r2
   A3E4 13                 3379 	rrc	a
   A3E5 CA                 3380 	xch	a,r2
   A3E6 FB                 3381 	mov	r3,a
   A3E7 90 66 5F           3382 	mov	dptr,#(_train + 0x001f)
   A3EA EA                 3383 	mov	a,r2
   A3EB F0                 3384 	movx	@dptr,a
   A3EC                    3385 00107$:
                           3386 ;	../../shared/src/dfe_adaptation.c:347: train.fn1 = train.f0 - train.f0a;
   A3EC 90 66 5A           3387 	mov	dptr,#(_train + 0x001a)
   A3EF E0                 3388 	movx	a,@dptr
   A3F0 FA                 3389 	mov	r2,a
   A3F1 90 66 59           3390 	mov	dptr,#(_train + 0x0019)
   A3F4 E0                 3391 	movx	a,@dptr
   A3F5 FB                 3392 	mov	r3,a
   A3F6 EA                 3393 	mov	a,r2
   A3F7 C3                 3394 	clr	c
   A3F8 9B                 3395 	subb	a,r3
   A3F9 90 66 5D           3396 	mov	dptr,#(_train + 0x001d)
   A3FC F0                 3397 	movx	@dptr,a
                           3398 ;	../../shared/src/dfe_adaptation.c:348: train.fn1 = clamp(train.fn1, tag_DFE_FN1_MAX, tag_DFE_FN1_MIN );
   A3FD 90 66 5D           3399 	mov	dptr,#(_train + 0x001d)
   A400 E0                 3400 	movx	a,@dptr
   A401 FA                 3401 	mov	r2,a
   A402 74 C1              3402 	mov	a,#0xC1
   A404 C0 E0              3403 	push	acc
   A406 74 3F              3404 	mov	a,#0x3F
   A408 C0 E0              3405 	push	acc
   A40A 8A 82              3406 	mov	dpl,r2
   A40C 78 64              3407 	mov	r0,#_clamp
   A40E 79 C0              3408 	mov	r1,#(_clamp >> 8)
   A410 7A 02              3409 	mov	r2,#(_clamp >> 16)
   A412 12 00 B3           3410 	lcall	__sdcc_banked_call
   A415 AA 82              3411 	mov	r2,dpl
   A417 15 81              3412 	dec	sp
   A419 15 81              3413 	dec	sp
   A41B 90 66 5D           3414 	mov	dptr,#(_train + 0x001d)
   A41E EA                 3415 	mov	a,r2
   A41F F0                 3416 	movx	@dptr,a
                           3417 ;	../../shared/src/dfe_adaptation.c:362: sum_my_abs_fx = abs(train.f1)+abs(train.f2)+abs(train.f3)+abs(train.f4)+abs(train.f5);
   A420 90 66 46           3418 	mov	dptr,#(_train + 0x0006)
   A423 E0                 3419 	movx	a,@dptr
   A424 F5 82              3420 	mov	dpl,a
   A426 78 41              3421 	mov	r0,#_abs
   A428 79 C1              3422 	mov	r1,#(_abs >> 8)
   A42A 7A 02              3423 	mov	r2,#(_abs >> 16)
   A42C 12 00 B3           3424 	lcall	__sdcc_banked_call
   A42F E5 82              3425 	mov	a,dpl
   A431 FA                 3426 	mov	r2,a
   A432 33                 3427 	rlc	a
   A433 95 E0              3428 	subb	a,acc
   A435 FB                 3429 	mov	r3,a
   A436 90 66 5B           3430 	mov	dptr,#(_train + 0x001b)
   A439 E0                 3431 	movx	a,@dptr
   A43A F5 82              3432 	mov	dpl,a
   A43C C0 02              3433 	push	ar2
   A43E C0 03              3434 	push	ar3
   A440 78 41              3435 	mov	r0,#_abs
   A442 79 C1              3436 	mov	r1,#(_abs >> 8)
   A444 7A 02              3437 	mov	r2,#(_abs >> 16)
   A446 12 00 B3           3438 	lcall	__sdcc_banked_call
   A449 AC 82              3439 	mov	r4,dpl
   A44B D0 03              3440 	pop	ar3
   A44D D0 02              3441 	pop	ar2
   A44F EC                 3442 	mov	a,r4
   A450 33                 3443 	rlc	a
   A451 95 E0              3444 	subb	a,acc
   A453 FD                 3445 	mov	r5,a
   A454 EC                 3446 	mov	a,r4
   A455 2A                 3447 	add	a,r2
   A456 FA                 3448 	mov	r2,a
   A457 ED                 3449 	mov	a,r5
   A458 3B                 3450 	addc	a,r3
   A459 FB                 3451 	mov	r3,a
   A45A 90 66 5C           3452 	mov	dptr,#(_train + 0x001c)
   A45D E0                 3453 	movx	a,@dptr
   A45E F5 82              3454 	mov	dpl,a
   A460 C0 02              3455 	push	ar2
   A462 C0 03              3456 	push	ar3
   A464 78 41              3457 	mov	r0,#_abs
   A466 79 C1              3458 	mov	r1,#(_abs >> 8)
   A468 7A 02              3459 	mov	r2,#(_abs >> 16)
   A46A 12 00 B3           3460 	lcall	__sdcc_banked_call
   A46D AC 82              3461 	mov	r4,dpl
   A46F D0 03              3462 	pop	ar3
   A471 D0 02              3463 	pop	ar2
   A473 EC                 3464 	mov	a,r4
   A474 33                 3465 	rlc	a
   A475 95 E0              3466 	subb	a,acc
   A477 FD                 3467 	mov	r5,a
   A478 EC                 3468 	mov	a,r4
   A479 2A                 3469 	add	a,r2
   A47A FA                 3470 	mov	r2,a
   A47B ED                 3471 	mov	a,r5
   A47C 3B                 3472 	addc	a,r3
   A47D FB                 3473 	mov	r3,a
   A47E 90 66 4B           3474 	mov	dptr,#(_train + 0x000b)
   A481 E0                 3475 	movx	a,@dptr
   A482 F5 82              3476 	mov	dpl,a
   A484 C0 02              3477 	push	ar2
   A486 C0 03              3478 	push	ar3
   A488 78 41              3479 	mov	r0,#_abs
   A48A 79 C1              3480 	mov	r1,#(_abs >> 8)
   A48C 7A 02              3481 	mov	r2,#(_abs >> 16)
   A48E 12 00 B3           3482 	lcall	__sdcc_banked_call
   A491 AC 82              3483 	mov	r4,dpl
   A493 D0 03              3484 	pop	ar3
   A495 D0 02              3485 	pop	ar2
   A497 EC                 3486 	mov	a,r4
   A498 33                 3487 	rlc	a
   A499 95 E0              3488 	subb	a,acc
   A49B FD                 3489 	mov	r5,a
   A49C EC                 3490 	mov	a,r4
   A49D 2A                 3491 	add	a,r2
   A49E FA                 3492 	mov	r2,a
   A49F ED                 3493 	mov	a,r5
   A4A0 3B                 3494 	addc	a,r3
   A4A1 FB                 3495 	mov	r3,a
   A4A2 90 66 4C           3496 	mov	dptr,#(_train + 0x000c)
   A4A5 E0                 3497 	movx	a,@dptr
   A4A6 F5 82              3498 	mov	dpl,a
   A4A8 C0 02              3499 	push	ar2
   A4AA C0 03              3500 	push	ar3
   A4AC 78 41              3501 	mov	r0,#_abs
   A4AE 79 C1              3502 	mov	r1,#(_abs >> 8)
   A4B0 7A 02              3503 	mov	r2,#(_abs >> 16)
   A4B2 12 00 B3           3504 	lcall	__sdcc_banked_call
   A4B5 AC 82              3505 	mov	r4,dpl
   A4B7 D0 03              3506 	pop	ar3
   A4B9 D0 02              3507 	pop	ar2
   A4BB EC                 3508 	mov	a,r4
   A4BC 33                 3509 	rlc	a
   A4BD 95 E0              3510 	subb	a,acc
   A4BF FD                 3511 	mov	r5,a
   A4C0 EC                 3512 	mov	a,r4
   A4C1 2A                 3513 	add	a,r2
   A4C2 FA                 3514 	mov	r2,a
   A4C3 ED                 3515 	mov	a,r5
   A4C4 3B                 3516 	addc	a,r3
   A4C5 FB                 3517 	mov	r3,a
                           3518 ;	../../shared/src/dfe_adaptation.c:363: train.f0a_saturate = (!tag_DFE_SATURATE_DISABLE) && ((train.f0a_max >= tag_DFE_F0_SAT_THRES) || ( (train.f0a_max >= tag_DFE_F0_SAT_PROTECT_THRES) && (sum_my_abs_fx < tag_DFE_FX_SUM_SAT_THRES)));
   A4C6 90 60 4D           3519 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   A4C9 E0                 3520 	movx	a,@dptr
   A4CA 23                 3521 	rl	a
   A4CB 23                 3522 	rl	a
   A4CC 54 01              3523 	anl	a,#0x01
   A4CE FC                 3524 	mov	r4,a
   A4CF B4 01 00           3525 	cjne	a,#0x01,00170$
   A4D2                    3526 00170$:
   A4D2 E4                 3527 	clr	a
   A4D3 33                 3528 	rlc	a
   A4D4 FC                 3529 	mov	r4,a
   A4D5 60 4A              3530 	jz	00117$
   A4D7 90 66 58           3531 	mov	dptr,#(_train + 0x0018)
   A4DA E0                 3532 	movx	a,@dptr
   A4DB FC                 3533 	mov	r4,a
   A4DC 90 60 67           3534 	mov	dptr,#(_DLL_CAL + 0x0003)
   A4DF E0                 3535 	movx	a,@dptr
   A4E0 FD                 3536 	mov	r5,a
   A4E1 EC                 3537 	mov	a,r4
   A4E2 B5 05 00           3538 	cjne	a,ar5,00172$
   A4E5                    3539 00172$:
   A4E5 B3                 3540 	cpl	c
   A4E6 E4                 3541 	clr	a
   A4E7 33                 3542 	rlc	a
   A4E8 FD                 3543 	mov	r5,a
   A4E9 70 31              3544 	jnz	00121$
   A4EB 90 60 6E           3545 	mov	dptr,#(_TRAIN_PARA_1 + 0x0002)
   A4EE E0                 3546 	movx	a,@dptr
   A4EF FD                 3547 	mov	r5,a
   A4F0 EC                 3548 	mov	a,r4
   A4F1 B5 05 00           3549 	cjne	a,ar5,00175$
   A4F4                    3550 00175$:
   A4F4 B3                 3551 	cpl	c
   A4F5 E4                 3552 	clr	a
   A4F6 33                 3553 	rlc	a
   A4F7 FC                 3554 	mov	r4,a
   A4F8 60 16              3555 	jz	00123$
   A4FA 90 60 6D           3556 	mov	dptr,#(_TRAIN_PARA_1 + 0x0001)
   A4FD E0                 3557 	movx	a,@dptr
   A4FE FC                 3558 	mov	r4,a
   A4FF 7D 00              3559 	mov	r5,#0x00
   A501 C3                 3560 	clr	c
   A502 EA                 3561 	mov	a,r2
   A503 9C                 3562 	subb	a,r4
   A504 EB                 3563 	mov	a,r3
   A505 64 80              3564 	xrl	a,#0x80
   A507 8D F0              3565 	mov	b,r5
   A509 63 F0 80           3566 	xrl	b,#0x80
   A50C 95 F0              3567 	subb	a,b
   A50E 40 04              3568 	jc	00124$
   A510                    3569 00123$:
   A510 7A 00              3570 	mov	r2,#0x00
   A512 80 02              3571 	sjmp	00125$
   A514                    3572 00124$:
   A514 7A 01              3573 	mov	r2,#0x01
   A516                    3574 00125$:
   A516 EA                 3575 	mov	a,r2
   A517 70 03              3576 	jnz	00121$
   A519 FA                 3577 	mov	r2,a
   A51A 80 02              3578 	sjmp	00122$
   A51C                    3579 00121$:
   A51C 7A 01              3580 	mov	r2,#0x01
   A51E                    3581 00122$:
   A51E EA                 3582 	mov	a,r2
   A51F 70 04              3583 	jnz	00118$
   A521                    3584 00117$:
   A521 7A 00              3585 	mov	r2,#0x00
   A523 80 02              3586 	sjmp	00119$
   A525                    3587 00118$:
   A525 7A 01              3588 	mov	r2,#0x01
   A527                    3589 00119$:
   A527 90 66 66           3590 	mov	dptr,#(_train + 0x0026)
   A52A EA                 3591 	mov	a,r2
   A52B F0                 3592 	movx	@dptr,a
                           3593 ;	../../shared/src/dfe_adaptation.c:364: train.dfe_saturate = (!tag_DFE_SATURATE_DISABLE) && ((abs(train.f1) >= tag_DFE_F1_SAT_THRES) || (abs(train.f2) >= tag_DFE_F2_SAT_THRES) );
   A52C 90 60 4D           3594 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   A52F E0                 3595 	movx	a,@dptr
   A530 23                 3596 	rl	a
   A531 23                 3597 	rl	a
   A532 54 01              3598 	anl	a,#0x01
   A534 FA                 3599 	mov	r2,a
   A535 B4 01 00           3600 	cjne	a,#0x01,00181$
   A538                    3601 00181$:
   A538 E4                 3602 	clr	a
   A539 33                 3603 	rlc	a
   A53A FA                 3604 	mov	r2,a
   A53B 60 48              3605 	jz	00126$
   A53D 90 66 46           3606 	mov	dptr,#(_train + 0x0006)
   A540 E0                 3607 	movx	a,@dptr
   A541 F5 82              3608 	mov	dpl,a
   A543 78 41              3609 	mov	r0,#_abs
   A545 79 C1              3610 	mov	r1,#(_abs >> 8)
   A547 7A 02              3611 	mov	r2,#(_abs >> 16)
   A549 12 00 B3           3612 	lcall	__sdcc_banked_call
   A54C AA 82              3613 	mov	r2,dpl
   A54E 90 60 66           3614 	mov	dptr,#(_DLL_CAL + 0x0002)
   A551 E0                 3615 	movx	a,@dptr
   A552 FB                 3616 	mov	r3,a
   A553 EA                 3617 	mov	a,r2
   A554 B5 03 00           3618 	cjne	a,ar3,00183$
   A557                    3619 00183$:
   A557 B3                 3620 	cpl	c
   A558 E4                 3621 	clr	a
   A559 33                 3622 	rlc	a
   A55A FB                 3623 	mov	r3,a
   A55B 70 23              3624 	jnz	00130$
   A55D 90 66 5B           3625 	mov	dptr,#(_train + 0x001b)
   A560 E0                 3626 	movx	a,@dptr
   A561 F5 82              3627 	mov	dpl,a
   A563 78 41              3628 	mov	r0,#_abs
   A565 79 C1              3629 	mov	r1,#(_abs >> 8)
   A567 7A 02              3630 	mov	r2,#(_abs >> 16)
   A569 12 00 B3           3631 	lcall	__sdcc_banked_call
   A56C AA 82              3632 	mov	r2,dpl
   A56E 90 60 6F           3633 	mov	dptr,#(_TRAIN_PARA_1 + 0x0003)
   A571 E0                 3634 	movx	a,@dptr
   A572 FB                 3635 	mov	r3,a
   A573 EA                 3636 	mov	a,r2
   A574 B5 03 00           3637 	cjne	a,ar3,00186$
   A577                    3638 00186$:
   A577 B3                 3639 	cpl	c
   A578 E4                 3640 	clr	a
   A579 33                 3641 	rlc	a
   A57A FB                 3642 	mov	r3,a
   A57B 70 03              3643 	jnz	00130$
   A57D FA                 3644 	mov	r2,a
   A57E 80 02              3645 	sjmp	00131$
   A580                    3646 00130$:
   A580 7A 01              3647 	mov	r2,#0x01
   A582                    3648 00131$:
   A582 EA                 3649 	mov	a,r2
   A583 70 04              3650 	jnz	00127$
   A585                    3651 00126$:
   A585 7A 00              3652 	mov	r2,#0x00
   A587 80 02              3653 	sjmp	00128$
   A589                    3654 00127$:
   A589 7A 01              3655 	mov	r2,#0x01
   A58B                    3656 00128$:
   A58B 90 66 67           3657 	mov	dptr,#(_train + 0x0027)
   A58E EA                 3658 	mov	a,r2
   A58F F0                 3659 	movx	@dptr,a
                           3660 ;	../../shared/src/dfe_adaptation.c:365: train.saturated = train.f0a_saturate || train.dfe_saturate ;
   A590 90 66 66           3661 	mov	dptr,#(_train + 0x0026)
   A593 E0                 3662 	movx	a,@dptr
   A594 70 09              3663 	jnz	00133$
   A596 90 66 67           3664 	mov	dptr,#(_train + 0x0027)
   A599 E0                 3665 	movx	a,@dptr
   A59A 70 03              3666 	jnz	00133$
   A59C FA                 3667 	mov	r2,a
   A59D 80 02              3668 	sjmp	00134$
   A59F                    3669 00133$:
   A59F 7A 01              3670 	mov	r2,#0x01
   A5A1                    3671 00134$:
   A5A1 90 66 68           3672 	mov	dptr,#(_train + 0x0028)
   A5A4 EA                 3673 	mov	a,r2
   A5A5 F0                 3674 	movx	@dptr,a
                           3675 ;	../../shared/src/dfe_adaptation.c:368: train.excellent_eo = ((train.eo > tag_THRE_EXCELLENT) && train.eye_check_pass);
   A5A6 90 66 5F           3676 	mov	dptr,#(_train + 0x001f)
   A5A9 E0                 3677 	movx	a,@dptr
   A5AA FA                 3678 	mov	r2,a
   A5AB 90 60 4F           3679 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   A5AE E0                 3680 	movx	a,@dptr
   A5AF 54 3F              3681 	anl	a,#0x3f
   A5B1 FB                 3682 	mov	r3,a
   A5B2 8A 04              3683 	mov	ar4,r2
   A5B4 C3                 3684 	clr	c
   A5B5 EB                 3685 	mov	a,r3
   A5B6 64 80              3686 	xrl	a,#0x80
   A5B8 8C F0              3687 	mov	b,r4
   A5BA 63 F0 80           3688 	xrl	b,#0x80
   A5BD 95 F0              3689 	subb	a,b
   A5BF 50 06              3690 	jnc	00135$
   A5C1 90 66 55           3691 	mov	dptr,#(_train + 0x0015)
   A5C4 E0                 3692 	movx	a,@dptr
   A5C5 70 04              3693 	jnz	00136$
   A5C7                    3694 00135$:
   A5C7 7B 00              3695 	mov	r3,#0x00
   A5C9 80 02              3696 	sjmp	00137$
   A5CB                    3697 00136$:
   A5CB 7B 01              3698 	mov	r3,#0x01
   A5CD                    3699 00137$:
   A5CD 90 66 69           3700 	mov	dptr,#(_train + 0x0029)
   A5D0 EB                 3701 	mov	a,r3
   A5D1 F0                 3702 	movx	@dptr,a
                           3703 ;	../../shared/src/dfe_adaptation.c:369: train.good_eo = ((train.eo >= tag_THRE_GOOD) && train.eye_check_pass);
   A5D2 90 60 4D           3704 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   A5D5 E0                 3705 	movx	a,@dptr
   A5D6 54 1F              3706 	anl	a,#0x1f
   A5D8 FB                 3707 	mov	r3,a
   A5D9 8A 04              3708 	mov	ar4,r2
   A5DB C3                 3709 	clr	c
   A5DC EC                 3710 	mov	a,r4
   A5DD 64 80              3711 	xrl	a,#0x80
   A5DF 8B F0              3712 	mov	b,r3
   A5E1 63 F0 80           3713 	xrl	b,#0x80
   A5E4 95 F0              3714 	subb	a,b
   A5E6 B3                 3715 	cpl	c
   A5E7 E4                 3716 	clr	a
   A5E8 33                 3717 	rlc	a
   A5E9 FC                 3718 	mov	r4,a
   A5EA 60 06              3719 	jz	00138$
   A5EC 90 66 55           3720 	mov	dptr,#(_train + 0x0015)
   A5EF E0                 3721 	movx	a,@dptr
   A5F0 70 04              3722 	jnz	00139$
   A5F2                    3723 00138$:
   A5F2 7B 00              3724 	mov	r3,#0x00
   A5F4 80 02              3725 	sjmp	00140$
   A5F6                    3726 00139$:
   A5F6 7B 01              3727 	mov	r3,#0x01
   A5F8                    3728 00140$:
   A5F8 90 66 6A           3729 	mov	dptr,#(_train + 0x002a)
   A5FB EB                 3730 	mov	a,r3
   A5FC F0                 3731 	movx	@dptr,a
                           3732 ;	../../shared/src/dfe_adaptation.c:374: if(train.f0 >= train.f0a)
   A5FD 90 66 5A           3733 	mov	dptr,#(_train + 0x001a)
   A600 E0                 3734 	movx	a,@dptr
   A601 FB                 3735 	mov	r3,a
   A602 90 66 59           3736 	mov	dptr,#(_train + 0x0019)
   A605 E0                 3737 	movx	a,@dptr
   A606 FC                 3738 	mov	r4,a
   A607 EB                 3739 	mov	a,r3
   A608 B5 04 00           3740 	cjne	a,ar4,00197$
   A60B                    3741 00197$:
   A60B 40 04              3742 	jc	00110$
                           3743 ;	../../shared/src/dfe_adaptation.c:375: f0_minus_abs_fn1 = train.f0a;
   A60D 8C 05              3744 	mov	ar5,r4
   A60F 80 07              3745 	sjmp	00111$
   A611                    3746 00110$:
                           3747 ;	../../shared/src/dfe_adaptation.c:377: f0_minus_abs_fn1 = (train.f0<<1) - train.f0a;
   A611 EB                 3748 	mov	a,r3
   A612 2B                 3749 	add	a,r3
   A613 FB                 3750 	mov	r3,a
   A614 C3                 3751 	clr	c
   A615 9C                 3752 	subb	a,r4
   A616 FC                 3753 	mov	r4,a
   A617 FD                 3754 	mov	r5,a
   A618                    3755 00111$:
                           3756 ;	../../shared/src/dfe_adaptation.c:378: if(train.eye_check_pass)	{
   A618 90 66 55           3757 	mov	dptr,#(_train + 0x0015)
   A61B E0                 3758 	movx	a,@dptr
   A61C 60 10              3759 	jz	00113$
                           3760 ;	../../shared/src/dfe_adaptation.c:379: train.f0t = tag_TX_F0T_EO_BASED ? train.eo : f0_minus_abs_fn1;
   A61E 90 60 0A           3761 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   A621 E0                 3762 	movx	a,@dptr
   A622 20 E2 02           3763 	jb	acc.2,00142$
   A625 8D 02              3764 	mov	ar2,r5
   A627                    3765 00142$:
   A627 90 66 5E           3766 	mov	dptr,#(_train + 0x001e)
   A62A EA                 3767 	mov	a,r2
   A62B F0                 3768 	movx	@dptr,a
   A62C 80 05              3769 	sjmp	00114$
   A62E                    3770 00113$:
                           3771 ;	../../shared/src/dfe_adaptation.c:382: train.f0t = 0; 	
   A62E 90 66 5E           3772 	mov	dptr,#(_train + 0x001e)
   A631 E4                 3773 	clr	a
   A632 F0                 3774 	movx	@dptr,a
   A633                    3775 00114$:
                           3776 ;	../../shared/src/dfe_adaptation.c:385: train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0 * dfe_res_f0_sumFtap[dfe_res_f0]);   
   A633 90 00 50           3777 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   A636 E0                 3778 	movx	a,@dptr
   A637 C4                 3779 	swap	a
   A638 23                 3780 	rl	a
   A639 54 03              3781 	anl	a,#0x03
   A63B 90 66 6D           3782 	mov	dptr,#(_train + 0x002d)
   A63E E4                 3783 	clr	a
   A63F F0                 3784 	movx	@dptr,a
   A640 A3                 3785 	inc	dptr
   A641 F0                 3786 	movx	@dptr,a
                           3787 ;	../../shared/src/dfe_adaptation.c:386: train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * dfe_res_f1_sumFtap[dfe_res_f1]);     
   A642 90 66 6D           3788 	mov	dptr,#(_train + 0x002d)
   A645 E0                 3789 	movx	a,@dptr
   A646 FA                 3790 	mov	r2,a
   A647 A3                 3791 	inc	dptr
   A648 E0                 3792 	movx	a,@dptr
   A649 FB                 3793 	mov	r3,a
   A64A 90 60 88           3794 	mov	dptr,#_DFE_TEST_5
   A64D A8 18              3795 	mov	r0,_bp
   A64F 08                 3796 	inc	r0
   A650 E0                 3797 	movx	a,@dptr
   A651 03                 3798 	rr	a
   A652 54 01              3799 	anl	a,#0x01
   A654 F6                 3800 	mov	@r0,a
   A655 90 66 46           3801 	mov	dptr,#(_train + 0x0006)
   A658 E0                 3802 	movx	a,@dptr
   A659 FD                 3803 	mov	r5,a
   A65A 33                 3804 	rlc	a
   A65B 95 E0              3805 	subb	a,acc
   A65D FE                 3806 	mov	r6,a
   A65E 90 00 50           3807 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   A661 E0                 3808 	movx	a,@dptr
   A662 03                 3809 	rr	a
   A663 54 03              3810 	anl	a,#0x03
   A665 90 A9 41           3811 	mov	dptr,#_dfe_res_f1_sumFtap
   A668 93                 3812 	movc	a,@a+dptr
   A669 FF                 3813 	mov	r7,a
   A66A 33                 3814 	rlc	a
   A66B 95 E0              3815 	subb	a,acc
   A66D FC                 3816 	mov	r4,a
   A66E C0 02              3817 	push	ar2
   A670 C0 03              3818 	push	ar3
   A672 C0 07              3819 	push	ar7
   A674 C0 04              3820 	push	ar4
   A676 8D 82              3821 	mov	dpl,r5
   A678 8E 83              3822 	mov	dph,r6
   A67A 12 78 4F           3823 	lcall	__mulint
   A67D AC 82              3824 	mov	r4,dpl
   A67F AD 83              3825 	mov	r5,dph
   A681 15 81              3826 	dec	sp
   A683 15 81              3827 	dec	sp
   A685 A8 18              3828 	mov	r0,_bp
   A687 08                 3829 	inc	r0
   A688 86 06              3830 	mov	ar6,@r0
   A68A 7F 00              3831 	mov	r7,#0x00
   A68C C0 04              3832 	push	ar4
   A68E C0 05              3833 	push	ar5
   A690 8E 82              3834 	mov	dpl,r6
   A692 8F 83              3835 	mov	dph,r7
   A694 12 78 4F           3836 	lcall	__mulint
   A697 AC 82              3837 	mov	r4,dpl
   A699 AD 83              3838 	mov	r5,dph
   A69B 15 81              3839 	dec	sp
   A69D 15 81              3840 	dec	sp
   A69F D0 03              3841 	pop	ar3
   A6A1 D0 02              3842 	pop	ar2
   A6A3 EC                 3843 	mov	a,r4
   A6A4 2A                 3844 	add	a,r2
   A6A5 FA                 3845 	mov	r2,a
   A6A6 ED                 3846 	mov	a,r5
   A6A7 3B                 3847 	addc	a,r3
   A6A8 FB                 3848 	mov	r3,a
   A6A9 90 66 6D           3849 	mov	dptr,#(_train + 0x002d)
   A6AC EA                 3850 	mov	a,r2
   A6AD F0                 3851 	movx	@dptr,a
   A6AE A3                 3852 	inc	dptr
   A6AF EB                 3853 	mov	a,r3
   A6B0 F0                 3854 	movx	@dptr,a
                           3855 ;	../../shared/src/dfe_adaptation.c:387: train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * dfe_res_f2_sumFtap[dfe_res_f2]) ;    
   A6B1 90 00 50           3856 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   A6B4 E0                 3857 	movx	a,@dptr
   A6B5 54 01              3858 	anl	a,#0x01
   A6B7 90 A9 45           3859 	mov	dptr,#_dfe_res_f2_sumFtap
   A6BA 93                 3860 	movc	a,@a+dptr
   A6BB FC                 3861 	mov	r4,a
   A6BC 33                 3862 	rlc	a
   A6BD 95 E0              3863 	subb	a,acc
   A6BF FD                 3864 	mov	r5,a
   A6C0 90 66 5B           3865 	mov	dptr,#(_train + 0x001b)
   A6C3 E0                 3866 	movx	a,@dptr
   A6C4 FE                 3867 	mov	r6,a
   A6C5 33                 3868 	rlc	a
   A6C6 95 E0              3869 	subb	a,acc
   A6C8 FF                 3870 	mov	r7,a
   A6C9 C0 02              3871 	push	ar2
   A6CB C0 03              3872 	push	ar3
   A6CD C0 06              3873 	push	ar6
   A6CF C0 07              3874 	push	ar7
   A6D1 8C 82              3875 	mov	dpl,r4
   A6D3 8D 83              3876 	mov	dph,r5
   A6D5 12 78 4F           3877 	lcall	__mulint
   A6D8 AC 82              3878 	mov	r4,dpl
   A6DA AD 83              3879 	mov	r5,dph
   A6DC 15 81              3880 	dec	sp
   A6DE 15 81              3881 	dec	sp
   A6E0 D0 03              3882 	pop	ar3
   A6E2 D0 02              3883 	pop	ar2
   A6E4 EC                 3884 	mov	a,r4
   A6E5 2A                 3885 	add	a,r2
   A6E6 FA                 3886 	mov	r2,a
   A6E7 ED                 3887 	mov	a,r5
   A6E8 3B                 3888 	addc	a,r3
   A6E9 FB                 3889 	mov	r3,a
   A6EA 90 66 6D           3890 	mov	dptr,#(_train + 0x002d)
   A6ED EA                 3891 	mov	a,r2
   A6EE F0                 3892 	movx	@dptr,a
   A6EF A3                 3893 	inc	dptr
   A6F0 EB                 3894 	mov	a,r3
   A6F1 F0                 3895 	movx	@dptr,a
                           3896 ;	../../shared/src/dfe_adaptation.c:388: train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * dfe_res_f3_sumFtap[dfe_res_f3]) ;    
   A6F2 90 00 50           3897 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   A6F5 E0                 3898 	movx	a,@dptr
   A6F6 54 01              3899 	anl	a,#0x01
   A6F8 90 A9 47           3900 	mov	dptr,#_dfe_res_f3_sumFtap
   A6FB 93                 3901 	movc	a,@a+dptr
   A6FC FC                 3902 	mov	r4,a
   A6FD 33                 3903 	rlc	a
   A6FE 95 E0              3904 	subb	a,acc
   A700 FD                 3905 	mov	r5,a
   A701 90 66 5C           3906 	mov	dptr,#(_train + 0x001c)
   A704 E0                 3907 	movx	a,@dptr
   A705 FE                 3908 	mov	r6,a
   A706 33                 3909 	rlc	a
   A707 95 E0              3910 	subb	a,acc
   A709 FF                 3911 	mov	r7,a
   A70A C0 02              3912 	push	ar2
   A70C C0 03              3913 	push	ar3
   A70E C0 06              3914 	push	ar6
   A710 C0 07              3915 	push	ar7
   A712 8C 82              3916 	mov	dpl,r4
   A714 8D 83              3917 	mov	dph,r5
   A716 12 78 4F           3918 	lcall	__mulint
   A719 AC 82              3919 	mov	r4,dpl
   A71B AD 83              3920 	mov	r5,dph
   A71D 15 81              3921 	dec	sp
   A71F 15 81              3922 	dec	sp
   A721 D0 03              3923 	pop	ar3
   A723 D0 02              3924 	pop	ar2
   A725 EC                 3925 	mov	a,r4
   A726 2A                 3926 	add	a,r2
   A727 FA                 3927 	mov	r2,a
   A728 ED                 3928 	mov	a,r5
   A729 3B                 3929 	addc	a,r3
   A72A FB                 3930 	mov	r3,a
   A72B 90 66 6D           3931 	mov	dptr,#(_train + 0x002d)
   A72E EA                 3932 	mov	a,r2
   A72F F0                 3933 	movx	@dptr,a
   A730 A3                 3934 	inc	dptr
   A731 EB                 3935 	mov	a,r3
   A732 F0                 3936 	movx	@dptr,a
                           3937 ;	../../shared/src/dfe_adaptation.c:389: train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * dfe_res_f4_sumFtap[dfe_res_f4]) ;    
   A733 90 00 50           3938 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   A736 E0                 3939 	movx	a,@dptr
   A737 54 01              3940 	anl	a,#0x01
   A739 90 A9 49           3941 	mov	dptr,#_dfe_res_f4_sumFtap
   A73C 93                 3942 	movc	a,@a+dptr
   A73D FC                 3943 	mov	r4,a
   A73E 33                 3944 	rlc	a
   A73F 95 E0              3945 	subb	a,acc
   A741 FD                 3946 	mov	r5,a
   A742 90 66 4B           3947 	mov	dptr,#(_train + 0x000b)
   A745 E0                 3948 	movx	a,@dptr
   A746 FE                 3949 	mov	r6,a
   A747 33                 3950 	rlc	a
   A748 95 E0              3951 	subb	a,acc
   A74A FF                 3952 	mov	r7,a
   A74B C0 02              3953 	push	ar2
   A74D C0 03              3954 	push	ar3
   A74F C0 06              3955 	push	ar6
   A751 C0 07              3956 	push	ar7
   A753 8C 82              3957 	mov	dpl,r4
   A755 8D 83              3958 	mov	dph,r5
   A757 12 78 4F           3959 	lcall	__mulint
   A75A AC 82              3960 	mov	r4,dpl
   A75C AD 83              3961 	mov	r5,dph
   A75E 15 81              3962 	dec	sp
   A760 15 81              3963 	dec	sp
   A762 D0 03              3964 	pop	ar3
   A764 D0 02              3965 	pop	ar2
   A766 EC                 3966 	mov	a,r4
   A767 2A                 3967 	add	a,r2
   A768 FA                 3968 	mov	r2,a
   A769 ED                 3969 	mov	a,r5
   A76A 3B                 3970 	addc	a,r3
   A76B FB                 3971 	mov	r3,a
   A76C 90 66 6D           3972 	mov	dptr,#(_train + 0x002d)
   A76F EA                 3973 	mov	a,r2
   A770 F0                 3974 	movx	@dptr,a
   A771 A3                 3975 	inc	dptr
   A772 EB                 3976 	mov	a,r3
   A773 F0                 3977 	movx	@dptr,a
                           3978 ;	../../shared/src/dfe_adaptation.c:390: train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * dfe_res_f567_sumFtap[dfe_res_f5]) ;     
   A774 90 00 54           3979 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   A777 E0                 3980 	movx	a,@dptr
   A778 23                 3981 	rl	a
   A779 54 01              3982 	anl	a,#0x01
   A77B 90 A9 4B           3983 	mov	dptr,#_dfe_res_f567_sumFtap
   A77E 93                 3984 	movc	a,@a+dptr
   A77F FC                 3985 	mov	r4,a
   A780 33                 3986 	rlc	a
   A781 95 E0              3987 	subb	a,acc
   A783 FD                 3988 	mov	r5,a
   A784 90 66 4C           3989 	mov	dptr,#(_train + 0x000c)
   A787 E0                 3990 	movx	a,@dptr
   A788 FE                 3991 	mov	r6,a
   A789 33                 3992 	rlc	a
   A78A 95 E0              3993 	subb	a,acc
   A78C FF                 3994 	mov	r7,a
   A78D C0 02              3995 	push	ar2
   A78F C0 03              3996 	push	ar3
   A791 C0 06              3997 	push	ar6
   A793 C0 07              3998 	push	ar7
   A795 8C 82              3999 	mov	dpl,r4
   A797 8D 83              4000 	mov	dph,r5
   A799 12 78 4F           4001 	lcall	__mulint
   A79C AC 82              4002 	mov	r4,dpl
   A79E AD 83              4003 	mov	r5,dph
   A7A0 15 81              4004 	dec	sp
   A7A2 15 81              4005 	dec	sp
   A7A4 D0 03              4006 	pop	ar3
   A7A6 D0 02              4007 	pop	ar2
   A7A8 EC                 4008 	mov	a,r4
   A7A9 2A                 4009 	add	a,r2
   A7AA FA                 4010 	mov	r2,a
   A7AB ED                 4011 	mov	a,r5
   A7AC 3B                 4012 	addc	a,r3
   A7AD FB                 4013 	mov	r3,a
   A7AE 90 66 6D           4014 	mov	dptr,#(_train + 0x002d)
   A7B1 EA                 4015 	mov	a,r2
   A7B2 F0                 4016 	movx	@dptr,a
   A7B3 A3                 4017 	inc	dptr
   A7B4 EB                 4018 	mov	a,r3
   A7B5 F0                 4019 	movx	@dptr,a
                           4020 ;	../../shared/src/dfe_adaptation.c:391: train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * dfe_res_f567_sumFtap[dfe_res_f6]) ;     
   A7B6 90 00 54           4021 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   A7B9 E0                 4022 	movx	a,@dptr
   A7BA 23                 4023 	rl	a
   A7BB 54 01              4024 	anl	a,#0x01
   A7BD 90 66 6D           4025 	mov	dptr,#(_train + 0x002d)
   A7C0 EA                 4026 	mov	a,r2
   A7C1 F0                 4027 	movx	@dptr,a
   A7C2 A3                 4028 	inc	dptr
   A7C3 EB                 4029 	mov	a,r3
   A7C4 F0                 4030 	movx	@dptr,a
                           4031 ;	../../shared/src/dfe_adaptation.c:392: train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * dfe_res_f567_sumFtap[dfe_res_f7]);     
   A7C5 90 00 54           4032 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   A7C8 E0                 4033 	movx	a,@dptr
   A7C9 23                 4034 	rl	a
   A7CA 54 01              4035 	anl	a,#0x01
   A7CC 90 66 6D           4036 	mov	dptr,#(_train + 0x002d)
   A7CF EA                 4037 	mov	a,r2
   A7D0 F0                 4038 	movx	@dptr,a
   A7D1 A3                 4039 	inc	dptr
   A7D2 EB                 4040 	mov	a,r3
   A7D3 F0                 4041 	movx	@dptr,a
                           4042 ;	../../shared/src/dfe_adaptation.c:393: train.sumFtap = clamp16(train.sumFtap, 1024,-1024);
   A7D4 E4                 4043 	clr	a
   A7D5 C0 E0              4044 	push	acc
   A7D7 74 FC              4045 	mov	a,#0xFC
   A7D9 C0 E0              4046 	push	acc
   A7DB E4                 4047 	clr	a
   A7DC C0 E0              4048 	push	acc
   A7DE 74 04              4049 	mov	a,#0x04
   A7E0 C0 E0              4050 	push	acc
   A7E2 8A 82              4051 	mov	dpl,r2
   A7E4 8B 83              4052 	mov	dph,r3
   A7E6 78 E5              4053 	mov	r0,#_clamp16
   A7E8 79 C0              4054 	mov	r1,#(_clamp16 >> 8)
   A7EA 7A 02              4055 	mov	r2,#(_clamp16 >> 16)
   A7EC 12 00 B3           4056 	lcall	__sdcc_banked_call
   A7EF AA 82              4057 	mov	r2,dpl
   A7F1 AB 83              4058 	mov	r3,dph
   A7F3 E5 81              4059 	mov	a,sp
   A7F5 24 FC              4060 	add	a,#0xfc
   A7F7 F5 81              4061 	mov	sp,a
   A7F9 90 66 6D           4062 	mov	dptr,#(_train + 0x002d)
   A7FC EA                 4063 	mov	a,r2
   A7FD F0                 4064 	movx	@dptr,a
   A7FE A3                 4065 	inc	dptr
   A7FF EB                 4066 	mov	a,r3
   A800 F0                 4067 	movx	@dptr,a
                           4068 ;	../../shared/src/dfe_adaptation.c:397: train.boost = (uint16_t)abs16(train.sumFtap - sumf_boost_target_c);
   A801 90 66 6D           4069 	mov	dptr,#(_train + 0x002d)
   A804 E0                 4070 	movx	a,@dptr
   A805 FA                 4071 	mov	r2,a
   A806 A3                 4072 	inc	dptr
   A807 E0                 4073 	movx	a,@dptr
   A808 FB                 4074 	mov	r3,a
   A809 90 66 CA           4075 	mov	dptr,#_sumf_boost_target_c
   A80C E0                 4076 	movx	a,@dptr
   A80D FC                 4077 	mov	r4,a
   A80E 33                 4078 	rlc	a
   A80F 95 E0              4079 	subb	a,acc
   A811 FD                 4080 	mov	r5,a
   A812 EA                 4081 	mov	a,r2
   A813 C3                 4082 	clr	c
   A814 9C                 4083 	subb	a,r4
   A815 F5 82              4084 	mov	dpl,a
   A817 EB                 4085 	mov	a,r3
   A818 9D                 4086 	subb	a,r5
   A819 F5 83              4087 	mov	dph,a
   A81B 78 58              4088 	mov	r0,#_abs16
   A81D 79 C1              4089 	mov	r1,#(_abs16 >> 8)
   A81F 7A 02              4090 	mov	r2,#(_abs16 >> 16)
   A821 12 00 B3           4091 	lcall	__sdcc_banked_call
   A824 AA 82              4092 	mov	r2,dpl
   A826 AB 83              4093 	mov	r3,dph
   A828 90 66 6B           4094 	mov	dptr,#(_train + 0x002b)
   A82B EA                 4095 	mov	a,r2
   A82C F0                 4096 	movx	@dptr,a
   A82D A3                 4097 	inc	dptr
   A82E EB                 4098 	mov	a,r3
   A82F F0                 4099 	movx	@dptr,a
   A830 85 18 81           4100 	mov	sp,_bp
   A833 D0 18              4101 	pop	_bp
   A835 02 00 C5           4102 	ljmp	__sdcc_banked_ret
                           4103 ;------------------------------------------------------------
                           4104 ;Allocation info for local variables in function 'level_ffe'
                           4105 ;------------------------------------------------------------
                           4106 ;lvl                       Allocated to registers r2 
                           4107 ;------------------------------------------------------------
                           4108 ;	../../shared/src/dfe_adaptation.c:404: void level_ffe(void) BANKING_CTRL {
                           4109 ;	-----------------------------------------
                           4110 ;	 function level_ffe
                           4111 ;	-----------------------------------------
   A838                    4112 _level_ffe:
                           4113 ;	../../shared/src/dfe_adaptation.c:407: if (train.eye_check_pass==0)            lvl = 0;
   A838 90 66 55           4114 	mov	dptr,#(_train + 0x0015)
   A83B E0                 4115 	movx	a,@dptr
   A83C 70 03              4116 	jnz	00114$
   A83E FA                 4117 	mov	r2,a
   A83F 80 4D              4118 	sjmp	00115$
   A841                    4119 00114$:
                           4120 ;	../../shared/src/dfe_adaptation.c:408: else if (train.eo < tag_THRE_POOR)      lvl = 1; 
   A841 90 66 5F           4121 	mov	dptr,#(_train + 0x001f)
   A844 E0                 4122 	movx	a,@dptr
   A845 FB                 4123 	mov	r3,a
   A846 90 60 4E           4124 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   A849 E0                 4125 	movx	a,@dptr
   A84A 54 07              4126 	anl	a,#0x07
   A84C FC                 4127 	mov	r4,a
   A84D 8B 05              4128 	mov	ar5,r3
   A84F C3                 4129 	clr	c
   A850 ED                 4130 	mov	a,r5
   A851 64 80              4131 	xrl	a,#0x80
   A853 8C F0              4132 	mov	b,r4
   A855 63 F0 80           4133 	xrl	b,#0x80
   A858 95 F0              4134 	subb	a,b
   A85A 50 04              4135 	jnc	00111$
   A85C 7A 01              4136 	mov	r2,#0x01
   A85E 80 2E              4137 	sjmp	00115$
   A860                    4138 00111$:
                           4139 ;	../../shared/src/dfe_adaptation.c:409: else if (train.eo < tag_THRE_GOOD)      lvl = 2; 
   A860 90 60 4D           4140 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   A863 E0                 4141 	movx	a,@dptr
   A864 54 1F              4142 	anl	a,#0x1f
   A866 FC                 4143 	mov	r4,a
   A867 C3                 4144 	clr	c
   A868 EB                 4145 	mov	a,r3
   A869 64 80              4146 	xrl	a,#0x80
   A86B 8C F0              4147 	mov	b,r4
   A86D 63 F0 80           4148 	xrl	b,#0x80
   A870 95 F0              4149 	subb	a,b
   A872 50 04              4150 	jnc	00108$
   A874 7A 02              4151 	mov	r2,#0x02
   A876 80 16              4152 	sjmp	00115$
   A878                    4153 00108$:
                           4154 ;	../../shared/src/dfe_adaptation.c:410: else if (train.saturated)               lvl = 3;
   A878 90 66 68           4155 	mov	dptr,#(_train + 0x0028)
   A87B E0                 4156 	movx	a,@dptr
   A87C 60 04              4157 	jz	00105$
   A87E 7A 03              4158 	mov	r2,#0x03
   A880 80 0C              4159 	sjmp	00115$
   A882                    4160 00105$:
                           4161 ;	../../shared/src/dfe_adaptation.c:411: else if (train.excellent_eo==0) 		lvl = 4; 
   A882 90 66 69           4162 	mov	dptr,#(_train + 0x0029)
   A885 E0                 4163 	movx	a,@dptr
   A886 70 04              4164 	jnz	00102$
   A888 7A 04              4165 	mov	r2,#0x04
   A88A 80 02              4166 	sjmp	00115$
   A88C                    4167 00102$:
                           4168 ;	../../shared/src/dfe_adaptation.c:412: else                                    lvl = 5;
   A88C 7A 05              4169 	mov	r2,#0x05
   A88E                    4170 00115$:
                           4171 ;	../../shared/src/dfe_adaptation.c:413: train.level = lvl; 	
   A88E 90 66 63           4172 	mov	dptr,#(_train + 0x0023)
   A891 EA                 4173 	mov	a,r2
   A892 F0                 4174 	movx	@dptr,a
   A893 02 00 C5           4175 	ljmp	__sdcc_banked_ret
                           4176 ;------------------------------------------------------------
                           4177 ;Allocation info for local variables in function 'Check_F0d'
                           4178 ;------------------------------------------------------------
                           4179 ;------------------------------------------------------------
                           4180 ;	../../shared/src/dfe_adaptation.c:417: void Check_F0d(void) BANKING_CTRL {
                           4181 ;	-----------------------------------------
                           4182 ;	 function Check_F0d
                           4183 ;	-----------------------------------------
   A896                    4184 _Check_F0d:
                           4185 ;	../../shared/src/dfe_adaptation.c:419: if(eom_ext_mode==1 || dfe_dis == 1 ) return;
   A896 90 67 25           4186 	mov	dptr,#_eom_ext_mode
   A899 E0                 4187 	movx	a,@dptr
   A89A FA                 4188 	mov	r2,a
   A89B BA 01 02           4189 	cjne	r2,#0x01,00117$
   A89E 80 08              4190 	sjmp	00101$
   A8A0                    4191 00117$:
   A8A0 90 66 F7           4192 	mov	dptr,#_dfe_dis
   A8A3 E0                 4193 	movx	a,@dptr
   A8A4 FA                 4194 	mov	r2,a
   A8A5 BA 01 03           4195 	cjne	r2,#0x01,00102$
   A8A8                    4196 00101$:
   A8A8 02 A9 3A           4197 	ljmp	00111$
   A8AB                    4198 00102$:
                           4199 ;	../../shared/src/dfe_adaptation.c:420: if( lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;
   A8AB 90 60 4C           4200 	mov	dptr,#_DFE_CONTROL_5
   A8AE E0                 4201 	movx	a,@dptr
   A8AF 30 E3 03           4202 	jnb	acc.3,00105$
   A8B2 02 A9 3A           4203 	ljmp	00111$
   A8B5                    4204 00105$:
                           4205 ;	../../shared/src/dfe_adaptation.c:421: if( lnx_PHASE_ADAPT_ENABLE_LANE || do_phase_adapt ) return;
   A8B5 90 60 4C           4206 	mov	dptr,#_DFE_CONTROL_5
   A8B8 E0                 4207 	movx	a,@dptr
   A8B9 20 E5 07           4208 	jb	acc.5,00106$
   A8BC 90 67 15           4209 	mov	dptr,#_do_phase_adapt
   A8BF E0                 4210 	movx	a,@dptr
   A8C0 FA                 4211 	mov	r2,a
   A8C1 60 03              4212 	jz	00107$
   A8C3                    4213 00106$:
   A8C3 02 A9 3A           4214 	ljmp	00111$
   A8C6                    4215 00107$:
                           4216 ;	../../shared/src/dfe_adaptation.c:422: if( lnx_CDR_DFE_F0D_NORM_ADAPT_EN_LANE==0) return;
   A8C6 90 60 47           4217 	mov	dptr,#(_DFE_CONTROL_3 + 0x0003)
   A8C9 E0                 4218 	movx	a,@dptr
   A8CA 20 E1 02           4219 	jb	acc.1,00110$
   A8CD 80 6B              4220 	sjmp	00111$
   A8CF                    4221 00110$:
                           4222 ;	../../shared/src/dfe_adaptation.c:424: dfe_hardware_cont_stop();
   A8CF 78 54              4223 	mov	r0,#_dfe_hardware_cont_stop
   A8D1 79 91              4224 	mov	r1,#(_dfe_hardware_cont_stop >> 8)
   A8D3 7A 02              4225 	mov	r2,#(_dfe_hardware_cont_stop >> 16)
   A8D5 12 00 B3           4226 	lcall	__sdcc_banked_call
                           4227 ;	../../shared/src/dfe_adaptation.c:426: cds_tb = cds_table[CDS_F0D];
   A8D8 90 00 EE           4228 	mov	dptr,#(_cds_table + 0x0010)
   A8DB E4                 4229 	clr	a
   A8DC 93                 4230 	movc	a,@a+dptr
   A8DD FA                 4231 	mov	r2,a
   A8DE A3                 4232 	inc	dptr
   A8DF E4                 4233 	clr	a
   A8E0 93                 4234 	movc	a,@a+dptr
   A8E1 FB                 4235 	mov	r3,a
   A8E2 90 61 74           4236 	mov	dptr,#_CDS_READ_MISC1
   A8E5 EA                 4237 	mov	a,r2
   A8E6 F0                 4238 	movx	@dptr,a
   A8E7 A3                 4239 	inc	dptr
   A8E8 EB                 4240 	mov	a,r3
   A8E9 F0                 4241 	movx	@dptr,a
                           4242 ;	../../shared/src/dfe_adaptation.c:427: cdr_dfe_scheme();
   A8EA 78 96              4243 	mov	r0,#_cdr_dfe_scheme
   A8EC 79 92              4244 	mov	r1,#(_cdr_dfe_scheme >> 8)
   A8EE 7A 01              4245 	mov	r2,#(_cdr_dfe_scheme >> 16)
   A8F0 12 00 B3           4246 	lcall	__sdcc_banked_call
                           4247 ;	../../shared/src/dfe_adaptation.c:429: lnx_RD_DFE_F0D_LANE_7_0 = ( cds28.f0d.d_p_e + cds28.f0d.d_n_e + cds28.f0d.d_p_o + cds28.f0d.d_n_o ) >> 2;
   A8F3 90 61 58           4248 	mov	dptr,#(_cds28 + 0x0058)
   A8F6 E0                 4249 	movx	a,@dptr
   A8F7 FA                 4250 	mov	r2,a
   A8F8 7B 00              4251 	mov	r3,#0x00
   A8FA 90 61 59           4252 	mov	dptr,#(_cds28 + 0x0059)
   A8FD E0                 4253 	movx	a,@dptr
   A8FE FC                 4254 	mov	r4,a
   A8FF 7D 00              4255 	mov	r5,#0x00
   A901 EC                 4256 	mov	a,r4
   A902 2A                 4257 	add	a,r2
   A903 FA                 4258 	mov	r2,a
   A904 ED                 4259 	mov	a,r5
   A905 3B                 4260 	addc	a,r3
   A906 FB                 4261 	mov	r3,a
   A907 90 61 5C           4262 	mov	dptr,#(_cds28 + 0x005c)
   A90A E0                 4263 	movx	a,@dptr
   A90B FC                 4264 	mov	r4,a
   A90C 7D 00              4265 	mov	r5,#0x00
   A90E EC                 4266 	mov	a,r4
   A90F 2A                 4267 	add	a,r2
   A910 FA                 4268 	mov	r2,a
   A911 ED                 4269 	mov	a,r5
   A912 3B                 4270 	addc	a,r3
   A913 FB                 4271 	mov	r3,a
   A914 90 61 5D           4272 	mov	dptr,#(_cds28 + 0x005d)
   A917 E0                 4273 	movx	a,@dptr
   A918 FC                 4274 	mov	r4,a
   A919 7D 00              4275 	mov	r5,#0x00
   A91B EC                 4276 	mov	a,r4
   A91C 2A                 4277 	add	a,r2
   A91D FA                 4278 	mov	r2,a
   A91E ED                 4279 	mov	a,r5
   A91F 3B                 4280 	addc	a,r3
   A920 A2 E7              4281 	mov	c,acc.7
   A922 13                 4282 	rrc	a
   A923 CA                 4283 	xch	a,r2
   A924 13                 4284 	rrc	a
   A925 CA                 4285 	xch	a,r2
   A926 A2 E7              4286 	mov	c,acc.7
   A928 13                 4287 	rrc	a
   A929 CA                 4288 	xch	a,r2
   A92A 13                 4289 	rrc	a
   A92B CA                 4290 	xch	a,r2
   A92C 90 60 A1           4291 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0001)
   A92F EA                 4292 	mov	a,r2
   A930 F0                 4293 	movx	@dptr,a
                           4294 ;	../../shared/src/dfe_adaptation.c:431: dfe_hardware_cont_run();
   A931 78 89              4295 	mov	r0,#_dfe_hardware_cont_run
   A933 79 91              4296 	mov	r1,#(_dfe_hardware_cont_run >> 8)
   A935 7A 02              4297 	mov	r2,#(_dfe_hardware_cont_run >> 16)
   A937 12 00 B3           4298 	lcall	__sdcc_banked_call
   A93A                    4299 00111$:
   A93A 02 00 C5           4300 	ljmp	__sdcc_banked_ret
                           4301 	.area CSEG    (CODE)
                           4302 	.area BANK1   (CODE)
   A93D                    4303 _dfe_res_f0_sumFtap:
   A93D 03                 4304 	.db #0x03	;  3
   A93E 04                 4305 	.db #0x04	;  4
   A93F 06                 4306 	.db #0x06	;  6
   A940 07                 4307 	.db #0x07	;  7
   A941                    4308 _dfe_res_f1_sumFtap:
   A941 03                 4309 	.db #0x03	;  3
   A942 04                 4310 	.db #0x04	;  4
   A943 06                 4311 	.db #0x06	;  6
   A944 07                 4312 	.db #0x07	;  7
   A945                    4313 _dfe_res_f2_sumFtap:
   A945 03                 4314 	.db #0x03	;  3
   A946 05                 4315 	.db #0x05	;  5
   A947                    4316 _dfe_res_f3_sumFtap:
   A947 03                 4317 	.db #0x03	;  3
   A948 05                 4318 	.db #0x05	;  5
   A949                    4319 _dfe_res_f4_sumFtap:
   A949 02                 4320 	.db #0x02	;  2
   A94A 03                 4321 	.db #0x03	;  3
   A94B                    4322 _dfe_res_f567_sumFtap:
   A94B 01                 4323 	.db #0x01	;  1
   A94C 02                 4324 	.db #0x02	;  2
                           4325 	.area CABS    (ABS,CODE)
