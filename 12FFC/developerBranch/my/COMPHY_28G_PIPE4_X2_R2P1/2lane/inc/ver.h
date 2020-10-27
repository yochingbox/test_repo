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
    PATCH_VER = 13,
    BUILD_VER = 13
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_13_14_0===
1. (SAS, PCIe) Add PLL Ragulator workaround
2. (SAS) Fix TTIU mismatch with TRAIN_G*
3. (SAS) Fix Phase Adaptation Midpoint Algorithm not expected
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
