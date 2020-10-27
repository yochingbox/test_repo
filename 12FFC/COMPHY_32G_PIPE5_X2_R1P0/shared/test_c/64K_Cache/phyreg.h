#ifndef PHY_REG_8051_H
#define PHY_REG_8051_H


#define ANA_TRX_LANE_BASE    	0x0000
#define ANA_DFEE_LANE_BASE   	0x0200
#define ANA_DFEO_LANE_BASE   	0x0300
#define TX_LANE_BASE         	0x2000
#define RX_LANE_BASE         	0x2100
#define MCU_LANE_BASE        	0x2200
#define PHYTEST_LANE_BASE    	0x2300
#define RX_EQ_LANE_BASE      	0x2400
#define TX_TRAIN_IF_LANE_BASE	0x2600
#define PIPE_LANE_BASE       	0x4000
#define XDAT_LANE_BASE       	0x6000
#define ANA_CMN_BASE         	0x8000
#define TX_CMN_BASE          	0xA000
#define RX_CMN_BASE          	0xA100
#define MCU_CMN_BASE         	0xA200
#define CMN_CMN_BASE         	0xA300
#define PIPE_CMN_BASE        	0xC000
#define XDAT_CMN_BASE        	0xE000


// 0x0010	MCU_DEBUG1_LANE		
typedef union {
	struct {
		uint8_t MCU_DEBUG0_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG1_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUG2_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUG3_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG1_LANE_t;
__xdata __at(MCU_LANE_BASE + 0x10) volatile MCU_DEBUG1_LANE_t MCU_DEBUG1_LANE;
#define reg_MCU_DEBUG0_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG0_LANE_7_0
#define reg_MCU_DEBUG1_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG1_LANE_7_0
#define reg_MCU_DEBUG2_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG2_LANE_7_0
#define reg_MCU_DEBUG3_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG3_LANE_7_0

// 0x0014	MCU_DEBUG2_LANE		
typedef union {
	struct {
		uint8_t MCU_DEBUG4_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG5_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUG6_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUG7_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG2_LANE_t;
__xdata __at(MCU_LANE_BASE + 0x14) volatile MCU_DEBUG2_LANE_t MCU_DEBUG2_LANE;
#define reg_MCU_DEBUG4_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUG4_LANE_7_0
#define reg_MCU_DEBUG5_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUG5_LANE_7_0
#define reg_MCU_DEBUG6_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUG6_LANE_7_0
#define reg_MCU_DEBUG7_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUG7_LANE_7_0


#if 0

// 0xc000	CID_REG0		Chip ID
typedef union {
	struct {
		uint8_t CID1_3_0                                 : 4;	/*  [3:0]       r   0*/
		uint8_t CID1_7_4                                 : 4;	/*  [7:4]       r   0*/
		uint8_t CID0_3_0                                 : 4;	/* [11:8]       r   0*/
		uint8_t CID0_7_4                                 : 4;	/*[15:12]       r   0*/
		uint8_t ICID1_7_0                                : 8;	/*[23:16]       r   0*/
		uint8_t ICID0_3_0                                : 4;	/*[27:24]       r   0*/
		uint8_t ICID0_7_4                                : 4;	/*[31:28]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CID_REG0_t;
__xdata __at(PHY_REG_BASE + 0xc000) volatile CID_REG0_t CID_REG0;
#define reg_CID1_3_0  CID_REG0.BF.CID1_3_0
#define reg_CID1_7_4  CID_REG0.BF.CID1_7_4
#define reg_CID0_3_0  CID_REG0.BF.CID0_3_0
#define reg_CID0_7_4  CID_REG0.BF.CID0_7_4
#define reg_ICID1_7_0  CID_REG0.BF.ICID1_7_0
#define reg_ICID0_3_0  CID_REG0.BF.ICID0_3_0
#define reg_ICID0_7_4  CID_REG0.BF.ICID0_7_4

// 0xc004	CID_REG1		Internal CID register 0
typedef union {
	struct {
		uint8_t DIG_ID_7_0                               : 8;	/*  [7:0]       r   0*/
		uint8_t ICID2_1_0                                : 2;	/*  [9:8]       r   0*/
		uint8_t ICID2_3_2                                : 2;	/*[11:10]       r   0*/
		uint8_t ICID2_5_4                                : 2;	/*[13:12]       r   0*/
		uint8_t ICID2_7_6                                : 2;	/*[15:14]       r   0*/
		uint8_t ANA_ID_15_0_b0                           : 8;	/*[31:16]       r   0*/
		uint8_t ANA_ID_15_0_b1                           : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CID_REG1_t;
__xdata __at(PHY_REG_BASE + 0xc004) volatile CID_REG1_t CID_REG1;
#define reg_DIG_ID_7_0  CID_REG1.BF.DIG_ID_7_0
#define reg_ICID2_1_0  CID_REG1.BF.ICID2_1_0
#define reg_ICID2_3_2  CID_REG1.BF.ICID2_3_2
#define reg_ICID2_5_4  CID_REG1.BF.ICID2_5_4
#define reg_ICID2_7_6  CID_REG1.BF.ICID2_7_6
#define reg_ANA_ID_15_0_b0  CID_REG1.BF.ANA_ID_15_0_b0
#define reg_ANA_ID_15_0_b1  CID_REG1.BF.ANA_ID_15_0_b1

// 0xc008	POWER_REG0		Power and PLL Control Register
typedef union {
	struct {
		uint8_t REF_FREF_SEL_4_0                         : 8;	/*  [4:0]     r/w 5'h3*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t PHY_MODE_2_0                             : 8;	/* [10:8]     r/w 3'h0*/
		//uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PU_RX_INTP_C                             : 1;	/*     16     r/w   1*/
		uint8_t PU_TX_INTP                               : 1;	/*     17     r/w   1*/
		uint8_t PU_TX                                    : 1;	/*     18     r/w   1*/
		uint8_t PU_RX                                    : 1;	/*     19     r/w   1*/
		uint8_t PU_PLL                                   : 1;	/*     20     r/w   1*/
		uint8_t PU_IVREF                                 : 1;	/*     21     r/w   1*/
		uint8_t RESET_DFE_SEQ                            : 1;	/*     22     r/w   0*/
		uint8_t SET_DFE_DONE                             : 1;	/*     23     r/w   0*/
		uint8_t ANA_CLK_DET_EN                           : 1;	/*     24     r/w   1*/
		uint8_t SFT_RST                                  : 1;	/*     25     r/w   0*/
		uint8_t SFT_RST_NO_REG                           : 1;	/*     26     r/w   0*/
		uint8_t REFCLK_DIS                               : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t PLL_LOCK                                 : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} POWER_REG0_t;
__xdata __at(PHY_REG_BASE + 0xc008) volatile  POWER_REG0_t POWER_REG0;
#define reg_REF_FREF_SEL_4_0  POWER_REG0.BF.REF_FREF_SEL_4_0
#define reg_PHY_MODE_2_0  POWER_REG0.BF.PHY_MODE_2_0
#define reg_PU_RX_INTP_C  POWER_REG0.BF.PU_RX_INTP_C
#define reg_PU_TX_INTP  POWER_REG0.BF.PU_TX_INTP
#define reg_PU_TX  POWER_REG0.BF.PU_TX
#define reg_PU_RX  POWER_REG0.BF.PU_RX
#define reg_PU_PLL  POWER_REG0.BF.PU_PLL
#define reg_PU_IVREF  POWER_REG0.BF.PU_IVREF
#define reg_RESET_DFE_SEQ  POWER_REG0.BF.RESET_DFE_SEQ
#define reg_SET_DFE_DONE  POWER_REG0.BF.SET_DFE_DONE
#define reg_ANA_CLK_DET_EN  POWER_REG0.BF.ANA_CLK_DET_EN
#define reg_SFT_RST  POWER_REG0.BF.SFT_RST
#define reg_SFT_RST_NO_REG  POWER_REG0.BF.SFT_RST_NO_REG
#define reg_REFCLK_DIS  POWER_REG0.BF.REFCLK_DIS
#define reg_PLL_LOCK  POWER_REG0.BF.PLL_LOCK

// 0xc00c	REG_PLL_CAL_0		PLL calibration 0
typedef union {
	struct {
		uint8_t VSET_SLLP_DAC_6_0                        : 8;	/*  [6:0]     r/w 7'h0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SPEED_PLL_5_0                            : 8;	/* [13:8]     r/w 6'h0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t FBRES_ADJ_3_0                            : 8;	/*[19:16]     r/w 4'h0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t PLL_CALI_EN                              : 1;	/*     24     r/w   0*/
		uint8_t VDDVCO_CAL                               : 1;	/*     25     r/w   0*/
		uint8_t LD_SLLP_DAC                              : 1;	/*     26     r/w   0*/
		uint8_t SHRTR                                    : 1;	/*     27     r/w   0*/
		uint8_t PULUP                                    : 1;	/*     28     r/w   0*/
		uint8_t SLLP_EN_DIS                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_PLL_CAL_0_t;
__xdata __at(PHY_REG_BASE + 0xc00c) volatile REG_PLL_CAL_0_t REG_PLL_CAL_0;
#define reg_VSET_SLLP_DAC_6_0  REG_PLL_CAL_0.BF.VSET_SLLP_DAC_6_0
#define reg_SPEED_PLL_5_0  REG_PLL_CAL_0.BF.SPEED_PLL_5_0
#define reg_FBRES_ADJ_3_0  REG_PLL_CAL_0.BF.FBRES_ADJ_3_0
#define reg_PLL_CALI_EN  REG_PLL_CAL_0.BF.PLL_CALI_EN
#define reg_VDDVCO_CAL  REG_PLL_CAL_0.BF.VDDVCO_CAL
#define reg_LD_SLLP_DAC  REG_PLL_CAL_0.BF.LD_SLLP_DAC
#define reg_SHRTR  REG_PLL_CAL_0.BF.SHRTR
#define reg_PULUP  REG_PLL_CAL_0.BF.PULUP
#define reg_SLLP_EN_DIS  REG_PLL_CAL_0.BF.SLLP_EN_DIS

// 0xc010	REG_PLL_CAL_1		PLL calibration 1
typedef union {
	struct {
		uint8_t FBDIV_8_0_b0                             : 8;//1;	/* [15:7]     r/w 9'h4a*/
		uint8_t FBDIV_8_0_b1                             : 8;	/* [15:7]     r/w 9'h4a*/
		uint8_t FBDIV_CAL_8_0_b0                         : 8;//1;	/*[31:23]     r/w 9'h20*/
		uint8_t FBDIV_CAL_8_0_b1                         : 8;	/*[31:23]     r/w 9'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_PLL_CAL_1_t;
__xdata __at(PHY_REG_BASE + 0xc010) volatile REG_PLL_CAL_1_t REG_PLL_CAL_1;
#define reg_FBDIV_8_0_b0  REG_PLL_CAL_1.BF.FBDIV_8_0_b0
#define reg_FBDIV_8_0_b1  REG_PLL_CAL_1.BF.FBDIV_8_0_b1
#define reg_FBDIV_CAL_8_0_b0  REG_PLL_CAL_1.BF.FBDIV_CAL_8_0_b0
#define reg_FBDIV_CAL_8_0_b1  REG_PLL_CAL_1.BF.FBDIV_CAL_8_0_b1

// 0xc014	REG_PLL_CAL_2		PLL calibration 2
typedef union {
	struct {
		uint8_t FBC_CNT_TIMER_15_0_b0                    : 8;	/* [15:0]     r/w 16'h13*/
		uint8_t FBC_CNT_TIMER_15_0_b1                    : 8;	/* [15:0]     r/w 16'h13*/
		uint8_t FBC_CNT_SELECT                           : 1;	/*     16     r/w   0*/
		uint8_t FBC_CNT_START                            : 1;	/*     17     r/w   0*/
		uint8_t FBC_PLLCAL_CNT_READY                     : 1;	/*     18       r   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t FBDIV_SEL                                : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_PLL_CAL_2_t;
__xdata __at(PHY_REG_BASE + 0xc014) volatile REG_PLL_CAL_2_t REG_PLL_CAL_2;
#define reg_FBC_CNT_TIMER_15_0_b0  REG_PLL_CAL_2.BF.FBC_CNT_TIMER_15_0_b0
#define reg_FBC_CNT_TIMER_15_0_b1  REG_PLL_CAL_2.BF.FBC_CNT_TIMER_15_0_b1
#define reg_FBC_CNT_SELECT  REG_PLL_CAL_2.BF.FBC_CNT_SELECT
#define reg_FBC_CNT_START  REG_PLL_CAL_2.BF.FBC_CNT_START
#define reg_FBC_PLLCAL_CNT_READY  REG_PLL_CAL_2.BF.FBC_PLLCAL_CNT_READY
#define reg_FBDIV_SEL  REG_PLL_CAL_2.BF.FBDIV_SEL

// 0xc018	REG_PLL_CAL_3		PLL calibration 3
typedef union {
	struct {
		uint8_t FBC_PLLCAL_CNT_RD_15_0_b0                : 8;	/* [15:0]       r   0*/
		uint8_t FBC_PLLCAL_CNT_RD_15_0_b1                : 8;	/* [15:0]       r   0*/
		uint8_t PLL_SPEED_THRESH_7_0                     : 8;	/*[23:16]     r/w 8'h7d*/
		uint8_t PLL_SPEED_THRESH_1_7_0                   : 8;	/*[31:24]     r/w 8'h7d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_PLL_CAL_3_t;
__xdata __at(PHY_REG_BASE + 0xc018) volatile REG_PLL_CAL_3_t REG_PLL_CAL_3;
#define reg_FBC_PLLCAL_CNT_RD_15_0_b0  REG_PLL_CAL_3.BF.FBC_PLLCAL_CNT_RD_15_0_b0
#define reg_FBC_PLLCAL_CNT_RD_15_0_b1  REG_PLL_CAL_3.BF.FBC_PLLCAL_CNT_RD_15_0_b1
#define reg_PLL_SPEED_THRESH_7_0  REG_PLL_CAL_3.BF.PLL_SPEED_THRESH_7_0
#define reg_PLL_SPEED_THRESH_1_7_0  REG_PLL_CAL_3.BF.PLL_SPEED_THRESH_1_7_0

// 0xc01c	REG_RXDCC		RX DCC calibration
typedef union {
	struct {
		uint8_t CAL_OS_PH_6_0                            : 8;	/*  [6:0]     r/w 7'h60*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RXDCC_E_5_0                              : 8;	/* [13:8]     r/w 6'h20*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RXDCC_C_5_0                              : 8;	/*[21:16]     r/w 6'h20*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RXDCCIN_SEL_1_0                          : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RXDCC_EN                                 : 1;	/*     26     r/w   0*/
		uint8_t RXDCCCAL_EN                              : 1;	/*     27     r/w   0*/
		uint8_t RXDCC_HG                                 : 1;	/*     28     r/w   0*/
		uint8_t RXCLKALIGN90_EN                          : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_RXDCC_t;
__xdata __at(PHY_REG_BASE + 0xc01c) volatile REG_RXDCC_t REG_RXDCC;
#define reg_CAL_OS_PH_6_0  REG_RXDCC.BF.CAL_OS_PH_6_0
#define reg_RXDCC_E_5_0  REG_RXDCC.BF.RXDCC_E_5_0
#define reg_RXDCC_C_5_0  REG_RXDCC.BF.RXDCC_C_5_0
#define reg_RXDCCIN_SEL_1_0  REG_RXDCC.BF.RXDCCIN_SEL_1_0
#define reg_RXDCC_EN  REG_RXDCC.BF.RXDCC_EN
#define reg_RXDCCCAL_EN  REG_RXDCC.BF.RXDCCCAL_EN
#define reg_RXDCC_HG  REG_RXDCC.BF.RXDCC_HG
#define reg_RXCLKALIGN90_EN  REG_RXDCC.BF.RXCLKALIGN90_EN

// 0xc020	REG_TXDCC		TX DCC calibration
typedef union {
	struct {
		uint8_t TXDCC_CNT_5_0                            : 8;	/*  [5:0]     r/w 6'h20*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TXDCC_EN                                 : 1;	/*      8     r/w   0*/
		uint8_t TXDCCCAL_EN                              : 1;	/*      9     r/w   0*/
		uint8_t TXDCC_HG                                 : 1;	/*     10     r/w   0*/
		uint8_t TXDCC_FB_POINT_SEL                       : 1;	/*     11     r/w   1*/
		uint8_t TX_DRV_IDLE_CAL_DIS                      : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_SPEED_DIV_FORCE_FM_CAL                : 1;	/*     16     r/w   0*/
		uint8_t TX_SPEED_DIV_FORCE_FM_CAL                : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t F1_BUF_OS_C_SHIFT_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_TXDCC_t;
__xdata __at(PHY_REG_BASE + 0xc020) volatile REG_TXDCC_t REG_TXDCC;
#define reg_TXDCC_CNT_5_0  REG_TXDCC.BF.TXDCC_CNT_5_0
#define reg_TXDCC_EN  REG_TXDCC.BF.TXDCC_EN
#define reg_TXDCCCAL_EN  REG_TXDCC.BF.TXDCCCAL_EN
#define reg_TXDCC_HG  REG_TXDCC.BF.TXDCC_HG
#define reg_TXDCC_FB_POINT_SEL  REG_TXDCC.BF.TXDCC_FB_POINT_SEL
#define reg_TX_DRV_IDLE_CAL_DIS  REG_TXDCC.BF.TX_DRV_IDLE_CAL_DIS
#define reg_RX_SPEED_DIV_FORCE_FM_CAL  REG_TXDCC.BF.RX_SPEED_DIV_FORCE_FM_CAL
#define reg_TX_SPEED_DIV_FORCE_FM_CAL  REG_TXDCC.BF.TX_SPEED_DIV_FORCE_FM_CAL
#define reg_F1_BUF_OS_C_SHIFT_4_0  REG_TXDCC.BF.F1_BUF_OS_C_SHIFT_4_0

// 0xc024	REG_SAM_CAL		sampler calibration
typedef union {
	struct {
		uint8_t SAMPLER_OS_6_0                           : 8;	/*  [6:0]     r/w 7'h0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SAMPLER_SEL_2_0                          : 8;	/* [10:8]     r/w 3'h0*/
		//uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SMPLR_INPAIRX2_EN                        : 1;	/*     16     r/w   0*/
		uint8_t SAMPLER_CALI_EN                          : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_SAMPLER_OS_GAIN_1_0                   : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_SAM_CAL_t;
__xdata __at(PHY_REG_BASE + 0xc024) volatile REG_SAM_CAL_t REG_SAM_CAL;
#define reg_SAMPLER_OS_6_0  REG_SAM_CAL.BF.SAMPLER_OS_6_0
#define reg_SAMPLER_SEL_2_0  REG_SAM_CAL.BF.SAMPLER_SEL_2_0
#define reg_SMPLR_INPAIRX2_EN  REG_SAM_CAL.BF.SMPLR_INPAIRX2_EN
#define reg_SAMPLER_CALI_EN  REG_SAM_CAL.BF.SAMPLER_CALI_EN
#define reg_RX_SAMPLER_OS_GAIN_1_0  REG_SAM_CAL.BF.RX_SAMPLER_OS_GAIN_1_0

// 0xc028	REG_F1_CAL		f1_buf_os_cal
typedef union {
	struct {
		uint8_t F1_BUF_OS_S_4_0                          : 8;	/*  [4:0]     r/w 5'h0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F1_BUF_OS_C_CAL_4_0                      : 8;	/* [12:8]     r/w 5'h0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t F1_BUF_CAL_EN_C                          : 1;	/*     16     r/w   0*/
		uint8_t F1_BUF_CAL_EN_S                          : 1;	/*     17     r/w   0*/
		uint8_t ALIGN_EOM_FULL_RANGE                     : 1;	/*     18     r/w   0*/
		uint8_t CAL_EOM_PH_VALID                         : 1;	/*     19     r/w   0*/
		uint8_t RXCLKALIGNSCK_EN                         : 1;	/*     20     r/w   0*/
		uint8_t F1_BUF_OS_ADJ_EN                         : 1;	/*     21     r/w   0*/
		uint8_t F1_BUF_OS_ADJ_FREEZE                     : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CAL_EOM_PH_OFFSET_6_0                    : 8;	/*[30:24]     r/w 7'h60*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_F1_CAL_t;
volatile REG_F1_CAL_t __xdata __at(PHY_REG_BASE + 0xc028) REG_F1_CAL;
#define reg_F1_BUF_OS_S_4_0  REG_F1_CAL.BF.F1_BUF_OS_S_4_0
#define reg_F1_BUF_OS_C_CAL_4_0  REG_F1_CAL.BF.F1_BUF_OS_C_CAL_4_0
#define reg_F1_BUF_CAL_EN_C  REG_F1_CAL.BF.F1_BUF_CAL_EN_C
#define reg_F1_BUF_CAL_EN_S  REG_F1_CAL.BF.F1_BUF_CAL_EN_S
#define reg_ALIGN_EOM_FULL_RANGE  REG_F1_CAL.BF.ALIGN_EOM_FULL_RANGE
#define reg_CAL_EOM_PH_VALID  REG_F1_CAL.BF.CAL_EOM_PH_VALID
#define reg_RXCLKALIGNSCK_EN  REG_F1_CAL.BF.RXCLKALIGNSCK_EN
#define reg_F1_BUF_OS_ADJ_EN  REG_F1_CAL.BF.F1_BUF_OS_ADJ_EN
#define reg_F1_BUF_OS_ADJ_FREEZE  REG_F1_CAL.BF.F1_BUF_OS_ADJ_FREEZE
#define reg_CAL_EOM_PH_OFFSET_6_0  REG_F1_CAL.BF.CAL_EOM_PH_OFFSET_6_0

// 0xc02c	F1_BUF_OS_ADJ_REG0		F1_BUF_OS adjust register 0
typedef union {
	struct {
		uint8_t F1_BUF_OS_16_6_0                         : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F1_BUF_OS_12_6_0                         : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t F1_BUF_OS_8_6_0                          : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t F1_BUF_OS_4_6_0                          : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} F1_BUF_OS_ADJ_REG0_t;
volatile F1_BUF_OS_ADJ_REG0_t __xdata __at(PHY_REG_BASE + 0xc02c) F1_BUF_OS_ADJ_REG0;
#define reg_F1_BUF_OS_16_6_0  F1_BUF_OS_ADJ_REG0.BF.F1_BUF_OS_16_6_0
#define reg_F1_BUF_OS_12_6_0  F1_BUF_OS_ADJ_REG0.BF.F1_BUF_OS_12_6_0
#define reg_F1_BUF_OS_8_6_0  F1_BUF_OS_ADJ_REG0.BF.F1_BUF_OS_8_6_0
#define reg_F1_BUF_OS_4_6_0  F1_BUF_OS_ADJ_REG0.BF.F1_BUF_OS_4_6_0

// 0xc030	F1_BUF_OS_ADJ_REG1		F1_BUF_OS adjust register 1
typedef union {
	struct {
		uint8_t F1_BUF_OS_32_6_0                         : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F1_BUF_OS_28_6_0                         : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t F1_BUF_OS_24_6_0                         : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t F1_BUF_OS_20_6_0                         : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} F1_BUF_OS_ADJ_REG1_t;
volatile F1_BUF_OS_ADJ_REG1_t __xdata __at(PHY_REG_BASE + 0xc030) F1_BUF_OS_ADJ_REG1;
#define reg_F1_BUF_OS_32_6_0  F1_BUF_OS_ADJ_REG1.BF.F1_BUF_OS_32_6_0
#define reg_F1_BUF_OS_28_6_0  F1_BUF_OS_ADJ_REG1.BF.F1_BUF_OS_28_6_0
#define reg_F1_BUF_OS_24_6_0  F1_BUF_OS_ADJ_REG1.BF.F1_BUF_OS_24_6_0
#define reg_F1_BUF_OS_20_6_0  F1_BUF_OS_ADJ_REG1.BF.F1_BUF_OS_20_6_0

// 0xc034	REG_SQ_CAL		SQ calibration
typedef union {
	struct {
		uint8_t SQ_THRESH_5_0                            : 8;	/*  [5:0]     r/w 6'h8*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SQ_PKIN_4_0                              : 8;	/* [12:8]     r/w 5'h0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SQ_PKCM_CAL_4_0                          : 8;	/*[20:16]     r/w 5'h0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SQ_CMPTH_CAL_5_0                         : 8;	/*[29:24]     r/w 6'h0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_SQ_CAL_t;
volatile REG_SQ_CAL_t __xdata __at(PHY_REG_BASE + 0xc034) REG_SQ_CAL;
#define reg_SQ_THRESH_5_0  REG_SQ_CAL.BF.SQ_THRESH_5_0
#define reg_SQ_PKIN_4_0  REG_SQ_CAL.BF.SQ_PKIN_4_0
#define reg_SQ_PKCM_CAL_4_0  REG_SQ_CAL.BF.SQ_PKCM_CAL_4_0
#define reg_SQ_CMPTH_CAL_5_0  REG_SQ_CAL.BF.SQ_CMPTH_CAL_5_0

// 0xc038	REG_IMP_CAL		imp calibration
typedef union {
	struct {
		uint8_t TX_IMPCAL_4_0                            : 8;	/*  [4:0]     r/w 5'h10*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_IMP_4_0                               : 8;	/* [12:8]     r/w 5'h10*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t VTHIMPCAL_3_0                            : 8;	/*[19:16]     r/w 4'h9*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RCAL_2ND_EN                              : 1;	/*     24     r/w   0*/
		uint8_t TX_IMPCAL_EN                             : 1;	/*     25     r/w   0*/
		uint8_t RX_IMPCAL_EN                             : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_IMP_CAL_t;
volatile REG_IMP_CAL_t __xdata __at(PHY_REG_BASE + 0xc038) REG_IMP_CAL;
#define reg_TX_IMPCAL_4_0  REG_IMP_CAL.BF.TX_IMPCAL_4_0
#define reg_RX_IMP_4_0  REG_IMP_CAL.BF.RX_IMP_4_0
#define reg_VTHIMPCAL_3_0  REG_IMP_CAL.BF.VTHIMPCAL_3_0
#define reg_RCAL_2ND_EN  REG_IMP_CAL.BF.RCAL_2ND_EN
#define reg_TX_IMPCAL_EN  REG_IMP_CAL.BF.TX_IMPCAL_EN
#define reg_RX_IMPCAL_EN  REG_IMP_CAL.BF.RX_IMPCAL_EN

// 0xc03c	REG_PROC_CAL		process calibration
typedef union {
	struct {
		uint8_t PROCESS_VALUE_3_0                        : 8;	/*  [3:0]     r/w 4'h8*/
		//uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t PROCESSMON_SWITCH                        : 8;	/*      8     r/w   0*/
		//uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		//uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		//uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SQ_CAL_EN_2_0                            : 8;	/*[18:16]     r/w 3'h0*/
		//uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SQ_CAL_PU                                : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_PROC_CAL_t;
volatile REG_PROC_CAL_t __xdata __at(PHY_REG_BASE + 0xc03c) REG_PROC_CAL;
#define reg_PROCESS_VALUE_3_0  REG_PROC_CAL.BF.PROCESS_VALUE_3_0
#define reg_PROCESSMON_SWITCH  REG_PROC_CAL.BF.PROCESSMON_SWITCH
#define reg_SQ_CAL_EN_2_0  REG_PROC_CAL.BF.SQ_CAL_EN_2_0
#define reg_SQ_CAL_PU  REG_PROC_CAL.BF.SQ_CAL_PU

// 0xc040	REG_VDDCAL0		VDD calibration 0
typedef union {
	struct {
		uint8_t SELLV_TXINTP_4_0                         : 8;	/*  [4:0]     r/w 5'h0f*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SELLV_TXDATA_4_0                         : 8;	/* [12:8]     r/w 5'h0f*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SELLV_TXCLK_4_0                          : 8;	/*[20:16]     r/w 5'h0f*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CALEN_VDD_RXSAMPL                        : 1;	/*     24     r/w   0*/
		uint8_t CALEN_VDD_RXINTP                         : 1;	/*     25     r/w   0*/
		uint8_t CALEN_VDD_RXDIG                          : 1;	/*     26     r/w   0*/
		uint8_t CALEN_VDD_TXDRV                          : 1;	/*     27     r/w   0*/
		uint8_t CALEN_VDD_TXINTP                         : 1;	/*     28     r/w   0*/
		uint8_t CALEN_VDD_TXDATA                         : 1;	/*     29     r/w   0*/
		uint8_t CALEN_VDD_TXCLK                          : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_VDDCAL0_t;
volatile REG_VDDCAL0_t __xdata __at(PHY_REG_BASE + 0xc040) REG_VDDCAL0;
#define reg_SELLV_TXINTP_4_0  REG_VDDCAL0.BF.SELLV_TXINTP_4_0
#define reg_SELLV_TXDATA_4_0  REG_VDDCAL0.BF.SELLV_TXDATA_4_0
#define reg_SELLV_TXCLK_4_0  REG_VDDCAL0.BF.SELLV_TXCLK_4_0
#define reg_CALEN_VDD_RXSAMPL  REG_VDDCAL0.BF.CALEN_VDD_RXSAMPL
#define reg_CALEN_VDD_RXINTP  REG_VDDCAL0.BF.CALEN_VDD_RXINTP
#define reg_CALEN_VDD_RXDIG  REG_VDDCAL0.BF.CALEN_VDD_RXDIG
#define reg_CALEN_VDD_TXDRV  REG_VDDCAL0.BF.CALEN_VDD_TXDRV
#define reg_CALEN_VDD_TXINTP  REG_VDDCAL0.BF.CALEN_VDD_TXINTP
#define reg_CALEN_VDD_TXDATA  REG_VDDCAL0.BF.CALEN_VDD_TXDATA
#define reg_CALEN_VDD_TXCLK  REG_VDDCAL0.BF.CALEN_VDD_TXCLK

// 0xc044	REG_VDDCAL1		VDD calibration 1
typedef union {
	struct {
		uint8_t SELLV_RXSAMPL_4_0                        : 8;	/*  [4:0]     r/w 5'h0f*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SELLV_RXINTP_4_0                         : 8;	/* [12:8]     r/w 5'h0f*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SELLV_RXDIG_4_0                          : 8;	/*[20:16]     r/w 5'h0f*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SELLV_TXDRV_4_0                          : 8;	/*[28:24]     r/w 5'h0f*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_VDDCAL1_t;
volatile REG_VDDCAL1_t __xdata __at(PHY_REG_BASE + 0xc044) REG_VDDCAL1;
#define reg_SELLV_RXSAMPL_4_0  REG_VDDCAL1.BF.SELLV_RXSAMPL_4_0
#define reg_SELLV_RXINTP_4_0  REG_VDDCAL1.BF.SELLV_RXINTP_4_0
#define reg_SELLV_RXDIG_4_0  REG_VDDCAL1.BF.SELLV_RXDIG_4_0
#define reg_SELLV_TXDRV_4_0  REG_VDDCAL1.BF.SELLV_TXDRV_4_0

// 0xc048	REG_TXIDLECM		TX idlecm calibration
typedef union {
	struct {
		uint8_t TX_IDLECM_DIG_4_0                        : 5;	/*  [4:0]     r/w 5'h14*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_IDLECM_CAL_EXT_EN                     : 1;	/*     16     r/w   0*/
		uint8_t TX_IDLECM_CAL_EN                         : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t TXDETRX_VTH_RD_4_0                       : 5;	/*[23:19]       r   0*/
		uint8_t SEL_V2I_RD_4_0                           : 5;	/*[28:24]       r   0*/
		uint8_t SET_FM_ANA_TXDETRX_OUT                   : 1;	/*     29     r/w   0*/
		uint8_t TXDETRX_OUT_SRC_SEL                      : 1;	/*     30     r/w   0*/
		uint8_t TXDETRX_VTH_CAL_DIR_INV                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_TXIDLECM_t;
volatile REG_TXIDLECM_t __xdata __at(PHY_REG_BASE + 0xc048) REG_TXIDLECM;
#define reg_TX_IDLECM_DIG_4_0  REG_TXIDLECM.BF.TX_IDLECM_DIG_4_0
#define reg_TX_IDLECM_CAL_EXT_EN  REG_TXIDLECM.BF.TX_IDLECM_CAL_EXT_EN
#define reg_TX_IDLECM_CAL_EN  REG_TXIDLECM.BF.TX_IDLECM_CAL_EN
#define reg_TXDETRX_VTH_RD_4_0  REG_TXIDLECM.BF.TXDETRX_VTH_RD_4_0
#define reg_SEL_V2I_RD_4_0  REG_TXIDLECM.BF.SEL_V2I_RD_4_0
#define reg_SET_FM_ANA_TXDETRX_OUT  REG_TXIDLECM.BF.SET_FM_ANA_TXDETRX_OUT
#define reg_TXDETRX_OUT_SRC_SEL  REG_TXIDLECM.BF.TXDETRX_OUT_SRC_SEL
#define reg_TXDETRX_VTH_CAL_DIR_INV  REG_TXIDLECM.BF.TXDETRX_VTH_CAL_DIR_INV

// 0xc04c	ALIGN90_CAL_REG1		Align90 calibration / F1 Buffer Offset calibartion / VTHIMPCAL Value control register 1
typedef union {
	struct {
		uint8_t DTL_FLOOP_EN_IN_CAL                      : 1;	/*      0     r/w   1*/
		uint8_t DTL_FORCEUD_EN                           : 1;	/*      1     r/w   0*/
		uint8_t DTL_FORCEUD                              : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CAL_RESET_DISABLE                        : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t USE_MAX_PLL_RATE                         : 1;	/*     29     r/w   0*/
		uint8_t SSC_DSPREAD_RX                           : 1;	/*     30     r/w   1*/
		uint8_t SSC_DSPREAD_TX                           : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_REG1_t;
volatile ALIGN90_CAL_REG1_t __xdata __at(PHY_REG_BASE + 0xc04c) ALIGN90_CAL_REG1;
#define reg_DTL_FLOOP_EN_IN_CAL  ALIGN90_CAL_REG1.BF.DTL_FLOOP_EN_IN_CAL
#define reg_DTL_FORCEUD_EN  ALIGN90_CAL_REG1.BF.DTL_FORCEUD_EN
#define reg_DTL_FORCEUD  ALIGN90_CAL_REG1.BF.DTL_FORCEUD
#define reg_CAL_RESET_DISABLE  ALIGN90_CAL_REG1.BF.CAL_RESET_DISABLE
#define reg_USE_MAX_PLL_RATE  ALIGN90_CAL_REG1.BF.USE_MAX_PLL_RATE
#define reg_SSC_DSPREAD_RX  ALIGN90_CAL_REG1.BF.SSC_DSPREAD_RX
#define reg_SSC_DSPREAD_TX  ALIGN90_CAL_REG1.BF.SSC_DSPREAD_TX

// 0xc050	CAL_REG0		calibration control 0
typedef union {
	struct {
		uint8_t SET_TXDCC_CLK100KHZ                      : 1;	/*      0     r/w   0*/
		uint8_t SET_RXCLKALIGN90_CK100KHZ                : 1;	/*      1     r/w   0*/
		uint8_t SET_SAMPLER_CALI_CLK                     : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t FORCE_TXDCC_CLK100KHZ                    : 1;	/*      8     r/w   1*/
		uint8_t FORCE_RXCLKALIGN90_CK100KHZ              : 1;	/*      9     r/w   1*/
		uint8_t FORCE_SAMPLER_CALI_CLK                   : 1;	/*     10     r/w   1*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ANA_FBC_PLLCAL_STATUS                    : 1;	/*     16       r   0*/
		uint8_t RXCLKALIGN90_EARLYEDGE_STATUS            : 1;	/*     17       r   0*/
		uint8_t TXDCC_DN_STATUS                          : 1;	/*     18       r   0*/
		uint8_t VCO_OVERTH_STATUS                        : 1;	/*     19       r   0*/
		uint8_t TREED_PROCESSMON_FCLK_STATUS             : 1;	/*     20       r   0*/
		uint8_t IMP_BELOWTH_STATUS                       : 1;	/*     21       r   0*/
		uint8_t VOFF_POS_STATUS                          : 1;	/*     22       r   0*/
		uint8_t SQ_OUT_STATUS                            : 1;	/*     23       r   0*/
		uint8_t TX_IDLECM_UP_STATUS                      : 1;	/*     24       r   0*/
		uint8_t HIVDDR_STATUS                            : 1;	/*     25       r   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_REG0_t;
volatile CAL_REG0_t __xdata __at(PHY_REG_BASE + 0xc050) CAL_REG0;
#define reg_SET_TXDCC_CLK100KHZ  CAL_REG0.BF.SET_TXDCC_CLK100KHZ
#define reg_SET_RXCLKALIGN90_CK100KHZ  CAL_REG0.BF.SET_RXCLKALIGN90_CK100KHZ
#define reg_SET_SAMPLER_CALI_CLK  CAL_REG0.BF.SET_SAMPLER_CALI_CLK
#define reg_FORCE_TXDCC_CLK100KHZ  CAL_REG0.BF.FORCE_TXDCC_CLK100KHZ
#define reg_FORCE_RXCLKALIGN90_CK100KHZ  CAL_REG0.BF.FORCE_RXCLKALIGN90_CK100KHZ
#define reg_FORCE_SAMPLER_CALI_CLK  CAL_REG0.BF.FORCE_SAMPLER_CALI_CLK
#define reg_ANA_FBC_PLLCAL_STATUS  CAL_REG0.BF.ANA_FBC_PLLCAL_STATUS
#define reg_RXCLKALIGN90_EARLYEDGE_STATUS  CAL_REG0.BF.RXCLKALIGN90_EARLYEDGE_STATUS
#define reg_TXDCC_DN_STATUS  CAL_REG0.BF.TXDCC_DN_STATUS
#define reg_VCO_OVERTH_STATUS  CAL_REG0.BF.VCO_OVERTH_STATUS
#define reg_TREED_PROCESSMON_FCLK_STATUS  CAL_REG0.BF.TREED_PROCESSMON_FCLK_STATUS
#define reg_IMP_BELOWTH_STATUS  CAL_REG0.BF.IMP_BELOWTH_STATUS
#define reg_VOFF_POS_STATUS  CAL_REG0.BF.VOFF_POS_STATUS
#define reg_SQ_OUT_STATUS  CAL_REG0.BF.SQ_OUT_STATUS
#define reg_TX_IDLECM_UP_STATUS  CAL_REG0.BF.TX_IDLECM_UP_STATUS
#define reg_HIVDDR_STATUS  CAL_REG0.BF.HIVDDR_STATUS

// 0xc054	CAL_REG1		calibration control 1
typedef union {
	struct {
		uint8_t CAL_START                                : 1;	/*      0     r/w   0*/
		uint8_t CAL_ALIGN_EOM_ENABLE                     : 1;	/*      1     r/w   1*/
		uint8_t CAL_F1_BUF_OS_ENABLE                     : 1;	/*      2     r/w   1*/
		uint8_t CAL_VDD_ENABLE                           : 1;	/*      3     r/w   1*/
		uint8_t CAL_SQ_ENABLE                            : 1;	/*      4     r/w   1*/
		uint8_t CAL_RXIMP_ENABLE                         : 1;	/*      5     r/w   1*/
		uint8_t CAL_PROCESS_ENABLE                       : 1;	/*      6     r/w   1*/
		uint8_t CAL_SAMPLER_ENABLE                       : 1;	/*      7     r/w   1*/
		uint8_t CAL_RXCLKALIGN90_ENABLE                  : 1;	/*      8     r/w   1*/
		uint8_t CAL_RXDCC_CENTER_ENABLE                  : 1;	/*      9     r/w   1*/
		uint8_t CAL_RXDCC_EDGE_ENABLE                    : 1;	/*     10     r/w   1*/
		uint8_t CAL_TXDCC_ENABLE                         : 1;	/*     11     r/w   1*/
		uint8_t CAL_TXIMP_ENABLE                         : 1;	/*     12     r/w   1*/
		uint8_t CAL_PLL_ENABLE                           : 1;	/*     13     r/w   1*/
		uint8_t CAL_VDDVCO_ENABLE                        : 1;	/*     14     r/w   1*/
		uint8_t CAL_TX_IDLECM_ENABLE                     : 1;	/*     15     r/w   0*/
		uint8_t EXT_FORCE_CAL_DONE                       : 1;	/*     16     r/w   0*/
		uint8_t CAL_ALIGN_EOM_DONE                       : 1;	/*     17     r/w   0*/
		uint8_t CAL_F1_BUF_OS_C_DONE                     : 1;	/*     18     r/w   0*/
		uint8_t CAL_TXDETRX_VTH_DONE                     : 1;	/*     19     r/w   0*/
		uint8_t CAL_TX_IDLECM_DONE                       : 1;	/*     20     r/w   0*/
		uint8_t CAL_PROCESS_DONE                         : 1;	/*     21     r/w   0*/
		uint8_t CAL_RXCLKALIGN90_DONE                    : 1;	/*     22     r/w   0*/
		uint8_t CAL_RXDCC_CENTER_DONE                    : 1;	/*     23     r/w   0*/
		uint8_t CAL_RXDCC_EDGE_DONE                      : 1;	/*     24     r/w   0*/
		uint8_t CAL_SAMPLER_DONE                         : 1;	/*     25     r/w   0*/
		uint8_t CAL_TXDCC_DONE                           : 1;	/*     26     r/w   0*/
		uint8_t CAL_RX_IMP_DONE                          : 1;	/*     27     r/w   0*/
		uint8_t CAL_TX_IMP_DONE                          : 1;	/*     28     r/w   0*/
		uint8_t CAL_PLL_DONE                             : 1;	/*     29     r/w   0*/
		uint8_t CAL_SQ_DONE                              : 1;	/*     30     r/w   0*/
		uint8_t CAL_DONE                                 : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_REG1_t;
volatile CAL_REG1_t __xdata __at(PHY_REG_BASE + 0xc054) CAL_REG1;
#define reg_CAL_START  CAL_REG1.BF.CAL_START
#define reg_CAL_ALIGN_EOM_ENABLE  CAL_REG1.BF.CAL_ALIGN_EOM_ENABLE
#define reg_CAL_F1_BUF_OS_ENABLE  CAL_REG1.BF.CAL_F1_BUF_OS_ENABLE
#define reg_CAL_VDD_ENABLE  CAL_REG1.BF.CAL_VDD_ENABLE
#define reg_CAL_SQ_ENABLE  CAL_REG1.BF.CAL_SQ_ENABLE
#define reg_CAL_RXIMP_ENABLE  CAL_REG1.BF.CAL_RXIMP_ENABLE
#define reg_CAL_PROCESS_ENABLE  CAL_REG1.BF.CAL_PROCESS_ENABLE
#define reg_CAL_SAMPLER_ENABLE  CAL_REG1.BF.CAL_SAMPLER_ENABLE
#define reg_CAL_RXCLKALIGN90_ENABLE  CAL_REG1.BF.CAL_RXCLKALIGN90_ENABLE
#define reg_CAL_RXDCC_CENTER_ENABLE  CAL_REG1.BF.CAL_RXDCC_CENTER_ENABLE
#define reg_CAL_RXDCC_EDGE_ENABLE  CAL_REG1.BF.CAL_RXDCC_EDGE_ENABLE
#define reg_CAL_TXDCC_ENABLE  CAL_REG1.BF.CAL_TXDCC_ENABLE
#define reg_CAL_TXIMP_ENABLE  CAL_REG1.BF.CAL_TXIMP_ENABLE
#define reg_CAL_PLL_ENABLE  CAL_REG1.BF.CAL_PLL_ENABLE
#define reg_CAL_VDDVCO_ENABLE  CAL_REG1.BF.CAL_VDDVCO_ENABLE
#define reg_CAL_TX_IDLECM_ENABLE  CAL_REG1.BF.CAL_TX_IDLECM_ENABLE
#define reg_EXT_FORCE_CAL_DONE  CAL_REG1.BF.EXT_FORCE_CAL_DONE
#define reg_CAL_ALIGN_EOM_DONE  CAL_REG1.BF.CAL_ALIGN_EOM_DONE
#define reg_CAL_F1_BUF_OS_C_DONE  CAL_REG1.BF.CAL_F1_BUF_OS_C_DONE
#define reg_CAL_TXDETRX_VTH_DONE  CAL_REG1.BF.CAL_TXDETRX_VTH_DONE
#define reg_CAL_TX_IDLECM_DONE  CAL_REG1.BF.CAL_TX_IDLECM_DONE
#define reg_CAL_PROCESS_DONE  CAL_REG1.BF.CAL_PROCESS_DONE
#define reg_CAL_RXCLKALIGN90_DONE  CAL_REG1.BF.CAL_RXCLKALIGN90_DONE
#define reg_CAL_RXDCC_CENTER_DONE  CAL_REG1.BF.CAL_RXDCC_CENTER_DONE
#define reg_CAL_RXDCC_EDGE_DONE  CAL_REG1.BF.CAL_RXDCC_EDGE_DONE
#define reg_CAL_SAMPLER_DONE  CAL_REG1.BF.CAL_SAMPLER_DONE
#define reg_CAL_TXDCC_DONE  CAL_REG1.BF.CAL_TXDCC_DONE
#define reg_CAL_RX_IMP_DONE  CAL_REG1.BF.CAL_RX_IMP_DONE
#define reg_CAL_TX_IMP_DONE  CAL_REG1.BF.CAL_TX_IMP_DONE
#define reg_CAL_PLL_DONE  CAL_REG1.BF.CAL_PLL_DONE
#define reg_CAL_SQ_DONE  CAL_REG1.BF.CAL_SQ_DONE
#define reg_CAL_DONE  CAL_REG1.BF.CAL_DONE

// 0xc058	CAL_REG2		calibration control 2
typedef union {
	struct {
		uint8_t CAL_PASS                                 : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PWRON_PHY_CAL                            : 1;	/*     16     r/w   0*/
		uint8_t CAL_ALIGN_EOM_PASS                       : 1;	/*     17     r/w   0*/
		uint8_t CAL_F1_BUF_OS_C_PASS                     : 1;	/*     18     r/w   0*/
		uint8_t CAL_TXDETRX_VTH_PASS                     : 1;	/*     19     r/w   0*/
		uint8_t CAL_TX_IDLECM_PASS                       : 1;	/*     20     r/w   0*/
		uint8_t CAL_PROCESS_PASS                         : 1;	/*     21     r/w   0*/
		uint8_t CAL_RXCLKALIGN90_PASS                    : 1;	/*     22     r/w   0*/
		uint8_t CAL_RXDCC_CENTER_PASS                    : 1;	/*     23     r/w   0*/
		uint8_t CAL_RXDCC_EDGE_PASS                      : 1;	/*     24     r/w   0*/
		uint8_t CAL_SAMPLER_PASS                         : 1;	/*     25     r/w   0*/
		uint8_t CAL_TXDCC_PASS                           : 1;	/*     26     r/w   0*/
		uint8_t CAL_RX_IMP_PASS                          : 1;	/*     27     r/w   0*/
		uint8_t CAL_TX_IMP_PASS                          : 1;	/*     28     r/w   0*/
		uint8_t CAL_PLL_PASS                             : 1;	/*     29     r/w   0*/
		uint8_t CAL_SQ_PASS                              : 1;	/*     30     r/w   0*/
		uint8_t CAL_VDD_PASS                             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_REG2_t;
volatile CAL_REG2_t __xdata __at(PHY_REG_BASE + 0xc058) CAL_REG2;
#define reg_CAL_PASS  CAL_REG2.BF.CAL_PASS
#define reg_PWRON_PHY_CAL  CAL_REG2.BF.PWRON_PHY_CAL
#define reg_CAL_ALIGN_EOM_PASS  CAL_REG2.BF.CAL_ALIGN_EOM_PASS
#define reg_CAL_F1_BUF_OS_C_PASS  CAL_REG2.BF.CAL_F1_BUF_OS_C_PASS
#define reg_CAL_TXDETRX_VTH_PASS  CAL_REG2.BF.CAL_TXDETRX_VTH_PASS
#define reg_CAL_TX_IDLECM_PASS  CAL_REG2.BF.CAL_TX_IDLECM_PASS
#define reg_CAL_PROCESS_PASS  CAL_REG2.BF.CAL_PROCESS_PASS
#define reg_CAL_RXCLKALIGN90_PASS  CAL_REG2.BF.CAL_RXCLKALIGN90_PASS
#define reg_CAL_RXDCC_CENTER_PASS  CAL_REG2.BF.CAL_RXDCC_CENTER_PASS
#define reg_CAL_RXDCC_EDGE_PASS  CAL_REG2.BF.CAL_RXDCC_EDGE_PASS
#define reg_CAL_SAMPLER_PASS  CAL_REG2.BF.CAL_SAMPLER_PASS
#define reg_CAL_TXDCC_PASS  CAL_REG2.BF.CAL_TXDCC_PASS
#define reg_CAL_RX_IMP_PASS  CAL_REG2.BF.CAL_RX_IMP_PASS
#define reg_CAL_TX_IMP_PASS  CAL_REG2.BF.CAL_TX_IMP_PASS
#define reg_CAL_PLL_PASS  CAL_REG2.BF.CAL_PLL_PASS
#define reg_CAL_SQ_PASS  CAL_REG2.BF.CAL_SQ_PASS
#define reg_CAL_VDD_PASS  CAL_REG2.BF.CAL_VDD_PASS

// 0xc05c	TX_REG0		Transmitter Slew Rate Control / Transmitter Frequency Offset
typedef union {
	struct {
		uint8_t TX_FOFF_INV                              : 1;	/*      0     r/w   0*/
		uint8_t CONTROL_FROM_PIN                         : 1;	/*      1     r/w   0*/
		uint8_t CONTROL_FROM_PIN_PCIE                    : 1;	/*      2     r/w   0*/
		uint8_t SG_SATA_MODE                             : 1;	/*      3     r/w   0*/
		uint8_t SG_USB3_MODE                             : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH_RES_1_0                          : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t TXDRV_GM_SEL                             : 1;	/*     10     r/w   1*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SLC_HALF                                 : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SLC_EN_5_0                               : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG0_t;
volatile TX_REG0_t __xdata __at(PHY_REG_BASE + 0xc05c) TX_REG0;
#define reg_TX_FOFF_INV  TX_REG0.BF.TX_FOFF_INV
#define reg_CONTROL_FROM_PIN  TX_REG0.BF.CONTROL_FROM_PIN
#define reg_CONTROL_FROM_PIN_PCIE  TX_REG0.BF.CONTROL_FROM_PIN_PCIE
#define reg_SG_SATA_MODE  TX_REG0.BF.SG_SATA_MODE
#define reg_SG_USB3_MODE  TX_REG0.BF.SG_USB3_MODE
#define reg_TX_EMPH_RES_1_0  TX_REG0.BF.TX_EMPH_RES_1_0
#define reg_TXDRV_GM_SEL  TX_REG0.BF.TXDRV_GM_SEL
#define reg_SLC_HALF  TX_REG0.BF.SLC_HALF
#define reg_SLC_EN_5_0  TX_REG0.BF.SLC_EN_5_0

// 0xc060	TX_REG1		SSC Step / SSC Control
typedef union {
	struct {
		uint8_t TX_P2P_VMAX_5_0                          : 6;	/*  [5:0]     r/w 6'h1c*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_POWER_MAX_5_0                         : 6;	/* [13:8]     r/w 6'h1c*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_VMA_PROTECT_EN                        : 1;	/*     16     r/w   1*/
		uint8_t TX_VMA_MIN_3_0                           : 4;	/*[20:17]     r/w 4'h4*/
		uint8_t SSC_EN_FROM_PIN                          : 1;	/*     21     r/w   1*/
		uint8_t AUTO_TX_FOFFSET                          : 1;	/*     22     r/w   0*/
		uint8_t SSC_ACC_FACTOR                           : 1;	/*     23     r/w   0*/
		uint8_t TX_FOFF_INV_FORCE                        : 1;	/*     24     r/w   0*/
		uint8_t TX_POWER_PROTECT_EN                      : 1;	/*     25     r/w   1*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG1_t;
volatile TX_REG1_t __xdata __at(PHY_REG_BASE + 0xc060) TX_REG1;
#define reg_TX_P2P_VMAX_5_0  TX_REG1.BF.TX_P2P_VMAX_5_0
#define reg_TX_POWER_MAX_5_0  TX_REG1.BF.TX_POWER_MAX_5_0
#define reg_TX_VMA_PROTECT_EN  TX_REG1.BF.TX_VMA_PROTECT_EN
#define reg_TX_VMA_MIN_3_0  TX_REG1.BF.TX_VMA_MIN_3_0
#define reg_SSC_EN_FROM_PIN  TX_REG1.BF.SSC_EN_FROM_PIN
#define reg_AUTO_TX_FOFFSET  TX_REG1.BF.AUTO_TX_FOFFSET
#define reg_SSC_ACC_FACTOR  TX_REG1.BF.SSC_ACC_FACTOR
#define reg_TX_FOFF_INV_FORCE  TX_REG1.BF.TX_FOFF_INV_FORCE
#define reg_TX_POWER_PROTECT_EN  TX_REG1.BF.TX_POWER_PROTECT_EN

// 0xc064	TX_REG2		tx_amp_adj and tx_emph_en
typedef union {
	struct {
		uint8_t TX_EMPH0_3_0                             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_EMPH1_3_0                             : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TX_AMP_4_0                               : 5;	/* [12:8]     r/w 5'h15*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_AMP_FORCE                             : 1;	/*     16     r/w   0*/
		uint8_t TX_AMP_CLAMP_EN                          : 1;	/*     17     r/w   1*/
		uint8_t TX_EMPH0_EN                              : 1;	/*     18     r/w   0*/
		uint8_t TX_EMPH1_EN                              : 1;	/*     19     r/w   0*/
		uint8_t TX_AMP_ADJ                               : 1;	/*     20     r/w   1*/
		uint8_t TX_AMP_ADJ_FORCE                         : 1;	/*     21     r/w   0*/
		uint8_t TX_EMPH_AMP_FORCE                        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH1_MAX_3_0                         : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t TX_EMPH0_MAX_3_0                         : 4;	/*[31:28]     r/w 4'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG2_t;
volatile TX_REG2_t __xdata __at(PHY_REG_BASE + 0xc064) TX_REG2;
#define reg_TX_EMPH0_3_0  TX_REG2.BF.TX_EMPH0_3_0
#define reg_TX_EMPH1_3_0  TX_REG2.BF.TX_EMPH1_3_0
#define reg_TX_AMP_4_0  TX_REG2.BF.TX_AMP_4_0
#define reg_TX_AMP_FORCE  TX_REG2.BF.TX_AMP_FORCE
#define reg_TX_AMP_CLAMP_EN  TX_REG2.BF.TX_AMP_CLAMP_EN
#define reg_TX_EMPH0_EN  TX_REG2.BF.TX_EMPH0_EN
#define reg_TX_EMPH1_EN  TX_REG2.BF.TX_EMPH1_EN
#define reg_TX_AMP_ADJ  TX_REG2.BF.TX_AMP_ADJ
#define reg_TX_AMP_ADJ_FORCE  TX_REG2.BF.TX_AMP_ADJ_FORCE
#define reg_TX_EMPH_AMP_FORCE  TX_REG2.BF.TX_EMPH_AMP_FORCE
#define reg_TX_EMPH1_MAX_3_0  TX_REG2.BF.TX_EMPH1_MAX_3_0
#define reg_TX_EMPH0_MAX_3_0  TX_REG2.BF.TX_EMPH0_MAX_3_0

// 0xc068	TX_REG3		tx emphasis index mininum value / tx amplitude index limit
typedef union {
	struct {
		uint8_t TX_AMP_MAX_5_0                           : 6;	/*  [5:0]     r/w 6'h1c*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_AMP_MIN_5_0                           : 6;	/* [13:8]     r/w 6'h08*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_MIN_3_0                         : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t TX_EMPH1_MIN_3_0                         : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TX_TRAIN_START_WAIT_TIME_1_0             : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t TX_AMP_OFFSET_5_0                        : 6;	/*[31:26]     r/w 6'h0c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG3_t;
volatile TX_REG3_t __xdata __at(PHY_REG_BASE + 0xc068) TX_REG3;
#define reg_TX_AMP_MAX_5_0  TX_REG3.BF.TX_AMP_MAX_5_0
#define reg_TX_AMP_MIN_5_0  TX_REG3.BF.TX_AMP_MIN_5_0
#define reg_TX_EMPH0_MIN_3_0  TX_REG3.BF.TX_EMPH0_MIN_3_0
#define reg_TX_EMPH1_MIN_3_0  TX_REG3.BF.TX_EMPH1_MIN_3_0
#define reg_TX_TRAIN_START_WAIT_TIME_1_0  TX_REG3.BF.TX_TRAIN_START_WAIT_TIME_1_0
#define reg_TX_AMP_OFFSET_5_0  TX_REG3.BF.TX_AMP_OFFSET_5_0

// 0xc06c	TX_REG4		tx amplitude default 0
typedef union {
	struct {
		uint8_t TX_EMPH0_DEFAULT1_3_0                    : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t TX_EMPH1_DEFAULT1_3_0                    : 4;	/*  [7:4]     r/w 4'h8*/
		uint8_t TX_AMP_DEFAULT1_5_0                      : 6;	/* [13:8]     r/w 6'h09*/
		uint8_t TX_AMP_SHFT_FORCE                        : 1;	/*     14     r/w   0*/
		uint8_t TX_AMP_SHFT                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t TX_EMPH1_DEFAULT2_3_0                    : 4;	/*[23:20]     r/w 4'h4*/
		uint8_t TX_AMP_DEFAULT2_5_0                      : 6;	/*[29:24]     r/w 6'h10*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG4_t;
volatile TX_REG4_t __xdata __at(PHY_REG_BASE + 0xc06c) TX_REG4;
#define reg_TX_EMPH0_DEFAULT1_3_0  TX_REG4.BF.TX_EMPH0_DEFAULT1_3_0
#define reg_TX_EMPH1_DEFAULT1_3_0  TX_REG4.BF.TX_EMPH1_DEFAULT1_3_0
#define reg_TX_AMP_DEFAULT1_5_0  TX_REG4.BF.TX_AMP_DEFAULT1_5_0
#define reg_TX_AMP_SHFT_FORCE  TX_REG4.BF.TX_AMP_SHFT_FORCE
#define reg_TX_AMP_SHFT  TX_REG4.BF.TX_AMP_SHFT
#define reg_TX_EMPH0_DEFAULT2_3_0  TX_REG4.BF.TX_EMPH0_DEFAULT2_3_0
#define reg_TX_EMPH1_DEFAULT2_3_0  TX_REG4.BF.TX_EMPH1_DEFAULT2_3_0
#define reg_TX_AMP_DEFAULT2_5_0  TX_REG4.BF.TX_AMP_DEFAULT2_5_0

// 0xc070	TX_REG5		tx amplitude default 1 / tx_ctrl monitor
typedef union {
	struct {
		uint8_t TX_TRAIN_IF_MON_VAL_15_0_b0              : 8;	/* [15:0]       r   0*/
		uint8_t TX_TRAIN_IF_MON_VAL_15_0_b1              : 8;	/* [15:0]       r   0*/
		uint8_t TX_EMPH0_DEFAULT3_3_0                    : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t TX_EMPH1_DEFAULT3_3_0                    : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TX_AMP_DEFAULT3_5_0                      : 6;	/*[29:24]     r/w 6'h16*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG5_t;
volatile TX_REG5_t __xdata __at(PHY_REG_BASE + 0xc070) TX_REG5;
#define reg_TX_TRAIN_IF_MON_VAL_15_0_b0  TX_REG5.BF.TX_TRAIN_IF_MON_VAL_15_0_b0
#define reg_TX_TRAIN_IF_MON_VAL_15_0_b1  TX_REG5.BF.TX_TRAIN_IF_MON_VAL_15_0_b1
#define reg_TX_EMPH0_DEFAULT3_3_0  TX_REG5.BF.TX_EMPH0_DEFAULT3_3_0
#define reg_TX_EMPH1_DEFAULT3_3_0  TX_REG5.BF.TX_EMPH1_DEFAULT3_3_0
#define reg_TX_AMP_DEFAULT3_5_0  TX_REG5.BF.TX_AMP_DEFAULT3_5_0

// 0xc074	TX_REG6		tx amplitude default 4 5
typedef union {
	struct {
		uint8_t TX_EMPH0_DEFAULT5_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_EMPH1_DEFAULT5_3_0                    : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TX_AMP_DEFAULT5_5_0                      : 6;	/* [13:8]     r/w 6'h16*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT4_3_0                    : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t TX_EMPH1_DEFAULT4_3_0                    : 4;	/*[23:20]     r/w 4'h4*/
		uint8_t TX_AMP_DEFAULT4_5_0                      : 6;	/*[29:24]     r/w 6'h12*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG6_t;
volatile TX_REG6_t __xdata __at(PHY_REG_BASE + 0xc074) TX_REG6;
#define reg_TX_EMPH0_DEFAULT5_3_0  TX_REG6.BF.TX_EMPH0_DEFAULT5_3_0
#define reg_TX_EMPH1_DEFAULT5_3_0  TX_REG6.BF.TX_EMPH1_DEFAULT5_3_0
#define reg_TX_AMP_DEFAULT5_5_0  TX_REG6.BF.TX_AMP_DEFAULT5_5_0
#define reg_TX_EMPH0_DEFAULT4_3_0  TX_REG6.BF.TX_EMPH0_DEFAULT4_3_0
#define reg_TX_EMPH1_DEFAULT4_3_0  TX_REG6.BF.TX_EMPH1_DEFAULT4_3_0
#define reg_TX_AMP_DEFAULT4_5_0  TX_REG6.BF.TX_AMP_DEFAULT4_5_0

// 0xc078	TX_REG7		tx amplitude default 6 7
typedef union {
	struct {
		uint8_t TX_EMPH0_DEFAULT7_3_0                    : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t TX_EMPH1_DEFAULT7_3_0                    : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TX_AMP_DEFAULT7_5_0                      : 6;	/* [13:8]     r/w 6'h12*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT6_3_0                    : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t TX_EMPH1_DEFAULT6_3_0                    : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TX_AMP_DEFAULT6_5_0                      : 6;	/*[29:24]     r/w 6'h13*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG7_t;
volatile TX_REG7_t __xdata __at(PHY_REG_BASE + 0xc078) TX_REG7;
#define reg_TX_EMPH0_DEFAULT7_3_0  TX_REG7.BF.TX_EMPH0_DEFAULT7_3_0
#define reg_TX_EMPH1_DEFAULT7_3_0  TX_REG7.BF.TX_EMPH1_DEFAULT7_3_0
#define reg_TX_AMP_DEFAULT7_5_0  TX_REG7.BF.TX_AMP_DEFAULT7_5_0
#define reg_TX_EMPH0_DEFAULT6_3_0  TX_REG7.BF.TX_EMPH0_DEFAULT6_3_0
#define reg_TX_EMPH1_DEFAULT6_3_0  TX_REG7.BF.TX_EMPH1_DEFAULT6_3_0
#define reg_TX_AMP_DEFAULT6_5_0  TX_REG7.BF.TX_AMP_DEFAULT6_5_0

// 0xc07c	TX_REG8		tx amplitude default 8 9
typedef union {
	struct {
		uint8_t TX_EMPH0_DEFAULT9_3_0                    : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t TX_EMPH1_DEFAULT9_3_0                    : 4;	/*  [7:4]     r/w 4'h4*/
		uint8_t TX_AMP_DEFAULT9_5_0                      : 6;	/* [13:8]     r/w 6'he*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT8_3_0                    : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t TX_EMPH1_DEFAULT8_3_0                    : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t TX_AMP_DEFAULT8_5_0                      : 6;	/*[29:24]     r/w 6'hd*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG8_t;
volatile TX_REG8_t __xdata __at(PHY_REG_BASE + 0xc07c) TX_REG8;
#define reg_TX_EMPH0_DEFAULT9_3_0  TX_REG8.BF.TX_EMPH0_DEFAULT9_3_0
#define reg_TX_EMPH1_DEFAULT9_3_0  TX_REG8.BF.TX_EMPH1_DEFAULT9_3_0
#define reg_TX_AMP_DEFAULT9_5_0  TX_REG8.BF.TX_AMP_DEFAULT9_5_0
#define reg_TX_EMPH0_DEFAULT8_3_0  TX_REG8.BF.TX_EMPH0_DEFAULT8_3_0
#define reg_TX_EMPH1_DEFAULT8_3_0  TX_REG8.BF.TX_EMPH1_DEFAULT8_3_0
#define reg_TX_AMP_DEFAULT8_5_0  TX_REG8.BF.TX_AMP_DEFAULT8_5_0

// 0xc080	TX_REG9		tx amplitude default 10 11
typedef union {
	struct {
		uint8_t TX_EMPH0_DEFAULT11_3_0                   : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_EMPH1_DEFAULT11_3_0                   : 4;	/*  [7:4]     r/w 4'ha*/
		uint8_t TX_AMP_DEFAULT11_5_0                     : 6;	/* [13:8]     r/w 6'hc*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT10_3_0                   : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t TX_EMPH1_DEFAULT10_3_0                   : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TX_AMP_DEFAULT10_5_0                     : 6;	/*[29:24]     r/w 6'h11*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG9_t;
volatile TX_REG9_t __xdata __at(PHY_REG_BASE + 0xc080) TX_REG9;
#define reg_TX_EMPH0_DEFAULT11_3_0  TX_REG9.BF.TX_EMPH0_DEFAULT11_3_0
#define reg_TX_EMPH1_DEFAULT11_3_0  TX_REG9.BF.TX_EMPH1_DEFAULT11_3_0
#define reg_TX_AMP_DEFAULT11_5_0  TX_REG9.BF.TX_AMP_DEFAULT11_5_0
#define reg_TX_EMPH0_DEFAULT10_3_0  TX_REG9.BF.TX_EMPH0_DEFAULT10_3_0
#define reg_TX_EMPH1_DEFAULT10_3_0  TX_REG9.BF.TX_EMPH1_DEFAULT10_3_0
#define reg_TX_AMP_DEFAULT10_5_0  TX_REG9.BF.TX_AMP_DEFAULT10_5_0

// 0xc084	TX_REG10		 DE ctrl read back
typedef union {
	struct {
		uint8_t LOCAL_STATUS_BITS_RD_15_0_b0             : 8;	/* [15:0]       r   0*/
		uint8_t LOCAL_STATUS_BITS_RD_15_0_b1             : 8;	/* [15:0]       r   0*/
		uint8_t LOCAL_CTRL_BITS_RD_15_0_b0               : 8;	/*[31:16]       r   0*/
		uint8_t LOCAL_CTRL_BITS_RD_15_0_b1               : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_REG10_t;
volatile TX_REG10_t __xdata __at(PHY_REG_BASE + 0xc084) TX_REG10;
#define reg_LOCAL_STATUS_BITS_RD_15_0_b0  TX_REG10.BF.LOCAL_STATUS_BITS_RD_15_0_b0
#define reg_LOCAL_STATUS_BITS_RD_15_0_b1  TX_REG10.BF.LOCAL_STATUS_BITS_RD_15_0_b1
#define reg_LOCAL_CTRL_BITS_RD_15_0_b0  TX_REG10.BF.LOCAL_CTRL_BITS_RD_15_0_b0
#define reg_LOCAL_CTRL_BITS_RD_15_0_b1  TX_REG10.BF.LOCAL_CTRL_BITS_RD_15_0_b1

// 0xc088	RX_REG0		RX Control / Squelch and FFE Setting
typedef union {
	struct {
		uint8_t FFE_CAP_SEL_2_0                          : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t FFE_CAP_SEL2_2_0                         : 3;	/*  [6:4]     r/w 3'h6*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t FFE_RES_SEL_2_0                          : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t FFE_RES_SEL2_2_0                         : 3;	/*[14:12]     r/w 3'h3*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SQ_DETECTED                              : 1;	/*     16       r   0*/
		uint8_t AC_TERM_EN                               : 1;	/*     17     r/w   1*/
		uint8_t INT_SQ_LPF_EN                            : 1;	/*     18     r/w   1*/
		uint8_t SQ_DETECTED_DURING_CAL                   : 1;	/*     19     r/w   1*/
		uint8_t SQ_DETECTED_GATE_EN                      : 1;	/*     20     r/w   1*/
		uint8_t SQ_OUT                                   : 1;	/*     21     r/w   0*/
		uint8_t SQ_OUT_FORCE                             : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RXCLK2X_SEL                              : 1;	/*     24     r/w   1*/
		uint8_t CLK8T_EN                                 : 1;	/*     25     r/w   1*/
		uint8_t EN_PMOS_DCW_1_0                          : 2;	/*[27:26]     r/w 2'h2*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t FFE_FB_SEL                               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_REG0_t;
volatile RX_REG0_t __xdata __at(PHY_REG_BASE + 0xc088) RX_REG0;
#define reg_FFE_CAP_SEL_2_0  RX_REG0.BF.FFE_CAP_SEL_2_0
#define reg_FFE_CAP_SEL2_2_0  RX_REG0.BF.FFE_CAP_SEL2_2_0
#define reg_FFE_RES_SEL_2_0  RX_REG0.BF.FFE_RES_SEL_2_0
#define reg_FFE_RES_SEL2_2_0  RX_REG0.BF.FFE_RES_SEL2_2_0
#define reg_SQ_DETECTED  RX_REG0.BF.SQ_DETECTED
#define reg_AC_TERM_EN  RX_REG0.BF.AC_TERM_EN
#define reg_INT_SQ_LPF_EN  RX_REG0.BF.INT_SQ_LPF_EN
#define reg_SQ_DETECTED_DURING_CAL  RX_REG0.BF.SQ_DETECTED_DURING_CAL
#define reg_SQ_DETECTED_GATE_EN  RX_REG0.BF.SQ_DETECTED_GATE_EN
#define reg_SQ_OUT  RX_REG0.BF.SQ_OUT
#define reg_SQ_OUT_FORCE  RX_REG0.BF.SQ_OUT_FORCE
#define reg_RXCLK2X_SEL  RX_REG0.BF.RXCLK2X_SEL
#define reg_CLK8T_EN  RX_REG0.BF.CLK8T_EN
#define reg_EN_PMOS_DCW_1_0  RX_REG0.BF.EN_PMOS_DCW_1_0
#define reg_FFE_FB_SEL  RX_REG0.BF.FFE_FB_SEL

// 0xc08c	RX_REG1		Offset Phase Control / DTL Control
typedef union {
	struct {
		uint8_t DTL_SQ_DET_EN                            : 1;	/*      0     r/w   1*/
		uint8_t REG_SQUELCH_PLOOP_ON                     : 1;	/*      1     r/w   1*/
		uint8_t DTL_FLOOP_EN                             : 1;	/*      2     r/w   1*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t DTL_CLAMPING_SEL_2_0                     : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DTL_CLAMPING_EN                          : 1;	/*      8     r/w   1*/
		uint8_t DTL_CLAMPING_SCALE                       : 1;	/*      9     r/w   0*/
		uint8_t DTL_CLAMPING_TRIGGERED                   : 1;	/*     10       r   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t DTL_CLAMPING_RATIO_NEG_1_0               : 2;	/*[14:13]     r/w 2'h0*/
		uint8_t CLEAR_DTL_CLAMPING_TRIGGERED             : 1;	/*     15     r/w   0*/
		uint8_t OS_PH_OFFSET_6_0                         : 8;	/*[22:16]     r/w 7'h60*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t OS_PH_OFFSET_VALID                       : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t AVG_WINDOW_1_0                           : 2;	/*[27:26]     r/w 2'h2*/
		uint8_t RX_FOFFSET_SSC_DETECT_THRES_3_0          : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_REG1_t;
volatile RX_REG1_t __xdata __at(PHY_REG_BASE + 0xc08c) RX_REG1;
#define reg_DTL_SQ_DET_EN  RX_REG1.BF.DTL_SQ_DET_EN
#define reg_REG_SQUELCH_PLOOP_ON  RX_REG1.BF.REG_SQUELCH_PLOOP_ON
#define reg_DTL_FLOOP_EN  RX_REG1.BF.DTL_FLOOP_EN
#define reg_DTL_CLAMPING_SEL_2_0  RX_REG1.BF.DTL_CLAMPING_SEL_2_0
#define reg_DTL_CLAMPING_EN  RX_REG1.BF.DTL_CLAMPING_EN
#define reg_DTL_CLAMPING_SCALE  RX_REG1.BF.DTL_CLAMPING_SCALE
#define reg_DTL_CLAMPING_TRIGGERED  RX_REG1.BF.DTL_CLAMPING_TRIGGERED
#define reg_DTL_CLAMPING_RATIO_NEG_1_0  RX_REG1.BF.DTL_CLAMPING_RATIO_NEG_1_0
#define reg_CLEAR_DTL_CLAMPING_TRIGGERED  RX_REG1.BF.CLEAR_DTL_CLAMPING_TRIGGERED
#define reg_OS_PH_OFFSET_6_0  RX_REG1.BF.OS_PH_OFFSET_6_0
#define reg_OS_PH_OFFSET_VALID  RX_REG1.BF.OS_PH_OFFSET_VALID
#define reg_AVG_WINDOW_1_0  RX_REG1.BF.AVG_WINDOW_1_0
#define reg_RX_FOFFSET_SSC_DETECT_THRES_3_0  RX_REG1.BF.RX_FOFFSET_SSC_DETECT_THRES_3_0

// 0xc090	RX_REG2		Receiver Frequency Offset Read / Receiver Frequency Offset Extraction
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_13_0_b0               : 8;	/* [13:0]     r/w 14'h064f*/
		uint8_t RX_FOFFSET_EXTRA_M_13_0_b1               : 6;	/* [13:0]     r/w 14'h064f*/
		uint8_t RX_FOFFSET_EXTRA_M_VALID                 : 1;	/*     14     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_FORCE                 : 1;	/*     15     r/w   0*/
		uint8_t RX_FOFFSET_RD_9_0_b0                     : 8;	/*[25:16]       r   0*/
		uint8_t RX_FOFFSET_RD_9_0_b1                     : 2;	/*[25:16]       r   0*/
		uint8_t RX_FOFFSET_RDY                           : 1;	/*     26       r   0*/
		uint8_t RX_FOFFSET_RD_REQ                        : 1;	/*     27     r/w   0*/
		uint8_t RX_FOFFSET_EXTRACTION_EN                 : 1;	/*     28     r/w   0*/
		uint8_t RX_SSC_FOUND                             : 1;	/*     29       r   0*/
		uint8_t RX_FOFFSET_EXTRACTION_RST                : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_REG2_t;
volatile RX_REG2_t __xdata __at(PHY_REG_BASE + 0xc090) RX_REG2;
#define reg_RX_FOFFSET_EXTRA_M_13_0_b0  RX_REG2.BF.RX_FOFFSET_EXTRA_M_13_0_b0
#define reg_RX_FOFFSET_EXTRA_M_13_0_b1  RX_REG2.BF.RX_FOFFSET_EXTRA_M_13_0_b1
#define reg_RX_FOFFSET_EXTRA_M_VALID  RX_REG2.BF.RX_FOFFSET_EXTRA_M_VALID
#define reg_RX_FOFFSET_EXTRA_M_FORCE  RX_REG2.BF.RX_FOFFSET_EXTRA_M_FORCE
#define reg_RX_FOFFSET_RD_9_0_b0  RX_REG2.BF.RX_FOFFSET_RD_9_0_b0
#define reg_RX_FOFFSET_RD_9_0_b1  RX_REG2.BF.RX_FOFFSET_RD_9_0_b1
#define reg_RX_FOFFSET_RDY  RX_REG2.BF.RX_FOFFSET_RDY
#define reg_RX_FOFFSET_RD_REQ  RX_REG2.BF.RX_FOFFSET_RD_REQ
#define reg_RX_FOFFSET_EXTRACTION_EN  RX_REG2.BF.RX_FOFFSET_EXTRACTION_EN
#define reg_RX_SSC_FOUND  RX_REG2.BF.RX_SSC_FOUND
#define reg_RX_FOFFSET_EXTRACTION_RST  RX_REG2.BF.RX_FOFFSET_EXTRACTION_RST

// 0xc094	RX_REG3		Receiver Clamping Control / Receiver Offset Control
typedef union {
	struct {
		uint8_t INIT_OS_PH_OFFSET_SEL                    : 1;	/*      0     r/w   0*/
		uint8_t DTL_DLY_CTRL_1_0                         : 2;	/*  [2:1]     r/w 2'h1*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RX_FOFFSET_SSC_BIAS_3_0                  : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t RX_FOFFSET_READY_THRES_3_0               : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RX_FOFFSET_READY_CNT_3_0                 : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DTL_CLAMP_FOFFS_9_0_b0                   : 8;	/*[25:16]     r/w 10'h0*/
		uint8_t DTL_CLAMP_FOFFS_9_0_b1                   : 2;	/*[25:16]     r/w 10'h0*/
		uint8_t DTL_CLAMP_RST_MODE_1_0                   : 2;	/*[27:26]     r/w 2'h2*/
		uint8_t DTL_CLK_MODE_RD_1_0                      : 2;	/*[29:28]       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_REG3_t;
volatile RX_REG3_t __xdata __at(PHY_REG_BASE + 0xc094) RX_REG3;
#define reg_INIT_OS_PH_OFFSET_SEL  RX_REG3.BF.INIT_OS_PH_OFFSET_SEL
#define reg_DTL_DLY_CTRL_1_0  RX_REG3.BF.DTL_DLY_CTRL_1_0
#define reg_RX_FOFFSET_SSC_BIAS_3_0  RX_REG3.BF.RX_FOFFSET_SSC_BIAS_3_0
#define reg_RX_FOFFSET_READY_THRES_3_0  RX_REG3.BF.RX_FOFFSET_READY_THRES_3_0
#define reg_RX_FOFFSET_READY_CNT_3_0  RX_REG3.BF.RX_FOFFSET_READY_CNT_3_0
#define reg_DTL_CLAMP_FOFFS_9_0_b0  RX_REG3.BF.DTL_CLAMP_FOFFS_9_0_b0
#define reg_DTL_CLAMP_FOFFS_9_0_b1  RX_REG3.BF.DTL_CLAMP_FOFFS_9_0_b1
#define reg_DTL_CLAMP_RST_MODE_1_0  RX_REG3.BF.DTL_CLAMP_RST_MODE_1_0
#define reg_DTL_CLK_MODE_RD_1_0  RX_REG3.BF.DTL_CLK_MODE_RD_1_0

// 0xc098	RX_REG4		eom phase control
typedef union {
	struct {
		uint8_t EOM_PH_OFFSET_6_0                        : 8;	/*  [6:0]     r/w 7'h60*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t EOM_PH_OFFSET_FORCE                      : 1;	/*      8     r/w   0*/
		uint8_t EOM_PH_VALID                             : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t F1_BUF_OS_C_4_0                          : 5;	/*[20:16]       r   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RX_EXTRA_SSC_AMP_RD_9_0_b0               : 2;	/*[31:22]       r   0*/
		uint8_t RX_EXTRA_SSC_AMP_RD_9_0_b1               : 8;	/*[31:22]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_REG4_t;
volatile RX_REG4_t __xdata __at(PHY_REG_BASE + 0xc098) RX_REG4;
#define reg_EOM_PH_OFFSET_6_0  RX_REG4.BF.EOM_PH_OFFSET_6_0
#define reg_EOM_PH_OFFSET_FORCE  RX_REG4.BF.EOM_PH_OFFSET_FORCE
#define reg_EOM_PH_VALID  RX_REG4.BF.EOM_PH_VALID
#define reg_F1_BUF_OS_C_4_0  RX_REG4.BF.F1_BUF_OS_C_4_0
#define reg_RX_EXTRA_SSC_AMP_RD_9_0_b0  RX_REG4.BF.RX_EXTRA_SSC_AMP_RD_9_0_b0
#define reg_RX_EXTRA_SSC_AMP_RD_9_0_b1  RX_REG4.BF.RX_EXTRA_SSC_AMP_RD_9_0_b1

// 0xc09c	REG0_DEBUG		reg0 debug
typedef union {
	struct {
		uint8_t REG0_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG0_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG0_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG0_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG0_DEBUG_t;
volatile REG0_DEBUG_t __xdata __at(PHY_REG_BASE + 0xc09c) REG0_DEBUG;
#define reg_REG0_DEBUG0_7_0  REG0_DEBUG.BF.REG0_DEBUG0_7_0
#define reg_REG0_DEBUG1_7_0  REG0_DEBUG.BF.REG0_DEBUG1_7_0
#define reg_REG0_DEBUG2_7_0  REG0_DEBUG.BF.REG0_DEBUG2_7_0
#define reg_REG0_DEBUG3_7_0  REG0_DEBUG.BF.REG0_DEBUG3_7_0

// 0xc0a0	TX_TRAIN_REG0		TX train result
typedef union {
	struct {
		uint8_t FM_TRAIN_TX_EMPH1_3_0                    : 4;	/*  [3:0]       r   0*/
		uint8_t FM_TRAIN_TX_EMPH0_3_0                    : 4;	/*  [7:4]       r   0*/
		uint8_t FM_TRAIN_TX_EMPH0_EN                     : 1;	/*      8       r   0*/
		uint8_t FM_TRAIN_TX_EMPH1_EN                     : 1;	/*      9       r   0*/
		uint8_t FM_TRAIN_TX_AMP_ADJ                      : 1;	/*     10       r   0*/
		uint8_t FM_TRAIN_TX_AMP_4_0                      : 5;	/*[15:11]       r   0*/
		uint8_t TRX_TRAIN_TIMEOUT                        : 1;	/*     16       r   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RX_TRAIN_FAILED                          : 1;	/*     19       r   0*/
		uint8_t RX_TRAIN_COMPLETE                        : 1;	/*     20       r   0*/
		uint8_t TX_TRAIN_FAILED                          : 1;	/*     21       r   0*/
		uint8_t TX_TRAIN_COMPLETE                        : 1;	/*     22       r   0*/
		uint8_t FM_TRAIN_TX_AMP_SHFT                     : 1;	/*     23       r   0*/
		uint8_t TX_TRAIN_ERROR_1_0                       : 2;	/*[25:24]       r   0*/
		uint8_t REMOTE_TRAIN_COMP_RD                     : 1;	/*     26       r   0*/
		uint8_t LOCAL_TRAIN_COMP_RD                      : 1;	/*     27       r   0*/
		uint8_t FRAME_DET_TIMEOUT                        : 1;	/*     28       r   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_REG0_t;
volatile TX_TRAIN_REG0_t __xdata __at(PHY_REG_BASE + 0xc0a0) TX_TRAIN_REG0;
#define reg_FM_TRAIN_TX_EMPH1_3_0  TX_TRAIN_REG0.BF.FM_TRAIN_TX_EMPH1_3_0
#define reg_FM_TRAIN_TX_EMPH0_3_0  TX_TRAIN_REG0.BF.FM_TRAIN_TX_EMPH0_3_0
#define reg_FM_TRAIN_TX_EMPH0_EN  TX_TRAIN_REG0.BF.FM_TRAIN_TX_EMPH0_EN
#define reg_FM_TRAIN_TX_EMPH1_EN  TX_TRAIN_REG0.BF.FM_TRAIN_TX_EMPH1_EN
#define reg_FM_TRAIN_TX_AMP_ADJ  TX_TRAIN_REG0.BF.FM_TRAIN_TX_AMP_ADJ
#define reg_FM_TRAIN_TX_AMP_4_0  TX_TRAIN_REG0.BF.FM_TRAIN_TX_AMP_4_0
#define reg_TRX_TRAIN_TIMEOUT  TX_TRAIN_REG0.BF.TRX_TRAIN_TIMEOUT
#define reg_RX_TRAIN_FAILED  TX_TRAIN_REG0.BF.RX_TRAIN_FAILED
#define reg_RX_TRAIN_COMPLETE  TX_TRAIN_REG0.BF.RX_TRAIN_COMPLETE
#define reg_TX_TRAIN_FAILED  TX_TRAIN_REG0.BF.TX_TRAIN_FAILED
#define reg_TX_TRAIN_COMPLETE  TX_TRAIN_REG0.BF.TX_TRAIN_COMPLETE
#define reg_FM_TRAIN_TX_AMP_SHFT  TX_TRAIN_REG0.BF.FM_TRAIN_TX_AMP_SHFT
#define reg_TX_TRAIN_ERROR_1_0  TX_TRAIN_REG0.BF.TX_TRAIN_ERROR_1_0
#define reg_REMOTE_TRAIN_COMP_RD  TX_TRAIN_REG0.BF.REMOTE_TRAIN_COMP_RD
#define reg_LOCAL_TRAIN_COMP_RD  TX_TRAIN_REG0.BF.LOCAL_TRAIN_COMP_RD
#define reg_FRAME_DET_TIMEOUT  TX_TRAIN_REG0.BF.FRAME_DET_TIMEOUT

// 0xc0a4	TX_TRAIN_REG1		status detection timeout control / TX Train Preset Register
typedef union {
	struct {
		uint8_t REMOTE_STATUS_RECHK_EN                   : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_TX_PRESET_EN                       : 1;	/*      1     r/w   1*/
		uint8_t TX_COE_FM_TX_TRAIN_DIS                   : 1;	/*      2     r/w   0*/
		uint8_t REMOTE_STATUS_CHECK_EN                   : 1;	/*      3     r/w   1*/
		uint8_t TX_TRAIN_CHK_INIT                        : 1;	/*      4     r/w   1*/
		uint8_t TX_TRAIN_PAT_EN                          : 1;	/*      5     r/w   0*/
		uint8_t TX_TRAIN_PAT_LINK                        : 1;	/*      6     r/w   0*/
		uint8_t TX_COE_FM_PIN_PCIE3_EN                   : 1;	/*      7     r/w   0*/
		uint8_t TRAIN_16BIT_AUTO_EN                      : 1;	/*      8     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL                         : 1;	/*      9     r/w   0*/
		uint8_t TX_TRAIN_PAT_PT                          : 1;	/*     10     r/w   0*/
		uint8_t TX_TRAIN_COE_UPDATE_EN                   : 1;	/*     11     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_READY_HIGH             : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_HIGH              : 1;	/*     13     r/w   0*/
		uint8_t TX_PRESET_OUTSIDE_ROTATE                 : 1;	/*     14     r/w   0*/
		uint8_t TX_PRESET_INSIDE_ROTATE                  : 1;	/*     15     r/w   0*/
		uint8_t STATUS_DET_TIMEOUT_7_0                   : 8;	/*[23:16]     r/w 8'h03*/
		uint8_t STATUS_DET_TIMEOUT_EN                    : 1;	/*     24     r/w   1*/
		uint8_t LINK_TRAIN_MODE_LPBK                     : 1;	/*     25     r/w   0*/
		uint8_t TX_TRAIN_COMP_WAIT_FRAME_2_0             : 3;	/*[28:26]     r/w 3'h3*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_SEL                     : 1;	/*     30     r/w   0*/
		uint8_t TX_TRAIN_COMPLETE_TIMEOUT_EN             : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_REG1_t;
volatile TX_TRAIN_REG1_t __xdata __at(PHY_REG_BASE + 0xc0a4) TX_TRAIN_REG1;
#define reg_REMOTE_STATUS_RECHK_EN  TX_TRAIN_REG1.BF.REMOTE_STATUS_RECHK_EN
#define reg_LOCAL_TX_PRESET_EN  TX_TRAIN_REG1.BF.LOCAL_TX_PRESET_EN
#define reg_TX_COE_FM_TX_TRAIN_DIS  TX_TRAIN_REG1.BF.TX_COE_FM_TX_TRAIN_DIS
#define reg_REMOTE_STATUS_CHECK_EN  TX_TRAIN_REG1.BF.REMOTE_STATUS_CHECK_EN
#define reg_TX_TRAIN_CHK_INIT  TX_TRAIN_REG1.BF.TX_TRAIN_CHK_INIT
#define reg_TX_TRAIN_PAT_EN  TX_TRAIN_REG1.BF.TX_TRAIN_PAT_EN
#define reg_TX_TRAIN_PAT_LINK  TX_TRAIN_REG1.BF.TX_TRAIN_PAT_LINK
#define reg_TX_COE_FM_PIN_PCIE3_EN  TX_TRAIN_REG1.BF.TX_COE_FM_PIN_PCIE3_EN
#define reg_TRAIN_16BIT_AUTO_EN  TX_TRAIN_REG1.BF.TRAIN_16BIT_AUTO_EN
#define reg_TX_TRAIN_PAT_SEL  TX_TRAIN_REG1.BF.TX_TRAIN_PAT_SEL
#define reg_TX_TRAIN_PAT_PT  TX_TRAIN_REG1.BF.TX_TRAIN_PAT_PT
#define reg_TX_TRAIN_COE_UPDATE_EN  TX_TRAIN_REG1.BF.TX_TRAIN_COE_UPDATE_EN
#define reg_REMOTE_CTRL_FIELD_READY_HIGH  TX_TRAIN_REG1.BF.REMOTE_CTRL_FIELD_READY_HIGH
#define reg_LOCAL_CTRL_FIELD_READY_HIGH  TX_TRAIN_REG1.BF.LOCAL_CTRL_FIELD_READY_HIGH
#define reg_TX_PRESET_OUTSIDE_ROTATE  TX_TRAIN_REG1.BF.TX_PRESET_OUTSIDE_ROTATE
#define reg_TX_PRESET_INSIDE_ROTATE  TX_TRAIN_REG1.BF.TX_PRESET_INSIDE_ROTATE
#define reg_STATUS_DET_TIMEOUT_7_0  TX_TRAIN_REG1.BF.STATUS_DET_TIMEOUT_7_0
#define reg_STATUS_DET_TIMEOUT_EN  TX_TRAIN_REG1.BF.STATUS_DET_TIMEOUT_EN
#define reg_LINK_TRAIN_MODE_LPBK  TX_TRAIN_REG1.BF.LINK_TRAIN_MODE_LPBK
#define reg_TX_TRAIN_COMP_WAIT_FRAME_2_0  TX_TRAIN_REG1.BF.TX_TRAIN_COMP_WAIT_FRAME_2_0
#define reg_LOCAL_TRAIN_COMP_SEL  TX_TRAIN_REG1.BF.LOCAL_TRAIN_COMP_SEL
#define reg_TX_TRAIN_COMPLETE_TIMEOUT_EN  TX_TRAIN_REG1.BF.TX_TRAIN_COMPLETE_TIMEOUT_EN

// 0xc0a8	TX_IMP		TX_IMP
typedef union {
	struct {
		uint8_t TX_IMP_27_0_b0                           : 8;	/* [27:0]     r/w 28'h01ffffe*/
		uint8_t TX_IMP_27_0_b1                           : 8;	/* [27:0]     r/w 28'h01ffffe*/
		uint8_t TX_IMP_27_0_b2                           : 8;	/* [27:0]     r/w 28'h01ffffe*/
		uint8_t TX_IMP_27_0_b3                           : 8;	/* [27:0]     r/w 28'h01ffffe*/
		//uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_t;
volatile TX_IMP_t __xdata __at(PHY_REG_BASE + 0xc0a8) TX_IMP;
#define reg_TX_IMP_27_0_b0  TX_IMP.BF.TX_IMP_27_0_b0
#define reg_TX_IMP_27_0_b1  TX_IMP.BF.TX_IMP_27_0_b1
#define reg_TX_IMP_27_0_b2  TX_IMP.BF.TX_IMP_27_0_b2
#define reg_TX_IMP_27_0_b3  TX_IMP.BF.TX_IMP_27_0_b3

// 0xc0ac	TRX_TRAIN_REG0		TRX training control register 0
typedef union {
	struct {
		uint8_t RX_TRAIN_ENABLE                          : 1;	/*      0     r/w   0*/
		uint8_t TX_TRAIN_ENABLE                          : 1;	/*      1     r/w   0*/
		uint8_t RST_RX_ANA_IF                            : 1;	/*      2     r/w   0*/
		uint8_t RST_TX_CTRL                              : 1;	/*      3     r/w   0*/
		uint8_t RX_ANA_IF_CLK_EN                         : 1;	/*      4     r/w   1*/
		uint8_t TX_CTRL_CLK_EN                           : 1;	/*      5     r/w   1*/
		uint8_t UPDATE_THEN_HOLD                         : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_EO_UP_THRE_FINE_3_0                  : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t LINK_TRAIN_IF_MODE                       : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_SEL                  : 1;	/*     29     r/w   0*/
		uint8_t FRAME_LOCK_SEL                           : 1;	/*     30     r/w   0*/
		uint8_t PIN_TRAIN_COMPLETE_TYPE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG0_t;
volatile TRX_TRAIN_REG0_t __xdata __at(PHY_REG_BASE + 0xc0ac) TRX_TRAIN_REG0;
#define reg_RX_TRAIN_ENABLE  TRX_TRAIN_REG0.BF.RX_TRAIN_ENABLE
#define reg_TX_TRAIN_ENABLE  TRX_TRAIN_REG0.BF.TX_TRAIN_ENABLE
#define reg_RST_RX_ANA_IF  TRX_TRAIN_REG0.BF.RST_RX_ANA_IF
#define reg_RST_TX_CTRL  TRX_TRAIN_REG0.BF.RST_TX_CTRL
#define reg_RX_ANA_IF_CLK_EN  TRX_TRAIN_REG0.BF.RX_ANA_IF_CLK_EN
#define reg_TX_CTRL_CLK_EN  TRX_TRAIN_REG0.BF.TX_CTRL_CLK_EN
#define reg_UPDATE_THEN_HOLD  TRX_TRAIN_REG0.BF.UPDATE_THEN_HOLD
#define reg_DFE_EO_UP_THRE_FINE_3_0  TRX_TRAIN_REG0.BF.DFE_EO_UP_THRE_FINE_3_0
#define reg_LINK_TRAIN_IF_MODE  TRX_TRAIN_REG0.BF.LINK_TRAIN_IF_MODE
#define reg_PIN_TX_TRAIN_ENABLE_SEL  TRX_TRAIN_REG0.BF.PIN_TX_TRAIN_ENABLE_SEL
#define reg_FRAME_LOCK_SEL  TRX_TRAIN_REG0.BF.FRAME_LOCK_SEL
#define reg_PIN_TRAIN_COMPLETE_TYPE  TRX_TRAIN_REG0.BF.PIN_TRAIN_COMPLETE_TYPE

// 0xc0b0	TRX_TRAIN_REG2		TRX training control register 2
typedef union {
	struct {
		uint8_t TRX_TRAIN_TIMER_9_0_b0                   : 8;	/*  [9:0]     r/w 10'h1f3*/
		uint8_t TRX_TRAIN_TIMER_9_0_b1                   : 2;	/*  [9:0]     r/w 10'h1f3*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_RESET_3_0               : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_TRAIN_START_NO_WAIT                   : 1;	/*     24     r/w   1*/
		uint8_t TX_TRAIN_START_SQ_EN                     : 1;	/*     25     r/w   0*/
		uint8_t TX_TRAIN_START_FRAME_DETECTED_EN         : 1;	/*     26     r/w   0*/
		uint8_t TX_TRAIN_START_FRAME_LOCK_EN             : 1;	/*     27     r/w   0*/
		uint8_t TX_TRAIN_START_WAIT_TIME_EN              : 1;	/*     28     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_EN                     : 1;	/*     29     r/w   1*/
		uint8_t REMOTE_FM_REG_EN                         : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY                   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG2_t;
volatile TRX_TRAIN_REG2_t __xdata __at(PHY_REG_BASE + 0xc0b0) TRX_TRAIN_REG2;
#define reg_TRX_TRAIN_TIMER_9_0_b0  TRX_TRAIN_REG2.BF.TRX_TRAIN_TIMER_9_0_b0
#define reg_TRX_TRAIN_TIMER_9_0_b1  TRX_TRAIN_REG2.BF.TRX_TRAIN_TIMER_9_0_b1
#define reg_LOCAL_CTRL_FIELD_RESET_3_0  TRX_TRAIN_REG2.BF.LOCAL_CTRL_FIELD_RESET_3_0
#define reg_TX_TRAIN_START_NO_WAIT  TRX_TRAIN_REG2.BF.TX_TRAIN_START_NO_WAIT
#define reg_TX_TRAIN_START_SQ_EN  TRX_TRAIN_REG2.BF.TX_TRAIN_START_SQ_EN
#define reg_TX_TRAIN_START_FRAME_DETECTED_EN  TRX_TRAIN_REG2.BF.TX_TRAIN_START_FRAME_DETECTED_EN
#define reg_TX_TRAIN_START_FRAME_LOCK_EN  TRX_TRAIN_REG2.BF.TX_TRAIN_START_FRAME_LOCK_EN
#define reg_TX_TRAIN_START_WAIT_TIME_EN  TRX_TRAIN_REG2.BF.TX_TRAIN_START_WAIT_TIME_EN
#define reg_TRX_TRAIN_TIMEOUT_EN  TRX_TRAIN_REG2.BF.TRX_TRAIN_TIMEOUT_EN
#define reg_REMOTE_FM_REG_EN  TRX_TRAIN_REG2.BF.REMOTE_FM_REG_EN
#define reg_LOCAL_CTRL_FIELD_READY  TRX_TRAIN_REG2.BF.LOCAL_CTRL_FIELD_READY

// 0xc0b4	TRX_TRAIN_REG3		TRX train control register 3
typedef union {
	struct {
		uint8_t REMOTE_CTRL_FIELD_5_0                    : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID                  : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_5_0                  : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID                : 1;	/*     15     r/w   0*/
		uint8_t LOCAL_TX_PRESET_INDEX_3_0                : 4;	/*[19:16]     r/w 4'h2*/
//		uint8_t LOCAL_STATUS_FIELD_5_0_b0                : 4;	/*[25:20]     r/w 6'h0*/
//		uint8_t LOCAL_STATUS_FIELD_5_0_b1                : 2;	/*[25:20]     r/w 6'h0*/
		uint8_t LOCAL_STATUS_FIELD_5_0	                 : 6;	/*[25:20]     r/w 6'h0*/
		uint8_t LOCAL_CTRL_FIELD_5_0                     : 6;	/*[31:26]     r/w 6'h0*/
	} BF;
	struct {
		uint8_t REMOTE_CTRL_FIELD_1_0                    : 2;	/*  [5:0]     r/w 6'h0*/
		uint8_t REMOTE_CTRL_FIELD_3_2                    : 2;	/*  [5:0]     r/w 6'h0*/
		uint8_t REMOTE_CTRL_FIELD_5_4                    : 2;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID                  : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_5_0                  : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID                : 1;	/*     15     r/w   0*/
		uint8_t LOCAL_TX_PRESET_INDEX_3_0                : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t LOCAL_STATUS_FIELD_5_0	                 : 6;	/*[25:20]     r/w 6'h0*/
		uint8_t LOCAL_CTRL_FIELD_5_0                     : 6;	/*[31:26]     r/w 6'h0*/
	} BF1;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG3_t;
volatile TRX_TRAIN_REG3_t __xdata __at(PHY_REG_BASE + 0xc0b4) TRX_TRAIN_REG3;
#define reg_REMOTE_CTRL_FIELD_5_0  TRX_TRAIN_REG3.BF.REMOTE_CTRL_FIELD_5_0
#define reg_REMOTE_CTRL_FIELD_CN1  TRX_TRAIN_REG3.BF1.REMOTE_CTRL_FIELD_1_0
#define reg_REMOTE_CTRL_FIELD_C0   TRX_TRAIN_REG3.BF1.REMOTE_CTRL_FIELD_3_2
#define reg_REMOTE_CTRL_FIELD_C1   TRX_TRAIN_REG3.BF1.REMOTE_CTRL_FIELD_5_4
#define reg_REMOTE_CTRL_FIELD_VALID  TRX_TRAIN_REG3.BF.REMOTE_CTRL_FIELD_VALID
#define reg_REMOTE_STATUS_FIELD_5_0  TRX_TRAIN_REG3.BF.REMOTE_STATUS_FIELD_5_0
#define reg_REMOTE_STATUS_FIELD_VALID  TRX_TRAIN_REG3.BF.REMOTE_STATUS_FIELD_VALID
#define reg_LOCAL_TX_PRESET_INDEX_3_0  TRX_TRAIN_REG3.BF.LOCAL_TX_PRESET_INDEX_3_0
//#define reg_LOCAL_STATUS_FIELD_5_0_b0  TRX_TRAIN_REG3.BF.LOCAL_STATUS_FIELD_5_0_b0
//#define reg_LOCAL_STATUS_FIELD_5_0_b1  TRX_TRAIN_REG3.BF.LOCAL_STATUS_FIELD_5_0_b1
#define reg_LOCAL_STATUS_FIELD_5_0  TRX_TRAIN_REG3.BF.LOCAL_STATUS_FIELD_5_0
#define reg_LOCAL_CTRL_FIELD_5_0  TRX_TRAIN_REG3.BF.LOCAL_CTRL_FIELD_5_0

// 0xc0b8	TRX_TRAIN_REG4		TRX train control register 4
typedef union {
	struct {
		uint8_t TX_EMPH1_INDEX_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_EMPH0_INDEX_3_0                       : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t RX_TRAIN_TIMER_9_0_b0                    : 8;	/* [17:8]     r/w 10'h13*/
		uint8_t RX_TRAIN_TIMER_9_0_b1                    : 2;	/* [17:8]     r/w 10'h13*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP                         : 1;	/*     25     r/w   0*/
		uint8_t TX_COE_FM_REG_PCIE3_EN                   : 1;	/*     26     r/w   0*/
		uint8_t LOCAL_STATUS_FM_REG_EN                   : 1;	/*     27     r/w   0*/
		uint8_t PIN_TX_TRAIN_FAILED                      : 1;	/*     28     r/w   0*/
		uint8_t PIN_TX_TRAIN_COMPLETE                    : 1;	/*     29     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_READY                  : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_CTRL_FM_REG_EN                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG4_t;
volatile TRX_TRAIN_REG4_t __xdata __at(PHY_REG_BASE + 0xc0b8) TRX_TRAIN_REG4;
#define reg_TX_EMPH1_INDEX_3_0  TRX_TRAIN_REG4.BF.TX_EMPH1_INDEX_3_0
#define reg_TX_EMPH0_INDEX_3_0  TRX_TRAIN_REG4.BF.TX_EMPH0_INDEX_3_0
#define reg_RX_TRAIN_TIMER_9_0_b0  TRX_TRAIN_REG4.BF.RX_TRAIN_TIMER_9_0_b0
#define reg_RX_TRAIN_TIMER_9_0_b1  TRX_TRAIN_REG4.BF.RX_TRAIN_TIMER_9_0_b1
#define reg_LOCAL_TRAIN_COMP  TRX_TRAIN_REG4.BF.LOCAL_TRAIN_COMP
#define reg_TX_COE_FM_REG_PCIE3_EN  TRX_TRAIN_REG4.BF.TX_COE_FM_REG_PCIE3_EN
#define reg_LOCAL_STATUS_FM_REG_EN  TRX_TRAIN_REG4.BF.LOCAL_STATUS_FM_REG_EN
#define reg_PIN_TX_TRAIN_FAILED  TRX_TRAIN_REG4.BF.PIN_TX_TRAIN_FAILED
#define reg_PIN_TX_TRAIN_COMPLETE  TRX_TRAIN_REG4.BF.PIN_TX_TRAIN_COMPLETE
#define reg_REMOTE_CTRL_FIELD_READY  TRX_TRAIN_REG4.BF.REMOTE_CTRL_FIELD_READY
#define reg_LOCAL_CTRL_FM_REG_EN  TRX_TRAIN_REG4.BF.LOCAL_CTRL_FM_REG_EN

// 0xc0bc	TRX_TRAIN_REG5		TRX training control register 5
typedef union {
	struct {
		uint8_t TRX_TRAIN_MON_VAL_15_0_b0                : 8;	/* [15:0]       r   0*/
		uint8_t TRX_TRAIN_MON_VAL_15_0_b1                : 8;	/* [15:0]       r   0*/
		uint8_t TX_AMP_INDEX_5_0                         : 6;	/*[21:16]     r/w 6'h2f*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t LOCAL_CTRL_RESET                         : 1;	/*     24     r/w   0*/
		uint8_t LOCAL_CTRL_REQ                           : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_3_0              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG5_t;
volatile TRX_TRAIN_REG5_t __xdata __at(PHY_REG_BASE + 0xc0bc) TRX_TRAIN_REG5;
#define reg_TRX_TRAIN_MON_VAL_15_0_b0  TRX_TRAIN_REG5.BF.TRX_TRAIN_MON_VAL_15_0_b0
#define reg_TRX_TRAIN_MON_VAL_15_0_b1  TRX_TRAIN_REG5.BF.TRX_TRAIN_MON_VAL_15_0_b1
#define reg_TX_AMP_INDEX_5_0  TRX_TRAIN_REG5.BF.TX_AMP_INDEX_5_0
#define reg_LOCAL_CTRL_RESET  TRX_TRAIN_REG5.BF.LOCAL_CTRL_RESET
#define reg_LOCAL_CTRL_REQ  TRX_TRAIN_REG5.BF.LOCAL_CTRL_REQ
#define reg_REMOTE_CTRL_FIELD_RESET_3_0  TRX_TRAIN_REG5.BF.REMOTE_CTRL_FIELD_RESET_3_0

// 0xc0c0	TRX_TRAIN_REG6		TRX training control register 6
typedef union {
	struct {
		uint8_t LOCAL_CTRL_GN1_1_0                       : 8;	/*  [1:0]     r/w 2'h0*/
		//uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		//uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		//uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t LOCAL_CTRL_G0_1_0                        : 8;	/*  [9:8]     r/w 2'h0*/
		//uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		//uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t LOCAL_CTRL_G1_1_0                        : 8;	/*[17:16]     r/w 2'h0*/
		//uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		//uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_PRESET_INDEX_3_0                      : 8;	/*[27:24]     r/w 4'h1*/
		//uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG6_t;
volatile TRX_TRAIN_REG6_t __xdata __at(PHY_REG_BASE + 0xc0c0) TRX_TRAIN_REG6;
#define reg_LOCAL_CTRL_GN1_1_0  TRX_TRAIN_REG6.BF.LOCAL_CTRL_GN1_1_0
#define reg_LOCAL_CTRL_G0_1_0  TRX_TRAIN_REG6.BF.LOCAL_CTRL_G0_1_0
#define reg_LOCAL_CTRL_G1_1_0  TRX_TRAIN_REG6.BF.LOCAL_CTRL_G1_1_0
#define reg_TX_PRESET_INDEX_3_0  TRX_TRAIN_REG6.BF.TX_PRESET_INDEX_3_0

// 0xc0c4	TRX_TRAIN_REG7		TRX training control register 7
typedef union {
	struct {
		uint8_t REMOTE_STATUS_GN1_1_0                    : 2;	/*  [1:0]       r   0*/
		uint8_t REMOTE_STATUS_G0_1_0                     : 2;	/*  [3:2]       r   0*/
		uint8_t REMOTE_STATUS_G1_1_0                     : 2;	/*  [5:4]       r   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_STATUS_ACK                        : 1;	/*      7       r   0*/
		uint8_t TRX_TRAIN_DONE                           : 1;	/*      8     r/w   0*/
		uint8_t TRX_TRAIN_PASS                           : 1;	/*      9     r/w   0*/
		uint8_t TRX_TRAIN_ON                             : 1;	/*     10     r/w   0*/
		uint8_t SET_TX_TRAIN_COMPLETE                    : 1;	/*     11     r/w   0*/
		uint8_t SET_TX_TRAIN_FAILED                      : 1;	/*     12     r/w   0*/
		uint8_t SET_RX_TRAIN_COMPLETE                    : 1;	/*     13     r/w   0*/
		uint8_t SET_RX_TRAIN_FAILED                      : 1;	/*     14     r/w   0*/
		uint8_t SET_TRX_TRAIN_FAILED                     : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TIMER_DFE_NORMAL_2_0                     : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t DFE_ROTATION_EN                          : 1;	/*     27     r/w   0*/
		uint8_t DFE_EO_UP_THRE_COARSE_3_0                : 4;	/*[31:28]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_REG7_t;
volatile TRX_TRAIN_REG7_t __xdata __at(PHY_REG_BASE + 0xc0c4) TRX_TRAIN_REG7;
#define reg_REMOTE_STATUS_GN1_1_0  TRX_TRAIN_REG7.BF.REMOTE_STATUS_GN1_1_0
#define reg_REMOTE_STATUS_G0_1_0  TRX_TRAIN_REG7.BF.REMOTE_STATUS_G0_1_0
#define reg_REMOTE_STATUS_G1_1_0  TRX_TRAIN_REG7.BF.REMOTE_STATUS_G1_1_0
#define reg_REMOTE_STATUS_ACK  TRX_TRAIN_REG7.BF.REMOTE_STATUS_ACK
#define reg_TRX_TRAIN_DONE  TRX_TRAIN_REG7.BF.TRX_TRAIN_DONE
#define reg_TRX_TRAIN_PASS  TRX_TRAIN_REG7.BF.TRX_TRAIN_PASS
#define reg_TRX_TRAIN_ON  TRX_TRAIN_REG7.BF.TRX_TRAIN_ON
#define reg_SET_TX_TRAIN_COMPLETE  TRX_TRAIN_REG7.BF.SET_TX_TRAIN_COMPLETE
#define reg_SET_TX_TRAIN_FAILED  TRX_TRAIN_REG7.BF.SET_TX_TRAIN_FAILED
#define reg_SET_RX_TRAIN_COMPLETE  TRX_TRAIN_REG7.BF.SET_RX_TRAIN_COMPLETE
#define reg_SET_RX_TRAIN_FAILED  TRX_TRAIN_REG7.BF.SET_RX_TRAIN_FAILED
#define reg_SET_TRX_TRAIN_FAILED  TRX_TRAIN_REG7.BF.SET_TRX_TRAIN_FAILED
#define reg_TIMER_DFE_NORMAL_2_0  TRX_TRAIN_REG7.BF.TIMER_DFE_NORMAL_2_0
#define reg_DFE_ROTATION_EN  TRX_TRAIN_REG7.BF.DFE_ROTATION_EN
#define reg_DFE_EO_UP_THRE_COARSE_3_0  TRX_TRAIN_REG7.BF.DFE_EO_UP_THRE_COARSE_3_0

// 0xc0c8	DFE_REG0		DFE Update Control
typedef union {
	struct {
		uint8_t DFE_STEP_FINE_FX_3_0                     : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t DFE_STEP_COARSE_FX_3_0                   : 4;	/*  [7:4]     r/w 4'h2*/
		uint8_t DFE_RES_1_0                              : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t DFE_LOCK_LEN_1_0                         : 2;	/*[11:10]     r/w 2'h3*/
		uint8_t DFE_LOCK                                 : 1;	/*     12       r   0*/
		uint8_t DFE_PAT_DIS                              : 1;	/*     13     r/w   1*/
		uint8_t DFE_SQ_EN                                : 1;	/*     14     r/w   1*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FX_FORCE_5_0                         : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t F0_SAT_HOLD_THRES_1_0                    : 2;	/*[23:22]     r/w 2'h2*/
		uint8_t DFE_UPDATE_EN_5_0                        : 8;	/*[29:24]     r/w 6'h0*/
		//uint8_t F0_SAT_HOLD                              : 1;	/*     30     r/w   0*/
		//uint8_t F0_SAT_EN                                : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG0_t;
volatile DFE_REG0_t __xdata __at(PHY_REG_BASE + 0xc0c8) DFE_REG0;
#define reg_DFE_STEP_FINE_FX_3_0  DFE_REG0.BF.DFE_STEP_FINE_FX_3_0
#define reg_DFE_STEP_COARSE_FX_3_0  DFE_REG0.BF.DFE_STEP_COARSE_FX_3_0
#define reg_DFE_RES_1_0  DFE_REG0.BF.DFE_RES_1_0
#define reg_DFE_LOCK_LEN_1_0  DFE_REG0.BF.DFE_LOCK_LEN_1_0
#define reg_DFE_LOCK  DFE_REG0.BF.DFE_LOCK
#define reg_DFE_PAT_DIS  DFE_REG0.BF.DFE_PAT_DIS
#define reg_DFE_SQ_EN  DFE_REG0.BF.DFE_SQ_EN
#define reg_DFE_FX_FORCE_5_0  DFE_REG0.BF.DFE_FX_FORCE_5_0
#define reg_F0_SAT_HOLD_THRES_1_0  DFE_REG0.BF.F0_SAT_HOLD_THRES_1_0
#define reg_DFE_UPDATE_EN_5_0  DFE_REG0.BF.DFE_UPDATE_EN_5_0
#define reg_F0_SAT_HOLD  DFE_REG0.BF.F0_SAT_HOLD
#define reg_F0_SAT_EN  DFE_REG0.BF.F0_SAT_EN

// 0xc0cc	DFE_REG1		DFE F0
typedef union {
	struct {
		uint8_t DFE_F1_EXT_5_0                           : 8;	/*  [5:0]     r/w 6'h0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F0_EXT_5_0                           : 8;	/* [13:8]     r/w 6'h20*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F3_EXT_3_0                           : 8;	/*[19:16]     r/w 4'h0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_F2_EXT_4_0                           : 8;	/*[28:24]     r/w 5'h0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG1_t;
volatile DFE_REG1_t __xdata __at(PHY_REG_BASE + 0xc0cc) DFE_REG1;
#define reg_DFE_F1_EXT_5_0  DFE_REG1.BF.DFE_F1_EXT_5_0
#define reg_DFE_F0_EXT_5_0  DFE_REG1.BF.DFE_F0_EXT_5_0
#define reg_DFE_F3_EXT_3_0  DFE_REG1.BF.DFE_F3_EXT_3_0
#define reg_DFE_F2_EXT_4_0  DFE_REG1.BF.DFE_F2_EXT_4_0

// 0xc0d0	DFE_REG2		DFE Coefficient Control / DFE F4-F5 Coefficient Control
typedef union {
	struct {
		uint8_t DFE_F5_EXT_3_0                           : 8;	/*  [3:0]     r/w 4'h0*/
		//uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F4_EXT_3_0                           : 8;	/* [11:8]     r/w 4'h0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t FF_EN_5_0                                : 8;	/*[21:16]     r/w 6'h0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t DFE_UPDATE_DIS                           : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t DFE_CONTROL_FROM_PIN                     : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG2_t;
volatile DFE_REG2_t __xdata __at(PHY_REG_BASE + 0xc0d0) DFE_REG2;
#define reg_DFE_F5_EXT_3_0  DFE_REG2.BF.DFE_F5_EXT_3_0
#define reg_DFE_F4_EXT_3_0  DFE_REG2.BF.DFE_F4_EXT_3_0
#define reg_FF_EN_5_0  DFE_REG2.BF.FF_EN_5_0
#define reg_DFE_UPDATE_DIS  DFE_REG2.BF.DFE_UPDATE_DIS
#define reg_DFE_CONTROL_FROM_PIN  DFE_REG2.BF.DFE_CONTROL_FROM_PIN

// 0xc0d4	DFE_REG3		DFE Coefficient Control /  Coefficient Control
typedef union {
	struct {
		uint8_t DFE_F1P5_EXT_4_0                         : 8;	/*  [4:0]     r/w 5'h0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F2P5_EXT_3_0                         : 8;	/* [11:8]     r/w 4'h0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t FF_EN_FXP5_DC_OS							 : 8;
		//uint8_t FF_EN_F1P5                               : 1;	/*     16     r/w   0*/
		//uint8_t FF_EN_F2P5                               : 1;	/*     17     r/w   0*/
		//uint8_t FF_EN_DC_OS                              : 1;	/*     18     r/w   0*/
		//uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG3_t;
volatile DFE_REG3_t __xdata __at(PHY_REG_BASE + 0xc0d4) DFE_REG3;
#define reg_DFE_F1P5_EXT_4_0  DFE_REG3.BF.DFE_F1P5_EXT_4_0
#define reg_DFE_F2P5_EXT_3_0  DFE_REG3.BF.DFE_F2P5_EXT_3_0
//#define reg_FF_EN_F1P5  DFE_REG3.BF.FF_EN_F1P5
//#define reg_FF_EN_F2P5  DFE_REG3.BF.FF_EN_F2P5
//#define reg_FF_EN_DC_OS  DFE_REG3.BF.FF_EN_DC_OS
#define reg_FF_EN_FXP5_DC_OS  DFE_REG3.BF.FF_EN_FXP5_DC_OS

// 0xc0d8	DFE_REG4		Adapted DFE Coefficient 0 f0
typedef union {
	struct {
		uint8_t DFE_F1_5_0                               : 8;	/*  [5:0]       r   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F0_5_0                               : 8;	/* [13:8]       r   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F3_3_0                               : 8;	/*[19:16]       r   0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_F2_4_0                               : 8;	/*[28:24]       r   0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG4_t;
volatile DFE_REG4_t __xdata __at(PHY_REG_BASE + 0xc0d8) DFE_REG4;
#define reg_DFE_F1_5_0  DFE_REG4.BF.DFE_F1_5_0
#define reg_DFE_F0_5_0  DFE_REG4.BF.DFE_F0_5_0
#define reg_DFE_F3_3_0  DFE_REG4.BF.DFE_F3_3_0
#define reg_DFE_F2_4_0  DFE_REG4.BF.DFE_F2_4_0

// 0xc0dc	DFE_REG5		DFE Miscellaneous Control / Adapted DFE Coefficient 1
typedef union {
	struct {
		uint8_t DFE_F5_3_0                               : 8;	/*  [3:0]       r   0*/
		//uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F4_3_0                               : 8;	/* [11:8]       r   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_SLICER_ODD_INV                       : 1;	/*     16     r/w   0*/
		uint8_t DFE_SLICER_ODD_EOM                       : 1;	/*     17     r/w   0*/
		uint8_t DFE_ODD_DO_INV                           : 1;	/*     18     r/w   0*/
		uint8_t DFE_ODD_DO_FORCE                         : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t DFE_ODD_SWITCH_EN                        : 1;	/*     21     r/w   1*/
		uint8_t EYE_CHK_ONE_TIME                         : 1;	/*     22     r/w   0*/
		uint8_t DFE_SEQ_ON                               : 1;	/*     23     r/w   0*/
		uint8_t DFE_F1_POLARITY                          : 1;	/*     24     r/w   0*/
		uint8_t DFE_F0_POLARITY                          : 1;	/*     25     r/w   0*/
		uint8_t DFE_F01_POLARITY_FORCE                   : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t SLICER_EN                                : 1;	/*     29     r/w   1*/
		uint8_t DFE_SQ_CLOCK_ON                          : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG5_t;
volatile DFE_REG5_t __xdata __at(PHY_REG_BASE + 0xc0dc) DFE_REG5;
#define reg_DFE_F5_3_0  DFE_REG5.BF.DFE_F5_3_0
#define reg_DFE_F4_3_0  DFE_REG5.BF.DFE_F4_3_0
#define reg_DFE_SLICER_ODD_INV  DFE_REG5.BF.DFE_SLICER_ODD_INV
#define reg_DFE_SLICER_ODD_EOM  DFE_REG5.BF.DFE_SLICER_ODD_EOM
#define reg_DFE_ODD_DO_INV  DFE_REG5.BF.DFE_ODD_DO_INV
#define reg_DFE_ODD_DO_FORCE  DFE_REG5.BF.DFE_ODD_DO_FORCE
#define reg_DFE_ODD_SWITCH_EN  DFE_REG5.BF.DFE_ODD_SWITCH_EN
#define reg_EYE_CHK_ONE_TIME  DFE_REG5.BF.EYE_CHK_ONE_TIME
#define reg_DFE_SEQ_ON  DFE_REG5.BF.DFE_SEQ_ON
#define reg_DFE_F1_POLARITY  DFE_REG5.BF.DFE_F1_POLARITY
#define reg_DFE_F0_POLARITY  DFE_REG5.BF.DFE_F0_POLARITY
#define reg_DFE_F01_POLARITY_FORCE  DFE_REG5.BF.DFE_F01_POLARITY_FORCE
#define reg_SLICER_EN  DFE_REG5.BF.SLICER_EN
#define reg_DFE_SQ_CLOCK_ON  DFE_REG5.BF.DFE_SQ_CLOCK_ON

// 0xc0e0	DFE_REG6		Adapted FFE Capacitor/Counter Control/Data Phase Offset Control
typedef union {
	struct {
		uint8_t F0T_5_0                                  : 6;	/*  [5:0]     r/w 6'h01*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t FFE_OS_INV                               : 1;	/*      8     r/w   0*/
		uint8_t ADAPTED_OS_PH_6_0                        : 7;	/* [15:9]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t TIMER_DFE_TRACKING_2_0                   : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG6_t;
volatile DFE_REG6_t __xdata __at(PHY_REG_BASE + 0xc0e0) DFE_REG6;
#define reg_F0T_5_0  DFE_REG6.BF.F0T_5_0
#define reg_FFE_OS_INV  DFE_REG6.BF.FFE_OS_INV
#define reg_ADAPTED_OS_PH_6_0  DFE_REG6.BF.ADAPTED_OS_PH_6_0
#define reg_TIMER_DFE_TRACKING_2_0  DFE_REG6.BF.TIMER_DFE_TRACKING_2_0

// 0xc0e4	DFE_REG7		DFE Sequential Monitor / Eye Threshold Mode Selection
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t EYE_CHECK_TIMEOUT_EN                     : 1;	/*      7     r/w   1*/
		uint8_t DFE_FXP5_FORCE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t FFE_OS_FORCE                             : 1;	/*     10     r/w   0*/
		uint8_t DFE_WAIT_TIME_SEL                        : 1;	/*     11     r/w   1*/
		uint8_t DFE_ODD_DO                               : 1;	/*     12     r/w   0*/
		uint8_t DFE_RUN_TIME_SEL                         : 1;	/*     13     r/w   1*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG7_t;
volatile DFE_REG7_t __xdata __at(PHY_REG_BASE + 0xc0e4) DFE_REG7;
#define reg_EYE_CHECK_TIMEOUT_EN  DFE_REG7.BF.EYE_CHECK_TIMEOUT_EN
#define reg_DFE_FXP5_FORCE_1_0  DFE_REG7.BF.DFE_FXP5_FORCE_1_0
#define reg_FFE_OS_FORCE  DFE_REG7.BF.FFE_OS_FORCE
#define reg_DFE_WAIT_TIME_SEL  DFE_REG7.BF.DFE_WAIT_TIME_SEL
#define reg_DFE_ODD_DO  DFE_REG7.BF.DFE_ODD_DO
#define reg_DFE_RUN_TIME_SEL  DFE_REG7.BF.DFE_RUN_TIME_SEL

// 0xc0e8	DFE_REG8		adapted edge result / DFE f1p5 and f2p5 control and other
typedef union {
	struct {
		uint8_t F1P5_OUT_4_0                             : 8;	/*  [4:0]       r   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F2P5_OUT_3_0                             : 8;	/* [11:8]       r   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F2P5_3_0                             : 8;	/*[19:16]       r   0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_F1P5_4_0                             : 8;	/*[28:24]       r   0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG8_t;
volatile DFE_REG8_t __xdata __at(PHY_REG_BASE + 0xc0e8) DFE_REG8;
#define reg_F1P5_OUT_4_0  DFE_REG8.BF.F1P5_OUT_4_0
#define reg_F2P5_OUT_3_0  DFE_REG8.BF.F2P5_OUT_3_0
#define reg_DFE_F2P5_3_0  DFE_REG8.BF.DFE_F2P5_3_0
#define reg_DFE_F1P5_4_0  DFE_REG8.BF.DFE_F1P5_4_0

// 0xc0ec	DFE_REG9		phase offset range / adapted edge result
typedef union {
	struct {
		uint8_t DFE_SETTLE_TIME_FFE_OS_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t FFE_OS_4_0                               : 8;	/* [12:8]       r   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t DFE_SETTLE_TIME_EN                       : 1;	/*     22     r/w   1*/
		uint8_t EDGE_SETTLE_TIME_EN                      : 1;	/*     23     r/w   1*/
		uint8_t DFE_SETTLE_TIME_F0_1_3_0                 : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t DFE_SETTLE_TIME_F2_5_3_0                 : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG9_t;
volatile DFE_REG9_t __xdata __at(PHY_REG_BASE + 0xc0ec) DFE_REG9;
#define reg_DFE_SETTLE_TIME_FFE_OS_3_0  DFE_REG9.BF.DFE_SETTLE_TIME_FFE_OS_3_0
#define reg_FFE_OS_4_0  DFE_REG9.BF.FFE_OS_4_0
#define reg_DFE_SETTLE_TIME_EN  DFE_REG9.BF.DFE_SETTLE_TIME_EN
#define reg_EDGE_SETTLE_TIME_EN  DFE_REG9.BF.EDGE_SETTLE_TIME_EN
#define reg_DFE_SETTLE_TIME_F0_1_3_0  DFE_REG9.BF.DFE_SETTLE_TIME_F0_1_3_0
#define reg_DFE_SETTLE_TIME_F2_5_3_0  DFE_REG9.BF.DFE_SETTLE_TIME_F2_5_3_0

// 0xc0f0	DFE_REG10		Saved DFE values
typedef union {
	struct {
		uint8_t SAV_F0_5_0                               : 8;	/*  [5:0]     r/w 6'h20*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SAV_F1P5_4_0                             : 8;	/* [12:8]     r/w 5'h0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SAV_F1_5_0                               : 8;	/*[21:16]     r/w 6'h0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SAV_F0D_5_0                              : 8;	/*[29:24]     r/w 6'h20*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG10_t;
volatile DFE_REG10_t __xdata __at(PHY_REG_BASE + 0xc0f0) DFE_REG10;
#define reg_SAV_F0_5_0  DFE_REG10.BF.SAV_F0_5_0
#define reg_SAV_F1P5_4_0  DFE_REG10.BF.SAV_F1P5_4_0
#define reg_SAV_F1_5_0  DFE_REG10.BF.SAV_F1_5_0
#define reg_SAV_F0D_5_0  DFE_REG10.BF.SAV_F0D_5_0

// 0xc0f4	DFE_REG11		Saved DFE values
typedef union {
	struct {
		uint8_t SAV_F3_3_0                               : 8;	/*  [3:0]     r/w 4'h0*/
		//uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SAV_F2_4_0                               : 8;	/* [12:8]     r/w 5'h0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SAV_F5_3_0                               : 8;	/*[19:16]     r/w 4'h0*/
		//uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SAV_F4_3_0                               : 8;	/*[27:24]     r/w 4'h0*/
		//uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG11_t;
volatile DFE_REG11_t __xdata __at(PHY_REG_BASE + 0xc0f4) DFE_REG11;
#define reg_SAV_F3_3_0  DFE_REG11.BF.SAV_F3_3_0
#define reg_SAV_F2_4_0  DFE_REG11.BF.SAV_F2_4_0
#define reg_SAV_F5_3_0  DFE_REG11.BF.SAV_F5_3_0
#define reg_SAV_F4_3_0  DFE_REG11.BF.SAV_F4_3_0

// 0xc0f8	DFE_REG12		to_ana_dfe_f read back value in 2c format
typedef union {
	struct {
		uint8_t DFE_F3_2C_7_0                            : 8;	/*  [7:0]       r   0*/
		uint8_t DFE_F2_2C_7_0                            : 8;	/* [15:8]       r   0*/
		uint8_t DFE_F1_2C_7_0                            : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG12_t;
volatile DFE_REG12_t __xdata __at(PHY_REG_BASE + 0xc0f8) DFE_REG12;
#define reg_DFE_F3_2C_7_0  DFE_REG12.BF.DFE_F3_2C_7_0
#define reg_DFE_F2_2C_7_0  DFE_REG12.BF.DFE_F2_2C_7_0
#define reg_DFE_F1_2C_7_0  DFE_REG12.BF.DFE_F1_2C_7_0

// 0xc0fc	DFE_REG13		to_ana_dfe_f read back value in 2c format
typedef union {
	struct {
		uint8_t DFE_F2P5_2C_7_0                          : 8;	/*  [7:0]       r   0*/
		uint8_t DFE_F1P5_2C_7_0                          : 8;	/* [15:8]       r   0*/
		uint8_t DFE_F5_2C_7_0                            : 8;	/*[23:16]       r   0*/
		uint8_t DFE_F4_2C_7_0                            : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG13_t;
volatile DFE_REG13_t __xdata __at(PHY_REG_BASE + 0xc0fc) DFE_REG13;
#define reg_DFE_F2P5_2C_7_0  DFE_REG13.BF.DFE_F2P5_2C_7_0
#define reg_DFE_F1P5_2C_7_0  DFE_REG13.BF.DFE_F1P5_2C_7_0
#define reg_DFE_F5_2C_7_0  DFE_REG13.BF.DFE_F5_2C_7_0
#define reg_DFE_F4_2C_7_0  DFE_REG13.BF.DFE_F4_2C_7_0

// 0xc100	DFE_REG14		int output
typedef union {
	struct {
		uint8_t F0_OUT_5_0                               : 8;	/*  [5:0]       r   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F1_OUT_5_0                               : 8;	/* [13:8]       r   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t F2_OUT_4_0                               : 8;	/*[20:16]       r   0*/
		//uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t F3_OUT_3_0                               : 8;	/*[27:24]       r   0*/
		//uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG14_t;
volatile DFE_REG14_t __xdata __at(PHY_REG_BASE + 0xc100) DFE_REG14;
#define reg_F0_OUT_5_0  DFE_REG14.BF.F0_OUT_5_0
#define reg_F1_OUT_5_0  DFE_REG14.BF.F1_OUT_5_0
#define reg_F2_OUT_4_0  DFE_REG14.BF.F2_OUT_4_0
#define reg_F3_OUT_3_0  DFE_REG14.BF.F3_OUT_3_0

// 0xc104	DFE_REG15		int output
typedef union {
	struct {
		uint8_t F4_OUT_3_0                               : 8;	/*  [3:0]       r   0*/
		//uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F5_OUT_3_0                               : 8;	/* [11:8]       r   0*/
		//uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		//uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		//uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		//uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DC_OS_OUT_5_0                            : 8;	/*[21:16]       r   0*/
		//uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		//uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t SAV_F2P5_3_0                             : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG15_t;
volatile DFE_REG15_t __xdata __at(PHY_REG_BASE + 0xc104) DFE_REG15;
#define reg_F4_OUT_3_0  DFE_REG15.BF.F4_OUT_3_0
#define reg_F5_OUT_3_0  DFE_REG15.BF.F5_OUT_3_0
#define reg_DC_OS_OUT_5_0  DFE_REG15.BF.DC_OS_OUT_5_0
#define reg_SAV_F2P5_3_0  DFE_REG15.BF.SAV_F2P5_3_0

// 0xc108	DFE_REG16		int output 2com
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t F1_OUT_2C_7_0                            : 8;	/* [15:8]       r   0*/
		uint8_t F2_OUT_2C_7_0                            : 8;	/*[23:16]       r   0*/
		uint8_t F3_OUT_2C_7_0                            : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG16_t;
volatile DFE_REG16_t __xdata __at(PHY_REG_BASE + 0xc108) DFE_REG16;
#define reg_F1_OUT_2C_7_0  DFE_REG16.BF.F1_OUT_2C_7_0
#define reg_F2_OUT_2C_7_0  DFE_REG16.BF.F2_OUT_2C_7_0
#define reg_F3_OUT_2C_7_0  DFE_REG16.BF.F3_OUT_2C_7_0

// 0xc10c	DFE_REG17		int output 2com
typedef union {
	struct {
		uint8_t F4_OUT_2C_7_0                            : 8;	/*  [7:0]       r   0*/
		uint8_t F5_OUT_2C_7_0                            : 8;	/* [15:8]       r   0*/
		uint8_t DC_OS_OUT_2C_7_0                         : 8;	/*[23:16]       r   0*/
		uint8_t SAV_DC_OS_4_0                            : 8;	/*[28:24]     r/w 5'h0*/
		//uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG17_t;
volatile DFE_REG17_t __xdata __at(PHY_REG_BASE + 0xc10c) DFE_REG17;
#define reg_F4_OUT_2C_7_0  DFE_REG17.BF.F4_OUT_2C_7_0
#define reg_F5_OUT_2C_7_0  DFE_REG17.BF.F5_OUT_2C_7_0
#define reg_DC_OS_OUT_2C_7_0  DFE_REG17.BF.DC_OS_OUT_2C_7_0
#define reg_SAV_DC_OS_4_0  DFE_REG17.BF.SAV_DC_OS_4_0

// 0xc110	DFE_REG18		int output 2com
typedef union {
	struct {
		uint8_t F1P5_OUT_2C_7_0                          : 8;	/*  [7:0]       r   0*/
		uint8_t F2P5_OUT_2C_7_0                          : 8;	/* [15:8]       r   0*/
		uint8_t F1_OUT_FRAC_7_0                          : 8;	/*[23:16]       r   0*/
		uint8_t DFE_UPDATE_EN_F1P5                       : 1;	/*     24     r/w   0*/
		uint8_t DFE_UPDATE_EN_F2P5                       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG18_t;
volatile DFE_REG18_t __xdata __at(PHY_REG_BASE + 0xc110) DFE_REG18;
#define reg_F1P5_OUT_2C_7_0  DFE_REG18.BF.F1P5_OUT_2C_7_0
#define reg_F2P5_OUT_2C_7_0  DFE_REG18.BF.F2P5_OUT_2C_7_0
#define reg_F1_OUT_FRAC_7_0  DFE_REG18.BF.F1_OUT_FRAC_7_0
#define reg_DFE_UPDATE_EN_F1P5  DFE_REG18.BF.DFE_UPDATE_EN_F1P5
#define reg_DFE_UPDATE_EN_F2P5  DFE_REG18.BF.DFE_UPDATE_EN_F2P5
#define reg_DFE_UPDATE_EN_FXP5	DFE_REG18.BT.B3

// 0xc114	DFE_REG19		DFE step size register
typedef union {
	struct {
		uint8_t DFE_STEP_COARSE_F0_3_0                   : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t DFE_STEP_FINE_F0_3_0                     : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_EO_UP_3_0                  : 4;	/* [11:8]     r/w 4'ha*/
		uint8_t DFE_STEP_FINE_EO_DN_3_0                  : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t DFE_STEP_ACCURATE_FX_3_0                 : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t DFE_STEP_ACCURATE_F0_3_0                 : 4;	/*[23:20]     r/w 4'h8*/
		uint8_t DFE_STEP_COARSE_EO_UP_3_0                : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t DFE_STEP_COARSE_EO_DN_3_0                : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG19_t;
volatile DFE_REG19_t __xdata __at(PHY_REG_BASE + 0xc114) DFE_REG19;
#define reg_DFE_STEP_COARSE_F0_3_0  DFE_REG19.BF.DFE_STEP_COARSE_F0_3_0
#define reg_DFE_STEP_FINE_F0_3_0  DFE_REG19.BF.DFE_STEP_FINE_F0_3_0
#define reg_DFE_STEP_FINE_EO_UP_3_0  DFE_REG19.BF.DFE_STEP_FINE_EO_UP_3_0
#define reg_DFE_STEP_FINE_EO_DN_3_0  DFE_REG19.BF.DFE_STEP_FINE_EO_DN_3_0
#define reg_DFE_STEP_ACCURATE_FX_3_0  DFE_REG19.BF.DFE_STEP_ACCURATE_FX_3_0
#define reg_DFE_STEP_ACCURATE_F0_3_0  DFE_REG19.BF.DFE_STEP_ACCURATE_F0_3_0
#define reg_DFE_STEP_COARSE_EO_UP_3_0  DFE_REG19.BF.DFE_STEP_COARSE_EO_UP_3_0
#define reg_DFE_STEP_COARSE_EO_DN_3_0  DFE_REG19.BF.DFE_STEP_COARSE_EO_DN_3_0

// 0xc118	DFE_REG20		DFE step size register
typedef union {
	struct {
		uint8_t DFE_STEP_FINE_OS_3_0                     : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t DFE_STEP_COARSE_OS_3_0                   : 4;	/*  [7:4]     r/w 4'h2*/
		uint8_t DFE_STEP_FINE_FXP5_3_0                   : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t DFE_STEP_COARSE_FXP5_3_0                 : 4;	/*[15:12]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCURATE_OS_3_0                 : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t DC_OS_USE_DFE_PATH                       : 1;	/*     20     r/w   0*/
		uint8_t DFE_UPDATE_EN_DC_OS                      : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_DC_OS_EXT_5_0                        : 8;	/*[29:24]     r/w 6'h0*/
		//uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		//uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG20_t;
volatile DFE_REG20_t __xdata __at(PHY_REG_BASE + 0xc118) DFE_REG20;
#define reg_DFE_STEP_FINE_OS_3_0  DFE_REG20.BF.DFE_STEP_FINE_OS_3_0
#define reg_DFE_STEP_COARSE_OS_3_0  DFE_REG20.BF.DFE_STEP_COARSE_OS_3_0
#define reg_DFE_STEP_FINE_FXP5_3_0  DFE_REG20.BF.DFE_STEP_FINE_FXP5_3_0
#define reg_DFE_STEP_COARSE_FXP5_3_0  DFE_REG20.BF.DFE_STEP_COARSE_FXP5_3_0
#define reg_DFE_STEP_ACCURATE_OS_3_0  DFE_REG20.BF.DFE_STEP_ACCURATE_OS_3_0
#define reg_DC_OS_USE_DFE_PATH  DFE_REG20.BF.DC_OS_USE_DFE_PATH
#define reg_DFE_UPDATE_EN_DC_OS  DFE_REG20.BF.DFE_UPDATE_EN_DC_OS
#define reg_DFE_DC_OS_EXT_5_0  DFE_REG20.BF.DFE_DC_OS_EXT_5_0

// 0xc11c	DFE_REG21		
typedef union {
	struct {
		uint8_t NORMAL_STATE_READY                       : 1;	/*      0     r/w   0*/
		uint8_t UPDATE_DFE_RESULT                        : 1;	/*      1     r/w   0*/
		uint8_t DFE_FINE_STEP_EN                         : 1;	/*      2     r/w   0*/
		uint8_t DFE_COARSE_STEP_EN                       : 1;	/*      3     r/w   0*/
		uint8_t EOM_READY                                : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t SEL_MU_F                                 : 1;	/*      7     r/w   0*/
		uint8_t EOM_EN                                   : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t EYE_CHK_TIMEOUT                          : 1;	/*     13       r   0*/
		uint8_t EYE_CHECK_DONE                           : 1;	/*     14       r   0*/
		uint8_t EYE_CHECK_START                          : 1;	/*     15     r/w   0*/
		uint8_t EOM_EN_ANALOG                            : 1;	/*     16     r/w   0*/
		uint8_t EOM_SYNC_DIV_EN                          : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t EOM_OS_DELTA_C_6_0                       : 7;	/*[30:24]     r/w   0*/
		uint8_t EOM_OS_VALID_C                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG21_t;
volatile DFE_REG21_t __xdata __at(PHY_REG_BASE + 0xc11c) DFE_REG21;
#define reg_NORMAL_STATE_READY  DFE_REG21.BF.NORMAL_STATE_READY
#define reg_UPDATE_DFE_RESULT  DFE_REG21.BF.UPDATE_DFE_RESULT
#define reg_DFE_FINE_STEP_EN  DFE_REG21.BF.DFE_FINE_STEP_EN
#define reg_DFE_COARSE_STEP_EN  DFE_REG21.BF.DFE_COARSE_STEP_EN
#define reg_EOM_READY  DFE_REG21.BF.EOM_READY
#define reg_SEL_MU_F  DFE_REG21.BF.SEL_MU_F
#define reg_EOM_EN  DFE_REG21.BF.EOM_EN
#define reg_EYE_CHK_TIMEOUT  DFE_REG21.BF.EYE_CHK_TIMEOUT
#define reg_EYE_CHECK_DONE  DFE_REG21.BF.EYE_CHECK_DONE
#define reg_EYE_CHECK_START  DFE_REG21.BF.EYE_CHECK_START
#define reg_EOM_EN_ANALOG  DFE_REG21.BF.EOM_EN_ANALOG
#define reg_EOM_SYNC_DIV_EN  DFE_REG21.BF.EOM_SYNC_DIV_EN
#define reg_EOM_OS_DELTA_C_6_0  DFE_REG21.BF.EOM_OS_DELTA_C_6_0
#define reg_EOM_OS_VALID_C  DFE_REG21.BF.EOM_OS_VALID_C

// 0xc120	DFE_REG22		
typedef union {
	struct {
		uint8_t EYE_THRES_5_0                            : 8;	/*  [5:0]     r/w 6'h0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t FFE_SMALLGAIN_EN_1_0                     : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TRAINING_TIME_UP                         : 1;	/*     24       r   0*/
		uint8_t TRAINING_TIMER_CLEAR                     : 1;	/*     25     r/w   0*/
		uint8_t TRAINING_TIMER_START                     : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t DFE_TIME_UP                              : 1;	/*     28       r   0*/
		uint8_t DFE_TIMER_CLEAR                          : 1;	/*     29     r/w   0*/
		uint8_t DFE_TIMER_START                          : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG22_t;
volatile DFE_REG22_t __xdata __at(PHY_REG_BASE + 0xc120) DFE_REG22;
#define reg_EYE_THRES_5_0  DFE_REG22.BF.EYE_THRES_5_0
#define reg_FFE_SMALLGAIN_EN_1_0  DFE_REG22.BF.FFE_SMALLGAIN_EN_1_0
#define reg_TRAINING_TIME_UP  DFE_REG22.BF.TRAINING_TIME_UP
#define reg_TRAINING_TIMER_CLEAR  DFE_REG22.BF.TRAINING_TIMER_CLEAR
#define reg_TRAINING_TIMER_START  DFE_REG22.BF.TRAINING_TIMER_START
#define reg_DFE_TIME_UP  DFE_REG22.BF.DFE_TIME_UP
#define reg_DFE_TIMER_CLEAR  DFE_REG22.BF.DFE_TIMER_CLEAR
#define reg_DFE_TIMER_START  DFE_REG22.BF.DFE_TIMER_START

// 0xc124	DFE_REG23		
typedef union {
	struct {
		uint8_t DFE_TIMER_31_0_b0                        : 8;	/* [31:0]     r/w 32'h8000*/
		uint8_t DFE_TIMER_31_0_b1                        : 8;	/* [31:0]     r/w 32'h8000*/
		uint8_t DFE_TIMER_31_0_b2                        : 8;	/* [31:0]     r/w 32'h8000*/
		uint8_t DFE_TIMER_31_0_b3                        : 8;	/* [31:0]     r/w 32'h8000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG23_t;
volatile DFE_REG23_t __xdata __at(PHY_REG_BASE + 0xc124) DFE_REG23;
#define reg_DFE_TIMER_31_0_b0  DFE_REG23.BF.DFE_TIMER_31_0_b0
#define reg_DFE_TIMER_31_0_b1  DFE_REG23.BF.DFE_TIMER_31_0_b1
#define reg_DFE_TIMER_31_0_b2  DFE_REG23.BF.DFE_TIMER_31_0_b2
#define reg_DFE_TIMER_31_0_b3  DFE_REG23.BF.DFE_TIMER_31_0_b3

// 0xc128	DFE_REG24		
typedef union {
	struct {
		uint8_t TRAINING_TIMER_15_0_b0                   : 8;	/* [15:0]     r/w 16'h1f4*/
		uint8_t TRAINING_TIMER_15_0_b1                   : 8;	/* [15:0]     r/w 16'h1f4*/
		uint8_t EYE_ERR_SATURATE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t EYE_CHECK_THRE_7_0                       : 8;	/*[31:24]     r/w 8'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG24_t;
volatile DFE_REG24_t __xdata __at(PHY_REG_BASE + 0xc128) DFE_REG24;
#define reg_TRAINING_TIMER_15_0_b0  DFE_REG24.BF.TRAINING_TIMER_15_0_b0
#define reg_TRAINING_TIMER_15_0_b1  DFE_REG24.BF.TRAINING_TIMER_15_0_b1
#define reg_EYE_ERR_SATURATE_7_0  DFE_REG24.BF.EYE_ERR_SATURATE_7_0
#define reg_EYE_CHECK_THRE_7_0  DFE_REG24.BF.EYE_CHECK_THRE_7_0

// 0xc12c	DFE_REG25		
typedef union {
	struct {
		uint8_t EYE_ERROR_31_0_b0                        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EYE_ERROR_31_0_b1                        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EYE_ERROR_31_0_b2                        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EYE_ERROR_31_0_b3                        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG25_t;
volatile DFE_REG25_t __xdata __at(PHY_REG_BASE + 0xc12c) DFE_REG25;
#define reg_EYE_ERROR_31_0_b0  DFE_REG25.BF.EYE_ERROR_31_0_b0
#define reg_EYE_ERROR_31_0_b1  DFE_REG25.BF.EYE_ERROR_31_0_b1
#define reg_EYE_ERROR_31_0_b2  DFE_REG25.BF.EYE_ERROR_31_0_b2
#define reg_EYE_ERROR_31_0_b3  DFE_REG25.BF.EYE_ERROR_31_0_b3

// 0xc130	DFE_REG26		
typedef union {
	struct {
		uint8_t EYE_CHECK_CNT_VOTE_31_0_b0               : 8;	/* [31:0]     r/w 32'h400000*/
		uint8_t EYE_CHECK_CNT_VOTE_31_0_b1               : 8;	/* [31:0]     r/w 32'h400000*/
		uint8_t EYE_CHECK_CNT_VOTE_31_0_b2               : 8;	/* [31:0]     r/w 32'h400000*/
		uint8_t EYE_CHECK_CNT_VOTE_31_0_b3               : 8;	/* [31:0]     r/w 32'h400000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG26_t;
volatile DFE_REG26_t __xdata __at(PHY_REG_BASE + 0xc130) DFE_REG26;
#define reg_EYE_CHECK_CNT_VOTE_31_0_b0  DFE_REG26.BF.EYE_CHECK_CNT_VOTE_31_0_b0
#define reg_EYE_CHECK_CNT_VOTE_31_0_b1  DFE_REG26.BF.EYE_CHECK_CNT_VOTE_31_0_b1
#define reg_EYE_CHECK_CNT_VOTE_31_0_b2  DFE_REG26.BF.EYE_CHECK_CNT_VOTE_31_0_b2
#define reg_EYE_CHECK_CNT_VOTE_31_0_b3  DFE_REG26.BF.EYE_CHECK_CNT_VOTE_31_0_b3

// 0xc134	DFE_REG27		
typedef union {
	struct {
		uint8_t DFE_F0_SEL_1_0                           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_F1_SEL_1_0                           : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t DFE_F2_SEL_1_0                           : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DFE_F3_SEL_1_0                           : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_SEL_1_0                           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t DFE_F5_SEL_1_0                           : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t DFE_F1P5_SEL_1_0                         : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t DFE_F2P5_SEL_1_0                         : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F0_POL_SEL_1_0                       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t DFE_F1_POL_SEL_1_0                       : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t DFE_FFE_OS_SEL_1_0                       : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_REG27_t;
volatile DFE_REG27_t __xdata __at(PHY_REG_BASE + 0xc134) DFE_REG27;
#define reg_DFE_F0_SEL_1_0  DFE_REG27.BF.DFE_F0_SEL_1_0
#define reg_DFE_F1_SEL_1_0  DFE_REG27.BF.DFE_F1_SEL_1_0
#define reg_DFE_F2_SEL_1_0  DFE_REG27.BF.DFE_F2_SEL_1_0
#define reg_DFE_F3_SEL_1_0  DFE_REG27.BF.DFE_F3_SEL_1_0
#define reg_DFE_F4_SEL_1_0  DFE_REG27.BF.DFE_F4_SEL_1_0
#define reg_DFE_F5_SEL_1_0  DFE_REG27.BF.DFE_F5_SEL_1_0
#define reg_DFE_F1P5_SEL_1_0  DFE_REG27.BF.DFE_F1P5_SEL_1_0
#define reg_DFE_F2P5_SEL_1_0  DFE_REG27.BF.DFE_F2P5_SEL_1_0
#define reg_DFE_F0_POL_SEL_1_0  DFE_REG27.BF.DFE_F0_POL_SEL_1_0
#define reg_DFE_F1_POL_SEL_1_0  DFE_REG27.BF.DFE_F1_POL_SEL_1_0
#define reg_DFE_FFE_OS_SEL_1_0  DFE_REG27.BF.DFE_FFE_OS_SEL_1_0

// 0xc138	REG1_DEBUG		
typedef union {
	struct {
		uint8_t REG1_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG1_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG1_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG1_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG1_DEBUG_t;
volatile REG1_DEBUG_t __xdata __at(PHY_REG_BASE + 0xc138) REG1_DEBUG;
#define reg_REG1_DEBUG0_7_0  REG1_DEBUG.BF.REG1_DEBUG0_7_0
#define reg_REG1_DEBUG1_7_0  REG1_DEBUG.BF.REG1_DEBUG1_7_0
#define reg_REG1_DEBUG2_7_0  REG1_DEBUG.BF.REG1_DEBUG2_7_0
#define reg_REG1_DEBUG3_7_0  REG1_DEBUG.BF.REG1_DEBUG3_7_0

// 0xc140	EOM_REG1		EOM Circuit Control
typedef union {
	struct {
		uint8_t EOM_SAM_VLD_TIME_2_0                     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t EOM_MEASURE_STATE_1_0                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CKALIGN_EOMINTP_EN                       : 1;	/*     16     r/w   0*/
		uint8_t CKALIGN_EOMINTP_SEL                      : 1;	/*     17     r/w   0*/
		uint8_t EOM_INTP_EN                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t EOM_CKALIGN_EN                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG1_t;
volatile EOM_REG1_t __xdata __at(PHY_REG_BASE + 0xc140) EOM_REG1;
#define reg_EOM_SAM_VLD_TIME_2_0  EOM_REG1.BF.EOM_SAM_VLD_TIME_2_0
#define reg_EOM_MEASURE_STATE_1_0  EOM_REG1.BF.EOM_MEASURE_STATE_1_0
#define reg_CKALIGN_EOMINTP_EN  EOM_REG1.BF.CKALIGN_EOMINTP_EN
#define reg_CKALIGN_EOMINTP_SEL  EOM_REG1.BF.CKALIGN_EOMINTP_SEL
#define reg_EOM_INTP_EN  EOM_REG1.BF.EOM_INTP_EN
#define reg_EOM_CKALIGN_EN  EOM_REG1.BF.EOM_CKALIGN_EN

// 0xc144	EOM_SET1_REG1		EOM Set 1 Control 0
typedef union {
	struct {
		uint8_t EOM_SET1_VOLTAGE_5_0                     : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t EOM_SET1_SIGN_BIT_1_0                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t EOM_SET1_VLD                             : 1;	/*     13     r/w   0*/
		uint8_t EOM_SET1_STOP_EN_1_0                     : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t EOM_SET1_PHASE_6_0                       : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t EOM_SET1_STOP_STS_2_0                    : 3;	/*[30:28]       r   0*/
		uint8_t EOM_SET1_RDY                             : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG1_t;
volatile EOM_SET1_REG1_t __xdata __at(PHY_REG_BASE + 0xc144) EOM_SET1_REG1;
#define reg_EOM_SET1_VOLTAGE_5_0  EOM_SET1_REG1.BF.EOM_SET1_VOLTAGE_5_0
#define reg_EOM_SET1_SIGN_BIT_1_0  EOM_SET1_REG1.BF.EOM_SET1_SIGN_BIT_1_0
#define reg_EOM_SET1_VLD  EOM_SET1_REG1.BF.EOM_SET1_VLD
#define reg_EOM_SET1_STOP_EN_1_0  EOM_SET1_REG1.BF.EOM_SET1_STOP_EN_1_0
#define reg_EOM_SET1_PHASE_6_0  EOM_SET1_REG1.BF.EOM_SET1_PHASE_6_0
#define reg_EOM_SET1_STOP_STS_2_0  EOM_SET1_REG1.BF.EOM_SET1_STOP_STS_2_0
#define reg_EOM_SET1_RDY  EOM_SET1_REG1.BF.EOM_SET1_RDY

// 0xc148	EOM_SET1_REG2		EOM Set 1 Population Counter 0
typedef union {
	struct {
		uint8_t EOM_SET1_POP_CNT_63_32_b0                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_POP_CNT_63_32_b1                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_POP_CNT_63_32_b2                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_POP_CNT_63_32_b3                : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG2_t;
volatile EOM_SET1_REG2_t __xdata __at(PHY_REG_BASE + 0xc148) EOM_SET1_REG2;
#define reg_EOM_SET1_POP_CNT_63_32_b0  EOM_SET1_REG2.BF.EOM_SET1_POP_CNT_63_32_b0
#define reg_EOM_SET1_POP_CNT_63_32_b1  EOM_SET1_REG2.BF.EOM_SET1_POP_CNT_63_32_b1
#define reg_EOM_SET1_POP_CNT_63_32_b2  EOM_SET1_REG2.BF.EOM_SET1_POP_CNT_63_32_b2
#define reg_EOM_SET1_POP_CNT_63_32_b3  EOM_SET1_REG2.BF.EOM_SET1_POP_CNT_63_32_b3

// 0xc14c	EOM_SET1_REG3		EOM Set 1 Population Counter 1
typedef union {
	struct {
		uint8_t EOM_SET1_POP_CNT_31_0_b0                 : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_POP_CNT_31_0_b1                 : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_POP_CNT_31_0_b2                 : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_POP_CNT_31_0_b3                 : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG3_t;
volatile EOM_SET1_REG3_t __xdata __at(PHY_REG_BASE + 0xc14c) EOM_SET1_REG3;
#define reg_EOM_SET1_POP_CNT_31_0_b0  EOM_SET1_REG3.BF.EOM_SET1_POP_CNT_31_0_b0
#define reg_EOM_SET1_POP_CNT_31_0_b1  EOM_SET1_REG3.BF.EOM_SET1_POP_CNT_31_0_b1
#define reg_EOM_SET1_POP_CNT_31_0_b2  EOM_SET1_REG3.BF.EOM_SET1_POP_CNT_31_0_b2
#define reg_EOM_SET1_POP_CNT_31_0_b3  EOM_SET1_REG3.BF.EOM_SET1_POP_CNT_31_0_b3

// 0xc150	EOM_SET1_REG4		EOM Set 1 Threshold Counter 0
typedef union {
	struct {
		uint8_t EOM_SET1_THRE_CNT_63_32_b0               : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_THRE_CNT_63_32_b1               : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_THRE_CNT_63_32_b2               : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_THRE_CNT_63_32_b3               : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG4_t;
volatile EOM_SET1_REG4_t __xdata __at(PHY_REG_BASE + 0xc150) EOM_SET1_REG4;
#define reg_EOM_SET1_THRE_CNT_63_32_b0  EOM_SET1_REG4.BF.EOM_SET1_THRE_CNT_63_32_b0
#define reg_EOM_SET1_THRE_CNT_63_32_b1  EOM_SET1_REG4.BF.EOM_SET1_THRE_CNT_63_32_b1
#define reg_EOM_SET1_THRE_CNT_63_32_b2  EOM_SET1_REG4.BF.EOM_SET1_THRE_CNT_63_32_b2
#define reg_EOM_SET1_THRE_CNT_63_32_b3  EOM_SET1_REG4.BF.EOM_SET1_THRE_CNT_63_32_b3

// 0xc154	EOM_SET1_REG5		EOM Set 1 Threshold Counter 1
typedef union {
	struct {
		uint8_t EOM_SET1_THRE_CNT_31_0_b0                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_THRE_CNT_31_0_b1                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_THRE_CNT_31_0_b2                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t EOM_SET1_THRE_CNT_31_0_b3                : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG5_t;
volatile EOM_SET1_REG5_t __xdata __at(PHY_REG_BASE + 0xc154) EOM_SET1_REG5;
#define reg_EOM_SET1_THRE_CNT_31_0_b0  EOM_SET1_REG5.BF.EOM_SET1_THRE_CNT_31_0_b0
#define reg_EOM_SET1_THRE_CNT_31_0_b1  EOM_SET1_REG5.BF.EOM_SET1_THRE_CNT_31_0_b1
#define reg_EOM_SET1_THRE_CNT_31_0_b2  EOM_SET1_REG5.BF.EOM_SET1_THRE_CNT_31_0_b2
#define reg_EOM_SET1_THRE_CNT_31_0_b3  EOM_SET1_REG5.BF.EOM_SET1_THRE_CNT_31_0_b3

// 0xc158	EOM_SET1_REG6		EOM Set 1 Sample Counter 0
typedef union {
	struct {
		uint8_t EOM_SET1_SAMPLE_CNT_63_32_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_SAMPLE_CNT_63_32_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_SAMPLE_CNT_63_32_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_SAMPLE_CNT_63_32_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG6_t;
volatile EOM_SET1_REG6_t __xdata __at(PHY_REG_BASE + 0xc158) EOM_SET1_REG6;
#define reg_EOM_SET1_SAMPLE_CNT_63_32_b0  EOM_SET1_REG6.BF.EOM_SET1_SAMPLE_CNT_63_32_b0
#define reg_EOM_SET1_SAMPLE_CNT_63_32_b1  EOM_SET1_REG6.BF.EOM_SET1_SAMPLE_CNT_63_32_b1
#define reg_EOM_SET1_SAMPLE_CNT_63_32_b2  EOM_SET1_REG6.BF.EOM_SET1_SAMPLE_CNT_63_32_b2
#define reg_EOM_SET1_SAMPLE_CNT_63_32_b3  EOM_SET1_REG6.BF.EOM_SET1_SAMPLE_CNT_63_32_b3

// 0xc15c	EOM_SET1_REG7		EOM Set 1 Sample Counter 1
typedef union {
	struct {
		uint8_t EOM_SET1_SAMPLE_CNT_31_0_b0              : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_SAMPLE_CNT_31_0_b1              : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_SAMPLE_CNT_31_0_b2              : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_SAMPLE_CNT_31_0_b3              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG7_t;
volatile EOM_SET1_REG7_t __xdata __at(PHY_REG_BASE + 0xc15c) EOM_SET1_REG7;
#define reg_EOM_SET1_SAMPLE_CNT_31_0_b0  EOM_SET1_REG7.BF.EOM_SET1_SAMPLE_CNT_31_0_b0
#define reg_EOM_SET1_SAMPLE_CNT_31_0_b1  EOM_SET1_REG7.BF.EOM_SET1_SAMPLE_CNT_31_0_b1
#define reg_EOM_SET1_SAMPLE_CNT_31_0_b2  EOM_SET1_REG7.BF.EOM_SET1_SAMPLE_CNT_31_0_b2
#define reg_EOM_SET1_SAMPLE_CNT_31_0_b3  EOM_SET1_REG7.BF.EOM_SET1_SAMPLE_CNT_31_0_b3

// 0xc160	EOM_SET1_REG8		EOM Set 1 Error Counter 0
typedef union {
	struct {
		uint8_t EOM_SET1_ERROR_CNT_63_32_b0              : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_ERROR_CNT_63_32_b1              : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_ERROR_CNT_63_32_b2              : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_ERROR_CNT_63_32_b3              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG8_t;
volatile EOM_SET1_REG8_t __xdata __at(PHY_REG_BASE + 0xc160) EOM_SET1_REG8;
#define reg_EOM_SET1_ERROR_CNT_63_32_b0  EOM_SET1_REG8.BF.EOM_SET1_ERROR_CNT_63_32_b0
#define reg_EOM_SET1_ERROR_CNT_63_32_b1  EOM_SET1_REG8.BF.EOM_SET1_ERROR_CNT_63_32_b1
#define reg_EOM_SET1_ERROR_CNT_63_32_b2  EOM_SET1_REG8.BF.EOM_SET1_ERROR_CNT_63_32_b2
#define reg_EOM_SET1_ERROR_CNT_63_32_b3  EOM_SET1_REG8.BF.EOM_SET1_ERROR_CNT_63_32_b3

// 0xc164	EOM_SET1_REG9		EOM Set 1 Error Counter 1
typedef union {
	struct {
		uint8_t EOM_SET1_ERROR_CNT_31_0_b0               : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_ERROR_CNT_31_0_b1               : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_ERROR_CNT_31_0_b2               : 8;	/* [31:0]       r   0*/
		uint8_t EOM_SET1_ERROR_CNT_31_0_b3               : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_SET1_REG9_t;
volatile EOM_SET1_REG9_t __xdata __at(PHY_REG_BASE + 0xc164) EOM_SET1_REG9;
#define reg_EOM_SET1_ERROR_CNT_31_0_b0  EOM_SET1_REG9.BF.EOM_SET1_ERROR_CNT_31_0_b0
#define reg_EOM_SET1_ERROR_CNT_31_0_b1  EOM_SET1_REG9.BF.EOM_SET1_ERROR_CNT_31_0_b1
#define reg_EOM_SET1_ERROR_CNT_31_0_b2  EOM_SET1_REG9.BF.EOM_SET1_ERROR_CNT_31_0_b2
#define reg_EOM_SET1_ERROR_CNT_31_0_b3  EOM_SET1_REG9.BF.EOM_SET1_ERROR_CNT_31_0_b3

// 0xc168	PLLINTP_REG0		Forward Divider / Feedback Divider
typedef union {
	struct {
		uint8_t PHY_GEN_FORCE                            : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t INTP_BIAS_EN                             : 1;	/*     23     r/w   1*/
		uint8_t HPF_BW_1_0                               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t PLLVDD09_3_0                             : 4;	/*[31:28]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLLINTP_REG0_t;
volatile PLLINTP_REG0_t __xdata __at(PHY_REG_BASE + 0xc168) PLLINTP_REG0;
#define reg_PHY_GEN_FORCE  PLLINTP_REG0.BF.PHY_GEN_FORCE
#define reg_INTP_BIAS_EN  PLLINTP_REG0.BF.INTP_BIAS_EN
#define reg_HPF_BW_1_0  PLLINTP_REG0.BF.HPF_BW_1_0
#define reg_PLLVDD09_3_0  PLLINTP_REG0.BF.PLLVDD09_3_0

// 0xc16c	PLLINTP_REG1		PLL Bandwidth Adjust 
typedef union {
	struct {
		uint8_t SQ_DEGLITCH_WIDTH_P_3_0                  : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t SQ_DEGLITCH_WIDTH_N_3_0                  : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t SQ_DEGLITCH_EN                           : 1;	/*      8     r/w   0*/
		uint8_t SQ_GATE_RXDATA_EN                        : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t EXT_SPEED_FBRES_5_0                      : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t EXT_SP_FBRES_EN                          : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t PPD_RECOVERED                            : 1;	/*     29       r   0*/
		uint8_t PWRSEQ_CAL_MAX_SPEED_EN                  : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLLINTP_REG1_t;
volatile PLLINTP_REG1_t __xdata __at(PHY_REG_BASE + 0xc16c) PLLINTP_REG1;
#define reg_SQ_DEGLITCH_WIDTH_P_3_0  PLLINTP_REG1.BF.SQ_DEGLITCH_WIDTH_P_3_0
#define reg_SQ_DEGLITCH_WIDTH_N_3_0  PLLINTP_REG1.BF.SQ_DEGLITCH_WIDTH_N_3_0
#define reg_SQ_DEGLITCH_EN  PLLINTP_REG1.BF.SQ_DEGLITCH_EN
#define reg_SQ_GATE_RXDATA_EN  PLLINTP_REG1.BF.SQ_GATE_RXDATA_EN
#define reg_EXT_SPEED_FBRES_5_0  PLLINTP_REG1.BF.EXT_SPEED_FBRES_5_0
#define reg_EXT_SP_FBRES_EN  PLLINTP_REG1.BF.EXT_SP_FBRES_EN
#define reg_PPD_RECOVERED  PLLINTP_REG1.BF.PPD_RECOVERED
#define reg_PWRSEQ_CAL_MAX_SPEED_EN  PLLINTP_REG1.BF.PWRSEQ_CAL_MAX_SPEED_EN

// 0xc170	SQ_REG0		SQ calibration / squelch glitch filter control
typedef union {
	struct {
		uint8_t SQ_LPF_15_0_b0                           : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t SQ_LPF_15_0_b1                           : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t SQ_LPF_EN_NON_OOB                        : 1;	/*     16     r/w   0*/
		uint8_t SQ_OOB_SEL_FM_REG                        : 1;	/*     17     r/w   0*/
		uint8_t SQ_LPF_EN_OOB                            : 1;	/*     18     r/w   0*/
		uint8_t SQ_OOB_SEL                               : 1;	/*     19     r/w   0*/
		uint8_t SQDETCAP_OOB_1_0                         : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t SQDETCAP_NON_OOB_1_0                     : 2;	/*[23:22]     r/w 2'h1*/
		uint8_t SQ_VCM_IN_SEL_1_0                        : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t PU_SQ_FM_REG                             : 1;	/*     26     r/w   0*/
		uint8_t PU_SQ                                    : 1;	/*     27     r/w   1*/
		uint8_t SQDETI_OOB_1_0                           : 2;	/*[29:28]     r/w 2'h3*/
		uint8_t SQDETI_NON_OOB_1_0                       : 2;	/*[31:30]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_REG0_t;
volatile SQ_REG0_t __xdata __at(PHY_REG_BASE + 0xc170) SQ_REG0;
#define reg_SQ_LPF_15_0_b0  SQ_REG0.BF.SQ_LPF_15_0_b0
#define reg_SQ_LPF_15_0_b1  SQ_REG0.BF.SQ_LPF_15_0_b1
#define reg_SQ_LPF_EN_NON_OOB  SQ_REG0.BF.SQ_LPF_EN_NON_OOB
#define reg_SQ_OOB_SEL_FM_REG  SQ_REG0.BF.SQ_OOB_SEL_FM_REG
#define reg_SQ_LPF_EN_OOB  SQ_REG0.BF.SQ_LPF_EN_OOB
#define reg_SQ_OOB_SEL  SQ_REG0.BF.SQ_OOB_SEL
#define reg_SQDETCAP_OOB_1_0  SQ_REG0.BF.SQDETCAP_OOB_1_0
#define reg_SQDETCAP_NON_OOB_1_0  SQ_REG0.BF.SQDETCAP_NON_OOB_1_0
#define reg_SQ_VCM_IN_SEL_1_0  SQ_REG0.BF.SQ_VCM_IN_SEL_1_0
#define reg_PU_SQ_FM_REG  SQ_REG0.BF.PU_SQ_FM_REG
#define reg_PU_SQ  SQ_REG0.BF.PU_SQ
#define reg_SQDETI_OOB_1_0  SQ_REG0.BF.SQDETI_OOB_1_0
#define reg_SQDETI_NON_OOB_1_0  SQ_REG0.BF.SQDETI_NON_OOB_1_0

// 0xc174	FFE_REG		FFE control retgister
typedef union {
	struct {
		uint8_t FFE_OS_EXT_4_0                           : 8;	/*  [4:0]     r/w 5'h0*/
		//uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		//uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SEL_EDGE_EQ                              : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t DFE_EO_EN                                : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t DFE_F0B_EN                               : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t FFE_OS_CANCEL_EN                         : 1;	/*     16     r/w   0*/
		uint8_t SEL_FFE_VCM_1_0                          : 2;	/*[18:17]     r/w 2'h1*/
		uint8_t SELLV_FFE_2_0                            : 3;	/*[21:19]     r/w 3'h3*/
		uint8_t FFE_IPP_SEL_1_0                          : 2;	/*[23:22]     r/w 2'h1*/
		uint8_t FFE_IPTAT_SEL_1_0                        : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t FFE_NCURR_VDS_SEL_1_0                    : 2;	/*[27:26]     r/w 2'h1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FFE_REG_t;
volatile FFE_REG_t __xdata __at(PHY_REG_BASE + 0xc174) FFE_REG;
#define reg_FFE_OS_EXT_4_0  FFE_REG.BF.FFE_OS_EXT_4_0
#define reg_SEL_EDGE_EQ  FFE_REG.BF.SEL_EDGE_EQ
#define reg_DFE_EO_EN  FFE_REG.BF.DFE_EO_EN
#define reg_DFE_F0B_EN  FFE_REG.BF.DFE_F0B_EN
#define reg_FFE_OS_CANCEL_EN  FFE_REG.BF.FFE_OS_CANCEL_EN
#define reg_SEL_FFE_VCM_1_0  FFE_REG.BF.SEL_FFE_VCM_1_0
#define reg_SELLV_FFE_2_0  FFE_REG.BF.SELLV_FFE_2_0
#define reg_FFE_IPP_SEL_1_0  FFE_REG.BF.FFE_IPP_SEL_1_0
#define reg_FFE_IPTAT_SEL_1_0  FFE_REG.BF.FFE_IPTAT_SEL_1_0
#define reg_FFE_NCURR_VDS_SEL_1_0  FFE_REG.BF.FFE_NCURR_VDS_SEL_1_0

// 0xc178	DME_REG0		DME control register 0 / differential manchester encoding registers
typedef union {
	struct {
		uint8_t DME_DEC_MODE_1_0                         : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DME_ENC_MODE_1_0                         : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t CTRL_BIT_POS_1_0                         : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TX_TRAIN_PAT_TOGGLE                      : 1;	/*      6     r/w   1*/
		uint8_t ETHERNET_MODE                            : 1;	/*      7     r/w   0*/
		uint8_t BALANCE_CHK_EN                           : 1;	/*      8     r/w   1*/
		uint8_t TX_TRAIN_PAT_MODE                        : 1;	/*      9     r/w   1*/
		uint8_t TX_TRAIN_PAT_TWO_ZERO                    : 1;	/*     10     r/w   0*/
		uint8_t DEC_ERR_CHK_EN                           : 1;	/*     11     r/w   1*/
		uint8_t DME_DEC_BALANCE_INV                      : 1;	/*     12     r/w   0*/
		uint8_t DME_DEC_RPT_EN                           : 1;	/*     13     r/w   1*/
		uint8_t DME_ENC_BALANCE_INV                      : 1;	/*     14     r/w   0*/
		uint8_t DME_ENC_EN                               : 1;	/*     15     r/w   0*/
		uint8_t DME_DEC_MON_SEL_2_0                      : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t DME_ENC_MON_SEL_2_0                      : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t LOCAL_BALANCE_CAL_EN                     : 1;	/*     22     r/w   0*/
		uint8_t LOCAL_ERROR_EN                           : 1;	/*     23     r/w   1*/
		uint8_t REMOTE_RD_REQ                            : 1;	/*     24     r/w   0*/
		uint8_t REMOTE_VALID_INT_TYPE                    : 1;	/*     25     r/w   0*/
		uint8_t NO_COMB_ERROR                            : 1;	/*     26     r/w   0*/
		uint8_t REMOTE_ERROR_EN                          : 1;	/*     27     r/w   1*/
		uint8_t REMOTE_TRAIN_COMP_CHK3                   : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t DISABLE_RESET_STATUS                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_REG0_t;
volatile DME_REG0_t __xdata __at(PHY_REG_BASE + 0xc178) DME_REG0;
#define reg_DME_DEC_MODE_1_0  DME_REG0.BF.DME_DEC_MODE_1_0
#define reg_DME_ENC_MODE_1_0  DME_REG0.BF.DME_ENC_MODE_1_0
#define reg_CTRL_BIT_POS_1_0  DME_REG0.BF.CTRL_BIT_POS_1_0
#define reg_TX_TRAIN_PAT_TOGGLE  DME_REG0.BF.TX_TRAIN_PAT_TOGGLE
#define reg_ETHERNET_MODE  DME_REG0.BF.ETHERNET_MODE
#define reg_BALANCE_CHK_EN  DME_REG0.BF.BALANCE_CHK_EN
#define reg_TX_TRAIN_PAT_MODE  DME_REG0.BF.TX_TRAIN_PAT_MODE
#define reg_TX_TRAIN_PAT_TWO_ZERO  DME_REG0.BF.TX_TRAIN_PAT_TWO_ZERO
#define reg_DEC_ERR_CHK_EN  DME_REG0.BF.DEC_ERR_CHK_EN
#define reg_DME_DEC_BALANCE_INV  DME_REG0.BF.DME_DEC_BALANCE_INV
#define reg_DME_DEC_RPT_EN  DME_REG0.BF.DME_DEC_RPT_EN
#define reg_DME_ENC_BALANCE_INV  DME_REG0.BF.DME_ENC_BALANCE_INV
#define reg_DME_ENC_EN  DME_REG0.BF.DME_ENC_EN
#define reg_DME_DEC_MON_SEL_2_0  DME_REG0.BF.DME_DEC_MON_SEL_2_0
#define reg_DME_ENC_MON_SEL_2_0  DME_REG0.BF.DME_ENC_MON_SEL_2_0
#define reg_LOCAL_BALANCE_CAL_EN  DME_REG0.BF.LOCAL_BALANCE_CAL_EN
#define reg_LOCAL_ERROR_EN  DME_REG0.BF.LOCAL_ERROR_EN
#define reg_REMOTE_RD_REQ  DME_REG0.BF.REMOTE_RD_REQ
#define reg_REMOTE_VALID_INT_TYPE  DME_REG0.BF.REMOTE_VALID_INT_TYPE
#define reg_NO_COMB_ERROR  DME_REG0.BF.NO_COMB_ERROR
#define reg_REMOTE_ERROR_EN  DME_REG0.BF.REMOTE_ERROR_EN
#define reg_REMOTE_TRAIN_COMP_CHK3  DME_REG0.BF.REMOTE_TRAIN_COMP_CHK3
#define reg_DISABLE_RESET_STATUS  DME_REG0.BF.DISABLE_RESET_STATUS

// 0xc17c	DME_REG1		DME control register 1
typedef union {
	struct {
		uint8_t DME_ENC_MON_VAL_15_0_b0                  : 8;	/* [15:0]       r   0*/
		uint8_t DME_ENC_MON_VAL_15_0_b1                  : 8;	/* [15:0]       r   0*/
		uint8_t DME_DEC_MON_VAL_15_0_b0                  : 8;	/*[31:16]       r   0*/
		uint8_t DME_DEC_MON_VAL_15_0_b1                  : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_REG1_t;
volatile DME_REG1_t __xdata __at(PHY_REG_BASE + 0xc17c) DME_REG1;
#define reg_DME_ENC_MON_VAL_15_0_b0  DME_REG1.BF.DME_ENC_MON_VAL_15_0_b0
#define reg_DME_ENC_MON_VAL_15_0_b1  DME_REG1.BF.DME_ENC_MON_VAL_15_0_b1
#define reg_DME_DEC_MON_VAL_15_0_b0  DME_REG1.BF.DME_DEC_MON_VAL_15_0_b0
#define reg_DME_DEC_MON_VAL_15_0_b1  DME_REG1.BF.DME_DEC_MON_VAL_15_0_b1

// 0xc180	DME_REG2		DME control register 2
typedef union {
	struct {
		uint8_t LOCAL_CTRL_BITS_15_0_b0                  : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_CTRL_BITS_15_0_b1                  : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_STATUS_BITS_15_0_b0                : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t LOCAL_STATUS_BITS_15_0_b1                : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct {
		uint8_t LOCAL_CTRL_BITS_15_0	                 : 16;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_STATUS_BITS_15_0	                 : 16;	/*[31:16]     r/w 16'h0*/
	} BF1;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_REG2_t;
volatile DME_REG2_t __xdata __at(PHY_REG_BASE + 0xc180) DME_REG2;
#define reg_LOCAL_CTRL_BITS_15_0_b0  DME_REG2.BF.LOCAL_CTRL_BITS_15_0_b0
#define reg_LOCAL_CTRL_BITS_15_0_b1  DME_REG2.BF.LOCAL_CTRL_BITS_15_0_b1
#define reg_LOCAL_STATUS_BITS_15_0_b0  DME_REG2.BF.LOCAL_STATUS_BITS_15_0_b0
#define reg_LOCAL_STATUS_BITS_15_0_b1  DME_REG2.BF.LOCAL_STATUS_BITS_15_0_b1
#define reg_LOCAL_CTRL_BITS_15_0		DME_REG2.BF1.LOCAL_CTRL_BITS_15_0
#define reg_LOCAL_STATUS_BITS_15_0		DME_REG2.BF1.LOCAL_STATUS_BITS_15_0

// 0xc184	DME_REG3		DME control register 3
typedef union {
	struct {
		uint8_t REMOTE_CTRL_BITS_15_0_b0                 : 8;	/* [15:0]       r   0*/
		uint8_t REMOTE_CTRL_BITS_15_0_b1                 : 8;	/* [15:0]       r   0*/
		uint8_t REMOTE_STATUS_BITS_15_0_b0               : 8;	/*[31:16]       r   0*/
		uint8_t REMOTE_STATUS_BITS_15_0_b1               : 8;	/*[31:16]       r   0*/
	} BF;
	struct {
		uint16_t REMOTE_CTRL_BITS_15_0	                 : 16;	/* [15:0]       r   0*/
		uint16_t REMOTE_STATUS_BITS_15_0	 	         : 16;	/*[31:16]       r   0*/
	} B16;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_REG3_t;
volatile DME_REG3_t __xdata __at(PHY_REG_BASE + 0xc184) DME_REG3;
#define reg_REMOTE_CTRL_BITS_15_0_b0  DME_REG3.BF.REMOTE_CTRL_BITS_15_0_b0
#define reg_REMOTE_CTRL_BITS_15_0_b1  DME_REG3.BF.REMOTE_CTRL_BITS_15_0_b1
#define reg_REMOTE_STATUS_BITS_15_0_b0  DME_REG3.BF.REMOTE_STATUS_BITS_15_0_b0
#define reg_REMOTE_STATUS_BITS_15_0_b1  DME_REG3.BF.REMOTE_STATUS_BITS_15_0_b1
#define reg_REMOTE_CTRL_BITS_15_0  		DME_REG3.B16.REMOTE_CTRL_BITS_15_0
#define reg_REMOTE_STATUS_BITS_15_0  	DME_REG3.B16.REMOTE_STATUS_BITS_15_0

// 0xc188	DME_REG4		DME control register 4
typedef union {
	struct {
		uint8_t LOCAL_CTRL_FIELD_FORCE                   : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_STATUS_FIELD_FORCE                 : 1;	/*      1     r/w   0*/
		uint8_t LOCAL_ERROR_FIELD_FORCE                  : 1;	/*      2     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_FORCE                   : 1;	/*      3     r/w   0*/
		uint8_t LOCAL_TX_INIT_FORCE                      : 1;	/*      4     r/w   0*/
		uint8_t LOCAL_FIELD_FORCE                        : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_VALID                   : 1;	/*      8     r/w   0*/
		uint8_t LOCAL_STATUS_FIELD_VALID                 : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_ERROR_FIELD_VALID                  : 1;	/*     10     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_VALID                   : 1;	/*     11     r/w   0*/
		uint8_t LOCAL_TX_INIT_VALID                      : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_FIELD_VALID                        : 1;	/*     13     r/w   0*/
		uint8_t LOCAL_RD_REQ                             : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t ALWAYS_CHECK_COE_REQ                     : 1;	/*     23     r/w   0*/
		uint8_t ERROR_DEC_RPT_EN                         : 1;	/*     24     r/w   0*/
		uint8_t NO_RSVD_PT_TYPE_ERROR                    : 1;	/*     25     r/w   0*/
		uint8_t NO_RSVD_BIT_ERROR_IN_NORMAL              : 1;	/*     26     r/w   0*/
		uint8_t NO_RSVD_BIT_ERROR_IN_ERROR               : 1;	/*     27     r/w   0*/
		uint8_t NO_RSVD_CTRL_FIELD_ERROR                 : 1;	/*     28     r/w   0*/
		uint8_t ERROR_FRAME_NUM_2_0                      : 3;	/*[31:29]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_REG4_t;
volatile DME_REG4_t __xdata __at(PHY_REG_BASE + 0xc188) DME_REG4;
#define reg_LOCAL_CTRL_FIELD_FORCE  DME_REG4.BF.LOCAL_CTRL_FIELD_FORCE
#define reg_LOCAL_STATUS_FIELD_FORCE  DME_REG4.BF.LOCAL_STATUS_FIELD_FORCE
#define reg_LOCAL_ERROR_FIELD_FORCE  DME_REG4.BF.LOCAL_ERROR_FIELD_FORCE
#define reg_LOCAL_TRAIN_COMP_FORCE  DME_REG4.BF.LOCAL_TRAIN_COMP_FORCE
#define reg_LOCAL_TX_INIT_FORCE  DME_REG4.BF.LOCAL_TX_INIT_FORCE
#define reg_LOCAL_FIELD_FORCE  DME_REG4.BF.LOCAL_FIELD_FORCE
#define reg_LOCAL_CTRL_FIELD_VALID  DME_REG4.BF.LOCAL_CTRL_FIELD_VALID
#define reg_LOCAL_STATUS_FIELD_VALID  DME_REG4.BF.LOCAL_STATUS_FIELD_VALID
#define reg_LOCAL_ERROR_FIELD_VALID  DME_REG4.BF.LOCAL_ERROR_FIELD_VALID
#define reg_LOCAL_TRAIN_COMP_VALID  DME_REG4.BF.LOCAL_TRAIN_COMP_VALID
#define reg_LOCAL_TX_INIT_VALID  DME_REG4.BF.LOCAL_TX_INIT_VALID
#define reg_LOCAL_FIELD_VALID  DME_REG4.BF.LOCAL_FIELD_VALID
#define reg_LOCAL_RD_REQ  DME_REG4.BF.LOCAL_RD_REQ
#define reg_ALWAYS_CHECK_COE_REQ  DME_REG4.BF.ALWAYS_CHECK_COE_REQ
#define reg_ERROR_DEC_RPT_EN  DME_REG4.BF.ERROR_DEC_RPT_EN
#define reg_NO_RSVD_PT_TYPE_ERROR  DME_REG4.BF.NO_RSVD_PT_TYPE_ERROR
#define reg_NO_RSVD_BIT_ERROR_IN_NORMAL  DME_REG4.BF.NO_RSVD_BIT_ERROR_IN_NORMAL
#define reg_NO_RSVD_BIT_ERROR_IN_ERROR  DME_REG4.BF.NO_RSVD_BIT_ERROR_IN_ERROR
#define reg_NO_RSVD_CTRL_FIELD_ERROR  DME_REG4.BF.NO_RSVD_CTRL_FIELD_ERROR
#define reg_ERROR_FRAME_NUM_2_0  DME_REG4.BF.ERROR_FRAME_NUM_2_0

// 0xc18c	ANA_REG0		analog control register 0
typedef union {
	struct {
		uint8_t TX_VCMHOLD_EN_FM_REG                     : 1;	/*      0     r/w   0*/
		uint8_t TX_VCMHOLD_EN                            : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t POWER_STATE_VALID_FM_REG                 : 1;	/*      3     r/w   0*/
		uint8_t POWER_STATE_VALID                        : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t PU_BG                                    : 1;	/*      8     r/w   0*/
		uint8_t ANA_PU_SQ                                : 1;	/*      9     r/w   0*/
		uint8_t BEACON_EN                                : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t REFCLK_DIS_ACK                           : 1;	/*     25     r/w   0*/
		uint8_t REFCLK_DIS_ACK_FORCE                     : 1;	/*     26     r/w   0*/
		uint8_t TX_SETTLE_TIME_IN_P2_3_0                 : 4;	/*[30:27]     r/w 4'ha*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_REG0_t;
volatile ANA_REG0_t __xdata __at(PHY_REG_BASE + 0xc18c) ANA_REG0;
#define reg_TX_VCMHOLD_EN_FM_REG  ANA_REG0.BF.TX_VCMHOLD_EN_FM_REG
#define reg_TX_VCMHOLD_EN  ANA_REG0.BF.TX_VCMHOLD_EN
#define reg_POWER_STATE_VALID_FM_REG  ANA_REG0.BF.POWER_STATE_VALID_FM_REG
#define reg_POWER_STATE_VALID  ANA_REG0.BF.POWER_STATE_VALID
#define reg_PU_BG  ANA_REG0.BF.PU_BG
#define reg_ANA_PU_SQ  ANA_REG0.BF.ANA_PU_SQ
#define reg_BEACON_EN  ANA_REG0.BF.BEACON_EN
#define reg_REFCLK_DIS_ACK  ANA_REG0.BF.REFCLK_DIS_ACK
#define reg_REFCLK_DIS_ACK_FORCE  ANA_REG0.BF.REFCLK_DIS_ACK_FORCE
#define reg_TX_SETTLE_TIME_IN_P2_3_0  ANA_REG0.BF.TX_SETTLE_TIME_IN_P2_3_0

// 0xc190	ANA_REG1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t SHRTR_FORCE_ANA                          : 1;	/*      3     r/w   0*/
		uint8_t UPDN_DELAY_1_0                           : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t SQ_THR_TEMPADJ_2_0                       : 3;	/*  [8:6]     r/w 3'h1*/
		uint8_t SQRANGEPROG                              : 1;	/*      9     r/w   0*/
		uint8_t SQGAINBW_1_0                             : 2;	/*[11:10]     r/w 2'h1*/
		uint8_t SQAMPBW_1_0                              : 2;	/*[13:12]     r/w 2'h1*/
		uint8_t INTP_RST_BYPASS                          : 1;	/*     14     r/w   0*/
		uint8_t IDCON_VDDADATA                           : 1;	/*     15     r/w   0*/
		uint8_t BEACON_CNT_VALUE_7_0                     : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_REG1_t;
volatile ANA_REG1_t __xdata __at(PHY_REG_BASE + 0xc190) ANA_REG1;
#define reg_SHRTR_FORCE_ANA  ANA_REG1.BF.SHRTR_FORCE_ANA
#define reg_UPDN_DELAY_1_0  ANA_REG1.BF.UPDN_DELAY_1_0
#define reg_SQ_THR_TEMPADJ_2_0  ANA_REG1.BF.SQ_THR_TEMPADJ_2_0
#define reg_SQRANGEPROG  ANA_REG1.BF.SQRANGEPROG
#define reg_SQGAINBW_1_0  ANA_REG1.BF.SQGAINBW_1_0
#define reg_SQAMPBW_1_0  ANA_REG1.BF.SQAMPBW_1_0
#define reg_INTP_RST_BYPASS  ANA_REG1.BF.INTP_RST_BYPASS
#define reg_IDCON_VDDADATA  ANA_REG1.BF.IDCON_VDDADATA
#define reg_BEACON_CNT_VALUE_7_0  ANA_REG1.BF.BEACON_CNT_VALUE_7_0

// 0xc194	INTERFACE_REG0		Sync Mask and Maximal Generation Setting / Sync Pattern
typedef union {
	struct {
		uint8_t SYNC_CHAR_9_0_b0                         : 8;	/*  [9:0]     r/w 10'h283*/
		uint8_t SYNC_CHAR_9_0_b1                         : 2;	/*  [9:0]     r/w 10'h283*/
		uint8_t TXD_INV                                  : 1;	/*     10     r/w   0*/
		uint8_t RXD_INV                                  : 1;	/*     11     r/w   0*/
		uint8_t SYNC_DET_EN_FROM_PIN                     : 1;	/*     12     r/w   0*/
		uint8_t SYNC_FOUND_LEVEL                         : 1;	/*     13       r   0*/
		uint8_t SYNC_POL                                 : 1;	/*     14     r/w   1*/
		uint8_t SYNC_DET_EN                              : 1;	/*     15     r/w   0*/
		uint8_t SYNC_MASK_9_0_b0                         : 8;	/*[25:16]     r/w 10'h3ff*/
		uint8_t SYNC_MASK_9_0_b1                         : 2;	/*[25:16]     r/w 10'h3ff*/
		uint8_t PHY_GEN_MAX_1_0                          : 2;	/*[27:26]     r/w 2'h3*/
		uint8_t DET_BYPASS                               : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t LINK_TRAIN_MODE                          : 1;	/*     30     r/w   0*/
		uint8_t SYNC_REALIGN_MODE                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERFACE_REG0_t;
volatile INTERFACE_REG0_t __xdata __at(PHY_REG_BASE + 0xc194) INTERFACE_REG0;
#define reg_SYNC_CHAR_9_0_b0  INTERFACE_REG0.BF.SYNC_CHAR_9_0_b0
#define reg_SYNC_CHAR_9_0_b1  INTERFACE_REG0.BF.SYNC_CHAR_9_0_b1
#define reg_TXD_INV  INTERFACE_REG0.BF.TXD_INV
#define reg_RXD_INV  INTERFACE_REG0.BF.RXD_INV
#define reg_SYNC_DET_EN_FROM_PIN  INTERFACE_REG0.BF.SYNC_DET_EN_FROM_PIN
#define reg_SYNC_FOUND_LEVEL  INTERFACE_REG0.BF.SYNC_FOUND_LEVEL
#define reg_SYNC_POL  INTERFACE_REG0.BF.SYNC_POL
#define reg_SYNC_DET_EN  INTERFACE_REG0.BF.SYNC_DET_EN
#define reg_SYNC_MASK_9_0_b0  INTERFACE_REG0.BF.SYNC_MASK_9_0_b0
#define reg_SYNC_MASK_9_0_b1  INTERFACE_REG0.BF.SYNC_MASK_9_0_b1
#define reg_PHY_GEN_MAX_1_0  INTERFACE_REG0.BF.PHY_GEN_MAX_1_0
#define reg_DET_BYPASS  INTERFACE_REG0.BF.DET_BYPASS
#define reg_LINK_TRAIN_MODE  INTERFACE_REG0.BF.LINK_TRAIN_MODE
#define reg_SYNC_REALIGN_MODE  INTERFACE_REG0.BF.SYNC_REALIGN_MODE

// 0xc198	INTERFACE_REG1		Interface and Digital Reference Clock Control
typedef union {
	struct {
		uint8_t REF1M_GEN_DIV_7_0                        : 8;	/*  [7:0]     r/w 8'h80*/
		uint8_t SYNC_DET_AFTER_PHY_RDY                   : 1;	/*      8     r/w   1*/
		uint8_t TXDCLK_AH                                : 1;	/*      9     r/w   0*/
		uint8_t RXDCLK_AH                                : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERFACE_REG1_t;
volatile INTERFACE_REG1_t __xdata __at(PHY_REG_BASE + 0xc198) INTERFACE_REG1;
#define reg_REF1M_GEN_DIV_7_0  INTERFACE_REG1.BF.REF1M_GEN_DIV_7_0
#define reg_SYNC_DET_AFTER_PHY_RDY  INTERFACE_REG1.BF.SYNC_DET_AFTER_PHY_RDY
#define reg_TXDCLK_AH  INTERFACE_REG1.BF.TXDCLK_AH
#define reg_RXDCLK_AH  INTERFACE_REG1.BF.RXDCLK_AH

// 0xc19c	FRAME_DET_REG0		frame detection control register 0
typedef union {
	struct {
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE               : 1;	/*      0     r/w   0*/
		uint8_t FRAME_DET_MODE                           : 1;	/*      1     r/w   0*/
		uint8_t ALIGN_STAT_RD_REQ                        : 1;	/*      2     r/w   0*/
		uint8_t FRAME_REALIGN_MODE                       : 1;	/*      3     r/w   1*/
		uint8_t GOOD_MARKER_NUM_2_0                      : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TRAIN_PAT_NUM_8_0_b0                     : 1;	/* [15:7]     r/w 9'h42*/
		uint8_t TRAIN_PAT_NUM_8_0_b1                     : 8;	/* [15:7]     r/w 9'h42*/
		uint8_t FRAME_DET_MIDD_LEVEL_1_0                 : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t FRAME_DET_SIDE_LEVEL_1_0                 : 2;	/*[19:18]     r/w 2'h3*/
		uint8_t BAD_MARKER_NUM_2_0                       : 3;	/*[22:20]     r/w 3'h4*/
		uint8_t FRAME_END_SEL                            : 1;	/*     23     r/w   1*/
		uint8_t FRAME_DET_MAX_TIME_3_0                   : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t DUAL_ARG_PROTECT_EN                      : 1;	/*     28     r/w   1*/
		uint8_t PATTERN_LOCK_LOST_TIMEOUT_EN             : 1;	/*     29     r/w   1*/
		uint8_t PIN_TX_TRAIN_ERROR_1_0                   : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_DET_REG0_t;
volatile FRAME_DET_REG0_t __xdata __at(PHY_REG_BASE + 0xc19c) FRAME_DET_REG0;
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE  FRAME_DET_REG0.BF.TX_TRAIN_FRAME_LOCK_ENABLE
#define reg_FRAME_DET_MODE  FRAME_DET_REG0.BF.FRAME_DET_MODE
#define reg_ALIGN_STAT_RD_REQ  FRAME_DET_REG0.BF.ALIGN_STAT_RD_REQ
#define reg_FRAME_REALIGN_MODE  FRAME_DET_REG0.BF.FRAME_REALIGN_MODE
#define reg_GOOD_MARKER_NUM_2_0  FRAME_DET_REG0.BF.GOOD_MARKER_NUM_2_0
#define reg_TRAIN_PAT_NUM_8_0_b0  FRAME_DET_REG0.BF.TRAIN_PAT_NUM_8_0_b0
#define reg_TRAIN_PAT_NUM_8_0_b1  FRAME_DET_REG0.BF.TRAIN_PAT_NUM_8_0_b1
#define reg_FRAME_DET_MIDD_LEVEL_1_0  FRAME_DET_REG0.BF.FRAME_DET_MIDD_LEVEL_1_0
#define reg_FRAME_DET_SIDE_LEVEL_1_0  FRAME_DET_REG0.BF.FRAME_DET_SIDE_LEVEL_1_0
#define reg_BAD_MARKER_NUM_2_0  FRAME_DET_REG0.BF.BAD_MARKER_NUM_2_0
#define reg_FRAME_END_SEL  FRAME_DET_REG0.BF.FRAME_END_SEL
#define reg_FRAME_DET_MAX_TIME_3_0  FRAME_DET_REG0.BF.FRAME_DET_MAX_TIME_3_0
#define reg_DUAL_ARG_PROTECT_EN  FRAME_DET_REG0.BF.DUAL_ARG_PROTECT_EN
#define reg_PATTERN_LOCK_LOST_TIMEOUT_EN  FRAME_DET_REG0.BF.PATTERN_LOCK_LOST_TIMEOUT_EN
#define reg_PIN_TX_TRAIN_ERROR_1_0  FRAME_DET_REG0.BF.PIN_TX_TRAIN_ERROR_1_0

// 0xc1a0	FRAME_DET_REG1		frame detection control register 1
typedef union {
	struct {
		uint8_t ALIGN_LEVEL_15_0_b0                      : 8;	/* [15:0]       r   0*/
		uint8_t ALIGN_LEVEL_15_0_b1                      : 8;	/* [15:0]       r   0*/
		uint8_t ALIGN_POS_15_0_b0                        : 8;	/*[31:16]       r   0*/
		uint8_t ALIGN_POS_15_0_b1                        : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_DET_REG1_t;
volatile FRAME_DET_REG1_t __xdata __at(PHY_REG_BASE + 0xc1a0) FRAME_DET_REG1;
#define reg_ALIGN_LEVEL_15_0_b0  FRAME_DET_REG1.BF.ALIGN_LEVEL_15_0_b0
#define reg_ALIGN_LEVEL_15_0_b1  FRAME_DET_REG1.BF.ALIGN_LEVEL_15_0_b1
#define reg_ALIGN_POS_15_0_b0  FRAME_DET_REG1.BF.ALIGN_POS_15_0_b0
#define reg_ALIGN_POS_15_0_b1  FRAME_DET_REG1.BF.ALIGN_POS_15_0_b1

// 0xc1a4	FRAME_DET_REG2		frame detection control register 2
typedef union {
	struct {
		uint8_t ALIGN_POS_19_16                          : 4;	/*  [3:0]       r   0*/
		uint8_t FRAME_DETECTED                           : 1;	/*      4       r   0*/
		uint8_t REMOTE_TX_INIT                           : 1;	/*      5     r/w   0*/
		uint8_t REMOTE_TRAIN_COMP                        : 1;	/*      6     r/w   0*/
		uint8_t SYNC_DET_MON_SEL_2_0_b0                  : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t SYNC_DET_MON_SEL_2_0_b1                  : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t SYNC_DET_MODE_1_0                        : 2;	/*[11:10]     r/w 2'h1*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_DET_REG2_t;
volatile FRAME_DET_REG2_t __xdata __at(PHY_REG_BASE + 0xc1a4) FRAME_DET_REG2;
#define reg_ALIGN_POS_19_16  FRAME_DET_REG2.BF.ALIGN_POS_19_16
#define reg_FRAME_DETECTED  FRAME_DET_REG2.BF.FRAME_DETECTED
#define reg_REMOTE_TX_INIT  FRAME_DET_REG2.BF.REMOTE_TX_INIT
#define reg_REMOTE_TRAIN_COMP  FRAME_DET_REG2.BF.REMOTE_TRAIN_COMP
#define reg_SYNC_DET_MON_SEL_2_0_b0  FRAME_DET_REG2.BF.SYNC_DET_MON_SEL_2_0_b0
#define reg_SYNC_DET_MON_SEL_2_0_b1  FRAME_DET_REG2.BF.SYNC_DET_MON_SEL_2_0_b1
#define reg_SYNC_DET_MODE_1_0  FRAME_DET_REG2.BF.SYNC_DET_MODE_1_0

// 0xc1a8	PCIE_REG0		TX amplitude setting for pipe / PCIE/USB3 Control
typedef union {
	struct {
		uint8_t BEACON_RX_EN                             : 1;	/*      0     r/w   0*/
		uint8_t BEACON_TX_EN                             : 1;	/*      1     r/w   0*/
		uint8_t RX_HIZ                                   : 1;	/*      2     r/w   0*/
		uint8_t TXDETRX_OUT                              : 1;	/*      3       r   0*/
		uint8_t TXDETRX_VTHSEL_1_0                       : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t TXDETRX_SAMPLING_POINT_1_0               : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t TXDETRX_START                            : 1;	/*      9     r/w   0*/
		uint8_t TXDETRX_EN                               : 1;	/*     10     r/w   0*/
		uint8_t PIN_TXDETRX_VALID                        : 1;	/*     11     r/w   0*/
		uint8_t IDLE_SYNC_EN                             : 1;	/*     12     r/w   0*/
		uint8_t TX_IDLE_HZ                               : 1;	/*     13     r/w   0*/
		uint8_t ANA_IDLE                                 : 1;	/*     14       r   0*/
		uint8_t BEACON_IN_FM_PIN                         : 1;	/*     15     r/w   0*/
		uint8_t TX_AMP_SHFT_PIPE_V1                      : 1;	/*     16     r/w   0*/
		uint8_t TX_AMP_SHFT_PIPE_V0                      : 1;	/*     17     r/w   0*/
		uint8_t TX_AMP_PIPE_V1_4_0                       : 5;	/*[22:18]     r/w 5'h0c*/
		uint8_t TX_AMP_PIPE_V0_4_0_b0                    : 1;	/*[27:23]     r/w 5'h19*/
		uint8_t TX_AMP_PIPE_V0_4_0_b1                    : 4;	/*[27:23]     r/w 5'h19*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t TXDETRX_VTH_CAL_START                    : 1;	/*     29     r/w   0*/
		uint8_t TXDETRX_VTH_SW                           : 1;	/*     30     r/w   0*/
		uint8_t TXDETRX_VTH_CAL_FORCE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PCIE_REG0_t;
volatile PCIE_REG0_t __xdata __at(PHY_REG_BASE + 0xc1a8) PCIE_REG0;
#define reg_BEACON_RX_EN  PCIE_REG0.BF.BEACON_RX_EN
#define reg_BEACON_TX_EN  PCIE_REG0.BF.BEACON_TX_EN
#define reg_RX_HIZ  PCIE_REG0.BF.RX_HIZ
#define reg_TXDETRX_OUT  PCIE_REG0.BF.TXDETRX_OUT
#define reg_TXDETRX_VTHSEL_1_0  PCIE_REG0.BF.TXDETRX_VTHSEL_1_0
#define reg_TXDETRX_SAMPLING_POINT_1_0  PCIE_REG0.BF.TXDETRX_SAMPLING_POINT_1_0
#define reg_TXDETRX_START  PCIE_REG0.BF.TXDETRX_START
#define reg_TXDETRX_EN  PCIE_REG0.BF.TXDETRX_EN
#define reg_PIN_TXDETRX_VALID  PCIE_REG0.BF.PIN_TXDETRX_VALID
#define reg_IDLE_SYNC_EN  PCIE_REG0.BF.IDLE_SYNC_EN
#define reg_TX_IDLE_HZ  PCIE_REG0.BF.TX_IDLE_HZ
#define reg_ANA_IDLE  PCIE_REG0.BF.ANA_IDLE
#define reg_BEACON_IN_FM_PIN  PCIE_REG0.BF.BEACON_IN_FM_PIN
#define reg_TX_AMP_SHFT_PIPE_V1  PCIE_REG0.BF.TX_AMP_SHFT_PIPE_V1
#define reg_TX_AMP_SHFT_PIPE_V0  PCIE_REG0.BF.TX_AMP_SHFT_PIPE_V0
#define reg_TX_AMP_PIPE_V1_4_0  PCIE_REG0.BF.TX_AMP_PIPE_V1_4_0
#define reg_TX_AMP_PIPE_V0_4_0_b0  PCIE_REG0.BF.TX_AMP_PIPE_V0_4_0_b0
#define reg_TX_AMP_PIPE_V0_4_0_b1  PCIE_REG0.BF.TX_AMP_PIPE_V0_4_0_b1
#define reg_TXDETRX_VTH_CAL_START  PCIE_REG0.BF.TXDETRX_VTH_CAL_START
#define reg_TXDETRX_VTH_SW  PCIE_REG0.BF.TXDETRX_VTH_SW
#define reg_TXDETRX_VTH_CAL_FORCE  PCIE_REG0.BF.TXDETRX_VTH_CAL_FORCE

// 0xc1ac	PCIE_REG1		TX margin selection
typedef union {
	struct {
		uint8_t TX_AMP_TXDETRX_4_0                       : 5;	/*  [4:0]     r/w 5'h19*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH_PIPE0_3_0                        : 4;	/* [11:8]     r/w 4'hf*/
		uint8_t TX_EMPH_PIPE1_3_0                        : 4;	/*[15:12]     r/w 4'ha*/
		uint8_t PCIE_USE_SATA_MODE                       : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PCIE_REG1_t;
volatile PCIE_REG1_t __xdata __at(PHY_REG_BASE + 0xc1ac) PCIE_REG1;
#define reg_TX_AMP_TXDETRX_4_0  PCIE_REG1.BF.TX_AMP_TXDETRX_4_0
#define reg_TX_EMPH_PIPE0_3_0  PCIE_REG1.BF.TX_EMPH_PIPE0_3_0
#define reg_TX_EMPH_PIPE1_3_0  PCIE_REG1.BF.TX_EMPH_PIPE1_3_0
#define reg_PCIE_USE_SATA_MODE  PCIE_REG1.BF.PCIE_USE_SATA_MODE

// 0xc1b0	CLK150M_REG0		150M Clock Control 0
typedef union {
	struct {
		uint8_t REFDIV_150M_8_0_b0                       : 8;	/*  [8:0]     r/w 9'h40*/
		uint8_t REFDIV_150M_8_0_b1                       : 1;	/*  [8:0]     r/w 9'h40*/
		uint8_t OOB_PAT_ON_BURST_FORCE                   : 1;	/*      9     r/w   0*/
		uint8_t TX_IDLE_SIGNALS_FORCE                    : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t TX_IDLE_LOZ_OFF                          : 1;	/*     28     r/w   0*/
		uint8_t TX_IDLE_HIZ_ON                           : 1;	/*     29     r/w   0*/
		uint8_t TX_IDLE_HIZ_EN                           : 1;	/*     30     r/w   0*/
		uint8_t TX_IDLE                                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLK150M_REG0_t;
volatile CLK150M_REG0_t __xdata __at(PHY_REG_BASE + 0xc1b0) CLK150M_REG0;
#define reg_REFDIV_150M_8_0_b0  CLK150M_REG0.BF.REFDIV_150M_8_0_b0
#define reg_REFDIV_150M_8_0_b1  CLK150M_REG0.BF.REFDIV_150M_8_0_b1
#define reg_OOB_PAT_ON_BURST_FORCE  CLK150M_REG0.BF.OOB_PAT_ON_BURST_FORCE
#define reg_TX_IDLE_SIGNALS_FORCE  CLK150M_REG0.BF.TX_IDLE_SIGNALS_FORCE
#define reg_TX_IDLE_LOZ_OFF  CLK150M_REG0.BF.TX_IDLE_LOZ_OFF
#define reg_TX_IDLE_HIZ_ON  CLK150M_REG0.BF.TX_IDLE_HIZ_ON
#define reg_TX_IDLE_HIZ_EN  CLK150M_REG0.BF.TX_IDLE_HIZ_EN
#define reg_TX_IDLE  CLK150M_REG0.BF.TX_IDLE

// 0xc1b4	SPEED_CTRL_REG0		speed control 0
typedef union {
	struct {
		uint8_t FFE_I_SEL_1_0                            : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SEL_BITS_RX_2_0                          : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t FBDIV_150M_10_0_b0                       : 3;	/*[31:21]     r/w 11'hf0*/
		uint8_t FBDIV_150M_10_0_b1                       : 8;	/*[31:21]     r/w 11'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG0_t;
volatile SPEED_CTRL_REG0_t __xdata __at(PHY_REG_BASE + 0xc1b4) SPEED_CTRL_REG0;
#define reg_FFE_I_SEL_1_0  SPEED_CTRL_REG0.BF.FFE_I_SEL_1_0
#define reg_SEL_BITS_RX_2_0  SPEED_CTRL_REG0.BF.SEL_BITS_RX_2_0
#define reg_FBDIV_150M_10_0_b0  SPEED_CTRL_REG0.BF.FBDIV_150M_10_0_b0
#define reg_FBDIV_150M_10_0_b1  SPEED_CTRL_REG0.BF.FBDIV_150M_10_0_b1

// 0xc1b8	SPEED_CTRL_REG1		speed control 1
typedef union {
	struct {
		uint8_t REFDIV_6_0                               : 8;	/*  [6:0]     r/w 7'h1*/
		//uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RXDIGCK_DIV_1_0                          : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RX_SPEED_DIV_1_0                         : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t TX_SPEED_DIV_1_0                         : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t PLL_LPFC2_1_0                            : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t ICP_3_0                                  : 4;	/*[19:16]     r/w 4'ha*/
		uint8_t INTPI_3_0                                : 4;	/*[23:20]     r/w 4'h7*/
		uint8_t REG_SELMUPF_3_0                          : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t REG_SELMUPI_3_0                          : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG1_t;
volatile SPEED_CTRL_REG1_t __xdata __at(PHY_REG_BASE + 0xc1b8) SPEED_CTRL_REG1;
#define reg_REFDIV_6_0  SPEED_CTRL_REG1.BF.REFDIV_6_0
#define reg_RXDIGCK_DIV_1_0  SPEED_CTRL_REG1.BF.RXDIGCK_DIV_1_0
#define reg_RX_SPEED_DIV_1_0  SPEED_CTRL_REG1.BF.RX_SPEED_DIV_1_0
#define reg_TX_SPEED_DIV_1_0  SPEED_CTRL_REG1.BF.TX_SPEED_DIV_1_0
#define reg_PLL_LPFC2_1_0  SPEED_CTRL_REG1.BF.PLL_LPFC2_1_0
#define reg_ICP_3_0  SPEED_CTRL_REG1.BF.ICP_3_0
#define reg_INTPI_3_0  SPEED_CTRL_REG1.BF.INTPI_3_0
#define reg_REG_SELMUPF_3_0  SPEED_CTRL_REG1.BF.REG_SELMUPF_3_0
#define reg_REG_SELMUPI_3_0  SPEED_CTRL_REG1.BF.REG_SELMUPI_3_0

// 0xc1bc	SPEED_CTRL_REG2		speed control 2
typedef union {
	struct {
		uint8_t REG0P9_SPEED_TRACK_DATA_2_0              : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t REG0P9_SPEED_TRACK_CLK_2_0               : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t DTL_INTPCLK_DIV                          : 1;	/*      6     r/w   0*/
		uint8_t DTL_INTPCLK_EN                           : 1;	/*      7     r/w   0*/
		uint8_t PW_SLLP_2_0                              : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t VTHVCOPTAT_2_0                           : 3;	/*[13:11]     r/w 3'h2*/
		uint8_t TX_DTXCLK_DIV                            : 1;	/*     14     r/w   0*/
		uint8_t PLL_HIGHBW                               : 1;	/*     15     r/w   0*/
		uint8_t INTPR_2_0                                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t PU_RX_INTP_E                             : 1;	/*     19     r/w   1*/
		uint8_t SLEW_CTRL_EN                             : 1;	/*     20     r/w   1*/
		uint8_t PCIE_MODE                                : 1;	/*     21     r/w   0*/
		uint8_t PHY_RX_RATE_1_0                          : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t SEL_BITS_TX_1_0                          : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t PLL_RATE_SEL_1_0                         : 2;	/*[29:28]     r/w 2'h0*/
		uint8_t DTL_CLK_MODE_1_0                         : 2;	/*[31:30]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG2_t;
volatile SPEED_CTRL_REG2_t __xdata __at(PHY_REG_BASE + 0xc1bc) SPEED_CTRL_REG2;
#define reg_REG0P9_SPEED_TRACK_DATA_2_0  SPEED_CTRL_REG2.BF.REG0P9_SPEED_TRACK_DATA_2_0
#define reg_REG0P9_SPEED_TRACK_CLK_2_0  SPEED_CTRL_REG2.BF.REG0P9_SPEED_TRACK_CLK_2_0
#define reg_DTL_INTPCLK_DIV  SPEED_CTRL_REG2.BF.DTL_INTPCLK_DIV
#define reg_DTL_INTPCLK_EN  SPEED_CTRL_REG2.BF.DTL_INTPCLK_EN
#define reg_PW_SLLP_2_0  SPEED_CTRL_REG2.BF.PW_SLLP_2_0
#define reg_VTHVCOPTAT_2_0  SPEED_CTRL_REG2.BF.VTHVCOPTAT_2_0
#define reg_TX_DTXCLK_DIV  SPEED_CTRL_REG2.BF.TX_DTXCLK_DIV
#define reg_PLL_HIGHBW  SPEED_CTRL_REG2.BF.PLL_HIGHBW
#define reg_INTPR_2_0  SPEED_CTRL_REG2.BF.INTPR_2_0
#define reg_PU_RX_INTP_E  SPEED_CTRL_REG2.BF.PU_RX_INTP_E
#define reg_SLEW_CTRL_EN  SPEED_CTRL_REG2.BF.SLEW_CTRL_EN
#define reg_PCIE_MODE  SPEED_CTRL_REG2.BF.PCIE_MODE
#define reg_PHY_RX_RATE_1_0  SPEED_CTRL_REG2.BF.PHY_RX_RATE_1_0
#define reg_SEL_BITS_TX_1_0  SPEED_CTRL_REG2.BF.SEL_BITS_TX_1_0
#define reg_PLL_RATE_SEL_1_0  SPEED_CTRL_REG2.BF.PLL_RATE_SEL_1_0
#define reg_DTL_CLK_MODE_1_0  SPEED_CTRL_REG2.BF.DTL_CLK_MODE_1_0

// 0xc1c0	SPEED_CTRL_REG3		speed control 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t SSC_M_12_0_b0                            : 5;	/* [15:3]     r/w 13'h05cf*/
		uint8_t SSC_M_12_0_b1                            : 8;	/* [15:3]     r/w 13'h05cf*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t SSC_STEP_10_0_b0                         : 3;	/*[31:21]     r/w 11'h00f*/
		uint8_t SSC_STEP_10_0_b1                         : 8;	/*[31:21]     r/w 11'h00f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG3_t;
volatile SPEED_CTRL_REG3_t __xdata __at(PHY_REG_BASE + 0xc1c0) SPEED_CTRL_REG3;
#define reg_SSC_M_12_0_b0  SPEED_CTRL_REG3.BF.SSC_M_12_0_b0
#define reg_SSC_M_12_0_b1  SPEED_CTRL_REG3.BF.SSC_M_12_0_b1
#define reg_SSC_STEP_10_0_b0  SPEED_CTRL_REG3.BF.SSC_STEP_10_0_b0
#define reg_SSC_STEP_10_0_b1  SPEED_CTRL_REG3.BF.SSC_STEP_10_0_b1

// 0xc1c4	SPEED_CTRL_REG4		speed control 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t INIT_RXFOFFS_9_0_b0                      : 2;	/* [15:6]     r/w 10'h0*/
		uint8_t INIT_RXFOFFS_9_0_b1                      : 8;	/* [15:6]     r/w 10'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t INIT_TXFOFFS_9_0_b0                      : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t INIT_TXFOFFS_9_0_b1                      : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG4_t;
volatile SPEED_CTRL_REG4_t __xdata __at(PHY_REG_BASE + 0xc1c4) SPEED_CTRL_REG4;
#define reg_INIT_RXFOFFS_9_0_b0  SPEED_CTRL_REG4.BF.INIT_RXFOFFS_9_0_b0
#define reg_INIT_RXFOFFS_9_0_b1  SPEED_CTRL_REG4.BF.INIT_RXFOFFS_9_0_b1
#define reg_INIT_TXFOFFS_9_0_b0  SPEED_CTRL_REG4.BF.INIT_TXFOFFS_9_0_b0
#define reg_INIT_TXFOFFS_9_0_b1  SPEED_CTRL_REG4.BF.INIT_TXFOFFS_9_0_b1

// 0xc1c8	SPEED_CTRL_REG5		speed control 5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t AUTO_RX_FOFFSET_EXTRA_M_13_0_b0          : 6;	/* [15:2]     r/w 14'h064f*/
		uint8_t AUTO_RX_FOFFSET_EXTRA_M_13_0_b1          : 8;	/* [15:2]     r/w 14'h064f*/
		uint8_t GX_RX_DFE_EN                             : 1;	/*     16     r/w   0*/
		uint8_t GX_RXDCW_EN                              : 1;	/*     17     r/w   0*/
		uint8_t GX_TX_SLEW_RATE_SEL_2_0                  : 3;	/*[20:18]     r/w 3'h4*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t GX_RX_SELMUFF_1_0                        : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t GX_RX_SELMUFI_1_0                        : 2;	/*[27:26]     r/w 2'h3*/
		uint8_t ANA_FFE_LOAD_RES_LEVEL_1_0               : 2;	/*[29:28]     r/w 2'h3*/
		uint8_t ANA_FFE_DEG_RES_LEVEL_1_0                : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG5_t;
volatile SPEED_CTRL_REG5_t __xdata __at(PHY_REG_BASE + 0xc1c8) SPEED_CTRL_REG5;
#define reg_AUTO_RX_FOFFSET_EXTRA_M_13_0_b0  SPEED_CTRL_REG5.BF.AUTO_RX_FOFFSET_EXTRA_M_13_0_b0
#define reg_AUTO_RX_FOFFSET_EXTRA_M_13_0_b1  SPEED_CTRL_REG5.BF.AUTO_RX_FOFFSET_EXTRA_M_13_0_b1
#define reg_GX_RX_DFE_EN  SPEED_CTRL_REG5.BF.GX_RX_DFE_EN
#define reg_GX_RXDCW_EN  SPEED_CTRL_REG5.BF.GX_RXDCW_EN
#define reg_GX_TX_SLEW_RATE_SEL_2_0  SPEED_CTRL_REG5.BF.GX_TX_SLEW_RATE_SEL_2_0
#define reg_GX_RX_SELMUFF_1_0  SPEED_CTRL_REG5.BF.GX_RX_SELMUFF_1_0
#define reg_GX_RX_SELMUFI_1_0  SPEED_CTRL_REG5.BF.GX_RX_SELMUFI_1_0
#define reg_ANA_FFE_LOAD_RES_LEVEL_1_0  SPEED_CTRL_REG5.BF.ANA_FFE_LOAD_RES_LEVEL_1_0
#define reg_ANA_FFE_DEG_RES_LEVEL_1_0  SPEED_CTRL_REG5.BF.ANA_FFE_DEG_RES_LEVEL_1_0

// 0xc1d0	SPEED_CTRL_REG7		speed control 7
typedef union {
	struct {
		uint8_t DIV_SEL_PLL150M_1_0                      : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t CLK_OUT_SEL_PLL150M                      : 1;	/*      2     r/w   0*/
		uint8_t TEST_PLL150M_2_0                         : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t CTUNE_PLL150M_1_0                        : 2;	/*  [7:6]     r/w 2'h2*/
		uint8_t KVCO_PLL150M_2_0                         : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t UP_DN_FILTER_PLL150M                     : 1;	/*     11     r/w   0*/
		uint8_t PU_PLL150M                               : 1;	/*     12     r/w   1*/
		uint8_t READY_PLL150M                            : 1;	/*     13       r   0*/
		uint8_t PHY_SPEED_CONTROL_FORCE                  : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SEL_BITS_2_0                             : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t SEL_BITS_EOM_2_0                         : 3;	/*[21:19]     r/w 3'h1*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CLK_ON_RX_SPEED_CHANGE                   : 1;	/*     24     r/w   1*/
		uint8_t CLK_ON_TX_SPEED_CHANGE                   : 1;	/*     25     r/w   1*/
		uint8_t RX_SPEED_CHANGE_DONE                     : 1;	/*     26     r/w   1*/
		uint8_t TX_SPEED_CHANGE_DONE                     : 1;	/*     27     r/w   1*/
		uint8_t SPEED_CHANGE_DONE                        : 1;	/*     28     r/w   1*/
		uint8_t USE_MAX_RATE_CHANGE_DONE                 : 1;	/*     29     r/w   1*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t TO_ANA_SSC_EN                            : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CTRL_REG7_t;
volatile SPEED_CTRL_REG7_t __xdata __at(PHY_REG_BASE + 0xc1d0) SPEED_CTRL_REG7;
#define reg_DIV_SEL_PLL150M_1_0  SPEED_CTRL_REG7.BF.DIV_SEL_PLL150M_1_0
#define reg_CLK_OUT_SEL_PLL150M  SPEED_CTRL_REG7.BF.CLK_OUT_SEL_PLL150M
#define reg_TEST_PLL150M_2_0  SPEED_CTRL_REG7.BF.TEST_PLL150M_2_0
#define reg_CTUNE_PLL150M_1_0  SPEED_CTRL_REG7.BF.CTUNE_PLL150M_1_0
#define reg_KVCO_PLL150M_2_0  SPEED_CTRL_REG7.BF.KVCO_PLL150M_2_0
#define reg_UP_DN_FILTER_PLL150M  SPEED_CTRL_REG7.BF.UP_DN_FILTER_PLL150M
#define reg_PU_PLL150M  SPEED_CTRL_REG7.BF.PU_PLL150M
#define reg_READY_PLL150M  SPEED_CTRL_REG7.BF.READY_PLL150M
#define reg_PHY_SPEED_CONTROL_FORCE  SPEED_CTRL_REG7.BF.PHY_SPEED_CONTROL_FORCE
#define reg_SEL_BITS_2_0  SPEED_CTRL_REG7.BF.SEL_BITS_2_0
#define reg_SEL_BITS_EOM_2_0  SPEED_CTRL_REG7.BF.SEL_BITS_EOM_2_0
#define reg_CLK_ON_RX_SPEED_CHANGE  SPEED_CTRL_REG7.BF.CLK_ON_RX_SPEED_CHANGE
#define reg_CLK_ON_TX_SPEED_CHANGE  SPEED_CTRL_REG7.BF.CLK_ON_TX_SPEED_CHANGE
#define reg_RX_SPEED_CHANGE_DONE  SPEED_CTRL_REG7.BF.RX_SPEED_CHANGE_DONE
#define reg_TX_SPEED_CHANGE_DONE  SPEED_CTRL_REG7.BF.TX_SPEED_CHANGE_DONE
#define reg_SPEED_CHANGE_DONE  SPEED_CTRL_REG7.BF.SPEED_CHANGE_DONE
#define reg_USE_MAX_RATE_CHANGE_DONE  SPEED_CTRL_REG7.BF.USE_MAX_RATE_CHANGE_DONE
#define reg_TO_ANA_SSC_EN  SPEED_CTRL_REG7.BF.TO_ANA_SSC_EN

// 0xc1d4	REF_REG0		Regulator Output Control
typedef union {
	struct {
		uint8_t VTHVCOCAL_2_0                            : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t VREGTXRX_1_0                             : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t SEL_VTHVCOCONT                           : 1;	/*      8     r/w   0*/
		uint8_t FREE_CLK_EN                              : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PLL_VDDRA_SEL_2_0                        : 3;	/*[18:16]     r/w 3'h3*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t VDDBUF_ADJ_2_0                           : 3;	/*[22:20]     r/w 3'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SEL_V0P9_PRO_1_0                         : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t SEL_V0P5_B_1_0                           : 2;	/*[29:28]     r/w 2'h1*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REF_REG0_t;
volatile REF_REG0_t __xdata __at(PHY_REG_BASE + 0xc1d4) REF_REG0;
#define reg_VTHVCOCAL_2_0  REF_REG0.BF.VTHVCOCAL_2_0
#define reg_VREGTXRX_1_0  REF_REG0.BF.VREGTXRX_1_0
#define reg_SEL_VTHVCOCONT  REF_REG0.BF.SEL_VTHVCOCONT
#define reg_FREE_CLK_EN  REF_REG0.BF.FREE_CLK_EN
#define reg_PLL_VDDRA_SEL_2_0  REF_REG0.BF.PLL_VDDRA_SEL_2_0
#define reg_VDDBUF_ADJ_2_0  REF_REG0.BF.VDDBUF_ADJ_2_0
#define reg_SEL_V0P9_PRO_1_0  REF_REG0.BF.SEL_V0P9_PRO_1_0
#define reg_SEL_V0P5_B_1_0  REF_REG0.BF.SEL_V0P5_B_1_0

// 0xc1d8	LOOPBACK_REG0		Digital Loopback Enable / PHY Test Control 0
typedef union {
	struct {
		uint8_t PT_LOCK_CNT_3_0                          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PT_PATTERN_SEL_3_0                       : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t PT_LONG_SHORT                            : 1;	/*      8     r/w   0*/
		uint8_t PT_START_RD                              : 1;	/*      9     r/w   0*/
		uint8_t PT_PATSYN_EN                             : 1;	/*     10     r/w   0*/
		uint8_t PT_XFER_DIFF                             : 1;	/*     11     r/w   0*/
		uint8_t PT_LOCK                                  : 1;	/*     12       r   0*/
		uint8_t PT_PASS                                  : 1;	/*     13       r   0*/
		uint8_t PT_RST                                   : 1;	/*     14     r/w   0*/
		uint8_t PT_EN                                    : 1;	/*     15     r/w   0*/
		uint8_t REFCLK_ON_DCLK_2X_DIS                    : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t PLL_READY_TX                             : 1;	/*     20       r   0*/
		uint8_t PLL_READY_RX                             : 1;	/*     21       r   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t CDR_LOCK                                 : 1;	/*     23       r   0*/
		uint8_t CDR_LOCK_DET_EN                          : 1;	/*     24     r/w   0*/
		uint8_t CDR_LOCK_MODE                            : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t PT_CNT_RST                               : 1;	/*     27     r/w   0*/
		uint8_t RXPHER_TO_TX_EN                          : 1;	/*     28     r/w   0*/
		uint8_t LOCAL_ANA_TX2RX_LPBK_EN                  : 1;	/*     29     r/w   0*/
		uint8_t LOCAL_DIG_TX2RX_LPBK_EN                  : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_DIG_RX2TX_LPBK_EN                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOOPBACK_REG0_t;
volatile LOOPBACK_REG0_t __xdata __at(PHY_REG_BASE + 0xc1d8) LOOPBACK_REG0;
#define reg_PT_LOCK_CNT_3_0  LOOPBACK_REG0.BF.PT_LOCK_CNT_3_0
#define reg_PT_PATTERN_SEL_3_0  LOOPBACK_REG0.BF.PT_PATTERN_SEL_3_0
#define reg_PT_LONG_SHORT  LOOPBACK_REG0.BF.PT_LONG_SHORT
#define reg_PT_START_RD  LOOPBACK_REG0.BF.PT_START_RD
#define reg_PT_PATSYN_EN  LOOPBACK_REG0.BF.PT_PATSYN_EN
#define reg_PT_XFER_DIFF  LOOPBACK_REG0.BF.PT_XFER_DIFF
#define reg_PT_LOCK  LOOPBACK_REG0.BF.PT_LOCK
#define reg_PT_PASS  LOOPBACK_REG0.BF.PT_PASS
#define reg_PT_RST  LOOPBACK_REG0.BF.PT_RST
#define reg_PT_EN  LOOPBACK_REG0.BF.PT_EN
#define reg_REFCLK_ON_DCLK_2X_DIS  LOOPBACK_REG0.BF.REFCLK_ON_DCLK_2X_DIS
#define reg_PLL_READY_TX  LOOPBACK_REG0.BF.PLL_READY_TX
#define reg_PLL_READY_RX  LOOPBACK_REG0.BF.PLL_READY_RX
#define reg_CDR_LOCK  LOOPBACK_REG0.BF.CDR_LOCK
#define reg_CDR_LOCK_DET_EN  LOOPBACK_REG0.BF.CDR_LOCK_DET_EN
#define reg_CDR_LOCK_MODE  LOOPBACK_REG0.BF.CDR_LOCK_MODE
#define reg_PT_CNT_RST  LOOPBACK_REG0.BF.PT_CNT_RST
#define reg_RXPHER_TO_TX_EN  LOOPBACK_REG0.BF.RXPHER_TO_TX_EN
#define reg_LOCAL_ANA_TX2RX_LPBK_EN  LOOPBACK_REG0.BF.LOCAL_ANA_TX2RX_LPBK_EN
#define reg_LOCAL_DIG_TX2RX_LPBK_EN  LOOPBACK_REG0.BF.LOCAL_DIG_TX2RX_LPBK_EN
#define reg_LOCAL_DIG_RX2TX_LPBK_EN  LOOPBACK_REG0.BF.LOCAL_DIG_RX2TX_LPBK_EN

// 0xc1dc	PHYTST_DATA_REG0		PHY Test Data 0
typedef union {
	struct {
		uint8_t PT_DATA_95_64_b0                         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_95_64_b1                         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_95_64_b2                         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_95_64_b3                         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_DATA_REG0_t;
volatile __xdata __at(PHY_REG_BASE + 0xc1dc) PHYTST_DATA_REG0;
#define reg_PT_DATA_95_64_b0  PHYTST_DATA_REG0.BF.PT_DATA_95_64_b0
#define reg_PT_DATA_95_64_b1  PHYTST_DATA_REG0.BF.PT_DATA_95_64_b1
#define reg_PT_DATA_95_64_b2  PHYTST_DATA_REG0.BF.PT_DATA_95_64_b2
#define reg_PT_DATA_95_64_b3  PHYTST_DATA_REG0.BF.PT_DATA_95_64_b3

// 0xc1e0	PHYTST_DATA_REG1		PHY Test Data 1
typedef union {
	struct {
		uint8_t PT_DATA_63_32_b0                         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_63_32_b1                         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_63_32_b2                         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_63_32_b3                         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_DATA_REG1_t;
volatile PHYTST_DATA_REG1_t __xdata __at(PHY_REG_BASE + 0xc1e0) PHYTST_DATA_REG1;
#define reg_PT_DATA_63_32_b0  PHYTST_DATA_REG1.BF.PT_DATA_63_32_b0
#define reg_PT_DATA_63_32_b1  PHYTST_DATA_REG1.BF.PT_DATA_63_32_b1
#define reg_PT_DATA_63_32_b2  PHYTST_DATA_REG1.BF.PT_DATA_63_32_b2
#define reg_PT_DATA_63_32_b3  PHYTST_DATA_REG1.BF.PT_DATA_63_32_b3

// 0xc1e4	PHYTST_DATA_REG2		PHY Test Data 2
typedef union {
	struct {
		uint8_t PT_DATA_31_0_b0                          : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_31_0_b1                          : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_31_0_b2                          : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_DATA_31_0_b3                          : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_DATA_REG2_t;
volatile PHYTST_DATA_REG2_t __xdata __at(PHY_REG_BASE + 0xc1e4) PHYTST_DATA_REG2;
#define reg_PT_DATA_31_0_b0  PHYTST_DATA_REG2.BF.PT_DATA_31_0_b0
#define reg_PT_DATA_31_0_b1  PHYTST_DATA_REG2.BF.PT_DATA_31_0_b1
#define reg_PT_DATA_31_0_b2  PHYTST_DATA_REG2.BF.PT_DATA_31_0_b2
#define reg_PT_DATA_31_0_b3  PHYTST_DATA_REG2.BF.PT_DATA_31_0_b3

// 0xc1e8	PHYTST_PRBSCNT_REG0		PHY Test PRBS Counter 0
typedef union {
	struct {
		uint8_t PT_PRBS_CNT_47_16_b0                     : 8;	/* [31:0]       r   0*/
		uint8_t PT_PRBS_CNT_47_16_b1                     : 8;	/* [31:0]       r   0*/
		uint8_t PT_PRBS_CNT_47_16_b2                     : 8;	/* [31:0]       r   0*/
		uint8_t PT_PRBS_CNT_47_16_b3                     : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_PRBSCNT_REG0_t;
volatile PHYTST_PRBSCNT_REG0_t __xdata __at(PHY_REG_BASE + 0xc1e8) PHYTST_PRBSCNT_REG0;
#define reg_PT_PRBS_CNT_47_16_b0  PHYTST_PRBSCNT_REG0.BF.PT_PRBS_CNT_47_16_b0
#define reg_PT_PRBS_CNT_47_16_b1  PHYTST_PRBSCNT_REG0.BF.PT_PRBS_CNT_47_16_b1
#define reg_PT_PRBS_CNT_47_16_b2  PHYTST_PRBSCNT_REG0.BF.PT_PRBS_CNT_47_16_b2
#define reg_PT_PRBS_CNT_47_16_b3  PHYTST_PRBSCNT_REG0.BF.PT_PRBS_CNT_47_16_b3

// 0xc1ec	PHYTST_PRBSCNT_REG1		PHY Test PRBS Counter 1
typedef union {
	struct {
		uint8_t PT_PRBS_CNT_15_0_b0                      : 8;	/* [15:0]       r   0*/
		uint8_t PT_PRBS_CNT_15_0_b1                      : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_PRBSCNT_REG1_t;
volatile __xdata __at(PHY_REG_BASE + 0xc1ec) PHYTST_PRBSCNT_REG1;
#define reg_PT_PRBS_CNT_15_0_b0  PHYTST_PRBSCNT_REG1.BF.PT_PRBS_CNT_15_0_b0
#define reg_PT_PRBS_CNT_15_0_b1  PHYTST_PRBSCNT_REG1.BF.PT_PRBS_CNT_15_0_b1

// 0xc1f0	PHYTST_ERRCNT_REG0		PHY Test PRBS Error Counter
typedef union {
	struct {
		uint8_t PT_PRBS_ERR_CNT_31_0_b0                  : 8;	/* [31:0]       r   0*/
		uint8_t PT_PRBS_ERR_CNT_31_0_b1                  : 8;	/* [31:0]       r   0*/
		uint8_t PT_PRBS_ERR_CNT_31_0_b2                  : 8;	/* [31:0]       r   0*/
		uint8_t PT_PRBS_ERR_CNT_31_0_b3                  : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_ERRCNT_REG0_t;
volatile PHYTST_ERRCNT_REG0_t __xdata __at(PHY_REG_BASE + 0xc1f0) PHYTST_ERRCNT_REG0;
#define reg_PT_PRBS_ERR_CNT_31_0_b0  PHYTST_ERRCNT_REG0.BF.PT_PRBS_ERR_CNT_31_0_b0
#define reg_PT_PRBS_ERR_CNT_31_0_b1  PHYTST_ERRCNT_REG0.BF.PT_PRBS_ERR_CNT_31_0_b1
#define reg_PT_PRBS_ERR_CNT_31_0_b2  PHYTST_ERRCNT_REG0.BF.PT_PRBS_ERR_CNT_31_0_b2
#define reg_PT_PRBS_ERR_CNT_31_0_b3  PHYTST_ERRCNT_REG0.BF.PT_PRBS_ERR_CNT_31_0_b3

// 0xc1f4	PHYTST_OOB_REG0		PHY Test OOB
typedef union {
	struct {
		uint8_t PT_OOB_IDLE_LEN_7_0                      : 8;	/*  [7:0]     r/w 8'h30*/
		uint8_t PT_OOB_PAT_SEL_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t PT_OOB_SPEED_1_0                         : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t PT_TESTMODE_1_0                          : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t PT_PHYREADY_FORCE                        : 1;	/*     14     r/w   0*/
		uint8_t PT_OOB_EN                                : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t PT_OOB_BURST_LEN_7_0                     : 8;	/*[31:24]     r/w 8'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTST_OOB_REG0_t;
volatile PHYTST_OOB_REG0_t __xdata __at(PHY_REG_BASE + 0xc1f4) PHYTST_OOB_REG0;
#define reg_PT_OOB_IDLE_LEN_7_0  PHYTST_OOB_REG0.BF.PT_OOB_IDLE_LEN_7_0
#define reg_PT_OOB_PAT_SEL_1_0  PHYTST_OOB_REG0.BF.PT_OOB_PAT_SEL_1_0
#define reg_PT_OOB_SPEED_1_0  PHYTST_OOB_REG0.BF.PT_OOB_SPEED_1_0
#define reg_PT_TESTMODE_1_0  PHYTST_OOB_REG0.BF.PT_TESTMODE_1_0
#define reg_PT_PHYREADY_FORCE  PHYTST_OOB_REG0.BF.PT_PHYREADY_FORCE
#define reg_PT_OOB_EN  PHYTST_OOB_REG0.BF.PT_OOB_EN
#define reg_PT_OOB_BURST_LEN_7_0  PHYTST_OOB_REG0.BF.PT_OOB_BURST_LEN_7_0

// 0xc1f8	ACJTAG_ISOLATE_REG0		ACJTAG control / PHY Isolation Mode Control
typedef union {
	struct {
		uint8_t PHY_GEN_RX_3_0                           : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PHY_GEN_TX_3_0                           : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TX_DRV_IDLE                              : 1;	/*      8     r/w   1*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RX_INIT                                  : 1;	/*     10     r/w   0*/
		uint8_t AUTO_RX_INIT_DIS                         : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t REFCLK_ON_DCLK_DIS                       : 1;	/*     13     r/w   0*/
		uint8_t TX_AMP_ADJ_FROM_PIN                      : 1;	/*     14     r/w   0*/
		uint8_t PHY_ISOLATE_MODE                         : 1;	/*     15     r/w   0*/
		uint8_t RX_ACJTAG_MODE                           : 1;	/*     16     r/w   1*/
		uint8_t RX_ACJTAG_INITP                          : 1;	/*     17     r/w   0*/
		uint8_t RX_ACJTAG_INITN                          : 1;	/*     18     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK                       : 1;	/*     19     r/w   0*/
		uint8_t RX_ACJTAG_HYST_2_0                       : 3;	/*[22:20]     r/w 3'h2*/
		uint8_t RX_ACJTAG_AC                             : 1;	/*     23     r/w   1*/
		uint8_t RX_ACJTAG_DCC_EN                         : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ACJTAG_ISOLATE_REG0_t;
volatile ACJTAG_ISOLATE_REG0_t __xdata __at(PHY_REG_BASE + 0xc1f8) ACJTAG_ISOLATE_REG0;
#define reg_PHY_GEN_RX_3_0  ACJTAG_ISOLATE_REG0.BF.PHY_GEN_RX_3_0
#define reg_PHY_GEN_TX_3_0  ACJTAG_ISOLATE_REG0.BF.PHY_GEN_TX_3_0
#define reg_TX_DRV_IDLE  ACJTAG_ISOLATE_REG0.BF.TX_DRV_IDLE
#define reg_RX_INIT  ACJTAG_ISOLATE_REG0.BF.RX_INIT
#define reg_AUTO_RX_INIT_DIS  ACJTAG_ISOLATE_REG0.BF.AUTO_RX_INIT_DIS
#define reg_REFCLK_ON_DCLK_DIS  ACJTAG_ISOLATE_REG0.BF.REFCLK_ON_DCLK_DIS
#define reg_TX_AMP_ADJ_FROM_PIN  ACJTAG_ISOLATE_REG0.BF.TX_AMP_ADJ_FROM_PIN
#define reg_PHY_ISOLATE_MODE  ACJTAG_ISOLATE_REG0.BF.PHY_ISOLATE_MODE
#define reg_RX_ACJTAG_MODE  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_MODE
#define reg_RX_ACJTAG_INITP  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_INITP
#define reg_RX_ACJTAG_INITN  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_INITN
#define reg_RX_ACJTAG_INIT_CLK  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_INIT_CLK
#define reg_RX_ACJTAG_HYST_2_0  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_HYST_2_0
#define reg_RX_ACJTAG_AC  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_AC
#define reg_RX_ACJTAG_DCC_EN  ACJTAG_ISOLATE_REG0.BF.RX_ACJTAG_DCC_EN

// 0xc1fc	MISC_REG0		Misc Control 0
typedef union {
	struct {
		uint8_t CK100MOR125M_EN                          : 1;	/*      0     r/w   0*/
		uint8_t TXDCLK_2X_SEL                            : 1;	/*      1     r/w   0*/
		uint8_t CLK500M_EN                               : 1;	/*      2     r/w   0*/
		uint8_t CK125M_SEL                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t REFCLK_SEL                               : 1;	/*     10     r/w   0*/
		uint8_t PIN_REF_FREF_EN                          : 1;	/*     11     r/w   0*/
		uint8_t PLL_CLK_READY_FORCE                      : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RX_INIT_SPD_CHG_DIS                      : 1;	/*     14     r/w   0*/
		uint8_t PIN_PHY_GEN_LATCH_ON_NRDY                : 1;	/*     15     r/w   1*/
		uint8_t BG_RDY                                   : 1;	/*     16     r/w   1*/
		uint8_t TSTMON_BYPASS_BUF                        : 1;	/*     17     r/w   0*/
		uint8_t IDDQ                                     : 1;	/*     18     r/w   0*/
		uint8_t IDDQ_FM_REG                              : 1;	/*     19     r/w   0*/
		uint8_t VCON_SEL_1_0                             : 2;	/*[21:20]     r/w 2'h1*/
		uint8_t SEL_SMPLR_VCM_1_0                        : 2;	/*[23:22]     r/w 2'h1*/
		uint8_t SFT_RST_NO_REG_FM_REG                    : 1;	/*     24     r/w   0*/
		uint8_t RX_HIZ_FM_REG                            : 1;	/*     25     r/w   0*/
		uint8_t LOOPBACK_ISEL_1_0                        : 2;	/*[27:26]     r/w 2'h1*/
		uint8_t FBMD_INTPCK_EN                           : 1;	/*     28     r/w   0*/
		uint8_t TXDCLK_2X_SEL_FORCE                      : 1;	/*     29     r/w   0*/
		uint8_t FBCK_SEL                                 : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MISC_REG0_t;
volatile MISC_REG0_t __xdata __at(PHY_REG_BASE + 0xc1fc) MISC_REG0;
#define reg_CK100MOR125M_EN  MISC_REG0.BF.CK100MOR125M_EN
#define reg_TXDCLK_2X_SEL  MISC_REG0.BF.TXDCLK_2X_SEL
#define reg_CLK500M_EN  MISC_REG0.BF.CLK500M_EN
#define reg_CK125M_SEL  MISC_REG0.BF.CK125M_SEL
#define reg_REFCLK_SEL  MISC_REG0.BF.REFCLK_SEL
#define reg_PIN_REF_FREF_EN  MISC_REG0.BF.PIN_REF_FREF_EN
#define reg_PLL_CLK_READY_FORCE  MISC_REG0.BF.PLL_CLK_READY_FORCE
#define reg_RX_INIT_SPD_CHG_DIS  MISC_REG0.BF.RX_INIT_SPD_CHG_DIS
#define reg_PIN_PHY_GEN_LATCH_ON_NRDY  MISC_REG0.BF.PIN_PHY_GEN_LATCH_ON_NRDY
#define reg_BG_RDY  MISC_REG0.BF.BG_RDY
#define reg_TSTMON_BYPASS_BUF  MISC_REG0.BF.TSTMON_BYPASS_BUF
#define reg_IDDQ  MISC_REG0.BF.IDDQ
#define reg_IDDQ_FM_REG  MISC_REG0.BF.IDDQ_FM_REG
#define reg_VCON_SEL_1_0  MISC_REG0.BF.VCON_SEL_1_0
#define reg_SEL_SMPLR_VCM_1_0  MISC_REG0.BF.SEL_SMPLR_VCM_1_0
#define reg_SFT_RST_NO_REG_FM_REG  MISC_REG0.BF.SFT_RST_NO_REG_FM_REG
#define reg_RX_HIZ_FM_REG  MISC_REG0.BF.RX_HIZ_FM_REG
#define reg_LOOPBACK_ISEL_1_0  MISC_REG0.BF.LOOPBACK_ISEL_1_0
#define reg_FBMD_INTPCK_EN  MISC_REG0.BF.FBMD_INTPCK_EN
#define reg_TXDCLK_2X_SEL_FORCE  MISC_REG0.BF.TXDCLK_2X_SEL_FORCE
#define reg_FBCK_SEL  MISC_REG0.BF.FBCK_SEL

// 0xc200	MISC_REG1		Misc control register 1
typedef union {
	struct {
		uint8_t DFE_SYNC_EN                              : 1;	/*      0     r/w   1*/
		uint8_t IPP_RES_ADJ                              : 1;	/*      1     r/w   0*/
		uint8_t REFCLK_DIS_FROM_REG                      : 1;	/*      2     r/w   0*/
		uint8_t BG_RDY_FORCE                             : 1;	/*      3     r/w   0*/
		uint8_t SEL_DFE_PATH                             : 1;	/*      4     r/w   0*/
		uint8_t SEL_VCM_DET                              : 1;	/*      5     r/w   0*/
		uint8_t SEL_VGEN                                 : 1;	/*      6     r/w   0*/
		uint8_t TERM_CP                                  : 1;	/*      7     r/w   0*/
		uint8_t VDD_CAL_REG_SEL                          : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RING_EXTRA_I_EN                          : 1;	/*     13     r/w   0*/
		uint8_t PU_IVREF_FROM_REG                        : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t VDDA23_PUMP_SEL_1_0                      : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t VCO_REG1P45_SEL_1_0                      : 2;	/*[19:18]     r/w 2'h1*/
		uint8_t VCO_REG1P2_SEL_1_0                       : 2;	/*[21:20]     r/w 2'h1*/
		uint8_t PSUB_CTL_1_0                             : 2;	/*[23:22]     r/w 2'h2*/
		uint8_t NSUB_CTL_1_0                             : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t SLLP_PSF_LEVEL_2_0                       : 3;	/*[28:26]     r/w 3'h3*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t PLL_SLUMBER_RESET_CLK1M_EN               : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MISC_REG1_t;
volatile MISC_REG1_t __xdata __at(PHY_REG_BASE + 0xc200) MISC_REG1;
#define reg_DFE_SYNC_EN  MISC_REG1.BF.DFE_SYNC_EN
#define reg_IPP_RES_ADJ  MISC_REG1.BF.IPP_RES_ADJ
#define reg_REFCLK_DIS_FROM_REG  MISC_REG1.BF.REFCLK_DIS_FROM_REG
#define reg_BG_RDY_FORCE  MISC_REG1.BF.BG_RDY_FORCE
#define reg_SEL_DFE_PATH  MISC_REG1.BF.SEL_DFE_PATH
#define reg_SEL_VCM_DET  MISC_REG1.BF.SEL_VCM_DET
#define reg_SEL_VGEN  MISC_REG1.BF.SEL_VGEN
#define reg_TERM_CP  MISC_REG1.BF.TERM_CP
#define reg_VDD_CAL_REG_SEL  MISC_REG1.BF.VDD_CAL_REG_SEL
#define reg_RING_EXTRA_I_EN  MISC_REG1.BF.RING_EXTRA_I_EN
#define reg_PU_IVREF_FROM_REG  MISC_REG1.BF.PU_IVREF_FROM_REG
#define reg_VDDA23_PUMP_SEL_1_0  MISC_REG1.BF.VDDA23_PUMP_SEL_1_0
#define reg_VCO_REG1P45_SEL_1_0  MISC_REG1.BF.VCO_REG1P45_SEL_1_0
#define reg_VCO_REG1P2_SEL_1_0  MISC_REG1.BF.VCO_REG1P2_SEL_1_0
#define reg_PSUB_CTL_1_0  MISC_REG1.BF.PSUB_CTL_1_0
#define reg_NSUB_CTL_1_0  MISC_REG1.BF.NSUB_CTL_1_0
#define reg_SLLP_PSF_LEVEL_2_0  MISC_REG1.BF.SLLP_PSF_LEVEL_2_0
#define reg_PLL_SLUMBER_RESET_CLK1M_EN  MISC_REG1.BF.PLL_SLUMBER_RESET_CLK1M_EN

// 0xc204	LANE_ALIGN_REG0		Lane Alignment Control
typedef union {
	struct {
		uint8_t SLEW_5_0                                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t SLEW_FORCE                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TXCM_TRACK_SEL_1_0                       : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t FLPBK_DLY                                : 1;	/*     10     r/w   0*/
		uint8_t RX_ACJTAG_REF_SEL                        : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t LANE_ALIGN_POFFSET_6_0                   : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t LANE_ALIGN_POFFSET_FORCE                 : 1;	/*     23     r/w   0*/
		uint8_t LANE_ALIGN_FAST_STEP_2_0                 : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t LANE_ALIGN_FAST_MODE                     : 1;	/*     27     r/w   0*/
		uint8_t LANE_ALIGN_OFF                           : 1;	/*     28     r/w   1*/
		uint8_t LANE_ALIGN_SAMPLE_SEL                    : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_ALIGN_REG0_t;
volatile LANE_ALIGN_REG0_t __xdata __at(PHY_REG_BASE + 0xc204) LANE_ALIGN_REG0;
#define reg_SLEW_5_0  LANE_ALIGN_REG0.BF.SLEW_5_0
#define reg_SLEW_FORCE  LANE_ALIGN_REG0.BF.SLEW_FORCE
#define reg_TXCM_TRACK_SEL_1_0  LANE_ALIGN_REG0.BF.TXCM_TRACK_SEL_1_0
#define reg_FLPBK_DLY  LANE_ALIGN_REG0.BF.FLPBK_DLY
#define reg_RX_ACJTAG_REF_SEL  LANE_ALIGN_REG0.BF.RX_ACJTAG_REF_SEL
#define reg_LANE_ALIGN_POFFSET_6_0  LANE_ALIGN_REG0.BF.LANE_ALIGN_POFFSET_6_0
#define reg_LANE_ALIGN_POFFSET_FORCE  LANE_ALIGN_REG0.BF.LANE_ALIGN_POFFSET_FORCE
#define reg_LANE_ALIGN_FAST_STEP_2_0  LANE_ALIGN_REG0.BF.LANE_ALIGN_FAST_STEP_2_0
#define reg_LANE_ALIGN_FAST_MODE  LANE_ALIGN_REG0.BF.LANE_ALIGN_FAST_MODE
#define reg_LANE_ALIGN_OFF  LANE_ALIGN_REG0.BF.LANE_ALIGN_OFF
#define reg_LANE_ALIGN_SAMPLE_SEL  LANE_ALIGN_REG0.BF.LANE_ALIGN_SAMPLE_SEL

// 0xc208	MON_REG0		Monitor control 0
typedef union {
	struct {
		uint8_t SYNC_DET_MON_VAL_15_0_b0                 : 8;	/* [15:0]       r   0*/
		uint8_t SYNC_DET_MON_VAL_15_0_b1                 : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MON_REG0_t;
volatile MON_REG0_t __xdata __at(PHY_REG_BASE + 0xc208) MON_REG0;
#define reg_SYNC_DET_MON_VAL_15_0_b0  MON_REG0.BF.SYNC_DET_MON_VAL_15_0_b0
#define reg_SYNC_DET_MON_VAL_15_0_b1  MON_REG0.BF.SYNC_DET_MON_VAL_15_0_b1

// 0xc20c	ANA_TEST_POINT		Analog Test Point Selection
typedef union {
	struct {
		uint8_t ANA_TEST_POINT_SEL_6_0                   : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t STRESSTEST_EN                            : 1;	/*      7     r/w   0*/
		uint8_t CK100K_IN_PLL_SEL                        : 1;	/*      8     r/w   0*/
		uint8_t BURN_IN_TEST                             : 1;	/*      9     r/w   0*/
		uint8_t CK100K_IN_PLL_FREQ_SEL_1_0               : 2;	/*[11:10]     r/w 2'h1*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_SEQ_MON_SEL_4_0                      : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DIG_TEST_BUS_CONFIG_5_0                  : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TEST_POINT_t;
volatile ANA_TEST_POINT_t __xdata __at(PHY_REG_BASE + 0xc20c) ANA_TEST_POINT;
#define reg_ANA_TEST_POINT_SEL_6_0  ANA_TEST_POINT.BF.ANA_TEST_POINT_SEL_6_0
#define reg_STRESSTEST_EN  ANA_TEST_POINT.BF.STRESSTEST_EN
#define reg_CK100K_IN_PLL_SEL  ANA_TEST_POINT.BF.CK100K_IN_PLL_SEL
#define reg_BURN_IN_TEST  ANA_TEST_POINT.BF.BURN_IN_TEST
#define reg_CK100K_IN_PLL_FREQ_SEL_1_0  ANA_TEST_POINT.BF.CK100K_IN_PLL_FREQ_SEL_1_0
#define reg_DFE_SEQ_MON_SEL_4_0  ANA_TEST_POINT.BF.DFE_SEQ_MON_SEL_4_0
#define reg_DIG_TEST_BUS_CONFIG_5_0  ANA_TEST_POINT.BF.DIG_TEST_BUS_CONFIG_5_0

// 0xc210	TO_ANA_REG0		value of signals to analog
typedef union {
	struct {
		uint8_t TO_ANA_RD_SEL_4_0                        : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t ANA_VIRTUAL_CTRL_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TO_ANA_VALUE_15_0_b0                     : 8;	/*[31:16]       r   0*/
		uint8_t TO_ANA_VALUE_15_0_b1                     : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TO_ANA_REG0_t;
volatile TO_ANA_REG0_t __xdata __at(PHY_REG_BASE + 0xc210) TO_ANA_REG0;
#define reg_TO_ANA_RD_SEL_4_0  TO_ANA_REG0.BF.TO_ANA_RD_SEL_4_0
#define reg_ANA_VIRTUAL_CTRL_7_0  TO_ANA_REG0.BF.ANA_VIRTUAL_CTRL_7_0
#define reg_TO_ANA_VALUE_15_0_b0  TO_ANA_REG0.BF.TO_ANA_VALUE_15_0_b0
#define reg_TO_ANA_VALUE_15_0_b1  TO_ANA_REG0.BF.TO_ANA_VALUE_15_0_b1

// 0xc214	DIGTST_REG1		Digital Test Bus
typedef union {
	struct {
		uint8_t DIG_TEST_BUS_15_0_b0                     : 8;	/* [15:0]       r   0*/
		uint8_t DIG_TEST_BUS_15_0_b1                     : 8;	/* [15:0]       r   0*/
		uint8_t TESTBUS_SEL_HI_5_0                       : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TESTBUS_SEL_LO_5_0                       : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t TESTBUS_HI8BSEL_8BMODE                   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DIGTST_REG1_t;
volatile DIGTST_REG1_t __xdata __at(PHY_REG_BASE + 0xc214) DIGTST_REG1;
#define reg_DIG_TEST_BUS_15_0_b0  DIGTST_REG1.BF.DIG_TEST_BUS_15_0_b0
#define reg_DIG_TEST_BUS_15_0_b1  DIGTST_REG1.BF.DIG_TEST_BUS_15_0_b1
#define reg_TESTBUS_SEL_HI_5_0  DIGTST_REG1.BF.TESTBUS_SEL_HI_5_0
#define reg_TESTBUS_SEL_LO_5_0  DIGTST_REG1.BF.TESTBUS_SEL_LO_5_0
#define reg_TESTBUS_HI8BSEL_8BMODE  DIGTST_REG1.BF.TESTBUS_HI8BSEL_8BMODE

// 0xc218	ANA_RSVD0		Analog Reserved 0
typedef union {
	struct {
		uint8_t ANA_RSVD_A_15_0_b0                       : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_RSVD_A_15_0_b1                       : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_RSVD_B_15_0_b0                       : 8;	/*[31:16]     r/w 16'hff00*/
		uint8_t ANA_RSVD_B_15_0_b1                       : 8;	/*[31:16]     r/w 16'hff00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD0_t;
volatile ANA_RSVD0_t __xdata __at(PHY_REG_BASE + 0xc218) ANA_RSVD0;
#define reg_ANA_RSVD_A_15_0_b0  ANA_RSVD0.BF.ANA_RSVD_A_15_0_b0
#define reg_ANA_RSVD_A_15_0_b1  ANA_RSVD0.BF.ANA_RSVD_A_15_0_b1
#define reg_ANA_RSVD_B_15_0_b0  ANA_RSVD0.BF.ANA_RSVD_B_15_0_b0
#define reg_ANA_RSVD_B_15_0_b1  ANA_RSVD0.BF.ANA_RSVD_B_15_0_b1

// 0xc21c	DIG_RSVD0		External Digital Reserved 0 / Internal Digital Reserved 0
typedef union {
	struct {
		uint8_t DIG_INT_RSVD0_15_0_b0                    : 8;	/* [15:0]     r/w 16'h00f0*/
		uint8_t DIG_INT_RSVD0_15_0_b1                    : 8;	/* [15:0]     r/w 16'h00f0*/
		uint8_t DIG_RSVD0_15_0_b0                        : 8;	/*[31:16]     r/w 16'h000f*/
		uint8_t DIG_RSVD0_15_0_b1                        : 8;	/*[31:16]     r/w 16'h000f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DIG_RSVD0_t;
volatile DIG_RSVD0_t __xdata __at(PHY_REG_BASE + 0xc21c) DIG_RSVD0;
#define reg_DIG_INT_RSVD0_15_0_b0  DIG_RSVD0.BF.DIG_INT_RSVD0_15_0_b0
#define reg_DIG_INT_RSVD0_15_0_b1  DIG_RSVD0.BF.DIG_INT_RSVD0_15_0_b1
#define reg_DIG_RSVD0_15_0_b0  DIG_RSVD0.BF.DIG_RSVD0_15_0_b0
#define reg_DIG_RSVD0_15_0_b1  DIG_RSVD0.BF.DIG_RSVD0_15_0_b1

// 0xc220	DLY_REG0		RX control register 7
typedef union {
	struct {
		uint8_t RX_DPHERCK_EOM_DLY_SEL_1_0               : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RX_DPHERCK_E_DLY_SEL_1_0                 : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t RX_DPHERCK_C_DLY_SEL_1_0                 : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t TX_DPHERCK_DLY_SEL_1_0                   : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t PLL_CLK_READY_DLY_SEL                    : 1;	/*      8     r/w   1*/
		uint8_t PU_RX_DLY_SEL                            : 1;	/*      9     r/w   1*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLY_REG0_t;
volatile DLY_REG0_t __xdata __at(PHY_REG_BASE + 0xc220) DLY_REG0;
#define reg_RX_DPHERCK_EOM_DLY_SEL_1_0  DLY_REG0.BF.RX_DPHERCK_EOM_DLY_SEL_1_0
#define reg_RX_DPHERCK_E_DLY_SEL_1_0  DLY_REG0.BF.RX_DPHERCK_E_DLY_SEL_1_0
#define reg_RX_DPHERCK_C_DLY_SEL_1_0  DLY_REG0.BF.RX_DPHERCK_C_DLY_SEL_1_0
#define reg_TX_DPHERCK_DLY_SEL_1_0  DLY_REG0.BF.TX_DPHERCK_DLY_SEL_1_0
#define reg_PLL_CLK_READY_DLY_SEL  DLY_REG0.BF.PLL_CLK_READY_DLY_SEL
#define reg_PU_RX_DLY_SEL  DLY_REG0.BF.PU_RX_DLY_SEL

// 0xc224	POWER_ON_REG		Power omn sequence control 0
typedef union {
	struct {
		uint8_t PIN_PLL_READY_RX                         : 1;	/*      0     r/w   0*/
		uint8_t PIN_PLL_READY_TX                         : 1;	/*      1     r/w   0*/
		uint8_t REST_INTP_EXT_RX2                        : 1;	/*      2     r/w   1*/
		uint8_t REST_INTP_EXT_RX1                        : 1;	/*      3     r/w   1*/
		uint8_t RESET_INTP_EXT_TX                        : 1;	/*      4     r/w   1*/
		uint8_t RESET_INTP_EXT_EOM                       : 1;	/*      5     r/w   1*/
		uint8_t ANA_DTL_LOOP_FREEZE                      : 1;	/*      6     r/w   1*/
		uint8_t DTL_LOOP_FREEZE                          : 1;	/*      7     r/w   1*/
		uint8_t RESET_DTL_TX                             : 1;	/*      8     r/w   1*/
		uint8_t RESET_DTL_RX                             : 1;	/*      9     r/w   1*/
		uint8_t RESET_DFE_DP                             : 1;	/*     10     r/w   1*/
		uint8_t CLK150M_RST                              : 1;	/*     11     r/w   0*/
		uint8_t RESET_CAL                                : 1;	/*     12     r/w   1*/
		uint8_t DTX_CLK_OFF                              : 1;	/*     13     r/w   1*/
		uint8_t DTL_CLK_OFF                              : 1;	/*     14     r/w   1*/
		uint8_t DFE_FREEZE                               : 1;	/*     15     r/w   1*/
		uint8_t PLL_CLK_READY_PRE                        : 1;	/*     16     r/w   0*/
		uint8_t PLL_CLK_READY                            : 1;	/*     17     r/w   0*/
		uint8_t PWRON_SEQ                                : 1;	/*     18     r/w   1*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESET_ANA                                : 1;	/*     20     r/w   1*/
		uint8_t ANA_PU_TX                                : 1;	/*     21     r/w   0*/
		uint8_t PU_RX_DLY                                : 1;	/*     22     r/w   0*/
		uint8_t ANA_PU_RX                                : 1;	/*     23     r/w   0*/
		uint8_t SET_PLL_SLUMBER                          : 1;	/*     24     r/w   0*/
		uint8_t ANA_PU_PLL                               : 1;	/*     25     r/w   0*/
		uint8_t ANA_PU_IVREF                             : 1;	/*     26     r/w   0*/
		uint8_t PU_DRV                                   : 1;	/*     27     r/w   1*/
		uint8_t PU_DFE                                   : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} POWER_ON_REG_t;
volatile POWER_ON_REG_t __xdata __at(PHY_REG_BASE + 0xc224) POWER_ON_REG;
#define reg_PIN_PLL_READY_RX  POWER_ON_REG.BF.PIN_PLL_READY_RX
#define reg_PIN_PLL_READY_TX  POWER_ON_REG.BF.PIN_PLL_READY_TX
#define reg_REST_INTP_EXT_RX2  POWER_ON_REG.BF.REST_INTP_EXT_RX2
#define reg_REST_INTP_EXT_RX1  POWER_ON_REG.BF.REST_INTP_EXT_RX1
#define reg_RESET_INTP_EXT_TX  POWER_ON_REG.BF.RESET_INTP_EXT_TX
#define reg_RESET_INTP_EXT_EOM  POWER_ON_REG.BF.RESET_INTP_EXT_EOM
#define reg_ANA_DTL_LOOP_FREEZE  POWER_ON_REG.BF.ANA_DTL_LOOP_FREEZE
#define reg_DTL_LOOP_FREEZE  POWER_ON_REG.BF.DTL_LOOP_FREEZE
#define reg_RESET_DTL_TX  POWER_ON_REG.BF.RESET_DTL_TX
#define reg_RESET_DTL_RX  POWER_ON_REG.BF.RESET_DTL_RX
#define reg_RESET_DFE_DP  POWER_ON_REG.BF.RESET_DFE_DP
#define reg_CLK150M_RST  POWER_ON_REG.BF.CLK150M_RST
#define reg_RESET_CAL  POWER_ON_REG.BF.RESET_CAL
#define reg_DTX_CLK_OFF  POWER_ON_REG.BF.DTX_CLK_OFF
#define reg_DTL_CLK_OFF  POWER_ON_REG.BF.DTL_CLK_OFF
#define reg_DFE_FREEZE  POWER_ON_REG.BF.DFE_FREEZE
#define reg_PLL_CLK_READY_PRE  POWER_ON_REG.BF.PLL_CLK_READY_PRE
#define reg_PLL_CLK_READY  POWER_ON_REG.BF.PLL_CLK_READY
#define reg_PWRON_SEQ  POWER_ON_REG.BF.PWRON_SEQ
#define reg_RESET_ANA  POWER_ON_REG.BF.RESET_ANA
#define reg_ANA_PU_TX  POWER_ON_REG.BF.ANA_PU_TX
#define reg_PU_RX_DLY  POWER_ON_REG.BF.PU_RX_DLY
#define reg_ANA_PU_RX  POWER_ON_REG.BF.ANA_PU_RX
#define reg_SET_PLL_SLUMBER  POWER_ON_REG.BF.SET_PLL_SLUMBER
#define reg_ANA_PU_PLL  POWER_ON_REG.BF.ANA_PU_PLL
#define reg_ANA_PU_IVREF  POWER_ON_REG.BF.ANA_PU_IVREF
#define reg_PU_DRV  POWER_ON_REG.BF.PU_DRV
#define reg_PU_DFE  POWER_ON_REG.BF.PU_DFE
#define reg_RESET_DTL_DFE_DP POWER_ON_REG.BT.B1

// 0xc228	DEBUG0		debug register0
typedef union {
	struct {
		uint8_t C_DEBUG_0_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_1_7_0                            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_2_7_0                            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_3_7_0                            : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG0_t;
 __xdata __at(PHY_REG_BASE + 0xc228) volatile DEBUG0_t DEBUG0;
#define reg_C_DEBUG_0_7_0  DEBUG0.BF.C_DEBUG_0_7_0
#define reg_C_DEBUG_1_7_0  DEBUG0.BF.C_DEBUG_1_7_0
#define reg_C_DEBUG_2_7_0  DEBUG0.BF.C_DEBUG_2_7_0
#define reg_C_DEBUG_3_7_0  DEBUG0.BF.C_DEBUG_3_7_0

// 0xc22c	DEBUG1		debug register1
typedef union {
	struct {
		uint8_t C_DEBUG_4_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_5_7_0                            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_6_7_0                            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_7_7_0                            : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG1_t;
volatile DEBUG1_t __xdata __at(PHY_REG_BASE + 0xc22c) DEBUG1;
#define reg_C_DEBUG_4_7_0  DEBUG1.BF.C_DEBUG_4_7_0
#define reg_C_DEBUG_5_7_0  DEBUG1.BF.C_DEBUG_5_7_0
#define reg_C_DEBUG_6_7_0  DEBUG1.BF.C_DEBUG_6_7_0
#define reg_C_DEBUG_7_7_0  DEBUG1.BF.C_DEBUG_7_7_0

// 0xc230	DEBUG2		debug register2
typedef union {
	struct {
		uint8_t C_DEBUG_8_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_9_7_0                            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_10_7_0                           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_11_7_0                           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG2_t;
volatile DEBUG2_t __xdata __at(PHY_REG_BASE + 0xc230) DEBUG2;
#define reg_C_DEBUG_8_7_0  DEBUG2.BF.C_DEBUG_8_7_0
#define reg_C_DEBUG_9_7_0  DEBUG2.BF.C_DEBUG_9_7_0
#define reg_C_DEBUG_10_7_0  DEBUG2.BF.C_DEBUG_10_7_0
#define reg_C_DEBUG_11_7_0  DEBUG2.BF.C_DEBUG_11_7_0

// 0xc234	DEBUG3		debug register3
typedef union {
	struct {
		uint8_t C_DEBUG_12_7_0                           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_13_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_14_7_0                           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_15_7_0                           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG3_t;
volatile DEBUG3_t __xdata __at(PHY_REG_BASE + 0xc234) DEBUG3;
#define reg_C_DEBUG_12_7_0  DEBUG3.BF.C_DEBUG_12_7_0
#define reg_C_DEBUG_13_7_0  DEBUG3.BF.C_DEBUG_13_7_0
#define reg_C_DEBUG_14_7_0  DEBUG3.BF.C_DEBUG_14_7_0
#define reg_C_DEBUG_15_7_0  DEBUG3.BF.C_DEBUG_15_7_0

// 0xc238	DEBUG4		debug register4
typedef union {
	struct {
		uint8_t C_DEBUG_16_7_0                           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_17_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_18_7_0                           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_19_7_0                           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG4_t;
volatile DEBUG4_t __xdata __at(PHY_REG_BASE + 0xc238) DEBUG4;
#define reg_C_DEBUG_16_7_0  DEBUG4.BF.C_DEBUG_16_7_0
#define reg_C_DEBUG_17_7_0  DEBUG4.BF.C_DEBUG_17_7_0
#define reg_C_DEBUG_18_7_0  DEBUG4.BF.C_DEBUG_18_7_0
#define reg_C_DEBUG_19_7_0  DEBUG4.BF.C_DEBUG_19_7_0

// 0xc23c	DEBUG5		debug register5
typedef union {
	struct {
		uint8_t C_DEBUG_20_7_0                           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_21_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_22_7_0                           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_23_7_0                           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG5_t;
volatile DEBUG5_t __xdata __at(PHY_REG_BASE + 0xc23c) DEBUG5;
#define reg_C_DEBUG_20_7_0  DEBUG5.BF.C_DEBUG_20_7_0
#define reg_C_DEBUG_21_7_0  DEBUG5.BF.C_DEBUG_21_7_0
#define reg_C_DEBUG_22_7_0  DEBUG5.BF.C_DEBUG_22_7_0
#define reg_C_DEBUG_23_7_0  DEBUG5.BF.C_DEBUG_23_7_0

// 0xc240	DEBUG6		debug register6
typedef union {
	struct {
		uint8_t C_DEBUG_24_7_0                           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_25_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_26_7_0                           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_27_7_0                           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG6_t;
volatile DEBUG6_t __xdata __at(PHY_REG_BASE + 0xc240) DEBUG6;
#define reg_C_DEBUG_24_7_0  DEBUG6.BF.C_DEBUG_24_7_0
#define reg_C_DEBUG_25_7_0  DEBUG6.BF.C_DEBUG_25_7_0
#define reg_C_DEBUG_26_7_0  DEBUG6.BF.C_DEBUG_26_7_0
#define reg_C_DEBUG_27_7_0  DEBUG6.BF.C_DEBUG_27_7_0

// 0xc244	DEBUG7		debug register7
typedef union {
	struct {
		uint8_t C_DEBUG_28_7_0                           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t C_DEBUG_29_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t C_DEBUG_30_7_0                           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t C_DEBUG_31_7_0                           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG7_t;
volatile DEBUG7_t __xdata __at(PHY_REG_BASE + 0xc244) DEBUG7;
#define reg_C_DEBUG_28_7_0  DEBUG7.BF.C_DEBUG_28_7_0
#define reg_C_DEBUG_29_7_0  DEBUG7.BF.C_DEBUG_29_7_0
#define reg_C_DEBUG_30_7_0  DEBUG7.BF.C_DEBUG_30_7_0
#define reg_C_DEBUG_31_7_0  DEBUG7.BF.C_DEBUG_31_7_0

// 0xc248	DEBUG8		debug register8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 8;	/* [25:8]       r   0*/
		uint8_t RESERVED_16                              : 8;	/* [25:8]       r   0*/
		uint8_t RESERVED_24                              : 2;	/* [25:8]       r   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t XDATA_DB_WR                              : 1;	/*     30     r/w   0*/
		uint8_t XDATA_DB_RD                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DEBUG8_t;
volatile DEBUG8_t __xdata __at(PHY_REG_BASE + 0xc248) DEBUG8;
#define reg_XDATA_DB_WR  DEBUG8.BF.XDATA_DB_WR
#define reg_XDATA_DB_RD  DEBUG8.BF.XDATA_DB_RD

// 0xc24c	PIN_RESERVED_REG0		pin_reserved_reg0 
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [31:0]       r   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:0]       r   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:0]       r   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PIN_RESERVED_REG0_t;
volatile PIN_RESERVED_REG0_t __xdata __at(PHY_REG_BASE + 0xc24c) PIN_RESERVED_REG0;

// 0xc250	INTERRUPT_REG0		interrupt 0
typedef union {
	struct {
		uint8_t FRAME_LOCK_INT                           : 1;	/*      0       r   0*/
		uint8_t FRAME_UNLOCK_INT                         : 1;	/*      1       r   0*/
		uint8_t FRAME_DET_TIMEOUT_INT                    : 1;	/*      2       r   0*/
		uint8_t DME_DEC_ERROR_INT                        : 1;	/*      3       r   0*/
		uint8_t REMOTE_BALANCE_ERR_INT                   : 1;	/*      4       r   0*/
		uint8_t REMOTE_CTRL_VALID_INT                    : 1;	/*      5       r   0*/
		uint8_t REMOTE_STATUS_VALID_INT                  : 1;	/*      6       r   0*/
		uint8_t REMOTE_ERROR_VALID_INT                   : 1;	/*      7       r   0*/
		uint8_t REMOTE_TX_INIT_INT                       : 1;	/*      8       r   0*/
		uint8_t REMOTE_TRAIN_COMP_INT                    : 1;	/*      9       r   0*/
		uint8_t LOCAL_TX_INIT_INT                        : 1;	/*     10       r   0*/
		uint8_t LOCAL_TRAIN_COMP_INT                     : 1;	/*     11       r   0*/
		uint8_t LOCAL_ERROR_VALID_INT                    : 1;	/*     12       r   0*/
		uint8_t LOCAL_STATUS_VALID_INT                   : 1;	/*     13       r   0*/
		uint8_t LOCAL_CTRL_VALID_INT                     : 1;	/*     14       r   0*/
		uint8_t LOCAL_FIELD_DONE_INT                     : 1;	/*     15       r   0*/
		uint8_t TX_TRAIN_COMPLETE_INT                    : 1;	/*     16       r   0*/
		uint8_t RX_TRAIN_COMPLETE_INT                    : 1;	/*     17       r   0*/
		uint8_t STATUS_DET_TIMEOUT_INT                   : 1;	/*     18       r   0*/
		uint8_t DFE_DONE_INT                             : 1;	/*     19       r   0*/
		uint8_t TRX_TRAIN_DONE_INT                       : 1;	/*     20       r   0*/
		uint8_t TRX_TRAIN_TIMEOUT_INT                    : 1;	/*     21       r   0*/
		uint8_t TX_TRAIN_REQ_INT                         : 1;	/*     22       r   0*/
		uint8_t RX_TRAIN_REQ_INT                         : 1;	/*     23       r   0*/
		uint8_t CALIBRATION_REQ_INT                      : 1;	/*     24       r   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG0_t;
volatile INTERRUPT_REG0_t __xdata __at(PHY_REG_BASE + 0xc250) INTERRUPT_REG0;
#define reg_FRAME_LOCK_INT  INTERRUPT_REG0.BF.FRAME_LOCK_INT
#define reg_FRAME_UNLOCK_INT  INTERRUPT_REG0.BF.FRAME_UNLOCK_INT
#define reg_FRAME_DET_TIMEOUT_INT  INTERRUPT_REG0.BF.FRAME_DET_TIMEOUT_INT
#define reg_DME_DEC_ERROR_INT  INTERRUPT_REG0.BF.DME_DEC_ERROR_INT
#define reg_REMOTE_BALANCE_ERR_INT  INTERRUPT_REG0.BF.REMOTE_BALANCE_ERR_INT
#define reg_REMOTE_CTRL_VALID_INT  INTERRUPT_REG0.BF.REMOTE_CTRL_VALID_INT
#define reg_REMOTE_STATUS_VALID_INT  INTERRUPT_REG0.BF.REMOTE_STATUS_VALID_INT
#define reg_REMOTE_ERROR_VALID_INT  INTERRUPT_REG0.BF.REMOTE_ERROR_VALID_INT
#define reg_REMOTE_TX_INIT_INT  INTERRUPT_REG0.BF.REMOTE_TX_INIT_INT
#define reg_REMOTE_TRAIN_COMP_INT  INTERRUPT_REG0.BF.REMOTE_TRAIN_COMP_INT
#define reg_LOCAL_TX_INIT_INT  INTERRUPT_REG0.BF.LOCAL_TX_INIT_INT
#define reg_LOCAL_TRAIN_COMP_INT  INTERRUPT_REG0.BF.LOCAL_TRAIN_COMP_INT
#define reg_LOCAL_ERROR_VALID_INT  INTERRUPT_REG0.BF.LOCAL_ERROR_VALID_INT
#define reg_LOCAL_STATUS_VALID_INT  INTERRUPT_REG0.BF.LOCAL_STATUS_VALID_INT
#define reg_LOCAL_CTRL_VALID_INT  INTERRUPT_REG0.BF.LOCAL_CTRL_VALID_INT
#define reg_LOCAL_FIELD_DONE_INT  INTERRUPT_REG0.BF.LOCAL_FIELD_DONE_INT
#define reg_TX_TRAIN_COMPLETE_INT  INTERRUPT_REG0.BF.TX_TRAIN_COMPLETE_INT
#define reg_RX_TRAIN_COMPLETE_INT  INTERRUPT_REG0.BF.RX_TRAIN_COMPLETE_INT
#define reg_STATUS_DET_TIMEOUT_INT  INTERRUPT_REG0.BF.STATUS_DET_TIMEOUT_INT
#define reg_DFE_DONE_INT  INTERRUPT_REG0.BF.DFE_DONE_INT
#define reg_TRX_TRAIN_DONE_INT  INTERRUPT_REG0.BF.TRX_TRAIN_DONE_INT
#define reg_TRX_TRAIN_TIMEOUT_INT  INTERRUPT_REG0.BF.TRX_TRAIN_TIMEOUT_INT
#define reg_TX_TRAIN_REQ_INT  INTERRUPT_REG0.BF.TX_TRAIN_REQ_INT
#define reg_RX_TRAIN_REQ_INT  INTERRUPT_REG0.BF.RX_TRAIN_REQ_INT
#define reg_CALIBRATION_REQ_INT  INTERRUPT_REG0.BF.CALIBRATION_REQ_INT

// 0xc254	INTERRUPT_REG1		interrupt 1
typedef union {
	struct {
		uint8_t PIN_PU_PLL_CHG_INT                       : 1;	/*      0       r   0*/
		uint8_t PIN_PU_RX_CHG_INT                        : 1;	/*      1       r   0*/
		uint8_t PIN_PU_TX_CHG_INT                        : 1;	/*      2       r   0*/
		uint8_t PIN_PU_IVREF_CHG_INT                     : 1;	/*      3       r   0*/
		uint8_t PIN_TX_IDLE_CHG_INT                      : 1;	/*      4       r   0*/
		uint8_t PIN_RX_INIT_CHG_INT                      : 1;	/*      5       r   0*/
		uint8_t PIN_PHY_GEN_RX_CHG_INT                   : 1;	/*      6       r   0*/
		uint8_t PIN_PHY_GEN_TX_CHG_INT                   : 1;	/*      7       r   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_CHG_INT              : 1;	/*      8       r   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_CHG_INT              : 1;	/*      9       r   0*/
		uint8_t PIN_REFCLK_DIS_CHG_INT                   : 1;	/*     10       r   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t SOFT_INT_7_0                             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG1_t;
volatile INTERRUPT_REG1_t __xdata __at(PHY_REG_BASE + 0xc254) INTERRUPT_REG1;
#define reg_PIN_PU_PLL_CHG_INT  INTERRUPT_REG1.BF.PIN_PU_PLL_CHG_INT
#define reg_PIN_PU_RX_CHG_INT  INTERRUPT_REG1.BF.PIN_PU_RX_CHG_INT
#define reg_PIN_PU_TX_CHG_INT  INTERRUPT_REG1.BF.PIN_PU_TX_CHG_INT
#define reg_PIN_PU_IVREF_CHG_INT  INTERRUPT_REG1.BF.PIN_PU_IVREF_CHG_INT
#define reg_PIN_TX_IDLE_CHG_INT  INTERRUPT_REG1.BF.PIN_TX_IDLE_CHG_INT
#define reg_PIN_RX_INIT_CHG_INT  INTERRUPT_REG1.BF.PIN_RX_INIT_CHG_INT
#define reg_PIN_PHY_GEN_RX_CHG_INT  INTERRUPT_REG1.BF.PIN_PHY_GEN_RX_CHG_INT
#define reg_PIN_PHY_GEN_TX_CHG_INT  INTERRUPT_REG1.BF.PIN_PHY_GEN_TX_CHG_INT
#define reg_PIN_TX_TRAIN_ENABLE_CHG_INT  INTERRUPT_REG1.BF.PIN_TX_TRAIN_ENABLE_CHG_INT
#define reg_PIN_RX_TRAIN_ENABLE_CHG_INT  INTERRUPT_REG1.BF.PIN_RX_TRAIN_ENABLE_CHG_INT
#define reg_PIN_REFCLK_DIS_CHG_INT  INTERRUPT_REG1.BF.PIN_REFCLK_DIS_CHG_INT
#define reg_SOFT_INT_7_0  INTERRUPT_REG1.BF.SOFT_INT_7_0

// 0xc258	INTERRUPT_REG2		interrupt enable 0
typedef union {
	struct {
		uint8_t FRAME_LOCK_INT_EN                        : 1;	/*      0     r/w   0*/
		uint8_t FRAME_UNLOCK_INT_EN                      : 1;	/*      1     r/w   0*/
		uint8_t FRAME_DET_TIMEOUT_INT_EN                 : 1;	/*      2     r/w   0*/
		uint8_t DME_DEC_ERROR_INT_EN                     : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_BALANCE_ERR_INT_EN                : 1;	/*      4     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_INT_EN                 : 1;	/*      5     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_INT_EN               : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_ERROR_VALID_INT_EN                : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_TX_INIT_INT_EN                    : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_TRAIN_COMP_INT_EN                 : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_TX_INIT_INT_EN                     : 1;	/*     10     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_INT_EN                  : 1;	/*     11     r/w   0*/
		uint8_t LOCAL_ERROR_VALID_INT_EN                 : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_STATUS_VALID_INT_EN                : 1;	/*     13     r/w   0*/
		uint8_t LOCAL_CTRL_VALID_INT_EN                  : 1;	/*     14     r/w   0*/
		uint8_t LOCAL_FIELD_DONE_INT_EN                  : 1;	/*     15     r/w   0*/
		uint8_t TX_TRAIN_COMPLETE_INT_EN                 : 1;	/*     16     r/w   0*/
		uint8_t RX_TRAIN_COMPLETE_INT_EN                 : 1;	/*     17     r/w   0*/
		uint8_t STATUS_DET_TIMEOUT_INT_EN                : 1;	/*     18     r/w   0*/
		uint8_t DFE_DONE_INT_EN                          : 1;	/*     19     r/w   0*/
		uint8_t TRX_TRAIN_DONE_INT_EN                    : 1;	/*     20     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_INT_EN                 : 1;	/*     21     r/w   0*/
		uint8_t TX_TRAIN_REQ_INT_EN                      : 1;	/*     22     r/w   0*/
		uint8_t RX_TRAIN_REQ_INT_EN                      : 1;	/*     23     r/w   0*/
		uint8_t CALIBRATION_REQ_INT_EN                   : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG2_t;
volatile INTERRUPT_REG2_t __xdata __at(PHY_REG_BASE + 0xc258) INTERRUPT_REG2;
#define reg_FRAME_LOCK_INT_EN  INTERRUPT_REG2.BF.FRAME_LOCK_INT_EN
#define reg_FRAME_UNLOCK_INT_EN  INTERRUPT_REG2.BF.FRAME_UNLOCK_INT_EN
#define reg_FRAME_DET_TIMEOUT_INT_EN  INTERRUPT_REG2.BF.FRAME_DET_TIMEOUT_INT_EN
#define reg_DME_DEC_ERROR_INT_EN  INTERRUPT_REG2.BF.DME_DEC_ERROR_INT_EN
#define reg_REMOTE_BALANCE_ERR_INT_EN  INTERRUPT_REG2.BF.REMOTE_BALANCE_ERR_INT_EN
#define reg_REMOTE_CTRL_VALID_INT_EN  INTERRUPT_REG2.BF.REMOTE_CTRL_VALID_INT_EN
#define reg_REMOTE_STATUS_VALID_INT_EN  INTERRUPT_REG2.BF.REMOTE_STATUS_VALID_INT_EN
#define reg_REMOTE_ERROR_VALID_INT_EN  INTERRUPT_REG2.BF.REMOTE_ERROR_VALID_INT_EN
#define reg_REMOTE_TX_INIT_INT_EN  INTERRUPT_REG2.BF.REMOTE_TX_INIT_INT_EN
#define reg_REMOTE_TRAIN_COMP_INT_EN  INTERRUPT_REG2.BF.REMOTE_TRAIN_COMP_INT_EN
#define reg_LOCAL_TX_INIT_INT_EN  INTERRUPT_REG2.BF.LOCAL_TX_INIT_INT_EN
#define reg_LOCAL_TRAIN_COMP_INT_EN  INTERRUPT_REG2.BF.LOCAL_TRAIN_COMP_INT_EN
#define reg_LOCAL_ERROR_VALID_INT_EN  INTERRUPT_REG2.BF.LOCAL_ERROR_VALID_INT_EN
#define reg_LOCAL_STATUS_VALID_INT_EN  INTERRUPT_REG2.BF.LOCAL_STATUS_VALID_INT_EN
#define reg_LOCAL_CTRL_VALID_INT_EN  INTERRUPT_REG2.BF.LOCAL_CTRL_VALID_INT_EN
#define reg_LOCAL_FIELD_DONE_INT_EN  INTERRUPT_REG2.BF.LOCAL_FIELD_DONE_INT_EN
#define reg_TX_TRAIN_COMPLETE_INT_EN  INTERRUPT_REG2.BF.TX_TRAIN_COMPLETE_INT_EN
#define reg_RX_TRAIN_COMPLETE_INT_EN  INTERRUPT_REG2.BF.RX_TRAIN_COMPLETE_INT_EN
#define reg_STATUS_DET_TIMEOUT_INT_EN  INTERRUPT_REG2.BF.STATUS_DET_TIMEOUT_INT_EN
#define reg_DFE_DONE_INT_EN  INTERRUPT_REG2.BF.DFE_DONE_INT_EN
#define reg_TRX_TRAIN_DONE_INT_EN  INTERRUPT_REG2.BF.TRX_TRAIN_DONE_INT_EN
#define reg_TRX_TRAIN_TIMEOUT_INT_EN  INTERRUPT_REG2.BF.TRX_TRAIN_TIMEOUT_INT_EN
#define reg_TX_TRAIN_REQ_INT_EN  INTERRUPT_REG2.BF.TX_TRAIN_REQ_INT_EN
#define reg_RX_TRAIN_REQ_INT_EN  INTERRUPT_REG2.BF.RX_TRAIN_REQ_INT_EN
#define reg_CALIBRATION_REQ_INT_EN  INTERRUPT_REG2.BF.CALIBRATION_REQ_INT_EN

// 0xc25c	INTERRUPT_REG3		interrupt enable 1
typedef union {
	struct {
		uint8_t PIN_PU_PLL_CHG_INT_EN                    : 1;	/*      0     r/w   0*/
		uint8_t PIN_PU_RX_CHG_INT_EN                     : 1;	/*      1     r/w   0*/
		uint8_t PIN_PU_TX_CHG_INT_EN                     : 1;	/*      2     r/w   0*/
		uint8_t PIN_PU_IVREF_CHG_INT_EN                  : 1;	/*      3     r/w   0*/
		uint8_t PIN_TX_IDLE_CHG_INT_EN                   : 1;	/*      4     r/w   0*/
		uint8_t PIN_RX_INIT_CHG_INT_EN                   : 1;	/*      5     r/w   0*/
		uint8_t PIN_PHY_GEN_RX_CHG_INT_EN                : 1;	/*      6     r/w   0*/
		uint8_t PIN_PHY_GEN_TX_CHG_INT_EN                : 1;	/*      7     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_CHG_INT_EN           : 1;	/*      8     r/w   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_CHG_INT_EN           : 1;	/*      9     r/w   0*/
		uint8_t PIN_REFCLK_DIS_CHG_INT_EN                : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG3_t;
volatile INTERRUPT_REG3_t __xdata __at(PHY_REG_BASE + 0xc25c) INTERRUPT_REG3;
#define reg_PIN_PU_PLL_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_PU_PLL_CHG_INT_EN
#define reg_PIN_PU_RX_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_PU_RX_CHG_INT_EN
#define reg_PIN_PU_TX_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_PU_TX_CHG_INT_EN
#define reg_PIN_PU_IVREF_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_PU_IVREF_CHG_INT_EN
#define reg_PIN_TX_IDLE_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_TX_IDLE_CHG_INT_EN
#define reg_PIN_RX_INIT_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_RX_INIT_CHG_INT_EN
#define reg_PIN_PHY_GEN_RX_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_PHY_GEN_RX_CHG_INT_EN
#define reg_PIN_PHY_GEN_TX_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_PHY_GEN_TX_CHG_INT_EN
#define reg_PIN_TX_TRAIN_ENABLE_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_TX_TRAIN_ENABLE_CHG_INT_EN
#define reg_PIN_RX_TRAIN_ENABLE_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_RX_TRAIN_ENABLE_CHG_INT_EN
#define reg_PIN_REFCLK_DIS_CHG_INT_EN  INTERRUPT_REG3.BF.PIN_REFCLK_DIS_CHG_INT_EN

// 0xc260	INTERRUPT_REG4		interrupt clear 0
typedef union {
	struct {
		uint8_t FRAME_LOCK_INT_CLEAR                     : 1;	/*      0     r/w   0*/
		uint8_t FRAME_UNLOCK_INT_CLEAR                   : 1;	/*      1     r/w   0*/
		uint8_t FRAME_DET_TIMEOUT_INT_CLEAR              : 1;	/*      2     r/w   0*/
		uint8_t DME_DEC_ERROR_INT_CLEAR                  : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_BALANCE_ERR_INT_CLEAR             : 1;	/*      4     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_INT_CLEAR              : 1;	/*      5     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_INT_CLEAR            : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_ERROR_VALID_INT_CLEAR             : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_TX_INIT_INT_CLEAR                 : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_TRAIN_COMP_INT_CLEAR              : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_TX_INIT_INT_CLEAR                  : 1;	/*     10     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_INT_CLEAR               : 1;	/*     11     r/w   0*/
		uint8_t LOCAL_ERROR_VALID_INT_CLEAR              : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_STATUS_VALID_INT_CLEAR             : 1;	/*     13     r/w   0*/
		uint8_t LOCAL_CTRL_VALID_INT_CLEAR               : 1;	/*     14     r/w   0*/
		uint8_t LOCAL_FIELD_DONE_INT_CLEAR               : 1;	/*     15     r/w   0*/
		uint8_t TX_TRAIN_COMPLETE_INT_CLEAR              : 1;	/*     16     r/w   0*/
		uint8_t RX_TRAIN_COMPLETE_INT_CLEAR              : 1;	/*     17     r/w   0*/
		uint8_t STATUS_DET_TIMEOUT_INT_CLEAR             : 1;	/*     18     r/w   0*/
		uint8_t DFE_DONE_INT_CLEAR                       : 1;	/*     19     r/w   0*/
		uint8_t TRX_TRAIN_DONE_INT_CLEAR                 : 1;	/*     20     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_INT_CLEAR              : 1;	/*     21     r/w   0*/
		uint8_t TX_TRAIN_REQ_INT_CLEAR                   : 1;	/*     22     r/w   0*/
		uint8_t RX_TRAIN_REQ_INT_CLEAR                   : 1;	/*     23     r/w   0*/
		uint8_t CALIBRATION_REQ_INT_CLEAR                : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG4_t;
volatile INTERRUPT_REG4_t __xdata __at(PHY_REG_BASE + 0xc260) INTERRUPT_REG4;
#define reg_INTERRUPT_REG4	INTERRUPT_REG4.VAL
#define reg_FRAME_LOCK_INT_CLEAR  INTERRUPT_REG4.BF.FRAME_LOCK_INT_CLEAR
#define reg_FRAME_UNLOCK_INT_CLEAR  INTERRUPT_REG4.BF.FRAME_UNLOCK_INT_CLEAR
#define reg_FRAME_DET_TIMEOUT_INT_CLEAR  INTERRUPT_REG4.BF.FRAME_DET_TIMEOUT_INT_CLEAR
#define reg_DME_DEC_ERROR_INT_CLEAR  INTERRUPT_REG4.BF.DME_DEC_ERROR_INT_CLEAR
#define reg_REMOTE_BALANCE_ERR_INT_CLEAR  INTERRUPT_REG4.BF.REMOTE_BALANCE_ERR_INT_CLEAR
#define reg_REMOTE_CTRL_VALID_INT_CLEAR  INTERRUPT_REG4.BF.REMOTE_CTRL_VALID_INT_CLEAR
#define reg_REMOTE_STATUS_VALID_INT_CLEAR  INTERRUPT_REG4.BF.REMOTE_STATUS_VALID_INT_CLEAR
#define reg_REMOTE_ERROR_VALID_INT_CLEAR  INTERRUPT_REG4.BF.REMOTE_ERROR_VALID_INT_CLEAR
#define reg_REMOTE_TX_INIT_INT_CLEAR  INTERRUPT_REG4.BF.REMOTE_TX_INIT_INT_CLEAR
#define reg_REMOTE_TRAIN_COMP_INT_CLEAR  INTERRUPT_REG4.BF.REMOTE_TRAIN_COMP_INT_CLEAR
#define reg_LOCAL_TX_INIT_INT_CLEAR  INTERRUPT_REG4.BF.LOCAL_TX_INIT_INT_CLEAR
#define reg_LOCAL_TRAIN_COMP_INT_CLEAR  INTERRUPT_REG4.BF.LOCAL_TRAIN_COMP_INT_CLEAR
#define reg_LOCAL_ERROR_VALID_INT_CLEAR  INTERRUPT_REG4.BF.LOCAL_ERROR_VALID_INT_CLEAR
#define reg_LOCAL_STATUS_VALID_INT_CLEAR  INTERRUPT_REG4.BF.LOCAL_STATUS_VALID_INT_CLEAR
#define reg_LOCAL_CTRL_VALID_INT_CLEAR  INTERRUPT_REG4.BF.LOCAL_CTRL_VALID_INT_CLEAR
#define reg_LOCAL_FIELD_DONE_INT_CLEAR  INTERRUPT_REG4.BF.LOCAL_FIELD_DONE_INT_CLEAR
#define reg_TX_TRAIN_COMPLETE_INT_CLEAR  INTERRUPT_REG4.BF.TX_TRAIN_COMPLETE_INT_CLEAR
#define reg_RX_TRAIN_COMPLETE_INT_CLEAR  INTERRUPT_REG4.BF.RX_TRAIN_COMPLETE_INT_CLEAR
#define reg_STATUS_DET_TIMEOUT_INT_CLEAR  INTERRUPT_REG4.BF.STATUS_DET_TIMEOUT_INT_CLEAR
#define reg_DFE_DONE_INT_CLEAR  INTERRUPT_REG4.BF.DFE_DONE_INT_CLEAR
#define reg_TRX_TRAIN_DONE_INT_CLEAR  INTERRUPT_REG4.BF.TRX_TRAIN_DONE_INT_CLEAR
#define reg_TRX_TRAIN_TIMEOUT_INT_CLEAR  INTERRUPT_REG4.BF.TRX_TRAIN_TIMEOUT_INT_CLEAR
#define reg_TX_TRAIN_REQ_INT_CLEAR  INTERRUPT_REG4.BF.TX_TRAIN_REQ_INT_CLEAR
#define reg_RX_TRAIN_REQ_INT_CLEAR  INTERRUPT_REG4.BF.RX_TRAIN_REQ_INT_CLEAR
#define reg_CALIBRATION_REQ_INT_CLEAR  INTERRUPT_REG4.BF.CALIBRATION_REQ_INT_CLEAR

// 0xc264	INTERRUPT_REG5		interrupt clear 1
typedef union {
	struct {
		uint8_t PIN_PU_PLL_CHG_INT_CLEAR                 : 1;	/*      0     r/w   0*/
		uint8_t PIN_PU_RX_CHG_INT_CLEAR                  : 1;	/*      1     r/w   0*/
		uint8_t PIN_PU_TX_CHG_INT_CLEAR                  : 1;	/*      2     r/w   0*/
		uint8_t PIN_PU_IVREF_CHG_INT_CLEAR               : 1;	/*      3     r/w   0*/
		uint8_t PIN_TX_IDLE_CHG_INT_CLEAR                : 1;	/*      4     r/w   0*/
		uint8_t PIN_RX_INIT_CHG_INT_CLEAR                : 1;	/*      5     r/w   0*/
		uint8_t PIN_PHY_GEN_RX_CHG_INT_CLEAR             : 1;	/*      6     r/w   0*/
		uint8_t PIN_PHY_GEN_TX_CHG_INT_CLEAR             : 1;	/*      7     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_CHG_INT_CLEAR        : 1;	/*      8     r/w   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_CHG_INT_CLEAR        : 1;	/*      9     r/w   0*/
		uint8_t PIN_REFCLK_DIS_CHG_INT_CLEAR             : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG5_t;
volatile INTERRUPT_REG5_t __xdata __at(PHY_REG_BASE + 0xc264) INTERRUPT_REG5;
#define reg_PIN_PU_PLL_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_PU_PLL_CHG_INT_CLEAR
#define reg_PIN_PU_RX_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_PU_RX_CHG_INT_CLEAR
#define reg_PIN_PU_TX_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_PU_TX_CHG_INT_CLEAR
#define reg_PIN_PU_IVREF_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_PU_IVREF_CHG_INT_CLEAR
#define reg_PIN_TX_IDLE_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_TX_IDLE_CHG_INT_CLEAR
#define reg_PIN_RX_INIT_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_RX_INIT_CHG_INT_CLEAR
#define reg_PIN_PHY_GEN_RX_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_PHY_GEN_RX_CHG_INT_CLEAR
#define reg_PIN_PHY_GEN_TX_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_PHY_GEN_TX_CHG_INT_CLEAR
#define reg_PIN_TX_TRAIN_ENABLE_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_TX_TRAIN_ENABLE_CHG_INT_CLEAR
#define reg_PIN_RX_TRAIN_ENABLE_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_RX_TRAIN_ENABLE_CHG_INT_CLEAR
#define reg_PIN_REFCLK_DIS_CHG_INT_CLEAR  INTERRUPT_REG5.BF.PIN_REFCLK_DIS_CHG_INT_CLEAR
#define reg_PIN_TRX_TRAIN_ENABLE_CHG_INT_CLEAR  INTERRUPT_REG5.BT.B1
#define reg_PIN_PHY_GEN_TRX_CHG_INT_CLEAR		INTERRUPT_REG5.BT.B0
#define reg_PIN_PHY_PU_TRX_PLL_CHG_INT_CLEAR	INTERRUPT_REG5.BT.B0

// 0xc268	REG_CPU_INT0_0		CPU INT0 control 0
typedef union {
	struct {
		uint8_t CPU_INT0_MASK_0_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT0_MASK_0_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT0_MASK_0_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT0_MASK_0_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT0_0_t;
volatile REG_CPU_INT0_0_t __xdata __at(PHY_REG_BASE + 0xc268) REG_CPU_INT0_0;
#define reg_CPU_INT0_MASK_0_31_0_b0  REG_CPU_INT0_0.BF.CPU_INT0_MASK_0_31_0_b0
#define reg_CPU_INT0_MASK_0_31_0_b1  REG_CPU_INT0_0.BF.CPU_INT0_MASK_0_31_0_b1
#define reg_CPU_INT0_MASK_0_31_0_b2  REG_CPU_INT0_0.BF.CPU_INT0_MASK_0_31_0_b2
#define reg_CPU_INT0_MASK_0_31_0_b3  REG_CPU_INT0_0.BF.CPU_INT0_MASK_0_31_0_b3

// 0xc26c	REG_CPU_INT0_1		CPU INT0 control 1
typedef union {
	struct {
		uint8_t CPU_INT0_MASK_1_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT0_MASK_1_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT0_MASK_1_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT0_MASK_1_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT0_1_t;
volatile REG_CPU_INT0_1_t __xdata __at(PHY_REG_BASE + 0xc26c) REG_CPU_INT0_1;
#define reg_CPU_INT0_MASK_1_31_0_b0  REG_CPU_INT0_1.BF.CPU_INT0_MASK_1_31_0_b0
#define reg_CPU_INT0_MASK_1_31_0_b1  REG_CPU_INT0_1.BF.CPU_INT0_MASK_1_31_0_b1
#define reg_CPU_INT0_MASK_1_31_0_b2  REG_CPU_INT0_1.BF.CPU_INT0_MASK_1_31_0_b2
#define reg_CPU_INT0_MASK_1_31_0_b3  REG_CPU_INT0_1.BF.CPU_INT0_MASK_1_31_0_b3

// 0xc270	REG_CPU_INT1_0		CPU INT1 control 0
typedef union {
	struct {
		uint8_t CPU_INT1_MASK_0_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT1_MASK_0_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT1_MASK_0_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT1_MASK_0_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT1_0_t;
volatile REG_CPU_INT1_0_t __xdata __at(PHY_REG_BASE + 0xc270) REG_CPU_INT1_0;
#define reg_CPU_INT1_MASK_0_31_0_b0  REG_CPU_INT1_0.BF.CPU_INT1_MASK_0_31_0_b0
#define reg_CPU_INT1_MASK_0_31_0_b1  REG_CPU_INT1_0.BF.CPU_INT1_MASK_0_31_0_b1
#define reg_CPU_INT1_MASK_0_31_0_b2  REG_CPU_INT1_0.BF.CPU_INT1_MASK_0_31_0_b2
#define reg_CPU_INT1_MASK_0_31_0_b3  REG_CPU_INT1_0.BF.CPU_INT1_MASK_0_31_0_b3

// 0xc274	REG_CPU_INT1_1		CPU INT1 control 1
typedef union {
	struct {
		uint8_t CPU_INT1_MASK_1_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT1_MASK_1_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT1_MASK_1_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT1_MASK_1_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT1_1_t;
volatile REG_CPU_INT1_1_t __xdata __at(PHY_REG_BASE + 0xc274) REG_CPU_INT1_1;
#define reg_CPU_INT1_MASK_1_31_0_b0  REG_CPU_INT1_1.BF.CPU_INT1_MASK_1_31_0_b0
#define reg_CPU_INT1_MASK_1_31_0_b1  REG_CPU_INT1_1.BF.CPU_INT1_MASK_1_31_0_b1
#define reg_CPU_INT1_MASK_1_31_0_b2  REG_CPU_INT1_1.BF.CPU_INT1_MASK_1_31_0_b2
#define reg_CPU_INT1_MASK_1_31_0_b3  REG_CPU_INT1_1.BF.CPU_INT1_MASK_1_31_0_b3

// 0xc278	REG_CPU_INT2_0		CPU INT2 control 0
typedef union {
	struct {
		uint8_t CPU_INT2_MASK_0_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT2_MASK_0_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT2_MASK_0_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT2_MASK_0_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT2_0_t;
volatile REG_CPU_INT2_0_t __xdata __at(PHY_REG_BASE + 0xc278) REG_CPU_INT2_0;
#define reg_CPU_INT2_MASK_0_31_0_b0  REG_CPU_INT2_0.BF.CPU_INT2_MASK_0_31_0_b0
#define reg_CPU_INT2_MASK_0_31_0_b1  REG_CPU_INT2_0.BF.CPU_INT2_MASK_0_31_0_b1
#define reg_CPU_INT2_MASK_0_31_0_b2  REG_CPU_INT2_0.BF.CPU_INT2_MASK_0_31_0_b2
#define reg_CPU_INT2_MASK_0_31_0_b3  REG_CPU_INT2_0.BF.CPU_INT2_MASK_0_31_0_b3

// 0xc27c	REG_CPU_INT2_1		CPU INT2 control 1
typedef union {
	struct {
		uint8_t CPU_INT2_MASK_1_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT2_MASK_1_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT2_MASK_1_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT2_MASK_1_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT2_1_t;
volatile REG_CPU_INT2_1_t __xdata __at(PHY_REG_BASE + 0xc27c) REG_CPU_INT2_1;
#define reg_CPU_INT2_MASK_1_31_0_b0  REG_CPU_INT2_1.BF.CPU_INT2_MASK_1_31_0_b0
#define reg_CPU_INT2_MASK_1_31_0_b1  REG_CPU_INT2_1.BF.CPU_INT2_MASK_1_31_0_b1
#define reg_CPU_INT2_MASK_1_31_0_b2  REG_CPU_INT2_1.BF.CPU_INT2_MASK_1_31_0_b2
#define reg_CPU_INT2_MASK_1_31_0_b3  REG_CPU_INT2_1.BF.CPU_INT2_MASK_1_31_0_b3

// 0xc280	REG_CPU_INT3_0		CPU INT3 control 0
typedef union {
	struct {
		uint8_t CPU_INT3_MASK_0_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT3_MASK_0_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT3_MASK_0_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT3_MASK_0_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT3_0_t;
volatile REG_CPU_INT3_0_t __xdata __at(PHY_REG_BASE + 0xc280) REG_CPU_INT3_0;
#define reg_CPU_INT3_MASK_0_31_0_b0  REG_CPU_INT3_0.BF.CPU_INT3_MASK_0_31_0_b0
#define reg_CPU_INT3_MASK_0_31_0_b1  REG_CPU_INT3_0.BF.CPU_INT3_MASK_0_31_0_b1
#define reg_CPU_INT3_MASK_0_31_0_b2  REG_CPU_INT3_0.BF.CPU_INT3_MASK_0_31_0_b2
#define reg_CPU_INT3_MASK_0_31_0_b3  REG_CPU_INT3_0.BF.CPU_INT3_MASK_0_31_0_b3

// 0xc284	REG_CPU_INT3_1		CPU INT3 control 1
typedef union {
	struct {
		uint8_t CPU_INT3_MASK_1_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT3_MASK_1_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT3_MASK_1_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT3_MASK_1_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT3_1_t;
volatile REG_CPU_INT3_1_t __xdata __at(PHY_REG_BASE + 0xc284) REG_CPU_INT3_1;
#define reg_CPU_INT3_MASK_1_31_0_b0  REG_CPU_INT3_1.BF.CPU_INT3_MASK_1_31_0_b0
#define reg_CPU_INT3_MASK_1_31_0_b1  REG_CPU_INT3_1.BF.CPU_INT3_MASK_1_31_0_b1
#define reg_CPU_INT3_MASK_1_31_0_b2  REG_CPU_INT3_1.BF.CPU_INT3_MASK_1_31_0_b2
#define reg_CPU_INT3_MASK_1_31_0_b3  REG_CPU_INT3_1.BF.CPU_INT3_MASK_1_31_0_b3

// 0xc288	REG_CPU_INT4_0		CPU INT4 control 0
typedef union {
	struct {
		uint8_t CPU_INT4_MASK_0_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT4_MASK_0_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT4_MASK_0_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT4_MASK_0_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT4_0_t;
volatile REG_CPU_INT4_0_t __xdata __at(PHY_REG_BASE + 0xc288) REG_CPU_INT4_0;
#define reg_CPU_INT4_MASK_0_31_0_b0  REG_CPU_INT4_0.BF.CPU_INT4_MASK_0_31_0_b0
#define reg_CPU_INT4_MASK_0_31_0_b1  REG_CPU_INT4_0.BF.CPU_INT4_MASK_0_31_0_b1
#define reg_CPU_INT4_MASK_0_31_0_b2  REG_CPU_INT4_0.BF.CPU_INT4_MASK_0_31_0_b2
#define reg_CPU_INT4_MASK_0_31_0_b3  REG_CPU_INT4_0.BF.CPU_INT4_MASK_0_31_0_b3

// 0xc28c	REG_CPU_INT4_1		CPU INT4 control 1
typedef union {
	struct {
		uint8_t CPU_INT4_MASK_1_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT4_MASK_1_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT4_MASK_1_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT4_MASK_1_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT4_1_t;
volatile REG_CPU_INT4_1_t __xdata __at(PHY_REG_BASE + 0xc28c) REG_CPU_INT4_1;
#define reg_CPU_INT4_MASK_1_31_0_b0  REG_CPU_INT4_1.BF.CPU_INT4_MASK_1_31_0_b0
#define reg_CPU_INT4_MASK_1_31_0_b1  REG_CPU_INT4_1.BF.CPU_INT4_MASK_1_31_0_b1
#define reg_CPU_INT4_MASK_1_31_0_b2  REG_CPU_INT4_1.BF.CPU_INT4_MASK_1_31_0_b2
#define reg_CPU_INT4_MASK_1_31_0_b3  REG_CPU_INT4_1.BF.CPU_INT4_MASK_1_31_0_b3

// 0xc290	REG_CPU_INT5_0		CPU INT5 control 0
typedef union {
	struct {
		uint8_t CPU_INT5_MASK_0_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT5_MASK_0_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT5_MASK_0_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT5_MASK_0_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT5_0_t;
volatile REG_CPU_INT5_0_t __xdata __at(PHY_REG_BASE + 0xc290) REG_CPU_INT5_0;
#define reg_CPU_INT5_MASK_0_31_0_b0  REG_CPU_INT5_0.BF.CPU_INT5_MASK_0_31_0_b0
#define reg_CPU_INT5_MASK_0_31_0_b1  REG_CPU_INT5_0.BF.CPU_INT5_MASK_0_31_0_b1
#define reg_CPU_INT5_MASK_0_31_0_b2  REG_CPU_INT5_0.BF.CPU_INT5_MASK_0_31_0_b2
#define reg_CPU_INT5_MASK_0_31_0_b3  REG_CPU_INT5_0.BF.CPU_INT5_MASK_0_31_0_b3

// 0xc294	REG_CPU_INT5_1		CPU INT5 control 1
typedef union {
	struct {
		uint8_t CPU_INT5_MASK_1_31_0_b0                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT5_MASK_1_31_0_b1                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT5_MASK_1_31_0_b2                  : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CPU_INT5_MASK_1_31_0_b3                  : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_CPU_INT5_1_t;
volatile REG_CPU_INT5_1_t __xdata __at(PHY_REG_BASE + 0xc294) REG_CPU_INT5_1;
#define reg_CPU_INT5_MASK_1_31_0_b0  REG_CPU_INT5_1.BF.CPU_INT5_MASK_1_31_0_b0
#define reg_CPU_INT5_MASK_1_31_0_b1  REG_CPU_INT5_1.BF.CPU_INT5_MASK_1_31_0_b1
#define reg_CPU_INT5_MASK_1_31_0_b2  REG_CPU_INT5_1.BF.CPU_INT5_MASK_1_31_0_b2
#define reg_CPU_INT5_MASK_1_31_0_b3  REG_CPU_INT5_1.BF.CPU_INT5_MASK_1_31_0_b3

// 0xc298	DFE_PWM_REG0		DFE PWM control
typedef union {
	struct {
		uint8_t DFE_PWM_COUNTER_30_0_b0                  : 8;	/* [30:0]     r/w 31'h4000*/
		uint8_t DFE_PWM_COUNTER_30_0_b1                  : 8;	/* [30:0]     r/w 31'h4000*/
		uint8_t DFE_PWM_COUNTER_30_0_b2                  : 8;	/* [30:0]     r/w 31'h4000*/
		uint8_t DFE_PWM_COUNTER_30_0_b3                  : 7;	/* [30:0]     r/w 31'h4000*/
		uint8_t DFE_PWM_EN                               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_PWM_REG0_t;
volatile DFE_PWM_REG0_t __xdata __at(PHY_REG_BASE + 0xc298) DFE_PWM_REG0;
#define reg_DFE_PWM_COUNTER_30_0_b0  DFE_PWM_REG0.BF.DFE_PWM_COUNTER_30_0_b0
#define reg_DFE_PWM_COUNTER_30_0_b1  DFE_PWM_REG0.BF.DFE_PWM_COUNTER_30_0_b1
#define reg_DFE_PWM_COUNTER_30_0_b2  DFE_PWM_REG0.BF.DFE_PWM_COUNTER_30_0_b2
#define reg_DFE_PWM_COUNTER_30_0_b3  DFE_PWM_REG0.BF.DFE_PWM_COUNTER_30_0_b3
#define reg_DFE_PWM_EN  DFE_PWM_REG0.BF.DFE_PWM_EN

// 0xc29c	REG_PWM_REG0		REF PWM control
typedef union {
	struct {
		uint8_t REF_PWM_COUNTER_30_0_b0                  : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t REF_PWM_COUNTER_30_0_b1                  : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t REF_PWM_COUNTER_30_0_b2                  : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t REF_PWM_COUNTER_30_0_b3                  : 7;	/* [30:0]     r/w 31'ha*/
		uint8_t REF_PWM_EN                               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_PWM_REG0_t;
volatile REG_PWM_REG0_t __xdata __at(PHY_REG_BASE + 0xc29c) REG_PWM_REG0;
#define reg_REF_PWM_COUNTER_30_0_b0  REG_PWM_REG0.BF.REF_PWM_COUNTER_30_0_b0
#define reg_REF_PWM_COUNTER_30_0_b1  REG_PWM_REG0.BF.REF_PWM_COUNTER_30_0_b1
#define reg_REF_PWM_COUNTER_30_0_b2  REG_PWM_REG0.BF.REF_PWM_COUNTER_30_0_b2
#define reg_REF_PWM_COUNTER_30_0_b3  REG_PWM_REG0.BF.REF_PWM_COUNTER_30_0_b3
#define reg_REF_PWM_EN  REG_PWM_REG0.BF.REF_PWM_EN

// 0xc2a0	CPU_REG0		cpu control
typedef union {
	struct {
		uint8_t TIMER_0_SEL_1_0                          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TIMER_1_SEL_1_0                          : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TIMER_2_SEL_1_0                          : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TIMER_2EX_SEL_1_0                        : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t MBIST_BISTFAIL_PRAM                      : 1;	/*      8       r   0*/
		uint8_t MBIST_BISTFAIL_IRAM                      : 1;	/*      9       r   0*/
		uint8_t MBIST_FINISH_PRAM                        : 1;	/*     10       r   0*/
		uint8_t MBIST_FINISH_IRAM                        : 1;	/*     11       r   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t IDLE_MODE_N                              : 1;	/*     14       r   0*/
		uint8_t STOP_MODE_N                              : 1;	/*     15       r   0*/
		uint8_t MCU_RESTART                              : 1;	/*     16     r/w   0*/
		uint8_t MCU_CORE_RESET                           : 1;	/*     17     r/w   1*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CPU_CLK_SEL_0                            : 1;	/*     24     r/w   0*/
		uint8_t CPU_CLK_SEL_1                            : 1;	/*     25     r/w   0*/
		uint8_t CPU_CLK_SEL_2                            : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t HW_INT_ENABLE                            : 1;	/*     30     r/w   0*/
		uint8_t PIN_INTERRUPT                            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CPU_REG0_t;
volatile CPU_REG0_t __xdata __at(PHY_REG_BASE + 0xc2a0) CPU_REG0;
#define reg_TIMER_0_SEL_1_0  CPU_REG0.BF.TIMER_0_SEL_1_0
#define reg_TIMER_1_SEL_1_0  CPU_REG0.BF.TIMER_1_SEL_1_0
#define reg_TIMER_2_SEL_1_0  CPU_REG0.BF.TIMER_2_SEL_1_0
#define reg_TIMER_2EX_SEL_1_0  CPU_REG0.BF.TIMER_2EX_SEL_1_0
#define reg_MBIST_BISTFAIL_PRAM  CPU_REG0.BF.MBIST_BISTFAIL_PRAM
#define reg_MBIST_BISTFAIL_IRAM  CPU_REG0.BF.MBIST_BISTFAIL_IRAM
#define reg_MBIST_FINISH_PRAM  CPU_REG0.BF.MBIST_FINISH_PRAM
#define reg_MBIST_FINISH_IRAM  CPU_REG0.BF.MBIST_FINISH_IRAM
#define reg_IDLE_MODE_N  CPU_REG0.BF.IDLE_MODE_N
#define reg_STOP_MODE_N  CPU_REG0.BF.STOP_MODE_N
#define reg_MCU_RESTART  CPU_REG0.BF.MCU_RESTART
#define reg_MCU_CORE_RESET  CPU_REG0.BF.MCU_CORE_RESET
#define reg_CPU_CLK_SEL_0  CPU_REG0.BF.CPU_CLK_SEL_0
#define reg_CPU_CLK_SEL_1  CPU_REG0.BF.CPU_CLK_SEL_1
#define reg_CPU_CLK_SEL_2  CPU_REG0.BF.CPU_CLK_SEL_2
#define reg_HW_INT_ENABLE  CPU_REG0.BF.HW_INT_ENABLE
#define reg_PIN_INTERRUPT  CPU_REG0.BF.PIN_INTERRUPT

// 0xc2a4	CPU_REG1		memory control0
typedef union {
	struct {
		uint8_t IRAM_WTC_1_0                             : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t IRAM_RTC_1_0                             : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t PRAM_WTC_1_0                             : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t PRAM_RTC_1_0                             : 2;	/*  [7:6]     r/w 2'h2*/
		uint8_t PRAM_NOE                                 : 1;	/*      8     r/w   0*/
		uint8_t PRAM_PDFVSSM                             : 1;	/*      9     r/w   0*/
		uint8_t PRAM_PDLVMC                              : 1;	/*     10     r/w   0*/
		uint8_t PRAM_PDWN                                : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t IRAM_PDFVSSM                             : 1;	/*     13     r/w   0*/
		uint8_t IRAM_PDLVMC                              : 1;	/*     14     r/w   0*/
		uint8_t IRAM_PDWN                                : 1;	/*     15     r/w   0*/
		uint8_t PHY_NS_7_0                               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PHY_STATE_7_0                            : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CPU_REG1_t;
volatile CPU_REG1_t __xdata __at(PHY_REG_BASE + 0xc2a4) CPU_REG1;
#define reg_IRAM_WTC_1_0  CPU_REG1.BF.IRAM_WTC_1_0
#define reg_IRAM_RTC_1_0  CPU_REG1.BF.IRAM_RTC_1_0
#define reg_PRAM_WTC_1_0  CPU_REG1.BF.PRAM_WTC_1_0
#define reg_PRAM_RTC_1_0  CPU_REG1.BF.PRAM_RTC_1_0
#define reg_PRAM_NOE  CPU_REG1.BF.PRAM_NOE
#define reg_PRAM_PDFVSSM  CPU_REG1.BF.PRAM_PDFVSSM
#define reg_PRAM_PDLVMC  CPU_REG1.BF.PRAM_PDLVMC
#define reg_PRAM_PDWN  CPU_REG1.BF.PRAM_PDWN
#define reg_IRAM_PDFVSSM  CPU_REG1.BF.IRAM_PDFVSSM
#define reg_IRAM_PDLVMC  CPU_REG1.BF.IRAM_PDLVMC
#define reg_IRAM_PDWN  CPU_REG1.BF.IRAM_PDWN
#define reg_PHY_NS_7_0  CPU_REG1.BF.PHY_NS_7_0
#define reg_PHY_STATE_7_0  CPU_REG1.BF.PHY_STATE_7_0

// 0xc2a8	STATUS_REG0		input pin read back
typedef union {
	struct {
		uint8_t INT_PU_PLL                               : 1;	/*      0       r   0*/
		uint8_t INT_PU_RX                                : 1;	/*      1       r   0*/
		uint8_t INT_PU_TX                                : 1;	/*      2       r   0*/
		uint8_t INT_PU_IVREF                             : 1;	/*      3       r   0*/
		uint8_t INT_TX_IDLE                              : 1;	/*      4       r   0*/
		uint8_t INT_RX_INIT                              : 1;	/*      5       r   0*/
		uint8_t INT_TX_TRAIN_ENABLE                      : 1;	/*      6       r   0*/
		uint8_t INT_RX_TRAIN_ENABLE                      : 1;	/*      7       r   0*/
		uint8_t INT_PHY_GEN_RX_3_0                       : 4;	/* [11:8]       r   0*/
		uint8_t INT_PHY_GEN_TX_3_0                       : 4;	/*[15:12]       r   0*/
		uint8_t INT_REFCLK_DIS                           : 1;	/*     16       r   0*/
		uint8_t INT_PAT_DIS                              : 1;	/*     17       r   0*/
		uint8_t INT_SSC_EN                               : 1;	/*     18       r   0*/
		uint8_t INT_TX_IDLE_HIZ                          : 1;	/*     19       r   0*/
		uint8_t INT_BG_RDY                               : 1;	/*     20       r   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t FIRMWARE_JUMP_ENABLE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STATUS_REG0_t;
volatile STATUS_REG0_t __xdata __at(PHY_REG_BASE + 0xc2a8) STATUS_REG0;
#define reg_INT_PU_PLL  STATUS_REG0.BF.INT_PU_PLL
#define reg_INT_PU_RX  STATUS_REG0.BF.INT_PU_RX
#define reg_INT_PU_TX  STATUS_REG0.BF.INT_PU_TX
#define reg_INT_PU_IVREF  STATUS_REG0.BF.INT_PU_IVREF
#define reg_INT_TX_IDLE  STATUS_REG0.BF.INT_TX_IDLE
#define reg_INT_RX_INIT  STATUS_REG0.BF.INT_RX_INIT
#define reg_INT_TX_TRAIN_ENABLE  STATUS_REG0.BF.INT_TX_TRAIN_ENABLE
#define reg_INT_RX_TRAIN_ENABLE  STATUS_REG0.BF.INT_RX_TRAIN_ENABLE
#define reg_INT_PHY_GEN_RX_3_0  STATUS_REG0.BF.INT_PHY_GEN_RX_3_0
#define reg_INT_PHY_GEN_TX_3_0  STATUS_REG0.BF.INT_PHY_GEN_TX_3_0
#define reg_INT_REFCLK_DIS  STATUS_REG0.BF.INT_REFCLK_DIS
#define reg_INT_PAT_DIS  STATUS_REG0.BF.INT_PAT_DIS
#define reg_INT_SSC_EN  STATUS_REG0.BF.INT_SSC_EN
#define reg_INT_TX_IDLE_HIZ  STATUS_REG0.BF.INT_TX_IDLE_HIZ
#define reg_INT_BG_RDY  STATUS_REG0.BF.INT_BG_RDY
#define reg_FIRMWARE_JUMP_ENABLE  STATUS_REG0.BF.FIRMWARE_JUMP_ENABLE

// 0xc2ac	FW_REG0		firmware control 0
typedef union {
	struct {
		uint8_t FW_JUMP_ADDR_0_15_0_b0                   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t FW_JUMP_ADDR_0_15_0_b1                   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t FW_JUMP_ADDR_1_15_0_b0                   : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t FW_JUMP_ADDR_1_15_0_b1                   : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FW_REG0_t;
volatile FW_REG0_t __xdata __at(PHY_REG_BASE + 0xc2ac) FW_REG0;
#define reg_FW_JUMP_ADDR_0_15_0_b0  FW_REG0.BF.FW_JUMP_ADDR_0_15_0_b0
#define reg_FW_JUMP_ADDR_0_15_0_b1  FW_REG0.BF.FW_JUMP_ADDR_0_15_0_b1
#define reg_FW_JUMP_ADDR_1_15_0_b0  FW_REG0.BF.FW_JUMP_ADDR_1_15_0_b0
#define reg_FW_JUMP_ADDR_1_15_0_b1  FW_REG0.BF.FW_JUMP_ADDR_1_15_0_b1

// 0xc2b0	FW_REG1		firmware control 1
typedef union {
	struct {
		uint8_t FW_JUMP_ADDR_2_15_0_b0                   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t FW_JUMP_ADDR_2_15_0_b1                   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t FW_JUMP_ADDR_3_15_0_b0                   : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t FW_JUMP_ADDR_3_15_0_b1                   : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FW_REG1_t;
volatile FW_REG1_t __xdata __at(PHY_REG_BASE + 0xc2b0) FW_REG1;
#define reg_FW_JUMP_ADDR_2_15_0_b0  FW_REG1.BF.FW_JUMP_ADDR_2_15_0_b0
#define reg_FW_JUMP_ADDR_2_15_0_b1  FW_REG1.BF.FW_JUMP_ADDR_2_15_0_b1
#define reg_FW_JUMP_ADDR_3_15_0_b0  FW_REG1.BF.FW_JUMP_ADDR_3_15_0_b0
#define reg_FW_JUMP_ADDR_3_15_0_b1  FW_REG1.BF.FW_JUMP_ADDR_3_15_0_b1

// 0xc2b4	FW_REG2		firmware control 2
typedef union {
	struct {
		uint8_t FW_JUMP_INST_0_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t FW_JUMP_INST_1_7_0                       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FW_JUMP_INST_2_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t FW_JUMP_INST_3_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FW_REG2_t;
volatile FW_REG2_t __xdata __at(PHY_REG_BASE + 0xc2b4) FW_REG2;
#define reg_FW_JUMP_INST_0_7_0  FW_REG2.BF.FW_JUMP_INST_0_7_0
#define reg_FW_JUMP_INST_1_7_0  FW_REG2.BF.FW_JUMP_INST_1_7_0
#define reg_FW_JUMP_INST_2_7_0  FW_REG2.BF.FW_JUMP_INST_2_7_0
#define reg_FW_JUMP_INST_3_7_0  FW_REG2.BF.FW_JUMP_INST_3_7_0

// 0xc2b8	CPU_DEBUG_0		
typedef union {
	struct {
		uint8_t CPU_PAUSE_ADD_15_0_b0                    : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t CPU_PAUSE_ADD_15_0_b1                    : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t CPU_CLK_PAUSE_EN                         : 1;	/*     16     r/w   0*/
		uint8_t FORCE_CPU_CLOCK_STOP                     : 1;	/*     17     r/w   0*/
		uint8_t CPU_CLOCK_RESUME                         : 1;	/*     18     r/w   0*/
		uint8_t XMEM_CHECKSUM_RESET                      : 1;	/*     19     r/w   0*/
		uint8_t XMEM_CHECKSUM_PASS                       : 1;	/*     20       r   0*/
		uint8_t CPU_IS_ENABLED                           : 1;	/*     21       r   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CFG_EN                                   : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CPU_DEBUG_0_t;
volatile CPU_DEBUG_0_t __xdata __at(PHY_REG_BASE + 0xc2b8) CPU_DEBUG_0;
#define reg_CPU_PAUSE_ADD_15_0_b0  CPU_DEBUG_0.BF.CPU_PAUSE_ADD_15_0_b0
#define reg_CPU_PAUSE_ADD_15_0_b1  CPU_DEBUG_0.BF.CPU_PAUSE_ADD_15_0_b1
#define reg_CPU_CLK_PAUSE_EN  CPU_DEBUG_0.BF.CPU_CLK_PAUSE_EN
#define reg_FORCE_CPU_CLOCK_STOP  CPU_DEBUG_0.BF.FORCE_CPU_CLOCK_STOP
#define reg_CPU_CLOCK_RESUME  CPU_DEBUG_0.BF.CPU_CLOCK_RESUME
#define reg_XMEM_CHECKSUM_RESET  CPU_DEBUG_0.BF.XMEM_CHECKSUM_RESET
#define reg_XMEM_CHECKSUM_PASS  CPU_DEBUG_0.BF.XMEM_CHECKSUM_PASS
#define reg_CPU_IS_ENABLED  CPU_DEBUG_0.BF.CPU_IS_ENABLED
#define reg_CFG_EN  CPU_DEBUG_0.BF.CFG_EN

// 0xc2bc	CPU_DEBUG_1		
typedef union {
	struct {
		uint8_t XMEM_CHECKSUM_31_0_b0                    : 8;	/* [31:0]       r   0*/
		uint8_t XMEM_CHECKSUM_31_0_b1                    : 8;	/* [31:0]       r   0*/
		uint8_t XMEM_CHECKSUM_31_0_b2                    : 8;	/* [31:0]       r   0*/
		uint8_t XMEM_CHECKSUM_31_0_b3                    : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CPU_DEBUG_1_t;
volatile CPU_DEBUG_1_t __xdata __at(PHY_REG_BASE + 0xc2bc) CPU_DEBUG_1;
#define reg_XMEM_CHECKSUM_31_0_b0  CPU_DEBUG_1.BF.XMEM_CHECKSUM_31_0_b0
#define reg_XMEM_CHECKSUM_31_0_b1  CPU_DEBUG_1.BF.XMEM_CHECKSUM_31_0_b1
#define reg_XMEM_CHECKSUM_31_0_b2  CPU_DEBUG_1.BF.XMEM_CHECKSUM_31_0_b2
#define reg_XMEM_CHECKSUM_31_0_b3  CPU_DEBUG_1.BF.XMEM_CHECKSUM_31_0_b3

// 0xc2c0	CPU_DEBUG_2		
typedef union {
	struct {
		uint8_t XMEM_CHECKSUM_EXP_31_0_b0                : 8;	/* [31:0]     r/w 32'hffff*/
		uint8_t XMEM_CHECKSUM_EXP_31_0_b1                : 8;	/* [31:0]     r/w 32'hffff*/
		uint8_t XMEM_CHECKSUM_EXP_31_0_b2                : 8;	/* [31:0]     r/w 32'hffff*/
		uint8_t XMEM_CHECKSUM_EXP_31_0_b3                : 8;	/* [31:0]     r/w 32'hffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CPU_DEBUG_2_t;
volatile CPU_DEBUG_2_t __xdata __at(PHY_REG_BASE + 0xc2c0) CPU_DEBUG_2;
#define reg_XMEM_CHECKSUM_EXP_31_0_b0  CPU_DEBUG_2.BF.XMEM_CHECKSUM_EXP_31_0_b0
#define reg_XMEM_CHECKSUM_EXP_31_0_b1  CPU_DEBUG_2.BF.XMEM_CHECKSUM_EXP_31_0_b1
#define reg_XMEM_CHECKSUM_EXP_31_0_b2  CPU_DEBUG_2.BF.XMEM_CHECKSUM_EXP_31_0_b2
#define reg_XMEM_CHECKSUM_EXP_31_0_b3  CPU_DEBUG_2.BF.XMEM_CHECKSUM_EXP_31_0_b3

// 0xc380	G1_SETTING_0		Genration 1 setting 0 : G1 gen-table starts here
typedef union {
	struct {
		uint8_t G1_RX_SELMUPI_2_0                        : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t G1_RX_SELMUPF_2_0                        : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t G1_RX_SELMUFI_1_0                        : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t G1_RX_SELMUFF_1_0                        : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t G1_RX_DFE_EN                             : 1;	/*     10     r/w   0*/
		uint8_t G1_RXDIGCK_DIV_1_0                       : 2;	/*[12:11]     r/w 2'h1*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t G1_RXDCW_EN                              : 1;	/*     14     r/w   0*/
		uint8_t G1_TX_AMP_SHFT                           : 1;	/*     15     r/w   0*/
		uint8_t G1_TX_SSC_EN                             : 1;	/*     16     r/w   0*/
		uint8_t G1_TX_AMP_4_0                            : 5;	/*[21:17]     r/w 5'h4*/
		uint8_t G1_TX_AMP_ADJ                            : 1;	/*     22     r/w   1*/
		uint8_t G1_TX_EMPH1_3_0_b0                       : 1;	/*[26:23]     r/w 4'h1*/
		uint8_t G1_TX_EMPH1_3_0_b1                       : 3;	/*[26:23]     r/w 4'h1*/
		uint8_t G1_TX_EMPH1_EN                           : 1;	/*     27     r/w   1*/
		uint8_t G1_TX_SLEW_RATE_SEL_2_0                  : 3;	/*[30:28]     r/w 3'h4*/
		uint8_t G1_TX_SLEW_CTRL_EN                       : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G1_SETTING_0_t;
volatile G1_SETTING_0_t __xdata __at(PHY_REG_BASE + 0xc380) G1_SETTING_0;
#define reg_G1_RX_SELMUPI_2_0  G1_SETTING_0.BF.G1_RX_SELMUPI_2_0
#define reg_G1_RX_SELMUPF_2_0  G1_SETTING_0.BF.G1_RX_SELMUPF_2_0
#define reg_G1_RX_SELMUFI_1_0  G1_SETTING_0.BF.G1_RX_SELMUFI_1_0
#define reg_G1_RX_SELMUFF_1_0  G1_SETTING_0.BF.G1_RX_SELMUFF_1_0
#define reg_G1_RX_DFE_EN  G1_SETTING_0.BF.G1_RX_DFE_EN
#define reg_G1_RXDIGCK_DIV_1_0  G1_SETTING_0.BF.G1_RXDIGCK_DIV_1_0
#define reg_G1_RXDCW_EN  G1_SETTING_0.BF.G1_RXDCW_EN
#define reg_G1_TX_AMP_SHFT  G1_SETTING_0.BF.G1_TX_AMP_SHFT
#define reg_G1_TX_SSC_EN  G1_SETTING_0.BF.G1_TX_SSC_EN
#define reg_G1_TX_AMP_4_0  G1_SETTING_0.BF.G1_TX_AMP_4_0
#define reg_G1_TX_AMP_ADJ  G1_SETTING_0.BF.G1_TX_AMP_ADJ
#define reg_G1_TX_EMPH1_3_0_b0  G1_SETTING_0.BF.G1_TX_EMPH1_3_0_b0
#define reg_G1_TX_EMPH1_3_0_b1  G1_SETTING_0.BF.G1_TX_EMPH1_3_0_b1
#define reg_G1_TX_EMPH1_EN  G1_SETTING_0.BF.G1_TX_EMPH1_EN
#define reg_G1_TX_SLEW_RATE_SEL_2_0  G1_SETTING_0.BF.G1_TX_SLEW_RATE_SEL_2_0
#define reg_G1_TX_SLEW_CTRL_EN  G1_SETTING_0.BF.G1_TX_SLEW_CTRL_EN

// 0xc384	G1_SETTING_1		Genration 1 setting 1
typedef union {
	struct {
		uint8_t G1_FFE_CAP_SEL_3_0                       : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t G1_FFE_RES_SEL_2_0                       : 3;	/*  [6:4]     r/w 3'h3*/
		uint8_t G1_FFE_SETTING_FORCE                     : 1;	/*      7     r/w   1*/
		uint8_t G1_DFE_FREEZE_AFTER_TRAIN                : 1;	/*      8     r/w   0*/
		uint8_t G1_FBCK_SEL                              : 1;	/*      9     r/w   0*/
		uint8_t G1_DTL_INTPCLK_DIV                       : 1;	/*     10     r/w   0*/
		uint8_t G1_DTL_INTPCLK_EN                        : 1;	/*     11     r/w   0*/
		uint8_t G1_FFE_DEG_RES_LEVEL_1_0                 : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t G1_FFE_LOAD_RES_LEVEL_1_0                : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t G1_TX_EMPH0_3_0                          : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t G1_TX_EMPH0_EN                           : 1;	/*     20     r/w   0*/
		uint8_t G1_TX_EMPH_MODE_1_0                      : 2;	/*[22:21]     r/w 2'h2*/
		uint8_t G1_VREG_RXTX_MAS_ISET_1_0_b0             : 1;	/*[24:23]     r/w 2'h2*/
		uint8_t G1_VREG_RXTX_MAS_ISET_1_0_b1             : 1;	/*[24:23]     r/w 2'h2*/
		uint8_t G1_TX_SSC_AMP_6_0                        : 7;	/*[31:25]     r/w 7'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G1_SETTING_1_t;
volatile G1_SETTING_1_t __xdata __at(PHY_REG_BASE + 0xc384) G1_SETTING_1;
#define reg_G1_FFE_CAP_SEL_3_0  G1_SETTING_1.BF.G1_FFE_CAP_SEL_3_0
#define reg_G1_FFE_RES_SEL_2_0  G1_SETTING_1.BF.G1_FFE_RES_SEL_2_0
#define reg_G1_FFE_SETTING_FORCE  G1_SETTING_1.BF.G1_FFE_SETTING_FORCE
#define reg_G1_DFE_FREEZE_AFTER_TRAIN  G1_SETTING_1.BF.G1_DFE_FREEZE_AFTER_TRAIN
#define reg_G1_FBCK_SEL  G1_SETTING_1.BF.G1_FBCK_SEL
#define reg_G1_DTL_INTPCLK_DIV  G1_SETTING_1.BF.G1_DTL_INTPCLK_DIV
#define reg_G1_DTL_INTPCLK_EN  G1_SETTING_1.BF.G1_DTL_INTPCLK_EN
#define reg_G1_FFE_DEG_RES_LEVEL_1_0  G1_SETTING_1.BF.G1_FFE_DEG_RES_LEVEL_1_0
#define reg_G1_FFE_LOAD_RES_LEVEL_1_0  G1_SETTING_1.BF.G1_FFE_LOAD_RES_LEVEL_1_0
#define reg_G1_TX_EMPH0_3_0  G1_SETTING_1.BF.G1_TX_EMPH0_3_0
#define reg_G1_TX_EMPH0_EN  G1_SETTING_1.BF.G1_TX_EMPH0_EN
#define reg_G1_TX_EMPH_MODE_1_0  G1_SETTING_1.BF.G1_TX_EMPH_MODE_1_0
#define reg_G1_VREG_RXTX_MAS_ISET_1_0_b0  G1_SETTING_1.BF.G1_VREG_RXTX_MAS_ISET_1_0_b0
#define reg_G1_VREG_RXTX_MAS_ISET_1_0_b1  G1_SETTING_1.BF.G1_VREG_RXTX_MAS_ISET_1_0_b1
#define reg_G1_TX_SSC_AMP_6_0  G1_SETTING_1.BF.G1_TX_SSC_AMP_6_0

// 0xc388	G2_SETTING_0		Genration 2 setting 0 : G2 gen-table starts here
typedef union {
	struct {
		uint8_t G2_TX_SSC_EN                             : 1;	/*      0     r/w   0*/
		uint8_t G2_TX_AMP_4_0                            : 5;	/*  [5:1]     r/w 5'h7*/
		uint8_t G2_TX_AMP_ADJ                            : 1;	/*      6     r/w   1*/
		uint8_t G2_TX_EMPH1_3_0_b0                       : 1;	/* [10:7]     r/w 4'h2*/
		uint8_t G2_TX_EMPH1_3_0_b1                       : 3;	/* [10:7]     r/w 4'h2*/
		uint8_t G2_TX_EMPH1_EN                           : 1;	/*     11     r/w   1*/
		uint8_t G2_TX_SLEW_RATE_SEL_2_0                  : 3;	/*[14:12]     r/w 3'h2*/
		uint8_t G2_TX_SLEW_CTRL_EN                       : 1;	/*     15     r/w   1*/
		uint8_t G1_RX_TRAIN_MODE                         : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t G1_SQ_THRESH_RATIO_4_0                   : 5;	/*[23:19]     r/w 5'h0*/
		uint8_t G1_DFE_RES_1_0                           : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t G1_REG0P9_SPEED_TRACK_CLK_2_0            : 3;	/*[28:26]     r/w 3'h1*/
		uint8_t G1_REG0P9_SPEED_TRACK_DATA_2_0           : 3;	/*[31:29]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G2_SETTING_0_t;
volatile G2_SETTING_0_t __xdata __at(PHY_REG_BASE + 0xc388) G2_SETTING_0;
#define reg_G2_TX_SSC_EN  G2_SETTING_0.BF.G2_TX_SSC_EN
#define reg_G2_TX_AMP_4_0  G2_SETTING_0.BF.G2_TX_AMP_4_0
#define reg_G2_TX_AMP_ADJ  G2_SETTING_0.BF.G2_TX_AMP_ADJ
#define reg_G2_TX_EMPH1_3_0_b0  G2_SETTING_0.BF.G2_TX_EMPH1_3_0_b0
#define reg_G2_TX_EMPH1_3_0_b1  G2_SETTING_0.BF.G2_TX_EMPH1_3_0_b1
#define reg_G2_TX_EMPH1_EN  G2_SETTING_0.BF.G2_TX_EMPH1_EN
#define reg_G2_TX_SLEW_RATE_SEL_2_0  G2_SETTING_0.BF.G2_TX_SLEW_RATE_SEL_2_0
#define reg_G2_TX_SLEW_CTRL_EN  G2_SETTING_0.BF.G2_TX_SLEW_CTRL_EN
#define reg_G1_RX_TRAIN_MODE  G2_SETTING_0.BF.G1_RX_TRAIN_MODE
#define reg_G1_SQ_THRESH_RATIO_4_0  G2_SETTING_0.BF.G1_SQ_THRESH_RATIO_4_0
#define reg_G1_DFE_RES_1_0  G2_SETTING_0.BF.G1_DFE_RES_1_0
#define reg_G1_REG0P9_SPEED_TRACK_CLK_2_0  G2_SETTING_0.BF.G1_REG0P9_SPEED_TRACK_CLK_2_0
#define reg_G1_REG0P9_SPEED_TRACK_DATA_2_0  G2_SETTING_0.BF.G1_REG0P9_SPEED_TRACK_DATA_2_0

// 0xc38c	G2_SETTING_1		Genration 2 setting 1
typedef union {
	struct {
		uint8_t G2_TX_EMPH0_3_0                          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t G2_TX_EMPH0_EN                           : 1;	/*      4     r/w   0*/
		uint8_t G2_TX_EMPH_MODE_1_0                      : 2;	/*  [6:5]     r/w 2'h2*/
		uint8_t G2_VREG_RXTX_MAS_ISET_1_0_b0             : 1;	/*  [8:7]     r/w 2'h2*/
		uint8_t G2_VREG_RXTX_MAS_ISET_1_0_b1             : 1;	/*  [8:7]     r/w 2'h2*/
		uint8_t G2_TX_SSC_AMP_6_0                        : 7;	/* [15:9]     r/w 7'h18*/
		uint8_t G2_RX_SELMUPI_2_0                        : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t G2_RX_SELMUPF_2_0                        : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t G2_RX_SELMUFI_1_0                        : 2;	/*[23:22]     r/w 2'h2*/
		uint8_t G2_RX_SELMUFF_1_0                        : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t G2_RX_DFE_EN                             : 1;	/*     26     r/w   0*/
		uint8_t G2_RXDIGCK_DIV_1_0                       : 2;	/*[28:27]     r/w 2'h1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t G2_RXDCW_EN                              : 1;	/*     30     r/w   0*/
		uint8_t G2_TX_AMP_SHFT                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G2_SETTING_1_t;
volatile G2_SETTING_1_t __xdata __at(PHY_REG_BASE + 0xc38c) G2_SETTING_1;
#define reg_G2_TX_EMPH0_3_0  G2_SETTING_1.BF.G2_TX_EMPH0_3_0
#define reg_G2_TX_EMPH0_EN  G2_SETTING_1.BF.G2_TX_EMPH0_EN
#define reg_G2_TX_EMPH_MODE_1_0  G2_SETTING_1.BF.G2_TX_EMPH_MODE_1_0
#define reg_G2_VREG_RXTX_MAS_ISET_1_0_b0  G2_SETTING_1.BF.G2_VREG_RXTX_MAS_ISET_1_0_b0
#define reg_G2_VREG_RXTX_MAS_ISET_1_0_b1  G2_SETTING_1.BF.G2_VREG_RXTX_MAS_ISET_1_0_b1
#define reg_G2_TX_SSC_AMP_6_0  G2_SETTING_1.BF.G2_TX_SSC_AMP_6_0
#define reg_G2_RX_SELMUPI_2_0  G2_SETTING_1.BF.G2_RX_SELMUPI_2_0
#define reg_G2_RX_SELMUPF_2_0  G2_SETTING_1.BF.G2_RX_SELMUPF_2_0
#define reg_G2_RX_SELMUFI_1_0  G2_SETTING_1.BF.G2_RX_SELMUFI_1_0
#define reg_G2_RX_SELMUFF_1_0  G2_SETTING_1.BF.G2_RX_SELMUFF_1_0
#define reg_G2_RX_DFE_EN  G2_SETTING_1.BF.G2_RX_DFE_EN
#define reg_G2_RXDIGCK_DIV_1_0  G2_SETTING_1.BF.G2_RXDIGCK_DIV_1_0
#define reg_G2_RXDCW_EN  G2_SETTING_1.BF.G2_RXDCW_EN
#define reg_G2_TX_AMP_SHFT  G2_SETTING_1.BF.G2_TX_AMP_SHFT

// 0xc390	G2_SETTING_2		
typedef union {
	struct {
		uint8_t G2_RX_TRAIN_MODE                         : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t G2_SQ_THRESH_RATIO_4_0                   : 5;	/*  [7:3]     r/w 5'h0*/
		uint8_t G2_DFE_RES_1_0                           : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t G2_REG0P9_SPEED_TRACK_CLK_2_0            : 3;	/*[12:10]     r/w 3'h2*/
		uint8_t G2_REG0P9_SPEED_TRACK_DATA_2_0           : 3;	/*[15:13]     r/w 3'h2*/
		uint8_t G2_FFE_CAP_SEL_3_0                       : 4;	/*[19:16]     r/w 4'he*/
		uint8_t G2_FFE_RES_SEL_2_0                       : 3;	/*[22:20]     r/w 3'h3*/
		uint8_t G2_FFE_SETTING_FORCE                     : 1;	/*     23     r/w   1*/
		uint8_t G2_DFE_FREEZE_AFTER_TRAIN                : 1;	/*     24     r/w   0*/
		uint8_t G2_FBCK_SEL                              : 1;	/*     25     r/w   0*/
		uint8_t G2_DTL_INTPCLK_DIV                       : 1;	/*     26     r/w   0*/
		uint8_t G2_DTL_INTPCLK_EN                        : 1;	/*     27     r/w   0*/
		uint8_t G2_FFE_DEG_RES_LEVEL_1_0                 : 2;	/*[29:28]     r/w 2'h1*/
		uint8_t G2_FFE_LOAD_RES_LEVEL_1_0                : 2;	/*[31:30]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G2_SETTING_2_t;
volatile G2_SETTING_2_t __xdata __at(PHY_REG_BASE + 0xc390) G2_SETTING_2;
#define reg_G2_RX_TRAIN_MODE  G2_SETTING_2.BF.G2_RX_TRAIN_MODE
#define reg_G2_SQ_THRESH_RATIO_4_0  G2_SETTING_2.BF.G2_SQ_THRESH_RATIO_4_0
#define reg_G2_DFE_RES_1_0  G2_SETTING_2.BF.G2_DFE_RES_1_0
#define reg_G2_REG0P9_SPEED_TRACK_CLK_2_0  G2_SETTING_2.BF.G2_REG0P9_SPEED_TRACK_CLK_2_0
#define reg_G2_REG0P9_SPEED_TRACK_DATA_2_0  G2_SETTING_2.BF.G2_REG0P9_SPEED_TRACK_DATA_2_0
#define reg_G2_FFE_CAP_SEL_3_0  G2_SETTING_2.BF.G2_FFE_CAP_SEL_3_0
#define reg_G2_FFE_RES_SEL_2_0  G2_SETTING_2.BF.G2_FFE_RES_SEL_2_0
#define reg_G2_FFE_SETTING_FORCE  G2_SETTING_2.BF.G2_FFE_SETTING_FORCE
#define reg_G2_DFE_FREEZE_AFTER_TRAIN  G2_SETTING_2.BF.G2_DFE_FREEZE_AFTER_TRAIN
#define reg_G2_FBCK_SEL  G2_SETTING_2.BF.G2_FBCK_SEL
#define reg_G2_DTL_INTPCLK_DIV  G2_SETTING_2.BF.G2_DTL_INTPCLK_DIV
#define reg_G2_DTL_INTPCLK_EN  G2_SETTING_2.BF.G2_DTL_INTPCLK_EN
#define reg_G2_FFE_DEG_RES_LEVEL_1_0  G2_SETTING_2.BF.G2_FFE_DEG_RES_LEVEL_1_0
#define reg_G2_FFE_LOAD_RES_LEVEL_1_0  G2_SETTING_2.BF.G2_FFE_LOAD_RES_LEVEL_1_0

// 0xc394	G3_SETTING_0		Genration 3 setting 0 : G3 gen-table starts here
typedef union {
	struct {
		uint8_t G3_RX_SELMUPI_2_0                        : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t G3_RX_SELMUPF_2_0                        : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t G3_RX_SELMUFI_1_0                        : 2;	/*  [7:6]     r/w 2'h2*/
		uint8_t G3_RX_SELMUFF_1_0                        : 2;	/*  [9:8]     r/w 2'h3*/
		uint8_t G3_RX_DFE_EN                             : 1;	/*     10     r/w   1*/
		uint8_t G3_RXDIGCK_DIV_1_0                       : 2;	/*[12:11]     r/w 2'h2*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t G3_RXDCW_EN                              : 1;	/*     14     r/w   0*/
		uint8_t G3_TX_AMP_SHFT                           : 1;	/*     15     r/w   0*/
		uint8_t G3_TX_SSC_EN                             : 1;	/*     16     r/w   0*/
		uint8_t G3_TX_AMP_4_0                            : 5;	/*[21:17]     r/w 5'h0b*/
		uint8_t G3_TX_AMP_ADJ                            : 1;	/*     22     r/w   1*/
		uint8_t G3_TX_EMPH1_3_0_b0                       : 1;	/*[26:23]     r/w 4'h4*/
		uint8_t G3_TX_EMPH1_3_0_b1                       : 3;	/*[26:23]     r/w 4'h4*/
		uint8_t G3_TX_EMPH1_EN                           : 1;	/*     27     r/w   1*/
		uint8_t G3_TX_SLEW_RATE_SEL_2_0                  : 3;	/*[30:28]     r/w 3'h0*/
		uint8_t G3_TX_SLEW_CTRL_EN                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G3_SETTING_0_t;
volatile G3_SETTING_0_t __xdata __at(PHY_REG_BASE + 0xc394) G3_SETTING_0;
#define reg_G3_RX_SELMUPI_2_0  G3_SETTING_0.BF.G3_RX_SELMUPI_2_0
#define reg_G3_RX_SELMUPF_2_0  G3_SETTING_0.BF.G3_RX_SELMUPF_2_0
#define reg_G3_RX_SELMUFI_1_0  G3_SETTING_0.BF.G3_RX_SELMUFI_1_0
#define reg_G3_RX_SELMUFF_1_0  G3_SETTING_0.BF.G3_RX_SELMUFF_1_0
#define reg_G3_RX_DFE_EN  G3_SETTING_0.BF.G3_RX_DFE_EN
#define reg_G3_RXDIGCK_DIV_1_0  G3_SETTING_0.BF.G3_RXDIGCK_DIV_1_0
#define reg_G3_RXDCW_EN  G3_SETTING_0.BF.G3_RXDCW_EN
#define reg_G3_TX_AMP_SHFT  G3_SETTING_0.BF.G3_TX_AMP_SHFT
#define reg_G3_TX_SSC_EN  G3_SETTING_0.BF.G3_TX_SSC_EN
#define reg_G3_TX_AMP_4_0  G3_SETTING_0.BF.G3_TX_AMP_4_0
#define reg_G3_TX_AMP_ADJ  G3_SETTING_0.BF.G3_TX_AMP_ADJ
#define reg_G3_TX_EMPH1_3_0_b0  G3_SETTING_0.BF.G3_TX_EMPH1_3_0_b0
#define reg_G3_TX_EMPH1_3_0_b1  G3_SETTING_0.BF.G3_TX_EMPH1_3_0_b1
#define reg_G3_TX_EMPH1_EN  G3_SETTING_0.BF.G3_TX_EMPH1_EN
#define reg_G3_TX_SLEW_RATE_SEL_2_0  G3_SETTING_0.BF.G3_TX_SLEW_RATE_SEL_2_0
#define reg_G3_TX_SLEW_CTRL_EN  G3_SETTING_0.BF.G3_TX_SLEW_CTRL_EN

// 0xc398	G3_SETTING_1		Genration 3 setting 1
typedef union {
	struct {
		uint8_t G3_FFE_CAP_SEL_3_0                       : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t G3_FFE_RES_SEL_2_0                       : 3;	/*  [6:4]     r/w 3'h3*/
		uint8_t G3_FFE_SETTING_FORCE                     : 1;	/*      7     r/w   0*/
		uint8_t G3_DFE_FREEZE_AFTER_TRAIN                : 1;	/*      8     r/w   0*/
		uint8_t G3_FBCK_SEL                              : 1;	/*      9     r/w   0*/
		uint8_t G3_DTL_INTPCLK_DIV                       : 1;	/*     10     r/w   0*/
		uint8_t G3_DTL_INTPCLK_EN                        : 1;	/*     11     r/w   0*/
		uint8_t G3_FFE_DEG_RES_LEVEL_1_0                 : 2;	/*[13:12]     r/w 2'h1*/
		uint8_t G3_FFE_LOAD_RES_LEVEL_1_0                : 2;	/*[15:14]     r/w 2'h1*/
		uint8_t G3_TX_EMPH0_3_0                          : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t G3_TX_EMPH0_EN                           : 1;	/*     20     r/w   0*/
		uint8_t G3_TX_EMPH_MODE_1_0                      : 2;	/*[22:21]     r/w 2'h2*/
		uint8_t G3_VREG_RXTX_MAS_ISET_1_0_b0             : 1;	/*[24:23]     r/w 2'h2*/
		uint8_t G3_VREG_RXTX_MAS_ISET_1_0_b1             : 1;	/*[24:23]     r/w 2'h2*/
		uint8_t G3_TX_SSC_AMP_6_0                        : 7;	/*[31:25]     r/w 7'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G3_SETTING_1_t;
volatile G3_SETTING_1_t __xdata __at(PHY_REG_BASE + 0xc398) G3_SETTING_1;
#define reg_G3_FFE_CAP_SEL_3_0  G3_SETTING_1.BF.G3_FFE_CAP_SEL_3_0
#define reg_G3_FFE_RES_SEL_2_0  G3_SETTING_1.BF.G3_FFE_RES_SEL_2_0
#define reg_G3_FFE_SETTING_FORCE  G3_SETTING_1.BF.G3_FFE_SETTING_FORCE
#define reg_G3_DFE_FREEZE_AFTER_TRAIN  G3_SETTING_1.BF.G3_DFE_FREEZE_AFTER_TRAIN
#define reg_G3_FBCK_SEL  G3_SETTING_1.BF.G3_FBCK_SEL
#define reg_G3_DTL_INTPCLK_DIV  G3_SETTING_1.BF.G3_DTL_INTPCLK_DIV
#define reg_G3_DTL_INTPCLK_EN  G3_SETTING_1.BF.G3_DTL_INTPCLK_EN
#define reg_G3_FFE_DEG_RES_LEVEL_1_0  G3_SETTING_1.BF.G3_FFE_DEG_RES_LEVEL_1_0
#define reg_G3_FFE_LOAD_RES_LEVEL_1_0  G3_SETTING_1.BF.G3_FFE_LOAD_RES_LEVEL_1_0
#define reg_G3_TX_EMPH0_3_0  G3_SETTING_1.BF.G3_TX_EMPH0_3_0
#define reg_G3_TX_EMPH0_EN  G3_SETTING_1.BF.G3_TX_EMPH0_EN
#define reg_G3_TX_EMPH_MODE_1_0  G3_SETTING_1.BF.G3_TX_EMPH_MODE_1_0
#define reg_G3_VREG_RXTX_MAS_ISET_1_0_b0  G3_SETTING_1.BF.G3_VREG_RXTX_MAS_ISET_1_0_b0
#define reg_G3_VREG_RXTX_MAS_ISET_1_0_b1  G3_SETTING_1.BF.G3_VREG_RXTX_MAS_ISET_1_0_b1
#define reg_G3_TX_SSC_AMP_6_0  G3_SETTING_1.BF.G3_TX_SSC_AMP_6_0

// 0xc39c	G4_SETTING_0		Genration 4 setting 0 : G4 gen-table starts here
typedef union {
	struct {
		uint8_t G4_TX_SSC_EN                             : 1;	/*      0     r/w   0*/
		uint8_t G4_TX_AMP_4_0                            : 5;	/*  [5:1]     r/w 5'h11*/
		uint8_t G4_TX_AMP_ADJ                            : 1;	/*      6     r/w   1*/
		uint8_t G4_TX_EMPH1_3_0_b0                       : 1;	/* [10:7]     r/w 4'h5*/
		uint8_t G4_TX_EMPH1_3_0_b1                       : 3;	/* [10:7]     r/w 4'h5*/
		uint8_t G4_TX_EMPH1_EN                           : 1;	/*     11     r/w   1*/
		uint8_t G4_TX_SLEW_RATE_SEL_2_0                  : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t G4_TX_SLEW_CTRL_EN                       : 1;	/*     15     r/w   0*/
		uint8_t G3_RX_TRAIN_MODE                         : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t G3_SQ_THRESH_RATIO_4_0                   : 5;	/*[23:19]     r/w 5'h0*/
		uint8_t G3_DFE_RES_1_0                           : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t G3_REG0P9_SPEED_TRACK_CLK_2_0            : 3;	/*[28:26]     r/w 3'h4*/
		uint8_t G3_REG0P9_SPEED_TRACK_DATA_2_0           : 3;	/*[31:29]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G4_SETTING_0_t;
volatile G4_SETTING_0_t __xdata __at(PHY_REG_BASE + 0xc39c) G4_SETTING_0;
#define reg_G4_TX_SSC_EN  G4_SETTING_0.BF.G4_TX_SSC_EN
#define reg_G4_TX_AMP_4_0  G4_SETTING_0.BF.G4_TX_AMP_4_0
#define reg_G4_TX_AMP_ADJ  G4_SETTING_0.BF.G4_TX_AMP_ADJ
#define reg_G4_TX_EMPH1_3_0_b0  G4_SETTING_0.BF.G4_TX_EMPH1_3_0_b0
#define reg_G4_TX_EMPH1_3_0_b1  G4_SETTING_0.BF.G4_TX_EMPH1_3_0_b1
#define reg_G4_TX_EMPH1_EN  G4_SETTING_0.BF.G4_TX_EMPH1_EN
#define reg_G4_TX_SLEW_RATE_SEL_2_0  G4_SETTING_0.BF.G4_TX_SLEW_RATE_SEL_2_0
#define reg_G4_TX_SLEW_CTRL_EN  G4_SETTING_0.BF.G4_TX_SLEW_CTRL_EN
#define reg_G3_RX_TRAIN_MODE  G4_SETTING_0.BF.G3_RX_TRAIN_MODE
#define reg_G3_SQ_THRESH_RATIO_4_0  G4_SETTING_0.BF.G3_SQ_THRESH_RATIO_4_0
#define reg_G3_DFE_RES_1_0  G4_SETTING_0.BF.G3_DFE_RES_1_0
#define reg_G3_REG0P9_SPEED_TRACK_CLK_2_0  G4_SETTING_0.BF.G3_REG0P9_SPEED_TRACK_CLK_2_0
#define reg_G3_REG0P9_SPEED_TRACK_DATA_2_0  G4_SETTING_0.BF.G3_REG0P9_SPEED_TRACK_DATA_2_0

// 0xc3a0	G4_SETTING_1		Genration 4 setting 1
typedef union {
	struct {
		uint8_t G4_TX_EMPH0_3_0                          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t G4_TX_EMPH0_EN                           : 1;	/*      4     r/w   0*/
		uint8_t G4_TX_EMPH_MODE_1_0                      : 2;	/*  [6:5]     r/w 2'h2*/
		uint8_t G4_VREG_RXTX_MAS_ISET_1_0_b0             : 1;	/*  [8:7]     r/w 2'h2*/
		uint8_t G4_VREG_RXTX_MAS_ISET_1_0_b1             : 1;	/*  [8:7]     r/w 2'h2*/
		uint8_t G4_TX_SSC_AMP_6_0                        : 7;	/* [15:9]     r/w 7'h18*/
		uint8_t G4_RX_SELMUPI_2_0                        : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t G4_RX_SELMUPF_2_0                        : 3;	/*[21:19]     r/w 3'h2*/
		uint8_t G4_RX_SELMUFI_1_0                        : 2;	/*[23:22]     r/w 2'h2*/
		uint8_t G4_RX_SELMUFF_1_0                        : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t G4_RX_DFE_EN                             : 1;	/*     26     r/w   1*/
		uint8_t G4_RXDIGCK_DIV_1_0                       : 2;	/*[28:27]     r/w 2'h2*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t G4_RXDCW_EN                              : 1;	/*     30     r/w   0*/
		uint8_t G4_TX_AMP_SHFT                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G4_SETTING_1_t;
volatile G4_SETTING_1_t __xdata __at(PHY_REG_BASE + 0xc3a0) G4_SETTING_1;
#define reg_G4_TX_EMPH0_3_0  G4_SETTING_1.BF.G4_TX_EMPH0_3_0
#define reg_G4_TX_EMPH0_EN  G4_SETTING_1.BF.G4_TX_EMPH0_EN
#define reg_G4_TX_EMPH_MODE_1_0  G4_SETTING_1.BF.G4_TX_EMPH_MODE_1_0
#define reg_G4_VREG_RXTX_MAS_ISET_1_0_b0  G4_SETTING_1.BF.G4_VREG_RXTX_MAS_ISET_1_0_b0
#define reg_G4_VREG_RXTX_MAS_ISET_1_0_b1  G4_SETTING_1.BF.G4_VREG_RXTX_MAS_ISET_1_0_b1
#define reg_G4_TX_SSC_AMP_6_0  G4_SETTING_1.BF.G4_TX_SSC_AMP_6_0
#define reg_G4_RX_SELMUPI_2_0  G4_SETTING_1.BF.G4_RX_SELMUPI_2_0
#define reg_G4_RX_SELMUPF_2_0  G4_SETTING_1.BF.G4_RX_SELMUPF_2_0
#define reg_G4_RX_SELMUFI_1_0  G4_SETTING_1.BF.G4_RX_SELMUFI_1_0
#define reg_G4_RX_SELMUFF_1_0  G4_SETTING_1.BF.G4_RX_SELMUFF_1_0
#define reg_G4_RX_DFE_EN  G4_SETTING_1.BF.G4_RX_DFE_EN
#define reg_G4_RXDIGCK_DIV_1_0  G4_SETTING_1.BF.G4_RXDIGCK_DIV_1_0
#define reg_G4_RXDCW_EN  G4_SETTING_1.BF.G4_RXDCW_EN
#define reg_G4_TX_AMP_SHFT  G4_SETTING_1.BF.G4_TX_AMP_SHFT

// 0xc3a4	G4_SETTING_2		
typedef union {
	struct {
		uint8_t G4_RX_TRAIN_MODE                         : 1;	/*      0     r/w   1*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t G4_SQ_THRESH_RATIO_4_0                   : 5;	/*  [7:3]     r/w 5'h0*/
		uint8_t G4_DFE_RES_1_0                           : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t G4_REG0P9_SPEED_TRACK_CLK_2_0            : 3;	/*[12:10]     r/w 3'h7*/
		uint8_t G4_REG0P9_SPEED_TRACK_DATA_2_0           : 3;	/*[15:13]     r/w 3'h7*/
		uint8_t G4_FFE_CAP_SEL_3_0                       : 4;	/*[19:16]     r/w 4'he*/
		uint8_t G4_FFE_RES_SEL_2_0                       : 3;	/*[22:20]     r/w 3'h3*/
		uint8_t G4_FFE_SETTING_FORCE                     : 1;	/*     23     r/w   0*/
		uint8_t G4_DFE_FREEZE_AFTER_TRAIN                : 1;	/*     24     r/w   0*/
		uint8_t G4_FBCK_SEL                              : 1;	/*     25     r/w   0*/
		uint8_t G4_DTL_INTPCLK_DIV                       : 1;	/*     26     r/w   0*/
		uint8_t G4_DTL_INTPCLK_EN                        : 1;	/*     27     r/w   0*/
		uint8_t G4_FFE_DEG_RES_LEVEL_1_0                 : 2;	/*[29:28]     r/w 2'h3*/
		uint8_t G4_FFE_LOAD_RES_LEVEL_1_0                : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G4_SETTING_2_t;
volatile G4_SETTING_2_t __xdata __at(PHY_REG_BASE + 0xc3a4) G4_SETTING_2;
#define reg_G4_RX_TRAIN_MODE  G4_SETTING_2.BF.G4_RX_TRAIN_MODE
#define reg_G4_SQ_THRESH_RATIO_4_0  G4_SETTING_2.BF.G4_SQ_THRESH_RATIO_4_0
#define reg_G4_DFE_RES_1_0  G4_SETTING_2.BF.G4_DFE_RES_1_0
#define reg_G4_REG0P9_SPEED_TRACK_CLK_2_0  G4_SETTING_2.BF.G4_REG0P9_SPEED_TRACK_CLK_2_0
#define reg_G4_REG0P9_SPEED_TRACK_DATA_2_0  G4_SETTING_2.BF.G4_REG0P9_SPEED_TRACK_DATA_2_0
#define reg_G4_FFE_CAP_SEL_3_0  G4_SETTING_2.BF.G4_FFE_CAP_SEL_3_0
#define reg_G4_FFE_RES_SEL_2_0  G4_SETTING_2.BF.G4_FFE_RES_SEL_2_0
#define reg_G4_FFE_SETTING_FORCE  G4_SETTING_2.BF.G4_FFE_SETTING_FORCE
#define reg_G4_DFE_FREEZE_AFTER_TRAIN  G4_SETTING_2.BF.G4_DFE_FREEZE_AFTER_TRAIN
#define reg_G4_FBCK_SEL  G4_SETTING_2.BF.G4_FBCK_SEL
#define reg_G4_DTL_INTPCLK_DIV  G4_SETTING_2.BF.G4_DTL_INTPCLK_DIV
#define reg_G4_DTL_INTPCLK_EN  G4_SETTING_2.BF.G4_DTL_INTPCLK_EN
#define reg_G4_FFE_DEG_RES_LEVEL_1_0  G4_SETTING_2.BF.G4_FFE_DEG_RES_LEVEL_1_0
#define reg_G4_FFE_LOAD_RES_LEVEL_1_0  G4_SETTING_2.BF.G4_FFE_LOAD_RES_LEVEL_1_0

// 0xc3a8	SPD_REG0		speed change force control
typedef union {
	struct {
		uint8_t PSUB_CTL_FORCE                           : 1;	/*      0     r/w   0*/
		uint8_t NSUB_CTL_FORCE                           : 1;	/*      1     r/w   0*/
		uint8_t VTHVCOPTAT_FORCE                         : 1;	/*      2     r/w   0*/
		uint8_t PW_SLLP_FORCE                            : 1;	/*      3     r/w   0*/
		uint8_t PU_RX_INTP_E_FORCE                       : 1;	/*      4     r/w   0*/
		uint8_t REG0P9_SPEED_TRACK_CLK_FORCE             : 1;	/*      5     r/w   0*/
		uint8_t REG0P9_SPEED_TRACK_DATA_FORCE            : 1;	/*      6     r/w   0*/
		uint8_t PLL_LPFC2_FORCE                          : 1;	/*      7     r/w   0*/
		uint8_t DTL_INTPCLK_DIV_FORCE                    : 1;	/*      8     r/w   0*/
		uint8_t DTL_INTPCLK_EN_FORCE                     : 1;	/*      9     r/w   0*/
		uint8_t PLL_HIGHBW_FORCE                         : 1;	/*     10     r/w   0*/
		uint8_t INTPI_FORCE                              : 1;	/*     11     r/w   0*/
		uint8_t ICP_FORCE                                : 1;	/*     12     r/w   0*/
		uint8_t TX_SPEED_DIV_FORCE                       : 1;	/*     13     r/w   0*/
		uint8_t RX_SPEED_DIV_FORCE                       : 1;	/*     14     r/w   0*/
		uint8_t RXDIGCK_DIV_FORCE                        : 1;	/*     15     r/w   0*/
		uint8_t REFDIV_FORCE                             : 1;	/*     16     r/w   0*/
		uint8_t INTPR_FORCE                              : 1;	/*     17     r/w   0*/
		uint8_t INIT_TXFOFFS_FORCE                       : 1;	/*     18     r/w   0*/
		uint8_t INIT_RXFOFFS_FORCE                       : 1;	/*     19     r/w   0*/
		uint8_t TX_DTXCLK_DIV_FORCE                      : 1;	/*     20     r/w   0*/
		uint8_t REF1M_GEN_DIV_FORCE                      : 1;	/*     21     r/w   0*/
		uint8_t SSC_ACC_FACTOR_FORCE                     : 1;	/*     22     r/w   0*/
		uint8_t DTL_CLK_MODE_FORCE                       : 1;	/*     23     r/w   0*/
		uint8_t FBDIV_CAL_FORCE                          : 1;	/*     24     r/w   0*/
		uint8_t FBDIV_FORCE                              : 1;	/*     25     r/w   0*/
		uint8_t SEL_BITS_PCIE_FORCE                      : 1;	/*     26     r/w   0*/
		uint8_t SEL_BITS_PCIE_GEN3                       : 1;	/*     27     r/w   0*/
		uint8_t SSC_M_FORCE                              : 1;	/*     28     r/w   0*/
		uint8_t SSC_STEP_FORCE                           : 1;	/*     29     r/w   0*/
		uint8_t CPU_SPD_CHG                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG0_t;
volatile SPD_REG0_t __xdata __at(PHY_REG_BASE + 0xc3a8) SPD_REG0;
#define reg_PSUB_CTL_FORCE  SPD_REG0.BF.PSUB_CTL_FORCE
#define reg_NSUB_CTL_FORCE  SPD_REG0.BF.NSUB_CTL_FORCE
#define reg_VTHVCOPTAT_FORCE  SPD_REG0.BF.VTHVCOPTAT_FORCE
#define reg_PW_SLLP_FORCE  SPD_REG0.BF.PW_SLLP_FORCE
#define reg_PU_RX_INTP_E_FORCE  SPD_REG0.BF.PU_RX_INTP_E_FORCE
#define reg_REG0P9_SPEED_TRACK_CLK_FORCE  SPD_REG0.BF.REG0P9_SPEED_TRACK_CLK_FORCE
#define reg_REG0P9_SPEED_TRACK_DATA_FORCE  SPD_REG0.BF.REG0P9_SPEED_TRACK_DATA_FORCE
#define reg_PLL_LPFC2_FORCE  SPD_REG0.BF.PLL_LPFC2_FORCE
#define reg_DTL_INTPCLK_DIV_FORCE  SPD_REG0.BF.DTL_INTPCLK_DIV_FORCE
#define reg_DTL_INTPCLK_EN_FORCE  SPD_REG0.BF.DTL_INTPCLK_EN_FORCE
#define reg_PLL_HIGHBW_FORCE  SPD_REG0.BF.PLL_HIGHBW_FORCE
#define reg_INTPI_FORCE  SPD_REG0.BF.INTPI_FORCE
#define reg_ICP_FORCE  SPD_REG0.BF.ICP_FORCE
#define reg_TX_SPEED_DIV_FORCE  SPD_REG0.BF.TX_SPEED_DIV_FORCE
#define reg_RX_SPEED_DIV_FORCE  SPD_REG0.BF.RX_SPEED_DIV_FORCE
#define reg_RXDIGCK_DIV_FORCE  SPD_REG0.BF.RXDIGCK_DIV_FORCE
#define reg_REFDIV_FORCE  SPD_REG0.BF.REFDIV_FORCE
#define reg_INTPR_FORCE  SPD_REG0.BF.INTPR_FORCE
#define reg_INIT_TXFOFFS_FORCE  SPD_REG0.BF.INIT_TXFOFFS_FORCE
#define reg_INIT_RXFOFFS_FORCE  SPD_REG0.BF.INIT_RXFOFFS_FORCE
#define reg_TX_DTXCLK_DIV_FORCE  SPD_REG0.BF.TX_DTXCLK_DIV_FORCE
#define reg_REF1M_GEN_DIV_FORCE  SPD_REG0.BF.REF1M_GEN_DIV_FORCE
#define reg_SSC_ACC_FACTOR_FORCE  SPD_REG0.BF.SSC_ACC_FACTOR_FORCE
#define reg_DTL_CLK_MODE_FORCE  SPD_REG0.BF.DTL_CLK_MODE_FORCE
#define reg_FBDIV_CAL_FORCE  SPD_REG0.BF.FBDIV_CAL_FORCE
#define reg_FBDIV_FORCE  SPD_REG0.BF.FBDIV_FORCE
#define reg_SEL_BITS_PCIE_FORCE  SPD_REG0.BF.SEL_BITS_PCIE_FORCE
#define reg_SEL_BITS_PCIE_GEN3  SPD_REG0.BF.SEL_BITS_PCIE_GEN3
#define reg_SSC_M_FORCE  SPD_REG0.BF.SSC_M_FORCE
#define reg_SSC_STEP_FORCE  SPD_REG0.BF.SSC_STEP_FORCE
#define reg_CPU_SPD_CHG  SPD_REG0.BF.CPU_SPD_CHG

// 0xc3ac	SPD_REG1		speed change control 1
typedef union {
	struct {
		uint8_t TX_SPEED_DIV_2_1_0                       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TX_SPEED_DIV_3_1_0                       : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TX_SPEED_DIV_4_1_0                       : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t VTHVCOPTAT_1_2_0                         : 3;	/* [10:8]     r/w 3'h2*/
		uint8_t TX_DTXCLK_DIV_2                          : 1;	/*     11     r/w   0*/
		uint8_t TX_DTXCLK_DIV_3                          : 1;	/*     12     r/w   0*/
		uint8_t TX_DTXCLK_DIV_4                          : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SELMUP_IN_ALIGN90_CAL_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t SELMUP_IN_ALIGN90_CAL_EN                 : 1;	/*     19     r/w   0*/
		uint8_t SPEED_CHANGE_CLK_ON                      : 1;	/*     20     r/w   0*/
		uint8_t SQ_THRE_RATIO_USE_TX_GEN                 : 1;	/*     21     r/w   0*/
		uint8_t PLL_RATE_SEL_FORCE                       : 1;	/*     22     r/w   0*/
		uint8_t PLL_SPEED_THRESH_FORCE                   : 1;	/*     23     r/w   0*/
		uint8_t REFDIV_1_6_0                             : 7;	/*[30:24]     r/w 7'h1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG1_t;
volatile SPD_REG1_t __xdata __at(PHY_REG_BASE + 0xc3ac) SPD_REG1;
#define reg_TX_SPEED_DIV_2_1_0  SPD_REG1.BF.TX_SPEED_DIV_2_1_0
#define reg_TX_SPEED_DIV_3_1_0  SPD_REG1.BF.TX_SPEED_DIV_3_1_0
#define reg_TX_SPEED_DIV_4_1_0  SPD_REG1.BF.TX_SPEED_DIV_4_1_0
#define reg_VTHVCOPTAT_1_2_0  SPD_REG1.BF.VTHVCOPTAT_1_2_0
#define reg_TX_DTXCLK_DIV_2  SPD_REG1.BF.TX_DTXCLK_DIV_2
#define reg_TX_DTXCLK_DIV_3  SPD_REG1.BF.TX_DTXCLK_DIV_3
#define reg_TX_DTXCLK_DIV_4  SPD_REG1.BF.TX_DTXCLK_DIV_4
#define reg_SELMUP_IN_ALIGN90_CAL_2_0  SPD_REG1.BF.SELMUP_IN_ALIGN90_CAL_2_0
#define reg_SELMUP_IN_ALIGN90_CAL_EN  SPD_REG1.BF.SELMUP_IN_ALIGN90_CAL_EN
#define reg_SPEED_CHANGE_CLK_ON  SPD_REG1.BF.SPEED_CHANGE_CLK_ON
#define reg_SQ_THRE_RATIO_USE_TX_GEN  SPD_REG1.BF.SQ_THRE_RATIO_USE_TX_GEN
#define reg_PLL_RATE_SEL_FORCE  SPD_REG1.BF.PLL_RATE_SEL_FORCE
#define reg_PLL_SPEED_THRESH_FORCE  SPD_REG1.BF.PLL_SPEED_THRESH_FORCE
#define reg_REFDIV_1_6_0  SPD_REG1.BF.REFDIV_1_6_0

// 0xc3b0	SPD_REG2		speed change control 2
typedef union {
	struct {
		uint8_t ICP_1_3_0                                : 4;	/*  [3:0]     r/w 4'ha*/
		uint8_t INTPI_1_3_0                              : 4;	/*  [7:4]     r/w 4'h7*/
		uint8_t INTPR_1_2_0                              : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t PLL_HIGHBW_1                             : 1;	/*     11     r/w   0*/
		uint8_t PW_SLLP_1_2_0                            : 3;	/*[14:12]     r/w 3'h3*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PSUB_CTL_1_1_0                           : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t NSUB_CTL_1_1_0                           : 2;	/*[19:18]     r/w 2'h2*/
		uint8_t PLL_LPFC2_1_1_0                          : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t RX_SPEED_DIV_2_1_0                       : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t RX_SPEED_DIV_3_1_0                       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RX_SPEED_DIV_4_1_0                       : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t PU_RX_INTP_E_2                           : 1;	/*     28     r/w   1*/
		uint8_t PU_RX_INTP_E_3                           : 1;	/*     29     r/w   1*/
		uint8_t PU_RX_INTP_E_4                           : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG2_t;
volatile SPD_REG2_t __xdata __at(PHY_REG_BASE + 0xc3b0) SPD_REG2;
#define reg_ICP_1_3_0  SPD_REG2.BF.ICP_1_3_0
#define reg_INTPI_1_3_0  SPD_REG2.BF.INTPI_1_3_0
#define reg_INTPR_1_2_0  SPD_REG2.BF.INTPR_1_2_0
#define reg_PLL_HIGHBW_1  SPD_REG2.BF.PLL_HIGHBW_1
#define reg_PW_SLLP_1_2_0  SPD_REG2.BF.PW_SLLP_1_2_0
#define reg_PSUB_CTL_1_1_0  SPD_REG2.BF.PSUB_CTL_1_1_0
#define reg_NSUB_CTL_1_1_0  SPD_REG2.BF.NSUB_CTL_1_1_0
#define reg_PLL_LPFC2_1_1_0  SPD_REG2.BF.PLL_LPFC2_1_1_0
#define reg_RX_SPEED_DIV_2_1_0  SPD_REG2.BF.RX_SPEED_DIV_2_1_0
#define reg_RX_SPEED_DIV_3_1_0  SPD_REG2.BF.RX_SPEED_DIV_3_1_0
#define reg_RX_SPEED_DIV_4_1_0  SPD_REG2.BF.RX_SPEED_DIV_4_1_0
#define reg_PU_RX_INTP_E_2  SPD_REG2.BF.PU_RX_INTP_E_2
#define reg_PU_RX_INTP_E_3  SPD_REG2.BF.PU_RX_INTP_E_3
#define reg_PU_RX_INTP_E_4  SPD_REG2.BF.PU_RX_INTP_E_4

// 0xc3b4	SPD_REG3		speed change control 3
typedef union {
	struct {
		uint8_t FBDIV_1_8_0_b0                           : 8;//1;	/* [15:7]     r/w 9'h4a*/
		uint8_t FBDIV_1_8_0_b1                           : 8;	/* [15:7]     r/w 9'h4a*/
		uint8_t FBDIV_CAL_1_8_0_b0                       : 8;//1;	/*[31:23]     r/w 9'h20*/
		uint8_t FBDIV_CAL_1_8_0_b1                       : 8;	/*[31:23]     r/w 9'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG3_t;
volatile SPD_REG3_t __xdata __at(PHY_REG_BASE + 0xc3b4) SPD_REG3;
#define reg_FBDIV_1_8_0_b0  SPD_REG3.BF.FBDIV_1_8_0_b0
#define reg_FBDIV_1_8_0_b1  SPD_REG3.BF.FBDIV_1_8_0_b1
#define reg_FBDIV_CAL_1_8_0_b0  SPD_REG3.BF.FBDIV_CAL_1_8_0_b0
#define reg_FBDIV_CAL_1_8_0_b1  SPD_REG3.BF.FBDIV_CAL_1_8_0_b1

// 0xc3b8	SPD_REG4		speed control 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RXFOFFS_1_9_0_b0                         : 2;	/* [15:6]     r/w 10'h0*/
		uint8_t RXFOFFS_1_9_0_b1                         : 8;	/* [15:6]     r/w 10'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RXFOFFS_9_0_b0                           : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t RXFOFFS_9_0_b1                           : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG4_t;
volatile SPD_REG4_t __xdata __at(PHY_REG_BASE + 0xc3b8) SPD_REG4;
#define reg_RXFOFFS_1_9_0_b0  SPD_REG4.BF.RXFOFFS_1_9_0_b0
#define reg_RXFOFFS_1_9_0_b1  SPD_REG4.BF.RXFOFFS_1_9_0_b1
#define reg_RXFOFFS_9_0_b0  SPD_REG4.BF.RXFOFFS_9_0_b0
#define reg_RXFOFFS_9_0_b1  SPD_REG4.BF.RXFOFFS_9_0_b1

// 0xc3bc	SPD_REG5		speed control 5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t TXFOFFS_1_9_0_b0                         : 2;	/* [15:6]     r/w 10'h0*/
		uint8_t TXFOFFS_1_9_0_b1                         : 8;	/* [15:6]     r/w 10'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t TXFOFFS_9_0_b0                           : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t TXFOFFS_9_0_b1                           : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG5_t;
volatile SPD_REG5_t __xdata __at(PHY_REG_BASE + 0xc3bc) SPD_REG5;
#define reg_TXFOFFS_1_9_0_b0  SPD_REG5.BF.TXFOFFS_1_9_0_b0
#define reg_TXFOFFS_1_9_0_b1  SPD_REG5.BF.TXFOFFS_1_9_0_b1
#define reg_TXFOFFS_9_0_b0  SPD_REG5.BF.TXFOFFS_9_0_b0
#define reg_TXFOFFS_9_0_b1  SPD_REG5.BF.TXFOFFS_9_0_b1

// 0xc3c0	SPD_REG6		speed control 6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t INIT_RXFOFFS_1_9_0_b0                    : 2;	/* [15:6]     r/w 10'h0*/
		uint8_t INIT_RXFOFFS_1_9_0_b1                    : 8;	/* [15:6]     r/w 10'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t INIT_TXFOFFS_1_9_0_b0                    : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t INIT_TXFOFFS_1_9_0_b1                    : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG6_t;
volatile SPD_REG6_t __xdata __at(PHY_REG_BASE + 0xc3c0) SPD_REG6;
#define reg_INIT_RXFOFFS_1_9_0_b0  SPD_REG6.BF.INIT_RXFOFFS_1_9_0_b0
#define reg_INIT_RXFOFFS_1_9_0_b1  SPD_REG6.BF.INIT_RXFOFFS_1_9_0_b1
#define reg_INIT_TXFOFFS_1_9_0_b0  SPD_REG6.BF.INIT_TXFOFFS_1_9_0_b0
#define reg_INIT_TXFOFFS_1_9_0_b1  SPD_REG6.BF.INIT_TXFOFFS_1_9_0_b1

// 0xc3c4	SPD_REG7		speed control 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t FOFFS_1_9_0_b0                           : 2;	/* [15:6]     r/w 10'h0*/
		uint8_t FOFFS_1_9_0_b1                           : 8;	/* [15:6]     r/w 10'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t FOFFS_9_0_b0                             : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t FOFFS_9_0_b1                             : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG7_t;
volatile SPD_REG7_t __xdata __at(PHY_REG_BASE + 0xc3c4) SPD_REG7;
#define reg_FOFFS_1_9_0_b0  SPD_REG7.BF.FOFFS_1_9_0_b0
#define reg_FOFFS_1_9_0_b1  SPD_REG7.BF.FOFFS_1_9_0_b1
#define reg_FOFFS_9_0_b0  SPD_REG7.BF.FOFFS_9_0_b0
#define reg_FOFFS_9_0_b1  SPD_REG7.BF.FOFFS_9_0_b1

// 0xc3c8	SPD_REG8		speed control 8
typedef union {
	struct {
		uint8_t REG0P9_SPEED_TRACK_DATA_1_2_0            : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t REG0P9_SPEED_TRACK_CLK_1_2_0             : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CPU_GEN_TX_EN                            : 1;	/*      8     r/w   0*/
		uint8_t CPU_GEN_TX_GTABLE_EN                     : 1;	/*      9     r/w   0*/
		uint8_t CPU_GEN_TX_AUTO_EN                       : 1;	/*     10     r/w   0*/
		uint8_t CPU_GEN_TX_SPEED_THRESH_EN               : 1;	/*     11     r/w   0*/
		uint8_t CPU_GEN_RX_EN                            : 1;	/*     12     r/w   0*/
		uint8_t CPU_GEN_RX_GTABLE_EN                     : 1;	/*     13     r/w   0*/
		uint8_t CPU_GEN_RX_AUTO_EN                       : 1;	/*     14     r/w   0*/
		uint8_t CPU_GEN_RX_SPEED_THRESH_EN               : 1;	/*     15     r/w   0*/
		uint8_t SET_PLL_RATE                             : 1;	/*     16     r/w   0*/
		uint8_t PLLCAL_SEQ_INV                           : 1;	/*     17     r/w   0*/
		uint8_t FORCE_RX_FOFFSET_EXTRA_M                 : 1;	/*     18     r/w   0*/
		uint8_t FORCE_PHY_RX_RATE                        : 1;	/*     19     r/w   0*/
		uint8_t FORCE_INT_USE_MAX_RATE_CHANGE_DONE       : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t G1_PLL_RATE_SEL                          : 1;	/*     24     r/w   0*/
		uint8_t G2_PLL_RATE_SEL                          : 1;	/*     25     r/w   0*/
		uint8_t G3_PLL_RATE_SEL                          : 1;	/*     26     r/w   0*/
		uint8_t G4_PLL_RATE_SEL                          : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t FORCE_SPD_INT_SEL_BITS_EOM               : 1;	/*     29     r/w   0*/
		uint8_t FORCE_SPD_INT_SEL_BITS                   : 1;	/*     30     r/w   0*/
		uint8_t CPU_SPD_CHG_CLK_FORCE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG8_t;
volatile SPD_REG8_t __xdata __at(PHY_REG_BASE + 0xc3c8) SPD_REG8;
#define reg_REG0P9_SPEED_TRACK_DATA_1_2_0  SPD_REG8.BF.REG0P9_SPEED_TRACK_DATA_1_2_0
#define reg_REG0P9_SPEED_TRACK_CLK_1_2_0  SPD_REG8.BF.REG0P9_SPEED_TRACK_CLK_1_2_0
#define reg_CPU_GEN_TX_EN  SPD_REG8.BF.CPU_GEN_TX_EN
#define reg_CPU_GEN_TX_GTABLE_EN  SPD_REG8.BF.CPU_GEN_TX_GTABLE_EN
#define reg_CPU_GEN_TX_AUTO_EN  SPD_REG8.BF.CPU_GEN_TX_AUTO_EN
#define reg_CPU_GEN_TX_SPEED_THRESH_EN  SPD_REG8.BF.CPU_GEN_TX_SPEED_THRESH_EN
#define reg_CPU_GEN_RX_EN  SPD_REG8.BF.CPU_GEN_RX_EN
#define reg_CPU_GEN_RX_GTABLE_EN  SPD_REG8.BF.CPU_GEN_RX_GTABLE_EN
#define reg_CPU_GEN_RX_AUTO_EN  SPD_REG8.BF.CPU_GEN_RX_AUTO_EN
#define reg_CPU_GEN_RX_SPEED_THRESH_EN  SPD_REG8.BF.CPU_GEN_RX_SPEED_THRESH_EN
#define reg_SET_PLL_RATE  SPD_REG8.BF.SET_PLL_RATE
#define reg_PLLCAL_SEQ_INV  SPD_REG8.BF.PLLCAL_SEQ_INV
#define reg_FORCE_RX_FOFFSET_EXTRA_M  SPD_REG8.BF.FORCE_RX_FOFFSET_EXTRA_M
#define reg_FORCE_PHY_RX_RATE  SPD_REG8.BF.FORCE_PHY_RX_RATE
#define reg_FORCE_INT_USE_MAX_RATE_CHANGE_DONE  SPD_REG8.BF.FORCE_INT_USE_MAX_RATE_CHANGE_DONE
#define reg_G1_PLL_RATE_SEL  SPD_REG8.BF.G1_PLL_RATE_SEL
#define reg_G2_PLL_RATE_SEL  SPD_REG8.BF.G2_PLL_RATE_SEL
#define reg_G3_PLL_RATE_SEL  SPD_REG8.BF.G3_PLL_RATE_SEL
#define reg_G4_PLL_RATE_SEL  SPD_REG8.BF.G4_PLL_RATE_SEL
#define reg_FORCE_SPD_INT_SEL_BITS_EOM  SPD_REG8.BF.FORCE_SPD_INT_SEL_BITS_EOM
#define reg_FORCE_SPD_INT_SEL_BITS  SPD_REG8.BF.FORCE_SPD_INT_SEL_BITS
#define reg_CPU_SPD_CHG_CLK_FORCE  SPD_REG8.BF.CPU_SPD_CHG_CLK_FORCE

// 0xc3cc	SPD_REG9		speed control 9
typedef union {
	struct {
		uint8_t CPU_GEN_TX_3_0                           : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t CPU_GEN_TX_GTABLE_3_0                    : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t CPU_GEN_TX_AUTO_3_0                      : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t CPU_GEN_TX_SPEED_THRESH_3_0              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t CPU_GEN_RX_3_0                           : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t CPU_GEN_RX_GTABLE_3_0                    : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t CPU_GEN_RX_AUTO_3_0                      : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t CPU_GEN_RX_SPEED_THRESH_3_0              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG9_t;
volatile SPD_REG9_t __xdata __at(PHY_REG_BASE + 0xc3cc) SPD_REG9;
#define reg_CPU_GEN_TX_3_0  SPD_REG9.BF.CPU_GEN_TX_3_0
#define reg_CPU_GEN_TX_GTABLE_3_0  SPD_REG9.BF.CPU_GEN_TX_GTABLE_3_0
#define reg_CPU_GEN_TX_AUTO_3_0  SPD_REG9.BF.CPU_GEN_TX_AUTO_3_0
#define reg_CPU_GEN_TX_SPEED_THRESH_3_0  SPD_REG9.BF.CPU_GEN_TX_SPEED_THRESH_3_0
#define reg_CPU_GEN_RX_3_0  SPD_REG9.BF.CPU_GEN_RX_3_0
#define reg_CPU_GEN_RX_GTABLE_3_0  SPD_REG9.BF.CPU_GEN_RX_GTABLE_3_0
#define reg_CPU_GEN_RX_AUTO_3_0  SPD_REG9.BF.CPU_GEN_RX_AUTO_3_0
#define reg_CPU_GEN_RX_SPEED_THRESH_3_0  SPD_REG9.BF.CPU_GEN_RX_SPEED_THRESH_3_0

// 0xc3d0	SPD_REG10		speed control 10
typedef union {
	struct {
		uint8_t INT_GEN_TX_NONMAX_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t INT_GEN_TX_4_AUTO_GTABLE_NONMAX_3_0      : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t INT_GEN_TX_4_AUTO_NONMAX_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t INT_GEN_RX_NONMAX_3_0                    : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t INT_GEN_RX_4_AUTO_GTABLE_NONMAX_3_0      : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t INT_GEN_RX_4_AUTO_NONMAX_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t FORCE_INT_GEN_TX_NONMAX                  : 1;	/*     24     r/w   0*/
		uint8_t FORCE_INT_GEN_TX_4_AUTO_GTABLE_NONMAX    : 1;	/*     25     r/w   0*/
		uint8_t FORCE_INT_GEN_TX_4_AUTO_NONMAX           : 1;	/*     26     r/w   0*/
		uint8_t FORCE_INT_GEN_RX_NONMAX                  : 1;	/*     27     r/w   0*/
		uint8_t FORCE_INT_GEN_RX_4_AUTO_GTABLE_NONMAX    : 1;	/*     28     r/w   0*/
		uint8_t FORCE_INT_GEN_RX_4_AUTO_NONMAX           : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_REG10_t;
volatile SPD_REG10_t __xdata __at(PHY_REG_BASE + 0xc3d0) SPD_REG10;
#define reg_INT_GEN_TX_NONMAX_3_0  SPD_REG10.BF.INT_GEN_TX_NONMAX_3_0
#define reg_INT_GEN_TX_4_AUTO_GTABLE_NONMAX_3_0  SPD_REG10.BF.INT_GEN_TX_4_AUTO_GTABLE_NONMAX_3_0
#define reg_INT_GEN_TX_4_AUTO_NONMAX_3_0  SPD_REG10.BF.INT_GEN_TX_4_AUTO_NONMAX_3_0
#define reg_INT_GEN_RX_NONMAX_3_0  SPD_REG10.BF.INT_GEN_RX_NONMAX_3_0
#define reg_INT_GEN_RX_4_AUTO_GTABLE_NONMAX_3_0  SPD_REG10.BF.INT_GEN_RX_4_AUTO_GTABLE_NONMAX_3_0
#define reg_INT_GEN_RX_4_AUTO_NONMAX_3_0  SPD_REG10.BF.INT_GEN_RX_4_AUTO_NONMAX_3_0
#define reg_FORCE_INT_GEN_TX_NONMAX  SPD_REG10.BF.FORCE_INT_GEN_TX_NONMAX
#define reg_FORCE_INT_GEN_TX_4_AUTO_GTABLE_NONMAX  SPD_REG10.BF.FORCE_INT_GEN_TX_4_AUTO_GTABLE_NONMAX
#define reg_FORCE_INT_GEN_TX_4_AUTO_NONMAX  SPD_REG10.BF.FORCE_INT_GEN_TX_4_AUTO_NONMAX
#define reg_FORCE_INT_GEN_RX_NONMAX  SPD_REG10.BF.FORCE_INT_GEN_RX_NONMAX
#define reg_FORCE_INT_GEN_RX_4_AUTO_GTABLE_NONMAX  SPD_REG10.BF.FORCE_INT_GEN_RX_4_AUTO_GTABLE_NONMAX
#define reg_FORCE_INT_GEN_RX_4_AUTO_NONMAX  SPD_REG10.BF.FORCE_INT_GEN_RX_4_AUTO_NONMAX

// 0xc3d4	MISC_DFE0		speed control 9
typedef union {
	struct {
		uint8_t FF_EN_0_SEL                              : 1;	/*      0     r/w   0*/
		uint8_t FF_EN_1_SEL                              : 1;	/*      1     r/w   0*/
		uint8_t FF_EN_2_SEL                              : 1;	/*      2     r/w   0*/
		uint8_t FF_EN_3_SEL                              : 1;	/*      3     r/w   0*/
		uint8_t FF_EN_4_SEL                              : 1;	/*      4     r/w   0*/
		uint8_t FF_EN_5_SEL                              : 1;	/*      5     r/w   0*/
		uint8_t FF_EN_DC_OS_SEL                          : 1;	/*      6     r/w   0*/
		uint8_t FF_EN_F1P5_SEL                           : 1;	/*      7     r/w   0*/
		uint8_t FF_EN_F2P5_SEL                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t CKALIGN_DPHER_SEL                        : 1;	/*     23     r/w   0*/
		uint8_t CKALIGN_DPHER_6_0                        : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t CKALIGN_DPHERCK                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MISC_DFE0_t;
volatile MISC_DFE0_t __xdata __at(PHY_REG_BASE + 0xc3d4) MISC_DFE0;
#define reg_FF_EN_0_SEL  MISC_DFE0.BF.FF_EN_0_SEL
#define reg_FF_EN_1_SEL  MISC_DFE0.BF.FF_EN_1_SEL
#define reg_FF_EN_2_SEL  MISC_DFE0.BF.FF_EN_2_SEL
#define reg_FF_EN_3_SEL  MISC_DFE0.BF.FF_EN_3_SEL
#define reg_FF_EN_4_SEL  MISC_DFE0.BF.FF_EN_4_SEL
#define reg_FF_EN_5_SEL  MISC_DFE0.BF.FF_EN_5_SEL
#define reg_FF_EN_DC_OS_SEL  MISC_DFE0.BF.FF_EN_DC_OS_SEL
#define reg_FF_EN_F1P5_SEL  MISC_DFE0.BF.FF_EN_F1P5_SEL
#define reg_FF_EN_F2P5_SEL  MISC_DFE0.BF.FF_EN_F2P5_SEL
#define reg_CKALIGN_DPHER_SEL  MISC_DFE0.BF.CKALIGN_DPHER_SEL
#define reg_CKALIGN_DPHER_6_0  MISC_DFE0.BF.CKALIGN_DPHER_6_0
#define reg_CKALIGN_DPHERCK  MISC_DFE0.BF.CKALIGN_DPHERCK
#define reg_FF_EN_X_SEL 	MISC_DFE0.BT.B0	

// 0xc3f0	REG3_DEBUG		reg3 debug
typedef union {
	struct {
		uint8_t REG3_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG3_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG3_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG3_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG3_DEBUG_t;
volatile REG3_DEBUG_t __xdata __at(PHY_REG_BASE + 0xc3f0) REG3_DEBUG;
#define reg_REG3_DEBUG0_7_0  REG3_DEBUG.BF.REG3_DEBUG0_7_0
#define reg_REG3_DEBUG1_7_0  REG3_DEBUG.BF.REG3_DEBUG1_7_0
#define reg_REG3_DEBUG2_7_0  REG3_DEBUG.BF.REG3_DEBUG2_7_0
#define reg_REG3_DEBUG3_7_0  REG3_DEBUG.BF.REG3_DEBUG3_7_0


//test
typedef union {
	struct {
		uint8_t REG_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_P0_DEBUG_t;
__xdata __at(PHY_REG_BASE + 0xc09c) volatile REG_P0_DEBUG_t REG_P0_DEBUG;

#define reg_REG_P0_DEBUG0_7_0  REG_P0_DEBUG.BF.REG_DEBUG0_7_0
#define reg_REG_P0_DEBUG1_7_0  REG_P0_DEBUG.BF.REG_DEBUG1_7_0
#define reg_REG_P0_DEBUG2_7_0  REG_P0_DEBUG.BF.REG_DEBUG2_7_0
#define reg_REG_P0_DEBUG3_7_0  REG_P0_DEBUG.BF.REG_DEBUG3_7_0

typedef union {
	struct {
		uint8_t REG_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_P1_DEBUG_t;
__xdata __at(PHY_REG_BASE + 0xc138) volatile REG_P1_DEBUG_t REG_P1_DEBUG;

#define reg_REG_P1_DEBUG0_7_0  REG_P1_DEBUG.BF.REG_DEBUG0_7_0
#define reg_REG_P1_DEBUG1_7_0  REG_P1_DEBUG.BF.REG_DEBUG1_7_0
#define reg_REG_P1_DEBUG2_7_0  REG_P1_DEBUG.BF.REG_DEBUG2_7_0
#define reg_REG_P1_DEBUG3_7_0  REG_P1_DEBUG.BF.REG_DEBUG3_7_0

typedef union {
	struct {
		uint8_t REG_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_P2_DEBUG_t;
volatile REG_P2_DEBUG_t __xdata __at(PHY_REG_BASE + 0xc244) REG_P2_DEBUG;

#define reg_REG_P2_DEBUG0_7_0  REG_P2_DEBUG.BF.REG_DEBUG0_7_0
#define reg_REG_P2_DEBUG1_7_0  REG_P2_DEBUG.BF.REG_DEBUG1_7_0
#define reg_REG_P2_DEBUG2_7_0  REG_P2_DEBUG.BF.REG_DEBUG2_7_0
#define reg_REG_P2_DEBUG3_7_0  REG_P2_DEBUG.BF.REG_DEBUG3_7_0

typedef union {
	struct {
		uint8_t REG_DEBUG0_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t REG_DEBUG1_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t REG_DEBUG2_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t REG_DEBUG3_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_P3_DEBUG_t;
volatile REG_P3_DEBUG_t __xdata __at(PHY_REG_BASE + 0xc3f0) REG_P3_DEBUG;

#define reg_REG_P3_DEBUG0_7_0  REG_P3_DEBUG.BF.REG_DEBUG0_7_0
#define reg_REG_P3_DEBUG1_7_0  REG_P3_DEBUG.BF.REG_DEBUG1_7_0
#define reg_REG_P3_DEBUG2_7_0  REG_P3_DEBUG.BF.REG_DEBUG2_7_0
#define reg_REG_P3_DEBUG3_7_0  REG_P3_DEBUG.BF.REG_DEBUG3_7_0

#endif

#endif
