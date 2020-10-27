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
#define _56G_R1P1
#define _112G_ADC
#define _5FF_COMPHY_112G_ADC_X4_8PLL
#define _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
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
//#define DEVELOP_TEMP
#define UPDATE_WAIT
//#define RESET_MCU_SPEED_UP
//#define USE_DMA_LOAD_SPDTBL
//define USE_NO_TIMESHARE
#define SUPPORT_REALTIME_PHASE_ADAPT
//#define SUPPORT_ALIGN90_PD_DIGITAL_FILTER
//#define ALIGN90_TEST
#define SUPPORT_ADC_CAL
#define SUPPORT_EOM
//#define SUPPORT_VDD_CAL
//#define SUPPORT_POWER_SIMPLE //for COSIM
//#define SUPPORT_CAL_SYNC_LANE // not working. no useful.
#define SUPPORT_NEW_XDAT_STRUCTURE
//#define SUPPORT_TX_TRAIN_IF_REMOTE_CONTROL_MAIN
#define SUPPORT_DUMMY_TRAIN
#define SUPPORT_CLI
//#define ROM_REPLACEMENT
#define NEW_CDS
#define USE_DMA_DFE
#define _112G_TRAIN
//#define PRBS_CHK
//#define NO_REDUCE_CODE
//#define SUPPORT_QR
//#define SUPPORT_ISR

#ifdef _LAB
#define _DBG_DFE 		1
#define _DBG_RXTRAIN	1
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

#define NEED_REMAP_REGS

// HW driver define
#define DRV_CDS_V1
#define DRV_EOM_V1
#define DRV_RX_FUNC_CFG_V1
#define DRV_ADC_CAL_V1
#define DRV_N5P_REG_LIST_V1
#define DRV_PWR_V2
#define DRV_SPD_CFG_DEC_V1
#define DRV_PLM_V1

#endif //CONFIG_H
