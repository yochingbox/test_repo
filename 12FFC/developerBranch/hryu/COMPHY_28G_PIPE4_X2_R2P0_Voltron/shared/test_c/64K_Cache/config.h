// Filename: config.h
// define compile parameters
#ifndef CONFIG_H
#define CONFIG_H

#define SIM_ENV
#define LAB
#define _DEBUG_PHASE_ADAPT  0
#define _DEBUG_MAIN	0
#define _DEBUG_POWER 0
#define _DEBUG_CAL 0
#define _DEBUG_DFE	0
#define _DBG_TXTRAIN 0
#define _DBG_RXTRAIN 0
#define _DBG_TRXTRAIN 0
#define _DBG_PHASE_TRAIN 0
#define _SIM_TX 0       // in CDR+DFE, mimic TX Behaviour
#define _SIM_RX 0       // in CDR+DFE, mimic RX Behaviour
#define _TIMER_QUICK 0  // Software timer quick exit
#define _TX_ST_FAKE 0   // fake tx status
#define _SATA           // Choose SATA Speed Table
#define _REF_SEL 0      // Choose ref_sel=0 Speed Table
#define _SPDTBL_NRML    // Choose normal Speed Table

#define _SUPPORT_TRAIN_TEST
#define _SUPPORT_BLIND_TRAIN	0 //tag_BLIND_TRAIN_EN
#define _SUPPORT_REALTIME_PHASE_ADAPT
#define _SUPPORT_USE_RT_DATA_PATH
//#define _SUPPORT_EOM
#define _SUPPORT_UART_RX
//#define _TEST_RXTRAIN_2  //check RXTrain Step by Step by recode DFE Tap values
#define _TEST_PHASE_ADAPT 

#endif
