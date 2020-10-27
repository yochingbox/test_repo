/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file config.h
* \purpose define compile parameters
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/ 
#ifndef CONFIG_H
#define CONFIG_H

//-------------
#define _28G_R1P0
//#define _28G_R2P0
//#define _56G_R1P0

//-------------
// PHY MODE OPTIONS : 7/27/17, now defined in makefile for specific target
//#define _PCIE_USB     !!! DO NOT uncomment !!!
//#define _SATA_SERDES  !!! DO NOT uncomment !!!

//-------------
// TXTrainIf OPTIONS
#ifndef _PCIE_USB
#define SUPPORT_AUTO_TRAIN_MODE
#define SUPPORT_PHASE_TRAIN
#endif
#define SUPPORT_LINK_TRAIN_MODE

//-------------
//#define MCUCLK_500MHz
#define MCUCLK_400MHz

//-------------
// DEBUG OPTIONS
//#define _LAB
//#define SIM_ENV	
//#define BITMATCH

//-------------
//baudrate
#define BPS115200
//#define BPS57600

//#define USE_DMA_LOAD_SPDTBL
#define USE_DMA_DFE
//#define USE_NO_TIMESHARE
//#define SUPPORT_CHECK_SPDTBL_LOAD
//#define SUPPORT_POWER_SIMPLE //for COSIM
//#define SUPPORT_CAL_SYNC_LANE // not working. no useful.
//#define SUPPORT_REALTIME_PHASE_ADAPT
#define SUPPORT_EOM
#define SUPPORT_VDD_CAL
#define SUPPORT_TXTRAIN
#define SUPPORT_RINGPLL
//#define SUPPORT_TX_TRAIN_IF_REMOTE_CONTROL_MAIN
//#define SUPPORT_DUMMY_TRAIN
#define SUPPORT_CLI
//#define SUPPORT_RX_INIT_TIME_CHECK
#define SUPPORT_MCU_FREQ
// #define SUPPORT_NEW_CDS
#define SUPPORT_CMD_IF

#ifdef _LAB
#define _DBG_DFE 		1
#define _DBG_RXTRAIN	1
#define _DBG_TXTRAIN	0
#define _DBG_TRXTRAIN	1
#define _DBG_TRXTRAIN_LVL1	0
#define _DBG_PHASE_TRAIN 0
#define _DBG_PHASE_ADAPT 0
//#define _SUPPORT_TRAIN_IF_RX_DEBUG
//#define _SUPPORT_TRAIN_IF_TX_DEBUG //cannot use
//#define _SUPPORT_TRAIN_IF_MEASURE
#define _DBG_ALIGN90_CONT  0
#define _DBG_RX_INIT	0
//#define _DBG_EOM

#endif

#endif //CONFIG_H
