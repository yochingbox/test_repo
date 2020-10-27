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
//#define _28G_R1P0
#define _28G_R2P0
//#define _56G_R1P0
#define _28G_X2
#define _28G_X2_DFE
#define _LANE_RPLL
//#define _RPLL_X4
//#define _MCU_INT_TEST

//-------------
// PHY MODE OPTIONS
#define _PCIE_USB
#define _SATA_SERDES

// DO NOT uncomment below lines !!!Must be defined in Makefile, one mode per target !!!
// #define _PCIE_USB_BUILD
// #define _SATA_SERDES_BUILD

//-------------
// TXTrainIf OPTIONS
#ifndef _PCIE_USB_BUILD
#define SUPPORT_AUTO_TRAIN_MODE
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
#define SIM_DFE

//#define USE_DMA_LOAD_SPDTBL
#define USE_DMA_DFE
//define USE_NO_TIMESHARE
#define SUPPORT_EOM
#define SUPPORT_VDD_CAL
//#define SUPPORT_POWER_SIMPLE //for COSIM
//#define SUPPORT_CAL_SYNC_LANE 
#define SUPPORT_TX_TRAIN
#define SUPPORT_LANE_MARGINE //for pcie
#define SUPPORT_DUMMY_TRAIN
//#define SUPPORT_LCPLL_ALWAYS_ON //for pcie
#define SUPPORT_CLI
#define SUPPORT_X2_RING_LANE
#ifndef _PCIE_USB_BUILD
#define SUPPORT_X2_RING_LANE_2
#endif
#define SUPPORT_NEW_CDS
#define SUPPORT_RXFFE_ACCAP_EN
//#define SUPPORT_RX_INIT_USE_CDS
#ifdef _SATA_SERDES_BUILD
	#define SUPPORT_APTA_TX_TRAIN
	#define SUPPORT_REALTIME_PHASE_ADAPT
	#define SUPPORT_PHASE_TRAIN
	#define SUPPORT_ETHERNET_SEL_BIT_CTRL
#endif	
#define SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
#define SUPPORT_CMD_IF
//#define SUPPORT_CHECK_NORMAL_F0D

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
