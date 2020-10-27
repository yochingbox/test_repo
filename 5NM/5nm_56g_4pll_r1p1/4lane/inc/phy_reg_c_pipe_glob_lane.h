#ifndef PHY_REG_C_PIPE_GLOB_LANE_H
#define PHY_REG_C_PIPE_GLOB_LANE_H



// 0x0000	GLOB_RST_CLK_CTRL		Reset and Clock Control
typedef union {
	struct {
		uint8_t SUB_REVISION_LANE_7_0                    : 8;	/*  [7:0]       r 8'h00*/
		uint8_t MAIN_REVISION_LANE_7_0                   : 8;	/* [15:8]       r 8'h10*/
		uint8_t PIPE_SFT_RESET_LANE                      : 1;	/*     16     r/w   1*/
		uint8_t REG_RESET_LANE                           : 1;	/*     17     r/w   0*/
		uint8_t MODE_MIXED_DW_DF_LANE                    : 1;	/*     18     r/w   0*/
		uint8_t MODE_PIPE_WIDTH_32_LANE                  : 1;	/*     19     r/w   1*/
		uint8_t MODE_REFDIV_LANE_1_0                     : 2;	/*[21:20]     r/w 2'h2*/
		uint8_t MODE_CORE_CLK_CTRL_LANE                  : 1;	/*     22     r/w   0*/
		uint8_t MODE_MULTICAST_LANE                      : 1;	/*     23     r/w   0*/
		uint8_t PHY_RESET_LANE                           : 1;	/*     24     r/w   0*/
		uint8_t MODE_CORE_CLK_FREQ_SEL_LANE              : 1;	/*     25     r/w   0*/
		uint8_t MODE_P3_OSC_PCLK_EN_LANE                 : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t PIPE_CFG_MODE_RD_LANE                    : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_RST_CLK_CTRL_t;
__xdata __at( 0x5400 ) volatile GLOB_RST_CLK_CTRL_t GLOB_RST_CLK_CTRL;
#define reg_SUB_REVISION_LANE_7_0  GLOB_RST_CLK_CTRL.BF.SUB_REVISION_LANE_7_0
#define reg_MAIN_REVISION_LANE_7_0  GLOB_RST_CLK_CTRL.BF.MAIN_REVISION_LANE_7_0
#define reg_PIPE_SFT_RESET_LANE  GLOB_RST_CLK_CTRL.BF.PIPE_SFT_RESET_LANE
#define reg_REG_RESET_LANE  GLOB_RST_CLK_CTRL.BF.REG_RESET_LANE
#define reg_MODE_MIXED_DW_DF_LANE  GLOB_RST_CLK_CTRL.BF.MODE_MIXED_DW_DF_LANE
#define reg_MODE_PIPE_WIDTH_32_LANE  GLOB_RST_CLK_CTRL.BF.MODE_PIPE_WIDTH_32_LANE
#define reg_MODE_REFDIV_LANE_1_0  GLOB_RST_CLK_CTRL.BF.MODE_REFDIV_LANE_1_0
#define reg_MODE_CORE_CLK_CTRL_LANE  GLOB_RST_CLK_CTRL.BF.MODE_CORE_CLK_CTRL_LANE
#define reg_MODE_MULTICAST_LANE  GLOB_RST_CLK_CTRL.BF.MODE_MULTICAST_LANE
#define reg_PHY_RESET_LANE  GLOB_RST_CLK_CTRL.BF.PHY_RESET_LANE
#define reg_MODE_CORE_CLK_FREQ_SEL_LANE  GLOB_RST_CLK_CTRL.BF.MODE_CORE_CLK_FREQ_SEL_LANE
#define reg_MODE_P3_OSC_PCLK_EN_LANE  GLOB_RST_CLK_CTRL.BF.MODE_P3_OSC_PCLK_EN_LANE
#define reg_PIPE_CFG_MODE_RD_LANE  GLOB_RST_CLK_CTRL.BF.PIPE_CFG_MODE_RD_LANE

// 0x0004	GLOB_CLK_SRC_LO		Clock Source Low
typedef union {
	struct {
		uint8_t MODE_BIST_LANE                           : 1;	/*      0     r/w   0*/
		uint8_t MODE_PM_OVERRIDE_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t MODE_MARGIN_OVERRIDE_LANE                : 1;	/*      2     r/w   0*/
		uint8_t DBG_TESTBUS_SEL_LANE_3_0                 : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t DBG_TESTBUS_SEL_LANE_4                   : 1;	/*      7     r/w   0*/
		uint8_t DBG_TESTBUS_SEL_LANE_5                   : 1;	/*      8     r/w   0*/
		uint8_t DBG_TESTBUS_SEL_LANE_6                   : 1;	/*      9     r/w   0*/
		uint8_t MODE_LB_SHALLOW_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t MODE_LB_DEEP_LANE                        : 1;	/*     11     r/w   0*/
		uint8_t MODE_LB_SERDES_LANE                      : 1;	/*     12     r/w   0*/
		uint8_t MODE_RST_OVERRIDE_LANE                   : 1;	/*     13     r/w   0*/
		uint8_t MODE_STATE_OVERRIDE_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t MODE_CLK_SRC_LANE_3_0                    : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t BUNDLE_SAMPLE_CTRL_LANE                  : 1;	/*     20     r/w   1*/
		uint8_t PLL_READY_DLY_LANE_2_0                   : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t BUNDLE_PLL_RDY_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t CFG_USE_ALIGN_CLK_LANE                   : 1;	/*     25     r/w   0*/
		uint8_t MODE_P2_OFF_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t CFG_FORCE_OCLK_EN_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t CFG_SLOW_LANE_ALIGN_LANE                 : 1;	/*     28     r/w   0*/
		uint8_t CFG_USE_LANE_ALIGN_RDY_LANE              : 1;	/*     29     r/w   0*/
		uint8_t CFG_CLK_SRC_MASK_LANE                    : 1;	/*     30     r/w   1*/
		uint8_t CFG_USE_ASYNC_CLKREQN_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_CLK_SRC_LO_t;
__xdata __at( 0x5404 ) volatile GLOB_CLK_SRC_LO_t GLOB_CLK_SRC_LO;
#define reg_MODE_BIST_LANE  GLOB_CLK_SRC_LO.BF.MODE_BIST_LANE
#define reg_MODE_PM_OVERRIDE_LANE  GLOB_CLK_SRC_LO.BF.MODE_PM_OVERRIDE_LANE
#define reg_MODE_MARGIN_OVERRIDE_LANE  GLOB_CLK_SRC_LO.BF.MODE_MARGIN_OVERRIDE_LANE
#define reg_DBG_TESTBUS_SEL_LANE_3_0  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_LANE_3_0
#define reg_DBG_TESTBUS_SEL_LANE_4  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_LANE_4
#define reg_DBG_TESTBUS_SEL_LANE_5  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_LANE_5
#define reg_DBG_TESTBUS_SEL_LANE_6  GLOB_CLK_SRC_LO.BF.DBG_TESTBUS_SEL_LANE_6
#define reg_MODE_LB_SHALLOW_LANE  GLOB_CLK_SRC_LO.BF.MODE_LB_SHALLOW_LANE
#define reg_MODE_LB_DEEP_LANE  GLOB_CLK_SRC_LO.BF.MODE_LB_DEEP_LANE
#define reg_MODE_LB_SERDES_LANE  GLOB_CLK_SRC_LO.BF.MODE_LB_SERDES_LANE
#define reg_MODE_RST_OVERRIDE_LANE  GLOB_CLK_SRC_LO.BF.MODE_RST_OVERRIDE_LANE
#define reg_MODE_STATE_OVERRIDE_LANE  GLOB_CLK_SRC_LO.BF.MODE_STATE_OVERRIDE_LANE
#define reg_MODE_CLK_SRC_LANE_3_0  GLOB_CLK_SRC_LO.BF.MODE_CLK_SRC_LANE_3_0
#define reg_BUNDLE_SAMPLE_CTRL_LANE  GLOB_CLK_SRC_LO.BF.BUNDLE_SAMPLE_CTRL_LANE
#define reg_PLL_READY_DLY_LANE_2_0  GLOB_CLK_SRC_LO.BF.PLL_READY_DLY_LANE_2_0
#define reg_BUNDLE_PLL_RDY_LANE  GLOB_CLK_SRC_LO.BF.BUNDLE_PLL_RDY_LANE
#define reg_CFG_USE_ALIGN_CLK_LANE  GLOB_CLK_SRC_LO.BF.CFG_USE_ALIGN_CLK_LANE
#define reg_MODE_P2_OFF_LANE  GLOB_CLK_SRC_LO.BF.MODE_P2_OFF_LANE
#define reg_CFG_FORCE_OCLK_EN_LANE  GLOB_CLK_SRC_LO.BF.CFG_FORCE_OCLK_EN_LANE
#define reg_CFG_SLOW_LANE_ALIGN_LANE  GLOB_CLK_SRC_LO.BF.CFG_SLOW_LANE_ALIGN_LANE
#define reg_CFG_USE_LANE_ALIGN_RDY_LANE  GLOB_CLK_SRC_LO.BF.CFG_USE_LANE_ALIGN_RDY_LANE
#define reg_CFG_CLK_SRC_MASK_LANE  GLOB_CLK_SRC_LO.BF.CFG_CLK_SRC_MASK_LANE
#define reg_CFG_USE_ASYNC_CLKREQN_LANE  GLOB_CLK_SRC_LO.BF.CFG_USE_ASYNC_CLKREQN_LANE

// 0x0008	GLOB_CLK_SRC_HI		Clock Source High
typedef union {
	struct {
		uint8_t LANE_START_LANE                          : 1;	/*      0     r/w   1*/
		uint8_t LANE_BREAK_LANE                          : 1;	/*      1     r/w   1*/
		uint8_t LANE_MASTER_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t BIFURCATION_SEL_LANE_1_0                 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t BUNDLE_PERIOD_SCALE_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t MODE_PIPE4_IF_LANE                       : 1;	/*      7     r/w   1*/
		uint8_t CFG_LANE_TURN_OFF_DIS_LANE               : 1;	/*      8     r/w   0*/
		uint8_t CFG_OSC_WIN_LENGTH_LANE_1_0              : 2;	/* [10:9]     r/w   0*/
		uint8_t CFG_REFCLK_VALID_POL_LANE                : 1;	/*     11     r/w   0*/
		uint8_t BUNDLE_PERIOD_SEL_LANE                   : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t CFG_RXTERM_ENABLE_LANE                   : 1;	/*     14     r/w   0*/
		uint8_t CFG_SEL_20_BITS_LANE                     : 1;	/*     15     r/w   0*/
		uint8_t PULSE_LENGTH_LANE_4_0                    : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CFG_UPDATE_LANE                          : 1;	/*     24     r/w   0*/
		uint8_t DPHY_ANA_LANE_ALIGN_OFF_LANE             : 1;	/*     25       r   0*/
		uint8_t DPHY_ANA_MASTER_LANE_EN_LANE             : 1;	/*     26       r   0*/
		uint8_t DPHY_ANA_STRAP_ENABLE_LANE               : 1;	/*     27       r   0*/
		uint8_t PMO_POWER_VALID_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t CORE_RST_ACK_LANE                        : 1;	/*     30       r   0*/
		uint8_t PULSE_DONE_LANE                          : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_CLK_SRC_HI_t;
__xdata __at( 0x5408 ) volatile GLOB_CLK_SRC_HI_t GLOB_CLK_SRC_HI;
#define reg_LANE_START_LANE  GLOB_CLK_SRC_HI.BF.LANE_START_LANE
#define reg_LANE_BREAK_LANE  GLOB_CLK_SRC_HI.BF.LANE_BREAK_LANE
#define reg_LANE_MASTER_LANE  GLOB_CLK_SRC_HI.BF.LANE_MASTER_LANE
#define reg_BIFURCATION_SEL_LANE_1_0  GLOB_CLK_SRC_HI.BF.BIFURCATION_SEL_LANE_1_0
#define reg_BUNDLE_PERIOD_SCALE_LANE_1_0  GLOB_CLK_SRC_HI.BF.BUNDLE_PERIOD_SCALE_LANE_1_0
#define reg_MODE_PIPE4_IF_LANE  GLOB_CLK_SRC_HI.BF.MODE_PIPE4_IF_LANE
#define reg_CFG_LANE_TURN_OFF_DIS_LANE  GLOB_CLK_SRC_HI.BF.CFG_LANE_TURN_OFF_DIS_LANE
#define reg_CFG_OSC_WIN_LENGTH_LANE_1_0  GLOB_CLK_SRC_HI.BF.CFG_OSC_WIN_LENGTH_LANE_1_0
#define reg_CFG_REFCLK_VALID_POL_LANE  GLOB_CLK_SRC_HI.BF.CFG_REFCLK_VALID_POL_LANE
#define reg_BUNDLE_PERIOD_SEL_LANE  GLOB_CLK_SRC_HI.BF.BUNDLE_PERIOD_SEL_LANE
#define reg_CFG_RXTERM_ENABLE_LANE  GLOB_CLK_SRC_HI.BF.CFG_RXTERM_ENABLE_LANE
#define reg_CFG_SEL_20_BITS_LANE  GLOB_CLK_SRC_HI.BF.CFG_SEL_20_BITS_LANE
#define reg_PULSE_LENGTH_LANE_4_0  GLOB_CLK_SRC_HI.BF.PULSE_LENGTH_LANE_4_0
#define reg_CFG_UPDATE_LANE  GLOB_CLK_SRC_HI.BF.CFG_UPDATE_LANE
#define reg_DPHY_ANA_LANE_ALIGN_OFF_LANE  GLOB_CLK_SRC_HI.BF.DPHY_ANA_LANE_ALIGN_OFF_LANE
#define reg_DPHY_ANA_MASTER_LANE_EN_LANE  GLOB_CLK_SRC_HI.BF.DPHY_ANA_MASTER_LANE_EN_LANE
#define reg_DPHY_ANA_STRAP_ENABLE_LANE  GLOB_CLK_SRC_HI.BF.DPHY_ANA_STRAP_ENABLE_LANE
#define reg_PMO_POWER_VALID_LANE  GLOB_CLK_SRC_HI.BF.PMO_POWER_VALID_LANE
#define reg_CORE_RST_ACK_LANE  GLOB_CLK_SRC_HI.BF.CORE_RST_ACK_LANE
#define reg_PULSE_DONE_LANE  GLOB_CLK_SRC_HI.BF.PULSE_DONE_LANE

// 0x000c	GLOB_MISC_CTRL		Miscellaneous Control
typedef union {
	struct {
		uint8_t MODE_P1_CLK_REQ_N_LANE                   : 1;	/*      0     r/w   1*/
		uint8_t MODE_P2_PHYSTATUS_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t MODE_PCLK_CTRL_LANE                      : 1;	/*      2     r/w   1*/
		uint8_t SQ_DETECT_SRC_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t SQ_DETECT_OVERRIDE_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t CFG_RX_HIZ_SRC_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t MODE_P1_SNOOZ_LANE                       : 1;	/*      6     r/w   1*/
		uint8_t MODE_P1_OFF_LANE                         : 1;	/*      7     r/w   1*/
		uint8_t OSC_COUNT_SCALE_LANE_2_0                 : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RCB_RXEN_SRC_LANE                        : 1;	/*     11     r/w   0*/
		uint8_t CFG_FREE_OSC_SEL_LANE                    : 1;	/*     12     r/w   0*/
		uint8_t MODE_REFCLK_DIS_LANE                     : 1;	/*     13     r/w   1*/
		uint8_t CFG_REFCLK_DET_TYPE_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t CFG_CLK_ACK_TIMER_EN_LANE                : 1;	/*     15     r/w   0*/
		uint8_t CLKREQ_N_SRC_LANE                        : 1;	/*     16     r/w   0*/
		uint8_t CLKREQ_N_OVERRIDE_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t REFCLK_RESTORE_DLY_LANE_5_0              : 6;	/*[23:18]     r/w 6'h0a*/
		uint8_t REFCLK_SHUTOFF_DLY_LANE_1_0              : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t REFCLK_DISABLE_DLY_LANE_3_0              : 4;	/*[29:26]     r/w 4'h5*/
		uint8_t REFCLK_DISABLE_DLY_LANE_5_4              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_MISC_CTRL_t;
__xdata __at( 0x540c ) volatile GLOB_MISC_CTRL_t GLOB_MISC_CTRL;
#define reg_MODE_P1_CLK_REQ_N_LANE  GLOB_MISC_CTRL.BF.MODE_P1_CLK_REQ_N_LANE
#define reg_MODE_P2_PHYSTATUS_LANE  GLOB_MISC_CTRL.BF.MODE_P2_PHYSTATUS_LANE
#define reg_MODE_PCLK_CTRL_LANE  GLOB_MISC_CTRL.BF.MODE_PCLK_CTRL_LANE
#define reg_SQ_DETECT_SRC_LANE  GLOB_MISC_CTRL.BF.SQ_DETECT_SRC_LANE
#define reg_SQ_DETECT_OVERRIDE_LANE  GLOB_MISC_CTRL.BF.SQ_DETECT_OVERRIDE_LANE
#define reg_CFG_RX_HIZ_SRC_LANE  GLOB_MISC_CTRL.BF.CFG_RX_HIZ_SRC_LANE
#define reg_MODE_P1_SNOOZ_LANE  GLOB_MISC_CTRL.BF.MODE_P1_SNOOZ_LANE
#define reg_MODE_P1_OFF_LANE  GLOB_MISC_CTRL.BF.MODE_P1_OFF_LANE
#define reg_OSC_COUNT_SCALE_LANE_2_0  GLOB_MISC_CTRL.BF.OSC_COUNT_SCALE_LANE_2_0
#define reg_RCB_RXEN_SRC_LANE  GLOB_MISC_CTRL.BF.RCB_RXEN_SRC_LANE
#define reg_CFG_FREE_OSC_SEL_LANE  GLOB_MISC_CTRL.BF.CFG_FREE_OSC_SEL_LANE
#define reg_MODE_REFCLK_DIS_LANE  GLOB_MISC_CTRL.BF.MODE_REFCLK_DIS_LANE
#define reg_CFG_REFCLK_DET_TYPE_LANE  GLOB_MISC_CTRL.BF.CFG_REFCLK_DET_TYPE_LANE
#define reg_CFG_CLK_ACK_TIMER_EN_LANE  GLOB_MISC_CTRL.BF.CFG_CLK_ACK_TIMER_EN_LANE
#define reg_CLKREQ_N_SRC_LANE  GLOB_MISC_CTRL.BF.CLKREQ_N_SRC_LANE
#define reg_CLKREQ_N_OVERRIDE_LANE  GLOB_MISC_CTRL.BF.CLKREQ_N_OVERRIDE_LANE
#define reg_REFCLK_RESTORE_DLY_LANE_5_0  GLOB_MISC_CTRL.BF.REFCLK_RESTORE_DLY_LANE_5_0
#define reg_REFCLK_SHUTOFF_DLY_LANE_1_0  GLOB_MISC_CTRL.BF.REFCLK_SHUTOFF_DLY_LANE_1_0
#define reg_REFCLK_DISABLE_DLY_LANE_3_0  GLOB_MISC_CTRL.BF.REFCLK_DISABLE_DLY_LANE_3_0
#define reg_REFCLK_DISABLE_DLY_LANE_5_4  GLOB_MISC_CTRL.BF.REFCLK_DISABLE_DLY_LANE_5_4

// 0x0010	GLOB_DP_SAL_CFG		Datapath and Symbol Alignment Configuration
typedef union {
	struct {
		uint8_t CFG_IGNORE_PHY_RDY_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t CFG_GEN1_TXELECIDLE_DLY_LANE_1_0         : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t CFG_PASS_RXINFO_LANE                     : 1;	/*      3     r/w   0*/
		uint8_t CFG_NO_DISPERROR_LANE                    : 1;	/*      4     r/w   0*/
		uint8_t CFG_DISABLE_EDB_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t CFG_MASK_ERRORS_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t CFG_DISABLE_SKP_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t CFG_ALWAYS_ALIGN_LANE                    : 1;	/*      8     r/w   0*/
		uint8_t CFG_SAL_FREEZE_LANE                      : 1;	/*      9     r/w   0*/
		uint8_t CFG_GEN2_TXELECIDLE_DLY_LANE_1_0         : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t CFG_TXELECIDLE_ASSERT_LANE               : 1;	/*     12     r/w   1*/
		uint8_t CFG_SAL_IGNORE_SQ_LANE                   : 1;	/*     13     r/w   0*/
		uint8_t PCIE_LB_LOST_SYNC_LANE                   : 1;	/*     14     r/w   0*/
		uint8_t DISPERROR_REPORT_AS_10B_ERROR_LANE       : 1;	/*     15     r/w   0*/
		uint8_t CFG_SAL_LANE_4_0                         : 5;	/*[20:16]     r/w 5'h00*/
		uint8_t SPARE_REG_1C9_5_LANE                     : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1C9_6_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1C9_7_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t CFG_SAL_LANE_24_20                       : 5;	/*[28:24]     r/w 5'h01*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG_t;
__xdata __at( 0x5410 ) volatile GLOB_DP_SAL_CFG_t GLOB_DP_SAL_CFG;
#define reg_CFG_IGNORE_PHY_RDY_LANE  GLOB_DP_SAL_CFG.BF.CFG_IGNORE_PHY_RDY_LANE
#define reg_CFG_GEN1_TXELECIDLE_DLY_LANE_1_0  GLOB_DP_SAL_CFG.BF.CFG_GEN1_TXELECIDLE_DLY_LANE_1_0
#define reg_CFG_PASS_RXINFO_LANE  GLOB_DP_SAL_CFG.BF.CFG_PASS_RXINFO_LANE
#define reg_CFG_NO_DISPERROR_LANE  GLOB_DP_SAL_CFG.BF.CFG_NO_DISPERROR_LANE
#define reg_CFG_DISABLE_EDB_LANE  GLOB_DP_SAL_CFG.BF.CFG_DISABLE_EDB_LANE
#define reg_CFG_MASK_ERRORS_LANE  GLOB_DP_SAL_CFG.BF.CFG_MASK_ERRORS_LANE
#define reg_CFG_DISABLE_SKP_LANE  GLOB_DP_SAL_CFG.BF.CFG_DISABLE_SKP_LANE
#define reg_CFG_ALWAYS_ALIGN_LANE  GLOB_DP_SAL_CFG.BF.CFG_ALWAYS_ALIGN_LANE
#define reg_CFG_SAL_FREEZE_LANE  GLOB_DP_SAL_CFG.BF.CFG_SAL_FREEZE_LANE
#define reg_CFG_GEN2_TXELECIDLE_DLY_LANE_1_0  GLOB_DP_SAL_CFG.BF.CFG_GEN2_TXELECIDLE_DLY_LANE_1_0
#define reg_CFG_TXELECIDLE_ASSERT_LANE  GLOB_DP_SAL_CFG.BF.CFG_TXELECIDLE_ASSERT_LANE
#define reg_CFG_SAL_IGNORE_SQ_LANE  GLOB_DP_SAL_CFG.BF.CFG_SAL_IGNORE_SQ_LANE
#define reg_PCIE_LB_LOST_SYNC_LANE  GLOB_DP_SAL_CFG.BF.PCIE_LB_LOST_SYNC_LANE
#define reg_DISPERROR_REPORT_AS_10B_ERROR_LANE  GLOB_DP_SAL_CFG.BF.DISPERROR_REPORT_AS_10B_ERROR_LANE
#define reg_CFG_SAL_LANE_4_0  GLOB_DP_SAL_CFG.BF.CFG_SAL_LANE_4_0
#define reg_SPARE_REG_1C9_5_LANE  GLOB_DP_SAL_CFG.BF.SPARE_REG_1C9_5_LANE
#define reg_SPARE_REG_1C9_6_LANE  GLOB_DP_SAL_CFG.BF.SPARE_REG_1C9_6_LANE
#define reg_SPARE_REG_1C9_7_LANE  GLOB_DP_SAL_CFG.BF.SPARE_REG_1C9_7_LANE
#define reg_CFG_SAL_LANE_24_20  GLOB_DP_SAL_CFG.BF.CFG_SAL_LANE_24_20

// 0x0014	GLOB_DP_SAL_CFG1		Symbol Alignment Aligned COM Weight
typedef union {
	struct {
		uint8_t CFG_SAL_LANE_9_5                         : 5;	/*  [4:0]     r/w 5'h18*/
		uint8_t SPARE_REG_1CA_5_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1CA_6_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1CA_7_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t CFG_SAL_LANE_29_25                       : 5;	/* [12:8]     r/w 5'h08*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_SAL_LANE_14_10                       : 5;	/*[20:16]     r/w 5'h1f*/
		uint8_t SPARE_REG_1CB_5_LANE                     : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1CB_6_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1CB_7_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t CFG_SAL_LANE_34_30                       : 5;	/*[28:24]     r/w 5'h10*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG1_t;
__xdata __at( 0x5414 ) volatile GLOB_DP_SAL_CFG1_t GLOB_DP_SAL_CFG1;
#define reg_CFG_SAL_LANE_9_5  GLOB_DP_SAL_CFG1.BF.CFG_SAL_LANE_9_5
#define reg_SPARE_REG_1CA_5_LANE  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CA_5_LANE
#define reg_SPARE_REG_1CA_6_LANE  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CA_6_LANE
#define reg_SPARE_REG_1CA_7_LANE  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CA_7_LANE
#define reg_CFG_SAL_LANE_29_25  GLOB_DP_SAL_CFG1.BF.CFG_SAL_LANE_29_25
#define reg_CFG_SAL_LANE_14_10  GLOB_DP_SAL_CFG1.BF.CFG_SAL_LANE_14_10
#define reg_SPARE_REG_1CB_5_LANE  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CB_5_LANE
#define reg_SPARE_REG_1CB_6_LANE  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CB_6_LANE
#define reg_SPARE_REG_1CB_7_LANE  GLOB_DP_SAL_CFG1.BF.SPARE_REG_1CB_7_LANE
#define reg_CFG_SAL_LANE_34_30  GLOB_DP_SAL_CFG1.BF.CFG_SAL_LANE_34_30

// 0x0018	GLOB_DP_SAL_CFG3		Symbol Alignment Misaligned COM Weight
typedef union {
	struct {
		uint8_t CFG_SAL_LANE_19_15                       : 5;	/*  [4:0]     r/w 5'h1f*/
		uint8_t SPARE_REG_1CC_5_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1CC_6_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1CC_7_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t CFG_SAL_LANE_39_35                       : 5;	/* [12:8]     r/w 5'h1f*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_SAL_LANE_42_40                       : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t SPARE_REG_1CD_3_LANE                     : 1;	/*     19     r/w   0*/
		uint8_t SPARE_REG_1CD_4_LANE                     : 1;	/*     20     r/w   0*/
		uint8_t SPARE_REG_1CD_5_LANE                     : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1CD_6_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1CD_7_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t CFG_SAL_LANE_45_43                       : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t SPARE_REG_1CD_B_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_SAL_CFG3_t;
__xdata __at( 0x5418 ) volatile GLOB_DP_SAL_CFG3_t GLOB_DP_SAL_CFG3;
#define reg_CFG_SAL_LANE_19_15  GLOB_DP_SAL_CFG3.BF.CFG_SAL_LANE_19_15
#define reg_SPARE_REG_1CC_5_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CC_5_LANE
#define reg_SPARE_REG_1CC_6_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CC_6_LANE
#define reg_SPARE_REG_1CC_7_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CC_7_LANE
#define reg_CFG_SAL_LANE_39_35  GLOB_DP_SAL_CFG3.BF.CFG_SAL_LANE_39_35
#define reg_CFG_SAL_LANE_42_40  GLOB_DP_SAL_CFG3.BF.CFG_SAL_LANE_42_40
#define reg_SPARE_REG_1CD_3_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_3_LANE
#define reg_SPARE_REG_1CD_4_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_4_LANE
#define reg_SPARE_REG_1CD_5_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_5_LANE
#define reg_SPARE_REG_1CD_6_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_6_LANE
#define reg_SPARE_REG_1CD_7_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_7_LANE
#define reg_CFG_SAL_LANE_45_43  GLOB_DP_SAL_CFG3.BF.CFG_SAL_LANE_45_43
#define reg_SPARE_REG_1CD_B_LANE  GLOB_DP_SAL_CFG3.BF.SPARE_REG_1CD_B_LANE

// 0x001c	GLOB_PROTOCOL_CFG0		Protocol Configuration 0
typedef union {
	struct {
		uint8_t CFG_SAL_COM_LANE_9_0_b0                  : 8;	/*  [9:0]     r/w 10'hfa*/
		uint8_t CFG_SAL_COM_LANE_9_0_b1                  : 2;	/*  [9:0]     r/w 10'hfa*/
		uint8_t G3_ALIGN_COUNT_MAX_LANE_5_0              : 6;	/*[15:10]     r/w 6'h3f*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t CFG_PIPE_MSG_BUS_PROTOCOL_SEL_LANE       : 1;	/*     17     r/w   1*/
		uint8_t CFG_BUS_WIDTH_DISABLE_LANE               : 1;	/*     18     r/w   0*/
		uint8_t CFG_SPEED_CHG_HANDSHK_LANE               : 1;	/*     19     r/w   1*/
		uint8_t CFG_PHYSTATUS_HANDSHK_LANE               : 1;	/*     20     r/w   1*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t CFG_P2_STAY_TIMER_EN_LANE                : 1;	/*     24     r/w   1*/
		uint8_t CFG_LANE_ENABLE_CTRL_LANE                : 1;	/*     25     r/w   1*/
		uint8_t RESERVED_26                              : 4;	/*[29:26]     r/w 4'h0*/
		uint8_t CLKREQ_BUNDLE_CTRL_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t CFG_STRAP_DISABLE_LANE                   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_PROTOCOL_CFG0_t;
__xdata __at( 0x541c ) volatile GLOB_PROTOCOL_CFG0_t GLOB_PROTOCOL_CFG0;
#define reg_CFG_SAL_COM_LANE_9_0_b0  GLOB_PROTOCOL_CFG0.BF.CFG_SAL_COM_LANE_9_0_b0
#define reg_CFG_SAL_COM_LANE_9_0_b1  GLOB_PROTOCOL_CFG0.BF.CFG_SAL_COM_LANE_9_0_b1
#define reg_G3_ALIGN_COUNT_MAX_LANE_5_0  GLOB_PROTOCOL_CFG0.BF.G3_ALIGN_COUNT_MAX_LANE_5_0
#define reg_CFG_PIPE_MSG_BUS_PROTOCOL_SEL_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_PIPE_MSG_BUS_PROTOCOL_SEL_LANE
#define reg_CFG_BUS_WIDTH_DISABLE_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_BUS_WIDTH_DISABLE_LANE
#define reg_CFG_SPEED_CHG_HANDSHK_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_SPEED_CHG_HANDSHK_LANE
#define reg_CFG_PHYSTATUS_HANDSHK_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_PHYSTATUS_HANDSHK_LANE
#define reg_CFG_P2_STAY_TIMER_EN_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_P2_STAY_TIMER_EN_LANE
#define reg_CFG_LANE_ENABLE_CTRL_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_LANE_ENABLE_CTRL_LANE
#define reg_CLKREQ_BUNDLE_CTRL_LANE  GLOB_PROTOCOL_CFG0.BF.CLKREQ_BUNDLE_CTRL_LANE
#define reg_CFG_STRAP_DISABLE_LANE  GLOB_PROTOCOL_CFG0.BF.CFG_STRAP_DISABLE_LANE

// 0x0020	GLOB_PM_CFG0		Power Management Timing Parameter 1
typedef union {
	struct {
		uint8_t CFG_PM_RXDLOZ_WAIT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h1e*/
		uint8_t CFG_PM_RXDEN_WAIT_LANE_3_0               : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t CFG_PM_OSCCLK_WAIT_LANE_3_0              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t CFG_PM_RXDET_WAIT_LANE_7_0               : 8;	/*[23:16]     r/w 8'h14*/
		uint8_t CFG_PM_SHORT_WAIT_LANE_7_0               : 8;	/*[31:24]     r/w 8'h30*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_PM_CFG0_t;
__xdata __at( 0x5420 ) volatile GLOB_PM_CFG0_t GLOB_PM_CFG0;
#define reg_CFG_PM_RXDLOZ_WAIT_LANE_7_0  GLOB_PM_CFG0.BF.CFG_PM_RXDLOZ_WAIT_LANE_7_0
#define reg_CFG_PM_RXDEN_WAIT_LANE_3_0  GLOB_PM_CFG0.BF.CFG_PM_RXDEN_WAIT_LANE_3_0
#define reg_CFG_PM_OSCCLK_WAIT_LANE_3_0  GLOB_PM_CFG0.BF.CFG_PM_OSCCLK_WAIT_LANE_3_0
#define reg_CFG_PM_RXDET_WAIT_LANE_7_0  GLOB_PM_CFG0.BF.CFG_PM_RXDET_WAIT_LANE_7_0
#define reg_CFG_PM_SHORT_WAIT_LANE_7_0  GLOB_PM_CFG0.BF.CFG_PM_SHORT_WAIT_LANE_7_0

// 0x0024	GLOB_COUNTER_CTRL		Counter Lane and Type
typedef union {
	struct {
		uint8_t CFG_STICKY_REG_RST_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 5;	/*  [5:1]     r/w 5'h0*/
		uint8_t COUNTER_SAMPLE_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t COUNTER_SAMPLE_CLEAR_LANE                : 1;	/*      7     r/w   0*/
		uint8_t COUNTER_TYPE_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t PMO_PU_SQ_LANE                           : 1;	/*     14     r/w   0*/
		uint8_t PMO_REFCLK_DIS_LANE                      : 1;	/*     15     r/w   0*/
		uint8_t COUNTER_SAMPLED_LANE_15_0_b0             : 8;	/*[31:16]       r   0*/
		uint8_t COUNTER_SAMPLED_LANE_15_0_b1             : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_COUNTER_CTRL_t;
__xdata __at( 0x5424 ) volatile GLOB_COUNTER_CTRL_t GLOB_COUNTER_CTRL;
#define reg_CFG_STICKY_REG_RST_LANE  GLOB_COUNTER_CTRL.BF.CFG_STICKY_REG_RST_LANE
#define reg_COUNTER_SAMPLE_LANE  GLOB_COUNTER_CTRL.BF.COUNTER_SAMPLE_LANE
#define reg_COUNTER_SAMPLE_CLEAR_LANE  GLOB_COUNTER_CTRL.BF.COUNTER_SAMPLE_CLEAR_LANE
#define reg_COUNTER_TYPE_LANE_5_0  GLOB_COUNTER_CTRL.BF.COUNTER_TYPE_LANE_5_0
#define reg_PMO_PU_SQ_LANE  GLOB_COUNTER_CTRL.BF.PMO_PU_SQ_LANE
#define reg_PMO_REFCLK_DIS_LANE  GLOB_COUNTER_CTRL.BF.PMO_REFCLK_DIS_LANE
#define reg_COUNTER_SAMPLED_LANE_15_0_b0  GLOB_COUNTER_CTRL.BF.COUNTER_SAMPLED_LANE_15_0_b0
#define reg_COUNTER_SAMPLED_LANE_15_0_b1  GLOB_COUNTER_CTRL.BF.COUNTER_SAMPLED_LANE_15_0_b1
#define reg_COUNTER_SAMPLED_LANE_15_0  GLOB_COUNTER_CTRL.WT.W1

// 0x0028	GLOB_COUNTER_HI		Counter High
typedef union {
	struct {
		uint8_t COUNTER_SAMPLED_LANE_31_16_b0            : 8;	/* [15:0]       r   0*/
		uint8_t COUNTER_SAMPLED_LANE_31_16_b1            : 8;	/* [15:0]       r   0*/
		uint8_t PMO_PU_PLL_LANE                          : 1;	/*     16     r/w   0*/
		uint8_t PMO_PU_TX_LANE                           : 1;	/*     17     r/w   0*/
		uint8_t PMO_PU_RX_LANE                           : 1;	/*     18     r/w   0*/
		uint8_t PMO_TX_RATE_SEL_LANE_2_0                 : 3;	/*[21:19]     r/w   0*/
		uint8_t PMO_RX_RATE_SEL_LANE_2_0_b0              : 2;	/*[24:22]     r/w   0*/
		uint8_t PMO_RX_RATE_SEL_LANE_2_0_b1              : 1;	/*[24:22]     r/w   0*/
		uint8_t PMO_RX_INIT_LANE                         : 1;	/*     25     r/w   0*/
		uint8_t PMO_TX_IDLE_LOZ_LANE                     : 1;	/*     26     r/w   0*/
		uint8_t PMO_TX_IDLE_HIZ_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t PMO_TXDETECTRX_EN_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t PMO_PU_IVREF_LANE                        : 1;	/*     29     r/w   0*/
		uint8_t PMO_TX_VCMHOLD_EN_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t PMO_BEACON_TX_EN_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_COUNTER_HI_t;
__xdata __at( 0x5428 ) volatile GLOB_COUNTER_HI_t GLOB_COUNTER_HI;
#define reg_COUNTER_SAMPLED_LANE_31_16_b0  GLOB_COUNTER_HI.BF.COUNTER_SAMPLED_LANE_31_16_b0
#define reg_COUNTER_SAMPLED_LANE_31_16_b1  GLOB_COUNTER_HI.BF.COUNTER_SAMPLED_LANE_31_16_b1
#define reg_PMO_PU_PLL_LANE  GLOB_COUNTER_HI.BF.PMO_PU_PLL_LANE
#define reg_PMO_PU_TX_LANE  GLOB_COUNTER_HI.BF.PMO_PU_TX_LANE
#define reg_PMO_PU_RX_LANE  GLOB_COUNTER_HI.BF.PMO_PU_RX_LANE
#define reg_PMO_TX_RATE_SEL_LANE_2_0  GLOB_COUNTER_HI.BF.PMO_TX_RATE_SEL_LANE_2_0
#define reg_PMO_RX_RATE_SEL_LANE_2_0_b0  GLOB_COUNTER_HI.BF.PMO_RX_RATE_SEL_LANE_2_0_b0
#define reg_PMO_RX_RATE_SEL_LANE_2_0_b1  GLOB_COUNTER_HI.BF.PMO_RX_RATE_SEL_LANE_2_0_b1
#define reg_PMO_RX_INIT_LANE  GLOB_COUNTER_HI.BF.PMO_RX_INIT_LANE
#define reg_PMO_TX_IDLE_LOZ_LANE  GLOB_COUNTER_HI.BF.PMO_TX_IDLE_LOZ_LANE
#define reg_PMO_TX_IDLE_HIZ_LANE  GLOB_COUNTER_HI.BF.PMO_TX_IDLE_HIZ_LANE
#define reg_PMO_TXDETECTRX_EN_LANE  GLOB_COUNTER_HI.BF.PMO_TXDETECTRX_EN_LANE
#define reg_PMO_PU_IVREF_LANE  GLOB_COUNTER_HI.BF.PMO_PU_IVREF_LANE
#define reg_PMO_TX_VCMHOLD_EN_LANE  GLOB_COUNTER_HI.BF.PMO_TX_VCMHOLD_EN_LANE
#define reg_PMO_BEACON_TX_EN_LANE  GLOB_COUNTER_HI.BF.PMO_BEACON_TX_EN_LANE
#define reg_COUNTER_SAMPLED_LANE_31_16  GLOB_COUNTER_HI.WT.W0

// 0x002c	GLOB_PM_DP_CTRL		PM and Datapath Clock Control Override
typedef union {
	struct {
		uint8_t PMO_TXDCLK_PCLK_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t PMO_PCLK_DPCLK_EN_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t PMO_OSCCLK_PCLK_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t PMO_OSCCLK_AUX_CLK_EN_LANE               : 1;	/*      3     r/w   0*/
		uint8_t PMO_DP_RST_N_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t PMO_ASYNC_RST_N_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t PMO_RESET_LANE                           : 1;	/*      6     r/w   0*/
		uint8_t PMO_PIPE_64B_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t PMO_DPCLK_125_LANE                       : 1;	/*      8     r/w   0*/
		uint8_t PMO_CLK_REQ_N_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t PMO_STATE_LANE_5_0                       : 6;	/*[15:10]     r/w   0*/
		uint8_t LOW_FREQ_PERIOD_MIN_LANE_6_0             : 7;	/*[22:16]     r/w 7'h30*/
		uint8_t LOW_FREQ_PERIOD_MAX_LANE_6_0_b0          : 1;	/*[29:23]     r/w 7'h32*/
		uint8_t LOW_FREQ_PERIOD_MAX_LANE_6_0_b1          : 6;	/*[29:23]     r/w 7'h32*/
		uint8_t LOW_FREQ_CNT_SCALE_LANE_1_0              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_PM_DP_CTRL_t;
__xdata __at( 0x542c ) volatile GLOB_PM_DP_CTRL_t GLOB_PM_DP_CTRL;
#define reg_PMO_TXDCLK_PCLK_EN_LANE  GLOB_PM_DP_CTRL.BF.PMO_TXDCLK_PCLK_EN_LANE
#define reg_PMO_PCLK_DPCLK_EN_LANE  GLOB_PM_DP_CTRL.BF.PMO_PCLK_DPCLK_EN_LANE
#define reg_PMO_OSCCLK_PCLK_EN_LANE  GLOB_PM_DP_CTRL.BF.PMO_OSCCLK_PCLK_EN_LANE
#define reg_PMO_OSCCLK_AUX_CLK_EN_LANE  GLOB_PM_DP_CTRL.BF.PMO_OSCCLK_AUX_CLK_EN_LANE
#define reg_PMO_DP_RST_N_LANE  GLOB_PM_DP_CTRL.BF.PMO_DP_RST_N_LANE
#define reg_PMO_ASYNC_RST_N_LANE  GLOB_PM_DP_CTRL.BF.PMO_ASYNC_RST_N_LANE
#define reg_PMO_RESET_LANE  GLOB_PM_DP_CTRL.BF.PMO_RESET_LANE
#define reg_PMO_PIPE_64B_LANE  GLOB_PM_DP_CTRL.BF.PMO_PIPE_64B_LANE
#define reg_PMO_DPCLK_125_LANE  GLOB_PM_DP_CTRL.BF.PMO_DPCLK_125_LANE
#define reg_PMO_CLK_REQ_N_LANE  GLOB_PM_DP_CTRL.BF.PMO_CLK_REQ_N_LANE
#define reg_PMO_STATE_LANE_5_0  GLOB_PM_DP_CTRL.BF.PMO_STATE_LANE_5_0
#define reg_LOW_FREQ_PERIOD_MIN_LANE_6_0  GLOB_PM_DP_CTRL.BF.LOW_FREQ_PERIOD_MIN_LANE_6_0
#define reg_LOW_FREQ_PERIOD_MAX_LANE_6_0_b0  GLOB_PM_DP_CTRL.BF.LOW_FREQ_PERIOD_MAX_LANE_6_0_b0
#define reg_LOW_FREQ_PERIOD_MAX_LANE_6_0_b1  GLOB_PM_DP_CTRL.BF.LOW_FREQ_PERIOD_MAX_LANE_6_0_b1
#define reg_LOW_FREQ_CNT_SCALE_LANE_1_0  GLOB_PM_DP_CTRL.BF.LOW_FREQ_CNT_SCALE_LANE_1_0

// 0x0030	GLOB_DP_BAL_CFG0		Block Alignment Good Block Weight
typedef union {
	struct {
		uint8_t CFG_BAL_WEIGHT_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t SPARE_REG_1D8_6_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1D8_7_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_29_24                : 6;	/* [13:8]     r/w 6'h01*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_11_6                 : 6;	/*[21:16]     r/w 6'h18*/
		uint8_t SPARE_REG_1D9_6_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1D9_7_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_35_30                : 6;	/*[29:24]     r/w 6'h08*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_BAL_CFG0_t;
__xdata __at( 0x5430 ) volatile GLOB_DP_BAL_CFG0_t GLOB_DP_BAL_CFG0;
#define reg_CFG_BAL_WEIGHT_LANE_5_0  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_LANE_5_0
#define reg_SPARE_REG_1D8_6_LANE  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D8_6_LANE
#define reg_SPARE_REG_1D8_7_LANE  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D8_7_LANE
#define reg_CFG_BAL_WEIGHT_LANE_29_24  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_LANE_29_24
#define reg_CFG_BAL_WEIGHT_LANE_11_6  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_LANE_11_6
#define reg_SPARE_REG_1D9_6_LANE  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D9_6_LANE
#define reg_SPARE_REG_1D9_7_LANE  GLOB_DP_BAL_CFG0.BF.SPARE_REG_1D9_7_LANE
#define reg_CFG_BAL_WEIGHT_LANE_35_30  GLOB_DP_BAL_CFG0.BF.CFG_BAL_WEIGHT_LANE_35_30

// 0x0034	GLOB_DP_BAL_CFG2		Block Alignment Bad Block Weight
typedef union {
	struct {
		uint8_t CFG_BAL_WEIGHT_LANE_17_12                : 6;	/*  [5:0]     r/w 6'h1f*/
		uint8_t SPARE_REG_1DA_6_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1DA_7_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_41_36                : 6;	/* [13:8]     r/w 6'h10*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_23_18                : 6;	/*[21:16]     r/w 6'h1f*/
		uint8_t SPARE_REG_1DB_6_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t SPARE_REG_1DB_7_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_47_42                : 6;	/*[29:24]     r/w 6'h30*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_DP_BAL_CFG2_t;
__xdata __at( 0x5434 ) volatile GLOB_DP_BAL_CFG2_t GLOB_DP_BAL_CFG2;
#define reg_CFG_BAL_WEIGHT_LANE_17_12  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_LANE_17_12
#define reg_SPARE_REG_1DA_6_LANE  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DA_6_LANE
#define reg_SPARE_REG_1DA_7_LANE  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DA_7_LANE
#define reg_CFG_BAL_WEIGHT_LANE_41_36  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_LANE_41_36
#define reg_CFG_BAL_WEIGHT_LANE_23_18  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_LANE_23_18
#define reg_SPARE_REG_1DB_6_LANE  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DB_6_LANE
#define reg_SPARE_REG_1DB_7_LANE  GLOB_DP_BAL_CFG2.BF.SPARE_REG_1DB_7_LANE
#define reg_CFG_BAL_WEIGHT_LANE_47_42  GLOB_DP_BAL_CFG2.BF.CFG_BAL_WEIGHT_LANE_47_42

// 0x0038	GLOB_DP_BAL_CFG4		Block Alignment Squelch Detect
typedef union {
	struct {
		uint8_t CFG_BAL_WEIGHT_LANE_50_48                : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t SPARE_REG_1DC_3_LANE                     : 1;	/*      3     r/w   0*/
		uint8_t SPARE_REG_1DC_4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t SPARE_REG_1DC_5_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t SPARE_REG_1DC_6_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t SPARE_REG_1DC_7_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t CFG_BAL_WEIGHT_LANE_53_51                : 3;	/* [10:8]     r/w 3'h2*/
		uint8_t SPARE_REG_1DC_B_LANE                     : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t CFG_BAL_IGNORE_HDR_LANE                  : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_DP_BAL_CFG4_t;
__xdata __at( 0x5438 ) volatile GLOB_DP_BAL_CFG4_t GLOB_DP_BAL_CFG4;
#define reg_CFG_BAL_WEIGHT_LANE_50_48  GLOB_DP_BAL_CFG4.BF.CFG_BAL_WEIGHT_LANE_50_48
#define reg_SPARE_REG_1DC_3_LANE  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_3_LANE
#define reg_SPARE_REG_1DC_4_LANE  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_4_LANE
#define reg_SPARE_REG_1DC_5_LANE  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_5_LANE
#define reg_SPARE_REG_1DC_6_LANE  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_6_LANE
#define reg_SPARE_REG_1DC_7_LANE  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_7_LANE
#define reg_CFG_BAL_WEIGHT_LANE_53_51  GLOB_DP_BAL_CFG4.BF.CFG_BAL_WEIGHT_LANE_53_51
#define reg_SPARE_REG_1DC_B_LANE  GLOB_DP_BAL_CFG4.BF.SPARE_REG_1DC_B_LANE
#define reg_CFG_BAL_IGNORE_HDR_LANE  GLOB_DP_BAL_CFG4.BF.CFG_BAL_IGNORE_HDR_LANE

// 0x003c	GLOB_BIST_CTRL		BIST Control Input
typedef union {
	struct {
		uint8_t BIST_POWERDOWN_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t BIST_RATE_LANE_2_0                       : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t BIST_TXDETECTRX_LOOPBACK_LANE            : 1;	/*      5     r/w   0*/
		uint8_t BIST_TXELECIDLE_LANE                     : 1;	/*      6     r/w   1*/
		uint8_t BIST_TXCOMPLIANCE_LANE                   : 1;	/*      7     r/w   0*/
		uint8_t BIST_RXPOLARITY_LANE                     : 1;	/*      8     r/w   0*/
		uint8_t BIST_RXEIDETECT_DIS_LANE                 : 1;	/*      9     r/w   0*/
		uint8_t BIST_TXCMN_MODE_DIS_LANE                 : 1;	/*     10     r/w   0*/
		uint8_t BIST_CLK_REQ_N_LANE                      : 1;	/*     11     r/w   0*/
		uint8_t BIST_TXDATAK_LANE_3_0                    : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t BIST_TX_ALIGN_POS_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t BIST_ELB_THRESHOLD_LANE_3_0_b0           : 2;	/*[25:22]     r/w 4'h0*/
		uint8_t BIST_ELB_THRESHOLD_LANE_3_0_b1           : 2;	/*[25:22]     r/w 4'h0*/
		uint8_t BIST_RXEQTRAINING_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t BIST_UPDATE_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t BIST_START_LANE                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_BIST_CTRL_t;
__xdata __at( 0x543c ) volatile GLOB_BIST_CTRL_t GLOB_BIST_CTRL;
#define reg_BIST_POWERDOWN_LANE_1_0  GLOB_BIST_CTRL.BF.BIST_POWERDOWN_LANE_1_0
#define reg_BIST_RATE_LANE_2_0  GLOB_BIST_CTRL.BF.BIST_RATE_LANE_2_0
#define reg_BIST_TXDETECTRX_LOOPBACK_LANE  GLOB_BIST_CTRL.BF.BIST_TXDETECTRX_LOOPBACK_LANE
#define reg_BIST_TXELECIDLE_LANE  GLOB_BIST_CTRL.BF.BIST_TXELECIDLE_LANE
#define reg_BIST_TXCOMPLIANCE_LANE  GLOB_BIST_CTRL.BF.BIST_TXCOMPLIANCE_LANE
#define reg_BIST_RXPOLARITY_LANE  GLOB_BIST_CTRL.BF.BIST_RXPOLARITY_LANE
#define reg_BIST_RXEIDETECT_DIS_LANE  GLOB_BIST_CTRL.BF.BIST_RXEIDETECT_DIS_LANE
#define reg_BIST_TXCMN_MODE_DIS_LANE  GLOB_BIST_CTRL.BF.BIST_TXCMN_MODE_DIS_LANE
#define reg_BIST_CLK_REQ_N_LANE  GLOB_BIST_CTRL.BF.BIST_CLK_REQ_N_LANE
#define reg_BIST_TXDATAK_LANE_3_0  GLOB_BIST_CTRL.BF.BIST_TXDATAK_LANE_3_0
#define reg_BIST_TX_ALIGN_POS_LANE_5_0  GLOB_BIST_CTRL.BF.BIST_TX_ALIGN_POS_LANE_5_0
#define reg_BIST_ELB_THRESHOLD_LANE_3_0_b0  GLOB_BIST_CTRL.BF.BIST_ELB_THRESHOLD_LANE_3_0_b0
#define reg_BIST_ELB_THRESHOLD_LANE_3_0_b1  GLOB_BIST_CTRL.BF.BIST_ELB_THRESHOLD_LANE_3_0_b1
#define reg_BIST_RXEQTRAINING_LANE  GLOB_BIST_CTRL.BF.BIST_RXEQTRAINING_LANE
#define reg_BIST_UPDATE_LANE  GLOB_BIST_CTRL.BF.BIST_UPDATE_LANE
#define reg_BIST_START_LANE  GLOB_BIST_CTRL.BF.BIST_START_LANE

// 0x0040	GLOB_BIST_LANE_TYPE		BIST Lane and Type
typedef union {
	struct {
		uint8_t BIST_TXDATA_LANE_15_0_b0                 : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t BIST_TXDATA_LANE_15_0_b1                 : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t BIST_SELF_CHECK_LANE                     : 1;	/*     16     r/w   0*/
		uint8_t BIST_TYPE_LANE_1_0                       : 2;	/*[18:17]     r/w 2'h0*/
		uint8_t BIST_CONT_MONITR_LANE                    : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t SPARE_REG_1E3_6_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t BIST_PATTERN_SEL_LANE                    : 1;	/*     23     r/w   0*/
		uint8_t BIST_SKPOS_SEL_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t BIST_SKPOS_NUM_LANE_2_0                  : 3;	/*[27:25]     r/w 3'h0*/
		uint8_t BIST_SKPOS_NUM_LANE_4_3                  : 2;	/*[29:28]     r/w 2'h0*/
		uint8_t BIST_PASS_LANE                           : 1;	/*     30       r   0*/
		uint8_t BIST_DONE_LANE                           : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_LANE_TYPE_t;
__xdata __at( 0x5440 ) volatile GLOB_BIST_LANE_TYPE_t GLOB_BIST_LANE_TYPE;
#define reg_BIST_TXDATA_LANE_15_0_b0  GLOB_BIST_LANE_TYPE.BF.BIST_TXDATA_LANE_15_0_b0
#define reg_BIST_TXDATA_LANE_15_0_b1  GLOB_BIST_LANE_TYPE.BF.BIST_TXDATA_LANE_15_0_b1
#define reg_BIST_SELF_CHECK_LANE  GLOB_BIST_LANE_TYPE.BF.BIST_SELF_CHECK_LANE
#define reg_BIST_TYPE_LANE_1_0  GLOB_BIST_LANE_TYPE.BF.BIST_TYPE_LANE_1_0
#define reg_BIST_CONT_MONITR_LANE  GLOB_BIST_LANE_TYPE.BF.BIST_CONT_MONITR_LANE
#define reg_SPARE_REG_1E3_6_LANE  GLOB_BIST_LANE_TYPE.BF.SPARE_REG_1E3_6_LANE
#define reg_BIST_PATTERN_SEL_LANE  GLOB_BIST_LANE_TYPE.BF.BIST_PATTERN_SEL_LANE
#define reg_BIST_SKPOS_SEL_LANE  GLOB_BIST_LANE_TYPE.BF.BIST_SKPOS_SEL_LANE
#define reg_BIST_SKPOS_NUM_LANE_2_0  GLOB_BIST_LANE_TYPE.BF.BIST_SKPOS_NUM_LANE_2_0
#define reg_BIST_SKPOS_NUM_LANE_4_3  GLOB_BIST_LANE_TYPE.BF.BIST_SKPOS_NUM_LANE_4_3
#define reg_BIST_PASS_LANE  GLOB_BIST_LANE_TYPE.BF.BIST_PASS_LANE
#define reg_BIST_DONE_LANE  GLOB_BIST_LANE_TYPE.BF.BIST_DONE_LANE
#define reg_BIST_TXDATA_LANE_15_0  GLOB_BIST_LANE_TYPE.WT.W0

// 0x0044	GLOB_BIST_START		BIST Login Window Start Cycle
typedef union {
	struct {
		uint8_t BIST_WIN_DELAY_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t BIST_WIN_DELAY_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t BIST_WIN_LENGTH_LANE_15_0_b0             : 8;	/*[31:16]     r/w 16'h0001*/
		uint8_t BIST_WIN_LENGTH_LANE_15_0_b1             : 8;	/*[31:16]     r/w 16'h0001*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_START_t;
__xdata __at( 0x5444 ) volatile GLOB_BIST_START_t GLOB_BIST_START;
#define reg_BIST_WIN_DELAY_LANE_15_0_b0  GLOB_BIST_START.BF.BIST_WIN_DELAY_LANE_15_0_b0
#define reg_BIST_WIN_DELAY_LANE_15_0_b1  GLOB_BIST_START.BF.BIST_WIN_DELAY_LANE_15_0_b1
#define reg_BIST_WIN_LENGTH_LANE_15_0_b0  GLOB_BIST_START.BF.BIST_WIN_LENGTH_LANE_15_0_b0
#define reg_BIST_WIN_LENGTH_LANE_15_0_b1  GLOB_BIST_START.BF.BIST_WIN_LENGTH_LANE_15_0_b1
#define reg_BIST_WIN_DELAY_LANE_15_0  GLOB_BIST_START.WT.W0
#define reg_BIST_WIN_LENGTH_LANE_15_0  GLOB_BIST_START.WT.W1

// 0x0048	GLOB_BIST_MASK		BIST Result Mask
typedef union {
	struct {
		uint8_t BIST_MASK_LANE_15_0_b0                   : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t BIST_MASK_LANE_15_0_b1                   : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t BIST_MASK_LANE_31_16_b0                  : 8;	/*[31:16]     r/w 16'hffff*/
		uint8_t BIST_MASK_LANE_31_16_b1                  : 8;	/*[31:16]     r/w 16'hffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_MASK_t;
__xdata __at( 0x5448 ) volatile GLOB_BIST_MASK_t GLOB_BIST_MASK;
#define reg_BIST_MASK_LANE_15_0_b0  GLOB_BIST_MASK.BF.BIST_MASK_LANE_15_0_b0
#define reg_BIST_MASK_LANE_15_0_b1  GLOB_BIST_MASK.BF.BIST_MASK_LANE_15_0_b1
#define reg_BIST_MASK_LANE_31_16_b0  GLOB_BIST_MASK.BF.BIST_MASK_LANE_31_16_b0
#define reg_BIST_MASK_LANE_31_16_b1  GLOB_BIST_MASK.BF.BIST_MASK_LANE_31_16_b1
#define reg_BIST_MASK_LANE_15_0  GLOB_BIST_MASK.WT.W0
#define reg_BIST_MASK_LANE_31_16  GLOB_BIST_MASK.WT.W1

// 0x004c	GLOB_BIST_RESULT		BIST CRC Result
typedef union {
	struct {
		uint8_t BIST_CRC32_RESULT_LANE_15_0_b0           : 8;	/* [15:0]       r   0*/
		uint8_t BIST_CRC32_RESULT_LANE_15_0_b1           : 8;	/* [15:0]       r   0*/
		uint8_t BIST_CRC32_RESULT_LANE_31_16_b0          : 8;	/*[31:16]       r   0*/
		uint8_t BIST_CRC32_RESULT_LANE_31_16_b1          : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_RESULT_t;
__xdata __at( 0x544c ) volatile GLOB_BIST_RESULT_t GLOB_BIST_RESULT;
#define reg_BIST_CRC32_RESULT_LANE_15_0_b0  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_LANE_15_0_b0
#define reg_BIST_CRC32_RESULT_LANE_15_0_b1  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_LANE_15_0_b1
#define reg_BIST_CRC32_RESULT_LANE_31_16_b0  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_LANE_31_16_b0
#define reg_BIST_CRC32_RESULT_LANE_31_16_b1  GLOB_BIST_RESULT.BF.BIST_CRC32_RESULT_LANE_31_16_b1
#define reg_BIST_CRC32_RESULT_LANE_15_0  GLOB_BIST_RESULT.WT.W0
#define reg_BIST_CRC32_RESULT_LANE_31_16  GLOB_BIST_RESULT.WT.W1

// 0x0050	GLOB_BIST_SEQR_CFG		BIST Sequencer Configuration
typedef union {
	struct {
		uint8_t BIST_SEQ_N_DATA_LANE_7_0                 : 8;	/*  [7:0]     r/w   0*/
		uint8_t BIST_SEQ_N_FTS_LANE_7_0                  : 8;	/* [15:8]     r/w   0*/
		uint8_t BIST_LFSR_SEED_LANE_15_0_b0              : 8;	/*[31:16]     r/w   0*/
		uint8_t BIST_LFSR_SEED_LANE_15_0_b1              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_SEQR_CFG_t;
__xdata __at( 0x5450 ) volatile GLOB_BIST_SEQR_CFG_t GLOB_BIST_SEQR_CFG;
#define reg_BIST_SEQ_N_DATA_LANE_7_0  GLOB_BIST_SEQR_CFG.BF.BIST_SEQ_N_DATA_LANE_7_0
#define reg_BIST_SEQ_N_FTS_LANE_7_0  GLOB_BIST_SEQR_CFG.BF.BIST_SEQ_N_FTS_LANE_7_0
#define reg_BIST_LFSR_SEED_LANE_15_0_b0  GLOB_BIST_SEQR_CFG.BF.BIST_LFSR_SEED_LANE_15_0_b0
#define reg_BIST_LFSR_SEED_LANE_15_0_b1  GLOB_BIST_SEQR_CFG.BF.BIST_LFSR_SEED_LANE_15_0_b1
#define reg_BIST_LFSR_SEED_LANE_15_0  GLOB_BIST_SEQR_CFG.WT.W1

// 0x0054	GLOB_BIST_DATA_HI		BIST Data High Input
typedef union {
	struct {
		uint8_t BIST_TXDATA_LANE_31_16_b0                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t BIST_TXDATA_LANE_31_16_b1                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_BIST_DATA_HI_t;
__xdata __at( 0x5454 ) volatile GLOB_BIST_DATA_HI_t GLOB_BIST_DATA_HI;
#define reg_BIST_TXDATA_LANE_31_16_b0  GLOB_BIST_DATA_HI.BF.BIST_TXDATA_LANE_31_16_b0
#define reg_BIST_TXDATA_LANE_31_16_b1  GLOB_BIST_DATA_HI.BF.BIST_TXDATA_LANE_31_16_b1
#define reg_BIST_TXDATA_LANE_31_16  GLOB_BIST_DATA_HI.WT.W0

// 0x0058	GLOB_BIST_LINK_EQ		BIST Link EQ Control And Status
typedef union {
	struct {
		uint8_t BIST_PRESET_VECTOR_LANE_11_0_b0          : 8;	/* [11:0]     r/w 12'h0*/
		uint8_t BIST_PRESET_VECTOR_LANE_11_0_b1          : 4;	/* [11:0]     r/w 12'h0*/
		uint8_t BIST_EQ_FB_MODE_LANE                     : 1;	/*     12     r/w   0*/
		uint8_t BIST_INCLD_INIT_FOM_LANE                 : 1;	/*     13     r/w   0*/
		uint8_t BIST_RXEQ_IGNORE_RXTS_LANE               : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t BIST_INIT_PRESET_LANE_3_0                : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t BIST_EQ_SUCCESSFUL_LANE                  : 1;	/*     20       r   0*/
		uint8_t BIST_EQ_COMPLETE_LANE                    : 1;	/*     21       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_BIST_LINK_EQ_t;
__xdata __at( 0x5458 ) volatile GLOB_BIST_LINK_EQ_t GLOB_BIST_LINK_EQ;
#define reg_BIST_PRESET_VECTOR_LANE_11_0_b0  GLOB_BIST_LINK_EQ.BF.BIST_PRESET_VECTOR_LANE_11_0_b0
#define reg_BIST_PRESET_VECTOR_LANE_11_0_b1  GLOB_BIST_LINK_EQ.BF.BIST_PRESET_VECTOR_LANE_11_0_b1
#define reg_BIST_EQ_FB_MODE_LANE  GLOB_BIST_LINK_EQ.BF.BIST_EQ_FB_MODE_LANE
#define reg_BIST_INCLD_INIT_FOM_LANE  GLOB_BIST_LINK_EQ.BF.BIST_INCLD_INIT_FOM_LANE
#define reg_BIST_RXEQ_IGNORE_RXTS_LANE  GLOB_BIST_LINK_EQ.BF.BIST_RXEQ_IGNORE_RXTS_LANE
#define reg_BIST_INIT_PRESET_LANE_3_0  GLOB_BIST_LINK_EQ.BF.BIST_INIT_PRESET_LANE_3_0
#define reg_BIST_EQ_SUCCESSFUL_LANE  GLOB_BIST_LINK_EQ.BF.BIST_EQ_SUCCESSFUL_LANE
#define reg_BIST_EQ_COMPLETE_LANE  GLOB_BIST_LINK_EQ.BF.BIST_EQ_COMPLETE_LANE

// 0x005c	GLOB_BIST_LANE_MARGIN		BIST Lane Margin Control And Status
typedef union {
	struct {
		uint8_t BIST_MARGIN_PAYLOAD_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t BIST_MARGIN_TYPE_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w 5'h0*/
		uint8_t MARGIN_PAYLOAD_STAT_LANE_7_0             : 8;	/*[23:16]       r 8'h0*/
		uint8_t MARGIN_TYPE_STAT_LANE_2_0                : 3;	/*[26:24]       r 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_BIST_LANE_MARGIN_t;
__xdata __at( 0x545c ) volatile GLOB_BIST_LANE_MARGIN_t GLOB_BIST_LANE_MARGIN;
#define reg_BIST_MARGIN_PAYLOAD_LANE_7_0  GLOB_BIST_LANE_MARGIN.BF.BIST_MARGIN_PAYLOAD_LANE_7_0
#define reg_BIST_MARGIN_TYPE_LANE_2_0  GLOB_BIST_LANE_MARGIN.BF.BIST_MARGIN_TYPE_LANE_2_0
#define reg_MARGIN_PAYLOAD_STAT_LANE_7_0  GLOB_BIST_LANE_MARGIN.BF.MARGIN_PAYLOAD_STAT_LANE_7_0
#define reg_MARGIN_TYPE_STAT_LANE_2_0  GLOB_BIST_LANE_MARGIN.BF.MARGIN_TYPE_STAT_LANE_2_0

// 0x0060	GLOB_PIPE_REVISION		PIPE Revision ID
typedef union {
	struct {
		uint8_t PIPE_REVISION_LANE_7_0                   : 8;	/*  [7:0]       r 8'h20*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t DEBUG_BUS_OUT_LANE_15_0_b0               : 8;	/*[31:16]       r 16'h0*/
		uint8_t DEBUG_BUS_OUT_LANE_15_0_b1               : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} GLOB_PIPE_REVISION_t;
__xdata __at( 0x5460 ) volatile GLOB_PIPE_REVISION_t GLOB_PIPE_REVISION;
#define reg_PIPE_REVISION_LANE_7_0  GLOB_PIPE_REVISION.BF.PIPE_REVISION_LANE_7_0
#define reg_DEBUG_BUS_OUT_LANE_15_0_b0  GLOB_PIPE_REVISION.BF.DEBUG_BUS_OUT_LANE_15_0_b0
#define reg_DEBUG_BUS_OUT_LANE_15_0_b1  GLOB_PIPE_REVISION.BF.DEBUG_BUS_OUT_LANE_15_0_b1
#define reg_DEBUG_BUS_OUT_LANE_15_0  GLOB_PIPE_REVISION.WT.W1

// 0x0064	GLOB_L1_SUBSTATES_CFG		L1 Substates Configuration
typedef union {
	struct {
		uint8_t CFG_PIPE43_P1CPM_ENC_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t CFG_PIPE43_P1_1_ENC_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t CFG_PIPE43_P1_2_ENC_LANE_3_0             : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t MODE_PIPE4X_L1SUB_LANE                   : 1;	/*     12     r/w   1*/
		uint8_t CFG_USE_SIDE_BAND_LANE                   : 1;	/*     13     r/w   0*/
		uint8_t CFG_PIPE43_ASYNC_HS_BYPASS_LANE          : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w 17'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} GLOB_L1_SUBSTATES_CFG_t;
__xdata __at( 0x5464 ) volatile GLOB_L1_SUBSTATES_CFG_t GLOB_L1_SUBSTATES_CFG;
#define reg_CFG_PIPE43_P1CPM_ENC_LANE_3_0  GLOB_L1_SUBSTATES_CFG.BF.CFG_PIPE43_P1CPM_ENC_LANE_3_0
#define reg_CFG_PIPE43_P1_1_ENC_LANE_3_0  GLOB_L1_SUBSTATES_CFG.BF.CFG_PIPE43_P1_1_ENC_LANE_3_0
#define reg_CFG_PIPE43_P1_2_ENC_LANE_3_0  GLOB_L1_SUBSTATES_CFG.BF.CFG_PIPE43_P1_2_ENC_LANE_3_0
#define reg_MODE_PIPE4X_L1SUB_LANE  GLOB_L1_SUBSTATES_CFG.BF.MODE_PIPE4X_L1SUB_LANE
#define reg_CFG_USE_SIDE_BAND_LANE  GLOB_L1_SUBSTATES_CFG.BF.CFG_USE_SIDE_BAND_LANE
#define reg_CFG_PIPE43_ASYNC_HS_BYPASS_LANE  GLOB_L1_SUBSTATES_CFG.BF.CFG_PIPE43_ASYNC_HS_BYPASS_LANE

#endif
