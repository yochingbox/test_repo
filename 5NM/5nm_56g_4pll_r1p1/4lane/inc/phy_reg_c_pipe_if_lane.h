#ifndef PHY_REG_C_PIPE_IF_LANE_H
#define PHY_REG_C_PIPE_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_PIPE_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t MAC_PHY_TXDATA_RD_LANE_63_48_b0          : 8;	/* [15:0]       r   0*/
		uint8_t MAC_PHY_TXDATA_RD_LANE_63_48_b1          : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t MAC_PHY_BLOCKALIGNCTRL_RD_LANE           : 1;	/*     19       r   0*/
		uint8_t MAC_PHY_RXPOLARITY_RD_LANE               : 1;	/*     20       r   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t RESERVED_26                              : 4;	/*[29:26]     r/w   0*/
		uint8_t MAC_PHY_CLK_REQ_N_RD_LANE                : 1;	/*     30       r   0*/
		uint8_t CORE_RST_N_RD_LANE                       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG0_t;
__xdata __at( 0x5900 ) volatile INPUT_PIN_DEBUG_PIPE_REG0_t INPUT_PIN_DEBUG_PIPE_REG0;
#define reg_MAC_PHY_TXDATA_RD_LANE_63_48_b0  INPUT_PIN_DEBUG_PIPE_REG0.BF.MAC_PHY_TXDATA_RD_LANE_63_48_b0
#define reg_MAC_PHY_TXDATA_RD_LANE_63_48_b1  INPUT_PIN_DEBUG_PIPE_REG0.BF.MAC_PHY_TXDATA_RD_LANE_63_48_b1
#define reg_MAC_PHY_BLOCKALIGNCTRL_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG0.BF.MAC_PHY_BLOCKALIGNCTRL_RD_LANE
#define reg_MAC_PHY_RXPOLARITY_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG0.BF.MAC_PHY_RXPOLARITY_RD_LANE
#define reg_MAC_PHY_CLK_REQ_N_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG0.BF.MAC_PHY_CLK_REQ_N_RD_LANE
#define reg_CORE_RST_N_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG0.BF.CORE_RST_N_RD_LANE
#define reg_MAC_PHY_TXDATA_RD_LANE_63_48  INPUT_PIN_DEBUG_PIPE_REG0.WT.W0

// 0x0004	INPUT_PIN_DEBUG_PIPE_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t MAC_PHY_TXDATA_RD_LANE_47_16_b0          : 8;	/* [31:0]       r   0*/
		uint8_t MAC_PHY_TXDATA_RD_LANE_47_16_b1          : 8;	/* [31:0]       r   0*/
		uint8_t MAC_PHY_TXDATA_RD_LANE_47_16_b2          : 8;	/* [31:0]       r   0*/
		uint8_t MAC_PHY_TXDATA_RD_LANE_47_16_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG1_t;
__xdata __at( 0x5904 ) volatile INPUT_PIN_DEBUG_PIPE_REG1_t INPUT_PIN_DEBUG_PIPE_REG1;
#define reg_MAC_PHY_TXDATA_RD_LANE_47_16_b0  INPUT_PIN_DEBUG_PIPE_REG1.BF.MAC_PHY_TXDATA_RD_LANE_47_16_b0
#define reg_MAC_PHY_TXDATA_RD_LANE_47_16_b1  INPUT_PIN_DEBUG_PIPE_REG1.BF.MAC_PHY_TXDATA_RD_LANE_47_16_b1
#define reg_MAC_PHY_TXDATA_RD_LANE_47_16_b2  INPUT_PIN_DEBUG_PIPE_REG1.BF.MAC_PHY_TXDATA_RD_LANE_47_16_b2
#define reg_MAC_PHY_TXDATA_RD_LANE_47_16_b3  INPUT_PIN_DEBUG_PIPE_REG1.BF.MAC_PHY_TXDATA_RD_LANE_47_16_b3

// 0x0008	INPUT_PIN_DEBUG_PIPE_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t MAC_PHY_TXDATAVALID_RD_LANE              : 1;	/*      3       r   0*/
		uint8_t MAC_PHY_TXSYNCHEADER_RD_LANE_3_0         : 4;	/*  [7:4]       r   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:8]     r/w   0*/
		uint8_t MAC_PHY_TXSTARTBLOCK_RD_LANE             : 1;	/*     11       r   0*/
		uint8_t MAC_PHY_TXDATAK_RD_LANE_3_0              : 4;	/*[15:12]       r   0*/
		uint8_t MAC_PHY_TXDATA_RD_LANE_15_0_b0           : 8;	/*[31:16]       r   0*/
		uint8_t MAC_PHY_TXDATA_RD_LANE_15_0_b1           : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG2_t;
__xdata __at( 0x5908 ) volatile INPUT_PIN_DEBUG_PIPE_REG2_t INPUT_PIN_DEBUG_PIPE_REG2;
#define reg_MAC_PHY_TXDATAVALID_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG2.BF.MAC_PHY_TXDATAVALID_RD_LANE
#define reg_MAC_PHY_TXSYNCHEADER_RD_LANE_3_0  INPUT_PIN_DEBUG_PIPE_REG2.BF.MAC_PHY_TXSYNCHEADER_RD_LANE_3_0
#define reg_MAC_PHY_TXSTARTBLOCK_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG2.BF.MAC_PHY_TXSTARTBLOCK_RD_LANE
#define reg_MAC_PHY_TXDATAK_RD_LANE_3_0  INPUT_PIN_DEBUG_PIPE_REG2.BF.MAC_PHY_TXDATAK_RD_LANE_3_0
#define reg_MAC_PHY_TXDATA_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_PIPE_REG2.BF.MAC_PHY_TXDATA_RD_LANE_15_0_b0
#define reg_MAC_PHY_TXDATA_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_PIPE_REG2.BF.MAC_PHY_TXDATA_RD_LANE_15_0_b1
#define reg_MAC_PHY_TXDATA_RD_LANE_15_0  INPUT_PIN_DEBUG_PIPE_REG2.WT.W1

