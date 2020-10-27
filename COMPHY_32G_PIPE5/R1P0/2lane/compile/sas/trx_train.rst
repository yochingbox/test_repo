                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:49 2018
                              5 ;--------------------------------------------------------
                              6 	.module trx_train
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _Cap_sel2_Table
                             13 	.globl _Cap_sel2_o_Table
                             14 	.globl _Cap_sel2_e_Table
                             15 	.globl _Cap_sel_Table
                             16 	.globl _Res_sel2_o_Table
                             17 	.globl _Res_sel2_e_Table
                             18 	.globl _Res_sel_Table
                             19 	.globl _gt1_c_pcie
                             20 	.globl _gt3_c
                             21 	.globl _gt3_dfe_res
                             22 	.globl _gt2_dfe_res
                             23 	.globl _gt1_c
                             24 	.globl _gt1_dfe_res
                             25 	.globl _gt0_dfe_res
                             26 	.globl _update_dfe_res
                             27 	.globl _auto_train_complete
                             28 	.globl _link_train_complete
                             29 	.globl _TF2
                             30 	.globl _TI
                             31 	.globl _RI
                             32 	.globl _EX12
                             33 	.globl _EX11
                             34 	.globl _EX10
                             35 	.globl _EX9
                             36 	.globl _EX8
                             37 	.globl _ES1
                             38 	.globl _PS1
                             39 	.globl _EX6
                             40 	.globl _EX5
                             41 	.globl _EX4
                             42 	.globl _EX3
                             43 	.globl _EX2
                             44 	.globl _EX7
                             45 	.globl _EA
                             46 	.globl _WDT
                             47 	.globl _ET2
                             48 	.globl _ES
                             49 	.globl _ET1
                             50 	.globl _EX1
                             51 	.globl _ET0
                             52 	.globl _EX0
                             53 	.globl _TF1
                             54 	.globl _TR1
                             55 	.globl _TF0
                             56 	.globl _TR0
                             57 	.globl _IE1
                             58 	.globl _IT1
                             59 	.globl _IE0
                             60 	.globl _IT0
                             61 	.globl _P3_7
                             62 	.globl _P3_6
                             63 	.globl _P3_5
                             64 	.globl _P3_4
                             65 	.globl _P3_3
                             66 	.globl _P3_2
                             67 	.globl _P3_1
                             68 	.globl _P3_0
                             69 	.globl _P2_7
                             70 	.globl _P2_6
                             71 	.globl _P2_5
                             72 	.globl _P2_4
                             73 	.globl _P2_3
                             74 	.globl _P2_2
                             75 	.globl _P2_1
                             76 	.globl _P2_0
                             77 	.globl _P1_7
                             78 	.globl _P1_6
                             79 	.globl _P1_5
                             80 	.globl _P1_4
                             81 	.globl _P1_3
                             82 	.globl _P1_2
                             83 	.globl _P1_1
                             84 	.globl _P1_0
                             85 	.globl _P0_7
                             86 	.globl _P0_6
                             87 	.globl _P0_5
                             88 	.globl _P0_4
                             89 	.globl _P0_3
                             90 	.globl _P0_2
                             91 	.globl _P0_1
                             92 	.globl _P0_0
                             93 	.globl _DMAC
                             94 	.globl _DMATA
                             95 	.globl _DMASA
                             96 	.globl _TMR2
                             97 	.globl _TMR1
                             98 	.globl _TMR0
                             99 	.globl _SRST
                            100 	.globl _B
                            101 	.globl _EIE
                            102 	.globl _ACC
                            103 	.globl _ADCON
                            104 	.globl _PSW
                            105 	.globl _TH2
                            106 	.globl _TL2
                            107 	.globl _RCAP2H
                            108 	.globl _RCAP2L
                            109 	.globl _T2CON
                            110 	.globl _CCEN
                            111 	.globl _IRCON
                            112 	.globl _S0RELH
                            113 	.globl _IP1
                            114 	.globl _IEN1
                            115 	.globl _DMAM1
                            116 	.globl _DMAM0
                            117 	.globl _DMASEL
                            118 	.globl _DMAC2
                            119 	.globl _DMAC1
                            120 	.globl _DMAC0
                            121 	.globl _P3
                            122 	.globl _S0RELL
                            123 	.globl _IP0
                            124 	.globl _IEN0
                            125 	.globl _DMAT2
                            126 	.globl _DMAT1
                            127 	.globl _DMAT0
                            128 	.globl _DMAS2
                            129 	.globl _DMAS1
                            130 	.globl _DMAS0
                            131 	.globl _P2
                            132 	.globl _IEN2
                            133 	.globl _SBUF
                            134 	.globl _SCON
                            135 	.globl _PSBANK
                            136 	.globl _DPS
                            137 	.globl _P1
                            138 	.globl _CKCON
                            139 	.globl _TH1
                            140 	.globl _TH0
                            141 	.globl _TL1
                            142 	.globl _TL0
                            143 	.globl _TMOD
                            144 	.globl _TCON
                            145 	.globl _PCON
                            146 	.globl _WDTREL
                            147 	.globl _DPH
                            148 	.globl _DPL
                            149 	.globl _P0
                            150 	.globl _sq_thrs_ratio_tb
                            151 	.globl _train_save_tb
                            152 	.globl _tx_tb
                            153 	.globl _UPHY_ANAREG_REV_0
                            154 	.globl _dfe_sm_save
                            155 	.globl _dfe_sm_dc
                            156 	.globl _dfe_sm
                            157 	.globl _cds28
                            158 	.globl _lnx_calx_align90_gm
                            159 	.globl _lnx_calx_align90_dac
                            160 	.globl _lnx_calx_align90_dummy_clk
                            161 	.globl _lnx_calx_eom_dpher
                            162 	.globl _lnx_calx_vdda_dll_eom_sel
                            163 	.globl _lnx_calx_dll_eom_gmsel
                            164 	.globl _lnx_calx_vdda_dll_sel
                            165 	.globl _lnx_calx_dll_gmsel
                            166 	.globl _lnx_calx_rxdcc_dll_hg
                            167 	.globl _lnx_calx_rxdcc_dll
                            168 	.globl _lnx_calx_txdcc_hg
                            169 	.globl _lnx_calx_txdcc
                            170 	.globl _lnx_calx_txdcc_pdiv_hg
                            171 	.globl _lnx_calx_txdcc_pdiv
                            172 	.globl _lnx_spdoft_tx_preset_index_lane
                            173 	.globl _lnx_cal_sellv_rxeomclk
                            174 	.globl _lnx_cal_sellv_rxsampler
                            175 	.globl _lnx_cal_sellv_txpre
                            176 	.globl _lnx_cal_sellv_rxdataclk
                            177 	.globl _lnx_cal_sellv_txclk
                            178 	.globl _lnx_cal_sellv_txdata
                            179 	.globl _lnx_cal_align90_gm
                            180 	.globl _lnx_cal_align90_dac
                            181 	.globl _lnx_cal_align90_dummy_clk
                            182 	.globl _lnx_cal_eom_dpher
                            183 	.globl _lnx_cal_vdda_dll_eom_sel
                            184 	.globl _lnx_cal_dll_eom_gmsel
                            185 	.globl _lnx_cal_vdda_dll_sel
                            186 	.globl _lnx_cal_dll_gmsel
                            187 	.globl _lnx_cal_rxdcc_eom_hg
                            188 	.globl _lnx_cal_rxdcc_eom
                            189 	.globl _lnx_cal_rxdcc_data_hg
                            190 	.globl _lnx_cal_rxdcc_data
                            191 	.globl _lnx_cal_rxdcc_dll_hg
                            192 	.globl _lnx_cal_rxdcc_dll
                            193 	.globl _lnx_cal_txdcc_hg
                            194 	.globl _lnx_cal_txdcc
                            195 	.globl _lnx_cal_txdcc_pdiv_hg
                            196 	.globl _lnx_cal_txdcc_pdiv
                            197 	.globl _cmx_cal_sllp_dac_fine_ring
                            198 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            199 	.globl _cmx_cal_pll_speed_ring
                            200 	.globl _cmx_cal_plldcc
                            201 	.globl _cmx_cal_lccap_lsb
                            202 	.globl _cmx_cal_lccap_msb
                            203 	.globl _cmx_cal_lcvco_dac_msb
                            204 	.globl _cmx_cal_lcvco_dac_lsb
                            205 	.globl _cmx_cal_lcvco_dac
                            206 	.globl _local_tx_preset_tb
                            207 	.globl _train_g0_index
                            208 	.globl _train_g1_index
                            209 	.globl _train_gn1_index
                            210 	.globl _phase_save
                            211 	.globl _txffe_save
                            212 	.globl _rc_save
                            213 	.globl _phy_mode_lane_table
                            214 	.globl _speedtable
                            215 	.globl _min_gen
                            216 	.globl _max_gen
                            217 	.globl _phy_mode_cmn_table
                            218 	.globl _ring_speedtable
                            219 	.globl _lc_speedtable
                            220 	.globl _TXTRAIN_IF_REG0
                            221 	.globl _CDS_READ_MISC1
                            222 	.globl _CDS_READ_MISC0
                            223 	.globl _DFE_READ_F0D_RIGHT_ODD
                            224 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            225 	.globl _DFE_READ_F0D_LEFT_ODD
                            226 	.globl _DFE_READ_F0D_LEFT_EVEN
                            227 	.globl _DFE_READ_F0D_ODD
                            228 	.globl _DFE_READ_F0D_EVEN
                            229 	.globl _DFE_READ_F0B_ODD
                            230 	.globl _DFE_READ_F0B_EVEN
                            231 	.globl _DFE_READ_F0A_ODD
                            232 	.globl _DFE_READ_F0A_EVEN
                            233 	.globl _DFE_READ_ODD_REG8
                            234 	.globl _DFE_READ_EVEN_REG8
                            235 	.globl _DFE_READ_ODD_REG7
                            236 	.globl _DFE_READ_ODD_REG6
                            237 	.globl _DFE_READ_ODD_REG5
                            238 	.globl _DFE_READ_ODD_REG4
                            239 	.globl _DFE_READ_ODD_REG3
                            240 	.globl _DFE_READ_ODD_REG2
                            241 	.globl _DFE_READ_ODD_REG1
                            242 	.globl _DFE_READ_ODD_REG0
                            243 	.globl _DFE_READ_EVEN_REG7
                            244 	.globl _DFE_READ_EVEN_REG6
                            245 	.globl _DFE_READ_EVEN_REG5
                            246 	.globl _DFE_READ_EVEN_REG4
                            247 	.globl _DFE_READ_EVEN_REG3
                            248 	.globl _DFE_READ_EVEN_REG2
                            249 	.globl _DFE_READ_EVEN_REG1
                            250 	.globl _DFE_READ_EVEN_REG0
                            251 	.globl _TX_TRAIN_IF_REG8
                            252 	.globl _TX_TRAIN_CTRL_LANE
                            253 	.globl _TX_TRAIN_IF_REG7
                            254 	.globl _TX_TRAIN_IF_REG6
                            255 	.globl _TX_TRAIN_IF_REG5
                            256 	.globl _TX_TRAIN_IF_REG4
                            257 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            258 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            259 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            260 	.globl _TX_AMP_CTRL_REG0
                            261 	.globl _TX_DRV_RD_OUT_REG0
                            262 	.globl _LINK_TRAIN_MODE0
                            263 	.globl _TX_EMPH_CTRL_REG0
                            264 	.globl _TX_TRAIN_DEFAULT_REG5
                            265 	.globl _TX_TRAIN_DEFAULT_REG4
                            266 	.globl _TX_TRAIN_DEFAULT_REG3
                            267 	.globl _TX_TRAIN_DEFAULT_REG2
                            268 	.globl _TX_TRAIN_DEFAULT_REG1
                            269 	.globl _TX_TRAIN_DEFAULT_REG0
                            270 	.globl _TX_TRAIN_DRIVER_REG2
                            271 	.globl _TX_TRAIN_DRIVER_REG1
                            272 	.globl _TX_TRAIN_DRIVER_REG0
                            273 	.globl _TX_TRAIN_PATTTERN_REG0
                            274 	.globl _TX_TRAIN_IF_REG3
                            275 	.globl _TX_TRAIN_IF_REG2
                            276 	.globl _TX_TRAIN_IF_REG1
                            277 	.globl _TX_TRAIN_IF_REG0
                            278 	.globl _DME_DEC_REG1
                            279 	.globl _DME_DEC_REG0
                            280 	.globl _DME_ENC_REG2
                            281 	.globl _DME_ENC_REG1
                            282 	.globl _DME_ENC_REG0
                            283 	.globl _END_XDAT_CMN
                            284 	.globl _MCU_INFO_13
                            285 	.globl _MCU_INFO_12
                            286 	.globl _MCU_INFO_5
                            287 	.globl _MCU_INFO_4
                            288 	.globl _SYNC_INFO
                            289 	.globl _CDS_EYE_CLK_THR
                            290 	.globl _TX_SAVE_4
                            291 	.globl _TX_SAVE_3
                            292 	.globl _TX_SAVE_2
                            293 	.globl _TX_SAVE_1
                            294 	.globl _TX_SAVE_0
                            295 	.globl _ETH_PRESET1_TB
                            296 	.globl _ETH_PRESET0_TB
                            297 	.globl _SAS_PRESET2_TB
                            298 	.globl _SAS_PRESET1_TB
                            299 	.globl _SAS_PRESET0_TB
                            300 	.globl _G_SELLV_RXSAMPLER
                            301 	.globl _G_SELLV_RXDATACLK
                            302 	.globl _G_SELLV_RXEOMCLK
                            303 	.globl _G_SELLV_TXPRE
                            304 	.globl _G_SELLV_TXDATA
                            305 	.globl _G_SELLV_TXCLK
                            306 	.globl _TIMER_SEL3
                            307 	.globl _TIMER_SEL2
                            308 	.globl _TIMER_SEL1
                            309 	.globl _MCU_CONFIG1
                            310 	.globl _LOOP_CNTS
                            311 	.globl _CAL_DATA1
                            312 	.globl _MCU_CONFIG
                            313 	.globl _CAL_STATUS_READ
                            314 	.globl _CAL_TIME_OUT_AND_DIS
                            315 	.globl _CON_CAL_STEP_SIZE5
                            316 	.globl _CON_CAL_STEP_SIZE4
                            317 	.globl _CON_CAL_STEP_SIZE3
                            318 	.globl _CON_CAL_STEP_SIZE2
                            319 	.globl _CON_CAL_STEP_SIZE1
                            320 	.globl _CONTROL_CONFIG9
                            321 	.globl _CONTROL_CONFIG8
                            322 	.globl _TRAIN_IF_CONFIG
                            323 	.globl _CAL_DATA0
                            324 	.globl _CONTROL_CONFIG7
                            325 	.globl _CONTROL_CONFIG6
                            326 	.globl _CONTROL_CONFIG5
                            327 	.globl _CONTROL_CONFIG4
                            328 	.globl _CONTROL_CONFIG3
                            329 	.globl _CONTROL_CONFIG2
                            330 	.globl _CONTROL_CONFIG1
                            331 	.globl _CONTROL_CONFIG0
                            332 	.globl _FW_REV
                            333 	.globl _CID_REG1
                            334 	.globl _CID_REG0
                            335 	.globl _CMN_MCU_REG
                            336 	.globl _SET_LANE_ISR
                            337 	.globl _CMN_ISR_MASK_1
                            338 	.globl _CMN_ISR_1
                            339 	.globl _CMN_MCU_TIMER3_CONTROL
                            340 	.globl _CMN_MCU_TIMER2_CONTROL
                            341 	.globl _CMN_MCU_TIMER1_CONTROL
                            342 	.globl _CMN_MCU_TIMER0_CONTROL
                            343 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            344 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            345 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            346 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            347 	.globl _CMN_MCU_TIMER_CONTROL
                            348 	.globl _CMN_CACHE_DEBUG1
                            349 	.globl _CMN_MCU_GPIO
                            350 	.globl _CMN_ISR_CLEAR_2
                            351 	.globl _CMN_ISR_MASK_2
                            352 	.globl _CMN_ISR_2
                            353 	.globl _MCU_INT_ADDR
                            354 	.globl _CMN_CACHE_DEBUG0
                            355 	.globl _MCU_SDT_CMN
                            356 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            357 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            358 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            359 	.globl _TEST5
                            360 	.globl _PM_CMN_REG2
                            361 	.globl _INPUT_CMN_PIN_REG3
                            362 	.globl __FIELDNAME_
                            363 	.globl _CMN_CALIBRATION
                            364 	.globl _OUTPUT_CMN_PIN_REG0
                            365 	.globl _SPD_CMN_REG1
                            366 	.globl _CLKGEN_CMN_REG1
                            367 	.globl _PLLCAL_REG1
                            368 	.globl _PLLCAL_REG0
                            369 	.globl _ANA_TSEN_CONTROL
                            370 	.globl _INPUT_CMN_PIN_REG2
                            371 	.globl _INPUT_CMN_PIN_REG1
                            372 	.globl _INPUT_CMN_PIN_REG0
                            373 	.globl _PM_CMN_REG1
                            374 	.globl _SYSTEM
                            375 	.globl _TEST4
                            376 	.globl _TEST3
                            377 	.globl _TEST2
                            378 	.globl _TEST1
                            379 	.globl _TEST0
                            380 	.globl _MCU_SYNC2
                            381 	.globl _MCU_SYNC1
                            382 	.globl _MEM_IRQ_CLEAR
                            383 	.globl _APB_CONTROL_REG
                            384 	.globl _ANA_IF_CMN_REG0
                            385 	.globl _MEM_IRQ_MASK
                            386 	.globl _MEM_IRQ
                            387 	.globl _ANA_IF_CMN_REG1
                            388 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            389 	.globl _MCU_INFO_3
                            390 	.globl _MCU_INFO_2
                            391 	.globl _MCU_INFO_1
                            392 	.globl _MCU_INFO_0
                            393 	.globl _MEMORY_CONTROL_4
                            394 	.globl _MEMORY_CONTROL_3
                            395 	.globl _MEMORY_CONTROL_2
                            396 	.globl _MEMORY_CONTROL_1
                            397 	.globl _MEMORY_CONTROL_0
                            398 	.globl _MCU_DEBUG1
                            399 	.globl _MCU_DEBUG0
                            400 	.globl _MCU_CONTROL_4
                            401 	.globl _MCU_CONTROL_3
                            402 	.globl _MCU_CONTROL_2
                            403 	.globl _MCU_CONTROL_1
                            404 	.globl _MCU_CONTROL_0
                            405 	.globl _GLOB_L1_SUBSTATES_CFG
                            406 	.globl _GLOB_PIPE_REVISION
                            407 	.globl _GLOB_BIST_DATA_HI
                            408 	.globl _GLOB_BIST_SEQR_CFG
                            409 	.globl _GLOB_BIST_RESULT
                            410 	.globl _GLOB_BIST_MASK
                            411 	.globl _GLOB_BIST_START
                            412 	.globl _GLOB_BIST_LANE_TYPE
                            413 	.globl _GLOB_BIST_CTRL
                            414 	.globl _GLOB_DP_BAL_CFG4
                            415 	.globl _GLOB_DP_BAL_CFG2
                            416 	.globl _GLOB_DP_BAL_CFG0
                            417 	.globl _GLOB_PM_DP_CTRL
                            418 	.globl _GLOB_COUNTER_HI
                            419 	.globl _GLOB_COUNTER_CTRL
                            420 	.globl _GLOB_PM_CFG0
                            421 	.globl _GLOB_DP_SAL_CFG5
                            422 	.globl _GLOB_DP_SAL_CFG3
                            423 	.globl _GLOB_DP_SAL_CFG1
                            424 	.globl _GLOB_DP_SAL_CFG
                            425 	.globl _GLOB_MISC_CTRL
                            426 	.globl _GLOB_CLK_SRC_HI
                            427 	.globl _GLOB_CLK_SRC_LO
                            428 	.globl _GLOB_RST_CLK_CTRL
                            429 	.globl _DFE_STATIC_REG6
                            430 	.globl _DFE_STATIC_REG5
                            431 	.globl _DFE_STATIC_REG4
                            432 	.globl _DFE_STATIC_REG3
                            433 	.globl _DFE_STATIC_REG1
                            434 	.globl _DFE_STATIC_REG0
                            435 	.globl _RX_CMN_0
                            436 	.globl _SRIS_REG1
                            437 	.globl _SRIS_REG0
                            438 	.globl _DTX_PHY_ALIGN_REG2
                            439 	.globl _DTX_PHY_ALIGN_REG1
                            440 	.globl _DTX_PHY_ALIGN_REG0
                            441 	.globl _DTX_REG4
                            442 	.globl _DTX_REG3
                            443 	.globl _DTX_REG2
                            444 	.globl _DTX_REG1
                            445 	.globl _DTX_REG0
                            446 	.globl _TX_CMN_REG
                            447 	.globl _END_XDAT_LANE
                            448 	.globl _TRAIN_CONTROL_17
                            449 	.globl _TRAIN_CONTROL_16
                            450 	.globl _TRAIN_CONTROL_15
                            451 	.globl _TRAIN_CONTROL_14
                            452 	.globl _TRAIN_CONTROL_13
                            453 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            454 	.globl _ESM_POP_N_CNT_LOW_LANE
                            455 	.globl _TRAIN_CONTROL_12
                            456 	.globl _TRAIN_CONTROL_11
                            457 	.globl _TRAIN_CONTROL_10
                            458 	.globl _TRAIN_CONTROL_9
                            459 	.globl _TRAIN_CONTROL_8
                            460 	.globl _TRAIN_CONTROL_7
                            461 	.globl _TRAIN_CONTROL_6
                            462 	.globl _TRAIN_CONTROL_5
                            463 	.globl _TRAIN_CONTROL_4
                            464 	.globl _TRAIN_CONTROL_3
                            465 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            466 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            467 	.globl _ESM_POP_P_CNT_LOW_LANE
                            468 	.globl _CDS_CTRL_REG1
                            469 	.globl _CDS_CTRL_REG0
                            470 	.globl _DFE_CONTROL_11
                            471 	.globl _DFE_CONTROL_10
                            472 	.globl _DFE_CONTROL_9
                            473 	.globl _DFE_CONTROL_8
                            474 	.globl _DFE_CONTROL_7
                            475 	.globl _DFE_TEST_5
                            476 	.globl _DFE_TEST_4
                            477 	.globl _DFE_TEST_1
                            478 	.globl _DFE_TEST_0
                            479 	.globl _DFE_CONTROL_6
                            480 	.globl _TRAIN_PARA_3
                            481 	.globl _TRAIN_PARA_2
                            482 	.globl _TRAIN_PARA_1
                            483 	.globl _TRAIN_PARA_0
                            484 	.globl _DLL_CAL
                            485 	.globl _RPTA_CONFIG_1
                            486 	.globl _RPTA_CONFIG_0
                            487 	.globl _TRAIN_CONTROL_2
                            488 	.globl _TRAIN_CONTROL_1
                            489 	.globl _TRAIN_CONTROL_0
                            490 	.globl _DFE_CONTROL_5
                            491 	.globl _DFE_CONTROL_4
                            492 	.globl _DFE_CONTROL_3
                            493 	.globl _DFE_CONTROL_2
                            494 	.globl _DFE_CONTROL_1
                            495 	.globl _DFE_CONTROL_0
                            496 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            497 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            498 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            499 	.globl _PHY_LOCAL_VALUE_LANE
                            500 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            501 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            502 	.globl _CAL_SAVE_DATA3_LANE
                            503 	.globl _CAL_SAVE_DATA2_LANE
                            504 	.globl _CAL_SAVE_DATA1_LANE
                            505 	.globl _CAL_CTRL4_LANE
                            506 	.globl _CAL_CTRL3_LANE
                            507 	.globl _CAL_CTRL2_LANE
                            508 	.globl _CAL_CTRL1_LANE
                            509 	.globl _LANE_MARGIN_REG0
                            510 	.globl _EOM_VLD_REG4
                            511 	.globl _EOM_REG0
                            512 	.globl _EOM_ERR_REG3
                            513 	.globl _EOM_ERR_REG2
                            514 	.globl _EOM_ERR_REG1
                            515 	.globl _EOM_ERR_REG0
                            516 	.globl _EOM_VLD_REG3
                            517 	.globl _EOM_VLD_REG2
                            518 	.globl _EOM_VLD_REG1
                            519 	.globl _EOM_VLD_REG0
                            520 	.globl _DFE_STATIC_LANE_REG6
                            521 	.globl _DFE_STATIC_LANE_REG5
                            522 	.globl _DFE_STATIC_LANE_REG4
                            523 	.globl _DFE_STATIC_LANE_REG3
                            524 	.globl _DFE_STATIC_LANE_REG1
                            525 	.globl _DFE_STATIC_LANE_REG0
                            526 	.globl _DFE_DCE_REG0
                            527 	.globl _CAL_OFST_REG2
                            528 	.globl _CAL_OFST_REG1
                            529 	.globl _CAL_OFST_REG0
                            530 	.globl _DFE_READ_ODD_2C_REG8
                            531 	.globl _DFE_READ_EVEN_2C_REG8
                            532 	.globl _DFE_READ_ODD_2C_REG7
                            533 	.globl _DFE_READ_ODD_2C_REG6
                            534 	.globl _DFE_READ_ODD_2C_REG5
                            535 	.globl _DFE_READ_ODD_2C_REG4
                            536 	.globl _DFE_READ_ODD_2C_REG3
                            537 	.globl _DFE_READ_ODD_2C_REG2
                            538 	.globl _DFE_READ_ODD_2C_REG1
                            539 	.globl _DFE_READ_ODD_2C_REG0
                            540 	.globl _DFE_READ_EVEN_2C_REG7
                            541 	.globl _DFE_READ_EVEN_2C_REG6
                            542 	.globl _DFE_READ_EVEN_2C_REG5
                            543 	.globl _DFE_READ_EVEN_2C_REG4
                            544 	.globl _DFE_READ_EVEN_2C_REG3
                            545 	.globl _DFE_READ_EVEN_2C_REG2
                            546 	.globl _DFE_READ_EVEN_2C_REG1
                            547 	.globl _DFE_READ_EVEN_2C_REG0
                            548 	.globl _DFE_READ_ODD_SM_REG8
                            549 	.globl _DFE_READ_EVEN_SM_REG8
                            550 	.globl _DFE_READ_ODD_SM_REG7
                            551 	.globl _DFE_READ_ODD_SM_REG6
                            552 	.globl _DFE_READ_ODD_SM_REG5
                            553 	.globl _DFE_READ_ODD_SM_REG4
                            554 	.globl _DFE_READ_ODD_SM_REG3
                            555 	.globl _DFE_READ_ODD_SM_REG2
                            556 	.globl _DFE_READ_ODD_SM_REG1
                            557 	.globl _DFE_READ_ODD_SM_REG0
                            558 	.globl _DFE_READ_EVEN_SM_REG7
                            559 	.globl _DFE_READ_EVEN_SM_REG6
                            560 	.globl _DFE_READ_EVEN_SM_REG5
                            561 	.globl _DFE_READ_EVEN_SM_REG4
                            562 	.globl _DFE_READ_EVEN_SM_REG3
                            563 	.globl _DFE_READ_EVEN_SM_REG2
                            564 	.globl _DFE_READ_EVEN_SM_REG1
                            565 	.globl _DFE_READ_EVEN_SM_REG0
                            566 	.globl _DFE_FEXT_ODD_REG7
                            567 	.globl _DFE_FEXT_ODD_REG6
                            568 	.globl _DFE_FEXT_ODD_REG5
                            569 	.globl _DFE_FEXT_ODD_REG4
                            570 	.globl _DFE_FEXT_ODD_REG3
                            571 	.globl _DFE_FEXT_ODD_REG2
                            572 	.globl _DFE_FEXT_ODD_REG1
                            573 	.globl _DFE_FEXT_ODD_REG0
                            574 	.globl _DFE_FEXT_EVEN_REG7
                            575 	.globl _DFE_FEXT_EVEN_REG6
                            576 	.globl _DFE_FEXT_EVEN_REG5
                            577 	.globl _DFE_FEXT_EVEN_REG4
                            578 	.globl _DFE_FEXT_EVEN_REG3
                            579 	.globl _DFE_FEXT_EVEN_REG2
                            580 	.globl _DFE_FEXT_EVEN_REG1
                            581 	.globl _DFE_FEXT_EVEN_REG0
                            582 	.globl _DFE_DC_ODD_REG8
                            583 	.globl _DFE_DC_EVEN_REG8
                            584 	.globl _DFE_FEN_ODD_REG
                            585 	.globl _DFE_FEN_EVEN_REG
                            586 	.globl _DFE_STEP_REG1
                            587 	.globl _DFE_STEP_REG0
                            588 	.globl _DFE_ANA_REG1
                            589 	.globl _DFE_ANA_REG0
                            590 	.globl _DFE_CTRL_REG4
                            591 	.globl _RX_EQ_CLK_CTRL
                            592 	.globl _DFE_CTRL_REG3
                            593 	.globl _DFE_CTRL_REG2
                            594 	.globl _DFE_CTRL_REG1
                            595 	.globl _DFE_CTRL_REG0
                            596 	.globl _PT_COUNTER2
                            597 	.globl _PT_COUNTER1
                            598 	.globl _PT_COUNTER0
                            599 	.globl _PT_USER_PATTERN2
                            600 	.globl _PT_USER_PATTERN1
                            601 	.globl _PT_USER_PATTERN0
                            602 	.globl _PT_CONTROL1
                            603 	.globl _PT_CONTROL0
                            604 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            605 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            606 	.globl _MEM_ECC_ERR_ADDRESS0
                            607 	.globl _MCU_COMMAND0
                            608 	.globl _MCU_INT_CONTROL_13
                            609 	.globl _MCU_WDT_LANE
                            610 	.globl _MCU_IRQ_ISR_LANE
                            611 	.globl _ANA_IF_DFEO_REG0
                            612 	.globl _ANA_IF_DFEE_REG0
                            613 	.globl _ANA_IF_TRX_REG0
                            614 	.globl _EXT_INT_CONTROL
                            615 	.globl _MCU_DEBUG_LANE
                            616 	.globl _MCU_DEBUG3_LANE
                            617 	.globl _MCU_DEBUG2_LANE
                            618 	.globl _MCU_DEBUG1_LANE
                            619 	.globl _MCU_DEBUG0_LANE
                            620 	.globl _MCU_TIMER_CTRL_7_LANE
                            621 	.globl _MCU_TIMER_CTRL_6_LANE
                            622 	.globl _MCU_TIMER_CTRL_5_LANE
                            623 	.globl _MCU_TIMER_CTRL_4_LANE
                            624 	.globl _MCU_TIMER_CTRL_3_LANE
                            625 	.globl _MCU_TIMER_CTRL_2_LANE
                            626 	.globl _MCU_TIMER_CTRL_1_LANE
                            627 	.globl _MCU_MEM_REG2_LANE
                            628 	.globl _MCU_MEM_REG1_LANE
                            629 	.globl _MCU_IRQ_MASK_LANE
                            630 	.globl _MCU_IRQ_LANE
                            631 	.globl _MCU_TIMER3_CONTROL
                            632 	.globl _MCU_TIMER2_CONTROL
                            633 	.globl _MCU_TIMER1_CONTROL
                            634 	.globl _MCU_TIMER0_CONTROL
                            635 	.globl _MCU_TIMER_CONTROL
                            636 	.globl _MCU_INT12_CONTROL
                            637 	.globl _MCU_INT11_CONTROL
                            638 	.globl _MCU_INT10_CONTROL
                            639 	.globl _MCU_INT9_CONTROL
                            640 	.globl _MCU_INT8_CONTROL
                            641 	.globl _MCU_INT7_CONTROL
                            642 	.globl _MCU_INT6_CONTROL
                            643 	.globl _MCU_INT5_CONTROL
                            644 	.globl _MCU_INT4_CONTROL
                            645 	.globl _MCU_INT3_CONTROL
                            646 	.globl _MCU_INT2_CONTROL
                            647 	.globl _MCU_INT1_CONTROL
                            648 	.globl _MCU_INT0_CONTROL
                            649 	.globl _MCU_STATUS3_LANE
                            650 	.globl _MCU_STATUS2_LANE
                            651 	.globl _MCU_STATUS1_LANE
                            652 	.globl _MCU_STATUS0_LANE
                            653 	.globl _LANE_SYSTEM0
                            654 	.globl _CACHE_DEBUG1
                            655 	.globl _CACHE_DEBUG0
                            656 	.globl _MCU_GPIO
                            657 	.globl _MCU_CONTROL_LANE
                            658 	.globl _LANE_32G_PRESET_CFG16_LANE
                            659 	.globl _LANE_32G_PRESET_CFG14_LANE
                            660 	.globl _LANE_32G_PRESET_CFG12_LANE
                            661 	.globl _LANE_32G_PRESET_CFG10_LANE
                            662 	.globl _LANE_32G_PRESET_CFG8_LANE
                            663 	.globl _LANE_32G_PRESET_CFG6_LANE
                            664 	.globl _LANE_32G_PRESET_CFG4_LANE
                            665 	.globl _LANE_32G_PRESET_CFG2_LANE
                            666 	.globl _LANE_32G_PRESET_CFG0_LANE
                            667 	.globl _LANE_EQ_32G_CFG0_LANE
                            668 	.globl _LANE_16G_PRESET_CFG16_LANE
                            669 	.globl _LANE_16G_PRESET_CFG14_LANE
                            670 	.globl _LANE_16G_PRESET_CFG12_LANE
                            671 	.globl _LANE_16G_PRESET_CFG10_LANE
                            672 	.globl _LANE_16G_PRESET_CFG8_LANE
                            673 	.globl _LANE_16G_PRESET_CFG6_LANE
                            674 	.globl _LANE_16G_PRESET_CFG4_LANE
                            675 	.globl _LANE_16G_PRESET_CFG2_LANE
                            676 	.globl _LANE_16G_PRESET_CFG0_LANE
                            677 	.globl _LANE_EQ_16G_CFG0_LANE
                            678 	.globl _LANE_REMOTE_SET_LANE
                            679 	.globl _LANE_COEFF_MAX0_LANE
                            680 	.globl _LANE_PRESET_CFG16_LANE
                            681 	.globl _LANE_PRESET_CFG14_LANE
                            682 	.globl _LANE_PRESET_CFG12_LANE
                            683 	.globl _LANE_PRESET_CFG10_LANE
                            684 	.globl _LANE_PRESET_CFG8_LANE
                            685 	.globl _LANE_PRESET_CFG6_LANE
                            686 	.globl _LANE_PRESET_CFG4_LANE
                            687 	.globl _LANE_PRESET_CFG2_LANE
                            688 	.globl _LANE_PRESET_CFG0_LANE
                            689 	.globl _LANE_EQ_CFG1_LANE
                            690 	.globl _LANE_EQ_CFG0_LANE
                            691 	.globl _LANE_USB_DP_CFG2_LANE
                            692 	.globl _LANE_USB_DP_CFG1_LANE
                            693 	.globl _LANE_DP_PIE8_CFG0_LANE
                            694 	.globl _LANE_CFG_STATUS3_LANE
                            695 	.globl _LANE_CFG4
                            696 	.globl _LANE_CFG2_LANE
                            697 	.globl _LANE_CFG_STATUS2_LANE
                            698 	.globl _LANE_STATUS0
                            699 	.globl _LANE_CFG0
                            700 	.globl _SQ_REG0
                            701 	.globl _DTL_REG3
                            702 	.globl _DTL_REG2
                            703 	.globl _DTL_REG1
                            704 	.globl _DTL_REG0
                            705 	.globl _RX_LANE_INTERRUPT_REG1
                            706 	.globl _RX_CALIBRATION_REG
                            707 	.globl _INPUT_RX_PIN_REG3_LANE
                            708 	.globl _RX_DATA_PATH_REG
                            709 	.globl _RX_LANE_INTERRUPT_MASK
                            710 	.globl _RX_LANE_INTERRUPT
                            711 	.globl _CDR_LOCK_REG
                            712 	.globl _FRAME_SYNC_DET_REG6
                            713 	.globl _FRAME_SYNC_DET_REG5
                            714 	.globl _FRAME_SYNC_DET_REG4
                            715 	.globl _FRAME_SYNC_DET_REG3
                            716 	.globl _FRAME_SYNC_DET_REG2
                            717 	.globl _FRAME_SYNC_DET_REG1
                            718 	.globl _FRAME_SYNC_DET_REG0
                            719 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            720 	.globl _DIG_RX_RSVD_REG0
                            721 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            722 	.globl _INPUT_RX_PIN_REG2_LANE
                            723 	.globl _INPUT_RX_PIN_REG1_LANE
                            724 	.globl _INPUT_RX_PIN_REG0_LANE
                            725 	.globl _RX_SYSTEM_LANE
                            726 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            727 	.globl _MON_TOP
                            728 	.globl _ANALOG_TX_REALTIME_REG_1
                            729 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            730 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            731 	.globl __FIELDNAME__LANE
                            732 	.globl _INPUT_TX_PIN_REG5_LANE
                            733 	.globl _DIG_TX_RSVD_REG0
                            734 	.globl _TX_CALIBRATION_LANE
                            735 	.globl _INPUT_TX_PIN_REG4_LANE
                            736 	.globl _TX_SYSTEM_LANE
                            737 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            738 	.globl _SPD_CTRL_INTERRUPT_REG2
                            739 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            740 	.globl _TX_SPEED_CONVERT_LANE
                            741 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            742 	.globl _PM_CTRL_INTERRUPT_REG2
                            743 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            744 	.globl _INPUT_TX_PIN_REG3_LANE
                            745 	.globl _INPUT_TX_PIN_REG2_LANE
                            746 	.globl _INPUT_TX_PIN_REG1_LANE
                            747 	.globl _INPUT_TX_PIN_REG0_LANE
                            748 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            749 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            823 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            824 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            825 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            826 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            827 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            828 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            829 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            830 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            831 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            832 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            833 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            834 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            835 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            836 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            837 	.globl _ANA_DFEO_REG_0B
                            838 	.globl _ANA_DFEO_REG_0A
                            839 	.globl _ANA_DFEO_REG_09
                            840 	.globl _ANA_DFEO_REG_08
                            841 	.globl _ANA_DFEO_REG_07
                            842 	.globl _ANA_DFEO_REG_06
                            843 	.globl _ANA_DFEO_REG_05
                            844 	.globl _ANA_DFEO_REG_04
                            845 	.globl _ANA_DFEO_REG_03
                            846 	.globl _ANA_DFEO_REG_02
                            847 	.globl _ANA_DFEO_REG_01
                            848 	.globl _ANA_DFEO_REG_00
                            849 	.globl _ANA_DFEO_REG_27
                            850 	.globl _ANA_DFEO_REG_26
                            851 	.globl _ANA_DFEO_REG_25
                            852 	.globl _ANA_DFEO_REG_24
                            853 	.globl _ANA_DFEO_REG_23
                            854 	.globl _ANA_DFEO_REG_22
                            855 	.globl _ANA_DFEO_REG_21
                            856 	.globl _ANA_DFEO_REG_20
                            857 	.globl _ANA_DFEO_REG_1F
                            858 	.globl _ANA_DFEO_REG_1E
                            859 	.globl _ANA_DFEO_REG_1D
                            860 	.globl _ANA_DFEO_REG_1C
                            861 	.globl _ANA_DFEO_REG_1B
                            862 	.globl _ANA_DFEO_REG_1A
                            863 	.globl _ANA_DFEO_REG_19
                            864 	.globl _ANA_DFEO_REG_18
                            865 	.globl _ANA_DFEO_REG_17
                            866 	.globl _ANA_DFEO_REG_16
                            867 	.globl _ANA_DFEO_REG_15
                            868 	.globl _ANA_DFEO_REG_14
                            869 	.globl _ANA_DFEO_REG_13
                            870 	.globl _ANA_DFEO_REG_12
                            871 	.globl _ANA_DFEO_REG_11
                            872 	.globl _ANA_DFEO_REG_10
                            873 	.globl _ANA_DFEO_REG_0F
                            874 	.globl _ANA_DFEO_REG_0E
                            875 	.globl _ANA_DFEO_REG_0D
                            876 	.globl _ANA_DFEO_REG_0C
                            877 	.globl _ANA_DFEE_REG_1D
                            878 	.globl _ANA_DFEE_REG_1C
                            879 	.globl _ANA_DFEE_REG_1B
                            880 	.globl _ANA_DFEE_REG_1A
                            881 	.globl _ANA_DFEE_REG_19
                            882 	.globl _ANA_DFEE_REG_18
                            883 	.globl _ANA_DFEE_REG_17
                            884 	.globl _ANA_DFEE_REG_16
                            885 	.globl _ANA_DFEE_REG_15
                            886 	.globl _ANA_DFEE_REG_14
                            887 	.globl _ANA_DFEE_REG_13
                            888 	.globl _ANA_DFEE_REG_12
                            889 	.globl _ANA_DFEE_REG_11
                            890 	.globl _ANA_DFEE_REG_10
                            891 	.globl _ANA_DFEE_REG_0F
                            892 	.globl _ANA_DFEE_REG_0E
                            893 	.globl _ANA_DFEE_REG_0D
                            894 	.globl _ANA_DFEE_REG_0C
                            895 	.globl _ANA_DFEE_REG_0B
                            896 	.globl _ANA_DFEE_REG_0A
                            897 	.globl _ANA_DFEE_REG_09
                            898 	.globl _ANA_DFEE_REG_08
                            899 	.globl _ANA_DFEE_REG_07
                            900 	.globl _ANA_DFEE_REG_06
                            901 	.globl _ANA_DFEE_REG_05
                            902 	.globl _ANA_DFEE_REG_04
                            903 	.globl _ANA_DFEE_REG_03
                            904 	.globl _ANA_DFEE_REG_02
                            905 	.globl _ANA_DFEE_REG_01
                            906 	.globl _ANA_DFEE_REG_00
                            907 	.globl _ANA_DFEE_REG_27
                            908 	.globl _ANA_DFEE_REG_26
                            909 	.globl _ANA_DFEE_REG_25
                            910 	.globl _ANA_DFEE_REG_24
                            911 	.globl _ANA_DFEE_REG_23
                            912 	.globl _ANA_DFEE_REG_22
                            913 	.globl _ANA_DFEE_REG_21
                            914 	.globl _ANA_DFEE_REG_20
                            915 	.globl _ANA_DFEE_REG_1F
                            916 	.globl _ANA_DFEE_REG_1E
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            936 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            937 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            938 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            939 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            940 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            941 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            942 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            943 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            944 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            945 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            946 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            947 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            948 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            949 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            966 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            967 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            968 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            969 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            970 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            971 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            972 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            973 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            974 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            975 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            976 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            977 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            978 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            979 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            982 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            983 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            984 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            985 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            986 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            987 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            988 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            989 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            990 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            991 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            992 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            993 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            994 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            995 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            996 	.globl _TRX_Train
                            997 	.globl _trx_train_one_time
                            998 	.globl _trx_train_init
                            999 	.globl _trx_train_control
                           1000 	.globl _trx_train_end
                           1001 	.globl _gain_train
                           1002 	.globl _update_opt_trx_ffe
                           1003 	.globl _dfe_cdr_phase_opt
                           1004 	.globl _train_status_reset
                           1005 	.globl _opt2train
                           1006 	.globl _train2opt
                           1007 	.globl _Set_Rx_FFE
                           1008 	.globl _save_train
                           1009 	.globl _restore_train
                           1010 	.globl _sq_auto_train_enable
                           1011 	.globl _sq_wait
                           1012 ;--------------------------------------------------------
                           1013 ; special function registers
                           1014 ;--------------------------------------------------------
                           1015 	.area RSEG    (ABS,DATA)
   0000                    1016 	.org 0x0000
                    0080   1017 _P0	=	0x0080
                    0082   1018 _DPL	=	0x0082
                    0083   1019 _DPH	=	0x0083
                    0086   1020 _WDTREL	=	0x0086
                    0087   1021 _PCON	=	0x0087
                    0088   1022 _TCON	=	0x0088
                    0089   1023 _TMOD	=	0x0089
                    008A   1024 _TL0	=	0x008a
                    008B   1025 _TL1	=	0x008b
                    008C   1026 _TH0	=	0x008c
                    008D   1027 _TH1	=	0x008d
                    008E   1028 _CKCON	=	0x008e
                    0090   1029 _P1	=	0x0090
                    0092   1030 _DPS	=	0x0092
                    0094   1031 _PSBANK	=	0x0094
                    0098   1032 _SCON	=	0x0098
                    0099   1033 _SBUF	=	0x0099
                    009A   1034 _IEN2	=	0x009a
                    00A0   1035 _P2	=	0x00a0
                    00A1   1036 _DMAS0	=	0x00a1
                    00A2   1037 _DMAS1	=	0x00a2
                    00A3   1038 _DMAS2	=	0x00a3
                    00A4   1039 _DMAT0	=	0x00a4
                    00A5   1040 _DMAT1	=	0x00a5
                    00A6   1041 _DMAT2	=	0x00a6
                    00A8   1042 _IEN0	=	0x00a8
                    00A9   1043 _IP0	=	0x00a9
                    00AA   1044 _S0RELL	=	0x00aa
                    00B0   1045 _P3	=	0x00b0
                    00B1   1046 _DMAC0	=	0x00b1
                    00B2   1047 _DMAC1	=	0x00b2
                    00B3   1048 _DMAC2	=	0x00b3
                    00B4   1049 _DMASEL	=	0x00b4
                    00B5   1050 _DMAM0	=	0x00b5
                    00B6   1051 _DMAM1	=	0x00b6
                    00B8   1052 _IEN1	=	0x00b8
                    00B9   1053 _IP1	=	0x00b9
                    00BA   1054 _S0RELH	=	0x00ba
                    00C0   1055 _IRCON	=	0x00c0
                    00C1   1056 _CCEN	=	0x00c1
                    00C8   1057 _T2CON	=	0x00c8
                    00CA   1058 _RCAP2L	=	0x00ca
                    00CB   1059 _RCAP2H	=	0x00cb
                    00CC   1060 _TL2	=	0x00cc
                    00CD   1061 _TH2	=	0x00cd
                    00D0   1062 _PSW	=	0x00d0
                    00D8   1063 _ADCON	=	0x00d8
                    00E0   1064 _ACC	=	0x00e0
                    00E8   1065 _EIE	=	0x00e8
                    00F0   1066 _B	=	0x00f0
                    00F7   1067 _SRST	=	0x00f7
                    8C8A   1068 _TMR0	=	0x8c8a
                    8D8B   1069 _TMR1	=	0x8d8b
                    CDCC   1070 _TMR2	=	0xcdcc
                    A2A1   1071 _DMASA	=	0xa2a1
                    A5A4   1072 _DMATA	=	0xa5a4
                    B2B1   1073 _DMAC	=	0xb2b1
                           1074 ;--------------------------------------------------------
                           1075 ; special function bits
                           1076 ;--------------------------------------------------------
                           1077 	.area RSEG    (ABS,DATA)
   0000                    1078 	.org 0x0000
                    0080   1079 _P0_0	=	0x0080
                    0081   1080 _P0_1	=	0x0081
                    0082   1081 _P0_2	=	0x0082
                    0083   1082 _P0_3	=	0x0083
                    0084   1083 _P0_4	=	0x0084
                    0085   1084 _P0_5	=	0x0085
                    0086   1085 _P0_6	=	0x0086
                    0087   1086 _P0_7	=	0x0087
                    0090   1087 _P1_0	=	0x0090
                    0091   1088 _P1_1	=	0x0091
                    0092   1089 _P1_2	=	0x0092
                    0093   1090 _P1_3	=	0x0093
                    0094   1091 _P1_4	=	0x0094
                    0095   1092 _P1_5	=	0x0095
                    0096   1093 _P1_6	=	0x0096
                    0097   1094 _P1_7	=	0x0097
                    00A0   1095 _P2_0	=	0x00a0
                    00A1   1096 _P2_1	=	0x00a1
                    00A2   1097 _P2_2	=	0x00a2
                    00A3   1098 _P2_3	=	0x00a3
                    00A4   1099 _P2_4	=	0x00a4
                    00A5   1100 _P2_5	=	0x00a5
                    00A6   1101 _P2_6	=	0x00a6
                    00A7   1102 _P2_7	=	0x00a7
                    00B0   1103 _P3_0	=	0x00b0
                    00B1   1104 _P3_1	=	0x00b1
                    00B2   1105 _P3_2	=	0x00b2
                    00B3   1106 _P3_3	=	0x00b3
                    00B4   1107 _P3_4	=	0x00b4
                    00B5   1108 _P3_5	=	0x00b5
                    00B6   1109 _P3_6	=	0x00b6
                    00B7   1110 _P3_7	=	0x00b7
                    0088   1111 _IT0	=	0x0088
                    0089   1112 _IE0	=	0x0089
                    008A   1113 _IT1	=	0x008a
                    008B   1114 _IE1	=	0x008b
                    008C   1115 _TR0	=	0x008c
                    008D   1116 _TF0	=	0x008d
                    008E   1117 _TR1	=	0x008e
                    008F   1118 _TF1	=	0x008f
                    00A8   1119 _EX0	=	0x00a8
                    00A9   1120 _ET0	=	0x00a9
                    00AA   1121 _EX1	=	0x00aa
                    00AB   1122 _ET1	=	0x00ab
                    00AC   1123 _ES	=	0x00ac
                    00AD   1124 _ET2	=	0x00ad
                    00AE   1125 _WDT	=	0x00ae
                    00AF   1126 _EA	=	0x00af
                    00B8   1127 _EX7	=	0x00b8
                    00B9   1128 _EX2	=	0x00b9
                    00BA   1129 _EX3	=	0x00ba
                    00BB   1130 _EX4	=	0x00bb
                    00BC   1131 _EX5	=	0x00bc
                    00BD   1132 _EX6	=	0x00bd
                    00BE   1133 _PS1	=	0x00be
                    009A   1134 _ES1	=	0x009a
                    009B   1135 _EX8	=	0x009b
                    009C   1136 _EX9	=	0x009c
                    009D   1137 _EX10	=	0x009d
                    009E   1138 _EX11	=	0x009e
                    009F   1139 _EX12	=	0x009f
                    0098   1140 _RI	=	0x0098
                    0099   1141 _TI	=	0x0099
                    00C6   1142 _TF2	=	0x00c6
                           1143 ;--------------------------------------------------------
                           1144 ; overlayable register banks
                           1145 ;--------------------------------------------------------
                           1146 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1147 	.ds 8
                           1148 ;--------------------------------------------------------
                           1149 ; overlayable bit register bank
                           1150 ;--------------------------------------------------------
                           1151 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1152 bits:
   0025                    1153 	.ds 1
                    8000   1154 	b0 = bits[0]
                    8100   1155 	b1 = bits[1]
                    8200   1156 	b2 = bits[2]
                    8300   1157 	b3 = bits[3]
                    8400   1158 	b4 = bits[4]
                    8500   1159 	b5 = bits[5]
                    8600   1160 	b6 = bits[6]
                    8700   1161 	b7 = bits[7]
                           1162 ;--------------------------------------------------------
                           1163 ; internal ram data
                           1164 ;--------------------------------------------------------
                           1165 	.area DSEG    (DATA)
                           1166 ;--------------------------------------------------------
                           1167 ; overlayable items in internal ram 
                           1168 ;--------------------------------------------------------
                           1169 	.area OSEG    (OVR,DATA)
                           1170 ;--------------------------------------------------------
                           1171 ; indirectly addressable internal ram data
                           1172 ;--------------------------------------------------------
                           1173 	.area ISEG    (DATA)
                           1174 ;--------------------------------------------------------
                           1175 ; absolute internal ram data
                           1176 ;--------------------------------------------------------
                           1177 	.area IABS    (ABS,DATA)
                           1178 	.area IABS    (ABS,DATA)
                           1179 ;--------------------------------------------------------
                           1180 ; bit data
                           1181 ;--------------------------------------------------------
                           1182 	.area BSEG    (BIT)
                           1183 ;--------------------------------------------------------
                           1184 ; paged external ram data
                           1185 ;--------------------------------------------------------
                           1186 	.area PSEG    (PAG,XDATA)
                           1187 ;--------------------------------------------------------
                           1188 ; external ram data
                           1189 ;--------------------------------------------------------
                           1190 	.area XSEG    (XDATA)
                    1000   1191 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1192 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1193 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1194 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1195 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1196 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1197 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1198 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1199 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1200 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1201 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1202 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1203 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1204 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1205 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1206 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1207 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1208 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1209 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1210 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1211 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1212 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1213 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1214 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1215 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1216 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1217 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1218 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1219 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1220 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1221 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1222 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1223 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1224 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1225 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1226 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1227 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1228 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1229 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1230 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1231 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1232 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1233 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1234 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1235 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1236 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1237 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1238 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1239 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1240 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1241 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1242 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1243 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1244 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1245 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1246 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1247 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1248 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1249 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1250 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1251 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1252 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1253 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1254 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1255 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1256 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1257 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1258 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1259 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1260 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1261 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1262 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1263 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1264 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1265 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1266 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1267 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1268 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1269 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1270 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1271 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1272 _ANA_DFEE_REG_20	=	0x0480
                    0484   1273 _ANA_DFEE_REG_21	=	0x0484
                    0488   1274 _ANA_DFEE_REG_22	=	0x0488
                    048C   1275 _ANA_DFEE_REG_23	=	0x048c
                    0490   1276 _ANA_DFEE_REG_24	=	0x0490
                    0494   1277 _ANA_DFEE_REG_25	=	0x0494
                    0498   1278 _ANA_DFEE_REG_26	=	0x0498
                    049C   1279 _ANA_DFEE_REG_27	=	0x049c
                    0400   1280 _ANA_DFEE_REG_00	=	0x0400
                    0404   1281 _ANA_DFEE_REG_01	=	0x0404
                    0408   1282 _ANA_DFEE_REG_02	=	0x0408
                    040C   1283 _ANA_DFEE_REG_03	=	0x040c
                    0410   1284 _ANA_DFEE_REG_04	=	0x0410
                    0414   1285 _ANA_DFEE_REG_05	=	0x0414
                    0418   1286 _ANA_DFEE_REG_06	=	0x0418
                    041C   1287 _ANA_DFEE_REG_07	=	0x041c
                    0420   1288 _ANA_DFEE_REG_08	=	0x0420
                    0424   1289 _ANA_DFEE_REG_09	=	0x0424
                    0428   1290 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1291 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1292 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1293 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1294 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1295 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1296 _ANA_DFEE_REG_10	=	0x0440
                    0444   1297 _ANA_DFEE_REG_11	=	0x0444
                    0448   1298 _ANA_DFEE_REG_12	=	0x0448
                    044C   1299 _ANA_DFEE_REG_13	=	0x044c
                    0450   1300 _ANA_DFEE_REG_14	=	0x0450
                    0454   1301 _ANA_DFEE_REG_15	=	0x0454
                    0458   1302 _ANA_DFEE_REG_16	=	0x0458
                    045C   1303 _ANA_DFEE_REG_17	=	0x045c
                    0460   1304 _ANA_DFEE_REG_18	=	0x0460
                    0464   1305 _ANA_DFEE_REG_19	=	0x0464
                    0468   1306 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1307 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1308 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1309 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1310 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1311 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1312 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1313 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1314 _ANA_DFEO_REG_10	=	0x0840
                    0844   1315 _ANA_DFEO_REG_11	=	0x0844
                    0848   1316 _ANA_DFEO_REG_12	=	0x0848
                    084C   1317 _ANA_DFEO_REG_13	=	0x084c
                    0850   1318 _ANA_DFEO_REG_14	=	0x0850
                    0854   1319 _ANA_DFEO_REG_15	=	0x0854
                    0858   1320 _ANA_DFEO_REG_16	=	0x0858
                    085C   1321 _ANA_DFEO_REG_17	=	0x085c
                    0860   1322 _ANA_DFEO_REG_18	=	0x0860
                    0864   1323 _ANA_DFEO_REG_19	=	0x0864
                    0868   1324 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1325 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1326 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1327 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1328 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1329 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1330 _ANA_DFEO_REG_20	=	0x0880
                    0884   1331 _ANA_DFEO_REG_21	=	0x0884
                    0888   1332 _ANA_DFEO_REG_22	=	0x0888
                    088C   1333 _ANA_DFEO_REG_23	=	0x088c
                    0890   1334 _ANA_DFEO_REG_24	=	0x0890
                    0894   1335 _ANA_DFEO_REG_25	=	0x0894
                    0898   1336 _ANA_DFEO_REG_26	=	0x0898
                    089C   1337 _ANA_DFEO_REG_27	=	0x089c
                    0800   1338 _ANA_DFEO_REG_00	=	0x0800
                    0804   1339 _ANA_DFEO_REG_01	=	0x0804
                    0808   1340 _ANA_DFEO_REG_02	=	0x0808
                    080C   1341 _ANA_DFEO_REG_03	=	0x080c
                    0810   1342 _ANA_DFEO_REG_04	=	0x0810
                    0814   1343 _ANA_DFEO_REG_05	=	0x0814
                    0818   1344 _ANA_DFEO_REG_06	=	0x0818
                    081C   1345 _ANA_DFEO_REG_07	=	0x081c
                    0820   1346 _ANA_DFEO_REG_08	=	0x0820
                    0824   1347 _ANA_DFEO_REG_09	=	0x0824
                    0828   1348 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1349 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1350 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1351 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1352 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1353 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1354 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1355 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1356 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1357 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1358 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1359 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1360 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1361 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1362 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1363 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1364 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1365 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1366 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1367 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1368 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1369 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1370 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1371 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1372 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1373 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1374 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1375 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1376 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1377 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1378 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1379 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1380 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1381 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1382 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1383 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1384 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1385 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1386 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1387 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1388 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1389 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1390 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1391 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1392 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1393 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1394 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1395 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1396 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1397 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1398 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1399 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1400 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1401 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1402 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1403 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1404 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1405 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1406 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1407 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1408 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1409 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1410 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1411 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1412 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1413 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1414 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1415 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1416 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1417 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1418 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1419 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1420 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1421 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1422 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1423 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1424 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1425 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1426 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1427 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1428 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1429 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1430 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1431 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1432 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1433 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1434 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1435 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1436 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1437 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1438 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1439 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1440 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1441 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1442 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1443 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1444 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1445 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1446 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1447 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1448 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1449 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1450 _TX_SYSTEM_LANE	=	0x2034
                    203C   1451 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1452 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1453 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1454 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1455 __FIELDNAME__LANE	=	0x204c
                    2050   1456 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1457 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1458 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1459 _MON_TOP	=	0x205c
                    2100   1460 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1461 _RX_SYSTEM_LANE	=	0x2104
                    2108   1462 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1463 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1464 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1465 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1466 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1467 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1468 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1469 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1470 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1471 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1472 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1473 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1474 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1475 _CDR_LOCK_REG	=	0x213c
                    2140   1476 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1477 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1478 _RX_DATA_PATH_REG	=	0x2148
                    214C   1479 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1480 _RX_CALIBRATION_REG	=	0x2150
                    2158   1481 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1482 _DTL_REG0	=	0x2160
                    2164   1483 _DTL_REG1	=	0x2164
                    2168   1484 _DTL_REG2	=	0x2168
                    216C   1485 _DTL_REG3	=	0x216c
                    2170   1486 _SQ_REG0	=	0x2170
                    4000   1487 _LANE_CFG0	=	0x4000
                    4004   1488 _LANE_STATUS0	=	0x4004
                    4008   1489 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1490 _LANE_CFG2_LANE	=	0x400c
                    4010   1491 _LANE_CFG4	=	0x4010
                    4014   1492 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1493 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1494 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1495 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1496 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1497 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1498 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1499 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1500 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1501 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1502 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1503 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1504 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1505 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1506 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1507 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1508 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1509 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1510 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1511 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1512 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1513 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1514 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1515 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1516 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1517 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1518 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1519 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1520 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1521 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1522 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1523 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1524 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1525 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1526 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1527 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1528 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1529 _MCU_CONTROL_LANE	=	0x2200
                    2204   1530 _MCU_GPIO	=	0x2204
                    2208   1531 _CACHE_DEBUG0	=	0x2208
                    220C   1532 _CACHE_DEBUG1	=	0x220c
                    2210   1533 _LANE_SYSTEM0	=	0x2210
                    2230   1534 _MCU_STATUS0_LANE	=	0x2230
                    2234   1535 _MCU_STATUS1_LANE	=	0x2234
                    2238   1536 _MCU_STATUS2_LANE	=	0x2238
                    223C   1537 _MCU_STATUS3_LANE	=	0x223c
                    2240   1538 _MCU_INT0_CONTROL	=	0x2240
                    2244   1539 _MCU_INT1_CONTROL	=	0x2244
                    2248   1540 _MCU_INT2_CONTROL	=	0x2248
                    224C   1541 _MCU_INT3_CONTROL	=	0x224c
                    2250   1542 _MCU_INT4_CONTROL	=	0x2250
                    2254   1543 _MCU_INT5_CONTROL	=	0x2254
                    2258   1544 _MCU_INT6_CONTROL	=	0x2258
                    225C   1545 _MCU_INT7_CONTROL	=	0x225c
                    2260   1546 _MCU_INT8_CONTROL	=	0x2260
                    2264   1547 _MCU_INT9_CONTROL	=	0x2264
                    2268   1548 _MCU_INT10_CONTROL	=	0x2268
                    226C   1549 _MCU_INT11_CONTROL	=	0x226c
                    2270   1550 _MCU_INT12_CONTROL	=	0x2270
                    2274   1551 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1552 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1553 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1554 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1555 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1556 _MCU_IRQ_LANE	=	0x2288
                    228C   1557 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1558 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1559 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1560 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1561 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1562 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1563 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1564 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1565 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1566 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1567 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1568 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1569 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1570 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1571 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1572 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1573 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1574 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1575 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1576 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1577 _MCU_WDT_LANE	=	0x22dc
                    22E0   1578 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1579 _MCU_COMMAND0	=	0x22e4
                    22F4   1580 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1581 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1582 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1583 _PT_CONTROL0	=	0x2300
                    2304   1584 _PT_CONTROL1	=	0x2304
                    2308   1585 _PT_USER_PATTERN0	=	0x2308
                    230C   1586 _PT_USER_PATTERN1	=	0x230c
                    2310   1587 _PT_USER_PATTERN2	=	0x2310
                    2314   1588 _PT_COUNTER0	=	0x2314
                    2318   1589 _PT_COUNTER1	=	0x2318
                    231C   1590 _PT_COUNTER2	=	0x231c
                    2400   1591 _DFE_CTRL_REG0	=	0x2400
                    2404   1592 _DFE_CTRL_REG1	=	0x2404
                    2408   1593 _DFE_CTRL_REG2	=	0x2408
                    240C   1594 _DFE_CTRL_REG3	=	0x240c
                    2410   1595 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1596 _DFE_CTRL_REG4	=	0x2414
                    2418   1597 _DFE_ANA_REG0	=	0x2418
                    241C   1598 _DFE_ANA_REG1	=	0x241c
                    2420   1599 _DFE_STEP_REG0	=	0x2420
                    2424   1600 _DFE_STEP_REG1	=	0x2424
                    2430   1601 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1602 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1603 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1604 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1605 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1606 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1607 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1608 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1609 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1610 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1611 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1612 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1613 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1614 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1615 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1616 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1617 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1618 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1619 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1620 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1621 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1622 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1623 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1624 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1625 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1626 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1627 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1628 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1629 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1630 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1631 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1632 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1633 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1634 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1635 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1636 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1637 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1638 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1639 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1640 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1641 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1642 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1643 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1644 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1645 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1646 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1647 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1648 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1649 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1650 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1651 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1652 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1653 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1654 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1655 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1656 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1657 _CAL_OFST_REG0	=	0x2518
                    251C   1658 _CAL_OFST_REG1	=	0x251c
                    2520   1659 _CAL_OFST_REG2	=	0x2520
                    2530   1660 _DFE_DCE_REG0	=	0x2530
                    2540   1661 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1662 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1663 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1664 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1665 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1666 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1667 _EOM_VLD_REG0	=	0x2560
                    2564   1668 _EOM_VLD_REG1	=	0x2564
                    2568   1669 _EOM_VLD_REG2	=	0x2568
                    256C   1670 _EOM_VLD_REG3	=	0x256c
                    2570   1671 _EOM_ERR_REG0	=	0x2570
                    2574   1672 _EOM_ERR_REG1	=	0x2574
                    2578   1673 _EOM_ERR_REG2	=	0x2578
                    257C   1674 _EOM_ERR_REG3	=	0x257c
                    2580   1675 _EOM_REG0	=	0x2580
                    25F0   1676 _EOM_VLD_REG4	=	0x25f0
                    25F4   1677 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1678 _CAL_CTRL1_LANE	=	0x6000
                    6004   1679 _CAL_CTRL2_LANE	=	0x6004
                    6008   1680 _CAL_CTRL3_LANE	=	0x6008
                    600C   1681 _CAL_CTRL4_LANE	=	0x600c
                    6010   1682 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1683 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1684 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1685 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1686 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1687 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1688 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1689 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1690 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1691 _DFE_CONTROL_0	=	0x6034
                    6038   1692 _DFE_CONTROL_1	=	0x6038
                    6040   1693 _DFE_CONTROL_2	=	0x6040
                    6044   1694 _DFE_CONTROL_3	=	0x6044
                    6048   1695 _DFE_CONTROL_4	=	0x6048
                    604C   1696 _DFE_CONTROL_5	=	0x604c
                    6050   1697 _TRAIN_CONTROL_0	=	0x6050
                    6054   1698 _TRAIN_CONTROL_1	=	0x6054
                    6058   1699 _TRAIN_CONTROL_2	=	0x6058
                    605C   1700 _RPTA_CONFIG_0	=	0x605c
                    6060   1701 _RPTA_CONFIG_1	=	0x6060
                    6064   1702 _DLL_CAL	=	0x6064
                    6068   1703 _TRAIN_PARA_0	=	0x6068
                    606C   1704 _TRAIN_PARA_1	=	0x606c
                    6070   1705 _TRAIN_PARA_2	=	0x6070
                    6074   1706 _TRAIN_PARA_3	=	0x6074
                    6078   1707 _DFE_CONTROL_6	=	0x6078
                    607C   1708 _DFE_TEST_0	=	0x607c
                    6080   1709 _DFE_TEST_1	=	0x6080
                    6084   1710 _DFE_TEST_4	=	0x6084
                    6088   1711 _DFE_TEST_5	=	0x6088
                    608C   1712 _DFE_CONTROL_7	=	0x608c
                    6090   1713 _DFE_CONTROL_8	=	0x6090
                    6094   1714 _DFE_CONTROL_9	=	0x6094
                    6098   1715 _DFE_CONTROL_10	=	0x6098
                    609C   1716 _DFE_CONTROL_11	=	0x609c
                    60A0   1717 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1718 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1719 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1720 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1721 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1722 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1723 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1724 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1725 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1726 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1727 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1728 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1729 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1730 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1731 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1732 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1733 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1734 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1735 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1736 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1737 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1738 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1739 _END_XDAT_LANE	=	0x60f8
                    A000   1740 _TX_CMN_REG	=	0xa000
                    A008   1741 _DTX_REG0	=	0xa008
                    A00C   1742 _DTX_REG1	=	0xa00c
                    A010   1743 _DTX_REG2	=	0xa010
                    A014   1744 _DTX_REG3	=	0xa014
                    A018   1745 _DTX_REG4	=	0xa018
                    A01C   1746 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1747 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1748 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1749 _SRIS_REG0	=	0xa02c
                    A030   1750 _SRIS_REG1	=	0xa030
                    A100   1751 _RX_CMN_0	=	0xa100
                    A110   1752 _DFE_STATIC_REG0	=	0xa110
                    A114   1753 _DFE_STATIC_REG1	=	0xa114
                    A118   1754 _DFE_STATIC_REG3	=	0xa118
                    A11C   1755 _DFE_STATIC_REG4	=	0xa11c
                    A120   1756 _DFE_STATIC_REG5	=	0xa120
                    A124   1757 _DFE_STATIC_REG6	=	0xa124
                    4200   1758 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1759 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1760 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1761 _GLOB_MISC_CTRL	=	0x420c
                    4210   1762 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1763 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1764 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1765 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1766 _GLOB_PM_CFG0	=	0x4220
                    4224   1767 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1768 _GLOB_COUNTER_HI	=	0x4228
                    422C   1769 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1770 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1771 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1772 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1773 _GLOB_BIST_CTRL	=	0x423c
                    4240   1774 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1775 _GLOB_BIST_START	=	0x4244
                    4248   1776 _GLOB_BIST_MASK	=	0x4248
                    424C   1777 _GLOB_BIST_RESULT	=	0x424c
                    4250   1778 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1779 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1780 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1781 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1782 _MCU_CONTROL_0	=	0xa200
                    A204   1783 _MCU_CONTROL_1	=	0xa204
                    A208   1784 _MCU_CONTROL_2	=	0xa208
                    A20C   1785 _MCU_CONTROL_3	=	0xa20c
                    A210   1786 _MCU_CONTROL_4	=	0xa210
                    A214   1787 _MCU_DEBUG0	=	0xa214
                    A218   1788 _MCU_DEBUG1	=	0xa218
                    A21C   1789 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1790 _MEMORY_CONTROL_1	=	0xa220
                    A224   1791 _MEMORY_CONTROL_2	=	0xa224
                    A228   1792 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1793 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1794 _MCU_INFO_0	=	0xa234
                    A238   1795 _MCU_INFO_1	=	0xa238
                    A23C   1796 _MCU_INFO_2	=	0xa23c
                    A240   1797 _MCU_INFO_3	=	0xa240
                    A244   1798 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1799 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1800 _MEM_IRQ	=	0xa2e4
                    A2E8   1801 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1802 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1803 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1804 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1805 _MCU_SYNC1	=	0xa2f8
                    A2FC   1806 _MCU_SYNC2	=	0xa2fc
                    A300   1807 _TEST0	=	0xa300
                    A304   1808 _TEST1	=	0xa304
                    A308   1809 _TEST2	=	0xa308
                    A30C   1810 _TEST3	=	0xa30c
                    A310   1811 _TEST4	=	0xa310
                    A314   1812 _SYSTEM	=	0xa314
                    A318   1813 _PM_CMN_REG1	=	0xa318
                    A31C   1814 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1815 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1816 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1817 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1818 _PLLCAL_REG0	=	0xa32c
                    A330   1819 _PLLCAL_REG1	=	0xa330
                    A334   1820 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1821 _SPD_CMN_REG1	=	0xa338
                    A33C   1822 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1823 _CMN_CALIBRATION	=	0xa340
                    A344   1824 __FIELDNAME_	=	0xa344
                    A348   1825 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1826 _PM_CMN_REG2	=	0xa34c
                    A354   1827 _TEST5	=	0xa354
                    A358   1828 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1829 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1830 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1831 _MCU_SDT_CMN	=	0xa364
                    A368   1832 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1833 _MCU_INT_ADDR	=	0xa36c
                    A370   1834 _CMN_ISR_2	=	0xa370
                    A374   1835 _CMN_ISR_MASK_2	=	0xa374
                    A378   1836 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1837 _CMN_MCU_GPIO	=	0xa37c
                    A380   1838 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1839 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1840 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1841 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1842 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1843 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1844 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1845 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1846 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1847 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1848 _CMN_ISR_1	=	0xa3a8
                    A3AC   1849 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1850 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1851 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1852 _CID_REG0	=	0xa3f8
                    A3FC   1853 _CID_REG1	=	0xa3fc
                    E600   1854 _FW_REV	=	0xe600
                    E604   1855 _CONTROL_CONFIG0	=	0xe604
                    E608   1856 _CONTROL_CONFIG1	=	0xe608
                    E60C   1857 _CONTROL_CONFIG2	=	0xe60c
                    E610   1858 _CONTROL_CONFIG3	=	0xe610
                    E614   1859 _CONTROL_CONFIG4	=	0xe614
                    E618   1860 _CONTROL_CONFIG5	=	0xe618
                    E61C   1861 _CONTROL_CONFIG6	=	0xe61c
                    E620   1862 _CONTROL_CONFIG7	=	0xe620
                    E624   1863 _CAL_DATA0	=	0xe624
                    E628   1864 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1865 _CONTROL_CONFIG8	=	0xe62c
                    E630   1866 _CONTROL_CONFIG9	=	0xe630
                    E634   1867 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1868 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1869 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1870 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1871 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1872 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1873 _CAL_STATUS_READ	=	0xe64c
                    E650   1874 _MCU_CONFIG	=	0xe650
                    E654   1875 _CAL_DATA1	=	0xe654
                    E658   1876 _LOOP_CNTS	=	0xe658
                    E65C   1877 _MCU_CONFIG1	=	0xe65c
                    E660   1878 _TIMER_SEL1	=	0xe660
                    E664   1879 _TIMER_SEL2	=	0xe664
                    E668   1880 _TIMER_SEL3	=	0xe668
                    E66C   1881 _G_SELLV_TXCLK	=	0xe66c
                    E670   1882 _G_SELLV_TXDATA	=	0xe670
                    E674   1883 _G_SELLV_TXPRE	=	0xe674
                    E678   1884 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1885 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1886 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1887 _SAS_PRESET0_TB	=	0xe684
                    E688   1888 _SAS_PRESET1_TB	=	0xe688
                    E68C   1889 _SAS_PRESET2_TB	=	0xe68c
                    E690   1890 _ETH_PRESET0_TB	=	0xe690
                    E694   1891 _ETH_PRESET1_TB	=	0xe694
                    E698   1892 _TX_SAVE_0	=	0xe698
                    E69C   1893 _TX_SAVE_1	=	0xe69c
                    E6A0   1894 _TX_SAVE_2	=	0xe6a0
                    E6A4   1895 _TX_SAVE_3	=	0xe6a4
                    E6A8   1896 _TX_SAVE_4	=	0xe6a8
                    E6AC   1897 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1898 _SYNC_INFO	=	0xe6b0
                    E6B4   1899 _MCU_INFO_4	=	0xe6b4
                    E6B8   1900 _MCU_INFO_5	=	0xe6b8
                    E6BC   1901 _MCU_INFO_12	=	0xe6bc
                    E6C0   1902 _MCU_INFO_13	=	0xe6c0
                    E6C4   1903 _END_XDAT_CMN	=	0xe6c4
                    2600   1904 _DME_ENC_REG0	=	0x2600
                    2604   1905 _DME_ENC_REG1	=	0x2604
                    2608   1906 _DME_ENC_REG2	=	0x2608
                    260C   1907 _DME_DEC_REG0	=	0x260c
                    2610   1908 _DME_DEC_REG1	=	0x2610
                    2614   1909 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1910 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1911 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1912 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1913 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1914 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1915 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1916 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1917 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1918 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1919 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1920 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1921 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1922 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1923 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1924 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1925 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1926 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1927 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1928 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1929 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1930 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1931 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1932 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1933 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1934 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1935 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1936 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1937 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1938 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1939 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1940 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1941 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1942 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1943 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1944 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1945 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1946 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1947 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1948 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1949 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1950 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1951 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1952 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1953 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1954 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1955 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1956 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1957 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1958 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1959 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1960 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1961 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1962 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1963 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1964 _CDS_READ_MISC0	=	0x6170
                    6174   1965 _CDS_READ_MISC1	=	0x6174
                    6214   1966 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1967 _lc_speedtable	=	0xe000
                    E1C0   1968 _ring_speedtable	=	0xe1c0
                    E5C0   1969 _phy_mode_cmn_table	=	0xe5c0
                    6300   1970 _max_gen	=	0x6300
                    6301   1971 _min_gen	=	0x6301
                    6304   1972 _speedtable	=	0x6304
                    65D4   1973 _phy_mode_lane_table	=	0x65d4
                    60B4   1974 _rc_save	=	0x60b4
                    60D0   1975 _txffe_save	=	0x60d0
                    60E4   1976 _phase_save	=	0x60e4
                    6030   1977 _train_gn1_index	=	0x6030
                    6031   1978 _train_g1_index	=	0x6031
                    6032   1979 _train_g0_index	=	0x6032
                    E6B0   1980 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1981 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1982 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1983 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1984 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1985 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1986 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1987 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1988 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1989 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1990 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1991 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1992 _lnx_cal_txdcc	=	0x65da
                    65DE   1993 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1994 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1995 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1996 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1997 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1998 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1999 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   2000 _lnx_cal_dll_gmsel	=	0x6604
                    6606   2001 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   2002 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   2003 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   2004 _lnx_cal_eom_dpher	=	0x6610
                    6612   2005 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   2006 _lnx_cal_align90_dac	=	0x661a
                    6622   2007 _lnx_cal_align90_gm	=	0x6622
                    662A   2008 _lnx_cal_sellv_txdata	=	0x662a
                    6634   2009 _lnx_cal_sellv_txclk	=	0x6634
                    663E   2010 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   2011 _lnx_cal_sellv_txpre	=	0x6648
                    6652   2012 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   2013 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   2014 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   2015 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   2016 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   2017 _lnx_calx_txdcc	=	0x6499
                    649F   2018 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   2019 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   2020 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   2021 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2022 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2023 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2024 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2025 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2026 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2027 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2028 _lnx_calx_align90_gm	=	0x64d8
                    6100   2029 _cds28	=	0x6100
                    6178   2030 _dfe_sm	=	0x6178
                    61B8   2031 _dfe_sm_dc	=	0x61b8
                    61C0   2032 _dfe_sm_save	=	0x61c0
                    03FC   2033 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2034 _tx_tb	=	0xe684
                    E698   2035 _train_save_tb	=	0xe698
                    607C   2036 _sq_thrs_ratio_tb	=	0x607c
                           2037 ;--------------------------------------------------------
                           2038 ; absolute external ram data
                           2039 ;--------------------------------------------------------
                           2040 	.area XABS    (ABS,XDATA)
                           2041 ;--------------------------------------------------------
                           2042 ; external initialized ram data
                           2043 ;--------------------------------------------------------
                           2044 	.area HOME    (CODE)
                           2045 	.area GSINIT0 (CODE)
                           2046 	.area GSINIT1 (CODE)
                           2047 	.area GSINIT2 (CODE)
                           2048 	.area GSINIT3 (CODE)
                           2049 	.area GSINIT4 (CODE)
                           2050 	.area GSINIT5 (CODE)
                           2051 	.area GSINIT  (CODE)
                           2052 	.area GSFINAL (CODE)
                           2053 	.area CSEG    (CODE)
                           2054 ;--------------------------------------------------------
                           2055 ; global & static initialisations
                           2056 ;--------------------------------------------------------
                           2057 	.area HOME    (CODE)
                           2058 	.area GSINIT  (CODE)
                           2059 	.area GSFINAL (CODE)
                           2060 	.area GSINIT  (CODE)
                           2061 ;--------------------------------------------------------
                           2062 ; Home
                           2063 ;--------------------------------------------------------
                           2064 	.area HOME    (CODE)
                           2065 	.area HOME    (CODE)
                           2066 ;--------------------------------------------------------
                           2067 ; code
                           2068 ;--------------------------------------------------------
                           2069 	.area CSEG    (CODE)
                           2070 ;------------------------------------------------------------
                           2071 ;Allocation info for local variables in function 'link_train_complete'
                           2072 ;------------------------------------------------------------
                           2073 ;------------------------------------------------------------
                           2074 ;	../../shared/src/trx_train.c:13: void link_train_complete(void) {
                           2075 ;	-----------------------------------------
                           2076 ;	 function link_train_complete
                           2077 ;	-----------------------------------------
   5101                    2078 _link_train_complete:
                    0002   2079 	ar2 = 0x02
                    0003   2080 	ar3 = 0x03
                    0004   2081 	ar4 = 0x04
                    0005   2082 	ar5 = 0x05
                    0006   2083 	ar6 = 0x06
                    0007   2084 	ar7 = 0x07
                    0000   2085 	ar0 = 0x00
                    0001   2086 	ar1 = 0x01
                           2087 ;	../../shared/src/trx_train.c:14: timeout_start(5000); //5mS
   5101 75 8B 78           2088 	mov	_TMR1,#0x78
   5104 75 8D EC           2089 	mov	(_TMR1 >> 8),#0xEC
   5107 D2 8E              2090 	setb	_TR1
   5109 C2 03              2091 	clr	_timeout
                           2092 ;	../../shared/src/trx_train.c:17: if( tx_pipe4_en==1 )
   510B 30 26 07           2093 	jnb	_tx_pipe4_en,00102$
                           2094 ;	../../shared/src/trx_train.c:18: reg_TX_FFE_TRAIN_DONE_LANE = 1;
   510E 90 26 79           2095 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   5111 E0                 2096 	movx	a,@dptr
   5112 44 80              2097 	orl	a,#0x80
   5114 F0                 2098 	movx	@dptr,a
   5115                    2099 00102$:
                           2100 ;	../../shared/src/trx_train.c:20: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;		
   5115 90 26 7B           2101 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5118 E0                 2102 	movx	a,@dptr
   5119 44 10              2103 	orl	a,#0x10
   511B F0                 2104 	movx	@dptr,a
                           2105 ;	../../shared/src/trx_train.c:21: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;
   511C 90 26 78           2106 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   511F E0                 2107 	movx	a,@dptr
   5120 44 04              2108 	orl	a,#0x04
   5122 F0                 2109 	movx	@dptr,a
                           2110 ;	../../shared/src/trx_train.c:22: while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) { //wait for PIPE deassert.
   5123                    2111 00110$:
   5123 90 26 79           2112 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   5126 E0                 2113 	movx	a,@dptr
   5127 30 E6 24           2114 	jnb	acc.6,00112$
                           2115 ;	../../shared/src/trx_train.c:23: if(lnx_SQ_AUTO_TRAIN_LANE) {
   512A 90 60 3A           2116 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   512D E0                 2117 	movx	a,@dptr
   512E 30 E6 09           2118 	jnb	acc.6,00104$
                           2119 ;	../../shared/src/trx_train.c:27: reg_TX_TRAIN_ENABLE_LANE = 0;
   5131 90 20 10           2120 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   5134 E0                 2121 	movx	a,@dptr
   5135 54 DF              2122 	anl	a,#0xdf
   5137 F0                 2123 	movx	@dptr,a
                           2124 ;	../../shared/src/trx_train.c:28: break;
   5138 80 14              2125 	sjmp	00112$
   513A                    2126 00104$:
                           2127 ;	../../shared/src/trx_train.c:30: if(PHY_NS != ST_INIT) break;
   513A 90 22 31           2128 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   513D E0                 2129 	movx	a,@dptr
   513E 70 0E              2130 	jnz	00112$
                           2131 ;	../../shared/src/trx_train.c:32: if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1 && timeout ) break;
   5140 90 60 33           2132 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   5143 E0                 2133 	movx	a,@dptr
   5144 23                 2134 	rl	a
   5145 54 01              2135 	anl	a,#0x01
   5147 FA                 2136 	mov	r2,a
   5148 BA 01 D8           2137 	cjne	r2,#0x01,00110$
   514B 30 03 D5           2138 	jnb	_timeout,00110$
   514E                    2139 00112$:
                           2140 ;	../../shared/src/trx_train.c:34: timeout_stop;
   514E C2 8E              2141 	clr	_TR1
   5150 C2 8F              2142 	clr	_TF1
                           2143 ;	../../shared/src/trx_train.c:36: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   5152 90 26 78           2144 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   5155 E0                 2145 	movx	a,@dptr
   5156 54 FB              2146 	anl	a,#0xfb
   5158 F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/trx_train.c:37: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
   5159 90 26 7B           2149 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   515C E0                 2150 	movx	a,@dptr
   515D 54 EF              2151 	anl	a,#0xef
   515F F0                 2152 	movx	@dptr,a
                           2153 ;	../../shared/src/trx_train.c:40: do_train = 0;
   5160 C2 06              2154 	clr	_do_train
   5162 22                 2155 	ret
                           2156 ;------------------------------------------------------------
                           2157 ;Allocation info for local variables in function 'auto_train_complete'
                           2158 ;------------------------------------------------------------
                           2159 ;------------------------------------------------------------
                           2160 ;	../../shared/src/trx_train.c:45: void auto_train_complete(void) {
                           2161 ;	-----------------------------------------
                           2162 ;	 function auto_train_complete
                           2163 ;	-----------------------------------------
   5163                    2164 _auto_train_complete:
                           2165 ;	../../shared/src/trx_train.c:47: train_comp = 1; 
   5163 90 67 11           2166 	mov	dptr,#_train_comp
   5166 74 01              2167 	mov	a,#0x01
   5168 F0                 2168 	movx	@dptr,a
                           2169 ;	../../shared/src/trx_train.c:48: request_local_status();  
   5169 78 1A              2170 	mov	r0,#_request_local_status
   516B 79 E6              2171 	mov	r1,#(_request_local_status >> 8)
   516D 7A 01              2172 	mov	r2,#(_request_local_status >> 16)
   516F 12 00 B3           2173 	lcall	__sdcc_banked_call
                           2174 ;	../../shared/src/trx_train.c:49: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;
   5172 90 26 7B           2175 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5175 E0                 2176 	movx	a,@dptr
   5176 44 10              2177 	orl	a,#0x10
   5178 F0                 2178 	movx	@dptr,a
                           2179 ;	../../shared/src/trx_train.c:68: lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
   5179 90 60 59           2180 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   517C E0                 2181 	movx	a,@dptr
   517D 44 40              2182 	orl	a,#0x40
   517F F0                 2183 	movx	@dptr,a
                           2184 ;	../../shared/src/trx_train.c:69: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;	
   5180 90 26 78           2185 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   5183 E0                 2186 	movx	a,@dptr
   5184 44 04              2187 	orl	a,#0x04
   5186 F0                 2188 	movx	@dptr,a
                           2189 ;	../../shared/src/trx_train.c:70: while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) {
   5187                    2190 00110$:
   5187 90 26 79           2191 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   518A E0                 2192 	movx	a,@dptr
   518B 30 E6 4B           2193 	jnb	acc.6,00112$
                           2194 ;	../../shared/src/trx_train.c:71: if(lnx_SQ_AUTO_TRAIN_LANE) {
   518E 90 60 3A           2195 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   5191 E0                 2196 	movx	a,@dptr
   5192 30 E6 09           2197 	jnb	acc.6,00102$
                           2198 ;	../../shared/src/trx_train.c:75: reg_TX_TRAIN_ENABLE_LANE = 0;
   5195 90 20 10           2199 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   5198 E0                 2200 	movx	a,@dptr
   5199 54 DF              2201 	anl	a,#0xdf
   519B F0                 2202 	movx	@dptr,a
                           2203 ;	../../shared/src/trx_train.c:76: break;
   519C 80 3B              2204 	sjmp	00112$
   519E                    2205 00102$:
                           2206 ;	../../shared/src/trx_train.c:79: if(phy_mode <= SAS &&  reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {
   519E 90 A3 16           2207 	mov	dptr,#(_SYSTEM + 0x0002)
   51A1 E0                 2208 	movx	a,@dptr
   51A2 54 07              2209 	anl	a,#0x07
   51A4 FA                 2210 	mov	r2,a
   51A5 C3                 2211 	clr	c
   51A6 74 81              2212 	mov	a,#(0x01 ^ 0x80)
   51A8 8A F0              2213 	mov	b,r2
   51AA 63 F0 80           2214 	xrl	b,#0x80
   51AD 95 F0              2215 	subb	a,b
   51AF 40 22              2216 	jc	00106$
   51B1 90 26 78           2217 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   51B4 E0                 2218 	movx	a,@dptr
   51B5 20 E0 1B           2219 	jb	acc.0,00106$
                           2220 ;	../../shared/src/trx_train.c:80: if(reg_REMOTE_STATUS_VALID_ISR_LANE) {
   51B8 90 26 5D           2221 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   51BB E0                 2222 	movx	a,@dptr
   51BC 30 E0 14           2223 	jnb	acc.0,00106$
                           2224 ;	../../shared/src/trx_train.c:81: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2225 ;	../../shared/src/trx_train.c:82: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   51BF 90 26 65           2226 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   51C2 E0                 2227 	movx	a,@dptr
   51C3 44 01              2228 	orl	a,#0x01
   51C5 F0                 2229 	movx	@dptr,a
   51C6 E0                 2230 	movx	a,@dptr
   51C7 54 FE              2231 	anl	a,#0xfe
   51C9 F0                 2232 	movx	@dptr,a
                           2233 ;	../../shared/src/trx_train.c:84: remote_error_check();
   51CA 78 98              2234 	mov	r0,#_remote_error_check
   51CC 79 E6              2235 	mov	r1,#(_remote_error_check >> 8)
   51CE 7A 01              2236 	mov	r2,#(_remote_error_check >> 16)
   51D0 12 00 B3           2237 	lcall	__sdcc_banked_call
   51D3                    2238 00106$:
                           2239 ;	../../shared/src/trx_train.c:89: if(PHY_NS != ST_INIT) break;
   51D3 90 22 31           2240 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   51D6 E0                 2241 	movx	a,@dptr
   51D7 60 AE              2242 	jz	00110$
   51D9                    2243 00112$:
                           2244 ;	../../shared/src/trx_train.c:91: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
   51D9 90 26 78           2245 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   51DC E0                 2246 	movx	a,@dptr
   51DD 54 FB              2247 	anl	a,#0xfb
   51DF F0                 2248 	movx	@dptr,a
                           2249 ;	../../shared/src/trx_train.c:92: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
   51E0 90 26 7B           2250 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   51E3 E0                 2251 	movx	a,@dptr
   51E4 54 EF              2252 	anl	a,#0xef
   51E6 F0                 2253 	movx	@dptr,a
                           2254 ;	../../shared/src/trx_train.c:95: do_train = 0;
   51E7 C2 06              2255 	clr	_do_train
   51E9 22                 2256 	ret
                           2257 ;------------------------------------------------------------
                           2258 ;Allocation info for local variables in function 'TRX_Train'
                           2259 ;------------------------------------------------------------
                           2260 ;timer_chk                 Allocated to registers r2 r3 
                           2261 ;------------------------------------------------------------
                           2262 ;	../../shared/src/trx_train.c:110: void TRX_Train(void) {
                           2263 ;	-----------------------------------------
                           2264 ;	 function TRX_Train
                           2265 ;	-----------------------------------------
   51EA                    2266 _TRX_Train:
                           2267 ;	../../shared/src/trx_train.c:113: if( do_train | do_rxtrain) {
   51EA A2 06              2268 	mov	c,_do_train
   51EC 72 07              2269 	orl	c,_do_rxtrain
   51EE 40 03              2270 	jc	00157$
   51F0 02 53 B8           2271 	ljmp	00134$
   51F3                    2272 00157$:
                           2273 ;	../../shared/src/trx_train.c:115: reg_DFE_MCU_CLK_EN_LANE = 0;
   51F3 90 24 10           2274 	mov	dptr,#_RX_EQ_CLK_CTRL
   51F6 E0                 2275 	movx	a,@dptr
   51F7 54 FD              2276 	anl	a,#0xfd
   51F9 F0                 2277 	movx	@dptr,a
                           2278 ;	../../shared/src/trx_train.c:117: dfe_hardware_cont_stop();
   51FA 78 54              2279 	mov	r0,#_dfe_hardware_cont_stop
   51FC 79 91              2280 	mov	r1,#(_dfe_hardware_cont_stop >> 8)
   51FE 7A 02              2281 	mov	r2,#(_dfe_hardware_cont_stop >> 16)
   5200 12 00 B3           2282 	lcall	__sdcc_banked_call
                           2283 ;	../../shared/src/trx_train.c:118: do_phase_adapt = 0; //disable rpta	
   5203 90 67 15           2284 	mov	dptr,#_do_phase_adapt
                           2285 ;	../../shared/src/trx_train.c:119: rxinit_4_spdchg_en = 0;
   5206 E4                 2286 	clr	a
   5207 F0                 2287 	movx	@dptr,a
   5208 90 67 A1           2288 	mov	dptr,#_rxinit_4_spdchg_en
   520B F0                 2289 	movx	@dptr,a
                           2290 ;	../../shared/src/trx_train.c:121: if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train ) reg_TX_TRAIN_ON_LANE = 1;
   520C 90 26 79           2291 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   520F E0                 2292 	movx	a,@dptr
   5210 30 E6 0A           2293 	jnb	acc.6,00102$
   5213 30 06 07           2294 	jnb	_do_train,00102$
   5216 90 26 7B           2295 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5219 E0                 2296 	movx	a,@dptr
   521A 44 02              2297 	orl	a,#0x02
   521C F0                 2298 	movx	@dptr,a
   521D                    2299 00102$:
                           2300 ;	../../shared/src/trx_train.c:122: if( reg_PIN_RX_TRAIN_ENABLE_RD_LANE && do_rxtrain ) reg_RX_TRAIN_ON_LANE = 1;
   521D 90 26 79           2301 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   5220 E0                 2302 	movx	a,@dptr
   5221 30 E5 0A           2303 	jnb	acc.5,00105$
   5224 30 07 07           2304 	jnb	_do_rxtrain,00105$
   5227 90 26 7B           2305 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   522A E0                 2306 	movx	a,@dptr
   522B 44 04              2307 	orl	a,#0x04
   522D F0                 2308 	movx	@dptr,a
   522E                    2309 00105$:
                           2310 ;	../../shared/src/trx_train.c:124: if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
   522E 90 60 3A           2311 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   5231 E0                 2312 	movx	a,@dptr
   5232 20 E7 03           2313 	jb	acc.7,00162$
   5235 02 52 E5           2314 	ljmp	00113$
   5238                    2315 00162$:
                           2316 ;	../../shared/src/trx_train.c:126: reg_PIN_GPO_LANE_7_0 = 1;
   5238 90 22 06           2317 	mov	dptr,#(_MCU_GPIO + 0x0002)
   523B 74 01              2318 	mov	a,#0x01
   523D F0                 2319 	movx	@dptr,a
                           2320 ;	../../shared/src/trx_train.c:129: adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
   523E 90 60 43           2321 	mov	dptr,#(_DFE_CONTROL_2 + 0x0003)
   5241 E0                 2322 	movx	a,@dptr
   5242 24 FF              2323 	add	a,#0xff
   5244 92 0C              2324 	mov	_adapt_slicer_en,c
                           2325 ;	../../shared/src/trx_train.c:130: adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
   5246 90 60 42           2326 	mov	dptr,#(_DFE_CONTROL_2 + 0x0002)
   5249 E0                 2327 	movx	a,@dptr
   524A 24 FF              2328 	add	a,#0xff
   524C 92 0D              2329 	mov	_adapt_data_en,c
                           2330 ;	../../shared/src/trx_train.c:132: set_ctle_accap(0); //fast
   524E 75 82 00           2331 	mov	dpl,#0x00
   5251 78 A8              2332 	mov	r0,#_set_ctle_accap
   5253 79 90              2333 	mov	r1,#(_set_ctle_accap >> 8)
   5255 7A 02              2334 	mov	r2,#(_set_ctle_accap >> 16)
   5257 12 00 B3           2335 	lcall	__sdcc_banked_call
                           2336 ;	../../shared/src/trx_train.c:133: if(lnx_PHASE_CONTROL_FUNC_EN_LANE) {
   525A 90 60 38           2337 	mov	dptr,#_DFE_CONTROL_1
   525D E0                 2338 	movx	a,@dptr
   525E 30 E2 27           2339 	jnb	acc.2,00108$
                           2340 ;	../../shared/src/trx_train.c:134: train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
   5261 90 60 6B           2341 	mov	dptr,#(_TRAIN_PARA_0 + 0x0003)
   5264 E0                 2342 	movx	a,@dptr
   5265 90 66 61           2343 	mov	dptr,#(_train + 0x0021)
   5268 F0                 2344 	movx	@dptr,a
                           2345 ;	../../shared/src/trx_train.c:135: train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
   5269 90 60 6A           2346 	mov	dptr,#(_TRAIN_PARA_0 + 0x0002)
   526C E0                 2347 	movx	a,@dptr
   526D 90 66 62           2348 	mov	dptr,#(_train + 0x0022)
   5270 F0                 2349 	movx	@dptr,a
                           2350 ;	../../shared/src/trx_train.c:136: ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
   5271 90 60 44           2351 	mov	dptr,#_DFE_CONTROL_3
   5274 E0                 2352 	movx	a,@dptr
   5275 C4                 2353 	swap	a
   5276 54 03              2354 	anl	a,#0x03
   5278 90 66 F8           2355 	mov	dptr,#_ph_control_mode
   527B F0                 2356 	movx	@dptr,a
                           2357 ;	../../shared/src/trx_train.c:137: set_ph_mode(); 					
   527C 78 3B              2358 	mov	r0,#_set_ph_mode
   527E 79 97              2359 	mov	r1,#(_set_ph_mode >> 8)
   5280 7A 02              2360 	mov	r2,#(_set_ph_mode >> 16)
   5282 12 00 B3           2361 	lcall	__sdcc_banked_call
                           2362 ;	../../shared/src/trx_train.c:138: phase_control_func();
   5285 12 2D F3           2363 	lcall	_phase_control_func
   5288                    2364 00108$:
                           2365 ;	../../shared/src/trx_train.c:140: timeout_start(2000); 
   5288 75 8B 30           2366 	mov	_TMR1,#0x30
   528B 75 8D F8           2367 	mov	(_TMR1 >> 8),#0xF8
   528E D2 8E              2368 	setb	_TR1
   5290 C2 03              2369 	clr	_timeout
                           2370 ;	../../shared/src/trx_train.c:141: if(tx_status_pcie_mode)
   5292 30 27 14           2371 	jnb	_tx_status_pcie_mode,00110$
                           2372 ;	../../shared/src/trx_train.c:142: cds_tb = cds_table[CDS_DEFAULT_PCIE];
   5295 90 00 E0           2373 	mov	dptr,#(_cds_table + 0x0002)
   5298 E4                 2374 	clr	a
   5299 93                 2375 	movc	a,@a+dptr
   529A FA                 2376 	mov	r2,a
   529B A3                 2377 	inc	dptr
   529C E4                 2378 	clr	a
   529D 93                 2379 	movc	a,@a+dptr
   529E FB                 2380 	mov	r3,a
   529F 90 61 74           2381 	mov	dptr,#_CDS_READ_MISC1
   52A2 EA                 2382 	mov	a,r2
   52A3 F0                 2383 	movx	@dptr,a
   52A4 A3                 2384 	inc	dptr
   52A5 EB                 2385 	mov	a,r3
   52A6 F0                 2386 	movx	@dptr,a
   52A7 80 12              2387 	sjmp	00111$
   52A9                    2388 00110$:
                           2389 ;	../../shared/src/trx_train.c:144: cds_tb = cds_table[CDS_DEFAULT];
   52A9 90 00 DE           2390 	mov	dptr,#_cds_table
   52AC E4                 2391 	clr	a
   52AD 93                 2392 	movc	a,@a+dptr
   52AE FA                 2393 	mov	r2,a
   52AF A3                 2394 	inc	dptr
   52B0 E4                 2395 	clr	a
   52B1 93                 2396 	movc	a,@a+dptr
   52B2 FB                 2397 	mov	r3,a
   52B3 90 61 74           2398 	mov	dptr,#_CDS_READ_MISC1
   52B6 EA                 2399 	mov	a,r2
   52B7 F0                 2400 	movx	@dptr,a
   52B8 A3                 2401 	inc	dptr
   52B9 EB                 2402 	mov	a,r3
   52BA F0                 2403 	movx	@dptr,a
   52BB                    2404 00111$:
                           2405 ;	../../shared/src/trx_train.c:145: cdr_dfe_init();
   52BB 78 32              2406 	mov	r0,#_cdr_dfe_init
   52BD 79 9E              2407 	mov	r1,#(_cdr_dfe_init >> 8)
   52BF 7A 01              2408 	mov	r2,#(_cdr_dfe_init >> 16)
   52C1 12 00 B3           2409 	lcall	__sdcc_banked_call
                           2410 ;	../../shared/src/trx_train.c:146: dfe_adaptation();
   52C4 78 AD              2411 	mov	r0,#_dfe_adaptation
   52C6 79 9F              2412 	mov	r1,#(_dfe_adaptation >> 8)
   52C8 7A 01              2413 	mov	r2,#(_dfe_adaptation >> 16)
   52CA 12 00 B3           2414 	lcall	__sdcc_banked_call
                           2415 ;	../../shared/src/trx_train.c:149: timer_chk = ~TMR1;	timer_chk = 2000 - timer_chk;  		
   52CD E5 8B              2416 	mov	a,_TMR1
   52CF F4                 2417 	cpl	a
   52D0 FA                 2418 	mov	r2,a
   52D1 E5 8D              2419 	mov	a,(_TMR1 >> 8)
   52D3 F4                 2420 	cpl	a
   52D4 FB                 2421 	mov	r3,a
   52D5 74 D0              2422 	mov	a,#0xD0
   52D7 C3                 2423 	clr	c
   52D8 9A                 2424 	subb	a,r2
   52D9 FA                 2425 	mov	r2,a
   52DA 74 07              2426 	mov	a,#0x07
   52DC 9B                 2427 	subb	a,r3
   52DD FB                 2428 	mov	r3,a
                           2429 ;	../../shared/src/trx_train.c:150: reg_PIN_GPO_LANE_7_0 = 0;	
   52DE 90 22 06           2430 	mov	dptr,#(_MCU_GPIO + 0x0002)
   52E1 E4                 2431 	clr	a
   52E2 F0                 2432 	movx	@dptr,a
   52E3 80 23              2433 	sjmp	00114$
   52E5                    2434 00113$:
                           2435 ;	../../shared/src/trx_train.c:154: reg_PIN_GPO_LANE_7_0 = 1; 			
   52E5 90 22 06           2436 	mov	dptr,#(_MCU_GPIO + 0x0002)
   52E8 74 01              2437 	mov	a,#0x01
   52EA F0                 2438 	movx	@dptr,a
                           2439 ;	../../shared/src/trx_train.c:155: trx_train_one_time();
   52EB 12 54 17           2440 	lcall	_trx_train_one_time
                           2441 ;	../../shared/src/trx_train.c:156: reg_PIN_GPO_LANE_7_0 = 0;				
   52EE 90 22 06           2442 	mov	dptr,#(_MCU_GPIO + 0x0002)
   52F1 E4                 2443 	clr	a
   52F2 F0                 2444 	movx	@dptr,a
                           2445 ;	../../shared/src/trx_train.c:157: timer_chk = ~TMR2;	timer_chk = 500 - timer_chk;			
   52F3 E5 CC              2446 	mov	a,_TMR2
   52F5 F4                 2447 	cpl	a
   52F6 FC                 2448 	mov	r4,a
   52F7 E5 CD              2449 	mov	a,(_TMR2 >> 8)
   52F9 F4                 2450 	cpl	a
   52FA FD                 2451 	mov	r5,a
   52FB 8C 02              2452 	mov	ar2,r4
   52FD 8D 03              2453 	mov	ar3,r5
   52FF 74 F4              2454 	mov	a,#0xF4
   5301 C3                 2455 	clr	c
   5302 9A                 2456 	subb	a,r2
   5303 FA                 2457 	mov	r2,a
   5304 74 01              2458 	mov	a,#0x01
   5306 9B                 2459 	subb	a,r3
   5307 FB                 2460 	mov	r3,a
   5308                    2461 00114$:
                           2462 ;	../../shared/src/trx_train.c:161: reg_MCU_DEBUG_LANE_31_0_b0 = (uint8_t)timer_chk;
   5308 8A 04              2463 	mov	ar4,r2
   530A 90 22 C4           2464 	mov	dptr,#_MCU_DEBUG_LANE
   530D EC                 2465 	mov	a,r4
   530E F0                 2466 	movx	@dptr,a
                           2467 ;	../../shared/src/trx_train.c:162: reg_MCU_DEBUG_LANE_31_0_b1 = (uint8_t)(timer_chk>>8); 
   530F 8B 02              2468 	mov	ar2,r3
   5311 90 22 C5           2469 	mov	dptr,#(_MCU_DEBUG_LANE + 0x0001)
   5314 EA                 2470 	mov	a,r2
   5315 F0                 2471 	movx	@dptr,a
                           2472 ;	../../shared/src/trx_train.c:165: if( do_train ) {
   5316 30 06 6F           2473 	jnb	_do_train,00125$
                           2474 ;	../../shared/src/trx_train.c:167: if( ctrl_trx_train_pass==0 ) {
   5319 90 67 19           2475 	mov	dptr,#_ctrl_trx_train_pass
   531C E0                 2476 	movx	a,@dptr
   531D FA                 2477 	mov	r2,a
   531E 70 2F              2478 	jnz	00118$
                           2479 ;	../../shared/src/trx_train.c:168: if(phy_mode<=SAS) {
   5320 90 A3 16           2480 	mov	dptr,#(_SYSTEM + 0x0002)
   5323 E0                 2481 	movx	a,@dptr
   5324 54 07              2482 	anl	a,#0x07
   5326 FA                 2483 	mov	r2,a
   5327 C3                 2484 	clr	c
   5328 74 81              2485 	mov	a,#(0x01 ^ 0x80)
   532A 8A F0              2486 	mov	b,r2
   532C 63 F0 80           2487 	xrl	b,#0x80
   532F 95 F0              2488 	subb	a,b
   5331 40 0E              2489 	jc	00116$
                           2490 ;	../../shared/src/trx_train.c:169: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //1=There are no additional, untried, commonly supported settings for local PHY. 
   5333 90 26 1C           2491 	mov	dptr,#_TX_TRAIN_IF_REG2
   5336 E0                 2492 	movx	a,@dptr
   5337 44 80              2493 	orl	a,#0x80
   5339 F0                 2494 	movx	@dptr,a
                           2495 ;	../../shared/src/trx_train.c:170: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
   533A 90 26 1D           2496 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   533D E0                 2497 	movx	a,@dptr
   533E 54 FE              2498 	anl	a,#0xfe
   5340 F0                 2499 	movx	@dptr,a
   5341                    2500 00116$:
                           2501 ;	../../shared/src/trx_train.c:172: reg_TX_TRAIN_FAILED_LANE = 1;
   5341 90 26 7B           2502 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5344 E0                 2503 	movx	a,@dptr
   5345 44 08              2504 	orl	a,#0x08
   5347 F0                 2505 	movx	@dptr,a
                           2506 ;	../../shared/src/trx_train.c:173: lnx_TX_TRAIN_FAIL_INT_LANE = 1;
   5348 90 60 59           2507 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   534B E0                 2508 	movx	a,@dptr
   534C 44 80              2509 	orl	a,#0x80
   534E F0                 2510 	movx	@dptr,a
   534F                    2511 00118$:
                           2512 ;	../../shared/src/trx_train.c:181: if(!link_train_mode) 
   534F 90 26 7B           2513 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5352 E0                 2514 	movx	a,@dptr
   5353 20 E7 05           2515 	jb	acc.7,00120$
                           2516 ;	../../shared/src/trx_train.c:182: auto_train_complete();			
   5356 12 51 63           2517 	lcall	_auto_train_complete
   5359 80 03              2518 	sjmp	00121$
   535B                    2519 00120$:
                           2520 ;	../../shared/src/trx_train.c:185: link_train_complete();			    
   535B 12 51 01           2521 	lcall	_link_train_complete
   535E                    2522 00121$:
                           2523 ;	../../shared/src/trx_train.c:211: reg_TX_TRAIN_ON_LANE = 0; 
   535E 90 26 7B           2524 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5361 E0                 2525 	movx	a,@dptr
   5362 54 FD              2526 	anl	a,#0xfd
   5364 F0                 2527 	movx	@dptr,a
                           2528 ;	../../shared/src/trx_train.c:213: if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; }
   5365 90 A3 16           2529 	mov	dptr,#(_SYSTEM + 0x0002)
   5368 E0                 2530 	movx	a,@dptr
   5369 54 07              2531 	anl	a,#0x07
   536B FA                 2532 	mov	r2,a
   536C BA 04 19           2533 	cjne	r2,#0x04,00125$
   536F 90 67 B0           2534 	mov	dptr,#_tx_sel_bit
   5372 E0                 2535 	movx	a,@dptr
   5373 90 20 37           2536 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   5376 13                 2537 	rrc	a
   5377 E0                 2538 	movx	a,@dptr
   5378 92 E7              2539 	mov	acc.7,c
   537A F0                 2540 	movx	@dptr,a
   537B 90 67 B1           2541 	mov	dptr,#_rx_sel_bit
   537E E0                 2542 	movx	a,@dptr
   537F FA                 2543 	mov	r2,a
   5380 90 21 07           2544 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   5383 13                 2545 	rrc	a
   5384 E0                 2546 	movx	a,@dptr
   5385 92 E7              2547 	mov	acc.7,c
   5387 F0                 2548 	movx	@dptr,a
   5388                    2549 00125$:
                           2550 ;	../../shared/src/trx_train.c:219: if( do_rxtrain ) {
                           2551 ;	../../shared/src/trx_train.c:220: do_rxtrain = 0;
   5388 10 07 02           2552 	jbc	_do_rxtrain,00171$
   538B 80 31              2553 	sjmp	00135$
   538D                    2554 00171$:
                           2555 ;	../../shared/src/trx_train.c:221: reg_RX_TRAIN_COMPLETE_LANE = 1;		
   538D 90 26 7B           2556 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5390 E0                 2557 	movx	a,@dptr
   5391 44 01              2558 	orl	a,#0x01
   5393 F0                 2559 	movx	@dptr,a
                           2560 ;	../../shared/src/trx_train.c:222: while( reg_PIN_RX_TRAIN_ENABLE_RD_LANE ){
   5394                    2561 00128$:
   5394 90 26 79           2562 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   5397 E0                 2563 	movx	a,@dptr
   5398 30 E5 06           2564 	jnb	acc.5,00130$
                           2565 ;	../../shared/src/trx_train.c:223: if(PHY_NS != ST_INIT) break;				
   539B 90 22 31           2566 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   539E E0                 2567 	movx	a,@dptr
   539F 60 F3              2568 	jz	00128$
   53A1                    2569 00130$:
                           2570 ;	../../shared/src/trx_train.c:225: reg_RX_TRAIN_COMPLETE_LANE = 0;		
   53A1 90 26 7B           2571 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   53A4 E0                 2572 	movx	a,@dptr
   53A5 54 FE              2573 	anl	a,#0xfe
   53A7 F0                 2574 	movx	@dptr,a
                           2575 ;	../../shared/src/trx_train.c:226: reg_RX_TRAIN_ON_LANE = 0; 
   53A8 90 26 7B           2576 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   53AB E0                 2577 	movx	a,@dptr
   53AC 54 FB              2578 	anl	a,#0xfb
   53AE F0                 2579 	movx	@dptr,a
                           2580 ;	../../shared/src/trx_train.c:227: reg_RX_TRAIN_FAILED_LANE = 0;
   53AF 90 26 7A           2581 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   53B2 E0                 2582 	movx	a,@dptr
   53B3 54 7F              2583 	anl	a,#0x7f
   53B5 F0                 2584 	movx	@dptr,a
   53B6 80 06              2585 	sjmp	00135$
   53B8                    2586 00134$:
                           2587 ;	../../shared/src/trx_train.c:234: opt2train();
   53B8 12 60 02           2588 	lcall	_opt2train
                           2589 ;	../../shared/src/trx_train.c:235: restore_train();	
   53BB 12 64 3A           2590 	lcall	_restore_train
   53BE                    2591 00135$:
                           2592 ;	../../shared/src/trx_train.c:246: PHY_STATUS = ST_NORMAL; 
   53BE 90 22 30           2593 	mov	dptr,#_MCU_STATUS0_LANE
   53C1 74 2B              2594 	mov	a,#0x2B
   53C3 F0                 2595 	movx	@dptr,a
                           2596 ;	../../shared/src/trx_train.c:248: if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
   53C4 90 60 4E           2597 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   53C7 E0                 2598 	movx	a,@dptr
   53C8 23                 2599 	rl	a
   53C9 23                 2600 	rl	a
   53CA 54 01              2601 	anl	a,#0x01
   53CC FA                 2602 	mov	r2,a
   53CD BA 01 07           2603 	cjne	r2,#0x01,00137$
   53D0 90 24 10           2604 	mov	dptr,#_RX_EQ_CLK_CTRL
   53D3 E0                 2605 	movx	a,@dptr
   53D4 54 DF              2606 	anl	a,#0xdf
   53D6 F0                 2607 	movx	@dptr,a
   53D7                    2608 00137$:
                           2609 ;	../../shared/src/trx_train.c:250: ctrl_cdr_phase_on = 0;
   53D7 C2 1E              2610 	clr	_ctrl_cdr_phase_on
                           2611 ;	../../shared/src/trx_train.c:251: train_comp = 0;  	
   53D9 90 67 11           2612 	mov	dptr,#_train_comp
   53DC E4                 2613 	clr	a
   53DD F0                 2614 	movx	@dptr,a
                           2615 ;	../../shared/src/trx_train.c:252: timeout_stop2;
   53DE 75 C8 60           2616 	mov	_T2CON,#0x60
   53E1 C2 C6              2617 	clr	_TF2
                           2618 ;	../../shared/src/trx_train.c:253: reg_TIMER_3_EN_LANE = 0;
   53E3 90 22 74           2619 	mov	dptr,#_MCU_TIMER_CONTROL
   53E6 E0                 2620 	movx	a,@dptr
   53E7 54 F7              2621 	anl	a,#0xf7
   53E9 F0                 2622 	movx	@dptr,a
                           2623 ;	../../shared/src/trx_train.c:254: reg_INT4_TIMER3_INT_EN_LANE = 0;
   53EA 90 22 50           2624 	mov	dptr,#_MCU_INT4_CONTROL
   53ED E0                 2625 	movx	a,@dptr
   53EE 54 DF              2626 	anl	a,#0xdf
   53F0 F0                 2627 	movx	@dptr,a
                           2628 ;	../../shared/src/trx_train.c:255: reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;
   53F1 90 22 6C           2629 	mov	dptr,#_MCU_INT11_CONTROL
   53F4 E0                 2630 	movx	a,@dptr
   53F5 54 BF              2631 	anl	a,#0xbf
   53F7 F0                 2632 	movx	@dptr,a
                           2633 ;	../../shared/src/trx_train.c:256: reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;
   53F8 90 22 70           2634 	mov	dptr,#_MCU_INT12_CONTROL
   53FB E0                 2635 	movx	a,@dptr
   53FC 54 7F              2636 	anl	a,#0x7f
   53FE F0                 2637 	movx	@dptr,a
                           2638 ;	../../shared/src/trx_train.c:260: RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
                           2639 ;	../../shared/src/trx_train.c:261: RX_LANE_INTERRUPT_REG1.BT.B3 = 0;
   53FF 90 21 5B           2640 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   5402 74 60              2641 	mov	a,#0x60
   5404 F0                 2642 	movx	@dptr,a
   5405 E4                 2643 	clr	a
   5406 F0                 2644 	movx	@dptr,a
                           2645 ;	../../shared/src/trx_train.c:263: lnx_DFE_CORE_BYPASS_LANE = 0; //for lane_margin dfe run
   5407 90 60 38           2646 	mov	dptr,#_DFE_CONTROL_1
   540A E0                 2647 	movx	a,@dptr
   540B 54 BF              2648 	anl	a,#0xbf
   540D F0                 2649 	movx	@dptr,a
                           2650 ;	../../shared/src/trx_train.c:265: pre_normal_process();
   540E 78 A8              2651 	mov	r0,#_pre_normal_process
   5410 79 E5              2652 	mov	r1,#(_pre_normal_process >> 8)
   5412 7A 01              2653 	mov	r2,#(_pre_normal_process >> 16)
   5414 02 00 B3           2654 	ljmp	__sdcc_banked_call
                           2655 ;------------------------------------------------------------
                           2656 ;Allocation info for local variables in function 'trx_train_one_time'
                           2657 ;------------------------------------------------------------
                           2658 ;------------------------------------------------------------
                           2659 ;	../../shared/src/trx_train.c:273: void trx_train_one_time(void) {
                           2660 ;	-----------------------------------------
                           2661 ;	 function trx_train_one_time
                           2662 ;	-----------------------------------------
   5417                    2663 _trx_train_one_time:
                           2664 ;	../../shared/src/trx_train.c:279: trx_train_init();
   5417 12 54 4E           2665 	lcall	_trx_train_init
                           2666 ;	../../shared/src/trx_train.c:284: while(1){
   541A                    2667 00116$:
                           2668 ;	../../shared/src/trx_train.c:286: trx_train_control();
   541A 12 57 95           2669 	lcall	_trx_train_control
                           2670 ;	../../shared/src/trx_train.c:287: if( ctrl_trx_train_done ) break;
   541D 20 23 2B           2671 	jb	_ctrl_trx_train_done,00117$
                           2672 ;	../../shared/src/trx_train.c:289: if(ctrl_rx_train_on) {
   5420 30 1F 11           2673 	jnb	_ctrl_rx_train_on,00113$
                           2674 ;	../../shared/src/trx_train.c:295: if (TRAIN_SIM_EN) rx_train_dummy();
   5423 90 E6 07           2675 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5426 E0                 2676 	movx	a,@dptr
   5427 30 E2 05           2677 	jnb	acc.2,00104$
   542A 12 32 DB           2678 	lcall	_rx_train_dummy
   542D 80 EB              2679 	sjmp	00116$
   542F                    2680 00104$:
                           2681 ;	../../shared/src/trx_train.c:298: rx_train();
   542F 12 32 26           2682 	lcall	_rx_train
   5432 80 E6              2683 	sjmp	00116$
   5434                    2684 00113$:
                           2685 ;	../../shared/src/trx_train.c:300: else if(ctrl_tx_train_on) {
   5434 30 20 E3           2686 	jnb	_ctrl_tx_train_on,00116$
                           2687 ;	../../shared/src/trx_train.c:306: if (TRAIN_SIM_EN && tx_status_pcie_mode==0) tx_train_dummy();
   5437 90 E6 07           2688 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   543A E0                 2689 	movx	a,@dptr
   543B 30 E2 08           2690 	jnb	acc.2,00107$
   543E 20 27 05           2691 	jb	_tx_status_pcie_mode,00107$
   5441 12 77 85           2692 	lcall	_tx_train_dummy
   5444 80 D4              2693 	sjmp	00116$
   5446                    2694 00107$:
                           2695 ;	../../shared/src/trx_train.c:309: tx_train();
   5446 12 66 E1           2696 	lcall	_tx_train
   5449 80 CF              2697 	sjmp	00116$
   544B                    2698 00117$:
                           2699 ;	../../shared/src/trx_train.c:313: trx_train_end();
   544B 02 5A 7D           2700 	ljmp	_trx_train_end
                           2701 ;------------------------------------------------------------
                           2702 ;Allocation info for local variables in function 'trx_train_init'
                           2703 ;------------------------------------------------------------
                           2704 ;------------------------------------------------------------
                           2705 ;	../../shared/src/trx_train.c:321: void trx_train_init(void) {
                           2706 ;	-----------------------------------------
                           2707 ;	 function trx_train_init
                           2708 ;	-----------------------------------------
   544E                    2709 _trx_train_init:
                           2710 ;	../../shared/src/trx_train.c:323: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   544E 90 26 78           2711 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   5451 E0                 2712 	movx	a,@dptr
   5452 54 FB              2713 	anl	a,#0xfb
   5454 F0                 2714 	movx	@dptr,a
                           2715 ;	../../shared/src/trx_train.c:324: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
   5455 90 26 7B           2716 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5458 E0                 2717 	movx	a,@dptr
   5459 54 EF              2718 	anl	a,#0xef
   545B F0                 2719 	movx	@dptr,a
                           2720 ;	../../shared/src/trx_train.c:325: reg_TX_TRAIN_FAILED_LANE = 0;
   545C 90 26 7B           2721 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   545F E0                 2722 	movx	a,@dptr
   5460 54 F7              2723 	anl	a,#0xf7
   5462 F0                 2724 	movx	@dptr,a
                           2725 ;	../../shared/src/trx_train.c:326: reg_TX_FFE_TRAIN_DONE_LANE = 0;
   5463 90 26 79           2726 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   5466 E0                 2727 	movx	a,@dptr
   5467 54 7F              2728 	anl	a,#0x7f
   5469 F0                 2729 	movx	@dptr,a
                           2730 ;	../../shared/src/trx_train.c:327: lnx_TX_TRAIN_FAIL_INT_LANE = 0;
   546A 90 60 59           2731 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   546D E0                 2732 	movx	a,@dptr
   546E 54 7F              2733 	anl	a,#0x7f
   5470 F0                 2734 	movx	@dptr,a
                           2735 ;	../../shared/src/trx_train.c:328: reg_RX_TRAIN_COMPLETE_LANE = 0;		
   5471 90 26 7B           2736 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5474 E0                 2737 	movx	a,@dptr
   5475 54 FE              2738 	anl	a,#0xfe
   5477 F0                 2739 	movx	@dptr,a
                           2740 ;	../../shared/src/trx_train.c:329: reg_RX_TRAIN_FAILED_LANE = 0;
   5478 90 26 7A           2741 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   547B E0                 2742 	movx	a,@dptr
   547C 54 7F              2743 	anl	a,#0x7f
   547E F0                 2744 	movx	@dptr,a
                           2745 ;	../../shared/src/trx_train.c:330: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; 
   547F 90 26 1C           2746 	mov	dptr,#_TX_TRAIN_IF_REG2
   5482 E0                 2747 	movx	a,@dptr
   5483 54 7F              2748 	anl	a,#0x7f
   5485 F0                 2749 	movx	@dptr,a
                           2750 ;	../../shared/src/trx_train.c:331: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
   5486 90 26 1D           2751 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   5489 E0                 2752 	movx	a,@dptr
   548A 54 FE              2753 	anl	a,#0xfe
   548C F0                 2754 	movx	@dptr,a
                           2755 ;	../../shared/src/trx_train.c:336: reg_TIMER_2_SEL_LANE_1_0 = 0x02;	////use PWM2 1m unit timer
   548D 90 22 98           2756 	mov	dptr,#_MCU_TIMER_CTRL_1_LANE
   5490 E0                 2757 	movx	a,@dptr
   5491 54 CF              2758 	anl	a,#0xcf
   5493 44 20              2759 	orl	a,#0x20
   5495 F0                 2760 	movx	@dptr,a
                           2761 ;	../../shared/src/trx_train.c:337: reg_PWM2_EN_LANE = 0;
                           2762 ;	../../shared/src/trx_train.c:338: reg_PWM2_EN_LANE = 1;	
   5496 90 22 A7           2763 	mov	dptr,#(_MCU_TIMER_CTRL_4_LANE + 0x0003)
   5499 E0                 2764 	movx	a,@dptr
   549A 54 7F              2765 	anl	a,#0x7f
   549C F0                 2766 	movx	@dptr,a
   549D E0                 2767 	movx	a,@dptr
   549E 44 80              2768 	orl	a,#0x80
   54A0 F0                 2769 	movx	@dptr,a
                           2770 ;	../../shared/src/trx_train.c:340: if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
   54A1 90 60 33           2771 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   54A4 E0                 2772 	movx	a,@dptr
   54A5 30 E5 1C           2773 	jnb	acc.5,00105$
   54A8 30 06 19           2774 	jnb	_do_train,00105$
                           2775 ;	../../shared/src/trx_train.c:341: timeout2_start(lnx_TRX_TRAIN_TIMER_LANE_15_0+1);
   54AB 90 26 1A           2776 	mov	dptr,#(_TX_TRAIN_IF_REG1 + 0x0002)
   54AE E0                 2777 	movx	a,@dptr
   54AF FA                 2778 	mov	r2,a
   54B0 A3                 2779 	inc	dptr
   54B1 E0                 2780 	movx	a,@dptr
   54B2 FB                 2781 	mov	r3,a
   54B3 EA                 2782 	mov	a,r2
   54B4 F4                 2783 	cpl	a
   54B5 FA                 2784 	mov	r2,a
   54B6 EB                 2785 	mov	a,r3
   54B7 F4                 2786 	cpl	a
   54B8 FB                 2787 	mov	r3,a
   54B9 8A CC              2788 	mov	_TMR2,r2
   54BB 8B CD              2789 	mov	(_TMR2 >> 8),r3
   54BD 75 C8 7A           2790 	mov	_T2CON,#0x7A
   54C0 C2 04              2791 	clr	_timeout2
   54C2 80 21              2792 	sjmp	00106$
   54C4                    2793 00105$:
                           2794 ;	../../shared/src/trx_train.c:343: else if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
   54C4 90 60 33           2795 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   54C7 E0                 2796 	movx	a,@dptr
   54C8 30 E6 1A           2797 	jnb	acc.6,00106$
   54CB 30 07 17           2798 	jnb	_do_rxtrain,00106$
                           2799 ;	../../shared/src/trx_train.c:344: timeout2_start(lnx_RX_TRAIN_TIMER_LANE_15_0+1);
   54CE 90 26 18           2800 	mov	dptr,#_TX_TRAIN_IF_REG1
   54D1 E0                 2801 	movx	a,@dptr
   54D2 FA                 2802 	mov	r2,a
   54D3 A3                 2803 	inc	dptr
   54D4 E0                 2804 	movx	a,@dptr
   54D5 FB                 2805 	mov	r3,a
   54D6 EA                 2806 	mov	a,r2
   54D7 F4                 2807 	cpl	a
   54D8 FA                 2808 	mov	r2,a
   54D9 EB                 2809 	mov	a,r3
   54DA F4                 2810 	cpl	a
   54DB FB                 2811 	mov	r3,a
   54DC 8A CC              2812 	mov	_TMR2,r2
   54DE 8B CD              2813 	mov	(_TMR2 >> 8),r3
   54E0 75 C8 7A           2814 	mov	_T2CON,#0x7A
   54E3 C2 04              2815 	clr	_timeout2
   54E5                    2816 00106$:
                           2817 ;	../../shared/src/trx_train.c:348: if(!tx_status_pcie_mode) {
   54E5 20 27 38           2818 	jb	_tx_status_pcie_mode,00111$
                           2819 ;	../../shared/src/trx_train.c:349: reg_FRAME_LOCK_ISR_LANE = 0;
   54E8 90 21 43           2820 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   54EB E0                 2821 	movx	a,@dptr
   54EC 54 BF              2822 	anl	a,#0xbf
   54EE F0                 2823 	movx	@dptr,a
                           2824 ;	../../shared/src/trx_train.c:350: reg_FRAME_UNLOCK_ISR_LANE = 0;
   54EF 90 21 43           2825 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   54F2 E0                 2826 	movx	a,@dptr
   54F3 54 DF              2827 	anl	a,#0xdf
   54F5 F0                 2828 	movx	@dptr,a
                           2829 ;	../../shared/src/trx_train.c:351: reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 1;
   54F6 90 22 6C           2830 	mov	dptr,#_MCU_INT11_CONTROL
   54F9 E0                 2831 	movx	a,@dptr
   54FA 44 40              2832 	orl	a,#0x40
   54FC F0                 2833 	movx	@dptr,a
                           2834 ;	../../shared/src/trx_train.c:352: reg_INT12_FRAME_LOCK_INT_EN_LANE = 1;
   54FD 90 22 70           2835 	mov	dptr,#_MCU_INT12_CONTROL
   5500 E0                 2836 	movx	a,@dptr
   5501 44 80              2837 	orl	a,#0x80
   5503 F0                 2838 	movx	@dptr,a
                           2839 ;	../../shared/src/trx_train.c:353: reg_INT4_TIMER3_INT_EN_LANE = 1;
   5504 90 22 50           2840 	mov	dptr,#_MCU_INT4_CONTROL
   5507 E0                 2841 	movx	a,@dptr
   5508 44 20              2842 	orl	a,#0x20
   550A F0                 2843 	movx	@dptr,a
                           2844 ;	../../shared/src/trx_train.c:354: reg_TIMER_3_EN_LANE = 0;
   550B 90 22 74           2845 	mov	dptr,#_MCU_TIMER_CONTROL
   550E E0                 2846 	movx	a,@dptr
   550F 54 F7              2847 	anl	a,#0xf7
   5511 F0                 2848 	movx	@dptr,a
                           2849 ;	../../shared/src/trx_train.c:355: if(reg_FRAME_LOCK_LANE==0) reg_TIMER_3_EN_LANE = 1;
   5512 90 21 26           2850 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   5515 E0                 2851 	movx	a,@dptr
   5516 20 E2 07           2852 	jb	acc.2,00111$
   5519 90 22 74           2853 	mov	dptr,#_MCU_TIMER_CONTROL
   551C E0                 2854 	movx	a,@dptr
   551D 44 08              2855 	orl	a,#0x08
   551F F0                 2856 	movx	@dptr,a
   5520                    2857 00111$:
                           2858 ;	../../shared/src/trx_train.c:359: train_timer_int = 1;
   5520 90 66 CC           2859 	mov	dptr,#_train_timer_int
   5523 74 01              2860 	mov	a,#0x01
   5525 F0                 2861 	movx	@dptr,a
                           2862 ;	../../shared/src/trx_train.c:362: train_status_reset(); 
   5526 12 5E 46           2863 	lcall	_train_status_reset
                           2864 ;	../../shared/src/trx_train.c:364: ctrl_cdr_phase_on = 0;
   5529 C2 1E              2865 	clr	_ctrl_cdr_phase_on
                           2866 ;	../../shared/src/trx_train.c:365: cds_tb = cds_table[CDS_DATAADAPT];
   552B 90 00 EC           2867 	mov	dptr,#(_cds_table + 0x000e)
   552E E4                 2868 	clr	a
   552F 93                 2869 	movc	a,@a+dptr
   5530 FA                 2870 	mov	r2,a
   5531 A3                 2871 	inc	dptr
   5532 E4                 2872 	clr	a
   5533 93                 2873 	movc	a,@a+dptr
   5534 FB                 2874 	mov	r3,a
   5535 90 61 74           2875 	mov	dptr,#_CDS_READ_MISC1
   5538 EA                 2876 	mov	a,r2
   5539 F0                 2877 	movx	@dptr,a
   553A A3                 2878 	inc	dptr
   553B EB                 2879 	mov	a,r3
   553C F0                 2880 	movx	@dptr,a
                           2881 ;	../../shared/src/trx_train.c:366: ctrl_rx_only_mode = do_train==0; 
   553D 90 67 18           2882 	mov	dptr,#_ctrl_rx_only_mode
   5540 A2 06              2883 	mov	c,_do_train
   5542 B3                 2884 	cpl	c
   5543 E4                 2885 	clr	a
   5544 33                 2886 	rlc	a
   5545 F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/trx_train.c:367: adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
   5546 D2 0D              2889 	setb	_adapt_data_en
                           2890 ;	../../shared/src/trx_train.c:368: adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1
   5548 D2 0C              2891 	setb	_adapt_slicer_en
                           2892 ;	../../shared/src/trx_train.c:371: cdr_dfe_init(); 
   554A 78 32              2893 	mov	r0,#_cdr_dfe_init
   554C 79 9E              2894 	mov	r1,#(_cdr_dfe_init >> 8)
   554E 7A 01              2895 	mov	r2,#(_cdr_dfe_init >> 16)
   5550 12 00 B3           2896 	lcall	__sdcc_banked_call
                           2897 ;	../../shared/src/trx_train.c:373: set_accap_sel(ACCAP_DEMUX);
   5553 90 02 64           2898 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   5556 E0                 2899 	movx	a,@dptr
   5557 54 E7              2900 	anl	a,#0xe7
   5559 44 10              2901 	orl	a,#0x10
   555B F0                 2902 	movx	@dptr,a
                           2903 ;	../../shared/src/trx_train.c:374: reg_FFE_PULSE_DIV_LANE_2_0 = 2;
   555C 90 02 0C           2904 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   555F E0                 2905 	movx	a,@dptr
   5560 54 8F              2906 	anl	a,#0x8f
   5562 44 20              2907 	orl	a,#0x20
   5564 F0                 2908 	movx	@dptr,a
                           2909 ;	../../shared/src/trx_train.c:377: if(tx_status_pcie_mode) 
   5565 20 27 67           2910 	jb	_tx_status_pcie_mode,00125$
                           2911 ;	../../shared/src/trx_train.c:386: if( tsen_dat < -259 ) { //<30' 
   5568 90 66 17           2912 	mov	dptr,#_tsen_dat
   556B E0                 2913 	movx	a,@dptr
   556C FA                 2914 	mov	r2,a
   556D A3                 2915 	inc	dptr
   556E E0                 2916 	movx	a,@dptr
   556F FB                 2917 	mov	r3,a
   5570 C3                 2918 	clr	c
   5571 EA                 2919 	mov	a,r2
   5572 94 FD              2920 	subb	a,#0xFD
   5574 EB                 2921 	mov	a,r3
   5575 64 80              2922 	xrl	a,#0x80
   5577 94 7E              2923 	subb	a,#0x7e
   5579 50 0D              2924 	jnc	00116$
                           2925 ;	../../shared/src/trx_train.c:387: sumf_boost_target_c = -85; cdr_midpoint_phase_os = 0;
   557B 90 66 CA           2926 	mov	dptr,#_sumf_boost_target_c
   557E 74 AB              2927 	mov	a,#0xAB
   5580 F0                 2928 	movx	@dptr,a
   5581 90 66 CB           2929 	mov	dptr,#_cdr_midpoint_phase_os
   5584 E4                 2930 	clr	a
   5585 F0                 2931 	movx	@dptr,a
   5586 80 29              2932 	sjmp	00117$
   5588                    2933 00116$:
                           2934 ;	../../shared/src/trx_train.c:389: else if( tsen_dat > -160 ) {// >70'
   5588 C3                 2935 	clr	c
   5589 74 60              2936 	mov	a,#0x60
   558B 9A                 2937 	subb	a,r2
   558C 74 7F              2938 	mov	a,#(0xFF ^ 0x80)
   558E 8B F0              2939 	mov	b,r3
   5590 63 F0 80           2940 	xrl	b,#0x80
   5593 95 F0              2941 	subb	a,b
   5595 50 0E              2942 	jnc	00113$
                           2943 ;	../../shared/src/trx_train.c:390: sumf_boost_target_c = -68; cdr_midpoint_phase_os = 4;
   5597 90 66 CA           2944 	mov	dptr,#_sumf_boost_target_c
   559A 74 BC              2945 	mov	a,#0xBC
   559C F0                 2946 	movx	@dptr,a
   559D 90 66 CB           2947 	mov	dptr,#_cdr_midpoint_phase_os
   55A0 74 04              2948 	mov	a,#0x04
   55A2 F0                 2949 	movx	@dptr,a
   55A3 80 0C              2950 	sjmp	00117$
   55A5                    2951 00113$:
                           2952 ;	../../shared/src/trx_train.c:393: sumf_boost_target_c = -76; cdr_midpoint_phase_os = 2;
   55A5 90 66 CA           2953 	mov	dptr,#_sumf_boost_target_c
   55A8 74 B4              2954 	mov	a,#0xB4
   55AA F0                 2955 	movx	@dptr,a
   55AB 90 66 CB           2956 	mov	dptr,#_cdr_midpoint_phase_os
   55AE 74 02              2957 	mov	a,#0x02
   55B0 F0                 2958 	movx	@dptr,a
   55B1                    2959 00117$:
                           2960 ;	../../shared/src/trx_train.c:397: if(ph_control_mode>0) {
   55B1 90 66 F8           2961 	mov	dptr,#_ph_control_mode
   55B4 E0                 2962 	movx	a,@dptr
   55B5 FA                 2963 	mov	r2,a
   55B6 60 17              2964 	jz	00125$
                           2965 ;	../../shared/src/trx_train.c:398: if( lnx_EOM_ALIGN_CAL_DONE_LANE==0 || lnx_EOM_EOMDAT_CAL_PASS_LANE==0 ) {
   55B8 90 60 01           2966 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   55BB E0                 2967 	movx	a,@dptr
   55BC 30 E2 07           2968 	jnb	acc.2,00118$
   55BF 90 60 05           2969 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   55C2 E0                 2970 	movx	a,@dptr
   55C3 20 E5 09           2971 	jb	acc.5,00125$
   55C6                    2972 00118$:
                           2973 ;	../../shared/src/trx_train.c:399: eom_align_cal();
   55C6 78 0C              2974 	mov	r0,#_eom_align_cal
   55C8 79 B0              2975 	mov	r1,#(_eom_align_cal >> 8)
   55CA 7A 02              2976 	mov	r2,#(_eom_align_cal >> 16)
   55CC 12 00 B3           2977 	lcall	__sdcc_banked_call
   55CF                    2978 00125$:
                           2979 ;	../../shared/src/trx_train.c:411: if( do_train ) {  //TODO
   55CF 30 06 15           2980 	jnb	_do_train,00130$
                           2981 ;	../../shared/src/trx_train.c:413: if ((tx_status_pcie_mode) && (cmx_TX_TRAIN_MODE == 1))
   55D2 30 27 12           2982 	jnb	_tx_status_pcie_mode,00130$
   55D5 90 E6 28           2983 	mov	dptr,#_TRAIN_IF_CONFIG
   55D8 E0                 2984 	movx	a,@dptr
   55D9 03                 2985 	rr	a
   55DA 54 01              2986 	anl	a,#0x01
   55DC FA                 2987 	mov	r2,a
   55DD BA 01 07           2988 	cjne	r2,#0x01,00130$
                           2989 ;	../../shared/src/trx_train.c:414: reg_ANA_TX_EM_PEAK_EN_LANE = 1; //??
   55E0 90 26 52           2990 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   55E3 E0                 2991 	movx	a,@dptr
   55E4 44 80              2992 	orl	a,#0x80
   55E6 F0                 2993 	movx	@dptr,a
   55E7                    2994 00130$:
                           2995 ;	../../shared/src/trx_train.c:421: if (TRAIN_SIM_EN) goto skip_alg;
   55E7 90 E6 07           2996 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   55EA E0                 2997 	movx	a,@dptr
   55EB 30 E2 03           2998 	jnb	acc.2,00203$
   55EE 02 57 68           2999 	ljmp	00144$
   55F1                    3000 00203$:
                           3001 ;	../../shared/src/trx_train.c:424: if (!tag_RX_NO_INIT) //0
   55F1 90 60 4C           3002 	mov	dptr,#_DFE_CONTROL_5
   55F4 E0                 3003 	movx	a,@dptr
   55F5 20 E1 64           3004 	jb	acc.1,00134$
                           3005 ;	../../shared/src/trx_train.c:427: train_r = tag_RX_RXFFE_R_INI;  //4
   55F8 90 60 5B           3006 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   55FB E0                 3007 	movx	a,@dptr
   55FC C4                 3008 	swap	a
   55FD 54 0F              3009 	anl	a,#0x0f
   55FF 90 66 C6           3010 	mov	dptr,#_train_r
   5602 F0                 3011 	movx	@dptr,a
                           3012 ;	../../shared/src/trx_train.c:428: train_c = tag_RX_RXFFE_C_INI;  //15
   5603 90 60 8F           3013 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   5606 E0                 3014 	movx	a,@dptr
   5607 C4                 3015 	swap	a
   5608 54 0F              3016 	anl	a,#0x0f
   560A 90 66 C5           3017 	mov	dptr,#_train_c
   560D F0                 3018 	movx	@dptr,a
                           3019 ;	../../shared/src/trx_train.c:429: Set_Rx_FFE();
   560E 12 60 A4           3020 	lcall	_Set_Rx_FFE
                           3021 ;	../../shared/src/trx_train.c:432: dfe_f0_res_sel = 3;
   5611 90 00 50           3022 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5614 E0                 3023 	movx	a,@dptr
   5615 44 18              3024 	orl	a,#0x18
   5617 F0                 3025 	movx	@dptr,a
                           3026 ;	../../shared/src/trx_train.c:433: dfe_res_f1 = 3;
   5618 90 00 50           3027 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   561B E0                 3028 	movx	a,@dptr
   561C 44 06              3029 	orl	a,#0x06
   561E F0                 3030 	movx	@dptr,a
                           3031 ;	../../shared/src/trx_train.c:434: dfe_f234_res_sel = 1;
   561F 90 00 50           3032 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5622 E0                 3033 	movx	a,@dptr
   5623 44 01              3034 	orl	a,#0x01
   5625 F0                 3035 	movx	@dptr,a
                           3036 ;	../../shared/src/trx_train.c:435: dfe_f567_res_sel = 1;
   5626 90 00 54           3037 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5629 E0                 3038 	movx	a,@dptr
   562A 44 80              3039 	orl	a,#0x80
   562C F0                 3040 	movx	@dptr,a
                           3041 ;	../../shared/src/trx_train.c:438: train.phase_offset_esm = 0;	
   562D 90 66 62           3042 	mov	dptr,#(_train + 0x0022)
                           3043 ;	../../shared/src/trx_train.c:439: opt.phase_offset_esm = 0;
   5630 E4                 3044 	clr	a
   5631 F0                 3045 	movx	@dptr,a
   5632 90 66 91           3046 	mov	dptr,#(_opt + 0x0022)
   5635 F0                 3047 	movx	@dptr,a
                           3048 ;	../../shared/src/trx_train.c:441: train.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //-14; //0;  //load phase as calibration result
   5636 90 60 54           3049 	mov	dptr,#_TRAIN_CONTROL_1
   5639 E0                 3050 	movx	a,@dptr
   563A 90 66 61           3051 	mov	dptr,#(_train + 0x0021)
   563D F0                 3052 	movx	@dptr,a
                           3053 ;	../../shared/src/trx_train.c:442: opt.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0;//-14; //0;		
   563E 90 60 54           3054 	mov	dptr,#_TRAIN_CONTROL_1
   5641 E0                 3055 	movx	a,@dptr
   5642 90 66 90           3056 	mov	dptr,#(_opt + 0x0021)
   5645 F0                 3057 	movx	@dptr,a
                           3058 ;	../../shared/src/trx_train.c:445: ph_control_mode = 0; // force to mode0 //tag_TRAIN_PH_CONTROL_MODE; 
   5646 90 66 F8           3059 	mov	dptr,#_ph_control_mode
   5649 E4                 3060 	clr	a
   564A F0                 3061 	movx	@dptr,a
                           3062 ;	../../shared/src/trx_train.c:450: set_ph_mode(); 
   564B 78 3B              3063 	mov	r0,#_set_ph_mode
   564D 79 97              3064 	mov	r1,#(_set_ph_mode >> 8)
   564F 7A 02              3065 	mov	r2,#(_set_ph_mode >> 16)
   5651 12 00 B3           3066 	lcall	__sdcc_banked_call
                           3067 ;	../../shared/src/trx_train.c:451: phase_control_func();
   5654 12 2D F3           3068 	lcall	_phase_control_func
                           3069 ;	../../shared/src/trx_train.c:463: ctrl_rx_train_mode = 0; 
   5657 90 67 1A           3070 	mov	dptr,#_ctrl_rx_train_mode
   565A E4                 3071 	clr	a
   565B F0                 3072 	movx	@dptr,a
   565C                    3073 00134$:
                           3074 ;	../../shared/src/trx_train.c:501: gain_train_with_c = tag_GAIN_TRAIN_WITH_C;   //1
   565C 90 60 3A           3075 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   565F E0                 3076 	movx	a,@dptr
   5660 54 01              3077 	anl	a,#0x01
   5662 FA                 3078 	mov	r2,a
   5663 24 FF              3079 	add	a,#0xff
   5665 92 24              3080 	mov	_gain_train_with_c,c
                           3081 ;	../../shared/src/trx_train.c:504: if (tag_GAIN_TRAIN_INIT_EN) //1
   5667 90 60 3A           3082 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   566A E0                 3083 	movx	a,@dptr
   566B 30 E2 5E           3084 	jnb	acc.2,00138$
                           3085 ;	../../shared/src/trx_train.c:506: train_r = tag_RXFFE_R_GAIN_TRAIN;  //4
   566E 90 60 5B           3086 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   5671 E0                 3087 	movx	a,@dptr
   5672 54 0F              3088 	anl	a,#0x0f
   5674 90 66 C6           3089 	mov	dptr,#_train_r
   5677 F0                 3090 	movx	@dptr,a
                           3091 ;	../../shared/src/trx_train.c:507: train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
   5678 90 60 8F           3092 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   567B E0                 3093 	movx	a,@dptr
   567C 54 0F              3094 	anl	a,#0x0f
   567E 90 66 C5           3095 	mov	dptr,#_train_c
   5681 F0                 3096 	movx	@dptr,a
                           3097 ;	../../shared/src/trx_train.c:508: Set_Rx_FFE();
   5682 12 60 A4           3098 	lcall	_Set_Rx_FFE
                           3099 ;	../../shared/src/trx_train.c:510: ctrl_cdr_phase_on = 0;
   5685 C2 1E              3100 	clr	_ctrl_cdr_phase_on
                           3101 ;	../../shared/src/trx_train.c:512: dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT;
   5687 90 60 78           3102 	mov	dptr,#_DFE_CONTROL_6
   568A E0                 3103 	movx	a,@dptr
   568B 90 66 C1           3104 	mov	dptr,#_dfe_res_f0a_low_thres_01
   568E F0                 3105 	movx	@dptr,a
                           3106 ;	../../shared/src/trx_train.c:513: dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT;
   568F 90 60 79           3107 	mov	dptr,#(_DFE_CONTROL_6 + 0x0001)
   5692 E0                 3108 	movx	a,@dptr
   5693 90 66 C2           3109 	mov	dptr,#_dfe_res_f0a_low_thres_2
   5696 F0                 3110 	movx	@dptr,a
                           3111 ;	../../shared/src/trx_train.c:514: dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT;
   5697 90 60 7A           3112 	mov	dptr,#(_DFE_CONTROL_6 + 0x0002)
   569A E0                 3113 	movx	a,@dptr
   569B 90 66 C3           3114 	mov	dptr,#_dfe_res_f0a_low_thres_3
   569E F0                 3115 	movx	@dptr,a
                           3116 ;	../../shared/src/trx_train.c:515: dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;
   569F 90 60 2F           3117 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0003)
   56A2 E0                 3118 	movx	a,@dptr
   56A3 90 66 C4           3119 	mov	dptr,#_dfe_res_f0a_high_thres
   56A6 F0                 3120 	movx	@dptr,a
                           3121 ;	../../shared/src/trx_train.c:517: gain_train();
   56A7 12 5B B0           3122 	lcall	_gain_train
                           3123 ;	../../shared/src/trx_train.c:519: train_r = tag_RX_RXFFE_R_INI;  //0
   56AA 90 60 5B           3124 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   56AD E0                 3125 	movx	a,@dptr
   56AE C4                 3126 	swap	a
   56AF 54 0F              3127 	anl	a,#0x0f
   56B1 FA                 3128 	mov	r2,a
   56B2 90 66 C6           3129 	mov	dptr,#_train_r
   56B5 F0                 3130 	movx	@dptr,a
                           3131 ;	../../shared/src/trx_train.c:520: if( tag_GAIN_TRAIN_WITH_C == 0)
   56B6 90 60 3A           3132 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   56B9 E0                 3133 	movx	a,@dptr
   56BA 20 E0 0C           3134 	jb	acc.0,00136$
                           3135 ;	../../shared/src/trx_train.c:522: train_c = tag_RX_RXFFE_C_INI; //15
   56BD 90 60 8F           3136 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   56C0 E0                 3137 	movx	a,@dptr
   56C1 C4                 3138 	swap	a
   56C2 54 0F              3139 	anl	a,#0x0f
   56C4 FA                 3140 	mov	r2,a
   56C5 90 66 C5           3141 	mov	dptr,#_train_c
   56C8 F0                 3142 	movx	@dptr,a
   56C9                    3143 00136$:
                           3144 ;	../../shared/src/trx_train.c:525: Set_Rx_FFE();
   56C9 12 60 A4           3145 	lcall	_Set_Rx_FFE
   56CC                    3146 00138$:
                           3147 ;	../../shared/src/trx_train.c:529: dfe_cdr_phase_opt();		
   56CC 12 5D C4           3148 	lcall	_dfe_cdr_phase_opt
                           3149 ;	../../shared/src/trx_train.c:531: train2opt(); 
   56CF 12 60 54           3150 	lcall	_train2opt
                           3151 ;	../../shared/src/trx_train.c:549: if(opt.eo < 10) { //[HR] 10 is better than 15 based on Fang's test result.
   56D2 90 66 8E           3152 	mov	dptr,#(_opt + 0x001f)
   56D5 E0                 3153 	movx	a,@dptr
   56D6 FA                 3154 	mov	r2,a
   56D7 BA 0A 00           3155 	cjne	r2,#0x0A,00207$
   56DA                    3156 00207$:
   56DA 50 2D              3157 	jnc	00140$
                           3158 ;	../../shared/src/trx_train.c:551: ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && tag_CDR_PHASE_OPT_FIRST_EN && TRAIN_SIM_EN==0;
   56DC 90 60 4D           3159 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   56DF E0                 3160 	movx	a,@dptr
   56E0 20 E7 04           3161 	jb	acc.7,00159$
   56E3 C2 28              3162 	clr	b0
   56E5 80 02              3163 	sjmp	00160$
   56E7                    3164 00159$:
   56E7 D2 28              3165 	setb	b0
   56E9                    3166 00160$:
   56E9 30 28 11           3167 	jnb	b0,00155$
   56EC 90 E6 07           3168 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   56EF E0                 3169 	movx	a,@dptr
   56F0 03                 3170 	rr	a
   56F1 03                 3171 	rr	a
   56F2 54 01              3172 	anl	a,#0x01
   56F4 FA                 3173 	mov	r2,a
   56F5 B4 01 00           3174 	cjne	a,#0x01,00211$
   56F8                    3175 00211$:
   56F8 E4                 3176 	clr	a
   56F9 33                 3177 	rlc	a
   56FA FA                 3178 	mov	r2,a
   56FB 70 04              3179 	jnz	00156$
   56FD                    3180 00155$:
   56FD C2 28              3181 	clr	b0
   56FF 80 02              3182 	sjmp	00157$
   5701                    3183 00156$:
   5701 D2 28              3184 	setb	b0
   5703                    3185 00157$:
   5703 A2 28              3186 	mov	c,b0
   5705 92 1E              3187 	mov	_ctrl_cdr_phase_on,c
   5707 80 02              3188 	sjmp	00141$
   5709                    3189 00140$:
                           3190 ;	../../shared/src/trx_train.c:554: ctrl_cdr_phase_on = 0;
   5709 C2 1E              3191 	clr	_ctrl_cdr_phase_on
   570B                    3192 00141$:
                           3193 ;	../../shared/src/trx_train.c:557: if (ctrl_cdr_phase_on)
   570B 30 1E 5A           3194 	jnb	_ctrl_cdr_phase_on,00144$
                           3195 ;	../../shared/src/trx_train.c:560: train_r = 0; train_c = 15;
   570E 90 66 C6           3196 	mov	dptr,#_train_r
   5711 E4                 3197 	clr	a
   5712 F0                 3198 	movx	@dptr,a
   5713 90 66 C5           3199 	mov	dptr,#_train_c
   5716 74 0F              3200 	mov	a,#0x0F
   5718 F0                 3201 	movx	@dptr,a
                           3202 ;	../../shared/src/trx_train.c:561: Set_Rx_FFE();
   5719 12 60 A4           3203 	lcall	_Set_Rx_FFE
                           3204 ;	../../shared/src/trx_train.c:564: adapt_data_en = tag_TRAIN_USE_D; //0
   571C 90 60 44           3205 	mov	dptr,#_DFE_CONTROL_3
   571F E0                 3206 	movx	a,@dptr
   5720 23                 3207 	rl	a
   5721 23                 3208 	rl	a
   5722 54 01              3209 	anl	a,#0x01
   5724 24 FF              3210 	add	a,#0xff
   5726 92 0D              3211 	mov	_adapt_data_en,c
                           3212 ;	../../shared/src/trx_train.c:565: adapt_slicer_en = tag_TRAIN_USE_S; //1		
   5728 90 60 44           3213 	mov	dptr,#_DFE_CONTROL_3
   572B E0                 3214 	movx	a,@dptr
   572C 23                 3215 	rl	a
   572D 54 01              3216 	anl	a,#0x01
   572F 24 FF              3217 	add	a,#0xff
   5731 92 0C              3218 	mov	_adapt_slicer_en,c
                           3219 ;	../../shared/src/trx_train.c:566: ph_control_mode = 0; 
   5733 90 66 F8           3220 	mov	dptr,#_ph_control_mode
   5736 E4                 3221 	clr	a
   5737 F0                 3222 	movx	@dptr,a
                           3223 ;	../../shared/src/trx_train.c:567: set_ph_mode();
   5738 78 3B              3224 	mov	r0,#_set_ph_mode
   573A 79 97              3225 	mov	r1,#(_set_ph_mode >> 8)
   573C 7A 02              3226 	mov	r2,#(_set_ph_mode >> 16)
   573E 12 00 B3           3227 	lcall	__sdcc_banked_call
                           3228 ;	../../shared/src/trx_train.c:569: dfe_cdr_phase_opt();
   5741 12 5D C4           3229 	lcall	_dfe_cdr_phase_opt
                           3230 ;	../../shared/src/trx_train.c:570: train2opt(); 
   5744 12 60 54           3231 	lcall	_train2opt
                           3232 ;	../../shared/src/trx_train.c:572: ctrl_cdr_phase_on = 0;
   5747 C2 1E              3233 	clr	_ctrl_cdr_phase_on
                           3234 ;	../../shared/src/trx_train.c:573: train_r = tag_RX_RXFFE_R_INI;  //0
   5749 90 60 5B           3235 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   574C E0                 3236 	movx	a,@dptr
   574D C4                 3237 	swap	a
   574E 54 0F              3238 	anl	a,#0x0f
   5750 90 66 C6           3239 	mov	dptr,#_train_r
   5753 F0                 3240 	movx	@dptr,a
                           3241 ;	../../shared/src/trx_train.c:574: train_c = tag_RX_RXFFE_C_INI; //15
   5754 90 60 8F           3242 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   5757 E0                 3243 	movx	a,@dptr
   5758 C4                 3244 	swap	a
   5759 54 0F              3245 	anl	a,#0x0f
   575B 90 66 C5           3246 	mov	dptr,#_train_c
   575E F0                 3247 	movx	@dptr,a
                           3248 ;	../../shared/src/trx_train.c:575: Set_Rx_FFE();
   575F 12 60 A4           3249 	lcall	_Set_Rx_FFE
                           3250 ;	../../shared/src/trx_train.c:576: dfe_cdr_phase_opt();	
   5762 12 5D C4           3251 	lcall	_dfe_cdr_phase_opt
                           3252 ;	../../shared/src/trx_train.c:577: train2opt(); 
   5765 12 60 54           3253 	lcall	_train2opt
                           3254 ;	../../shared/src/trx_train.c:580: skip_alg:
   5768                    3255 00144$:
                           3256 ;	../../shared/src/trx_train.c:582: if (do_train) {
   5768 30 06 29           3257 	jnb	_do_train,00153$
                           3258 ;	../../shared/src/trx_train.c:584: if(link_train_mode==0) trainif_init();		
   576B 90 26 7B           3259 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   576E E0                 3260 	movx	a,@dptr
   576F 20 E7 09           3261 	jb	acc.7,00146$
   5772 78 89              3262 	mov	r0,#_trainif_init
   5774 79 EB              3263 	mov	r1,#(_trainif_init >> 8)
   5776 7A 01              3264 	mov	r2,#(_trainif_init >> 16)
   5778 12 00 B3           3265 	lcall	__sdcc_banked_call
   577B                    3266 00146$:
                           3267 ;	../../shared/src/trx_train.c:586: if (tag_TX_NO_INIT==0) //0
   577B 90 60 4C           3268 	mov	dptr,#_DFE_CONTROL_5
   577E E0                 3269 	movx	a,@dptr
   577F 20 E2 0F           3270 	jb	acc.2,00150$
                           3271 ;	../../shared/src/trx_train.c:591: if(tx_pipe4_en==0)  {
   5782 20 26 0C           3272 	jb	_tx_pipe4_en,00150$
                           3273 ;	../../shared/src/trx_train.c:592: tx_reset(train.tx_preset_index); //3
   5785 90 66 65           3274 	mov	dptr,#(_train + 0x0025)
   5788 E0                 3275 	movx	a,@dptr
   5789 F5 82              3276 	mov	dpl,a
   578B 12 77 A2           3277 	lcall	_tx_reset
                           3278 ;	../../shared/src/trx_train.c:593: dfe_cdr_phase_opt();
   578E 12 5D C4           3279 	lcall	_dfe_cdr_phase_opt
   5791                    3280 00150$:
                           3281 ;	../../shared/src/trx_train.c:597: train2opt(); 
   5791 02 60 54           3282 	ljmp	_train2opt
   5794                    3283 00153$:
   5794 22                 3284 	ret
                           3285 ;------------------------------------------------------------
                           3286 ;Allocation info for local variables in function 'trx_train_control'
                           3287 ;------------------------------------------------------------
                           3288 ;------------------------------------------------------------
                           3289 ;	../../shared/src/trx_train.c:603: void trx_train_control(void) {
                           3290 ;	-----------------------------------------
                           3291 ;	 function trx_train_control
                           3292 ;	-----------------------------------------
   5795                    3293 _trx_train_control:
                           3294 ;	../../shared/src/trx_train.c:610: if (ctrl_rx_only_mode) // if in the RX_only training mode
   5795 90 67 18           3295 	mov	dptr,#_ctrl_rx_only_mode
   5798 E0                 3296 	movx	a,@dptr
   5799 FA                 3297 	mov	r2,a
   579A 60 12              3298 	jz	00119$
                           3299 ;	../../shared/src/trx_train.c:612: if (ctrl_rx_train_done) // if RX training is done
   579C 30 21 04           3300 	jnb	_ctrl_rx_train_done,00102$
                           3301 ;	../../shared/src/trx_train.c:614: ctrl_trx_train_done = 1; // return training done
   579F D2 23              3302 	setb	_ctrl_trx_train_done
   57A1 80 4E              3303 	sjmp	00120$
   57A3                    3304 00102$:
                           3305 ;	../../shared/src/trx_train.c:619: ctrl_rx_train_on = 1; // train RX FFE in the next
   57A3 D2 1F              3306 	setb	_ctrl_rx_train_on
                           3307 ;	../../shared/src/trx_train.c:620: ctrl_tx_train_on = 0; // train RX FFE in the next
   57A5 C2 20              3308 	clr	_ctrl_tx_train_on
                           3309 ;	../../shared/src/trx_train.c:621: rx.blind_training = 0;
   57A7 90 66 AC           3310 	mov	dptr,#_rx
   57AA E4                 3311 	clr	a
   57AB F0                 3312 	movx	@dptr,a
   57AC 80 43              3313 	sjmp	00120$
   57AE                    3314 00119$:
                           3315 ;	../../shared/src/trx_train.c:627: if (opt.excellent_eo && (opt.saturated==0)) // if EO is excellent and not saturated
   57AE 90 66 98           3316 	mov	dptr,#(_opt + 0x0029)
   57B1 E0                 3317 	movx	a,@dptr
   57B2 60 17              3318 	jz	00115$
   57B4 90 66 97           3319 	mov	dptr,#(_opt + 0x0028)
   57B7 E0                 3320 	movx	a,@dptr
   57B8 70 11              3321 	jnz	00115$
                           3322 ;	../../shared/src/trx_train.c:629: ctrl_rx_only_mode = 1; // set RX_only_mode = 1
   57BA 90 67 18           3323 	mov	dptr,#_ctrl_rx_only_mode
   57BD 74 01              3324 	mov	a,#0x01
   57BF F0                 3325 	movx	@dptr,a
                           3326 ;	../../shared/src/trx_train.c:630: ctrl_rx_train_on = 1; // train RX FFE in the next for the last time
   57C0 D2 1F              3327 	setb	_ctrl_rx_train_on
                           3328 ;	../../shared/src/trx_train.c:631: ctrl_tx_train_on = 0; 
   57C2 C2 20              3329 	clr	_ctrl_tx_train_on
                           3330 ;	../../shared/src/trx_train.c:632: rx.blind_training = 0;
   57C4 90 66 AC           3331 	mov	dptr,#_rx
   57C7 E4                 3332 	clr	a
   57C8 F0                 3333 	movx	@dptr,a
   57C9 80 26              3334 	sjmp	00120$
   57CB                    3335 00115$:
                           3336 ;	../../shared/src/trx_train.c:635: else if (ctrl_rx_train_done) // if RX training is done
   57CB 30 21 06           3337 	jnb	_ctrl_rx_train_done,00112$
                           3338 ;	../../shared/src/trx_train.c:637: ctrl_rx_train_on = 0; // train TX FFE in the next
   57CE C2 1F              3339 	clr	_ctrl_rx_train_on
                           3340 ;	../../shared/src/trx_train.c:638: ctrl_tx_train_on = 1; // train TX FFE in the next
   57D0 D2 20              3341 	setb	_ctrl_tx_train_on
   57D2 80 1D              3342 	sjmp	00120$
   57D4                    3343 00112$:
                           3344 ;	../../shared/src/trx_train.c:640: else if (ctrl_tx_train_done) // if TX training is done
   57D4 30 22 11           3345 	jnb	_ctrl_tx_train_done,00109$
                           3346 ;	../../shared/src/trx_train.c:642: ctrl_rx_train_on = 1; // train RX FFE in the next
   57D7 D2 1F              3347 	setb	_ctrl_rx_train_on
                           3348 ;	../../shared/src/trx_train.c:643: ctrl_tx_train_on = 0; // train RX FFE in the next
   57D9 C2 20              3349 	clr	_ctrl_tx_train_on
                           3350 ;	../../shared/src/trx_train.c:662: rx.blind_training = 0; // not RX blind training
   57DB 90 66 AC           3351 	mov	dptr,#_rx
   57DE E4                 3352 	clr	a
   57DF F0                 3353 	movx	@dptr,a
                           3354 ;	../../shared/src/trx_train.c:667: ctrl_rx_only_mode = 1; 
   57E0 90 67 18           3355 	mov	dptr,#_ctrl_rx_only_mode
   57E3 74 01              3356 	mov	a,#0x01
   57E5 F0                 3357 	movx	@dptr,a
                           3358 ;	../../shared/src/trx_train.c:672: ctrl_num_big_loop ++; // update the number of big training loops by adding one
   57E6 80 09              3359 	sjmp	00120$
   57E8                    3360 00109$:
                           3361 ;	../../shared/src/trx_train.c:681: rx.blind_training = 0; // not RX blind training
   57E8 90 66 AC           3362 	mov	dptr,#_rx
   57EB E4                 3363 	clr	a
   57EC F0                 3364 	movx	@dptr,a
                           3365 ;	../../shared/src/trx_train.c:684: ctrl_rx_train_on = 0; // train TX FFE in the next
   57ED C2 1F              3366 	clr	_ctrl_rx_train_on
                           3367 ;	../../shared/src/trx_train.c:685: ctrl_tx_train_on = 1; // train TX FFE in the next
   57EF D2 20              3368 	setb	_ctrl_tx_train_on
   57F1                    3369 00120$:
                           3370 ;	../../shared/src/trx_train.c:698: if( ctrl_trx_train_done==0 ) // is not training done, we will train RX or TX
   57F1 20 23 06           3371 	jb	_ctrl_trx_train_done,00123$
                           3372 ;	../../shared/src/trx_train.c:700: ctrl_rx_train_done = 0; // reset flag
   57F4 C2 21              3373 	clr	_ctrl_rx_train_done
                           3374 ;	../../shared/src/trx_train.c:701: ctrl_tx_train_done = 0; // reset flag
   57F6 C2 22              3375 	clr	_ctrl_tx_train_done
                           3376 ;	../../shared/src/trx_train.c:702: ctrl_trx_ffe_updated = 0; // reset flag
   57F8 C2 25              3377 	clr	_ctrl_trx_ffe_updated
   57FA                    3378 00123$:
   57FA 22                 3379 	ret
                           3380 ;------------------------------------------------------------
                           3381 ;Allocation info for local variables in function 'update_dfe_res'
                           3382 ;------------------------------------------------------------
                           3383 ;dfe_res_f1_low            Allocated to registers r2 
                           3384 ;------------------------------------------------------------
                           3385 ;	../../shared/src/trx_train.c:710: void update_dfe_res()
                           3386 ;	-----------------------------------------
                           3387 ;	 function update_dfe_res
                           3388 ;	-----------------------------------------
   57FB                    3389 _update_dfe_res:
                           3390 ;	../../shared/src/trx_train.c:715: if (dfe_res_f1 == 0 || dfe_res_f1 == 1)
   57FB 90 00 50           3391 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   57FE E0                 3392 	movx	a,@dptr
   57FF 54 06              3393 	anl	a,#0x06
   5801 60 0B              3394 	jz	00104$
   5803 90 00 50           3395 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5806 E0                 3396 	movx	a,@dptr
   5807 03                 3397 	rr	a
   5808 54 03              3398 	anl	a,#0x03
   580A FA                 3399 	mov	r2,a
   580B BA 01 04           3400 	cjne	r2,#0x01,00105$
   580E                    3401 00104$:
                           3402 ;	../../shared/src/trx_train.c:717: dfe_res_f1_low = tag_DFE_RES_F1_LOW_01; //20
   580E 7A 14              3403 	mov	r2,#0x14
   5810 80 11              3404 	sjmp	00106$
   5812                    3405 00105$:
                           3406 ;	../../shared/src/trx_train.c:719: else if (dfe_res_f1 == 2)
   5812 90 00 50           3407 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5815 E0                 3408 	movx	a,@dptr
   5816 03                 3409 	rr	a
   5817 54 03              3410 	anl	a,#0x03
   5819 FB                 3411 	mov	r3,a
   581A BB 02 04           3412 	cjne	r3,#0x02,00102$
                           3413 ;	../../shared/src/trx_train.c:721: dfe_res_f1_low = tag_DFE_RES_F1_LOW_2; //22
   581D 7A 16              3414 	mov	r2,#0x16
   581F 80 02              3415 	sjmp	00106$
   5821                    3416 00102$:
                           3417 ;	../../shared/src/trx_train.c:725: dfe_res_f1_low = tag_DFE_RES_F1_LOW_3; //24
   5821 7A 18              3418 	mov	r2,#0x18
   5823                    3419 00106$:
                           3420 ;	../../shared/src/trx_train.c:728: if (abs(train.f1) < dfe_res_f1_low && dfe_f1_res_sel>0 )
   5823 90 66 46           3421 	mov	dptr,#(_train + 0x0006)
   5826 E0                 3422 	movx	a,@dptr
   5827 F5 82              3423 	mov	dpl,a
   5829 C0 02              3424 	push	ar2
   582B 78 41              3425 	mov	r0,#_abs
   582D 79 C1              3426 	mov	r1,#(_abs >> 8)
   582F 7A 02              3427 	mov	r2,#(_abs >> 16)
   5831 12 00 B3           3428 	lcall	__sdcc_banked_call
   5834 AB 82              3429 	mov	r3,dpl
   5836 D0 02              3430 	pop	ar2
   5838 C3                 3431 	clr	c
   5839 EB                 3432 	mov	a,r3
   583A 64 80              3433 	xrl	a,#0x80
   583C 8A F0              3434 	mov	b,r2
   583E 63 F0 80           3435 	xrl	b,#0x80
   5841 95 F0              3436 	subb	a,b
   5843 50 22              3437 	jnc	00112$
   5845 90 00 50           3438 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5848 E0                 3439 	movx	a,@dptr
   5849 54 06              3440 	anl	a,#0x06
   584B 60 1A              3441 	jz	00112$
                           3442 ;	../../shared/src/trx_train.c:730: dfe_f1_res_sel = dfe_f1_res_sel - 1; //	take min
   584D 90 00 50           3443 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5850 E0                 3444 	movx	a,@dptr
   5851 03                 3445 	rr	a
   5852 54 03              3446 	anl	a,#0x03
   5854 FA                 3447 	mov	r2,a
   5855 1A                 3448 	dec	r2
   5856 90 00 50           3449 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5859 EA                 3450 	mov	a,r2
   585A 2A                 3451 	add	a,r2
   585B 54 06              3452 	anl	a,#0x06
   585D F5 F0              3453 	mov	b,a
   585F E0                 3454 	movx	a,@dptr
   5860 54 F9              3455 	anl	a,#0xf9
   5862 45 F0              3456 	orl	a,b
   5864 F0                 3457 	movx	@dptr,a
   5865 80 44              3458 	sjmp	00113$
   5867                    3459 00112$:
                           3460 ;	../../shared/src/trx_train.c:732: else if (abs(train.f1) > tag_DFE_REA_F1_HIGH && dfe_f1_res_sel < tag_DFE_F1_RES_SEL_MAX)
   5867 90 66 46           3461 	mov	dptr,#(_train + 0x0006)
   586A E0                 3462 	movx	a,@dptr
   586B F5 82              3463 	mov	dpl,a
   586D 78 41              3464 	mov	r0,#_abs
   586F 79 C1              3465 	mov	r1,#(_abs >> 8)
   5871 7A 02              3466 	mov	r2,#(_abs >> 16)
   5873 12 00 B3           3467 	lcall	__sdcc_banked_call
   5876 AA 82              3468 	mov	r2,dpl
   5878 C3                 3469 	clr	c
   5879 74 9D              3470 	mov	a,#(0x1D ^ 0x80)
   587B 8A F0              3471 	mov	b,r2
   587D 63 F0 80           3472 	xrl	b,#0x80
   5880 95 F0              3473 	subb	a,b
   5882 50 27              3474 	jnc	00113$
   5884 90 00 50           3475 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5887 E0                 3476 	movx	a,@dptr
   5888 03                 3477 	rr	a
   5889 54 03              3478 	anl	a,#0x03
   588B FA                 3479 	mov	r2,a
   588C C3                 3480 	clr	c
   588D 64 80              3481 	xrl	a,#0x80
   588F 94 83              3482 	subb	a,#0x83
   5891 50 18              3483 	jnc	00113$
                           3484 ;	../../shared/src/trx_train.c:734: dfe_f1_res_sel = dfe_f1_res_sel + 1; //	take max
   5893 90 00 50           3485 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5896 E0                 3486 	movx	a,@dptr
   5897 03                 3487 	rr	a
   5898 54 03              3488 	anl	a,#0x03
   589A FA                 3489 	mov	r2,a
   589B 0A                 3490 	inc	r2
   589C 90 00 50           3491 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   589F EA                 3492 	mov	a,r2
   58A0 2A                 3493 	add	a,r2
   58A1 54 06              3494 	anl	a,#0x06
   58A3 F5 F0              3495 	mov	b,a
   58A5 E0                 3496 	movx	a,@dptr
   58A6 54 F9              3497 	anl	a,#0xf9
   58A8 45 F0              3498 	orl	a,b
   58AA F0                 3499 	movx	@dptr,a
   58AB                    3500 00113$:
                           3501 ;	../../shared/src/trx_train.c:737: if ( abs(train.f2) < tag_DFE_REA_F2_LOW && abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f234_res_sel>0 )
   58AB 90 66 5B           3502 	mov	dptr,#(_train + 0x001b)
   58AE E0                 3503 	movx	a,@dptr
   58AF F5 82              3504 	mov	dpl,a
   58B1 78 41              3505 	mov	r0,#_abs
   58B3 79 C1              3506 	mov	r1,#(_abs >> 8)
   58B5 7A 02              3507 	mov	r2,#(_abs >> 16)
   58B7 12 00 B3           3508 	lcall	__sdcc_banked_call
   58BA AA 82              3509 	mov	r2,dpl
   58BC C3                 3510 	clr	c
   58BD EA                 3511 	mov	a,r2
   58BE 64 80              3512 	xrl	a,#0x80
   58C0 94 94              3513 	subb	a,#0x94
   58C2 50 53              3514 	jnc	00121$
   58C4 90 66 5C           3515 	mov	dptr,#(_train + 0x001c)
   58C7 E0                 3516 	movx	a,@dptr
   58C8 F5 82              3517 	mov	dpl,a
   58CA 78 41              3518 	mov	r0,#_abs
   58CC 79 C1              3519 	mov	r1,#(_abs >> 8)
   58CE 7A 02              3520 	mov	r2,#(_abs >> 16)
   58D0 12 00 B3           3521 	lcall	__sdcc_banked_call
   58D3 AA 82              3522 	mov	r2,dpl
   58D5 C3                 3523 	clr	c
   58D6 EA                 3524 	mov	a,r2
   58D7 64 80              3525 	xrl	a,#0x80
   58D9 94 8A              3526 	subb	a,#0x8a
   58DB 50 3A              3527 	jnc	00121$
   58DD 90 66 4B           3528 	mov	dptr,#(_train + 0x000b)
   58E0 E0                 3529 	movx	a,@dptr
   58E1 F5 82              3530 	mov	dpl,a
   58E3 78 41              3531 	mov	r0,#_abs
   58E5 79 C1              3532 	mov	r1,#(_abs >> 8)
   58E7 7A 02              3533 	mov	r2,#(_abs >> 16)
   58E9 12 00 B3           3534 	lcall	__sdcc_banked_call
   58EC AA 82              3535 	mov	r2,dpl
   58EE C3                 3536 	clr	c
   58EF EA                 3537 	mov	a,r2
   58F0 64 80              3538 	xrl	a,#0x80
   58F2 94 94              3539 	subb	a,#0x94
   58F4 50 21              3540 	jnc	00121$
   58F6 90 00 50           3541 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   58F9 E0                 3542 	movx	a,@dptr
   58FA 30 E0 1A           3543 	jnb	acc.0,00121$
                           3544 ;	../../shared/src/trx_train.c:739: dfe_f234_res_sel = dfe_f234_res_sel -1; // take min;
   58FD 90 00 50           3545 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5900 E0                 3546 	movx	a,@dptr
   5901 54 01              3547 	anl	a,#0x01
   5903 FA                 3548 	mov	r2,a
   5904 7B 00              3549 	mov	r3,#0x00
   5906 1A                 3550 	dec	r2
   5907 BA FF 01           3551 	cjne	r2,#0xff,00172$
   590A 1B                 3552 	dec	r3
   590B                    3553 00172$:
   590B 90 00 50           3554 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   590E EA                 3555 	mov	a,r2
   590F 13                 3556 	rrc	a
   5910 E0                 3557 	movx	a,@dptr
   5911 92 E0              3558 	mov	acc.0,c
   5913 F0                 3559 	movx	@dptr,a
   5914 02 59 93           3560 	ljmp	00122$
   5917                    3561 00121$:
                           3562 ;	../../shared/src/trx_train.c:741: else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH || abs(train.f3) > tag_DFE_REA_F3_HIGH && abs(train.f4) > tag_DFE_REA_F4_HIGH && dfe_f234_res_sel < tag_DFE_F234_RES_SEL_MAX  )
   5917 90 66 5B           3563 	mov	dptr,#(_train + 0x001b)
   591A E0                 3564 	movx	a,@dptr
   591B F5 82              3565 	mov	dpl,a
   591D 78 41              3566 	mov	r0,#_abs
   591F 79 C1              3567 	mov	r1,#(_abs >> 8)
   5921 7A 02              3568 	mov	r2,#(_abs >> 16)
   5923 12 00 B3           3569 	lcall	__sdcc_banked_call
   5926 AA 82              3570 	mov	r2,dpl
   5928 C3                 3571 	clr	c
   5929 74 9D              3572 	mov	a,#(0x1D ^ 0x80)
   592B 8A F0              3573 	mov	b,r2
   592D 63 F0 80           3574 	xrl	b,#0x80
   5930 95 F0              3575 	subb	a,b
   5932 40 48              3576 	jc	00115$
   5934 90 66 5C           3577 	mov	dptr,#(_train + 0x001c)
   5937 E0                 3578 	movx	a,@dptr
   5938 F5 82              3579 	mov	dpl,a
   593A 78 41              3580 	mov	r0,#_abs
   593C 79 C1              3581 	mov	r1,#(_abs >> 8)
   593E 7A 02              3582 	mov	r2,#(_abs >> 16)
   5940 12 00 B3           3583 	lcall	__sdcc_banked_call
   5943 AA 82              3584 	mov	r2,dpl
   5945 C3                 3585 	clr	c
   5946 74 8D              3586 	mov	a,#(0x0D ^ 0x80)
   5948 8A F0              3587 	mov	b,r2
   594A 63 F0 80           3588 	xrl	b,#0x80
   594D 95 F0              3589 	subb	a,b
   594F 50 42              3590 	jnc	00122$
   5951 90 66 4B           3591 	mov	dptr,#(_train + 0x000b)
   5954 E0                 3592 	movx	a,@dptr
   5955 F5 82              3593 	mov	dpl,a
   5957 78 41              3594 	mov	r0,#_abs
   5959 79 C1              3595 	mov	r1,#(_abs >> 8)
   595B 7A 02              3596 	mov	r2,#(_abs >> 16)
   595D 12 00 B3           3597 	lcall	__sdcc_banked_call
   5960 AA 82              3598 	mov	r2,dpl
   5962 C3                 3599 	clr	c
   5963 74 9D              3600 	mov	a,#(0x1D ^ 0x80)
   5965 8A F0              3601 	mov	b,r2
   5967 63 F0 80           3602 	xrl	b,#0x80
   596A 95 F0              3603 	subb	a,b
   596C 50 25              3604 	jnc	00122$
   596E 90 00 50           3605 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5971 E0                 3606 	movx	a,@dptr
   5972 54 01              3607 	anl	a,#0x01
   5974 FA                 3608 	mov	r2,a
   5975 C3                 3609 	clr	c
   5976 64 80              3610 	xrl	a,#0x80
   5978 94 81              3611 	subb	a,#0x81
   597A 50 17              3612 	jnc	00122$
   597C                    3613 00115$:
                           3614 ;	../../shared/src/trx_train.c:743: dfe_f234_res_sel = dfe_f234_res_sel + 1;
   597C 90 00 50           3615 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   597F E0                 3616 	movx	a,@dptr
   5980 54 01              3617 	anl	a,#0x01
   5982 FA                 3618 	mov	r2,a
   5983 7B 00              3619 	mov	r3,#0x00
   5985 0A                 3620 	inc	r2
   5986 BA 00 01           3621 	cjne	r2,#0x00,00177$
   5989 0B                 3622 	inc	r3
   598A                    3623 00177$:
   598A 90 00 50           3624 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   598D EA                 3625 	mov	a,r2
   598E 13                 3626 	rrc	a
   598F E0                 3627 	movx	a,@dptr
   5990 92 E0              3628 	mov	acc.0,c
   5992 F0                 3629 	movx	@dptr,a
   5993                    3630 00122$:
                           3631 ;	../../shared/src/trx_train.c:746: if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && dfe_f567_res_sel>0)
   5993 90 66 4C           3632 	mov	dptr,#(_train + 0x000c)
   5996 E0                 3633 	movx	a,@dptr
   5997 F5 82              3634 	mov	dpl,a
   5999 78 41              3635 	mov	r0,#_abs
   599B 79 C1              3636 	mov	r1,#(_abs >> 8)
   599D 7A 02              3637 	mov	r2,#(_abs >> 16)
   599F 12 00 B3           3638 	lcall	__sdcc_banked_call
   59A2 AA 82              3639 	mov	r2,dpl
   59A4 C3                 3640 	clr	c
   59A5 EA                 3641 	mov	a,r2
   59A6 64 80              3642 	xrl	a,#0x80
   59A8 94 90              3643 	subb	a,#0x90
   59AA 50 52              3644 	jnc	00132$
   59AC 90 66 4D           3645 	mov	dptr,#(_train + 0x000d)
   59AF E0                 3646 	movx	a,@dptr
   59B0 F5 82              3647 	mov	dpl,a
   59B2 78 41              3648 	mov	r0,#_abs
   59B4 79 C1              3649 	mov	r1,#(_abs >> 8)
   59B6 7A 02              3650 	mov	r2,#(_abs >> 16)
   59B8 12 00 B3           3651 	lcall	__sdcc_banked_call
   59BB AA 82              3652 	mov	r2,dpl
   59BD C3                 3653 	clr	c
   59BE EA                 3654 	mov	a,r2
   59BF 64 80              3655 	xrl	a,#0x80
   59C1 94 90              3656 	subb	a,#0x90
   59C3 50 39              3657 	jnc	00132$
   59C5 90 66 4E           3658 	mov	dptr,#(_train + 0x000e)
   59C8 E0                 3659 	movx	a,@dptr
   59C9 F5 82              3660 	mov	dpl,a
   59CB 78 41              3661 	mov	r0,#_abs
   59CD 79 C1              3662 	mov	r1,#(_abs >> 8)
   59CF 7A 02              3663 	mov	r2,#(_abs >> 16)
   59D1 12 00 B3           3664 	lcall	__sdcc_banked_call
   59D4 AA 82              3665 	mov	r2,dpl
   59D6 C3                 3666 	clr	c
   59D7 EA                 3667 	mov	a,r2
   59D8 64 80              3668 	xrl	a,#0x80
   59DA 94 88              3669 	subb	a,#0x88
   59DC 50 20              3670 	jnc	00132$
   59DE 90 00 54           3671 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   59E1 E0                 3672 	movx	a,@dptr
   59E2 30 E7 19           3673 	jnb	acc.7,00132$
                           3674 ;	../../shared/src/trx_train.c:748: dfe_f567_res_sel = dfe_f567_res_sel -1; //take min;
   59E5 90 00 54           3675 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   59E8 E0                 3676 	movx	a,@dptr
   59E9 23                 3677 	rl	a
   59EA 54 01              3678 	anl	a,#0x01
   59EC FA                 3679 	mov	r2,a
   59ED 7B 00              3680 	mov	r3,#0x00
   59EF 1A                 3681 	dec	r2
   59F0 BA FF 01           3682 	cjne	r2,#0xff,00182$
   59F3 1B                 3683 	dec	r3
   59F4                    3684 00182$:
   59F4 90 00 54           3685 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   59F7 EA                 3686 	mov	a,r2
   59F8 13                 3687 	rrc	a
   59F9 E0                 3688 	movx	a,@dptr
   59FA 92 E7              3689 	mov	acc.7,c
   59FC F0                 3690 	movx	@dptr,a
   59FD 22                 3691 	ret
   59FE                    3692 00132$:
                           3693 ;	../../shared/src/trx_train.c:750: else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && dfe_f567_res_sel < tag_DFE_F567_RES_SEL_MAX )
   59FE 90 66 4C           3694 	mov	dptr,#(_train + 0x000c)
   5A01 E0                 3695 	movx	a,@dptr
   5A02 F5 82              3696 	mov	dpl,a
   5A04 78 41              3697 	mov	r0,#_abs
   5A06 79 C1              3698 	mov	r1,#(_abs >> 8)
   5A08 7A 02              3699 	mov	r2,#(_abs >> 16)
   5A0A 12 00 B3           3700 	lcall	__sdcc_banked_call
   5A0D AA 82              3701 	mov	r2,dpl
   5A0F C3                 3702 	clr	c
   5A10 74 9D              3703 	mov	a,#(0x1D ^ 0x80)
   5A12 8A F0              3704 	mov	b,r2
   5A14 63 F0 80           3705 	xrl	b,#0x80
   5A17 95 F0              3706 	subb	a,b
   5A19 40 49              3707 	jc	00126$
   5A1B 90 66 4D           3708 	mov	dptr,#(_train + 0x000d)
   5A1E E0                 3709 	movx	a,@dptr
   5A1F F5 82              3710 	mov	dpl,a
   5A21 78 41              3711 	mov	r0,#_abs
   5A23 79 C1              3712 	mov	r1,#(_abs >> 8)
   5A25 7A 02              3713 	mov	r2,#(_abs >> 16)
   5A27 12 00 B3           3714 	lcall	__sdcc_banked_call
   5A2A AA 82              3715 	mov	r2,dpl
   5A2C C3                 3716 	clr	c
   5A2D 74 9D              3717 	mov	a,#(0x1D ^ 0x80)
   5A2F 8A F0              3718 	mov	b,r2
   5A31 63 F0 80           3719 	xrl	b,#0x80
   5A34 95 F0              3720 	subb	a,b
   5A36 50 44              3721 	jnc	00137$
   5A38 90 66 4E           3722 	mov	dptr,#(_train + 0x000e)
   5A3B E0                 3723 	movx	a,@dptr
   5A3C F5 82              3724 	mov	dpl,a
   5A3E 78 41              3725 	mov	r0,#_abs
   5A40 79 C1              3726 	mov	r1,#(_abs >> 8)
   5A42 7A 02              3727 	mov	r2,#(_abs >> 16)
   5A44 12 00 B3           3728 	lcall	__sdcc_banked_call
   5A47 AA 82              3729 	mov	r2,dpl
   5A49 C3                 3730 	clr	c
   5A4A 74 8D              3731 	mov	a,#(0x0D ^ 0x80)
   5A4C 8A F0              3732 	mov	b,r2
   5A4E 63 F0 80           3733 	xrl	b,#0x80
   5A51 95 F0              3734 	subb	a,b
   5A53 50 27              3735 	jnc	00137$
   5A55 90 00 54           3736 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5A58 E0                 3737 	movx	a,@dptr
   5A59 23                 3738 	rl	a
   5A5A 54 01              3739 	anl	a,#0x01
   5A5C FA                 3740 	mov	r2,a
   5A5D C3                 3741 	clr	c
   5A5E 64 80              3742 	xrl	a,#0x80
   5A60 94 81              3743 	subb	a,#0x81
   5A62 50 18              3744 	jnc	00137$
   5A64                    3745 00126$:
                           3746 ;	../../shared/src/trx_train.c:752: dfe_f567_res_sel = dfe_f567_res_sel + 1;
   5A64 90 00 54           3747 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5A67 E0                 3748 	movx	a,@dptr
   5A68 23                 3749 	rl	a
   5A69 54 01              3750 	anl	a,#0x01
   5A6B FA                 3751 	mov	r2,a
   5A6C 7B 00              3752 	mov	r3,#0x00
   5A6E 0A                 3753 	inc	r2
   5A6F BA 00 01           3754 	cjne	r2,#0x00,00187$
   5A72 0B                 3755 	inc	r3
   5A73                    3756 00187$:
   5A73 90 00 54           3757 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5A76 EA                 3758 	mov	a,r2
   5A77 13                 3759 	rrc	a
   5A78 E0                 3760 	movx	a,@dptr
   5A79 92 E7              3761 	mov	acc.7,c
   5A7B F0                 3762 	movx	@dptr,a
   5A7C                    3763 00137$:
   5A7C 22                 3764 	ret
                           3765 ;------------------------------------------------------------
                           3766 ;Allocation info for local variables in function 'trx_train_end'
                           3767 ;------------------------------------------------------------
                           3768 ;num                       Allocated to registers r2 
                           3769 ;index                     Allocated to registers r3 
                           3770 ;------------------------------------------------------------
                           3771 ;	../../shared/src/trx_train.c:798: void trx_train_end()
                           3772 ;	-----------------------------------------
                           3773 ;	 function trx_train_end
                           3774 ;	-----------------------------------------
   5A7D                    3775 _trx_train_end:
                           3776 ;	../../shared/src/trx_train.c:807: if (TRAIN_SIM_EN)	{
   5A7D 90 E6 07           3777 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5A80 E0                 3778 	movx	a,@dptr
   5A81 30 E2 07           3779 	jnb	acc.2,00102$
                           3780 ;	../../shared/src/trx_train.c:808: ctrl_trx_train_pass = 1;
   5A84 90 67 19           3781 	mov	dptr,#_ctrl_trx_train_pass
   5A87 74 01              3782 	mov	a,#0x01
   5A89 F0                 3783 	movx	@dptr,a
                           3784 ;	../../shared/src/trx_train.c:809: return;
   5A8A 22                 3785 	ret
   5A8B                    3786 00102$:
                           3787 ;	../../shared/src/trx_train.c:812: if (tag_GAIN_TRAIN_END_EN)
   5A8B 90 60 3A           3788 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   5A8E E0                 3789 	movx	a,@dptr
   5A8F 30 E1 2D           3790 	jnb	acc.1,00104$
                           3791 ;	../../shared/src/trx_train.c:814: gain_train_with_c = 0;
   5A92 C2 24              3792 	clr	_gain_train_with_c
                           3793 ;	../../shared/src/trx_train.c:817: opt2train();
   5A94 12 60 02           3794 	lcall	_opt2train
                           3795 ;	../../shared/src/trx_train.c:818: ctrl_cdr_phase_on = 0;
   5A97 C2 1E              3796 	clr	_ctrl_cdr_phase_on
                           3797 ;	../../shared/src/trx_train.c:820: dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_END;
   5A99 90 60 7B           3798 	mov	dptr,#(_DFE_CONTROL_6 + 0x0003)
   5A9C E0                 3799 	movx	a,@dptr
   5A9D 90 66 C1           3800 	mov	dptr,#_dfe_res_f0a_low_thres_01
   5AA0 F0                 3801 	movx	@dptr,a
                           3802 ;	../../shared/src/trx_train.c:821: dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_END;
   5AA1 90 60 74           3803 	mov	dptr,#_TRAIN_PARA_3
   5AA4 E0                 3804 	movx	a,@dptr
   5AA5 90 66 C2           3805 	mov	dptr,#_dfe_res_f0a_low_thres_2
   5AA8 F0                 3806 	movx	@dptr,a
                           3807 ;	../../shared/src/trx_train.c:822: dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_END;
   5AA9 90 60 75           3808 	mov	dptr,#(_TRAIN_PARA_3 + 0x0001)
   5AAC E0                 3809 	movx	a,@dptr
   5AAD 90 66 C3           3810 	mov	dptr,#_dfe_res_f0a_low_thres_3
   5AB0 F0                 3811 	movx	@dptr,a
                           3812 ;	../../shared/src/trx_train.c:823: dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_END;
   5AB1 90 60 6C           3813 	mov	dptr,#_TRAIN_PARA_1
   5AB4 E0                 3814 	movx	a,@dptr
   5AB5 90 66 C4           3815 	mov	dptr,#_dfe_res_f0a_high_thres
   5AB8 F0                 3816 	movx	@dptr,a
                           3817 ;	../../shared/src/trx_train.c:825: gain_train();
   5AB9 12 5B B0           3818 	lcall	_gain_train
                           3819 ;	../../shared/src/trx_train.c:826: train2opt();
   5ABC 12 60 54           3820 	lcall	_train2opt
   5ABF                    3821 00104$:
                           3822 ;	../../shared/src/trx_train.c:830: if (tag_DFE_ISI_RES_ADAPT_EN) //1
   5ABF 90 60 8E           3823 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   5AC2 E0                 3824 	movx	a,@dptr
   5AC3 30 E3 27           3825 	jnb	acc.3,00109$
                           3826 ;	../../shared/src/trx_train.c:840: if(tx_status_pcie_mode) num = 1; 			
   5AC6 30 27 04           3827 	jnb	_tx_status_pcie_mode,00106$
   5AC9 7A 01              3828 	mov	r2,#0x01
   5ACB 80 02              3829 	sjmp	00107$
   5ACD                    3830 00106$:
                           3831 ;	../../shared/src/trx_train.c:841: else num = 4;
   5ACD 7A 04              3832 	mov	r2,#0x04
   5ACF                    3833 00107$:
                           3834 ;	../../shared/src/trx_train.c:844: ctrl_cdr_phase_on = 0;
   5ACF C2 1E              3835 	clr	_ctrl_cdr_phase_on
                           3836 ;	../../shared/src/trx_train.c:845: for (index = 0; index < num; index ++)
   5AD1 7B 00              3837 	mov	r3,#0x00
   5AD3                    3838 00118$:
   5AD3 EB                 3839 	mov	a,r3
   5AD4 B5 02 00           3840 	cjne	a,ar2,00139$
   5AD7                    3841 00139$:
   5AD7 50 11              3842 	jnc	00121$
                           3843 ;	../../shared/src/trx_train.c:847: dfe_cdr_phase_opt();
   5AD9 C0 02              3844 	push	ar2
   5ADB C0 03              3845 	push	ar3
   5ADD 12 5D C4           3846 	lcall	_dfe_cdr_phase_opt
                           3847 ;	../../shared/src/trx_train.c:848: update_dfe_res();
   5AE0 12 57 FB           3848 	lcall	_update_dfe_res
   5AE3 D0 03              3849 	pop	ar3
   5AE5 D0 02              3850 	pop	ar2
                           3851 ;	../../shared/src/trx_train.c:845: for (index = 0; index < num; index ++)
   5AE7 0B                 3852 	inc	r3
   5AE8 80 E9              3853 	sjmp	00118$
   5AEA                    3854 00121$:
                           3855 ;	../../shared/src/trx_train.c:850: train2opt();
   5AEA 12 60 54           3856 	lcall	_train2opt
   5AED                    3857 00109$:
                           3858 ;	../../shared/src/trx_train.c:867: if((ph_control_mode == 2 || ph_control_mode == 3 ) && lnx_CDRPHASE_OPT_EN_LANE) {  
   5AED 90 66 F8           3859 	mov	dptr,#_ph_control_mode
   5AF0 E0                 3860 	movx	a,@dptr
   5AF1 FA                 3861 	mov	r2,a
   5AF2 BA 02 02           3862 	cjne	r2,#0x02,00141$
   5AF5 80 03              3863 	sjmp	00113$
   5AF7                    3864 00141$:
   5AF7 BA 03 10           3865 	cjne	r2,#0x03,00111$
   5AFA                    3866 00113$:
   5AFA 90 60 4D           3867 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   5AFD E0                 3868 	movx	a,@dptr
   5AFE 30 E7 09           3869 	jnb	acc.7,00111$
                           3870 ;	../../shared/src/trx_train.c:868: advanced_clk_align();  
   5B01 78 B2              3871 	mov	r0,#_advanced_clk_align
   5B03 79 BF              3872 	mov	r1,#(_advanced_clk_align >> 8)
   5B05 7A 01              3873 	mov	r2,#(_advanced_clk_align >> 16)
   5B07 12 00 B3           3874 	lcall	__sdcc_banked_call
   5B0A                    3875 00111$:
                           3876 ;	../../shared/src/trx_train.c:871: lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0 = (uint8_t)train.phase_offset_data;
   5B0A 90 66 61           3877 	mov	dptr,#(_train + 0x0021)
   5B0D E0                 3878 	movx	a,@dptr
   5B0E 90 60 6B           3879 	mov	dptr,#(_TRAIN_PARA_0 + 0x0003)
   5B11 F0                 3880 	movx	@dptr,a
                           3881 ;	../../shared/src/trx_train.c:872: lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0 = (uint8_t)train.phase_offset_esm;
   5B12 90 66 62           3882 	mov	dptr,#(_train + 0x0022)
   5B15 E0                 3883 	movx	a,@dptr
   5B16 90 60 6A           3884 	mov	dptr,#(_TRAIN_PARA_0 + 0x0002)
   5B19 F0                 3885 	movx	@dptr,a
                           3886 ;	../../shared/src/trx_train.c:874: ph_control_mode = 0;
   5B1A 90 66 F8           3887 	mov	dptr,#_ph_control_mode
   5B1D E4                 3888 	clr	a
   5B1E F0                 3889 	movx	@dptr,a
                           3890 ;	../../shared/src/trx_train.c:877: set_ph_mode(); 
   5B1F 78 3B              3891 	mov	r0,#_set_ph_mode
   5B21 79 97              3892 	mov	r1,#(_set_ph_mode >> 8)
   5B23 7A 02              3893 	mov	r2,#(_set_ph_mode >> 16)
   5B25 12 00 B3           3894 	lcall	__sdcc_banked_call
                           3895 ;	../../shared/src/trx_train.c:878: phase_control_func();	
   5B28 12 2D F3           3896 	lcall	_phase_control_func
                           3897 ;	../../shared/src/trx_train.c:884: if(!tx_status_pcie_mode) {
   5B2B 20 27 4C           3898 	jb	_tx_status_pcie_mode,00115$
                           3899 ;	../../shared/src/trx_train.c:885: dfe_adaptation();
   5B2E 78 AD              3900 	mov	r0,#_dfe_adaptation
   5B30 79 9F              3901 	mov	r1,#(_dfe_adaptation >> 8)
   5B32 7A 01              3902 	mov	r2,#(_dfe_adaptation >> 16)
   5B34 12 00 B3           3903 	lcall	__sdcc_banked_call
                           3904 ;	../../shared/src/trx_train.c:886: train2opt();
   5B37 12 60 54           3905 	lcall	_train2opt
                           3906 ;	../../shared/src/trx_train.c:889: adapt_data_en = 1;
   5B3A D2 0D              3907 	setb	_adapt_data_en
                           3908 ;	../../shared/src/trx_train.c:890: adapt_slicer_en = 1;
   5B3C D2 0C              3909 	setb	_adapt_slicer_en
                           3910 ;	../../shared/src/trx_train.c:891: dfe_adaptation();
   5B3E 78 AD              3911 	mov	r0,#_dfe_adaptation
   5B40 79 9F              3912 	mov	r1,#(_dfe_adaptation >> 8)
   5B42 7A 01              3913 	mov	r2,#(_dfe_adaptation >> 16)
   5B44 12 00 B3           3914 	lcall	__sdcc_banked_call
                           3915 ;	../../shared/src/trx_train.c:892: train2opt();			
   5B47 12 60 54           3916 	lcall	_train2opt
                           3917 ;	../../shared/src/trx_train.c:897: reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
   5B4A 90 02 64           3918 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   5B4D E0                 3919 	movx	a,@dptr
   5B4E 54 E7              3920 	anl	a,#0xe7
   5B50 44 08              3921 	orl	a,#0x08
   5B52 F0                 3922 	movx	@dptr,a
                           3923 ;	../../shared/src/trx_train.c:898: reg_FFE_PULSE_DIV_LANE_2_0 = 3; //5;
   5B53 90 02 0C           3924 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   5B56 E0                 3925 	movx	a,@dptr
   5B57 54 8F              3926 	anl	a,#0x8f
   5B59 44 30              3927 	orl	a,#0x30
   5B5B F0                 3928 	movx	@dptr,a
                           3929 ;	../../shared/src/trx_train.c:902: cds_tb = cds_table[CDS_DFE_OFST];	
   5B5C 90 00 E2           3930 	mov	dptr,#(_cds_table + 0x0004)
   5B5F E4                 3931 	clr	a
   5B60 93                 3932 	movc	a,@a+dptr
   5B61 FA                 3933 	mov	r2,a
   5B62 A3                 3934 	inc	dptr
   5B63 E4                 3935 	clr	a
   5B64 93                 3936 	movc	a,@a+dptr
   5B65 FB                 3937 	mov	r3,a
   5B66 90 61 74           3938 	mov	dptr,#_CDS_READ_MISC1
   5B69 EA                 3939 	mov	a,r2
   5B6A F0                 3940 	movx	@dptr,a
   5B6B A3                 3941 	inc	dptr
   5B6C EB                 3942 	mov	a,r3
   5B6D F0                 3943 	movx	@dptr,a
                           3944 ;	../../shared/src/trx_train.c:903: dfe_adaptation();
   5B6E 78 AD              3945 	mov	r0,#_dfe_adaptation
   5B70 79 9F              3946 	mov	r1,#(_dfe_adaptation >> 8)
   5B72 7A 01              3947 	mov	r2,#(_dfe_adaptation >> 16)
   5B74 12 00 B3           3948 	lcall	__sdcc_banked_call
                           3949 ;	../../shared/src/trx_train.c:904: train2opt();				
   5B77 12 60 54           3950 	lcall	_train2opt
   5B7A                    3951 00115$:
                           3952 ;	../../shared/src/trx_train.c:908: ctrl_trx_train_pass = opt.good_eo; // return training pass
   5B7A 90 66 99           3953 	mov	dptr,#(_opt + 0x002a)
   5B7D E0                 3954 	movx	a,@dptr
   5B7E FA                 3955 	mov	r2,a
   5B7F 90 67 19           3956 	mov	dptr,#_ctrl_trx_train_pass
   5B82 F0                 3957 	movx	@dptr,a
                           3958 ;	../../shared/src/trx_train.c:909: lnx_RD_DFE_F0D_LANE_7_0 = opt.eo;
   5B83 90 66 8E           3959 	mov	dptr,#(_opt + 0x001f)
   5B86 E0                 3960 	movx	a,@dptr
   5B87 FB                 3961 	mov	r3,a
   5B88 90 60 A1           3962 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0001)
   5B8B F0                 3963 	movx	@dptr,a
                           3964 ;	../../shared/src/trx_train.c:910: reg_MCU_DEBUGB_LANE_7_0 = ctrl_trx_train_pass;
   5B8C 90 22 BF           3965 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0003)
   5B8F EA                 3966 	mov	a,r2
   5B90 F0                 3967 	movx	@dptr,a
                           3968 ;	../../shared/src/trx_train.c:912: if(ctrl_trx_train_pass) {
   5B91 EA                 3969 	mov	a,r2
   5B92 60 1B              3970 	jz	00122$
                           3971 ;	../../shared/src/trx_train.c:913: save_train(do_train, 1, 1, 1); //save train result
   5B94 A2 06              3972 	mov	c,_do_train
   5B96 E4                 3973 	clr	a
   5B97 33                 3974 	rlc	a
   5B98 F5 82              3975 	mov	dpl,a
   5B9A 74 01              3976 	mov	a,#0x01
   5B9C C0 E0              3977 	push	acc
   5B9E 74 01              3978 	mov	a,#0x01
   5BA0 C0 E0              3979 	push	acc
   5BA2 74 01              3980 	mov	a,#0x01
   5BA4 C0 E0              3981 	push	acc
   5BA6 12 61 8D           3982 	lcall	_save_train
   5BA9 15 81              3983 	dec	sp
   5BAB 15 81              3984 	dec	sp
   5BAD 15 81              3985 	dec	sp
   5BAF                    3986 00122$:
   5BAF 22                 3987 	ret
                           3988 ;------------------------------------------------------------
                           3989 ;Allocation info for local variables in function 'gain_train'
                           3990 ;------------------------------------------------------------
                           3991 ;step_number               Allocated to stack - offset 1
                           3992 ;gain_index                Allocated to stack - offset 2
                           3993 ;gain_table_size           Allocated to stack - offset 3
                           3994 ;dfe_res_f0a_low_thres     Allocated to registers r7 
                           3995 ;gain_table_index          Allocated to registers r4 
                           3996 ;------------------------------------------------------------
                           3997 ;	../../shared/src/trx_train.c:934: void gain_train(void)  //todo
                           3998 ;	-----------------------------------------
                           3999 ;	 function gain_train
                           4000 ;	-----------------------------------------
   5BB0                    4001 _gain_train:
   5BB0 C0 18              4002 	push	_bp
   5BB2 85 81 18           4003 	mov	_bp,sp
   5BB5 05 81              4004 	inc	sp
   5BB7 05 81              4005 	inc	sp
   5BB9 05 81              4006 	inc	sp
                           4007 ;	../../shared/src/trx_train.c:937: uint8_t gain_index = 0; //largest gain + smallest dfe_res
   5BBB A8 18              4008 	mov	r0,_bp
   5BBD 08                 4009 	inc	r0
   5BBE 08                 4010 	inc	r0
   5BBF 76 00              4011 	mov	@r0,#0x00
                           4012 ;	../../shared/src/trx_train.c:952: if(tx_status_pcie_mode && cmx_DIS_SHRT_PCIE_GAIN_TRAIN==0) {
   5BC1 30 27 22           4013 	jnb	_tx_status_pcie_mode,00102$
   5BC4 90 E6 13           4014 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   5BC7 E0                 4015 	movx	a,@dptr
   5BC8 20 E5 1B           4016 	jb	acc.5,00102$
                           4017 ;	../../shared/src/trx_train.c:954: gain_table_size = (gain_train_with_c? 3: gt0_size);
   5BCB 30 24 04           4018 	jnb	_gain_train_with_c,00133$
   5BCE 7B 03              4019 	mov	r3,#0x03
   5BD0 80 02              4020 	sjmp	00134$
   5BD2                    4021 00133$:
   5BD2 7B 04              4022 	mov	r3,#0x04
   5BD4                    4023 00134$:
   5BD4 E5 18              4024 	mov	a,_bp
   5BD6 24 03              4025 	add	a,#0x03
   5BD8 F8                 4026 	mov	r0,a
   5BD9 A6 03              4027 	mov	@r0,ar3
                           4028 ;	../../shared/src/trx_train.c:955: gain_table_index = (gain_train_with_c?4:0);
   5BDB 30 24 04           4029 	jnb	_gain_train_with_c,00135$
   5BDE 7C 04              4030 	mov	r4,#0x04
   5BE0 80 02              4031 	sjmp	00136$
   5BE2                    4032 00135$:
   5BE2 7C 00              4033 	mov	r4,#0x00
   5BE4                    4034 00136$:
   5BE4 80 1B              4035 	sjmp	00156$
   5BE6                    4036 00102$:
                           4037 ;	../../shared/src/trx_train.c:960: gain_table_size = (gain_train_with_c? gt1_size: gt0_size);
   5BE6 30 24 04           4038 	jnb	_gain_train_with_c,00137$
   5BE9 7D 13              4039 	mov	r5,#0x13
   5BEB 80 02              4040 	sjmp	00138$
   5BED                    4041 00137$:
   5BED 7D 04              4042 	mov	r5,#0x04
   5BEF                    4043 00138$:
   5BEF E5 18              4044 	mov	a,_bp
   5BF1 24 03              4045 	add	a,#0x03
   5BF3 F8                 4046 	mov	r0,a
   5BF4 A6 05              4047 	mov	@r0,ar5
                           4048 ;	../../shared/src/trx_train.c:961: gain_table_index = (gain_train_with_c?1:0);
   5BF6 30 24 04           4049 	jnb	_gain_train_with_c,00139$
   5BF9 7D 01              4050 	mov	r5,#0x01
   5BFB 80 02              4051 	sjmp	00140$
   5BFD                    4052 00139$:
   5BFD 7D 00              4053 	mov	r5,#0x00
   5BFF                    4054 00140$:
   5BFF 8D 04              4055 	mov	ar4,r5
                           4056 ;	../../shared/src/trx_train.c:969: while (step_number < gain_table_size) //(gain_table_size + 1)
   5C01                    4057 00156$:
   5C01 E4                 4058 	clr	a
   5C02 BC 00 01           4059 	cjne	r4,#0x00,00167$
   5C05 04                 4060 	inc	a
   5C06                    4061 00167$:
   5C06 FD                 4062 	mov	r5,a
   5C07 E4                 4063 	clr	a
   5C08 BC 01 01           4064 	cjne	r4,#0x01,00169$
   5C0B 04                 4065 	inc	a
   5C0C                    4066 00169$:
   5C0C FE                 4067 	mov	r6,a
   5C0D E4                 4068 	clr	a
   5C0E BC 04 01           4069 	cjne	r4,#0x04,00171$
   5C11 04                 4070 	inc	a
   5C12                    4071 00171$:
   5C12 FC                 4072 	mov	r4,a
   5C13 A8 18              4073 	mov	r0,_bp
   5C15 08                 4074 	inc	r0
   5C16 76 00              4075 	mov	@r0,#0x00
   5C18                    4076 00128$:
   5C18 A8 18              4077 	mov	r0,_bp
   5C1A 08                 4078 	inc	r0
   5C1B E5 18              4079 	mov	a,_bp
   5C1D 24 03              4080 	add	a,#0x03
   5C1F F9                 4081 	mov	r1,a
   5C20 C3                 4082 	clr	c
   5C21 E6                 4083 	mov	a,@r0
   5C22 97                 4084 	subb	a,@r1
   5C23 40 03              4085 	jc	00173$
   5C25 02 5D 71           4086 	ljmp	00131$
   5C28                    4087 00173$:
                           4088 ;	../../shared/src/trx_train.c:971: switch (gain_table_index)
   5C28 ED                 4089 	mov	a,r5
   5C29 70 08              4090 	jnz	00105$
   5C2B EE                 4091 	mov	a,r6
   5C2C 70 23              4092 	jnz	00106$
   5C2E EC                 4093 	mov	a,r4
   5C2F 70 4B              4094 	jnz	00107$
                           4095 ;	../../shared/src/trx_train.c:973: case 0:
   5C31 80 5C              4096 	sjmp	00108$
   5C33                    4097 00105$:
                           4098 ;	../../shared/src/trx_train.c:974: ctrl_step_res_dfe = gt0_dfe_res[gain_index];
   5C33 C0 04              4099 	push	ar4
   5C35 A8 18              4100 	mov	r0,_bp
   5C37 08                 4101 	inc	r0
   5C38 08                 4102 	inc	r0
   5C39 E6                 4103 	mov	a,@r0
   5C3A 90 01 1D           4104 	mov	dptr,#_gt0_dfe_res
   5C3D 93                 4105 	movc	a,@a+dptr
   5C3E 90 00 50           4106 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5C41 C4                 4107 	swap	a
   5C42 03                 4108 	rr	a
   5C43 54 18              4109 	anl	a,#(0xf8&0x18)
   5C45 F5 F0              4110 	mov	b,a
   5C47 E0                 4111 	movx	a,@dptr
   5C48 54 E7              4112 	anl	a,#0xe7
   5C4A 45 F0              4113 	orl	a,b
   5C4C F0                 4114 	movx	@dptr,a
                           4115 ;	../../shared/src/trx_train.c:975: break;
   5C4D D0 04              4116 	pop	ar4
                           4117 ;	../../shared/src/trx_train.c:976: case 1: //
   5C4F 80 57              4118 	sjmp	00109$
   5C51                    4119 00106$:
                           4120 ;	../../shared/src/trx_train.c:977: ctrl_step_res_dfe = gt1_dfe_res[gain_index];
   5C51 C0 04              4121 	push	ar4
   5C53 A8 18              4122 	mov	r0,_bp
   5C55 08                 4123 	inc	r0
   5C56 08                 4124 	inc	r0
   5C57 E6                 4125 	mov	a,@r0
   5C58 90 01 21           4126 	mov	dptr,#_gt1_dfe_res
   5C5B 93                 4127 	movc	a,@a+dptr
   5C5C 90 00 50           4128 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5C5F C4                 4129 	swap	a
   5C60 03                 4130 	rr	a
   5C61 54 18              4131 	anl	a,#(0xf8&0x18)
   5C63 F5 F0              4132 	mov	b,a
   5C65 E0                 4133 	movx	a,@dptr
   5C66 54 E7              4134 	anl	a,#0xe7
   5C68 45 F0              4135 	orl	a,b
   5C6A F0                 4136 	movx	@dptr,a
                           4137 ;	../../shared/src/trx_train.c:978: train_c = gt1_c[gain_index];
   5C6B A8 18              4138 	mov	r0,_bp
   5C6D 08                 4139 	inc	r0
   5C6E 08                 4140 	inc	r0
   5C6F E6                 4141 	mov	a,@r0
   5C70 90 01 34           4142 	mov	dptr,#_gt1_c
   5C73 93                 4143 	movc	a,@a+dptr
   5C74 90 66 C5           4144 	mov	dptr,#_train_c
   5C77 F0                 4145 	movx	@dptr,a
                           4146 ;	../../shared/src/trx_train.c:979: break;
   5C78 D0 04              4147 	pop	ar4
                           4148 ;	../../shared/src/trx_train.c:991: case 4: //
   5C7A 80 2C              4149 	sjmp	00109$
   5C7C                    4150 00107$:
                           4151 ;	../../shared/src/trx_train.c:993: train_c = gt1_c_pcie[gain_index];
   5C7C C0 04              4152 	push	ar4
   5C7E A8 18              4153 	mov	r0,_bp
   5C80 08                 4154 	inc	r0
   5C81 08                 4155 	inc	r0
   5C82 E6                 4156 	mov	a,@r0
   5C83 90 01 7C           4157 	mov	dptr,#_gt1_c_pcie
   5C86 93                 4158 	movc	a,@a+dptr
   5C87 90 66 C5           4159 	mov	dptr,#_train_c
   5C8A F0                 4160 	movx	@dptr,a
                           4161 ;	../../shared/src/trx_train.c:994: break;
   5C8B D0 04              4162 	pop	ar4
                           4163 ;	../../shared/src/trx_train.c:995: default:
   5C8D 80 19              4164 	sjmp	00109$
   5C8F                    4165 00108$:
                           4166 ;	../../shared/src/trx_train.c:996: ctrl_step_res_dfe = gt0_dfe_res[gain_index];
   5C8F A8 18              4167 	mov	r0,_bp
   5C91 08                 4168 	inc	r0
   5C92 08                 4169 	inc	r0
   5C93 E6                 4170 	mov	a,@r0
   5C94 90 01 1D           4171 	mov	dptr,#_gt0_dfe_res
   5C97 93                 4172 	movc	a,@a+dptr
   5C98 FF                 4173 	mov	r7,a
   5C99 90 00 50           4174 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5C9C C4                 4175 	swap	a
   5C9D 03                 4176 	rr	a
   5C9E 54 18              4177 	anl	a,#(0xf8&0x18)
   5CA0 F5 F0              4178 	mov	b,a
   5CA2 E0                 4179 	movx	a,@dptr
   5CA3 54 E7              4180 	anl	a,#0xe7
   5CA5 45 F0              4181 	orl	a,b
   5CA7 F0                 4182 	movx	@dptr,a
                           4183 ;	../../shared/src/trx_train.c:997: }
   5CA8                    4184 00109$:
                           4185 ;	../../shared/src/trx_train.c:999: lnx_GAIN_TRAIN_INDEX_RD_LANE_7_0 = train_c;
   5CA8 90 66 C5           4186 	mov	dptr,#_train_c
   5CAB E0                 4187 	movx	a,@dptr
   5CAC 90 60 86           4188 	mov	dptr,#(_DFE_TEST_4 + 0x0002)
   5CAF F0                 4189 	movx	@dptr,a
                           4190 ;	../../shared/src/trx_train.c:1000: Set_Rx_FFE();
   5CB0 C0 04              4191 	push	ar4
   5CB2 C0 05              4192 	push	ar5
   5CB4 C0 06              4193 	push	ar6
   5CB6 12 60 A4           4194 	lcall	_Set_Rx_FFE
                           4195 ;	../../shared/src/trx_train.c:1005: dfe_cdr_phase_opt();	
   5CB9 12 5D C4           4196 	lcall	_dfe_cdr_phase_opt
   5CBC D0 06              4197 	pop	ar6
   5CBE D0 05              4198 	pop	ar5
   5CC0 D0 04              4199 	pop	ar4
                           4200 ;	../../shared/src/trx_train.c:1006: step_number ++;
   5CC2 A8 18              4201 	mov	r0,_bp
   5CC4 08                 4202 	inc	r0
   5CC5 06                 4203 	inc	@r0
                           4204 ;	../../shared/src/trx_train.c:1013: if (dfe_res_f0 == 0 || dfe_res_f0 == 1)
   5CC6 90 00 50           4205 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5CC9 E0                 4206 	movx	a,@dptr
   5CCA 54 18              4207 	anl	a,#0x18
   5CCC 60 0C              4208 	jz	00113$
   5CCE 90 00 50           4209 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5CD1 E0                 4210 	movx	a,@dptr
   5CD2 C4                 4211 	swap	a
   5CD3 23                 4212 	rl	a
   5CD4 54 03              4213 	anl	a,#0x03
   5CD6 FF                 4214 	mov	r7,a
   5CD7 BF 01 07           4215 	cjne	r7,#0x01,00114$
   5CDA                    4216 00113$:
                           4217 ;	../../shared/src/trx_train.c:1015: dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_01; //36
   5CDA 90 66 C1           4218 	mov	dptr,#_dfe_res_f0a_low_thres_01
   5CDD E0                 4219 	movx	a,@dptr
   5CDE FF                 4220 	mov	r7,a
   5CDF 80 23              4221 	sjmp	00115$
   5CE1                    4222 00114$:
                           4223 ;	../../shared/src/trx_train.c:1017: else if (dfe_res_f0 == 2)
   5CE1 C0 04              4224 	push	ar4
   5CE3 90 00 50           4225 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5CE6 E0                 4226 	movx	a,@dptr
   5CE7 C4                 4227 	swap	a
   5CE8 23                 4228 	rl	a
   5CE9 54 03              4229 	anl	a,#0x03
   5CEB FC                 4230 	mov	r4,a
   5CEC BC 02 02           4231 	cjne	r4,#0x02,00180$
   5CEF 80 04              4232 	sjmp	00181$
   5CF1                    4233 00180$:
   5CF1 D0 04              4234 	pop	ar4
   5CF3 80 09              4235 	sjmp	00111$
   5CF5                    4236 00181$:
                           4237 ;	../../shared/src/trx_train.c:1019: dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_2; //41
   5CF5 90 66 C2           4238 	mov	dptr,#_dfe_res_f0a_low_thres_2
   5CF8 E0                 4239 	movx	a,@dptr
   5CF9 FF                 4240 	mov	r7,a
   5CFA D0 04              4241 	pop	ar4
   5CFC 80 06              4242 	sjmp	00115$
   5CFE                    4243 00111$:
                           4244 ;	../../shared/src/trx_train.c:1023: dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_3; //44			
   5CFE 90 66 C3           4245 	mov	dptr,#_dfe_res_f0a_low_thres_3
   5D01 E0                 4246 	movx	a,@dptr
   5D02 FB                 4247 	mov	r3,a
   5D03 FF                 4248 	mov	r7,a
   5D04                    4249 00115$:
                           4250 ;	../../shared/src/trx_train.c:1026: if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && (gain_index >=1) )
   5D04 90 66 58           4251 	mov	dptr,#(_train + 0x0018)
   5D07 E0                 4252 	movx	a,@dptr
   5D08 FB                 4253 	mov	r3,a
   5D09 B5 07 00           4254 	cjne	a,ar7,00182$
   5D0C                    4255 00182$:
   5D0C 50 17              4256 	jnc	00124$
   5D0E 90 66 67           4257 	mov	dptr,#(_train + 0x0027)
   5D11 E0                 4258 	movx	a,@dptr
   5D12 70 11              4259 	jnz	00124$
   5D14 A8 18              4260 	mov	r0,_bp
   5D16 08                 4261 	inc	r0
   5D17 08                 4262 	inc	r0
   5D18 B6 01 00           4263 	cjne	@r0,#0x01,00185$
   5D1B                    4264 00185$:
   5D1B 40 08              4265 	jc	00124$
                           4266 ;	../../shared/src/trx_train.c:1028: gain_index --;
   5D1D A8 18              4267 	mov	r0,_bp
   5D1F 08                 4268 	inc	r0
   5D20 08                 4269 	inc	r0
   5D21 16                 4270 	dec	@r0
   5D22 02 5C 18           4271 	ljmp	00128$
   5D25                    4272 00124$:
                           4273 ;	../../shared/src/trx_train.c:1030: else if (((train.f0a_max >= dfe_res_f0a_high_thres) || ((train.f0a_max <= dfe_res_f0a_low_thres) && train.dfe_saturate)) 
   5D25 C0 04              4274 	push	ar4
   5D27 90 66 C4           4275 	mov	dptr,#_dfe_res_f0a_high_thres
   5D2A E0                 4276 	movx	a,@dptr
   5D2B FC                 4277 	mov	r4,a
   5D2C EB                 4278 	mov	a,r3
   5D2D B5 04 00           4279 	cjne	a,ar4,00187$
   5D30                    4280 00187$:
   5D30 D0 04              4281 	pop	ar4
   5D32 50 0C              4282 	jnc	00122$
   5D34 EF                 4283 	mov	a,r7
   5D35 B5 03 00           4284 	cjne	a,ar3,00189$
   5D38                    4285 00189$:
   5D38 40 37              4286 	jc	00131$
   5D3A 90 66 67           4287 	mov	dptr,#(_train + 0x0027)
   5D3D E0                 4288 	movx	a,@dptr
   5D3E 60 31              4289 	jz	00131$
   5D40                    4290 00122$:
                           4291 ;	../../shared/src/trx_train.c:1031: && (gain_index < (gain_table_size-1)))
   5D40 C0 04              4292 	push	ar4
   5D42 E5 18              4293 	mov	a,_bp
   5D44 24 03              4294 	add	a,#0x03
   5D46 F8                 4295 	mov	r0,a
   5D47 86 03              4296 	mov	ar3,@r0
   5D49 7F 00              4297 	mov	r7,#0x00
   5D4B 1B                 4298 	dec	r3
   5D4C BB FF 01           4299 	cjne	r3,#0xff,00192$
   5D4F 1F                 4300 	dec	r7
   5D50                    4301 00192$:
   5D50 A8 18              4302 	mov	r0,_bp
   5D52 08                 4303 	inc	r0
   5D53 08                 4304 	inc	r0
   5D54 86 04              4305 	mov	ar4,@r0
   5D56 7A 00              4306 	mov	r2,#0x00
   5D58 C3                 4307 	clr	c
   5D59 EC                 4308 	mov	a,r4
   5D5A 9B                 4309 	subb	a,r3
   5D5B EA                 4310 	mov	a,r2
   5D5C 64 80              4311 	xrl	a,#0x80
   5D5E 8F F0              4312 	mov	b,r7
   5D60 63 F0 80           4313 	xrl	b,#0x80
   5D63 95 F0              4314 	subb	a,b
   5D65 D0 04              4315 	pop	ar4
   5D67 50 08              4316 	jnc	00131$
                           4317 ;	../../shared/src/trx_train.c:1033: gain_index ++;
   5D69 A8 18              4318 	mov	r0,_bp
   5D6B 08                 4319 	inc	r0
   5D6C 08                 4320 	inc	r0
   5D6D 06                 4321 	inc	@r0
                           4322 ;	../../shared/src/trx_train.c:1037: break;
   5D6E 02 5C 18           4323 	ljmp	00128$
   5D71                    4324 00131$:
   5D71 85 18 81           4325 	mov	sp,_bp
   5D74 D0 18              4326 	pop	_bp
   5D76 22                 4327 	ret
                           4328 ;------------------------------------------------------------
                           4329 ;Allocation info for local variables in function 'update_opt_trx_ffe'
                           4330 ;------------------------------------------------------------
                           4331 ;------------------------------------------------------------
                           4332 ;	../../shared/src/trx_train.c:1044: void update_opt_trx_ffe(){
                           4333 ;	-----------------------------------------
                           4334 ;	 function update_opt_trx_ffe
                           4335 ;	-----------------------------------------
   5D77                    4336 _update_opt_trx_ffe:
                           4337 ;	../../shared/src/trx_train.c:1049: if ( (   opt_r == train_r && opt_c == train_c
   5D77 90 66 C8           4338 	mov	dptr,#_opt_r
   5D7A E0                 4339 	movx	a,@dptr
   5D7B FA                 4340 	mov	r2,a
   5D7C 90 66 C6           4341 	mov	dptr,#_train_r
   5D7F E0                 4342 	movx	a,@dptr
   5D80 FB                 4343 	mov	r3,a
   5D81 EA                 4344 	mov	a,r2
   5D82 B5 03 3C           4345 	cjne	a,ar3,00102$
                           4346 ;	../../shared/src/trx_train.c:1050: && opt.phase_offset_data == train.phase_offset_data
   5D85 90 66 C7           4347 	mov	dptr,#_opt_c
   5D88 E0                 4348 	movx	a,@dptr
   5D89 FA                 4349 	mov	r2,a
   5D8A 90 66 C5           4350 	mov	dptr,#_train_c
   5D8D E0                 4351 	movx	a,@dptr
   5D8E FB                 4352 	mov	r3,a
   5D8F EA                 4353 	mov	a,r2
   5D90 B5 03 2E           4354 	cjne	a,ar3,00102$
   5D93 90 66 90           4355 	mov	dptr,#(_opt + 0x0021)
   5D96 E0                 4356 	movx	a,@dptr
   5D97 FA                 4357 	mov	r2,a
   5D98 90 66 61           4358 	mov	dptr,#(_train + 0x0021)
   5D9B E0                 4359 	movx	a,@dptr
   5D9C FB                 4360 	mov	r3,a
   5D9D EA                 4361 	mov	a,r2
   5D9E B5 03 20           4362 	cjne	a,ar3,00102$
                           4363 ;	../../shared/src/trx_train.c:1051: && opt_g0_index == train_g0_index  && opt_gn1_index == train_gn1_index  && opt_g1_index == train_g1_index
   5DA1 90 67 B3           4364 	mov	dptr,#_opt_g0_index
   5DA4 E0                 4365 	movx	a,@dptr
   5DA5 FA                 4366 	mov	r2,a
   5DA6 90 60 32           4367 	mov	dptr,#_train_g0_index
   5DA9 E0                 4368 	movx	a,@dptr
   5DAA FB                 4369 	mov	r3,a
   5DAB EA                 4370 	mov	a,r2
   5DAC B5 03 12           4371 	cjne	a,ar3,00102$
   5DAF 90 67 B4           4372 	mov	dptr,#_opt_gn1_index
   5DB2 E0                 4373 	movx	a,@dptr
   5DB3 FA                 4374 	mov	r2,a
   5DB4 90 60 30           4375 	mov	dptr,#_train_gn1_index
   5DB7 E0                 4376 	movx	a,@dptr
   5DB8 FB                 4377 	mov	r3,a
   5DB9 EA                 4378 	mov	a,r2
   5DBA B5 03 04           4379 	cjne	a,ar3,00102$
                           4380 ;	../../shared/src/trx_train.c:1052: && opt.tx_preset_index == train.tx_preset_index
   5DBD 90 60 31           4381 	mov	dptr,#_train_g1_index
   5DC0 E0                 4382 	movx	a,@dptr
                           4383 ;	../../shared/src/trx_train.c:1058: ((opt.f0t >= train.f0t) && ctrl_tx_train_on)))) )
   5DC1                    4384 00102$:
                           4385 ;	../../shared/src/trx_train.c:1068: train2opt();
   5DC1 02 60 54           4386 	ljmp	_train2opt
                           4387 ;------------------------------------------------------------
                           4388 ;Allocation info for local variables in function 'dfe_cdr_phase_opt'
                           4389 ;------------------------------------------------------------
                           4390 ;------------------------------------------------------------
                           4391 ;	../../shared/src/trx_train.c:1073: void dfe_cdr_phase_opt(void){
                           4392 ;	-----------------------------------------
                           4393 ;	 function dfe_cdr_phase_opt
                           4394 ;	-----------------------------------------
   5DC4                    4395 _dfe_cdr_phase_opt:
                           4396 ;	../../shared/src/trx_train.c:1079: if( TRAIN_SIM_EN ) return;
   5DC4 90 E6 07           4397 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5DC7 E0                 4398 	movx	a,@dptr
   5DC8 30 E2 01           4399 	jnb	acc.2,00102$
   5DCB 22                 4400 	ret
   5DCC                    4401 00102$:
                           4402 ;	../../shared/src/trx_train.c:1082: train.phase_offset_data = opt.phase_offset_data;
   5DCC 90 66 90           4403 	mov	dptr,#(_opt + 0x0021)
   5DCF E0                 4404 	movx	a,@dptr
   5DD0 90 66 61           4405 	mov	dptr,#(_train + 0x0021)
   5DD3 F0                 4406 	movx	@dptr,a
                           4407 ;	../../shared/src/trx_train.c:1086: phase_control_func();
   5DD4 12 2D F3           4408 	lcall	_phase_control_func
                           4409 ;	../../shared/src/trx_train.c:1089: if(tx_status_pcie_mode)
   5DD7 30 27 2F           4410 	jnb	_tx_status_pcie_mode,00107$
                           4411 ;	../../shared/src/trx_train.c:1091: if( pcie_f0b_en )
   5DDA 90 67 B2           4412 	mov	dptr,#_pcie_f0b_en
   5DDD E0                 4413 	movx	a,@dptr
   5DDE FA                 4414 	mov	r2,a
   5DDF 60 14              4415 	jz	00104$
                           4416 ;	../../shared/src/trx_train.c:1092: cds_tb = cds_table[CDS_DEFAULT_PCIE_F0B];
   5DE1 90 00 F6           4417 	mov	dptr,#(_cds_table + 0x0018)
   5DE4 E4                 4418 	clr	a
   5DE5 93                 4419 	movc	a,@a+dptr
   5DE6 FA                 4420 	mov	r2,a
   5DE7 A3                 4421 	inc	dptr
   5DE8 E4                 4422 	clr	a
   5DE9 93                 4423 	movc	a,@a+dptr
   5DEA FB                 4424 	mov	r3,a
   5DEB 90 61 74           4425 	mov	dptr,#_CDS_READ_MISC1
   5DEE EA                 4426 	mov	a,r2
   5DEF F0                 4427 	movx	@dptr,a
   5DF0 A3                 4428 	inc	dptr
   5DF1 EB                 4429 	mov	a,r3
   5DF2 F0                 4430 	movx	@dptr,a
   5DF3 80 26              4431 	sjmp	00108$
   5DF5                    4432 00104$:
                           4433 ;	../../shared/src/trx_train.c:1094: cds_tb = cds_table[CDS_DEFAULT_PCIE];
   5DF5 90 00 E0           4434 	mov	dptr,#(_cds_table + 0x0002)
   5DF8 E4                 4435 	clr	a
   5DF9 93                 4436 	movc	a,@a+dptr
   5DFA FA                 4437 	mov	r2,a
   5DFB A3                 4438 	inc	dptr
   5DFC E4                 4439 	clr	a
   5DFD 93                 4440 	movc	a,@a+dptr
   5DFE FB                 4441 	mov	r3,a
   5DFF 90 61 74           4442 	mov	dptr,#_CDS_READ_MISC1
   5E02 EA                 4443 	mov	a,r2
   5E03 F0                 4444 	movx	@dptr,a
   5E04 A3                 4445 	inc	dptr
   5E05 EB                 4446 	mov	a,r3
   5E06 F0                 4447 	movx	@dptr,a
   5E07 80 12              4448 	sjmp	00108$
   5E09                    4449 00107$:
                           4450 ;	../../shared/src/trx_train.c:1097: cds_tb = cds_table[CDS_DEFAULT];
   5E09 90 00 DE           4451 	mov	dptr,#_cds_table
   5E0C E4                 4452 	clr	a
   5E0D 93                 4453 	movc	a,@a+dptr
   5E0E FA                 4454 	mov	r2,a
   5E0F A3                 4455 	inc	dptr
   5E10 E4                 4456 	clr	a
   5E11 93                 4457 	movc	a,@a+dptr
   5E12 FB                 4458 	mov	r3,a
   5E13 90 61 74           4459 	mov	dptr,#_CDS_READ_MISC1
   5E16 EA                 4460 	mov	a,r2
   5E17 F0                 4461 	movx	@dptr,a
   5E18 A3                 4462 	inc	dptr
   5E19 EB                 4463 	mov	a,r3
   5E1A F0                 4464 	movx	@dptr,a
   5E1B                    4465 00108$:
                           4466 ;	../../shared/src/trx_train.c:1099: dfe_adaptation();
   5E1B 78 AD              4467 	mov	r0,#_dfe_adaptation
   5E1D 79 9F              4468 	mov	r1,#(_dfe_adaptation >> 8)
   5E1F 7A 01              4469 	mov	r2,#(_dfe_adaptation >> 16)
   5E21 12 00 B3           4470 	lcall	__sdcc_banked_call
                           4471 ;	../../shared/src/trx_train.c:1101: if(ctrl_cdr_phase_on ) {
   5E24 30 1E 1E           4472 	jnb	_ctrl_cdr_phase_on,00114$
                           4473 ;	../../shared/src/trx_train.c:1102: if( tx_status_pcie_mode ) 
   5E27 20 27 1B           4474 	jb	_tx_status_pcie_mode,00114$
                           4475 ;	../../shared/src/trx_train.c:1108: cds_tb = cds_table[CDS_DEFAULT_PHASE_MOVE_DFE_EN];
   5E2A 90 00 F4           4476 	mov	dptr,#(_cds_table + 0x0016)
   5E2D E4                 4477 	clr	a
   5E2E 93                 4478 	movc	a,@a+dptr
   5E2F FA                 4479 	mov	r2,a
   5E30 A3                 4480 	inc	dptr
   5E31 E4                 4481 	clr	a
   5E32 93                 4482 	movc	a,@a+dptr
   5E33 FB                 4483 	mov	r3,a
   5E34 90 61 74           4484 	mov	dptr,#_CDS_READ_MISC1
   5E37 EA                 4485 	mov	a,r2
   5E38 F0                 4486 	movx	@dptr,a
   5E39 A3                 4487 	inc	dptr
   5E3A EB                 4488 	mov	a,r3
   5E3B F0                 4489 	movx	@dptr,a
                           4490 ;	../../shared/src/trx_train.c:1109: cdr_phase_opt();
   5E3C 78 D9              4491 	mov	r0,#_cdr_phase_opt
   5E3E 79 B9              4492 	mov	r1,#(_cdr_phase_opt >> 8)
   5E40 7A 01              4493 	mov	r2,#(_cdr_phase_opt >> 16)
   5E42 02 00 B3           4494 	ljmp	__sdcc_banked_call
   5E45                    4495 00114$:
   5E45 22                 4496 	ret
                           4497 ;------------------------------------------------------------
                           4498 ;Allocation info for local variables in function 'train_status_reset'
                           4499 ;------------------------------------------------------------
                           4500 ;i                         Allocated to registers r2 
                           4501 ;------------------------------------------------------------
                           4502 ;	../../shared/src/trx_train.c:1115: void train_status_reset(void){
                           4503 ;	-----------------------------------------
                           4504 ;	 function train_status_reset
                           4505 ;	-----------------------------------------
   5E46                    4506 _train_status_reset:
                           4507 ;	../../shared/src/trx_train.c:1119: ctrl_rx_only_mode = !do_train; 
   5E46 90 67 18           4508 	mov	dptr,#_ctrl_rx_only_mode
   5E49 A2 06              4509 	mov	c,_do_train
   5E4B B3                 4510 	cpl	c
   5E4C E4                 4511 	clr	a
   5E4D 33                 4512 	rlc	a
   5E4E F0                 4513 	movx	@dptr,a
                           4514 ;	../../shared/src/trx_train.c:1120: ctrl_cdr_phase_on = 0;
   5E4F C2 1E              4515 	clr	_ctrl_cdr_phase_on
                           4516 ;	../../shared/src/trx_train.c:1121: ctrl_trx_train_done = 0;
   5E51 C2 23              4517 	clr	_ctrl_trx_train_done
                           4518 ;	../../shared/src/trx_train.c:1122: ctrl_trx_train_pass = 0;
   5E53 90 67 19           4519 	mov	dptr,#_ctrl_trx_train_pass
   5E56 E4                 4520 	clr	a
   5E57 F0                 4521 	movx	@dptr,a
                           4522 ;	../../shared/src/trx_train.c:1123: ctrl_rx_train_done = 0;
   5E58 C2 21              4523 	clr	_ctrl_rx_train_done
                           4524 ;	../../shared/src/trx_train.c:1124: ctrl_tx_train_done = 0;
   5E5A C2 22              4525 	clr	_ctrl_tx_train_done
                           4526 ;	../../shared/src/trx_train.c:1125: ctrl_rx_train_on = 0;
   5E5C C2 1F              4527 	clr	_ctrl_rx_train_on
                           4528 ;	../../shared/src/trx_train.c:1126: ctrl_tx_train_on = 0;
   5E5E C2 20              4529 	clr	_ctrl_tx_train_on
                           4530 ;	../../shared/src/trx_train.c:1127: ctrl_trx_ffe_updated = 0;
   5E60 C2 25              4531 	clr	_ctrl_trx_ffe_updated
                           4532 ;	../../shared/src/trx_train.c:1130: ctrl_num_big_loop = 0;
   5E62 90 66 C0           4533 	mov	dptr,#_ctrl_num_big_loop
   5E65 E4                 4534 	clr	a
   5E66 F0                 4535 	movx	@dptr,a
                           4536 ;	../../shared/src/trx_train.c:1235: memset0((uint8_t *)&opt, sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t));
   5E67 74 42              4537 	mov	a,#0x42
   5E69 C0 E0              4538 	push	acc
   5E6B E4                 4539 	clr	a
   5E6C C0 E0              4540 	push	acc
   5E6E 90 66 6F           4541 	mov	dptr,#_opt
   5E71 75 F0 00           4542 	mov	b,#0x00
   5E74 78 0C              4543 	mov	r0,#_memset0
   5E76 79 C2              4544 	mov	r1,#(_memset0 >> 8)
   5E78 7A 02              4545 	mov	r2,#(_memset0 >> 16)
   5E7A 12 00 B3           4546 	lcall	__sdcc_banked_call
   5E7D 15 81              4547 	dec	sp
   5E7F 15 81              4548 	dec	sp
                           4549 ;	../../shared/src/trx_train.c:1262: if( cmx_LOCAL_TX_PRESET_EN ) {
   5E81 90 E6 2B           4550 	mov	dptr,#(_TRAIN_IF_CONFIG + 0x0003)
   5E84 E0                 4551 	movx	a,@dptr
   5E85 30 E4 2A           4552 	jnb	acc.4,00102$
                           4553 ;	../../shared/src/trx_train.c:1263: i = cmx_LOCAL_TX_PRESET_INDEX_3_0;
   5E88 90 E6 2B           4554 	mov	dptr,#(_TRAIN_IF_CONFIG + 0x0003)
   5E8B E0                 4555 	movx	a,@dptr
   5E8C 54 0F              4556 	anl	a,#0x0f
                           4557 ;	../../shared/src/trx_train.c:1264: LINK_TRAIN_MODE0.BT.B0 = local_tx_preset_tb[i][0]; //tx_em_po
   5E8E 25 E0              4558 	add	a,acc
   5E90 FA                 4559 	mov	r2,a
   5E91 24 B0              4560 	add	a,#_local_tx_preset_tb
   5E93 F5 82              4561 	mov	dpl,a
   5E95 E4                 4562 	clr	a
   5E96 34 E6              4563 	addc	a,#(_local_tx_preset_tb >> 8)
   5E98 F5 83              4564 	mov	dph,a
   5E9A E0                 4565 	movx	a,@dptr
   5E9B 90 26 50           4566 	mov	dptr,#_LINK_TRAIN_MODE0
   5E9E F0                 4567 	movx	@dptr,a
                           4568 ;	../../shared/src/trx_train.c:1265: LINK_TRAIN_MODE0.BT.B1 = local_tx_preset_tb[i][1]; //tx_em_pre, tx_em_peak
   5E9F EA                 4569 	mov	a,r2
   5EA0 24 B0              4570 	add	a,#_local_tx_preset_tb
   5EA2 FA                 4571 	mov	r2,a
   5EA3 E4                 4572 	clr	a
   5EA4 34 E6              4573 	addc	a,#(_local_tx_preset_tb >> 8)
   5EA6 FB                 4574 	mov	r3,a
   5EA7 8A 82              4575 	mov	dpl,r2
   5EA9 8B 83              4576 	mov	dph,r3
   5EAB A3                 4577 	inc	dptr
   5EAC E0                 4578 	movx	a,@dptr
   5EAD FA                 4579 	mov	r2,a
   5EAE 90 26 51           4580 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   5EB1 F0                 4581 	movx	@dptr,a
   5EB2                    4582 00102$:
                           4583 ;	../../shared/src/trx_train.c:1280: if(lnx_spdoft_tx_preset_index_lane>5 || lnx_spdoft_tx_preset_index_lane==0) {
   5EB2 90 66 66           4584 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5EB5 E0                 4585 	movx	a,@dptr
   5EB6 FA                 4586 	mov	r2,a
   5EB7 74 05              4587 	mov	a,#0x05
   5EB9 B5 02 00           4588 	cjne	a,ar2,00122$
   5EBC                    4589 00122$:
   5EBC 40 07              4590 	jc	00109$
   5EBE 90 66 66           4591 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5EC1 E0                 4592 	movx	a,@dptr
   5EC2 FA                 4593 	mov	r2,a
   5EC3 70 2A              4594 	jnz	00110$
   5EC5                    4595 00109$:
                           4596 ;	../../shared/src/trx_train.c:1281: if(phy_mode == 4) //ethernet
   5EC5 90 A3 16           4597 	mov	dptr,#(_SYSTEM + 0x0002)
   5EC8 E0                 4598 	movx	a,@dptr
   5EC9 54 07              4599 	anl	a,#0x07
   5ECB FA                 4600 	mov	r2,a
   5ECC BA 04 08           4601 	cjne	r2,#0x04,00107$
                           4602 ;	../../shared/src/trx_train.c:1282: lnx_spdoft_tx_preset_index_lane = 2; //init //2;
   5ECF 90 66 66           4603 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5ED2 74 02              4604 	mov	a,#0x02
   5ED4 F0                 4605 	movx	@dptr,a
   5ED5 80 18              4606 	sjmp	00110$
   5ED7                    4607 00107$:
                           4608 ;	../../shared/src/trx_train.c:1283: else if(phy_mode == 3) //pcie
   5ED7 90 A3 16           4609 	mov	dptr,#(_SYSTEM + 0x0002)
   5EDA E0                 4610 	movx	a,@dptr
   5EDB 54 07              4611 	anl	a,#0x07
   5EDD FA                 4612 	mov	r2,a
   5EDE BA 03 08           4613 	cjne	r2,#0x03,00104$
                           4614 ;	../../shared/src/trx_train.c:1284: lnx_spdoft_tx_preset_index_lane = 5;
   5EE1 90 66 66           4615 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5EE4 74 05              4616 	mov	a,#0x05
   5EE6 F0                 4617 	movx	@dptr,a
   5EE7 80 06              4618 	sjmp	00110$
   5EE9                    4619 00104$:
                           4620 ;	../../shared/src/trx_train.c:1286: lnx_spdoft_tx_preset_index_lane = 3; //no_eq
   5EE9 90 66 66           4621 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5EEC 74 03              4622 	mov	a,#0x03
   5EEE F0                 4623 	movx	@dptr,a
   5EEF                    4624 00110$:
                           4625 ;	../../shared/src/trx_train.c:1288: opt.tx_preset_index = lnx_spdoft_tx_preset_index_lane;	
   5EEF 90 66 66           4626 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5EF2 E0                 4627 	movx	a,@dptr
   5EF3 FA                 4628 	mov	r2,a
   5EF4 90 66 94           4629 	mov	dptr,#(_opt + 0x0025)
   5EF7 F0                 4630 	movx	@dptr,a
                           4631 ;	../../shared/src/trx_train.c:1291: opt_g0_index = 128;
   5EF8 90 67 B3           4632 	mov	dptr,#_opt_g0_index
   5EFB 74 80              4633 	mov	a,#0x80
   5EFD F0                 4634 	movx	@dptr,a
                           4635 ;	../../shared/src/trx_train.c:1292: opt_g1_index = 128;
   5EFE 90 67 B5           4636 	mov	dptr,#_opt_g1_index
   5F01 74 80              4637 	mov	a,#0x80
   5F03 F0                 4638 	movx	@dptr,a
                           4639 ;	../../shared/src/trx_train.c:1293: opt_gn1_index = 128;
   5F04 90 67 B4           4640 	mov	dptr,#_opt_gn1_index
   5F07 74 80              4641 	mov	a,#0x80
   5F09 F0                 4642 	movx	@dptr,a
                           4643 ;	../../shared/src/trx_train.c:1294: train_g0_index = 128;
   5F0A 90 60 32           4644 	mov	dptr,#_train_g0_index
   5F0D 74 80              4645 	mov	a,#0x80
   5F0F F0                 4646 	movx	@dptr,a
                           4647 ;	../../shared/src/trx_train.c:1295: train_g1_index = 128;
   5F10 90 60 31           4648 	mov	dptr,#_train_g1_index
   5F13 74 80              4649 	mov	a,#0x80
   5F15 F0                 4650 	movx	@dptr,a
                           4651 ;	../../shared/src/trx_train.c:1296: train_gn1_index = 128;
   5F16 90 60 30           4652 	mov	dptr,#_train_gn1_index
   5F19 74 80              4653 	mov	a,#0x80
   5F1B F0                 4654 	movx	@dptr,a
                           4655 ;	../../shared/src/trx_train.c:1300: if (TRAIN_SIM_EN) {
   5F1C 90 E6 07           4656 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5F1F E0                 4657 	movx	a,@dptr
   5F20 30 E2 0E           4658 	jnb	acc.2,00113$
                           4659 ;	../../shared/src/trx_train.c:1301: lnx_FAST_DFE_TIMER_EN_LANE = 1;
   5F23 90 60 4F           4660 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   5F26 E0                 4661 	movx	a,@dptr
   5F27 44 80              4662 	orl	a,#0x80
   5F29 F0                 4663 	movx	@dptr,a
                           4664 ;	../../shared/src/trx_train.c:1302: lnx_DFE_CORE_BYPASS_LANE = 1;
   5F2A 90 60 38           4665 	mov	dptr,#_DFE_CONTROL_1
   5F2D E0                 4666 	movx	a,@dptr
   5F2E 44 40              4667 	orl	a,#0x40
   5F30 F0                 4668 	movx	@dptr,a
   5F31                    4669 00113$:
                           4670 ;	../../shared/src/trx_train.c:1312: lnx_TX_TRAIN_FAIL_INT_LANE = 0; 
   5F31 90 60 59           4671 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   5F34 E0                 4672 	movx	a,@dptr
   5F35 54 7F              4673 	anl	a,#0x7f
   5F37 F0                 4674 	movx	@dptr,a
                           4675 ;	../../shared/src/trx_train.c:1313: lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
   5F38 90 60 59           4676 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   5F3B E0                 4677 	movx	a,@dptr
   5F3C 54 BF              4678 	anl	a,#0xbf
   5F3E F0                 4679 	movx	@dptr,a
                           4680 ;	../../shared/src/trx_train.c:1314: lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
   5F3F 90 60 33           4681 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   5F42 E0                 4682 	movx	a,@dptr
   5F43 54 FB              4683 	anl	a,#0xfb
   5F45 F0                 4684 	movx	@dptr,a
                           4685 ;	../../shared/src/trx_train.c:1315: lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 0;
   5F46 90 60 5A           4686 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   5F49 E0                 4687 	movx	a,@dptr
   5F4A 54 F7              4688 	anl	a,#0xf7
   5F4C F0                 4689 	movx	@dptr,a
                           4690 ;	../../shared/src/trx_train.c:1316: lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 0;
   5F4D 90 60 5A           4691 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   5F50 E0                 4692 	movx	a,@dptr
   5F51 54 EF              4693 	anl	a,#0xef
   5F53 F0                 4694 	movx	@dptr,a
                           4695 ;	../../shared/src/trx_train.c:1317: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 0;
   5F54 90 60 5A           4696 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   5F57 E0                 4697 	movx	a,@dptr
   5F58 54 FD              4698 	anl	a,#0xfd
   5F5A F0                 4699 	movx	@dptr,a
                           4700 ;	../../shared/src/trx_train.c:1321: r2_adj_on = 0;
   5F5B 90 66 C9           4701 	mov	dptr,#_r2_adj_on
                           4702 ;	../../shared/src/trx_train.c:1322: opt_r = 0;
                           4703 ;	../../shared/src/trx_train.c:1323: opt_c = 0;
   5F5E E4                 4704 	clr	a
   5F5F F0                 4705 	movx	@dptr,a
   5F60 90 66 C8           4706 	mov	dptr,#_opt_r
   5F63 F0                 4707 	movx	@dptr,a
   5F64 90 66 C7           4708 	mov	dptr,#_opt_c
   5F67 F0                 4709 	movx	@dptr,a
                           4710 ;	../../shared/src/trx_train.c:1325: opt2train();
   5F68 12 60 02           4711 	lcall	_opt2train
                           4712 ;	../../shared/src/trx_train.c:1327: skip_dfe_adapt_cdr_midpoint = 0;
   5F6B 90 67 91           4713 	mov	dptr,#_skip_dfe_adapt_cdr_midpoint
                           4714 ;	../../shared/src/trx_train.c:1328: cds_dfe_ofst = 0;
                           4715 ;	../../shared/src/trx_train.c:1330: reg_MCU_DEBUGE_LANE_7_0 = 0;
                           4716 ;	../../shared/src/trx_train.c:1331: reg_MCU_DEBUGB_LANE_7_0 = 0;
   5F6E E4                 4717 	clr	a
   5F6F F0                 4718 	movx	@dptr,a
   5F70 90 67 92           4719 	mov	dptr,#_cds_dfe_ofst
   5F73 F0                 4720 	movx	@dptr,a
   5F74 90 22 C2           4721 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0002)
   5F77 F0                 4722 	movx	@dptr,a
   5F78 90 22 BF           4723 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0003)
   5F7B F0                 4724 	movx	@dptr,a
                           4725 ;	../../shared/src/trx_train.c:1332: reg_MCU_DEBUG0_LANE_7_0 = 0x50;
   5F7C 90 22 B4           4726 	mov	dptr,#_MCU_DEBUG0_LANE
   5F7F 74 50              4727 	mov	a,#0x50
   5F81 F0                 4728 	movx	@dptr,a
                           4729 ;	../../shared/src/trx_train.c:1333: reg_MCU_DEBUG1_LANE_7_0 = TRAIN_SIM_EN;
   5F82 90 E6 07           4730 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5F85 E0                 4731 	movx	a,@dptr
   5F86 03                 4732 	rr	a
   5F87 03                 4733 	rr	a
   5F88 54 01              4734 	anl	a,#0x01
   5F8A 90 22 B5           4735 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   5F8D F0                 4736 	movx	@dptr,a
                           4737 ;	../../shared/src/trx_train.c:1334: reg_MCU_DEBUG3_LANE_7_0 = cmx_SKIP_CDR_DFE_SCHEME;
   5F8E 90 E6 07           4738 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5F91 E0                 4739 	movx	a,@dptr
   5F92 03                 4740 	rr	a
   5F93 54 01              4741 	anl	a,#0x01
   5F95 90 22 B7           4742 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   5F98 F0                 4743 	movx	@dptr,a
                           4744 ;	../../shared/src/trx_train.c:1335: reg_MCU_DEBUG5_LANE_7_0 = lnx_DFE_CORE_BYPASS_LANE;	
   5F99 90 60 38           4745 	mov	dptr,#_DFE_CONTROL_1
   5F9C E0                 4746 	movx	a,@dptr
   5F9D 23                 4747 	rl	a
   5F9E 23                 4748 	rl	a
   5F9F 54 01              4749 	anl	a,#0x01
   5FA1 90 22 B9           4750 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   5FA4 F0                 4751 	movx	@dptr,a
                           4752 ;	../../shared/src/trx_train.c:1336: reg_MCU_DEBUG6_LANE_7_0 = lnx_FAST_DFE_TIMER_EN_LANE;	
   5FA5 90 60 4F           4753 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   5FA8 E0                 4754 	movx	a,@dptr
   5FA9 23                 4755 	rl	a
   5FAA 54 01              4756 	anl	a,#0x01
   5FAC 90 22 BA           4757 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   5FAF F0                 4758 	movx	@dptr,a
                           4759 ;	../../shared/src/trx_train.c:1341: lnx_VH_EO_MODE_LANE = 0;
                           4760 ;	../../shared/src/trx_train.c:1343: lnx_DFE_SAVE_EN_LANE = 1;
                           4761 ;	../../shared/src/trx_train.c:1344: lnx_RESET_PH_EN_DTL_LANE = 0;
   5FB0 90 60 A0           4762 	mov	dptr,#_CDS_CTRL_REG0
   5FB3 E0                 4763 	movx	a,@dptr
   5FB4 54 F7              4764 	anl	a,#0xf7
   5FB6 F0                 4765 	movx	@dptr,a
   5FB7 E0                 4766 	movx	a,@dptr
   5FB8 44 02              4767 	orl	a,#0x02
   5FBA F0                 4768 	movx	@dptr,a
   5FBB E0                 4769 	movx	a,@dptr
   5FBC 54 FE              4770 	anl	a,#0xfe
   5FBE F0                 4771 	movx	@dptr,a
                           4772 ;	../../shared/src/trx_train.c:1345: reg_DFE_INIT_SEL_LANE = 1; //load fext
   5FBF 90 24 03           4773 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   5FC2 E0                 4774 	movx	a,@dptr
   5FC3 44 40              4775 	orl	a,#0x40
   5FC5 F0                 4776 	movx	@dptr,a
                           4777 ;	../../shared/src/trx_train.c:1347: tx_train_p2p_hold = lnx_TX_TRAIN_P2P_HOLD_LANE;
   5FC6 90 60 44           4778 	mov	dptr,#_DFE_CONTROL_3
   5FC9 E0                 4779 	movx	a,@dptr
   5FCA C4                 4780 	swap	a
   5FCB 23                 4781 	rl	a
   5FCC 54 01              4782 	anl	a,#0x01
   5FCE 90 67 A0           4783 	mov	dptr,#_tx_train_p2p_hold
   5FD1 F0                 4784 	movx	@dptr,a
                           4785 ;	../../shared/src/trx_train.c:1349: reg_EOM_DPHER_LANE_6_0 = lnx_CAL_EOM_DPHER_LANE_7_0;		
   5FD2 90 60 45           4786 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   5FD5 E0                 4787 	movx	a,@dptr
   5FD6 90 00 28           4788 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   5FD9 25 E0              4789 	add	a,acc
   5FDB 54 FE              4790 	anl	a,#0xfe
   5FDD F5 F0              4791 	mov	b,a
   5FDF E0                 4792 	movx	a,@dptr
   5FE0 54 01              4793 	anl	a,#0x01
   5FE2 45 F0              4794 	orl	a,b
   5FE4 F0                 4795 	movx	@dptr,a
                           4796 ;	../../shared/src/trx_train.c:1350: short_delay(); //delay01(10);
   5FE5 78 05              4797 	mov	r0,#_short_delay
   5FE7 79 C0              4798 	mov	r1,#(_short_delay >> 8)
   5FE9 7A 02              4799 	mov	r2,#(_short_delay >> 16)
   5FEB 12 00 B3           4800 	lcall	__sdcc_banked_call
                           4801 ;	../../shared/src/trx_train.c:1351: reg_EOM_DPHERCK_LANE = 1;
                           4802 ;	../../shared/src/trx_train.c:1352: reg_EOM_DPHERCK_LANE = 0;
   5FEE 90 00 28           4803 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   5FF1 E0                 4804 	movx	a,@dptr
   5FF2 44 01              4805 	orl	a,#0x01
   5FF4 F0                 4806 	movx	@dptr,a
   5FF5 E0                 4807 	movx	a,@dptr
   5FF6 54 FE              4808 	anl	a,#0xfe
   5FF8 F0                 4809 	movx	@dptr,a
                           4810 ;	../../shared/src/trx_train.c:1354: cal_half_code();	
   5FF9 78 7F              4811 	mov	r0,#_cal_half_code
   5FFB 79 92              4812 	mov	r1,#(_cal_half_code >> 8)
   5FFD 7A 02              4813 	mov	r2,#(_cal_half_code >> 16)
   5FFF 02 00 B3           4814 	ljmp	__sdcc_banked_call
                           4815 ;------------------------------------------------------------
                           4816 ;Allocation info for local variables in function 'opt2train'
                           4817 ;------------------------------------------------------------
                           4818 ;------------------------------------------------------------
                           4819 ;	../../shared/src/trx_train.c:1358: void opt2train(void) {
                           4820 ;	-----------------------------------------
                           4821 ;	 function opt2train
                           4822 ;	-----------------------------------------
   6002                    4823 _opt2train:
                           4824 ;	../../shared/src/trx_train.c:1360: memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));
   6002 74 2F              4825 	mov	a,#0x2F
   6004 C0 E0              4826 	push	acc
   6006 E4                 4827 	clr	a
   6007 C0 E0              4828 	push	acc
   6009 74 6F              4829 	mov	a,#_opt
   600B C0 E0              4830 	push	acc
   600D 74 66              4831 	mov	a,#(_opt >> 8)
   600F C0 E0              4832 	push	acc
   6011 E4                 4833 	clr	a
   6012 C0 E0              4834 	push	acc
   6014 90 66 40           4835 	mov	dptr,#_train
   6017 75 F0 00           4836 	mov	b,#0x00
   601A 78 78              4837 	mov	r0,#_memcpy
   601C 79 C1              4838 	mov	r1,#(_memcpy >> 8)
   601E 7A 02              4839 	mov	r2,#(_memcpy >> 16)
   6020 12 00 B3           4840 	lcall	__sdcc_banked_call
   6023 E5 81              4841 	mov	a,sp
   6025 24 FB              4842 	add	a,#0xfb
   6027 F5 81              4843 	mov	sp,a
                           4844 ;	../../shared/src/trx_train.c:1365: train_r		= opt_r ;
   6029 90 66 C8           4845 	mov	dptr,#_opt_r
   602C E0                 4846 	movx	a,@dptr
   602D 90 66 C6           4847 	mov	dptr,#_train_r
   6030 F0                 4848 	movx	@dptr,a
                           4849 ;	../../shared/src/trx_train.c:1366: train_c		= opt_c ;
   6031 90 66 C7           4850 	mov	dptr,#_opt_c
   6034 E0                 4851 	movx	a,@dptr
   6035 90 66 C5           4852 	mov	dptr,#_train_c
   6038 F0                 4853 	movx	@dptr,a
                           4854 ;	../../shared/src/trx_train.c:1367: train_g0_index	= opt_g0_index;
   6039 90 67 B3           4855 	mov	dptr,#_opt_g0_index
   603C E0                 4856 	movx	a,@dptr
   603D 90 60 32           4857 	mov	dptr,#_train_g0_index
   6040 F0                 4858 	movx	@dptr,a
                           4859 ;	../../shared/src/trx_train.c:1368: train_gn1_index	= opt_gn1_index;
   6041 90 67 B4           4860 	mov	dptr,#_opt_gn1_index
   6044 E0                 4861 	movx	a,@dptr
   6045 90 60 30           4862 	mov	dptr,#_train_gn1_index
   6048 F0                 4863 	movx	@dptr,a
                           4864 ;	../../shared/src/trx_train.c:1369: train_g1_index	= opt_g1_index;
   6049 90 67 B5           4865 	mov	dptr,#_opt_g1_index
   604C E0                 4866 	movx	a,@dptr
   604D 90 60 31           4867 	mov	dptr,#_train_g1_index
   6050 F0                 4868 	movx	@dptr,a
                           4869 ;	../../shared/src/trx_train.c:1371: Set_Rx_FFE();
   6051 02 60 A4           4870 	ljmp	_Set_Rx_FFE
                           4871 ;------------------------------------------------------------
                           4872 ;Allocation info for local variables in function 'train2opt'
                           4873 ;------------------------------------------------------------
                           4874 ;------------------------------------------------------------
                           4875 ;	../../shared/src/trx_train.c:1374: void train2opt() {
                           4876 ;	-----------------------------------------
                           4877 ;	 function train2opt
                           4878 ;	-----------------------------------------
   6054                    4879 _train2opt:
                           4880 ;	../../shared/src/trx_train.c:1376: memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));
   6054 74 2F              4881 	mov	a,#0x2F
   6056 C0 E0              4882 	push	acc
   6058 E4                 4883 	clr	a
   6059 C0 E0              4884 	push	acc
   605B 74 40              4885 	mov	a,#_train
   605D C0 E0              4886 	push	acc
   605F 74 66              4887 	mov	a,#(_train >> 8)
   6061 C0 E0              4888 	push	acc
   6063 E4                 4889 	clr	a
   6064 C0 E0              4890 	push	acc
   6066 90 66 6F           4891 	mov	dptr,#_opt
   6069 75 F0 00           4892 	mov	b,#0x00
   606C 78 78              4893 	mov	r0,#_memcpy
   606E 79 C1              4894 	mov	r1,#(_memcpy >> 8)
   6070 7A 02              4895 	mov	r2,#(_memcpy >> 16)
   6072 12 00 B3           4896 	lcall	__sdcc_banked_call
   6075 E5 81              4897 	mov	a,sp
   6077 24 FB              4898 	add	a,#0xfb
   6079 F5 81              4899 	mov	sp,a
                           4900 ;	../../shared/src/trx_train.c:1378: opt_r		= train_r;
   607B 90 66 C6           4901 	mov	dptr,#_train_r
   607E E0                 4902 	movx	a,@dptr
   607F 90 66 C8           4903 	mov	dptr,#_opt_r
   6082 F0                 4904 	movx	@dptr,a
                           4905 ;	../../shared/src/trx_train.c:1379: opt_c		= train_c;
   6083 90 66 C5           4906 	mov	dptr,#_train_c
   6086 E0                 4907 	movx	a,@dptr
   6087 90 66 C7           4908 	mov	dptr,#_opt_c
   608A F0                 4909 	movx	@dptr,a
                           4910 ;	../../shared/src/trx_train.c:1380: opt_g0_index	= train_g0_index;
   608B 90 60 32           4911 	mov	dptr,#_train_g0_index
   608E E0                 4912 	movx	a,@dptr
   608F 90 67 B3           4913 	mov	dptr,#_opt_g0_index
   6092 F0                 4914 	movx	@dptr,a
                           4915 ;	../../shared/src/trx_train.c:1381: opt_gn1_index	= train_gn1_index;
   6093 90 60 30           4916 	mov	dptr,#_train_gn1_index
   6096 E0                 4917 	movx	a,@dptr
   6097 90 67 B4           4918 	mov	dptr,#_opt_gn1_index
   609A F0                 4919 	movx	@dptr,a
                           4920 ;	../../shared/src/trx_train.c:1382: opt_g1_index	= train_g1_index;
   609B 90 60 31           4921 	mov	dptr,#_train_g1_index
   609E E0                 4922 	movx	a,@dptr
   609F 90 67 B5           4923 	mov	dptr,#_opt_g1_index
   60A2 F0                 4924 	movx	@dptr,a
   60A3 22                 4925 	ret
                           4926 ;------------------------------------------------------------
                           4927 ;Allocation info for local variables in function 'Set_Rx_FFE'
                           4928 ;------------------------------------------------------------
                           4929 ;r                         Allocated to registers r2 
                           4930 ;c                         Allocated to registers r3 
                           4931 ;------------------------------------------------------------
                           4932 ;	../../shared/src/trx_train.c:1395: void Set_Rx_FFE(void){
                           4933 ;	-----------------------------------------
                           4934 ;	 function Set_Rx_FFE
                           4935 ;	-----------------------------------------
   60A4                    4936 _Set_Rx_FFE:
                           4937 ;	../../shared/src/trx_train.c:1398: r = train_r;
   60A4 90 66 C6           4938 	mov	dptr,#_train_r
   60A7 E0                 4939 	movx	a,@dptr
   60A8 FA                 4940 	mov	r2,a
                           4941 ;	../../shared/src/trx_train.c:1399: c = train_c;
   60A9 90 66 C5           4942 	mov	dptr,#_train_c
   60AC E0                 4943 	movx	a,@dptr
                           4944 ;	../../shared/src/trx_train.c:1400: train.rx_ffe_index = (c<<4) + r;
   60AD FB                 4945 	mov	r3,a
   60AE C4                 4946 	swap	a
   60AF 54 F0              4947 	anl	a,#0xf0
   60B1 2A                 4948 	add	a,r2
   60B2 FC                 4949 	mov	r4,a
   60B3 90 66 64           4950 	mov	dptr,#(_train + 0x0024)
   60B6 F0                 4951 	movx	@dptr,a
                           4952 ;	../../shared/src/trx_train.c:1401: if(tx_status_pcie_mode) {
   60B7 30 27 2C           4953 	jnb	_tx_status_pcie_mode,00106$
                           4954 ;	../../shared/src/trx_train.c:1402: if(r==0 && gen_tx==2) reg_FFE_RES1_SEL_LANE_3_0 = 13;  //hardcode
   60BA EA                 4955 	mov	a,r2
   60BB 70 13              4956 	jnz	00102$
   60BD 90 66 15           4957 	mov	dptr,#_gen_tx
   60C0 E0                 4958 	movx	a,@dptr
   60C1 FC                 4959 	mov	r4,a
   60C2 BC 02 0B           4960 	cjne	r4,#0x02,00102$
   60C5 90 02 00           4961 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   60C8 E0                 4962 	movx	a,@dptr
   60C9 54 0F              4963 	anl	a,#0x0f
   60CB 44 D0              4964 	orl	a,#0xd0
   60CD F0                 4965 	movx	@dptr,a
   60CE 80 2A              4966 	sjmp	00107$
   60D0                    4967 00102$:
                           4968 ;	../../shared/src/trx_train.c:1403: else  reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
   60D0 EA                 4969 	mov	a,r2
   60D1 90 01 7F           4970 	mov	dptr,#_Res_sel_Table
   60D4 93                 4971 	movc	a,@a+dptr
   60D5 FC                 4972 	mov	r4,a
   60D6 90 02 00           4973 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   60D9 C4                 4974 	swap	a
   60DA 54 F0              4975 	anl	a,#(0xf0&0xf0)
   60DC F5 F0              4976 	mov	b,a
   60DE E0                 4977 	movx	a,@dptr
   60DF 54 0F              4978 	anl	a,#0x0f
   60E1 45 F0              4979 	orl	a,b
   60E3 F0                 4980 	movx	@dptr,a
   60E4 80 14              4981 	sjmp	00107$
   60E6                    4982 00106$:
                           4983 ;	../../shared/src/trx_train.c:1406: reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
   60E6 EA                 4984 	mov	a,r2
   60E7 90 01 7F           4985 	mov	dptr,#_Res_sel_Table
   60EA 93                 4986 	movc	a,@a+dptr
   60EB FC                 4987 	mov	r4,a
   60EC 90 02 00           4988 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   60EF C4                 4989 	swap	a
   60F0 54 F0              4990 	anl	a,#(0xf0&0xf0)
   60F2 F5 F0              4991 	mov	b,a
   60F4 E0                 4992 	movx	a,@dptr
   60F5 54 0F              4993 	anl	a,#0x0f
   60F7 45 F0              4994 	orl	a,b
   60F9 F0                 4995 	movx	@dptr,a
   60FA                    4996 00107$:
                           4997 ;	../../shared/src/trx_train.c:1408: if(r2_adj_on!=1) {
   60FA 90 66 C9           4998 	mov	dptr,#_r2_adj_on
   60FD E0                 4999 	movx	a,@dptr
   60FE FC                 5000 	mov	r4,a
   60FF BC 01 02           5001 	cjne	r4,#0x01,00124$
   6102 80 28              5002 	sjmp	00109$
   6104                    5003 00124$:
                           5004 ;	../../shared/src/trx_train.c:1409: reg_FFE_RES2_SEL_E_LANE_3_0 = Res_sel2_e_Table[r];
   6104 EA                 5005 	mov	a,r2
   6105 90 01 8F           5006 	mov	dptr,#_Res_sel2_e_Table
   6108 93                 5007 	movc	a,@a+dptr
   6109 FC                 5008 	mov	r4,a
   610A 90 00 00           5009 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   610D C4                 5010 	swap	a
   610E 54 F0              5011 	anl	a,#(0xf0&0xf0)
   6110 F5 F0              5012 	mov	b,a
   6112 E0                 5013 	movx	a,@dptr
   6113 54 0F              5014 	anl	a,#0x0f
   6115 45 F0              5015 	orl	a,b
   6117 F0                 5016 	movx	@dptr,a
                           5017 ;	../../shared/src/trx_train.c:1410: reg_FFE_RES2_SEL_O_LANE_3_0 = Res_sel2_o_Table[r];
   6118 EA                 5018 	mov	a,r2
   6119 90 01 9F           5019 	mov	dptr,#_Res_sel2_o_Table
   611C 93                 5020 	movc	a,@a+dptr
   611D FA                 5021 	mov	r2,a
   611E 90 02 04           5022 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   6121 C4                 5023 	swap	a
   6122 54 F0              5024 	anl	a,#(0xf0&0xf0)
   6124 F5 F0              5025 	mov	b,a
   6126 E0                 5026 	movx	a,@dptr
   6127 54 0F              5027 	anl	a,#0x0f
   6129 45 F0              5028 	orl	a,b
   612B F0                 5029 	movx	@dptr,a
   612C                    5030 00109$:
                           5031 ;	../../shared/src/trx_train.c:1413: reg_FFE_CAP1_SEL_LANE_3_0   = Cap_sel_Table[c];
   612C EB                 5032 	mov	a,r3
   612D 90 01 AF           5033 	mov	dptr,#_Cap_sel_Table
   6130 93                 5034 	movc	a,@a+dptr
   6131 FA                 5035 	mov	r2,a
   6132 90 02 00           5036 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   6135 54 0F              5037 	anl	a,#0x0f
   6137 F5 F0              5038 	mov	b,a
   6139 E0                 5039 	movx	a,@dptr
   613A 54 F0              5040 	anl	a,#0xf0
   613C 45 F0              5041 	orl	a,b
   613E F0                 5042 	movx	@dptr,a
                           5043 ;	../../shared/src/trx_train.c:1414: if( lnx_CTLE_SET_SEL_LANE ) {
   613F 90 60 4E           5044 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   6142 E0                 5045 	movx	a,@dptr
   6143 30 E4 22           5046 	jnb	acc.4,00111$
                           5047 ;	../../shared/src/trx_train.c:1415: reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_Table[c];
   6146 EB                 5048 	mov	a,r3
   6147 90 01 DF           5049 	mov	dptr,#_Cap_sel2_Table
   614A 93                 5050 	movc	a,@a+dptr
   614B FA                 5051 	mov	r2,a
   614C 90 00 00           5052 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   614F 54 0F              5053 	anl	a,#0x0f
   6151 F5 F0              5054 	mov	b,a
   6153 E0                 5055 	movx	a,@dptr
   6154 54 F0              5056 	anl	a,#0xf0
   6156 45 F0              5057 	orl	a,b
   6158 F0                 5058 	movx	@dptr,a
                           5059 ;	../../shared/src/trx_train.c:1416: reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_Table[c];	
   6159 90 02 04           5060 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   615C EA                 5061 	mov	a,r2
   615D 54 0F              5062 	anl	a,#0x0f
   615F F5 F0              5063 	mov	b,a
   6161 E0                 5064 	movx	a,@dptr
   6162 54 F0              5065 	anl	a,#0xf0
   6164 45 F0              5066 	orl	a,b
   6166 F0                 5067 	movx	@dptr,a
   6167 22                 5068 	ret
   6168                    5069 00111$:
                           5070 ;	../../shared/src/trx_train.c:1419: reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_e_Table[c];
   6168 EB                 5071 	mov	a,r3
   6169 90 01 BF           5072 	mov	dptr,#_Cap_sel2_e_Table
   616C 93                 5073 	movc	a,@a+dptr
   616D 90 00 00           5074 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   6170 54 0F              5075 	anl	a,#0x0f
   6172 F5 F0              5076 	mov	b,a
   6174 E0                 5077 	movx	a,@dptr
   6175 54 F0              5078 	anl	a,#0xf0
   6177 45 F0              5079 	orl	a,b
   6179 F0                 5080 	movx	@dptr,a
                           5081 ;	../../shared/src/trx_train.c:1420: reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_o_Table[c];
   617A EB                 5082 	mov	a,r3
   617B 90 01 CF           5083 	mov	dptr,#_Cap_sel2_o_Table
   617E 93                 5084 	movc	a,@a+dptr
   617F 90 02 04           5085 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   6182 54 0F              5086 	anl	a,#0x0f
   6184 F5 F0              5087 	mov	b,a
   6186 E0                 5088 	movx	a,@dptr
   6187 54 F0              5089 	anl	a,#0xf0
   6189 45 F0              5090 	orl	a,b
   618B F0                 5091 	movx	@dptr,a
   618C 22                 5092 	ret
                           5093 ;------------------------------------------------------------
                           5094 ;Allocation info for local variables in function 'save_train'
                           5095 ;------------------------------------------------------------
                           5096 ;save_rxffe_on             Allocated to stack - offset -3
                           5097 ;save_dfe_on               Allocated to stack - offset -4
                           5098 ;save_dfe_phase_on         Allocated to stack - offset -5
                           5099 ;save_txffe_on             Allocated to registers r2 
                           5100 ;gen                       Allocated to registers r3 
                           5101 ;------------------------------------------------------------
                           5102 ;	../../shared/src/trx_train.c:1432: void save_train(bool save_txffe_on, bool save_rxffe_on, bool save_dfe_on, bool save_dfe_phase_on ) {
                           5103 ;	-----------------------------------------
                           5104 ;	 function save_train
                           5105 ;	-----------------------------------------
   618D                    5106 _save_train:
   618D C0 18              5107 	push	_bp
   618F 85 81 18           5108 	mov	_bp,sp
   6192 AA 82              5109 	mov	r2,dpl
                           5110 ;	../../shared/src/trx_train.c:1440: gen = gen_tx;
   6194 90 66 15           5111 	mov	dptr,#_gen_tx
   6197 E0                 5112 	movx	a,@dptr
   6198 FB                 5113 	mov	r3,a
                           5114 ;	../../shared/src/trx_train.c:1441: if(phy_mode==SERDES) { 
   6199 90 A3 16           5115 	mov	dptr,#(_SYSTEM + 0x0002)
   619C E0                 5116 	movx	a,@dptr
   619D 54 07              5117 	anl	a,#0x07
   619F FC                 5118 	mov	r4,a
   61A0 BC 04 2E           5119 	cjne	r4,#0x04,00102$
                           5120 ;	../../shared/src/trx_train.c:1442: gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
   61A3 90 E6 2C           5121 	mov	dptr,#_CONTROL_CONFIG8
   61A6 E0                 5122 	movx	a,@dptr
   61A7 54 0F              5123 	anl	a,#0x0f
   61A9 FC                 5124 	mov	r4,a
   61AA 90 20 33           5125 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   61AD E0                 5126 	movx	a,@dptr
   61AE C4                 5127 	swap	a
   61AF 54 0F              5128 	anl	a,#0x0f
   61B1 F5 82              5129 	mov	dpl,a
   61B3 C0 02              5130 	push	ar2
   61B5 C0 04              5131 	push	ar4
   61B7 78 3B              5132 	mov	r0,#_min
   61B9 79 C0              5133 	mov	r1,#(_min >> 8)
   61BB 7A 02              5134 	mov	r2,#(_min >> 16)
   61BD 12 00 B3           5135 	lcall	__sdcc_banked_call
   61C0 AC 82              5136 	mov	r4,dpl
   61C2 15 81              5137 	dec	sp
   61C4 8C 03              5138 	mov	ar3,r4
                           5139 ;	../../shared/src/trx_train.c:1443: gen = get_gen_memory_index(gen);
   61C6 8B 82              5140 	mov	dpl,r3
   61C8 12 42 30           5141 	lcall	_get_gen_memory_index
   61CB AC 82              5142 	mov	r4,dpl
   61CD D0 02              5143 	pop	ar2
   61CF 8C 03              5144 	mov	ar3,r4
   61D1                    5145 00102$:
                           5146 ;	../../shared/src/trx_train.c:1446: if(save_txffe_on && !link_train_mode) { //no need to save for link train
   61D1 EA                 5147 	mov	a,r2
   61D2 70 03              5148 	jnz	00140$
   61D4 02 62 B5           5149 	ljmp	00112$
   61D7                    5150 00140$:
   61D7 90 26 7B           5151 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   61DA E0                 5152 	movx	a,@dptr
   61DB 30 E7 03           5153 	jnb	acc.7,00141$
   61DE 02 62 B5           5154 	ljmp	00112$
   61E1                    5155 00141$:
                           5156 ;	../../shared/src/trx_train.c:1447: TRAIN_CONTROL_9.BT.B3 |= (0x01<<gen); //txtrain_passed_g*_lane
   61E1 90 60 CF           5157 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   61E4 E0                 5158 	movx	a,@dptr
   61E5 FA                 5159 	mov	r2,a
   61E6 8B F0              5160 	mov	b,r3
   61E8 05 F0              5161 	inc	b
   61EA 74 01              5162 	mov	a,#0x01
   61EC 80 02              5163 	sjmp	00144$
   61EE                    5164 00142$:
   61EE 25 E0              5165 	add	a,acc
   61F0                    5166 00144$:
   61F0 D5 F0 FB           5167 	djnz	b,00142$
   61F3 42 02              5168 	orl	ar2,a
   61F5 90 60 CF           5169 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   61F8 EA                 5170 	mov	a,r2
   61F9 F0                 5171 	movx	@dptr,a
                           5172 ;	../../shared/src/trx_train.c:1448: txffe_save[gen][0] = LINK_TRAIN_MODE0.BT.B0; //[7:4]em_po
   61FA EB                 5173 	mov	a,r3
   61FB 2B                 5174 	add	a,r3
   61FC FA                 5175 	mov	r2,a
   61FD 24 D0              5176 	add	a,#_txffe_save
   61FF FC                 5177 	mov	r4,a
   6200 E4                 5178 	clr	a
   6201 34 60              5179 	addc	a,#(_txffe_save >> 8)
   6203 FD                 5180 	mov	r5,a
   6204 90 26 50           5181 	mov	dptr,#_LINK_TRAIN_MODE0
   6207 E0                 5182 	movx	a,@dptr
   6208 FE                 5183 	mov	r6,a
   6209 8C 82              5184 	mov	dpl,r4
   620B 8D 83              5185 	mov	dph,r5
   620D F0                 5186 	movx	@dptr,a
                           5187 ;	../../shared/src/trx_train.c:1449: txffe_save[gen][1] = LINK_TRAIN_MODE0.BT.B1; //[7:4]em_peak [3:0]em_pre
   620E EA                 5188 	mov	a,r2
   620F 24 D0              5189 	add	a,#_txffe_save
   6211 FC                 5190 	mov	r4,a
   6212 E4                 5191 	clr	a
   6213 34 60              5192 	addc	a,#(_txffe_save >> 8)
   6215 FD                 5193 	mov	r5,a
   6216 0C                 5194 	inc	r4
   6217 BC 00 01           5195 	cjne	r4,#0x00,00145$
   621A 0D                 5196 	inc	r5
   621B                    5197 00145$:
   621B 90 26 51           5198 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   621E E0                 5199 	movx	a,@dptr
   621F FE                 5200 	mov	r6,a
   6220 8C 82              5201 	mov	dpl,r4
   6222 8D 83              5202 	mov	dph,r5
   6224 F0                 5203 	movx	@dptr,a
                           5204 ;	../../shared/src/trx_train.c:1450: if(reg_ANA_TX_EM_PEAK_EN_LANE) txffe_save[gen][0] |= 0x08;
   6225 90 26 52           5205 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   6228 E0                 5206 	movx	a,@dptr
   6229 30 E7 1D           5207 	jnb	acc.7,00104$
   622C EA                 5208 	mov	a,r2
   622D 24 D0              5209 	add	a,#_txffe_save
   622F FC                 5210 	mov	r4,a
   6230 E4                 5211 	clr	a
   6231 34 60              5212 	addc	a,#(_txffe_save >> 8)
   6233 FD                 5213 	mov	r5,a
   6234 EA                 5214 	mov	a,r2
   6235 24 D0              5215 	add	a,#_txffe_save
   6237 F5 82              5216 	mov	dpl,a
   6239 E4                 5217 	clr	a
   623A 34 60              5218 	addc	a,#(_txffe_save >> 8)
   623C F5 83              5219 	mov	dph,a
   623E E0                 5220 	movx	a,@dptr
   623F FE                 5221 	mov	r6,a
   6240 43 06 08           5222 	orl	ar6,#0x08
   6243 8C 82              5223 	mov	dpl,r4
   6245 8D 83              5224 	mov	dph,r5
   6247 EE                 5225 	mov	a,r6
   6248 F0                 5226 	movx	@dptr,a
   6249                    5227 00104$:
                           5228 ;	../../shared/src/trx_train.c:1451: if(reg_ANA_TX_EM_PRE_EN_LANE)  txffe_save[gen][0] |= 0x04; 
   6249 90 26 52           5229 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   624C E0                 5230 	movx	a,@dptr
   624D 30 E6 1D           5231 	jnb	acc.6,00106$
   6250 EA                 5232 	mov	a,r2
   6251 24 D0              5233 	add	a,#_txffe_save
   6253 FC                 5234 	mov	r4,a
   6254 E4                 5235 	clr	a
   6255 34 60              5236 	addc	a,#(_txffe_save >> 8)
   6257 FD                 5237 	mov	r5,a
   6258 EA                 5238 	mov	a,r2
   6259 24 D0              5239 	add	a,#_txffe_save
   625B F5 82              5240 	mov	dpl,a
   625D E4                 5241 	clr	a
   625E 34 60              5242 	addc	a,#(_txffe_save >> 8)
   6260 F5 83              5243 	mov	dph,a
   6262 E0                 5244 	movx	a,@dptr
   6263 FE                 5245 	mov	r6,a
   6264 43 06 04           5246 	orl	ar6,#0x04
   6267 8C 82              5247 	mov	dpl,r4
   6269 8D 83              5248 	mov	dph,r5
   626B EE                 5249 	mov	a,r6
   626C F0                 5250 	movx	@dptr,a
   626D                    5251 00106$:
                           5252 ;	../../shared/src/trx_train.c:1452: if(reg_ANA_TX_EM_PO_EN_LANE)   txffe_save[gen][0] |= 0x02;
   626D 90 26 52           5253 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   6270 E0                 5254 	movx	a,@dptr
   6271 30 E5 1D           5255 	jnb	acc.5,00108$
   6274 EA                 5256 	mov	a,r2
   6275 24 D0              5257 	add	a,#_txffe_save
   6277 FC                 5258 	mov	r4,a
   6278 E4                 5259 	clr	a
   6279 34 60              5260 	addc	a,#(_txffe_save >> 8)
   627B FD                 5261 	mov	r5,a
   627C EA                 5262 	mov	a,r2
   627D 24 D0              5263 	add	a,#_txffe_save
   627F F5 82              5264 	mov	dpl,a
   6281 E4                 5265 	clr	a
   6282 34 60              5266 	addc	a,#(_txffe_save >> 8)
   6284 F5 83              5267 	mov	dph,a
   6286 E0                 5268 	movx	a,@dptr
   6287 FE                 5269 	mov	r6,a
   6288 43 06 02           5270 	orl	ar6,#0x02
   628B 8C 82              5271 	mov	dpl,r4
   628D 8D 83              5272 	mov	dph,r5
   628F EE                 5273 	mov	a,r6
   6290 F0                 5274 	movx	@dptr,a
   6291                    5275 00108$:
                           5276 ;	../../shared/src/trx_train.c:1453: if(txffe_force_en)    		   txffe_save[gen][0] |= 0x01;	
   6291 90 67 A4           5277 	mov	dptr,#_txffe_force_en
   6294 E0                 5278 	movx	a,@dptr
   6295 FC                 5279 	mov	r4,a
   6296 60 1D              5280 	jz	00112$
   6298 EA                 5281 	mov	a,r2
   6299 24 D0              5282 	add	a,#_txffe_save
   629B FC                 5283 	mov	r4,a
   629C E4                 5284 	clr	a
   629D 34 60              5285 	addc	a,#(_txffe_save >> 8)
   629F FD                 5286 	mov	r5,a
   62A0 EA                 5287 	mov	a,r2
   62A1 24 D0              5288 	add	a,#_txffe_save
   62A3 F5 82              5289 	mov	dpl,a
   62A5 E4                 5290 	clr	a
   62A6 34 60              5291 	addc	a,#(_txffe_save >> 8)
   62A8 F5 83              5292 	mov	dph,a
   62AA E0                 5293 	movx	a,@dptr
   62AB FA                 5294 	mov	r2,a
   62AC 43 02 01           5295 	orl	ar2,#0x01
   62AF 8C 82              5296 	mov	dpl,r4
   62B1 8D 83              5297 	mov	dph,r5
   62B3 EA                 5298 	mov	a,r2
   62B4 F0                 5299 	movx	@dptr,a
   62B5                    5300 00112$:
                           5301 ;	../../shared/src/trx_train.c:1457: if(save_rxffe_on) {
   62B5 E5 18              5302 	mov	a,_bp
   62B7 24 FD              5303 	add	a,#0xfd
   62B9 F8                 5304 	mov	r0,a
   62BA E6                 5305 	mov	a,@r0
   62BB 60 65              5306 	jz	00115$
                           5307 ;	../../shared/src/trx_train.c:1458: TRAIN_CONTROL_9.BT.B1 |= (0x01<<gen); //rxtrain_passed_g*_lane		
   62BD 90 60 CD           5308 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   62C0 E0                 5309 	movx	a,@dptr
   62C1 FA                 5310 	mov	r2,a
   62C2 8B F0              5311 	mov	b,r3
   62C4 05 F0              5312 	inc	b
   62C6 74 01              5313 	mov	a,#0x01
   62C8 80 02              5314 	sjmp	00153$
   62CA                    5315 00151$:
   62CA 25 E0              5316 	add	a,acc
   62CC                    5317 00153$:
   62CC D5 F0 FB           5318 	djnz	b,00151$
   62CF 42 02              5319 	orl	ar2,a
   62D1 90 60 CD           5320 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   62D4 EA                 5321 	mov	a,r2
   62D5 F0                 5322 	movx	@dptr,a
                           5323 ;	../../shared/src/trx_train.c:1461: rc_save[gen][1] = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //ffe_cap1/res1
   62D6 EB                 5324 	mov	a,r3
   62D7 2B                 5325 	add	a,r3
   62D8 25 E0              5326 	add	a,acc
   62DA FA                 5327 	mov	r2,a
   62DB 24 B4              5328 	add	a,#_rc_save
   62DD FC                 5329 	mov	r4,a
   62DE E4                 5330 	clr	a
   62DF 34 60              5331 	addc	a,#(_rc_save >> 8)
   62E1 FD                 5332 	mov	r5,a
   62E2 0C                 5333 	inc	r4
   62E3 BC 00 01           5334 	cjne	r4,#0x00,00154$
   62E6 0D                 5335 	inc	r5
   62E7                    5336 00154$:
   62E7 90 02 00           5337 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   62EA E0                 5338 	movx	a,@dptr
   62EB 8C 82              5339 	mov	dpl,r4
   62ED 8D 83              5340 	mov	dph,r5
   62EF F0                 5341 	movx	@dptr,a
                           5342 ;	../../shared/src/trx_train.c:1462: rc_save[gen][2] = UPHY14_TRX_ANAREG_BOT_0.BT.B0; //ffe_cap2/res2/E
   62F0 EA                 5343 	mov	a,r2
   62F1 24 B4              5344 	add	a,#_rc_save
   62F3 FC                 5345 	mov	r4,a
   62F4 E4                 5346 	clr	a
   62F5 34 60              5347 	addc	a,#(_rc_save >> 8)
   62F7 FD                 5348 	mov	r5,a
   62F8 74 02              5349 	mov	a,#0x02
   62FA 2C                 5350 	add	a,r4
   62FB FC                 5351 	mov	r4,a
   62FC E4                 5352 	clr	a
   62FD 3D                 5353 	addc	a,r5
   62FE FD                 5354 	mov	r5,a
   62FF 90 00 00           5355 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   6302 E0                 5356 	movx	a,@dptr
   6303 FE                 5357 	mov	r6,a
   6304 8C 82              5358 	mov	dpl,r4
   6306 8D 83              5359 	mov	dph,r5
   6308 F0                 5360 	movx	@dptr,a
                           5361 ;	../../shared/src/trx_train.c:1463: rc_save[gen][3] = UPHY14_TRX_ANAREG_TOP_129.BT.B0; //ffe_cap2/res2/O
   6309 EA                 5362 	mov	a,r2
   630A 24 B4              5363 	add	a,#_rc_save
   630C FA                 5364 	mov	r2,a
   630D E4                 5365 	clr	a
   630E 34 60              5366 	addc	a,#(_rc_save >> 8)
   6310 FC                 5367 	mov	r4,a
   6311 74 03              5368 	mov	a,#0x03
   6313 2A                 5369 	add	a,r2
   6314 FA                 5370 	mov	r2,a
   6315 E4                 5371 	clr	a
   6316 3C                 5372 	addc	a,r4
   6317 FC                 5373 	mov	r4,a
   6318 90 02 04           5374 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   631B E0                 5375 	movx	a,@dptr
   631C FD                 5376 	mov	r5,a
   631D 8A 82              5377 	mov	dpl,r2
   631F 8C 83              5378 	mov	dph,r4
   6321 F0                 5379 	movx	@dptr,a
   6322                    5380 00115$:
                           5381 ;	../../shared/src/trx_train.c:1467: if(save_dfe_on) {
   6322 E5 18              5382 	mov	a,_bp
   6324 24 FC              5383 	add	a,#0xfc
   6326 F8                 5384 	mov	r0,a
   6327 E6                 5385 	mov	a,@r0
   6328 60 5B              5386 	jz	00119$
                           5387 ;	../../shared/src/trx_train.c:1469: dfe_res_save_en |= 0x01<<gen;
   632A 8B F0              5388 	mov	b,r3
   632C 05 F0              5389 	inc	b
   632E 74 01              5390 	mov	a,#0x01
   6330 80 02              5391 	sjmp	00158$
   6332                    5392 00156$:
   6332 25 E0              5393 	add	a,acc
   6334                    5394 00158$:
   6334 D5 F0 FB           5395 	djnz	b,00156$
   6337 FA                 5396 	mov	r2,a
   6338 90 67 A8           5397 	mov	dptr,#_dfe_res_save_en
   633B E0                 5398 	movx	a,@dptr
   633C 4A                 5399 	orl	a,r2
   633D F0                 5400 	movx	@dptr,a
                           5401 ;	../../shared/src/trx_train.c:1470: rc_save[gen][0] = UPHY14_TRX_ANAREG_BOT_20.BT.B0; //dfe_res_f0/f1/f234
   633E EB                 5402 	mov	a,r3
   633F 2B                 5403 	add	a,r3
   6340 25 E0              5404 	add	a,acc
   6342 FA                 5405 	mov	r2,a
   6343 24 B4              5406 	add	a,#_rc_save
   6345 FC                 5407 	mov	r4,a
   6346 E4                 5408 	clr	a
   6347 34 60              5409 	addc	a,#(_rc_save >> 8)
   6349 FD                 5410 	mov	r5,a
   634A 90 00 50           5411 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   634D E0                 5412 	movx	a,@dptr
   634E FE                 5413 	mov	r6,a
   634F 8C 82              5414 	mov	dpl,r4
   6351 8D 83              5415 	mov	dph,r5
   6353 F0                 5416 	movx	@dptr,a
                           5417 ;	../../shared/src/trx_train.c:1471: if(lnx_DFE_RES_F5TO15_MAX_SPD_EN_LANE) {
   6354 90 60 38           5418 	mov	dptr,#_DFE_CONTROL_1
   6357 E0                 5419 	movx	a,@dptr
   6358 30 E1 2A           5420 	jnb	acc.1,00119$
                           5421 ;	../../shared/src/trx_train.c:1472: rc_save[gen][0] |= 0xe0;
   635B EA                 5422 	mov	a,r2
   635C 24 B4              5423 	add	a,#_rc_save
   635E FC                 5424 	mov	r4,a
   635F E4                 5425 	clr	a
   6360 34 60              5426 	addc	a,#(_rc_save >> 8)
   6362 FD                 5427 	mov	r5,a
   6363 EA                 5428 	mov	a,r2
   6364 24 B4              5429 	add	a,#_rc_save
   6366 F5 82              5430 	mov	dpl,a
   6368 E4                 5431 	clr	a
   6369 34 60              5432 	addc	a,#(_rc_save >> 8)
   636B F5 83              5433 	mov	dph,a
   636D E0                 5434 	movx	a,@dptr
   636E FA                 5435 	mov	r2,a
   636F 43 02 E0           5436 	orl	ar2,#0xE0
   6372 8C 82              5437 	mov	dpl,r4
   6374 8D 83              5438 	mov	dph,r5
   6376 EA                 5439 	mov	a,r2
   6377 F0                 5440 	movx	@dptr,a
                           5441 ;	../../shared/src/trx_train.c:1473: UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= 0xe0;
   6378 90 00 54           5442 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   637B E0                 5443 	movx	a,@dptr
   637C FA                 5444 	mov	r2,a
   637D 43 02 E0           5445 	orl	ar2,#0xE0
   6380 90 00 54           5446 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   6383 EA                 5447 	mov	a,r2
   6384 F0                 5448 	movx	@dptr,a
   6385                    5449 00119$:
                           5450 ;	../../shared/src/trx_train.c:1477: if(pwrsq_on==1) return;
   6385 90 66 2B           5451 	mov	dptr,#_pwrsq_on
   6388 E0                 5452 	movx	a,@dptr
   6389 FA                 5453 	mov	r2,a
   638A BA 01 03           5454 	cjne	r2,#0x01,00121$
   638D 02 64 37           5455 	ljmp	00124$
   6390                    5456 00121$:
                           5457 ;	../../shared/src/trx_train.c:1479: if(save_dfe_phase_on) {
   6390 E5 18              5458 	mov	a,_bp
   6392 24 FB              5459 	add	a,#0xfb
   6394 F8                 5460 	mov	r0,a
   6395 E6                 5461 	mov	a,@r0
   6396 70 03              5462 	jnz	00162$
   6398 02 64 37           5463 	ljmp	00124$
   639B                    5464 00162$:
                           5465 ;	../../shared/src/trx_train.c:1480: dfe_phase_save_en |= 0x01<<gen;
   639B 8B F0              5466 	mov	b,r3
   639D 05 F0              5467 	inc	b
   639F 74 01              5468 	mov	a,#0x01
   63A1 80 02              5469 	sjmp	00165$
   63A3                    5470 00163$:
   63A3 25 E0              5471 	add	a,acc
   63A5                    5472 00165$:
   63A5 D5 F0 FB           5473 	djnz	b,00163$
   63A8 FA                 5474 	mov	r2,a
   63A9 90 67 AA           5475 	mov	dptr,#_dfe_phase_save_en
   63AC E0                 5476 	movx	a,@dptr
   63AD 4A                 5477 	orl	a,r2
   63AE F0                 5478 	movx	@dptr,a
                           5479 ;	../../shared/src/trx_train.c:1483: memcpy((uint8_t *)&(dfe_sm_save[gen]), (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));	
   63AF EB                 5480 	mov	a,r3
   63B0 75 F0 40           5481 	mov	b,#0x40
   63B3 A4                 5482 	mul	ab
   63B4 24 C0              5483 	add	a,#_dfe_sm_save
   63B6 FA                 5484 	mov	r2,a
   63B7 74 61              5485 	mov	a,#(_dfe_sm_save >> 8)
   63B9 35 F0              5486 	addc	a,b
   63BB FC                 5487 	mov	r4,a
   63BC 7D 00              5488 	mov	r5,#0x00
   63BE C0 03              5489 	push	ar3
   63C0 74 40              5490 	mov	a,#0x40
   63C2 C0 E0              5491 	push	acc
   63C4 E4                 5492 	clr	a
   63C5 C0 E0              5493 	push	acc
   63C7 74 80              5494 	mov	a,#_DFE_READ_EVEN_SM_REG0
   63C9 C0 E0              5495 	push	acc
   63CB 74 24              5496 	mov	a,#(_DFE_READ_EVEN_SM_REG0 >> 8)
   63CD C0 E0              5497 	push	acc
   63CF E4                 5498 	clr	a
   63D0 C0 E0              5499 	push	acc
   63D2 8A 82              5500 	mov	dpl,r2
   63D4 8C 83              5501 	mov	dph,r4
   63D6 8D F0              5502 	mov	b,r5
   63D8 78 78              5503 	mov	r0,#_memcpy
   63DA 79 C1              5504 	mov	r1,#(_memcpy >> 8)
   63DC 7A 02              5505 	mov	r2,#(_memcpy >> 16)
   63DE 12 00 B3           5506 	lcall	__sdcc_banked_call
   63E1 E5 81              5507 	mov	a,sp
   63E3 24 FB              5508 	add	a,#0xfb
   63E5 F5 81              5509 	mov	sp,a
   63E7 D0 03              5510 	pop	ar3
                           5511 ;	../../shared/src/trx_train.c:1486: phase_save[gen][0] = reg_ALIGN90_REF_LANE_5_0 & 0x7f;
   63E9 EB                 5512 	mov	a,r3
   63EA 2B                 5513 	add	a,r3
   63EB 25 E0              5514 	add	a,acc
   63ED FB                 5515 	mov	r3,a
   63EE 24 E4              5516 	add	a,#_phase_save
   63F0 FA                 5517 	mov	r2,a
   63F1 E4                 5518 	clr	a
   63F2 34 60              5519 	addc	a,#(_phase_save >> 8)
   63F4 FC                 5520 	mov	r4,a
   63F5 90 00 38           5521 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   63F8 E0                 5522 	movx	a,@dptr
   63F9 03                 5523 	rr	a
   63FA 03                 5524 	rr	a
   63FB 54 3F              5525 	anl	a,#0x3f
   63FD FD                 5526 	mov	r5,a
   63FE 53 05 7F           5527 	anl	ar5,#0x7F
   6401 8A 82              5528 	mov	dpl,r2
   6403 8C 83              5529 	mov	dph,r4
   6405 ED                 5530 	mov	a,r5
   6406 F0                 5531 	movx	@dptr,a
                           5532 ;	../../shared/src/trx_train.c:1487: phase_save[gen][1] = UPHY14_TRX_ANAREG_BOT_12.BT.B0; //gm
   6407 EB                 5533 	mov	a,r3
   6408 24 E4              5534 	add	a,#_phase_save
   640A FA                 5535 	mov	r2,a
   640B E4                 5536 	clr	a
   640C 34 60              5537 	addc	a,#(_phase_save >> 8)
   640E FC                 5538 	mov	r4,a
   640F 0A                 5539 	inc	r2
   6410 BA 00 01           5540 	cjne	r2,#0x00,00166$
   6413 0C                 5541 	inc	r4
   6414                    5542 00166$:
   6414 90 00 30           5543 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   6417 E0                 5544 	movx	a,@dptr
   6418 FD                 5545 	mov	r5,a
   6419 8A 82              5546 	mov	dpl,r2
   641B 8C 83              5547 	mov	dph,r4
   641D F0                 5548 	movx	@dptr,a
                           5549 ;	../../shared/src/trx_train.c:1488: phase_save[gen][2] = UPHY14_TRX_ANAREG_BOT_13.BT.B0; //dm, dac			
   641E EB                 5550 	mov	a,r3
   641F 24 E4              5551 	add	a,#_phase_save
   6421 FB                 5552 	mov	r3,a
   6422 E4                 5553 	clr	a
   6423 34 60              5554 	addc	a,#(_phase_save >> 8)
   6425 FA                 5555 	mov	r2,a
   6426 74 02              5556 	mov	a,#0x02
   6428 2B                 5557 	add	a,r3
   6429 FB                 5558 	mov	r3,a
   642A E4                 5559 	clr	a
   642B 3A                 5560 	addc	a,r2
   642C FA                 5561 	mov	r2,a
   642D 90 00 34           5562 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   6430 E0                 5563 	movx	a,@dptr
   6431 FC                 5564 	mov	r4,a
   6432 8B 82              5565 	mov	dpl,r3
   6434 8A 83              5566 	mov	dph,r2
   6436 F0                 5567 	movx	@dptr,a
   6437                    5568 00124$:
   6437 D0 18              5569 	pop	_bp
   6439 22                 5570 	ret
                           5571 ;------------------------------------------------------------
                           5572 ;Allocation info for local variables in function 'restore_train'
                           5573 ;------------------------------------------------------------
                           5574 ;gen                       Allocated to registers r2 
                           5575 ;change                    Allocated to registers r3 
                           5576 ;------------------------------------------------------------
                           5577 ;	../../shared/src/trx_train.c:1496: void restore_train(void) {
                           5578 ;	-----------------------------------------
                           5579 ;	 function restore_train
                           5580 ;	-----------------------------------------
   643A                    5581 _restore_train:
                           5582 ;	../../shared/src/trx_train.c:1504: gen = gen_tx;		
   643A 90 66 15           5583 	mov	dptr,#_gen_tx
   643D E0                 5584 	movx	a,@dptr
   643E FA                 5585 	mov	r2,a
                           5586 ;	../../shared/src/trx_train.c:1505: if(phy_mode==SERDES) { 
   643F 90 A3 16           5587 	mov	dptr,#(_SYSTEM + 0x0002)
   6442 E0                 5588 	movx	a,@dptr
   6443 54 07              5589 	anl	a,#0x07
   6445 FB                 5590 	mov	r3,a
   6446 BB 04 2A           5591 	cjne	r3,#0x04,00102$
                           5592 ;	../../shared/src/trx_train.c:1506: gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
   6449 90 E6 2C           5593 	mov	dptr,#_CONTROL_CONFIG8
   644C E0                 5594 	movx	a,@dptr
   644D 54 0F              5595 	anl	a,#0x0f
   644F FB                 5596 	mov	r3,a
   6450 90 20 33           5597 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   6453 E0                 5598 	movx	a,@dptr
   6454 C4                 5599 	swap	a
   6455 54 0F              5600 	anl	a,#0x0f
   6457 F5 82              5601 	mov	dpl,a
   6459 C0 03              5602 	push	ar3
   645B 78 3B              5603 	mov	r0,#_min
   645D 79 C0              5604 	mov	r1,#(_min >> 8)
   645F 7A 02              5605 	mov	r2,#(_min >> 16)
   6461 12 00 B3           5606 	lcall	__sdcc_banked_call
   6464 AB 82              5607 	mov	r3,dpl
   6466 15 81              5608 	dec	sp
   6468 8B 02              5609 	mov	ar2,r3
                           5610 ;	../../shared/src/trx_train.c:1507: gen = get_gen_memory_index(gen);
   646A 8A 82              5611 	mov	dpl,r2
   646C 12 42 30           5612 	lcall	_get_gen_memory_index
   646F AB 82              5613 	mov	r3,dpl
   6471 8B 02              5614 	mov	ar2,r3
   6473                    5615 00102$:
                           5616 ;	../../shared/src/trx_train.c:1510: if(!link_train_mode) {
   6473 90 26 7B           5617 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   6476 E0                 5618 	movx	a,@dptr
   6477 30 E7 03           5619 	jnb	acc.7,00124$
   647A 02 65 5A           5620 	ljmp	00108$
   647D                    5621 00124$:
                           5622 ;	../../shared/src/trx_train.c:1511: change = (TRAIN_CONTROL_9.BT.B3 & (0x01<<gen)) != 0;		
   647D 90 60 CF           5623 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   6480 E0                 5624 	movx	a,@dptr
   6481 FB                 5625 	mov	r3,a
   6482 8A F0              5626 	mov	b,r2
   6484 05 F0              5627 	inc	b
   6486 7C 01              5628 	mov	r4,#0x01
   6488 7D 00              5629 	mov	r5,#0x00
   648A 80 06              5630 	sjmp	00126$
   648C                    5631 00125$:
   648C EC                 5632 	mov	a,r4
   648D 2C                 5633 	add	a,r4
   648E FC                 5634 	mov	r4,a
   648F ED                 5635 	mov	a,r5
   6490 33                 5636 	rlc	a
   6491 FD                 5637 	mov	r5,a
   6492                    5638 00126$:
   6492 D5 F0 F7           5639 	djnz	b,00125$
   6495 7E 00              5640 	mov	r6,#0x00
   6497 EB                 5641 	mov	a,r3
   6498 52 04              5642 	anl	ar4,a
   649A EE                 5643 	mov	a,r6
   649B 52 05              5644 	anl	ar5,a
   649D E4                 5645 	clr	a
   649E BC 00 04           5646 	cjne	r4,#0x00,00127$
   64A1 BD 00 01           5647 	cjne	r5,#0x00,00127$
   64A4 04                 5648 	inc	a
   64A5                    5649 00127$:
   64A5 FC                 5650 	mov	r4,a
   64A6 B4 01 00           5651 	cjne	a,#0x01,00129$
   64A9                    5652 00129$:
   64A9 E4                 5653 	clr	a
   64AA 33                 5654 	rlc	a
   64AB FC                 5655 	mov	r4,a
                           5656 ;	../../shared/src/trx_train.c:1512: if(change) 
   64AC FB                 5657 	mov	r3,a
   64AD 70 03              5658 	jnz	00130$
   64AF 02 65 5A           5659 	ljmp	00108$
   64B2                    5660 00130$:
                           5661 ;	../../shared/src/trx_train.c:1514: LINK_TRAIN_MODE0.BT.B0 = txffe_save[gen][0]; //[7:4]em_po
   64B2 EA                 5662 	mov	a,r2
   64B3 2A                 5663 	add	a,r2
   64B4 FC                 5664 	mov	r4,a
   64B5 24 D0              5665 	add	a,#_txffe_save
   64B7 F5 82              5666 	mov	dpl,a
   64B9 E4                 5667 	clr	a
   64BA 34 60              5668 	addc	a,#(_txffe_save >> 8)
   64BC F5 83              5669 	mov	dph,a
   64BE E0                 5670 	movx	a,@dptr
   64BF 90 26 50           5671 	mov	dptr,#_LINK_TRAIN_MODE0
   64C2 F0                 5672 	movx	@dptr,a
                           5673 ;	../../shared/src/trx_train.c:1515: LINK_TRAIN_MODE0.BT.B1 = txffe_save[gen][1]; //[7:4]em_peak [3:0]em_pre
   64C3 EC                 5674 	mov	a,r4
   64C4 24 D0              5675 	add	a,#_txffe_save
   64C6 FD                 5676 	mov	r5,a
   64C7 E4                 5677 	clr	a
   64C8 34 60              5678 	addc	a,#(_txffe_save >> 8)
   64CA FE                 5679 	mov	r6,a
   64CB 8D 82              5680 	mov	dpl,r5
   64CD 8E 83              5681 	mov	dph,r6
   64CF A3                 5682 	inc	dptr
   64D0 E0                 5683 	movx	a,@dptr
   64D1 90 26 51           5684 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   64D4 F0                 5685 	movx	@dptr,a
                           5686 ;	../../shared/src/trx_train.c:1516: if (cmx_TX_TRAIN_MODE == 1)
   64D5 90 E6 28           5687 	mov	dptr,#_TRAIN_IF_CONFIG
   64D8 E0                 5688 	movx	a,@dptr
   64D9 03                 5689 	rr	a
   64DA 54 01              5690 	anl	a,#0x01
   64DC FD                 5691 	mov	r5,a
   64DD BD 01 67           5692 	cjne	r5,#0x01,00104$
                           5693 ;	../../shared/src/trx_train.c:1518: reg_ANA_TX_EM_PEAK_EN_LANE = (txffe_save[gen][0]&0x08)==0x08;
   64E0 EC                 5694 	mov	a,r4
   64E1 24 D0              5695 	add	a,#_txffe_save
   64E3 F5 82              5696 	mov	dpl,a
   64E5 E4                 5697 	clr	a
   64E6 34 60              5698 	addc	a,#(_txffe_save >> 8)
   64E8 F5 83              5699 	mov	dph,a
   64EA E0                 5700 	movx	a,@dptr
   64EB FD                 5701 	mov	r5,a
   64EC 53 05 08           5702 	anl	ar5,#0x08
   64EF BD 08 03           5703 	cjne	r5,#0x08,00133$
   64F2 D3                 5704 	setb	c
   64F3 80 01              5705 	sjmp	00134$
   64F5                    5706 00133$:
   64F5 C3                 5707 	clr	c
   64F6                    5708 00134$:
   64F6 92 28              5709 	mov  b0,c
   64F8 E4                 5710 	clr	a
   64F9 33                 5711 	rlc	a
   64FA 90 26 52           5712 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   64FD 13                 5713 	rrc	a
   64FE E0                 5714 	movx	a,@dptr
   64FF 92 E7              5715 	mov	acc.7,c
   6501 F0                 5716 	movx	@dptr,a
                           5717 ;	../../shared/src/trx_train.c:1519: reg_ANA_TX_EM_PRE_EN_LANE = (txffe_save[gen][0]&0x04)==0x04;
   6502 EC                 5718 	mov	a,r4
   6503 24 D0              5719 	add	a,#_txffe_save
   6505 F5 82              5720 	mov	dpl,a
   6507 E4                 5721 	clr	a
   6508 34 60              5722 	addc	a,#(_txffe_save >> 8)
   650A F5 83              5723 	mov	dph,a
   650C E0                 5724 	movx	a,@dptr
   650D FD                 5725 	mov	r5,a
   650E 53 05 04           5726 	anl	ar5,#0x04
   6511 BD 04 03           5727 	cjne	r5,#0x04,00135$
   6514 D3                 5728 	setb	c
   6515 80 01              5729 	sjmp	00136$
   6517                    5730 00135$:
   6517 C3                 5731 	clr	c
   6518                    5732 00136$:
   6518 92 28              5733 	mov  b0,c
   651A E4                 5734 	clr	a
   651B 33                 5735 	rlc	a
   651C 90 26 52           5736 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   651F 13                 5737 	rrc	a
   6520 E0                 5738 	movx	a,@dptr
   6521 92 E6              5739 	mov	acc.6,c
   6523 F0                 5740 	movx	@dptr,a
                           5741 ;	../../shared/src/trx_train.c:1520: reg_ANA_TX_EM_PO_EN_LANE = (txffe_save[gen][0]&0x02)==0x02;	
   6524 EC                 5742 	mov	a,r4
   6525 24 D0              5743 	add	a,#_txffe_save
   6527 F5 82              5744 	mov	dpl,a
   6529 E4                 5745 	clr	a
   652A 34 60              5746 	addc	a,#(_txffe_save >> 8)
   652C F5 83              5747 	mov	dph,a
   652E E0                 5748 	movx	a,@dptr
   652F FD                 5749 	mov	r5,a
   6530 53 05 02           5750 	anl	ar5,#0x02
   6533 BD 02 03           5751 	cjne	r5,#0x02,00137$
   6536 D3                 5752 	setb	c
   6537 80 01              5753 	sjmp	00138$
   6539                    5754 00137$:
   6539 C3                 5755 	clr	c
   653A                    5756 00138$:
   653A 92 28              5757 	mov  b0,c
   653C E4                 5758 	clr	a
   653D 33                 5759 	rlc	a
   653E FD                 5760 	mov	r5,a
   653F 90 26 52           5761 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   6542 13                 5762 	rrc	a
   6543 E0                 5763 	movx	a,@dptr
   6544 92 E5              5764 	mov	acc.5,c
   6546 F0                 5765 	movx	@dptr,a
   6547                    5766 00104$:
                           5767 ;	../../shared/src/trx_train.c:1522: txffe_force_en = txffe_save[gen][0]&0x01;					
   6547 EC                 5768 	mov	a,r4
   6548 24 D0              5769 	add	a,#_txffe_save
   654A F5 82              5770 	mov	dpl,a
   654C E4                 5771 	clr	a
   654D 34 60              5772 	addc	a,#(_txffe_save >> 8)
   654F F5 83              5773 	mov	dph,a
   6551 E0                 5774 	movx	a,@dptr
   6552 FC                 5775 	mov	r4,a
   6553 90 67 A4           5776 	mov	dptr,#_txffe_force_en
   6556 74 01              5777 	mov	a,#0x01
   6558 5C                 5778 	anl	a,r4
   6559 F0                 5779 	movx	@dptr,a
   655A                    5780 00108$:
                           5781 ;	../../shared/src/trx_train.c:1531: gen = gen_rx;
   655A 90 66 16           5782 	mov	dptr,#_gen_rx
   655D E0                 5783 	movx	a,@dptr
                           5784 ;	../../shared/src/trx_train.c:1535: UPHY14_TRX_ANAREG_TOP_128.BT.B0 = rc_save[gen][1]; //ffe_cap1/res1
   655E FA                 5785 	mov	r2,a
   655F 2A                 5786 	add	a,r2
   6560 25 E0              5787 	add	a,acc
   6562 FC                 5788 	mov	r4,a
   6563 24 B4              5789 	add	a,#_rc_save
   6565 FD                 5790 	mov	r5,a
   6566 E4                 5791 	clr	a
   6567 34 60              5792 	addc	a,#(_rc_save >> 8)
   6569 FE                 5793 	mov	r6,a
   656A 8D 82              5794 	mov	dpl,r5
   656C 8E 83              5795 	mov	dph,r6
   656E A3                 5796 	inc	dptr
   656F E0                 5797 	movx	a,@dptr
   6570 90 02 00           5798 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   6573 F0                 5799 	movx	@dptr,a
                           5800 ;	../../shared/src/trx_train.c:1536: UPHY14_TRX_ANAREG_BOT_0.BT.B0   = rc_save[gen][2]; //ffe_cap2/res2/E
   6574 EC                 5801 	mov	a,r4
   6575 24 B4              5802 	add	a,#_rc_save
   6577 FD                 5803 	mov	r5,a
   6578 E4                 5804 	clr	a
   6579 34 60              5805 	addc	a,#(_rc_save >> 8)
   657B FE                 5806 	mov	r6,a
   657C 8D 82              5807 	mov	dpl,r5
   657E 8E 83              5808 	mov	dph,r6
   6580 A3                 5809 	inc	dptr
   6581 A3                 5810 	inc	dptr
   6582 E0                 5811 	movx	a,@dptr
   6583 90 00 00           5812 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   6586 F0                 5813 	movx	@dptr,a
                           5814 ;	../../shared/src/trx_train.c:1537: UPHY14_TRX_ANAREG_TOP_129.BT.B0 = rc_save[gen][3]; //ffe_cap2/res2/O
   6587 EC                 5815 	mov	a,r4
   6588 24 B4              5816 	add	a,#_rc_save
   658A FD                 5817 	mov	r5,a
   658B E4                 5818 	clr	a
   658C 34 60              5819 	addc	a,#(_rc_save >> 8)
   658E FE                 5820 	mov	r6,a
   658F 8D 82              5821 	mov	dpl,r5
   6591 8E 83              5822 	mov	dph,r6
   6593 A3                 5823 	inc	dptr
   6594 A3                 5824 	inc	dptr
   6595 A3                 5825 	inc	dptr
   6596 E0                 5826 	movx	a,@dptr
   6597 90 02 04           5827 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   659A F0                 5828 	movx	@dptr,a
                           5829 ;	../../shared/src/trx_train.c:1550: UPHY14_TRX_ANAREG_BOT_20.BT.B0  = rc_save[gen][0]; //dfe_res_f0/f1/f234
   659B EC                 5830 	mov	a,r4
   659C 24 B4              5831 	add	a,#_rc_save
   659E F5 82              5832 	mov	dpl,a
   65A0 E4                 5833 	clr	a
   65A1 34 60              5834 	addc	a,#(_rc_save >> 8)
   65A3 F5 83              5835 	mov	dph,a
   65A5 E0                 5836 	movx	a,@dptr
   65A6 90 00 50           5837 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   65A9 F0                 5838 	movx	@dptr,a
                           5839 ;	../../shared/src/trx_train.c:1551: UPHY14_TRX_ANAREG_BOT_21.BT.B0 &= 0x1f;
   65AA 90 00 54           5840 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   65AD E0                 5841 	movx	a,@dptr
   65AE FD                 5842 	mov	r5,a
   65AF 53 05 1F           5843 	anl	ar5,#0x1F
                           5844 ;	../../shared/src/trx_train.c:1552: UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= (rc_save[gen][0]&0xe0); //FLOATING/F8TO15/F567	
   65B2 90 00 54           5845 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   65B5 ED                 5846 	mov	a,r5
   65B6 F0                 5847 	movx	@dptr,a
   65B7 E0                 5848 	movx	a,@dptr
   65B8 FD                 5849 	mov	r5,a
   65B9 EC                 5850 	mov	a,r4
   65BA 24 B4              5851 	add	a,#_rc_save
   65BC F5 82              5852 	mov	dpl,a
   65BE E4                 5853 	clr	a
   65BF 34 60              5854 	addc	a,#(_rc_save >> 8)
   65C1 F5 83              5855 	mov	dph,a
   65C3 E0                 5856 	movx	a,@dptr
   65C4 FE                 5857 	mov	r6,a
   65C5 74 E0              5858 	mov	a,#0xE0
   65C7 5E                 5859 	anl	a,r6
   65C8 42 05              5860 	orl	ar5,a
   65CA 90 00 54           5861 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   65CD ED                 5862 	mov	a,r5
   65CE F0                 5863 	movx	@dptr,a
                           5864 ;	../../shared/src/trx_train.c:1560: if(pwrsq_on==1) goto skip_out;
   65CF 90 66 2B           5865 	mov	dptr,#_pwrsq_on
   65D2 E0                 5866 	movx	a,@dptr
   65D3 FD                 5867 	mov	r5,a
   65D4 BD 01 01           5868 	cjne	r5,#0x01,00139$
   65D7 22                 5869 	ret
   65D8                    5870 00139$:
                           5871 ;	../../shared/src/trx_train.c:1562: change = (dfe_phase_save_en & (0x01<<gen)) != 0;
   65D8 C0 04              5872 	push	ar4
   65DA 8A F0              5873 	mov	b,r2
   65DC 05 F0              5874 	inc	b
   65DE 7D 01              5875 	mov	r5,#0x01
   65E0 7E 00              5876 	mov	r6,#0x00
   65E2 80 06              5877 	sjmp	00141$
   65E4                    5878 00140$:
   65E4 ED                 5879 	mov	a,r5
   65E5 2D                 5880 	add	a,r5
   65E6 FD                 5881 	mov	r5,a
   65E7 EE                 5882 	mov	a,r6
   65E8 33                 5883 	rlc	a
   65E9 FE                 5884 	mov	r6,a
   65EA                    5885 00141$:
   65EA D5 F0 F7           5886 	djnz	b,00140$
   65ED 90 67 AA           5887 	mov	dptr,#_dfe_phase_save_en
   65F0 E0                 5888 	movx	a,@dptr
   65F1 FF                 5889 	mov	r7,a
   65F2 7C 00              5890 	mov	r4,#0x00
   65F4 52 05              5891 	anl	ar5,a
   65F6 EC                 5892 	mov	a,r4
   65F7 52 06              5893 	anl	ar6,a
   65F9 E4                 5894 	clr	a
   65FA BD 00 04           5895 	cjne	r5,#0x00,00142$
   65FD BE 00 01           5896 	cjne	r6,#0x00,00142$
   6600 04                 5897 	inc	a
   6601                    5898 00142$:
   6601 FD                 5899 	mov	r5,a
   6602 B4 01 00           5900 	cjne	a,#0x01,00144$
   6605                    5901 00144$:
   6605 E4                 5902 	clr	a
   6606 33                 5903 	rlc	a
   6607 FD                 5904 	mov	r5,a
   6608 FB                 5905 	mov	r3,a
                           5906 ;	../../shared/src/trx_train.c:1563: if(change)
   6609 D0 04              5907 	pop	ar4
   660B EB                 5908 	mov	a,r3
   660C 70 01              5909 	jnz	00145$
   660E 22                 5910 	ret
   660F                    5911 00145$:
                           5912 ;	../../shared/src/trx_train.c:1565: reg_ALIGN90_REF_LANE_5_0 = phase_save[gen][0];
   660F EC                 5913 	mov	a,r4
   6610 24 E4              5914 	add	a,#_phase_save
   6612 F5 82              5915 	mov	dpl,a
   6614 E4                 5916 	clr	a
   6615 34 60              5917 	addc	a,#(_phase_save >> 8)
   6617 F5 83              5918 	mov	dph,a
   6619 E0                 5919 	movx	a,@dptr
   661A 90 00 38           5920 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   661D 25 E0              5921 	add	a,acc
   661F 25 E0              5922 	add	a,acc
   6621 54 FC              5923 	anl	a,#0xfc
   6623 F5 F0              5924 	mov	b,a
   6625 E0                 5925 	movx	a,@dptr
   6626 54 03              5926 	anl	a,#0x03
   6628 45 F0              5927 	orl	a,b
   662A F0                 5928 	movx	@dptr,a
                           5929 ;	../../shared/src/trx_train.c:1566: UPHY14_TRX_ANAREG_BOT_12.BT.B0 = phase_save[gen][1]; //gm
   662B EC                 5930 	mov	a,r4
   662C 24 E4              5931 	add	a,#_phase_save
   662E FB                 5932 	mov	r3,a
   662F E4                 5933 	clr	a
   6630 34 60              5934 	addc	a,#(_phase_save >> 8)
   6632 FD                 5935 	mov	r5,a
   6633 8B 82              5936 	mov	dpl,r3
   6635 8D 83              5937 	mov	dph,r5
   6637 A3                 5938 	inc	dptr
   6638 E0                 5939 	movx	a,@dptr
   6639 90 00 30           5940 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   663C F0                 5941 	movx	@dptr,a
                           5942 ;	../../shared/src/trx_train.c:1567: UPHY14_TRX_ANAREG_BOT_13.BT.B0 = phase_save[gen][2]; //dm, dac
   663D EC                 5943 	mov	a,r4
   663E 24 E4              5944 	add	a,#_phase_save
   6640 FC                 5945 	mov	r4,a
   6641 E4                 5946 	clr	a
   6642 34 60              5947 	addc	a,#(_phase_save >> 8)
   6644 FB                 5948 	mov	r3,a
   6645 8C 82              5949 	mov	dpl,r4
   6647 8B 83              5950 	mov	dph,r3
   6649 A3                 5951 	inc	dptr
   664A A3                 5952 	inc	dptr
   664B E0                 5953 	movx	a,@dptr
                           5954 ;	../../shared/src/trx_train.c:1568: reg_ALIGN90_SYN_CLK_LANE = 1;
   664C 90 00 34           5955 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   664F F0                 5956 	movx	@dptr,a
   6650 E0                 5957 	movx	a,@dptr
   6651 44 01              5958 	orl	a,#0x01
   6653 F0                 5959 	movx	@dptr,a
                           5960 ;	../../shared/src/trx_train.c:1569: short_delay();//delay01(2);
   6654 C0 02              5961 	push	ar2
   6656 78 05              5962 	mov	r0,#_short_delay
   6658 79 C0              5963 	mov	r1,#(_short_delay >> 8)
   665A 7A 02              5964 	mov	r2,#(_short_delay >> 16)
   665C 12 00 B3           5965 	lcall	__sdcc_banked_call
   665F D0 02              5966 	pop	ar2
                           5967 ;	../../shared/src/trx_train.c:1570: reg_ALIGN90_SYN_CLK_LANE = 0;
   6661 90 00 34           5968 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   6664 E0                 5969 	movx	a,@dptr
   6665 54 FE              5970 	anl	a,#0xfe
   6667 F0                 5971 	movx	@dptr,a
                           5972 ;	../../shared/src/trx_train.c:1572: memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&(dfe_sm_save[gen]), sizeof(Status_dfe_sm_t));
   6668 EA                 5973 	mov	a,r2
   6669 75 F0 40           5974 	mov	b,#0x40
   666C A4                 5975 	mul	ab
   666D 24 C0              5976 	add	a,#_dfe_sm_save
   666F FA                 5977 	mov	r2,a
   6670 74 61              5978 	mov	a,#(_dfe_sm_save >> 8)
   6672 35 F0              5979 	addc	a,b
   6674 FB                 5980 	mov	r3,a
   6675 7C 00              5981 	mov	r4,#0x00
   6677 74 40              5982 	mov	a,#0x40
   6679 C0 E0              5983 	push	acc
   667B E4                 5984 	clr	a
   667C C0 E0              5985 	push	acc
   667E C0 02              5986 	push	ar2
   6680 C0 03              5987 	push	ar3
   6682 C0 04              5988 	push	ar4
   6684 90 24 40           5989 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   6687 75 F0 00           5990 	mov	b,#0x00
   668A 78 78              5991 	mov	r0,#_memcpy
   668C 79 C1              5992 	mov	r1,#(_memcpy >> 8)
   668E 7A 02              5993 	mov	r2,#(_memcpy >> 16)
   6690 12 00 B3           5994 	lcall	__sdcc_banked_call
   6693 E5 81              5995 	mov	a,sp
   6695 24 FB              5996 	add	a,#0xfb
   6697 F5 81              5997 	mov	sp,a
                           5998 ;	../../shared/src/trx_train.c:1579: skip_out:
   6699 22                 5999 	ret
                           6000 ;------------------------------------------------------------
                           6001 ;Allocation info for local variables in function 'sq_auto_train_enable'
                           6002 ;------------------------------------------------------------
                           6003 ;rd_sq                     Allocated to registers r2 
                           6004 ;------------------------------------------------------------
                           6005 ;	../../shared/src/trx_train.c:1589: void sq_auto_train_enable(void) {
                           6006 ;	-----------------------------------------
                           6007 ;	 function sq_auto_train_enable
                           6008 ;	-----------------------------------------
   669A                    6009 _sq_auto_train_enable:
                           6010 ;	../../shared/src/trx_train.c:1592: rd_sq = read_sq();
   669A 90 21 71           6011 	mov	dptr,#(_SQ_REG0 + 0x0001)
   669D E0                 6012 	movx	a,@dptr
   669E 23                 6013 	rl	a
   669F 23                 6014 	rl	a
   66A0 54 01              6015 	anl	a,#0x01
   66A2 FA                 6016 	mov	r2,a
                           6017 ;	../../shared/src/trx_train.c:1594: if(pre_sq_rd != rd_sq) { 	
   66A3 90 67 1C           6018 	mov	dptr,#_pre_sq_rd
   66A6 E0                 6019 	movx	a,@dptr
   66A7 FB                 6020 	mov	r3,a
   66A8 B5 02 01           6021 	cjne	a,ar2,00111$
   66AB 22                 6022 	ret
   66AC                    6023 00111$:
                           6024 ;	../../shared/src/trx_train.c:1595: pre_sq_rd = rd_sq;
   66AC 90 67 1C           6025 	mov	dptr,#_pre_sq_rd
   66AF EA                 6026 	mov	a,r2
   66B0 F0                 6027 	movx	@dptr,a
                           6028 ;	../../shared/src/trx_train.c:1596: if(rd_sq==0 && reg_TX_TRAIN_ENABLE_LANE==0) { //assert tx_train			
   66B1 EA                 6029 	mov	a,r2
   66B2 70 0E              6030 	jnz	00106$
   66B4 90 20 10           6031 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   66B7 E0                 6032 	movx	a,@dptr
   66B8 20 E5 07           6033 	jb	acc.5,00106$
                           6034 ;	../../shared/src/trx_train.c:1600: reg_TX_TRAIN_ENABLE_LANE = 1;
   66BB 90 20 10           6035 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   66BE E0                 6036 	movx	a,@dptr
   66BF 44 20              6037 	orl	a,#0x20
   66C1 F0                 6038 	movx	@dptr,a
   66C2                    6039 00106$:
   66C2 22                 6040 	ret
                           6041 ;------------------------------------------------------------
                           6042 ;Allocation info for local variables in function 'sq_wait'
                           6043 ;------------------------------------------------------------
                           6044 ;------------------------------------------------------------
                           6045 ;	../../shared/src/trx_train.c:1606: void sq_wait(void) {
                           6046 ;	-----------------------------------------
                           6047 ;	 function sq_wait
                           6048 ;	-----------------------------------------
   66C3                    6049 _sq_wait:
                           6050 ;	../../shared/src/trx_train.c:1611: timeout_start(500); //0.5uS	
   66C3 75 8B 0C           6051 	mov	_TMR1,#0x0C
   66C6 75 8D FE           6052 	mov	(_TMR1 >> 8),#0xFE
   66C9 D2 8E              6053 	setb	_TR1
   66CB C2 03              6054 	clr	_timeout
                           6055 ;	../../shared/src/trx_train.c:1612: while( read_sq()==1 ) {
   66CD                    6056 00103$:
   66CD 90 21 71           6057 	mov	dptr,#(_SQ_REG0 + 0x0001)
   66D0 E0                 6058 	movx	a,@dptr
   66D1 23                 6059 	rl	a
   66D2 23                 6060 	rl	a
   66D3 54 01              6061 	anl	a,#0x01
   66D5 FA                 6062 	mov	r2,a
   66D6 BA 01 03           6063 	cjne	r2,#0x01,00105$
                           6064 ;	../../shared/src/trx_train.c:1613: if(timeout) break;
   66D9 30 03 F1           6065 	jnb	_timeout,00103$
   66DC                    6066 00105$:
                           6067 ;	../../shared/src/trx_train.c:1615: timeout_stop;
   66DC C2 8E              6068 	clr	_TR1
   66DE C2 8F              6069 	clr	_TF1
   66E0 22                 6070 	ret
                           6071 	.area CSEG    (CODE)
                           6072 	.area CONST   (CODE)
   011D                    6073 _gt0_dfe_res:
   011D 00                 6074 	.db #0x00	; 0
   011E 01                 6075 	.db #0x01	; 1
   011F 02                 6076 	.db #0x02	; 2
   0120 03                 6077 	.db #0x03	; 3
   0121                    6078 _gt1_dfe_res:
   0121 00                 6079 	.db #0x00	; 0
   0122 01                 6080 	.db #0x01	; 1
   0123 02                 6081 	.db #0x02	; 2
   0124 03                 6082 	.db #0x03	; 3
   0125 03                 6083 	.db #0x03	; 3
   0126 03                 6084 	.db #0x03	; 3
   0127 03                 6085 	.db #0x03	; 3
   0128 03                 6086 	.db #0x03	; 3
   0129 03                 6087 	.db #0x03	; 3
   012A 03                 6088 	.db #0x03	; 3
   012B 03                 6089 	.db #0x03	; 3
   012C 03                 6090 	.db #0x03	; 3
   012D 03                 6091 	.db #0x03	; 3
   012E 03                 6092 	.db #0x03	; 3
   012F 03                 6093 	.db #0x03	; 3
   0130 03                 6094 	.db #0x03	; 3
   0131 03                 6095 	.db #0x03	; 3
   0132 03                 6096 	.db #0x03	; 3
   0133 03                 6097 	.db #0x03	; 3
   0134                    6098 _gt1_c:
   0134 0F                 6099 	.db #0x0F	; 15
   0135 0F                 6100 	.db #0x0F	; 15
   0136 0F                 6101 	.db #0x0F	; 15
   0137 0F                 6102 	.db #0x0F	; 15
   0138 0F                 6103 	.db #0x0F	; 15
   0139 0E                 6104 	.db #0x0E	; 14
   013A 0D                 6105 	.db #0x0D	; 13
   013B 0C                 6106 	.db #0x0C	; 12
   013C 0B                 6107 	.db #0x0B	; 11
   013D 0A                 6108 	.db #0x0A	; 10
   013E 09                 6109 	.db #0x09	; 9
   013F 08                 6110 	.db #0x08	; 8
   0140 07                 6111 	.db #0x07	; 7
   0141 06                 6112 	.db #0x06	; 6
   0142 05                 6113 	.db #0x05	; 5
   0143 04                 6114 	.db #0x04	; 4
   0144 03                 6115 	.db #0x03	; 3
   0145 02                 6116 	.db #0x02	; 2
   0146 01                 6117 	.db #0x01	; 1
   0147 00                 6118 	.db #0x00	; 0
   0148                    6119 _gt2_dfe_res:
   0148 00                 6120 	.db #0x00	; 0
   0149 01                 6121 	.db #0x01	; 1
   014A 02                 6122 	.db #0x02	; 2
   014B 03                 6123 	.db #0x03	; 3
   014C 01                 6124 	.db #0x01	; 1
   014D 02                 6125 	.db #0x02	; 2
   014E 03                 6126 	.db #0x03	; 3
   014F                    6127 _gt3_dfe_res:
   014F 00                 6128 	.db #0x00	; 0
   0150 01                 6129 	.db #0x01	; 1
   0151 02                 6130 	.db #0x02	; 2
   0152 03                 6131 	.db #0x03	; 3
   0153 03                 6132 	.db #0x03	; 3
   0154 03                 6133 	.db #0x03	; 3
   0155 03                 6134 	.db #0x03	; 3
   0156 03                 6135 	.db #0x03	; 3
   0157 03                 6136 	.db #0x03	; 3
   0158 03                 6137 	.db #0x03	; 3
   0159 03                 6138 	.db #0x03	; 3
   015A 03                 6139 	.db #0x03	; 3
   015B 03                 6140 	.db #0x03	; 3
   015C 03                 6141 	.db #0x03	; 3
   015D 03                 6142 	.db #0x03	; 3
   015E 03                 6143 	.db #0x03	; 3
   015F 03                 6144 	.db #0x03	; 3
   0160 03                 6145 	.db #0x03	; 3
   0161 03                 6146 	.db #0x03	; 3
   0162 01                 6147 	.db #0x01	; 1
   0163 02                 6148 	.db #0x02	; 2
   0164 03                 6149 	.db #0x03	; 3
   0165                    6150 _gt3_c:
   0165 0F                 6151 	.db #0x0F	; 15
   0166 0F                 6152 	.db #0x0F	; 15
   0167 0F                 6153 	.db #0x0F	; 15
   0168 0F                 6154 	.db #0x0F	; 15
   0169 0F                 6155 	.db #0x0F	; 15
   016A 0E                 6156 	.db #0x0E	; 14
   016B 0D                 6157 	.db #0x0D	; 13
   016C 0C                 6158 	.db #0x0C	; 12
   016D 0B                 6159 	.db #0x0B	; 11
   016E 0A                 6160 	.db #0x0A	; 10
   016F 09                 6161 	.db #0x09	; 9
   0170 08                 6162 	.db #0x08	; 8
   0171 07                 6163 	.db #0x07	; 7
   0172 06                 6164 	.db #0x06	; 6
   0173 05                 6165 	.db #0x05	; 5
   0174 04                 6166 	.db #0x04	; 4
   0175 03                 6167 	.db #0x03	; 3
   0176 02                 6168 	.db #0x02	; 2
   0177 01                 6169 	.db #0x01	; 1
   0178 00                 6170 	.db #0x00	; 0
   0179 00                 6171 	.db #0x00	; 0
   017A 00                 6172 	.db #0x00	; 0
   017B 00                 6173 	.db #0x00	; 0
   017C                    6174 _gt1_c_pcie:
   017C 0C                 6175 	.db #0x0C	; 12
   017D 06                 6176 	.db #0x06	; 6
   017E 04                 6177 	.db #0x04	; 4
   017F                    6178 _Res_sel_Table:
   017F 0B                 6179 	.db #0x0B	; 11
   0180 0A                 6180 	.db #0x0A	; 10
   0181 09                 6181 	.db #0x09	; 9
   0182 08                 6182 	.db #0x08	; 8
   0183 07                 6183 	.db #0x07	; 7
   0184 06                 6184 	.db #0x06	; 6
   0185 05                 6185 	.db #0x05	; 5
   0186 04                 6186 	.db #0x04	; 4
   0187 03                 6187 	.db #0x03	; 3
   0188 02                 6188 	.db #0x02	; 2
   0189 01                 6189 	.db #0x01	; 1
   018A 00                 6190 	.db #0x00	; 0
   018B 00                 6191 	.db #0x00	; 0
   018C 00                 6192 	.db #0x00	; 0
   018D 00                 6193 	.db #0x00	; 0
   018E 00                 6194 	.db #0x00	; 0
   018F                    6195 _Res_sel2_e_Table:
   018F 00                 6196 	.db #0x00	; 0
   0190 00                 6197 	.db #0x00	; 0
   0191 00                 6198 	.db #0x00	; 0
   0192 00                 6199 	.db #0x00	; 0
   0193 00                 6200 	.db #0x00	; 0
   0194 00                 6201 	.db #0x00	; 0
   0195 00                 6202 	.db #0x00	; 0
   0196 00                 6203 	.db #0x00	; 0
   0197 00                 6204 	.db #0x00	; 0
   0198 00                 6205 	.db #0x00	; 0
   0199 00                 6206 	.db #0x00	; 0
   019A 00                 6207 	.db #0x00	; 0
   019B 00                 6208 	.db #0x00	; 0
   019C 00                 6209 	.db #0x00	; 0
   019D 00                 6210 	.db #0x00	; 0
   019E 00                 6211 	.db #0x00	; 0
   019F                    6212 _Res_sel2_o_Table:
   019F 00                 6213 	.db #0x00	; 0
   01A0 00                 6214 	.db #0x00	; 0
   01A1 00                 6215 	.db #0x00	; 0
   01A2 00                 6216 	.db #0x00	; 0
   01A3 00                 6217 	.db #0x00	; 0
   01A4 00                 6218 	.db #0x00	; 0
   01A5 00                 6219 	.db #0x00	; 0
   01A6 00                 6220 	.db #0x00	; 0
   01A7 00                 6221 	.db #0x00	; 0
   01A8 00                 6222 	.db #0x00	; 0
   01A9 00                 6223 	.db #0x00	; 0
   01AA 00                 6224 	.db #0x00	; 0
   01AB 00                 6225 	.db #0x00	; 0
   01AC 00                 6226 	.db #0x00	; 0
   01AD 00                 6227 	.db #0x00	; 0
   01AE 00                 6228 	.db #0x00	; 0
   01AF                    6229 _Cap_sel_Table:
   01AF 00                 6230 	.db #0x00	; 0
   01B0 00                 6231 	.db #0x00	; 0
   01B1 00                 6232 	.db #0x00	; 0
   01B2 00                 6233 	.db #0x00	; 0
   01B3 01                 6234 	.db #0x01	; 1
   01B4 03                 6235 	.db #0x03	; 3
   01B5 05                 6236 	.db #0x05	; 5
   01B6 08                 6237 	.db #0x08	; 8
   01B7 0F                 6238 	.db #0x0F	; 15
   01B8 0F                 6239 	.db #0x0F	; 15
   01B9 0F                 6240 	.db #0x0F	; 15
   01BA 0F                 6241 	.db #0x0F	; 15
   01BB 0F                 6242 	.db #0x0F	; 15
   01BC 0F                 6243 	.db #0x0F	; 15
   01BD 0F                 6244 	.db #0x0F	; 15
   01BE 0F                 6245 	.db #0x0F	; 15
   01BF                    6246 _Cap_sel2_e_Table:
   01BF 00                 6247 	.db #0x00	; 0
   01C0 00                 6248 	.db #0x00	; 0
   01C1 00                 6249 	.db #0x00	; 0
   01C2 00                 6250 	.db #0x00	; 0
   01C3 00                 6251 	.db #0x00	; 0
   01C4 00                 6252 	.db #0x00	; 0
   01C5 00                 6253 	.db #0x00	; 0
   01C6 00                 6254 	.db #0x00	; 0
   01C7 00                 6255 	.db #0x00	; 0
   01C8 01                 6256 	.db #0x01	; 1
   01C9 02                 6257 	.db #0x02	; 2
   01CA 03                 6258 	.db #0x03	; 3
   01CB 05                 6259 	.db #0x05	; 5
   01CC 08                 6260 	.db #0x08	; 8
   01CD 0B                 6261 	.db #0x0B	; 11
   01CE 0F                 6262 	.db #0x0F	; 15
   01CF                    6263 _Cap_sel2_o_Table:
   01CF 00                 6264 	.db #0x00	; 0
   01D0 00                 6265 	.db #0x00	; 0
   01D1 00                 6266 	.db #0x00	; 0
   01D2 00                 6267 	.db #0x00	; 0
   01D3 00                 6268 	.db #0x00	; 0
   01D4 00                 6269 	.db #0x00	; 0
   01D5 00                 6270 	.db #0x00	; 0
   01D6 00                 6271 	.db #0x00	; 0
   01D7 00                 6272 	.db #0x00	; 0
   01D8 01                 6273 	.db #0x01	; 1
   01D9 02                 6274 	.db #0x02	; 2
   01DA 03                 6275 	.db #0x03	; 3
   01DB 05                 6276 	.db #0x05	; 5
   01DC 08                 6277 	.db #0x08	; 8
   01DD 0B                 6278 	.db #0x0B	; 11
   01DE 0F                 6279 	.db #0x0F	; 15
   01DF                    6280 _Cap_sel2_Table:
   01DF 00                 6281 	.db #0x00	; 0
   01E0 00                 6282 	.db #0x00	; 0
   01E1 00                 6283 	.db #0x00	; 0
   01E2 00                 6284 	.db #0x00	; 0
   01E3 00                 6285 	.db #0x00	; 0
   01E4 00                 6286 	.db #0x00	; 0
   01E5 00                 6287 	.db #0x00	; 0
   01E6 00                 6288 	.db #0x00	; 0
   01E7 00                 6289 	.db #0x00	; 0
   01E8 00                 6290 	.db #0x00	; 0
   01E9 01                 6291 	.db #0x01	; 1
   01EA 02                 6292 	.db #0x02	; 2
   01EB 03                 6293 	.db #0x03	; 3
   01EC 03                 6294 	.db #0x03	; 3
   01ED 03                 6295 	.db #0x03	; 3
   01EE 03                 6296 	.db #0x03	; 3
                           6297 	.area CABS    (ABS,CODE)
