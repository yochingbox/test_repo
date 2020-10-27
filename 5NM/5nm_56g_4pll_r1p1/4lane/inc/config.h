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
#define _56G_5NM
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
#define _112G_TRAIN
//#define PRBS_CHK
//#define NO_REDUCE_CODE
//#define SUPPORT_QR
//#define SUPPORT_ISR
#ifdef _PCIE_BUILD
#define SUPPORT_SFT_RST_ISR
#define SUPPORT_LANE_MARGINE
#endif
//#define SUPPORT_PRIORITY_INT
//#define SUPPORT_CTLE_ADAPT
#define TRX_SFT_RESET_CONTROL

#define SUPPORT_PI_DCC_PATCH

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

#define PCIE_PHY_GEN_MAX 5

#ifdef _56G_5NM
#define PLL_SHARING_ROUTE
#endif // #ifdef _56G_5NM

// HW driver define
#define DRV_SPD_CFG_DEC_V1
#define DRV_RX_FUNC_CFG_V1
#define DRV_PWR_V1

#define PCIE_PHY_GEN_MAX 5

#define CONFIG_5NM_56G_X4_4PLL_R1P1 1

#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    #define FW_PIN_PU_PLL_RD_LANE0 reg_PIN_PU_PLL_RD_LANE0
    #define FW_PIN_PU_PLL_RD_LANE1 reg_PIN_PU_PLL_RD_LANE1
    #define FW_PIN_PU_PLL_RD_LANE2 reg_PIN_PU_PLL_RD_LANE2
    #define FW_PIN_PU_PLL_RD_LANE3 reg_PIN_PU_PLL_RD_LANE3
#endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

#ifdef CONFIG_5NM_56G_X4_4PLL_R1P1
    #define FW_PIN_PU_PLL_RD_LANE0 mcu_en0
    #define FW_PIN_PU_PLL_RD_LANE1 mcu_en1
    #define FW_PIN_PU_PLL_RD_LANE2 mcu_en2
    #define FW_PIN_PU_PLL_RD_LANE3 mcu_en3
#endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P1

#endif //CONFIG_H
