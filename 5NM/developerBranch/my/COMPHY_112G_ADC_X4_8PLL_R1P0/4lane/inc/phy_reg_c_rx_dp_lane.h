#ifndef PHY_REG_C_RX_DP_LANE_H
#define PHY_REG_C_RX_DP_LANE_H



// 0x0000	RX_DP_REG0		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_DAT_CLK_EN_LANE_5_0                : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG0_t;
__xdata __at( 0x4800 ) volatile RX_DP_REG0_t RX_DP_REG0;
#define reg_RX_DP_DAT_CLK_EN_LANE_5_0  RX_DP_REG0.BF.RX_DP_DAT_CLK_EN_LANE_5_0

// 0x0008	RX_DP_REG2		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_BUF_CLK_EN_LANE                    : 1;	/*      0     r/w   1*/
		uint8_t RX_DP_BUF_CLK_ON_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t RX_DP_LMS_FFE_SQ_FREZ_EN_LANE            : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PAT_FREZ_EN_LANE           : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_TOP_EN_LANE                    : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_TOP_LD_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t RX_DP_LMS_REQ_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_FFE_FLT_B1_SEL_LANE_5_0            : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_DP_FFE_FLT_B0_SEL_LANE_5_0            : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_DP_DFE_BLIND_ERROR_LEVEL_LANE_6_0     : 7;	/*[30:24]     r/w 7'h60*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG2_t;
__xdata __at( 0x4808 ) volatile RX_DP_REG2_t RX_DP_REG2;
#define reg_RX_DP_BUF_CLK_EN_LANE  RX_DP_REG2.BF.RX_DP_BUF_CLK_EN_LANE
#define reg_RX_DP_BUF_CLK_ON_LANE  RX_DP_REG2.BF.RX_DP_BUF_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_SQ_FREZ_EN_LANE  RX_DP_REG2.BF.RX_DP_LMS_FFE_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_FFE_PAT_FREZ_EN_LANE  RX_DP_REG2.BF.RX_DP_LMS_FFE_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_TOP_EN_LANE  RX_DP_REG2.BF.RX_DP_LMS_TOP_EN_LANE
#define reg_RX_DP_LMS_TOP_LD_LANE  RX_DP_REG2.BF.RX_DP_LMS_TOP_LD_LANE
#define reg_RX_DP_LMS_REQ_LANE  RX_DP_REG2.BF.RX_DP_LMS_REQ_LANE
#define reg_RX_DP_FFE_FLT_B1_SEL_LANE_5_0  RX_DP_REG2.BF.RX_DP_FFE_FLT_B1_SEL_LANE_5_0
#define reg_RX_DP_FFE_FLT_B0_SEL_LANE_5_0  RX_DP_REG2.BF.RX_DP_FFE_FLT_B0_SEL_LANE_5_0
#define reg_RX_DP_DFE_BLIND_ERROR_LEVEL_LANE_6_0  RX_DP_REG2.BF.RX_DP_DFE_BLIND_ERROR_LEVEL_LANE_6_0

// 0x000c	RX_DP_REG3		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_BLW_INV_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_BLW_LD_LANE                    : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_BLW_EN_LANE                    : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_BLW_CLK_EN_LANE                : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_BLW_CLK_ON_LANE                : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_BLW_PAT_FREZ_EN_LANE           : 1;	/*      5     r/w   0*/
		uint8_t RX_DP_LMS_BLW_SQ_FREZ_EN_LANE            : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w   0*/
		uint8_t RX_DP_LMS_BLW_MU_LANE_3_0                : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG3_t;
__xdata __at( 0x480c ) volatile RX_DP_REG3_t RX_DP_REG3;
#define reg_RX_DP_LMS_BLW_INV_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_INV_LANE
#define reg_RX_DP_LMS_BLW_LD_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_LD_LANE
#define reg_RX_DP_LMS_BLW_EN_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_EN_LANE
#define reg_RX_DP_LMS_BLW_CLK_EN_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_CLK_EN_LANE
#define reg_RX_DP_LMS_BLW_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_CLK_ON_LANE
#define reg_RX_DP_LMS_BLW_PAT_FREZ_EN_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_BLW_SQ_FREZ_EN_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_BLW_MU_LANE_3_0  RX_DP_REG3.BF.RX_DP_LMS_BLW_MU_LANE_3_0

// 0x0010	RX_DP_REG4		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_BLW_COE_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DP_LMS_BLW_EXT_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG4_t;
__xdata __at( 0x4810 ) volatile RX_DP_REG4_t RX_DP_REG4;
#define reg_RX_DP_LMS_BLW_COE_LANE_5_0  RX_DP_REG4.BF.RX_DP_LMS_BLW_COE_LANE_5_0
#define reg_RX_DP_LMS_BLW_EXT_LANE_5_0  RX_DP_REG4.BF.RX_DP_LMS_BLW_EXT_LANE_5_0

// 0x0014	RX_DP_REG5		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0_b0    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0_b1    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_DP_REG5_t;
__xdata __at( 0x4814 ) volatile RX_DP_REG5_t RX_DP_REG5;
#define reg_RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0_b0  RX_DP_REG5.BF.RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0_b0
#define reg_RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0_b1  RX_DP_REG5.BF.RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0_b1
#define reg_RX_DP_LMS_FFE_PST_CLK_ON_LANE_15_0  RX_DP_REG5.WT.W0

