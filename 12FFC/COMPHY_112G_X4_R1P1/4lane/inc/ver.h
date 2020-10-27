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
    PATCH_VER = 12,
    BUILD_VER = 29
};

/******************************************************************
 * *        SOC RELEASE FIRMWARE REVISION HISTORY
 * *******************************************************************
 *  ===CHANGE LIST 0_10_12_00===
 *  1. x7121m initial firmware release
 *  2. Supported data rate: 10.3125G, 25.78125G, 53.125G, 106.25G
 *  3. Limitations: a. 100G RX train time is about 30s, b. 100G TX train is not supported in current R1.1 COMPHY
 */
#endif // _VER_H