// 0x000c	INPUT_PIN_DEBUG_PIPE_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t MAC_PHY_EBUF_MODE_RD_LANE                : 1;	/*      0       r   0*/
		uint8_t MAC_PHY_TXONESZEROS_RD_LANE              : 1;	/*      1       r   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t MAC_PHY_TXSWING_RD_LANE                  : 1;	/*      4       r   0*/
		uint8_t MAC_PHY_TXMARGIN_RD_LANE_2_0             : 3;	/*  [7:5]       r   0*/
		uint8_t MAC_PHY_TXDEEMPH_RD_LANE_17_0_b0         : 8;	/* [25:8]       r   0*/
		uint8_t MAC_PHY_TXDEEMPH_RD_LANE_17_0_b1         : 8;	/* [25:8]       r   0*/
		uint8_t MAC_PHY_TXDEEMPH_RD_LANE_17_0_b2         : 2;	/* [25:8]       r   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG3_t;
__xdata __at( 0x590c ) volatile INPUT_PIN_DEBUG_PIPE_REG3_t INPUT_PIN_DEBUG_PIPE_REG3;
#define reg_MAC_PHY_EBUF_MODE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_EBUF_MODE_RD_LANE
#define reg_MAC_PHY_TXONESZEROS_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_TXONESZEROS_RD_LANE
#define reg_MAC_PHY_TXSWING_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_TXSWING_RD_LANE
#define reg_MAC_PHY_TXMARGIN_RD_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_TXMARGIN_RD_LANE_2_0
#define reg_MAC_PHY_TXDEEMPH_RD_LANE_17_0_b0  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_TXDEEMPH_RD_LANE_17_0_b0
#define reg_MAC_PHY_TXDEEMPH_RD_LANE_17_0_b1  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_TXDEEMPH_RD_LANE_17_0_b1
#define reg_MAC_PHY_TXDEEMPH_RD_LANE_17_0_b2  INPUT_PIN_DEBUG_PIPE_REG3.BF.MAC_PHY_TXDEEMPH_RD_LANE_17_0_b2

// 0x0010	INPUT_PIN_DEBUG_PIPE_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t MAC_PHY_EQ_PRESET_INDEX_RD_LANE_5_0      : 6;	/*  [7:2]       r   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w   0*/
		uint8_t MAC_PHY_EQ_LF_RD_LANE_5_0                : 6;	/*[15:10]       r   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t MAC_PHY_EQ_FS_RD_LANE_5_0                : 6;	/*[23:18]       r   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:24]     r/w   0*/
		uint8_t MAC_PHY_EQ_IN_PROG_RD_LANE               : 1;	/*     28       r   0*/
		uint8_t MAC_PHY_SRIS_ENABLE_RD_LANE              : 1;	/*     29       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t MAC_PHY_RXEQTRAINING_RD_LANE             : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG4_t;
__xdata __at( 0x5910 ) volatile INPUT_PIN_DEBUG_PIPE_REG4_t INPUT_PIN_DEBUG_PIPE_REG4;
#define reg_MAC_PHY_EQ_PRESET_INDEX_RD_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG4.BF.MAC_PHY_EQ_PRESET_INDEX_RD_LANE_5_0
#define reg_MAC_PHY_EQ_LF_RD_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG4.BF.MAC_PHY_EQ_LF_RD_LANE_5_0
#define reg_MAC_PHY_EQ_FS_RD_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG4.BF.MAC_PHY_EQ_FS_RD_LANE_5_0
#define reg_MAC_PHY_EQ_IN_PROG_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG4.BF.MAC_PHY_EQ_IN_PROG_RD_LANE
#define reg_MAC_PHY_SRIS_ENABLE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG4.BF.MAC_PHY_SRIS_ENABLE_RD_LANE
#define reg_MAC_PHY_RXEQTRAINING_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG4.BF.MAC_PHY_RXEQTRAINING_RD_LANE

// 0x0014	INPUT_PIN_DEBUG_PIPE_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t MAC_PHY_ESM_CAL_REQUEST_RD_LANE          : 1;	/*      6       r   0*/
		uint8_t MAC_PHY_ASYNCPOWERCHANGEACK_RD_LANE      : 1;	/*      7       r   0*/
		uint8_t MAC_PHY_MBUS_RD_LANE_7_0                 : 8;	/* [15:8]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t MAC_PHY_SDATA_EN_RD_LANE                 : 1;	/*     17       r   0*/
		uint8_t MAC_PHY_SDATA_RD_LANE_5_0                : 6;	/*[23:18]       r   0*/
		uint8_t MAC_PHY_PCS_BYPASS_RD_LANE               : 1;	/*     24       r   0*/
		uint8_t MAC_PHY_EQ_FOM_DIRN_RD_LANE              : 1;	/*     25       r   0*/
		uint8_t MAC_PHY_EQ_INVALID_REQ_RD_LANE           : 1;	/*     26       r   0*/
		uint8_t MAC_PHY_EQ_RXEQEVAL_RD_LANE              : 1;	/*     27       r   0*/
		uint8_t MAC_PHY_EQ_GET_LOCAL_COEFF_RD_LANE       : 1;	/*     28       r   0*/
		uint8_t MAC_PHY_EQ_RX_PRESET_HINT_RD_LANE_2_0    : 3;	/*[31:29]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG5_t;
__xdata __at( 0x5914 ) volatile INPUT_PIN_DEBUG_PIPE_REG5_t INPUT_PIN_DEBUG_PIPE_REG5;
#define reg_MAC_PHY_ESM_CAL_REQUEST_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_ESM_CAL_REQUEST_RD_LANE
#define reg_MAC_PHY_ASYNCPOWERCHANGEACK_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_ASYNCPOWERCHANGEACK_RD_LANE
#define reg_MAC_PHY_MBUS_RD_LANE_7_0  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_MBUS_RD_LANE_7_0
#define reg_MAC_PHY_SDATA_EN_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_SDATA_EN_RD_LANE
#define reg_MAC_PHY_SDATA_RD_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_SDATA_RD_LANE_5_0
#define reg_MAC_PHY_PCS_BYPASS_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_PCS_BYPASS_RD_LANE
#define reg_MAC_PHY_EQ_FOM_DIRN_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_EQ_FOM_DIRN_RD_LANE
#define reg_MAC_PHY_EQ_INVALID_REQ_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_EQ_INVALID_REQ_RD_LANE
#define reg_MAC_PHY_EQ_RXEQEVAL_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_EQ_RXEQEVAL_RD_LANE
#define reg_MAC_PHY_EQ_GET_LOCAL_COEFF_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_EQ_GET_LOCAL_COEFF_RD_LANE
#define reg_MAC_PHY_EQ_RX_PRESET_HINT_RD_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG5.BF.MAC_PHY_EQ_RX_PRESET_HINT_RD_LANE_2_0

// 0x0018	INPUT_PIN_DEBUG_PIPE_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t MAC_PHY_ESM_RATE_RD_LANE_31_0_b0         : 8;	/* [31:0]       r   0*/
		uint8_t MAC_PHY_ESM_RATE_RD_LANE_31_0_b1         : 8;	/* [31:0]       r   0*/
		uint8_t MAC_PHY_ESM_RATE_RD_LANE_31_0_b2         : 8;	/* [31:0]       r   0*/
		uint8_t MAC_PHY_ESM_RATE_RD_LANE_31_0_b3         : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG6_t;