// 0x0018	RX_DP_REG6		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0_b0    : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0_b1    : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_DP_REG6_t;
__xdata __at( 0x4818 ) volatile RX_DP_REG6_t RX_DP_REG6;
#define reg_RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0_b0  RX_DP_REG6.BF.RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0_b0
#define reg_RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0_b1  RX_DP_REG6.BF.RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0_b1
#define reg_RX_DP_LMS_FFE_PST_CLK_EN_LANE_15_0  RX_DP_REG6.WT.W0

// 0x001c	RX_FFE_REG0		RX FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST_EN_LANE_15_0_b0        : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RX_DP_LMS_FFE_PST_EN_LANE_15_0_b1        : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FFE_REG0_t;
__xdata __at( 0x481c ) volatile RX_FFE_REG0_t RX_FFE_REG0;
#define reg_RX_DP_LMS_FFE_PST_EN_LANE_15_0_b0  RX_FFE_REG0.BF.RX_DP_LMS_FFE_PST_EN_LANE_15_0_b0
#define reg_RX_DP_LMS_FFE_PST_EN_LANE_15_0_b1  RX_FFE_REG0.BF.RX_DP_LMS_FFE_PST_EN_LANE_15_0_b1
#define reg_RX_DP_LMS_FFE_PST_EN_LANE_15_0  RX_FFE_REG0.WT.W0

