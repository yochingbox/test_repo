/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phy_state.h
* \purpose mcu state definition
* \History
*	03/01/2016 Heejeong Ryu		Initial 
*/

// -- PHY_STATUS Definition

#define ST_INIT                0x0         // Initialize after Cold Boot
#define ST_OOR                 0x1         // Out of reset
#define ST_POSEQ               0x2         // Power on sequence
#define ST_CAL                 0x3         // Calibration top
#define ST_PROCESS_CAL         0x4 
#define ST_PLL_CAL             0x5 
#define ST_PLLDCC_CAL          0x6	
#define ST_VDD_CAL             0x7 
#define ST_RXDCC_DLL_CAL       0x8
//#define ST_DLL_CAL      		0x08
//#define ST_DLL_COMP_CAL        0x9
//#define ST_DLL_GM_CAL          0x0a
//#define ST_DLL_VDDA_CAL        0x0b
//#define ST_DLL_EOM_GM_CAL      0x0c
//#define ST_DLL_EOM_VDDA_CAL    0x0d
#define ST_SQ_OFST_CAL          0x0d
//#define ST_RXDCC_DATA_CAL      0x0e
#define ST_RX_CLK_CAL			0x0e
//#define ST_RXALIGN90_CAL       0x0f
//#define ST_RXALIGN90CMP_CAL    0x10
//#define ST_RXDCC_EOM_CAL       0x11
#define ST_RX_EOM_CAL			0x11
//#define ST_EOM_ALIGN_CAL       0x12
#define ST_SAMPLER_CAL         0x13
//#define ST_SQ_CAL              0x14
#define ST_SQ_THRESH_CAL          0x14
#define ST_TXDCC_CAL           0x15
//#define ST_TXDETECT_CAL        0x16
#define ST_RXIMP_CAL           0x17
#define ST_TXIMP_CAL           0x18
#define ST_SPDCHG              0x19         // Speed Change
#define ST_SLUMBER             0x1a         // Slumber

/*#define ST_P2_WK	           0x1b			// Slumber Wake Up
#define ST_P2_BEACON	       0x1e
#define ST_TXDETRX		       0x1f
#define ST_P2_TXDETRX          0x20
#define ST_P2			       0x21
#define ST_P1			       0x22
#define ST_P1_WK		       0x23
#define ST_P1OFF_WK		       0x24	
#define ST_P1SNOOZE_WK	       0x25	
#define ST_P1CLKREQ_WK	       0x26*/

#define ST_PSLUMBER_WK         0x1c 
#define ST_PSLUMBER            0x1d
#define ST_PLLREADY            0x27        // Standby State, wait for RX_Init
#define ST_TRXTRAIN            0x28        // TRX Training
#define ST_TXTRAIN             0x29        // TX Training
#define ST_RXTRAIN             0x2a        // RX Training
#define ST_NORMAL              0x2b        // Normal Tracking
#define ST_DTL                 0x2c        // DTL
#define ST_EOM                 0x2d        // EOM
#define ST_POFF_TXDETRX	       0x2e
#define ST_SLUMBER_WK	       0x2f
#define ST_SLUMBER_CLK	       0x30

#define ST_RS_PLLTEMP_CAL      0x31
#define ST_TS_PLLTEMP_CAL      0x32
/*
#define ST_P1_TXDETRX          0x33
#define ST_RXALIGN90_TRACK	   0x34
#define ST_PLLAMP_CAL_CONT	   0x35
#define ST_PLL_CAL_RING_CAL	   0x36
#define ST_PLL_PU			   0x37
#define ST_APTA_TXTRAIN        0x38        // APTA TX Training
*/

//#define ST_TXDCC_PDIV_CAL  	   0x39
#define ST_RX_PLL_CAL             0x3a
#define ST_TX_PLL_CAL             0x3b
#define ST_RX_CAL                 0x3c        // RX Calibration top
#define ST_TX_CAL                 0x3d        // TX Calibration top

#define ST_RX_SFT_RST             0x3e
#define ST_TX_SFT_RST             0x3f
#define ST_RX_PLLDCC_CAL          0x40
#define ST_TX_PLLDCC_CAL          0x41

#define ST_LD_SPDTBL              0x42
#define ST_LD_SPDTBL_RX           0x43
#define ST_LD_SPDTBL_TX           0x44

#define ST_PLL_RS_CAL             0x45
#define ST_PLL_TS_CAL             0x46

#define ST_RX_SFT_RST_OFF         0x47
#define ST_TX_SFT_RST_OFF         0x48
#define ST_SPDCHG_TX              0x49         // Speed Change
#define ST_SPDCHG_RX              0x4a         // Speed Change

//#define ST_LANE_MARGIN_EN         0x4b

#define ST_PSLUMBER_WK_TX         0x4c
#define ST_PSLUMBER_WK_RX         0x4d
#define ST_PSLUMBER_TX            0x4e         // Partial Slumber
#define ST_PSLUMBER_RX            0x4f         // Partial Slumber

#define ST_RX_PLL_VDDA_CAL        0x50
#define ST_TX_PLL_VDDA_CAL        0x51

#define ST_ADC_CAL                0x52
#define ST_ADC_CAL_CONT           0x53
#define ST_ADC_CMN_MODE_CAL       0x54
#define ST_ADC_VDDR_CAL           0x55

#define ST_TRX_SFT_RST            0x56
#define ST_TRX_SFT_RST_OFF        0x57


//  TRAIN STATE DEFINITION
#define TRAIN_START                 0x00

#define TRX_TRAIN_INIT_START        0x01
#define TRX_TRAIN_INIT_END          0x02
#define TRX_SAT_CHECK_START         0x03
#define TRX_SAT_CHECK_END           0x04
#define TX_MOD_SET_START            0x05
#define TX_MOD_SET_END              0x06
#define RX_BLIND_START              0x07
#define RX_BLIND_END                0x08
#define CDS_DEFAULT_START           0x09
#define CDS_DEFAULT_END             0x0a
#define ADC_CAL_START               0x0b
#define ADC_CAL_END                 0x0c
#define TRX_TXFFE_DET_PRESET_START  0x0d
#define TRX_TXFFE_DET_PRESET_END    0x0e
#define TRX_TXFFE_SET_PRESET_START  0x0f
#define TRX_TXFFE_SET_PRESET_END    0x10
#define TXFFE_SHAPE_BASE_START      0x11
#define TXFFE_SHAPE_BASE_END        0x12        
#define TRX_OPT_START               0x13
#define TRX_OPT_END                 0x14
#define TRX_OPT_FINE_START          0x15
#define TRX_OPT_FINE_END            0x16
#define TXFFE_GRADIENT_BASE_START   0x17
#define TXFFE_GRADIENT_BASE_END     0x18
#define CTLE_GRID_SEARCH_START      0x19
#define CTLE_GRID_SEARCH_END        0x1a
#define TRX_TUNE_START              0x1b
#define TRX_TUNE_END                0x1c
#define TRX_PREPARE_EXIT_START      0x1d
#define TRX_PREPARE_EXIT_END        0x1e
#define RX_CTLE_TUNE_START          0x20 
#define RX_CTLE_TUNE_END            0x21

#define TRAIN_END                   0xff