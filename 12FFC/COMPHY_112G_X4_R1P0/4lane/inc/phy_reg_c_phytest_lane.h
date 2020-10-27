#ifndef PHY_REG_C_PHYTEST_LANE_H
#define PHY_REG_C_PHYTEST_LANE_H



// 0x0000	PT_CONTROL0		Main Control Register
typedef union {
	struct {
		uint8_t PT_RST_LANE                              : 1;	/*      0     r/w   0*/
		uint8_t PT_TX_MODE2_RST_DIS_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t PT_CNT_PAUSE_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t TX_TRAIN_PAT_FORCE_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_LANE_1_0                : 2;	/*  [5:4]     r/w   0*/
		uint8_t TX_TRAIN_POLY_SEL_FM_PIN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t PT_CNT_RST_LANE                          : 1;	/*      7     r/w   0*/
		uint8_t PT_LOCK_CNT_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h40*/
		uint8_t PT_RX_PATTERN_SEL_LANE_5_0               : 6;	/*[21:16]     r/w 6'h10*/
		uint8_t PT_TX_PATTERN_SEL_LANE_5_0_b0            : 2;	/*[27:22]     r/w 6'h10*/
		uint8_t PT_TX_PATTERN_SEL_LANE_5_0_b1            : 4;	/*[27:22]     r/w 6'h10*/
		uint8_t PT_PHYREADY_FORCE_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t PT_EN_MODE_LANE_1_0                      : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t PT_EN_LANE                               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_CONTROL0_t;
__xdata __at( 0x2300 ) volatile PT_CONTROL0_t PT_CONTROL0;
#define reg_PT_RST_LANE  PT_CONTROL0.BF.PT_RST_LANE
#define reg_PT_TX_MODE2_RST_DIS_LANE  PT_CONTROL0.BF.PT_TX_MODE2_RST_DIS_LANE
#define reg_PT_CNT_PAUSE_LANE  PT_CONTROL0.BF.PT_CNT_PAUSE_LANE
#define reg_TX_TRAIN_PAT_FORCE_LANE  PT_CONTROL0.BF.TX_TRAIN_PAT_FORCE_LANE
#define reg_TX_TRAIN_PAT_SEL_LANE_1_0  PT_CONTROL0.BF.TX_TRAIN_PAT_SEL_LANE_1_0
#define reg_TX_TRAIN_POLY_SEL_FM_PIN_LANE  PT_CONTROL0.BF.TX_TRAIN_POLY_SEL_FM_PIN_LANE
#define reg_PT_CNT_RST_LANE  PT_CONTROL0.BF.PT_CNT_RST_LANE
#define reg_PT_LOCK_CNT_LANE_7_0  PT_CONTROL0.BF.PT_LOCK_CNT_LANE_7_0
#define reg_PT_RX_PATTERN_SEL_LANE_5_0  PT_CONTROL0.BF.PT_RX_PATTERN_SEL_LANE_5_0
#define reg_PT_TX_PATTERN_SEL_LANE_5_0_b0  PT_CONTROL0.BF.PT_TX_PATTERN_SEL_LANE_5_0_b0
#define reg_PT_TX_PATTERN_SEL_LANE_5_0_b1  PT_CONTROL0.BF.PT_TX_PATTERN_SEL_LANE_5_0_b1
#define reg_PT_PHYREADY_FORCE_LANE  PT_CONTROL0.BF.PT_PHYREADY_FORCE_LANE
#define reg_PT_EN_MODE_LANE_1_0  PT_CONTROL0.BF.PT_EN_MODE_LANE_1_0
#define reg_PT_EN_LANE  PT_CONTROL0.BF.PT_EN_LANE

// 0x0004	PT_CONTROL1		Detail Control Register1
typedef union {
	struct {
		uint8_t TX_TRAIN_PAT_SEL_RX_LANE_1_0             : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_TRAIN_PAT_LOCK_MODE_LANE              : 1;	/*      2     r/w   0*/
		uint8_t PRBS_DATA_DETECTED_LANE_1_0              : 2;	/*  [4:3]       r   0*/
		uint8_t PRBS_DATA_SET_LANE_1_0                   : 2;	/*  [6:5]     r/w   0*/
		uint8_t FORCE_PRBS_DATA_SET_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t PT_LOCK_SET_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t FORCE_PT_LOCK_LANE                       : 1;	/*      9     r/w   0*/
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
		uint8_t PT_PRBS_INV_RX_LANE                      : 1;	/*     21     r/w   0*/
		uint8_t PT_PRBS_GRAY_EN_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t PT_PRBS_INV_LANE                         : 1;	/*     23     r/w   0*/
		uint8_t PT_LOCK_MODE_LANE                        : 1;	/*     24     r/w   1*/
		uint8_t PT_PRBS_LOAD_LANE                        : 1;	/*     25     r/w   1*/
		uint8_t RESERVED_26                              : 4;	/*[29:26]     r/w   0*/
		uint8_t PT_SYNC_MODE_LANE                        : 1;	/*     30     r/w   0*/
		uint8_t PT_RELOCK_LANE                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_CONTROL1_t;
__xdata __at( 0x2304 ) volatile PT_CONTROL1_t PT_CONTROL1;
#define reg_TX_TRAIN_PAT_SEL_RX_LANE_1_0  PT_CONTROL1.BF.TX_TRAIN_PAT_SEL_RX_LANE_1_0
#define reg_TX_TRAIN_PAT_LOCK_MODE_LANE  PT_CONTROL1.BF.TX_TRAIN_PAT_LOCK_MODE_LANE
#define reg_PRBS_DATA_DETECTED_LANE_1_0  PT_CONTROL1.BF.PRBS_DATA_DETECTED_LANE_1_0
#define reg_PRBS_DATA_SET_LANE_1_0  PT_CONTROL1.BF.PRBS_DATA_SET_LANE_1_0
#define reg_FORCE_PRBS_DATA_SET_LANE  PT_CONTROL1.BF.FORCE_PRBS_DATA_SET_LANE
#define reg_PT_LOCK_SET_LANE  PT_CONTROL1.BF.PT_LOCK_SET_LANE
#define reg_FORCE_PT_LOCK_LANE  PT_CONTROL1.BF.FORCE_PT_LOCK_LANE
#define reg_PT_PRBS_INV_RX_LANE  PT_CONTROL1.BF.PT_PRBS_INV_RX_LANE
#define reg_PT_PRBS_GRAY_EN_LANE  PT_CONTROL1.BF.PT_PRBS_GRAY_EN_LANE
#define reg_PT_PRBS_INV_LANE  PT_CONTROL1.BF.PT_PRBS_INV_LANE
#define reg_PT_LOCK_MODE_LANE  PT_CONTROL1.BF.PT_LOCK_MODE_LANE
#define reg_PT_PRBS_LOAD_LANE  PT_CONTROL1.BF.PT_PRBS_LOAD_LANE
#define reg_PT_SYNC_MODE_LANE  PT_CONTROL1.BF.PT_SYNC_MODE_LANE
#define reg_PT_RELOCK_LANE  PT_CONTROL1.BF.PT_RELOCK_LANE

// 0x0008	PT_USER_PATTERN0		User Defined Pattern0
typedef union {
	struct {
		uint8_t PT_USER_PATTERN_LANE_79_48_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_USER_PATTERN_LANE_79_48_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_USER_PATTERN_LANE_79_48_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_USER_PATTERN_LANE_79_48_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_USER_PATTERN0_t;
__xdata __at( 0x2308 ) volatile PT_USER_PATTERN0_t PT_USER_PATTERN0;
#define reg_PT_USER_PATTERN_LANE_79_48_b0  PT_USER_PATTERN0.BF.PT_USER_PATTERN_LANE_79_48_b0
#define reg_PT_USER_PATTERN_LANE_79_48_b1  PT_USER_PATTERN0.BF.PT_USER_PATTERN_LANE_79_48_b1
#define reg_PT_USER_PATTERN_LANE_79_48_b2  PT_USER_PATTERN0.BF.PT_USER_PATTERN_LANE_79_48_b2
#define reg_PT_USER_PATTERN_LANE_79_48_b3  PT_USER_PATTERN0.BF.PT_USER_PATTERN_LANE_79_48_b3

// 0x000c	PT_USER_PATTERN1		User Defined Pattern1
typedef union {
	struct {
		uint8_t PT_USER_PATTERN_LANE_47_16_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_USER_PATTERN_LANE_47_16_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_USER_PATTERN_LANE_47_16_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_USER_PATTERN_LANE_47_16_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_USER_PATTERN1_t;
__xdata __at( 0x230c ) volatile PT_USER_PATTERN1_t PT_USER_PATTERN1;
#define reg_PT_USER_PATTERN_LANE_47_16_b0  PT_USER_PATTERN1.BF.PT_USER_PATTERN_LANE_47_16_b0
#define reg_PT_USER_PATTERN_LANE_47_16_b1  PT_USER_PATTERN1.BF.PT_USER_PATTERN_LANE_47_16_b1
#define reg_PT_USER_PATTERN_LANE_47_16_b2  PT_USER_PATTERN1.BF.PT_USER_PATTERN_LANE_47_16_b2
#define reg_PT_USER_PATTERN_LANE_47_16_b3  PT_USER_PATTERN1.BF.PT_USER_PATTERN_LANE_47_16_b3

// 0x0010	PT_USER_PATTERN2		User Defined Pattern2
typedef union {
	struct {
		uint8_t PT_LOCK_LANE                             : 1;	/*      0       r   0*/
		uint8_t PT_PASS_LANE                             : 1;	/*      1       r   0*/
		uint8_t PT_CNT_READY_LANE                        : 1;	/*      2       r   0*/
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
		uint8_t PT_USER_PATTERN_LANE_15_0_b0             : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t PT_USER_PATTERN_LANE_15_0_b1             : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PT_USER_PATTERN2_t;
__xdata __at( 0x2310 ) volatile PT_USER_PATTERN2_t PT_USER_PATTERN2;
#define reg_PT_LOCK_LANE  PT_USER_PATTERN2.BF.PT_LOCK_LANE
#define reg_PT_PASS_LANE  PT_USER_PATTERN2.BF.PT_PASS_LANE
#define reg_PT_CNT_READY_LANE  PT_USER_PATTERN2.BF.PT_CNT_READY_LANE
#define reg_PT_USER_PATTERN_LANE_15_0_b0  PT_USER_PATTERN2.BF.PT_USER_PATTERN_LANE_15_0_b0
#define reg_PT_USER_PATTERN_LANE_15_0_b1  PT_USER_PATTERN2.BF.PT_USER_PATTERN_LANE_15_0_b1
#define reg_PT_USER_PATTERN_LANE_15_0  PT_USER_PATTERN2.WT.W1

// 0x0014	PT_CONTROL2		Detail Control Register2
typedef union {
	struct {
		uint8_t PT_PRBS_SEED_LANE_31_0_b0                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_PRBS_SEED_LANE_31_0_b1                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_PRBS_SEED_LANE_31_0_b2                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_PRBS_SEED_LANE_31_0_b3                : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_CONTROL2_t;
__xdata __at( 0x2314 ) volatile PT_CONTROL2_t PT_CONTROL2;
#define reg_PT_PRBS_SEED_LANE_31_0_b0  PT_CONTROL2.BF.PT_PRBS_SEED_LANE_31_0_b0
#define reg_PT_PRBS_SEED_LANE_31_0_b1  PT_CONTROL2.BF.PT_PRBS_SEED_LANE_31_0_b1
#define reg_PT_PRBS_SEED_LANE_31_0_b2  PT_CONTROL2.BF.PT_PRBS_SEED_LANE_31_0_b2
#define reg_PT_PRBS_SEED_LANE_31_0_b3  PT_CONTROL2.BF.PT_PRBS_SEED_LANE_31_0_b3

// 0x0018	PT_COUNTER0		Pattern Counter0
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
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PT_CNT_LANE_47_32_b0                     : 8;	/*[31:16]       r   0*/
		uint8_t PT_CNT_LANE_47_32_b1                     : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PT_COUNTER0_t;
__xdata __at( 0x2318 ) volatile PT_COUNTER0_t PT_COUNTER0;
#define reg_PT_CNT_LANE_47_32_b0  PT_COUNTER0.BF.PT_CNT_LANE_47_32_b0
#define reg_PT_CNT_LANE_47_32_b1  PT_COUNTER0.BF.PT_CNT_LANE_47_32_b1
#define reg_PT_CNT_LANE_47_32  PT_COUNTER0.WT.W1

// 0x001c	PT_COUNTER1		Pattern Counter1
typedef union {
	struct {
		uint8_t PT_CNT_LANE_31_0_b0                      : 8;	/* [31:0]       r   0*/
		uint8_t PT_CNT_LANE_31_0_b1                      : 8;	/* [31:0]       r   0*/
		uint8_t PT_CNT_LANE_31_0_b2                      : 8;	/* [31:0]       r   0*/
		uint8_t PT_CNT_LANE_31_0_b3                      : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_COUNTER1_t;
__xdata __at( 0x231c ) volatile PT_COUNTER1_t PT_COUNTER1;
#define reg_PT_CNT_LANE_31_0_b0  PT_COUNTER1.BF.PT_CNT_LANE_31_0_b0
#define reg_PT_CNT_LANE_31_0_b1  PT_COUNTER1.BF.PT_CNT_LANE_31_0_b1
#define reg_PT_CNT_LANE_31_0_b2  PT_COUNTER1.BF.PT_CNT_LANE_31_0_b2
#define reg_PT_CNT_LANE_31_0_b3  PT_COUNTER1.BF.PT_CNT_LANE_31_0_b3

// 0x0020	PT_COUNTER2		Pattern Counter2
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
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PT_ERR_CNT_LANE_47_32_b0                 : 8;	/*[31:16]       r   0*/
		uint8_t PT_ERR_CNT_LANE_47_32_b1                 : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PT_COUNTER2_t;
__xdata __at( 0x2320 ) volatile PT_COUNTER2_t PT_COUNTER2;
#define reg_PT_ERR_CNT_LANE_47_32_b0  PT_COUNTER2.BF.PT_ERR_CNT_LANE_47_32_b0
#define reg_PT_ERR_CNT_LANE_47_32_b1  PT_COUNTER2.BF.PT_ERR_CNT_LANE_47_32_b1
#define reg_PT_ERR_CNT_LANE_47_32  PT_COUNTER2.WT.W1

// 0x0024	PT_COUNTER3		Pattern Counter3
typedef union {
	struct {
		uint8_t PT_ERR_CNT_LANE_31_0_b0                  : 8;	/* [31:0]       r   0*/
		uint8_t PT_ERR_CNT_LANE_31_0_b1                  : 8;	/* [31:0]       r   0*/
		uint8_t PT_ERR_CNT_LANE_31_0_b2                  : 8;	/* [31:0]       r   0*/
		uint8_t PT_ERR_CNT_LANE_31_0_b3                  : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_COUNTER3_t;
__xdata __at( 0x2324 ) volatile PT_COUNTER3_t PT_COUNTER3;
#define reg_PT_ERR_CNT_LANE_31_0_b0  PT_COUNTER3.BF.PT_ERR_CNT_LANE_31_0_b0
#define reg_PT_ERR_CNT_LANE_31_0_b1  PT_COUNTER3.BF.PT_ERR_CNT_LANE_31_0_b1
#define reg_PT_ERR_CNT_LANE_31_0_b2  PT_COUNTER3.BF.PT_ERR_CNT_LANE_31_0_b2
#define reg_PT_ERR_CNT_LANE_31_0_b3  PT_COUNTER3.BF.PT_ERR_CNT_LANE_31_0_b3

// 0x0028	PT_COUNTER4		Pattern Counter4
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
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PT_CNT_MAX_LANE_47_32_b0                 : 8;	/*[31:16]     r/w 16'hffff*/
		uint8_t PT_CNT_MAX_LANE_47_32_b1                 : 8;	/*[31:16]     r/w 16'hffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PT_COUNTER4_t;
__xdata __at( 0x2328 ) volatile PT_COUNTER4_t PT_COUNTER4;
#define reg_PT_CNT_MAX_LANE_47_32_b0  PT_COUNTER4.BF.PT_CNT_MAX_LANE_47_32_b0
#define reg_PT_CNT_MAX_LANE_47_32_b1  PT_COUNTER4.BF.PT_CNT_MAX_LANE_47_32_b1
#define reg_PT_CNT_MAX_LANE_47_32  PT_COUNTER4.WT.W1

// 0x002c	PT_COUNTER5		Pattern Counter5
typedef union {
	struct {
		uint8_t PT_CNT_MAX_LANE_31_0_b0                  : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_CNT_MAX_LANE_31_0_b1                  : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_CNT_MAX_LANE_31_0_b2                  : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_CNT_MAX_LANE_31_0_b3                  : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PT_COUNTER5_t;
__xdata __at( 0x232c ) volatile PT_COUNTER5_t PT_COUNTER5;
#define reg_PT_CNT_MAX_LANE_31_0_b0  PT_COUNTER5.BF.PT_CNT_MAX_LANE_31_0_b0
#define reg_PT_CNT_MAX_LANE_31_0_b1  PT_COUNTER5.BF.PT_CNT_MAX_LANE_31_0_b1
#define reg_PT_CNT_MAX_LANE_31_0_b2  PT_COUNTER5.BF.PT_CNT_MAX_LANE_31_0_b2
#define reg_PT_CNT_MAX_LANE_31_0_b3  PT_COUNTER5.BF.PT_CNT_MAX_LANE_31_0_b3

#endif
