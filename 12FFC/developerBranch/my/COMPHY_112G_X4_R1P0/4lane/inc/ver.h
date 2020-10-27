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
    PATCH_VER = 10,
    BUILD_VER = 109
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
 *  ===CHANGE LIST 0_10_5_0===
 *  1. The training code for 56G mode;
 *  2. The DFE_adaptation and ph_ctl and EOM are also implemented.
 *  ===CHANGE LIST 0_10_6_0===
 *  1. The PLLAMPCAL_EN and PLLCAL_EN set to 0 for PLL cont calibration;
 *	2. The reg_TXCAL_EN_LANE is set to 1 for power on and continuous tx dcc calibration;
 *	3. The reg_ANA_TX_IDLE_LANE is set to zero when the calibration begins.
 *  ===CHANGE LIST 0_10_7_0===
 *  1. The sampler calibration result writen to dfe_fextdc and OFST registers;
 *	2. The CMN MCU to turn on t-sensor.
 *  ===CHANGE LIST 0_10_8_0===
 *  1. Write the sampler calibration results to dfe_fextdc and OFST after all calibration is done and set DFE_reset to 0;
 *	2. Do the pll frequency calibration even pll amplitude calibration times out;
 *	3. Wait for the FBC PLL cnt ready bit but ignore timeout.
 *  ===CHANGE LIST 0_10_10_20===
 *  1. Fixed Tsense reset sequence
 *  2. IPCE_COMPHY-1083 M-1640: PLL AMP Cal needs delay before first reading done bit: Update the delay to be 0.5us
 *  ===CHANGE LIST 0_10_10_98===
 *  1. Included 4 new speeds/data rates and corresponding speedtable
 *  2. Included latest training algorithm
 */
#endif // _VER_H
