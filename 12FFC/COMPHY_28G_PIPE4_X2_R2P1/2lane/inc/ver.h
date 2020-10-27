/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ver.h
* \purpose version control
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*   01/12/2018 Heejeong Ryu     Added SOC Release change list
*/ 
#ifndef _VER_H
#define _VER_H

/* Version Control Rules
Major version - major feature changes
Minor version – minor feature changes
Patch version – implementation patch changes
Build version – release build
*/
enum version{
    MAJOR_VER = 0,
    MINOR_VER = 13,
    PATCH_VER = 23,
    BUILD_VER = 0
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_13_23_0===
1. (SAS, PCIe) Changed PLL tempc table with an enabled bit, 
    -The bit is bit1 of reg_MCU_DEBUG_CMN_6_7_0, which is at bit17 0xa218. The new PLL tempc table will be taken if the bit is 1. Default value is 0.
2. (PCIe) sellv_smpler = 0 at PCIe gen1
===CHANGE LIST 0_13_22_0===
1. (PCIe) Remove TXDETRX_VTH_LANE control based on FW 0_13_20_0 for customer control
===CHANGE LIST 0_13_21_0===
1. (PCIe) Remove TXDETRX_VTH_LANE control based on FW 0_13_19_0 for customer to program
===CHANGE LIST 0_13_20_0===
1. (PCIe) fix TX coefficient timeout issue by TTIU handling from interrupt to polling
2. (PCIe) expand features of the ffe_res/cap table for Gen3 and Gen4 each
	0xe6d8[31:24]	rx_ffe_r_index_tb_size_pcie_gen3_usr[7:0], control range: 1-15, 0: not use user table
	0xe6d8[23:16]	rx_ffe_r_index_tb_size_pcie_gen4_usr[7:0], control range: 1-15, 0: not use user table
	0xe6d8[15:8]	gaintrain_c_index_tb_size_pcie_gen3_usr[7:0], control range: 1-7, 0: not use user table	
	0xe6d8[7:0]		gaintrain_c_index_tb_size_pcie_gen4_usr[7:0], control range: 1-7, 0: not use user table
	0x6280[7:0], 0x6280[15:7] .. 0x628C[23:16] rx_ffe_r_index_tb_pcie_gen3_tb_usr[0 ~ 14]
	0x628C[31:24] : Not used
	0x6290[7:0], 0x6290[15:7] .. 0x629C[23:16] rx_ffe_r_index_tb_pcie_gen4_tb_usr[0 ~ 14]
	0x629c[31:24] : Not used
	0x62a0[7:0], 0x62a0[15:7] .. 0x62a8[23:16] gaintrain_index_tb_pcie_gen3_usr[0 ~ 6]
	0x62a8[31:24] : Not used	
	0x62a8[31:24], 0x62ac[7:0] .. 0x62b0[15:8] gaintrain_index_tb_pcie_gen4_usr[0 ~ 6]
	0x62a8[7:0] .. 0x62a8[23:16]: Firmware reserved 	
	Note: default values are 0, and use original firmware method.
3. (SAS) workaround for TTIU handle issue
	0xe648[15]	sas_ttiu_mode_sel_c1 (default:0)
	0xe648[14]	sas_ttiu_mode_sel_c3 (default:0)
===CHANGE LIST 0_13_19_0===
1. (PCIe) Add Lane sync logic for CORE RESET for Link Retrain GEN2 failure
2. (SAS, PCIe) Fix RxFFE user force vale not to overwrite in GEN1, GEN2
3. (PCIe) Add sumf_boost_target_c/k force control
	0xe62c[9]	sumf_boost_target_c_force_en_pcie_gen4 (default: 0)
	0xe62c[8]	sumf_boost_target_c_force_en_pcie_gen3 (default: 0)
	0xe62c[7]	sumf_boost_target_k_force_en_pcie_gen4 (default: 0)
	0xe62c[6]	sumf_boost_target_k_force_en_pcie_gen3 (default: 0)
	0xe6d4[31:24]	sumf_boost_target_k_pcie_gen3[7:0] (default: 0)
	0xe6d4[23:16]	sumf_boost_target_c_pcie_gen3[7:0] (default: 0)
	0xe6d4[15:8]	sumf_boost_target_k_pcie_gen4[7:0] (default: 0)
	0xe6d4[7:0]		sumf_boost_target_c_pcie_gen4[7:0] (default: 0)
4. (PCIe) Add an option to do Gain_Train(DFE_RES,FFE_C) after TX-training and before FFE_R-training 
	0xe644[6]	gain_train_after_tx_train_en_pcie (default: 0)
5. (PCIE) FFE AC-cap, PW, Pulse_div new settings
	GEN4: AC-Cap=2; PULSE_DIV=3; PW=2
	GEN3/2/1: AC-Cap=2; PULSE_DIV=2; PW=2
===CHANGE LIST 0_13_18_0===
1. (PCIe) Add TX_ADAPT_GN1_EN_GEN3/GEN4 control registers
	0xe6c8[15]	tx_adapt_g0_en_pcie_gen3 (default: 0)
	0xe6c8[14]	tx_adapt_gn1_en_pcie_gen3 (default: 1)
	0xe6c8[13]	tx_adapt_g1_en_pcie_gen3 (default: 1)
	0xe6c8[12]	tx_adapt_g0_en_pcie_gen4 (default: 0)
	0xe6c8[11]	tx_adapt_gn1_en_pcie_gen4 (default: 1)
	0xe6c8[10]	tx_adapt_g1_en_pcie_gen4 (default: 1)
2. (SAS) Change DFE Sampler offset WA default to disable
	0xe6c0[3] dfe_dc_interval_eq_en(default: 0)
3. (SAS) Add PS mis-detection issue WA with option registers
	0xe6c4[26:24]	normal_ffe_pulse_div[2:0] (default: 2) - cover GEN1, GEN2
	0xe6c0[7:5]		normal_ffe_pulse_div_gen3[2:0] (default: 3)
	0xe6c4[22:20]	normal_ffe_pulse_div_gen4[2:0] (default: 3)
	0xe6c4[18:16]	normal_ffe_pulse_div_gen5[2:0] (default: 4)
4. (SAS) Add an option bit to do fully Rx training by toggling RX_TRAIN_ENABEL in iso late mode 
	0xe6c0[4] cdr_adapt_force_en_iso (default: 0)
5. (SAS) Fix degradation for SAS, CDR phase adaptation work in RX training
6. (SAS) Add TX Overboost Threshold registers	
	0xe6cc [31:24] TX_G1_OVERBOOST_THRES
	0xe6cc [23:16] TX_GN1_OVERBOOST_THRES
7. (SAS) Add new midpoint ALG as default
	0xe62c[11]	EOM_ALG_MODE (default: 1) 
===CHANGE LIST 0_13_17_0===
1. (SAS, PCIe) Add Firmware workaround for  hardware wrong DFE sampler offset assignment logic issue (CE Project M-1544)
===CHANGE LIST 0_13_16_0===
1. (PCIe) Fixed U.2 Speed change failure
===CHANGE LIST 0_13_15_0===
1. (SAS) Fix wrong TTIU
2. (SAS) Update PLL configuration for Xtalk
3. (SAS, PCIe) Fix 2nd TxDCC Saturation
===CHANGE LIST 0_13_14_0===
1. (SAS) Fix of [Elnath] PHY can't get to ready due to miss-detection of PS
===CHANGE LIST 0_13_13_0===
1. (PCIe) Support UCI access in PCIe L1, CORE_RESET stage
2. (SAS) Support SAS 12G/22G RxTrain short time /wo phase training
3. (SAS, PCIe) Fix UCI floating tap resolution readback bug
4. (PCIe) Fix U.2 2x2 Port1 external refclk not linkup issue when port0 is open
5. (SAS, PCIe) Fix TXDCC_PDIV causing Tx Jitter
6. (SAS, PCIe) Updated UCI Slew rate enable
7. (SAS) Remove FFE_R overwriting during initial phase training
===CHANGE LIST 0_13_12_0===
1. (PCIe) Fix data-abort issue on 1xLane bifurcation configurations issue
2. (PCIe) Fix EOM failure after Lane Margin issue
3. (SAS, PCIe) Support the Bypass-CTLE per Gen
4. (SAS, PCIe) Change the initialization of FFE values at train reset: from constant values to register user options
5. (PCIe) Fix lane-margin wrong error counters Issue
===CHANGE LIST 0_13_11_0===
1. Support Bypass CTLE Train per Gen
===CHANGE LIST 0_13_10_0===
1. Update not to overwrite RX_TRAIN_TIMER_LANE[15:0] in SAS Mode
2. Update PLL Speed Table for UI-stability For SAS
===CHANGE LIST 0_13_9_0===
1. Change in lane-margin abort method in PCIe
2. Add DFE Resolution Adaptation in PCIe GEN4
===CHANGE LIST 0_13_8_3===
1. Update Lane Margine in PCIe
2. Reduce RxTrain time for SAS 6G 
====CHANGE LIST 0_13_8_0===
1. Fix TX MARGIN control in CMD_IF
2. Fix TXFFE default load value
3. Add BYPASS_MCU_STOP option control for FW workaround of register access abort if PHY lane has no termination 
4. Update TxFFE control in CMD_IF
===CHANGE LIST 0_13_7_0===
1. Update SAS PLL Speed Table to fix SSC Profile noisy
2. Update Bin file data order
===CHANGE LIST 0_13_6_0===
1. Fix Error Cancel with TRAIN_COMP
2. Fix L1SS lane to Lane skew
3. Change LCPLL always used, Not support  diffrent lane different speed for SAS mode
4. Fix APTA Train Abort with Command Interface hang 
===CHANGE LIST 0_13_4_0===
1. Fix Error Response TTIU cancel output timing
2. Update APTA CMD_IF for short response
===CHANGE LIST 0_13_3_0===
1. Fix train error ttiu recover bug
2. Embedded Checksum in dat/mem. *_CHECKSUM_EXP = 0
===CHANGE LIST 0_13_2_0===
1. Change ERROR_RESPONSE_TTIU_DETECTED register name
2. Update interrupt handler for TTIU Error handle
3. Change SQ Thr Ratio bit width to 6bit in CMD_IF 
===CHANGE LIST 0_13_0_0===
1. Update ROM
2. Change CMD_IF tx_preset output PHY_LOCAL_VALUE_LANE bit location
===CHANGE LIST 0_12_17_0===
1. Ignore Remote ERROR Response TTIU, not to change LOCAL_CTRL
===CHANGE LIST 0_12_15_0===
1. Add TTIU Error hanle after train complete before Train Enable=0
===CHANGE LIST 0_12_14_0===
1. reverse TRAIN COMPLETE clear when speed change 
2. update SAS TTIU Error handle for multiple coefficient coming
===CHANGE LIST 0_12_13_0===
1. Clear RX_INIT Interrupt flag when enter Power mode
2. Support PCIe different speed per lane
===CHANGE LIST 0_12_8_0===
1. Fix PIN_PU_RX 1us drop case 
2. Add workround for double LOCAL STATUS VALID toggle
3. Update to cover APTA Train drop 1usec
===CHANGE LIST 0_12_7_0===
1. Fix NOT_VAILD(2) status for APTA_CMD_IF conflicted with other function
===CHANGE LIST 0_12_6_0===
1. Fix TTIU local status corner case related train comp
2. Send NOT_VAILD(2) status for CMD_IF conflicted with other function
3. Update for TX_TRAIN_ERROR 3
4. Combine RXFFE EVEN/ODD CMD_IF control to ODD only
5. Fix PAPTA_R_CTRL_FIELD_READY for APTA corner case
6. Send invalid cmd value for Slewrate_en=1,2 command input  
===CHANGE LIST 0_12_5_0===
1. APTA Train priority adjust between speed change
===CHANGE LIST 0_12_4_0===
1. Update for Unfixed value returned from Packet Mode status 0 register
2. Update DFE Adapt Run for LANE MARGIN
===CHANGE LIST 0_12_3_0===
1. Add pattern frame lock detect feature
2. Fix LANE_MARGINE hang
===CHANGE LIST 0_12_1_0===
1. Add PCIe Lane alignment for Lane Disable as workaround 
===CHANGE LIST 0_12_0_0===
1. Support PHY Mode Firmware Release Structure
2. Add all other Command Interface and Fix SSC Get bug
===CHANGE LIST 0_10_18_0===
1. Add Command Interface (TX_PRESET_INDEX, TX_PRESET, SSC)
2. Add FORCE_PARTIAL_PU_RX_ON control
===CHANGE LIST 0_10_17_0===
1. Move VIRTUAL TXDETRX CTRL location to P1_TXDETRX stage
2. Add abort packet_sync_en control during Slumber and Speed change
===CHANGE LIST 0_10_16_0===
1. Add VIRTUAL_TDR_SIM_EN control signal for PCIe lane disable
===CHANGE LIST 0_10_14_0===
1. Update TTIU: Not update C2 COEFFICIENT if C1 is MIN/MAX  when CO_1_2_DEC/INC received
2. Update PCIE FOM mode dummy Train
3. Update Training abort protection; fix ignoring the incoming training request in a very rare case
===CHANGE LIST 0_10_12_0===
1. Fix Ethernet Cfg mode 2 different lane power up
===CHANGE LIST 0_10_10_0===
1. Remove FW control for reg_tx_train_comp_wait_frame_lane
2. Change Rx Train time = 20ms
===CHANGE LIST 0_10_9_0===
1. Improve Slumber Part Tx Wake up Time
===CHANGE LIST 0_10_8_0===
1. Add train parameter for user control
2. Change train timer = 500msec
3. Fix Slumber wakeup for SERDES ETHERNET MODE 2 - Add missing RINGPLL power up
4. Fix train abort and speed change same time
===CHANGE LIST 0_10_2_0===
1. Update APTA corner case - apta train dis and slumber enter at the same time
===CHANGE LIST 0_9_18_0===
1. Update Power Management Corner case for SAS,SATA - different time power down and only one lane up  
===CHANGE LIST 0_9_17_0===
1. Add train clean up for abnormal train complete
2. Modify tx_align to fix hang when master_lane disable
===CHANGE LIST 0_9_14_0===
1. Debug TRX-TRAIN abort corner case; RXTRAIN start within 1usec after TXTRAIN abort
2. Use only PIN_LOCAL_CTRL_FIELD_READY signal for APTA interface, not use hardware generated PIN_LOCAL_CTRL_FIELD_READY interrupt
3. Cover Power Management Corner case - short time(less than 1usec) period power drop 
4. Add APTA CMD IF
5. For Train simulation faster, user have to set TRAIN_SIM_EN=1
*/

#endif // _VER_H
