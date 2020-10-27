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
Major version - major feature, file format changes
Minor version – minor feature
Patch version – Bug fixes
Build version – every release build
*/
enum version{
    MAJOR_VER = 0,
    MINOR_VER = 1,
    PATCH_VER = 1,
    BUILD_VER = 81
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_1_1_0===
1. Initial upload to IPDoc for CP3 FW release
2. Limitations:
   a. PCIe power state transitions for L1.1 entry, L1 exit, L1.2 entry exceed 16us
*/

#endif // _VER_H
