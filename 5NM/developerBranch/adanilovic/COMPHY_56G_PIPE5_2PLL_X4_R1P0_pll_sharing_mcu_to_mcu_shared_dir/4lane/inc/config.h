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
#define _56G_7NM
//-------------
// DEBUG OPTIONS
//#define _LAB
#define SIM_ENV	
//#define BITMATCH
//#define DEVELOP_TEMP
#define UPDATE_WAIT
//#define RESET_MCU_SPEED_UP
//#define USE_DMA_LOAD_SPDTBL
//define USE_NO_TIMESHARE
#define SUPPORT_REALTIME_PHASE_ADAPT
//#define SUPPORT_ALIGN90_PD_DIGITAL_FILTER
//#define ALIGN90_TEST
#define SUPPORT_EOM
#define SUPPORT_VDD_CAL
//#define SUPPORT_POWER_SIMPLE //for COSIM
#define SUPPORT_DUMMY_TRAIN
#define SUPPORT_TX_TRAIN
#define SUPPORT_CLI
//#define SUPPORT_NO_CMNMCU
#define USE_DMA_DFE
//#define PRBS_CHK
//#define NO_REDUCE_CODE
//#define SUPPORT_QR
#define SUPPORT_FR
//#define SUPPORT_ISR
#ifdef _PCIE_BUILD
#define SUPPORT_LANE_MARGINE
#endif
//#define SUPPORT_PRIORITY_INT
#define SUPPORT_CTLE_ADAPT

#ifdef _LAB
#define _DBG_DFE 		1
#define _DBG_RXTRAIN	0
#define _DBG_TXTRAIN	0
#define _DBG_TRXTRAIN	1
#define _DBG_TRXTRAIN_LVL1	0
#define _DBG_PHASE_TRAIN 1
#define _DBG_PHASE_ADAPT 0
//#define _SUPPORT_TRAIN_IF_RX_DEBUG
//#define _SUPPORT_TRAIN_IF_TX_DEBUG //cannot use
//#define _SUPPORT_TRAIN_IF_MEASURE
#define _DBG_ALIGN90_CONT  0
#endif

#define _DBG_F0X		0
#define _DBG_OUTER_EYE	0
#define _DBG_DFE_CAL	1
#define PLL_DUMP_DEBUG   0
#define _TRAIN_CAP_DEBUG 	1	
//#define NO_CAL_LOOP

// HW driver define
#define DRV_SPD_CFG_DEC_V0
#define DRV_TX_FUNC_CFG_V0

// HW Workaround
#define IPCE_COMPHY_1630_WA

#endif //CONFIG_H
