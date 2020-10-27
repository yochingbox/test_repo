#ifndef PHY_REG_C_RX_SKEW_CAL_LANE_H
#define PHY_REG_C_RX_SKEW_CAL_LANE_H



// 0x0000	RX_SKEW_CAL_CTRL_0		RX Skew Calibration Conbtrol 0
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_EN_LANE                      : 1;	/*      0     r/w   0*/
		uint8_t RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE         : 1;	/*      1     r/w   0*/
		uint8_t RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE      : 1;	/*      2     r/w   0*/
		uint8_t RX_SKEW_CAL_COARSE_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t RX_SKEW_CAL_AVE_SIZE_LANE_2_0            : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RX_SKEW_CAL_AVE_REJ_SIGN_LANE            : 1;	/*      7     r/w   0*/
		uint8_t RX_SKEW_CAL_TH_EN_LANE_7_0               : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t RX_SKEW_CAL_BIAS_LANE_7_0                : 8;	/*[23:16]     r/w 8'h8a*/
		uint8_t RX_SKEW_CAL_AVE_MU_LP_LANE_3_0           : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0          : 4;	/*[31:28]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_0_t;
__xdata __at( 0x4400 ) volatile RX_SKEW_CAL_CTRL_0_t RX_SKEW_CAL_CTRL_0;
#define reg_RX_SKEW_CAL_EN_LANE  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_EN_LANE
#define reg_RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE
#define reg_RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE
#define reg_RX_SKEW_CAL_COARSE_LANE  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_COARSE_LANE
#define reg_RX_SKEW_CAL_AVE_SIZE_LANE_2_0  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_AVE_SIZE_LANE_2_0
#define reg_RX_SKEW_CAL_AVE_REJ_SIGN_LANE  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_AVE_REJ_SIGN_LANE
#define reg_RX_SKEW_CAL_TH_EN_LANE_7_0  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_TH_EN_LANE_7_0
#define reg_RX_SKEW_CAL_BIAS_LANE_7_0  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_BIAS_LANE_7_0
#define reg_RX_SKEW_CAL_AVE_MU_LP_LANE_3_0  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_AVE_MU_LP_LANE_3_0
#define reg_RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0  RX_SKEW_CAL_CTRL_0.BF.RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0

// 0x0004	RX_SKEW_CAL_CTRL_1		RX Skew Calibration Conbtrol 1
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_SIGN_LANE                    : 1;	/*      0     r/w 1'b1*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RX_SKEW_CAL_BLIND_EN_LANE                : 1;	/*      2     r/w   0*/
		uint8_t RX_SKEW_CAL_TH_EOM_EN_LANE               : 1;	/*      3     r/w   0*/
		uint8_t RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h4*/
		uint8_t RX_SKEW_CAL_COARSE_GAIN_LANE_1_0         : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RX_SKEW_CAL_RUN_STOP_EN_LANE             : 1;	/*     10     r/w 1'h0*/
		uint8_t RX_SKEW_CAL_FORCE_CLK_EN_LANE            : 1;	/*     11     r/w 1'b0*/
		uint8_t RX_SKEW_CAL_MU_SHIFT_LANE_3_0            : 4;	/*[15:12]     r/w 4'h8*/
		uint8_t RX_SKEW_CAL_AVE_FORCE_LANE               : 1;	/*     16     r/w   0*/
		uint8_t RX_SKEW_CAL_DATA_MASK_EN_LANE            : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_SKEW_CAL_MAP_ROT_LANE_2_0             : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RX_SKEW_CAL_PAT_FREZ_EN_LANE             : 1;	/*     27     r/w   0*/
		uint8_t RX_SKEW_CAL_SQ_FREZ_EN_LANE              : 1;	/*     28     r/w   0*/
		uint8_t RX_SKEW_CAL_CLK_EN_LANE                  : 1;	/*     29     r/w   1*/
		uint8_t RX_SKEW_CAL_RST_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t RX_SKEW_CAL_CLK_ON_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_1_t;
__xdata __at( 0x4404 ) volatile RX_SKEW_CAL_CTRL_1_t RX_SKEW_CAL_CTRL_1;
#define reg_RX_SKEW_CAL_SIGN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_SIGN_LANE
#define reg_RX_SKEW_CAL_BLIND_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_BLIND_EN_LANE
#define reg_RX_SKEW_CAL_TH_EOM_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_TH_EOM_EN_LANE
#define reg_RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0
#define reg_RX_SKEW_CAL_COARSE_GAIN_LANE_1_0  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_COARSE_GAIN_LANE_1_0
#define reg_RX_SKEW_CAL_RUN_STOP_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_RUN_STOP_EN_LANE
#define reg_RX_SKEW_CAL_FORCE_CLK_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_FORCE_CLK_EN_LANE
#define reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_MU_SHIFT_LANE_3_0
#define reg_RX_SKEW_CAL_AVE_FORCE_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_AVE_FORCE_LANE
#define reg_RX_SKEW_CAL_DATA_MASK_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_DATA_MASK_EN_LANE
#define reg_RX_SKEW_CAL_MAP_ROT_LANE_2_0  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_MAP_ROT_LANE_2_0
#define reg_RX_SKEW_CAL_PAT_FREZ_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_PAT_FREZ_EN_LANE
#define reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_SQ_FREZ_EN_LANE
#define reg_RX_SKEW_CAL_CLK_EN_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_CLK_EN_LANE
#define reg_RX_SKEW_CAL_RST_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_RST_LANE
#define reg_RX_SKEW_CAL_CLK_ON_LANE  RX_SKEW_CAL_CTRL_1.BF.RX_SKEW_CAL_CLK_ON_LANE

