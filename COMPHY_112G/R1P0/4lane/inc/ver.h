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
    PATCH_VER = 4,
    BUILD_VER = 0
};

/******************************************************************
 * *        SOC RELEASE FIRMWARE REVISION HISTORY
 * *******************************************************************
 * ===CHANGE LIST 0_10_3_0===
 * 1. Clear interrupt enable bits after receiving SW reset;
 * 2. Clear tx_train control bit when the training had been handled.
 * ===CHANGE LIST 0_10_4_0===
 *  1. Implement the dll, tx_dcc, rx_clk, rx_eom, squelsh, tx_imp and rx_imp calibrations;
 *  2. Put the calibrations in rom code.
 *
 */
#endif // _VER_H