__xdata __at( 0x5918 ) volatile INPUT_PIN_DEBUG_PIPE_REG6_t INPUT_PIN_DEBUG_PIPE_REG6;
#define reg_MAC_PHY_ESM_RATE_RD_LANE_31_0_b0  INPUT_PIN_DEBUG_PIPE_REG6.BF.MAC_PHY_ESM_RATE_RD_LANE_31_0_b0
#define reg_MAC_PHY_ESM_RATE_RD_LANE_31_0_b1  INPUT_PIN_DEBUG_PIPE_REG6.BF.MAC_PHY_ESM_RATE_RD_LANE_31_0_b1
#define reg_MAC_PHY_ESM_RATE_RD_LANE_31_0_b2  INPUT_PIN_DEBUG_PIPE_REG6.BF.MAC_PHY_ESM_RATE_RD_LANE_31_0_b2
#define reg_MAC_PHY_ESM_RATE_RD_LANE_31_0_b3  INPUT_PIN_DEBUG_PIPE_REG6.BF.MAC_PHY_ESM_RATE_RD_LANE_31_0_b3

// 0x001c	INPUT_PIN_DEBUG_PIPE_REG7		PHY Isolation Debug Register7
typedef union {
	struct {
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8_b0 : 8;	/* [15:0]       r   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8_b1 : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_CLK_REF_IN_RD_LANE_2_0  : 3;	/*[20:18]       r   0*/
		uint8_t PIPE_LANE_TXCLK_REF_IN_RD_LANE_2_0       : 3;	/*[23:21]       r   0*/
		uint8_t PIPE_BIFURCATION_SEL_RD_LANE_1_0         : 2;	/*[25:24]       r   0*/
		uint8_t PIPE_LANE_MASTER_RD_LANE                 : 1;	/*     26       r   0*/
		uint8_t PIPE_LANE_BREAK_RD_LANE                  : 1;	/*     27       r   0*/
		uint8_t PIPE_LANE_START_RD_LANE                  : 1;	/*     28       r   0*/
		uint8_t PIPE_STRAP_ENABLE_RD_LANE                : 1;	/*     29       r   0*/
		uint8_t MAC_PHY_PCLKCHANGEACK_RD_LANE            : 1;	/*     30       r   0*/
		uint8_t MAC_PHY_HOTRESET_EVENT_RD_LANE           : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG7_t;
__xdata __at( 0x591c ) volatile INPUT_PIN_DEBUG_PIPE_REG7_t INPUT_PIN_DEBUG_PIPE_REG7;
#define reg_PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8_b0  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8_b0
#define reg_PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8_b1  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8_b1
#define reg_PIPE_LANE_BUNDLE_CLK_REF_IN_RD_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_BUNDLE_CLK_REF_IN_RD_LANE_2_0
#define reg_PIPE_LANE_TXCLK_REF_IN_RD_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_TXCLK_REF_IN_RD_LANE_2_0
#define reg_PIPE_BIFURCATION_SEL_RD_LANE_1_0  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_BIFURCATION_SEL_RD_LANE_1_0
#define reg_PIPE_LANE_MASTER_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_MASTER_RD_LANE
#define reg_PIPE_LANE_BREAK_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_BREAK_RD_LANE
#define reg_PIPE_LANE_START_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_LANE_START_RD_LANE
#define reg_PIPE_STRAP_ENABLE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG7.BF.PIPE_STRAP_ENABLE_RD_LANE
#define reg_MAC_PHY_PCLKCHANGEACK_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG7.BF.MAC_PHY_PCLKCHANGEACK_RD_LANE
#define reg_MAC_PHY_HOTRESET_EVENT_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG7.BF.MAC_PHY_HOTRESET_EVENT_RD_LANE
#define reg_PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_23_8  INPUT_PIN_DEBUG_PIPE_REG7.WT.W0

// 0x0020	INPUT_PIN_DEBUG_PIPE_REG8		PHY Isolation Debug Register8
typedef union {
	struct {
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b0 : 8;	/* [23:0]       r   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b1 : 8;	/* [23:0]       r   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b2 : 8;	/* [23:0]       r   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_7_0     : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG8_t;
__xdata __at( 0x5920 ) volatile INPUT_PIN_DEBUG_PIPE_REG8_t INPUT_PIN_DEBUG_PIPE_REG8;
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b0  INPUT_PIN_DEBUG_PIPE_REG8.BF.PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b0
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b1  INPUT_PIN_DEBUG_PIPE_REG8.BF.PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b1
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b2  INPUT_PIN_DEBUG_PIPE_REG8.BF.PIPE_LANE_BUNDLE_IN_NEXT_RD_LANE_23_0_b2
#define reg_PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_7_0  INPUT_PIN_DEBUG_PIPE_REG8.BF.PIPE_LANE_BUNDLE_IN_PREV_RD_LANE_7_0

// 0x0024	INPUT_PIN_DEBUG_PIPE_REG9		PHY Isolation Debug Register9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t MAC_PHY_TXCOMPLIANCE_FM_REG_LANE         : 1;	/*      1     r/w   0*/
		uint8_t MAC_PHY_TXCOMPLIANCE_LANE                : 1;	/*      2     r/w   0*/
		uint8_t MAC_PHY_BLOCKALIGNCTRL_FM_REG_LANE       : 1;	/*      3     r/w   0*/
		uint8_t MAC_PHY_BLOCKALIGNCTRL_LANE              : 1;	/*      4     r/w   0*/
		uint8_t MAC_PHY_RXPOLARITY_FM_REG_LANE           : 1;	/*      5     r/w   0*/
		uint8_t MAC_PHY_RXPOLARITY_LANE                  : 1;	/*      6     r/w   0*/
		uint8_t MAC_PHY_RATE_FM_REG_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t MAC_PHY_RATE_LANE_2_0                    : 3;	/* [10:8]     r/w   0*/
		uint8_t MAC_PHY_POWERDOWN_FM_REG_LANE            : 1;	/*     11     r/w   0*/
		uint8_t MAC_PHY_POWERDOWN_LANE_3_0               : 4;	/*[15:12]     r/w 4'h2*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t MAC_PHY_CLK_REQ_N_FM_REG_LANE            : 1;	/*     18     r/w   0*/
		uint8_t MAC_PHY_CLK_REQ_N_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t CORE_RST_N_FM_REG_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t CORE_RST_N_LANE                          : 1;	/*     21     r/w   0*/
		uint8_t PIPE_RESERVED_IN_RD_LANE_1_0             : 2;	/*[23:22]       r   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t PIPE_LPC_ENABLE_RD_LANE                  : 1;	/*     25       r   0*/
		uint8_t PIPE_BUS_WIDTH_RD_LANE                   : 1;	/*     26       r   0*/
		uint8_t PIPE_PCLK_MODE_RD_LANE                   : 1;	/*     27       r   0*/
		uint8_t PIPE_CFG_MODE_IF_RD_LANE                 : 1;	/*     28       r   0*/
		uint8_t PIPE_TXFIFO_START_IN_RD_LANE             : 1;	/*     29       r   0*/
		uint8_t PIN_RESET_CORE_RX_PIPE_RD_LANE           : 1;	/*     30       r   0*/
		uint8_t PIN_RESET_CORE_TX_PIPE_RD_LANE           : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG9_t;
__xdata __at( 0x5924 ) volatile INPUT_PIN_DEBUG_PIPE_REG9_t INPUT_PIN_DEBUG_PIPE_REG9;
#define reg_MAC_PHY_TXCOMPLIANCE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_TXCOMPLIANCE_FM_REG_LANE
#define reg_MAC_PHY_TXCOMPLIANCE_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_TXCOMPLIANCE_LANE
#define reg_MAC_PHY_BLOCKALIGNCTRL_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_BLOCKALIGNCTRL_FM_REG_LANE
#define reg_MAC_PHY_BLOCKALIGNCTRL_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_BLOCKALIGNCTRL_LANE
#define reg_MAC_PHY_RXPOLARITY_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_RXPOLARITY_FM_REG_LANE
#define reg_MAC_PHY_RXPOLARITY_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_RXPOLARITY_LANE
#define reg_MAC_PHY_RATE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_RATE_FM_REG_LANE
#define reg_MAC_PHY_RATE_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_RATE_LANE_2_0
#define reg_MAC_PHY_POWERDOWN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_POWERDOWN_FM_REG_LANE
#define reg_MAC_PHY_POWERDOWN_LANE_3_0  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_POWERDOWN_LANE_3_0
#define reg_MAC_PHY_CLK_REQ_N_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_CLK_REQ_N_FM_REG_LANE
#define reg_MAC_PHY_CLK_REQ_N_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.MAC_PHY_CLK_REQ_N_LANE
#define reg_CORE_RST_N_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.CORE_RST_N_FM_REG_LANE
#define reg_CORE_RST_N_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.CORE_RST_N_LANE
#define reg_PIPE_RESERVED_IN_RD_LANE_1_0  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIPE_RESERVED_IN_RD_LANE_1_0
#define reg_PIPE_LPC_ENABLE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIPE_LPC_ENABLE_RD_LANE
#define reg_PIPE_BUS_WIDTH_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIPE_BUS_WIDTH_RD_LANE
#define reg_PIPE_PCLK_MODE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIPE_PCLK_MODE_RD_LANE
#define reg_PIPE_CFG_MODE_IF_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIPE_CFG_MODE_IF_RD_LANE
#define reg_PIPE_TXFIFO_START_IN_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIPE_TXFIFO_START_IN_RD_LANE
#define reg_PIN_RESET_CORE_RX_PIPE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIN_RESET_CORE_RX_PIPE_RD_LANE
#define reg_PIN_RESET_CORE_TX_PIPE_RD_LANE  INPUT_PIN_DEBUG_PIPE_REG9.BF.PIN_RESET_CORE_TX_PIPE_RD_LANE

// 0x0028	INPUT_PIN_DEBUG_PIPE_REG10		PHY Isolation Debug Register10
typedef union {
	struct {
		uint8_t MAC_PHY_TXDATA_LANE_63_32_b0             : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_TXDATA_LANE_63_32_b1             : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_TXDATA_LANE_63_32_b2             : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_TXDATA_LANE_63_32_b3             : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG10_t;
__xdata __at( 0x5928 ) volatile INPUT_PIN_DEBUG_PIPE_REG10_t INPUT_PIN_DEBUG_PIPE_REG10;
#define reg_MAC_PHY_TXDATA_LANE_63_32_b0  INPUT_PIN_DEBUG_PIPE_REG10.BF.MAC_PHY_TXDATA_LANE_63_32_b0
#define reg_MAC_PHY_TXDATA_LANE_63_32_b1  INPUT_PIN_DEBUG_PIPE_REG10.BF.MAC_PHY_TXDATA_LANE_63_32_b1
#define reg_MAC_PHY_TXDATA_LANE_63_32_b2  INPUT_PIN_DEBUG_PIPE_REG10.BF.MAC_PHY_TXDATA_LANE_63_32_b2
#define reg_MAC_PHY_TXDATA_LANE_63_32_b3  INPUT_PIN_DEBUG_PIPE_REG10.BF.MAC_PHY_TXDATA_LANE_63_32_b3

// 0x002c	INPUT_PIN_DEBUG_PIPE_REG11		PHY Isolation Debug Register11
typedef union {
	struct {
		uint8_t MAC_PHY_TXDATA_LANE_31_0_b0              : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_TXDATA_LANE_31_0_b1              : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_TXDATA_LANE_31_0_b2              : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_TXDATA_LANE_31_0_b3              : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG11_t;
__xdata __at( 0x592c ) volatile INPUT_PIN_DEBUG_PIPE_REG11_t INPUT_PIN_DEBUG_PIPE_REG11;
#define reg_MAC_PHY_TXDATA_LANE_31_0_b0  INPUT_PIN_DEBUG_PIPE_REG11.BF.MAC_PHY_TXDATA_LANE_31_0_b0
#define reg_MAC_PHY_TXDATA_LANE_31_0_b1  INPUT_PIN_DEBUG_PIPE_REG11.BF.MAC_PHY_TXDATA_LANE_31_0_b1
#define reg_MAC_PHY_TXDATA_LANE_31_0_b2  INPUT_PIN_DEBUG_PIPE_REG11.BF.MAC_PHY_TXDATA_LANE_31_0_b2
#define reg_MAC_PHY_TXDATA_LANE_31_0_b3  INPUT_PIN_DEBUG_PIPE_REG11.BF.MAC_PHY_TXDATA_LANE_31_0_b3

// 0x0030	INPUT_PIN_DEBUG_PIPE_REG12		PHY Isolation Debug Register12
typedef union {
	struct {
		uint8_t MAC_PHY_TXDEEMPH_LANE_17_8_b0            : 8;	/*  [9:0]     r/w   0*/
		uint8_t MAC_PHY_TXDEEMPH_LANE_17_8_b1            : 2;	/*  [9:0]     r/w   0*/
		uint8_t RESERVED_10                              : 3;	/*[12:10]     r/w   0*/
		uint8_t MAC_PHY_TXELECIDLE_FM_REG_LANE           : 1;	/*     13     r/w   0*/
		uint8_t MAC_PHY_TXELECIDLE_LANE                  : 1;	/*     14     r/w   1*/
		uint8_t MAC_PHY_TXDETECTRX_LOOPBACK_FM_REG_LANE  : 1;	/*     15     r/w   0*/
		uint8_t MAC_PHY_TXDETECTRX_LOOPBACK_LANE         : 1;	/*     16     r/w   0*/
		uint8_t MAC_PHY_TXDATAVALID_FM_REG_LANE          : 1;	/*     17     r/w   0*/
		uint8_t MAC_PHY_TXDATAVALID_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t MAC_PHY_TXSYNCHEADER_FM_REG_LANE         : 1;	/*     19     r/w   0*/
		uint8_t MAC_PHY_TXSYNCHEADER_LANE_3_0            : 4;	/*[23:20]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t MAC_PHY_TXSTARTBLOCK_FM_REG_LANE         : 1;	/*     26     r/w   0*/
		uint8_t MAC_PHY_TXSTARTBLOCK_LANE                : 1;	/*     27     r/w   0*/
		uint8_t MAC_PHY_TXDATAK_LANE_3_0                 : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG12_t;
__xdata __at( 0x5930 ) volatile INPUT_PIN_DEBUG_PIPE_REG12_t INPUT_PIN_DEBUG_PIPE_REG12;
#define reg_MAC_PHY_TXDEEMPH_LANE_17_8_b0  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDEEMPH_LANE_17_8_b0
#define reg_MAC_PHY_TXDEEMPH_LANE_17_8_b1  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDEEMPH_LANE_17_8_b1
#define reg_MAC_PHY_TXELECIDLE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXELECIDLE_FM_REG_LANE
#define reg_MAC_PHY_TXELECIDLE_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXELECIDLE_LANE
#define reg_MAC_PHY_TXDETECTRX_LOOPBACK_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDETECTRX_LOOPBACK_FM_REG_LANE
#define reg_MAC_PHY_TXDETECTRX_LOOPBACK_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDETECTRX_LOOPBACK_LANE
#define reg_MAC_PHY_TXDATAVALID_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDATAVALID_FM_REG_LANE
#define reg_MAC_PHY_TXDATAVALID_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDATAVALID_LANE
#define reg_MAC_PHY_TXSYNCHEADER_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXSYNCHEADER_FM_REG_LANE
#define reg_MAC_PHY_TXSYNCHEADER_LANE_3_0  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXSYNCHEADER_LANE_3_0
#define reg_MAC_PHY_TXSTARTBLOCK_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXSTARTBLOCK_FM_REG_LANE
#define reg_MAC_PHY_TXSTARTBLOCK_LANE  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXSTARTBLOCK_LANE
#define reg_MAC_PHY_TXDATAK_LANE_3_0  INPUT_PIN_DEBUG_PIPE_REG12.BF.MAC_PHY_TXDATAK_LANE_3_0

// 0x0034	INPUT_PIN_DEBUG_PIPE_REG13		PHY Isolation Debug Register13
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t MAC_PHY_EQ_IN_PROG_FM_REG_LANE           : 1;	/*      1     r/w   0*/
		uint8_t MAC_PHY_EQ_IN_PROG_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t MAC_PHY_SRIS_ENABLE_FM_REG_LANE          : 1;	/*      3     r/w   0*/
		uint8_t MAC_PHY_SRIS_ENABLE_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t MAC_PHY_RX_TERMINATION_FM_REG_LANE       : 1;	/*      5     r/w   0*/
		uint8_t MAC_PHY_RX_TERMINATION_LANE              : 1;	/*      6     r/w   0*/
		uint8_t MAC_PHY_RXEQTRAINING_FM_REG_LANE         : 1;	/*      7     r/w   0*/
		uint8_t MAC_PHY_RXEQTRAINING_LANE                : 1;	/*      8     r/w   0*/
		uint8_t MAC_PHY_EBUF_MODE_FM_REG_LANE            : 1;	/*      9     r/w   0*/
		uint8_t MAC_PHY_EBUF_MODE_LANE                   : 1;	/*     10     r/w   0*/
		uint8_t MAC_PHY_TXONESZEROS_FM_REG_LANE          : 1;	/*     11     r/w   0*/
		uint8_t MAC_PHY_TXONESZEROS_LANE                 : 1;	/*     12     r/w   0*/
		uint8_t MAC_PHY_TXCMN_MODE_DIS_FM_REG_LANE       : 1;	/*     13     r/w   0*/
		uint8_t MAC_PHY_TXCMN_MODE_DIS_LANE              : 1;	/*     14     r/w   0*/
		uint8_t MAC_PHY_RXEIDETECT_DIS_FM_REG_LANE       : 1;	/*     15     r/w   0*/
		uint8_t MAC_PHY_RXEIDETECT_DIS_LANE              : 1;	/*     16     r/w   0*/
		uint8_t MAC_PHY_TXSWING_FM_REG_LANE              : 1;	/*     17     r/w   0*/
		uint8_t MAC_PHY_TXSWING_LANE                     : 1;	/*     18     r/w   0*/
		uint8_t MAC_PHY_TXMARGIN_FM_REG_LANE             : 1;	/*     19     r/w   0*/
		uint8_t MAC_PHY_TXMARGIN_LANE_2_0                : 3;	/*[22:20]     r/w   0*/
		uint8_t MAC_PHY_TXDEEMPH_FM_REG_LANE             : 1;	/*     23     r/w   0*/
		uint8_t MAC_PHY_TXDEEMPH_LANE_7_0                : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG13_t;
__xdata __at( 0x5934 ) volatile INPUT_PIN_DEBUG_PIPE_REG13_t INPUT_PIN_DEBUG_PIPE_REG13;
#define reg_MAC_PHY_EQ_IN_PROG_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_EQ_IN_PROG_FM_REG_LANE
#define reg_MAC_PHY_EQ_IN_PROG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_EQ_IN_PROG_LANE
#define reg_MAC_PHY_SRIS_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_SRIS_ENABLE_FM_REG_LANE
#define reg_MAC_PHY_SRIS_ENABLE_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_SRIS_ENABLE_LANE
#define reg_MAC_PHY_RX_TERMINATION_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_RX_TERMINATION_FM_REG_LANE
#define reg_MAC_PHY_RX_TERMINATION_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_RX_TERMINATION_LANE
#define reg_MAC_PHY_RXEQTRAINING_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_RXEQTRAINING_FM_REG_LANE
#define reg_MAC_PHY_RXEQTRAINING_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_RXEQTRAINING_LANE
#define reg_MAC_PHY_EBUF_MODE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_EBUF_MODE_FM_REG_LANE
#define reg_MAC_PHY_EBUF_MODE_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_EBUF_MODE_LANE
#define reg_MAC_PHY_TXONESZEROS_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXONESZEROS_FM_REG_LANE
#define reg_MAC_PHY_TXONESZEROS_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXONESZEROS_LANE
#define reg_MAC_PHY_TXCMN_MODE_DIS_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXCMN_MODE_DIS_FM_REG_LANE
#define reg_MAC_PHY_TXCMN_MODE_DIS_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXCMN_MODE_DIS_LANE
#define reg_MAC_PHY_RXEIDETECT_DIS_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_RXEIDETECT_DIS_FM_REG_LANE
#define reg_MAC_PHY_RXEIDETECT_DIS_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_RXEIDETECT_DIS_LANE
#define reg_MAC_PHY_TXSWING_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXSWING_FM_REG_LANE
#define reg_MAC_PHY_TXSWING_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXSWING_LANE
#define reg_MAC_PHY_TXMARGIN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXMARGIN_FM_REG_LANE
#define reg_MAC_PHY_TXMARGIN_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXMARGIN_LANE_2_0
#define reg_MAC_PHY_TXDEEMPH_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXDEEMPH_FM_REG_LANE
#define reg_MAC_PHY_TXDEEMPH_LANE_7_0  INPUT_PIN_DEBUG_PIPE_REG13.BF.MAC_PHY_TXDEEMPH_LANE_7_0

// 0x0038	INPUT_PIN_DEBUG_PIPE_REG14		PHY Isolation Debug Register14
typedef union {
	struct {
		uint8_t MAC_PHY_EQ_RXEQEVAL_FM_REG_LANE          : 1;	/*      0     r/w   0*/
		uint8_t MAC_PHY_EQ_RXEQEVAL_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t MAC_PHY_EQ_GET_LOCAL_COEFF_FM_REG_LANE   : 1;	/*      2     r/w   0*/
		uint8_t MAC_PHY_EQ_GET_LOCAL_COEFF_LANE          : 1;	/*      3     r/w   0*/
		uint8_t MAC_PHY_EQ_RX_PRESET_HINT_FM_REG_LANE    : 1;	/*      4     r/w   0*/
		uint8_t MAC_PHY_EQ_RX_PRESET_HINT_LANE_2_0       : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t MAC_PHY_EQ_PRESET_INDEX_FM_REG_LANE      : 1;	/*      9     r/w   0*/
		uint8_t MAC_PHY_EQ_PRESET_INDEX_LANE_5_0         : 6;	/*[15:10]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t MAC_PHY_EQ_LF_FM_REG_LANE                : 1;	/*     17     r/w   0*/
		uint8_t MAC_PHY_EQ_LF_LANE_5_0                   : 6;	/*[23:18]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t MAC_PHY_EQ_FS_FM_REG_LANE                : 1;	/*     25     r/w   0*/
		uint8_t MAC_PHY_EQ_FS_LANE_5_0                   : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG14_t;
__xdata __at( 0x5938 ) volatile INPUT_PIN_DEBUG_PIPE_REG14_t INPUT_PIN_DEBUG_PIPE_REG14;
#define reg_MAC_PHY_EQ_RXEQEVAL_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_RXEQEVAL_FM_REG_LANE
#define reg_MAC_PHY_EQ_RXEQEVAL_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_RXEQEVAL_LANE
#define reg_MAC_PHY_EQ_GET_LOCAL_COEFF_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_GET_LOCAL_COEFF_FM_REG_LANE
#define reg_MAC_PHY_EQ_GET_LOCAL_COEFF_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_GET_LOCAL_COEFF_LANE
#define reg_MAC_PHY_EQ_RX_PRESET_HINT_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_RX_PRESET_HINT_FM_REG_LANE
#define reg_MAC_PHY_EQ_RX_PRESET_HINT_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_RX_PRESET_HINT_LANE_2_0
#define reg_MAC_PHY_EQ_PRESET_INDEX_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_PRESET_INDEX_FM_REG_LANE
#define reg_MAC_PHY_EQ_PRESET_INDEX_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_PRESET_INDEX_LANE_5_0
#define reg_MAC_PHY_EQ_LF_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_LF_FM_REG_LANE
#define reg_MAC_PHY_EQ_LF_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_LF_LANE_5_0
#define reg_MAC_PHY_EQ_FS_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_FS_FM_REG_LANE
#define reg_MAC_PHY_EQ_FS_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG14.BF.MAC_PHY_EQ_FS_LANE_5_0

// 0x003c	INPUT_PIN_DEBUG_PIPE_REG15		PHY Isolation Debug Register15
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t MAC_PHY_ESM_CAL_REQUEST_FM_REG_LANE      : 1;	/*      3     r/w   0*/
		uint8_t MAC_PHY_ESM_CAL_REQUEST_LANE             : 1;	/*      4     r/w   0*/
		uint8_t MAC_PHY_ASYNCPOWERCHANGEACK_FM_REG_LANE  : 1;	/*      5     r/w   0*/
		uint8_t MAC_PHY_ASYNCPOWERCHANGEACK_LANE         : 1;	/*      6     r/w   0*/
		uint8_t MAC_PHY_MBUS_FM_REG_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t MAC_PHY_MBUS_LANE_7_0                    : 8;	/* [15:8]     r/w   0*/
		uint8_t MAC_PHY_SDATA_EN_FM_REG_LANE             : 1;	/*     16     r/w   0*/
		uint8_t MAC_PHY_SDATA_EN_LANE                    : 1;	/*     17     r/w   0*/
		uint8_t MAC_PHY_SDATA_LANE_5_0                   : 6;	/*[23:18]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t MAC_PHY_PCS_BYPASS_FM_REG_LANE           : 1;	/*     26     r/w   0*/
		uint8_t MAC_PHY_PCS_BYPASS_LANE                  : 1;	/*     27     r/w   0*/
		uint8_t MAC_PHY_EQ_FOM_DIRN_FM_REG_LANE          : 1;	/*     28     r/w   0*/
		uint8_t MAC_PHY_EQ_FOM_DIRN_LANE                 : 1;	/*     29     r/w   0*/
		uint8_t MAC_PHY_EQ_INVALID_REQ_FM_REG_LANE       : 1;	/*     30     r/w   0*/
		uint8_t MAC_PHY_EQ_INVALID_REQ_LANE              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG15_t;
__xdata __at( 0x593c ) volatile INPUT_PIN_DEBUG_PIPE_REG15_t INPUT_PIN_DEBUG_PIPE_REG15;
#define reg_MAC_PHY_ESM_CAL_REQUEST_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_ESM_CAL_REQUEST_FM_REG_LANE
#define reg_MAC_PHY_ESM_CAL_REQUEST_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_ESM_CAL_REQUEST_LANE
#define reg_MAC_PHY_ASYNCPOWERCHANGEACK_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_ASYNCPOWERCHANGEACK_FM_REG_LANE
#define reg_MAC_PHY_ASYNCPOWERCHANGEACK_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_ASYNCPOWERCHANGEACK_LANE
#define reg_MAC_PHY_MBUS_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_MBUS_FM_REG_LANE
#define reg_MAC_PHY_MBUS_LANE_7_0  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_MBUS_LANE_7_0
#define reg_MAC_PHY_SDATA_EN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_SDATA_EN_FM_REG_LANE
#define reg_MAC_PHY_SDATA_EN_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_SDATA_EN_LANE
#define reg_MAC_PHY_SDATA_LANE_5_0  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_SDATA_LANE_5_0
#define reg_MAC_PHY_PCS_BYPASS_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_PCS_BYPASS_FM_REG_LANE
#define reg_MAC_PHY_PCS_BYPASS_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_PCS_BYPASS_LANE
#define reg_MAC_PHY_EQ_FOM_DIRN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_EQ_FOM_DIRN_FM_REG_LANE
#define reg_MAC_PHY_EQ_FOM_DIRN_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_EQ_FOM_DIRN_LANE
#define reg_MAC_PHY_EQ_INVALID_REQ_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_EQ_INVALID_REQ_FM_REG_LANE
#define reg_MAC_PHY_EQ_INVALID_REQ_LANE  INPUT_PIN_DEBUG_PIPE_REG15.BF.MAC_PHY_EQ_INVALID_REQ_LANE

// 0x0040	INPUT_PIN_DEBUG_PIPE_REG16		PHY Isolation Debug Register16
typedef union {
	struct {
		uint8_t MAC_PHY_ESM_RATE_LANE_31_0_b0            : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_ESM_RATE_LANE_31_0_b1            : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_ESM_RATE_LANE_31_0_b2            : 8;	/* [31:0]     r/w   0*/
		uint8_t MAC_PHY_ESM_RATE_LANE_31_0_b3            : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG16_t;
__xdata __at( 0x5940 ) volatile INPUT_PIN_DEBUG_PIPE_REG16_t INPUT_PIN_DEBUG_PIPE_REG16;
#define reg_MAC_PHY_ESM_RATE_LANE_31_0_b0  INPUT_PIN_DEBUG_PIPE_REG16.BF.MAC_PHY_ESM_RATE_LANE_31_0_b0
#define reg_MAC_PHY_ESM_RATE_LANE_31_0_b1  INPUT_PIN_DEBUG_PIPE_REG16.BF.MAC_PHY_ESM_RATE_LANE_31_0_b1
#define reg_MAC_PHY_ESM_RATE_LANE_31_0_b2  INPUT_PIN_DEBUG_PIPE_REG16.BF.MAC_PHY_ESM_RATE_LANE_31_0_b2
#define reg_MAC_PHY_ESM_RATE_LANE_31_0_b3  INPUT_PIN_DEBUG_PIPE_REG16.BF.MAC_PHY_ESM_RATE_LANE_31_0_b3

// 0x0044	INPUT_PIN_DEBUG_PIPE_REG17		PHY Isolation Debug Register17
typedef union {
	struct {
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_LANE_23_16      : 8;	/*  [7:0]     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_CLK_REF_IN_FM_REG_LANE  : 1;	/*      8     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_CLK_REF_IN_LANE_2_0     : 3;	/* [11:9]     r/w   0*/
		uint8_t PIPE_LANE_TXCLK_REF_IN_FM_REG_LANE       : 1;	/*     12     r/w   0*/
		uint8_t PIPE_LANE_TXCLK_REF_IN_LANE_2_0          : 3;	/*[15:13]     r/w   0*/
		uint8_t PIPE_BIFURCATION_SEL_FM_REG_LANE         : 1;	/*     16     r/w   0*/
		uint8_t PIPE_BIFURCATION_SEL_LANE_1_0            : 2;	/*[18:17]     r/w   0*/
		uint8_t PIPE_LANE_MASTER_FM_REG_LANE             : 1;	/*     19     r/w   0*/
		uint8_t PIPE_LANE_MASTER_LANE                    : 1;	/*     20     r/w   0*/
		uint8_t PIPE_LANE_BREAK_FM_REG_LANE              : 1;	/*     21     r/w   0*/
		uint8_t PIPE_LANE_BREAK_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t PIPE_LANE_START_FM_REG_LANE              : 1;	/*     23     r/w   0*/
		uint8_t PIPE_LANE_START_LANE                     : 1;	/*     24     r/w   0*/
		uint8_t PIPE_STRAP_ENABLE_FM_REG_LANE            : 1;	/*     25     r/w   0*/
		uint8_t PIPE_STRAP_ENABLE_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t MAC_PHY_PCLKCHANGEACK_FM_REG_LANE        : 1;	/*     27     r/w   0*/
		uint8_t MAC_PHY_PCLKCHANGEACK_LANE               : 1;	/*     28     r/w   0*/
		uint8_t MAC_PHY_HOTRESET_EVENT_FM_REG_LANE       : 1;	/*     29     r/w   0*/
		uint8_t MAC_PHY_HOTRESET_EVENT_LANE              : 1;	/*     30     r/w   0*/
		uint8_t MAC_PHY_ESM_RATE_FM_REG_LANE             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG17_t;
__xdata __at( 0x5944 ) volatile INPUT_PIN_DEBUG_PIPE_REG17_t INPUT_PIN_DEBUG_PIPE_REG17;
#define reg_PIPE_LANE_BUNDLE_IN_PREV_LANE_23_16  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_BUNDLE_IN_PREV_LANE_23_16
#define reg_PIPE_LANE_BUNDLE_CLK_REF_IN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_BUNDLE_CLK_REF_IN_FM_REG_LANE
#define reg_PIPE_LANE_BUNDLE_CLK_REF_IN_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_BUNDLE_CLK_REF_IN_LANE_2_0
#define reg_PIPE_LANE_TXCLK_REF_IN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_TXCLK_REF_IN_FM_REG_LANE
#define reg_PIPE_LANE_TXCLK_REF_IN_LANE_2_0  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_TXCLK_REF_IN_LANE_2_0
#define reg_PIPE_BIFURCATION_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_BIFURCATION_SEL_FM_REG_LANE
#define reg_PIPE_BIFURCATION_SEL_LANE_1_0  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_BIFURCATION_SEL_LANE_1_0
#define reg_PIPE_LANE_MASTER_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_MASTER_FM_REG_LANE
#define reg_PIPE_LANE_MASTER_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_MASTER_LANE
#define reg_PIPE_LANE_BREAK_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_BREAK_FM_REG_LANE
#define reg_PIPE_LANE_BREAK_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_BREAK_LANE
#define reg_PIPE_LANE_START_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_START_FM_REG_LANE
#define reg_PIPE_LANE_START_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_LANE_START_LANE
#define reg_PIPE_STRAP_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_STRAP_ENABLE_FM_REG_LANE
#define reg_PIPE_STRAP_ENABLE_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.PIPE_STRAP_ENABLE_LANE
#define reg_MAC_PHY_PCLKCHANGEACK_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.MAC_PHY_PCLKCHANGEACK_FM_REG_LANE
#define reg_MAC_PHY_PCLKCHANGEACK_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.MAC_PHY_PCLKCHANGEACK_LANE
#define reg_MAC_PHY_HOTRESET_EVENT_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.MAC_PHY_HOTRESET_EVENT_FM_REG_LANE
#define reg_MAC_PHY_HOTRESET_EVENT_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.MAC_PHY_HOTRESET_EVENT_LANE
#define reg_MAC_PHY_ESM_RATE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG17.BF.MAC_PHY_ESM_RATE_FM_REG_LANE

// 0x0048	INPUT_PIN_DEBUG_PIPE_REG18		PHY Isolation Debug Register18
typedef union {
	struct {
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_LANE_23_16      : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_FM_REG_LANE     : 1;	/*     15     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0_b0    : 8;	/*[31:16]     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0_b1    : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG18_t;
__xdata __at( 0x5948 ) volatile INPUT_PIN_DEBUG_PIPE_REG18_t INPUT_PIN_DEBUG_PIPE_REG18;
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_LANE_23_16  INPUT_PIN_DEBUG_PIPE_REG18.BF.PIPE_LANE_BUNDLE_IN_NEXT_LANE_23_16
#define reg_PIPE_LANE_BUNDLE_IN_PREV_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG18.BF.PIPE_LANE_BUNDLE_IN_PREV_FM_REG_LANE
#define reg_PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0_b0  INPUT_PIN_DEBUG_PIPE_REG18.BF.PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0_b0
#define reg_PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0_b1  INPUT_PIN_DEBUG_PIPE_REG18.BF.PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0_b1
#define reg_PIPE_LANE_BUNDLE_IN_PREV_LANE_15_0  INPUT_PIN_DEBUG_PIPE_REG18.WT.W1

// 0x004c	INPUT_PIN_DEBUG_PIPE_REG19		PHY Isolation Debug Register19
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PIPE_LPC_ENABLE_FM_REG_LANE              : 1;	/*      1     r/w   0*/
		uint8_t PIPE_LPC_ENABLE_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t PIPE_BUS_WIDTH_FM_REG_LANE               : 1;	/*      3     r/w   0*/
		uint8_t PIPE_BUS_WIDTH_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t PIPE_PCLK_MODE_FM_REG_LANE               : 1;	/*      5     r/w   0*/
		uint8_t PIPE_PCLK_MODE_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t PIPE_CFG_MODE_FM_REG_LANE                : 1;	/*      7     r/w   0*/
		uint8_t PIPE_CFG_MODE_LANE                       : 1;	/*      8     r/w   0*/
		uint8_t PIPE_TXFIFO_START_IN_FM_REG_LANE         : 1;	/*      9     r/w   0*/
		uint8_t PIPE_TXFIFO_START_IN_LANE                : 1;	/*     10     r/w   0*/
		uint8_t PIN_RESET_CORE_RX_FM_REG_LANE            : 1;	/*     11     r/w   0*/
		uint8_t PIN_RESET_CORE_RX_LANE                   : 1;	/*     12     r/w   0*/
		uint8_t PIN_RESET_CORE_TX_FM_REG_LANE            : 1;	/*     13     r/w   0*/
		uint8_t PIN_RESET_CORE_TX_LANE                   : 1;	/*     14     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_FM_REG_LANE     : 1;	/*     15     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0_b0    : 8;	/*[31:16]     r/w   0*/
		uint8_t PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0_b1    : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG19_t;
__xdata __at( 0x594c ) volatile INPUT_PIN_DEBUG_PIPE_REG19_t INPUT_PIN_DEBUG_PIPE_REG19;
#define reg_PIPE_LPC_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_LPC_ENABLE_FM_REG_LANE
#define reg_PIPE_LPC_ENABLE_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_LPC_ENABLE_LANE
#define reg_PIPE_BUS_WIDTH_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_BUS_WIDTH_FM_REG_LANE
#define reg_PIPE_BUS_WIDTH_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_BUS_WIDTH_LANE
#define reg_PIPE_PCLK_MODE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_PCLK_MODE_FM_REG_LANE
#define reg_PIPE_PCLK_MODE_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_PCLK_MODE_LANE
#define reg_PIPE_CFG_MODE_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_CFG_MODE_FM_REG_LANE
#define reg_PIPE_CFG_MODE_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_CFG_MODE_LANE
#define reg_PIPE_TXFIFO_START_IN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_TXFIFO_START_IN_FM_REG_LANE
#define reg_PIPE_TXFIFO_START_IN_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_TXFIFO_START_IN_LANE
#define reg_PIN_RESET_CORE_RX_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIN_RESET_CORE_RX_FM_REG_LANE
#define reg_PIN_RESET_CORE_RX_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIN_RESET_CORE_RX_LANE
#define reg_PIN_RESET_CORE_TX_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIN_RESET_CORE_TX_FM_REG_LANE
#define reg_PIN_RESET_CORE_TX_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIN_RESET_CORE_TX_LANE
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_LANE_BUNDLE_IN_NEXT_FM_REG_LANE
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0_b0  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0_b0
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0_b1  INPUT_PIN_DEBUG_PIPE_REG19.BF.PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0_b1
#define reg_PIPE_LANE_BUNDLE_IN_NEXT_LANE_15_0  INPUT_PIN_DEBUG_PIPE_REG19.WT.W1

// 0x0050	INPUT_PIN_DEBUG_PIPE_REG20		PHY Isolation Debug Register20
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:0]     r/w   0*/
		uint8_t PIPE_RESERVED_IN_FM_REG_LANE             : 1;	/*     29     r/w   0*/
		uint8_t PIPE_RESERVED_IN_LANE_1_0                : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PIPE_REG20_t;
__xdata __at( 0x5950 ) volatile INPUT_PIN_DEBUG_PIPE_REG20_t INPUT_PIN_DEBUG_PIPE_REG20;
#define reg_PIPE_RESERVED_IN_FM_REG_LANE  INPUT_PIN_DEBUG_PIPE_REG20.BF.PIPE_RESERVED_IN_FM_REG_LANE
#define reg_PIPE_RESERVED_IN_LANE_1_0  INPUT_PIN_DEBUG_PIPE_REG20.BF.PIPE_RESERVED_IN_LANE_1_0

#endif
