/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ver.h
* \purpose version control
* \History
*	10/13/2015 Heejeong Ryu		Initial 
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
    MINOR_VER = 10,
    PATCH_VER = 10,
    BUILD_VER = 0
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_10_10_0=== 
1. ATE Screen AVDD setting 
2. IPDOC release
===CHANGE LIST 0_10_9_0=== 
1. Enable phase train flag
2. Add tag_EYE_CHK_THRESH_K/C to xdat cmn 
3. IPDOC release
===CHANGE LIST 0_10_8_0=== 
1. IPDOC release
===CHANGE LIST 0_10_7_4===
1. set reg_RX_PULSE_SHORTB_LANE = 0 during sampler cal
2. Eagle FFE-DFE pulse adjustment with FFE_PW_SEL_LANE
===CHANGE LIST 0_10_7_3===
1. fix TEMPC and tx trainning issue
===CHANGE LIST 0_10_7_2===   (NO release)
1. add DFE Adapt after local preset init
===CHANGE LIST 0_10_7_1===   (NO release)
1. update sampler cal
===CHANGE LIST 0_10_7_0===   (NO release)
1. added txffe bypass, update txtrain complete sequence
===CHANGE LIST 0_10_6_0===
1. Disable Balance bit to 0 for SERDES Mode
===CHANGE LIST 0_10_5_0===
1. Bug Fix: TxFFE Preset & TxFFE control
===CHANGE LIST 0_10_3_0===
1. Bug Fix: Tx Impedance unstabe in EtherCfg=2/3
===CHANGE LIST 0_10_2_0===
1. Bug Fix: RIngpll unlock at GEN4 with Power On in Ethernet_Cfg=3
===CHANGE LIST 0_10_1_0===
1. Bug Fix: Speed change mode cannot get PLL_LOCK after power on.
===CHANGE LIST 0_10_0_0===
1. Sync with X2 for SERDES only
*/
#endif // _VER_H
