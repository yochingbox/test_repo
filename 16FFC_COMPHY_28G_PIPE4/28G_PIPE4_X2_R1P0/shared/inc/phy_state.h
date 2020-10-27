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
#define ST_DLL_COMP_CAL        0x9
#define ST_DLL_GM_CAL          0x0a
#define ST_DLL_VDDA_CAL        0x0b
#define ST_DLL_EOM_GM_CAL      0x0c
#define ST_DLL_EOM_VDDA_CAL    0x0d
#define ST_RXDCC_DATA_CAL      0x0e
#define ST_RXALIGN90_CAL       0x0f
#define ST_RXALIGN90CMP_CAL    0x10
#define ST_RXDCC_EOM_CAL       0x11
#define ST_EOM_ALIGN_CAL       0x12
#define ST_SAMPLER_CAL         0x13
#define ST_SQ_CAL              0x14
#define ST_TXDCC_CAL           0x15
#define ST_TXDETECT_CAL        0x16
#define ST_RXIMP_CAL           0x17
#define ST_TXIMP_CAL           0x18
#define ST_SPDCHG              0x19         // Speed Change
#define ST_SLUMBER             0x1a         // Slumber
#define ST_P2_WK	           0x1b			// Slumber Wake Up
#define ST_PSLUMBER_TX         0x1c         // Partial Slumber TX
#define ST_PSLUMBER_RX         0x1d         // Partial Slumber RX
#define ST_P2_BEACON	       0x1e
#define ST_TXDETRX		       0x1f
#define ST_P2_TXDETRX          0x20
#define ST_P2			       0x21
#define ST_P1			       0x22
#define ST_P1_WK		       0x23
#define ST_P1OFF_WK		       0x24	
#define ST_P1SNOOZE_WK	       0x25	
#define ST_P1CLKREQ_WK	       0x26		
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
#define ST_PLLTEMP_CAL		   0x31
#define ST_P2_P0               0x32
#define ST_P1_TXDETRX          0x33
#define ST_RXALIGN90_TRACK	   0x34	
#define ST_PLLAMP_CAL_CONT	   0x35
#define ST_PLL_CAL_RING_CAL	   0x36
#define ST_PLL_PU			   0x37
#define ST_APTA_TXTRAIN        0x38        // APTA TX Training
#define ST_TXDCC_PDIV_CAL  	   0x39       
#define ST_RING_PLL_CONT       0x3a       
#define ST_LANE_MARGIN_EN      0x3b       
     

