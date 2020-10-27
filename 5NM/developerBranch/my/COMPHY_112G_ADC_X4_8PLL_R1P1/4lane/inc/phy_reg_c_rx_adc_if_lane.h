#ifndef PHY_REG_C_RX_ADC_IF_LANE_H
#define PHY_REG_C_RX_ADC_IF_LANE_H



// 0x0000	RX_ADC_IF_TOP_CTRL		ADC Interface Top Control
typedef union {
	struct {
		uint8_t RX_ADC_IF_DELTA_ZERO_LANE_4_0            : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_ADC_IF_MEM_EOM_PATH4_EN_LANE          : 1;	/*      5     r/w   0*/
		uint8_t RX_ADC_IF_MEM_EOM_PATH0_EN_LANE          : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_DP_OUT_SEL_LANE                : 1;	/*      8     r/w   0*/
		uint8_t RX_ADC_IF_SKEW_OUT_SEL_LANE              : 1;	/*      9     r/w   0*/
		uint8_t RX_ADC_IF_LSB_REMOVE_LANE_1_0            : 2;	/*[11:10]     r/w   0*/
		uint8_t RX_ADC_IF_LSB_REMOVE_AD_EN_LANE          : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 2;	/*[14:13]     r/w   0*/
		uint8_t RX_ADC_IF_RD_REQ_LANE                    : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_STOP_TIME_LANE_5_0             : 6;	/*[21:16]     r/w   0*/
		uint8_t RX_ADC_IF_AVG_SIZE_LANE_1_0              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_RUN_TIME_LANE_5_0              : 6;	/*[29:24]     r/w   0*/
		uint8_t RX_ADC_IF_RUN_STOP_EN_LANE               : 1;	/*     30     r/w   0*/
		uint8_t RX_ADC_IF_TOP_EN_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_TOP_CTRL_t;
__xdata __at( 0x4600 ) volatile RX_ADC_IF_TOP_CTRL_t RX_ADC_IF_TOP_CTRL;
#define reg_RX_ADC_IF_DELTA_ZERO_LANE_4_0  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_DELTA_ZERO_LANE_4_0
#define reg_RX_ADC_IF_MEM_EOM_PATH4_EN_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_MEM_EOM_PATH4_EN_LANE
#define reg_RX_ADC_IF_MEM_EOM_PATH0_EN_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_MEM_EOM_PATH0_EN_LANE
#define reg_RX_ADC_IF_DP_OUT_SEL_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_DP_OUT_SEL_LANE
#define reg_RX_ADC_IF_SKEW_OUT_SEL_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_SKEW_OUT_SEL_LANE
#define reg_RX_ADC_IF_LSB_REMOVE_LANE_1_0  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_LSB_REMOVE_LANE_1_0
#define reg_RX_ADC_IF_LSB_REMOVE_AD_EN_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_LSB_REMOVE_AD_EN_LANE
#define reg_RX_ADC_IF_RD_REQ_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_RD_REQ_LANE
#define reg_RX_ADC_IF_STOP_TIME_LANE_5_0  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_STOP_TIME_LANE_5_0
#define reg_RX_ADC_IF_AVG_SIZE_LANE_1_0  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_AVG_SIZE_LANE_1_0
#define reg_RX_ADC_IF_RUN_TIME_LANE_5_0  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_RUN_TIME_LANE_5_0
#define reg_RX_ADC_IF_RUN_STOP_EN_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_RUN_STOP_EN_LANE
#define reg_RX_ADC_IF_TOP_EN_LANE  RX_ADC_IF_TOP_CTRL.BF.RX_ADC_IF_TOP_EN_LANE

// 0x0004	RX_ADC_IF_GAIN_CTRL		ADC Interface Gain Control
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t RX_ADC_IF_EOM_GAIN_LSB_REMOVE_LANE       : 1;	/*      6     r/w   0*/
		uint8_t RX_ADC_IF_EOM_GAIN_AVE_REJ_DIS_LANE      : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_EOM_GAIN_SIGN_LANE             : 1;	/*      8     r/w   0*/
		uint8_t RX_ADC_IF_EOM_GAIN_MU_LANE_3_0           : 4;	/* [12:9]     r/w 4'h5*/
		uint8_t RX_ADC_IF_EOM_GAIN_EN_LANE               : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t RX_ADC_IF_DAT_GAIN_LSB_REMOVE_LANE       : 1;	/*     22     r/w   0*/
		uint8_t RX_ADC_IF_DAT_GAIN_AVE_REJ_DIS_LANE      : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_DAT_GAIN_SIGN_LANE             : 1;	/*     24     r/w   0*/
		uint8_t RX_ADC_IF_DAT_GAIN_MU_LANE_3_0           : 4;	/*[28:25]     r/w 4'h5*/
		uint8_t RX_ADC_IF_DAT_GAIN_EN_LANE               : 1;	/*     29     r/w   1*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_CTRL_t;
__xdata __at( 0x4604 ) volatile RX_ADC_IF_GAIN_CTRL_t RX_ADC_IF_GAIN_CTRL;
#define reg_RX_ADC_IF_EOM_GAIN_LSB_REMOVE_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_EOM_GAIN_LSB_REMOVE_LANE
#define reg_RX_ADC_IF_EOM_GAIN_AVE_REJ_DIS_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_EOM_GAIN_AVE_REJ_DIS_LANE
#define reg_RX_ADC_IF_EOM_GAIN_SIGN_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_EOM_GAIN_SIGN_LANE
#define reg_RX_ADC_IF_EOM_GAIN_MU_LANE_3_0  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_EOM_GAIN_MU_LANE_3_0
#define reg_RX_ADC_IF_EOM_GAIN_EN_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_EOM_GAIN_EN_LANE
#define reg_RX_ADC_IF_DAT_GAIN_LSB_REMOVE_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_DAT_GAIN_LSB_REMOVE_LANE
#define reg_RX_ADC_IF_DAT_GAIN_AVE_REJ_DIS_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_DAT_GAIN_AVE_REJ_DIS_LANE
#define reg_RX_ADC_IF_DAT_GAIN_SIGN_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_DAT_GAIN_SIGN_LANE
#define reg_RX_ADC_IF_DAT_GAIN_MU_LANE_3_0  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_DAT_GAIN_MU_LANE_3_0
#define reg_RX_ADC_IF_DAT_GAIN_EN_LANE  RX_ADC_IF_GAIN_CTRL.BF.RX_ADC_IF_DAT_GAIN_EN_LANE

// 0x0008	RX_ADC_IF_OFST_CTRL		ADC Interface Offset Control
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_EXT_LANE_6_0              : 7;	/*  [6:0]     r/w   0*/
		uint8_t RX_ADC_IF_OFST_LOAD_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_EOM_OFST_SIGN_LANE             : 1;	/*      8     r/w   0*/
		uint8_t RX_ADC_IF_EOM_OFST_MU_LANE_3_0           : 4;	/* [12:9]     r/w 4'h5*/
		uint8_t RX_ADC_IF_EOM_OFST_EN_LANE               : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RX_ADC_IF_DAT_OFST_SIGN_LANE             : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_DAT_OFST_MU_LANE_3_0           : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RX_ADC_IF_DAT_OFST_EN_LANE               : 1;	/*     20     r/w   1*/
		uint8_t RESERVED_21                              : 2;	/*[22:21]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_LOAD_LANE                 : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_EXT_LANE_7_0              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_CTRL_t;
__xdata __at( 0x4608 ) volatile RX_ADC_IF_OFST_CTRL_t RX_ADC_IF_OFST_CTRL;
#define reg_RX_ADC_IF_OFST_EXT_LANE_6_0  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_OFST_EXT_LANE_6_0
#define reg_RX_ADC_IF_OFST_LOAD_LANE  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_OFST_LOAD_LANE
#define reg_RX_ADC_IF_EOM_OFST_SIGN_LANE  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_EOM_OFST_SIGN_LANE
#define reg_RX_ADC_IF_EOM_OFST_MU_LANE_3_0  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_EOM_OFST_MU_LANE_3_0
#define reg_RX_ADC_IF_EOM_OFST_EN_LANE  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_EOM_OFST_EN_LANE
#define reg_RX_ADC_IF_DAT_OFST_SIGN_LANE  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_DAT_OFST_SIGN_LANE
#define reg_RX_ADC_IF_DAT_OFST_MU_LANE_3_0  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_DAT_OFST_MU_LANE_3_0
#define reg_RX_ADC_IF_DAT_OFST_EN_LANE  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_DAT_OFST_EN_LANE
#define reg_RX_ADC_IF_GAIN_LOAD_LANE  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_GAIN_LOAD_LANE
#define reg_RX_ADC_IF_GAIN_EXT_LANE_7_0  RX_ADC_IF_OFST_CTRL.BF.RX_ADC_IF_GAIN_EXT_LANE_7_0

// 0x000c	RX_ADC_IF_TGT_CTRL0		ADC Interface Gain Target Control 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_TARGET_EXT_LANE_14_0_b0        : 8;	/* [14:0]     r/w 15'h1000*/
		uint8_t RX_ADC_IF_TARGET_EXT_LANE_14_0_b1        : 7;	/* [14:0]     r/w 15'h1000*/
		uint8_t RX_ADC_IF_TARGET_LOAD_LANE               : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_TARGET_AVG_SIZE_LANE_1_0       : 2;	/*[17:16]     r/w   0*/
		uint8_t RX_ADC_IF_TARGET_MU_LANE_3_0             : 4;	/*[21:18]     r/w 4'h5*/
		uint8_t RX_ADC_IF_TARGET_SEL_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RX_ADC_IF_TARGET_EXT_EN_LANE             : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_TARGET_EN_LANE                 : 1;	/*     24     r/w   0*/
		uint8_t RX_ADC_IF_EXT_SEL_LANE_6_0               : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_TGT_CTRL0_t;
__xdata __at( 0x460c ) volatile RX_ADC_IF_TGT_CTRL0_t RX_ADC_IF_TGT_CTRL0;
#define reg_RX_ADC_IF_TARGET_EXT_LANE_14_0_b0  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_EXT_LANE_14_0_b0
#define reg_RX_ADC_IF_TARGET_EXT_LANE_14_0_b1  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_EXT_LANE_14_0_b1
#define reg_RX_ADC_IF_TARGET_LOAD_LANE  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_LOAD_LANE
#define reg_RX_ADC_IF_TARGET_AVG_SIZE_LANE_1_0  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_AVG_SIZE_LANE_1_0
#define reg_RX_ADC_IF_TARGET_MU_LANE_3_0  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_MU_LANE_3_0
#define reg_RX_ADC_IF_TARGET_SEL_LANE  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_SEL_LANE
#define reg_RX_ADC_IF_TARGET_EXT_EN_LANE  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_EXT_EN_LANE
#define reg_RX_ADC_IF_TARGET_EN_LANE  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_TARGET_EN_LANE
#define reg_RX_ADC_IF_EXT_SEL_LANE_6_0  RX_ADC_IF_TGT_CTRL0.BF.RX_ADC_IF_EXT_SEL_LANE_6_0

// 0x0010	RX_ADC_IF_TGT_CTRL1		ADC Interface Gain Target Control 1
typedef union {
	struct {
		uint8_t RX_ADC_IF_TARGET_WORD_LANE_14_0_b0       : 8;	/* [14:0]       r   0*/
		uint8_t RX_ADC_IF_TARGET_WORD_LANE_14_0_b1       : 7;	/* [14:0]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_TGT_CTRL1_t;
__xdata __at( 0x4610 ) volatile RX_ADC_IF_TGT_CTRL1_t RX_ADC_IF_TGT_CTRL1;
#define reg_RX_ADC_IF_TARGET_WORD_LANE_14_0_b0  RX_ADC_IF_TGT_CTRL1.BF.RX_ADC_IF_TARGET_WORD_LANE_14_0_b0
#define reg_RX_ADC_IF_TARGET_WORD_LANE_14_0_b1  RX_ADC_IF_TGT_CTRL1.BF.RX_ADC_IF_TARGET_WORD_LANE_14_0_b1

// 0x0014	RX_ADC_IF_AVE_REJ_CTRL0		ADC Interface Average Rejection Control 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b0       : 8;	/* [20:0]     r/w   0*/
		uint8_t RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b1       : 8;	/* [20:0]     r/w   0*/
		uint8_t RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b2       : 5;	/* [20:0]     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[25:21]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:21]     r/w   0*/
		uint8_t RX_ADC_IF_AVE_REJ_LOAD_LANE              : 1;	/*     26     r/w   0*/
		uint8_t RX_ADC_IF_AVE_REJ_SIGN_LANE              : 1;	/*     27     r/w   0*/
		uint8_t RX_ADC_IF_AVE_REJ_MU_LANE_2_0            : 3;	/*[30:28]     r/w 3'h7*/
		uint8_t RX_ADC_IF_AVE_REJ_EN_LANE                : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_AVE_REJ_CTRL0_t;
__xdata __at( 0x4614 ) volatile RX_ADC_IF_AVE_REJ_CTRL0_t RX_ADC_IF_AVE_REJ_CTRL0;
#define reg_RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b0  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b0
#define reg_RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b1  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b1
#define reg_RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b2  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_EXT_LANE_20_0_b2
#define reg_RX_ADC_IF_AVE_REJ_LOAD_LANE  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_LOAD_LANE
#define reg_RX_ADC_IF_AVE_REJ_SIGN_LANE  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_SIGN_LANE
#define reg_RX_ADC_IF_AVE_REJ_MU_LANE_2_0  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_MU_LANE_2_0
#define reg_RX_ADC_IF_AVE_REJ_EN_LANE  RX_ADC_IF_AVE_REJ_CTRL0.BF.RX_ADC_IF_AVE_REJ_EN_LANE

// 0x0018	RX_ADC_IF_AVE_REJ_CTRL1		ADC Interface Average Rejection Control 1
typedef union {
	struct {
		uint8_t RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b0      : 8;	/* [21:0]       r   0*/
		uint8_t RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b1      : 8;	/* [21:0]       r   0*/
		uint8_t RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b2      : 6;	/* [21:0]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_AVE_REJ_CTRL1_t;
__xdata __at( 0x4618 ) volatile RX_ADC_IF_AVE_REJ_CTRL1_t RX_ADC_IF_AVE_REJ_CTRL1;
#define reg_RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b0  RX_ADC_IF_AVE_REJ_CTRL1.BF.RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b0
#define reg_RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b1  RX_ADC_IF_AVE_REJ_CTRL1.BF.RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b1
#define reg_RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b2  RX_ADC_IF_AVE_REJ_CTRL1.BF.RX_ADC_IF_AVE_REJ_WORD_LANE_21_0_b2

// 0x001c	RX_ADC_IF_AGC_CTRL0		ADC Interface AGC Control0
typedef union {
	struct {
		uint8_t RX_ADC_IF_AGC_TH_LANE_9_0_b0             : 8;	/*  [9:0]     r/w 10'hd*/
		uint8_t RX_ADC_IF_AGC_TH_LANE_9_0_b1             : 2;	/*  [9:0]     r/w 10'hd*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t RX_ADC_IF_AGC_REF_LANE_12_0_b0           : 8;	/*[28:16]     r/w 13'he00*/
		uint8_t RX_ADC_IF_AGC_REF_LANE_12_0_b1           : 5;	/*[28:16]     r/w 13'he00*/
		uint8_t RX_ADC_IF_AGC_RATE_LANE_1_0              : 2;	/*[30:29]     r/w   0*/
		uint8_t RX_ADC_IF_AGC_EN_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_AGC_CTRL0_t;
__xdata __at( 0x461c ) volatile RX_ADC_IF_AGC_CTRL0_t RX_ADC_IF_AGC_CTRL0;
#define reg_RX_ADC_IF_AGC_TH_LANE_9_0_b0  RX_ADC_IF_AGC_CTRL0.BF.RX_ADC_IF_AGC_TH_LANE_9_0_b0
#define reg_RX_ADC_IF_AGC_TH_LANE_9_0_b1  RX_ADC_IF_AGC_CTRL0.BF.RX_ADC_IF_AGC_TH_LANE_9_0_b1
#define reg_RX_ADC_IF_AGC_REF_LANE_12_0_b0  RX_ADC_IF_AGC_CTRL0.BF.RX_ADC_IF_AGC_REF_LANE_12_0_b0
#define reg_RX_ADC_IF_AGC_REF_LANE_12_0_b1  RX_ADC_IF_AGC_CTRL0.BF.RX_ADC_IF_AGC_REF_LANE_12_0_b1
#define reg_RX_ADC_IF_AGC_RATE_LANE_1_0  RX_ADC_IF_AGC_CTRL0.BF.RX_ADC_IF_AGC_RATE_LANE_1_0
#define reg_RX_ADC_IF_AGC_EN_LANE  RX_ADC_IF_AGC_CTRL0.BF.RX_ADC_IF_AGC_EN_LANE

// 0x0020	RX_ADC_IF_AGC_CTRL1		ADC Interface AGC Control1
typedef union {
	struct {
		uint8_t RX_ADC_IF_AGC_GAIN_LANE_4_0              : 5;	/*  [4:0]       r   0*/
		uint8_t RX_ADC_IF_AGC_CLK_LANE                   : 1;	/*      5       r   0*/
		uint8_t RX_ADC_IF_AGC_FORCE_LANE                 : 1;	/*      6     r/w   0*/
		uint8_t RX_ADC_IF_AGC_CLK_EXT_LANE               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0          : 5;	/* [12:8]     r/w   0*/
		uint8_t RX_ADC_IF_AGC_LOAD_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_AGC_MIN_LANE_4_0               : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_ADC_IF_AGC_MAX_LANE_4_0               : 5;	/*[28:24]     r/w 5'h1f*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_AGC_CTRL1_t;
__xdata __at( 0x4620 ) volatile RX_ADC_IF_AGC_CTRL1_t RX_ADC_IF_AGC_CTRL1;
#define reg_RX_ADC_IF_AGC_GAIN_LANE_4_0  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_GAIN_LANE_4_0
#define reg_RX_ADC_IF_AGC_CLK_LANE  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_CLK_LANE
#define reg_RX_ADC_IF_AGC_FORCE_LANE  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_FORCE_LANE
#define reg_RX_ADC_IF_AGC_CLK_EXT_LANE  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_CLK_EXT_LANE
#define reg_RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0
#define reg_RX_ADC_IF_AGC_LOAD_LANE  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_LOAD_LANE
#define reg_RX_ADC_IF_AGC_MIN_LANE_4_0  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_MIN_LANE_4_0
#define reg_RX_ADC_IF_AGC_MAX_LANE_4_0  RX_ADC_IF_AGC_CTRL1.BF.RX_ADC_IF_AGC_MAX_LANE_4_0

// 0x0024	RX_ADC_IF_CLK_CTRL0		ADC Interface Clock Control0
typedef union {
	struct {
		uint8_t RX_ADC_IF_DP_CTRL_CLK_EN_LANE            : 1;	/*      0     r/w   1*/
		uint8_t RX_ADC_IF_DP_CTRL_CLK_ON_LANE            : 1;	/*      1     r/w   0*/
		uint8_t RX_ADC_IF_EP_CTRL_CLK_EN_LANE            : 1;	/*      2     r/w   1*/
		uint8_t RX_ADC_IF_EP_CTRL_CLK_ON_LANE            : 1;	/*      3     r/w   0*/
		uint8_t RX_ADC_IF_TARGET_CLK_EN_LANE             : 1;	/*      4     r/w   1*/
		uint8_t RX_ADC_IF_TARGET_CLK_ON_LANE             : 1;	/*      5     r/w   0*/
		uint8_t RX_ADC_IF_AVE_REJ_CLK_EN_LANE            : 1;	/*      6     r/w   1*/
		uint8_t RX_ADC_IF_AVE_REJ_CLK_ON_LANE            : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_AGC_CLK_EN_LANE                : 1;	/*      8     r/w   1*/
		uint8_t RX_ADC_IF_AGC_CLK_ON_LANE                : 1;	/*      9     r/w   0*/
		uint8_t RX_ADC_IF_EP_DAT_CLK_EN_LANE             : 1;	/*     10     r/w   1*/
		uint8_t RX_ADC_IF_DP_LOCK_CLK_EN_LANE            : 1;	/*     11     r/w   1*/
		uint8_t RX_ADC_IF_DP_LOCK_CLK_ON_LANE            : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_ADC_IF_AGC_CLK_END_LANE_7_0           : 8;	/*[23:16]     r/w 8'h18*/
		uint8_t RX_ADC_IF_AGC_CLK_START_LANE_7_0         : 8;	/*[31:24]     r/w 8'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_CLK_CTRL0_t;
__xdata __at( 0x4624 ) volatile RX_ADC_IF_CLK_CTRL0_t RX_ADC_IF_CLK_CTRL0;
#define reg_RX_ADC_IF_DP_CTRL_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_DP_CTRL_CLK_EN_LANE
#define reg_RX_ADC_IF_DP_CTRL_CLK_ON_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_DP_CTRL_CLK_ON_LANE
#define reg_RX_ADC_IF_EP_CTRL_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_EP_CTRL_CLK_EN_LANE
#define reg_RX_ADC_IF_EP_CTRL_CLK_ON_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_EP_CTRL_CLK_ON_LANE
#define reg_RX_ADC_IF_TARGET_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_TARGET_CLK_EN_LANE
#define reg_RX_ADC_IF_TARGET_CLK_ON_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_TARGET_CLK_ON_LANE
#define reg_RX_ADC_IF_AVE_REJ_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_AVE_REJ_CLK_EN_LANE
#define reg_RX_ADC_IF_AVE_REJ_CLK_ON_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_AVE_REJ_CLK_ON_LANE
#define reg_RX_ADC_IF_AGC_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_AGC_CLK_EN_LANE
#define reg_RX_ADC_IF_AGC_CLK_ON_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_AGC_CLK_ON_LANE
#define reg_RX_ADC_IF_EP_DAT_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_EP_DAT_CLK_EN_LANE
#define reg_RX_ADC_IF_DP_LOCK_CLK_EN_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_DP_LOCK_CLK_EN_LANE
#define reg_RX_ADC_IF_DP_LOCK_CLK_ON_LANE  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_DP_LOCK_CLK_ON_LANE
#define reg_RX_ADC_IF_AGC_CLK_END_LANE_7_0  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_AGC_CLK_END_LANE_7_0
#define reg_RX_ADC_IF_AGC_CLK_START_LANE_7_0  RX_ADC_IF_CLK_CTRL0.BF.RX_ADC_IF_AGC_CLK_START_LANE_7_0

// 0x0028	RX_ADC_IF_CLK_CTRL1		ADC Interface Clock Control1
typedef union {
	struct {
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b0     : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b1     : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b2     : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b3     : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_CLK_CTRL1_t;
__xdata __at( 0x4628 ) volatile RX_ADC_IF_CLK_CTRL1_t RX_ADC_IF_CLK_CTRL1;
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b0  RX_ADC_IF_CLK_CTRL1.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b0
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b1  RX_ADC_IF_CLK_CTRL1.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b1
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b2  RX_ADC_IF_CLK_CTRL1.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b2
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b3  RX_ADC_IF_CLK_CTRL1.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_31_0_b3

// 0x002c	RX_ADC_IF_CLK_CTRL2		ADC Interface Clock Control2
typedef union {
	struct {
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b0    : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b1    : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b2    : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b3    : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_CLK_CTRL2_t;
__xdata __at( 0x462c ) volatile RX_ADC_IF_CLK_CTRL2_t RX_ADC_IF_CLK_CTRL2;
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b0  RX_ADC_IF_CLK_CTRL2.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b0
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b1  RX_ADC_IF_CLK_CTRL2.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b1
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b2  RX_ADC_IF_CLK_CTRL2.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b2
#define reg_RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b3  RX_ADC_IF_CLK_CTRL2.BF.RX_ADC_IF_DP_DAT_CLK_EN_LANE_63_32_b3

// 0x0030	RX_ADC_IF_GAIN_READ_OUT_REG0		ADC Interface Gain Read Out 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD3_LANE_5_0            : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD2_LANE_5_0            : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD1_LANE_5_0            : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD0_LANE_5_0            : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG0_t;
__xdata __at( 0x4630 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG0_t RX_ADC_IF_GAIN_READ_OUT_REG0;
#define reg_RX_ADC_IF_GAIN_WORD3_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG0.BF.RX_ADC_IF_GAIN_WORD3_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD2_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG0.BF.RX_ADC_IF_GAIN_WORD2_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD1_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG0.BF.RX_ADC_IF_GAIN_WORD1_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD0_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG0.BF.RX_ADC_IF_GAIN_WORD0_LANE_5_0

// 0x0034	RX_ADC_IF_GAIN_READ_OUT_REG1		ADC Interface Gain Read Out 1
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD7_LANE_5_0            : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD6_LANE_5_0            : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD5_LANE_5_0            : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD4_LANE_5_0            : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG1_t;
__xdata __at( 0x4634 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG1_t RX_ADC_IF_GAIN_READ_OUT_REG1;
#define reg_RX_ADC_IF_GAIN_WORD7_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG1.BF.RX_ADC_IF_GAIN_WORD7_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD6_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG1.BF.RX_ADC_IF_GAIN_WORD6_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD5_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG1.BF.RX_ADC_IF_GAIN_WORD5_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD4_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG1.BF.RX_ADC_IF_GAIN_WORD4_LANE_5_0

// 0x0038	RX_ADC_IF_GAIN_READ_OUT_REG2		ADC Interface Gain Read Out 2
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD11_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD10_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD9_LANE_5_0            : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD8_LANE_5_0            : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG2_t;
__xdata __at( 0x4638 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG2_t RX_ADC_IF_GAIN_READ_OUT_REG2;
#define reg_RX_ADC_IF_GAIN_WORD11_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG2.BF.RX_ADC_IF_GAIN_WORD11_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD10_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG2.BF.RX_ADC_IF_GAIN_WORD10_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD9_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG2.BF.RX_ADC_IF_GAIN_WORD9_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD8_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG2.BF.RX_ADC_IF_GAIN_WORD8_LANE_5_0

// 0x003c	RX_ADC_IF_GAIN_READ_OUT_REG3		ADC Interface Gain Read Out 3
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD15_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD14_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD13_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD12_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG3_t;
__xdata __at( 0x463c ) volatile RX_ADC_IF_GAIN_READ_OUT_REG3_t RX_ADC_IF_GAIN_READ_OUT_REG3;
#define reg_RX_ADC_IF_GAIN_WORD15_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG3.BF.RX_ADC_IF_GAIN_WORD15_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD14_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG3.BF.RX_ADC_IF_GAIN_WORD14_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD13_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG3.BF.RX_ADC_IF_GAIN_WORD13_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD12_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG3.BF.RX_ADC_IF_GAIN_WORD12_LANE_5_0

// 0x0040	RX_ADC_IF_GAIN_READ_OUT_REG4		ADC Interface Gain Read Out 4
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD19_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD18_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD17_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD16_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG4_t;
__xdata __at( 0x4640 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG4_t RX_ADC_IF_GAIN_READ_OUT_REG4;
#define reg_RX_ADC_IF_GAIN_WORD19_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG4.BF.RX_ADC_IF_GAIN_WORD19_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD18_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG4.BF.RX_ADC_IF_GAIN_WORD18_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD17_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG4.BF.RX_ADC_IF_GAIN_WORD17_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD16_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG4.BF.RX_ADC_IF_GAIN_WORD16_LANE_5_0

// 0x0044	RX_ADC_IF_GAIN_READ_OUT_REG5		ADC Interface Gain Read Out 5
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD23_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD22_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD21_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD20_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG5_t;
__xdata __at( 0x4644 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG5_t RX_ADC_IF_GAIN_READ_OUT_REG5;
#define reg_RX_ADC_IF_GAIN_WORD23_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG5.BF.RX_ADC_IF_GAIN_WORD23_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD22_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG5.BF.RX_ADC_IF_GAIN_WORD22_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD21_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG5.BF.RX_ADC_IF_GAIN_WORD21_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD20_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG5.BF.RX_ADC_IF_GAIN_WORD20_LANE_5_0

// 0x0048	RX_ADC_IF_GAIN_READ_OUT_REG6		ADC Interface Gain Read Out 6
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD27_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD26_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD25_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD24_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG6_t;
__xdata __at( 0x4648 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG6_t RX_ADC_IF_GAIN_READ_OUT_REG6;
#define reg_RX_ADC_IF_GAIN_WORD27_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG6.BF.RX_ADC_IF_GAIN_WORD27_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD26_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG6.BF.RX_ADC_IF_GAIN_WORD26_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD25_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG6.BF.RX_ADC_IF_GAIN_WORD25_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD24_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG6.BF.RX_ADC_IF_GAIN_WORD24_LANE_5_0

// 0x004c	RX_ADC_IF_GAIN_READ_OUT_REG7		ADC Interface Gain Read Out 7
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD31_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD30_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD29_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD28_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG7_t;
__xdata __at( 0x464c ) volatile RX_ADC_IF_GAIN_READ_OUT_REG7_t RX_ADC_IF_GAIN_READ_OUT_REG7;
#define reg_RX_ADC_IF_GAIN_WORD31_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG7.BF.RX_ADC_IF_GAIN_WORD31_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD30_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG7.BF.RX_ADC_IF_GAIN_WORD30_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD29_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG7.BF.RX_ADC_IF_GAIN_WORD29_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD28_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG7.BF.RX_ADC_IF_GAIN_WORD28_LANE_5_0

// 0x0050	RX_ADC_IF_GAIN_READ_OUT_REG8		ADC Interface Gain Read Out 8
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD35_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD34_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD33_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD32_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG8_t;
__xdata __at( 0x4650 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG8_t RX_ADC_IF_GAIN_READ_OUT_REG8;
#define reg_RX_ADC_IF_GAIN_WORD35_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG8.BF.RX_ADC_IF_GAIN_WORD35_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD34_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG8.BF.RX_ADC_IF_GAIN_WORD34_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD33_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG8.BF.RX_ADC_IF_GAIN_WORD33_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD32_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG8.BF.RX_ADC_IF_GAIN_WORD32_LANE_5_0

// 0x0054	RX_ADC_IF_GAIN_READ_OUT_REG9		ADC Interface Gain Read Out 9
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD39_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD38_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD37_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD36_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG9_t;
__xdata __at( 0x4654 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG9_t RX_ADC_IF_GAIN_READ_OUT_REG9;
#define reg_RX_ADC_IF_GAIN_WORD39_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG9.BF.RX_ADC_IF_GAIN_WORD39_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD38_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG9.BF.RX_ADC_IF_GAIN_WORD38_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD37_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG9.BF.RX_ADC_IF_GAIN_WORD37_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD36_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG9.BF.RX_ADC_IF_GAIN_WORD36_LANE_5_0

// 0x0058	RX_ADC_IF_GAIN_READ_OUT_REG10		ADC Interface Gain Read Out 10
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD43_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD42_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD41_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD40_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG10_t;
__xdata __at( 0x4658 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG10_t RX_ADC_IF_GAIN_READ_OUT_REG10;
#define reg_RX_ADC_IF_GAIN_WORD43_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG10.BF.RX_ADC_IF_GAIN_WORD43_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD42_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG10.BF.RX_ADC_IF_GAIN_WORD42_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD41_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG10.BF.RX_ADC_IF_GAIN_WORD41_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD40_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG10.BF.RX_ADC_IF_GAIN_WORD40_LANE_5_0

// 0x005c	RX_ADC_IF_GAIN_READ_OUT_REG11		ADC Interface Gain Read Out 11
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD47_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD46_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD45_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD44_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG11_t;
__xdata __at( 0x465c ) volatile RX_ADC_IF_GAIN_READ_OUT_REG11_t RX_ADC_IF_GAIN_READ_OUT_REG11;
#define reg_RX_ADC_IF_GAIN_WORD47_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG11.BF.RX_ADC_IF_GAIN_WORD47_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD46_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG11.BF.RX_ADC_IF_GAIN_WORD46_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD45_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG11.BF.RX_ADC_IF_GAIN_WORD45_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD44_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG11.BF.RX_ADC_IF_GAIN_WORD44_LANE_5_0

// 0x0060	RX_ADC_IF_GAIN_READ_OUT_REG12		ADC Interface Gain Read Out 12
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD51_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD50_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD49_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD48_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG12_t;
__xdata __at( 0x4660 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG12_t RX_ADC_IF_GAIN_READ_OUT_REG12;
#define reg_RX_ADC_IF_GAIN_WORD51_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG12.BF.RX_ADC_IF_GAIN_WORD51_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD50_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG12.BF.RX_ADC_IF_GAIN_WORD50_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD49_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG12.BF.RX_ADC_IF_GAIN_WORD49_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD48_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG12.BF.RX_ADC_IF_GAIN_WORD48_LANE_5_0

// 0x0064	RX_ADC_IF_GAIN_READ_OUT_REG13		ADC Interface Gain Read Out 13
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD55_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD54_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD53_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD52_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG13_t;
__xdata __at( 0x4664 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG13_t RX_ADC_IF_GAIN_READ_OUT_REG13;
#define reg_RX_ADC_IF_GAIN_WORD55_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG13.BF.RX_ADC_IF_GAIN_WORD55_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD54_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG13.BF.RX_ADC_IF_GAIN_WORD54_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD53_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG13.BF.RX_ADC_IF_GAIN_WORD53_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD52_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG13.BF.RX_ADC_IF_GAIN_WORD52_LANE_5_0

// 0x0068	RX_ADC_IF_GAIN_READ_OUT_REG14		ADC Interface Gain Read Out 14
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD59_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD58_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD57_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD56_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG14_t;
__xdata __at( 0x4668 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG14_t RX_ADC_IF_GAIN_READ_OUT_REG14;
#define reg_RX_ADC_IF_GAIN_WORD59_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG14.BF.RX_ADC_IF_GAIN_WORD59_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD58_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG14.BF.RX_ADC_IF_GAIN_WORD58_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD57_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG14.BF.RX_ADC_IF_GAIN_WORD57_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD56_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG14.BF.RX_ADC_IF_GAIN_WORD56_LANE_5_0

// 0x006c	RX_ADC_IF_GAIN_READ_OUT_REG15		ADC Interface Gain Read Out 15
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD63_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD62_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD61_LANE_5_0           : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_WORD60_LANE_5_0           : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG15_t;
__xdata __at( 0x466c ) volatile RX_ADC_IF_GAIN_READ_OUT_REG15_t RX_ADC_IF_GAIN_READ_OUT_REG15;
#define reg_RX_ADC_IF_GAIN_WORD63_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG15.BF.RX_ADC_IF_GAIN_WORD63_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD62_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG15.BF.RX_ADC_IF_GAIN_WORD62_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD61_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG15.BF.RX_ADC_IF_GAIN_WORD61_LANE_5_0
#define reg_RX_ADC_IF_GAIN_WORD60_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG15.BF.RX_ADC_IF_GAIN_WORD60_LANE_5_0

// 0x0070	RX_ADC_IF_GAIN_READ_OUT_REG16		ADC Interface Gain Read Out 16
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_WORD64_LANE_5_0           : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_GAIN_READ_OUT_REG16_t;
__xdata __at( 0x4670 ) volatile RX_ADC_IF_GAIN_READ_OUT_REG16_t RX_ADC_IF_GAIN_READ_OUT_REG16;
#define reg_RX_ADC_IF_GAIN_WORD64_LANE_5_0  RX_ADC_IF_GAIN_READ_OUT_REG16.BF.RX_ADC_IF_GAIN_WORD64_LANE_5_0

// 0x0074	RX_ADC_IF_OFST_READ_OUT_REG0		ADC Interface Offset Read Out 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD3_LANE_6_0            : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD2_LANE_6_0            : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD1_LANE_6_0            : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD0_LANE_6_0            : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG0_t;
__xdata __at( 0x4674 ) volatile RX_ADC_IF_OFST_READ_OUT_REG0_t RX_ADC_IF_OFST_READ_OUT_REG0;
#define reg_RX_ADC_IF_OFST_WORD3_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG0.BF.RX_ADC_IF_OFST_WORD3_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD2_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG0.BF.RX_ADC_IF_OFST_WORD2_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD1_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG0.BF.RX_ADC_IF_OFST_WORD1_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD0_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG0.BF.RX_ADC_IF_OFST_WORD0_LANE_6_0

// 0x0078	RX_ADC_IF_OFST_READ_OUT_REG1		ADC Interface Offset Read Out 1
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD7_LANE_6_0            : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD6_LANE_6_0            : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD5_LANE_6_0            : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD4_LANE_6_0            : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG1_t;
__xdata __at( 0x4678 ) volatile RX_ADC_IF_OFST_READ_OUT_REG1_t RX_ADC_IF_OFST_READ_OUT_REG1;
#define reg_RX_ADC_IF_OFST_WORD7_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG1.BF.RX_ADC_IF_OFST_WORD7_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD6_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG1.BF.RX_ADC_IF_OFST_WORD6_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD5_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG1.BF.RX_ADC_IF_OFST_WORD5_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD4_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG1.BF.RX_ADC_IF_OFST_WORD4_LANE_6_0

// 0x007c	RX_ADC_IF_OFST_READ_OUT_REG2		ADC Interface Offset Read Out 2
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD11_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD10_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD9_LANE_6_0            : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD8_LANE_6_0            : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG2_t;
__xdata __at( 0x467c ) volatile RX_ADC_IF_OFST_READ_OUT_REG2_t RX_ADC_IF_OFST_READ_OUT_REG2;
#define reg_RX_ADC_IF_OFST_WORD11_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG2.BF.RX_ADC_IF_OFST_WORD11_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD10_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG2.BF.RX_ADC_IF_OFST_WORD10_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD9_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG2.BF.RX_ADC_IF_OFST_WORD9_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD8_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG2.BF.RX_ADC_IF_OFST_WORD8_LANE_6_0

// 0x0080	RX_ADC_IF_OFST_READ_OUT_REG3		ADC Interface Offset Read Out 3
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD15_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD14_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD13_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD12_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG3_t;
__xdata __at( 0x4680 ) volatile RX_ADC_IF_OFST_READ_OUT_REG3_t RX_ADC_IF_OFST_READ_OUT_REG3;
#define reg_RX_ADC_IF_OFST_WORD15_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG3.BF.RX_ADC_IF_OFST_WORD15_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD14_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG3.BF.RX_ADC_IF_OFST_WORD14_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD13_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG3.BF.RX_ADC_IF_OFST_WORD13_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD12_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG3.BF.RX_ADC_IF_OFST_WORD12_LANE_6_0

// 0x0084	RX_ADC_IF_OFST_READ_OUT_REG4		ADC Interface Offset Read Out 4
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD19_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD18_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD17_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD16_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG4_t;
__xdata __at( 0x4684 ) volatile RX_ADC_IF_OFST_READ_OUT_REG4_t RX_ADC_IF_OFST_READ_OUT_REG4;
#define reg_RX_ADC_IF_OFST_WORD19_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG4.BF.RX_ADC_IF_OFST_WORD19_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD18_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG4.BF.RX_ADC_IF_OFST_WORD18_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD17_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG4.BF.RX_ADC_IF_OFST_WORD17_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD16_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG4.BF.RX_ADC_IF_OFST_WORD16_LANE_6_0

// 0x0088	RX_ADC_IF_OFST_READ_OUT_REG5		ADC Interface Offset Read Out 5
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD23_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD22_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD21_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD20_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG5_t;
__xdata __at( 0x4688 ) volatile RX_ADC_IF_OFST_READ_OUT_REG5_t RX_ADC_IF_OFST_READ_OUT_REG5;
#define reg_RX_ADC_IF_OFST_WORD23_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG5.BF.RX_ADC_IF_OFST_WORD23_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD22_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG5.BF.RX_ADC_IF_OFST_WORD22_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD21_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG5.BF.RX_ADC_IF_OFST_WORD21_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD20_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG5.BF.RX_ADC_IF_OFST_WORD20_LANE_6_0

// 0x008c	RX_ADC_IF_OFST_READ_OUT_REG6		ADC Interface Offset Read Out 6
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD27_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD26_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD25_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD24_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG6_t;
__xdata __at( 0x468c ) volatile RX_ADC_IF_OFST_READ_OUT_REG6_t RX_ADC_IF_OFST_READ_OUT_REG6;
#define reg_RX_ADC_IF_OFST_WORD27_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG6.BF.RX_ADC_IF_OFST_WORD27_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD26_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG6.BF.RX_ADC_IF_OFST_WORD26_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD25_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG6.BF.RX_ADC_IF_OFST_WORD25_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD24_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG6.BF.RX_ADC_IF_OFST_WORD24_LANE_6_0

// 0x0090	RX_ADC_IF_OFST_READ_OUT_REG7		ADC Interface Offset Read Out 7
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD31_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD30_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD29_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD28_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG7_t;
__xdata __at( 0x4690 ) volatile RX_ADC_IF_OFST_READ_OUT_REG7_t RX_ADC_IF_OFST_READ_OUT_REG7;
#define reg_RX_ADC_IF_OFST_WORD31_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG7.BF.RX_ADC_IF_OFST_WORD31_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD30_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG7.BF.RX_ADC_IF_OFST_WORD30_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD29_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG7.BF.RX_ADC_IF_OFST_WORD29_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD28_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG7.BF.RX_ADC_IF_OFST_WORD28_LANE_6_0

// 0x0094	RX_ADC_IF_OFST_READ_OUT_REG8		ADC Interface Offset Read Out 8
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD35_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD34_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD33_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD32_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG8_t;
__xdata __at( 0x4694 ) volatile RX_ADC_IF_OFST_READ_OUT_REG8_t RX_ADC_IF_OFST_READ_OUT_REG8;
#define reg_RX_ADC_IF_OFST_WORD35_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG8.BF.RX_ADC_IF_OFST_WORD35_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD34_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG8.BF.RX_ADC_IF_OFST_WORD34_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD33_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG8.BF.RX_ADC_IF_OFST_WORD33_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD32_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG8.BF.RX_ADC_IF_OFST_WORD32_LANE_6_0

// 0x0098	RX_ADC_IF_OFST_READ_OUT_REG9		ADC Interface Offset Read Out 9
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD39_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD38_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD37_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD36_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG9_t;
__xdata __at( 0x4698 ) volatile RX_ADC_IF_OFST_READ_OUT_REG9_t RX_ADC_IF_OFST_READ_OUT_REG9;
#define reg_RX_ADC_IF_OFST_WORD39_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG9.BF.RX_ADC_IF_OFST_WORD39_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD38_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG9.BF.RX_ADC_IF_OFST_WORD38_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD37_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG9.BF.RX_ADC_IF_OFST_WORD37_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD36_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG9.BF.RX_ADC_IF_OFST_WORD36_LANE_6_0

// 0x009c	RX_ADC_IF_OFST_READ_OUT_REG10		ADC Interface Offset Read Out 10
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD43_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD42_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD41_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD40_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG10_t;
__xdata __at( 0x469c ) volatile RX_ADC_IF_OFST_READ_OUT_REG10_t RX_ADC_IF_OFST_READ_OUT_REG10;
#define reg_RX_ADC_IF_OFST_WORD43_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG10.BF.RX_ADC_IF_OFST_WORD43_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD42_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG10.BF.RX_ADC_IF_OFST_WORD42_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD41_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG10.BF.RX_ADC_IF_OFST_WORD41_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD40_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG10.BF.RX_ADC_IF_OFST_WORD40_LANE_6_0

// 0x00a0	RX_ADC_IF_OFST_READ_OUT_REG11		ADC Interface Offset Read Out 11
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD47_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD46_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD45_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD44_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG11_t;
__xdata __at( 0x46a0 ) volatile RX_ADC_IF_OFST_READ_OUT_REG11_t RX_ADC_IF_OFST_READ_OUT_REG11;
#define reg_RX_ADC_IF_OFST_WORD47_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG11.BF.RX_ADC_IF_OFST_WORD47_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD46_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG11.BF.RX_ADC_IF_OFST_WORD46_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD45_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG11.BF.RX_ADC_IF_OFST_WORD45_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD44_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG11.BF.RX_ADC_IF_OFST_WORD44_LANE_6_0

// 0x00a4	RX_ADC_IF_OFST_READ_OUT_REG12		ADC Interface Offset Read Out 12
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD51_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD50_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD49_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD48_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG12_t;
__xdata __at( 0x46a4 ) volatile RX_ADC_IF_OFST_READ_OUT_REG12_t RX_ADC_IF_OFST_READ_OUT_REG12;
#define reg_RX_ADC_IF_OFST_WORD51_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG12.BF.RX_ADC_IF_OFST_WORD51_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD50_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG12.BF.RX_ADC_IF_OFST_WORD50_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD49_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG12.BF.RX_ADC_IF_OFST_WORD49_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD48_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG12.BF.RX_ADC_IF_OFST_WORD48_LANE_6_0

// 0x00a8	RX_ADC_IF_OFST_READ_OUT_REG13		ADC Interface Offset Read Out 13
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD55_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD54_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD53_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD52_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG13_t;
__xdata __at( 0x46a8 ) volatile RX_ADC_IF_OFST_READ_OUT_REG13_t RX_ADC_IF_OFST_READ_OUT_REG13;
#define reg_RX_ADC_IF_OFST_WORD55_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG13.BF.RX_ADC_IF_OFST_WORD55_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD54_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG13.BF.RX_ADC_IF_OFST_WORD54_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD53_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG13.BF.RX_ADC_IF_OFST_WORD53_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD52_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG13.BF.RX_ADC_IF_OFST_WORD52_LANE_6_0

// 0x00ac	RX_ADC_IF_OFST_READ_OUT_REG14		ADC Interface Offset Read Out 14
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD59_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD58_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD57_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD56_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG14_t;
__xdata __at( 0x46ac ) volatile RX_ADC_IF_OFST_READ_OUT_REG14_t RX_ADC_IF_OFST_READ_OUT_REG14;
#define reg_RX_ADC_IF_OFST_WORD59_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG14.BF.RX_ADC_IF_OFST_WORD59_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD58_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG14.BF.RX_ADC_IF_OFST_WORD58_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD57_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG14.BF.RX_ADC_IF_OFST_WORD57_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD56_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG14.BF.RX_ADC_IF_OFST_WORD56_LANE_6_0

// 0x00b0	RX_ADC_IF_OFST_READ_OUT_REG15		ADC Interface Offset Read Out 15
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD63_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD62_LANE_6_0           : 7;	/* [14:8]       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD61_LANE_6_0           : 7;	/*[22:16]       r   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_ADC_IF_OFST_WORD60_LANE_6_0           : 7;	/*[30:24]       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG15_t;
__xdata __at( 0x46b0 ) volatile RX_ADC_IF_OFST_READ_OUT_REG15_t RX_ADC_IF_OFST_READ_OUT_REG15;
#define reg_RX_ADC_IF_OFST_WORD63_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG15.BF.RX_ADC_IF_OFST_WORD63_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD62_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG15.BF.RX_ADC_IF_OFST_WORD62_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD61_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG15.BF.RX_ADC_IF_OFST_WORD61_LANE_6_0
#define reg_RX_ADC_IF_OFST_WORD60_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG15.BF.RX_ADC_IF_OFST_WORD60_LANE_6_0

// 0x00b4	RX_ADC_IF_OFST_READ_OUT_REG16		ADC Interface Offset Read Out 16
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_WORD64_LANE_6_0           : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:7]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OFST_READ_OUT_REG16_t;
__xdata __at( 0x46b4 ) volatile RX_ADC_IF_OFST_READ_OUT_REG16_t RX_ADC_IF_OFST_READ_OUT_REG16;
#define reg_RX_ADC_IF_OFST_WORD64_LANE_6_0  RX_ADC_IF_OFST_READ_OUT_REG16.BF.RX_ADC_IF_OFST_WORD64_LANE_6_0

// 0x00c0	RX_ADC_IF_OS_CTRL0		ADC Interface Oversample Control0
typedef union {
	struct {
		uint8_t RX_ADC_IF_DAT_OFST_CTRL_EN_LANE_3_0      : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RX_ADC_IF_DAT_GAIN_CTRL_EN_LANE_3_0      : 4;	/*  [7:4]     r/w 4'hf*/
		uint8_t RX_ADC_IF_DAT_GAIN_TH_SEL_LANE_2_0       : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_OS_CTRL0_t;
__xdata __at( 0x46c0 ) volatile RX_ADC_IF_OS_CTRL0_t RX_ADC_IF_OS_CTRL0;
#define reg_RX_ADC_IF_DAT_OFST_CTRL_EN_LANE_3_0  RX_ADC_IF_OS_CTRL0.BF.RX_ADC_IF_DAT_OFST_CTRL_EN_LANE_3_0
#define reg_RX_ADC_IF_DAT_GAIN_CTRL_EN_LANE_3_0  RX_ADC_IF_OS_CTRL0.BF.RX_ADC_IF_DAT_GAIN_CTRL_EN_LANE_3_0
#define reg_RX_ADC_IF_DAT_GAIN_TH_SEL_LANE_2_0  RX_ADC_IF_OS_CTRL0.BF.RX_ADC_IF_DAT_GAIN_TH_SEL_LANE_2_0

// 0x00c4	RX_ADC_IF_OS_CTRL1		ADC Interface Oversample Control1
typedef union {
	struct {
		uint8_t RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0_b0    : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0_b1    : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0_b0    : 8;	/*[31:16]     r/w 16'hffff*/
		uint8_t RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0_b1    : 8;	/*[31:16]     r/w 16'hffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_IF_OS_CTRL1_t;
__xdata __at( 0x46c4 ) volatile RX_ADC_IF_OS_CTRL1_t RX_ADC_IF_OS_CTRL1;
#define reg_RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0_b0  RX_ADC_IF_OS_CTRL1.BF.RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0_b0
#define reg_RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0_b1  RX_ADC_IF_OS_CTRL1.BF.RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0_b1
#define reg_RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0_b0  RX_ADC_IF_OS_CTRL1.BF.RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0_b0
#define reg_RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0_b1  RX_ADC_IF_OS_CTRL1.BF.RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0_b1
#define reg_RX_ADC_IF_DAT_OFST_TH_EN_LANE_15_0  RX_ADC_IF_OS_CTRL1.WT.W0
#define reg_RX_ADC_IF_DAT_GAIN_TH_EN_LANE_15_0  RX_ADC_IF_OS_CTRL1.WT.W1

// 0x00c8	RX_ADC_IF_PROTECTION0		ADC Interface Protection 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_AGC_PAT_FREZ_EN_LANE           : 1;	/*      0     r/w   1*/
		uint8_t RX_ADC_IF_AVE_REJ_PAT_FREZ_EN_LANE       : 1;	/*      1     r/w   1*/
		uint8_t RX_ADC_IF_TARGET_PAT_FREZ_EN_LANE        : 1;	/*      2     r/w   1*/
		uint8_t RX_ADC_IF_EP_CTRL_PAT_FREZ_EN_LANE       : 1;	/*      3     r/w   1*/
		uint8_t RX_ADC_IF_DP_CTRL_PAT_FREZ_EN_LANE       : 1;	/*      4     r/w   1*/
		uint8_t RX_ADC_IF_AGC_SQ_FREZ_EN_LANE            : 1;	/*      5     r/w   1*/
		uint8_t RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE        : 1;	/*      6     r/w   1*/
		uint8_t RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE         : 1;	/*      7     r/w   1*/
		uint8_t RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE        : 1;	/*      8     r/w   1*/
		uint8_t RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE        : 1;	/*      9     r/w   1*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_IF_PROTECTION0_t;
__xdata __at( 0x46c8 ) volatile RX_ADC_IF_PROTECTION0_t RX_ADC_IF_PROTECTION0;
#define reg_RX_ADC_IF_AGC_PAT_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_AGC_PAT_FREZ_EN_LANE
#define reg_RX_ADC_IF_AVE_REJ_PAT_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_AVE_REJ_PAT_FREZ_EN_LANE
#define reg_RX_ADC_IF_TARGET_PAT_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_TARGET_PAT_FREZ_EN_LANE
#define reg_RX_ADC_IF_EP_CTRL_PAT_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_EP_CTRL_PAT_FREZ_EN_LANE
#define reg_RX_ADC_IF_DP_CTRL_PAT_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_DP_CTRL_PAT_FREZ_EN_LANE
#define reg_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_AGC_SQ_FREZ_EN_LANE
#define reg_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE
#define reg_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE
#define reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE
#define reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE  RX_ADC_IF_PROTECTION0.BF.RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE

// 0x00cc	RX_ADC_GAIN_CAL_LOCK_DET_REG0		RX ADC Gain Lock Detectot Registers 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_LOCK_DET_EN_LANE          : 1;	/*      0     r/w 1'b0*/
		uint8_t RX_ADC_IF_GAIN_LOCK_DET_LANE             : 1;	/*      1       r 1'b0*/
		uint8_t RX_ADC_IF_GAIN_LOCK_MODE_LANE            : 1;	/*      2     r/w 1'b0*/
		uint8_t RX_ADC_IF_GAIN_LOCK_CNT_RESET_LANE       : 1;	/*      3     r/w 1'b0*/
		uint8_t RX_ADC_IF_GAIN_UNLOCK_CNT_RESET_LANE     : 1;	/*      4     r/w 1'b0*/
		uint8_t RX_ADC_IF_GAIN_TIMER_RESET_LANE          : 1;	/*      5     r/w 1'b0*/
		uint8_t RX_ADC_IF_GAIN_TIMER_PAUSE_LANE          : 1;	/*      6     r/w 1'b0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_CNT_LOCK_LANE_5_0         : 6;	/* [13:8]     r/w 6'h4*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_CNT_UNLOCK_LANE_3_0       : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_LOCK_N1_LANE_3_0          : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RX_ADC_IF_GAIN_LOCK_N2_LANE_3_0          : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_GAIN_CAL_LOCK_DET_REG0_t;
__xdata __at( 0x46cc ) volatile RX_ADC_GAIN_CAL_LOCK_DET_REG0_t RX_ADC_GAIN_CAL_LOCK_DET_REG0;
#define reg_RX_ADC_IF_GAIN_LOCK_DET_EN_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_LOCK_DET_EN_LANE
#define reg_RX_ADC_IF_GAIN_LOCK_DET_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_LOCK_DET_LANE
#define reg_RX_ADC_IF_GAIN_LOCK_MODE_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_LOCK_MODE_LANE
#define reg_RX_ADC_IF_GAIN_LOCK_CNT_RESET_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_LOCK_CNT_RESET_LANE
#define reg_RX_ADC_IF_GAIN_UNLOCK_CNT_RESET_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_UNLOCK_CNT_RESET_LANE
#define reg_RX_ADC_IF_GAIN_TIMER_RESET_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_TIMER_RESET_LANE
#define reg_RX_ADC_IF_GAIN_TIMER_PAUSE_LANE  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_TIMER_PAUSE_LANE
#define reg_RX_ADC_IF_GAIN_CNT_LOCK_LANE_5_0  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_CNT_LOCK_LANE_5_0
#define reg_RX_ADC_IF_GAIN_CNT_UNLOCK_LANE_3_0  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_CNT_UNLOCK_LANE_3_0
#define reg_RX_ADC_IF_GAIN_LOCK_N1_LANE_3_0  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_LOCK_N1_LANE_3_0
#define reg_RX_ADC_IF_GAIN_LOCK_N2_LANE_3_0  RX_ADC_GAIN_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_GAIN_LOCK_N2_LANE_3_0

// 0x00d0	RX_ADC_GAIN_LOCK_DET_REG1		RX ADC Gain Lock Detectot Registers 1
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_TH_LOCK_LANE_11_0_b0      : 8;	/* [11:0]     r/w 12'h199*/
		uint8_t RX_ADC_IF_GAIN_TH_LOCK_LANE_11_0_b1      : 4;	/* [11:0]     r/w 12'h199*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_TH_UNLOCK_LANE_11_0_b0    : 8;	/*[27:16]     r/w 12'h199*/
		uint8_t RX_ADC_IF_GAIN_TH_UNLOCK_LANE_11_0_b1    : 4;	/*[27:16]     r/w 12'h199*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_GAIN_LOCK_DET_REG1_t;
__xdata __at( 0x46d0 ) volatile RX_ADC_GAIN_LOCK_DET_REG1_t RX_ADC_GAIN_LOCK_DET_REG1;
#define reg_RX_ADC_IF_GAIN_TH_LOCK_LANE_11_0_b0  RX_ADC_GAIN_LOCK_DET_REG1.BF.RX_ADC_IF_GAIN_TH_LOCK_LANE_11_0_b0
#define reg_RX_ADC_IF_GAIN_TH_LOCK_LANE_11_0_b1  RX_ADC_GAIN_LOCK_DET_REG1.BF.RX_ADC_IF_GAIN_TH_LOCK_LANE_11_0_b1
#define reg_RX_ADC_IF_GAIN_TH_UNLOCK_LANE_11_0_b0  RX_ADC_GAIN_LOCK_DET_REG1.BF.RX_ADC_IF_GAIN_TH_UNLOCK_LANE_11_0_b0
#define reg_RX_ADC_IF_GAIN_TH_UNLOCK_LANE_11_0_b1  RX_ADC_GAIN_LOCK_DET_REG1.BF.RX_ADC_IF_GAIN_TH_UNLOCK_LANE_11_0_b1

// 0x00d4	RX_ADC_GAIN_LOCK_DET_REG2		RX ADC Gain Lock Detectot Registers 2
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_LOCK_CNT_LANE_7_0         : 8;	/*  [7:0]       r   0*/
		uint8_t RX_ADC_IF_GAIN_UNLOCK_CNT_LANE_7_0       : 8;	/* [15:8]       r   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_GAIN_LOCK_DET_REG2_t;
__xdata __at( 0x46d4 ) volatile RX_ADC_GAIN_LOCK_DET_REG2_t RX_ADC_GAIN_LOCK_DET_REG2;
#define reg_RX_ADC_IF_GAIN_LOCK_CNT_LANE_7_0  RX_ADC_GAIN_LOCK_DET_REG2.BF.RX_ADC_IF_GAIN_LOCK_CNT_LANE_7_0
#define reg_RX_ADC_IF_GAIN_UNLOCK_CNT_LANE_7_0  RX_ADC_GAIN_LOCK_DET_REG2.BF.RX_ADC_IF_GAIN_UNLOCK_CNT_LANE_7_0

// 0x00d8	RX_ADC_GAIN_LOCK_DET_REG3		RX ADC Gain Lock Detectot Registers 3
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b0 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b1 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b2 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RESERVED_24                              : 7;	/*[30:24]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_LOCK_TIMEOUT_LANE         : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_GAIN_LOCK_DET_REG3_t;
__xdata __at( 0x46d8 ) volatile RX_ADC_GAIN_LOCK_DET_REG3_t RX_ADC_GAIN_LOCK_DET_REG3;
#define reg_RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b0  RX_ADC_GAIN_LOCK_DET_REG3.BF.RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b0
#define reg_RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b1  RX_ADC_GAIN_LOCK_DET_REG3.BF.RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b1
#define reg_RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b2  RX_ADC_GAIN_LOCK_DET_REG3.BF.RX_ADC_IF_GAIN_LOCK_TIMEOUT_CNT_LANE_23_0_b2
#define reg_RX_ADC_IF_GAIN_LOCK_TIMEOUT_LANE  RX_ADC_GAIN_LOCK_DET_REG3.BF.RX_ADC_IF_GAIN_LOCK_TIMEOUT_LANE

// 0x00dc	RX_ADC_GAIN_LOCK_DET_REG4		RX Gain Lock Detectot Registers 4
typedef union {
	struct {
		uint8_t RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b0    : 8;	/* [23:0]       r   0*/
		uint8_t RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b1    : 8;	/* [23:0]       r   0*/
		uint8_t RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b2    : 8;	/* [23:0]       r   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_LOCK_MUX_LANE_1_0         : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_GAIN_LOCK_DET_REG4_t;
__xdata __at( 0x46dc ) volatile RX_ADC_GAIN_LOCK_DET_REG4_t RX_ADC_GAIN_LOCK_DET_REG4;
#define reg_RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b0  RX_ADC_GAIN_LOCK_DET_REG4.BF.RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b0
#define reg_RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b1  RX_ADC_GAIN_LOCK_DET_REG4.BF.RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b1
#define reg_RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b2  RX_ADC_GAIN_LOCK_DET_REG4.BF.RX_ADC_IF_GAIN_TIMER_CNT_LANE_23_0_b2
#define reg_RX_ADC_IF_GAIN_LOCK_MUX_LANE_1_0  RX_ADC_GAIN_LOCK_DET_REG4.BF.RX_ADC_IF_GAIN_LOCK_MUX_LANE_1_0

// 0x00e0	RX_ADC_OFST_CAL_LOCK_DET_REG0		RX ADC Offset Lock Detectot Registers 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_LOCK_DET_EN_LANE          : 1;	/*      0     r/w 1'b0*/
		uint8_t RX_ADC_IF_OFST_LOCK_DET_LANE             : 1;	/*      1       r 1'b0*/
		uint8_t RX_ADC_IF_OFST_LOCK_MODE_LANE            : 1;	/*      2     r/w 1'b0*/
		uint8_t RX_ADC_IF_OFST_LOCK_CNT_RESET_LANE       : 1;	/*      3     r/w 1'b0*/
		uint8_t RX_ADC_IF_OFST_UNLOCK_CNT_RESET_LANE     : 1;	/*      4     r/w 1'b0*/
		uint8_t RX_ADC_IF_OFST_TIMER_RESET_LANE          : 1;	/*      5     r/w 1'b0*/
		uint8_t RX_ADC_IF_OFST_TIMER_PAUSE_LANE          : 1;	/*      6     r/w 1'b0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_CNT_LOCK_LANE_5_0         : 6;	/* [13:8]     r/w 6'h4*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_ADC_IF_OFST_CNT_UNLOCK_LANE_3_0       : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_ADC_IF_OFST_LOCK_N1_LANE_3_0          : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RX_ADC_IF_OFST_LOCK_N2_LANE_3_0          : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_OFST_CAL_LOCK_DET_REG0_t;
__xdata __at( 0x46e0 ) volatile RX_ADC_OFST_CAL_LOCK_DET_REG0_t RX_ADC_OFST_CAL_LOCK_DET_REG0;
#define reg_RX_ADC_IF_OFST_LOCK_DET_EN_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_LOCK_DET_EN_LANE
#define reg_RX_ADC_IF_OFST_LOCK_DET_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_LOCK_DET_LANE
#define reg_RX_ADC_IF_OFST_LOCK_MODE_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_LOCK_MODE_LANE
#define reg_RX_ADC_IF_OFST_LOCK_CNT_RESET_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_LOCK_CNT_RESET_LANE
#define reg_RX_ADC_IF_OFST_UNLOCK_CNT_RESET_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_UNLOCK_CNT_RESET_LANE
#define reg_RX_ADC_IF_OFST_TIMER_RESET_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_TIMER_RESET_LANE
#define reg_RX_ADC_IF_OFST_TIMER_PAUSE_LANE  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_TIMER_PAUSE_LANE
#define reg_RX_ADC_IF_OFST_CNT_LOCK_LANE_5_0  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_CNT_LOCK_LANE_5_0
#define reg_RX_ADC_IF_OFST_CNT_UNLOCK_LANE_3_0  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_CNT_UNLOCK_LANE_3_0
#define reg_RX_ADC_IF_OFST_LOCK_N1_LANE_3_0  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_LOCK_N1_LANE_3_0
#define reg_RX_ADC_IF_OFST_LOCK_N2_LANE_3_0  RX_ADC_OFST_CAL_LOCK_DET_REG0.BF.RX_ADC_IF_OFST_LOCK_N2_LANE_3_0

// 0x00e4	RX_ADC_OFST_LOCK_DET_REG1		RX ADC Offset Lock Detectot Registers 1
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_TH_LOCK_LANE_11_0_b0      : 8;	/* [11:0]     r/w 12'h199*/
		uint8_t RX_ADC_IF_OFST_TH_LOCK_LANE_11_0_b1      : 4;	/* [11:0]     r/w 12'h199*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_ADC_IF_OFST_TH_UNLOCK_LANE_11_0_b0    : 8;	/*[27:16]     r/w 12'h199*/
		uint8_t RX_ADC_IF_OFST_TH_UNLOCK_LANE_11_0_b1    : 4;	/*[27:16]     r/w 12'h199*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_OFST_LOCK_DET_REG1_t;
__xdata __at( 0x46e4 ) volatile RX_ADC_OFST_LOCK_DET_REG1_t RX_ADC_OFST_LOCK_DET_REG1;
#define reg_RX_ADC_IF_OFST_TH_LOCK_LANE_11_0_b0  RX_ADC_OFST_LOCK_DET_REG1.BF.RX_ADC_IF_OFST_TH_LOCK_LANE_11_0_b0
#define reg_RX_ADC_IF_OFST_TH_LOCK_LANE_11_0_b1  RX_ADC_OFST_LOCK_DET_REG1.BF.RX_ADC_IF_OFST_TH_LOCK_LANE_11_0_b1
#define reg_RX_ADC_IF_OFST_TH_UNLOCK_LANE_11_0_b0  RX_ADC_OFST_LOCK_DET_REG1.BF.RX_ADC_IF_OFST_TH_UNLOCK_LANE_11_0_b0
#define reg_RX_ADC_IF_OFST_TH_UNLOCK_LANE_11_0_b1  RX_ADC_OFST_LOCK_DET_REG1.BF.RX_ADC_IF_OFST_TH_UNLOCK_LANE_11_0_b1

// 0x00e8	RX_ADC_OFST_LOCK_DET_REG2		RX ADC Offset Lock Detectot Registers 2
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_LOCK_CNT_LANE_7_0         : 8;	/*  [7:0]       r   0*/
		uint8_t RX_ADC_IF_OFST_UNLOCK_CNT_LANE_7_0       : 8;	/* [15:8]       r   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_OFST_LOCK_DET_REG2_t;
__xdata __at( 0x46e8 ) volatile RX_ADC_OFST_LOCK_DET_REG2_t RX_ADC_OFST_LOCK_DET_REG2;
#define reg_RX_ADC_IF_OFST_LOCK_CNT_LANE_7_0  RX_ADC_OFST_LOCK_DET_REG2.BF.RX_ADC_IF_OFST_LOCK_CNT_LANE_7_0
#define reg_RX_ADC_IF_OFST_UNLOCK_CNT_LANE_7_0  RX_ADC_OFST_LOCK_DET_REG2.BF.RX_ADC_IF_OFST_UNLOCK_CNT_LANE_7_0

// 0x00ec	RX_ADC_OFST_LOCK_DET_REG3		RX ADC Offset Lock Detectot Registers 3
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b0 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b1 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b2 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RESERVED_24                              : 7;	/*[30:24]     r/w   0*/
		uint8_t RX_ADC_IF_OFST_LOCK_TIMEOUT_LANE         : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_OFST_LOCK_DET_REG3_t;
__xdata __at( 0x46ec ) volatile RX_ADC_OFST_LOCK_DET_REG3_t RX_ADC_OFST_LOCK_DET_REG3;
#define reg_RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b0  RX_ADC_OFST_LOCK_DET_REG3.BF.RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b0
#define reg_RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b1  RX_ADC_OFST_LOCK_DET_REG3.BF.RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b1
#define reg_RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b2  RX_ADC_OFST_LOCK_DET_REG3.BF.RX_ADC_IF_OFST_LOCK_TIMEOUT_CNT_LANE_23_0_b2
#define reg_RX_ADC_IF_OFST_LOCK_TIMEOUT_LANE  RX_ADC_OFST_LOCK_DET_REG3.BF.RX_ADC_IF_OFST_LOCK_TIMEOUT_LANE

// 0x00f0	RX_ADC_OFST_LOCK_DET_REG4		RX ADC Offset Lock Detectot Registers 4
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b0    : 8;	/* [23:0]       r   0*/
		uint8_t RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b1    : 8;	/* [23:0]       r   0*/
		uint8_t RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b2    : 8;	/* [23:0]       r   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RX_ADC_IF_OFST_LOCK_MUX_LANE_1_0         : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_OFST_LOCK_DET_REG4_t;
__xdata __at( 0x46f0 ) volatile RX_ADC_OFST_LOCK_DET_REG4_t RX_ADC_OFST_LOCK_DET_REG4;
#define reg_RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b0  RX_ADC_OFST_LOCK_DET_REG4.BF.RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b0
#define reg_RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b1  RX_ADC_OFST_LOCK_DET_REG4.BF.RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b1
#define reg_RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b2  RX_ADC_OFST_LOCK_DET_REG4.BF.RX_ADC_IF_OFST_TIMER_CNT_LANE_23_0_b2
#define reg_RX_ADC_IF_OFST_LOCK_MUX_LANE_1_0  RX_ADC_OFST_LOCK_DET_REG4.BF.RX_ADC_IF_OFST_LOCK_MUX_LANE_1_0

// 0x00f4	RX_ADC_SEL_MODE_REG0		RX ADC Selection Mode Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_ADC_IF_FIX_MODE_EN_LANE               : 1;	/*      8     r/w   0*/
		uint8_t RX_ADC_IF_RND_MODE_EN_LANE               : 1;	/*      9     r/w   0*/
		uint8_t RX_ADC_IF_FIX_ADC_IDX_LANE_3_0           : 4;	/*[13:10]     r/w 4'h0*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_SEL_MODE_REG0_t;
__xdata __at( 0x46f4 ) volatile RX_ADC_SEL_MODE_REG0_t RX_ADC_SEL_MODE_REG0;
#define reg_RX_ADC_IF_FIX_MODE_EN_LANE  RX_ADC_SEL_MODE_REG0.BF.RX_ADC_IF_FIX_MODE_EN_LANE
#define reg_RX_ADC_IF_RND_MODE_EN_LANE  RX_ADC_SEL_MODE_REG0.BF.RX_ADC_IF_RND_MODE_EN_LANE
#define reg_RX_ADC_IF_FIX_ADC_IDX_LANE_3_0  RX_ADC_SEL_MODE_REG0.BF.RX_ADC_IF_FIX_ADC_IDX_LANE_3_0

// 0x00f8	RX_ADC_OFST_GAIN_VALUE_REG0		RX ADC Offset and Gain Max Min Value Register0
typedef union {
	struct {
		uint8_t RX_ADC_IF_OFST_VAL_MIN_LANE_6_0          : 7;	/*  [6:0]     r/w 7'h40*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_ADC_IF_OFST_VAL_MAX_LANE_6_0          : 7;	/* [14:8]     r/w 7'h3f*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_VAL_MIN_LANE_5_0          : 6;	/*[21:16]     r/w 6'h20*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_ADC_IF_GAIN_VAL_MAX_LANE_5_0          : 6;	/*[29:24]     r/w 6'h1f*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_OFST_GAIN_VALUE_REG0_t;
__xdata __at( 0x46f8 ) volatile RX_ADC_OFST_GAIN_VALUE_REG0_t RX_ADC_OFST_GAIN_VALUE_REG0;
#define reg_RX_ADC_IF_OFST_VAL_MIN_LANE_6_0  RX_ADC_OFST_GAIN_VALUE_REG0.BF.RX_ADC_IF_OFST_VAL_MIN_LANE_6_0
#define reg_RX_ADC_IF_OFST_VAL_MAX_LANE_6_0  RX_ADC_OFST_GAIN_VALUE_REG0.BF.RX_ADC_IF_OFST_VAL_MAX_LANE_6_0
#define reg_RX_ADC_IF_GAIN_VAL_MIN_LANE_5_0  RX_ADC_OFST_GAIN_VALUE_REG0.BF.RX_ADC_IF_GAIN_VAL_MIN_LANE_5_0
#define reg_RX_ADC_IF_GAIN_VAL_MAX_LANE_5_0  RX_ADC_OFST_GAIN_VALUE_REG0.BF.RX_ADC_IF_GAIN_VAL_MAX_LANE_5_0

#endif
