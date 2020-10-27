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
    BUILD_VER = 39
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_21_133===
1. Update LCPLL parameters to meet compliance bandwidth requirement
2. Add PLL clock ready signal control in shared PLL mode calibration to support shared PLL mode application.
3. Update PLL clock measurement ready signal control for random PLL unlock at CODE BOOT
===CHANGE LIST 0_12_21_0===
1. Update LCPLL Speed Table for PCIe bandwidth
2. Improve PCIe Train Time
3. Add embedded Checksum into Speed Table
===CHANGE LIST 0_12_20_0===
1. Set reg_LCPLLCLK_DIV2_SEL = 1 in PHY Initialization Sequence
===CHANGE LIST 0_12_17_0===
1. Fix TTIU Dual Coefficient Status Min/Max handle 
===CHANGE LIST 0_12_12_0===
1. Set RXDATA_LATENCY_REDUCE_EN_LANE = 1 for SATA
===CHANGE LIST 0_12_10_0===
1. Restore missing interrupt handler to cover PU_RX 1usec drop case
===CHANGE LIST 0_12_9_0===
1. Update APTA limited LOCAL STATUS Response 
===CHANGE LIST 0_12_8_0===
1. Set TXDATA LATENCY REDUCE Enable
===CHANGE LIST 0_12_2_0===
1. Add pattern frame lock detect feature
===CHANGE LIST 0_11_1_0===
1. Support PHY Mode Firmware Release Structure
2. Add all other Command Interface and Fix SSC Get bug
===CHANGE LIST 0_10_18_0===
1. Add Command Interface (TX_PRESET_INDEX, TX_PRESET, SSC)
2. Add FORCE_PARTIAL_PU_RX_ON control
===CHANGE LIST 0_10_16_0===
1. Add VIRTUAL_TDR_SIM_EN control signal for PCIe lane disable
===CHANGE LIST 0_10_14_0===
1. Update TTIU: Not update C2 COEFFICIENT if C1 is MIN/MAX  when CO_1_2_DEC/INC received
2. Update PCIe FOM mode dummy Train
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
1. Update APTA corner case - apta train disable and slumber enter at the same time
===CHANGE LIST 0_9_18_0===
1. Update Power Management Corner case for SAS,SATA - different time lane power down and only one lane up  
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
