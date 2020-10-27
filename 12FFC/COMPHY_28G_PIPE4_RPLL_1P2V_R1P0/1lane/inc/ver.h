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
    PATCH_VER = 11,
    BUILD_VER = 0
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_11_0===
1. Initial firmware release before bringup
2. This release has passed simulation regression tests
===CHANGE LIST 0_12_10_0===
1. Initial firmware release
2. This release has passed simulation regression tests
*/

#endif // _VER_H
