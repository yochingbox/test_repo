/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ver.h
* \purpose version control
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
    PATCH_VER = 13,
    BUILD_VER = 0
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_13_0===
- test #12 if 25G
- update rxsampler regulator for specific speed rates(LDO changes)
- Leave tag_RXFFE_R_GAIN_TRAIN  and tag_RXFFE_C_GAIN_TRAIN for SOC to program
- tag_RXFFE_R_GAIN_TRAIN  and tag_RXFFE_C_GAIN_TRAIN only for 25G. The rest of the speed rate will use 4 and 15(default).
===CHANGE LIST 0_12_12_0===
1. Check 3 times remote phy train comp to fix SoC hang issue 
2. Remove delay for not necessary PRBS pattern output by adding TRAIN_PT_EN_LANE register, default: 0.
===CHANGE LIST 0_12_11_0===
1. Added new feature to support initialization from all data rate use case
2. Updated LCPLL speed table
3. Updated FFE_PULSE_DIV=0 for leakage WA
4. fixed EOM drawing
===CHANGE LIST 0_12_10_0===
1. Training sync up with latest 28G code
===CHANGE LIST 0_12_9_0===
1. Fix serdes training over time 
2. More than 300+ testcases are passed. It also has been verified by NJ team.
===CHANGE LIST 0_12_8_1===
1. Fixed PCIE link training issue that TX training didn't train C1.
===Initial version 0_12_8_0 from 28G_PIPE4_X2 FW===
*/

#endif // _VER_H