// 0x0008	RX_SKEW_CAL_CTRL_2		RX Skew Calibration Conbtrol 2
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b0 : 8;	/* [25:0]     r/w 26'h0*/
		uint8_t RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b1 : 8;	/* [25:0]     r/w 26'h0*/
		uint8_t RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b2 : 8;	/* [25:0]     r/w 26'h0*/
		uint8_t RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b3 : 2;	/* [25:0]     r/w 26'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_2_t;
__xdata __at( 0x4408 ) volatile RX_SKEW_CAL_CTRL_2_t RX_SKEW_CAL_CTRL_2;
#define reg_RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b0  RX_SKEW_CAL_CTRL_2.BF.RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b0
#define reg_RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b1  RX_SKEW_CAL_CTRL_2.BF.RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b1
#define reg_RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b2  RX_SKEW_CAL_CTRL_2.BF.RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b2
#define reg_RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b3  RX_SKEW_CAL_CTRL_2.BF.RX_SKEW_CAL_AVE_FORCE_VALUE_LANE_25_0_b3

// 0x000c	RX_SKEW_CAL_CTRL_3		RX Skew Calibration Conbtrol 3
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE0_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE0_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT0_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT0_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE0_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_3_t;
__xdata __at( 0x440c ) volatile RX_SKEW_CAL_CTRL_3_t RX_SKEW_CAL_CTRL_3;
#define reg_RX_SKEW_CAL_ADAP_VALUE0_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_3.BF.RX_SKEW_CAL_ADAP_VALUE0_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE0_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_3.BF.RX_SKEW_CAL_ADAP_VALUE0_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT0_LANE_8_0_b0  RX_SKEW_CAL_CTRL_3.BF.SKEW_ADAPT0_LANE_8_0_b0
#define reg_SKEW_ADAPT0_LANE_8_0_b1  RX_SKEW_CAL_CTRL_3.BF.SKEW_ADAPT0_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE0_FORCE_LANE  RX_SKEW_CAL_CTRL_3.BF.RX_SKEW_CAL_ADAP_VALUE0_FORCE_LANE

// 0x0010	RX_SKEW_CAL_CTRL_4		RX Skew Calibration Conbtrol 4
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE1_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE1_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT1_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT1_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE1_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_4_t;
__xdata __at( 0x4410 ) volatile RX_SKEW_CAL_CTRL_4_t RX_SKEW_CAL_CTRL_4;
#define reg_RX_SKEW_CAL_ADAP_VALUE1_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_4.BF.RX_SKEW_CAL_ADAP_VALUE1_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE1_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_4.BF.RX_SKEW_CAL_ADAP_VALUE1_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT1_LANE_8_0_b0  RX_SKEW_CAL_CTRL_4.BF.SKEW_ADAPT1_LANE_8_0_b0
#define reg_SKEW_ADAPT1_LANE_8_0_b1  RX_SKEW_CAL_CTRL_4.BF.SKEW_ADAPT1_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE1_FORCE_LANE  RX_SKEW_CAL_CTRL_4.BF.RX_SKEW_CAL_ADAP_VALUE1_FORCE_LANE

// 0x0014	RX_SKEW_CAL_CTRL_5		RX Skew Calibration Conbtrol 5
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE2_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE2_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT2_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT2_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE2_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_5_t;
__xdata __at( 0x4414 ) volatile RX_SKEW_CAL_CTRL_5_t RX_SKEW_CAL_CTRL_5;
#define reg_RX_SKEW_CAL_ADAP_VALUE2_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_5.BF.RX_SKEW_CAL_ADAP_VALUE2_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE2_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_5.BF.RX_SKEW_CAL_ADAP_VALUE2_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT2_LANE_8_0_b0  RX_SKEW_CAL_CTRL_5.BF.SKEW_ADAPT2_LANE_8_0_b0
#define reg_SKEW_ADAPT2_LANE_8_0_b1  RX_SKEW_CAL_CTRL_5.BF.SKEW_ADAPT2_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE2_FORCE_LANE  RX_SKEW_CAL_CTRL_5.BF.RX_SKEW_CAL_ADAP_VALUE2_FORCE_LANE

// 0x0018	RX_SKEW_CAL_CTRL_6		RX Skew Calibration Conbtrol 6
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE3_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE3_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT3_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT3_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE3_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_6_t;
__xdata __at( 0x4418 ) volatile RX_SKEW_CAL_CTRL_6_t RX_SKEW_CAL_CTRL_6;
#define reg_RX_SKEW_CAL_ADAP_VALUE3_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_6.BF.RX_SKEW_CAL_ADAP_VALUE3_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE3_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_6.BF.RX_SKEW_CAL_ADAP_VALUE3_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT3_LANE_8_0_b0  RX_SKEW_CAL_CTRL_6.BF.SKEW_ADAPT3_LANE_8_0_b0
#define reg_SKEW_ADAPT3_LANE_8_0_b1  RX_SKEW_CAL_CTRL_6.BF.SKEW_ADAPT3_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE3_FORCE_LANE  RX_SKEW_CAL_CTRL_6.BF.RX_SKEW_CAL_ADAP_VALUE3_FORCE_LANE

// 0x001c	RX_SKEW_CAL_CTRL_7		RX Skew Calibration Conbtrol 7
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE4_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE4_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT4_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT4_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE4_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_7_t;
__xdata __at( 0x441c ) volatile RX_SKEW_CAL_CTRL_7_t RX_SKEW_CAL_CTRL_7;
#define reg_RX_SKEW_CAL_ADAP_VALUE4_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_7.BF.RX_SKEW_CAL_ADAP_VALUE4_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE4_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_7.BF.RX_SKEW_CAL_ADAP_VALUE4_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT4_LANE_8_0_b0  RX_SKEW_CAL_CTRL_7.BF.SKEW_ADAPT4_LANE_8_0_b0
#define reg_SKEW_ADAPT4_LANE_8_0_b1  RX_SKEW_CAL_CTRL_7.BF.SKEW_ADAPT4_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE4_FORCE_LANE  RX_SKEW_CAL_CTRL_7.BF.RX_SKEW_CAL_ADAP_VALUE4_FORCE_LANE

// 0x0020	RX_SKEW_CAL_CTRL_8		RX Skew Calibration Conbtrol 8
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE5_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE5_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT5_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT5_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE5_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_8_t;
__xdata __at( 0x4420 ) volatile RX_SKEW_CAL_CTRL_8_t RX_SKEW_CAL_CTRL_8;
#define reg_RX_SKEW_CAL_ADAP_VALUE5_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_8.BF.RX_SKEW_CAL_ADAP_VALUE5_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE5_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_8.BF.RX_SKEW_CAL_ADAP_VALUE5_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT5_LANE_8_0_b0  RX_SKEW_CAL_CTRL_8.BF.SKEW_ADAPT5_LANE_8_0_b0
#define reg_SKEW_ADAPT5_LANE_8_0_b1  RX_SKEW_CAL_CTRL_8.BF.SKEW_ADAPT5_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE5_FORCE_LANE  RX_SKEW_CAL_CTRL_8.BF.RX_SKEW_CAL_ADAP_VALUE5_FORCE_LANE

// 0x0024	RX_SKEW_CAL_CTRL_9		RX Skew Calibration Conbtrol 9
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE6_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE6_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT6_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT6_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE6_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_9_t;
__xdata __at( 0x4424 ) volatile RX_SKEW_CAL_CTRL_9_t RX_SKEW_CAL_CTRL_9;
#define reg_RX_SKEW_CAL_ADAP_VALUE6_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_9.BF.RX_SKEW_CAL_ADAP_VALUE6_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE6_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_9.BF.RX_SKEW_CAL_ADAP_VALUE6_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT6_LANE_8_0_b0  RX_SKEW_CAL_CTRL_9.BF.SKEW_ADAPT6_LANE_8_0_b0
#define reg_SKEW_ADAPT6_LANE_8_0_b1  RX_SKEW_CAL_CTRL_9.BF.SKEW_ADAPT6_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE6_FORCE_LANE  RX_SKEW_CAL_CTRL_9.BF.RX_SKEW_CAL_ADAP_VALUE6_FORCE_LANE

// 0x0028	RX_SKEW_CAL_CTRL_10		RX Skew Calibration Conbtrol 10
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE7_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE7_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT7_LANE_8_0_b0                  : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT7_LANE_8_0_b1                  : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE7_FORCE_LANE       : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_10_t;
__xdata __at( 0x4428 ) volatile RX_SKEW_CAL_CTRL_10_t RX_SKEW_CAL_CTRL_10;
#define reg_RX_SKEW_CAL_ADAP_VALUE7_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_10.BF.RX_SKEW_CAL_ADAP_VALUE7_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE7_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_10.BF.RX_SKEW_CAL_ADAP_VALUE7_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT7_LANE_8_0_b0  RX_SKEW_CAL_CTRL_10.BF.SKEW_ADAPT7_LANE_8_0_b0
#define reg_SKEW_ADAPT7_LANE_8_0_b1  RX_SKEW_CAL_CTRL_10.BF.SKEW_ADAPT7_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE7_FORCE_LANE  RX_SKEW_CAL_CTRL_10.BF.RX_SKEW_CAL_ADAP_VALUE7_FORCE_LANE

// 0x002c	RX_SKEW_CAL_CTRL_11		RX Skew Calibration Conbtrol 11
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_DM_CLK_WIDTH_LANE_1_0        : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE         : 1;	/*      2     r/w   0*/
		uint8_t RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE   : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK0_FORCE_LANE            : 1;	/*      8     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK0_FORCE_VALUE_LANE      : 1;	/*      9     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK1_FORCE_LANE            : 1;	/*     10     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK1_FORCE_VALUE_LANE      : 1;	/*     11     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK2_FORCE_LANE            : 1;	/*     12     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK2_FORCE_VALUE_LANE      : 1;	/*     13     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK3_FORCE_LANE            : 1;	/*     14     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK3_FORCE_VALUE_LANE      : 1;	/*     15     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK4_FORCE_LANE            : 1;	/*     16     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK4_FORCE_VALUE_LANE      : 1;	/*     17     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK5_FORCE_LANE            : 1;	/*     18     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK5_FORCE_VALUE_LANE      : 1;	/*     19     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK6_FORCE_LANE            : 1;	/*     20     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK6_FORCE_VALUE_LANE      : 1;	/*     21     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK7_FORCE_LANE            : 1;	/*     22     r/w   0*/
		uint8_t RX_SKEW_CAL_DMCLK7_FORCE_VALUE_LANE      : 1;	/*     23     r/w   0*/
		uint8_t RX_SKEW_CAL_CODE_JUMP_CTRL_EN_LANE       : 1;	/*     24     r/w   0*/
		uint8_t RX_SKEW_CAL_CODE_JUMP_SAT_SEL_LANE_1_0   : 2;	/*[26:25]     r/w   0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_11_t;
__xdata __at( 0x442c ) volatile RX_SKEW_CAL_CTRL_11_t RX_SKEW_CAL_CTRL_11;
#define reg_RX_SKEW_CAL_DM_CLK_WIDTH_LANE_1_0  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DM_CLK_WIDTH_LANE_1_0
#define reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE
#define reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK0_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK0_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK0_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK0_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK1_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK1_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK1_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK1_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK2_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK2_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK2_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK2_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK3_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK3_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK3_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK3_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK4_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK4_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK4_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK4_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK5_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK5_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK5_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK5_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK6_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK6_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK6_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK6_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_DMCLK7_FORCE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK7_FORCE_LANE
#define reg_RX_SKEW_CAL_DMCLK7_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_DMCLK7_FORCE_VALUE_LANE
#define reg_RX_SKEW_CAL_CODE_JUMP_CTRL_EN_LANE  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_CODE_JUMP_CTRL_EN_LANE
#define reg_RX_SKEW_CAL_CODE_JUMP_SAT_SEL_LANE_1_0  RX_SKEW_CAL_CTRL_11.BF.RX_SKEW_CAL_CODE_JUMP_SAT_SEL_LANE_1_0

// 0x0030	RX_SKEW_CAL_CTRL_12		RX Skew Calibration Conbtrol 12
typedef union {
	struct {
		uint8_t RX_SKEW_DAC_TH0_LANE_5_0                 : 6;	/*  [5:0]       r   0*/
		uint8_t RX_SKEW_GM_TH0_LANE_1_0                  : 2;	/*  [7:6]       r   0*/
		uint8_t RX_SKEW_DAC_TH1_LANE_5_0                 : 6;	/* [13:8]       r   0*/
		uint8_t RX_SKEW_GM_TH1_LANE_1_0                  : 2;	/*[15:14]       r   0*/
		uint8_t RX_SKEW_DAC_TH2_LANE_5_0                 : 6;	/*[21:16]       r   0*/
		uint8_t RX_SKEW_GM_TH2_LANE_1_0                  : 2;	/*[23:22]       r   0*/
		uint8_t RX_SKEW_DAC_TH3_LANE_5_0                 : 6;	/*[29:24]       r   0*/
		uint8_t RX_SKEW_GM_TH3_LANE_1_0                  : 2;	/*[31:30]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_12_t;
__xdata __at( 0x4430 ) volatile RX_SKEW_CAL_CTRL_12_t RX_SKEW_CAL_CTRL_12;
#define reg_RX_SKEW_DAC_TH0_LANE_5_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_DAC_TH0_LANE_5_0
#define reg_RX_SKEW_GM_TH0_LANE_1_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_GM_TH0_LANE_1_0
#define reg_RX_SKEW_DAC_TH1_LANE_5_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_DAC_TH1_LANE_5_0
#define reg_RX_SKEW_GM_TH1_LANE_1_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_GM_TH1_LANE_1_0
#define reg_RX_SKEW_DAC_TH2_LANE_5_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_DAC_TH2_LANE_5_0
#define reg_RX_SKEW_GM_TH2_LANE_1_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_GM_TH2_LANE_1_0
#define reg_RX_SKEW_DAC_TH3_LANE_5_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_DAC_TH3_LANE_5_0
#define reg_RX_SKEW_GM_TH3_LANE_1_0  RX_SKEW_CAL_CTRL_12.BF.RX_SKEW_GM_TH3_LANE_1_0

// 0x0034	RX_SKEW_CAL_CTRL_13		RX Skew Calibration Conbtrol 13
typedef union {
	struct {
		uint8_t RX_SKEW_DAC_TH4_LANE_5_0                 : 6;	/*  [5:0]       r   0*/
		uint8_t RX_SKEW_GM_TH4_LANE_1_0                  : 2;	/*  [7:6]       r   0*/
		uint8_t RX_SKEW_DAC_TH5_LANE_5_0                 : 6;	/* [13:8]       r   0*/
		uint8_t RX_SKEW_GM_TH5_LANE_1_0                  : 2;	/*[15:14]       r   0*/
		uint8_t RX_SKEW_DAC_TH6_LANE_5_0                 : 6;	/*[21:16]       r   0*/
		uint8_t RX_SKEW_GM_TH6_LANE_1_0                  : 2;	/*[23:22]       r   0*/
		uint8_t RX_SKEW_DAC_TH7_LANE_5_0                 : 6;	/*[29:24]       r   0*/
		uint8_t RX_SKEW_GM_TH7_LANE_1_0                  : 2;	/*[31:30]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_13_t;
__xdata __at( 0x4434 ) volatile RX_SKEW_CAL_CTRL_13_t RX_SKEW_CAL_CTRL_13;
#define reg_RX_SKEW_DAC_TH4_LANE_5_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_DAC_TH4_LANE_5_0
#define reg_RX_SKEW_GM_TH4_LANE_1_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_GM_TH4_LANE_1_0
#define reg_RX_SKEW_DAC_TH5_LANE_5_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_DAC_TH5_LANE_5_0
#define reg_RX_SKEW_GM_TH5_LANE_1_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_GM_TH5_LANE_1_0
#define reg_RX_SKEW_DAC_TH6_LANE_5_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_DAC_TH6_LANE_5_0
#define reg_RX_SKEW_GM_TH6_LANE_1_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_GM_TH6_LANE_1_0
#define reg_RX_SKEW_DAC_TH7_LANE_5_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_DAC_TH7_LANE_5_0
#define reg_RX_SKEW_GM_TH7_LANE_1_0  RX_SKEW_CAL_CTRL_13.BF.RX_SKEW_GM_TH7_LANE_1_0

// 0x0038	RX_SKEW_CAL_CTRL_14		RX Skew Calibration Conbtrol 14
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_JUMP_SAT_FORCE_VALUE_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h80*/
		uint8_t RX_SKEW_CAL_ADAP_JUMP_SAT_FORCE_LANE     : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SKEW_CAL_AVE_LANE_13_0_b0             : 8;	/*[29:16]       r 14'h0*/
		uint8_t RX_SKEW_CAL_AVE_LANE_13_0_b1             : 6;	/*[29:16]       r 14'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_14_t;
__xdata __at( 0x4438 ) volatile RX_SKEW_CAL_CTRL_14_t RX_SKEW_CAL_CTRL_14;
#define reg_RX_SKEW_CAL_ADAP_JUMP_SAT_FORCE_VALUE_LANE_7_0  RX_SKEW_CAL_CTRL_14.BF.RX_SKEW_CAL_ADAP_JUMP_SAT_FORCE_VALUE_LANE_7_0
#define reg_RX_SKEW_CAL_ADAP_JUMP_SAT_FORCE_LANE  RX_SKEW_CAL_CTRL_14.BF.RX_SKEW_CAL_ADAP_JUMP_SAT_FORCE_LANE
#define reg_RX_SKEW_CAL_AVE_LANE_13_0_b0  RX_SKEW_CAL_CTRL_14.BF.RX_SKEW_CAL_AVE_LANE_13_0_b0
#define reg_RX_SKEW_CAL_AVE_LANE_13_0_b1  RX_SKEW_CAL_CTRL_14.BF.RX_SKEW_CAL_AVE_LANE_13_0_b1

// 0x003c	RX_SKEW_CAL_CTRL_15		RX Skew Calibration Conbtrol 15
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_ADAP_VALUE_EOM_FORCE_VALUE_LANE_8_0_b0 : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE_EOM_FORCE_VALUE_LANE_8_0_b1 : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SKEW_ADAPT_EOM_LANE_8_0_b0               : 8;	/*[24:16]       r   0*/
		uint8_t SKEW_ADAPT_EOM_LANE_8_0_b1               : 1;	/*[24:16]       r   0*/
		uint8_t RX_SKEW_CAL_ADAP_VALUE_EOM__FORCE_LANE   : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_15_t;
