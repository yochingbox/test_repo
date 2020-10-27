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
#define _28G_X1
//#define _28G_X1_R1P2

//-------------
// PHY MODE OPTIONS
#define _PCIE_USB
#define _SATA_SERDES

//#define _PCIE_USB_BUILD
//#define _SATA_SERDES_BUILD

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
#define SUPPORT_NEW_CDS
#define SUPPORT_RXFFE_ACCAP_EN
//#define SUPPORT_RX_INIT_USE_CDS
#ifdef _SATA_SERDES_BUILD
	#define SUPPORT_REALTIME_PHASE_ADAPT
	#define SUPPORT_PHASE_TRAIN
 #ifndef _SERDES_BUILD
	#define SUPPORT_CMD_IF
	#define SUPPORT_APTA_TX_TRAIN
	#define SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
	//#define SUPPORT_SAS_LC_ONLY	//RINGPLL_USE_ONLY register to select RINGPLL or LCPLL for Hayabusa request
	#define SUPPORT_SAS_EOM_POWERSAVING	
	#define SUPPORT_DFE_POWERSAVING 1
	//#define SUPPORT_ANA_POWERSAVING 1
 #else 	
	//#define SUPPORT_X2_RING_LANE 
	#define SUPPORT_ETHERNET_SEL_BIT_CTRL		
 #endif
#endif	
#define SUPPORT_CHECK_NORMAL_F0D
//#define SUPPORT_TTIU_SAS_DEBUG

//#define SUPPORT_PCIEG3_DFE_STOP_SAT
#define SUPPORT_CAL_SYNC_CLEAR_ALL //Need to skip all pll related continuous calibration clearing at speed/power state change for U.2 2x2 speed change failure.
//#define SUPPORT_SKIP_LOAD_PLL_CAL_PCIE //No need. if we skip PLLDCC calibration load at the end of speed change, speed change test failure.
//#define SUPPORT_RXINIT_DFE_TAP_REFRESH //Don't have to enable!
#define SUPPORT_ATE_SCREEN_VOLTAGE
#define SUPPORT_FFE_PULSE_DIV_VAL
#ifndef _28G_X1_R1P2
//#define SUPPORT_SMPLR_INTEVAL_EQ_EN
#endif

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
#define  IMPROVE_EOM        1

#endif //CONFIG_H
