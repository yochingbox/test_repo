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
    PATCH_VER = 0,
    BUILD_VER = 2
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_10_0===
1. Initial release for 32G_PIPE5_X2
===CHANGE LIST 0_12_8_1===
1. Fixed PCIE link training issue that TX training didn't train C1.
===Initial version 0_12_8_0 from 28G_PIPE4_X2 FW===
*/

#endif // _VER_H