__xdata __at( 0x443c ) volatile RX_SKEW_CAL_CTRL_15_t RX_SKEW_CAL_CTRL_15;
#define reg_RX_SKEW_CAL_ADAP_VALUE_EOM_FORCE_VALUE_LANE_8_0_b0  RX_SKEW_CAL_CTRL_15.BF.RX_SKEW_CAL_ADAP_VALUE_EOM_FORCE_VALUE_LANE_8_0_b0
#define reg_RX_SKEW_CAL_ADAP_VALUE_EOM_FORCE_VALUE_LANE_8_0_b1  RX_SKEW_CAL_CTRL_15.BF.RX_SKEW_CAL_ADAP_VALUE_EOM_FORCE_VALUE_LANE_8_0_b1
#define reg_SKEW_ADAPT_EOM_LANE_8_0_b0  RX_SKEW_CAL_CTRL_15.BF.SKEW_ADAPT_EOM_LANE_8_0_b0
#define reg_SKEW_ADAPT_EOM_LANE_8_0_b1  RX_SKEW_CAL_CTRL_15.BF.SKEW_ADAPT_EOM_LANE_8_0_b1
#define reg_RX_SKEW_CAL_ADAP_VALUE_EOM__FORCE_LANE  RX_SKEW_CAL_CTRL_15.BF.RX_SKEW_CAL_ADAP_VALUE_EOM__FORCE_LANE

