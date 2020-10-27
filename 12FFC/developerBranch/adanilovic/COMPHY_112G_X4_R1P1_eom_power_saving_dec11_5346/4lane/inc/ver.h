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
    BUILD_VER = 116
};

/******************************************************************
 * *        SOC RELEASE FIRMWARE REVISION HISTORY
 * *******************************************************************
 *  ===CHANGE LIST 0_10_11_23===
 *  1. Engineering image for Datacom X7121 (0.10.11.23)
 *  2. Support of 53G TRX training
 *  3. Support of stage 1 COMPHY INT funtions (0x0, 0x10, 0x11, 0x12, 0x13, 0x14, 0x17, 0x20)
 *  4. Limitation: For 53G data rate, if long trace training results are applied to short trace, TXFFE C-1 need to be decreased under saturation condition.
 */
#endif // _VER_H
