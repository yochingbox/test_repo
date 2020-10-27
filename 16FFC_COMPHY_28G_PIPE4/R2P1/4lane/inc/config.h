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
//#define _28G_X2
#define _28G_X4_R2P1 // Only enable for X4 R2.1

//-------------
// PHY MODE OPTIONS
#define _PCIE_USB
#define _SATA_SERDES

#define _PCIE_USB_BUILD
#define _SATA_SERDES_BUILD

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
//#define SIM_DFE

#define USE_DMA_DFE
#define SUPPORT_REALTIME_PHASE_ADAPT
#define SUPPORT_EOM
#define SUPPORT_VDD_CAL
#define SUPPORT_TX_TRAIN
#define SUPPORT_LANE_MARGINE //for pcie
#ifdef SUPPORT_TX_TRAIN
#define SUPPORT_DUMMY_TRAIN
#endif
//#define SUPPORT_CLI
#define SUPPORT_X2_RING_LANE
#define SUPPORT_PHASE_TRAIN
#define SUPPORT_NEW_CDS
#define SUPPORT_RXFFE_ACCAP_EN	
#define ROM_REPLACEMENT
#define SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
#define SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
#define SUPPORT_CMD_IF
//#define SUPPORT_PCIE_F0D_OPT

//#define USE_DMA_LOAD_SPDTBL
//#define USE_NO_TIMESHARE
//#define SUPPORT_LCPLL_ALWAYS_ON //for pcie
//#define SUPPORT_PCIE_TXFFE_FORCE_P7_GEN4_CTRL
//#define SUPPORT_FORCE_TX_IDLE_IN_SPDCHG
//#define SUPPORT_RX_INIT_USE_CDS
//#define SUPPORT_POWER_SIMPLE //for COSIM
//#define SUPPORT_CAL_SYNC_LANE 
//#define SUPPORT_RX_INIT_TIME_CHECK

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
#define _DBG_PLLDDC_CAL	0
#define _DBG_PHASE 0
#define _DBG_CDS 0
#define _DBG_TRAIN_IF 	0
//#define RINGPLL_FASTSTARTUP_DEBUG  //for RINGPLL fast start up temperature ramping test, Must use LAB
#define _DBG_PLL		0
#define _DBG_DC			0
#endif

#endif //CONFIG_H
