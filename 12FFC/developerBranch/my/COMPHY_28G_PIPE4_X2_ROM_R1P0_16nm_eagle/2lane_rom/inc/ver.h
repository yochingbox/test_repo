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
    PATCH_VER = 23,
    BUILD_VER = 0
};

enum version_ext{
    MAJOR_VER_EXT = 0,
    MINOR_VER_EXT = 12,
    PATCH_VER_EXT = 24,
    BUILD_VER_EXT = 7
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_12_24_0===
1. High voltage DFE drifting 
 -FW changes: In the PHY initialization, FW set FFW_PW_SEL = 3.
 -Result: Stable DFE Adaptation in high voltage
 -Impact Speed: GEN3, GEN4
2. Add Sampler calibration patch
 -FW Change: During the analog Calibration, FW set RX_PULSE_SHORTB to 0.
 -Result: Stable Sampler Calibration result
 -Impact Speed: all speed 
3. Optimize Rx Train (1)
 -FW Change : CTLE Table Update
 -Result: Stable Train in various channel
 -Impact Speed: GEN3, GEN4
4. Optimize Rx Train (2)
 -FW Change: Added DFE Stop logic, After Train ALG finish, FW check DFE Saturation condition. When DFE saturation condition triggered, FW set to force CTLE value to default and stop DFE Adaptation in Normal tracking mode.
 -Result: Prevent short channel DFE saturation
 -Impact Speed : GEN3, GEN4
5. Fix Rx hang issue When Tx Compliance Test without Rx input
 -FW Change: 
   >>Before: Firmware wait for Rx coming to enable PLL running after speed change finish. This causes RPLL not move.	
   >>After: Firmware don¿t wait for Rx coming, pass through to run PLL continuous calibration.
 -Result: The issue resolved. PLL tolerate at temperature ramping condition at Tx compliance test. 
 -Impact Speed: All speed 
6. Fix PCIe link down in fast devices above 70c temperature
 -FW Change: set HIZ_HOLD_CUR_LANE[1:0]=2
 -Result: The issue solved; Tx Detect Rx logic functioning at high temperature. Slow device and fast device also work on low, normal and high temperature. 
 -Impact Speed: All speed
7. Change PLL Temperature Compensate initial table to corelate to temperature
 -FW Change : PLL Initial Table
 -Result: PLL can have more margin at high temperature
 -Impact Speed: GEN3, GEN4
*Note 
 Limitation : No known limitation for all above
 PHY Mode: Applied PCIe only for all above    
===CHANGE LIST 0_12_23_0===
1. Workaound for calibration stuck; not to use MCU_STATUS1_AND/OR
===CHANGE LIST 0_12_22_0===
1. Set reg_LCPLLCLK_DIV2_SEL = 1 in initial sequence
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
