#ifndef PHY_REG_C_RX_DP_LANE_H
#define PHY_REG_C_RX_DP_LANE_H



// 0x0000	RX_DP_REG0		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_DAT_CLK_EN_LANE_31_0_b0            : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_DP_DAT_CLK_EN_LANE_31_0_b1            : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_DP_DAT_CLK_EN_LANE_31_0_b2            : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_DP_DAT_CLK_EN_LANE_31_0_b3            : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG0_t;
__xdata __at( 0x2b00 ) volatile RX_DP_REG0_t RX_DP_REG0;
#define reg_RX_DP_DAT_CLK_EN_LANE_31_0_b0  RX_DP_REG0.BF.RX_DP_DAT_CLK_EN_LANE_31_0_b0
#define reg_RX_DP_DAT_CLK_EN_LANE_31_0_b1  RX_DP_REG0.BF.RX_DP_DAT_CLK_EN_LANE_31_0_b1
#define reg_RX_DP_DAT_CLK_EN_LANE_31_0_b2  RX_DP_REG0.BF.RX_DP_DAT_CLK_EN_LANE_31_0_b2
#define reg_RX_DP_DAT_CLK_EN_LANE_31_0_b3  RX_DP_REG0.BF.RX_DP_DAT_CLK_EN_LANE_31_0_b3

// 0x0004	RX_DP_REG1		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_DAT_CLK_EN_LANE_63_32_b0           : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_DP_DAT_CLK_EN_LANE_63_32_b1           : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_DP_DAT_CLK_EN_LANE_63_32_b2           : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_DP_DAT_CLK_EN_LANE_63_32_b3           : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG1_t;
__xdata __at( 0x2b04 ) volatile RX_DP_REG1_t RX_DP_REG1;
#define reg_RX_DP_DAT_CLK_EN_LANE_63_32_b0  RX_DP_REG1.BF.RX_DP_DAT_CLK_EN_LANE_63_32_b0
#define reg_RX_DP_DAT_CLK_EN_LANE_63_32_b1  RX_DP_REG1.BF.RX_DP_DAT_CLK_EN_LANE_63_32_b1
#define reg_RX_DP_DAT_CLK_EN_LANE_63_32_b2  RX_DP_REG1.BF.RX_DP_DAT_CLK_EN_LANE_63_32_b2
#define reg_RX_DP_DAT_CLK_EN_LANE_63_32_b3  RX_DP_REG1.BF.RX_DP_DAT_CLK_EN_LANE_63_32_b3

