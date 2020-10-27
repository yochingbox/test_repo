#ifndef PHY_REG_C_ANA_TRX_CAL_TOP_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_TOP_LANE_H



// 0x0	SMPLR_ODD_0		smplr_odd_0
typedef union {
	struct {
		uint8_t SMPLR_ODD_TOP_DONE_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_ODD_TESTBUS_CORE_SEL_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t SMPLR_ODD_TOP_START_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_ODD_UPDN_RD_LANE                   : 1;	/*      5       r 1'h0*/
		uint8_t SMPLR_ODD_UNDERFLOW_ALL_RD_LANE          : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_ODD_OVERFLOW_ALL_RD_LANE           : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_ODD_0_t;
__xdata __at( 0x1400 ) volatile SMPLR_ODD_0_t SMPLR_ODD_0;
#define reg_SMPLR_ODD_TOP_DONE_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_TOP_DONE_LANE
#define reg_SMPLR_ODD_TESTBUS_CORE_SEL_LANE_2_0  SMPLR_ODD_0.BF.SMPLR_ODD_TESTBUS_CORE_SEL_LANE_2_0
#define reg_SMPLR_ODD_TOP_START_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_TOP_START_LANE
#define reg_SMPLR_ODD_UPDN_RD_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_UPDN_RD_LANE
#define reg_SMPLR_ODD_UNDERFLOW_ALL_RD_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_UNDERFLOW_ALL_RD_LANE
#define reg_SMPLR_ODD_OVERFLOW_ALL_RD_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_OVERFLOW_ALL_RD_LANE

// 0x1	SMPLR_D_TOP_O_CAL_0		smplr_d_top_o_cal_0
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_RESULT_AVG_EN_LANE     : 1;	/*      1     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_O_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_DIR_INV_LANE           : 1;	/*      5     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_O_CAL_BYPASS_EN_LANE         : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_0_t;
__xdata __at( 0x1404 ) volatile SMPLR_D_TOP_O_CAL_0_t SMPLR_D_TOP_O_CAL_0;
#define reg_SMPLR_D_TOP_O_CAL_TIMEOUT_CHK_DIS_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_SMPLR_D_TOP_O_CAL_RESULT_AVG_EN_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_RESULT_AVG_EN_LANE
#define reg_SMPLR_D_TOP_O_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SMPLR_D_TOP_O_CAL_DIR_INV_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_DIR_INV_LANE
#define reg_SMPLR_D_TOP_O_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_BYPASS_EN_LANE
#define reg_SMPLR_D_TOP_O_CAL_SINGLE_EN_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_SINGLE_EN_LANE

// 0x2	SMPLR_D_TOP_O_CAL_1		smplr_d_top_o_cal_1
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_INDV_EXT_EN_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t SMPLR_D_TOP_O_CAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_1_t;
__xdata __at( 0x1408 ) volatile SMPLR_D_TOP_O_CAL_1_t SMPLR_D_TOP_O_CAL_1;
#define reg_SMPLR_D_TOP_O_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_O_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_O_CAL_TIMEOUT_STEPS_LANE_2_0  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SMPLR_D_TOP_O_CAL_TOGGLE_TIMES_LANE_2_0  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_TOGGLE_TIMES_LANE_2_0

// 0x3	SMPLR_D_TOP_O_CAL_2		smplr_d_top_o_cal_2
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_2_t;
__xdata __at( 0x140c ) volatile SMPLR_D_TOP_O_CAL_2_t SMPLR_D_TOP_O_CAL_2;
#define reg_SMPLR_D_TOP_O_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SMPLR_D_TOP_O_CAL_2.BF.SMPLR_D_TOP_O_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x4	SMPLR_D_TOP_O_CAL_3		smplr_d_top_o_cal_3
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_VAL_MAX_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_3_t;
__xdata __at( 0x1410 ) volatile SMPLR_D_TOP_O_CAL_3_t SMPLR_D_TOP_O_CAL_3;
#define reg_SMPLR_D_TOP_O_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_O_CAL_3.BF.SMPLR_D_TOP_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_VAL_MAX_LANE_6_0  SMPLR_D_TOP_O_CAL_3.BF.SMPLR_D_TOP_O_CAL_VAL_MAX_LANE_6_0

// 0x5	SMPLR_D_TOP_O_CAL_4		smplr_d_top_o_cal_4
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_VAL_MIN_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_4_t;
__xdata __at( 0x1414 ) volatile SMPLR_D_TOP_O_CAL_4_t SMPLR_D_TOP_O_CAL_4;
#define reg_SMPLR_D_TOP_O_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_O_CAL_4.BF.SMPLR_D_TOP_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_VAL_MIN_LANE_6_0  SMPLR_D_TOP_O_CAL_4.BF.SMPLR_D_TOP_O_CAL_VAL_MIN_LANE_6_0

// 0x6	SMPLR_D_TOP_O_CAL_5		smplr_d_top_o_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_5_t;
__xdata __at( 0x1418 ) volatile SMPLR_D_TOP_O_CAL_5_t SMPLR_D_TOP_O_CAL_5;
#define reg_SMPLR_D_TOP_O_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_O_CAL_5.BF.SMPLR_D_TOP_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_O_CAL_5.BF.SMPLR_D_TOP_O_CAL_OVERFLOW_RD_LANE

// 0x7	SMPLR_D_TOP_O_CAL_6		smplr_d_top_o_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_6_t;
__xdata __at( 0x141c ) volatile SMPLR_D_TOP_O_CAL_6_t SMPLR_D_TOP_O_CAL_6;
#define reg_SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_6_0  SMPLR_D_TOP_O_CAL_6.BF.SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_6_0

// 0x8	SMPLR_D_MID_O_CAL_0		smplr_d_mid_o_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_MID_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_MID_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_MID_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_MID_O_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_MID_O_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_MID_O_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_O_CAL_0_t;
__xdata __at( 0x1420 ) volatile SMPLR_D_MID_O_CAL_0_t SMPLR_D_MID_O_CAL_0;
#define reg_SMPLR_D_MID_O_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_O_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_O_CAL_BYPASS_EN_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_BYPASS_EN_LANE

// 0x9	SMPLR_D_MID_O_CAL_1		smplr_d_mid_o_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_O_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_O_CAL_1_t;
__xdata __at( 0x1424 ) volatile SMPLR_D_MID_O_CAL_1_t SMPLR_D_MID_O_CAL_1;
#define reg_SMPLR_D_MID_O_CAL_RESULT_RD_LANE_6_0  SMPLR_D_MID_O_CAL_1.BF.SMPLR_D_MID_O_CAL_RESULT_RD_LANE_6_0

// 0xa	SMPLR_D_BOT_O_CAL_0		smplr_d_bot_o_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_BOT_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_BOT_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_BOT_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_BOT_O_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_O_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_O_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_O_CAL_0_t;
__xdata __at( 0x1428 ) volatile SMPLR_D_BOT_O_CAL_0_t SMPLR_D_BOT_O_CAL_0;
#define reg_SMPLR_D_BOT_O_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_O_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_O_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_BYPASS_EN_LANE

// 0xb	SMPLR_D_BOT_O_CAL_1		smplr_d_bot_o_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_O_CAL_1_t;
__xdata __at( 0x142c ) volatile SMPLR_D_BOT_O_CAL_1_t SMPLR_D_BOT_O_CAL_1;
#define reg_SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_6_0  SMPLR_D_BOT_O_CAL_1.BF.SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_6_0

// 0xc	SMPLR_S_TOP_O_CAL_0		smplr_s_top_o_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_TOP_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_TOP_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_TOP_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_TOP_O_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_O_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_O_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_O_CAL_0_t;
__xdata __at( 0x1430 ) volatile SMPLR_S_TOP_O_CAL_0_t SMPLR_S_TOP_O_CAL_0;
#define reg_SMPLR_S_TOP_O_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_O_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_O_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_BYPASS_EN_LANE

// 0xd	SMPLR_S_TOP_O_CAL_1		smplr_s_top_o_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_O_CAL_1_t;
__xdata __at( 0x1434 ) volatile SMPLR_S_TOP_O_CAL_1_t SMPLR_S_TOP_O_CAL_1;
#define reg_SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_6_0  SMPLR_S_TOP_O_CAL_1.BF.SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_6_0

// 0xe	SMPLR_S_MID_O_CAL_0		smplr_s_mid_o_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_MID_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_MID_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_MID_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_MID_O_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_MID_O_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_MID_O_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_O_CAL_0_t;
__xdata __at( 0x1438 ) volatile SMPLR_S_MID_O_CAL_0_t SMPLR_S_MID_O_CAL_0;
#define reg_SMPLR_S_MID_O_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_O_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_O_CAL_BYPASS_EN_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_BYPASS_EN_LANE

// 0xf	SMPLR_S_MID_O_CAL_1		smplr_s_mid_o_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_O_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_O_CAL_1_t;
__xdata __at( 0x143c ) volatile SMPLR_S_MID_O_CAL_1_t SMPLR_S_MID_O_CAL_1;
#define reg_SMPLR_S_MID_O_CAL_RESULT_RD_LANE_6_0  SMPLR_S_MID_O_CAL_1.BF.SMPLR_S_MID_O_CAL_RESULT_RD_LANE_6_0

// 0x10	SMPLR_S_BOT_O_CAL_0		smplr_s_bot_o_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_BOT_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_BOT_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_BOT_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_BOT_O_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_O_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_O_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_O_CAL_0_t;
__xdata __at( 0x1440 ) volatile SMPLR_S_BOT_O_CAL_0_t SMPLR_S_BOT_O_CAL_0;
#define reg_SMPLR_S_BOT_O_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_O_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_O_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_BYPASS_EN_LANE

// 0x11	SMPLR_S_BOT_O_CAL_1		smplr_s_bot_o_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_O_CAL_1_t;
__xdata __at( 0x1444 ) volatile SMPLR_S_BOT_O_CAL_1_t SMPLR_S_BOT_O_CAL_1;
#define reg_SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_6_0  SMPLR_S_BOT_O_CAL_1.BF.SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_6_0

// 0x12	SMPLR_EDGE_O_CAL_0		smplr_edge_o_cal_0
typedef union {
	struct {
		uint8_t SMPLR_EDGE_O_CAL_CAL_DONE_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_CAL_EN_EXT_LANE         : 1;	/*      1     r/w 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_INDV_EXT_EN_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_VAL_MIN_PN_SIGN_LANE    : 1;	/*      3     r/w 1'h1*/
		uint8_t SMPLR_EDGE_O_CAL_VAL_MAX_PN_SIGN_LANE    : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_DIR_INV_LANE            : 1;	/*      5     r/w 1'h1*/
		uint8_t SMPLR_EDGE_O_CAL_BYPASS_EN_LANE          : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_SINGLE_EN_LANE          : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_0_t;
__xdata __at( 0x1448 ) volatile SMPLR_EDGE_O_CAL_0_t SMPLR_EDGE_O_CAL_0;
#define reg_SMPLR_EDGE_O_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_O_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MIN_PN_SIGN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_VAL_MIN_PN_SIGN_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MAX_PN_SIGN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_VAL_MAX_PN_SIGN_LANE
#define reg_SMPLR_EDGE_O_CAL_DIR_INV_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_DIR_INV_LANE
#define reg_SMPLR_EDGE_O_CAL_BYPASS_EN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_BYPASS_EN_LANE
#define reg_SMPLR_EDGE_O_CAL_SINGLE_EN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_SINGLE_EN_LANE

// 0x13	SMPLR_EDGE_O_CAL_1		smplr_edge_o_cal_1
typedef union {
	struct {
		uint8_t SMPLR_EDGE_O_CAL_UNDERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_OVERFLOW_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_TIMEOUT_RD_LANE         : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_VAL_MAX_PN_LANE_4_0     : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_1_t;
__xdata __at( 0x144c ) volatile SMPLR_EDGE_O_CAL_1_t SMPLR_EDGE_O_CAL_1;
#define reg_SMPLR_EDGE_O_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MAX_PN_LANE_4_0  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_VAL_MAX_PN_LANE_4_0

// 0x14	SMPLR_EDGE_O_CAL_2		smplr_edge_o_cal_2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE  : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_VAL_MIN_PN_LANE_4_0     : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_2_t;
__xdata __at( 0x1450 ) volatile SMPLR_EDGE_O_CAL_2_t SMPLR_EDGE_O_CAL_2;
#define reg_SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_O_CAL_2.BF.SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MIN_PN_LANE_4_0  SMPLR_EDGE_O_CAL_2.BF.SMPLR_EDGE_O_CAL_VAL_MIN_PN_LANE_4_0

// 0x15	SMPLR_EDGE_O_CAL_3		smplr_edge_o_cal_3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_3_t;
__xdata __at( 0x1454 ) volatile SMPLR_EDGE_O_CAL_3_t SMPLR_EDGE_O_CAL_3;
#define reg_SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_O_CAL_3.BF.SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0

// 0x16	SMPLR_EDGE_O_CAL_4		smplr_edge_o_cal_4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_4_t;
__xdata __at( 0x1458 ) volatile SMPLR_EDGE_O_CAL_4_t SMPLR_EDGE_O_CAL_4;
#define reg_SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_O_CAL_4.BF.SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0

// 0x17	SMPLR_EVEN_0		smplr_even_0
typedef union {
	struct {
		uint8_t SMPLR_EVEN_TOP_DONE_LANE                 : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EVEN_TESTBUS_CORE_SEL_LANE_2_0     : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t SMPLR_EVEN_TOP_START_LANE                : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_EVEN_UPDN_RD_LANE                  : 1;	/*      5       r 1'h0*/
		uint8_t SMPLR_EVEN_UNDERFLOW_ALL_RD_LANE         : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_EVEN_OVERFLOW_ALL_RD_LANE          : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EVEN_0_t;
__xdata __at( 0x145c ) volatile SMPLR_EVEN_0_t SMPLR_EVEN_0;
#define reg_SMPLR_EVEN_TOP_DONE_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_TOP_DONE_LANE
#define reg_SMPLR_EVEN_TESTBUS_CORE_SEL_LANE_2_0  SMPLR_EVEN_0.BF.SMPLR_EVEN_TESTBUS_CORE_SEL_LANE_2_0
#define reg_SMPLR_EVEN_TOP_START_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_TOP_START_LANE
#define reg_SMPLR_EVEN_UPDN_RD_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_UPDN_RD_LANE
#define reg_SMPLR_EVEN_UNDERFLOW_ALL_RD_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_UNDERFLOW_ALL_RD_LANE
#define reg_SMPLR_EVEN_OVERFLOW_ALL_RD_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_OVERFLOW_ALL_RD_LANE

// 0x18	SMPLR_D_TOP_E_CAL_0		smplr_d_top_e_cal_0
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_RESULT_AVG_EN_LANE     : 1;	/*      1     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_E_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_DIR_INV_LANE           : 1;	/*      5     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_E_CAL_BYPASS_EN_LANE         : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_0_t;
__xdata __at( 0x1460 ) volatile SMPLR_D_TOP_E_CAL_0_t SMPLR_D_TOP_E_CAL_0;
#define reg_SMPLR_D_TOP_E_CAL_TIMEOUT_CHK_DIS_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_SMPLR_D_TOP_E_CAL_RESULT_AVG_EN_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_RESULT_AVG_EN_LANE
#define reg_SMPLR_D_TOP_E_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SMPLR_D_TOP_E_CAL_DIR_INV_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_DIR_INV_LANE
#define reg_SMPLR_D_TOP_E_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_BYPASS_EN_LANE
#define reg_SMPLR_D_TOP_E_CAL_SINGLE_EN_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_SINGLE_EN_LANE

// 0x19	SMPLR_D_TOP_E_CAL_1		smplr_d_top_e_cal_1
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_INDV_EXT_EN_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t SMPLR_D_TOP_E_CAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_1_t;
__xdata __at( 0x1464 ) volatile SMPLR_D_TOP_E_CAL_1_t SMPLR_D_TOP_E_CAL_1;
#define reg_SMPLR_D_TOP_E_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_E_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_E_CAL_TIMEOUT_STEPS_LANE_2_0  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SMPLR_D_TOP_E_CAL_TOGGLE_TIMES_LANE_2_0  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_TOGGLE_TIMES_LANE_2_0

// 0x1a	SMPLR_D_TOP_E_CAL_2		smplr_d_top_e_cal_2
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_2_t;
__xdata __at( 0x1468 ) volatile SMPLR_D_TOP_E_CAL_2_t SMPLR_D_TOP_E_CAL_2;
#define reg_SMPLR_D_TOP_E_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SMPLR_D_TOP_E_CAL_2.BF.SMPLR_D_TOP_E_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x1b	SMPLR_D_TOP_E_CAL_3		smplr_d_top_e_cal_3
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_VAL_MAX_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_3_t;
__xdata __at( 0x146c ) volatile SMPLR_D_TOP_E_CAL_3_t SMPLR_D_TOP_E_CAL_3;
#define reg_SMPLR_D_TOP_E_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_E_CAL_3.BF.SMPLR_D_TOP_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_VAL_MAX_LANE_6_0  SMPLR_D_TOP_E_CAL_3.BF.SMPLR_D_TOP_E_CAL_VAL_MAX_LANE_6_0

// 0x1c	SMPLR_D_TOP_E_CAL_4		smplr_d_top_e_cal_4
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_VAL_MIN_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_4_t;
__xdata __at( 0x1470 ) volatile SMPLR_D_TOP_E_CAL_4_t SMPLR_D_TOP_E_CAL_4;
#define reg_SMPLR_D_TOP_E_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_E_CAL_4.BF.SMPLR_D_TOP_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_VAL_MIN_LANE_6_0  SMPLR_D_TOP_E_CAL_4.BF.SMPLR_D_TOP_E_CAL_VAL_MIN_LANE_6_0

// 0x1d	SMPLR_D_TOP_E_CAL_5		smplr_d_top_e_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_5_t;
__xdata __at( 0x1474 ) volatile SMPLR_D_TOP_E_CAL_5_t SMPLR_D_TOP_E_CAL_5;
#define reg_SMPLR_D_TOP_E_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_E_CAL_5.BF.SMPLR_D_TOP_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_E_CAL_5.BF.SMPLR_D_TOP_E_CAL_OVERFLOW_RD_LANE

// 0x1e	SMPLR_D_TOP_E_CAL_6		smplr_d_top_e_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_6_t;
__xdata __at( 0x1478 ) volatile SMPLR_D_TOP_E_CAL_6_t SMPLR_D_TOP_E_CAL_6;
#define reg_SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_6_0  SMPLR_D_TOP_E_CAL_6.BF.SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_6_0

// 0x1f	SMPLR_D_MID_E_CAL_0		smplr_d_mid_e_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_MID_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_MID_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_MID_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_MID_E_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_MID_E_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_MID_E_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_E_CAL_0_t;
__xdata __at( 0x147c ) volatile SMPLR_D_MID_E_CAL_0_t SMPLR_D_MID_E_CAL_0;
#define reg_SMPLR_D_MID_E_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_E_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_E_CAL_BYPASS_EN_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_BYPASS_EN_LANE

// 0x20	SMPLR_D_MID_E_CAL_1		smplr_d_mid_e_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_E_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_E_CAL_1_t;
__xdata __at( 0x1480 ) volatile SMPLR_D_MID_E_CAL_1_t SMPLR_D_MID_E_CAL_1;
#define reg_SMPLR_D_MID_E_CAL_RESULT_RD_LANE_6_0  SMPLR_D_MID_E_CAL_1.BF.SMPLR_D_MID_E_CAL_RESULT_RD_LANE_6_0

// 0x21	SMPLR_D_BOT_E_CAL_0		smplr_d_bot_e_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_BOT_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_BOT_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_BOT_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_BOT_E_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_E_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_E_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_E_CAL_0_t;
__xdata __at( 0x1484 ) volatile SMPLR_D_BOT_E_CAL_0_t SMPLR_D_BOT_E_CAL_0;
#define reg_SMPLR_D_BOT_E_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_E_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_E_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_BYPASS_EN_LANE

// 0x22	SMPLR_D_BOT_E_CAL_1		smplr_d_bot_e_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_E_CAL_1_t;
__xdata __at( 0x1488 ) volatile SMPLR_D_BOT_E_CAL_1_t SMPLR_D_BOT_E_CAL_1;
#define reg_SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_6_0  SMPLR_D_BOT_E_CAL_1.BF.SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_6_0

// 0x23	SMPLR_S_TOP_E_CAL_0		smplr_s_top_e_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_TOP_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_TOP_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_TOP_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_TOP_E_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_E_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_E_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_E_CAL_0_t;
__xdata __at( 0x148c ) volatile SMPLR_S_TOP_E_CAL_0_t SMPLR_S_TOP_E_CAL_0;
#define reg_SMPLR_S_TOP_E_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_E_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_E_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_BYPASS_EN_LANE

// 0x24	SMPLR_S_TOP_E_CAL_1		smplr_s_top_e_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_E_CAL_1_t;
__xdata __at( 0x1490 ) volatile SMPLR_S_TOP_E_CAL_1_t SMPLR_S_TOP_E_CAL_1;
#define reg_SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_6_0  SMPLR_S_TOP_E_CAL_1.BF.SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_6_0

// 0x25	SMPLR_S_MID_E_CAL_0		smplr_s_mid_e_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_MID_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_MID_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_MID_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_MID_E_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_MID_E_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_MID_E_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_E_CAL_0_t;
__xdata __at( 0x1494 ) volatile SMPLR_S_MID_E_CAL_0_t SMPLR_S_MID_E_CAL_0;
#define reg_SMPLR_S_MID_E_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_E_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_E_CAL_BYPASS_EN_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_BYPASS_EN_LANE

// 0x26	SMPLR_S_MID_E_CAL_1		smplr_s_mid_e_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_E_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_E_CAL_1_t;
__xdata __at( 0x1498 ) volatile SMPLR_S_MID_E_CAL_1_t SMPLR_S_MID_E_CAL_1;
#define reg_SMPLR_S_MID_E_CAL_RESULT_RD_LANE_6_0  SMPLR_S_MID_E_CAL_1.BF.SMPLR_S_MID_E_CAL_RESULT_RD_LANE_6_0

// 0x27	SMPLR_S_BOT_E_CAL_0		smplr_s_bot_e_cal_0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_BOT_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_BOT_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_BOT_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_BOT_E_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_E_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_E_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_E_CAL_0_t;
__xdata __at( 0x149c ) volatile SMPLR_S_BOT_E_CAL_0_t SMPLR_S_BOT_E_CAL_0;
#define reg_SMPLR_S_BOT_E_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_E_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_E_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_BYPASS_EN_LANE

// 0x28	SMPLR_S_BOT_E_CAL_1		smplr_s_bot_e_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_E_CAL_1_t;
__xdata __at( 0x14a0 ) volatile SMPLR_S_BOT_E_CAL_1_t SMPLR_S_BOT_E_CAL_1;
#define reg_SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_6_0  SMPLR_S_BOT_E_CAL_1.BF.SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_6_0

// 0x29	SMPLR_EDGE_E_CAL_0		smplr_edge_e_cal_0
typedef union {
	struct {
		uint8_t SMPLR_EDGE_E_CAL_CAL_DONE_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_CAL_EN_EXT_LANE         : 1;	/*      1     r/w 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_INDV_EXT_EN_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_VAL_MIN_PN_SIGN_LANE    : 1;	/*      3     r/w 1'h1*/
		uint8_t SMPLR_EDGE_E_CAL_VAL_MAX_PN_SIGN_LANE    : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_DIR_INV_LANE            : 1;	/*      5     r/w 1'h1*/
		uint8_t SMPLR_EDGE_E_CAL_BYPASS_EN_LANE          : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_SINGLE_EN_LANE          : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_0_t;
__xdata __at( 0x14a4 ) volatile SMPLR_EDGE_E_CAL_0_t SMPLR_EDGE_E_CAL_0;
#define reg_SMPLR_EDGE_E_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_E_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MIN_PN_SIGN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_VAL_MIN_PN_SIGN_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MAX_PN_SIGN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_VAL_MAX_PN_SIGN_LANE
#define reg_SMPLR_EDGE_E_CAL_DIR_INV_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_DIR_INV_LANE
#define reg_SMPLR_EDGE_E_CAL_BYPASS_EN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_BYPASS_EN_LANE
#define reg_SMPLR_EDGE_E_CAL_SINGLE_EN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_SINGLE_EN_LANE

// 0x2a	SMPLR_EDGE_E_CAL_1		smplr_edge_e_cal_1
typedef union {
	struct {
		uint8_t SMPLR_EDGE_E_CAL_UNDERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_OVERFLOW_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_TIMEOUT_RD_LANE         : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_VAL_MAX_PN_LANE_4_0     : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_1_t;
__xdata __at( 0x14a8 ) volatile SMPLR_EDGE_E_CAL_1_t SMPLR_EDGE_E_CAL_1;
#define reg_SMPLR_EDGE_E_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MAX_PN_LANE_4_0  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_VAL_MAX_PN_LANE_4_0

// 0x2b	SMPLR_EDGE_E_CAL_2		smplr_edge_e_cal_2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE  : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_VAL_MIN_PN_LANE_4_0     : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_2_t;
__xdata __at( 0x14ac ) volatile SMPLR_EDGE_E_CAL_2_t SMPLR_EDGE_E_CAL_2;
#define reg_SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_E_CAL_2.BF.SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MIN_PN_LANE_4_0  SMPLR_EDGE_E_CAL_2.BF.SMPLR_EDGE_E_CAL_VAL_MIN_PN_LANE_4_0

// 0x2c	SMPLR_EDGE_E_CAL_3		smplr_edge_e_cal_3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_3_t;
__xdata __at( 0x14b0 ) volatile SMPLR_EDGE_E_CAL_3_t SMPLR_EDGE_E_CAL_3;
#define reg_SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_E_CAL_3.BF.SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0

// 0x2d	SMPLR_EDGE_E_CAL_4		smplr_edge_e_cal_4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_4_t;
__xdata __at( 0x14b4 ) volatile SMPLR_EDGE_E_CAL_4_t SMPLR_EDGE_E_CAL_4;
#define reg_SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_E_CAL_4.BF.SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0

#endif
