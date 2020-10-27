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
Minor version - minor feature changes
Patch version - implementation patch changes
Build version - release build
*/
enum version{
    MAJOR_VER = 0,
    MINOR_VER = 12,
    PATCH_VER = 17,
    BUILD_VER = 4
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_14_0===
1. Bug Fix: FW stuck at ST_P2_WK with short transition period of power state change.
2. Set vcon_min_sel and vcon_max_sel initial value based on analog power information.
===CHANGE LIST 0_12_12_0===
1. Set reg_PIN_GPO_LANE[7:0] bit [4] to 1 in the SRAM patch function after PIN_PU_PLL_TX/RX
2. Enabled watch dog timer (v0.12.9.7)
3. Added crash mode (when MCU_FW_SWITCH_EN_LANE[7:0] is set) support to use the 32K SRAM (v0.12.9.4)
===CHANGE LIST 0_12_0_0===
1. Changed register MCU_FREQ[15:0] default value to 357
2. Fixed lane margine hang and updated DFE adapt run for lane margin
3. Added lane reducer support
4. Updated PCIE FOM mode dummy train
*/

#endif // _VER_H