// 0x0040	RX_SKEW_CAL_CTRL_16		RX Skew Calibration Conbtrol 16
typedef union {
	struct {
		uint8_t RX_SKEW_EOM_DAC_TH_LANE_5_0              : 6;	/*  [5:0]       r   0*/
		uint8_t RX_SKEW_EOM_GM_TH_LANE_1_0               : 2;	/*  [7:6]       r   0*/
		uint8_t RX_SKEW_EOM_CAL_DMCLK_FORCE_LANE         : 1;	/*      8     r/w   0*/
		uint8_t RX_SKEW_EOM_CAL_DMCLK_FORCE_VALUE_LANE   : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_16_t;
__xdata __at( 0x4440 ) volatile RX_SKEW_CAL_CTRL_16_t RX_SKEW_CAL_CTRL_16;
#define reg_RX_SKEW_EOM_DAC_TH_LANE_5_0  RX_SKEW_CAL_CTRL_16.BF.RX_SKEW_EOM_DAC_TH_LANE_5_0
#define reg_RX_SKEW_EOM_GM_TH_LANE_1_0  RX_SKEW_CAL_CTRL_16.BF.RX_SKEW_EOM_GM_TH_LANE_1_0
#define reg_RX_SKEW_EOM_CAL_DMCLK_FORCE_LANE  RX_SKEW_CAL_CTRL_16.BF.RX_SKEW_EOM_CAL_DMCLK_FORCE_LANE
#define reg_RX_SKEW_EOM_CAL_DMCLK_FORCE_VALUE_LANE  RX_SKEW_CAL_CTRL_16.BF.RX_SKEW_EOM_CAL_DMCLK_FORCE_VALUE_LANE

// 0x0044	RX_SKEW_CAL_CTRL_17		RX Skew Calibration Conbtrol 17
typedef union {
	struct {
		uint8_t RX_SKEW_FORCE_DAC_TH0_LANE_5_0           : 6;	/*  [5:0]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH0_LANE_1_0            : 2;	/*  [7:6]     r/w 2'h3*/
		uint8_t RX_SKEW_FORCE_DAC_TH1_LANE_5_0           : 6;	/* [13:8]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH1_LANE_1_0            : 2;	/*[15:14]     r/w 2'h3*/
		uint8_t RX_SKEW_FORCE_DAC_TH2_LANE_5_0           : 6;	/*[21:16]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH2_LANE_1_0            : 2;	/*[23:22]     r/w 2'h3*/
		uint8_t RX_SKEW_FORCE_DAC_TH3_LANE_5_0           : 6;	/*[29:24]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH3_LANE_1_0            : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_17_t;
__xdata __at( 0x4444 ) volatile RX_SKEW_CAL_CTRL_17_t RX_SKEW_CAL_CTRL_17;
#define reg_RX_SKEW_FORCE_DAC_TH0_LANE_5_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_DAC_TH0_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH0_LANE_1_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_GM_TH0_LANE_1_0
#define reg_RX_SKEW_FORCE_DAC_TH1_LANE_5_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_DAC_TH1_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH1_LANE_1_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_GM_TH1_LANE_1_0
#define reg_RX_SKEW_FORCE_DAC_TH2_LANE_5_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_DAC_TH2_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH2_LANE_1_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_GM_TH2_LANE_1_0
#define reg_RX_SKEW_FORCE_DAC_TH3_LANE_5_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_DAC_TH3_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH3_LANE_1_0  RX_SKEW_CAL_CTRL_17.BF.RX_SKEW_FORCE_GM_TH3_LANE_1_0

// 0x0048	RX_SKEW_CAL_CTRL_18		RX Skew Calibration Conbtrol 18
typedef union {
	struct {
		uint8_t RX_SKEW_FORCE_DAC_TH4_LANE_5_0           : 6;	/*  [5:0]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH4_LANE_1_0            : 2;	/*  [7:6]     r/w 2'h3*/
		uint8_t RX_SKEW_FORCE_DAC_TH5_LANE_5_0           : 6;	/* [13:8]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH5_LANE_1_0            : 2;	/*[15:14]     r/w 2'h3*/
		uint8_t RX_SKEW_FORCE_DAC_TH6_LANE_5_0           : 6;	/*[21:16]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH6_LANE_1_0            : 2;	/*[23:22]     r/w 2'h3*/
		uint8_t RX_SKEW_FORCE_DAC_TH7_LANE_5_0           : 6;	/*[29:24]     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH7_LANE_1_0            : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_18_t;
__xdata __at( 0x4448 ) volatile RX_SKEW_CAL_CTRL_18_t RX_SKEW_CAL_CTRL_18;
#define reg_RX_SKEW_FORCE_DAC_TH4_LANE_5_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_DAC_TH4_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH4_LANE_1_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_GM_TH4_LANE_1_0
#define reg_RX_SKEW_FORCE_DAC_TH5_LANE_5_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_DAC_TH5_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH5_LANE_1_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_GM_TH5_LANE_1_0
#define reg_RX_SKEW_FORCE_DAC_TH6_LANE_5_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_DAC_TH6_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH6_LANE_1_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_GM_TH6_LANE_1_0
#define reg_RX_SKEW_FORCE_DAC_TH7_LANE_5_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_DAC_TH7_LANE_5_0
#define reg_RX_SKEW_FORCE_GM_TH7_LANE_1_0  RX_SKEW_CAL_CTRL_18.BF.RX_SKEW_FORCE_GM_TH7_LANE_1_0

// 0x004c	RX_SKEW_CAL_CTRL_19		RX Skew Calibration Conbtrol 19
typedef union {
	struct {
		uint8_t RX_SKEW_FORCE_DAC_TH0_EN_LANE            : 1;	/*      0     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH0_EN_LANE             : 1;	/*      1     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH1_EN_LANE            : 1;	/*      2     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH1_EN_LANE             : 1;	/*      3     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH2_EN_LANE            : 1;	/*      4     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH2_EN_LANE             : 1;	/*      5     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH3_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH3_EN_LANE             : 1;	/*      7     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH4_EN_LANE            : 1;	/*      8     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH4_EN_LANE             : 1;	/*      9     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH5_EN_LANE            : 1;	/*     10     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH5_EN_LANE             : 1;	/*     11     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH6_EN_LANE            : 1;	/*     12     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH6_EN_LANE             : 1;	/*     13     r/w   0*/
		uint8_t RX_SKEW_FORCE_DAC_TH7_EN_LANE            : 1;	/*     14     r/w   0*/
		uint8_t RX_SKEW_FORCE_GM_TH7_EN_LANE             : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_19_t;
__xdata __at( 0x444c ) volatile RX_SKEW_CAL_CTRL_19_t RX_SKEW_CAL_CTRL_19;
#define reg_RX_SKEW_FORCE_DAC_TH0_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH0_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH0_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH0_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH1_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH1_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH1_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH1_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH2_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH2_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH2_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH2_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH3_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH3_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH3_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH3_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH4_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH4_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH4_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH4_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH5_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH5_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH5_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH5_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH6_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH6_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH6_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH6_EN_LANE
#define reg_RX_SKEW_FORCE_DAC_TH7_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_DAC_TH7_EN_LANE
#define reg_RX_SKEW_FORCE_GM_TH7_EN_LANE  RX_SKEW_CAL_CTRL_19.BF.RX_SKEW_FORCE_GM_TH7_EN_LANE

// 0x0050	RX_SKEW_CAL_CTRL_20		RX Skew Calibration Conbtrol 20
typedef union {
	struct {
		uint8_t RX_SKEW_EOM_FORCE_DAC_TH_LANE_5_0        : 6;	/*  [5:0]     r/w   0*/
		uint8_t RX_SKEW_EOM_FORCE_GM_TH_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h3*/
		uint8_t RX_SKEW_EOM_FORCE_DAC_TH_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t RX_SKEW_EOM_FORCE_GM_TH_EN_LANE          : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t RX_SKEW_CAL_RUN_TIME_LANE_5_0            : 6;	/*[21:16]     r/w 6'hb*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_SKEW_CAL_STOP_TIME_LANE_5_0           : 6;	/*[29:24]     r/w 6'hb*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_20_t;
__xdata __at( 0x4450 ) volatile RX_SKEW_CAL_CTRL_20_t RX_SKEW_CAL_CTRL_20;
#define reg_RX_SKEW_EOM_FORCE_DAC_TH_LANE_5_0  RX_SKEW_CAL_CTRL_20.BF.RX_SKEW_EOM_FORCE_DAC_TH_LANE_5_0
#define reg_RX_SKEW_EOM_FORCE_GM_TH_LANE_1_0  RX_SKEW_CAL_CTRL_20.BF.RX_SKEW_EOM_FORCE_GM_TH_LANE_1_0
#define reg_RX_SKEW_EOM_FORCE_DAC_TH_EN_LANE  RX_SKEW_CAL_CTRL_20.BF.RX_SKEW_EOM_FORCE_DAC_TH_EN_LANE
#define reg_RX_SKEW_EOM_FORCE_GM_TH_EN_LANE  RX_SKEW_CAL_CTRL_20.BF.RX_SKEW_EOM_FORCE_GM_TH_EN_LANE
#define reg_RX_SKEW_CAL_RUN_TIME_LANE_5_0  RX_SKEW_CAL_CTRL_20.BF.RX_SKEW_CAL_RUN_TIME_LANE_5_0
#define reg_RX_SKEW_CAL_STOP_TIME_LANE_5_0  RX_SKEW_CAL_CTRL_20.BF.RX_SKEW_CAL_STOP_TIME_LANE_5_0

// 0x0054	RX_SKEW_CAL_CTRL_21		RX Skew Calibration Conbtrol 21
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_SYNCLK_START_CNT_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h0f*/
		uint8_t RX_SKEW_CAL_SYNCLK_END_CNT_LANE_7_0      : 8;	/* [15:8]     r/w 8'h1B*/
		uint8_t RX_SKEW_CAL_DUMMY_SYNCLK_START_CNT_LANE_7_0 : 8;	/*[23:16]     r/w 8'h0d*/
		uint8_t RX_SKEW_CAL_DUMMY_SYNCLK_END_CNT_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1A*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_CTRL_21_t;
__xdata __at( 0x4454 ) volatile RX_SKEW_CAL_CTRL_21_t RX_SKEW_CAL_CTRL_21;
#define reg_RX_SKEW_CAL_SYNCLK_START_CNT_LANE_7_0  RX_SKEW_CAL_CTRL_21.BF.RX_SKEW_CAL_SYNCLK_START_CNT_LANE_7_0
#define reg_RX_SKEW_CAL_SYNCLK_END_CNT_LANE_7_0  RX_SKEW_CAL_CTRL_21.BF.RX_SKEW_CAL_SYNCLK_END_CNT_LANE_7_0
#define reg_RX_SKEW_CAL_DUMMY_SYNCLK_START_CNT_LANE_7_0  RX_SKEW_CAL_CTRL_21.BF.RX_SKEW_CAL_DUMMY_SYNCLK_START_CNT_LANE_7_0
#define reg_RX_SKEW_CAL_DUMMY_SYNCLK_END_CNT_LANE_7_0  RX_SKEW_CAL_CTRL_21.BF.RX_SKEW_CAL_DUMMY_SYNCLK_END_CNT_LANE_7_0

// 0x0058	RX_SKEW_CAL_LOCK_DET_REG0		RX Skew Calibration Lock Detectot Registers 0
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_LOCK_DET_EN_LANE             : 1;	/*      0     r/w 1'b0*/
		uint8_t RX_SKEW_CAL_LOCK_DET_LANE                : 1;	/*      1       r 1'b0*/
		uint8_t RX_SKEW_CAL_LOCK_MODE_LANE               : 1;	/*      2     r/w 1'b0*/
		uint8_t RX_SKEW_CAL_LOCK_CNT_RESET_LANE          : 1;	/*      3     r/w 1'b0*/
		uint8_t RX_SKEW_CAL_UNLOCK_CNT_RESET_LANE        : 1;	/*      4     r/w 1'b0*/
		uint8_t RX_SKEW_CAL_TIMER_RESET_LANE             : 1;	/*      5     r/w 1'b0*/
		uint8_t RX_SKEW_CAL_TIMER_PAUSE_LANE             : 1;	/*      6     r/w 1'b0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_SKEW_CAL_CNT_LOCK_LANE_5_0            : 6;	/* [13:8]     r/w 6'h4*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_SKEW_CAL_CNT_UNLOCK_LANE_3_0          : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_SKEW_CAL_LOCK_N1_LANE_3_0             : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RX_SKEW_CAL_LOCK_N2_LANE_3_0             : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_LOCK_DET_REG0_t;
__xdata __at( 0x4458 ) volatile RX_SKEW_CAL_LOCK_DET_REG0_t RX_SKEW_CAL_LOCK_DET_REG0;
#define reg_RX_SKEW_CAL_LOCK_DET_EN_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_LOCK_DET_EN_LANE
#define reg_RX_SKEW_CAL_LOCK_DET_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_LOCK_DET_LANE
#define reg_RX_SKEW_CAL_LOCK_MODE_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_LOCK_MODE_LANE
#define reg_RX_SKEW_CAL_LOCK_CNT_RESET_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_LOCK_CNT_RESET_LANE
#define reg_RX_SKEW_CAL_UNLOCK_CNT_RESET_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_UNLOCK_CNT_RESET_LANE
#define reg_RX_SKEW_CAL_TIMER_RESET_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_TIMER_RESET_LANE
#define reg_RX_SKEW_CAL_TIMER_PAUSE_LANE  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_TIMER_PAUSE_LANE
#define reg_RX_SKEW_CAL_CNT_LOCK_LANE_5_0  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_CNT_LOCK_LANE_5_0
#define reg_RX_SKEW_CAL_CNT_UNLOCK_LANE_3_0  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_CNT_UNLOCK_LANE_3_0
#define reg_RX_SKEW_CAL_LOCK_N1_LANE_3_0  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_LOCK_N1_LANE_3_0
#define reg_RX_SKEW_CAL_LOCK_N2_LANE_3_0  RX_SKEW_CAL_LOCK_DET_REG0.BF.RX_SKEW_CAL_LOCK_N2_LANE_3_0

// 0x005c	RX_SKEW_CAL_LOCK_DET_REG1		RX Skew Calibration Lock Detectot Registers 1
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_TH_LOCK_LANE_11_0_b0         : 8;	/* [11:0]     r/w 12'h199*/
		uint8_t RX_SKEW_CAL_TH_LOCK_LANE_11_0_b1         : 4;	/* [11:0]     r/w 12'h199*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_SKEW_CAL_TH_UNLOCK_LANE_11_0_b0       : 8;	/*[27:16]     r/w 12'h199*/
		uint8_t RX_SKEW_CAL_TH_UNLOCK_LANE_11_0_b1       : 4;	/*[27:16]     r/w 12'h199*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_LOCK_DET_REG1_t;
__xdata __at( 0x445c ) volatile RX_SKEW_CAL_LOCK_DET_REG1_t RX_SKEW_CAL_LOCK_DET_REG1;
#define reg_RX_SKEW_CAL_TH_LOCK_LANE_11_0_b0  RX_SKEW_CAL_LOCK_DET_REG1.BF.RX_SKEW_CAL_TH_LOCK_LANE_11_0_b0
#define reg_RX_SKEW_CAL_TH_LOCK_LANE_11_0_b1  RX_SKEW_CAL_LOCK_DET_REG1.BF.RX_SKEW_CAL_TH_LOCK_LANE_11_0_b1
#define reg_RX_SKEW_CAL_TH_UNLOCK_LANE_11_0_b0  RX_SKEW_CAL_LOCK_DET_REG1.BF.RX_SKEW_CAL_TH_UNLOCK_LANE_11_0_b0
#define reg_RX_SKEW_CAL_TH_UNLOCK_LANE_11_0_b1  RX_SKEW_CAL_LOCK_DET_REG1.BF.RX_SKEW_CAL_TH_UNLOCK_LANE_11_0_b1

// 0x0060	RX_SKEW_CAL_LOCK_DET_REG2		RX Skew Calibration Lock Detectot Registers 2
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_LOCK_CNT_LANE_7_0            : 8;	/*  [7:0]       r   0*/
		uint8_t RX_SKEW_CAL_UNLOCK_CNT_LANE_7_0          : 8;	/* [15:8]       r   0*/
		uint8_t RX_SKEW_TH_SEL_LANE_1_0                  : 2;	/*[17:16]     r/w   0*/
		uint8_t RX_SKEW_TH_SEL_FORCE_LANE                : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_LOCK_DET_REG2_t;
__xdata __at( 0x4460 ) volatile RX_SKEW_CAL_LOCK_DET_REG2_t RX_SKEW_CAL_LOCK_DET_REG2;
#define reg_RX_SKEW_CAL_LOCK_CNT_LANE_7_0  RX_SKEW_CAL_LOCK_DET_REG2.BF.RX_SKEW_CAL_LOCK_CNT_LANE_7_0
#define reg_RX_SKEW_CAL_UNLOCK_CNT_LANE_7_0  RX_SKEW_CAL_LOCK_DET_REG2.BF.RX_SKEW_CAL_UNLOCK_CNT_LANE_7_0
#define reg_RX_SKEW_TH_SEL_LANE_1_0  RX_SKEW_CAL_LOCK_DET_REG2.BF.RX_SKEW_TH_SEL_LANE_1_0
#define reg_RX_SKEW_TH_SEL_FORCE_LANE  RX_SKEW_CAL_LOCK_DET_REG2.BF.RX_SKEW_TH_SEL_FORCE_LANE

// 0x0064	RX_SKEW_CAL_LOCK_DET_REG3		RX skew Calibration Lock Detectot Registers 3
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b0 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b1 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b2 : 8;	/* [23:0]     r/w 24'hfff*/
		uint8_t RESERVED_24                              : 7;	/*[30:24]     r/w   0*/
		uint8_t RX_SKEW_CAL_LOCK_TIMEOUT_LANE            : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_LOCK_DET_REG3_t;
__xdata __at( 0x4464 ) volatile RX_SKEW_CAL_LOCK_DET_REG3_t RX_SKEW_CAL_LOCK_DET_REG3;
#define reg_RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b0  RX_SKEW_CAL_LOCK_DET_REG3.BF.RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b0
#define reg_RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b1  RX_SKEW_CAL_LOCK_DET_REG3.BF.RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b1
#define reg_RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b2  RX_SKEW_CAL_LOCK_DET_REG3.BF.RX_SKEW_CAL_LOCK_TIMEOUT_CNT_LANE_23_0_b2
#define reg_RX_SKEW_CAL_LOCK_TIMEOUT_LANE  RX_SKEW_CAL_LOCK_DET_REG3.BF.RX_SKEW_CAL_LOCK_TIMEOUT_LANE

// 0x0068	RX_SKEW_CAL_LOCK_DET_REG4		RX skew Calibration Lock Detectot Registers 4
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b0       : 8;	/* [23:0]       r   0*/
		uint8_t RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b1       : 8;	/* [23:0]       r   0*/
		uint8_t RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b2       : 8;	/* [23:0]       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_LOCK_DET_REG4_t;
__xdata __at( 0x4468 ) volatile RX_SKEW_CAL_LOCK_DET_REG4_t RX_SKEW_CAL_LOCK_DET_REG4;
#define reg_RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b0  RX_SKEW_CAL_LOCK_DET_REG4.BF.RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b0
#define reg_RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b1  RX_SKEW_CAL_LOCK_DET_REG4.BF.RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b1
#define reg_RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b2  RX_SKEW_CAL_LOCK_DET_REG4.BF.RX_SKEW_CAL_TIMER_CNT_LANE_23_0_b2

// 0x006c	RX_SKEW_CAL_LOCK_DET_REG5		RX Skew Calibration Lock Detectot Registers 5
typedef union {
	struct {
		uint8_t RX_SKEW_CAL_TH_LOCK_BLIND_LANE_11_0_b0   : 8;	/* [11:0]     r/w 12'h4cc*/
		uint8_t RX_SKEW_CAL_TH_LOCK_BLIND_LANE_11_0_b1   : 4;	/* [11:0]     r/w 12'h4cc*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_SKEW_CAL_TH_UNLOCK_BLIND_LANE_11_0_b0 : 8;	/*[27:16]     r/w 12'h4cc*/
		uint8_t RX_SKEW_CAL_TH_UNLOCK_BLIND_LANE_11_0_b1 : 4;	/*[27:16]     r/w 12'h4cc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SKEW_CAL_LOCK_DET_REG5_t;
__xdata __at( 0x446c ) volatile RX_SKEW_CAL_LOCK_DET_REG5_t RX_SKEW_CAL_LOCK_DET_REG5;
#define reg_RX_SKEW_CAL_TH_LOCK_BLIND_LANE_11_0_b0  RX_SKEW_CAL_LOCK_DET_REG5.BF.RX_SKEW_CAL_TH_LOCK_BLIND_LANE_11_0_b0
#define reg_RX_SKEW_CAL_TH_LOCK_BLIND_LANE_11_0_b1  RX_SKEW_CAL_LOCK_DET_REG5.BF.RX_SKEW_CAL_TH_LOCK_BLIND_LANE_11_0_b1
#define reg_RX_SKEW_CAL_TH_UNLOCK_BLIND_LANE_11_0_b0  RX_SKEW_CAL_LOCK_DET_REG5.BF.RX_SKEW_CAL_TH_UNLOCK_BLIND_LANE_11_0_b0
#define reg_RX_SKEW_CAL_TH_UNLOCK_BLIND_LANE_11_0_b1  RX_SKEW_CAL_LOCK_DET_REG5.BF.RX_SKEW_CAL_TH_UNLOCK_BLIND_LANE_11_0_b1

#endif
