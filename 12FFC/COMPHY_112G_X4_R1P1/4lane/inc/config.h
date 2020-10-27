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

//#define _12FFC_COMPHY_112G_X4_R1P2

//-------------
//#define _28G_R2P0
//#define _28G_R1P0
#define _56G_R1P0
#define _56G_R1P1
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
#define _DBG_TRAIN_TIMER
#define SIM_ENV	
//#define BITMATCH
#define DEVELOP_TEMP
#define UPDATE_WAIT
//#define RESET_MCU_SPEED_UP
//#define USE_DMA_LOAD_SPDTBL
//define USE_NO_TIMESHARE
#define SUPPORT_PHASE_ADAPT
#define SUPPORT_PHASE_ADAPT_QR
//#define SUPPORT_PHASE_ADAPT_HR
//#define SUPPORT_ALIGN90_PD_DIGITAL_FILTER
//#define ALIGN90_TEST
#define SUPPORT_EOM
#define SUPPORT_CTLE_ADAPT
#define SUPPORT_VDD_CAL
//#define SUPPORT_POWER_SIMPLE //for COSIM
//#define SUPPORT_CAL_SYNC_LANE // not working. no useful.
#define SUPPORT_NEW_XDAT_STRUCTURE
#define SUPPORT_DUMMY_TRAIN
#define SUPPORT_CLI
//#define ROM_REPLACEMENT
#define NEW_CDS
#define USE_DMA_DFE
#define _112G_TRAIN
//#define SUPPORT_PRBS_CHECKER
//#define NO_REDUCE_CODE
#define SUPPORT_QR
//#define SUPPORT_DFE_POWER_SAVING
#define SUPPORT_COMPHY_INT
#define SUPPORT_COMPHY_INT_01
#define SUPPORT_COMPHY_INT_17
//#define SUPPORT_TX_IDLE
#define SUPPORT_F0D_MEASURE

// Measure fn3,fn4,fn5,f1 using f0x; Use cli to read more taps
#define _DBG_F0X		0
//#define SUPPORT_RECORD_TEMP
#define _DBG_CMN_TIMER  0
#define _DBG_R_TRAIN_DFE_LOOP 0
#define _DBG_TXTRAIN_STATUS_VALID 1

#ifdef _LAB
#define _DBG_DFE 		1
#define _DBG_RXTRAIN	1
#define _DBG_TXTRAIN	0
#define _DBG_TRXTRAIN	0
#define _DBG_TRXTRAIN_LVL1	0
#define _DBG_PHASE_TRAIN 0
#define _DBG_PHASE_ADAPT 0
#define _DBG_EOM		0
#define _DBG_PRBS		0
#define _DBG_PHASE_TRAIN_ADV 0 // added by JL

//#define _SUPPORT_TRAIN_IF_RX_DEBUG
//#define _SUPPORT_TRAIN_IF_TX_DEBUG //cannot use
//#define _SUPPORT_TRAIN_IF_MEASURE
#define _DBG_ALIGN90_CONT  0
#endif

//#define RUN_REGRESSION
#endif //CONFIG_H
