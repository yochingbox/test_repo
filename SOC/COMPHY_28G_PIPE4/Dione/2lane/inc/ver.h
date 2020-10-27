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
    MINOR_VER = 12,
    PATCH_VER = 23,
    BUILD_VER = 54
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_23_0===
1. Fix SERDES 5G Speed table - disable DFE
2. Update Phase, TXFFE to use default value in SERDES speed change 
===CHANGE LIST 0_12_22_0===
1. Fix SERDES independent lane power up 
===CHANGE LIST 0_12_21_13===
1. Update LCPLL parameters to meet compliance bandwidth requirement
2. Add PLL clock ready signal control in shared PLL mode calibration to support shared PLL mode application.
3. Update PLL clock measurement ready signal control for random PLL unlock at CODE BOOT
===CHANGE LIST 0_12_21_0===
1. Update LCPLL Speed Table for PCIe bandwidth
2. Improve PCIe Train Time
3. Add embedded Checksum into Speed Table
===CHANGE LIST 0_12_20_0===
1. Set reg_LCPLLCLK_DIV2_SEL = 1 in PHY Initialization Sequence
===CHANGE LIST 0_12_19_0===
1. Fix SQ Threshold Ratio Command Interface Bug
2. Added Ethernet PT output during train with 100usec delay
3. Update for Cobra, Fabrico Lab test
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