// 0x0008	RX_DP_REG2		RX DP Register
typedef union {
	struct {
		uint8_t RX_DP_BUF_CLK_EN_LANE                    : 1;	/*      0     r/w   1*/
		uint8_t RX_DP_BUF_CLK_ON_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t RX_DP_LS_BUF_CLK_EN_LANE                 : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LS_BUF_CLK_ON_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG2_t;
__xdata __at( 0x2b08 ) volatile RX_DP_REG2_t RX_DP_REG2;
#define reg_RX_DP_BUF_CLK_EN_LANE  RX_DP_REG2.BF.RX_DP_BUF_CLK_EN_LANE
#define reg_RX_DP_BUF_CLK_ON_LANE  RX_DP_REG2.BF.RX_DP_BUF_CLK_ON_LANE
#define reg_RX_DP_LS_BUF_CLK_EN_LANE  RX_DP_REG2.BF.RX_DP_LS_BUF_CLK_EN_LANE
#define reg_RX_DP_LS_BUF_CLK_ON_LANE  RX_DP_REG2.BF.RX_DP_LS_BUF_CLK_ON_LANE

// 0x0018	RX_DP_REG3		RX DP Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_DFE_CLK_ON_LANE                : 1;	/*      1     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_CLK_ON_LANE               : 1;	/*      2     r/w   0*/
		uint8_t RX_DP_LMS_BLW_CLK_ON_LANE                : 1;	/*      3     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST1_CLK_ON_LANE           : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST2_CLK_ON_LANE           : 1;	/*      5     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST3_CLK_ON_LANE           : 1;	/*      6     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST4_CLK_ON_LANE           : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST5_CLK_ON_LANE           : 1;	/*      8     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST6_CLK_ON_LANE           : 1;	/*      9     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST7_CLK_ON_LANE           : 1;	/*     10     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST8_CLK_ON_LANE           : 1;	/*     11     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST9_CLK_ON_LANE           : 1;	/*     12     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST10_CLK_ON_LANE          : 1;	/*     13     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST11_CLK_ON_LANE          : 1;	/*     14     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST12_CLK_ON_LANE          : 1;	/*     15     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST13_CLK_ON_LANE          : 1;	/*     16     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST14_CLK_ON_LANE          : 1;	/*     17     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST15_CLK_ON_LANE          : 1;	/*     18     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST16_CLK_ON_LANE          : 1;	/*     19     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST17_CLK_ON_LANE          : 1;	/*     20     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST18_CLK_ON_LANE          : 1;	/*     21     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST19_CLK_ON_LANE          : 1;	/*     22     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST20_CLK_ON_LANE          : 1;	/*     23     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE1_CLK_ON_LANE           : 1;	/*     24     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE2_CLK_ON_LANE           : 1;	/*     25     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE3_CLK_ON_LANE           : 1;	/*     26     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE4_CLK_ON_LANE           : 1;	/*     27     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE5_CLK_ON_LANE           : 1;	/*     28     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE6_CLK_ON_LANE           : 1;	/*     29     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE7_CLK_ON_LANE           : 1;	/*     30     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE8_CLK_ON_LANE           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_REG3_t;
__xdata __at( 0x2b18 ) volatile RX_DP_REG3_t RX_DP_REG3;
#define reg_RX_DP_LMS_DFE_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_DFE_CLK_ON_LANE
#define reg_RX_DP_LMS_GAIN_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_GAIN_CLK_ON_LANE
#define reg_RX_DP_LMS_BLW_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_BLW_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST1_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST1_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST2_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST2_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST3_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST3_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST4_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST4_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST5_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST5_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST6_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST6_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST7_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST7_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST8_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST8_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST9_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST9_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST10_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST10_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST11_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST11_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST12_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST12_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST13_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST13_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST14_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST14_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST15_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST15_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST16_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST16_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST17_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST17_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST18_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST18_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST19_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST19_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PST20_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PST20_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE1_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE1_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE2_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE2_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE3_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE3_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE4_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE4_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE5_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE5_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE6_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE6_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE7_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE7_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_PRE8_CLK_ON_LANE  RX_DP_REG3.BF.RX_DP_LMS_FFE_PRE8_CLK_ON_LANE

// 0x001c	RX_FFE_REG0		RX FFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT1_CLK_ON_LANE           : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT2_CLK_ON_LANE           : 1;	/*      1     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT3_CLK_ON_LANE           : 1;	/*      2     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT4_CLK_ON_LANE           : 1;	/*      3     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT5_CLK_ON_LANE           : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT6_CLK_ON_LANE           : 1;	/*      5     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT7_CLK_ON_LANE           : 1;	/*      6     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT8_CLK_ON_LANE           : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_FFE_FLT_SEL_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PAT_FREZ_EN_LANE           : 1;	/*     16     r/w   1*/
		uint8_t RX_DP_LMS_DFE_PAT_FREZ_EN_LANE           : 1;	/*     17     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_PAT_FREZ_EN_LANE          : 1;	/*     18     r/w   1*/
		uint8_t RX_DP_LMS_BLW_PAT_FREZ_EN_LANE           : 1;	/*     19     r/w   0*/
		uint8_t RX_DP_LMS_FFE_SQ_FREZ_EN_LANE            : 1;	/*     20     r/w   1*/
		uint8_t RX_DP_LMS_DFE_SQ_FREZ_EN_LANE            : 1;	/*     21     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_SQ_FREZ_EN_LANE           : 1;	/*     22     r/w   1*/
		uint8_t RX_DP_LMS_BLW_SQ_FREZ_EN_LANE            : 1;	/*     23     r/w   1*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FFE_REG0_t;
__xdata __at( 0x2b1c ) volatile RX_FFE_REG0_t RX_FFE_REG0;
#define reg_RX_DP_LMS_FFE_FLT1_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT1_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT2_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT2_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT3_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT3_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT4_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT4_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT5_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT5_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT6_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT6_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT7_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT7_CLK_ON_LANE
#define reg_RX_DP_LMS_FFE_FLT8_CLK_ON_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_FLT8_CLK_ON_LANE
#define reg_RX_DP_FFE_FLT_SEL_LANE_5_0  RX_FFE_REG0.BF.RX_DP_FFE_FLT_SEL_LANE_5_0
#define reg_RX_DP_LMS_FFE_PAT_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_DFE_PAT_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_DFE_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_GAIN_PAT_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_GAIN_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_BLW_PAT_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_BLW_PAT_FREZ_EN_LANE
#define reg_RX_DP_LMS_FFE_SQ_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_FFE_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_DFE_SQ_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_DFE_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_GAIN_SQ_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_GAIN_SQ_FREZ_EN_LANE
#define reg_RX_DP_LMS_BLW_SQ_FREZ_EN_LANE  RX_FFE_REG0.BF.RX_DP_LMS_BLW_SQ_FREZ_EN_LANE

// 0x0020	RX_DFE_REG0		RX DFE Register
typedef union {
	struct {
		uint8_t RX_DP_DFE_DELTA_TH_BOT_LANE_4_0          : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RX_DP_DFE_DELTA_TH_MID_LANE_4_0          : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_DP_DFE_DELTA_TH_TOP_LANE_4_0          : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_DP_BLIND_ERROR_EN_LANE                : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DFE_REG0_t;
__xdata __at( 0x2b20 ) volatile RX_DFE_REG0_t RX_DFE_REG0;
#define reg_RX_DP_DFE_DELTA_TH_BOT_LANE_4_0  RX_DFE_REG0.BF.RX_DP_DFE_DELTA_TH_BOT_LANE_4_0
#define reg_RX_DP_DFE_DELTA_TH_MID_LANE_4_0  RX_DFE_REG0.BF.RX_DP_DFE_DELTA_TH_MID_LANE_4_0
#define reg_RX_DP_DFE_DELTA_TH_TOP_LANE_4_0  RX_DFE_REG0.BF.RX_DP_DFE_DELTA_TH_TOP_LANE_4_0
#define reg_RX_DP_BLIND_ERROR_EN_LANE  RX_DFE_REG0.BF.RX_DP_BLIND_ERROR_EN_LANE

// 0x0024	RX_DP_LMS_REG0		RX DP LMS Common Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_DP_LMS_PRE_RUN_TIME_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t RX_DP_LMS_STOP_TIME_LANE_5_0             : 6;	/* [13:8]     r/w 6'hb*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_DP_LMS_RUN_TIME_LANE_5_0              : 6;	/*[21:16]     r/w 6'hb*/
		uint8_t RESERVED_22                              : 2;	/*[26:22]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:22]     r/w   0*/
		uint8_t RX_DP_LMS_RUN_STOP_EN_LANE               : 1;	/*     27     r/w   0*/
		uint8_t RX_DP_LMS_TOP_EN_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t RX_DP_LMS_TOP_LD_LANE                    : 1;	/*     29     r/w   0*/
		uint8_t RX_DP_FFE_PRE_FLT_SEL_LANE               : 1;	/*     30     r/w   0*/
		uint8_t RX_DP_LMS_REQ_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_REG0_t;
__xdata __at( 0x2b24 ) volatile RX_DP_LMS_REG0_t RX_DP_LMS_REG0;
#define reg_RX_DP_LMS_PRE_RUN_TIME_LANE_3_0  RX_DP_LMS_REG0.BF.RX_DP_LMS_PRE_RUN_TIME_LANE_3_0
#define reg_RX_DP_LMS_STOP_TIME_LANE_5_0  RX_DP_LMS_REG0.BF.RX_DP_LMS_STOP_TIME_LANE_5_0
#define reg_RX_DP_LMS_RUN_TIME_LANE_5_0  RX_DP_LMS_REG0.BF.RX_DP_LMS_RUN_TIME_LANE_5_0
#define reg_RX_DP_LMS_RUN_STOP_EN_LANE  RX_DP_LMS_REG0.BF.RX_DP_LMS_RUN_STOP_EN_LANE
#define reg_RX_DP_LMS_TOP_EN_LANE  RX_DP_LMS_REG0.BF.RX_DP_LMS_TOP_EN_LANE
#define reg_RX_DP_LMS_TOP_LD_LANE  RX_DP_LMS_REG0.BF.RX_DP_LMS_TOP_LD_LANE
#define reg_RX_DP_FFE_PRE_FLT_SEL_LANE  RX_DP_LMS_REG0.BF.RX_DP_FFE_PRE_FLT_SEL_LANE
#define reg_RX_DP_LMS_REQ_LANE  RX_DP_LMS_REG0.BF.RX_DP_LMS_REQ_LANE

// 0x0028	RX_DP_LMS_BLW_REG0		RX DP LMS BLW Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_BLW_COE_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_DP_LMS_BLW_EXT_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_DP_LMS_BLW_MU_LANE_3_0                : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_BLW_REG0_t;
__xdata __at( 0x2b28 ) volatile RX_DP_LMS_BLW_REG0_t RX_DP_LMS_BLW_REG0;
#define reg_RX_DP_LMS_BLW_COE_LANE_5_0  RX_DP_LMS_BLW_REG0.BF.RX_DP_LMS_BLW_COE_LANE_5_0
#define reg_RX_DP_LMS_BLW_EXT_LANE_5_0  RX_DP_LMS_BLW_REG0.BF.RX_DP_LMS_BLW_EXT_LANE_5_0
#define reg_RX_DP_LMS_BLW_MU_LANE_3_0  RX_DP_LMS_BLW_REG0.BF.RX_DP_LMS_BLW_MU_LANE_3_0

// 0x002c	RX_DP_LMS_GAIN_REG0		RX DP LMS Gain Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_GAIN_COE_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t RX_DP_LMS_GAIN_COE_LANE_10_8             : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_MU_LANE_3_0               : 4;	/*[15:12]     r/w 4'h5*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_EXT_LANE_3_0              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RX_DP_LMS_GAIN_EXT_LANE_10_4             : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_GAIN_REG0_t;
__xdata __at( 0x2b2c ) volatile RX_DP_LMS_GAIN_REG0_t RX_DP_LMS_GAIN_REG0;
#define reg_RX_DP_LMS_GAIN_COE_LANE_7_0  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_GAIN_COE_LANE_7_0
#define reg_RX_DP_LMS_GAIN_COE_LANE_10_8  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_GAIN_COE_LANE_10_8
#define reg_RX_DP_LMS_GAIN_MU_LANE_3_0  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_GAIN_MU_LANE_3_0
#define reg_RX_DP_LMS_GAIN_EXT_LANE_3_0  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_GAIN_EXT_LANE_3_0
#define reg_RX_DP_LMS_GAIN_EXT_LANE_10_4  RX_DP_LMS_GAIN_REG0.BF.RX_DP_LMS_GAIN_EXT_LANE_10_4

// 0x0030	RX_DP_LMS_DFE_REG0		RX DP LMS DFE Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_DFE_COE_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [13:6]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:6]     r/w   0*/
		uint8_t RX_DP_LMS_DFE_SAT_LANE_1_0               : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t RX_DP_LMS_DFE_MU_LANE_3_0                : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_DP_LMS_DFE_EXT_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_DFE_REG0_t;
__xdata __at( 0x2b30 ) volatile RX_DP_LMS_DFE_REG0_t RX_DP_LMS_DFE_REG0;
#define reg_RX_DP_LMS_DFE_COE_LANE_5_0  RX_DP_LMS_DFE_REG0.BF.RX_DP_LMS_DFE_COE_LANE_5_0
#define reg_RX_DP_LMS_DFE_SAT_LANE_1_0  RX_DP_LMS_DFE_REG0.BF.RX_DP_LMS_DFE_SAT_LANE_1_0
#define reg_RX_DP_LMS_DFE_MU_LANE_3_0  RX_DP_LMS_DFE_REG0.BF.RX_DP_LMS_DFE_MU_LANE_3_0
#define reg_RX_DP_LMS_DFE_EXT_LANE_5_0  RX_DP_LMS_DFE_REG0.BF.RX_DP_LMS_DFE_EXT_LANE_5_0

// 0x0034	RX_DP_LMS_FFE_CLK_EN		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_DFE_CLK_EN_LANE                : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_CLK_EN_LANE               : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_BLW_CLK_EN_LANE                : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST1_CLK_EN_LANE           : 1;	/*      4     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST2_CLK_EN_LANE           : 1;	/*      5     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST3_CLK_EN_LANE           : 1;	/*      6     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST4_CLK_EN_LANE           : 1;	/*      7     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST5_CLK_EN_LANE           : 1;	/*      8     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST6_CLK_EN_LANE           : 1;	/*      9     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST7_CLK_EN_LANE           : 1;	/*     10     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST8_CLK_EN_LANE           : 1;	/*     11     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST9_CLK_EN_LANE           : 1;	/*     12     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST10_CLK_EN_LANE          : 1;	/*     13     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST11_CLK_EN_LANE          : 1;	/*     14     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST12_CLK_EN_LANE          : 1;	/*     15     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST13_CLK_EN_LANE          : 1;	/*     16     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST14_CLK_EN_LANE          : 1;	/*     17     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST15_CLK_EN_LANE          : 1;	/*     18     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST16_CLK_EN_LANE          : 1;	/*     19     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST17_CLK_EN_LANE          : 1;	/*     20     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST18_CLK_EN_LANE          : 1;	/*     21     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST19_CLK_EN_LANE          : 1;	/*     22     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST20_CLK_EN_LANE          : 1;	/*     23     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE1_CLK_EN_LANE           : 1;	/*     24     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE2_CLK_EN_LANE           : 1;	/*     25     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE3_CLK_EN_LANE           : 1;	/*     26     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE4_CLK_EN_LANE           : 1;	/*     27     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE5_CLK_EN_LANE           : 1;	/*     28     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE6_CLK_EN_LANE           : 1;	/*     29     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE7_CLK_EN_LANE           : 1;	/*     30     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE8_CLK_EN_LANE           : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_CLK_EN_t;
__xdata __at( 0x2b34 ) volatile RX_DP_LMS_FFE_CLK_EN_t RX_DP_LMS_FFE_CLK_EN;
#define reg_RX_DP_LMS_DFE_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_DFE_CLK_EN_LANE
#define reg_RX_DP_LMS_GAIN_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_GAIN_CLK_EN_LANE
#define reg_RX_DP_LMS_BLW_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_BLW_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST1_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST1_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST2_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST2_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST3_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST3_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST4_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST4_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST5_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST5_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST6_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST6_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST7_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST7_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST8_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST8_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST9_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST9_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST10_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST10_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST11_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST11_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST12_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST12_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST13_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST13_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST14_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST14_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST15_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST15_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST16_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST16_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST17_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST17_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST18_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST18_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST19_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST19_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PST20_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PST20_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE1_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE1_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE2_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE2_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE3_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE3_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE4_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE4_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE5_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE5_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE6_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE6_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE7_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE7_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE8_CLK_EN_LANE  RX_DP_LMS_FFE_CLK_EN.BF.RX_DP_LMS_FFE_PRE8_CLK_EN_LANE

// 0x0038	RX_DP_LMS_FFE_EN		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_DFE_EN_LANE                    : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_EN_LANE                   : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_BLW_EN_LANE                    : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST1_EN_LANE               : 1;	/*      4     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST2_EN_LANE               : 1;	/*      5     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST3_EN_LANE               : 1;	/*      6     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST4_EN_LANE               : 1;	/*      7     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST5_EN_LANE               : 1;	/*      8     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST6_EN_LANE               : 1;	/*      9     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST7_EN_LANE               : 1;	/*     10     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST8_EN_LANE               : 1;	/*     11     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST9_EN_LANE               : 1;	/*     12     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST10_EN_LANE              : 1;	/*     13     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST11_EN_LANE              : 1;	/*     14     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST12_EN_LANE              : 1;	/*     15     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST13_EN_LANE              : 1;	/*     16     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST14_EN_LANE              : 1;	/*     17     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST15_EN_LANE              : 1;	/*     18     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST16_EN_LANE              : 1;	/*     19     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST17_EN_LANE              : 1;	/*     20     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST18_EN_LANE              : 1;	/*     21     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST19_EN_LANE              : 1;	/*     22     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST20_EN_LANE              : 1;	/*     23     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE1_EN_LANE               : 1;	/*     24     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE2_EN_LANE               : 1;	/*     25     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE3_EN_LANE               : 1;	/*     26     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE4_EN_LANE               : 1;	/*     27     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE5_EN_LANE               : 1;	/*     28     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE6_EN_LANE               : 1;	/*     29     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE7_EN_LANE               : 1;	/*     30     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE8_EN_LANE               : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_EN_t;
__xdata __at( 0x2b38 ) volatile RX_DP_LMS_FFE_EN_t RX_DP_LMS_FFE_EN;
#define reg_RX_DP_LMS_DFE_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_DFE_EN_LANE
#define reg_RX_DP_LMS_GAIN_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_GAIN_EN_LANE
#define reg_RX_DP_LMS_BLW_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_BLW_EN_LANE
#define reg_RX_DP_LMS_FFE_PST1_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST1_EN_LANE
#define reg_RX_DP_LMS_FFE_PST2_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST2_EN_LANE
#define reg_RX_DP_LMS_FFE_PST3_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST3_EN_LANE
#define reg_RX_DP_LMS_FFE_PST4_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST4_EN_LANE
#define reg_RX_DP_LMS_FFE_PST5_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST5_EN_LANE
#define reg_RX_DP_LMS_FFE_PST6_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST6_EN_LANE
#define reg_RX_DP_LMS_FFE_PST7_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST7_EN_LANE
#define reg_RX_DP_LMS_FFE_PST8_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST8_EN_LANE
#define reg_RX_DP_LMS_FFE_PST9_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST9_EN_LANE
#define reg_RX_DP_LMS_FFE_PST10_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST10_EN_LANE
#define reg_RX_DP_LMS_FFE_PST11_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST11_EN_LANE
#define reg_RX_DP_LMS_FFE_PST12_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST12_EN_LANE
#define reg_RX_DP_LMS_FFE_PST13_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST13_EN_LANE
#define reg_RX_DP_LMS_FFE_PST14_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST14_EN_LANE
#define reg_RX_DP_LMS_FFE_PST15_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST15_EN_LANE
#define reg_RX_DP_LMS_FFE_PST16_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST16_EN_LANE
#define reg_RX_DP_LMS_FFE_PST17_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST17_EN_LANE
#define reg_RX_DP_LMS_FFE_PST18_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST18_EN_LANE
#define reg_RX_DP_LMS_FFE_PST19_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST19_EN_LANE
#define reg_RX_DP_LMS_FFE_PST20_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PST20_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE1_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE1_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE2_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE2_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE3_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE3_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE4_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE4_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE5_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE5_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE6_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE6_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE7_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE7_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE8_EN_LANE  RX_DP_LMS_FFE_EN.BF.RX_DP_LMS_FFE_PRE8_EN_LANE

// 0x003c	RX_DP_LMS_FFE_LD		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_DFE_LD_LANE                    : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_GAIN_LD_LANE                   : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_BLW_LD_LANE                    : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST1_LD_LANE               : 1;	/*      4     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST2_LD_LANE               : 1;	/*      5     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST3_LD_LANE               : 1;	/*      6     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST4_LD_LANE               : 1;	/*      7     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST5_LD_LANE               : 1;	/*      8     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST6_LD_LANE               : 1;	/*      9     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST7_LD_LANE               : 1;	/*     10     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST8_LD_LANE               : 1;	/*     11     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST9_LD_LANE               : 1;	/*     12     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST10_LD_LANE              : 1;	/*     13     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST11_LD_LANE              : 1;	/*     14     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST12_LD_LANE              : 1;	/*     15     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST13_LD_LANE              : 1;	/*     16     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST14_LD_LANE              : 1;	/*     17     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST15_LD_LANE              : 1;	/*     18     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST16_LD_LANE              : 1;	/*     19     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST17_LD_LANE              : 1;	/*     20     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST18_LD_LANE              : 1;	/*     21     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST19_LD_LANE              : 1;	/*     22     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST20_LD_LANE              : 1;	/*     23     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE1_LD_LANE               : 1;	/*     24     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE2_LD_LANE               : 1;	/*     25     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE3_LD_LANE               : 1;	/*     26     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE4_LD_LANE               : 1;	/*     27     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE5_LD_LANE               : 1;	/*     28     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE6_LD_LANE               : 1;	/*     29     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE7_LD_LANE               : 1;	/*     30     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE8_LD_LANE               : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_LD_t;
__xdata __at( 0x2b3c ) volatile RX_DP_LMS_FFE_LD_t RX_DP_LMS_FFE_LD;
#define reg_RX_DP_LMS_DFE_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_DFE_LD_LANE
#define reg_RX_DP_LMS_GAIN_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_GAIN_LD_LANE
#define reg_RX_DP_LMS_BLW_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_BLW_LD_LANE
#define reg_RX_DP_LMS_FFE_PST1_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST1_LD_LANE
#define reg_RX_DP_LMS_FFE_PST2_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST2_LD_LANE
#define reg_RX_DP_LMS_FFE_PST3_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST3_LD_LANE
#define reg_RX_DP_LMS_FFE_PST4_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST4_LD_LANE
#define reg_RX_DP_LMS_FFE_PST5_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST5_LD_LANE
#define reg_RX_DP_LMS_FFE_PST6_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST6_LD_LANE
#define reg_RX_DP_LMS_FFE_PST7_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST7_LD_LANE
#define reg_RX_DP_LMS_FFE_PST8_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST8_LD_LANE
#define reg_RX_DP_LMS_FFE_PST9_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST9_LD_LANE
#define reg_RX_DP_LMS_FFE_PST10_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST10_LD_LANE
#define reg_RX_DP_LMS_FFE_PST11_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST11_LD_LANE
#define reg_RX_DP_LMS_FFE_PST12_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST12_LD_LANE
#define reg_RX_DP_LMS_FFE_PST13_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST13_LD_LANE
#define reg_RX_DP_LMS_FFE_PST14_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST14_LD_LANE
#define reg_RX_DP_LMS_FFE_PST15_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST15_LD_LANE
#define reg_RX_DP_LMS_FFE_PST16_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST16_LD_LANE
#define reg_RX_DP_LMS_FFE_PST17_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST17_LD_LANE
#define reg_RX_DP_LMS_FFE_PST18_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST18_LD_LANE
#define reg_RX_DP_LMS_FFE_PST19_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST19_LD_LANE
#define reg_RX_DP_LMS_FFE_PST20_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PST20_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE1_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE1_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE2_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE2_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE3_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE3_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE4_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE4_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE5_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE5_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE6_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE6_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE7_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE7_LD_LANE
#define reg_RX_DP_LMS_FFE_PRE8_LD_LANE  RX_DP_LMS_FFE_LD.BF.RX_DP_LMS_FFE_PRE8_LD_LANE

// 0x0040	RX_DP_LMS_FFE_INV		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_DFE_INV_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t RX_DP_LMS_GAIN_INV_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t RX_DP_LMS_BLW_INV_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST1_INV_LANE              : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST2_INV_LANE              : 1;	/*      5     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST3_INV_LANE              : 1;	/*      6     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST4_INV_LANE              : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST5_INV_LANE              : 1;	/*      8     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST6_INV_LANE              : 1;	/*      9     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST7_INV_LANE              : 1;	/*     10     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST8_INV_LANE              : 1;	/*     11     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST9_INV_LANE              : 1;	/*     12     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST10_INV_LANE             : 1;	/*     13     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST11_INV_LANE             : 1;	/*     14     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST12_INV_LANE             : 1;	/*     15     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST13_INV_LANE             : 1;	/*     16     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST14_INV_LANE             : 1;	/*     17     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST15_INV_LANE             : 1;	/*     18     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST16_INV_LANE             : 1;	/*     19     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST17_INV_LANE             : 1;	/*     20     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST18_INV_LANE             : 1;	/*     21     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST19_INV_LANE             : 1;	/*     22     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST20_INV_LANE             : 1;	/*     23     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE1_INV_LANE              : 1;	/*     24     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE2_INV_LANE              : 1;	/*     25     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE3_INV_LANE              : 1;	/*     26     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE4_INV_LANE              : 1;	/*     27     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE5_INV_LANE              : 1;	/*     28     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE6_INV_LANE              : 1;	/*     29     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE7_INV_LANE              : 1;	/*     30     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE8_INV_LANE              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_INV_t;
__xdata __at( 0x2b40 ) volatile RX_DP_LMS_FFE_INV_t RX_DP_LMS_FFE_INV;
#define reg_RX_DP_LMS_DFE_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_DFE_INV_LANE
#define reg_RX_DP_LMS_GAIN_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_GAIN_INV_LANE
#define reg_RX_DP_LMS_BLW_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_BLW_INV_LANE
#define reg_RX_DP_LMS_FFE_PST1_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST1_INV_LANE
#define reg_RX_DP_LMS_FFE_PST2_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST2_INV_LANE
#define reg_RX_DP_LMS_FFE_PST3_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST3_INV_LANE
#define reg_RX_DP_LMS_FFE_PST4_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST4_INV_LANE
#define reg_RX_DP_LMS_FFE_PST5_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST5_INV_LANE
#define reg_RX_DP_LMS_FFE_PST6_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST6_INV_LANE
#define reg_RX_DP_LMS_FFE_PST7_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST7_INV_LANE
#define reg_RX_DP_LMS_FFE_PST8_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST8_INV_LANE
#define reg_RX_DP_LMS_FFE_PST9_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST9_INV_LANE
#define reg_RX_DP_LMS_FFE_PST10_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST10_INV_LANE
#define reg_RX_DP_LMS_FFE_PST11_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST11_INV_LANE
#define reg_RX_DP_LMS_FFE_PST12_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST12_INV_LANE
#define reg_RX_DP_LMS_FFE_PST13_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST13_INV_LANE
#define reg_RX_DP_LMS_FFE_PST14_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST14_INV_LANE
#define reg_RX_DP_LMS_FFE_PST15_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST15_INV_LANE
#define reg_RX_DP_LMS_FFE_PST16_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST16_INV_LANE
#define reg_RX_DP_LMS_FFE_PST17_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST17_INV_LANE
#define reg_RX_DP_LMS_FFE_PST18_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST18_INV_LANE
#define reg_RX_DP_LMS_FFE_PST19_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST19_INV_LANE
#define reg_RX_DP_LMS_FFE_PST20_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PST20_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE1_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE1_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE2_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE2_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE3_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE3_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE4_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE4_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE5_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE5_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE6_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE6_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE7_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE7_INV_LANE
#define reg_RX_DP_LMS_FFE_PRE8_INV_LANE  RX_DP_LMS_FFE_INV.BF.RX_DP_LMS_FFE_PRE8_INV_LANE

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
__xdata __at( 0x2b44 ) volatile RX_DP_LMS_FFE_MU_t RX_DP_LMS_FFE_MU;
#define reg_RX_DP_LMS_FFE_FLT_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_FLT_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST1_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PST1_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PRE1_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0  RX_DP_LMS_FFE_MU.BF.RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0

// 0x0048	RX_DP_LMS_FFE_REG2		RX DP LMS FFER Register
typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_FLT1_INV_LANE              : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT2_INV_LANE              : 1;	/*      1     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT3_INV_LANE              : 1;	/*      2     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT4_INV_LANE              : 1;	/*      3     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT5_INV_LANE              : 1;	/*      4     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT6_INV_LANE              : 1;	/*      5     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT7_INV_LANE              : 1;	/*      6     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT8_INV_LANE              : 1;	/*      7     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT1_LD_LANE               : 1;	/*      8     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT2_LD_LANE               : 1;	/*      9     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT3_LD_LANE               : 1;	/*     10     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT4_LD_LANE               : 1;	/*     11     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT5_LD_LANE               : 1;	/*     12     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT6_LD_LANE               : 1;	/*     13     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT7_LD_LANE               : 1;	/*     14     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT8_LD_LANE               : 1;	/*     15     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT1_EN_LANE               : 1;	/*     16     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT2_EN_LANE               : 1;	/*     17     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT3_EN_LANE               : 1;	/*     18     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT4_EN_LANE               : 1;	/*     19     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT5_EN_LANE               : 1;	/*     20     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT6_EN_LANE               : 1;	/*     21     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT7_EN_LANE               : 1;	/*     22     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT8_EN_LANE               : 1;	/*     23     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT1_CLK_EN_LANE           : 1;	/*     24     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT2_CLK_EN_LANE           : 1;	/*     25     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT3_CLK_EN_LANE           : 1;	/*     26     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT4_CLK_EN_LANE           : 1;	/*     27     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT5_CLK_EN_LANE           : 1;	/*     28     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT6_CLK_EN_LANE           : 1;	/*     29     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT7_CLK_EN_LANE           : 1;	/*     30     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT8_CLK_EN_LANE           : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG2_t;
__xdata __at( 0x2b48 ) volatile RX_DP_LMS_FFE_REG2_t RX_DP_LMS_FFE_REG2;
#define reg_RX_DP_LMS_FFE_FLT1_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT1_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT2_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT2_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT3_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT3_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT4_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT4_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT5_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT5_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT6_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT6_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT7_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT7_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT8_INV_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT8_INV_LANE
#define reg_RX_DP_LMS_FFE_FLT1_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT1_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT2_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT2_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT3_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT3_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT4_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT4_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT5_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT5_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT6_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT6_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT7_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT7_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT8_LD_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT8_LD_LANE
#define reg_RX_DP_LMS_FFE_FLT1_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT1_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT2_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT2_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT3_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT3_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT4_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT4_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT5_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT5_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT6_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT6_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT7_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT7_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT8_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT8_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT1_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT1_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT2_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT2_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT3_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT3_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT4_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT4_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT5_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT5_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT6_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT6_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT7_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT7_CLK_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT8_CLK_EN_LANE  RX_DP_LMS_FFE_REG2.BF.RX_DP_LMS_FFE_FLT8_CLK_EN_LANE

// 0x004c	RX_DP_LMS_FFE_REG3		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE1_COE_LANE_6_0          : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*[23:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:15]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0          : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG3_t;
__xdata __at( 0x2b4c ) volatile RX_DP_LMS_FFE_REG3_t RX_DP_LMS_FFE_REG3;
#define reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0  RX_DP_LMS_FFE_REG3.BF.RX_DP_LMS_FFE_PRE1_COE_LANE_6_0
#define reg_RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0  RX_DP_LMS_FFE_REG3.BF.RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0

// 0x0050	RX_DP_LMS_FFE_REG4		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE2_COE_LANE_4_0          : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[23:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:13]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE2_EXT_LANE_4_0          : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG4_t;
__xdata __at( 0x2b50 ) volatile RX_DP_LMS_FFE_REG4_t RX_DP_LMS_FFE_REG4;
#define reg_RX_DP_LMS_FFE_PRE2_COE_LANE_4_0  RX_DP_LMS_FFE_REG4.BF.RX_DP_LMS_FFE_PRE2_COE_LANE_4_0
#define reg_RX_DP_LMS_FFE_PRE2_EXT_LANE_4_0  RX_DP_LMS_FFE_REG4.BF.RX_DP_LMS_FFE_PRE2_EXT_LANE_4_0

// 0x0054	RX_DP_LMS_FFE_REG5		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE3_COE_LANE_3_0          : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[23:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:12]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE3_EXT_LANE_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG5_t;
__xdata __at( 0x2b54 ) volatile RX_DP_LMS_FFE_REG5_t RX_DP_LMS_FFE_REG5;
#define reg_RX_DP_LMS_FFE_PRE3_COE_LANE_3_0  RX_DP_LMS_FFE_REG5.BF.RX_DP_LMS_FFE_PRE3_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PRE3_EXT_LANE_3_0  RX_DP_LMS_FFE_REG5.BF.RX_DP_LMS_FFE_PRE3_EXT_LANE_3_0

// 0x0058	RX_DP_LMS_FFE_REG6		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE4_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE4_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG6_t;
__xdata __at( 0x2b58 ) volatile RX_DP_LMS_FFE_REG6_t RX_DP_LMS_FFE_REG6;
#define reg_RX_DP_LMS_FFE_PRE4_COE_LANE_2_0  RX_DP_LMS_FFE_REG6.BF.RX_DP_LMS_FFE_PRE4_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE4_EXT_LANE_2_0  RX_DP_LMS_FFE_REG6.BF.RX_DP_LMS_FFE_PRE4_EXT_LANE_2_0

// 0x005c	RX_DP_LMS_FFE_REG7		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE5_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG7_t;
__xdata __at( 0x2b5c ) volatile RX_DP_LMS_FFE_REG7_t RX_DP_LMS_FFE_REG7;
#define reg_RX_DP_LMS_FFE_PRE5_COE_LANE_2_0  RX_DP_LMS_FFE_REG7.BF.RX_DP_LMS_FFE_PRE5_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0  RX_DP_LMS_FFE_REG7.BF.RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0

// 0x0060	RX_DP_LMS_FFE_REG8		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE6_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG8_t;
__xdata __at( 0x2b60 ) volatile RX_DP_LMS_FFE_REG8_t RX_DP_LMS_FFE_REG8;
#define reg_RX_DP_LMS_FFE_PRE6_COE_LANE_2_0  RX_DP_LMS_FFE_REG8.BF.RX_DP_LMS_FFE_PRE6_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0  RX_DP_LMS_FFE_REG8.BF.RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0

// 0x0064	RX_DP_LMS_FFE_REG9		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE7_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE7_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG9_t;
__xdata __at( 0x2b64 ) volatile RX_DP_LMS_FFE_REG9_t RX_DP_LMS_FFE_REG9;
#define reg_RX_DP_LMS_FFE_PRE7_COE_LANE_2_0  RX_DP_LMS_FFE_REG9.BF.RX_DP_LMS_FFE_PRE7_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE7_EXT_LANE_2_0  RX_DP_LMS_FFE_REG9.BF.RX_DP_LMS_FFE_PRE7_EXT_LANE_2_0

// 0x0068	RX_DP_LMS_FFE_REG10		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE8_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE8_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG10_t;
__xdata __at( 0x2b68 ) volatile RX_DP_LMS_FFE_REG10_t RX_DP_LMS_FFE_REG10;
#define reg_RX_DP_LMS_FFE_PRE8_COE_LANE_2_0  RX_DP_LMS_FFE_REG10.BF.RX_DP_LMS_FFE_PRE8_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PRE8_EXT_LANE_2_0  RX_DP_LMS_FFE_REG10.BF.RX_DP_LMS_FFE_PRE8_EXT_LANE_2_0

// 0x006c	RX_DP_LMS_FFE_REG11		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST1_COE_LANE_6_0          : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*[23:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:15]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST1_EXT_LANE_6_0          : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG11_t;
__xdata __at( 0x2b6c ) volatile RX_DP_LMS_FFE_REG11_t RX_DP_LMS_FFE_REG11;
#define reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0  RX_DP_LMS_FFE_REG11.BF.RX_DP_LMS_FFE_PST1_COE_LANE_6_0
#define reg_RX_DP_LMS_FFE_PST1_EXT_LANE_6_0  RX_DP_LMS_FFE_REG11.BF.RX_DP_LMS_FFE_PST1_EXT_LANE_6_0

// 0x0070	RX_DP_LMS_FFE_REG12		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST2_COE_LANE_5_0          : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[23:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:14]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST2_EXT_LANE_5_0          : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG12_t;
__xdata __at( 0x2b70 ) volatile RX_DP_LMS_FFE_REG12_t RX_DP_LMS_FFE_REG12;
#define reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0  RX_DP_LMS_FFE_REG12.BF.RX_DP_LMS_FFE_PST2_COE_LANE_5_0
#define reg_RX_DP_LMS_FFE_PST2_EXT_LANE_5_0  RX_DP_LMS_FFE_REG12.BF.RX_DP_LMS_FFE_PST2_EXT_LANE_5_0

// 0x0074	RX_DP_LMS_FFE_REG13		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST3_COE_LANE_4_0          : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[23:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:13]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST3_EXT_LANE_4_0          : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG13_t;
__xdata __at( 0x2b74 ) volatile RX_DP_LMS_FFE_REG13_t RX_DP_LMS_FFE_REG13;
#define reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0  RX_DP_LMS_FFE_REG13.BF.RX_DP_LMS_FFE_PST3_COE_LANE_4_0
#define reg_RX_DP_LMS_FFE_PST3_EXT_LANE_4_0  RX_DP_LMS_FFE_REG13.BF.RX_DP_LMS_FFE_PST3_EXT_LANE_4_0

// 0x0078	RX_DP_LMS_FFE_REG14		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST4_COE_LANE_3_0          : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[23:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:12]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST4_EXT_LANE_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG14_t;
__xdata __at( 0x2b78 ) volatile RX_DP_LMS_FFE_REG14_t RX_DP_LMS_FFE_REG14;
#define reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0  RX_DP_LMS_FFE_REG14.BF.RX_DP_LMS_FFE_PST4_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST4_EXT_LANE_3_0  RX_DP_LMS_FFE_REG14.BF.RX_DP_LMS_FFE_PST4_EXT_LANE_3_0

// 0x007c	RX_DP_LMS_FFE_REG15		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST5_COE_LANE_3_0          : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[23:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:12]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST5_EXT_LANE_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG15_t;
__xdata __at( 0x2b7c ) volatile RX_DP_LMS_FFE_REG15_t RX_DP_LMS_FFE_REG15;
#define reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0  RX_DP_LMS_FFE_REG15.BF.RX_DP_LMS_FFE_PST5_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST5_EXT_LANE_3_0  RX_DP_LMS_FFE_REG15.BF.RX_DP_LMS_FFE_PST5_EXT_LANE_3_0

// 0x0080	RX_DP_LMS_FFE_REG16		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST6_COE_LANE_3_0          : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[23:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:12]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST6_EXT_LANE_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG16_t;
__xdata __at( 0x2b80 ) volatile RX_DP_LMS_FFE_REG16_t RX_DP_LMS_FFE_REG16;
#define reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0  RX_DP_LMS_FFE_REG16.BF.RX_DP_LMS_FFE_PST6_COE_LANE_3_0
#define reg_RX_DP_LMS_FFE_PST6_EXT_LANE_3_0  RX_DP_LMS_FFE_REG16.BF.RX_DP_LMS_FFE_PST6_EXT_LANE_3_0

// 0x0084	RX_DP_LMS_FFE_REG17		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST7_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST7_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG17_t;
__xdata __at( 0x2b84 ) volatile RX_DP_LMS_FFE_REG17_t RX_DP_LMS_FFE_REG17;
#define reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0  RX_DP_LMS_FFE_REG17.BF.RX_DP_LMS_FFE_PST7_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST7_EXT_LANE_2_0  RX_DP_LMS_FFE_REG17.BF.RX_DP_LMS_FFE_PST7_EXT_LANE_2_0

// 0x0088	RX_DP_LMS_FFE_REG18		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST8_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST8_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG18_t;
__xdata __at( 0x2b88 ) volatile RX_DP_LMS_FFE_REG18_t RX_DP_LMS_FFE_REG18;
#define reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0  RX_DP_LMS_FFE_REG18.BF.RX_DP_LMS_FFE_PST8_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST8_EXT_LANE_2_0  RX_DP_LMS_FFE_REG18.BF.RX_DP_LMS_FFE_PST8_EXT_LANE_2_0

// 0x008c	RX_DP_LMS_FFE_REG19		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST9_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST9_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG19_t;
__xdata __at( 0x2b8c ) volatile RX_DP_LMS_FFE_REG19_t RX_DP_LMS_FFE_REG19;
#define reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0  RX_DP_LMS_FFE_REG19.BF.RX_DP_LMS_FFE_PST9_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST9_EXT_LANE_2_0  RX_DP_LMS_FFE_REG19.BF.RX_DP_LMS_FFE_PST9_EXT_LANE_2_0

// 0x0090	RX_DP_LMS_FFE_REG20		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST10_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST10_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG20_t;
__xdata __at( 0x2b90 ) volatile RX_DP_LMS_FFE_REG20_t RX_DP_LMS_FFE_REG20;
#define reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0  RX_DP_LMS_FFE_REG20.BF.RX_DP_LMS_FFE_PST10_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST10_EXT_LANE_2_0  RX_DP_LMS_FFE_REG20.BF.RX_DP_LMS_FFE_PST10_EXT_LANE_2_0

// 0x0094	RX_DP_LMS_FFE_REG21		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST11_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST11_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG21_t;
__xdata __at( 0x2b94 ) volatile RX_DP_LMS_FFE_REG21_t RX_DP_LMS_FFE_REG21;
#define reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0  RX_DP_LMS_FFE_REG21.BF.RX_DP_LMS_FFE_PST11_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST11_EXT_LANE_2_0  RX_DP_LMS_FFE_REG21.BF.RX_DP_LMS_FFE_PST11_EXT_LANE_2_0

// 0x0098	RX_DP_LMS_FFE_REG22		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST12_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST12_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG22_t;
__xdata __at( 0x2b98 ) volatile RX_DP_LMS_FFE_REG22_t RX_DP_LMS_FFE_REG22;
#define reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0  RX_DP_LMS_FFE_REG22.BF.RX_DP_LMS_FFE_PST12_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST12_EXT_LANE_2_0  RX_DP_LMS_FFE_REG22.BF.RX_DP_LMS_FFE_PST12_EXT_LANE_2_0

// 0x009c	RX_DP_LMS_FFE_REG23		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST13_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST13_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG23_t;
__xdata __at( 0x2b9c ) volatile RX_DP_LMS_FFE_REG23_t RX_DP_LMS_FFE_REG23;
#define reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0  RX_DP_LMS_FFE_REG23.BF.RX_DP_LMS_FFE_PST13_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST13_EXT_LANE_2_0  RX_DP_LMS_FFE_REG23.BF.RX_DP_LMS_FFE_PST13_EXT_LANE_2_0

// 0x00a0	RX_DP_LMS_FFE_REG24		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST14_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST14_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG24_t;
__xdata __at( 0x2ba0 ) volatile RX_DP_LMS_FFE_REG24_t RX_DP_LMS_FFE_REG24;
#define reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0  RX_DP_LMS_FFE_REG24.BF.RX_DP_LMS_FFE_PST14_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST14_EXT_LANE_2_0  RX_DP_LMS_FFE_REG24.BF.RX_DP_LMS_FFE_PST14_EXT_LANE_2_0

// 0x00a4	RX_DP_LMS_FFE_REG25		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST15_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST15_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG25_t;
__xdata __at( 0x2ba4 ) volatile RX_DP_LMS_FFE_REG25_t RX_DP_LMS_FFE_REG25;
#define reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0  RX_DP_LMS_FFE_REG25.BF.RX_DP_LMS_FFE_PST15_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST15_EXT_LANE_2_0  RX_DP_LMS_FFE_REG25.BF.RX_DP_LMS_FFE_PST15_EXT_LANE_2_0

// 0x00a8	RX_DP_LMS_FFE_REG26		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST16_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST16_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG26_t;
__xdata __at( 0x2ba8 ) volatile RX_DP_LMS_FFE_REG26_t RX_DP_LMS_FFE_REG26;
#define reg_RX_DP_LMS_FFE_PST16_COE_LANE_2_0  RX_DP_LMS_FFE_REG26.BF.RX_DP_LMS_FFE_PST16_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST16_EXT_LANE_2_0  RX_DP_LMS_FFE_REG26.BF.RX_DP_LMS_FFE_PST16_EXT_LANE_2_0

// 0x00ac	RX_DP_LMS_FFE_REG27		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST17_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST17_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG27_t;
__xdata __at( 0x2bac ) volatile RX_DP_LMS_FFE_REG27_t RX_DP_LMS_FFE_REG27;
#define reg_RX_DP_LMS_FFE_PST17_COE_LANE_2_0  RX_DP_LMS_FFE_REG27.BF.RX_DP_LMS_FFE_PST17_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST17_EXT_LANE_2_0  RX_DP_LMS_FFE_REG27.BF.RX_DP_LMS_FFE_PST17_EXT_LANE_2_0

// 0x00b0	RX_DP_LMS_FFE_REG28		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST18_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST18_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG28_t;
__xdata __at( 0x2bb0 ) volatile RX_DP_LMS_FFE_REG28_t RX_DP_LMS_FFE_REG28;
#define reg_RX_DP_LMS_FFE_PST18_COE_LANE_2_0  RX_DP_LMS_FFE_REG28.BF.RX_DP_LMS_FFE_PST18_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST18_EXT_LANE_2_0  RX_DP_LMS_FFE_REG28.BF.RX_DP_LMS_FFE_PST18_EXT_LANE_2_0

// 0x00b4	RX_DP_LMS_FFE_REG29		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST19_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST19_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG29_t;
__xdata __at( 0x2bb4 ) volatile RX_DP_LMS_FFE_REG29_t RX_DP_LMS_FFE_REG29;
#define reg_RX_DP_LMS_FFE_PST19_COE_LANE_2_0  RX_DP_LMS_FFE_REG29.BF.RX_DP_LMS_FFE_PST19_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST19_EXT_LANE_2_0  RX_DP_LMS_FFE_REG29.BF.RX_DP_LMS_FFE_PST19_EXT_LANE_2_0

// 0x00b8	RX_DP_LMS_FFE_REG30		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST20_COE_LANE_2_0         : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST20_EXT_LANE_2_0         : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG30_t;
__xdata __at( 0x2bb8 ) volatile RX_DP_LMS_FFE_REG30_t RX_DP_LMS_FFE_REG30;
#define reg_RX_DP_LMS_FFE_PST20_COE_LANE_2_0  RX_DP_LMS_FFE_REG30.BF.RX_DP_LMS_FFE_PST20_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_PST20_EXT_LANE_2_0  RX_DP_LMS_FFE_REG30.BF.RX_DP_LMS_FFE_PST20_EXT_LANE_2_0

// 0x00bc	RX_DP_LMS_FFE_REG31		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT1_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT1_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG31_t;
__xdata __at( 0x2bbc ) volatile RX_DP_LMS_FFE_REG31_t RX_DP_LMS_FFE_REG31;
#define reg_RX_DP_LMS_FFE_FLT1_COE_LANE_2_0  RX_DP_LMS_FFE_REG31.BF.RX_DP_LMS_FFE_FLT1_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT1_EXT_LANE_2_0  RX_DP_LMS_FFE_REG31.BF.RX_DP_LMS_FFE_FLT1_EXT_LANE_2_0

// 0x00c0	RX_DP_LMS_FFE_REG32		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT2_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT2_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG32_t;
__xdata __at( 0x2bc0 ) volatile RX_DP_LMS_FFE_REG32_t RX_DP_LMS_FFE_REG32;
#define reg_RX_DP_LMS_FFE_FLT2_COE_LANE_2_0  RX_DP_LMS_FFE_REG32.BF.RX_DP_LMS_FFE_FLT2_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT2_EXT_LANE_2_0  RX_DP_LMS_FFE_REG32.BF.RX_DP_LMS_FFE_FLT2_EXT_LANE_2_0

// 0x00c4	RX_DP_LMS_FFE_REG33		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT3_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT3_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG33_t;
__xdata __at( 0x2bc4 ) volatile RX_DP_LMS_FFE_REG33_t RX_DP_LMS_FFE_REG33;
#define reg_RX_DP_LMS_FFE_FLT3_COE_LANE_2_0  RX_DP_LMS_FFE_REG33.BF.RX_DP_LMS_FFE_FLT3_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT3_EXT_LANE_2_0  RX_DP_LMS_FFE_REG33.BF.RX_DP_LMS_FFE_FLT3_EXT_LANE_2_0

// 0x00c8	RX_DP_LMS_FFE_REG34		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT4_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT4_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG34_t;
__xdata __at( 0x2bc8 ) volatile RX_DP_LMS_FFE_REG34_t RX_DP_LMS_FFE_REG34;
#define reg_RX_DP_LMS_FFE_FLT4_COE_LANE_2_0  RX_DP_LMS_FFE_REG34.BF.RX_DP_LMS_FFE_FLT4_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT4_EXT_LANE_2_0  RX_DP_LMS_FFE_REG34.BF.RX_DP_LMS_FFE_FLT4_EXT_LANE_2_0

// 0x00cc	RX_DP_LMS_FFE_REG35		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT5_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT5_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG35_t;
__xdata __at( 0x2bcc ) volatile RX_DP_LMS_FFE_REG35_t RX_DP_LMS_FFE_REG35;
#define reg_RX_DP_LMS_FFE_FLT5_COE_LANE_2_0  RX_DP_LMS_FFE_REG35.BF.RX_DP_LMS_FFE_FLT5_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT5_EXT_LANE_2_0  RX_DP_LMS_FFE_REG35.BF.RX_DP_LMS_FFE_FLT5_EXT_LANE_2_0

// 0x00d0	RX_DP_LMS_FFE_REG36		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT6_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT6_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG36_t;
__xdata __at( 0x2bd0 ) volatile RX_DP_LMS_FFE_REG36_t RX_DP_LMS_FFE_REG36;
#define reg_RX_DP_LMS_FFE_FLT6_COE_LANE_2_0  RX_DP_LMS_FFE_REG36.BF.RX_DP_LMS_FFE_FLT6_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT6_EXT_LANE_2_0  RX_DP_LMS_FFE_REG36.BF.RX_DP_LMS_FFE_FLT6_EXT_LANE_2_0

// 0x00d4	RX_DP_LMS_FFE_REG37		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT7_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT7_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG37_t;
__xdata __at( 0x2bd4 ) volatile RX_DP_LMS_FFE_REG37_t RX_DP_LMS_FFE_REG37;
#define reg_RX_DP_LMS_FFE_FLT7_COE_LANE_2_0  RX_DP_LMS_FFE_REG37.BF.RX_DP_LMS_FFE_FLT7_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT7_EXT_LANE_2_0  RX_DP_LMS_FFE_REG37.BF.RX_DP_LMS_FFE_FLT7_EXT_LANE_2_0

// 0x00d8	RX_DP_LMS_FFE_REG38		RX DP LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT8_COE_LANE_2_0          : 3;	/* [10:8]       r 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[23:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:11]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT8_EXT_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_LMS_FFE_REG38_t;
__xdata __at( 0x2bd8 ) volatile RX_DP_LMS_FFE_REG38_t RX_DP_LMS_FFE_REG38;
#define reg_RX_DP_LMS_FFE_FLT8_COE_LANE_2_0  RX_DP_LMS_FFE_REG38.BF.RX_DP_LMS_FFE_FLT8_COE_LANE_2_0
#define reg_RX_DP_LMS_FFE_FLT8_EXT_LANE_2_0  RX_DP_LMS_FFE_REG38.BF.RX_DP_LMS_FFE_FLT8_EXT_LANE_2_0

// 0x00f0	RX_DP_GB_CTRL_REG0		Rx Data Path Gearbox Control Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:0]     r/w   0*/
		uint8_t WIDTH_CONVT_EN_LANE                      : 1;	/*     23     r/w   0*/
		uint8_t WIDTH_CONVT_EN_FORCE_LANE                : 1;	/*     24     r/w   0*/
		uint8_t WIDTH_CONVT2_EN_LANE                     : 1;	/*     25     r/w   0*/
		uint8_t WIDTH_CONVT2_EN_FORCE_LANE               : 1;	/*     26     r/w   0*/
		uint8_t WIDTH_CONVT1_EN_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t WIDTH_CONVT1_EN_FORCE_LANE               : 1;	/*     28     r/w   0*/
		uint8_t FIFO_RD_DELAY_LANE                       : 1;	/*     29     r/w   0*/
		uint8_t FIFO_EN_LANE                             : 1;	/*     30     r/w   0*/
		uint8_t FIFO_EN_FORCE_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_GB_CTRL_REG0_t;
__xdata __at( 0x2bf0 ) volatile RX_DP_GB_CTRL_REG0_t RX_DP_GB_CTRL_REG0;
#define reg_WIDTH_CONVT_EN_LANE  RX_DP_GB_CTRL_REG0.BF.WIDTH_CONVT_EN_LANE
#define reg_WIDTH_CONVT_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.WIDTH_CONVT_EN_FORCE_LANE
#define reg_WIDTH_CONVT2_EN_LANE  RX_DP_GB_CTRL_REG0.BF.WIDTH_CONVT2_EN_LANE
#define reg_WIDTH_CONVT2_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.WIDTH_CONVT2_EN_FORCE_LANE
#define reg_WIDTH_CONVT1_EN_LANE  RX_DP_GB_CTRL_REG0.BF.WIDTH_CONVT1_EN_LANE
#define reg_WIDTH_CONVT1_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.WIDTH_CONVT1_EN_FORCE_LANE
#define reg_FIFO_RD_DELAY_LANE  RX_DP_GB_CTRL_REG0.BF.FIFO_RD_DELAY_LANE
#define reg_FIFO_EN_LANE  RX_DP_GB_CTRL_REG0.BF.FIFO_EN_LANE
#define reg_FIFO_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.FIFO_EN_FORCE_LANE

// 0x00f4	RX_DP_GB_CTRL_REG1		Rx Data Path Gearbox Control Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [18:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [18:0]     r/w   0*/
		uint8_t RESERVED_16                              : 3;	/* [18:0]     r/w   0*/
		uint8_t RX_GB_CONVT_RXCLK_EN_LANE                : 1;	/*     19     r/w   1*/
		uint8_t RX_GB_CONVT_RXCLK_ON_LANE                : 1;	/*     20     r/w   0*/
		uint8_t RX_GB_CONVT1_ADCCLK_EN_LANE              : 1;	/*     21     r/w   1*/
		uint8_t RX_GB_CONVT1_ADCCLK_ON_LANE              : 1;	/*     22     r/w   0*/
		uint8_t RX_GB_FIFO_RD_CLK_EN_LANE                : 1;	/*     23     r/w   1*/
		uint8_t RX_GB_FIFO_RD_CLK_ON_LANE                : 1;	/*     24     r/w   0*/
		uint8_t RX_GB_FIFO_WR_CLK_EN_LANE                : 1;	/*     25     r/w   1*/
		uint8_t RX_GB_FIFO_WR_CLK_ON_LANE                : 1;	/*     26     r/w   0*/
		uint8_t RX_GB_ADCCLK_EN_LANE                     : 1;	/*     27     r/w   1*/
		uint8_t RX_GB_ADCCLK_ON_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t RX_GB_RXCLK_EN_LANE                      : 1;	/*     29     r/w   1*/
		uint8_t RX_GB_RXCLK_ON_LANE                      : 1;	/*     30     r/w   0*/
		uint8_t RX_GB_RST_LANE                           : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_GB_CTRL_REG1_t;
__xdata __at( 0x2bf4 ) volatile RX_DP_GB_CTRL_REG1_t RX_DP_GB_CTRL_REG1;
#define reg_RX_GB_CONVT_RXCLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_CONVT_RXCLK_EN_LANE
#define reg_RX_GB_CONVT_RXCLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_CONVT_RXCLK_ON_LANE
#define reg_RX_GB_CONVT1_ADCCLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_CONVT1_ADCCLK_EN_LANE
#define reg_RX_GB_CONVT1_ADCCLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_CONVT1_ADCCLK_ON_LANE
#define reg_RX_GB_FIFO_RD_CLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_FIFO_RD_CLK_EN_LANE
#define reg_RX_GB_FIFO_RD_CLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_FIFO_RD_CLK_ON_LANE
#define reg_RX_GB_FIFO_WR_CLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_FIFO_WR_CLK_EN_LANE
#define reg_RX_GB_FIFO_WR_CLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_FIFO_WR_CLK_ON_LANE
#define reg_RX_GB_ADCCLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_ADCCLK_EN_LANE
#define reg_RX_GB_ADCCLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_ADCCLK_ON_LANE
#define reg_RX_GB_RXCLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_RXCLK_EN_LANE
#define reg_RX_GB_RXCLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_RXCLK_ON_LANE
#define reg_RX_GB_RST_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_RST_LANE

#endif
