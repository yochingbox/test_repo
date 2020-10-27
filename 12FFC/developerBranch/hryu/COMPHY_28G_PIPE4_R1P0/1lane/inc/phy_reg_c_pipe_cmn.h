#ifndef PHY_REG_C_PIPE_CMN_H
#define PHY_REG_C_PIPE_CMN_H



// 0x0000	GLOB_RST_CLK_CTRL		Reset and Clock Control
typedef union {
	struct {
		uint8_t SUB_REVISION_7_0                         : 8;	/*  [7:0]       r 8'h00*/
		uint8_t MAIN_REVISION_7_0                        : 8;	/* [15:8]       r 8'h10*/
		uint8_t PIPE_SFT_RESET                           : 1;	/*     16     r/w   1*/
		uint8_t REG_RESET                                : 1;	/*     17     r/w   0*/
		uint8_t MODE_FIXED_PCLK                          : 1;	/*     18     r/w   0*/
		uint8_t MODE_PIPE_WIDTH_32                       : 1;	/*     19     r/w   1*/
		uint8_t MODE_REFDIV_1_0                          : 2;	/*[21:20]     r/w 2'h2*/
		uint8_t MODE_CORE_CLK_CTRL                       : 1;	/*     22     r/w   0*/
		uint8_t MODE_MULTICAST                           : 1;	/*     23     r/w   0*/
		uint8_t PHY_RESET                                : 1;	/*     24     r/w   0*/
		uint8_t MODE_CORE_CLK_FREQ_SEL                   : 1;	/*     25     r/w   0*/
		uint8_t MODE_P3_OSC_PCLK_EN                      : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_RST_CLK_CTRL_t;
__xdata __at( 0xc000 ) volatile GLOB_RST_CLK_CTRL_t GLOB_RST_CLK_CTRL;
#define reg_SUB_REVISION_7_0  GLOB_RST_CLK_CTRL.BF.SUB_REVISION_7_0
#define reg_MAIN_REVISION_7_0  GLOB_RST_CLK_CTRL.BF.MAIN_REVISION_7_0
#define reg_PIPE_SFT_RESET  GLOB_RST_CLK_CTRL.BF.PIPE_SFT_RESET
#define reg_REG_RESET  GLOB_RST_CLK_CTRL.BF.REG_RESET
#define reg_MODE_FIXED_PCLK  GLOB_RST_CLK_CTRL.BF.MODE_FIXED_PCLK
#define reg_MODE_PIPE_WIDTH_32  GLOB_RST_CLK_CTRL.BF.MODE_PIPE_WIDTH_32
#define reg_MODE_REFDIV_1_0  GLOB_RST_CLK_CTRL.BF.MODE_REFDIV_1_0
#define reg_MODE_CORE_CLK_CTRL  GLOB_RST_CLK_CTRL.BF.MODE_CORE_CLK_CTRL
#define reg_MODE_MULTICAST  GLOB_RST_CLK_CTRL.BF.MODE_MULTICAST
#define reg_PHY_RESET  GLOB_RST_CLK_CTRL.BF.PHY_RESET
#define reg_MODE_CORE_CLK_FREQ_SEL  GLOB_RST_CLK_CTRL.BF.MODE_CORE_CLK_FREQ_SEL
#define reg_MODE_P3_OSC_PCLK_EN  GLOB_RST_CLK_CTRL.BF.MODE_P3_OSC_PCLK_EN

// 0x0004	GLOB_CLK_SRC_LO		Clock Source Low
typedef union {
	struct {
		uint8_t MODE_BIST                                : 1;	/*      0     r/w   0*/
		uint8_t MODE_PM_OVERRIDE                         : 1;	/*      1     r/w   0*/
		uint8_t MODE_MARGIN_OVERRIDE                     : 1;	/*      2     r/w   0*/
		uint8_t DBG_TESTBUS_SEL_3_0                      : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t DBG_TESTBUS_SEL_4                        : 1;	/*      7     r/w   0*/
		uint8_t DBG_TESTBUS_SEL_5                        : 1;	/*      8     r/w   0*/
		uint8_t DBG_TESTBUS_SEL_6                        : 1;	/*      9     r/w   0*/
		uint8_t MODE_LB_SHALLOW                          : 1;	/*     10     r/w   0*/
		uint8_t MODE_LB_DEEP                             : 1;	/*     11     r/w   0*/
		uint8_t MODE_LB_SERDES                           : 1;	/*     12     r/w   0*/
		uint8_t MODE_RST_OVERRIDE                        : 1;	/*     13     r/w   0*/
		uint8_t MODE_STATE_OVERRIDE                      : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t MODE_CLK_SRC_3_0                         : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t BUNDLE_SAMPLE_CTRL                       : 1;	/*     20     r/w   1*/
		uint8_t PLL_READY_DLY_2_0                        : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t BUNDLE_PLL_RDY                           : 1;	/*     24     r/w   0*/
		uint8_t CFG_USE_ALIGN_CLK                        : 1;	/*     25     r/w   0*/
		uint8_t MODE_P2_OFF                              : 1;	/*     26     r/w   0*/
		uint8_t CFG_FORCE_OCLK_EN                        : 1;	/*     27     r/w   0*/
		uint8_t CFG_SLOW_LANE_ALIGN                      : 1;	/*     28     r/w   0*/
		uint8_t CFG_USE_LANE_ALIGN_RDY                   : 1;	/*     29     r/w   0*/
		uint8_t CFG_CLK_SRC_MASK                         : 1;	/*     30     r/w   0*/
		uint8_t CFG_USE_ASYNC_CLKREQN                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_CLK_SRC_LO_t;
__xdata __at( 0xc010 ) volatile GLOB_CLK_SRC_LO_t GLOB_CLK_SRC_LO;
#define reg_MODE_BIST  GLOB_CLK_SRC_LO.BF.MODE_BIST
#define reg_MODE_PM_OVERRIDE  GLOB_CLK_SRC_LO.BF.MODE_PM_OVERRIDE
#define reg_MODE_MARGIN_OVERRIDE  GLOB_CLK_SRC_LO.BF.MODE_MARGIN_OVERRIDE
#define reg_DBG_TESTBUS_SEL_3_0  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_3_0
#define reg_DBG_TESTBUS_SEL_4  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_4
#define reg_DBG_TESTBUS_SEL_5  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_5
#define reg_DBG_TESTBUS_SEL_6  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_6
#define reg_MODE_LB_SHALLOW  GLOB_CLK_SRC_LO.BF.MODE_LB_SHALLOW
#define reg_MODE_LB_DEEP  GLOB_CLK_SRC_LO.BF.MODE_LB_DEEP
#define reg_MODE_LB_SERDES  GLOB_CLK_SRC_LO.BF.MODE_LB_SERDES
#define reg_MODE_RST_OVERRIDE  GLOB_CLK_SRC_LO.BF.MODE_RST_OVERRIDE
#define reg_MODE_STATE_OVERRIDE  GLOB_CLK_SRC_LO.BF.MODE_STATE_OVERRIDE
#define reg_MODE_CLK_SRC_3_0  GLOB_CLK_SRC_LO.BF.MODE_CLK_SRC_3_0
#define reg_BUNDLE_SAMPLE_CTRL  GLOB_CLK_SRC_LO.BF.BUNDLE_SAMPLE_CTRL
#define reg_PLL_READY_DLY_2_0  GLOB_CLK_SRC_LO.BF.PLL_READY_DLY_2_0
#define reg_BUNDLE_PLL_RDY  GLOB_CLK_SRC_LO.BF.BUNDLE_PLL_RDY
#define reg_CFG_USE_ALIGN_CLK  GLOB_CLK_SRC_LO.BF.CFG_USE_ALIGN_CLK
#define reg_MODE_P2_OFF  GLOB_CLK_SRC_LO.BF.MODE_P2_OFF
#define reg_CFG_FORCE_OCLK_EN  GLOB_CLK_SRC_LO.BF.CFG_FORCE_OCLK_EN
#define reg_CFG_SLOW_LANE_ALIGN  GLOB_CLK_SRC_LO.BF.CFG_SLOW_LANE_ALIGN
#define reg_CFG_USE_LANE_ALIGN_RDY  GLOB_CLK_SRC_LO.BF.CFG_USE_LANE_ALIGN_RDY
#define reg_CFG_CLK_SRC_MASK  GLOB_CLK_SRC_LO.BF.CFG_CLK_SRC_MASK
#define reg_CFG_USE_ASYNC_CLKREQN  GLOB_CLK_SRC_LO.BF.CFG_USE_ASYNC_CLKREQN

// 0x0008	GLOB_CLK_SRC_HI		Clock Source High
typedef union {
	struct {
		uint8_t LANE_START                               : 1;	/*      0     r/w   1*/
		uint8_t LANE_BREAK                               : 1;	/*      1     r/w   1*/
		uint8_t LANE_MASTER                              : 1;	/*      2     r/w   1*/
		uint8_t BIFURCATION_SEL_1_0                      : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t BUNDLE_PERIOD_SCALE_1_0                  : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t MODE_PIPE4_IF                            : 1;	/*      7     r/w   1*/
		uint8_t CFG_LANE_TURN_OFF_DIS                    : 1;	/*      8     r/w   0*/
		uint8_t CFG_OSC_WIN_LENGTH_1_0                   : 2;	/* [10:9]     r/w   0*/
		uint8_t CFG_REFCLK_VALID_POL                     : 1;	/*     11     r/w   0*/
		uint8_t BUNDLE_PERIOD_SEL                        : 1;	/*     12     r/w   0*/
		uint8_t CLKREQ_BUNDLE_CTRL                       : 1;	/*     13     r/w   0*/
		uint8_t CFG_RXTERM_ENABLE                        : 1;	/*     14     r/w   0*/
		uint8_t CFG_SEL_20_BITS                          : 1;	/*     15     r/w   0*/
		uint8_t PULSE_LENGTH_4_0                         : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CFG_UPDATE                               : 1;	/*     24     r/w   0*/
		uint8_t BIST_START                               : 1;	/*     25     r/w   0*/
		uint8_t COUNTER_SAMPLE                           : 1;	/*     26     r/w   0*/
		uint8_t COUNTER_SAMPLE_CLEAR                     : 1;	/*     27     r/w   0*/
		uint8_t PMO_POWER_VALID                          : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t PULSE_DONE                               : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_CLK_SRC_HI_t;
__xdata __at( 0xc020 ) volatile GLOB_CLK_SRC_HI_t GLOB_CLK_SRC_HI;
#define reg_LANE_START  GLOB_CLK_SRC_HI.BF.LANE_START
#define reg_LANE_BREAK  GLOB_CLK_SRC_HI.BF.LANE_BREAK
#define reg_LANE_MASTER  GLOB_CLK_SRC_HI.BF.LANE_MASTER
#define reg_BIFURCATION_SEL_1_0  GLOB_CLK_SRC_HI.BF.BIFURCATION_SEL_1_0
#define reg_BUNDLE_PERIOD_SCALE_1_0  GLOB_CLK_SRC_HI.BF.BUNDLE_PERIOD_SCALE_1_0
#define reg_MODE_PIPE4_IF  GLOB_CLK_SRC_HI.BF.MODE_PIPE4_IF
#define reg_CFG_LANE_TURN_OFF_DIS  GLOB_CLK_SRC_HI.BF.CFG_LANE_TURN_OFF_DIS
#define reg_CFG_OSC_WIN_LENGTH_1_0  GLOB_CLK_SRC_HI.BF.CFG_OSC_WIN_LENGTH_1_0
#define reg_CFG_REFCLK_VALID_POL  GLOB_CLK_SRC_HI.BF.CFG_REFCLK_VALID_POL
#define reg_BUNDLE_PERIOD_SEL  GLOB_CLK_SRC_HI.BF.BUNDLE_PERIOD_SEL
#define reg_CLKREQ_BUNDLE_CTRL  GLOB_CLK_SRC_HI.BF.CLKREQ_BUNDLE_CTRL
#define reg_CFG_RXTERM_ENABLE  GLOB_CLK_SRC_HI.BF.CFG_RXTERM_ENABLE
#define reg_CFG_SEL_20_BITS  GLOB_CLK_SRC_HI.BF.CFG_SEL_20_BITS
#define reg_PULSE_LENGTH_4_0  GLOB_CLK_SRC_HI.BF.PULSE_LENGTH_4_0
#define reg_CFG_UPDATE  GLOB_CLK_SRC_HI.BF.CFG_UPDATE
#define reg_BIST_START  GLOB_CLK_SRC_HI.BF.BIST_START
#define reg_COUNTER_SAMPLE  GLOB_CLK_SRC_HI.BF.COUNTER_SAMPLE
#define reg_COUNTER_SAMPLE_CLEAR  GLOB_CLK_SRC_HI.BF.COUNTER_SAMPLE_CLEAR
#define reg_PMO_POWER_VALID  GLOB_CLK_SRC_HI.BF.PMO_POWER_VALID
#define reg_PULSE_DONE  GLOB_CLK_SRC_HI.BF.PULSE_DONE

// 0x000c	GLOB_MISC_CTRL		Miscellaneous Control
typedef union {
	struct {
		uint8_t MODE_P1_CLK_REQ_N                        : 1;	/*      0     r/w   1*/
		uint8_t MODE_P2_PHYSTATUS                        : 1;	/*      1     r/w   0*/
		uint8_t MODE_PCLK_CTRL                           : 1;	/*      2     r/w   0*/
		uint8_t SQ_DETECT_SRC                            : 1;	/*      3     r/w   0*/
		uint8_t SQ_DETECT_OVERRIDE                       : 1;	/*      4     r/w   0*/
		uint8_t CFG_RX_HIZ_SRC                           : 1;	/*      5     r/w   0*/
		uint8_t MODE_P1_SNOOZ                            : 1;	/*      6     r/w   1*/
		uint8_t MODE_P1_OFF                              : 1;	/*      7     r/w   1*/
		uint8_t OSC_COUNT_SCALE_2_0                      : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RCB_RXEN_SRC                             : 1;	/*     11     r/w   0*/
		uint8_t CFG_FREE_OSC_SEL                         : 1;	/*     12     r/w   0*/
		uint8_t MODE_REFCLK_DIS                          : 1;	/*     13     r/w   1*/
		uint8_t CFG_REFCLK_DET_TYPE                      : 1;	/*     14     r/w   0*/
		uint8_t CFG_CLK_ACK_TIMER_EN                     : 1;	/*     15     r/w   0*/
		uint8_t CLKREQ_N_SRC                             : 1;	/*     16     r/w   0*/
		uint8_t CLKREQ_N_OVERRIDE                        : 1;	/*     17     r/w   0*/
		uint8_t REFCLK_RESTORE_DLY_5_0                   : 6;	/*[23:18]     r/w 6'h0a*/
		uint8_t REFCLK_SHUTOFF_DLY_1_0                   : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t REFCLK_DISABLE_DLY_3_0                   : 4;	/*[29:26]     r/w 4'h5*/
		uint8_t REFCLK_DISABLE_DLY_5_4                   : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_MISC_CTRL_t;
__xdata __at( 0xc030 ) volatile GLOB_MISC_CTRL_t GLOB_MISC_CTRL;
#define reg_MODE_P1_CLK_REQ_N  GLOB_MISC_CTRL.BF.MODE_P1_CLK_REQ_N
#define reg_MODE_P2_PHYSTATUS  GLOB_MISC_CTRL.BF.MODE_P2_PHYSTATUS
#define reg_MODE_PCLK_CTRL  GLOB_MISC_CTRL.BF.MODE_PCLK_CTRL
#define reg_SQ_DETECT_SRC  GLOB_MISC_CTRL.BF.SQ_DETECT_SRC
#define reg_SQ_DETECT_OVERRIDE  GLOB_MISC_CTRL.BF.SQ_DETECT_OVERRIDE
#define reg_CFG_RX_HIZ_SRC  GLOB_MISC_CTRL.BF.CFG_RX_HIZ_SRC
#define reg_MODE_P1_SNOOZ  GLOB_MISC_CTRL.BF.MODE_P1_SNOOZ
#define reg_MODE_P1_OFF  GLOB_MISC_CTRL.BF.MODE_P1_OFF
#define reg_OSC_COUNT_SCALE_2_0  GLOB_MISC_CTRL.BF.OSC_COUNT_SCALE_2_0
#define reg_RCB_RXEN_SRC  GLOB_MISC_CTRL.BF.RCB_RXEN_SRC
#define reg_CFG_FREE_OSC_SEL  GLOB_MISC_CTRL.BF.CFG_FREE_OSC_SEL
#define reg_MODE_REFCLK_DIS  GLOB_MISC_CTRL.BF.MODE_REFCLK_DIS
#define reg_CFG_REFCLK_DET_TYPE  GLOB_MISC_CTRL.BF.CFG_REFCLK_DET_TYPE
#define reg_CFG_CLK_ACK_TIMER_EN  GLOB_MISC_CTRL.BF.CFG_CLK_ACK_TIMER_EN
#define reg_CLKREQ_N_SRC  GLOB_MISC_CTRL.BF.CLKREQ_N_SRC
#define reg_CLKREQ_N_OVERRIDE  GLOB_MISC_CTRL.BF.CLKREQ_N_OVERRIDE
#define reg_REFCLK_RESTORE_DLY_5_0  GLOB_MISC_CTRL.BF.REFCLK_RESTORE_DLY_5_0
#define reg_REFCLK_SHUTOFF_DLY_1_0  GLOB_MISC_CTRL.BF.REFCLK_SHUTOFF_DLY_1_0
#define reg_REFCLK_DISABLE_DLY_3_0  GLOB_MISC_CTRL.BF.REFCLK_DISABLE_DLY_3_0
#define reg_REFCLK_DISABLE_DLY_5_4  GLOB_MISC_CTRL.BF.REFCLK_DISABLE_DLY_5_4

// 0x0010	GLOB_DP_SAL_CFG		Datapath and Symbol Alignment Configuration
typedef union {
	struct {
		uint8_t CFG_IGNORE_PHY_RDY                       : 1;	/*      0     r/w   0*/
		uint8_t CFG_GEN1_TXELECIDLE_DLY_1_0              : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t CFG_PASS_RXINFO                          : 1;	/*      3     r/w   0*/
		uint8_t CFG_NO_DISPERROR                         : 1;	/*      4     r/w   0*/
		uint8_t CFG_DISABLE_EDB                          : 1;	/*      5     r/w   0*/
		uint8_t CFG_MASK_ERRORS                          : 1;	/*      6     r/w   0*/
		uint8_t CFG_DISABLE_SKP                          : 1;	/*      7     r/w   0*/
		uint8_t CFG_ALWAYS_ALIGN                         : 1;	/*      8     r/w   0*/
		uint8_t CFG_SAL_FREEZE                           : 1;	/*      9     r/w   0*/
		uint8_t CFG_GEN2_TXELECIDLE_DLY_1_0              : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t CFG_TXELECIDLE_ASSERT                    : 1;	/*     12     r/w   0*/
		uint8_t CFG_SAL_IGNORE_SQ                        : 1;	/*     13     r/w   0*/
		uint8_t PCIE_LB_LOST_SYNC                        : 1;	/*     14     r/w   0*/
		uint8_t DISPERROR_REPORT_AS_10B_ERROR            : 1;	/*     15     r/w   0*/
		uint8_t CFG_SAL_4_0                              : 5;	/*[20:16]     r/w 5'h00*/
		uint8_t SPARE_REG_1C9_5                          : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1C9_6                          : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1C9_7                          : 1;	/*     23     r/w   0*/
		uint8_t CFG_SAL_24_20                            : 5;	/*[28:24]     r/w 5'h01*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG_t;
__xdata __at( 0xc040 ) volatile GLOB_DP_SAL_CFG_t GLOB_DP_SAL_CFG;
#define reg_CFG_IGNORE_PHY_RDY  GLOB_DP_SAL_CFG.BF.CFG_IGNORE_PHY_RDY
#define reg_CFG_GEN1_TXELECIDLE_DLY_1_0  GLOB_DP_SAL_CFG.BF.CFG_GEN1_TXELECIDLE_DLY_1_0
#define reg_CFG_PASS_RXINFO  GLOB_DP_SAL_CFG.BF.CFG_PASS_RXINFO
#define reg_CFG_NO_DISPERROR  GLOB_DP_SAL_CFG.BF.CFG_NO_DISPERROR
#define reg_CFG_DISABLE_EDB  GLOB_DP_SAL_CFG.BF.CFG_DISABLE_EDB
#define reg_CFG_MASK_ERRORS  GLOB_DP_SAL_CFG.BF.CFG_MASK_ERRORS
#define reg_CFG_DISABLE_SKP  GLOB_DP_SAL_CFG.BF.CFG_DISABLE_SKP
#define reg_CFG_ALWAYS_ALIGN  GLOB_DP_SAL_CFG.BF.CFG_ALWAYS_ALIGN
#define reg_CFG_SAL_FREEZE  GLOB_DP_SAL_CFG.BF.CFG_SAL_FREEZE
#define reg_CFG_GEN2_TXELECIDLE_DLY_1_0  GLOB_DP_SAL_CFG.BF.CFG_GEN2_TXELECIDLE_DLY_1_0
#define reg_CFG_TXELECIDLE_ASSERT  GLOB_DP_SAL_CFG.BF.CFG_TXELECIDLE_ASSERT
#define reg_CFG_SAL_IGNORE_SQ  GLOB_DP_SAL_CFG.BF.CFG_SAL_IGNORE_SQ
#define reg_PCIE_LB_LOST_SYNC  GLOB_DP_SAL_CFG.BF.PCIE_LB_LOST_SYNC
#define reg_DISPERROR_REPORT_AS_10B_ERROR  GLOB_DP_SAL_CFG.BF.DISPERROR_REPORT_AS_10B_ERROR
#define reg_CFG_SAL_4_0  GLOB_DP_SAL_CFG.BF.CFG_SAL_4_0
#define reg_SPARE_REG_1C9_5  GLOB_DP_SAL_CFG.BF.SPARE_REG_1C9_5
#define reg_SPARE_REG_1C9_6  GLOB_DP_SAL_CFG.BF.SPARE_REG_1C9_6
#define reg_SPARE_REG_1C9_7  GLOB_DP_SAL_CFG.BF.SPARE_REG_1C9_7
#define reg_CFG_SAL_24_20  GLOB_DP_SAL_CFG.BF.CFG_SAL_24_20

// 0x0014	GLOB_DP_SAL_CFG1		Symbol Alignment Aligned COM Weight
typedef union {
	struct {
		uint8_t CFG_SAL_9_5                              : 5;	/*  [4:0]     r/w 5'h18*/
		uint8_t SPARE_REG_1CA_5                          : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1CA_6                          : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1CA_7                          : 1;	/*      7     r/w   0*/
		uint8_t CFG_SAL_29_25                            : 5;	/* [12:8]     r/w 5'h08*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_SAL_14_10                            : 5;	/*[20:16]     r/w 5'h1f*/
		uint8_t SPARE_REG_1CB_5                          : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1CB_6                          : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1CB_7                          : 1;	/*     23     r/w   0*/
		uint8_t CFG_SAL_34_30                            : 5;	/*[28:24]     r/w 5'h10*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG1_t;
__xdata __at( 0xc050 ) volatile GLOB_DP_SAL_CFG1_t GLOB_DP_SAL_CFG1;
#define reg_CFG_SAL_9_5  GLOB_DP_SAL_CFG1.BF.CFG_SAL_9_5
#define reg_SPARE_REG_1CA_5  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CA_5
#define reg_SPARE_REG_1CA_6  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CA_6
#define reg_SPARE_REG_1CA_7  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CA_7
#define reg_CFG_SAL_29_25  GLOB_DP_SAL_CFG1.BF.CFG_SAL_29_25
#define reg_CFG_SAL_14_10  GLOB_DP_SAL_CFG1.BF.CFG_SAL_14_10
#define reg_SPARE_REG_1CB_5  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CB_5
#define reg_SPARE_REG_1CB_6  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CB_6
#define reg_SPARE_REG_1CB_7  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CB_7
#define reg_CFG_SAL_34_30  GLOB_DP_SAL_CFG1.BF.CFG_SAL_34_30

// 0x0018	GLOB_DP_SAL_CFG3		Symbol Alignment Misaligned COM Weight
typedef union {
	struct {
		uint8_t CFG_SAL_19_15                            : 5;	/*  [4:0]     r/w 5'h1f*/
		uint8_t SPARE_REG_1CC_5                          : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1CC_6                          : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1CC_7                          : 1;	/*      7     r/w   0*/
		uint8_t CFG_SAL_39_35                            : 5;	/* [12:8]     r/w 5'h1f*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_SAL_42_40                            : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t SPARE_REG_1CD_3                          : 1;	/*     19     r/w   0*/
		uint8_t SPARE_REG_1CD_4                          : 1;	/*     20     r/w   0*/
		uint8_t SPARE_REG_1CD_5                          : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1CD_6                          : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1CD_7                          : 1;	/*     23     r/w   0*/
		uint8_t CFG_SAL_45_43                            : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t SPARE_REG_1CD_B                          : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG3_t;
__xdata __at( 0xc060 ) volatile GLOB_DP_SAL_CFG3_t GLOB_DP_SAL_CFG3;
#define reg_CFG_SAL_19_15  GLOB_DP_SAL_CFG3.BF.CFG_SAL_19_15
#define reg_SPARE_REG_1CC_5  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CC_5
#define reg_SPARE_REG_1CC_6  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CC_6
#define reg_SPARE_REG_1CC_7  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CC_7
#define reg_CFG_SAL_39_35  GLOB_DP_SAL_CFG3.BF.CFG_SAL_39_35
#define reg_CFG_SAL_42_40  GLOB_DP_SAL_CFG3.BF.CFG_SAL_42_40
#define reg_SPARE_REG_1CD_3  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_3
#define reg_SPARE_REG_1CD_4  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_4
#define reg_SPARE_REG_1CD_5  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_5
#define reg_SPARE_REG_1CD_6  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_6
#define reg_SPARE_REG_1CD_7  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_7
#define reg_CFG_SAL_45_43  GLOB_DP_SAL_CFG3.BF.CFG_SAL_45_43
#define reg_SPARE_REG_1CD_B  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_B

// 0x001c	GLOB_DP_SAL_CFG5		Symbol Alignment Comma Pattern
typedef union {
	struct {
		uint8_t CFG_SAL_COM_9_0_b0                       : 8;	/*  [9:0]     r/w 10'hfa*/
		uint8_t CFG_SAL_COM_9_0_b1                       : 2;	/*  [9:0]     r/w 10'hfa*/
		uint8_t G3_ALIGN_COUNT_MAX_5_0                   : 6;	/*[15:10]     r/w 6'h3f*/
		uint8_t CFG_PCIE4_V7_SUPPORT                     : 1;	/*     16     r/w   1*/
		uint8_t CFG_PIPE_MSG_BUS_PROTOCOL_SEL            : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w 6'h0*/
		uint8_t CFG_P2_STAY_TIMER_EN                     : 1;	/*     24     r/w   1*/
		uint8_t CFG_LANE_ENABLE_CTRL                     : 1;	/*     25     r/w   1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG5_t;
__xdata __at( 0xc070 ) volatile GLOB_DP_SAL_CFG5_t GLOB_DP_SAL_CFG5;
#define reg_CFG_SAL_COM_9_0_b0  GLOB_DP_SAL_CFG5.BF.CFG_SAL_COM_9_0_b0
#define reg_CFG_SAL_COM_9_0_b1  GLOB_DP_SAL_CFG5.BF.CFG_SAL_COM_9_0_b1
#define reg_G3_ALIGN_COUNT_MAX_5_0  GLOB_DP_SAL_CFG5.BF.G3_ALIGN_COUNT_MAX_5_0
#define reg_CFG_PCIE4_V7_SUPPORT  GLOB_DP_SAL_CFG5.BF.CFG_PCIE4_V7_SUPPORT
#define reg_CFG_PIPE_MSG_BUS_PROTOCOL_SEL  GLOB_DP_SAL_CFG5.BF.CFG_PIPE_MSG_BUS_PROTOCOL_SEL
#define reg_CFG_P2_STAY_TIMER_EN  GLOB_DP_SAL_CFG5.BF.CFG_P2_STAY_TIMER_EN
#define reg_CFG_LANE_ENABLE_CTRL  GLOB_DP_SAL_CFG5.BF.CFG_LANE_ENABLE_CTRL

// 0x0020	GLOB_PM_CFG0		Power Management Timing Parameter 1
typedef union {
	struct {
		uint8_t CFG_PM_RXDLOZ_WAIT_7_0                   : 8;	/*  [7:0]     r/w 8'h1e*/
		uint8_t CFG_PM_RXDEN_WAIT_3_0                    : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t CFG_PM_OSCCLK_WAIT_3_0                   : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t CFG_PM_RXDET_WAIT_7_0                    : 8;	/*[23:16]     r/w 8'h14*/
		uint8_t CFG_PM_SHORT_WAIT_7_0                    : 8;	/*[31:24]     r/w 8'h30*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_PM_CFG0_t;
__xdata __at( 0xc080 ) volatile GLOB_PM_CFG0_t GLOB_PM_CFG0;
#define reg_CFG_PM_RXDLOZ_WAIT_7_0  GLOB_PM_CFG0.BF.CFG_PM_RXDLOZ_WAIT_7_0
#define reg_CFG_PM_RXDEN_WAIT_3_0  GLOB_PM_CFG0.BF.CFG_PM_RXDEN_WAIT_3_0
#define reg_CFG_PM_OSCCLK_WAIT_3_0  GLOB_PM_CFG0.BF.CFG_PM_OSCCLK_WAIT_3_0
#define reg_CFG_PM_RXDET_WAIT_7_0  GLOB_PM_CFG0.BF.CFG_PM_RXDET_WAIT_7_0
#define reg_CFG_PM_SHORT_WAIT_7_0  GLOB_PM_CFG0.BF.CFG_PM_SHORT_WAIT_7_0

// 0x0024	GLOB_COUNTER_CTRL		Counter Lane and Type Register
typedef union {
	struct {
		uint8_t COUNTER_LANE_SEL_4_0                     : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t SPARE_REG_1D2_5                          : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1D2_6                          : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1D2_7                          : 1;	/*      7     r/w   0*/
		uint8_t COUNTER_TYPE_5_0                         : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t PMO_PU_SQ                                : 1;	/*     14     r/w   0*/
		uint8_t PMO_REFCLK_DIS                           : 1;	/*     15     r/w   0*/
		uint8_t COUNTER_SAMPLED_15_0_b0                  : 8;	/*[31:16]       r   0*/
		uint8_t COUNTER_SAMPLED_15_0_b1                  : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_COUNTER_CTRL_t;
__xdata __at( 0xc090 ) volatile GLOB_COUNTER_CTRL_t GLOB_COUNTER_CTRL;
#define reg_COUNTER_LANE_SEL_4_0  GLOB_COUNTER_CTRL.BF.COUNTER_LANE_SEL_4_0
#define reg_SPARE_REG_1D2_5  GLOB_COUNTER_CTRL.BF.SPARE_REG_1D2_5
#define reg_SPARE_REG_1D2_6  GLOB_COUNTER_CTRL.BF.SPARE_REG_1D2_6
#define reg_SPARE_REG_1D2_7  GLOB_COUNTER_CTRL.BF.SPARE_REG_1D2_7
#define reg_COUNTER_TYPE_5_0  GLOB_COUNTER_CTRL.BF.COUNTER_TYPE_5_0
#define reg_PMO_PU_SQ  GLOB_COUNTER_CTRL.BF.PMO_PU_SQ
#define reg_PMO_REFCLK_DIS  GLOB_COUNTER_CTRL.BF.PMO_REFCLK_DIS
#define reg_COUNTER_SAMPLED_15_0_b0  GLOB_COUNTER_CTRL.BF.COUNTER_SAMPLED_15_0_b0
#define reg_COUNTER_SAMPLED_15_0_b1  GLOB_COUNTER_CTRL.BF.COUNTER_SAMPLED_15_0_b1
#define reg_COUNTER_SAMPLED_15_0  GLOB_COUNTER_CTRL.WT.W0

// 0x0028	GLOB_COUNTER_HI		Counter High Register
typedef union {
	struct {
		uint8_t COUNTER_SAMPLED_31_16_b0                 : 8;	/* [15:0]       r   0*/
		uint8_t COUNTER_SAMPLED_31_16_b1                 : 8;	/* [15:0]       r   0*/
		uint8_t PMO_RESET                                : 1;	/*     16     r/w   1*/
		uint8_t PMO_PU_PLL                               : 1;	/*     17     r/w   0*/
		uint8_t PMO_PU_TX                                : 1;	/*     18     r/w   0*/
		uint8_t PMO_PU_RX                                : 1;	/*     19     r/w   0*/
		uint8_t PMO_TX_RATE_SEL_1_0                      : 2;	/*[21:20]     r/w   0*/
		uint8_t PMO_RX_RATE_SEL_1_0                      : 2;	/*[23:22]     r/w   0*/
		uint8_t PMO_RX_INIT                              : 1;	/*     24     r/w   0*/
		uint8_t PMO_TX_IDLE_LOZ                          : 1;	/*     25     r/w   0*/
		uint8_t PMO_TX_IDLE_HIZ                          : 1;	/*     26     r/w   0*/
		uint8_t PMO_TXDETECTRX_EN                        : 1;	/*     27     r/w   0*/
		uint8_t PMO_PU_IVREF                             : 1;	/*     28     r/w   0*/
		uint8_t PMO_TX_VCMHOLD_EN                        : 1;	/*     29     r/w   0*/
		uint8_t PMO_BEACON_TX_EN                         : 1;	/*     30     r/w   0*/
		uint8_t PMO_CTRL_FROM_PIN                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_COUNTER_HI_t;
__xdata __at( 0xc0a0 ) volatile GLOB_COUNTER_HI_t GLOB_COUNTER_HI;
#define reg_COUNTER_SAMPLED_31_16_b0  GLOB_COUNTER_HI.BF.COUNTER_SAMPLED_31_16_b0
#define reg_COUNTER_SAMPLED_31_16_b1  GLOB_COUNTER_HI.BF.COUNTER_SAMPLED_31_16_b1
#define reg_PMO_RESET  GLOB_COUNTER_HI.BF.PMO_RESET
#define reg_PMO_PU_PLL  GLOB_COUNTER_HI.BF.PMO_PU_PLL
#define reg_PMO_PU_TX  GLOB_COUNTER_HI.BF.PMO_PU_TX
#define reg_PMO_PU_RX  GLOB_COUNTER_HI.BF.PMO_PU_RX
#define reg_PMO_TX_RATE_SEL_1_0  GLOB_COUNTER_HI.BF.PMO_TX_RATE_SEL_1_0
#define reg_PMO_RX_RATE_SEL_1_0  GLOB_COUNTER_HI.BF.PMO_RX_RATE_SEL_1_0
#define reg_PMO_RX_INIT  GLOB_COUNTER_HI.BF.PMO_RX_INIT
#define reg_PMO_TX_IDLE_LOZ  GLOB_COUNTER_HI.BF.PMO_TX_IDLE_LOZ
#define reg_PMO_TX_IDLE_HIZ  GLOB_COUNTER_HI.BF.PMO_TX_IDLE_HIZ
#define reg_PMO_TXDETECTRX_EN  GLOB_COUNTER_HI.BF.PMO_TXDETECTRX_EN
#define reg_PMO_PU_IVREF  GLOB_COUNTER_HI.BF.PMO_PU_IVREF
#define reg_PMO_TX_VCMHOLD_EN  GLOB_COUNTER_HI.BF.PMO_TX_VCMHOLD_EN
#define reg_PMO_BEACON_TX_EN  GLOB_COUNTER_HI.BF.PMO_BEACON_TX_EN
#define reg_PMO_CTRL_FROM_PIN  GLOB_COUNTER_HI.BF.PMO_CTRL_FROM_PIN
#define reg_COUNTER_SAMPLED_31_16  GLOB_COUNTER_HI.WT.W0

// 0x002c	GLOB_PM_DP_CTRL		PM and Datapath Clock Control Override
typedef union {
	struct {
		uint8_t PMO_TXDCLK_PCLK_EN                       : 1;	/*      0     r/w   0*/
		uint8_t PMO_PCLK_DPCLK_EN                        : 1;	/*      1     r/w   0*/
		uint8_t PMO_OSCCLK_PCLK_EN                       : 1;	/*      2     r/w   0*/
		uint8_t PMO_OSCCLK_AUX_CLK_EN                    : 1;	/*      3     r/w   0*/
		uint8_t PMO_DP_RST_N                             : 1;	/*      4     r/w   0*/
		uint8_t PMO_ASYNC_RST_N                          : 1;	/*      5     r/w   0*/
		uint8_t PMO_PIPE_8B                              : 1;	/*      6     r/w   0*/
		uint8_t PMO_PIPE_32B                             : 1;	/*      7     r/w   0*/
		uint8_t PMO_DPCLK_125                            : 1;	/*      8     r/w   0*/
		uint8_t PMO_CLK_REQ_N                            : 1;	/*      9     r/w   0*/
		uint8_t PMO_STATE_5_0                            : 6;	/*[15:10]     r/w   0*/
		uint8_t LOW_FREQ_PERIOD_MIN_6_0                  : 7;	/*[22:16]     r/w 7'h30*/
		uint8_t LOW_FREQ_PERIOD_MAX_6_0_b0               : 1;	/*[29:23]     r/w 7'h32*/
		uint8_t LOW_FREQ_PERIOD_MAX_6_0_b1               : 6;	/*[29:23]     r/w 7'h32*/
		uint8_t LOW_FREQ_CNT_SCALE_1_0                   : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_PM_DP_CTRL_t;
__xdata __at( 0xc0b0 ) volatile GLOB_PM_DP_CTRL_t GLOB_PM_DP_CTRL;
#define reg_PMO_TXDCLK_PCLK_EN  GLOB_PM_DP_CTRL.BF.PMO_TXDCLK_PCLK_EN
#define reg_PMO_PCLK_DPCLK_EN  GLOB_PM_DP_CTRL.BF.PMO_PCLK_DPCLK_EN
#define reg_PMO_OSCCLK_PCLK_EN  GLOB_PM_DP_CTRL.BF.PMO_OSCCLK_PCLK_EN
#define reg_PMO_OSCCLK_AUX_CLK_EN  GLOB_PM_DP_CTRL.BF.PMO_OSCCLK_AUX_CLK_EN
#define reg_PMO_DP_RST_N  GLOB_PM_DP_CTRL.BF.PMO_DP_RST_N
#define reg_PMO_ASYNC_RST_N  GLOB_PM_DP_CTRL.BF.PMO_ASYNC_RST_N
#define reg_PMO_PIPE_8B  GLOB_PM_DP_CTRL.BF.PMO_PIPE_8B
#define reg_PMO_PIPE_32B  GLOB_PM_DP_CTRL.BF.PMO_PIPE_32B
#define reg_PMO_DPCLK_125  GLOB_PM_DP_CTRL.BF.PMO_DPCLK_125
#define reg_PMO_CLK_REQ_N  GLOB_PM_DP_CTRL.BF.PMO_CLK_REQ_N
#define reg_PMO_STATE_5_0  GLOB_PM_DP_CTRL.BF.PMO_STATE_5_0
#define reg_LOW_FREQ_PERIOD_MIN_6_0  GLOB_PM_DP_CTRL.BF.LOW_FREQ_PERIOD_MIN_6_0
#define reg_LOW_FREQ_PERIOD_MAX_6_0_b0  GLOB_PM_DP_CTRL.BF.LOW_FREQ_PERIOD_MAX_6_0_b0
#define reg_LOW_FREQ_PERIOD_MAX_6_0_b1  GLOB_PM_DP_CTRL.BF.LOW_FREQ_PERIOD_MAX_6_0_b1
#define reg_LOW_FREQ_CNT_SCALE_1_0  GLOB_PM_DP_CTRL.BF.LOW_FREQ_CNT_SCALE_1_0

// 0x0030	GLOB_DP_BAL_CFG0		Block Alignment Good Block Weight
typedef union {
	struct {
		uint8_t CFG_BAL_WEIGHT_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t SPARE_REG_1D8_6                          : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1D8_7                          : 1;	/*      7     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_29_24                     : 6;	/* [13:8]     r/w 6'h01*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_11_6                      : 6;	/*[21:16]     r/w 6'h18*/
		uint8_t SPARE_REG_1D9_6                          : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1D9_7                          : 1;	/*     23     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_35_30                     : 6;	/*[29:24]     r/w 6'h08*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_BAL_CFG0_t;
__xdata __at( 0xc0c0 ) volatile GLOB_DP_BAL_CFG0_t GLOB_DP_BAL_CFG0;
#define reg_CFG_BAL_WEIGHT_5_0  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_5_0
#define reg_SPARE_REG_1D8_6  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D8_6
#define reg_SPARE_REG_1D8_7  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D8_7
#define reg_CFG_BAL_WEIGHT_29_24  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_29_24
#define reg_CFG_BAL_WEIGHT_11_6  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_11_6
#define reg_SPARE_REG_1D9_6  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D9_6
#define reg_SPARE_REG_1D9_7  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D9_7
#define reg_CFG_BAL_WEIGHT_35_30  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_35_30

// 0x0034	GLOB_DP_BAL_CFG2		Block Alignment Bad Block Weight
typedef union {
	struct {
		uint8_t CFG_BAL_WEIGHT_17_12                     : 6;	/*  [5:0]     r/w 6'h1f*/
		uint8_t SPARE_REG_1DA_6                          : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1DA_7                          : 1;	/*      7     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_41_36                     : 6;	/* [13:8]     r/w 6'h10*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_23_18                     : 6;	/*[21:16]     r/w 6'h1f*/
		uint8_t SPARE_REG_1DB_6                          : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1DB_7                          : 1;	/*     23     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_47_42                     : 6;	/*[29:24]     r/w 6'h30*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_BAL_CFG2_t;
__xdata __at( 0xc0d0 ) volatile GLOB_DP_BAL_CFG2_t GLOB_DP_BAL_CFG2;
#define reg_CFG_BAL_WEIGHT_17_12  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_17_12
#define reg_SPARE_REG_1DA_6  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DA_6
#define reg_SPARE_REG_1DA_7  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DA_7
#define reg_CFG_BAL_WEIGHT_41_36  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_41_36
#define reg_CFG_BAL_WEIGHT_23_18  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_23_18
#define reg_SPARE_REG_1DB_6  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DB_6
#define reg_SPARE_REG_1DB_7  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DB_7
#define reg_CFG_BAL_WEIGHT_47_42  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_47_42

// 0x0038	GLOB_DP_BAL_CFG4		Block Alignment Squelch Detect
typedef union {
	struct {
		uint8_t CFG_BAL_WEIGHT_50_48                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t SPARE_REG_1DC_3                          : 1;	/*      3     r/w   0*/
		uint8_t SPARE_REG_1DC_4                          : 1;	/*      4     r/w   0*/
		uint8_t SPARE_REG_1DC_5                          : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1DC_6                          : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1DC_7                          : 1;	/*      7     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_53_51                     : 3;	/* [10:8]     r/w 3'h2*/
		uint8_t SPARE_REG_1DC_B                          : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t CFG_BAL_IGNORE_HDR                       : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_DP_BAL_CFG4_t;
__xdata __at( 0xc0e0 ) volatile GLOB_DP_BAL_CFG4_t GLOB_DP_BAL_CFG4;
#define reg_CFG_BAL_WEIGHT_50_48  GLOB_DP_BAL_CFG4.BF.CFG_BAL_WEIGHT_50_48
#define reg_SPARE_REG_1DC_3  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_3
#define reg_SPARE_REG_1DC_4  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_4
#define reg_SPARE_REG_1DC_5  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_5
#define reg_SPARE_REG_1DC_6  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_6
#define reg_SPARE_REG_1DC_7  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_7
#define reg_CFG_BAL_WEIGHT_53_51  GLOB_DP_BAL_CFG4.BF.CFG_BAL_WEIGHT_53_51
#define reg_SPARE_REG_1DC_B  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_B
#define reg_CFG_BAL_IGNORE_HDR  GLOB_DP_BAL_CFG4.BF.CFG_BAL_IGNORE_HDR

// 0x003c	GLOB_BIST_CTRL		BIST Control Input
typedef union {
	struct {
		uint8_t BIST_POWERDOWN_1_0                       : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t BIST_RATE_1_0                            : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t BIST_TXDETECTRX_LOOPBACK                 : 1;	/*      4     r/w   0*/
		uint8_t BIST_TXELECIDLE                          : 1;	/*      5     r/w   1*/
		uint8_t BIST_TXCOMPLIANCE                        : 1;	/*      6     r/w   0*/
		uint8_t BIST_RXPOLARITY                          : 1;	/*      7     r/w   0*/
		uint8_t BIST_RXEIDETECT_DIS                      : 1;	/*      8     r/w   0*/
		uint8_t BIST_TXCMN_MODE_DIS                      : 1;	/*      9     r/w   0*/
		uint8_t BIST_CLK_REQ_N                           : 1;	/*     10     r/w   0*/
		uint8_t BIST_RXEQTRAINING                        : 1;	/*     11     r/w   0*/
		uint8_t BIST_TXDATAK_3_0                         : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t BIST_TX_ALIGN_POS_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t BIST_ELB_THRESHOLD_3_0_b0                : 2;	/*[25:22]     r/w 4'h0*/
		uint8_t BIST_ELB_THRESHOLD_3_0_b1                : 2;	/*[25:22]     r/w 4'h0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_BIST_CTRL_t;
__xdata __at( 0xc0f0 ) volatile GLOB_BIST_CTRL_t GLOB_BIST_CTRL;
#define reg_BIST_POWERDOWN_1_0  GLOB_BIST_CTRL.BF.BIST_POWERDOWN_1_0
#define reg_BIST_RATE_1_0  GLOB_BIST_CTRL.BF.BIST_RATE_1_0
#define reg_BIST_TXDETECTRX_LOOPBACK  GLOB_BIST_CTRL.BF.BIST_TXDETECTRX_LOOPBACK
#define reg_BIST_TXELECIDLE  GLOB_BIST_CTRL.BF.BIST_TXELECIDLE
#define reg_BIST_TXCOMPLIANCE  GLOB_BIST_CTRL.BF.BIST_TXCOMPLIANCE
#define reg_BIST_RXPOLARITY  GLOB_BIST_CTRL.BF.BIST_RXPOLARITY
#define reg_BIST_RXEIDETECT_DIS  GLOB_BIST_CTRL.BF.BIST_RXEIDETECT_DIS
#define reg_BIST_TXCMN_MODE_DIS  GLOB_BIST_CTRL.BF.BIST_TXCMN_MODE_DIS
#define reg_BIST_CLK_REQ_N  GLOB_BIST_CTRL.BF.BIST_CLK_REQ_N
#define reg_BIST_RXEQTRAINING  GLOB_BIST_CTRL.BF.BIST_RXEQTRAINING
#define reg_BIST_TXDATAK_3_0  GLOB_BIST_CTRL.BF.BIST_TXDATAK_3_0
#define reg_BIST_TX_ALIGN_POS_5_0  GLOB_BIST_CTRL.BF.BIST_TX_ALIGN_POS_5_0
#define reg_BIST_ELB_THRESHOLD_3_0_b0  GLOB_BIST_CTRL.BF.BIST_ELB_THRESHOLD_3_0_b0
#define reg_BIST_ELB_THRESHOLD_3_0_b1  GLOB_BIST_CTRL.BF.BIST_ELB_THRESHOLD_3_0_b1

// 0x0040	GLOB_BIST_LANE_TYPE		BIST Lane and Type
typedef union {
	struct {
		uint8_t BIST_TXDATA_15_0_b0                      : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t BIST_TXDATA_15_0_b1                      : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t BIST_SELF_CHECK                          : 1;	/*     16     r/w   0*/
		uint8_t BIST_TYPE_1_0                            : 2;	/*[18:17]     r/w 2'h0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t BIST_LANE_SEL_4_0                        : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t BIST_PASS                                : 1;	/*     30       r   0*/
		uint8_t BIST_DONE                                : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_LANE_TYPE_t;
__xdata __at( 0xc100 ) volatile GLOB_BIST_LANE_TYPE_t GLOB_BIST_LANE_TYPE;
#define reg_BIST_TXDATA_15_0_b0  GLOB_BIST_LANE_TYPE.BF.BIST_TXDATA_15_0_b0
#define reg_BIST_TXDATA_15_0_b1  GLOB_BIST_LANE_TYPE.BF.BIST_TXDATA_15_0_b1
#define reg_BIST_SELF_CHECK  GLOB_BIST_LANE_TYPE.BF.BIST_SELF_CHECK
#define reg_BIST_TYPE_1_0  GLOB_BIST_LANE_TYPE.BF.BIST_TYPE_1_0
#define reg_BIST_LANE_SEL_4_0  GLOB_BIST_LANE_TYPE.BF.BIST_LANE_SEL_4_0
#define reg_BIST_PASS  GLOB_BIST_LANE_TYPE.BF.BIST_PASS
#define reg_BIST_DONE  GLOB_BIST_LANE_TYPE.BF.BIST_DONE
#define reg_BIST_TXDATA_15_0  GLOB_BIST_LANE_TYPE.WT.W0

// 0x0044	GLOB_BIST_START		BIST Login Window Start Cycle
typedef union {
	struct {
		uint8_t BIST_WIN_DELAY_15_0_b0                   : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t BIST_WIN_DELAY_15_0_b1                   : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t BIST_WIN_LENGTH_15_0_b0                  : 8;	/*[31:16]     r/w 16'h0001*/
		uint8_t BIST_WIN_LENGTH_15_0_b1                  : 8;	/*[31:16]     r/w 16'h0001*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_START_t;
__xdata __at( 0xc110 ) volatile GLOB_BIST_START_t GLOB_BIST_START;
#define reg_BIST_WIN_DELAY_15_0_b0  GLOB_BIST_START.BF.BIST_WIN_DELAY_15_0_b0
#define reg_BIST_WIN_DELAY_15_0_b1  GLOB_BIST_START.BF.BIST_WIN_DELAY_15_0_b1
#define reg_BIST_WIN_LENGTH_15_0_b0  GLOB_BIST_START.BF.BIST_WIN_LENGTH_15_0_b0
#define reg_BIST_WIN_LENGTH_15_0_b1  GLOB_BIST_START.BF.BIST_WIN_LENGTH_15_0_b1
#define reg_BIST_WIN_DELAY_15_0  GLOB_BIST_START.WT.W0
#define reg_BIST_WIN_LENGTH_15_0  GLOB_BIST_START.WT.W1

// 0x0048	GLOB_BIST_MASK		BIST Result Mask
typedef union {
	struct {
		uint8_t BIST_MASK_15_0_b0                        : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t BIST_MASK_15_0_b1                        : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t BIST_MASK_31_16_b0                       : 8;	/*[31:16]     r/w 16'hffff*/
		uint8_t BIST_MASK_31_16_b1                       : 8;	/*[31:16]     r/w 16'hffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_MASK_t;
__xdata __at( 0xc120 ) volatile GLOB_BIST_MASK_t GLOB_BIST_MASK;
#define reg_BIST_MASK_15_0_b0  GLOB_BIST_MASK.BF.BIST_MASK_15_0_b0
#define reg_BIST_MASK_15_0_b1  GLOB_BIST_MASK.BF.BIST_MASK_15_0_b1
#define reg_BIST_MASK_31_16_b0  GLOB_BIST_MASK.BF.BIST_MASK_31_16_b0
#define reg_BIST_MASK_31_16_b1  GLOB_BIST_MASK.BF.BIST_MASK_31_16_b1
#define reg_BIST_MASK_15_0  GLOB_BIST_MASK.WT.W0
#define reg_BIST_MASK_31_16  GLOB_BIST_MASK.WT.W1

// 0x004c	GLOB_BIST_RESULT		BIST CRC Result
typedef union {
	struct {
		uint8_t BIST_CRC32_RESULT_15_0_b0                : 8;	/* [15:0]       r   0*/
		uint8_t BIST_CRC32_RESULT_15_0_b1                : 8;	/* [15:0]       r   0*/
		uint8_t BIST_CRC32_RESULT_31_16_b0               : 8;	/*[31:16]       r   0*/
		uint8_t BIST_CRC32_RESULT_31_16_b1               : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_RESULT_t;
__xdata __at( 0xc130 ) volatile GLOB_BIST_RESULT_t GLOB_BIST_RESULT;
#define reg_BIST_CRC32_RESULT_15_0_b0  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_15_0_b0
#define reg_BIST_CRC32_RESULT_15_0_b1  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_15_0_b1
#define reg_BIST_CRC32_RESULT_31_16_b0  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_31_16_b0
#define reg_BIST_CRC32_RESULT_31_16_b1  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_31_16_b1
#define reg_BIST_CRC32_RESULT_15_0  GLOB_BIST_RESULT.WT.W0
#define reg_BIST_CRC32_RESULT_31_16  GLOB_BIST_RESULT.WT.W1

// 0x0050	GLOB_BIST_SEQR_CFG		BIST Sequencer Configuration
typedef union {
	struct {
		uint8_t BIST_SEQ_N_DATA_7_0                      : 8;	/*  [7:0]     r/w   0*/
		uint8_t BIST_SEQ_N_FTS_7_0                       : 8;	/* [15:8]     r/w   0*/
		uint8_t BIST_LFSR_SEED_7_0                       : 8;	/*[23:16]     r/w   0*/
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
} GLOB_BIST_SEQR_CFG_t;
__xdata __at( 0xc140 ) volatile GLOB_BIST_SEQR_CFG_t GLOB_BIST_SEQR_CFG;
#define reg_BIST_SEQ_N_DATA_7_0  GLOB_BIST_SEQR_CFG.BF.BIST_SEQ_N_DATA_7_0
#define reg_BIST_SEQ_N_FTS_7_0  GLOB_BIST_SEQR_CFG.BF.BIST_SEQ_N_FTS_7_0
#define reg_BIST_LFSR_SEED_7_0  GLOB_BIST_SEQR_CFG.BF.BIST_LFSR_SEED_7_0

// 0x0054	GLOB_BIST_DATA_HI		BIST Data High Input
typedef union {
	struct {
		uint8_t BIST_TXDATA_31_16_b0                     : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t BIST_TXDATA_31_16_b1                     : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DEBUG_BUS_OUT_15_0_b0                    : 8;	/*[31:16]       r 16'h0*/
		uint8_t DEBUG_BUS_OUT_15_0_b1                    : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_DATA_HI_t;
__xdata __at( 0xc150 ) volatile GLOB_BIST_DATA_HI_t GLOB_BIST_DATA_HI;
#define reg_BIST_TXDATA_31_16_b0  GLOB_BIST_DATA_HI.BF.BIST_TXDATA_31_16_b0
#define reg_BIST_TXDATA_31_16_b1  GLOB_BIST_DATA_HI.BF.BIST_TXDATA_31_16_b1
#define reg_DEBUG_BUS_OUT_15_0_b0  GLOB_BIST_DATA_HI.BF.DEBUG_BUS_OUT_15_0_b0
#define reg_DEBUG_BUS_OUT_15_0_b1  GLOB_BIST_DATA_HI.BF.DEBUG_BUS_OUT_15_0_b1
#define reg_BIST_TXDATA_31_16  GLOB_BIST_DATA_HI.WT.W0
#define reg_DEBUG_BUS_OUT_15_0  GLOB_BIST_DATA_HI.WT.W1

// 0x0058	GLOB_PIPE_REVISION		PIPE Revision ID
typedef union {
	struct {
		uint8_t PIPE_REVISION_7_0                        : 8;	/*  [7:0]       r 8'h20*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w 24'h0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w 24'h0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w 24'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_PIPE_REVISION_t;
__xdata __at( 0xc160 ) volatile GLOB_PIPE_REVISION_t GLOB_PIPE_REVISION;
#define reg_PIPE_REVISION_7_0  GLOB_PIPE_REVISION.BF.PIPE_REVISION_7_0

#endif
