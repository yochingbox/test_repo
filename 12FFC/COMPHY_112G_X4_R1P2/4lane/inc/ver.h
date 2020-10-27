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
    MINOR_VER = 10,
    PATCH_VER = 11,
    BUILD_VER = 75
};

/******************************************************************
 * *        SOC RELEASE FIRMWARE REVISION HISTORY
 * *******************************************************************
 *  ===CHANGE LIST 0_10_11_61===
 *  1. Engineering image for TSMC12ffc:COMPHY_112G_X4:1.2.0
 *  2. Known improvements: consistent PHY_GEN_MAX; no unexpected pll_ready during multiple partial slumber states.
 */
#endif // _VER_H
