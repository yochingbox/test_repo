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
Minor version – minor feature changes
Patch version – implementation patch changes
Build version – release build
*/
enum version{
    MAJOR_VER = 0,
    MINOR_VER = 13,
    PATCH_VER = 17,
    BUILD_VER = 0
};

/******************************************************************
*        SOC RELEASE FIRMWARE REVISION HISTORY
*******************************************************************
===CHANGE LIST 0_13_17_0===
1. DFE tracking issue WA - DFE_PAT_DIS=1
2. Train parameters GAIN_TRAIN_ENABLE for MCU FW not overwrite
===CHANGE LIST 0_13_16_0===
1. Apply TTIU handling issue WA
2. Add SATA DC-Idle WA 
3. Use New CDR phase algorithm
 0xe62c[11] EOM_ALG_MODE   1: use new algoritm (default:1 )
4. Add TX_TRAIN_START_WAIT_TIME for train algorithm start time short delay control
 0x6070[5] TX_TRAIN_START_WAIT_TIME_EN_LANE   Tx Training After Wait Time. (default:1)
 0x60e8[7:0] TX_TRAIN_START_WAIT_TIME_LANE[7:0]	TX Training Start Wait Time. (default:0)	 
				When TX training is enabled and TX_TRAIN_START_WAIT_TIME_EN_LANE=1, wait a certain time to start training.               	
				time wait: TX_TRAIN_START_WAIT_TIME_LANE[7:0] * 0.5msec.
5. Add 1st CDR adaptation control registers
 0x6068[7]	CDR_PHASE_OPT_FIRST_RXTRAIN_EN_LANE (default:0)
 0x6068[6]	CDR_PHASE_OPT_FIRST_TXTRAIN_EN_LANE (default:1)
 0x6068[5:0]	CDR_OPT_FIRST_F0D_THRS_LANE[5:0] (default: 'ha)
6. Change FORCE_PARTIAL_PU_RX_ON default value to 1
===CHANGE LIST 0_13_15_0===
1. Add EOM Power saving control bit (Default: 0)
2. New PLL configuration for Tx Crosstalk improvement
===CHANGE LIST 0_13_14_0===
1. Add RINGPLL_USE_ONLY option register to choose RINGPLL or LCPLL   
2. Support fast APTA simulation with Power reduction
3. Change Tx emphasis default
4. Change Tx Over Boost Threshold
===CHANGE LIST 0_13_13_0===
1. Remove analog power saving (analog volatage regulator)
===CHANGE LIST 0_13_12_0===
1. Updated UCI Slew Rate Enable (Default Value)
2. Support SAS 12G/22G RxTrain short time /wo phase training
3. Fix UCI floating tap resolution readback bug
4. Fix TXDCC_PDIV causing Tx Jitter
5. Support the Bypass-CTLE per Gen
6. Change the initialization of FFE values at train reset: from constant values to register user options
7. Update not to overwrite RX_TRAIN_TIMER_LANE[15:0] in SAS Mode
8. Update PLL Speed Table for UI-stability for SAS
9. Remove FFE_R overwriting during initial phase training
===CHANGE LIST 0_13_11_0===
1. Support 4G MCUCLK for simulation fast
===CHANGE LIST 0_13_10_0===
1. Optimize simulation time
===CHANGE LIST 0_13_9_0===
1. Fix SATA 6G speed wrong when PHY_GEN_MAX = 2
===CHANGE LIST 0_13_8_0===
1. Reduce RxTrain time for SAS 6G 
2. Chanege SAS INIT_TXFOFFS default values using 50MHz from 0xB7 to 0xB5
===CHANGE LIST 0_13_7_0===
1. Fix RX_INIT_DONE signal toggle during speed change
===CHANGE LIST 0_13_6_0===
1. Embedded Checksum in speed table, *_CHECKSUM_EXP = 0
2. Fix unexpected TTIU response status
3. Change LCPLL always used, Not support  different lane different speed for SAS mode
===CHANGE LIST 0_13_0_0===
1. Update APTA_ADJUST(START) response to TERMINATE
2. Add APTA_TERMINATE_REASON_LANE[7:0] register
===CHANGE LIST 0_12_17_0===
1. Fix TTIU Dual Coefficient Status Min/Max handle 
===CHANGE LIST 0_12_12_0===
1. Set RXDATA_LATENCY_REDUCE_EN_LANE = 1 for SATA
===CHANGE LIST 0_12_10_0===
1. Restore missing interrupt handler to cover PU_RX 1usec drop case
===CHANGE LIST 0_12_9_0===
1. Update APTA limited LOCAL STATUS Response 
===CHANGE LIST 0_12_8_0===
1. Set TXDATA LATENCY REDUCE Enable
===CHANGE LIST 0_12_2_0===
1. Add pattern frame lock detect feature
===CHANGE LIST 0_11_1_0===
1. Support PHY Mode Firmware Release Structure
2. Add all other Command Interface and Fix SSC Get bug
===CHANGE LIST 0_10_18_0===
1. Add Command Interface (TX_PRESET_INDEX, TX_PRESET, SSC)
2. Add FORCE_PARTIAL_PU_RX_ON control
===CHANGE LIST 0_10_16_0===
1. Add VIRTUAL_TDR_SIM_EN control signal for PCIe lane disable
===CHANGE LIST 0_10_14_0===
1. Update TTIU: Not update C2 COEFFICIENT if C1 is MIN/MAX  when CO_1_2_DEC/INC received
2. Update PCIe FOM mode dummy Train
3. Update Training abort protection; fix ignoring the incoming training request in a very rare case
===CHANGE LIST 0_10_12_0===
1. Fix Ethernet Cfg mode 2 different lane power up
===CHANGE LIST 0_10_10_0===
1. Remove FW control for reg_tx_train_comp_wait_frame_lane
2. Change Rx Train time = 20ms
===CHANGE LIST 0_10_9_0===
1. Improve Slumber Part Tx Wake up Time
===CHANGE LIST 0_10_8_0===
1. Add train parameter for user control
2. Change train timer = 500msec
3. Fix Slumber wakeup for SERDES ETHERNET MODE 2 - Add missing RINGPLL power up
4. Fix train abort and speed change same time
===CHANGE LIST 0_10_2_0===
1. Update APTA corner case - apta train disable and slumber enter at the same time
===CHANGE LIST 0_9_18_0===
1. Update Power Management Corner case for SAS,SATA - different time lane power down and only one lane up  
===CHANGE LIST 0_9_17_0===
1. Add train clean up for abnormal train complete
2. Modify tx_align to fix hang when master_lane disable
===CHANGE LIST 0_9_14_0===
1. Debug TRX-TRAIN abort corner case; RXTRAIN start within 1usec after TXTRAIN abort
2. Use only PIN_LOCAL_CTRL_FIELD_READY signal for APTA interface, not use hardware generated PIN_LOCAL_CTRL_FIELD_READY interrupt
3. Cover Power Management Corner case - short time(less than 1usec) period power drop 
4. Add APTA CMD IF
5. For Train simulation faster, user have to set TRAIN_SIM_EN=1
*/

#endif // _VER_H