// 0x0020	RX_DFE_REG0		RX DFE Register
typedef union {
	struct {
		uint8_t RX_DP_DFE_DELTA_TH_BOT_LANE_6_0          : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_DFE_DELTA_TH_MID_LANE_6_0          : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_DP_DFE_DELTA_TH_TOP_LANE_6_0          : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_DP_BLIND_ERROR_EN_LANE                : 1;	/*     24     r/w   0*/
		uint8_t RX_DP_DFE_LOAD_LEVEL_LANE                : 1;	/*     25     r/w   0*/
		uint8_t RX_DP_DFE_ONE_PLUS_D_EN_LANE             : 1;	/*     26     r/w   0*/
		uint8_t RX_DP_DFE_TAP_ONE_FORCE_LANE             : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DFE_REG0_t;
__xdata __at( 0x4820 ) volatile RX_DFE_REG0_t RX_DFE_REG0;
#define reg_RX_DP_DFE_DELTA_TH_BOT_LANE_6_0  RX_DFE_REG0.BF.RX_DP_DFE_DELTA_TH_BOT_LANE_6_0
#define reg_RX_DP_DFE_DELTA_TH_MID_LANE_6_0  RX_DFE_REG0.BF.RX_DP_DFE_DELTA_TH_MID_LANE_6_0
#define reg_RX_DP_DFE_DELTA_TH_TOP_LANE_6_0  RX_DFE_REG0.BF.RX_DP_DFE_DELTA_TH_TOP_LANE_6_0
#define reg_RX_DP_BLIND_ERROR_EN_LANE  RX_DFE_REG0.BF.RX_DP_BLIND_ERROR_EN_LANE
#define reg_RX_DP_DFE_LOAD_LEVEL_LANE  RX_DFE_REG0.BF.RX_DP_DFE_LOAD_LEVEL_LANE
#define reg_RX_DP_DFE_ONE_PLUS_D_EN_LANE  RX_DFE_REG0.BF.RX_DP_DFE_ONE_PLUS_D_EN_LANE
#define reg_RX_DP_DFE_TAP_ONE_FORCE_LANE  RX_DFE_REG0.BF.RX_DP_DFE_TAP_ONE_FORCE_LANE

// 0x0024	RX_DP_LMS_REG0		RX DP LMS Common Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST_LD_LANE_15_0_b0        : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RX_DP_LMS_FFE_PST_LD_LANE_15_0_b1        : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_DP_LMS_REG0_t;
__xdata __at( 0x4824 ) volatile RX_DP_LMS_REG0_t RX_DP_LMS_REG0;
#define reg_RX_DP_LMS_FFE_PST_LD_LANE_15_0_b0  RX_DP_LMS_REG0.BF.RX_DP_LMS_FFE_PST_LD_LANE_15_0_b0
#define reg_RX_DP_LMS_FFE_PST_LD_LANE_15_0_b1  RX_DP_LMS_REG0.BF.RX_DP_LMS_FFE_PST_LD_LANE_15_0_b1
#define reg_RX_DP_LMS_FFE_PST_LD_LANE_15_0  RX_DP_LMS_REG0.WT.W0

// 0x0028	RX_DP_LMS_BLW_REG0		RX DP LMS BLW Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST_INV_LANE_15_0_b0       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RX_DP_LMS_FFE_PST_INV_LANE_15_0_b1       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_DP_LMS_BLW_REG0_t;
__xdata __at( 0x4828 ) volatile RX_DP_LMS_BLW_REG0_t RX_DP_LMS_BLW_REG0;
#define reg_RX_DP_LMS_FFE_PST_INV_LANE_15_0_b0  RX_DP_LMS_BLW_REG0.BF.RX_DP_LMS_FFE_PST_INV_LANE_15_0_b0
#define reg_RX_DP_LMS_FFE_PST_INV_LANE_15_0_b1  RX_DP_LMS_BLW_REG0.BF.RX_DP_LMS_FFE_PST_INV_LANE_15_0_b1
#define reg_RX_DP_LMS_FFE_PST_INV_LANE_15_0  RX_DP_LMS_BLW_REG0.WT.W0

// 0x002c	RX_DP_LMS_GAIN_REG0		RX DP LMS Gain Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE_CLK_EN_LANE_5_0        : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE_CLK_ON_LANE_5_0        : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_GAIN_REG0_t;
__xdata __at( 0x482c ) volatile RX_DP_LMS_GAIN_REG0_t RX_DP_LMS_GAIN_REG0;
#define reg_RX_DP_LMS_FFE_PRE_CLK_EN_LANE_5_0  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_FFE_PRE_CLK_EN_LANE_5_0
#define reg_RX_DP_LMS_FFE_PRE_CLK_ON_LANE_5_0  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_FFE_PRE_CLK_ON_LANE_5_0

// 0x0030	RX_DP_LMS_DFE_REG0		RX DP LMS DFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE_LD_LANE_5_0            : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE_EN_LANE_5_0            : 6;	/*[21:16]     r/w 6'h3f*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_DFE_REG0_t;
__xdata __at( 0x4830 ) volatile RX_DP_LMS_DFE_REG0_t RX_DP_LMS_DFE_REG0;
#define reg_RX_DP_LMS_FFE_PRE_LD_LANE_5_0  RX_DP_LMS_DFE_REG0.BF.RX_DP_LMS_FFE_PRE_LD_LANE_5_0
#define reg_RX_DP_LMS_FFE_PRE_EN_LANE_5_0  RX_DP_LMS_DFE_REG0.BF.RX_DP_LMS_FFE_PRE_EN_LANE_5_0

// 0x0034	RX_DP_LMS_FFE_CLK_EN		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE_INV_LANE_5_0           : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_CLK_EN_t;
__xdata __at( 0x4834 ) volatile RX_DP_LMS_FFE_CLK_EN_t RX_DP_LMS_FFE_CLK_EN;
#define reg_RX_DP_LMS_FFE_PRE_INV_LANE_5_0  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE_INV_LANE_5_0

// 0x0038	RX_DP_LMS_FFE_EN		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT_B0_CLK_EN_LANE_3_0     : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B1_CLK_EN_LANE_3_0     : 4;	/* [11:8]     r/w 4'hf*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B0_CLK_ON_LANE_3_0     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B1_CLK_ON_LANE_3_0     : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_EN_t;
__xdata __at( 0x4838 ) volatile RX_DP_LMS_FFE_EN_t RX_DP_LMS_FFE_EN;
#define reg_RX_DP_LMS_FFE_FLT_B0_CLK_EN_LANE_3_0  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_FLT_B0_CLK_EN_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B1_CLK_EN_LANE_3_0  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_FLT_B1_CLK_EN_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B0_CLK_ON_LANE_3_0  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_FLT_B0_CLK_ON_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B1_CLK_ON_LANE_3_0  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_FLT_B1_CLK_ON_LANE_3_0

// 0x003c	RX_DP_LMS_FFE_LD		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT_B0_LD_LANE_3_0         : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B1_LD_LANE_3_0         : 4;	/* [11:8]     r/w 4'hf*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B0_EN_LANE_3_0         : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B1_EN_LANE_3_0         : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_LD_t;
__xdata __at( 0x483c ) volatile RX_DP_LMS_FFE_LD_t RX_DP_LMS_FFE_LD;
#define reg_RX_DP_LMS_FFE_FLT_B0_LD_LANE_3_0  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_FLT_B0_LD_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B1_LD_LANE_3_0  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_FLT_B1_LD_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B0_EN_LANE_3_0  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_FLT_B0_EN_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B1_EN_LANE_3_0  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_FLT_B1_EN_LANE_3_0

// 0x0040	RX_DP_LMS_FFE_INV		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT_B0_INV_LANE_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_B1_INV_LANE_3_0        : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_INV_t;
__xdata __at( 0x4840 ) volatile RX_DP_LMS_FFE_INV_t RX_DP_LMS_FFE_INV;
#define reg_RX_DP_LMS_FFE_FLT_B0_INV_LANE_3_0  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_FLT_B0_INV_LANE_3_0
#define reg_RX_DP_LMS_FFE_FLT_B1_INV_LANE_3_0  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_FLT_B1_INV_LANE_3_0

// 0x0044	RX_DP_LMS_FFE_MU		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [11:0]     r/w   0*/
		uint8_t RESERVED_8                               : 4;	/* [11:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT_MU_LANE_3_0            : 4;	/*[15:12]     r/w 4'h5*/
		uint8_t RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0        : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RX_DP_LMS_FFE_PST1_MU_LANE_3_0           : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t RX_DP_LMS_FFE_PRE1_MU_LANE_3_0           : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0        : 4;	/*[31:28]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_MU_t;
__xdata __at( 0x4844 ) volatile RX_DP_LMS_FFE_MU_t RX_DP_LMS_FFE_MU;
#define reg_RX_DP_LMS_FFE_FLT_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_FLT_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST1_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PST1_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PRE1_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0

// 0x0048	RX_DP_LMS_FFE_REG2		RX DP LMS FFER Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_RUN_STOP_EN_LANE               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_DP_LMS_PRE_RUN_TIME_LANE_3_0          : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_DP_LMS_STOP_TIME_LANE_5_0             : 6;	/*[21:16]     r/w 6'hb*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_DP_LMS_RUN_TIME_LANE_5_0              : 6;	/*[29:24]     r/w 6'hb*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG2_t;
__xdata __at( 0x4848 ) volatile RX_DP_LMS_FFE_REG2_t RX_DP_LMS_FFE_REG2;
#define reg_RX_DP_LMS_RUN_STOP_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_RUN_STOP_EN_LANE
#define reg_RX_DP_LMS_PRE_RUN_TIME_LANE_3_0  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_PRE_RUN_TIME_LANE_3_0
#define reg_RX_DP_LMS_STOP_TIME_LANE_5_0  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_STOP_TIME_LANE_5_0
#define reg_RX_DP_LMS_RUN_TIME_LANE_5_0  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_RUN_TIME_LANE_5_0

// 0x004c	RX_DP_LMS_FFE_REG3		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE1_COE_LANE_6_0          : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0          : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*[31:23]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:23]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG3_t;
__xdata __at( 0x484c ) volatile RX_DP_LMS_FFE_REG3_t RX_DP_LMS_FFE_REG3;
#define reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0  RX_DP_LMS_FFE_REG3.BF.RX_DP_LMS_FFE_PRE1_COE_LANE_6_0
#define reg_RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0  RX_DP_LMS_FFE_REG3.BF.RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0

// 0x0050	RX_DP_LMS_FFE_REG4		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE2_COE_LANE_5_0          : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE2_EXT_LANE_5_0          : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG4_t;
__xdata __at( 0x4850 ) volatile RX_DP_LMS_FFE_REG4_t RX_DP_LMS_FFE_REG4;
#define reg_RX_DP_LMS_FFE_PRE2_COE_LANE_5_0  RX_DP_LMS_FFE_REG4.BF.RX_DP_LMS_FFE_PRE2_COE_LANE_5_0
#define reg_RX_DP_LMS_FFE_PRE2_EXT_LANE_5_0  RX_DP_LMS_FFE_REG4.BF.RX_DP_LMS_FFE_PRE2_EXT_LANE_5_0

// 0x0054	RX_DP_LMS_FFE_REG5		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE3_COE_LANE_4_0          : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE3_EXT_LANE_4_0          : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG5_t;
__xdata __at( 0x4854 ) volatile RX_DP_LMS_FFE_REG5_t RX_DP_LMS_FFE_REG5;
#define reg_RX_DP_LMS_FFE_PRE3_COE_LANE_4_0  RX_DP_LMS_FFE_REG5.BF.RX_DP_LMS_FFE_PRE3_COE_LANE_4_0
#define reg_RX_DP_LMS_FFE_PRE3_EXT_LANE_4_0  RX_DP_LMS_FFE_REG5.BF.RX_DP_LMS_FFE_PRE3_EXT_LANE_4_0

// 0x0058	RX_DP_LMS_FFE_REG6		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE4_COE_LANE_4_0          : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE4_EXT_LANE_4_0          : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG6_t;
__xdata __at( 0x4858 ) volatile RX_DP_LMS_FFE_REG6_t RX_DP_LMS_FFE_REG6;
#define reg_RX_DP_LMS_FFE_PRE4_COE_LANE_4_0  RX_DP_LMS_FFE_REG6.BF.RX_DP_LMS_FFE_PRE4_COE_LANE_4_0
#define reg_RX_DP_LMS_FFE_PRE4_EXT_LANE_4_0  RX_DP_LMS_FFE_REG6.BF.RX_DP_LMS_FFE_PRE4_EXT_LANE_4_0

// 0x005c	RX_DP_LMS_FFE_REG7		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE5_COE_LANE_2_0          : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0          : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG7_t;
__xdata __at( 0x485c ) volatile RX_DP_LMS_FFE_REG7_t RX_DP_LMS_FFE_REG7;
#define reg_RX_DP_LMS_FFE_PRE5_COE_LANE_2_0  RX_DP_LMS_FFE_REG7.BF.RX_DP_LMS_FFE_PRE5_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0  RX_DP_LMS_FFE_REG7.BF.RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0

// 0x0060	RX_DP_LMS_FFE_REG8		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE6_COE_LANE_2_0          : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0          : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG8_t;
__xdata __at( 0x4860 ) volatile RX_DP_LMS_FFE_REG8_t RX_DP_LMS_FFE_REG8;
#define reg_RX_DP_LMS_FFE_PRE6_COE_LANE_2_0  RX_DP_LMS_FFE_REG8.BF.RX_DP_LMS_FFE_PRE6_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0  RX_DP_LMS_FFE_REG8.BF.RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0

// 0x006c	RX_DP_LMS_FFE_REG11		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST1_COE_LANE_6_0          : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST1_EXT_LANE_6_0          : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*[31:23]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:23]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG11_t;
__xdata __at( 0x486c ) volatile RX_DP_LMS_FFE_REG11_t RX_DP_LMS_FFE_REG11;
#define reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0  RX_DP_LMS_FFE_REG11.BF.RX_DP_LMS_FFE_PST1_COE_LANE_6_0
#define reg_RX_DP_LMS_FFE_PST1_EXT_LANE_6_0  RX_DP_LMS_FFE_REG11.BF.RX_DP_LMS_FFE_PST1_EXT_LANE_6_0

// 0x0070	RX_DP_LMS_FFE_REG12		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST2_COE_LANE_5_0          : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST2_EXT_LANE_5_0          : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG12_t;
__xdata __at( 0x4870 ) volatile RX_DP_LMS_FFE_REG12_t RX_DP_LMS_FFE_REG12;
#define reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0  RX_DP_LMS_FFE_REG12.BF.RX_DP_LMS_FFE_PST2_COE_LANE_5_0
#define reg_RX_DP_LMS_FFE_PST2_EXT_LANE_5_0  RX_DP_LMS_FFE_REG12.BF.RX_DP_LMS_FFE_PST2_EXT_LANE_5_0

// 0x0074	RX_DP_LMS_FFE_REG13		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST3_COE_LANE_4_0          : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST3_EXT_LANE_4_0          : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG13_t;
__xdata __at( 0x4874 ) volatile RX_DP_LMS_FFE_REG13_t RX_DP_LMS_FFE_REG13;
#define reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0  RX_DP_LMS_FFE_REG13.BF.RX_DP_LMS_FFE_PST3_COE_LANE_4_0
#define reg_RX_DP_LMS_FFE_PST3_EXT_LANE_4_0  RX_DP_LMS_FFE_REG13.BF.RX_DP_LMS_FFE_PST3_EXT_LANE_4_0

// 0x0078	RX_DP_LMS_FFE_REG14		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST4_COE_LANE_3_0          : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST4_EXT_LANE_3_0          : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG14_t;
__xdata __at( 0x4878 ) volatile RX_DP_LMS_FFE_REG14_t RX_DP_LMS_FFE_REG14;
#define reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0  RX_DP_LMS_FFE_REG14.BF.RX_DP_LMS_FFE_PST4_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST4_EXT_LANE_3_0  RX_DP_LMS_FFE_REG14.BF.RX_DP_LMS_FFE_PST4_EXT_LANE_3_0

// 0x007c	RX_DP_LMS_FFE_REG15		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST5_COE_LANE_3_0          : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST5_EXT_LANE_3_0          : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG15_t;
__xdata __at( 0x487c ) volatile RX_DP_LMS_FFE_REG15_t RX_DP_LMS_FFE_REG15;
#define reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0  RX_DP_LMS_FFE_REG15.BF.RX_DP_LMS_FFE_PST5_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST5_EXT_LANE_3_0  RX_DP_LMS_FFE_REG15.BF.RX_DP_LMS_FFE_PST5_EXT_LANE_3_0

// 0x0080	RX_DP_LMS_FFE_REG16		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST6_COE_LANE_3_0          : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST6_EXT_LANE_3_0          : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG16_t;
__xdata __at( 0x4880 ) volatile RX_DP_LMS_FFE_REG16_t RX_DP_LMS_FFE_REG16;
#define reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0  RX_DP_LMS_FFE_REG16.BF.RX_DP_LMS_FFE_PST6_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST6_EXT_LANE_3_0  RX_DP_LMS_FFE_REG16.BF.RX_DP_LMS_FFE_PST6_EXT_LANE_3_0

// 0x0084	RX_DP_LMS_FFE_REG17		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST7_COE_LANE_2_0          : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST7_EXT_LANE_2_0          : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG17_t;
__xdata __at( 0x4884 ) volatile RX_DP_LMS_FFE_REG17_t RX_DP_LMS_FFE_REG17;
#define reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0  RX_DP_LMS_FFE_REG17.BF.RX_DP_LMS_FFE_PST7_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST7_EXT_LANE_2_0  RX_DP_LMS_FFE_REG17.BF.RX_DP_LMS_FFE_PST7_EXT_LANE_2_0

// 0x0088	RX_DP_LMS_FFE_REG18		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST8_COE_LANE_2_0          : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST8_EXT_LANE_2_0          : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG18_t;
__xdata __at( 0x4888 ) volatile RX_DP_LMS_FFE_REG18_t RX_DP_LMS_FFE_REG18;
#define reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0  RX_DP_LMS_FFE_REG18.BF.RX_DP_LMS_FFE_PST8_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST8_EXT_LANE_2_0  RX_DP_LMS_FFE_REG18.BF.RX_DP_LMS_FFE_PST8_EXT_LANE_2_0

// 0x008c	RX_DP_LMS_FFE_REG19		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST9_COE_LANE_2_0          : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST9_EXT_LANE_2_0          : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG19_t;
__xdata __at( 0x488c ) volatile RX_DP_LMS_FFE_REG19_t RX_DP_LMS_FFE_REG19;
#define reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0  RX_DP_LMS_FFE_REG19.BF.RX_DP_LMS_FFE_PST9_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST9_EXT_LANE_2_0  RX_DP_LMS_FFE_REG19.BF.RX_DP_LMS_FFE_PST9_EXT_LANE_2_0

// 0x0090	RX_DP_LMS_FFE_REG20		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST10_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST10_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG20_t;
__xdata __at( 0x4890 ) volatile RX_DP_LMS_FFE_REG20_t RX_DP_LMS_FFE_REG20;
#define reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0  RX_DP_LMS_FFE_REG20.BF.RX_DP_LMS_FFE_PST10_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST10_EXT_LANE_2_0  RX_DP_LMS_FFE_REG20.BF.RX_DP_LMS_FFE_PST10_EXT_LANE_2_0

// 0x0094	RX_DP_LMS_FFE_REG21		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST11_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST11_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG21_t;
__xdata __at( 0x4894 ) volatile RX_DP_LMS_FFE_REG21_t RX_DP_LMS_FFE_REG21;
#define reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0  RX_DP_LMS_FFE_REG21.BF.RX_DP_LMS_FFE_PST11_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST11_EXT_LANE_2_0  RX_DP_LMS_FFE_REG21.BF.RX_DP_LMS_FFE_PST11_EXT_LANE_2_0

// 0x0098	RX_DP_LMS_FFE_REG22		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST12_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST12_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG22_t;
__xdata __at( 0x4898 ) volatile RX_DP_LMS_FFE_REG22_t RX_DP_LMS_FFE_REG22;
#define reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0  RX_DP_LMS_FFE_REG22.BF.RX_DP_LMS_FFE_PST12_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST12_EXT_LANE_2_0  RX_DP_LMS_FFE_REG22.BF.RX_DP_LMS_FFE_PST12_EXT_LANE_2_0

// 0x009c	RX_DP_LMS_FFE_REG23		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST13_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST13_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG23_t;
__xdata __at( 0x489c ) volatile RX_DP_LMS_FFE_REG23_t RX_DP_LMS_FFE_REG23;
#define reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0  RX_DP_LMS_FFE_REG23.BF.RX_DP_LMS_FFE_PST13_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST13_EXT_LANE_2_0  RX_DP_LMS_FFE_REG23.BF.RX_DP_LMS_FFE_PST13_EXT_LANE_2_0

// 0x00a0	RX_DP_LMS_FFE_REG24		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST14_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST14_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG24_t;
__xdata __at( 0x48a0 ) volatile RX_DP_LMS_FFE_REG24_t RX_DP_LMS_FFE_REG24;
#define reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0  RX_DP_LMS_FFE_REG24.BF.RX_DP_LMS_FFE_PST14_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST14_EXT_LANE_2_0  RX_DP_LMS_FFE_REG24.BF.RX_DP_LMS_FFE_PST14_EXT_LANE_2_0

// 0x00a4	RX_DP_LMS_FFE_REG25		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST15_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST15_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG25_t;
__xdata __at( 0x48a4 ) volatile RX_DP_LMS_FFE_REG25_t RX_DP_LMS_FFE_REG25;
#define reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0  RX_DP_LMS_FFE_REG25.BF.RX_DP_LMS_FFE_PST15_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST15_EXT_LANE_2_0  RX_DP_LMS_FFE_REG25.BF.RX_DP_LMS_FFE_PST15_EXT_LANE_2_0

// 0x00a8	RX_DP_LMS_FFE_REG26		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST16_COE_LANE_2_0         : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST16_EXT_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG26_t;
__xdata __at( 0x48a8 ) volatile RX_DP_LMS_FFE_REG26_t RX_DP_LMS_FFE_REG26;
#define reg_RX_DP_LMS_FFE_PST16_COE_LANE_2_0  RX_DP_LMS_FFE_REG26.BF.RX_DP_LMS_FFE_PST16_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST16_EXT_LANE_2_0  RX_DP_LMS_FFE_REG26.BF.RX_DP_LMS_FFE_PST16_EXT_LANE_2_0

// 0x00bc	RX_DP_LMS_FFE_REG31		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT1_B0_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT1_B0_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG31_t;
__xdata __at( 0x48bc ) volatile RX_DP_LMS_FFE_REG31_t RX_DP_LMS_FFE_REG31;
#define reg_RX_DP_LMS_FFE_FLT1_B0_COE_LANE_2_0  RX_DP_LMS_FFE_REG31.BF.RX_DP_LMS_FFE_FLT1_B0_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT1_B0_EXT_LANE_2_0  RX_DP_LMS_FFE_REG31.BF.RX_DP_LMS_FFE_FLT1_B0_EXT_LANE_2_0

// 0x00c0	RX_DP_LMS_FFE_REG32		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT2_B0_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT2_B0_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG32_t;
__xdata __at( 0x48c0 ) volatile RX_DP_LMS_FFE_REG32_t RX_DP_LMS_FFE_REG32;
#define reg_RX_DP_LMS_FFE_FLT2_B0_COE_LANE_2_0  RX_DP_LMS_FFE_REG32.BF.RX_DP_LMS_FFE_FLT2_B0_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT2_B0_EXT_LANE_2_0  RX_DP_LMS_FFE_REG32.BF.RX_DP_LMS_FFE_FLT2_B0_EXT_LANE_2_0

// 0x00c4	RX_DP_LMS_FFE_REG33		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT3_B0_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT3_B0_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG33_t;
__xdata __at( 0x48c4 ) volatile RX_DP_LMS_FFE_REG33_t RX_DP_LMS_FFE_REG33;
#define reg_RX_DP_LMS_FFE_FLT3_B0_COE_LANE_2_0  RX_DP_LMS_FFE_REG33.BF.RX_DP_LMS_FFE_FLT3_B0_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT3_B0_EXT_LANE_2_0  RX_DP_LMS_FFE_REG33.BF.RX_DP_LMS_FFE_FLT3_B0_EXT_LANE_2_0

// 0x00c8	RX_DP_LMS_FFE_REG34		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT4_B0_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT4_B0_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG34_t;
__xdata __at( 0x48c8 ) volatile RX_DP_LMS_FFE_REG34_t RX_DP_LMS_FFE_REG34;
#define reg_RX_DP_LMS_FFE_FLT4_B0_COE_LANE_2_0  RX_DP_LMS_FFE_REG34.BF.RX_DP_LMS_FFE_FLT4_B0_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT4_B0_EXT_LANE_2_0  RX_DP_LMS_FFE_REG34.BF.RX_DP_LMS_FFE_FLT4_B0_EXT_LANE_2_0

// 0x00cc	RX_DP_LMS_FFE_REG35		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT1_B1_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT1_B1_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG35_t;
__xdata __at( 0x48cc ) volatile RX_DP_LMS_FFE_REG35_t RX_DP_LMS_FFE_REG35;
#define reg_RX_DP_LMS_FFE_FLT1_B1_COE_LANE_2_0  RX_DP_LMS_FFE_REG35.BF.RX_DP_LMS_FFE_FLT1_B1_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT1_B1_EXT_LANE_2_0  RX_DP_LMS_FFE_REG35.BF.RX_DP_LMS_FFE_FLT1_B1_EXT_LANE_2_0

// 0x00d0	RX_DP_LMS_FFE_REG36		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT2_B1_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT2_B1_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG36_t;
__xdata __at( 0x48d0 ) volatile RX_DP_LMS_FFE_REG36_t RX_DP_LMS_FFE_REG36;
#define reg_RX_DP_LMS_FFE_FLT2_B1_COE_LANE_2_0  RX_DP_LMS_FFE_REG36.BF.RX_DP_LMS_FFE_FLT2_B1_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT2_B1_EXT_LANE_2_0  RX_DP_LMS_FFE_REG36.BF.RX_DP_LMS_FFE_FLT2_B1_EXT_LANE_2_0

// 0x00d4	RX_DP_LMS_FFE_REG37		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT3_B1_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT3_B1_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG37_t;
__xdata __at( 0x48d4 ) volatile RX_DP_LMS_FFE_REG37_t RX_DP_LMS_FFE_REG37;
#define reg_RX_DP_LMS_FFE_FLT3_B1_COE_LANE_2_0  RX_DP_LMS_FFE_REG37.BF.RX_DP_LMS_FFE_FLT3_B1_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT3_B1_EXT_LANE_2_0  RX_DP_LMS_FFE_REG37.BF.RX_DP_LMS_FFE_FLT3_B1_EXT_LANE_2_0

// 0x00d8	RX_DP_LMS_FFE_REG38		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT4_B1_COE_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT4_B1_EXT_LANE_2_0       : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG38_t;
__xdata __at( 0x48d8 ) volatile RX_DP_LMS_FFE_REG38_t RX_DP_LMS_FFE_REG38;
#define reg_RX_DP_LMS_FFE_FLT4_B1_COE_LANE_2_0  RX_DP_LMS_FFE_REG38.BF.RX_DP_LMS_FFE_FLT4_B1_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT4_B1_EXT_LANE_2_0  RX_DP_LMS_FFE_REG38.BF.RX_DP_LMS_FFE_FLT4_B1_EXT_LANE_2_0

// 0x00dc	RX_DP_LMS_FFE_REG39		RX DP LMS Gain Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_GAIN_INV_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_LD_LANE                   : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_EN_LANE                   : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_CLK_EN_LANE               : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_CLK_ON_LANE               : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_PAT_FREZ_EN_LANE          : 1;	/*      5     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_SQ_FREZ_EN_LANE           : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_MU_LANE_3_0               : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG39_t;
__xdata __at( 0x48dc ) volatile RX_DP_LMS_FFE_REG39_t RX_DP_LMS_FFE_REG39;
#define reg_RX_DP_LMS_GAIN_INV_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_INV_LANE
#define reg_RX_DP_LMS_GAIN_LD_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_LD_LANE
#define reg_RX_DP_LMS_GAIN_EN_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_EN_LANE
#define reg_RX_DP_LMS_GAIN_CLK_EN_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_CLK_EN_LANE
#define reg_RX_DP_LMS_GAIN_CLK_ON_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_CLK_ON_LANE
#define reg_RX_DP_LMS_GAIN_PAT_FREZ_EN_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_GAIN_SQ_FREZ_EN_LANE  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_GAIN_MU_LANE_3_0  RX_DP_LMS_FFE_REG39.BF.RX_DP_LMS_GAIN_MU_LANE_3_0

// 0x00e0	RX_DP_LMS_FFE_REG40		RX DP LMS Gain Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_GAIN_COE_LANE_10_0_b0          : 8;	/* [10:0]       r 11'h0*/
		uint8_t RX_DP_LMS_GAIN_COE_LANE_10_0_b1          : 3;	/* [10:0]       r 11'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_EXT_LANE_10_0_b0          : 8;	/*[26:16]     r/w 11'h180*/
		uint8_t RX_DP_LMS_GAIN_EXT_LANE_10_0_b1          : 3;	/*[26:16]     r/w 11'h180*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG40_t;
__xdata __at( 0x48e0 ) volatile RX_DP_LMS_FFE_REG40_t RX_DP_LMS_FFE_REG40;
#define reg_RX_DP_LMS_GAIN_COE_LANE_10_0_b0  RX_DP_LMS_FFE_REG40.BF.RX_DP_LMS_GAIN_COE_LANE_10_0_b0
#define reg_RX_DP_LMS_GAIN_COE_LANE_10_0_b1  RX_DP_LMS_FFE_REG40.BF.RX_DP_LMS_GAIN_COE_LANE_10_0_b1
#define reg_RX_DP_LMS_GAIN_EXT_LANE_10_0_b0  RX_DP_LMS_FFE_REG40.BF.RX_DP_LMS_GAIN_EXT_LANE_10_0_b0
#define reg_RX_DP_LMS_GAIN_EXT_LANE_10_0_b1  RX_DP_LMS_FFE_REG40.BF.RX_DP_LMS_GAIN_EXT_LANE_10_0_b1

// 0x00e4	RX_DP_LMS_FFE_REG41		RX DP LMS DFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_DFE_INV_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_DFE_LD_LANE                    : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_DFE_EN_LANE                    : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_DFE_CLK_EN_LANE                : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_DFE_CLK_ON_LANE                : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_DFE_PAT_FREZ_EN_LANE           : 1;	/*      5     r/w   1*/
		uint8_t RX_DP_LMS_DFE_SQ_FREZ_EN_LANE            : 1;	/*      6     r/w   1*/
		uint8_t RX_DP_LMS_DFE_COE_POS_ONLY_LANE          : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_LMS_DFE_SAT_LANE_1_0               : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t RX_DP_LMS_DFE_MU_LANE_3_0                : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG41_t;
__xdata __at( 0x48e4 ) volatile RX_DP_LMS_FFE_REG41_t RX_DP_LMS_FFE_REG41;
#define reg_RX_DP_LMS_DFE_INV_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_INV_LANE
#define reg_RX_DP_LMS_DFE_LD_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_LD_LANE
#define reg_RX_DP_LMS_DFE_EN_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_EN_LANE
#define reg_RX_DP_LMS_DFE_CLK_EN_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_CLK_EN_LANE
#define reg_RX_DP_LMS_DFE_CLK_ON_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_CLK_ON_LANE
#define reg_RX_DP_LMS_DFE_PAT_FREZ_EN_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_DFE_SQ_FREZ_EN_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_DFE_COE_POS_ONLY_LANE  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_COE_POS_ONLY_LANE
#define reg_RX_DP_LMS_DFE_SAT_LANE_1_0  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_SAT_LANE_1_0
#define reg_RX_DP_LMS_DFE_MU_LANE_3_0  RX_DP_LMS_FFE_REG41.BF.RX_DP_LMS_DFE_MU_LANE_3_0

// 0x00e8	RX_DP_LMS_FFE_REG42		RX DP LMS DFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_DFE_COE_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DP_LMS_DFE_EXT_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG42_t;
__xdata __at( 0x48e8 ) volatile RX_DP_LMS_FFE_REG42_t RX_DP_LMS_FFE_REG42;
#define reg_RX_DP_LMS_DFE_COE_LANE_5_0  RX_DP_LMS_FFE_REG42.BF.RX_DP_LMS_DFE_COE_LANE_5_0
#define reg_RX_DP_LMS_DFE_EXT_LANE_5_0  RX_DP_LMS_FFE_REG42.BF.RX_DP_LMS_DFE_EXT_LANE_5_0

// 0x00ec	RX_DFE_REG1		RX DFE Register
typedef union {
	struct {
		uint8_t RX_DP_DFE_M3_LEVEL_LANE_7_0              : 8;	/*  [7:0]     r/w 8'ha0*/
		uint8_t RX_DP_DFE_M1_LEVEL_LANE_7_0              : 8;	/* [15:8]     r/w 8'he0*/
		uint8_t RX_DP_DFE_P1_LEVEL_LANE_7_0              : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t RX_DP_DFE_P3_LEVEL_LANE_7_0              : 8;	/*[31:24]     r/w 8'h60*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DFE_REG1_t;
__xdata __at( 0x48ec ) volatile RX_DFE_REG1_t RX_DFE_REG1;
#define reg_RX_DP_DFE_M3_LEVEL_LANE_7_0  RX_DFE_REG1.BF.RX_DP_DFE_M3_LEVEL_LANE_7_0
#define reg_RX_DP_DFE_M1_LEVEL_LANE_7_0  RX_DFE_REG1.BF.RX_DP_DFE_M1_LEVEL_LANE_7_0
#define reg_RX_DP_DFE_P1_LEVEL_LANE_7_0  RX_DFE_REG1.BF.RX_DP_DFE_P1_LEVEL_LANE_7_0
#define reg_RX_DP_DFE_P3_LEVEL_LANE_7_0  RX_DFE_REG1.BF.RX_DP_DFE_P3_LEVEL_LANE_7_0

#endif
