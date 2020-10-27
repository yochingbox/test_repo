                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:33 2018
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
                             27 	.globl _link_train_complete
                             28 	.globl _TF2
                             29 	.globl _TI
                             30 	.globl _RI
                             31 	.globl _EX12
                             32 	.globl _EX11
                             33 	.globl _EX10
                             34 	.globl _EX9
                             35 	.globl _EX8
                             36 	.globl _ES1
                             37 	.globl _PS1
                             38 	.globl _EX6
                             39 	.globl _EX5
                             40 	.globl _EX4
                             41 	.globl _EX3
                             42 	.globl _EX2
                             43 	.globl _EX7
                             44 	.globl _EA
                             45 	.globl _WDT
                             46 	.globl _ET2
                             47 	.globl _ES
                             48 	.globl _ET1
                             49 	.globl _EX1
                             50 	.globl _ET0
                             51 	.globl _EX0
                             52 	.globl _TF1
                             53 	.globl _TR1
                             54 	.globl _TF0
                             55 	.globl _TR0
                             56 	.globl _IE1
                             57 	.globl _IT1
                             58 	.globl _IE0
                             59 	.globl _IT0
                             60 	.globl _P3_7
                             61 	.globl _P3_6
                             62 	.globl _P3_5
                             63 	.globl _P3_4
                             64 	.globl _P3_3
                             65 	.globl _P3_2
                             66 	.globl _P3_1
                             67 	.globl _P3_0
                             68 	.globl _P2_7
                             69 	.globl _P2_6
                             70 	.globl _P2_5
                             71 	.globl _P2_4
                             72 	.globl _P2_3
                             73 	.globl _P2_2
                             74 	.globl _P2_1
                             75 	.globl _P2_0
                             76 	.globl _P1_7
                             77 	.globl _P1_6
                             78 	.globl _P1_5
                             79 	.globl _P1_4
                             80 	.globl _P1_3
                             81 	.globl _P1_2
                             82 	.globl _P1_1
                             83 	.globl _P1_0
                             84 	.globl _P0_7
                             85 	.globl _P0_6
                             86 	.globl _P0_5
                             87 	.globl _P0_4
                             88 	.globl _P0_3
                             89 	.globl _P0_2
                             90 	.globl _P0_1
                             91 	.globl _P0_0
                             92 	.globl _DMAC
                             93 	.globl _DMATA
                             94 	.globl _DMASA
                             95 	.globl _TMR2
                             96 	.globl _TMR1
                             97 	.globl _TMR0
                             98 	.globl _SRST
                             99 	.globl _B
                            100 	.globl _EIE
                            101 	.globl _ACC
                            102 	.globl _ADCON
                            103 	.globl _PSW
                            104 	.globl _TH2
                            105 	.globl _TL2
                            106 	.globl _RCAP2H
                            107 	.globl _RCAP2L
                            108 	.globl _T2CON
                            109 	.globl _CCEN
                            110 	.globl _IRCON
                            111 	.globl _S0RELH
                            112 	.globl _IP1
                            113 	.globl _IEN1
                            114 	.globl _DMAM1
                            115 	.globl _DMAM0
                            116 	.globl _DMASEL
                            117 	.globl _DMAC2
                            118 	.globl _DMAC1
                            119 	.globl _DMAC0
                            120 	.globl _P3
                            121 	.globl _S0RELL
                            122 	.globl _IP0
                            123 	.globl _IEN0
                            124 	.globl _DMAT2
                            125 	.globl _DMAT1
                            126 	.globl _DMAT0
                            127 	.globl _DMAS2
                            128 	.globl _DMAS1
                            129 	.globl _DMAS0
                            130 	.globl _P2
                            131 	.globl _IEN2
                            132 	.globl _SBUF
                            133 	.globl _SCON
                            134 	.globl _PSBANK
                            135 	.globl _DPS
                            136 	.globl _P1
                            137 	.globl _CKCON
                            138 	.globl _TH1
                            139 	.globl _TH0
                            140 	.globl _TL1
                            141 	.globl _TL0
                            142 	.globl _TMOD
                            143 	.globl _TCON
                            144 	.globl _PCON
                            145 	.globl _WDTREL
                            146 	.globl _DPH
                            147 	.globl _DPL
                            148 	.globl _P0
                            149 	.globl _sq_thrs_ratio_tb
                            150 	.globl _train_save_tb
                            151 	.globl _tx_tb
                            152 	.globl _UPHY_ANAREG_REV_0
                            153 	.globl _dfe_sm_save
                            154 	.globl _dfe_sm_dc
                            155 	.globl _dfe_sm
                            156 	.globl _cds28
                            157 	.globl _lnx_calx_align90_gm
                            158 	.globl _lnx_calx_align90_dac
                            159 	.globl _lnx_calx_align90_dummy_clk
                            160 	.globl _lnx_calx_eom_dpher
                            161 	.globl _lnx_calx_vdda_dll_eom_sel
                            162 	.globl _lnx_calx_dll_eom_gmsel
                            163 	.globl _lnx_calx_vdda_dll_sel
                            164 	.globl _lnx_calx_dll_gmsel
                            165 	.globl _lnx_calx_rxdcc_dll_hg
                            166 	.globl _lnx_calx_rxdcc_dll
                            167 	.globl _lnx_calx_txdcc_hg
                            168 	.globl _lnx_calx_txdcc
                            169 	.globl _lnx_calx_txdcc_pdiv_hg
                            170 	.globl _lnx_calx_txdcc_pdiv
                            171 	.globl _lnx_spdoft_tx_preset_index_lane
                            172 	.globl _lnx_cal_sellv_rxeomclk
                            173 	.globl _lnx_cal_sellv_rxsampler
                            174 	.globl _lnx_cal_sellv_txpre
                            175 	.globl _lnx_cal_sellv_rxdataclk
                            176 	.globl _lnx_cal_sellv_txclk
                            177 	.globl _lnx_cal_sellv_txdata
                            178 	.globl _lnx_cal_align90_gm
                            179 	.globl _lnx_cal_align90_dac
                            180 	.globl _lnx_cal_align90_dummy_clk
                            181 	.globl _lnx_cal_eom_dpher
                            182 	.globl _lnx_cal_vdda_dll_eom_sel
                            183 	.globl _lnx_cal_dll_eom_gmsel
                            184 	.globl _lnx_cal_vdda_dll_sel
                            185 	.globl _lnx_cal_dll_gmsel
                            186 	.globl _lnx_cal_rxdcc_eom_hg
                            187 	.globl _lnx_cal_rxdcc_eom
                            188 	.globl _lnx_cal_rxdcc_data_hg
                            189 	.globl _lnx_cal_rxdcc_data
                            190 	.globl _lnx_cal_rxdcc_dll_hg
                            191 	.globl _lnx_cal_rxdcc_dll
                            192 	.globl _lnx_cal_txdcc_hg
                            193 	.globl _lnx_cal_txdcc
                            194 	.globl _lnx_cal_txdcc_pdiv_hg
                            195 	.globl _lnx_cal_txdcc_pdiv
                            196 	.globl _cmx_cal_sllp_dac_fine_ring
                            197 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            198 	.globl _cmx_cal_pll_speed_ring
                            199 	.globl _cmx_cal_plldcc
                            200 	.globl _cmx_cal_lccap_lsb
                            201 	.globl _cmx_cal_lccap_msb
                            202 	.globl _cmx_cal_lcvco_dac_msb
                            203 	.globl _cmx_cal_lcvco_dac_lsb
                            204 	.globl _cmx_cal_lcvco_dac
                            205 	.globl _local_tx_preset_tb
                            206 	.globl _train_g0_index
                            207 	.globl _train_g1_index
                            208 	.globl _train_gn1_index
                            209 	.globl _phase_save
                            210 	.globl _txffe_save
                            211 	.globl _rc_save
                            212 	.globl _phy_mode_lane_table
                            213 	.globl _speedtable
                            214 	.globl _min_gen
                            215 	.globl _max_gen
                            216 	.globl _phy_mode_cmn_table
                            217 	.globl _ring_speedtable
                            218 	.globl _lc_speedtable
                            219 	.globl _TXTRAIN_IF_REG0
                            220 	.globl _CDS_READ_MISC1
                            221 	.globl _CDS_READ_MISC0
                            222 	.globl _DFE_READ_F0D_RIGHT_ODD
                            223 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            224 	.globl _DFE_READ_F0D_LEFT_ODD
                            225 	.globl _DFE_READ_F0D_LEFT_EVEN
                            226 	.globl _DFE_READ_F0D_ODD
                            227 	.globl _DFE_READ_F0D_EVEN
                            228 	.globl _DFE_READ_F0B_ODD
                            229 	.globl _DFE_READ_F0B_EVEN
                            230 	.globl _DFE_READ_F0A_ODD
                            231 	.globl _DFE_READ_F0A_EVEN
                            232 	.globl _DFE_READ_ODD_REG8
                            233 	.globl _DFE_READ_EVEN_REG8
                            234 	.globl _DFE_READ_ODD_REG7
                            235 	.globl _DFE_READ_ODD_REG6
                            236 	.globl _DFE_READ_ODD_REG5
                            237 	.globl _DFE_READ_ODD_REG4
                            238 	.globl _DFE_READ_ODD_REG3
                            239 	.globl _DFE_READ_ODD_REG2
                            240 	.globl _DFE_READ_ODD_REG1
                            241 	.globl _DFE_READ_ODD_REG0
                            242 	.globl _DFE_READ_EVEN_REG7
                            243 	.globl _DFE_READ_EVEN_REG6
                            244 	.globl _DFE_READ_EVEN_REG5
                            245 	.globl _DFE_READ_EVEN_REG4
                            246 	.globl _DFE_READ_EVEN_REG3
                            247 	.globl _DFE_READ_EVEN_REG2
                            248 	.globl _DFE_READ_EVEN_REG1
                            249 	.globl _DFE_READ_EVEN_REG0
                            250 	.globl _TX_TRAIN_IF_REG8
                            251 	.globl _TX_TRAIN_CTRL_LANE
                            252 	.globl _TX_TRAIN_IF_REG7
                            253 	.globl _TX_TRAIN_IF_REG6
                            254 	.globl _TX_TRAIN_IF_REG5
                            255 	.globl _TX_TRAIN_IF_REG4
                            256 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            257 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            258 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            259 	.globl _TX_AMP_CTRL_REG0
                            260 	.globl _TX_DRV_RD_OUT_REG0
                            261 	.globl _LINK_TRAIN_MODE0
                            262 	.globl _TX_EMPH_CTRL_REG0
                            263 	.globl _TX_TRAIN_DEFAULT_REG5
                            264 	.globl _TX_TRAIN_DEFAULT_REG4
                            265 	.globl _TX_TRAIN_DEFAULT_REG3
                            266 	.globl _TX_TRAIN_DEFAULT_REG2
                            267 	.globl _TX_TRAIN_DEFAULT_REG1
                            268 	.globl _TX_TRAIN_DEFAULT_REG0
                            269 	.globl _TX_TRAIN_DRIVER_REG2
                            270 	.globl _TX_TRAIN_DRIVER_REG1
                            271 	.globl _TX_TRAIN_DRIVER_REG0
                            272 	.globl _TX_TRAIN_PATTTERN_REG0
                            273 	.globl _TX_TRAIN_IF_REG3
                            274 	.globl _TX_TRAIN_IF_REG2
                            275 	.globl _TX_TRAIN_IF_REG1
                            276 	.globl _TX_TRAIN_IF_REG0
                            277 	.globl _DME_DEC_REG1
                            278 	.globl _DME_DEC_REG0
                            279 	.globl _DME_ENC_REG2
                            280 	.globl _DME_ENC_REG1
                            281 	.globl _DME_ENC_REG0
                            282 	.globl _END_XDAT_CMN
                            283 	.globl _MCU_INFO_13
                            284 	.globl _MCU_INFO_12
                            285 	.globl _MCU_INFO_5
                            286 	.globl _MCU_INFO_4
                            287 	.globl _SYNC_INFO
                            288 	.globl _CDS_EYE_CLK_THR
                            289 	.globl _TX_SAVE_4
                            290 	.globl _TX_SAVE_3
                            291 	.globl _TX_SAVE_2
                            292 	.globl _TX_SAVE_1
                            293 	.globl _TX_SAVE_0
                            294 	.globl _ETH_PRESET1_TB
                            295 	.globl _ETH_PRESET0_TB
                            296 	.globl _SAS_PRESET2_TB
                            297 	.globl _SAS_PRESET1_TB
                            298 	.globl _SAS_PRESET0_TB
                            299 	.globl _G_SELLV_RXSAMPLER
                            300 	.globl _G_SELLV_RXDATACLK
                            301 	.globl _G_SELLV_RXEOMCLK
                            302 	.globl _G_SELLV_TXPRE
                            303 	.globl _G_SELLV_TXDATA
                            304 	.globl _G_SELLV_TXCLK
                            305 	.globl _TIMER_SEL3
                            306 	.globl _TIMER_SEL2
                            307 	.globl _TIMER_SEL1
                            308 	.globl _MCU_CONFIG1
                            309 	.globl _LOOP_CNTS
                            310 	.globl _CAL_DATA1
                            311 	.globl _MCU_CONFIG
                            312 	.globl _CAL_STATUS_READ
                            313 	.globl _CAL_TIME_OUT_AND_DIS
                            314 	.globl _CON_CAL_STEP_SIZE5
                            315 	.globl _CON_CAL_STEP_SIZE4
                            316 	.globl _CON_CAL_STEP_SIZE3
                            317 	.globl _CON_CAL_STEP_SIZE2
                            318 	.globl _CON_CAL_STEP_SIZE1
                            319 	.globl _CONTROL_CONFIG9
                            320 	.globl _CONTROL_CONFIG8
                            321 	.globl _TRAIN_IF_CONFIG
                            322 	.globl _CAL_DATA0
                            323 	.globl _CONTROL_CONFIG7
                            324 	.globl _CONTROL_CONFIG6
                            325 	.globl _CONTROL_CONFIG5
                            326 	.globl _CONTROL_CONFIG4
                            327 	.globl _CONTROL_CONFIG3
                            328 	.globl _CONTROL_CONFIG2
                            329 	.globl _CONTROL_CONFIG1
                            330 	.globl _CONTROL_CONFIG0
                            331 	.globl _FW_REV
                            332 	.globl _CID_REG1
                            333 	.globl _CID_REG0
                            334 	.globl _CMN_MCU_REG
                            335 	.globl _SET_LANE_ISR
                            336 	.globl _CMN_ISR_MASK_1
                            337 	.globl _CMN_ISR_1
                            338 	.globl _CMN_MCU_TIMER3_CONTROL
                            339 	.globl _CMN_MCU_TIMER2_CONTROL
                            340 	.globl _CMN_MCU_TIMER1_CONTROL
                            341 	.globl _CMN_MCU_TIMER0_CONTROL
                            342 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            343 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            344 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            345 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            346 	.globl _CMN_MCU_TIMER_CONTROL
                            347 	.globl _CMN_CACHE_DEBUG1
                            348 	.globl _CMN_MCU_GPIO
                            349 	.globl _CMN_ISR_CLEAR_2
                            350 	.globl _CMN_ISR_MASK_2
                            351 	.globl _CMN_ISR_2
                            352 	.globl _MCU_INT_ADDR
                            353 	.globl _CMN_CACHE_DEBUG0
                            354 	.globl _MCU_SDT_CMN
                            355 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            356 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            357 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            358 	.globl _TEST5
                            359 	.globl _PM_CMN_REG2
                            360 	.globl _INPUT_CMN_PIN_REG3
                            361 	.globl __FIELDNAME_
                            362 	.globl _CMN_CALIBRATION
                            363 	.globl _OUTPUT_CMN_PIN_REG0
                            364 	.globl _SPD_CMN_REG1
                            365 	.globl _CLKGEN_CMN_REG1
                            366 	.globl _PLLCAL_REG1
                            367 	.globl _PLLCAL_REG0
                            368 	.globl _ANA_TSEN_CONTROL
                            369 	.globl _INPUT_CMN_PIN_REG2
                            370 	.globl _INPUT_CMN_PIN_REG1
                            371 	.globl _INPUT_CMN_PIN_REG0
                            372 	.globl _PM_CMN_REG1
                            373 	.globl _SYSTEM
                            374 	.globl _TEST4
                            375 	.globl _TEST3
                            376 	.globl _TEST2
                            377 	.globl _TEST1
                            378 	.globl _TEST0
                            379 	.globl _MCU_SYNC2
                            380 	.globl _MCU_SYNC1
                            381 	.globl _MEM_IRQ_CLEAR
                            382 	.globl _APB_CONTROL_REG
                            383 	.globl _ANA_IF_CMN_REG0
                            384 	.globl _MEM_IRQ_MASK
                            385 	.globl _MEM_IRQ
                            386 	.globl _ANA_IF_CMN_REG1
                            387 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            388 	.globl _MCU_INFO_3
                            389 	.globl _MCU_INFO_2
                            390 	.globl _MCU_INFO_1
                            391 	.globl _MCU_INFO_0
                            392 	.globl _MEMORY_CONTROL_4
                            393 	.globl _MEMORY_CONTROL_3
                            394 	.globl _MEMORY_CONTROL_2
                            395 	.globl _MEMORY_CONTROL_1
                            396 	.globl _MEMORY_CONTROL_0
                            397 	.globl _MCU_DEBUG1
                            398 	.globl _MCU_DEBUG0
                            399 	.globl _MCU_CONTROL_4
                            400 	.globl _MCU_CONTROL_3
                            401 	.globl _MCU_CONTROL_2
                            402 	.globl _MCU_CONTROL_1
                            403 	.globl _MCU_CONTROL_0
                            404 	.globl _GLOB_L1_SUBSTATES_CFG
                            405 	.globl _GLOB_PIPE_REVISION
                            406 	.globl _GLOB_BIST_DATA_HI
                            407 	.globl _GLOB_BIST_SEQR_CFG
                            408 	.globl _GLOB_BIST_RESULT
                            409 	.globl _GLOB_BIST_MASK
                            410 	.globl _GLOB_BIST_START
                            411 	.globl _GLOB_BIST_LANE_TYPE
                            412 	.globl _GLOB_BIST_CTRL
                            413 	.globl _GLOB_DP_BAL_CFG4
                            414 	.globl _GLOB_DP_BAL_CFG2
                            415 	.globl _GLOB_DP_BAL_CFG0
                            416 	.globl _GLOB_PM_DP_CTRL
                            417 	.globl _GLOB_COUNTER_HI
                            418 	.globl _GLOB_COUNTER_CTRL
                            419 	.globl _GLOB_PM_CFG0
                            420 	.globl _GLOB_DP_SAL_CFG5
                            421 	.globl _GLOB_DP_SAL_CFG3
                            422 	.globl _GLOB_DP_SAL_CFG1
                            423 	.globl _GLOB_DP_SAL_CFG
                            424 	.globl _GLOB_MISC_CTRL
                            425 	.globl _GLOB_CLK_SRC_HI
                            426 	.globl _GLOB_CLK_SRC_LO
                            427 	.globl _GLOB_RST_CLK_CTRL
                            428 	.globl _DFE_STATIC_REG6
                            429 	.globl _DFE_STATIC_REG5
                            430 	.globl _DFE_STATIC_REG4
                            431 	.globl _DFE_STATIC_REG3
                            432 	.globl _DFE_STATIC_REG1
                            433 	.globl _DFE_STATIC_REG0
                            434 	.globl _RX_CMN_0
                            435 	.globl _SRIS_REG1
                            436 	.globl _SRIS_REG0
                            437 	.globl _DTX_PHY_ALIGN_REG2
                            438 	.globl _DTX_PHY_ALIGN_REG1
                            439 	.globl _DTX_PHY_ALIGN_REG0
                            440 	.globl _DTX_REG4
                            441 	.globl _DTX_REG3
                            442 	.globl _DTX_REG2
                            443 	.globl _DTX_REG1
                            444 	.globl _DTX_REG0
                            445 	.globl _TX_CMN_REG
                            446 	.globl _END_XDAT_LANE
                            447 	.globl _TRAIN_CONTROL_17
                            448 	.globl _TRAIN_CONTROL_16
                            449 	.globl _TRAIN_CONTROL_15
                            450 	.globl _TRAIN_CONTROL_14
                            451 	.globl _TRAIN_CONTROL_13
                            452 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            453 	.globl _ESM_POP_N_CNT_LOW_LANE
                            454 	.globl _TRAIN_CONTROL_12
                            455 	.globl _TRAIN_CONTROL_11
                            456 	.globl _TRAIN_CONTROL_10
                            457 	.globl _TRAIN_CONTROL_9
                            458 	.globl _TRAIN_CONTROL_8
                            459 	.globl _TRAIN_CONTROL_7
                            460 	.globl _TRAIN_CONTROL_6
                            461 	.globl _TRAIN_CONTROL_5
                            462 	.globl _TRAIN_CONTROL_4
                            463 	.globl _TRAIN_CONTROL_3
                            464 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            465 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            466 	.globl _ESM_POP_P_CNT_LOW_LANE
                            467 	.globl _CDS_CTRL_REG1
                            468 	.globl _CDS_CTRL_REG0
                            469 	.globl _DFE_CONTROL_11
                            470 	.globl _DFE_CONTROL_10
                            471 	.globl _DFE_CONTROL_9
                            472 	.globl _DFE_CONTROL_8
                            473 	.globl _DFE_CONTROL_7
                            474 	.globl _DFE_TEST_5
                            475 	.globl _DFE_TEST_4
                            476 	.globl _DFE_TEST_1
                            477 	.globl _DFE_TEST_0
                            478 	.globl _DFE_CONTROL_6
                            479 	.globl _TRAIN_PARA_3
                            480 	.globl _TRAIN_PARA_2
                            481 	.globl _TRAIN_PARA_1
                            482 	.globl _TRAIN_PARA_0
                            483 	.globl _DLL_CAL
                            484 	.globl _RPTA_CONFIG_1
                            485 	.globl _RPTA_CONFIG_0
                            486 	.globl _TRAIN_CONTROL_2
                            487 	.globl _TRAIN_CONTROL_1
                            488 	.globl _TRAIN_CONTROL_0
                            489 	.globl _DFE_CONTROL_5
                            490 	.globl _DFE_CONTROL_4
                            491 	.globl _DFE_CONTROL_3
                            492 	.globl _DFE_CONTROL_2
                            493 	.globl _DFE_CONTROL_1
                            494 	.globl _DFE_CONTROL_0
                            495 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            496 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            497 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            498 	.globl _PHY_LOCAL_VALUE_LANE
                            499 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            500 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            501 	.globl _CAL_SAVE_DATA3_LANE
                            502 	.globl _CAL_SAVE_DATA2_LANE
                            503 	.globl _CAL_SAVE_DATA1_LANE
                            504 	.globl _CAL_CTRL4_LANE
                            505 	.globl _CAL_CTRL3_LANE
                            506 	.globl _CAL_CTRL2_LANE
                            507 	.globl _CAL_CTRL1_LANE
                            508 	.globl _LANE_MARGIN_REG0
                            509 	.globl _EOM_VLD_REG4
                            510 	.globl _EOM_REG0
                            511 	.globl _EOM_ERR_REG3
                            512 	.globl _EOM_ERR_REG2
                            513 	.globl _EOM_ERR_REG1
                            514 	.globl _EOM_ERR_REG0
                            515 	.globl _EOM_VLD_REG3
                            516 	.globl _EOM_VLD_REG2
                            517 	.globl _EOM_VLD_REG1
                            518 	.globl _EOM_VLD_REG0
                            519 	.globl _DFE_STATIC_LANE_REG6
                            520 	.globl _DFE_STATIC_LANE_REG5
                            521 	.globl _DFE_STATIC_LANE_REG4
                            522 	.globl _DFE_STATIC_LANE_REG3
                            523 	.globl _DFE_STATIC_LANE_REG1
                            524 	.globl _DFE_STATIC_LANE_REG0
                            525 	.globl _DFE_DCE_REG0
                            526 	.globl _CAL_OFST_REG2
                            527 	.globl _CAL_OFST_REG1
                            528 	.globl _CAL_OFST_REG0
                            529 	.globl _DFE_READ_ODD_2C_REG8
                            530 	.globl _DFE_READ_EVEN_2C_REG8
                            531 	.globl _DFE_READ_ODD_2C_REG7
                            532 	.globl _DFE_READ_ODD_2C_REG6
                            533 	.globl _DFE_READ_ODD_2C_REG5
                            534 	.globl _DFE_READ_ODD_2C_REG4
                            535 	.globl _DFE_READ_ODD_2C_REG3
                            536 	.globl _DFE_READ_ODD_2C_REG2
                            537 	.globl _DFE_READ_ODD_2C_REG1
                            538 	.globl _DFE_READ_ODD_2C_REG0
                            539 	.globl _DFE_READ_EVEN_2C_REG7
                            540 	.globl _DFE_READ_EVEN_2C_REG6
                            541 	.globl _DFE_READ_EVEN_2C_REG5
                            542 	.globl _DFE_READ_EVEN_2C_REG4
                            543 	.globl _DFE_READ_EVEN_2C_REG3
                            544 	.globl _DFE_READ_EVEN_2C_REG2
                            545 	.globl _DFE_READ_EVEN_2C_REG1
                            546 	.globl _DFE_READ_EVEN_2C_REG0
                            547 	.globl _DFE_READ_ODD_SM_REG8
                            548 	.globl _DFE_READ_EVEN_SM_REG8
                            549 	.globl _DFE_READ_ODD_SM_REG7
                            550 	.globl _DFE_READ_ODD_SM_REG6
                            551 	.globl _DFE_READ_ODD_SM_REG5
                            552 	.globl _DFE_READ_ODD_SM_REG4
                            553 	.globl _DFE_READ_ODD_SM_REG3
                            554 	.globl _DFE_READ_ODD_SM_REG2
                            555 	.globl _DFE_READ_ODD_SM_REG1
                            556 	.globl _DFE_READ_ODD_SM_REG0
                            557 	.globl _DFE_READ_EVEN_SM_REG7
                            558 	.globl _DFE_READ_EVEN_SM_REG6
                            559 	.globl _DFE_READ_EVEN_SM_REG5
                            560 	.globl _DFE_READ_EVEN_SM_REG4
                            561 	.globl _DFE_READ_EVEN_SM_REG3
                            562 	.globl _DFE_READ_EVEN_SM_REG2
                            563 	.globl _DFE_READ_EVEN_SM_REG1
                            564 	.globl _DFE_READ_EVEN_SM_REG0
                            565 	.globl _DFE_FEXT_ODD_REG7
                            566 	.globl _DFE_FEXT_ODD_REG6
                            567 	.globl _DFE_FEXT_ODD_REG5
                            568 	.globl _DFE_FEXT_ODD_REG4
                            569 	.globl _DFE_FEXT_ODD_REG3
                            570 	.globl _DFE_FEXT_ODD_REG2
                            571 	.globl _DFE_FEXT_ODD_REG1
                            572 	.globl _DFE_FEXT_ODD_REG0
                            573 	.globl _DFE_FEXT_EVEN_REG7
                            574 	.globl _DFE_FEXT_EVEN_REG6
                            575 	.globl _DFE_FEXT_EVEN_REG5
                            576 	.globl _DFE_FEXT_EVEN_REG4
                            577 	.globl _DFE_FEXT_EVEN_REG3
                            578 	.globl _DFE_FEXT_EVEN_REG2
                            579 	.globl _DFE_FEXT_EVEN_REG1
                            580 	.globl _DFE_FEXT_EVEN_REG0
                            581 	.globl _DFE_DC_ODD_REG8
                            582 	.globl _DFE_DC_EVEN_REG8
                            583 	.globl _DFE_FEN_ODD_REG
                            584 	.globl _DFE_FEN_EVEN_REG
                            585 	.globl _DFE_STEP_REG1
                            586 	.globl _DFE_STEP_REG0
                            587 	.globl _DFE_ANA_REG1
                            588 	.globl _DFE_ANA_REG0
                            589 	.globl _DFE_CTRL_REG4
                            590 	.globl _RX_EQ_CLK_CTRL
                            591 	.globl _DFE_CTRL_REG3
                            592 	.globl _DFE_CTRL_REG2
                            593 	.globl _DFE_CTRL_REG1
                            594 	.globl _DFE_CTRL_REG0
                            595 	.globl _PT_COUNTER2
                            596 	.globl _PT_COUNTER1
                            597 	.globl _PT_COUNTER0
                            598 	.globl _PT_USER_PATTERN2
                            599 	.globl _PT_USER_PATTERN1
                            600 	.globl _PT_USER_PATTERN0
                            601 	.globl _PT_CONTROL1
                            602 	.globl _PT_CONTROL0
                            603 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            604 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            605 	.globl _MEM_ECC_ERR_ADDRESS0
                            606 	.globl _MCU_COMMAND0
                            607 	.globl _MCU_INT_CONTROL_13
                            608 	.globl _MCU_WDT_LANE
                            609 	.globl _MCU_IRQ_ISR_LANE
                            610 	.globl _ANA_IF_DFEO_REG0
                            611 	.globl _ANA_IF_DFEE_REG0
                            612 	.globl _ANA_IF_TRX_REG0
                            613 	.globl _EXT_INT_CONTROL
                            614 	.globl _MCU_DEBUG_LANE
                            615 	.globl _MCU_DEBUG3_LANE
                            616 	.globl _MCU_DEBUG2_LANE
                            617 	.globl _MCU_DEBUG1_LANE
                            618 	.globl _MCU_DEBUG0_LANE
                            619 	.globl _MCU_TIMER_CTRL_7_LANE
                            620 	.globl _MCU_TIMER_CTRL_6_LANE
                            621 	.globl _MCU_TIMER_CTRL_5_LANE
                            622 	.globl _MCU_TIMER_CTRL_4_LANE
                            623 	.globl _MCU_TIMER_CTRL_3_LANE
                            624 	.globl _MCU_TIMER_CTRL_2_LANE
                            625 	.globl _MCU_TIMER_CTRL_1_LANE
                            626 	.globl _MCU_MEM_REG2_LANE
                            627 	.globl _MCU_MEM_REG1_LANE
                            628 	.globl _MCU_IRQ_MASK_LANE
                            629 	.globl _MCU_IRQ_LANE
                            630 	.globl _MCU_TIMER3_CONTROL
                            631 	.globl _MCU_TIMER2_CONTROL
                            632 	.globl _MCU_TIMER1_CONTROL
                            633 	.globl _MCU_TIMER0_CONTROL
                            634 	.globl _MCU_TIMER_CONTROL
                            635 	.globl _MCU_INT12_CONTROL
                            636 	.globl _MCU_INT11_CONTROL
                            637 	.globl _MCU_INT10_CONTROL
                            638 	.globl _MCU_INT9_CONTROL
                            639 	.globl _MCU_INT8_CONTROL
                            640 	.globl _MCU_INT7_CONTROL
                            641 	.globl _MCU_INT6_CONTROL
                            642 	.globl _MCU_INT5_CONTROL
                            643 	.globl _MCU_INT4_CONTROL
                            644 	.globl _MCU_INT3_CONTROL
                            645 	.globl _MCU_INT2_CONTROL
                            646 	.globl _MCU_INT1_CONTROL
                            647 	.globl _MCU_INT0_CONTROL
                            648 	.globl _MCU_STATUS3_LANE
                            649 	.globl _MCU_STATUS2_LANE
                            650 	.globl _MCU_STATUS1_LANE
                            651 	.globl _MCU_STATUS0_LANE
                            652 	.globl _LANE_SYSTEM0
                            653 	.globl _CACHE_DEBUG1
                            654 	.globl _CACHE_DEBUG0
                            655 	.globl _MCU_GPIO
                            656 	.globl _MCU_CONTROL_LANE
                            657 	.globl _LANE_32G_PRESET_CFG16_LANE
                            658 	.globl _LANE_32G_PRESET_CFG14_LANE
                            659 	.globl _LANE_32G_PRESET_CFG12_LANE
                            660 	.globl _LANE_32G_PRESET_CFG10_LANE
                            661 	.globl _LANE_32G_PRESET_CFG8_LANE
                            662 	.globl _LANE_32G_PRESET_CFG6_LANE
                            663 	.globl _LANE_32G_PRESET_CFG4_LANE
                            664 	.globl _LANE_32G_PRESET_CFG2_LANE
                            665 	.globl _LANE_32G_PRESET_CFG0_LANE
                            666 	.globl _LANE_EQ_32G_CFG0_LANE
                            667 	.globl _LANE_16G_PRESET_CFG16_LANE
                            668 	.globl _LANE_16G_PRESET_CFG14_LANE
                            669 	.globl _LANE_16G_PRESET_CFG12_LANE
                            670 	.globl _LANE_16G_PRESET_CFG10_LANE
                            671 	.globl _LANE_16G_PRESET_CFG8_LANE
                            672 	.globl _LANE_16G_PRESET_CFG6_LANE
                            673 	.globl _LANE_16G_PRESET_CFG4_LANE
                            674 	.globl _LANE_16G_PRESET_CFG2_LANE
                            675 	.globl _LANE_16G_PRESET_CFG0_LANE
                            676 	.globl _LANE_EQ_16G_CFG0_LANE
                            677 	.globl _LANE_REMOTE_SET_LANE
                            678 	.globl _LANE_COEFF_MAX0_LANE
                            679 	.globl _LANE_PRESET_CFG16_LANE
                            680 	.globl _LANE_PRESET_CFG14_LANE
                            681 	.globl _LANE_PRESET_CFG12_LANE
                            682 	.globl _LANE_PRESET_CFG10_LANE
                            683 	.globl _LANE_PRESET_CFG8_LANE
                            684 	.globl _LANE_PRESET_CFG6_LANE
                            685 	.globl _LANE_PRESET_CFG4_LANE
                            686 	.globl _LANE_PRESET_CFG2_LANE
                            687 	.globl _LANE_PRESET_CFG0_LANE
                            688 	.globl _LANE_EQ_CFG1_LANE
                            689 	.globl _LANE_EQ_CFG0_LANE
                            690 	.globl _LANE_USB_DP_CFG2_LANE
                            691 	.globl _LANE_USB_DP_CFG1_LANE
                            692 	.globl _LANE_DP_PIE8_CFG0_LANE
                            693 	.globl _LANE_CFG_STATUS3_LANE
                            694 	.globl _LANE_CFG4
                            695 	.globl _LANE_CFG2_LANE
                            696 	.globl _LANE_CFG_STATUS2_LANE
                            697 	.globl _LANE_STATUS0
                            698 	.globl _LANE_CFG0
                            699 	.globl _SQ_REG0
                            700 	.globl _DTL_REG3
                            701 	.globl _DTL_REG2
                            702 	.globl _DTL_REG1
                            703 	.globl _DTL_REG0
                            704 	.globl _RX_LANE_INTERRUPT_REG1
                            705 	.globl _RX_CALIBRATION_REG
                            706 	.globl _INPUT_RX_PIN_REG3_LANE
                            707 	.globl _RX_DATA_PATH_REG
                            708 	.globl _RX_LANE_INTERRUPT_MASK
                            709 	.globl _RX_LANE_INTERRUPT
                            710 	.globl _CDR_LOCK_REG
                            711 	.globl _FRAME_SYNC_DET_REG6
                            712 	.globl _FRAME_SYNC_DET_REG5
                            713 	.globl _FRAME_SYNC_DET_REG4
                            714 	.globl _FRAME_SYNC_DET_REG3
                            715 	.globl _FRAME_SYNC_DET_REG2
                            716 	.globl _FRAME_SYNC_DET_REG1
                            717 	.globl _FRAME_SYNC_DET_REG0
                            718 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            719 	.globl _DIG_RX_RSVD_REG0
                            720 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            721 	.globl _INPUT_RX_PIN_REG2_LANE
                            722 	.globl _INPUT_RX_PIN_REG1_LANE
                            723 	.globl _INPUT_RX_PIN_REG0_LANE
                            724 	.globl _RX_SYSTEM_LANE
                            725 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            726 	.globl _MON_TOP
                            727 	.globl _ANALOG_TX_REALTIME_REG_1
                            728 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            729 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            730 	.globl __FIELDNAME__LANE
                            731 	.globl _INPUT_TX_PIN_REG5_LANE
                            732 	.globl _DIG_TX_RSVD_REG0
                            733 	.globl _TX_CALIBRATION_LANE
                            734 	.globl _INPUT_TX_PIN_REG4_LANE
                            735 	.globl _TX_SYSTEM_LANE
                            736 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            737 	.globl _SPD_CTRL_INTERRUPT_REG2
                            738 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            739 	.globl _TX_SPEED_CONVERT_LANE
                            740 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            741 	.globl _PM_CTRL_INTERRUPT_REG2
                            742 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            743 	.globl _INPUT_TX_PIN_REG3_LANE
                            744 	.globl _INPUT_TX_PIN_REG2_LANE
                            745 	.globl _INPUT_TX_PIN_REG1_LANE
                            746 	.globl _INPUT_TX_PIN_REG0_LANE
                            747 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            748 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            823 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            824 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            825 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            826 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            827 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            828 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            829 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            830 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            831 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            832 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            833 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            834 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            835 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            836 	.globl _ANA_DFEO_REG_0B
                            837 	.globl _ANA_DFEO_REG_0A
                            838 	.globl _ANA_DFEO_REG_09
                            839 	.globl _ANA_DFEO_REG_08
                            840 	.globl _ANA_DFEO_REG_07
                            841 	.globl _ANA_DFEO_REG_06
                            842 	.globl _ANA_DFEO_REG_05
                            843 	.globl _ANA_DFEO_REG_04
                            844 	.globl _ANA_DFEO_REG_03
                            845 	.globl _ANA_DFEO_REG_02
                            846 	.globl _ANA_DFEO_REG_01
                            847 	.globl _ANA_DFEO_REG_00
                            848 	.globl _ANA_DFEO_REG_27
                            849 	.globl _ANA_DFEO_REG_26
                            850 	.globl _ANA_DFEO_REG_25
                            851 	.globl _ANA_DFEO_REG_24
                            852 	.globl _ANA_DFEO_REG_23
                            853 	.globl _ANA_DFEO_REG_22
                            854 	.globl _ANA_DFEO_REG_21
                            855 	.globl _ANA_DFEO_REG_20
                            856 	.globl _ANA_DFEO_REG_1F
                            857 	.globl _ANA_DFEO_REG_1E
                            858 	.globl _ANA_DFEO_REG_1D
                            859 	.globl _ANA_DFEO_REG_1C
                            860 	.globl _ANA_DFEO_REG_1B
                            861 	.globl _ANA_DFEO_REG_1A
                            862 	.globl _ANA_DFEO_REG_19
                            863 	.globl _ANA_DFEO_REG_18
                            864 	.globl _ANA_DFEO_REG_17
                            865 	.globl _ANA_DFEO_REG_16
                            866 	.globl _ANA_DFEO_REG_15
                            867 	.globl _ANA_DFEO_REG_14
                            868 	.globl _ANA_DFEO_REG_13
                            869 	.globl _ANA_DFEO_REG_12
                            870 	.globl _ANA_DFEO_REG_11
                            871 	.globl _ANA_DFEO_REG_10
                            872 	.globl _ANA_DFEO_REG_0F
                            873 	.globl _ANA_DFEO_REG_0E
                            874 	.globl _ANA_DFEO_REG_0D
                            875 	.globl _ANA_DFEO_REG_0C
                            876 	.globl _ANA_DFEE_REG_1D
                            877 	.globl _ANA_DFEE_REG_1C
                            878 	.globl _ANA_DFEE_REG_1B
                            879 	.globl _ANA_DFEE_REG_1A
                            880 	.globl _ANA_DFEE_REG_19
                            881 	.globl _ANA_DFEE_REG_18
                            882 	.globl _ANA_DFEE_REG_17
                            883 	.globl _ANA_DFEE_REG_16
                            884 	.globl _ANA_DFEE_REG_15
                            885 	.globl _ANA_DFEE_REG_14
                            886 	.globl _ANA_DFEE_REG_13
                            887 	.globl _ANA_DFEE_REG_12
                            888 	.globl _ANA_DFEE_REG_11
                            889 	.globl _ANA_DFEE_REG_10
                            890 	.globl _ANA_DFEE_REG_0F
                            891 	.globl _ANA_DFEE_REG_0E
                            892 	.globl _ANA_DFEE_REG_0D
                            893 	.globl _ANA_DFEE_REG_0C
                            894 	.globl _ANA_DFEE_REG_0B
                            895 	.globl _ANA_DFEE_REG_0A
                            896 	.globl _ANA_DFEE_REG_09
                            897 	.globl _ANA_DFEE_REG_08
                            898 	.globl _ANA_DFEE_REG_07
                            899 	.globl _ANA_DFEE_REG_06
                            900 	.globl _ANA_DFEE_REG_05
                            901 	.globl _ANA_DFEE_REG_04
                            902 	.globl _ANA_DFEE_REG_03
                            903 	.globl _ANA_DFEE_REG_02
                            904 	.globl _ANA_DFEE_REG_01
                            905 	.globl _ANA_DFEE_REG_00
                            906 	.globl _ANA_DFEE_REG_27
                            907 	.globl _ANA_DFEE_REG_26
                            908 	.globl _ANA_DFEE_REG_25
                            909 	.globl _ANA_DFEE_REG_24
                            910 	.globl _ANA_DFEE_REG_23
                            911 	.globl _ANA_DFEE_REG_22
                            912 	.globl _ANA_DFEE_REG_21
                            913 	.globl _ANA_DFEE_REG_20
                            914 	.globl _ANA_DFEE_REG_1F
                            915 	.globl _ANA_DFEE_REG_1E
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            936 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            937 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            938 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            939 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            940 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            941 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            942 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            943 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            944 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            945 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            946 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            947 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            948 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            966 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            967 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            968 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            969 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            970 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            971 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            972 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            973 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            974 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            975 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            976 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            977 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            978 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            982 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            983 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            984 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            985 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            986 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            987 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            988 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            989 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            990 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            991 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            992 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            993 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            994 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            995 	.globl _TRX_Train
                            996 	.globl _trx_train_one_time
                            997 	.globl _trx_train_init
                            998 	.globl _trx_train_control
                            999 	.globl _trx_train_end
                           1000 	.globl _gain_train
                           1001 	.globl _update_opt_trx_ffe
                           1002 	.globl _dfe_cdr_phase_opt
                           1003 	.globl _train_status_reset
                           1004 	.globl _opt2train
                           1005 	.globl _train2opt
                           1006 	.globl _Set_Rx_FFE
                           1007 	.globl _save_train
                           1008 	.globl _restore_train
                           1009 	.globl _sq_auto_train_enable
                           1010 ;--------------------------------------------------------
                           1011 ; special function registers
                           1012 ;--------------------------------------------------------
                           1013 	.area RSEG    (ABS,DATA)
   0000                    1014 	.org 0x0000
                    0080   1015 _P0	=	0x0080
                    0082   1016 _DPL	=	0x0082
                    0083   1017 _DPH	=	0x0083
                    0086   1018 _WDTREL	=	0x0086
                    0087   1019 _PCON	=	0x0087
                    0088   1020 _TCON	=	0x0088
                    0089   1021 _TMOD	=	0x0089
                    008A   1022 _TL0	=	0x008a
                    008B   1023 _TL1	=	0x008b
                    008C   1024 _TH0	=	0x008c
                    008D   1025 _TH1	=	0x008d
                    008E   1026 _CKCON	=	0x008e
                    0090   1027 _P1	=	0x0090
                    0092   1028 _DPS	=	0x0092
                    0094   1029 _PSBANK	=	0x0094
                    0098   1030 _SCON	=	0x0098
                    0099   1031 _SBUF	=	0x0099
                    009A   1032 _IEN2	=	0x009a
                    00A0   1033 _P2	=	0x00a0
                    00A1   1034 _DMAS0	=	0x00a1
                    00A2   1035 _DMAS1	=	0x00a2
                    00A3   1036 _DMAS2	=	0x00a3
                    00A4   1037 _DMAT0	=	0x00a4
                    00A5   1038 _DMAT1	=	0x00a5
                    00A6   1039 _DMAT2	=	0x00a6
                    00A8   1040 _IEN0	=	0x00a8
                    00A9   1041 _IP0	=	0x00a9
                    00AA   1042 _S0RELL	=	0x00aa
                    00B0   1043 _P3	=	0x00b0
                    00B1   1044 _DMAC0	=	0x00b1
                    00B2   1045 _DMAC1	=	0x00b2
                    00B3   1046 _DMAC2	=	0x00b3
                    00B4   1047 _DMASEL	=	0x00b4
                    00B5   1048 _DMAM0	=	0x00b5
                    00B6   1049 _DMAM1	=	0x00b6
                    00B8   1050 _IEN1	=	0x00b8
                    00B9   1051 _IP1	=	0x00b9
                    00BA   1052 _S0RELH	=	0x00ba
                    00C0   1053 _IRCON	=	0x00c0
                    00C1   1054 _CCEN	=	0x00c1
                    00C8   1055 _T2CON	=	0x00c8
                    00CA   1056 _RCAP2L	=	0x00ca
                    00CB   1057 _RCAP2H	=	0x00cb
                    00CC   1058 _TL2	=	0x00cc
                    00CD   1059 _TH2	=	0x00cd
                    00D0   1060 _PSW	=	0x00d0
                    00D8   1061 _ADCON	=	0x00d8
                    00E0   1062 _ACC	=	0x00e0
                    00E8   1063 _EIE	=	0x00e8
                    00F0   1064 _B	=	0x00f0
                    00F7   1065 _SRST	=	0x00f7
                    8C8A   1066 _TMR0	=	0x8c8a
                    8D8B   1067 _TMR1	=	0x8d8b
                    CDCC   1068 _TMR2	=	0xcdcc
                    A2A1   1069 _DMASA	=	0xa2a1
                    A5A4   1070 _DMATA	=	0xa5a4
                    B2B1   1071 _DMAC	=	0xb2b1
                           1072 ;--------------------------------------------------------
                           1073 ; special function bits
                           1074 ;--------------------------------------------------------
                           1075 	.area RSEG    (ABS,DATA)
   0000                    1076 	.org 0x0000
                    0080   1077 _P0_0	=	0x0080
                    0081   1078 _P0_1	=	0x0081
                    0082   1079 _P0_2	=	0x0082
                    0083   1080 _P0_3	=	0x0083
                    0084   1081 _P0_4	=	0x0084
                    0085   1082 _P0_5	=	0x0085
                    0086   1083 _P0_6	=	0x0086
                    0087   1084 _P0_7	=	0x0087
                    0090   1085 _P1_0	=	0x0090
                    0091   1086 _P1_1	=	0x0091
                    0092   1087 _P1_2	=	0x0092
                    0093   1088 _P1_3	=	0x0093
                    0094   1089 _P1_4	=	0x0094
                    0095   1090 _P1_5	=	0x0095
                    0096   1091 _P1_6	=	0x0096
                    0097   1092 _P1_7	=	0x0097
                    00A0   1093 _P2_0	=	0x00a0
                    00A1   1094 _P2_1	=	0x00a1
                    00A2   1095 _P2_2	=	0x00a2
                    00A3   1096 _P2_3	=	0x00a3
                    00A4   1097 _P2_4	=	0x00a4
                    00A5   1098 _P2_5	=	0x00a5
                    00A6   1099 _P2_6	=	0x00a6
                    00A7   1100 _P2_7	=	0x00a7
                    00B0   1101 _P3_0	=	0x00b0
                    00B1   1102 _P3_1	=	0x00b1
                    00B2   1103 _P3_2	=	0x00b2
                    00B3   1104 _P3_3	=	0x00b3
                    00B4   1105 _P3_4	=	0x00b4
                    00B5   1106 _P3_5	=	0x00b5
                    00B6   1107 _P3_6	=	0x00b6
                    00B7   1108 _P3_7	=	0x00b7
                    0088   1109 _IT0	=	0x0088
                    0089   1110 _IE0	=	0x0089
                    008A   1111 _IT1	=	0x008a
                    008B   1112 _IE1	=	0x008b
                    008C   1113 _TR0	=	0x008c
                    008D   1114 _TF0	=	0x008d
                    008E   1115 _TR1	=	0x008e
                    008F   1116 _TF1	=	0x008f
                    00A8   1117 _EX0	=	0x00a8
                    00A9   1118 _ET0	=	0x00a9
                    00AA   1119 _EX1	=	0x00aa
                    00AB   1120 _ET1	=	0x00ab
                    00AC   1121 _ES	=	0x00ac
                    00AD   1122 _ET2	=	0x00ad
                    00AE   1123 _WDT	=	0x00ae
                    00AF   1124 _EA	=	0x00af
                    00B8   1125 _EX7	=	0x00b8
                    00B9   1126 _EX2	=	0x00b9
                    00BA   1127 _EX3	=	0x00ba
                    00BB   1128 _EX4	=	0x00bb
                    00BC   1129 _EX5	=	0x00bc
                    00BD   1130 _EX6	=	0x00bd
                    00BE   1131 _PS1	=	0x00be
                    009A   1132 _ES1	=	0x009a
                    009B   1133 _EX8	=	0x009b
                    009C   1134 _EX9	=	0x009c
                    009D   1135 _EX10	=	0x009d
                    009E   1136 _EX11	=	0x009e
                    009F   1137 _EX12	=	0x009f
                    0098   1138 _RI	=	0x0098
                    0099   1139 _TI	=	0x0099
                    00C6   1140 _TF2	=	0x00c6
                           1141 ;--------------------------------------------------------
                           1142 ; overlayable register banks
                           1143 ;--------------------------------------------------------
                           1144 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1145 	.ds 8
                           1146 ;--------------------------------------------------------
                           1147 ; overlayable bit register bank
                           1148 ;--------------------------------------------------------
                           1149 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1150 bits:
   0025                    1151 	.ds 1
                    8000   1152 	b0 = bits[0]
                    8100   1153 	b1 = bits[1]
                    8200   1154 	b2 = bits[2]
                    8300   1155 	b3 = bits[3]
                    8400   1156 	b4 = bits[4]
                    8500   1157 	b5 = bits[5]
                    8600   1158 	b6 = bits[6]
                    8700   1159 	b7 = bits[7]
                           1160 ;--------------------------------------------------------
                           1161 ; internal ram data
                           1162 ;--------------------------------------------------------
                           1163 	.area DSEG    (DATA)
                           1164 ;--------------------------------------------------------
                           1165 ; overlayable items in internal ram 
                           1166 ;--------------------------------------------------------
                           1167 	.area OSEG    (OVR,DATA)
                           1168 ;--------------------------------------------------------
                           1169 ; indirectly addressable internal ram data
                           1170 ;--------------------------------------------------------
                           1171 	.area ISEG    (DATA)
                           1172 ;--------------------------------------------------------
                           1173 ; absolute internal ram data
                           1174 ;--------------------------------------------------------
                           1175 	.area IABS    (ABS,DATA)
                           1176 	.area IABS    (ABS,DATA)
                           1177 ;--------------------------------------------------------
                           1178 ; bit data
                           1179 ;--------------------------------------------------------
                           1180 	.area BSEG    (BIT)
                           1181 ;--------------------------------------------------------
                           1182 ; paged external ram data
                           1183 ;--------------------------------------------------------
                           1184 	.area PSEG    (PAG,XDATA)
                           1185 ;--------------------------------------------------------
                           1186 ; external ram data
                           1187 ;--------------------------------------------------------
                           1188 	.area XSEG    (XDATA)
                    1000   1189 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1190 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1191 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1192 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1193 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1194 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1195 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1196 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1197 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1198 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1199 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1200 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1201 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1202 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1203 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1204 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1205 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1206 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1207 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1208 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1209 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1210 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1211 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1212 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1213 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1214 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1215 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1216 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1217 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1218 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1219 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1220 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1221 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1222 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1223 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1224 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1225 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1226 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1227 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1228 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1229 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1230 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1231 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1232 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1233 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1234 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1235 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1236 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1237 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1238 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1239 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1240 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1241 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1242 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1243 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1244 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1245 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1246 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1247 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1248 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1249 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1250 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1251 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1252 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1253 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1254 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1255 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1256 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1257 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1258 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1259 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1260 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1261 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1262 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1263 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1264 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1265 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1266 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1267 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1268 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1269 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1270 _ANA_DFEE_REG_20	=	0x0480
                    0484   1271 _ANA_DFEE_REG_21	=	0x0484
                    0488   1272 _ANA_DFEE_REG_22	=	0x0488
                    048C   1273 _ANA_DFEE_REG_23	=	0x048c
                    0490   1274 _ANA_DFEE_REG_24	=	0x0490
                    0494   1275 _ANA_DFEE_REG_25	=	0x0494
                    0498   1276 _ANA_DFEE_REG_26	=	0x0498
                    049C   1277 _ANA_DFEE_REG_27	=	0x049c
                    0400   1278 _ANA_DFEE_REG_00	=	0x0400
                    0404   1279 _ANA_DFEE_REG_01	=	0x0404
                    0408   1280 _ANA_DFEE_REG_02	=	0x0408
                    040C   1281 _ANA_DFEE_REG_03	=	0x040c
                    0410   1282 _ANA_DFEE_REG_04	=	0x0410
                    0414   1283 _ANA_DFEE_REG_05	=	0x0414
                    0418   1284 _ANA_DFEE_REG_06	=	0x0418
                    041C   1285 _ANA_DFEE_REG_07	=	0x041c
                    0420   1286 _ANA_DFEE_REG_08	=	0x0420
                    0424   1287 _ANA_DFEE_REG_09	=	0x0424
                    0428   1288 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1289 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1290 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1291 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1292 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1293 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1294 _ANA_DFEE_REG_10	=	0x0440
                    0444   1295 _ANA_DFEE_REG_11	=	0x0444
                    0448   1296 _ANA_DFEE_REG_12	=	0x0448
                    044C   1297 _ANA_DFEE_REG_13	=	0x044c
                    0450   1298 _ANA_DFEE_REG_14	=	0x0450
                    0454   1299 _ANA_DFEE_REG_15	=	0x0454
                    0458   1300 _ANA_DFEE_REG_16	=	0x0458
                    045C   1301 _ANA_DFEE_REG_17	=	0x045c
                    0460   1302 _ANA_DFEE_REG_18	=	0x0460
                    0464   1303 _ANA_DFEE_REG_19	=	0x0464
                    0468   1304 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1305 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1306 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1307 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1308 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1309 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1310 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1311 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1312 _ANA_DFEO_REG_10	=	0x0840
                    0844   1313 _ANA_DFEO_REG_11	=	0x0844
                    0848   1314 _ANA_DFEO_REG_12	=	0x0848
                    084C   1315 _ANA_DFEO_REG_13	=	0x084c
                    0850   1316 _ANA_DFEO_REG_14	=	0x0850
                    0854   1317 _ANA_DFEO_REG_15	=	0x0854
                    0858   1318 _ANA_DFEO_REG_16	=	0x0858
                    085C   1319 _ANA_DFEO_REG_17	=	0x085c
                    0860   1320 _ANA_DFEO_REG_18	=	0x0860
                    0864   1321 _ANA_DFEO_REG_19	=	0x0864
                    0868   1322 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1323 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1324 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1325 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1326 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1327 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1328 _ANA_DFEO_REG_20	=	0x0880
                    0884   1329 _ANA_DFEO_REG_21	=	0x0884
                    0888   1330 _ANA_DFEO_REG_22	=	0x0888
                    088C   1331 _ANA_DFEO_REG_23	=	0x088c
                    0890   1332 _ANA_DFEO_REG_24	=	0x0890
                    0894   1333 _ANA_DFEO_REG_25	=	0x0894
                    0898   1334 _ANA_DFEO_REG_26	=	0x0898
                    089C   1335 _ANA_DFEO_REG_27	=	0x089c
                    0800   1336 _ANA_DFEO_REG_00	=	0x0800
                    0804   1337 _ANA_DFEO_REG_01	=	0x0804
                    0808   1338 _ANA_DFEO_REG_02	=	0x0808
                    080C   1339 _ANA_DFEO_REG_03	=	0x080c
                    0810   1340 _ANA_DFEO_REG_04	=	0x0810
                    0814   1341 _ANA_DFEO_REG_05	=	0x0814
                    0818   1342 _ANA_DFEO_REG_06	=	0x0818
                    081C   1343 _ANA_DFEO_REG_07	=	0x081c
                    0820   1344 _ANA_DFEO_REG_08	=	0x0820
                    0824   1345 _ANA_DFEO_REG_09	=	0x0824
                    0828   1346 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1347 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1348 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1349 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1350 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1351 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1352 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1353 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1354 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1355 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1356 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1357 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1358 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1359 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1360 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1361 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1362 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1363 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1364 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1365 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1366 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1367 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1368 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1369 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1370 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1371 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1372 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1373 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1374 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1375 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1376 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1377 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1378 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1379 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1380 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1381 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1382 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1383 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1384 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1385 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1386 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1387 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1388 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1389 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1390 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1391 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1392 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1393 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1394 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1395 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1396 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1397 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1398 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1399 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1400 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1401 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1402 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1403 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1404 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1405 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1406 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1407 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1408 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1409 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1410 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1411 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1412 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1413 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1414 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1415 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1416 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1417 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1418 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1419 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1420 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1421 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1422 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1423 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1424 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1425 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1426 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1427 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1428 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1429 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1430 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1431 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1432 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1433 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1434 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1435 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1436 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1437 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1438 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1439 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1440 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1441 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1442 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1443 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1444 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1445 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1446 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1447 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1448 _TX_SYSTEM_LANE	=	0x2034
                    203C   1449 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1450 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1451 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1452 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1453 __FIELDNAME__LANE	=	0x204c
                    2050   1454 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1455 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1456 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1457 _MON_TOP	=	0x205c
                    2100   1458 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1459 _RX_SYSTEM_LANE	=	0x2104
                    2108   1460 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1461 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1462 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1463 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1464 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1465 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1466 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1467 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1468 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1469 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1470 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1471 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1472 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1473 _CDR_LOCK_REG	=	0x213c
                    2140   1474 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1475 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1476 _RX_DATA_PATH_REG	=	0x2148
                    214C   1477 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1478 _RX_CALIBRATION_REG	=	0x2150
                    2158   1479 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1480 _DTL_REG0	=	0x2160
                    2164   1481 _DTL_REG1	=	0x2164
                    2168   1482 _DTL_REG2	=	0x2168
                    216C   1483 _DTL_REG3	=	0x216c
                    2170   1484 _SQ_REG0	=	0x2170
                    4000   1485 _LANE_CFG0	=	0x4000
                    4004   1486 _LANE_STATUS0	=	0x4004
                    4008   1487 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1488 _LANE_CFG2_LANE	=	0x400c
                    4010   1489 _LANE_CFG4	=	0x4010
                    4014   1490 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1491 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1492 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1493 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1494 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1495 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1496 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1497 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1498 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1499 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1500 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1501 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1502 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1503 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1504 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1505 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1506 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1507 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1508 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1509 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1510 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1511 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1512 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1513 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1514 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1515 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1516 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1517 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1518 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1519 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1520 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1521 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1522 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1523 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1524 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1525 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1526 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1527 _MCU_CONTROL_LANE	=	0x2200
                    2204   1528 _MCU_GPIO	=	0x2204
                    2208   1529 _CACHE_DEBUG0	=	0x2208
                    220C   1530 _CACHE_DEBUG1	=	0x220c
                    2210   1531 _LANE_SYSTEM0	=	0x2210
                    2230   1532 _MCU_STATUS0_LANE	=	0x2230
                    2234   1533 _MCU_STATUS1_LANE	=	0x2234
                    2238   1534 _MCU_STATUS2_LANE	=	0x2238
                    223C   1535 _MCU_STATUS3_LANE	=	0x223c
                    2240   1536 _MCU_INT0_CONTROL	=	0x2240
                    2244   1537 _MCU_INT1_CONTROL	=	0x2244
                    2248   1538 _MCU_INT2_CONTROL	=	0x2248
                    224C   1539 _MCU_INT3_CONTROL	=	0x224c
                    2250   1540 _MCU_INT4_CONTROL	=	0x2250
                    2254   1541 _MCU_INT5_CONTROL	=	0x2254
                    2258   1542 _MCU_INT6_CONTROL	=	0x2258
                    225C   1543 _MCU_INT7_CONTROL	=	0x225c
                    2260   1544 _MCU_INT8_CONTROL	=	0x2260
                    2264   1545 _MCU_INT9_CONTROL	=	0x2264
                    2268   1546 _MCU_INT10_CONTROL	=	0x2268
                    226C   1547 _MCU_INT11_CONTROL	=	0x226c
                    2270   1548 _MCU_INT12_CONTROL	=	0x2270
                    2274   1549 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1550 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1551 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1552 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1553 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1554 _MCU_IRQ_LANE	=	0x2288
                    228C   1555 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1556 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1557 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1558 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1559 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1560 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1561 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1562 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1563 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1564 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1565 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1566 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1567 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1568 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1569 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1570 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1571 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1572 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1573 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1574 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1575 _MCU_WDT_LANE	=	0x22dc
                    22E0   1576 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1577 _MCU_COMMAND0	=	0x22e4
                    22F4   1578 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1579 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1580 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1581 _PT_CONTROL0	=	0x2300
                    2304   1582 _PT_CONTROL1	=	0x2304
                    2308   1583 _PT_USER_PATTERN0	=	0x2308
                    230C   1584 _PT_USER_PATTERN1	=	0x230c
                    2310   1585 _PT_USER_PATTERN2	=	0x2310
                    2314   1586 _PT_COUNTER0	=	0x2314
                    2318   1587 _PT_COUNTER1	=	0x2318
                    231C   1588 _PT_COUNTER2	=	0x231c
                    2400   1589 _DFE_CTRL_REG0	=	0x2400
                    2404   1590 _DFE_CTRL_REG1	=	0x2404
                    2408   1591 _DFE_CTRL_REG2	=	0x2408
                    240C   1592 _DFE_CTRL_REG3	=	0x240c
                    2410   1593 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1594 _DFE_CTRL_REG4	=	0x2414
                    2418   1595 _DFE_ANA_REG0	=	0x2418
                    241C   1596 _DFE_ANA_REG1	=	0x241c
                    2420   1597 _DFE_STEP_REG0	=	0x2420
                    2424   1598 _DFE_STEP_REG1	=	0x2424
                    2430   1599 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1600 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1601 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1602 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1603 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1604 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1605 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1606 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1607 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1608 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1609 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1610 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1611 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1612 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1613 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1614 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1615 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1616 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1617 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1618 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1619 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1620 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1621 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1622 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1623 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1624 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1625 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1626 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1627 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1628 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1629 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1630 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1631 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1632 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1633 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1634 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1635 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1636 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1637 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1638 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1639 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1640 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1641 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1642 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1643 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1644 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1645 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1646 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1647 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1648 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1649 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1650 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1651 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1652 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1653 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1654 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1655 _CAL_OFST_REG0	=	0x2518
                    251C   1656 _CAL_OFST_REG1	=	0x251c
                    2520   1657 _CAL_OFST_REG2	=	0x2520
                    2530   1658 _DFE_DCE_REG0	=	0x2530
                    2540   1659 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1660 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1661 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1662 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1663 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1664 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1665 _EOM_VLD_REG0	=	0x2560
                    2564   1666 _EOM_VLD_REG1	=	0x2564
                    2568   1667 _EOM_VLD_REG2	=	0x2568
                    256C   1668 _EOM_VLD_REG3	=	0x256c
                    2570   1669 _EOM_ERR_REG0	=	0x2570
                    2574   1670 _EOM_ERR_REG1	=	0x2574
                    2578   1671 _EOM_ERR_REG2	=	0x2578
                    257C   1672 _EOM_ERR_REG3	=	0x257c
                    2580   1673 _EOM_REG0	=	0x2580
                    25F0   1674 _EOM_VLD_REG4	=	0x25f0
                    25F4   1675 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1676 _CAL_CTRL1_LANE	=	0x6000
                    6004   1677 _CAL_CTRL2_LANE	=	0x6004
                    6008   1678 _CAL_CTRL3_LANE	=	0x6008
                    600C   1679 _CAL_CTRL4_LANE	=	0x600c
                    6010   1680 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1681 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1682 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1683 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1684 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1685 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1686 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1687 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1688 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1689 _DFE_CONTROL_0	=	0x6034
                    6038   1690 _DFE_CONTROL_1	=	0x6038
                    6040   1691 _DFE_CONTROL_2	=	0x6040
                    6044   1692 _DFE_CONTROL_3	=	0x6044
                    6048   1693 _DFE_CONTROL_4	=	0x6048
                    604C   1694 _DFE_CONTROL_5	=	0x604c
                    6050   1695 _TRAIN_CONTROL_0	=	0x6050
                    6054   1696 _TRAIN_CONTROL_1	=	0x6054
                    6058   1697 _TRAIN_CONTROL_2	=	0x6058
                    605C   1698 _RPTA_CONFIG_0	=	0x605c
                    6060   1699 _RPTA_CONFIG_1	=	0x6060
                    6064   1700 _DLL_CAL	=	0x6064
                    6068   1701 _TRAIN_PARA_0	=	0x6068
                    606C   1702 _TRAIN_PARA_1	=	0x606c
                    6070   1703 _TRAIN_PARA_2	=	0x6070
                    6074   1704 _TRAIN_PARA_3	=	0x6074
                    6078   1705 _DFE_CONTROL_6	=	0x6078
                    607C   1706 _DFE_TEST_0	=	0x607c
                    6080   1707 _DFE_TEST_1	=	0x6080
                    6084   1708 _DFE_TEST_4	=	0x6084
                    6088   1709 _DFE_TEST_5	=	0x6088
                    608C   1710 _DFE_CONTROL_7	=	0x608c
                    6090   1711 _DFE_CONTROL_8	=	0x6090
                    6094   1712 _DFE_CONTROL_9	=	0x6094
                    6098   1713 _DFE_CONTROL_10	=	0x6098
                    609C   1714 _DFE_CONTROL_11	=	0x609c
                    60A0   1715 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1716 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1717 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1718 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1719 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1720 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1721 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1722 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1723 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1724 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1725 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1726 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1727 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1728 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1729 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1730 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1731 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1732 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1733 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1734 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1735 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1736 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1737 _END_XDAT_LANE	=	0x60f8
                    A000   1738 _TX_CMN_REG	=	0xa000
                    A008   1739 _DTX_REG0	=	0xa008
                    A00C   1740 _DTX_REG1	=	0xa00c
                    A010   1741 _DTX_REG2	=	0xa010
                    A014   1742 _DTX_REG3	=	0xa014
                    A018   1743 _DTX_REG4	=	0xa018
                    A01C   1744 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1745 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1746 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1747 _SRIS_REG0	=	0xa02c
                    A030   1748 _SRIS_REG1	=	0xa030
                    A100   1749 _RX_CMN_0	=	0xa100
                    A110   1750 _DFE_STATIC_REG0	=	0xa110
                    A114   1751 _DFE_STATIC_REG1	=	0xa114
                    A118   1752 _DFE_STATIC_REG3	=	0xa118
                    A11C   1753 _DFE_STATIC_REG4	=	0xa11c
                    A120   1754 _DFE_STATIC_REG5	=	0xa120
                    A124   1755 _DFE_STATIC_REG6	=	0xa124
                    4200   1756 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1757 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1758 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1759 _GLOB_MISC_CTRL	=	0x420c
                    4210   1760 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1761 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1762 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1763 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1764 _GLOB_PM_CFG0	=	0x4220
                    4224   1765 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1766 _GLOB_COUNTER_HI	=	0x4228
                    422C   1767 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1768 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1769 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1770 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1771 _GLOB_BIST_CTRL	=	0x423c
                    4240   1772 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1773 _GLOB_BIST_START	=	0x4244
                    4248   1774 _GLOB_BIST_MASK	=	0x4248
                    424C   1775 _GLOB_BIST_RESULT	=	0x424c
                    4250   1776 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1777 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1778 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1779 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1780 _MCU_CONTROL_0	=	0xa200
                    A204   1781 _MCU_CONTROL_1	=	0xa204
                    A208   1782 _MCU_CONTROL_2	=	0xa208
                    A20C   1783 _MCU_CONTROL_3	=	0xa20c
                    A210   1784 _MCU_CONTROL_4	=	0xa210
                    A214   1785 _MCU_DEBUG0	=	0xa214
                    A218   1786 _MCU_DEBUG1	=	0xa218
                    A21C   1787 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1788 _MEMORY_CONTROL_1	=	0xa220
                    A224   1789 _MEMORY_CONTROL_2	=	0xa224
                    A228   1790 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1791 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1792 _MCU_INFO_0	=	0xa234
                    A238   1793 _MCU_INFO_1	=	0xa238
                    A23C   1794 _MCU_INFO_2	=	0xa23c
                    A240   1795 _MCU_INFO_3	=	0xa240
                    A244   1796 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1797 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1798 _MEM_IRQ	=	0xa2e4
                    A2E8   1799 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1800 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1801 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1802 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1803 _MCU_SYNC1	=	0xa2f8
                    A2FC   1804 _MCU_SYNC2	=	0xa2fc
                    A300   1805 _TEST0	=	0xa300
                    A304   1806 _TEST1	=	0xa304
                    A308   1807 _TEST2	=	0xa308
                    A30C   1808 _TEST3	=	0xa30c
                    A310   1809 _TEST4	=	0xa310
                    A314   1810 _SYSTEM	=	0xa314
                    A318   1811 _PM_CMN_REG1	=	0xa318
                    A31C   1812 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1813 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1814 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1815 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1816 _PLLCAL_REG0	=	0xa32c
                    A330   1817 _PLLCAL_REG1	=	0xa330
                    A334   1818 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1819 _SPD_CMN_REG1	=	0xa338
                    A33C   1820 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1821 _CMN_CALIBRATION	=	0xa340
                    A344   1822 __FIELDNAME_	=	0xa344
                    A348   1823 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1824 _PM_CMN_REG2	=	0xa34c
                    A354   1825 _TEST5	=	0xa354
                    A358   1826 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1827 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1828 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1829 _MCU_SDT_CMN	=	0xa364
                    A368   1830 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1831 _MCU_INT_ADDR	=	0xa36c
                    A370   1832 _CMN_ISR_2	=	0xa370
                    A374   1833 _CMN_ISR_MASK_2	=	0xa374
                    A378   1834 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1835 _CMN_MCU_GPIO	=	0xa37c
                    A380   1836 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1837 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1838 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1839 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1840 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1841 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1842 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1843 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1844 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1845 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1846 _CMN_ISR_1	=	0xa3a8
                    A3AC   1847 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1848 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1849 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1850 _CID_REG0	=	0xa3f8
                    A3FC   1851 _CID_REG1	=	0xa3fc
                    E600   1852 _FW_REV	=	0xe600
                    E604   1853 _CONTROL_CONFIG0	=	0xe604
                    E608   1854 _CONTROL_CONFIG1	=	0xe608
                    E60C   1855 _CONTROL_CONFIG2	=	0xe60c
                    E610   1856 _CONTROL_CONFIG3	=	0xe610
                    E614   1857 _CONTROL_CONFIG4	=	0xe614
                    E618   1858 _CONTROL_CONFIG5	=	0xe618
                    E61C   1859 _CONTROL_CONFIG6	=	0xe61c
                    E620   1860 _CONTROL_CONFIG7	=	0xe620
                    E624   1861 _CAL_DATA0	=	0xe624
                    E628   1862 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1863 _CONTROL_CONFIG8	=	0xe62c
                    E630   1864 _CONTROL_CONFIG9	=	0xe630
                    E634   1865 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1866 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1867 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1868 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1869 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1870 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1871 _CAL_STATUS_READ	=	0xe64c
                    E650   1872 _MCU_CONFIG	=	0xe650
                    E654   1873 _CAL_DATA1	=	0xe654
                    E658   1874 _LOOP_CNTS	=	0xe658
                    E65C   1875 _MCU_CONFIG1	=	0xe65c
                    E660   1876 _TIMER_SEL1	=	0xe660
                    E664   1877 _TIMER_SEL2	=	0xe664
                    E668   1878 _TIMER_SEL3	=	0xe668
                    E66C   1879 _G_SELLV_TXCLK	=	0xe66c
                    E670   1880 _G_SELLV_TXDATA	=	0xe670
                    E674   1881 _G_SELLV_TXPRE	=	0xe674
                    E678   1882 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1883 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1884 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1885 _SAS_PRESET0_TB	=	0xe684
                    E688   1886 _SAS_PRESET1_TB	=	0xe688
                    E68C   1887 _SAS_PRESET2_TB	=	0xe68c
                    E690   1888 _ETH_PRESET0_TB	=	0xe690
                    E694   1889 _ETH_PRESET1_TB	=	0xe694
                    E698   1890 _TX_SAVE_0	=	0xe698
                    E69C   1891 _TX_SAVE_1	=	0xe69c
                    E6A0   1892 _TX_SAVE_2	=	0xe6a0
                    E6A4   1893 _TX_SAVE_3	=	0xe6a4
                    E6A8   1894 _TX_SAVE_4	=	0xe6a8
                    E6AC   1895 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1896 _SYNC_INFO	=	0xe6b0
                    E6B4   1897 _MCU_INFO_4	=	0xe6b4
                    E6B8   1898 _MCU_INFO_5	=	0xe6b8
                    E6BC   1899 _MCU_INFO_12	=	0xe6bc
                    E6C0   1900 _MCU_INFO_13	=	0xe6c0
                    E6C4   1901 _END_XDAT_CMN	=	0xe6c4
                    2600   1902 _DME_ENC_REG0	=	0x2600
                    2604   1903 _DME_ENC_REG1	=	0x2604
                    2608   1904 _DME_ENC_REG2	=	0x2608
                    260C   1905 _DME_DEC_REG0	=	0x260c
                    2610   1906 _DME_DEC_REG1	=	0x2610
                    2614   1907 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1908 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1909 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1910 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1911 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1912 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1913 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1914 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1915 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1916 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1917 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1918 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1919 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1920 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1921 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1922 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1923 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1924 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1925 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1926 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1927 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1928 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1929 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1930 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1931 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1932 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1933 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1934 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1935 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1936 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1937 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1938 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1939 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1940 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1941 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1942 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1943 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1944 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1945 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1946 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1947 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1948 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1949 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1950 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1951 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1952 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1953 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1954 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1955 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1956 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1957 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1958 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1959 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1960 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1961 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1962 _CDS_READ_MISC0	=	0x6170
                    6174   1963 _CDS_READ_MISC1	=	0x6174
                    6214   1964 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1965 _lc_speedtable	=	0xe000
                    E1C0   1966 _ring_speedtable	=	0xe1c0
                    E5C0   1967 _phy_mode_cmn_table	=	0xe5c0
                    6300   1968 _max_gen	=	0x6300
                    6301   1969 _min_gen	=	0x6301
                    6304   1970 _speedtable	=	0x6304
                    65D4   1971 _phy_mode_lane_table	=	0x65d4
                    60B4   1972 _rc_save	=	0x60b4
                    60D0   1973 _txffe_save	=	0x60d0
                    60E4   1974 _phase_save	=	0x60e4
                    6030   1975 _train_gn1_index	=	0x6030
                    6031   1976 _train_g1_index	=	0x6031
                    6032   1977 _train_g0_index	=	0x6032
                    E6B0   1978 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1979 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1980 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1981 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1982 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1983 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1984 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1985 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1986 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1987 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1988 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1989 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1990 _lnx_cal_txdcc	=	0x65da
                    65DE   1991 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1992 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1993 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1994 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1995 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1996 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1997 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1998 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1999 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   2000 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   2001 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   2002 _lnx_cal_eom_dpher	=	0x6610
                    6612   2003 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   2004 _lnx_cal_align90_dac	=	0x661a
                    6622   2005 _lnx_cal_align90_gm	=	0x6622
                    662A   2006 _lnx_cal_sellv_txdata	=	0x662a
                    6634   2007 _lnx_cal_sellv_txclk	=	0x6634
                    663E   2008 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   2009 _lnx_cal_sellv_txpre	=	0x6648
                    6652   2010 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   2011 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   2012 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   2013 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   2014 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   2015 _lnx_calx_txdcc	=	0x6499
                    649F   2016 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   2017 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   2018 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   2019 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2020 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2021 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2022 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2023 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2024 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2025 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2026 _lnx_calx_align90_gm	=	0x64d8
                    6100   2027 _cds28	=	0x6100
                    6178   2028 _dfe_sm	=	0x6178
                    61B8   2029 _dfe_sm_dc	=	0x61b8
                    61C0   2030 _dfe_sm_save	=	0x61c0
                    03FC   2031 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2032 _tx_tb	=	0xe684
                    E698   2033 _train_save_tb	=	0xe698
                    607C   2034 _sq_thrs_ratio_tb	=	0x607c
                           2035 ;--------------------------------------------------------
                           2036 ; absolute external ram data
                           2037 ;--------------------------------------------------------
                           2038 	.area XABS    (ABS,XDATA)
                           2039 ;--------------------------------------------------------
                           2040 ; external initialized ram data
                           2041 ;--------------------------------------------------------
                           2042 	.area HOME    (CODE)
                           2043 	.area GSINIT0 (CODE)
                           2044 	.area GSINIT1 (CODE)
                           2045 	.area GSINIT2 (CODE)
                           2046 	.area GSINIT3 (CODE)
                           2047 	.area GSINIT4 (CODE)
                           2048 	.area GSINIT5 (CODE)
                           2049 	.area GSINIT  (CODE)
                           2050 	.area GSFINAL (CODE)
                           2051 	.area CSEG    (CODE)
                           2052 ;--------------------------------------------------------
                           2053 ; global & static initialisations
                           2054 ;--------------------------------------------------------
                           2055 	.area HOME    (CODE)
                           2056 	.area GSINIT  (CODE)
                           2057 	.area GSFINAL (CODE)
                           2058 	.area GSINIT  (CODE)
                           2059 ;--------------------------------------------------------
                           2060 ; Home
                           2061 ;--------------------------------------------------------
                           2062 	.area HOME    (CODE)
                           2063 	.area HOME    (CODE)
                           2064 ;--------------------------------------------------------
                           2065 ; code
                           2066 ;--------------------------------------------------------
                           2067 	.area CSEG    (CODE)
                           2068 ;------------------------------------------------------------
                           2069 ;Allocation info for local variables in function 'link_train_complete'
                           2070 ;------------------------------------------------------------
                           2071 ;------------------------------------------------------------
                           2072 ;	../../shared/src/trx_train.c:13: void link_train_complete(void) {
                           2073 ;	-----------------------------------------
                           2074 ;	 function link_train_complete
                           2075 ;	-----------------------------------------
   4E4C                    2076 _link_train_complete:
                    0002   2077 	ar2 = 0x02
                    0003   2078 	ar3 = 0x03
                    0004   2079 	ar4 = 0x04
                    0005   2080 	ar5 = 0x05
                    0006   2081 	ar6 = 0x06
                    0007   2082 	ar7 = 0x07
                    0000   2083 	ar0 = 0x00
                    0001   2084 	ar1 = 0x01
                           2085 ;	../../shared/src/trx_train.c:14: timeout_start(5000); //5mS
   4E4C 75 8B 78           2086 	mov	_TMR1,#0x78
   4E4F 75 8D EC           2087 	mov	(_TMR1 >> 8),#0xEC
   4E52 D2 8E              2088 	setb	_TR1
   4E54 C2 03              2089 	clr	_timeout
                           2090 ;	../../shared/src/trx_train.c:17: if( tx_pipe4_en==1 )
   4E56 30 26 07           2091 	jnb	_tx_pipe4_en,00102$
                           2092 ;	../../shared/src/trx_train.c:18: reg_TX_FFE_TRAIN_DONE_LANE = 1;
   4E59 90 26 79           2093 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   4E5C E0                 2094 	movx	a,@dptr
   4E5D 44 80              2095 	orl	a,#0x80
   4E5F F0                 2096 	movx	@dptr,a
   4E60                    2097 00102$:
                           2098 ;	../../shared/src/trx_train.c:20: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;		
   4E60 90 26 7B           2099 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   4E63 E0                 2100 	movx	a,@dptr
   4E64 44 10              2101 	orl	a,#0x10
   4E66 F0                 2102 	movx	@dptr,a
                           2103 ;	../../shared/src/trx_train.c:21: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;
   4E67 90 26 78           2104 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   4E6A E0                 2105 	movx	a,@dptr
   4E6B 44 04              2106 	orl	a,#0x04
   4E6D F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/trx_train.c:22: while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) { //wait for PIPE deassert.
   4E6E                    2109 00110$:
   4E6E 90 26 79           2110 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   4E71 E0                 2111 	movx	a,@dptr
   4E72 30 E6 24           2112 	jnb	acc.6,00112$
                           2113 ;	../../shared/src/trx_train.c:23: if(lnx_SQ_AUTO_TRAIN_LANE) {
   4E75 90 60 3A           2114 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   4E78 E0                 2115 	movx	a,@dptr
   4E79 30 E6 09           2116 	jnb	acc.6,00104$
                           2117 ;	../../shared/src/trx_train.c:27: reg_TX_TRAIN_ENABLE_LANE = 0;
   4E7C 90 20 10           2118 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   4E7F E0                 2119 	movx	a,@dptr
   4E80 54 DF              2120 	anl	a,#0xdf
   4E82 F0                 2121 	movx	@dptr,a
                           2122 ;	../../shared/src/trx_train.c:28: break;
   4E83 80 14              2123 	sjmp	00112$
   4E85                    2124 00104$:
                           2125 ;	../../shared/src/trx_train.c:30: if(PHY_NS != ST_INIT) break;
   4E85 90 22 31           2126 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   4E88 E0                 2127 	movx	a,@dptr
   4E89 70 0E              2128 	jnz	00112$
                           2129 ;	../../shared/src/trx_train.c:32: if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1 && timeout ) break;
   4E8B 90 60 33           2130 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   4E8E E0                 2131 	movx	a,@dptr
   4E8F 23                 2132 	rl	a
   4E90 54 01              2133 	anl	a,#0x01
   4E92 FA                 2134 	mov	r2,a
   4E93 BA 01 D8           2135 	cjne	r2,#0x01,00110$
   4E96 30 03 D5           2136 	jnb	_timeout,00110$
   4E99                    2137 00112$:
                           2138 ;	../../shared/src/trx_train.c:34: timeout_stop;
   4E99 C2 8E              2139 	clr	_TR1
   4E9B C2 8F              2140 	clr	_TF1
                           2141 ;	../../shared/src/trx_train.c:36: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   4E9D 90 26 78           2142 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   4EA0 E0                 2143 	movx	a,@dptr
   4EA1 54 FB              2144 	anl	a,#0xfb
   4EA3 F0                 2145 	movx	@dptr,a
                           2146 ;	../../shared/src/trx_train.c:37: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
   4EA4 90 26 7B           2147 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   4EA7 E0                 2148 	movx	a,@dptr
   4EA8 54 EF              2149 	anl	a,#0xef
   4EAA F0                 2150 	movx	@dptr,a
                           2151 ;	../../shared/src/trx_train.c:40: do_train = 0;
   4EAB C2 06              2152 	clr	_do_train
   4EAD 22                 2153 	ret
                           2154 ;------------------------------------------------------------
                           2155 ;Allocation info for local variables in function 'TRX_Train'
                           2156 ;------------------------------------------------------------
                           2157 ;timer_chk                 Allocated to registers r2 r3 
                           2158 ;------------------------------------------------------------
                           2159 ;	../../shared/src/trx_train.c:110: void TRX_Train(void) {
                           2160 ;	-----------------------------------------
                           2161 ;	 function TRX_Train
                           2162 ;	-----------------------------------------
   4EAE                    2163 _TRX_Train:
                           2164 ;	../../shared/src/trx_train.c:113: if( do_train | do_rxtrain) {
   4EAE A2 06              2165 	mov	c,_do_train
   4EB0 72 07              2166 	orl	c,_do_rxtrain
   4EB2 40 03              2167 	jc	00157$
   4EB4 02 50 5E           2168 	ljmp	00134$
   4EB7                    2169 00157$:
                           2170 ;	../../shared/src/trx_train.c:115: reg_DFE_MCU_CLK_EN_LANE = 0;
   4EB7 90 24 10           2171 	mov	dptr,#_RX_EQ_CLK_CTRL
   4EBA E0                 2172 	movx	a,@dptr
   4EBB 54 FD              2173 	anl	a,#0xfd
   4EBD F0                 2174 	movx	@dptr,a
                           2175 ;	../../shared/src/trx_train.c:117: dfe_hardware_cont_stop();
   4EBE 78 54              2176 	mov	r0,#_dfe_hardware_cont_stop
   4EC0 79 91              2177 	mov	r1,#(_dfe_hardware_cont_stop >> 8)
   4EC2 7A 02              2178 	mov	r2,#(_dfe_hardware_cont_stop >> 16)
   4EC4 12 00 B3           2179 	lcall	__sdcc_banked_call
                           2180 ;	../../shared/src/trx_train.c:118: do_phase_adapt = 0; //disable rpta	
   4EC7 90 67 15           2181 	mov	dptr,#_do_phase_adapt
                           2182 ;	../../shared/src/trx_train.c:119: rxinit_4_spdchg_en = 0;
   4ECA E4                 2183 	clr	a
   4ECB F0                 2184 	movx	@dptr,a
   4ECC 90 67 A1           2185 	mov	dptr,#_rxinit_4_spdchg_en
   4ECF F0                 2186 	movx	@dptr,a
                           2187 ;	../../shared/src/trx_train.c:121: if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train ) reg_TX_TRAIN_ON_LANE = 1;
   4ED0 90 26 79           2188 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   4ED3 E0                 2189 	movx	a,@dptr
   4ED4 30 E6 0A           2190 	jnb	acc.6,00102$
   4ED7 30 06 07           2191 	jnb	_do_train,00102$
   4EDA 90 26 7B           2192 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   4EDD E0                 2193 	movx	a,@dptr
   4EDE 44 02              2194 	orl	a,#0x02
   4EE0 F0                 2195 	movx	@dptr,a
   4EE1                    2196 00102$:
                           2197 ;	../../shared/src/trx_train.c:122: if( reg_PIN_RX_TRAIN_ENABLE_RD_LANE && do_rxtrain ) reg_RX_TRAIN_ON_LANE = 1;
   4EE1 90 26 79           2198 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   4EE4 E0                 2199 	movx	a,@dptr
   4EE5 30 E5 0A           2200 	jnb	acc.5,00105$
   4EE8 30 07 07           2201 	jnb	_do_rxtrain,00105$
   4EEB 90 26 7B           2202 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   4EEE E0                 2203 	movx	a,@dptr
   4EEF 44 04              2204 	orl	a,#0x04
   4EF1 F0                 2205 	movx	@dptr,a
   4EF2                    2206 00105$:
                           2207 ;	../../shared/src/trx_train.c:124: if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
   4EF2 90 60 3A           2208 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   4EF5 E0                 2209 	movx	a,@dptr
   4EF6 20 E7 03           2210 	jb	acc.7,00162$
   4EF9 02 4F A9           2211 	ljmp	00113$
   4EFC                    2212 00162$:
                           2213 ;	../../shared/src/trx_train.c:126: reg_PIN_GPO_LANE_7_0 = 1;
   4EFC 90 22 06           2214 	mov	dptr,#(_MCU_GPIO + 0x0002)
   4EFF 74 01              2215 	mov	a,#0x01
   4F01 F0                 2216 	movx	@dptr,a
                           2217 ;	../../shared/src/trx_train.c:129: adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
   4F02 90 60 43           2218 	mov	dptr,#(_DFE_CONTROL_2 + 0x0003)
   4F05 E0                 2219 	movx	a,@dptr
   4F06 24 FF              2220 	add	a,#0xff
   4F08 92 0C              2221 	mov	_adapt_slicer_en,c
                           2222 ;	../../shared/src/trx_train.c:130: adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
   4F0A 90 60 42           2223 	mov	dptr,#(_DFE_CONTROL_2 + 0x0002)
   4F0D E0                 2224 	movx	a,@dptr
   4F0E 24 FF              2225 	add	a,#0xff
   4F10 92 0D              2226 	mov	_adapt_data_en,c
                           2227 ;	../../shared/src/trx_train.c:132: set_ctle_accap(0); //fast
   4F12 75 82 00           2228 	mov	dpl,#0x00
   4F15 78 A8              2229 	mov	r0,#_set_ctle_accap
   4F17 79 90              2230 	mov	r1,#(_set_ctle_accap >> 8)
   4F19 7A 02              2231 	mov	r2,#(_set_ctle_accap >> 16)
   4F1B 12 00 B3           2232 	lcall	__sdcc_banked_call
                           2233 ;	../../shared/src/trx_train.c:133: if(lnx_PHASE_CONTROL_FUNC_EN_LANE) {
   4F1E 90 60 38           2234 	mov	dptr,#_DFE_CONTROL_1
   4F21 E0                 2235 	movx	a,@dptr
   4F22 30 E2 27           2236 	jnb	acc.2,00108$
                           2237 ;	../../shared/src/trx_train.c:134: train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
   4F25 90 60 6B           2238 	mov	dptr,#(_TRAIN_PARA_0 + 0x0003)
   4F28 E0                 2239 	movx	a,@dptr
   4F29 90 66 61           2240 	mov	dptr,#(_train + 0x0021)
   4F2C F0                 2241 	movx	@dptr,a
                           2242 ;	../../shared/src/trx_train.c:135: train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
   4F2D 90 60 6A           2243 	mov	dptr,#(_TRAIN_PARA_0 + 0x0002)
   4F30 E0                 2244 	movx	a,@dptr
   4F31 90 66 62           2245 	mov	dptr,#(_train + 0x0022)
   4F34 F0                 2246 	movx	@dptr,a
                           2247 ;	../../shared/src/trx_train.c:136: ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
   4F35 90 60 44           2248 	mov	dptr,#_DFE_CONTROL_3
   4F38 E0                 2249 	movx	a,@dptr
   4F39 C4                 2250 	swap	a
   4F3A 54 03              2251 	anl	a,#0x03
   4F3C 90 66 F8           2252 	mov	dptr,#_ph_control_mode
   4F3F F0                 2253 	movx	@dptr,a
                           2254 ;	../../shared/src/trx_train.c:137: set_ph_mode(); 					
   4F40 78 3B              2255 	mov	r0,#_set_ph_mode
   4F42 79 97              2256 	mov	r1,#(_set_ph_mode >> 8)
   4F44 7A 02              2257 	mov	r2,#(_set_ph_mode >> 16)
   4F46 12 00 B3           2258 	lcall	__sdcc_banked_call
                           2259 ;	../../shared/src/trx_train.c:138: phase_control_func();
   4F49 12 2C 17           2260 	lcall	_phase_control_func
   4F4C                    2261 00108$:
                           2262 ;	../../shared/src/trx_train.c:140: timeout_start(2000); 
   4F4C 75 8B 30           2263 	mov	_TMR1,#0x30
   4F4F 75 8D F8           2264 	mov	(_TMR1 >> 8),#0xF8
   4F52 D2 8E              2265 	setb	_TR1
   4F54 C2 03              2266 	clr	_timeout
                           2267 ;	../../shared/src/trx_train.c:141: if(tx_status_pcie_mode)
   4F56 30 27 14           2268 	jnb	_tx_status_pcie_mode,00110$
                           2269 ;	../../shared/src/trx_train.c:142: cds_tb = cds_table[CDS_DEFAULT_PCIE];
   4F59 90 00 E0           2270 	mov	dptr,#(_cds_table + 0x0002)
   4F5C E4                 2271 	clr	a
   4F5D 93                 2272 	movc	a,@a+dptr
   4F5E FA                 2273 	mov	r2,a
   4F5F A3                 2274 	inc	dptr
   4F60 E4                 2275 	clr	a
   4F61 93                 2276 	movc	a,@a+dptr
   4F62 FB                 2277 	mov	r3,a
   4F63 90 61 74           2278 	mov	dptr,#_CDS_READ_MISC1
   4F66 EA                 2279 	mov	a,r2
   4F67 F0                 2280 	movx	@dptr,a
   4F68 A3                 2281 	inc	dptr
   4F69 EB                 2282 	mov	a,r3
   4F6A F0                 2283 	movx	@dptr,a
   4F6B 80 12              2284 	sjmp	00111$
   4F6D                    2285 00110$:
                           2286 ;	../../shared/src/trx_train.c:144: cds_tb = cds_table[CDS_DEFAULT];
   4F6D 90 00 DE           2287 	mov	dptr,#_cds_table
   4F70 E4                 2288 	clr	a
   4F71 93                 2289 	movc	a,@a+dptr
   4F72 FA                 2290 	mov	r2,a
   4F73 A3                 2291 	inc	dptr
   4F74 E4                 2292 	clr	a
   4F75 93                 2293 	movc	a,@a+dptr
   4F76 FB                 2294 	mov	r3,a
   4F77 90 61 74           2295 	mov	dptr,#_CDS_READ_MISC1
   4F7A EA                 2296 	mov	a,r2
   4F7B F0                 2297 	movx	@dptr,a
   4F7C A3                 2298 	inc	dptr
   4F7D EB                 2299 	mov	a,r3
   4F7E F0                 2300 	movx	@dptr,a
   4F7F                    2301 00111$:
                           2302 ;	../../shared/src/trx_train.c:145: cdr_dfe_init();
   4F7F 78 60              2303 	mov	r0,#_cdr_dfe_init
   4F81 79 9B              2304 	mov	r1,#(_cdr_dfe_init >> 8)
   4F83 7A 01              2305 	mov	r2,#(_cdr_dfe_init >> 16)
   4F85 12 00 B3           2306 	lcall	__sdcc_banked_call
                           2307 ;	../../shared/src/trx_train.c:146: dfe_adaptation();
   4F88 78 EE              2308 	mov	r0,#_dfe_adaptation
   4F8A 79 9C              2309 	mov	r1,#(_dfe_adaptation >> 8)
   4F8C 7A 01              2310 	mov	r2,#(_dfe_adaptation >> 16)
   4F8E 12 00 B3           2311 	lcall	__sdcc_banked_call
                           2312 ;	../../shared/src/trx_train.c:149: timer_chk = ~TMR1;	timer_chk = 2000 - timer_chk;  		
   4F91 E5 8B              2313 	mov	a,_TMR1
   4F93 F4                 2314 	cpl	a
   4F94 FA                 2315 	mov	r2,a
   4F95 E5 8D              2316 	mov	a,(_TMR1 >> 8)
   4F97 F4                 2317 	cpl	a
   4F98 FB                 2318 	mov	r3,a
   4F99 74 D0              2319 	mov	a,#0xD0
   4F9B C3                 2320 	clr	c
   4F9C 9A                 2321 	subb	a,r2
   4F9D FA                 2322 	mov	r2,a
   4F9E 74 07              2323 	mov	a,#0x07
   4FA0 9B                 2324 	subb	a,r3
   4FA1 FB                 2325 	mov	r3,a
                           2326 ;	../../shared/src/trx_train.c:150: reg_PIN_GPO_LANE_7_0 = 0;	
   4FA2 90 22 06           2327 	mov	dptr,#(_MCU_GPIO + 0x0002)
   4FA5 E4                 2328 	clr	a
   4FA6 F0                 2329 	movx	@dptr,a
   4FA7 80 23              2330 	sjmp	00114$
   4FA9                    2331 00113$:
                           2332 ;	../../shared/src/trx_train.c:154: reg_PIN_GPO_LANE_7_0 = 1; 			
   4FA9 90 22 06           2333 	mov	dptr,#(_MCU_GPIO + 0x0002)
   4FAC 74 01              2334 	mov	a,#0x01
   4FAE F0                 2335 	movx	@dptr,a
                           2336 ;	../../shared/src/trx_train.c:155: trx_train_one_time();
   4FAF 12 50 BD           2337 	lcall	_trx_train_one_time
                           2338 ;	../../shared/src/trx_train.c:156: reg_PIN_GPO_LANE_7_0 = 0;				
   4FB2 90 22 06           2339 	mov	dptr,#(_MCU_GPIO + 0x0002)
   4FB5 E4                 2340 	clr	a
   4FB6 F0                 2341 	movx	@dptr,a
                           2342 ;	../../shared/src/trx_train.c:157: timer_chk = ~TMR2;	timer_chk = 500 - timer_chk;			
   4FB7 E5 CC              2343 	mov	a,_TMR2
   4FB9 F4                 2344 	cpl	a
   4FBA FC                 2345 	mov	r4,a
   4FBB E5 CD              2346 	mov	a,(_TMR2 >> 8)
   4FBD F4                 2347 	cpl	a
   4FBE FD                 2348 	mov	r5,a
   4FBF 8C 02              2349 	mov	ar2,r4
   4FC1 8D 03              2350 	mov	ar3,r5
   4FC3 74 F4              2351 	mov	a,#0xF4
   4FC5 C3                 2352 	clr	c
   4FC6 9A                 2353 	subb	a,r2
   4FC7 FA                 2354 	mov	r2,a
   4FC8 74 01              2355 	mov	a,#0x01
   4FCA 9B                 2356 	subb	a,r3
   4FCB FB                 2357 	mov	r3,a
   4FCC                    2358 00114$:
                           2359 ;	../../shared/src/trx_train.c:161: reg_MCU_DEBUG_LANE_31_0_b0 = (uint8_t)timer_chk;
   4FCC 8A 04              2360 	mov	ar4,r2
   4FCE 90 22 C4           2361 	mov	dptr,#_MCU_DEBUG_LANE
   4FD1 EC                 2362 	mov	a,r4
   4FD2 F0                 2363 	movx	@dptr,a
                           2364 ;	../../shared/src/trx_train.c:162: reg_MCU_DEBUG_LANE_31_0_b1 = (uint8_t)(timer_chk>>8); 
   4FD3 8B 02              2365 	mov	ar2,r3
   4FD5 90 22 C5           2366 	mov	dptr,#(_MCU_DEBUG_LANE + 0x0001)
   4FD8 EA                 2367 	mov	a,r2
   4FD9 F0                 2368 	movx	@dptr,a
                           2369 ;	../../shared/src/trx_train.c:165: if( do_train ) {
   4FDA 30 06 51           2370 	jnb	_do_train,00125$
                           2371 ;	../../shared/src/trx_train.c:167: if( ctrl_trx_train_pass==0 ) {
   4FDD 90 67 19           2372 	mov	dptr,#_ctrl_trx_train_pass
   4FE0 E0                 2373 	movx	a,@dptr
   4FE1 FA                 2374 	mov	r2,a
   4FE2 70 2F              2375 	jnz	00118$
                           2376 ;	../../shared/src/trx_train.c:168: if(phy_mode<=SAS) {
   4FE4 90 A3 16           2377 	mov	dptr,#(_SYSTEM + 0x0002)
   4FE7 E0                 2378 	movx	a,@dptr
   4FE8 54 07              2379 	anl	a,#0x07
   4FEA FA                 2380 	mov	r2,a
   4FEB C3                 2381 	clr	c
   4FEC 74 81              2382 	mov	a,#(0x01 ^ 0x80)
   4FEE 8A F0              2383 	mov	b,r2
   4FF0 63 F0 80           2384 	xrl	b,#0x80
   4FF3 95 F0              2385 	subb	a,b
   4FF5 40 0E              2386 	jc	00116$
                           2387 ;	../../shared/src/trx_train.c:169: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //1=There are no additional, untried, commonly supported settings for local PHY. 
   4FF7 90 26 1C           2388 	mov	dptr,#_TX_TRAIN_IF_REG2
   4FFA E0                 2389 	movx	a,@dptr
   4FFB 44 80              2390 	orl	a,#0x80
   4FFD F0                 2391 	movx	@dptr,a
                           2392 ;	../../shared/src/trx_train.c:170: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
   4FFE 90 26 1D           2393 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   5001 E0                 2394 	movx	a,@dptr
   5002 54 FE              2395 	anl	a,#0xfe
   5004 F0                 2396 	movx	@dptr,a
   5005                    2397 00116$:
                           2398 ;	../../shared/src/trx_train.c:172: reg_TX_TRAIN_FAILED_LANE = 1;
   5005 90 26 7B           2399 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5008 E0                 2400 	movx	a,@dptr
   5009 44 08              2401 	orl	a,#0x08
   500B F0                 2402 	movx	@dptr,a
                           2403 ;	../../shared/src/trx_train.c:173: lnx_TX_TRAIN_FAIL_INT_LANE = 1;
   500C 90 60 59           2404 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   500F E0                 2405 	movx	a,@dptr
   5010 44 80              2406 	orl	a,#0x80
   5012 F0                 2407 	movx	@dptr,a
   5013                    2408 00118$:
                           2409 ;	../../shared/src/trx_train.c:185: link_train_complete();			    
   5013 12 4E 4C           2410 	lcall	_link_train_complete
                           2411 ;	../../shared/src/trx_train.c:188: if( tx_pipe4_en==1 ) {
   5016 30 26 0E           2412 	jnb	_tx_pipe4_en,00123$
                           2413 ;	../../shared/src/trx_train.c:189: while(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE);
   5019                    2414 00119$:
   5019 90 26 79           2415 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   501C E0                 2416 	movx	a,@dptr
   501D 20 E6 F9           2417 	jb	acc.6,00119$
                           2418 ;	../../shared/src/trx_train.c:190: reg_TX_FFE_TRAIN_DONE_LANE = 0;
   5020 90 26 79           2419 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   5023 E0                 2420 	movx	a,@dptr
   5024 54 7F              2421 	anl	a,#0x7f
   5026 F0                 2422 	movx	@dptr,a
   5027                    2423 00123$:
                           2424 ;	../../shared/src/trx_train.c:211: reg_TX_TRAIN_ON_LANE = 0; 
   5027 90 26 7B           2425 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   502A E0                 2426 	movx	a,@dptr
   502B 54 FD              2427 	anl	a,#0xfd
   502D F0                 2428 	movx	@dptr,a
   502E                    2429 00125$:
                           2430 ;	../../shared/src/trx_train.c:219: if( do_rxtrain ) {
                           2431 ;	../../shared/src/trx_train.c:220: do_rxtrain = 0;
   502E 10 07 02           2432 	jbc	_do_rxtrain,00170$
   5031 80 31              2433 	sjmp	00135$
   5033                    2434 00170$:
                           2435 ;	../../shared/src/trx_train.c:221: reg_RX_TRAIN_COMPLETE_LANE = 1;		
   5033 90 26 7B           2436 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5036 E0                 2437 	movx	a,@dptr
   5037 44 01              2438 	orl	a,#0x01
   5039 F0                 2439 	movx	@dptr,a
                           2440 ;	../../shared/src/trx_train.c:222: while( reg_PIN_RX_TRAIN_ENABLE_RD_LANE ){
   503A                    2441 00128$:
   503A 90 26 79           2442 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   503D E0                 2443 	movx	a,@dptr
   503E 30 E5 06           2444 	jnb	acc.5,00130$
                           2445 ;	../../shared/src/trx_train.c:223: if(PHY_NS != ST_INIT) break;				
   5041 90 22 31           2446 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   5044 E0                 2447 	movx	a,@dptr
   5045 60 F3              2448 	jz	00128$
   5047                    2449 00130$:
                           2450 ;	../../shared/src/trx_train.c:225: reg_RX_TRAIN_COMPLETE_LANE = 0;		
   5047 90 26 7B           2451 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   504A E0                 2452 	movx	a,@dptr
   504B 54 FE              2453 	anl	a,#0xfe
   504D F0                 2454 	movx	@dptr,a
                           2455 ;	../../shared/src/trx_train.c:226: reg_RX_TRAIN_ON_LANE = 0; 
   504E 90 26 7B           2456 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5051 E0                 2457 	movx	a,@dptr
   5052 54 FB              2458 	anl	a,#0xfb
   5054 F0                 2459 	movx	@dptr,a
                           2460 ;	../../shared/src/trx_train.c:227: reg_RX_TRAIN_FAILED_LANE = 0;
   5055 90 26 7A           2461 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   5058 E0                 2462 	movx	a,@dptr
   5059 54 7F              2463 	anl	a,#0x7f
   505B F0                 2464 	movx	@dptr,a
   505C 80 06              2465 	sjmp	00135$
   505E                    2466 00134$:
                           2467 ;	../../shared/src/trx_train.c:234: opt2train();
   505E 12 5B DD           2468 	lcall	_opt2train
                           2469 ;	../../shared/src/trx_train.c:235: restore_train();	
   5061 12 5F 15           2470 	lcall	_restore_train
   5064                    2471 00135$:
                           2472 ;	../../shared/src/trx_train.c:246: PHY_STATUS = ST_NORMAL; 
   5064 90 22 30           2473 	mov	dptr,#_MCU_STATUS0_LANE
   5067 74 2B              2474 	mov	a,#0x2B
   5069 F0                 2475 	movx	@dptr,a
                           2476 ;	../../shared/src/trx_train.c:248: if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
   506A 90 60 4E           2477 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   506D E0                 2478 	movx	a,@dptr
   506E 23                 2479 	rl	a
   506F 23                 2480 	rl	a
   5070 54 01              2481 	anl	a,#0x01
   5072 FA                 2482 	mov	r2,a
   5073 BA 01 07           2483 	cjne	r2,#0x01,00137$
   5076 90 24 10           2484 	mov	dptr,#_RX_EQ_CLK_CTRL
   5079 E0                 2485 	movx	a,@dptr
   507A 54 DF              2486 	anl	a,#0xdf
   507C F0                 2487 	movx	@dptr,a
   507D                    2488 00137$:
                           2489 ;	../../shared/src/trx_train.c:250: ctrl_cdr_phase_on = 0;
   507D C2 1E              2490 	clr	_ctrl_cdr_phase_on
                           2491 ;	../../shared/src/trx_train.c:251: train_comp = 0;  	
   507F 90 67 11           2492 	mov	dptr,#_train_comp
   5082 E4                 2493 	clr	a
   5083 F0                 2494 	movx	@dptr,a
                           2495 ;	../../shared/src/trx_train.c:252: timeout_stop2;
   5084 75 C8 60           2496 	mov	_T2CON,#0x60
   5087 C2 C6              2497 	clr	_TF2
                           2498 ;	../../shared/src/trx_train.c:253: reg_TIMER_3_EN_LANE = 0;
   5089 90 22 74           2499 	mov	dptr,#_MCU_TIMER_CONTROL
   508C E0                 2500 	movx	a,@dptr
   508D 54 F7              2501 	anl	a,#0xf7
   508F F0                 2502 	movx	@dptr,a
                           2503 ;	../../shared/src/trx_train.c:254: reg_INT4_TIMER3_INT_EN_LANE = 0;
   5090 90 22 50           2504 	mov	dptr,#_MCU_INT4_CONTROL
   5093 E0                 2505 	movx	a,@dptr
   5094 54 DF              2506 	anl	a,#0xdf
   5096 F0                 2507 	movx	@dptr,a
                           2508 ;	../../shared/src/trx_train.c:255: reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;
   5097 90 22 6C           2509 	mov	dptr,#_MCU_INT11_CONTROL
   509A E0                 2510 	movx	a,@dptr
   509B 54 BF              2511 	anl	a,#0xbf
   509D F0                 2512 	movx	@dptr,a
                           2513 ;	../../shared/src/trx_train.c:256: reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;
   509E 90 22 70           2514 	mov	dptr,#_MCU_INT12_CONTROL
   50A1 E0                 2515 	movx	a,@dptr
   50A2 54 7F              2516 	anl	a,#0x7f
   50A4 F0                 2517 	movx	@dptr,a
                           2518 ;	../../shared/src/trx_train.c:260: RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
                           2519 ;	../../shared/src/trx_train.c:261: RX_LANE_INTERRUPT_REG1.BT.B3 = 0;
   50A5 90 21 5B           2520 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   50A8 74 60              2521 	mov	a,#0x60
   50AA F0                 2522 	movx	@dptr,a
   50AB E4                 2523 	clr	a
   50AC F0                 2524 	movx	@dptr,a
                           2525 ;	../../shared/src/trx_train.c:263: lnx_DFE_CORE_BYPASS_LANE = 0; //for lane_margin dfe run
   50AD 90 60 38           2526 	mov	dptr,#_DFE_CONTROL_1
   50B0 E0                 2527 	movx	a,@dptr
   50B1 54 BF              2528 	anl	a,#0xbf
   50B3 F0                 2529 	movx	@dptr,a
                           2530 ;	../../shared/src/trx_train.c:265: pre_normal_process();
   50B4 78 6C              2531 	mov	r0,#_pre_normal_process
   50B6 79 E1              2532 	mov	r1,#(_pre_normal_process >> 8)
   50B8 7A 01              2533 	mov	r2,#(_pre_normal_process >> 16)
   50BA 02 00 B3           2534 	ljmp	__sdcc_banked_call
                           2535 ;------------------------------------------------------------
                           2536 ;Allocation info for local variables in function 'trx_train_one_time'
                           2537 ;------------------------------------------------------------
                           2538 ;------------------------------------------------------------
                           2539 ;	../../shared/src/trx_train.c:273: void trx_train_one_time(void) {
                           2540 ;	-----------------------------------------
                           2541 ;	 function trx_train_one_time
                           2542 ;	-----------------------------------------
   50BD                    2543 _trx_train_one_time:
                           2544 ;	../../shared/src/trx_train.c:279: trx_train_init();
   50BD 12 50 F4           2545 	lcall	_trx_train_init
                           2546 ;	../../shared/src/trx_train.c:284: while(1){
   50C0                    2547 00116$:
                           2548 ;	../../shared/src/trx_train.c:286: trx_train_control();
   50C0 12 53 BE           2549 	lcall	_trx_train_control
                           2550 ;	../../shared/src/trx_train.c:287: if( ctrl_trx_train_done ) break;
   50C3 20 23 2B           2551 	jb	_ctrl_trx_train_done,00117$
                           2552 ;	../../shared/src/trx_train.c:289: if(ctrl_rx_train_on) {
   50C6 30 1F 11           2553 	jnb	_ctrl_rx_train_on,00113$
                           2554 ;	../../shared/src/trx_train.c:295: if (TRAIN_SIM_EN) rx_train_dummy();
   50C9 90 E6 07           2555 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   50CC E0                 2556 	movx	a,@dptr
   50CD 30 E2 05           2557 	jnb	acc.2,00104$
   50D0 12 30 FF           2558 	lcall	_rx_train_dummy
   50D3 80 EB              2559 	sjmp	00116$
   50D5                    2560 00104$:
                           2561 ;	../../shared/src/trx_train.c:298: rx_train();
   50D5 12 30 4A           2562 	lcall	_rx_train
   50D8 80 E6              2563 	sjmp	00116$
   50DA                    2564 00113$:
                           2565 ;	../../shared/src/trx_train.c:300: else if(ctrl_tx_train_on) {
   50DA 30 20 E3           2566 	jnb	_ctrl_tx_train_on,00116$
                           2567 ;	../../shared/src/trx_train.c:306: if (TRAIN_SIM_EN && tx_status_pcie_mode==0) tx_train_dummy();
   50DD 90 E6 07           2568 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   50E0 E0                 2569 	movx	a,@dptr
   50E1 30 E2 08           2570 	jnb	acc.2,00107$
   50E4 20 27 05           2571 	jb	_tx_status_pcie_mode,00107$
   50E7 12 71 4F           2572 	lcall	_tx_train_dummy
   50EA 80 D4              2573 	sjmp	00116$
   50EC                    2574 00107$:
                           2575 ;	../../shared/src/trx_train.c:309: tx_train();
   50EC 12 60 79           2576 	lcall	_tx_train
   50EF 80 CF              2577 	sjmp	00116$
   50F1                    2578 00117$:
                           2579 ;	../../shared/src/trx_train.c:313: trx_train_end();
   50F1 02 56 A6           2580 	ljmp	_trx_train_end
                           2581 ;------------------------------------------------------------
                           2582 ;Allocation info for local variables in function 'trx_train_init'
                           2583 ;------------------------------------------------------------
                           2584 ;------------------------------------------------------------
                           2585 ;	../../shared/src/trx_train.c:321: void trx_train_init(void) {
                           2586 ;	-----------------------------------------
                           2587 ;	 function trx_train_init
                           2588 ;	-----------------------------------------
   50F4                    2589 _trx_train_init:
                           2590 ;	../../shared/src/trx_train.c:323: reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
   50F4 90 26 78           2591 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   50F7 E0                 2592 	movx	a,@dptr
   50F8 54 FB              2593 	anl	a,#0xfb
   50FA F0                 2594 	movx	@dptr,a
                           2595 ;	../../shared/src/trx_train.c:324: reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
   50FB 90 26 7B           2596 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   50FE E0                 2597 	movx	a,@dptr
   50FF 54 EF              2598 	anl	a,#0xef
   5101 F0                 2599 	movx	@dptr,a
                           2600 ;	../../shared/src/trx_train.c:325: reg_TX_TRAIN_FAILED_LANE = 0;
   5102 90 26 7B           2601 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5105 E0                 2602 	movx	a,@dptr
   5106 54 F7              2603 	anl	a,#0xf7
   5108 F0                 2604 	movx	@dptr,a
                           2605 ;	../../shared/src/trx_train.c:326: reg_TX_FFE_TRAIN_DONE_LANE = 0;
   5109 90 26 79           2606 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   510C E0                 2607 	movx	a,@dptr
   510D 54 7F              2608 	anl	a,#0x7f
   510F F0                 2609 	movx	@dptr,a
                           2610 ;	../../shared/src/trx_train.c:327: lnx_TX_TRAIN_FAIL_INT_LANE = 0;
   5110 90 60 59           2611 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   5113 E0                 2612 	movx	a,@dptr
   5114 54 7F              2613 	anl	a,#0x7f
   5116 F0                 2614 	movx	@dptr,a
                           2615 ;	../../shared/src/trx_train.c:328: reg_RX_TRAIN_COMPLETE_LANE = 0;		
   5117 90 26 7B           2616 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   511A E0                 2617 	movx	a,@dptr
   511B 54 FE              2618 	anl	a,#0xfe
   511D F0                 2619 	movx	@dptr,a
                           2620 ;	../../shared/src/trx_train.c:329: reg_RX_TRAIN_FAILED_LANE = 0;
   511E 90 26 7A           2621 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   5121 E0                 2622 	movx	a,@dptr
   5122 54 7F              2623 	anl	a,#0x7f
   5124 F0                 2624 	movx	@dptr,a
                           2625 ;	../../shared/src/trx_train.c:330: reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; 
   5125 90 26 1C           2626 	mov	dptr,#_TX_TRAIN_IF_REG2
   5128 E0                 2627 	movx	a,@dptr
   5129 54 7F              2628 	anl	a,#0x7f
   512B F0                 2629 	movx	@dptr,a
                           2630 ;	../../shared/src/trx_train.c:331: reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
   512C 90 26 1D           2631 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   512F E0                 2632 	movx	a,@dptr
   5130 54 FE              2633 	anl	a,#0xfe
   5132 F0                 2634 	movx	@dptr,a
                           2635 ;	../../shared/src/trx_train.c:336: reg_TIMER_2_SEL_LANE_1_0 = 0x02;	////use PWM2 1m unit timer
   5133 90 22 98           2636 	mov	dptr,#_MCU_TIMER_CTRL_1_LANE
   5136 E0                 2637 	movx	a,@dptr
   5137 54 CF              2638 	anl	a,#0xcf
   5139 44 20              2639 	orl	a,#0x20
   513B F0                 2640 	movx	@dptr,a
                           2641 ;	../../shared/src/trx_train.c:337: reg_PWM2_EN_LANE = 0;
                           2642 ;	../../shared/src/trx_train.c:338: reg_PWM2_EN_LANE = 1;	
   513C 90 22 A7           2643 	mov	dptr,#(_MCU_TIMER_CTRL_4_LANE + 0x0003)
   513F E0                 2644 	movx	a,@dptr
   5140 54 7F              2645 	anl	a,#0x7f
   5142 F0                 2646 	movx	@dptr,a
   5143 E0                 2647 	movx	a,@dptr
   5144 44 80              2648 	orl	a,#0x80
   5146 F0                 2649 	movx	@dptr,a
                           2650 ;	../../shared/src/trx_train.c:340: if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
   5147 90 60 33           2651 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   514A E0                 2652 	movx	a,@dptr
   514B 30 E5 1C           2653 	jnb	acc.5,00105$
   514E 30 06 19           2654 	jnb	_do_train,00105$
                           2655 ;	../../shared/src/trx_train.c:341: timeout2_start(lnx_TRX_TRAIN_TIMER_LANE_15_0+1);
   5151 90 26 1A           2656 	mov	dptr,#(_TX_TRAIN_IF_REG1 + 0x0002)
   5154 E0                 2657 	movx	a,@dptr
   5155 FA                 2658 	mov	r2,a
   5156 A3                 2659 	inc	dptr
   5157 E0                 2660 	movx	a,@dptr
   5158 FB                 2661 	mov	r3,a
   5159 EA                 2662 	mov	a,r2
   515A F4                 2663 	cpl	a
   515B FA                 2664 	mov	r2,a
   515C EB                 2665 	mov	a,r3
   515D F4                 2666 	cpl	a
   515E FB                 2667 	mov	r3,a
   515F 8A CC              2668 	mov	_TMR2,r2
   5161 8B CD              2669 	mov	(_TMR2 >> 8),r3
   5163 75 C8 7A           2670 	mov	_T2CON,#0x7A
   5166 C2 04              2671 	clr	_timeout2
   5168 80 21              2672 	sjmp	00106$
   516A                    2673 00105$:
                           2674 ;	../../shared/src/trx_train.c:343: else if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
   516A 90 60 33           2675 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   516D E0                 2676 	movx	a,@dptr
   516E 30 E6 1A           2677 	jnb	acc.6,00106$
   5171 30 07 17           2678 	jnb	_do_rxtrain,00106$
                           2679 ;	../../shared/src/trx_train.c:344: timeout2_start(lnx_RX_TRAIN_TIMER_LANE_15_0+1);
   5174 90 26 18           2680 	mov	dptr,#_TX_TRAIN_IF_REG1
   5177 E0                 2681 	movx	a,@dptr
   5178 FA                 2682 	mov	r2,a
   5179 A3                 2683 	inc	dptr
   517A E0                 2684 	movx	a,@dptr
   517B FB                 2685 	mov	r3,a
   517C EA                 2686 	mov	a,r2
   517D F4                 2687 	cpl	a
   517E FA                 2688 	mov	r2,a
   517F EB                 2689 	mov	a,r3
   5180 F4                 2690 	cpl	a
   5181 FB                 2691 	mov	r3,a
   5182 8A CC              2692 	mov	_TMR2,r2
   5184 8B CD              2693 	mov	(_TMR2 >> 8),r3
   5186 75 C8 7A           2694 	mov	_T2CON,#0x7A
   5189 C2 04              2695 	clr	_timeout2
   518B                    2696 00106$:
                           2697 ;	../../shared/src/trx_train.c:359: train_timer_int = 1;
   518B 90 66 CC           2698 	mov	dptr,#_train_timer_int
   518E 74 01              2699 	mov	a,#0x01
   5190 F0                 2700 	movx	@dptr,a
                           2701 ;	../../shared/src/trx_train.c:362: train_status_reset(); 
   5191 12 5A 4D           2702 	lcall	_train_status_reset
                           2703 ;	../../shared/src/trx_train.c:364: ctrl_cdr_phase_on = 0;
   5194 C2 1E              2704 	clr	_ctrl_cdr_phase_on
                           2705 ;	../../shared/src/trx_train.c:365: cds_tb = cds_table[CDS_DATAADAPT];
   5196 90 00 EC           2706 	mov	dptr,#(_cds_table + 0x000e)
   5199 E4                 2707 	clr	a
   519A 93                 2708 	movc	a,@a+dptr
   519B FA                 2709 	mov	r2,a
   519C A3                 2710 	inc	dptr
   519D E4                 2711 	clr	a
   519E 93                 2712 	movc	a,@a+dptr
   519F FB                 2713 	mov	r3,a
   51A0 90 61 74           2714 	mov	dptr,#_CDS_READ_MISC1
   51A3 EA                 2715 	mov	a,r2
   51A4 F0                 2716 	movx	@dptr,a
   51A5 A3                 2717 	inc	dptr
   51A6 EB                 2718 	mov	a,r3
   51A7 F0                 2719 	movx	@dptr,a
                           2720 ;	../../shared/src/trx_train.c:366: ctrl_rx_only_mode = do_train==0; 
   51A8 90 67 18           2721 	mov	dptr,#_ctrl_rx_only_mode
   51AB A2 06              2722 	mov	c,_do_train
   51AD B3                 2723 	cpl	c
   51AE E4                 2724 	clr	a
   51AF 33                 2725 	rlc	a
   51B0 F0                 2726 	movx	@dptr,a
                           2727 ;	../../shared/src/trx_train.c:367: adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
   51B1 D2 0D              2728 	setb	_adapt_data_en
                           2729 ;	../../shared/src/trx_train.c:368: adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1
   51B3 D2 0C              2730 	setb	_adapt_slicer_en
                           2731 ;	../../shared/src/trx_train.c:371: cdr_dfe_init(); 
   51B5 78 60              2732 	mov	r0,#_cdr_dfe_init
   51B7 79 9B              2733 	mov	r1,#(_cdr_dfe_init >> 8)
   51B9 7A 01              2734 	mov	r2,#(_cdr_dfe_init >> 16)
   51BB 12 00 B3           2735 	lcall	__sdcc_banked_call
                           2736 ;	../../shared/src/trx_train.c:373: set_accap_sel(ACCAP_DEMUX);
   51BE 90 02 64           2737 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   51C1 E0                 2738 	movx	a,@dptr
   51C2 54 E7              2739 	anl	a,#0xe7
   51C4 44 10              2740 	orl	a,#0x10
   51C6 F0                 2741 	movx	@dptr,a
                           2742 ;	../../shared/src/trx_train.c:374: reg_FFE_PULSE_DIV_LANE_2_0 = 2;
   51C7 90 02 0C           2743 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   51CA E0                 2744 	movx	a,@dptr
   51CB 54 8F              2745 	anl	a,#0x8f
   51CD 44 20              2746 	orl	a,#0x20
   51CF F0                 2747 	movx	@dptr,a
                           2748 ;	../../shared/src/trx_train.c:377: if(tx_status_pcie_mode) 
   51D0 30 27 07           2749 	jnb	_tx_status_pcie_mode,00114$
                           2750 ;	../../shared/src/trx_train.c:380: sumf_boost_target_c = 0;
   51D3 90 66 CA           2751 	mov	dptr,#_sumf_boost_target_c
   51D6 E4                 2752 	clr	a
   51D7 F0                 2753 	movx	@dptr,a
   51D8 80 1E              2754 	sjmp	00115$
   51DA                    2755 00114$:
                           2756 ;	../../shared/src/trx_train.c:397: if(ph_control_mode>0) {
   51DA 90 66 F8           2757 	mov	dptr,#_ph_control_mode
   51DD E0                 2758 	movx	a,@dptr
   51DE FA                 2759 	mov	r2,a
   51DF 60 17              2760 	jz	00115$
                           2761 ;	../../shared/src/trx_train.c:398: if( lnx_EOM_ALIGN_CAL_DONE_LANE==0 || lnx_EOM_EOMDAT_CAL_PASS_LANE==0 ) {
   51E1 90 60 01           2762 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   51E4 E0                 2763 	movx	a,@dptr
   51E5 30 E2 07           2764 	jnb	acc.2,00108$
   51E8 90 60 05           2765 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   51EB E0                 2766 	movx	a,@dptr
   51EC 20 E5 09           2767 	jb	acc.5,00115$
   51EF                    2768 00108$:
                           2769 ;	../../shared/src/trx_train.c:399: eom_align_cal();
   51EF 78 0C              2770 	mov	r0,#_eom_align_cal
   51F1 79 B0              2771 	mov	r1,#(_eom_align_cal >> 8)
   51F3 7A 02              2772 	mov	r2,#(_eom_align_cal >> 16)
   51F5 12 00 B3           2773 	lcall	__sdcc_banked_call
   51F8                    2774 00115$:
                           2775 ;	../../shared/src/trx_train.c:411: if( do_train ) {  //TODO
   51F8 30 06 15           2776 	jnb	_do_train,00120$
                           2777 ;	../../shared/src/trx_train.c:413: if ((tx_status_pcie_mode) && (cmx_TX_TRAIN_MODE == 1))
   51FB 30 27 12           2778 	jnb	_tx_status_pcie_mode,00120$
   51FE 90 E6 28           2779 	mov	dptr,#_TRAIN_IF_CONFIG
   5201 E0                 2780 	movx	a,@dptr
   5202 03                 2781 	rr	a
   5203 54 01              2782 	anl	a,#0x01
   5205 FA                 2783 	mov	r2,a
   5206 BA 01 07           2784 	cjne	r2,#0x01,00120$
                           2785 ;	../../shared/src/trx_train.c:414: reg_ANA_TX_EM_PEAK_EN_LANE = 1; //??
   5209 90 26 52           2786 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   520C E0                 2787 	movx	a,@dptr
   520D 44 80              2788 	orl	a,#0x80
   520F F0                 2789 	movx	@dptr,a
   5210                    2790 00120$:
                           2791 ;	../../shared/src/trx_train.c:421: if (TRAIN_SIM_EN) goto skip_alg;
   5210 90 E6 07           2792 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5213 E0                 2793 	movx	a,@dptr
   5214 30 E2 03           2794 	jnb	acc.2,00185$
   5217 02 53 91           2795 	ljmp	00134$
   521A                    2796 00185$:
                           2797 ;	../../shared/src/trx_train.c:424: if (!tag_RX_NO_INIT) //0
   521A 90 60 4C           2798 	mov	dptr,#_DFE_CONTROL_5
   521D E0                 2799 	movx	a,@dptr
   521E 20 E1 64           2800 	jb	acc.1,00124$
                           2801 ;	../../shared/src/trx_train.c:427: train_r = tag_RX_RXFFE_R_INI;  //4
   5221 90 60 5B           2802 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   5224 E0                 2803 	movx	a,@dptr
   5225 C4                 2804 	swap	a
   5226 54 0F              2805 	anl	a,#0x0f
   5228 90 66 C6           2806 	mov	dptr,#_train_r
   522B F0                 2807 	movx	@dptr,a
                           2808 ;	../../shared/src/trx_train.c:428: train_c = tag_RX_RXFFE_C_INI;  //15
   522C 90 60 8F           2809 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   522F E0                 2810 	movx	a,@dptr
   5230 C4                 2811 	swap	a
   5231 54 0F              2812 	anl	a,#0x0f
   5233 90 66 C5           2813 	mov	dptr,#_train_c
   5236 F0                 2814 	movx	@dptr,a
                           2815 ;	../../shared/src/trx_train.c:429: Set_Rx_FFE();
   5237 12 5C 7F           2816 	lcall	_Set_Rx_FFE
                           2817 ;	../../shared/src/trx_train.c:432: dfe_f0_res_sel = 3;
   523A 90 00 50           2818 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   523D E0                 2819 	movx	a,@dptr
   523E 44 18              2820 	orl	a,#0x18
   5240 F0                 2821 	movx	@dptr,a
                           2822 ;	../../shared/src/trx_train.c:433: dfe_res_f1 = 3;
   5241 90 00 50           2823 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5244 E0                 2824 	movx	a,@dptr
   5245 44 06              2825 	orl	a,#0x06
   5247 F0                 2826 	movx	@dptr,a
                           2827 ;	../../shared/src/trx_train.c:434: dfe_f234_res_sel = 1;
   5248 90 00 50           2828 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   524B E0                 2829 	movx	a,@dptr
   524C 44 01              2830 	orl	a,#0x01
   524E F0                 2831 	movx	@dptr,a
                           2832 ;	../../shared/src/trx_train.c:435: dfe_f567_res_sel = 1;
   524F 90 00 54           2833 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5252 E0                 2834 	movx	a,@dptr
   5253 44 80              2835 	orl	a,#0x80
   5255 F0                 2836 	movx	@dptr,a
                           2837 ;	../../shared/src/trx_train.c:438: train.phase_offset_esm = 0;	
   5256 90 66 62           2838 	mov	dptr,#(_train + 0x0022)
                           2839 ;	../../shared/src/trx_train.c:439: opt.phase_offset_esm = 0;
   5259 E4                 2840 	clr	a
   525A F0                 2841 	movx	@dptr,a
   525B 90 66 91           2842 	mov	dptr,#(_opt + 0x0022)
   525E F0                 2843 	movx	@dptr,a
                           2844 ;	../../shared/src/trx_train.c:441: train.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //-14; //0;  //load phase as calibration result
   525F 90 60 54           2845 	mov	dptr,#_TRAIN_CONTROL_1
   5262 E0                 2846 	movx	a,@dptr
   5263 90 66 61           2847 	mov	dptr,#(_train + 0x0021)
   5266 F0                 2848 	movx	@dptr,a
                           2849 ;	../../shared/src/trx_train.c:442: opt.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0;//-14; //0;		
   5267 90 60 54           2850 	mov	dptr,#_TRAIN_CONTROL_1
   526A E0                 2851 	movx	a,@dptr
   526B 90 66 90           2852 	mov	dptr,#(_opt + 0x0021)
   526E F0                 2853 	movx	@dptr,a
                           2854 ;	../../shared/src/trx_train.c:445: ph_control_mode = 0; // force to mode0 //tag_TRAIN_PH_CONTROL_MODE; 
   526F 90 66 F8           2855 	mov	dptr,#_ph_control_mode
   5272 E4                 2856 	clr	a
   5273 F0                 2857 	movx	@dptr,a
                           2858 ;	../../shared/src/trx_train.c:450: set_ph_mode(); 
   5274 78 3B              2859 	mov	r0,#_set_ph_mode
   5276 79 97              2860 	mov	r1,#(_set_ph_mode >> 8)
   5278 7A 02              2861 	mov	r2,#(_set_ph_mode >> 16)
   527A 12 00 B3           2862 	lcall	__sdcc_banked_call
                           2863 ;	../../shared/src/trx_train.c:451: phase_control_func();
   527D 12 2C 17           2864 	lcall	_phase_control_func
                           2865 ;	../../shared/src/trx_train.c:463: ctrl_rx_train_mode = 0; 
   5280 90 67 1A           2866 	mov	dptr,#_ctrl_rx_train_mode
   5283 E4                 2867 	clr	a
   5284 F0                 2868 	movx	@dptr,a
   5285                    2869 00124$:
                           2870 ;	../../shared/src/trx_train.c:501: gain_train_with_c = tag_GAIN_TRAIN_WITH_C;   //1
   5285 90 60 3A           2871 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   5288 E0                 2872 	movx	a,@dptr
   5289 54 01              2873 	anl	a,#0x01
   528B FA                 2874 	mov	r2,a
   528C 24 FF              2875 	add	a,#0xff
   528E 92 24              2876 	mov	_gain_train_with_c,c
                           2877 ;	../../shared/src/trx_train.c:504: if (tag_GAIN_TRAIN_INIT_EN) //1
   5290 90 60 3A           2878 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   5293 E0                 2879 	movx	a,@dptr
   5294 30 E2 5E           2880 	jnb	acc.2,00128$
                           2881 ;	../../shared/src/trx_train.c:506: train_r = tag_RXFFE_R_GAIN_TRAIN;  //4
   5297 90 60 5B           2882 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   529A E0                 2883 	movx	a,@dptr
   529B 54 0F              2884 	anl	a,#0x0f
   529D 90 66 C6           2885 	mov	dptr,#_train_r
   52A0 F0                 2886 	movx	@dptr,a
                           2887 ;	../../shared/src/trx_train.c:507: train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
   52A1 90 60 8F           2888 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   52A4 E0                 2889 	movx	a,@dptr
   52A5 54 0F              2890 	anl	a,#0x0f
   52A7 90 66 C5           2891 	mov	dptr,#_train_c
   52AA F0                 2892 	movx	@dptr,a
                           2893 ;	../../shared/src/trx_train.c:508: Set_Rx_FFE();
   52AB 12 5C 7F           2894 	lcall	_Set_Rx_FFE
                           2895 ;	../../shared/src/trx_train.c:510: ctrl_cdr_phase_on = 0;
   52AE C2 1E              2896 	clr	_ctrl_cdr_phase_on
                           2897 ;	../../shared/src/trx_train.c:512: dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT;
   52B0 90 60 78           2898 	mov	dptr,#_DFE_CONTROL_6
   52B3 E0                 2899 	movx	a,@dptr
   52B4 90 66 C1           2900 	mov	dptr,#_dfe_res_f0a_low_thres_01
   52B7 F0                 2901 	movx	@dptr,a
                           2902 ;	../../shared/src/trx_train.c:513: dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT;
   52B8 90 60 79           2903 	mov	dptr,#(_DFE_CONTROL_6 + 0x0001)
   52BB E0                 2904 	movx	a,@dptr
   52BC 90 66 C2           2905 	mov	dptr,#_dfe_res_f0a_low_thres_2
   52BF F0                 2906 	movx	@dptr,a
                           2907 ;	../../shared/src/trx_train.c:514: dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT;
   52C0 90 60 7A           2908 	mov	dptr,#(_DFE_CONTROL_6 + 0x0002)
   52C3 E0                 2909 	movx	a,@dptr
   52C4 90 66 C3           2910 	mov	dptr,#_dfe_res_f0a_low_thres_3
   52C7 F0                 2911 	movx	@dptr,a
                           2912 ;	../../shared/src/trx_train.c:515: dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;
   52C8 90 60 2F           2913 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0003)
   52CB E0                 2914 	movx	a,@dptr
   52CC 90 66 C4           2915 	mov	dptr,#_dfe_res_f0a_high_thres
   52CF F0                 2916 	movx	@dptr,a
                           2917 ;	../../shared/src/trx_train.c:517: gain_train();
   52D0 12 57 D9           2918 	lcall	_gain_train
                           2919 ;	../../shared/src/trx_train.c:519: train_r = tag_RX_RXFFE_R_INI;  //0
   52D3 90 60 5B           2920 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   52D6 E0                 2921 	movx	a,@dptr
   52D7 C4                 2922 	swap	a
   52D8 54 0F              2923 	anl	a,#0x0f
   52DA FA                 2924 	mov	r2,a
   52DB 90 66 C6           2925 	mov	dptr,#_train_r
   52DE F0                 2926 	movx	@dptr,a
                           2927 ;	../../shared/src/trx_train.c:520: if( tag_GAIN_TRAIN_WITH_C == 0)
   52DF 90 60 3A           2928 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   52E2 E0                 2929 	movx	a,@dptr
   52E3 20 E0 0C           2930 	jb	acc.0,00126$
                           2931 ;	../../shared/src/trx_train.c:522: train_c = tag_RX_RXFFE_C_INI; //15
   52E6 90 60 8F           2932 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   52E9 E0                 2933 	movx	a,@dptr
   52EA C4                 2934 	swap	a
   52EB 54 0F              2935 	anl	a,#0x0f
   52ED FA                 2936 	mov	r2,a
   52EE 90 66 C5           2937 	mov	dptr,#_train_c
   52F1 F0                 2938 	movx	@dptr,a
   52F2                    2939 00126$:
                           2940 ;	../../shared/src/trx_train.c:525: Set_Rx_FFE();
   52F2 12 5C 7F           2941 	lcall	_Set_Rx_FFE
   52F5                    2942 00128$:
                           2943 ;	../../shared/src/trx_train.c:529: dfe_cdr_phase_opt();		
   52F5 12 59 ED           2944 	lcall	_dfe_cdr_phase_opt
                           2945 ;	../../shared/src/trx_train.c:531: train2opt(); 
   52F8 12 5C 2F           2946 	lcall	_train2opt
                           2947 ;	../../shared/src/trx_train.c:549: if(opt.eo < 10) { //[HR] 10 is better than 15 based on Fang's test result.
   52FB 90 66 8E           2948 	mov	dptr,#(_opt + 0x001f)
   52FE E0                 2949 	movx	a,@dptr
   52FF FA                 2950 	mov	r2,a
   5300 BA 0A 00           2951 	cjne	r2,#0x0A,00189$
   5303                    2952 00189$:
   5303 50 2D              2953 	jnc	00130$
                           2954 ;	../../shared/src/trx_train.c:551: ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && tag_CDR_PHASE_OPT_FIRST_EN && TRAIN_SIM_EN==0;
   5305 90 60 4D           2955 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   5308 E0                 2956 	movx	a,@dptr
   5309 20 E7 04           2957 	jb	acc.7,00149$
   530C C2 28              2958 	clr	b0
   530E 80 02              2959 	sjmp	00150$
   5310                    2960 00149$:
   5310 D2 28              2961 	setb	b0
   5312                    2962 00150$:
   5312 30 28 11           2963 	jnb	b0,00145$
   5315 90 E6 07           2964 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5318 E0                 2965 	movx	a,@dptr
   5319 03                 2966 	rr	a
   531A 03                 2967 	rr	a
   531B 54 01              2968 	anl	a,#0x01
   531D FA                 2969 	mov	r2,a
   531E B4 01 00           2970 	cjne	a,#0x01,00193$
   5321                    2971 00193$:
   5321 E4                 2972 	clr	a
   5322 33                 2973 	rlc	a
   5323 FA                 2974 	mov	r2,a
   5324 70 04              2975 	jnz	00146$
   5326                    2976 00145$:
   5326 C2 28              2977 	clr	b0
   5328 80 02              2978 	sjmp	00147$
   532A                    2979 00146$:
   532A D2 28              2980 	setb	b0
   532C                    2981 00147$:
   532C A2 28              2982 	mov	c,b0
   532E 92 1E              2983 	mov	_ctrl_cdr_phase_on,c
   5330 80 02              2984 	sjmp	00131$
   5332                    2985 00130$:
                           2986 ;	../../shared/src/trx_train.c:554: ctrl_cdr_phase_on = 0;
   5332 C2 1E              2987 	clr	_ctrl_cdr_phase_on
   5334                    2988 00131$:
                           2989 ;	../../shared/src/trx_train.c:557: if (ctrl_cdr_phase_on)
   5334 30 1E 5A           2990 	jnb	_ctrl_cdr_phase_on,00134$
                           2991 ;	../../shared/src/trx_train.c:560: train_r = 0; train_c = 15;
   5337 90 66 C6           2992 	mov	dptr,#_train_r
   533A E4                 2993 	clr	a
   533B F0                 2994 	movx	@dptr,a
   533C 90 66 C5           2995 	mov	dptr,#_train_c
   533F 74 0F              2996 	mov	a,#0x0F
   5341 F0                 2997 	movx	@dptr,a
                           2998 ;	../../shared/src/trx_train.c:561: Set_Rx_FFE();
   5342 12 5C 7F           2999 	lcall	_Set_Rx_FFE
                           3000 ;	../../shared/src/trx_train.c:564: adapt_data_en = tag_TRAIN_USE_D; //0
   5345 90 60 44           3001 	mov	dptr,#_DFE_CONTROL_3
   5348 E0                 3002 	movx	a,@dptr
   5349 23                 3003 	rl	a
   534A 23                 3004 	rl	a
   534B 54 01              3005 	anl	a,#0x01
   534D 24 FF              3006 	add	a,#0xff
   534F 92 0D              3007 	mov	_adapt_data_en,c
                           3008 ;	../../shared/src/trx_train.c:565: adapt_slicer_en = tag_TRAIN_USE_S; //1		
   5351 90 60 44           3009 	mov	dptr,#_DFE_CONTROL_3
   5354 E0                 3010 	movx	a,@dptr
   5355 23                 3011 	rl	a
   5356 54 01              3012 	anl	a,#0x01
   5358 24 FF              3013 	add	a,#0xff
   535A 92 0C              3014 	mov	_adapt_slicer_en,c
                           3015 ;	../../shared/src/trx_train.c:566: ph_control_mode = 0; 
   535C 90 66 F8           3016 	mov	dptr,#_ph_control_mode
   535F E4                 3017 	clr	a
   5360 F0                 3018 	movx	@dptr,a
                           3019 ;	../../shared/src/trx_train.c:567: set_ph_mode();
   5361 78 3B              3020 	mov	r0,#_set_ph_mode
   5363 79 97              3021 	mov	r1,#(_set_ph_mode >> 8)
   5365 7A 02              3022 	mov	r2,#(_set_ph_mode >> 16)
   5367 12 00 B3           3023 	lcall	__sdcc_banked_call
                           3024 ;	../../shared/src/trx_train.c:569: dfe_cdr_phase_opt();
   536A 12 59 ED           3025 	lcall	_dfe_cdr_phase_opt
                           3026 ;	../../shared/src/trx_train.c:570: train2opt(); 
   536D 12 5C 2F           3027 	lcall	_train2opt
                           3028 ;	../../shared/src/trx_train.c:572: ctrl_cdr_phase_on = 0;
   5370 C2 1E              3029 	clr	_ctrl_cdr_phase_on
                           3030 ;	../../shared/src/trx_train.c:573: train_r = tag_RX_RXFFE_R_INI;  //0
   5372 90 60 5B           3031 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0003)
   5375 E0                 3032 	movx	a,@dptr
   5376 C4                 3033 	swap	a
   5377 54 0F              3034 	anl	a,#0x0f
   5379 90 66 C6           3035 	mov	dptr,#_train_r
   537C F0                 3036 	movx	@dptr,a
                           3037 ;	../../shared/src/trx_train.c:574: train_c = tag_RX_RXFFE_C_INI; //15
   537D 90 60 8F           3038 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   5380 E0                 3039 	movx	a,@dptr
   5381 C4                 3040 	swap	a
   5382 54 0F              3041 	anl	a,#0x0f
   5384 90 66 C5           3042 	mov	dptr,#_train_c
   5387 F0                 3043 	movx	@dptr,a
                           3044 ;	../../shared/src/trx_train.c:575: Set_Rx_FFE();
   5388 12 5C 7F           3045 	lcall	_Set_Rx_FFE
                           3046 ;	../../shared/src/trx_train.c:576: dfe_cdr_phase_opt();	
   538B 12 59 ED           3047 	lcall	_dfe_cdr_phase_opt
                           3048 ;	../../shared/src/trx_train.c:577: train2opt(); 
   538E 12 5C 2F           3049 	lcall	_train2opt
                           3050 ;	../../shared/src/trx_train.c:580: skip_alg:
   5391                    3051 00134$:
                           3052 ;	../../shared/src/trx_train.c:582: if (do_train) {
   5391 30 06 29           3053 	jnb	_do_train,00143$
                           3054 ;	../../shared/src/trx_train.c:584: if(link_train_mode==0) trainif_init();		
   5394 90 26 7B           3055 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   5397 E0                 3056 	movx	a,@dptr
   5398 20 E7 09           3057 	jb	acc.7,00136$
   539B 78 C4              3058 	mov	r0,#_trainif_init
   539D 79 E6              3059 	mov	r1,#(_trainif_init >> 8)
   539F 7A 01              3060 	mov	r2,#(_trainif_init >> 16)
   53A1 12 00 B3           3061 	lcall	__sdcc_banked_call
   53A4                    3062 00136$:
                           3063 ;	../../shared/src/trx_train.c:586: if (tag_TX_NO_INIT==0) //0
   53A4 90 60 4C           3064 	mov	dptr,#_DFE_CONTROL_5
   53A7 E0                 3065 	movx	a,@dptr
   53A8 20 E2 0F           3066 	jb	acc.2,00140$
                           3067 ;	../../shared/src/trx_train.c:591: if(tx_pipe4_en==0)  {
   53AB 20 26 0C           3068 	jb	_tx_pipe4_en,00140$
                           3069 ;	../../shared/src/trx_train.c:592: tx_reset(train.tx_preset_index); //3
   53AE 90 66 65           3070 	mov	dptr,#(_train + 0x0025)
   53B1 E0                 3071 	movx	a,@dptr
   53B2 F5 82              3072 	mov	dpl,a
   53B4 12 71 6C           3073 	lcall	_tx_reset
                           3074 ;	../../shared/src/trx_train.c:593: dfe_cdr_phase_opt();
   53B7 12 59 ED           3075 	lcall	_dfe_cdr_phase_opt
   53BA                    3076 00140$:
                           3077 ;	../../shared/src/trx_train.c:597: train2opt(); 
   53BA 02 5C 2F           3078 	ljmp	_train2opt
   53BD                    3079 00143$:
   53BD 22                 3080 	ret
                           3081 ;------------------------------------------------------------
                           3082 ;Allocation info for local variables in function 'trx_train_control'
                           3083 ;------------------------------------------------------------
                           3084 ;------------------------------------------------------------
                           3085 ;	../../shared/src/trx_train.c:603: void trx_train_control(void) {
                           3086 ;	-----------------------------------------
                           3087 ;	 function trx_train_control
                           3088 ;	-----------------------------------------
   53BE                    3089 _trx_train_control:
                           3090 ;	../../shared/src/trx_train.c:610: if (ctrl_rx_only_mode) // if in the RX_only training mode
   53BE 90 67 18           3091 	mov	dptr,#_ctrl_rx_only_mode
   53C1 E0                 3092 	movx	a,@dptr
   53C2 FA                 3093 	mov	r2,a
   53C3 60 12              3094 	jz	00119$
                           3095 ;	../../shared/src/trx_train.c:612: if (ctrl_rx_train_done) // if RX training is done
   53C5 30 21 04           3096 	jnb	_ctrl_rx_train_done,00102$
                           3097 ;	../../shared/src/trx_train.c:614: ctrl_trx_train_done = 1; // return training done
   53C8 D2 23              3098 	setb	_ctrl_trx_train_done
   53CA 80 4E              3099 	sjmp	00120$
   53CC                    3100 00102$:
                           3101 ;	../../shared/src/trx_train.c:619: ctrl_rx_train_on = 1; // train RX FFE in the next
   53CC D2 1F              3102 	setb	_ctrl_rx_train_on
                           3103 ;	../../shared/src/trx_train.c:620: ctrl_tx_train_on = 0; // train RX FFE in the next
   53CE C2 20              3104 	clr	_ctrl_tx_train_on
                           3105 ;	../../shared/src/trx_train.c:621: rx.blind_training = 0;
   53D0 90 66 AC           3106 	mov	dptr,#_rx
   53D3 E4                 3107 	clr	a
   53D4 F0                 3108 	movx	@dptr,a
   53D5 80 43              3109 	sjmp	00120$
   53D7                    3110 00119$:
                           3111 ;	../../shared/src/trx_train.c:627: if (opt.excellent_eo && (opt.saturated==0)) // if EO is excellent and not saturated
   53D7 90 66 98           3112 	mov	dptr,#(_opt + 0x0029)
   53DA E0                 3113 	movx	a,@dptr
   53DB 60 17              3114 	jz	00115$
   53DD 90 66 97           3115 	mov	dptr,#(_opt + 0x0028)
   53E0 E0                 3116 	movx	a,@dptr
   53E1 70 11              3117 	jnz	00115$
                           3118 ;	../../shared/src/trx_train.c:629: ctrl_rx_only_mode = 1; // set RX_only_mode = 1
   53E3 90 67 18           3119 	mov	dptr,#_ctrl_rx_only_mode
   53E6 74 01              3120 	mov	a,#0x01
   53E8 F0                 3121 	movx	@dptr,a
                           3122 ;	../../shared/src/trx_train.c:630: ctrl_rx_train_on = 1; // train RX FFE in the next for the last time
   53E9 D2 1F              3123 	setb	_ctrl_rx_train_on
                           3124 ;	../../shared/src/trx_train.c:631: ctrl_tx_train_on = 0; 
   53EB C2 20              3125 	clr	_ctrl_tx_train_on
                           3126 ;	../../shared/src/trx_train.c:632: rx.blind_training = 0;
   53ED 90 66 AC           3127 	mov	dptr,#_rx
   53F0 E4                 3128 	clr	a
   53F1 F0                 3129 	movx	@dptr,a
   53F2 80 26              3130 	sjmp	00120$
   53F4                    3131 00115$:
                           3132 ;	../../shared/src/trx_train.c:635: else if (ctrl_rx_train_done) // if RX training is done
   53F4 30 21 06           3133 	jnb	_ctrl_rx_train_done,00112$
                           3134 ;	../../shared/src/trx_train.c:637: ctrl_rx_train_on = 0; // train TX FFE in the next
   53F7 C2 1F              3135 	clr	_ctrl_rx_train_on
                           3136 ;	../../shared/src/trx_train.c:638: ctrl_tx_train_on = 1; // train TX FFE in the next
   53F9 D2 20              3137 	setb	_ctrl_tx_train_on
   53FB 80 1D              3138 	sjmp	00120$
   53FD                    3139 00112$:
                           3140 ;	../../shared/src/trx_train.c:640: else if (ctrl_tx_train_done) // if TX training is done
   53FD 30 22 11           3141 	jnb	_ctrl_tx_train_done,00109$
                           3142 ;	../../shared/src/trx_train.c:642: ctrl_rx_train_on = 1; // train RX FFE in the next
   5400 D2 1F              3143 	setb	_ctrl_rx_train_on
                           3144 ;	../../shared/src/trx_train.c:643: ctrl_tx_train_on = 0; // train RX FFE in the next
   5402 C2 20              3145 	clr	_ctrl_tx_train_on
                           3146 ;	../../shared/src/trx_train.c:662: rx.blind_training = 0; // not RX blind training
   5404 90 66 AC           3147 	mov	dptr,#_rx
   5407 E4                 3148 	clr	a
   5408 F0                 3149 	movx	@dptr,a
                           3150 ;	../../shared/src/trx_train.c:667: ctrl_rx_only_mode = 1; 
   5409 90 67 18           3151 	mov	dptr,#_ctrl_rx_only_mode
   540C 74 01              3152 	mov	a,#0x01
   540E F0                 3153 	movx	@dptr,a
                           3154 ;	../../shared/src/trx_train.c:672: ctrl_num_big_loop ++; // update the number of big training loops by adding one
   540F 80 09              3155 	sjmp	00120$
   5411                    3156 00109$:
                           3157 ;	../../shared/src/trx_train.c:681: rx.blind_training = 0; // not RX blind training
   5411 90 66 AC           3158 	mov	dptr,#_rx
   5414 E4                 3159 	clr	a
   5415 F0                 3160 	movx	@dptr,a
                           3161 ;	../../shared/src/trx_train.c:684: ctrl_rx_train_on = 0; // train TX FFE in the next
   5416 C2 1F              3162 	clr	_ctrl_rx_train_on
                           3163 ;	../../shared/src/trx_train.c:685: ctrl_tx_train_on = 1; // train TX FFE in the next
   5418 D2 20              3164 	setb	_ctrl_tx_train_on
   541A                    3165 00120$:
                           3166 ;	../../shared/src/trx_train.c:698: if( ctrl_trx_train_done==0 ) // is not training done, we will train RX or TX
   541A 20 23 06           3167 	jb	_ctrl_trx_train_done,00123$
                           3168 ;	../../shared/src/trx_train.c:700: ctrl_rx_train_done = 0; // reset flag
   541D C2 21              3169 	clr	_ctrl_rx_train_done
                           3170 ;	../../shared/src/trx_train.c:701: ctrl_tx_train_done = 0; // reset flag
   541F C2 22              3171 	clr	_ctrl_tx_train_done
                           3172 ;	../../shared/src/trx_train.c:702: ctrl_trx_ffe_updated = 0; // reset flag
   5421 C2 25              3173 	clr	_ctrl_trx_ffe_updated
   5423                    3174 00123$:
   5423 22                 3175 	ret
                           3176 ;------------------------------------------------------------
                           3177 ;Allocation info for local variables in function 'update_dfe_res'
                           3178 ;------------------------------------------------------------
                           3179 ;dfe_res_f1_low            Allocated to registers r2 
                           3180 ;------------------------------------------------------------
                           3181 ;	../../shared/src/trx_train.c:710: void update_dfe_res()
                           3182 ;	-----------------------------------------
                           3183 ;	 function update_dfe_res
                           3184 ;	-----------------------------------------
   5424                    3185 _update_dfe_res:
                           3186 ;	../../shared/src/trx_train.c:715: if (dfe_res_f1 == 0 || dfe_res_f1 == 1)
   5424 90 00 50           3187 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5427 E0                 3188 	movx	a,@dptr
   5428 54 06              3189 	anl	a,#0x06
   542A 60 0B              3190 	jz	00104$
   542C 90 00 50           3191 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   542F E0                 3192 	movx	a,@dptr
   5430 03                 3193 	rr	a
   5431 54 03              3194 	anl	a,#0x03
   5433 FA                 3195 	mov	r2,a
   5434 BA 01 04           3196 	cjne	r2,#0x01,00105$
   5437                    3197 00104$:
                           3198 ;	../../shared/src/trx_train.c:717: dfe_res_f1_low = tag_DFE_RES_F1_LOW_01; //20
   5437 7A 14              3199 	mov	r2,#0x14
   5439 80 11              3200 	sjmp	00106$
   543B                    3201 00105$:
                           3202 ;	../../shared/src/trx_train.c:719: else if (dfe_res_f1 == 2)
   543B 90 00 50           3203 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   543E E0                 3204 	movx	a,@dptr
   543F 03                 3205 	rr	a
   5440 54 03              3206 	anl	a,#0x03
   5442 FB                 3207 	mov	r3,a
   5443 BB 02 04           3208 	cjne	r3,#0x02,00102$
                           3209 ;	../../shared/src/trx_train.c:721: dfe_res_f1_low = tag_DFE_RES_F1_LOW_2; //22
   5446 7A 16              3210 	mov	r2,#0x16
   5448 80 02              3211 	sjmp	00106$
   544A                    3212 00102$:
                           3213 ;	../../shared/src/trx_train.c:725: dfe_res_f1_low = tag_DFE_RES_F1_LOW_3; //24
   544A 7A 18              3214 	mov	r2,#0x18
   544C                    3215 00106$:
                           3216 ;	../../shared/src/trx_train.c:728: if (abs(train.f1) < dfe_res_f1_low && dfe_f1_res_sel>0 )
   544C 90 66 46           3217 	mov	dptr,#(_train + 0x0006)
   544F E0                 3218 	movx	a,@dptr
   5450 F5 82              3219 	mov	dpl,a
   5452 C0 02              3220 	push	ar2
   5454 78 41              3221 	mov	r0,#_abs
   5456 79 C1              3222 	mov	r1,#(_abs >> 8)
   5458 7A 02              3223 	mov	r2,#(_abs >> 16)
   545A 12 00 B3           3224 	lcall	__sdcc_banked_call
   545D AB 82              3225 	mov	r3,dpl
   545F D0 02              3226 	pop	ar2
   5461 C3                 3227 	clr	c
   5462 EB                 3228 	mov	a,r3
   5463 64 80              3229 	xrl	a,#0x80
   5465 8A F0              3230 	mov	b,r2
   5467 63 F0 80           3231 	xrl	b,#0x80
   546A 95 F0              3232 	subb	a,b
   546C 50 22              3233 	jnc	00112$
   546E 90 00 50           3234 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5471 E0                 3235 	movx	a,@dptr
   5472 54 06              3236 	anl	a,#0x06
   5474 60 1A              3237 	jz	00112$
                           3238 ;	../../shared/src/trx_train.c:730: dfe_f1_res_sel = dfe_f1_res_sel - 1; //	take min
   5476 90 00 50           3239 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5479 E0                 3240 	movx	a,@dptr
   547A 03                 3241 	rr	a
   547B 54 03              3242 	anl	a,#0x03
   547D FA                 3243 	mov	r2,a
   547E 1A                 3244 	dec	r2
   547F 90 00 50           3245 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5482 EA                 3246 	mov	a,r2
   5483 2A                 3247 	add	a,r2
   5484 54 06              3248 	anl	a,#0x06
   5486 F5 F0              3249 	mov	b,a
   5488 E0                 3250 	movx	a,@dptr
   5489 54 F9              3251 	anl	a,#0xf9
   548B 45 F0              3252 	orl	a,b
   548D F0                 3253 	movx	@dptr,a
   548E 80 44              3254 	sjmp	00113$
   5490                    3255 00112$:
                           3256 ;	../../shared/src/trx_train.c:732: else if (abs(train.f1) > tag_DFE_REA_F1_HIGH && dfe_f1_res_sel < tag_DFE_F1_RES_SEL_MAX)
   5490 90 66 46           3257 	mov	dptr,#(_train + 0x0006)
   5493 E0                 3258 	movx	a,@dptr
   5494 F5 82              3259 	mov	dpl,a
   5496 78 41              3260 	mov	r0,#_abs
   5498 79 C1              3261 	mov	r1,#(_abs >> 8)
   549A 7A 02              3262 	mov	r2,#(_abs >> 16)
   549C 12 00 B3           3263 	lcall	__sdcc_banked_call
   549F AA 82              3264 	mov	r2,dpl
   54A1 C3                 3265 	clr	c
   54A2 74 9D              3266 	mov	a,#(0x1D ^ 0x80)
   54A4 8A F0              3267 	mov	b,r2
   54A6 63 F0 80           3268 	xrl	b,#0x80
   54A9 95 F0              3269 	subb	a,b
   54AB 50 27              3270 	jnc	00113$
   54AD 90 00 50           3271 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   54B0 E0                 3272 	movx	a,@dptr
   54B1 03                 3273 	rr	a
   54B2 54 03              3274 	anl	a,#0x03
   54B4 FA                 3275 	mov	r2,a
   54B5 C3                 3276 	clr	c
   54B6 64 80              3277 	xrl	a,#0x80
   54B8 94 83              3278 	subb	a,#0x83
   54BA 50 18              3279 	jnc	00113$
                           3280 ;	../../shared/src/trx_train.c:734: dfe_f1_res_sel = dfe_f1_res_sel + 1; //	take max
   54BC 90 00 50           3281 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   54BF E0                 3282 	movx	a,@dptr
   54C0 03                 3283 	rr	a
   54C1 54 03              3284 	anl	a,#0x03
   54C3 FA                 3285 	mov	r2,a
   54C4 0A                 3286 	inc	r2
   54C5 90 00 50           3287 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   54C8 EA                 3288 	mov	a,r2
   54C9 2A                 3289 	add	a,r2
   54CA 54 06              3290 	anl	a,#0x06
   54CC F5 F0              3291 	mov	b,a
   54CE E0                 3292 	movx	a,@dptr
   54CF 54 F9              3293 	anl	a,#0xf9
   54D1 45 F0              3294 	orl	a,b
   54D3 F0                 3295 	movx	@dptr,a
   54D4                    3296 00113$:
                           3297 ;	../../shared/src/trx_train.c:737: if ( abs(train.f2) < tag_DFE_REA_F2_LOW && abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f234_res_sel>0 )
   54D4 90 66 5B           3298 	mov	dptr,#(_train + 0x001b)
   54D7 E0                 3299 	movx	a,@dptr
   54D8 F5 82              3300 	mov	dpl,a
   54DA 78 41              3301 	mov	r0,#_abs
   54DC 79 C1              3302 	mov	r1,#(_abs >> 8)
   54DE 7A 02              3303 	mov	r2,#(_abs >> 16)
   54E0 12 00 B3           3304 	lcall	__sdcc_banked_call
   54E3 AA 82              3305 	mov	r2,dpl
   54E5 C3                 3306 	clr	c
   54E6 EA                 3307 	mov	a,r2
   54E7 64 80              3308 	xrl	a,#0x80
   54E9 94 94              3309 	subb	a,#0x94
   54EB 50 53              3310 	jnc	00121$
   54ED 90 66 5C           3311 	mov	dptr,#(_train + 0x001c)
   54F0 E0                 3312 	movx	a,@dptr
   54F1 F5 82              3313 	mov	dpl,a
   54F3 78 41              3314 	mov	r0,#_abs
   54F5 79 C1              3315 	mov	r1,#(_abs >> 8)
   54F7 7A 02              3316 	mov	r2,#(_abs >> 16)
   54F9 12 00 B3           3317 	lcall	__sdcc_banked_call
   54FC AA 82              3318 	mov	r2,dpl
   54FE C3                 3319 	clr	c
   54FF EA                 3320 	mov	a,r2
   5500 64 80              3321 	xrl	a,#0x80
   5502 94 8A              3322 	subb	a,#0x8a
   5504 50 3A              3323 	jnc	00121$
   5506 90 66 4B           3324 	mov	dptr,#(_train + 0x000b)
   5509 E0                 3325 	movx	a,@dptr
   550A F5 82              3326 	mov	dpl,a
   550C 78 41              3327 	mov	r0,#_abs
   550E 79 C1              3328 	mov	r1,#(_abs >> 8)
   5510 7A 02              3329 	mov	r2,#(_abs >> 16)
   5512 12 00 B3           3330 	lcall	__sdcc_banked_call
   5515 AA 82              3331 	mov	r2,dpl
   5517 C3                 3332 	clr	c
   5518 EA                 3333 	mov	a,r2
   5519 64 80              3334 	xrl	a,#0x80
   551B 94 94              3335 	subb	a,#0x94
   551D 50 21              3336 	jnc	00121$
   551F 90 00 50           3337 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5522 E0                 3338 	movx	a,@dptr
   5523 30 E0 1A           3339 	jnb	acc.0,00121$
                           3340 ;	../../shared/src/trx_train.c:739: dfe_f234_res_sel = dfe_f234_res_sel -1; // take min;
   5526 90 00 50           3341 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5529 E0                 3342 	movx	a,@dptr
   552A 54 01              3343 	anl	a,#0x01
   552C FA                 3344 	mov	r2,a
   552D 7B 00              3345 	mov	r3,#0x00
   552F 1A                 3346 	dec	r2
   5530 BA FF 01           3347 	cjne	r2,#0xff,00172$
   5533 1B                 3348 	dec	r3
   5534                    3349 00172$:
   5534 90 00 50           3350 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5537 EA                 3351 	mov	a,r2
   5538 13                 3352 	rrc	a
   5539 E0                 3353 	movx	a,@dptr
   553A 92 E0              3354 	mov	acc.0,c
   553C F0                 3355 	movx	@dptr,a
   553D 02 55 BC           3356 	ljmp	00122$
   5540                    3357 00121$:
                           3358 ;	../../shared/src/trx_train.c:741: else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH || abs(train.f3) > tag_DFE_REA_F3_HIGH && abs(train.f4) > tag_DFE_REA_F4_HIGH && dfe_f234_res_sel < tag_DFE_F234_RES_SEL_MAX  )
   5540 90 66 5B           3359 	mov	dptr,#(_train + 0x001b)
   5543 E0                 3360 	movx	a,@dptr
   5544 F5 82              3361 	mov	dpl,a
   5546 78 41              3362 	mov	r0,#_abs
   5548 79 C1              3363 	mov	r1,#(_abs >> 8)
   554A 7A 02              3364 	mov	r2,#(_abs >> 16)
   554C 12 00 B3           3365 	lcall	__sdcc_banked_call
   554F AA 82              3366 	mov	r2,dpl
   5551 C3                 3367 	clr	c
   5552 74 9D              3368 	mov	a,#(0x1D ^ 0x80)
   5554 8A F0              3369 	mov	b,r2
   5556 63 F0 80           3370 	xrl	b,#0x80
   5559 95 F0              3371 	subb	a,b
   555B 40 48              3372 	jc	00115$
   555D 90 66 5C           3373 	mov	dptr,#(_train + 0x001c)
   5560 E0                 3374 	movx	a,@dptr
   5561 F5 82              3375 	mov	dpl,a
   5563 78 41              3376 	mov	r0,#_abs
   5565 79 C1              3377 	mov	r1,#(_abs >> 8)
   5567 7A 02              3378 	mov	r2,#(_abs >> 16)
   5569 12 00 B3           3379 	lcall	__sdcc_banked_call
   556C AA 82              3380 	mov	r2,dpl
   556E C3                 3381 	clr	c
   556F 74 8D              3382 	mov	a,#(0x0D ^ 0x80)
   5571 8A F0              3383 	mov	b,r2
   5573 63 F0 80           3384 	xrl	b,#0x80
   5576 95 F0              3385 	subb	a,b
   5578 50 42              3386 	jnc	00122$
   557A 90 66 4B           3387 	mov	dptr,#(_train + 0x000b)
   557D E0                 3388 	movx	a,@dptr
   557E F5 82              3389 	mov	dpl,a
   5580 78 41              3390 	mov	r0,#_abs
   5582 79 C1              3391 	mov	r1,#(_abs >> 8)
   5584 7A 02              3392 	mov	r2,#(_abs >> 16)
   5586 12 00 B3           3393 	lcall	__sdcc_banked_call
   5589 AA 82              3394 	mov	r2,dpl
   558B C3                 3395 	clr	c
   558C 74 9D              3396 	mov	a,#(0x1D ^ 0x80)
   558E 8A F0              3397 	mov	b,r2
   5590 63 F0 80           3398 	xrl	b,#0x80
   5593 95 F0              3399 	subb	a,b
   5595 50 25              3400 	jnc	00122$
   5597 90 00 50           3401 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   559A E0                 3402 	movx	a,@dptr
   559B 54 01              3403 	anl	a,#0x01
   559D FA                 3404 	mov	r2,a
   559E C3                 3405 	clr	c
   559F 64 80              3406 	xrl	a,#0x80
   55A1 94 81              3407 	subb	a,#0x81
   55A3 50 17              3408 	jnc	00122$
   55A5                    3409 00115$:
                           3410 ;	../../shared/src/trx_train.c:743: dfe_f234_res_sel = dfe_f234_res_sel + 1;
   55A5 90 00 50           3411 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   55A8 E0                 3412 	movx	a,@dptr
   55A9 54 01              3413 	anl	a,#0x01
   55AB FA                 3414 	mov	r2,a
   55AC 7B 00              3415 	mov	r3,#0x00
   55AE 0A                 3416 	inc	r2
   55AF BA 00 01           3417 	cjne	r2,#0x00,00177$
   55B2 0B                 3418 	inc	r3
   55B3                    3419 00177$:
   55B3 90 00 50           3420 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   55B6 EA                 3421 	mov	a,r2
   55B7 13                 3422 	rrc	a
   55B8 E0                 3423 	movx	a,@dptr
   55B9 92 E0              3424 	mov	acc.0,c
   55BB F0                 3425 	movx	@dptr,a
   55BC                    3426 00122$:
                           3427 ;	../../shared/src/trx_train.c:746: if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && dfe_f567_res_sel>0)
   55BC 90 66 4C           3428 	mov	dptr,#(_train + 0x000c)
   55BF E0                 3429 	movx	a,@dptr
   55C0 F5 82              3430 	mov	dpl,a
   55C2 78 41              3431 	mov	r0,#_abs
   55C4 79 C1              3432 	mov	r1,#(_abs >> 8)
   55C6 7A 02              3433 	mov	r2,#(_abs >> 16)
   55C8 12 00 B3           3434 	lcall	__sdcc_banked_call
   55CB AA 82              3435 	mov	r2,dpl
   55CD C3                 3436 	clr	c
   55CE EA                 3437 	mov	a,r2
   55CF 64 80              3438 	xrl	a,#0x80
   55D1 94 90              3439 	subb	a,#0x90
   55D3 50 52              3440 	jnc	00132$
   55D5 90 66 4D           3441 	mov	dptr,#(_train + 0x000d)
   55D8 E0                 3442 	movx	a,@dptr
   55D9 F5 82              3443 	mov	dpl,a
   55DB 78 41              3444 	mov	r0,#_abs
   55DD 79 C1              3445 	mov	r1,#(_abs >> 8)
   55DF 7A 02              3446 	mov	r2,#(_abs >> 16)
   55E1 12 00 B3           3447 	lcall	__sdcc_banked_call
   55E4 AA 82              3448 	mov	r2,dpl
   55E6 C3                 3449 	clr	c
   55E7 EA                 3450 	mov	a,r2
   55E8 64 80              3451 	xrl	a,#0x80
   55EA 94 90              3452 	subb	a,#0x90
   55EC 50 39              3453 	jnc	00132$
   55EE 90 66 4E           3454 	mov	dptr,#(_train + 0x000e)
   55F1 E0                 3455 	movx	a,@dptr
   55F2 F5 82              3456 	mov	dpl,a
   55F4 78 41              3457 	mov	r0,#_abs
   55F6 79 C1              3458 	mov	r1,#(_abs >> 8)
   55F8 7A 02              3459 	mov	r2,#(_abs >> 16)
   55FA 12 00 B3           3460 	lcall	__sdcc_banked_call
   55FD AA 82              3461 	mov	r2,dpl
   55FF C3                 3462 	clr	c
   5600 EA                 3463 	mov	a,r2
   5601 64 80              3464 	xrl	a,#0x80
   5603 94 88              3465 	subb	a,#0x88
   5605 50 20              3466 	jnc	00132$
   5607 90 00 54           3467 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   560A E0                 3468 	movx	a,@dptr
   560B 30 E7 19           3469 	jnb	acc.7,00132$
                           3470 ;	../../shared/src/trx_train.c:748: dfe_f567_res_sel = dfe_f567_res_sel -1; //take min;
   560E 90 00 54           3471 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5611 E0                 3472 	movx	a,@dptr
   5612 23                 3473 	rl	a
   5613 54 01              3474 	anl	a,#0x01
   5615 FA                 3475 	mov	r2,a
   5616 7B 00              3476 	mov	r3,#0x00
   5618 1A                 3477 	dec	r2
   5619 BA FF 01           3478 	cjne	r2,#0xff,00182$
   561C 1B                 3479 	dec	r3
   561D                    3480 00182$:
   561D 90 00 54           3481 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5620 EA                 3482 	mov	a,r2
   5621 13                 3483 	rrc	a
   5622 E0                 3484 	movx	a,@dptr
   5623 92 E7              3485 	mov	acc.7,c
   5625 F0                 3486 	movx	@dptr,a
   5626 22                 3487 	ret
   5627                    3488 00132$:
                           3489 ;	../../shared/src/trx_train.c:750: else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && dfe_f567_res_sel < tag_DFE_F567_RES_SEL_MAX )
   5627 90 66 4C           3490 	mov	dptr,#(_train + 0x000c)
   562A E0                 3491 	movx	a,@dptr
   562B F5 82              3492 	mov	dpl,a
   562D 78 41              3493 	mov	r0,#_abs
   562F 79 C1              3494 	mov	r1,#(_abs >> 8)
   5631 7A 02              3495 	mov	r2,#(_abs >> 16)
   5633 12 00 B3           3496 	lcall	__sdcc_banked_call
   5636 AA 82              3497 	mov	r2,dpl
   5638 C3                 3498 	clr	c
   5639 74 9D              3499 	mov	a,#(0x1D ^ 0x80)
   563B 8A F0              3500 	mov	b,r2
   563D 63 F0 80           3501 	xrl	b,#0x80
   5640 95 F0              3502 	subb	a,b
   5642 40 49              3503 	jc	00126$
   5644 90 66 4D           3504 	mov	dptr,#(_train + 0x000d)
   5647 E0                 3505 	movx	a,@dptr
   5648 F5 82              3506 	mov	dpl,a
   564A 78 41              3507 	mov	r0,#_abs
   564C 79 C1              3508 	mov	r1,#(_abs >> 8)
   564E 7A 02              3509 	mov	r2,#(_abs >> 16)
   5650 12 00 B3           3510 	lcall	__sdcc_banked_call
   5653 AA 82              3511 	mov	r2,dpl
   5655 C3                 3512 	clr	c
   5656 74 9D              3513 	mov	a,#(0x1D ^ 0x80)
   5658 8A F0              3514 	mov	b,r2
   565A 63 F0 80           3515 	xrl	b,#0x80
   565D 95 F0              3516 	subb	a,b
   565F 50 44              3517 	jnc	00137$
   5661 90 66 4E           3518 	mov	dptr,#(_train + 0x000e)
   5664 E0                 3519 	movx	a,@dptr
   5665 F5 82              3520 	mov	dpl,a
   5667 78 41              3521 	mov	r0,#_abs
   5669 79 C1              3522 	mov	r1,#(_abs >> 8)
   566B 7A 02              3523 	mov	r2,#(_abs >> 16)
   566D 12 00 B3           3524 	lcall	__sdcc_banked_call
   5670 AA 82              3525 	mov	r2,dpl
   5672 C3                 3526 	clr	c
   5673 74 8D              3527 	mov	a,#(0x0D ^ 0x80)
   5675 8A F0              3528 	mov	b,r2
   5677 63 F0 80           3529 	xrl	b,#0x80
   567A 95 F0              3530 	subb	a,b
   567C 50 27              3531 	jnc	00137$
   567E 90 00 54           3532 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5681 E0                 3533 	movx	a,@dptr
   5682 23                 3534 	rl	a
   5683 54 01              3535 	anl	a,#0x01
   5685 FA                 3536 	mov	r2,a
   5686 C3                 3537 	clr	c
   5687 64 80              3538 	xrl	a,#0x80
   5689 94 81              3539 	subb	a,#0x81
   568B 50 18              3540 	jnc	00137$
   568D                    3541 00126$:
                           3542 ;	../../shared/src/trx_train.c:752: dfe_f567_res_sel = dfe_f567_res_sel + 1;
   568D 90 00 54           3543 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5690 E0                 3544 	movx	a,@dptr
   5691 23                 3545 	rl	a
   5692 54 01              3546 	anl	a,#0x01
   5694 FA                 3547 	mov	r2,a
   5695 7B 00              3548 	mov	r3,#0x00
   5697 0A                 3549 	inc	r2
   5698 BA 00 01           3550 	cjne	r2,#0x00,00187$
   569B 0B                 3551 	inc	r3
   569C                    3552 00187$:
   569C 90 00 54           3553 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   569F EA                 3554 	mov	a,r2
   56A0 13                 3555 	rrc	a
   56A1 E0                 3556 	movx	a,@dptr
   56A2 92 E7              3557 	mov	acc.7,c
   56A4 F0                 3558 	movx	@dptr,a
   56A5                    3559 00137$:
   56A5 22                 3560 	ret
                           3561 ;------------------------------------------------------------
                           3562 ;Allocation info for local variables in function 'trx_train_end'
                           3563 ;------------------------------------------------------------
                           3564 ;num                       Allocated to registers r2 
                           3565 ;index                     Allocated to registers r3 
                           3566 ;------------------------------------------------------------
                           3567 ;	../../shared/src/trx_train.c:798: void trx_train_end()
                           3568 ;	-----------------------------------------
                           3569 ;	 function trx_train_end
                           3570 ;	-----------------------------------------
   56A6                    3571 _trx_train_end:
                           3572 ;	../../shared/src/trx_train.c:807: if (TRAIN_SIM_EN)	{
   56A6 90 E6 07           3573 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   56A9 E0                 3574 	movx	a,@dptr
   56AA 30 E2 07           3575 	jnb	acc.2,00102$
                           3576 ;	../../shared/src/trx_train.c:808: ctrl_trx_train_pass = 1;
   56AD 90 67 19           3577 	mov	dptr,#_ctrl_trx_train_pass
   56B0 74 01              3578 	mov	a,#0x01
   56B2 F0                 3579 	movx	@dptr,a
                           3580 ;	../../shared/src/trx_train.c:809: return;
   56B3 22                 3581 	ret
   56B4                    3582 00102$:
                           3583 ;	../../shared/src/trx_train.c:812: if (tag_GAIN_TRAIN_END_EN)
   56B4 90 60 3A           3584 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   56B7 E0                 3585 	movx	a,@dptr
   56B8 30 E1 2D           3586 	jnb	acc.1,00104$
                           3587 ;	../../shared/src/trx_train.c:814: gain_train_with_c = 0;
   56BB C2 24              3588 	clr	_gain_train_with_c
                           3589 ;	../../shared/src/trx_train.c:817: opt2train();
   56BD 12 5B DD           3590 	lcall	_opt2train
                           3591 ;	../../shared/src/trx_train.c:818: ctrl_cdr_phase_on = 0;
   56C0 C2 1E              3592 	clr	_ctrl_cdr_phase_on
                           3593 ;	../../shared/src/trx_train.c:820: dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_END;
   56C2 90 60 7B           3594 	mov	dptr,#(_DFE_CONTROL_6 + 0x0003)
   56C5 E0                 3595 	movx	a,@dptr
   56C6 90 66 C1           3596 	mov	dptr,#_dfe_res_f0a_low_thres_01
   56C9 F0                 3597 	movx	@dptr,a
                           3598 ;	../../shared/src/trx_train.c:821: dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_END;
   56CA 90 60 74           3599 	mov	dptr,#_TRAIN_PARA_3
   56CD E0                 3600 	movx	a,@dptr
   56CE 90 66 C2           3601 	mov	dptr,#_dfe_res_f0a_low_thres_2
   56D1 F0                 3602 	movx	@dptr,a
                           3603 ;	../../shared/src/trx_train.c:822: dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_END;
   56D2 90 60 75           3604 	mov	dptr,#(_TRAIN_PARA_3 + 0x0001)
   56D5 E0                 3605 	movx	a,@dptr
   56D6 90 66 C3           3606 	mov	dptr,#_dfe_res_f0a_low_thres_3
   56D9 F0                 3607 	movx	@dptr,a
                           3608 ;	../../shared/src/trx_train.c:823: dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_END;
   56DA 90 60 6C           3609 	mov	dptr,#_TRAIN_PARA_1
   56DD E0                 3610 	movx	a,@dptr
   56DE 90 66 C4           3611 	mov	dptr,#_dfe_res_f0a_high_thres
   56E1 F0                 3612 	movx	@dptr,a
                           3613 ;	../../shared/src/trx_train.c:825: gain_train();
   56E2 12 57 D9           3614 	lcall	_gain_train
                           3615 ;	../../shared/src/trx_train.c:826: train2opt();
   56E5 12 5C 2F           3616 	lcall	_train2opt
   56E8                    3617 00104$:
                           3618 ;	../../shared/src/trx_train.c:830: if (tag_DFE_ISI_RES_ADAPT_EN) //1
   56E8 90 60 8E           3619 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   56EB E0                 3620 	movx	a,@dptr
   56EC 30 E3 27           3621 	jnb	acc.3,00109$
                           3622 ;	../../shared/src/trx_train.c:840: if(tx_status_pcie_mode) num = 1; 			
   56EF 30 27 04           3623 	jnb	_tx_status_pcie_mode,00106$
   56F2 7A 01              3624 	mov	r2,#0x01
   56F4 80 02              3625 	sjmp	00107$
   56F6                    3626 00106$:
                           3627 ;	../../shared/src/trx_train.c:841: else num = 4;
   56F6 7A 04              3628 	mov	r2,#0x04
   56F8                    3629 00107$:
                           3630 ;	../../shared/src/trx_train.c:844: ctrl_cdr_phase_on = 0;
   56F8 C2 1E              3631 	clr	_ctrl_cdr_phase_on
                           3632 ;	../../shared/src/trx_train.c:845: for (index = 0; index < num; index ++)
   56FA 7B 00              3633 	mov	r3,#0x00
   56FC                    3634 00118$:
   56FC EB                 3635 	mov	a,r3
   56FD B5 02 00           3636 	cjne	a,ar2,00139$
   5700                    3637 00139$:
   5700 50 11              3638 	jnc	00121$
                           3639 ;	../../shared/src/trx_train.c:847: dfe_cdr_phase_opt();
   5702 C0 02              3640 	push	ar2
   5704 C0 03              3641 	push	ar3
   5706 12 59 ED           3642 	lcall	_dfe_cdr_phase_opt
                           3643 ;	../../shared/src/trx_train.c:848: update_dfe_res();
   5709 12 54 24           3644 	lcall	_update_dfe_res
   570C D0 03              3645 	pop	ar3
   570E D0 02              3646 	pop	ar2
                           3647 ;	../../shared/src/trx_train.c:845: for (index = 0; index < num; index ++)
   5710 0B                 3648 	inc	r3
   5711 80 E9              3649 	sjmp	00118$
   5713                    3650 00121$:
                           3651 ;	../../shared/src/trx_train.c:850: train2opt();
   5713 12 5C 2F           3652 	lcall	_train2opt
   5716                    3653 00109$:
                           3654 ;	../../shared/src/trx_train.c:867: if((ph_control_mode == 2 || ph_control_mode == 3 ) && lnx_CDRPHASE_OPT_EN_LANE) {  
   5716 90 66 F8           3655 	mov	dptr,#_ph_control_mode
   5719 E0                 3656 	movx	a,@dptr
   571A FA                 3657 	mov	r2,a
   571B BA 02 02           3658 	cjne	r2,#0x02,00141$
   571E 80 03              3659 	sjmp	00113$
   5720                    3660 00141$:
   5720 BA 03 10           3661 	cjne	r2,#0x03,00111$
   5723                    3662 00113$:
   5723 90 60 4D           3663 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   5726 E0                 3664 	movx	a,@dptr
   5727 30 E7 09           3665 	jnb	acc.7,00111$
                           3666 ;	../../shared/src/trx_train.c:868: advanced_clk_align();  
   572A 78 BB              3667 	mov	r0,#_advanced_clk_align
   572C 79 B3              3668 	mov	r1,#(_advanced_clk_align >> 8)
   572E 7A 01              3669 	mov	r2,#(_advanced_clk_align >> 16)
   5730 12 00 B3           3670 	lcall	__sdcc_banked_call
   5733                    3671 00111$:
                           3672 ;	../../shared/src/trx_train.c:871: lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0 = (uint8_t)train.phase_offset_data;
   5733 90 66 61           3673 	mov	dptr,#(_train + 0x0021)
   5736 E0                 3674 	movx	a,@dptr
   5737 90 60 6B           3675 	mov	dptr,#(_TRAIN_PARA_0 + 0x0003)
   573A F0                 3676 	movx	@dptr,a
                           3677 ;	../../shared/src/trx_train.c:872: lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0 = (uint8_t)train.phase_offset_esm;
   573B 90 66 62           3678 	mov	dptr,#(_train + 0x0022)
   573E E0                 3679 	movx	a,@dptr
   573F 90 60 6A           3680 	mov	dptr,#(_TRAIN_PARA_0 + 0x0002)
   5742 F0                 3681 	movx	@dptr,a
                           3682 ;	../../shared/src/trx_train.c:874: ph_control_mode = 0;
   5743 90 66 F8           3683 	mov	dptr,#_ph_control_mode
   5746 E4                 3684 	clr	a
   5747 F0                 3685 	movx	@dptr,a
                           3686 ;	../../shared/src/trx_train.c:877: set_ph_mode(); 
   5748 78 3B              3687 	mov	r0,#_set_ph_mode
   574A 79 97              3688 	mov	r1,#(_set_ph_mode >> 8)
   574C 7A 02              3689 	mov	r2,#(_set_ph_mode >> 16)
   574E 12 00 B3           3690 	lcall	__sdcc_banked_call
                           3691 ;	../../shared/src/trx_train.c:878: phase_control_func();	
   5751 12 2C 17           3692 	lcall	_phase_control_func
                           3693 ;	../../shared/src/trx_train.c:884: if(!tx_status_pcie_mode) {
   5754 20 27 4C           3694 	jb	_tx_status_pcie_mode,00115$
                           3695 ;	../../shared/src/trx_train.c:885: dfe_adaptation();
   5757 78 EE              3696 	mov	r0,#_dfe_adaptation
   5759 79 9C              3697 	mov	r1,#(_dfe_adaptation >> 8)
   575B 7A 01              3698 	mov	r2,#(_dfe_adaptation >> 16)
   575D 12 00 B3           3699 	lcall	__sdcc_banked_call
                           3700 ;	../../shared/src/trx_train.c:886: train2opt();
   5760 12 5C 2F           3701 	lcall	_train2opt
                           3702 ;	../../shared/src/trx_train.c:889: adapt_data_en = 1;
   5763 D2 0D              3703 	setb	_adapt_data_en
                           3704 ;	../../shared/src/trx_train.c:890: adapt_slicer_en = 1;
   5765 D2 0C              3705 	setb	_adapt_slicer_en
                           3706 ;	../../shared/src/trx_train.c:891: dfe_adaptation();
   5767 78 EE              3707 	mov	r0,#_dfe_adaptation
   5769 79 9C              3708 	mov	r1,#(_dfe_adaptation >> 8)
   576B 7A 01              3709 	mov	r2,#(_dfe_adaptation >> 16)
   576D 12 00 B3           3710 	lcall	__sdcc_banked_call
                           3711 ;	../../shared/src/trx_train.c:892: train2opt();			
   5770 12 5C 2F           3712 	lcall	_train2opt
                           3713 ;	../../shared/src/trx_train.c:897: reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
   5773 90 02 64           3714 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   5776 E0                 3715 	movx	a,@dptr
   5777 54 E7              3716 	anl	a,#0xe7
   5779 44 08              3717 	orl	a,#0x08
   577B F0                 3718 	movx	@dptr,a
                           3719 ;	../../shared/src/trx_train.c:898: reg_FFE_PULSE_DIV_LANE_2_0 = 3; //5;
   577C 90 02 0C           3720 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   577F E0                 3721 	movx	a,@dptr
   5780 54 8F              3722 	anl	a,#0x8f
   5782 44 30              3723 	orl	a,#0x30
   5784 F0                 3724 	movx	@dptr,a
                           3725 ;	../../shared/src/trx_train.c:902: cds_tb = cds_table[CDS_DFE_OFST];	
   5785 90 00 E2           3726 	mov	dptr,#(_cds_table + 0x0004)
   5788 E4                 3727 	clr	a
   5789 93                 3728 	movc	a,@a+dptr
   578A FA                 3729 	mov	r2,a
   578B A3                 3730 	inc	dptr
   578C E4                 3731 	clr	a
   578D 93                 3732 	movc	a,@a+dptr
   578E FB                 3733 	mov	r3,a
   578F 90 61 74           3734 	mov	dptr,#_CDS_READ_MISC1
   5792 EA                 3735 	mov	a,r2
   5793 F0                 3736 	movx	@dptr,a
   5794 A3                 3737 	inc	dptr
   5795 EB                 3738 	mov	a,r3
   5796 F0                 3739 	movx	@dptr,a
                           3740 ;	../../shared/src/trx_train.c:903: dfe_adaptation();
   5797 78 EE              3741 	mov	r0,#_dfe_adaptation
   5799 79 9C              3742 	mov	r1,#(_dfe_adaptation >> 8)
   579B 7A 01              3743 	mov	r2,#(_dfe_adaptation >> 16)
   579D 12 00 B3           3744 	lcall	__sdcc_banked_call
                           3745 ;	../../shared/src/trx_train.c:904: train2opt();				
   57A0 12 5C 2F           3746 	lcall	_train2opt
   57A3                    3747 00115$:
                           3748 ;	../../shared/src/trx_train.c:908: ctrl_trx_train_pass = opt.good_eo; // return training pass
   57A3 90 66 99           3749 	mov	dptr,#(_opt + 0x002a)
   57A6 E0                 3750 	movx	a,@dptr
   57A7 FA                 3751 	mov	r2,a
   57A8 90 67 19           3752 	mov	dptr,#_ctrl_trx_train_pass
   57AB F0                 3753 	movx	@dptr,a
                           3754 ;	../../shared/src/trx_train.c:909: lnx_RD_DFE_F0D_LANE_7_0 = opt.eo;
   57AC 90 66 8E           3755 	mov	dptr,#(_opt + 0x001f)
   57AF E0                 3756 	movx	a,@dptr
   57B0 FB                 3757 	mov	r3,a
   57B1 90 60 A1           3758 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0001)
   57B4 F0                 3759 	movx	@dptr,a
                           3760 ;	../../shared/src/trx_train.c:910: reg_MCU_DEBUGB_LANE_7_0 = ctrl_trx_train_pass;
   57B5 90 22 BF           3761 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0003)
   57B8 EA                 3762 	mov	a,r2
   57B9 F0                 3763 	movx	@dptr,a
                           3764 ;	../../shared/src/trx_train.c:912: if(ctrl_trx_train_pass) {
   57BA EA                 3765 	mov	a,r2
   57BB 60 1B              3766 	jz	00122$
                           3767 ;	../../shared/src/trx_train.c:913: save_train(do_train, 1, 1, 1); //save train result
   57BD A2 06              3768 	mov	c,_do_train
   57BF E4                 3769 	clr	a
   57C0 33                 3770 	rlc	a
   57C1 F5 82              3771 	mov	dpl,a
   57C3 74 01              3772 	mov	a,#0x01
   57C5 C0 E0              3773 	push	acc
   57C7 74 01              3774 	mov	a,#0x01
   57C9 C0 E0              3775 	push	acc
   57CB 74 01              3776 	mov	a,#0x01
   57CD C0 E0              3777 	push	acc
   57CF 12 5D 68           3778 	lcall	_save_train
   57D2 15 81              3779 	dec	sp
   57D4 15 81              3780 	dec	sp
   57D6 15 81              3781 	dec	sp
   57D8                    3782 00122$:
   57D8 22                 3783 	ret
                           3784 ;------------------------------------------------------------
                           3785 ;Allocation info for local variables in function 'gain_train'
                           3786 ;------------------------------------------------------------
                           3787 ;step_number               Allocated to stack - offset 1
                           3788 ;gain_index                Allocated to stack - offset 2
                           3789 ;gain_table_size           Allocated to stack - offset 3
                           3790 ;dfe_res_f0a_low_thres     Allocated to registers r7 
                           3791 ;gain_table_index          Allocated to registers r4 
                           3792 ;------------------------------------------------------------
                           3793 ;	../../shared/src/trx_train.c:934: void gain_train(void)  //todo
                           3794 ;	-----------------------------------------
                           3795 ;	 function gain_train
                           3796 ;	-----------------------------------------
   57D9                    3797 _gain_train:
   57D9 C0 18              3798 	push	_bp
   57DB 85 81 18           3799 	mov	_bp,sp
   57DE 05 81              3800 	inc	sp
   57E0 05 81              3801 	inc	sp
   57E2 05 81              3802 	inc	sp
                           3803 ;	../../shared/src/trx_train.c:937: uint8_t gain_index = 0; //largest gain + smallest dfe_res
   57E4 A8 18              3804 	mov	r0,_bp
   57E6 08                 3805 	inc	r0
   57E7 08                 3806 	inc	r0
   57E8 76 00              3807 	mov	@r0,#0x00
                           3808 ;	../../shared/src/trx_train.c:952: if(tx_status_pcie_mode && cmx_DIS_SHRT_PCIE_GAIN_TRAIN==0) {
   57EA 30 27 22           3809 	jnb	_tx_status_pcie_mode,00102$
   57ED 90 E6 13           3810 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   57F0 E0                 3811 	movx	a,@dptr
   57F1 20 E5 1B           3812 	jb	acc.5,00102$
                           3813 ;	../../shared/src/trx_train.c:954: gain_table_size = (gain_train_with_c? 3: gt0_size);
   57F4 30 24 04           3814 	jnb	_gain_train_with_c,00133$
   57F7 7B 03              3815 	mov	r3,#0x03
   57F9 80 02              3816 	sjmp	00134$
   57FB                    3817 00133$:
   57FB 7B 04              3818 	mov	r3,#0x04
   57FD                    3819 00134$:
   57FD E5 18              3820 	mov	a,_bp
   57FF 24 03              3821 	add	a,#0x03
   5801 F8                 3822 	mov	r0,a
   5802 A6 03              3823 	mov	@r0,ar3
                           3824 ;	../../shared/src/trx_train.c:955: gain_table_index = (gain_train_with_c?4:0);
   5804 30 24 04           3825 	jnb	_gain_train_with_c,00135$
   5807 7C 04              3826 	mov	r4,#0x04
   5809 80 02              3827 	sjmp	00136$
   580B                    3828 00135$:
   580B 7C 00              3829 	mov	r4,#0x00
   580D                    3830 00136$:
   580D 80 1B              3831 	sjmp	00156$
   580F                    3832 00102$:
                           3833 ;	../../shared/src/trx_train.c:960: gain_table_size = (gain_train_with_c? gt1_size: gt0_size);
   580F 30 24 04           3834 	jnb	_gain_train_with_c,00137$
   5812 7D 13              3835 	mov	r5,#0x13
   5814 80 02              3836 	sjmp	00138$
   5816                    3837 00137$:
   5816 7D 04              3838 	mov	r5,#0x04
   5818                    3839 00138$:
   5818 E5 18              3840 	mov	a,_bp
   581A 24 03              3841 	add	a,#0x03
   581C F8                 3842 	mov	r0,a
   581D A6 05              3843 	mov	@r0,ar5
                           3844 ;	../../shared/src/trx_train.c:961: gain_table_index = (gain_train_with_c?1:0);
   581F 30 24 04           3845 	jnb	_gain_train_with_c,00139$
   5822 7D 01              3846 	mov	r5,#0x01
   5824 80 02              3847 	sjmp	00140$
   5826                    3848 00139$:
   5826 7D 00              3849 	mov	r5,#0x00
   5828                    3850 00140$:
   5828 8D 04              3851 	mov	ar4,r5
                           3852 ;	../../shared/src/trx_train.c:969: while (step_number < gain_table_size) //(gain_table_size + 1)
   582A                    3853 00156$:
   582A E4                 3854 	clr	a
   582B BC 00 01           3855 	cjne	r4,#0x00,00167$
   582E 04                 3856 	inc	a
   582F                    3857 00167$:
   582F FD                 3858 	mov	r5,a
   5830 E4                 3859 	clr	a
   5831 BC 01 01           3860 	cjne	r4,#0x01,00169$
   5834 04                 3861 	inc	a
   5835                    3862 00169$:
   5835 FE                 3863 	mov	r6,a
   5836 E4                 3864 	clr	a
   5837 BC 04 01           3865 	cjne	r4,#0x04,00171$
   583A 04                 3866 	inc	a
   583B                    3867 00171$:
   583B FC                 3868 	mov	r4,a
   583C A8 18              3869 	mov	r0,_bp
   583E 08                 3870 	inc	r0
   583F 76 00              3871 	mov	@r0,#0x00
   5841                    3872 00128$:
   5841 A8 18              3873 	mov	r0,_bp
   5843 08                 3874 	inc	r0
   5844 E5 18              3875 	mov	a,_bp
   5846 24 03              3876 	add	a,#0x03
   5848 F9                 3877 	mov	r1,a
   5849 C3                 3878 	clr	c
   584A E6                 3879 	mov	a,@r0
   584B 97                 3880 	subb	a,@r1
   584C 40 03              3881 	jc	00173$
   584E 02 59 9A           3882 	ljmp	00131$
   5851                    3883 00173$:
                           3884 ;	../../shared/src/trx_train.c:971: switch (gain_table_index)
   5851 ED                 3885 	mov	a,r5
   5852 70 08              3886 	jnz	00105$
   5854 EE                 3887 	mov	a,r6
   5855 70 23              3888 	jnz	00106$
   5857 EC                 3889 	mov	a,r4
   5858 70 4B              3890 	jnz	00107$
                           3891 ;	../../shared/src/trx_train.c:973: case 0:
   585A 80 5C              3892 	sjmp	00108$
   585C                    3893 00105$:
                           3894 ;	../../shared/src/trx_train.c:974: ctrl_step_res_dfe = gt0_dfe_res[gain_index];
   585C C0 04              3895 	push	ar4
   585E A8 18              3896 	mov	r0,_bp
   5860 08                 3897 	inc	r0
   5861 08                 3898 	inc	r0
   5862 E6                 3899 	mov	a,@r0
   5863 90 01 1D           3900 	mov	dptr,#_gt0_dfe_res
   5866 93                 3901 	movc	a,@a+dptr
   5867 90 00 50           3902 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   586A C4                 3903 	swap	a
   586B 03                 3904 	rr	a
   586C 54 18              3905 	anl	a,#(0xf8&0x18)
   586E F5 F0              3906 	mov	b,a
   5870 E0                 3907 	movx	a,@dptr
   5871 54 E7              3908 	anl	a,#0xe7
   5873 45 F0              3909 	orl	a,b
   5875 F0                 3910 	movx	@dptr,a
                           3911 ;	../../shared/src/trx_train.c:975: break;
   5876 D0 04              3912 	pop	ar4
                           3913 ;	../../shared/src/trx_train.c:976: case 1: //
   5878 80 57              3914 	sjmp	00109$
   587A                    3915 00106$:
                           3916 ;	../../shared/src/trx_train.c:977: ctrl_step_res_dfe = gt1_dfe_res[gain_index];
   587A C0 04              3917 	push	ar4
   587C A8 18              3918 	mov	r0,_bp
   587E 08                 3919 	inc	r0
   587F 08                 3920 	inc	r0
   5880 E6                 3921 	mov	a,@r0
   5881 90 01 21           3922 	mov	dptr,#_gt1_dfe_res
   5884 93                 3923 	movc	a,@a+dptr
   5885 90 00 50           3924 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5888 C4                 3925 	swap	a
   5889 03                 3926 	rr	a
   588A 54 18              3927 	anl	a,#(0xf8&0x18)
   588C F5 F0              3928 	mov	b,a
   588E E0                 3929 	movx	a,@dptr
   588F 54 E7              3930 	anl	a,#0xe7
   5891 45 F0              3931 	orl	a,b
   5893 F0                 3932 	movx	@dptr,a
                           3933 ;	../../shared/src/trx_train.c:978: train_c = gt1_c[gain_index];
   5894 A8 18              3934 	mov	r0,_bp
   5896 08                 3935 	inc	r0
   5897 08                 3936 	inc	r0
   5898 E6                 3937 	mov	a,@r0
   5899 90 01 34           3938 	mov	dptr,#_gt1_c
   589C 93                 3939 	movc	a,@a+dptr
   589D 90 66 C5           3940 	mov	dptr,#_train_c
   58A0 F0                 3941 	movx	@dptr,a
                           3942 ;	../../shared/src/trx_train.c:979: break;
   58A1 D0 04              3943 	pop	ar4
                           3944 ;	../../shared/src/trx_train.c:991: case 4: //
   58A3 80 2C              3945 	sjmp	00109$
   58A5                    3946 00107$:
                           3947 ;	../../shared/src/trx_train.c:993: train_c = gt1_c_pcie[gain_index];
   58A5 C0 04              3948 	push	ar4
   58A7 A8 18              3949 	mov	r0,_bp
   58A9 08                 3950 	inc	r0
   58AA 08                 3951 	inc	r0
   58AB E6                 3952 	mov	a,@r0
   58AC 90 01 7C           3953 	mov	dptr,#_gt1_c_pcie
   58AF 93                 3954 	movc	a,@a+dptr
   58B0 90 66 C5           3955 	mov	dptr,#_train_c
   58B3 F0                 3956 	movx	@dptr,a
                           3957 ;	../../shared/src/trx_train.c:994: break;
   58B4 D0 04              3958 	pop	ar4
                           3959 ;	../../shared/src/trx_train.c:995: default:
   58B6 80 19              3960 	sjmp	00109$
   58B8                    3961 00108$:
                           3962 ;	../../shared/src/trx_train.c:996: ctrl_step_res_dfe = gt0_dfe_res[gain_index];
   58B8 A8 18              3963 	mov	r0,_bp
   58BA 08                 3964 	inc	r0
   58BB 08                 3965 	inc	r0
   58BC E6                 3966 	mov	a,@r0
   58BD 90 01 1D           3967 	mov	dptr,#_gt0_dfe_res
   58C0 93                 3968 	movc	a,@a+dptr
   58C1 FF                 3969 	mov	r7,a
   58C2 90 00 50           3970 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   58C5 C4                 3971 	swap	a
   58C6 03                 3972 	rr	a
   58C7 54 18              3973 	anl	a,#(0xf8&0x18)
   58C9 F5 F0              3974 	mov	b,a
   58CB E0                 3975 	movx	a,@dptr
   58CC 54 E7              3976 	anl	a,#0xe7
   58CE 45 F0              3977 	orl	a,b
   58D0 F0                 3978 	movx	@dptr,a
                           3979 ;	../../shared/src/trx_train.c:997: }
   58D1                    3980 00109$:
                           3981 ;	../../shared/src/trx_train.c:999: lnx_GAIN_TRAIN_INDEX_RD_LANE_7_0 = train_c;
   58D1 90 66 C5           3982 	mov	dptr,#_train_c
   58D4 E0                 3983 	movx	a,@dptr
   58D5 90 60 86           3984 	mov	dptr,#(_DFE_TEST_4 + 0x0002)
   58D8 F0                 3985 	movx	@dptr,a
                           3986 ;	../../shared/src/trx_train.c:1000: Set_Rx_FFE();
   58D9 C0 04              3987 	push	ar4
   58DB C0 05              3988 	push	ar5
   58DD C0 06              3989 	push	ar6
   58DF 12 5C 7F           3990 	lcall	_Set_Rx_FFE
                           3991 ;	../../shared/src/trx_train.c:1005: dfe_cdr_phase_opt();	
   58E2 12 59 ED           3992 	lcall	_dfe_cdr_phase_opt
   58E5 D0 06              3993 	pop	ar6
   58E7 D0 05              3994 	pop	ar5
   58E9 D0 04              3995 	pop	ar4
                           3996 ;	../../shared/src/trx_train.c:1006: step_number ++;
   58EB A8 18              3997 	mov	r0,_bp
   58ED 08                 3998 	inc	r0
   58EE 06                 3999 	inc	@r0
                           4000 ;	../../shared/src/trx_train.c:1013: if (dfe_res_f0 == 0 || dfe_res_f0 == 1)
   58EF 90 00 50           4001 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   58F2 E0                 4002 	movx	a,@dptr
   58F3 54 18              4003 	anl	a,#0x18
   58F5 60 0C              4004 	jz	00113$
   58F7 90 00 50           4005 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   58FA E0                 4006 	movx	a,@dptr
   58FB C4                 4007 	swap	a
   58FC 23                 4008 	rl	a
   58FD 54 03              4009 	anl	a,#0x03
   58FF FF                 4010 	mov	r7,a
   5900 BF 01 07           4011 	cjne	r7,#0x01,00114$
   5903                    4012 00113$:
                           4013 ;	../../shared/src/trx_train.c:1015: dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_01; //36
   5903 90 66 C1           4014 	mov	dptr,#_dfe_res_f0a_low_thres_01
   5906 E0                 4015 	movx	a,@dptr
   5907 FF                 4016 	mov	r7,a
   5908 80 23              4017 	sjmp	00115$
   590A                    4018 00114$:
                           4019 ;	../../shared/src/trx_train.c:1017: else if (dfe_res_f0 == 2)
   590A C0 04              4020 	push	ar4
   590C 90 00 50           4021 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   590F E0                 4022 	movx	a,@dptr
   5910 C4                 4023 	swap	a
   5911 23                 4024 	rl	a
   5912 54 03              4025 	anl	a,#0x03
   5914 FC                 4026 	mov	r4,a
   5915 BC 02 02           4027 	cjne	r4,#0x02,00180$
   5918 80 04              4028 	sjmp	00181$
   591A                    4029 00180$:
   591A D0 04              4030 	pop	ar4
   591C 80 09              4031 	sjmp	00111$
   591E                    4032 00181$:
                           4033 ;	../../shared/src/trx_train.c:1019: dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_2; //41
   591E 90 66 C2           4034 	mov	dptr,#_dfe_res_f0a_low_thres_2
   5921 E0                 4035 	movx	a,@dptr
   5922 FF                 4036 	mov	r7,a
   5923 D0 04              4037 	pop	ar4
   5925 80 06              4038 	sjmp	00115$
   5927                    4039 00111$:
                           4040 ;	../../shared/src/trx_train.c:1023: dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_3; //44			
   5927 90 66 C3           4041 	mov	dptr,#_dfe_res_f0a_low_thres_3
   592A E0                 4042 	movx	a,@dptr
   592B FB                 4043 	mov	r3,a
   592C FF                 4044 	mov	r7,a
   592D                    4045 00115$:
                           4046 ;	../../shared/src/trx_train.c:1026: if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && (gain_index >=1) )
   592D 90 66 58           4047 	mov	dptr,#(_train + 0x0018)
   5930 E0                 4048 	movx	a,@dptr
   5931 FB                 4049 	mov	r3,a
   5932 B5 07 00           4050 	cjne	a,ar7,00182$
   5935                    4051 00182$:
   5935 50 17              4052 	jnc	00124$
   5937 90 66 67           4053 	mov	dptr,#(_train + 0x0027)
   593A E0                 4054 	movx	a,@dptr
   593B 70 11              4055 	jnz	00124$
   593D A8 18              4056 	mov	r0,_bp
   593F 08                 4057 	inc	r0
   5940 08                 4058 	inc	r0
   5941 B6 01 00           4059 	cjne	@r0,#0x01,00185$
   5944                    4060 00185$:
   5944 40 08              4061 	jc	00124$
                           4062 ;	../../shared/src/trx_train.c:1028: gain_index --;
   5946 A8 18              4063 	mov	r0,_bp
   5948 08                 4064 	inc	r0
   5949 08                 4065 	inc	r0
   594A 16                 4066 	dec	@r0
   594B 02 58 41           4067 	ljmp	00128$
   594E                    4068 00124$:
                           4069 ;	../../shared/src/trx_train.c:1030: else if (((train.f0a_max >= dfe_res_f0a_high_thres) || ((train.f0a_max <= dfe_res_f0a_low_thres) && train.dfe_saturate)) 
   594E C0 04              4070 	push	ar4
   5950 90 66 C4           4071 	mov	dptr,#_dfe_res_f0a_high_thres
   5953 E0                 4072 	movx	a,@dptr
   5954 FC                 4073 	mov	r4,a
   5955 EB                 4074 	mov	a,r3
   5956 B5 04 00           4075 	cjne	a,ar4,00187$
   5959                    4076 00187$:
   5959 D0 04              4077 	pop	ar4
   595B 50 0C              4078 	jnc	00122$
   595D EF                 4079 	mov	a,r7
   595E B5 03 00           4080 	cjne	a,ar3,00189$
   5961                    4081 00189$:
   5961 40 37              4082 	jc	00131$
   5963 90 66 67           4083 	mov	dptr,#(_train + 0x0027)
   5966 E0                 4084 	movx	a,@dptr
   5967 60 31              4085 	jz	00131$
   5969                    4086 00122$:
                           4087 ;	../../shared/src/trx_train.c:1031: && (gain_index < (gain_table_size-1)))
   5969 C0 04              4088 	push	ar4
   596B E5 18              4089 	mov	a,_bp
   596D 24 03              4090 	add	a,#0x03
   596F F8                 4091 	mov	r0,a
   5970 86 03              4092 	mov	ar3,@r0
   5972 7F 00              4093 	mov	r7,#0x00
   5974 1B                 4094 	dec	r3
   5975 BB FF 01           4095 	cjne	r3,#0xff,00192$
   5978 1F                 4096 	dec	r7
   5979                    4097 00192$:
   5979 A8 18              4098 	mov	r0,_bp
   597B 08                 4099 	inc	r0
   597C 08                 4100 	inc	r0
   597D 86 04              4101 	mov	ar4,@r0
   597F 7A 00              4102 	mov	r2,#0x00
   5981 C3                 4103 	clr	c
   5982 EC                 4104 	mov	a,r4
   5983 9B                 4105 	subb	a,r3
   5984 EA                 4106 	mov	a,r2
   5985 64 80              4107 	xrl	a,#0x80
   5987 8F F0              4108 	mov	b,r7
   5989 63 F0 80           4109 	xrl	b,#0x80
   598C 95 F0              4110 	subb	a,b
   598E D0 04              4111 	pop	ar4
   5990 50 08              4112 	jnc	00131$
                           4113 ;	../../shared/src/trx_train.c:1033: gain_index ++;
   5992 A8 18              4114 	mov	r0,_bp
   5994 08                 4115 	inc	r0
   5995 08                 4116 	inc	r0
   5996 06                 4117 	inc	@r0
                           4118 ;	../../shared/src/trx_train.c:1037: break;
   5997 02 58 41           4119 	ljmp	00128$
   599A                    4120 00131$:
   599A 85 18 81           4121 	mov	sp,_bp
   599D D0 18              4122 	pop	_bp
   599F 22                 4123 	ret
                           4124 ;------------------------------------------------------------
                           4125 ;Allocation info for local variables in function 'update_opt_trx_ffe'
                           4126 ;------------------------------------------------------------
                           4127 ;------------------------------------------------------------
                           4128 ;	../../shared/src/trx_train.c:1044: void update_opt_trx_ffe(){
                           4129 ;	-----------------------------------------
                           4130 ;	 function update_opt_trx_ffe
                           4131 ;	-----------------------------------------
   59A0                    4132 _update_opt_trx_ffe:
                           4133 ;	../../shared/src/trx_train.c:1049: if ( (   opt_r == train_r && opt_c == train_c
   59A0 90 66 C8           4134 	mov	dptr,#_opt_r
   59A3 E0                 4135 	movx	a,@dptr
   59A4 FA                 4136 	mov	r2,a
   59A5 90 66 C6           4137 	mov	dptr,#_train_r
   59A8 E0                 4138 	movx	a,@dptr
   59A9 FB                 4139 	mov	r3,a
   59AA EA                 4140 	mov	a,r2
   59AB B5 03 3C           4141 	cjne	a,ar3,00102$
                           4142 ;	../../shared/src/trx_train.c:1050: && opt.phase_offset_data == train.phase_offset_data
   59AE 90 66 C7           4143 	mov	dptr,#_opt_c
   59B1 E0                 4144 	movx	a,@dptr
   59B2 FA                 4145 	mov	r2,a
   59B3 90 66 C5           4146 	mov	dptr,#_train_c
   59B6 E0                 4147 	movx	a,@dptr
   59B7 FB                 4148 	mov	r3,a
   59B8 EA                 4149 	mov	a,r2
   59B9 B5 03 2E           4150 	cjne	a,ar3,00102$
   59BC 90 66 90           4151 	mov	dptr,#(_opt + 0x0021)
   59BF E0                 4152 	movx	a,@dptr
   59C0 FA                 4153 	mov	r2,a
   59C1 90 66 61           4154 	mov	dptr,#(_train + 0x0021)
   59C4 E0                 4155 	movx	a,@dptr
   59C5 FB                 4156 	mov	r3,a
   59C6 EA                 4157 	mov	a,r2
   59C7 B5 03 20           4158 	cjne	a,ar3,00102$
                           4159 ;	../../shared/src/trx_train.c:1051: && opt_g0_index == train_g0_index  && opt_gn1_index == train_gn1_index  && opt_g1_index == train_g1_index
   59CA 90 67 B3           4160 	mov	dptr,#_opt_g0_index
   59CD E0                 4161 	movx	a,@dptr
   59CE FA                 4162 	mov	r2,a
   59CF 90 60 32           4163 	mov	dptr,#_train_g0_index
   59D2 E0                 4164 	movx	a,@dptr
   59D3 FB                 4165 	mov	r3,a
   59D4 EA                 4166 	mov	a,r2
   59D5 B5 03 12           4167 	cjne	a,ar3,00102$
   59D8 90 67 B4           4168 	mov	dptr,#_opt_gn1_index
   59DB E0                 4169 	movx	a,@dptr
   59DC FA                 4170 	mov	r2,a
   59DD 90 60 30           4171 	mov	dptr,#_train_gn1_index
   59E0 E0                 4172 	movx	a,@dptr
   59E1 FB                 4173 	mov	r3,a
   59E2 EA                 4174 	mov	a,r2
   59E3 B5 03 04           4175 	cjne	a,ar3,00102$
                           4176 ;	../../shared/src/trx_train.c:1052: && opt.tx_preset_index == train.tx_preset_index
   59E6 90 60 31           4177 	mov	dptr,#_train_g1_index
   59E9 E0                 4178 	movx	a,@dptr
                           4179 ;	../../shared/src/trx_train.c:1058: ((opt.f0t >= train.f0t) && ctrl_tx_train_on)))) )
   59EA                    4180 00102$:
                           4181 ;	../../shared/src/trx_train.c:1068: train2opt();
   59EA 02 5C 2F           4182 	ljmp	_train2opt
                           4183 ;------------------------------------------------------------
                           4184 ;Allocation info for local variables in function 'dfe_cdr_phase_opt'
                           4185 ;------------------------------------------------------------
                           4186 ;------------------------------------------------------------
                           4187 ;	../../shared/src/trx_train.c:1073: void dfe_cdr_phase_opt(void){
                           4188 ;	-----------------------------------------
                           4189 ;	 function dfe_cdr_phase_opt
                           4190 ;	-----------------------------------------
   59ED                    4191 _dfe_cdr_phase_opt:
                           4192 ;	../../shared/src/trx_train.c:1079: if( TRAIN_SIM_EN ) return;
   59ED 90 E6 07           4193 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   59F0 E0                 4194 	movx	a,@dptr
   59F1 30 E2 01           4195 	jnb	acc.2,00102$
   59F4 22                 4196 	ret
   59F5                    4197 00102$:
                           4198 ;	../../shared/src/trx_train.c:1082: train.phase_offset_data = opt.phase_offset_data;
   59F5 90 66 90           4199 	mov	dptr,#(_opt + 0x0021)
   59F8 E0                 4200 	movx	a,@dptr
   59F9 90 66 61           4201 	mov	dptr,#(_train + 0x0021)
   59FC F0                 4202 	movx	@dptr,a
                           4203 ;	../../shared/src/trx_train.c:1086: phase_control_func();
   59FD 12 2C 17           4204 	lcall	_phase_control_func
                           4205 ;	../../shared/src/trx_train.c:1089: if(tx_status_pcie_mode)
   5A00 30 27 2F           4206 	jnb	_tx_status_pcie_mode,00107$
                           4207 ;	../../shared/src/trx_train.c:1091: if( pcie_f0b_en )
   5A03 90 67 B2           4208 	mov	dptr,#_pcie_f0b_en
   5A06 E0                 4209 	movx	a,@dptr
   5A07 FA                 4210 	mov	r2,a
   5A08 60 14              4211 	jz	00104$
                           4212 ;	../../shared/src/trx_train.c:1092: cds_tb = cds_table[CDS_DEFAULT_PCIE_F0B];
   5A0A 90 00 F6           4213 	mov	dptr,#(_cds_table + 0x0018)
   5A0D E4                 4214 	clr	a
   5A0E 93                 4215 	movc	a,@a+dptr
   5A0F FA                 4216 	mov	r2,a
   5A10 A3                 4217 	inc	dptr
   5A11 E4                 4218 	clr	a
   5A12 93                 4219 	movc	a,@a+dptr
   5A13 FB                 4220 	mov	r3,a
   5A14 90 61 74           4221 	mov	dptr,#_CDS_READ_MISC1
   5A17 EA                 4222 	mov	a,r2
   5A18 F0                 4223 	movx	@dptr,a
   5A19 A3                 4224 	inc	dptr
   5A1A EB                 4225 	mov	a,r3
   5A1B F0                 4226 	movx	@dptr,a
   5A1C 80 26              4227 	sjmp	00108$
   5A1E                    4228 00104$:
                           4229 ;	../../shared/src/trx_train.c:1094: cds_tb = cds_table[CDS_DEFAULT_PCIE];
   5A1E 90 00 E0           4230 	mov	dptr,#(_cds_table + 0x0002)
   5A21 E4                 4231 	clr	a
   5A22 93                 4232 	movc	a,@a+dptr
   5A23 FA                 4233 	mov	r2,a
   5A24 A3                 4234 	inc	dptr
   5A25 E4                 4235 	clr	a
   5A26 93                 4236 	movc	a,@a+dptr
   5A27 FB                 4237 	mov	r3,a
   5A28 90 61 74           4238 	mov	dptr,#_CDS_READ_MISC1
   5A2B EA                 4239 	mov	a,r2
   5A2C F0                 4240 	movx	@dptr,a
   5A2D A3                 4241 	inc	dptr
   5A2E EB                 4242 	mov	a,r3
   5A2F F0                 4243 	movx	@dptr,a
   5A30 80 12              4244 	sjmp	00108$
   5A32                    4245 00107$:
                           4246 ;	../../shared/src/trx_train.c:1097: cds_tb = cds_table[CDS_DEFAULT];
   5A32 90 00 DE           4247 	mov	dptr,#_cds_table
   5A35 E4                 4248 	clr	a
   5A36 93                 4249 	movc	a,@a+dptr
   5A37 FA                 4250 	mov	r2,a
   5A38 A3                 4251 	inc	dptr
   5A39 E4                 4252 	clr	a
   5A3A 93                 4253 	movc	a,@a+dptr
   5A3B FB                 4254 	mov	r3,a
   5A3C 90 61 74           4255 	mov	dptr,#_CDS_READ_MISC1
   5A3F EA                 4256 	mov	a,r2
   5A40 F0                 4257 	movx	@dptr,a
   5A41 A3                 4258 	inc	dptr
   5A42 EB                 4259 	mov	a,r3
   5A43 F0                 4260 	movx	@dptr,a
   5A44                    4261 00108$:
                           4262 ;	../../shared/src/trx_train.c:1099: dfe_adaptation();
   5A44 78 EE              4263 	mov	r0,#_dfe_adaptation
   5A46 79 9C              4264 	mov	r1,#(_dfe_adaptation >> 8)
   5A48 7A 01              4265 	mov	r2,#(_dfe_adaptation >> 16)
                           4266 ;	../../shared/src/trx_train.c:1102: if( tx_status_pcie_mode ) 
   5A4A 02 00 B3           4267 	ljmp	__sdcc_banked_call
                           4268 ;------------------------------------------------------------
                           4269 ;Allocation info for local variables in function 'train_status_reset'
                           4270 ;------------------------------------------------------------
                           4271 ;i                         Allocated to stack - offset 1
                           4272 ;------------------------------------------------------------
                           4273 ;	../../shared/src/trx_train.c:1115: void train_status_reset(void){
                           4274 ;	-----------------------------------------
                           4275 ;	 function train_status_reset
                           4276 ;	-----------------------------------------
   5A4D                    4277 _train_status_reset:
                           4278 ;	../../shared/src/trx_train.c:1119: ctrl_rx_only_mode = !do_train; 
   5A4D 90 67 18           4279 	mov	dptr,#_ctrl_rx_only_mode
   5A50 A2 06              4280 	mov	c,_do_train
   5A52 B3                 4281 	cpl	c
   5A53 E4                 4282 	clr	a
   5A54 33                 4283 	rlc	a
   5A55 F0                 4284 	movx	@dptr,a
                           4285 ;	../../shared/src/trx_train.c:1120: ctrl_cdr_phase_on = 0;
   5A56 C2 1E              4286 	clr	_ctrl_cdr_phase_on
                           4287 ;	../../shared/src/trx_train.c:1121: ctrl_trx_train_done = 0;
   5A58 C2 23              4288 	clr	_ctrl_trx_train_done
                           4289 ;	../../shared/src/trx_train.c:1122: ctrl_trx_train_pass = 0;
   5A5A 90 67 19           4290 	mov	dptr,#_ctrl_trx_train_pass
   5A5D E4                 4291 	clr	a
   5A5E F0                 4292 	movx	@dptr,a
                           4293 ;	../../shared/src/trx_train.c:1123: ctrl_rx_train_done = 0;
   5A5F C2 21              4294 	clr	_ctrl_rx_train_done
                           4295 ;	../../shared/src/trx_train.c:1124: ctrl_tx_train_done = 0;
   5A61 C2 22              4296 	clr	_ctrl_tx_train_done
                           4297 ;	../../shared/src/trx_train.c:1125: ctrl_rx_train_on = 0;
   5A63 C2 1F              4298 	clr	_ctrl_rx_train_on
                           4299 ;	../../shared/src/trx_train.c:1126: ctrl_tx_train_on = 0;
   5A65 C2 20              4300 	clr	_ctrl_tx_train_on
                           4301 ;	../../shared/src/trx_train.c:1127: ctrl_trx_ffe_updated = 0;
   5A67 C2 25              4302 	clr	_ctrl_trx_ffe_updated
                           4303 ;	../../shared/src/trx_train.c:1130: ctrl_num_big_loop = 0;
   5A69 90 66 C0           4304 	mov	dptr,#_ctrl_num_big_loop
   5A6C E4                 4305 	clr	a
   5A6D F0                 4306 	movx	@dptr,a
                           4307 ;	../../shared/src/trx_train.c:1235: memset0((uint8_t *)&opt, sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t));
   5A6E 74 42              4308 	mov	a,#0x42
   5A70 C0 E0              4309 	push	acc
   5A72 E4                 4310 	clr	a
   5A73 C0 E0              4311 	push	acc
   5A75 90 66 6F           4312 	mov	dptr,#_opt
   5A78 75 F0 00           4313 	mov	b,#0x00
   5A7B 78 0C              4314 	mov	r0,#_memset0
   5A7D 79 C2              4315 	mov	r1,#(_memset0 >> 8)
   5A7F 7A 02              4316 	mov	r2,#(_memset0 >> 16)
   5A81 12 00 B3           4317 	lcall	__sdcc_banked_call
   5A84 15 81              4318 	dec	sp
   5A86 15 81              4319 	dec	sp
                           4320 ;	../../shared/src/trx_train.c:1250: pcie_f0b_en = 0;
   5A88 90 67 B2           4321 	mov	dptr,#_pcie_f0b_en
   5A8B E4                 4322 	clr	a
   5A8C F0                 4323 	movx	@dptr,a
                           4324 ;	../../shared/src/trx_train.c:1280: if(lnx_spdoft_tx_preset_index_lane>5 || lnx_spdoft_tx_preset_index_lane==0) {
   5A8D 90 66 66           4325 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5A90 E0                 4326 	movx	a,@dptr
   5A91 FA                 4327 	mov	r2,a
   5A92 74 05              4328 	mov	a,#0x05
   5A94 B5 02 00           4329 	cjne	a,ar2,00118$
   5A97                    4330 00118$:
   5A97 40 07              4331 	jc	00107$
   5A99 90 66 66           4332 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5A9C E0                 4333 	movx	a,@dptr
   5A9D FA                 4334 	mov	r2,a
   5A9E 70 2A              4335 	jnz	00108$
   5AA0                    4336 00107$:
                           4337 ;	../../shared/src/trx_train.c:1281: if(phy_mode == 4) //ethernet
   5AA0 90 A3 16           4338 	mov	dptr,#(_SYSTEM + 0x0002)
   5AA3 E0                 4339 	movx	a,@dptr
   5AA4 54 07              4340 	anl	a,#0x07
   5AA6 FA                 4341 	mov	r2,a
   5AA7 BA 04 08           4342 	cjne	r2,#0x04,00105$
                           4343 ;	../../shared/src/trx_train.c:1282: lnx_spdoft_tx_preset_index_lane = 2; //init //2;
   5AAA 90 66 66           4344 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5AAD 74 02              4345 	mov	a,#0x02
   5AAF F0                 4346 	movx	@dptr,a
   5AB0 80 18              4347 	sjmp	00108$
   5AB2                    4348 00105$:
                           4349 ;	../../shared/src/trx_train.c:1283: else if(phy_mode == 3) //pcie
   5AB2 90 A3 16           4350 	mov	dptr,#(_SYSTEM + 0x0002)
   5AB5 E0                 4351 	movx	a,@dptr
   5AB6 54 07              4352 	anl	a,#0x07
   5AB8 FA                 4353 	mov	r2,a
   5AB9 BA 03 08           4354 	cjne	r2,#0x03,00102$
                           4355 ;	../../shared/src/trx_train.c:1284: lnx_spdoft_tx_preset_index_lane = 5;
   5ABC 90 66 66           4356 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5ABF 74 05              4357 	mov	a,#0x05
   5AC1 F0                 4358 	movx	@dptr,a
   5AC2 80 06              4359 	sjmp	00108$
   5AC4                    4360 00102$:
                           4361 ;	../../shared/src/trx_train.c:1286: lnx_spdoft_tx_preset_index_lane = 3; //no_eq
   5AC4 90 66 66           4362 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5AC7 74 03              4363 	mov	a,#0x03
   5AC9 F0                 4364 	movx	@dptr,a
   5ACA                    4365 00108$:
                           4366 ;	../../shared/src/trx_train.c:1288: opt.tx_preset_index = lnx_spdoft_tx_preset_index_lane;	
   5ACA 90 66 66           4367 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   5ACD E0                 4368 	movx	a,@dptr
   5ACE FA                 4369 	mov	r2,a
   5ACF 90 66 94           4370 	mov	dptr,#(_opt + 0x0025)
   5AD2 F0                 4371 	movx	@dptr,a
                           4372 ;	../../shared/src/trx_train.c:1291: opt_g0_index = 128;
   5AD3 90 67 B3           4373 	mov	dptr,#_opt_g0_index
   5AD6 74 80              4374 	mov	a,#0x80
   5AD8 F0                 4375 	movx	@dptr,a
                           4376 ;	../../shared/src/trx_train.c:1292: opt_g1_index = 128;
   5AD9 90 67 B5           4377 	mov	dptr,#_opt_g1_index
   5ADC 74 80              4378 	mov	a,#0x80
   5ADE F0                 4379 	movx	@dptr,a
                           4380 ;	../../shared/src/trx_train.c:1293: opt_gn1_index = 128;
   5ADF 90 67 B4           4381 	mov	dptr,#_opt_gn1_index
   5AE2 74 80              4382 	mov	a,#0x80
   5AE4 F0                 4383 	movx	@dptr,a
                           4384 ;	../../shared/src/trx_train.c:1294: train_g0_index = 128;
   5AE5 90 60 32           4385 	mov	dptr,#_train_g0_index
   5AE8 74 80              4386 	mov	a,#0x80
   5AEA F0                 4387 	movx	@dptr,a
                           4388 ;	../../shared/src/trx_train.c:1295: train_g1_index = 128;
   5AEB 90 60 31           4389 	mov	dptr,#_train_g1_index
   5AEE 74 80              4390 	mov	a,#0x80
   5AF0 F0                 4391 	movx	@dptr,a
                           4392 ;	../../shared/src/trx_train.c:1296: train_gn1_index = 128;
   5AF1 90 60 30           4393 	mov	dptr,#_train_gn1_index
   5AF4 74 80              4394 	mov	a,#0x80
   5AF6 F0                 4395 	movx	@dptr,a
                           4396 ;	../../shared/src/trx_train.c:1300: if (TRAIN_SIM_EN) {
   5AF7 90 E6 07           4397 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5AFA E0                 4398 	movx	a,@dptr
   5AFB 30 E2 0E           4399 	jnb	acc.2,00111$
                           4400 ;	../../shared/src/trx_train.c:1301: lnx_FAST_DFE_TIMER_EN_LANE = 1;
   5AFE 90 60 4F           4401 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   5B01 E0                 4402 	movx	a,@dptr
   5B02 44 80              4403 	orl	a,#0x80
   5B04 F0                 4404 	movx	@dptr,a
                           4405 ;	../../shared/src/trx_train.c:1302: lnx_DFE_CORE_BYPASS_LANE = 1;
   5B05 90 60 38           4406 	mov	dptr,#_DFE_CONTROL_1
   5B08 E0                 4407 	movx	a,@dptr
   5B09 44 40              4408 	orl	a,#0x40
   5B0B F0                 4409 	movx	@dptr,a
   5B0C                    4410 00111$:
                           4411 ;	../../shared/src/trx_train.c:1312: lnx_TX_TRAIN_FAIL_INT_LANE = 0; 
   5B0C 90 60 59           4412 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   5B0F E0                 4413 	movx	a,@dptr
   5B10 54 7F              4414 	anl	a,#0x7f
   5B12 F0                 4415 	movx	@dptr,a
                           4416 ;	../../shared/src/trx_train.c:1313: lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
   5B13 90 60 59           4417 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   5B16 E0                 4418 	movx	a,@dptr
   5B17 54 BF              4419 	anl	a,#0xbf
   5B19 F0                 4420 	movx	@dptr,a
                           4421 ;	../../shared/src/trx_train.c:1314: lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
   5B1A 90 60 33           4422 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   5B1D E0                 4423 	movx	a,@dptr
   5B1E 54 FB              4424 	anl	a,#0xfb
   5B20 F0                 4425 	movx	@dptr,a
                           4426 ;	../../shared/src/trx_train.c:1315: lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 0;
   5B21 90 60 5A           4427 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   5B24 E0                 4428 	movx	a,@dptr
   5B25 54 F7              4429 	anl	a,#0xf7
   5B27 F0                 4430 	movx	@dptr,a
                           4431 ;	../../shared/src/trx_train.c:1316: lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 0;
   5B28 90 60 5A           4432 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   5B2B E0                 4433 	movx	a,@dptr
   5B2C 54 EF              4434 	anl	a,#0xef
   5B2E F0                 4435 	movx	@dptr,a
                           4436 ;	../../shared/src/trx_train.c:1317: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 0;
   5B2F 90 60 5A           4437 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   5B32 E0                 4438 	movx	a,@dptr
   5B33 54 FD              4439 	anl	a,#0xfd
   5B35 F0                 4440 	movx	@dptr,a
                           4441 ;	../../shared/src/trx_train.c:1321: r2_adj_on = 0;
   5B36 90 66 C9           4442 	mov	dptr,#_r2_adj_on
                           4443 ;	../../shared/src/trx_train.c:1322: opt_r = 0;
                           4444 ;	../../shared/src/trx_train.c:1323: opt_c = 0;
   5B39 E4                 4445 	clr	a
   5B3A F0                 4446 	movx	@dptr,a
   5B3B 90 66 C8           4447 	mov	dptr,#_opt_r
   5B3E F0                 4448 	movx	@dptr,a
   5B3F 90 66 C7           4449 	mov	dptr,#_opt_c
   5B42 F0                 4450 	movx	@dptr,a
                           4451 ;	../../shared/src/trx_train.c:1325: opt2train();
   5B43 12 5B DD           4452 	lcall	_opt2train
                           4453 ;	../../shared/src/trx_train.c:1327: skip_dfe_adapt_cdr_midpoint = 0;
   5B46 90 67 91           4454 	mov	dptr,#_skip_dfe_adapt_cdr_midpoint
                           4455 ;	../../shared/src/trx_train.c:1328: cds_dfe_ofst = 0;
                           4456 ;	../../shared/src/trx_train.c:1330: reg_MCU_DEBUGE_LANE_7_0 = 0;
                           4457 ;	../../shared/src/trx_train.c:1331: reg_MCU_DEBUGB_LANE_7_0 = 0;
   5B49 E4                 4458 	clr	a
   5B4A F0                 4459 	movx	@dptr,a
   5B4B 90 67 92           4460 	mov	dptr,#_cds_dfe_ofst
   5B4E F0                 4461 	movx	@dptr,a
   5B4F 90 22 C2           4462 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0002)
   5B52 F0                 4463 	movx	@dptr,a
   5B53 90 22 BF           4464 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0003)
   5B56 F0                 4465 	movx	@dptr,a
                           4466 ;	../../shared/src/trx_train.c:1332: reg_MCU_DEBUG0_LANE_7_0 = 0x50;
   5B57 90 22 B4           4467 	mov	dptr,#_MCU_DEBUG0_LANE
   5B5A 74 50              4468 	mov	a,#0x50
   5B5C F0                 4469 	movx	@dptr,a
                           4470 ;	../../shared/src/trx_train.c:1333: reg_MCU_DEBUG1_LANE_7_0 = TRAIN_SIM_EN;
   5B5D 90 E6 07           4471 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5B60 E0                 4472 	movx	a,@dptr
   5B61 03                 4473 	rr	a
   5B62 03                 4474 	rr	a
   5B63 54 01              4475 	anl	a,#0x01
   5B65 90 22 B5           4476 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   5B68 F0                 4477 	movx	@dptr,a
                           4478 ;	../../shared/src/trx_train.c:1334: reg_MCU_DEBUG3_LANE_7_0 = cmx_SKIP_CDR_DFE_SCHEME;
   5B69 90 E6 07           4479 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   5B6C E0                 4480 	movx	a,@dptr
   5B6D 03                 4481 	rr	a
   5B6E 54 01              4482 	anl	a,#0x01
   5B70 90 22 B7           4483 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   5B73 F0                 4484 	movx	@dptr,a
                           4485 ;	../../shared/src/trx_train.c:1335: reg_MCU_DEBUG5_LANE_7_0 = lnx_DFE_CORE_BYPASS_LANE;	
   5B74 90 60 38           4486 	mov	dptr,#_DFE_CONTROL_1
   5B77 E0                 4487 	movx	a,@dptr
   5B78 23                 4488 	rl	a
   5B79 23                 4489 	rl	a
   5B7A 54 01              4490 	anl	a,#0x01
   5B7C 90 22 B9           4491 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   5B7F F0                 4492 	movx	@dptr,a
                           4493 ;	../../shared/src/trx_train.c:1336: reg_MCU_DEBUG6_LANE_7_0 = lnx_FAST_DFE_TIMER_EN_LANE;	
   5B80 90 60 4F           4494 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   5B83 E0                 4495 	movx	a,@dptr
   5B84 23                 4496 	rl	a
   5B85 54 01              4497 	anl	a,#0x01
   5B87 90 22 BA           4498 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   5B8A F0                 4499 	movx	@dptr,a
                           4500 ;	../../shared/src/trx_train.c:1341: lnx_VH_EO_MODE_LANE = 0;
                           4501 ;	../../shared/src/trx_train.c:1343: lnx_DFE_SAVE_EN_LANE = 1;
                           4502 ;	../../shared/src/trx_train.c:1344: lnx_RESET_PH_EN_DTL_LANE = 0;
   5B8B 90 60 A0           4503 	mov	dptr,#_CDS_CTRL_REG0
   5B8E E0                 4504 	movx	a,@dptr
   5B8F 54 F7              4505 	anl	a,#0xf7
   5B91 F0                 4506 	movx	@dptr,a
   5B92 E0                 4507 	movx	a,@dptr
   5B93 44 02              4508 	orl	a,#0x02
   5B95 F0                 4509 	movx	@dptr,a
   5B96 E0                 4510 	movx	a,@dptr
   5B97 54 FE              4511 	anl	a,#0xfe
   5B99 F0                 4512 	movx	@dptr,a
                           4513 ;	../../shared/src/trx_train.c:1345: reg_DFE_INIT_SEL_LANE = 1; //load fext
   5B9A 90 24 03           4514 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   5B9D E0                 4515 	movx	a,@dptr
   5B9E 44 40              4516 	orl	a,#0x40
   5BA0 F0                 4517 	movx	@dptr,a
                           4518 ;	../../shared/src/trx_train.c:1347: tx_train_p2p_hold = lnx_TX_TRAIN_P2P_HOLD_LANE;
   5BA1 90 60 44           4519 	mov	dptr,#_DFE_CONTROL_3
   5BA4 E0                 4520 	movx	a,@dptr
   5BA5 C4                 4521 	swap	a
   5BA6 23                 4522 	rl	a
   5BA7 54 01              4523 	anl	a,#0x01
   5BA9 90 67 A0           4524 	mov	dptr,#_tx_train_p2p_hold
   5BAC F0                 4525 	movx	@dptr,a
                           4526 ;	../../shared/src/trx_train.c:1349: reg_EOM_DPHER_LANE_6_0 = lnx_CAL_EOM_DPHER_LANE_7_0;		
   5BAD 90 60 45           4527 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   5BB0 E0                 4528 	movx	a,@dptr
   5BB1 90 00 28           4529 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   5BB4 25 E0              4530 	add	a,acc
   5BB6 54 FE              4531 	anl	a,#0xfe
   5BB8 F5 F0              4532 	mov	b,a
   5BBA E0                 4533 	movx	a,@dptr
   5BBB 54 01              4534 	anl	a,#0x01
   5BBD 45 F0              4535 	orl	a,b
   5BBF F0                 4536 	movx	@dptr,a
                           4537 ;	../../shared/src/trx_train.c:1350: short_delay(); //delay01(10);
   5BC0 78 05              4538 	mov	r0,#_short_delay
   5BC2 79 C0              4539 	mov	r1,#(_short_delay >> 8)
   5BC4 7A 02              4540 	mov	r2,#(_short_delay >> 16)
   5BC6 12 00 B3           4541 	lcall	__sdcc_banked_call
                           4542 ;	../../shared/src/trx_train.c:1351: reg_EOM_DPHERCK_LANE = 1;
                           4543 ;	../../shared/src/trx_train.c:1352: reg_EOM_DPHERCK_LANE = 0;
   5BC9 90 00 28           4544 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   5BCC E0                 4545 	movx	a,@dptr
   5BCD 44 01              4546 	orl	a,#0x01
   5BCF F0                 4547 	movx	@dptr,a
   5BD0 E0                 4548 	movx	a,@dptr
   5BD1 54 FE              4549 	anl	a,#0xfe
   5BD3 F0                 4550 	movx	@dptr,a
                           4551 ;	../../shared/src/trx_train.c:1354: cal_half_code();	
   5BD4 78 7F              4552 	mov	r0,#_cal_half_code
   5BD6 79 92              4553 	mov	r1,#(_cal_half_code >> 8)
   5BD8 7A 02              4554 	mov	r2,#(_cal_half_code >> 16)
   5BDA 02 00 B3           4555 	ljmp	__sdcc_banked_call
                           4556 ;------------------------------------------------------------
                           4557 ;Allocation info for local variables in function 'opt2train'
                           4558 ;------------------------------------------------------------
                           4559 ;------------------------------------------------------------
                           4560 ;	../../shared/src/trx_train.c:1358: void opt2train(void) {
                           4561 ;	-----------------------------------------
                           4562 ;	 function opt2train
                           4563 ;	-----------------------------------------
   5BDD                    4564 _opt2train:
                           4565 ;	../../shared/src/trx_train.c:1360: memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));
   5BDD 74 2F              4566 	mov	a,#0x2F
   5BDF C0 E0              4567 	push	acc
   5BE1 E4                 4568 	clr	a
   5BE2 C0 E0              4569 	push	acc
   5BE4 74 6F              4570 	mov	a,#_opt
   5BE6 C0 E0              4571 	push	acc
   5BE8 74 66              4572 	mov	a,#(_opt >> 8)
   5BEA C0 E0              4573 	push	acc
   5BEC E4                 4574 	clr	a
   5BED C0 E0              4575 	push	acc
   5BEF 90 66 40           4576 	mov	dptr,#_train
   5BF2 75 F0 00           4577 	mov	b,#0x00
   5BF5 78 78              4578 	mov	r0,#_memcpy
   5BF7 79 C1              4579 	mov	r1,#(_memcpy >> 8)
   5BF9 7A 02              4580 	mov	r2,#(_memcpy >> 16)
   5BFB 12 00 B3           4581 	lcall	__sdcc_banked_call
   5BFE E5 81              4582 	mov	a,sp
   5C00 24 FB              4583 	add	a,#0xfb
   5C02 F5 81              4584 	mov	sp,a
                           4585 ;	../../shared/src/trx_train.c:1365: train_r		= opt_r ;
   5C04 90 66 C8           4586 	mov	dptr,#_opt_r
   5C07 E0                 4587 	movx	a,@dptr
   5C08 90 66 C6           4588 	mov	dptr,#_train_r
   5C0B F0                 4589 	movx	@dptr,a
                           4590 ;	../../shared/src/trx_train.c:1366: train_c		= opt_c ;
   5C0C 90 66 C7           4591 	mov	dptr,#_opt_c
   5C0F E0                 4592 	movx	a,@dptr
   5C10 90 66 C5           4593 	mov	dptr,#_train_c
   5C13 F0                 4594 	movx	@dptr,a
                           4595 ;	../../shared/src/trx_train.c:1367: train_g0_index	= opt_g0_index;
   5C14 90 67 B3           4596 	mov	dptr,#_opt_g0_index
   5C17 E0                 4597 	movx	a,@dptr
   5C18 90 60 32           4598 	mov	dptr,#_train_g0_index
   5C1B F0                 4599 	movx	@dptr,a
                           4600 ;	../../shared/src/trx_train.c:1368: train_gn1_index	= opt_gn1_index;
   5C1C 90 67 B4           4601 	mov	dptr,#_opt_gn1_index
   5C1F E0                 4602 	movx	a,@dptr
   5C20 90 60 30           4603 	mov	dptr,#_train_gn1_index
   5C23 F0                 4604 	movx	@dptr,a
                           4605 ;	../../shared/src/trx_train.c:1369: train_g1_index	= opt_g1_index;
   5C24 90 67 B5           4606 	mov	dptr,#_opt_g1_index
   5C27 E0                 4607 	movx	a,@dptr
   5C28 90 60 31           4608 	mov	dptr,#_train_g1_index
   5C2B F0                 4609 	movx	@dptr,a
                           4610 ;	../../shared/src/trx_train.c:1371: Set_Rx_FFE();
   5C2C 02 5C 7F           4611 	ljmp	_Set_Rx_FFE
                           4612 ;------------------------------------------------------------
                           4613 ;Allocation info for local variables in function 'train2opt'
                           4614 ;------------------------------------------------------------
                           4615 ;------------------------------------------------------------
                           4616 ;	../../shared/src/trx_train.c:1374: void train2opt() {
                           4617 ;	-----------------------------------------
                           4618 ;	 function train2opt
                           4619 ;	-----------------------------------------
   5C2F                    4620 _train2opt:
                           4621 ;	../../shared/src/trx_train.c:1376: memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));
   5C2F 74 2F              4622 	mov	a,#0x2F
   5C31 C0 E0              4623 	push	acc
   5C33 E4                 4624 	clr	a
   5C34 C0 E0              4625 	push	acc
   5C36 74 40              4626 	mov	a,#_train
   5C38 C0 E0              4627 	push	acc
   5C3A 74 66              4628 	mov	a,#(_train >> 8)
   5C3C C0 E0              4629 	push	acc
   5C3E E4                 4630 	clr	a
   5C3F C0 E0              4631 	push	acc
   5C41 90 66 6F           4632 	mov	dptr,#_opt
   5C44 75 F0 00           4633 	mov	b,#0x00
   5C47 78 78              4634 	mov	r0,#_memcpy
   5C49 79 C1              4635 	mov	r1,#(_memcpy >> 8)
   5C4B 7A 02              4636 	mov	r2,#(_memcpy >> 16)
   5C4D 12 00 B3           4637 	lcall	__sdcc_banked_call
   5C50 E5 81              4638 	mov	a,sp
   5C52 24 FB              4639 	add	a,#0xfb
   5C54 F5 81              4640 	mov	sp,a
                           4641 ;	../../shared/src/trx_train.c:1378: opt_r		= train_r;
   5C56 90 66 C6           4642 	mov	dptr,#_train_r
   5C59 E0                 4643 	movx	a,@dptr
   5C5A 90 66 C8           4644 	mov	dptr,#_opt_r
   5C5D F0                 4645 	movx	@dptr,a
                           4646 ;	../../shared/src/trx_train.c:1379: opt_c		= train_c;
   5C5E 90 66 C5           4647 	mov	dptr,#_train_c
   5C61 E0                 4648 	movx	a,@dptr
   5C62 90 66 C7           4649 	mov	dptr,#_opt_c
   5C65 F0                 4650 	movx	@dptr,a
                           4651 ;	../../shared/src/trx_train.c:1380: opt_g0_index	= train_g0_index;
   5C66 90 60 32           4652 	mov	dptr,#_train_g0_index
   5C69 E0                 4653 	movx	a,@dptr
   5C6A 90 67 B3           4654 	mov	dptr,#_opt_g0_index
   5C6D F0                 4655 	movx	@dptr,a
                           4656 ;	../../shared/src/trx_train.c:1381: opt_gn1_index	= train_gn1_index;
   5C6E 90 60 30           4657 	mov	dptr,#_train_gn1_index
   5C71 E0                 4658 	movx	a,@dptr
   5C72 90 67 B4           4659 	mov	dptr,#_opt_gn1_index
   5C75 F0                 4660 	movx	@dptr,a
                           4661 ;	../../shared/src/trx_train.c:1382: opt_g1_index	= train_g1_index;
   5C76 90 60 31           4662 	mov	dptr,#_train_g1_index
   5C79 E0                 4663 	movx	a,@dptr
   5C7A 90 67 B5           4664 	mov	dptr,#_opt_g1_index
   5C7D F0                 4665 	movx	@dptr,a
   5C7E 22                 4666 	ret
                           4667 ;------------------------------------------------------------
                           4668 ;Allocation info for local variables in function 'Set_Rx_FFE'
                           4669 ;------------------------------------------------------------
                           4670 ;r                         Allocated to registers r2 
                           4671 ;c                         Allocated to registers r3 
                           4672 ;------------------------------------------------------------
                           4673 ;	../../shared/src/trx_train.c:1395: void Set_Rx_FFE(void){
                           4674 ;	-----------------------------------------
                           4675 ;	 function Set_Rx_FFE
                           4676 ;	-----------------------------------------
   5C7F                    4677 _Set_Rx_FFE:
                           4678 ;	../../shared/src/trx_train.c:1398: r = train_r;
   5C7F 90 66 C6           4679 	mov	dptr,#_train_r
   5C82 E0                 4680 	movx	a,@dptr
   5C83 FA                 4681 	mov	r2,a
                           4682 ;	../../shared/src/trx_train.c:1399: c = train_c;
   5C84 90 66 C5           4683 	mov	dptr,#_train_c
   5C87 E0                 4684 	movx	a,@dptr
                           4685 ;	../../shared/src/trx_train.c:1400: train.rx_ffe_index = (c<<4) + r;
   5C88 FB                 4686 	mov	r3,a
   5C89 C4                 4687 	swap	a
   5C8A 54 F0              4688 	anl	a,#0xf0
   5C8C 2A                 4689 	add	a,r2
   5C8D FC                 4690 	mov	r4,a
   5C8E 90 66 64           4691 	mov	dptr,#(_train + 0x0024)
   5C91 F0                 4692 	movx	@dptr,a
                           4693 ;	../../shared/src/trx_train.c:1401: if(tx_status_pcie_mode) {
   5C92 30 27 2C           4694 	jnb	_tx_status_pcie_mode,00106$
                           4695 ;	../../shared/src/trx_train.c:1402: if(r==0 && gen_tx==2) reg_FFE_RES1_SEL_LANE_3_0 = 13;  //hardcode
   5C95 EA                 4696 	mov	a,r2
   5C96 70 13              4697 	jnz	00102$
   5C98 90 66 15           4698 	mov	dptr,#_gen_tx
   5C9B E0                 4699 	movx	a,@dptr
   5C9C FC                 4700 	mov	r4,a
   5C9D BC 02 0B           4701 	cjne	r4,#0x02,00102$
   5CA0 90 02 00           4702 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   5CA3 E0                 4703 	movx	a,@dptr
   5CA4 54 0F              4704 	anl	a,#0x0f
   5CA6 44 D0              4705 	orl	a,#0xd0
   5CA8 F0                 4706 	movx	@dptr,a
   5CA9 80 2A              4707 	sjmp	00107$
   5CAB                    4708 00102$:
                           4709 ;	../../shared/src/trx_train.c:1403: else  reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
   5CAB EA                 4710 	mov	a,r2
   5CAC 90 01 7F           4711 	mov	dptr,#_Res_sel_Table
   5CAF 93                 4712 	movc	a,@a+dptr
   5CB0 FC                 4713 	mov	r4,a
   5CB1 90 02 00           4714 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   5CB4 C4                 4715 	swap	a
   5CB5 54 F0              4716 	anl	a,#(0xf0&0xf0)
   5CB7 F5 F0              4717 	mov	b,a
   5CB9 E0                 4718 	movx	a,@dptr
   5CBA 54 0F              4719 	anl	a,#0x0f
   5CBC 45 F0              4720 	orl	a,b
   5CBE F0                 4721 	movx	@dptr,a
   5CBF 80 14              4722 	sjmp	00107$
   5CC1                    4723 00106$:
                           4724 ;	../../shared/src/trx_train.c:1406: reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
   5CC1 EA                 4725 	mov	a,r2
   5CC2 90 01 7F           4726 	mov	dptr,#_Res_sel_Table
   5CC5 93                 4727 	movc	a,@a+dptr
   5CC6 FC                 4728 	mov	r4,a
   5CC7 90 02 00           4729 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   5CCA C4                 4730 	swap	a
   5CCB 54 F0              4731 	anl	a,#(0xf0&0xf0)
   5CCD F5 F0              4732 	mov	b,a
   5CCF E0                 4733 	movx	a,@dptr
   5CD0 54 0F              4734 	anl	a,#0x0f
   5CD2 45 F0              4735 	orl	a,b
   5CD4 F0                 4736 	movx	@dptr,a
   5CD5                    4737 00107$:
                           4738 ;	../../shared/src/trx_train.c:1408: if(r2_adj_on!=1) {
   5CD5 90 66 C9           4739 	mov	dptr,#_r2_adj_on
   5CD8 E0                 4740 	movx	a,@dptr
   5CD9 FC                 4741 	mov	r4,a
   5CDA BC 01 02           4742 	cjne	r4,#0x01,00124$
   5CDD 80 28              4743 	sjmp	00109$
   5CDF                    4744 00124$:
                           4745 ;	../../shared/src/trx_train.c:1409: reg_FFE_RES2_SEL_E_LANE_3_0 = Res_sel2_e_Table[r];
   5CDF EA                 4746 	mov	a,r2
   5CE0 90 01 8F           4747 	mov	dptr,#_Res_sel2_e_Table
   5CE3 93                 4748 	movc	a,@a+dptr
   5CE4 FC                 4749 	mov	r4,a
   5CE5 90 00 00           4750 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   5CE8 C4                 4751 	swap	a
   5CE9 54 F0              4752 	anl	a,#(0xf0&0xf0)
   5CEB F5 F0              4753 	mov	b,a
   5CED E0                 4754 	movx	a,@dptr
   5CEE 54 0F              4755 	anl	a,#0x0f
   5CF0 45 F0              4756 	orl	a,b
   5CF2 F0                 4757 	movx	@dptr,a
                           4758 ;	../../shared/src/trx_train.c:1410: reg_FFE_RES2_SEL_O_LANE_3_0 = Res_sel2_o_Table[r];
   5CF3 EA                 4759 	mov	a,r2
   5CF4 90 01 9F           4760 	mov	dptr,#_Res_sel2_o_Table
   5CF7 93                 4761 	movc	a,@a+dptr
   5CF8 FA                 4762 	mov	r2,a
   5CF9 90 02 04           4763 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   5CFC C4                 4764 	swap	a
   5CFD 54 F0              4765 	anl	a,#(0xf0&0xf0)
   5CFF F5 F0              4766 	mov	b,a
   5D01 E0                 4767 	movx	a,@dptr
   5D02 54 0F              4768 	anl	a,#0x0f
   5D04 45 F0              4769 	orl	a,b
   5D06 F0                 4770 	movx	@dptr,a
   5D07                    4771 00109$:
                           4772 ;	../../shared/src/trx_train.c:1413: reg_FFE_CAP1_SEL_LANE_3_0   = Cap_sel_Table[c];
   5D07 EB                 4773 	mov	a,r3
   5D08 90 01 AF           4774 	mov	dptr,#_Cap_sel_Table
   5D0B 93                 4775 	movc	a,@a+dptr
   5D0C FA                 4776 	mov	r2,a
   5D0D 90 02 00           4777 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   5D10 54 0F              4778 	anl	a,#0x0f
   5D12 F5 F0              4779 	mov	b,a
   5D14 E0                 4780 	movx	a,@dptr
   5D15 54 F0              4781 	anl	a,#0xf0
   5D17 45 F0              4782 	orl	a,b
   5D19 F0                 4783 	movx	@dptr,a
                           4784 ;	../../shared/src/trx_train.c:1414: if( lnx_CTLE_SET_SEL_LANE ) {
   5D1A 90 60 4E           4785 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   5D1D E0                 4786 	movx	a,@dptr
   5D1E 30 E4 22           4787 	jnb	acc.4,00111$
                           4788 ;	../../shared/src/trx_train.c:1415: reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_Table[c];
   5D21 EB                 4789 	mov	a,r3
   5D22 90 01 DF           4790 	mov	dptr,#_Cap_sel2_Table
   5D25 93                 4791 	movc	a,@a+dptr
   5D26 FA                 4792 	mov	r2,a
   5D27 90 00 00           4793 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   5D2A 54 0F              4794 	anl	a,#0x0f
   5D2C F5 F0              4795 	mov	b,a
   5D2E E0                 4796 	movx	a,@dptr
   5D2F 54 F0              4797 	anl	a,#0xf0
   5D31 45 F0              4798 	orl	a,b
   5D33 F0                 4799 	movx	@dptr,a
                           4800 ;	../../shared/src/trx_train.c:1416: reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_Table[c];	
   5D34 90 02 04           4801 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   5D37 EA                 4802 	mov	a,r2
   5D38 54 0F              4803 	anl	a,#0x0f
   5D3A F5 F0              4804 	mov	b,a
   5D3C E0                 4805 	movx	a,@dptr
   5D3D 54 F0              4806 	anl	a,#0xf0
   5D3F 45 F0              4807 	orl	a,b
   5D41 F0                 4808 	movx	@dptr,a
   5D42 22                 4809 	ret
   5D43                    4810 00111$:
                           4811 ;	../../shared/src/trx_train.c:1419: reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_e_Table[c];
   5D43 EB                 4812 	mov	a,r3
   5D44 90 01 BF           4813 	mov	dptr,#_Cap_sel2_e_Table
   5D47 93                 4814 	movc	a,@a+dptr
   5D48 90 00 00           4815 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   5D4B 54 0F              4816 	anl	a,#0x0f
   5D4D F5 F0              4817 	mov	b,a
   5D4F E0                 4818 	movx	a,@dptr
   5D50 54 F0              4819 	anl	a,#0xf0
   5D52 45 F0              4820 	orl	a,b
   5D54 F0                 4821 	movx	@dptr,a
                           4822 ;	../../shared/src/trx_train.c:1420: reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_o_Table[c];
   5D55 EB                 4823 	mov	a,r3
   5D56 90 01 CF           4824 	mov	dptr,#_Cap_sel2_o_Table
   5D59 93                 4825 	movc	a,@a+dptr
   5D5A 90 02 04           4826 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   5D5D 54 0F              4827 	anl	a,#0x0f
   5D5F F5 F0              4828 	mov	b,a
   5D61 E0                 4829 	movx	a,@dptr
   5D62 54 F0              4830 	anl	a,#0xf0
   5D64 45 F0              4831 	orl	a,b
   5D66 F0                 4832 	movx	@dptr,a
   5D67 22                 4833 	ret
                           4834 ;------------------------------------------------------------
                           4835 ;Allocation info for local variables in function 'save_train'
                           4836 ;------------------------------------------------------------
                           4837 ;save_rxffe_on             Allocated to stack - offset -3
                           4838 ;save_dfe_on               Allocated to stack - offset -4
                           4839 ;save_dfe_phase_on         Allocated to stack - offset -5
                           4840 ;save_txffe_on             Allocated to registers 
                           4841 ;gen                       Allocated to stack - offset 1
                           4842 ;------------------------------------------------------------
                           4843 ;	../../shared/src/trx_train.c:1432: void save_train(bool save_txffe_on, bool save_rxffe_on, bool save_dfe_on, bool save_dfe_phase_on ) {
                           4844 ;	-----------------------------------------
                           4845 ;	 function save_train
                           4846 ;	-----------------------------------------
   5D68                    4847 _save_train:
   5D68 C0 18              4848 	push	_bp
   5D6A 85 81 18           4849 	mov	_bp,sp
   5D6D 05 81              4850 	inc	sp
                           4851 ;	../../shared/src/trx_train.c:1457: if(save_rxffe_on) {
   5D6F E5 18              4852 	mov	a,_bp
   5D71 24 FD              4853 	add	a,#0xfd
   5D73 F8                 4854 	mov	r0,a
   5D74 E6                 4855 	mov	a,@r0
   5D75 70 03              4856 	jnz	00118$
   5D77 02 5D EA           4857 	ljmp	00102$
   5D7A                    4858 00118$:
                           4859 ;	../../shared/src/trx_train.c:1458: TRAIN_CONTROL_9.BT.B1 |= (0x01<<gen); //rxtrain_passed_g*_lane		
   5D7A 90 60 CD           4860 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   5D7D E0                 4861 	movx	a,@dptr
   5D7E FA                 4862 	mov	r2,a
   5D7F A8 18              4863 	mov	r0,_bp
   5D81 08                 4864 	inc	r0
   5D82 86 F0              4865 	mov	b,@r0
   5D84 05 F0              4866 	inc	b
   5D86 74 01              4867 	mov	a,#0x01
   5D88 80 02              4868 	sjmp	00121$
   5D8A                    4869 00119$:
   5D8A 25 E0              4870 	add	a,acc
   5D8C                    4871 00121$:
   5D8C D5 F0 FB           4872 	djnz	b,00119$
   5D8F 42 02              4873 	orl	ar2,a
   5D91 90 60 CD           4874 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   5D94 EA                 4875 	mov	a,r2
   5D95 F0                 4876 	movx	@dptr,a
                           4877 ;	../../shared/src/trx_train.c:1461: rc_save[gen][1] = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //ffe_cap1/res1
   5D96 A8 18              4878 	mov	r0,_bp
   5D98 08                 4879 	inc	r0
   5D99 E6                 4880 	mov	a,@r0
   5D9A 25 E0              4881 	add	a,acc
   5D9C 25 E0              4882 	add	a,acc
   5D9E FA                 4883 	mov	r2,a
   5D9F 24 B4              4884 	add	a,#_rc_save
   5DA1 FB                 4885 	mov	r3,a
   5DA2 E4                 4886 	clr	a
   5DA3 34 60              4887 	addc	a,#(_rc_save >> 8)
   5DA5 FC                 4888 	mov	r4,a
   5DA6 0B                 4889 	inc	r3
   5DA7 BB 00 01           4890 	cjne	r3,#0x00,00122$
   5DAA 0C                 4891 	inc	r4
   5DAB                    4892 00122$:
   5DAB 90 02 00           4893 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   5DAE E0                 4894 	movx	a,@dptr
   5DAF FD                 4895 	mov	r5,a
   5DB0 8B 82              4896 	mov	dpl,r3
   5DB2 8C 83              4897 	mov	dph,r4
   5DB4 ED                 4898 	mov	a,r5
   5DB5 F0                 4899 	movx	@dptr,a
                           4900 ;	../../shared/src/trx_train.c:1462: rc_save[gen][2] = UPHY14_TRX_ANAREG_BOT_0.BT.B0; //ffe_cap2/res2/E
   5DB6 EA                 4901 	mov	a,r2
   5DB7 24 B4              4902 	add	a,#_rc_save
   5DB9 FB                 4903 	mov	r3,a
   5DBA E4                 4904 	clr	a
   5DBB 34 60              4905 	addc	a,#(_rc_save >> 8)
   5DBD FC                 4906 	mov	r4,a
   5DBE 74 02              4907 	mov	a,#0x02
   5DC0 2B                 4908 	add	a,r3
   5DC1 FB                 4909 	mov	r3,a
   5DC2 E4                 4910 	clr	a
   5DC3 3C                 4911 	addc	a,r4
   5DC4 FC                 4912 	mov	r4,a
   5DC5 90 00 00           4913 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   5DC8 E0                 4914 	movx	a,@dptr
   5DC9 FD                 4915 	mov	r5,a
   5DCA 8B 82              4916 	mov	dpl,r3
   5DCC 8C 83              4917 	mov	dph,r4
   5DCE ED                 4918 	mov	a,r5
   5DCF F0                 4919 	movx	@dptr,a
                           4920 ;	../../shared/src/trx_train.c:1463: rc_save[gen][3] = UPHY14_TRX_ANAREG_TOP_129.BT.B0; //ffe_cap2/res2/O
   5DD0 EA                 4921 	mov	a,r2
   5DD1 24 B4              4922 	add	a,#_rc_save
   5DD3 FA                 4923 	mov	r2,a
   5DD4 E4                 4924 	clr	a
   5DD5 34 60              4925 	addc	a,#(_rc_save >> 8)
   5DD7 FB                 4926 	mov	r3,a
   5DD8 74 03              4927 	mov	a,#0x03
   5DDA 2A                 4928 	add	a,r2
   5DDB FA                 4929 	mov	r2,a
   5DDC E4                 4930 	clr	a
   5DDD 3B                 4931 	addc	a,r3
   5DDE FB                 4932 	mov	r3,a
   5DDF 90 02 04           4933 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   5DE2 E0                 4934 	movx	a,@dptr
   5DE3 FC                 4935 	mov	r4,a
   5DE4 8A 82              4936 	mov	dpl,r2
   5DE6 8B 83              4937 	mov	dph,r3
   5DE8 EC                 4938 	mov	a,r4
   5DE9 F0                 4939 	movx	@dptr,a
   5DEA                    4940 00102$:
                           4941 ;	../../shared/src/trx_train.c:1467: if(save_dfe_on) {
   5DEA E5 18              4942 	mov	a,_bp
   5DEC 24 FC              4943 	add	a,#0xfc
   5DEE F8                 4944 	mov	r0,a
   5DEF E6                 4945 	mov	a,@r0
   5DF0 60 63              4946 	jz	00106$
                           4947 ;	../../shared/src/trx_train.c:1469: dfe_res_save_en |= 0x01<<gen;
   5DF2 A8 18              4948 	mov	r0,_bp
   5DF4 08                 4949 	inc	r0
   5DF5 86 F0              4950 	mov	b,@r0
   5DF7 05 F0              4951 	inc	b
   5DF9 74 01              4952 	mov	a,#0x01
   5DFB 80 02              4953 	sjmp	00126$
   5DFD                    4954 00124$:
   5DFD 25 E0              4955 	add	a,acc
   5DFF                    4956 00126$:
   5DFF D5 F0 FB           4957 	djnz	b,00124$
   5E02 FA                 4958 	mov	r2,a
   5E03 90 67 A8           4959 	mov	dptr,#_dfe_res_save_en
   5E06 E0                 4960 	movx	a,@dptr
   5E07 4A                 4961 	orl	a,r2
   5E08 F0                 4962 	movx	@dptr,a
                           4963 ;	../../shared/src/trx_train.c:1470: rc_save[gen][0] = UPHY14_TRX_ANAREG_BOT_20.BT.B0; //dfe_res_f0/f1/f234
   5E09 A8 18              4964 	mov	r0,_bp
   5E0B 08                 4965 	inc	r0
   5E0C E6                 4966 	mov	a,@r0
   5E0D 25 E0              4967 	add	a,acc
   5E0F 25 E0              4968 	add	a,acc
   5E11 FA                 4969 	mov	r2,a
   5E12 24 B4              4970 	add	a,#_rc_save
   5E14 FB                 4971 	mov	r3,a
   5E15 E4                 4972 	clr	a
   5E16 34 60              4973 	addc	a,#(_rc_save >> 8)
   5E18 FC                 4974 	mov	r4,a
   5E19 90 00 50           4975 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5E1C E0                 4976 	movx	a,@dptr
   5E1D FD                 4977 	mov	r5,a
   5E1E 8B 82              4978 	mov	dpl,r3
   5E20 8C 83              4979 	mov	dph,r4
   5E22 ED                 4980 	mov	a,r5
   5E23 F0                 4981 	movx	@dptr,a
                           4982 ;	../../shared/src/trx_train.c:1471: if(lnx_DFE_RES_F5TO15_MAX_SPD_EN_LANE) {
   5E24 90 60 38           4983 	mov	dptr,#_DFE_CONTROL_1
   5E27 E0                 4984 	movx	a,@dptr
   5E28 30 E1 2A           4985 	jnb	acc.1,00106$
                           4986 ;	../../shared/src/trx_train.c:1472: rc_save[gen][0] |= 0xe0;
   5E2B EA                 4987 	mov	a,r2
   5E2C 24 B4              4988 	add	a,#_rc_save
   5E2E FB                 4989 	mov	r3,a
   5E2F E4                 4990 	clr	a
   5E30 34 60              4991 	addc	a,#(_rc_save >> 8)
   5E32 FC                 4992 	mov	r4,a
   5E33 EA                 4993 	mov	a,r2
   5E34 24 B4              4994 	add	a,#_rc_save
   5E36 F5 82              4995 	mov	dpl,a
   5E38 E4                 4996 	clr	a
   5E39 34 60              4997 	addc	a,#(_rc_save >> 8)
   5E3B F5 83              4998 	mov	dph,a
   5E3D E0                 4999 	movx	a,@dptr
   5E3E FA                 5000 	mov	r2,a
   5E3F 43 02 E0           5001 	orl	ar2,#0xE0
   5E42 8B 82              5002 	mov	dpl,r3
   5E44 8C 83              5003 	mov	dph,r4
   5E46 EA                 5004 	mov	a,r2
   5E47 F0                 5005 	movx	@dptr,a
                           5006 ;	../../shared/src/trx_train.c:1473: UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= 0xe0;
   5E48 90 00 54           5007 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5E4B E0                 5008 	movx	a,@dptr
   5E4C FA                 5009 	mov	r2,a
   5E4D 43 02 E0           5010 	orl	ar2,#0xE0
   5E50 90 00 54           5011 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5E53 EA                 5012 	mov	a,r2
   5E54 F0                 5013 	movx	@dptr,a
   5E55                    5014 00106$:
                           5015 ;	../../shared/src/trx_train.c:1477: if(pwrsq_on==1) return;
   5E55 90 66 2B           5016 	mov	dptr,#_pwrsq_on
   5E58 E0                 5017 	movx	a,@dptr
   5E59 FA                 5018 	mov	r2,a
   5E5A BA 01 03           5019 	cjne	r2,#0x01,00108$
   5E5D 02 5F 0F           5020 	ljmp	00111$
   5E60                    5021 00108$:
                           5022 ;	../../shared/src/trx_train.c:1479: if(save_dfe_phase_on) {
   5E60 E5 18              5023 	mov	a,_bp
   5E62 24 FB              5024 	add	a,#0xfb
   5E64 F8                 5025 	mov	r0,a
   5E65 E6                 5026 	mov	a,@r0
   5E66 70 03              5027 	jnz	00130$
   5E68 02 5F 0F           5028 	ljmp	00111$
   5E6B                    5029 00130$:
                           5030 ;	../../shared/src/trx_train.c:1480: dfe_phase_save_en |= 0x01<<gen;
   5E6B A8 18              5031 	mov	r0,_bp
   5E6D 08                 5032 	inc	r0
   5E6E 86 F0              5033 	mov	b,@r0
   5E70 05 F0              5034 	inc	b
   5E72 74 01              5035 	mov	a,#0x01
   5E74 80 02              5036 	sjmp	00133$
   5E76                    5037 00131$:
   5E76 25 E0              5038 	add	a,acc
   5E78                    5039 00133$:
   5E78 D5 F0 FB           5040 	djnz	b,00131$
   5E7B FA                 5041 	mov	r2,a
   5E7C 90 67 AA           5042 	mov	dptr,#_dfe_phase_save_en
   5E7F E0                 5043 	movx	a,@dptr
   5E80 4A                 5044 	orl	a,r2
   5E81 F0                 5045 	movx	@dptr,a
                           5046 ;	../../shared/src/trx_train.c:1483: memcpy((uint8_t *)&(dfe_sm_save[gen]), (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));	
   5E82 A8 18              5047 	mov	r0,_bp
   5E84 08                 5048 	inc	r0
   5E85 E6                 5049 	mov	a,@r0
   5E86 75 F0 40           5050 	mov	b,#0x40
   5E89 A4                 5051 	mul	ab
   5E8A 24 C0              5052 	add	a,#_dfe_sm_save
   5E8C FA                 5053 	mov	r2,a
   5E8D 74 61              5054 	mov	a,#(_dfe_sm_save >> 8)
   5E8F 35 F0              5055 	addc	a,b
   5E91 FB                 5056 	mov	r3,a
   5E92 7C 00              5057 	mov	r4,#0x00
   5E94 74 40              5058 	mov	a,#0x40
   5E96 C0 E0              5059 	push	acc
   5E98 E4                 5060 	clr	a
   5E99 C0 E0              5061 	push	acc
   5E9B 74 80              5062 	mov	a,#_DFE_READ_EVEN_SM_REG0
   5E9D C0 E0              5063 	push	acc
   5E9F 74 24              5064 	mov	a,#(_DFE_READ_EVEN_SM_REG0 >> 8)
   5EA1 C0 E0              5065 	push	acc
   5EA3 E4                 5066 	clr	a
   5EA4 C0 E0              5067 	push	acc
   5EA6 8A 82              5068 	mov	dpl,r2
   5EA8 8B 83              5069 	mov	dph,r3
   5EAA 8C F0              5070 	mov	b,r4
   5EAC 78 78              5071 	mov	r0,#_memcpy
   5EAE 79 C1              5072 	mov	r1,#(_memcpy >> 8)
   5EB0 7A 02              5073 	mov	r2,#(_memcpy >> 16)
   5EB2 12 00 B3           5074 	lcall	__sdcc_banked_call
   5EB5 E5 81              5075 	mov	a,sp
   5EB7 24 FB              5076 	add	a,#0xfb
   5EB9 F5 81              5077 	mov	sp,a
                           5078 ;	../../shared/src/trx_train.c:1486: phase_save[gen][0] = reg_ALIGN90_REF_LANE_5_0 & 0x7f;
   5EBB A8 18              5079 	mov	r0,_bp
   5EBD 08                 5080 	inc	r0
   5EBE E6                 5081 	mov	a,@r0
   5EBF 25 E0              5082 	add	a,acc
   5EC1 25 E0              5083 	add	a,acc
   5EC3 FA                 5084 	mov	r2,a
   5EC4 24 E4              5085 	add	a,#_phase_save
   5EC6 FB                 5086 	mov	r3,a
   5EC7 E4                 5087 	clr	a
   5EC8 34 60              5088 	addc	a,#(_phase_save >> 8)
   5ECA FC                 5089 	mov	r4,a
   5ECB 90 00 38           5090 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   5ECE E0                 5091 	movx	a,@dptr
   5ECF 03                 5092 	rr	a
   5ED0 03                 5093 	rr	a
   5ED1 54 3F              5094 	anl	a,#0x3f
   5ED3 FD                 5095 	mov	r5,a
   5ED4 53 05 7F           5096 	anl	ar5,#0x7F
   5ED7 8B 82              5097 	mov	dpl,r3
   5ED9 8C 83              5098 	mov	dph,r4
   5EDB ED                 5099 	mov	a,r5
   5EDC F0                 5100 	movx	@dptr,a
                           5101 ;	../../shared/src/trx_train.c:1487: phase_save[gen][1] = UPHY14_TRX_ANAREG_BOT_12.BT.B0; //gm
   5EDD EA                 5102 	mov	a,r2
   5EDE 24 E4              5103 	add	a,#_phase_save
   5EE0 FB                 5104 	mov	r3,a
   5EE1 E4                 5105 	clr	a
   5EE2 34 60              5106 	addc	a,#(_phase_save >> 8)
   5EE4 FC                 5107 	mov	r4,a
   5EE5 0B                 5108 	inc	r3
   5EE6 BB 00 01           5109 	cjne	r3,#0x00,00134$
   5EE9 0C                 5110 	inc	r4
   5EEA                    5111 00134$:
   5EEA 90 00 30           5112 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   5EED E0                 5113 	movx	a,@dptr
   5EEE FD                 5114 	mov	r5,a
   5EEF 8B 82              5115 	mov	dpl,r3
   5EF1 8C 83              5116 	mov	dph,r4
   5EF3 ED                 5117 	mov	a,r5
   5EF4 F0                 5118 	movx	@dptr,a
                           5119 ;	../../shared/src/trx_train.c:1488: phase_save[gen][2] = UPHY14_TRX_ANAREG_BOT_13.BT.B0; //dm, dac			
   5EF5 EA                 5120 	mov	a,r2
   5EF6 24 E4              5121 	add	a,#_phase_save
   5EF8 FA                 5122 	mov	r2,a
   5EF9 E4                 5123 	clr	a
   5EFA 34 60              5124 	addc	a,#(_phase_save >> 8)
   5EFC FB                 5125 	mov	r3,a
   5EFD 74 02              5126 	mov	a,#0x02
   5EFF 2A                 5127 	add	a,r2
   5F00 FA                 5128 	mov	r2,a
   5F01 E4                 5129 	clr	a
   5F02 3B                 5130 	addc	a,r3
   5F03 FB                 5131 	mov	r3,a
   5F04 90 00 34           5132 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   5F07 E0                 5133 	movx	a,@dptr
   5F08 FC                 5134 	mov	r4,a
   5F09 8A 82              5135 	mov	dpl,r2
   5F0B 8B 83              5136 	mov	dph,r3
   5F0D EC                 5137 	mov	a,r4
   5F0E F0                 5138 	movx	@dptr,a
   5F0F                    5139 00111$:
   5F0F 85 18 81           5140 	mov	sp,_bp
   5F12 D0 18              5141 	pop	_bp
   5F14 22                 5142 	ret
                           5143 ;------------------------------------------------------------
                           5144 ;Allocation info for local variables in function 'restore_train'
                           5145 ;------------------------------------------------------------
                           5146 ;gen                       Allocated to registers r2 
                           5147 ;change                    Allocated to registers r4 
                           5148 ;------------------------------------------------------------
                           5149 ;	../../shared/src/trx_train.c:1496: void restore_train(void) {
                           5150 ;	-----------------------------------------
                           5151 ;	 function restore_train
                           5152 ;	-----------------------------------------
   5F15                    5153 _restore_train:
                           5154 ;	../../shared/src/trx_train.c:1531: gen = gen_rx;
   5F15 90 66 16           5155 	mov	dptr,#_gen_rx
   5F18 E0                 5156 	movx	a,@dptr
                           5157 ;	../../shared/src/trx_train.c:1535: UPHY14_TRX_ANAREG_TOP_128.BT.B0 = rc_save[gen][1]; //ffe_cap1/res1
   5F19 FA                 5158 	mov	r2,a
   5F1A 25 E0              5159 	add	a,acc
   5F1C 25 E0              5160 	add	a,acc
   5F1E FB                 5161 	mov	r3,a
   5F1F 24 B4              5162 	add	a,#_rc_save
   5F21 FC                 5163 	mov	r4,a
   5F22 E4                 5164 	clr	a
   5F23 34 60              5165 	addc	a,#(_rc_save >> 8)
   5F25 FD                 5166 	mov	r5,a
   5F26 8C 82              5167 	mov	dpl,r4
   5F28 8D 83              5168 	mov	dph,r5
   5F2A A3                 5169 	inc	dptr
   5F2B E0                 5170 	movx	a,@dptr
   5F2C 90 02 00           5171 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   5F2F F0                 5172 	movx	@dptr,a
                           5173 ;	../../shared/src/trx_train.c:1536: UPHY14_TRX_ANAREG_BOT_0.BT.B0   = rc_save[gen][2]; //ffe_cap2/res2/E
   5F30 EB                 5174 	mov	a,r3
   5F31 24 B4              5175 	add	a,#_rc_save
   5F33 FC                 5176 	mov	r4,a
   5F34 E4                 5177 	clr	a
   5F35 34 60              5178 	addc	a,#(_rc_save >> 8)
   5F37 FD                 5179 	mov	r5,a
   5F38 8C 82              5180 	mov	dpl,r4
   5F3A 8D 83              5181 	mov	dph,r5
   5F3C A3                 5182 	inc	dptr
   5F3D A3                 5183 	inc	dptr
   5F3E E0                 5184 	movx	a,@dptr
   5F3F 90 00 00           5185 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   5F42 F0                 5186 	movx	@dptr,a
                           5187 ;	../../shared/src/trx_train.c:1537: UPHY14_TRX_ANAREG_TOP_129.BT.B0 = rc_save[gen][3]; //ffe_cap2/res2/O
   5F43 EB                 5188 	mov	a,r3
   5F44 24 B4              5189 	add	a,#_rc_save
   5F46 FC                 5190 	mov	r4,a
   5F47 E4                 5191 	clr	a
   5F48 34 60              5192 	addc	a,#(_rc_save >> 8)
   5F4A FD                 5193 	mov	r5,a
   5F4B 8C 82              5194 	mov	dpl,r4
   5F4D 8D 83              5195 	mov	dph,r5
   5F4F A3                 5196 	inc	dptr
   5F50 A3                 5197 	inc	dptr
   5F51 A3                 5198 	inc	dptr
   5F52 E0                 5199 	movx	a,@dptr
   5F53 90 02 04           5200 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   5F56 F0                 5201 	movx	@dptr,a
                           5202 ;	../../shared/src/trx_train.c:1550: UPHY14_TRX_ANAREG_BOT_20.BT.B0  = rc_save[gen][0]; //dfe_res_f0/f1/f234
   5F57 EB                 5203 	mov	a,r3
   5F58 24 B4              5204 	add	a,#_rc_save
   5F5A F5 82              5205 	mov	dpl,a
   5F5C E4                 5206 	clr	a
   5F5D 34 60              5207 	addc	a,#(_rc_save >> 8)
   5F5F F5 83              5208 	mov	dph,a
   5F61 E0                 5209 	movx	a,@dptr
   5F62 90 00 50           5210 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   5F65 F0                 5211 	movx	@dptr,a
                           5212 ;	../../shared/src/trx_train.c:1551: UPHY14_TRX_ANAREG_BOT_21.BT.B0 &= 0x1f;
   5F66 90 00 54           5213 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5F69 E0                 5214 	movx	a,@dptr
   5F6A FC                 5215 	mov	r4,a
   5F6B 53 04 1F           5216 	anl	ar4,#0x1F
                           5217 ;	../../shared/src/trx_train.c:1552: UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= (rc_save[gen][0]&0xe0); //FLOATING/F8TO15/F567	
   5F6E 90 00 54           5218 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5F71 EC                 5219 	mov	a,r4
   5F72 F0                 5220 	movx	@dptr,a
   5F73 E0                 5221 	movx	a,@dptr
   5F74 FC                 5222 	mov	r4,a
   5F75 EB                 5223 	mov	a,r3
   5F76 24 B4              5224 	add	a,#_rc_save
   5F78 F5 82              5225 	mov	dpl,a
   5F7A E4                 5226 	clr	a
   5F7B 34 60              5227 	addc	a,#(_rc_save >> 8)
   5F7D F5 83              5228 	mov	dph,a
   5F7F E0                 5229 	movx	a,@dptr
   5F80 FD                 5230 	mov	r5,a
   5F81 74 E0              5231 	mov	a,#0xE0
   5F83 5D                 5232 	anl	a,r5
   5F84 42 04              5233 	orl	ar4,a
   5F86 90 00 54           5234 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   5F89 EC                 5235 	mov	a,r4
   5F8A F0                 5236 	movx	@dptr,a
                           5237 ;	../../shared/src/trx_train.c:1560: if(pwrsq_on==1) goto skip_out;
   5F8B 90 66 2B           5238 	mov	dptr,#_pwrsq_on
   5F8E E0                 5239 	movx	a,@dptr
   5F8F FC                 5240 	mov	r4,a
   5F90 BC 01 01           5241 	cjne	r4,#0x01,00110$
   5F93 22                 5242 	ret
   5F94                    5243 00110$:
                           5244 ;	../../shared/src/trx_train.c:1562: change = (dfe_phase_save_en & (0x01<<gen)) != 0;
   5F94 8A F0              5245 	mov	b,r2
   5F96 05 F0              5246 	inc	b
   5F98 7C 01              5247 	mov	r4,#0x01
   5F9A 7D 00              5248 	mov	r5,#0x00
   5F9C 80 06              5249 	sjmp	00112$
   5F9E                    5250 00111$:
   5F9E EC                 5251 	mov	a,r4
   5F9F 2C                 5252 	add	a,r4
   5FA0 FC                 5253 	mov	r4,a
   5FA1 ED                 5254 	mov	a,r5
   5FA2 33                 5255 	rlc	a
   5FA3 FD                 5256 	mov	r5,a
   5FA4                    5257 00112$:
   5FA4 D5 F0 F7           5258 	djnz	b,00111$
   5FA7 90 67 AA           5259 	mov	dptr,#_dfe_phase_save_en
   5FAA E0                 5260 	movx	a,@dptr
   5FAB FE                 5261 	mov	r6,a
   5FAC 7F 00              5262 	mov	r7,#0x00
   5FAE 52 04              5263 	anl	ar4,a
   5FB0 EF                 5264 	mov	a,r7
   5FB1 52 05              5265 	anl	ar5,a
   5FB3 E4                 5266 	clr	a
   5FB4 BC 00 04           5267 	cjne	r4,#0x00,00113$
   5FB7 BD 00 01           5268 	cjne	r5,#0x00,00113$
   5FBA 04                 5269 	inc	a
   5FBB                    5270 00113$:
   5FBB FC                 5271 	mov	r4,a
   5FBC B4 01 00           5272 	cjne	a,#0x01,00115$
   5FBF                    5273 00115$:
   5FBF E4                 5274 	clr	a
   5FC0 33                 5275 	rlc	a
                           5276 ;	../../shared/src/trx_train.c:1563: if(change)
   5FC1 FC                 5277 	mov	r4,a
   5FC2 70 01              5278 	jnz	00116$
   5FC4 22                 5279 	ret
   5FC5                    5280 00116$:
                           5281 ;	../../shared/src/trx_train.c:1565: reg_ALIGN90_REF_LANE_5_0 = phase_save[gen][0];
   5FC5 EB                 5282 	mov	a,r3
   5FC6 24 E4              5283 	add	a,#_phase_save
   5FC8 F5 82              5284 	mov	dpl,a
   5FCA E4                 5285 	clr	a
   5FCB 34 60              5286 	addc	a,#(_phase_save >> 8)
   5FCD F5 83              5287 	mov	dph,a
   5FCF E0                 5288 	movx	a,@dptr
   5FD0 90 00 38           5289 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   5FD3 25 E0              5290 	add	a,acc
   5FD5 25 E0              5291 	add	a,acc
   5FD7 54 FC              5292 	anl	a,#0xfc
   5FD9 F5 F0              5293 	mov	b,a
   5FDB E0                 5294 	movx	a,@dptr
   5FDC 54 03              5295 	anl	a,#0x03
   5FDE 45 F0              5296 	orl	a,b
   5FE0 F0                 5297 	movx	@dptr,a
                           5298 ;	../../shared/src/trx_train.c:1566: UPHY14_TRX_ANAREG_BOT_12.BT.B0 = phase_save[gen][1]; //gm
   5FE1 EB                 5299 	mov	a,r3
   5FE2 24 E4              5300 	add	a,#_phase_save
   5FE4 FC                 5301 	mov	r4,a
   5FE5 E4                 5302 	clr	a
   5FE6 34 60              5303 	addc	a,#(_phase_save >> 8)
   5FE8 FD                 5304 	mov	r5,a
   5FE9 8C 82              5305 	mov	dpl,r4
   5FEB 8D 83              5306 	mov	dph,r5
   5FED A3                 5307 	inc	dptr
   5FEE E0                 5308 	movx	a,@dptr
   5FEF 90 00 30           5309 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   5FF2 F0                 5310 	movx	@dptr,a
                           5311 ;	../../shared/src/trx_train.c:1567: UPHY14_TRX_ANAREG_BOT_13.BT.B0 = phase_save[gen][2]; //dm, dac
   5FF3 EB                 5312 	mov	a,r3
   5FF4 24 E4              5313 	add	a,#_phase_save
   5FF6 FB                 5314 	mov	r3,a
   5FF7 E4                 5315 	clr	a
   5FF8 34 60              5316 	addc	a,#(_phase_save >> 8)
   5FFA FC                 5317 	mov	r4,a
   5FFB 8B 82              5318 	mov	dpl,r3
   5FFD 8C 83              5319 	mov	dph,r4
   5FFF A3                 5320 	inc	dptr
   6000 A3                 5321 	inc	dptr
   6001 E0                 5322 	movx	a,@dptr
                           5323 ;	../../shared/src/trx_train.c:1568: reg_ALIGN90_SYN_CLK_LANE = 1;
   6002 90 00 34           5324 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   6005 F0                 5325 	movx	@dptr,a
   6006 E0                 5326 	movx	a,@dptr
   6007 44 01              5327 	orl	a,#0x01
   6009 F0                 5328 	movx	@dptr,a
                           5329 ;	../../shared/src/trx_train.c:1569: short_delay();//delay01(2);
   600A C0 02              5330 	push	ar2
   600C 78 05              5331 	mov	r0,#_short_delay
   600E 79 C0              5332 	mov	r1,#(_short_delay >> 8)
   6010 7A 02              5333 	mov	r2,#(_short_delay >> 16)
   6012 12 00 B3           5334 	lcall	__sdcc_banked_call
   6015 D0 02              5335 	pop	ar2
                           5336 ;	../../shared/src/trx_train.c:1570: reg_ALIGN90_SYN_CLK_LANE = 0;
   6017 90 00 34           5337 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   601A E0                 5338 	movx	a,@dptr
   601B 54 FE              5339 	anl	a,#0xfe
   601D F0                 5340 	movx	@dptr,a
                           5341 ;	../../shared/src/trx_train.c:1572: memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&(dfe_sm_save[gen]), sizeof(Status_dfe_sm_t));
   601E EA                 5342 	mov	a,r2
   601F 75 F0 40           5343 	mov	b,#0x40
   6022 A4                 5344 	mul	ab
   6023 24 C0              5345 	add	a,#_dfe_sm_save
   6025 FA                 5346 	mov	r2,a
   6026 74 61              5347 	mov	a,#(_dfe_sm_save >> 8)
   6028 35 F0              5348 	addc	a,b
   602A FB                 5349 	mov	r3,a
   602B 7C 00              5350 	mov	r4,#0x00
   602D 74 40              5351 	mov	a,#0x40
   602F C0 E0              5352 	push	acc
   6031 E4                 5353 	clr	a
   6032 C0 E0              5354 	push	acc
   6034 C0 02              5355 	push	ar2
   6036 C0 03              5356 	push	ar3
   6038 C0 04              5357 	push	ar4
   603A 90 24 40           5358 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   603D 75 F0 00           5359 	mov	b,#0x00
   6040 78 78              5360 	mov	r0,#_memcpy
   6042 79 C1              5361 	mov	r1,#(_memcpy >> 8)
   6044 7A 02              5362 	mov	r2,#(_memcpy >> 16)
   6046 12 00 B3           5363 	lcall	__sdcc_banked_call
   6049 E5 81              5364 	mov	a,sp
   604B 24 FB              5365 	add	a,#0xfb
   604D F5 81              5366 	mov	sp,a
                           5367 ;	../../shared/src/trx_train.c:1579: skip_out:
   604F 22                 5368 	ret
                           5369 ;------------------------------------------------------------
                           5370 ;Allocation info for local variables in function 'sq_auto_train_enable'
                           5371 ;------------------------------------------------------------
                           5372 ;rd_sq                     Allocated to registers r2 
                           5373 ;------------------------------------------------------------
                           5374 ;	../../shared/src/trx_train.c:1589: void sq_auto_train_enable(void) {
                           5375 ;	-----------------------------------------
                           5376 ;	 function sq_auto_train_enable
                           5377 ;	-----------------------------------------
   6050                    5378 _sq_auto_train_enable:
                           5379 ;	../../shared/src/trx_train.c:1592: rd_sq = read_sq();
   6050 90 21 71           5380 	mov	dptr,#(_SQ_REG0 + 0x0001)
   6053 E0                 5381 	movx	a,@dptr
   6054 23                 5382 	rl	a
   6055 23                 5383 	rl	a
   6056 54 01              5384 	anl	a,#0x01
   6058 FA                 5385 	mov	r2,a
                           5386 ;	../../shared/src/trx_train.c:1594: if(pre_sq_rd != rd_sq) { 	
   6059 90 67 1C           5387 	mov	dptr,#_pre_sq_rd
   605C E0                 5388 	movx	a,@dptr
   605D FB                 5389 	mov	r3,a
   605E B5 02 01           5390 	cjne	a,ar2,00111$
   6061 22                 5391 	ret
   6062                    5392 00111$:
                           5393 ;	../../shared/src/trx_train.c:1595: pre_sq_rd = rd_sq;
   6062 90 67 1C           5394 	mov	dptr,#_pre_sq_rd
   6065 EA                 5395 	mov	a,r2
   6066 F0                 5396 	movx	@dptr,a
                           5397 ;	../../shared/src/trx_train.c:1596: if(rd_sq==0 && reg_TX_TRAIN_ENABLE_LANE==0) { //assert tx_train			
   6067 EA                 5398 	mov	a,r2
   6068 70 0E              5399 	jnz	00106$
   606A 90 20 10           5400 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   606D E0                 5401 	movx	a,@dptr
   606E 20 E5 07           5402 	jb	acc.5,00106$
                           5403 ;	../../shared/src/trx_train.c:1600: reg_TX_TRAIN_ENABLE_LANE = 1;
   6071 90 20 10           5404 	mov	dptr,#_INPUT_TX_PIN_REG2_LANE
   6074 E0                 5405 	movx	a,@dptr
   6075 44 20              5406 	orl	a,#0x20
   6077 F0                 5407 	movx	@dptr,a
   6078                    5408 00106$:
   6078 22                 5409 	ret
                           5410 	.area CSEG    (CODE)
                           5411 	.area CONST   (CODE)
   011D                    5412 _gt0_dfe_res:
   011D 00                 5413 	.db #0x00	; 0
   011E 01                 5414 	.db #0x01	; 1
   011F 02                 5415 	.db #0x02	; 2
   0120 03                 5416 	.db #0x03	; 3
   0121                    5417 _gt1_dfe_res:
   0121 00                 5418 	.db #0x00	; 0
   0122 01                 5419 	.db #0x01	; 1
   0123 02                 5420 	.db #0x02	; 2
   0124 03                 5421 	.db #0x03	; 3
   0125 03                 5422 	.db #0x03	; 3
   0126 03                 5423 	.db #0x03	; 3
   0127 03                 5424 	.db #0x03	; 3
   0128 03                 5425 	.db #0x03	; 3
   0129 03                 5426 	.db #0x03	; 3
   012A 03                 5427 	.db #0x03	; 3
   012B 03                 5428 	.db #0x03	; 3
   012C 03                 5429 	.db #0x03	; 3
   012D 03                 5430 	.db #0x03	; 3
   012E 03                 5431 	.db #0x03	; 3
   012F 03                 5432 	.db #0x03	; 3
   0130 03                 5433 	.db #0x03	; 3
   0131 03                 5434 	.db #0x03	; 3
   0132 03                 5435 	.db #0x03	; 3
   0133 03                 5436 	.db #0x03	; 3
   0134                    5437 _gt1_c:
   0134 0F                 5438 	.db #0x0F	; 15
   0135 0F                 5439 	.db #0x0F	; 15
   0136 0F                 5440 	.db #0x0F	; 15
   0137 0F                 5441 	.db #0x0F	; 15
   0138 0F                 5442 	.db #0x0F	; 15
   0139 0E                 5443 	.db #0x0E	; 14
   013A 0D                 5444 	.db #0x0D	; 13
   013B 0C                 5445 	.db #0x0C	; 12
   013C 0B                 5446 	.db #0x0B	; 11
   013D 0A                 5447 	.db #0x0A	; 10
   013E 09                 5448 	.db #0x09	; 9
   013F 08                 5449 	.db #0x08	; 8
   0140 07                 5450 	.db #0x07	; 7
   0141 06                 5451 	.db #0x06	; 6
   0142 05                 5452 	.db #0x05	; 5
   0143 04                 5453 	.db #0x04	; 4
   0144 03                 5454 	.db #0x03	; 3
   0145 02                 5455 	.db #0x02	; 2
   0146 01                 5456 	.db #0x01	; 1
   0147 00                 5457 	.db #0x00	; 0
   0148                    5458 _gt2_dfe_res:
   0148 00                 5459 	.db #0x00	; 0
   0149 01                 5460 	.db #0x01	; 1
   014A 02                 5461 	.db #0x02	; 2
   014B 03                 5462 	.db #0x03	; 3
   014C 01                 5463 	.db #0x01	; 1
   014D 02                 5464 	.db #0x02	; 2
   014E 03                 5465 	.db #0x03	; 3
   014F                    5466 _gt3_dfe_res:
   014F 00                 5467 	.db #0x00	; 0
   0150 01                 5468 	.db #0x01	; 1
   0151 02                 5469 	.db #0x02	; 2
   0152 03                 5470 	.db #0x03	; 3
   0153 03                 5471 	.db #0x03	; 3
   0154 03                 5472 	.db #0x03	; 3
   0155 03                 5473 	.db #0x03	; 3
   0156 03                 5474 	.db #0x03	; 3
   0157 03                 5475 	.db #0x03	; 3
   0158 03                 5476 	.db #0x03	; 3
   0159 03                 5477 	.db #0x03	; 3
   015A 03                 5478 	.db #0x03	; 3
   015B 03                 5479 	.db #0x03	; 3
   015C 03                 5480 	.db #0x03	; 3
   015D 03                 5481 	.db #0x03	; 3
   015E 03                 5482 	.db #0x03	; 3
   015F 03                 5483 	.db #0x03	; 3
   0160 03                 5484 	.db #0x03	; 3
   0161 03                 5485 	.db #0x03	; 3
   0162 01                 5486 	.db #0x01	; 1
   0163 02                 5487 	.db #0x02	; 2
   0164 03                 5488 	.db #0x03	; 3
   0165                    5489 _gt3_c:
   0165 0F                 5490 	.db #0x0F	; 15
   0166 0F                 5491 	.db #0x0F	; 15
   0167 0F                 5492 	.db #0x0F	; 15
   0168 0F                 5493 	.db #0x0F	; 15
   0169 0F                 5494 	.db #0x0F	; 15
   016A 0E                 5495 	.db #0x0E	; 14
   016B 0D                 5496 	.db #0x0D	; 13
   016C 0C                 5497 	.db #0x0C	; 12
   016D 0B                 5498 	.db #0x0B	; 11
   016E 0A                 5499 	.db #0x0A	; 10
   016F 09                 5500 	.db #0x09	; 9
   0170 08                 5501 	.db #0x08	; 8
   0171 07                 5502 	.db #0x07	; 7
   0172 06                 5503 	.db #0x06	; 6
   0173 05                 5504 	.db #0x05	; 5
   0174 04                 5505 	.db #0x04	; 4
   0175 03                 5506 	.db #0x03	; 3
   0176 02                 5507 	.db #0x02	; 2
   0177 01                 5508 	.db #0x01	; 1
   0178 00                 5509 	.db #0x00	; 0
   0179 00                 5510 	.db #0x00	; 0
   017A 00                 5511 	.db #0x00	; 0
   017B 00                 5512 	.db #0x00	; 0
   017C                    5513 _gt1_c_pcie:
   017C 0C                 5514 	.db #0x0C	; 12
   017D 06                 5515 	.db #0x06	; 6
   017E 04                 5516 	.db #0x04	; 4
   017F                    5517 _Res_sel_Table:
   017F 0B                 5518 	.db #0x0B	; 11
   0180 0A                 5519 	.db #0x0A	; 10
   0181 09                 5520 	.db #0x09	; 9
   0182 08                 5521 	.db #0x08	; 8
   0183 07                 5522 	.db #0x07	; 7
   0184 06                 5523 	.db #0x06	; 6
   0185 05                 5524 	.db #0x05	; 5
   0186 04                 5525 	.db #0x04	; 4
   0187 03                 5526 	.db #0x03	; 3
   0188 02                 5527 	.db #0x02	; 2
   0189 01                 5528 	.db #0x01	; 1
   018A 00                 5529 	.db #0x00	; 0
   018B 00                 5530 	.db #0x00	; 0
   018C 00                 5531 	.db #0x00	; 0
   018D 00                 5532 	.db #0x00	; 0
   018E 00                 5533 	.db #0x00	; 0
   018F                    5534 _Res_sel2_e_Table:
   018F 00                 5535 	.db #0x00	; 0
   0190 00                 5536 	.db #0x00	; 0
   0191 00                 5537 	.db #0x00	; 0
   0192 00                 5538 	.db #0x00	; 0
   0193 00                 5539 	.db #0x00	; 0
   0194 00                 5540 	.db #0x00	; 0
   0195 00                 5541 	.db #0x00	; 0
   0196 00                 5542 	.db #0x00	; 0
   0197 00                 5543 	.db #0x00	; 0
   0198 00                 5544 	.db #0x00	; 0
   0199 00                 5545 	.db #0x00	; 0
   019A 00                 5546 	.db #0x00	; 0
   019B 00                 5547 	.db #0x00	; 0
   019C 00                 5548 	.db #0x00	; 0
   019D 00                 5549 	.db #0x00	; 0
   019E 00                 5550 	.db #0x00	; 0
   019F                    5551 _Res_sel2_o_Table:
   019F 00                 5552 	.db #0x00	; 0
   01A0 00                 5553 	.db #0x00	; 0
   01A1 00                 5554 	.db #0x00	; 0
   01A2 00                 5555 	.db #0x00	; 0
   01A3 00                 5556 	.db #0x00	; 0
   01A4 00                 5557 	.db #0x00	; 0
   01A5 00                 5558 	.db #0x00	; 0
   01A6 00                 5559 	.db #0x00	; 0
   01A7 00                 5560 	.db #0x00	; 0
   01A8 00                 5561 	.db #0x00	; 0
   01A9 00                 5562 	.db #0x00	; 0
   01AA 00                 5563 	.db #0x00	; 0
   01AB 00                 5564 	.db #0x00	; 0
   01AC 00                 5565 	.db #0x00	; 0
   01AD 00                 5566 	.db #0x00	; 0
   01AE 00                 5567 	.db #0x00	; 0
   01AF                    5568 _Cap_sel_Table:
   01AF 00                 5569 	.db #0x00	; 0
   01B0 00                 5570 	.db #0x00	; 0
   01B1 00                 5571 	.db #0x00	; 0
   01B2 00                 5572 	.db #0x00	; 0
   01B3 01                 5573 	.db #0x01	; 1
   01B4 03                 5574 	.db #0x03	; 3
   01B5 05                 5575 	.db #0x05	; 5
   01B6 08                 5576 	.db #0x08	; 8
   01B7 0F                 5577 	.db #0x0F	; 15
   01B8 0F                 5578 	.db #0x0F	; 15
   01B9 0F                 5579 	.db #0x0F	; 15
   01BA 0F                 5580 	.db #0x0F	; 15
   01BB 0F                 5581 	.db #0x0F	; 15
   01BC 0F                 5582 	.db #0x0F	; 15
   01BD 0F                 5583 	.db #0x0F	; 15
   01BE 0F                 5584 	.db #0x0F	; 15
   01BF                    5585 _Cap_sel2_e_Table:
   01BF 00                 5586 	.db #0x00	; 0
   01C0 00                 5587 	.db #0x00	; 0
   01C1 00                 5588 	.db #0x00	; 0
   01C2 00                 5589 	.db #0x00	; 0
   01C3 00                 5590 	.db #0x00	; 0
   01C4 00                 5591 	.db #0x00	; 0
   01C5 00                 5592 	.db #0x00	; 0
   01C6 00                 5593 	.db #0x00	; 0
   01C7 00                 5594 	.db #0x00	; 0
   01C8 01                 5595 	.db #0x01	; 1
   01C9 02                 5596 	.db #0x02	; 2
   01CA 03                 5597 	.db #0x03	; 3
   01CB 05                 5598 	.db #0x05	; 5
   01CC 08                 5599 	.db #0x08	; 8
   01CD 0B                 5600 	.db #0x0B	; 11
   01CE 0F                 5601 	.db #0x0F	; 15
   01CF                    5602 _Cap_sel2_o_Table:
   01CF 00                 5603 	.db #0x00	; 0
   01D0 00                 5604 	.db #0x00	; 0
   01D1 00                 5605 	.db #0x00	; 0
   01D2 00                 5606 	.db #0x00	; 0
   01D3 00                 5607 	.db #0x00	; 0
   01D4 00                 5608 	.db #0x00	; 0
   01D5 00                 5609 	.db #0x00	; 0
   01D6 00                 5610 	.db #0x00	; 0
   01D7 00                 5611 	.db #0x00	; 0
   01D8 01                 5612 	.db #0x01	; 1
   01D9 02                 5613 	.db #0x02	; 2
   01DA 03                 5614 	.db #0x03	; 3
   01DB 05                 5615 	.db #0x05	; 5
   01DC 08                 5616 	.db #0x08	; 8
   01DD 0B                 5617 	.db #0x0B	; 11
   01DE 0F                 5618 	.db #0x0F	; 15
   01DF                    5619 _Cap_sel2_Table:
   01DF 00                 5620 	.db #0x00	; 0
   01E0 00                 5621 	.db #0x00	; 0
   01E1 00                 5622 	.db #0x00	; 0
   01E2 00                 5623 	.db #0x00	; 0
   01E3 00                 5624 	.db #0x00	; 0
   01E4 00                 5625 	.db #0x00	; 0
   01E5 00                 5626 	.db #0x00	; 0
   01E6 00                 5627 	.db #0x00	; 0
   01E7 00                 5628 	.db #0x00	; 0
   01E8 00                 5629 	.db #0x00	; 0
   01E9 01                 5630 	.db #0x01	; 1
   01EA 02                 5631 	.db #0x02	; 2
   01EB 03                 5632 	.db #0x03	; 3
   01EC 03                 5633 	.db #0x03	; 3
   01ED 03                 5634 	.db #0x03	; 3
   01EE 03                 5635 	.db #0x03	; 3
                           5636 	.area CABS    (ABS,CODE)
