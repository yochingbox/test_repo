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
//#define _28G_R2P0
//#define _28G_R1P0
#define _56G_R1P0
//-------------
// PHY MODE OPTIONS
//#define _PCIE_USB
#define _SATA_SERDES

//-------------
// TXTrainIf OPTIONS
#define SUPPORT_AUTO_TRAIN_MODE
#define SUPPORT_LINK_TRAIN_MODE

//-------------
//#define MCUCLK_500MHz
#define MCUCLK_400MHz

//-------------
// DEBUG OPTIONS
//#define _LAB
#define SIM_ENV	
//#define BITMATCH

//#define USE_DMA_LOAD_SPDTBL
//define USE_NO_TIMESHARE
//#define SUPPORT_REALTIME_PHASE_ADAPT // temporary turned off for code size purpose
//#define SUPPORT_ALIGN90_PD_DIGITAL_FILTER
//#define ALIGN90_TEST
#define SUPPORT_EOM
#define SUPPORT_VDD_CAL
#define SUPPORT_POWER_SIMPLE //for COSIM
//#define SUPPORT_CAL_SYNC_LANE // not working. no useful.
//#define SUPPORT_DUMMY_TRAIN // temporary turned off for code size purpose
#define SUPPORT_CLI
#define ROM_REPLACEMENT
#define NEW_CDS
#define USE_DMA_DFE

#ifdef _LAB
#define _DBG_DFE 		0
#define _DBG_RXTRAIN	0
#define _DBG_TXTRAIN	0
#define _DBG_TRXTRAIN	0
#define _DBG_TRXTRAIN_LVL1	0
#define _DBG_PHASE_TRAIN 0
#define _DBG_PHASE_ADAPT 0
//#define _SUPPORT_TRAIN_IF_RX_DEBUG
//#define _SUPPORT_TRAIN_IF_TX_DEBUG //cannot use
//#define _SUPPORT_TRAIN_IF_MEASURE
#define _DBG_ALIGN90_CONT  0

#endif

#endif //CONFIG_H
