#ifndef PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H



// 0x0	SMPLR_P1P3_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_P1P3_TOP_DONE_LANE                 : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_P1P3_TESTBUS_CORE_SEL_LANE_2_0     : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t SMPLR_P1P3_TOP_START_LANE                : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_P1P3_UPDN_RD_LANE                  : 1;	/*      5       r 1'h0*/
		uint8_t SMPLR_P1P3_UNDERFLOW_ALL_RD_LANE         : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_P1P3_OVERFLOW_ALL_RD_LANE          : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_P1P3_0_t;
__xdata __at( 0x800 ) volatile SMPLR_P1P3_0_t SMPLR_P1P3_0;
#define reg_SMPLR_P1P3_TOP_DONE_LANE  SMPLR_P1P3_0.BF.SMPLR_P1P3_TOP_DONE_LANE
#define reg_SMPLR_P1P3_TESTBUS_CORE_SEL_LANE_2_0  SMPLR_P1P3_0.BF.SMPLR_P1P3_TESTBUS_CORE_SEL_LANE_2_0
#define reg_SMPLR_P1P3_TOP_START_LANE  SMPLR_P1P3_0.BF.SMPLR_P1P3_TOP_START_LANE
#define reg_SMPLR_P1P3_UPDN_RD_LANE  SMPLR_P1P3_0.BF.SMPLR_P1P3_UPDN_RD_LANE
#define reg_SMPLR_P1P3_UNDERFLOW_ALL_RD_LANE  SMPLR_P1P3_0.BF.SMPLR_P1P3_UNDERFLOW_ALL_RD_LANE
#define reg_SMPLR_P1P3_OVERFLOW_ALL_RD_LANE  SMPLR_P1P3_0.BF.SMPLR_P1P3_OVERFLOW_ALL_RD_LANE

// 0x1	SMPLR_D_TOP_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_P1_CAL_TIMEOUT_CHK_DIS_LANE  : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_RESULT_AVG_EN_LANE    : 1;	/*      1     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_P1_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t SMPLR_D_TOP_P1_CAL_DIR_INV_LANE          : 1;	/*      5     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_P1_CAL_BYPASS_EN_LANE        : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_SINGLE_EN_LANE        : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P1_CAL_0_t;
__xdata __at( 0x804 ) volatile SMPLR_D_TOP_P1_CAL_0_t SMPLR_D_TOP_P1_CAL_0;
#define reg_SMPLR_D_TOP_P1_CAL_TIMEOUT_CHK_DIS_LANE  SMPLR_D_TOP_P1_CAL_0.BF.SMPLR_D_TOP_P1_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_SMPLR_D_TOP_P1_CAL_RESULT_AVG_EN_LANE  SMPLR_D_TOP_P1_CAL_0.BF.SMPLR_D_TOP_P1_CAL_RESULT_AVG_EN_LANE
#define reg_SMPLR_D_TOP_P1_CAL_TOGGLE_TIMES_LANE_2_0  SMPLR_D_TOP_P1_CAL_0.BF.SMPLR_D_TOP_P1_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_SMPLR_D_TOP_P1_CAL_DIR_INV_LANE  SMPLR_D_TOP_P1_CAL_0.BF.SMPLR_D_TOP_P1_CAL_DIR_INV_LANE
#define reg_SMPLR_D_TOP_P1_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_P1_CAL_0.BF.SMPLR_D_TOP_P1_CAL_BYPASS_EN_LANE
#define reg_SMPLR_D_TOP_P1_CAL_SINGLE_EN_LANE  SMPLR_D_TOP_P1_CAL_0.BF.SMPLR_D_TOP_P1_CAL_SINGLE_EN_LANE

// 0x2	SMPLR_D_TOP_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_P1_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P1_CAL_1_t;
__xdata __at( 0x808 ) volatile SMPLR_D_TOP_P1_CAL_1_t SMPLR_D_TOP_P1_CAL_1;
#define reg_SMPLR_D_TOP_P1_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SMPLR_D_TOP_P1_CAL_1.BF.SMPLR_D_TOP_P1_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x3	SMPLR_D_TOP_P1_CAL_2		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_P1_CAL_OVERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_TIMEOUT_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_CAL_DONE_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_CAL_EN_EXT_LANE       : 1;	/*      3     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_INDV_EXT_EN_LANE      : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P1_CAL_2_t;
__xdata __at( 0x80c ) volatile SMPLR_D_TOP_P1_CAL_2_t SMPLR_D_TOP_P1_CAL_2;
#define reg_SMPLR_D_TOP_P1_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_P1_CAL_2.BF.SMPLR_D_TOP_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P1_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_P1_CAL_2.BF.SMPLR_D_TOP_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_P1_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_P1_CAL_2.BF.SMPLR_D_TOP_P1_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_P1_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_P1_CAL_2.BF.SMPLR_D_TOP_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_P1_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_P1_CAL_2.BF.SMPLR_D_TOP_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_P1_CAL_TIMEOUT_STEPS_LANE_2_0  SMPLR_D_TOP_P1_CAL_2.BF.SMPLR_D_TOP_P1_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x4	SMPLR_D_TOP_P1_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_TOP_P1_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_P1_CAL_VAL_MAX_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P1_CAL_3_t;
__xdata __at( 0x810 ) volatile SMPLR_D_TOP_P1_CAL_3_t SMPLR_D_TOP_P1_CAL_3;
#define reg_SMPLR_D_TOP_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_P1_CAL_3.BF.SMPLR_D_TOP_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P1_CAL_VAL_MAX_LANE_5_0  SMPLR_D_TOP_P1_CAL_3.BF.SMPLR_D_TOP_P1_CAL_VAL_MAX_LANE_5_0

// 0x5	SMPLR_D_TOP_P1_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_P1_CAL_VAL_MIN_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P1_CAL_4_t;
__xdata __at( 0x814 ) volatile SMPLR_D_TOP_P1_CAL_4_t SMPLR_D_TOP_P1_CAL_4;
#define reg_SMPLR_D_TOP_P1_CAL_VAL_MIN_LANE_5_0  SMPLR_D_TOP_P1_CAL_4.BF.SMPLR_D_TOP_P1_CAL_VAL_MIN_LANE_5_0

// 0x6	SMPLR_D_TOP_P1_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_P1_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P1_CAL_5_t;
__xdata __at( 0x818 ) volatile SMPLR_D_TOP_P1_CAL_5_t SMPLR_D_TOP_P1_CAL_5;
#define reg_SMPLR_D_TOP_P1_CAL_RESULT_RD_LANE_5_0  SMPLR_D_TOP_P1_CAL_5.BF.SMPLR_D_TOP_P1_CAL_RESULT_RD_LANE_5_0

// 0x7	SMPLR_D_MID_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_P1_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_MID_P1_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_MID_P1_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_MID_P1_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_MID_P1_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P1_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P1_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P1_CAL_0_t;
__xdata __at( 0x81c ) volatile SMPLR_D_MID_P1_CAL_0_t SMPLR_D_MID_P1_CAL_0;
#define reg_SMPLR_D_MID_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P1_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P1_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_P1_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_P1_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_P1_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_P1_CAL_BYPASS_EN_LANE  SMPLR_D_MID_P1_CAL_0.BF.SMPLR_D_MID_P1_CAL_BYPASS_EN_LANE

// 0x8	SMPLR_D_MID_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_MID_P1_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P1_CAL_1_t;
__xdata __at( 0x820 ) volatile SMPLR_D_MID_P1_CAL_1_t SMPLR_D_MID_P1_CAL_1;
#define reg_SMPLR_D_MID_P1_CAL_RESULT_RD_LANE_5_0  SMPLR_D_MID_P1_CAL_1.BF.SMPLR_D_MID_P1_CAL_RESULT_RD_LANE_5_0

// 0x9	SMPLR_D_BOT_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_P1_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_BOT_P1_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_BOT_P1_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_BOT_P1_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_BOT_P1_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P1_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P1_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P1_CAL_0_t;
__xdata __at( 0x824 ) volatile SMPLR_D_BOT_P1_CAL_0_t SMPLR_D_BOT_P1_CAL_0;
#define reg_SMPLR_D_BOT_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P1_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P1_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_P1_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_P1_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_P1_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_P1_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_P1_CAL_0.BF.SMPLR_D_BOT_P1_CAL_BYPASS_EN_LANE

// 0xa	SMPLR_D_BOT_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_BOT_P1_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P1_CAL_1_t;
__xdata __at( 0x828 ) volatile SMPLR_D_BOT_P1_CAL_1_t SMPLR_D_BOT_P1_CAL_1;
#define reg_SMPLR_D_BOT_P1_CAL_RESULT_RD_LANE_5_0  SMPLR_D_BOT_P1_CAL_1.BF.SMPLR_D_BOT_P1_CAL_RESULT_RD_LANE_5_0

// 0xb	SMPLR_D_TOP_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_TOP_P3_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_P3_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_TOP_P3_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_TOP_P3_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_TOP_P3_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P3_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P3_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P3_CAL_0_t;
__xdata __at( 0x82c ) volatile SMPLR_D_TOP_P3_CAL_0_t SMPLR_D_TOP_P3_CAL_0;
#define reg_SMPLR_D_TOP_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P3_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P3_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_P3_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_P3_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_P3_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_P3_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_P3_CAL_0.BF.SMPLR_D_TOP_P3_CAL_BYPASS_EN_LANE

// 0xc	SMPLR_D_TOP_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_P3_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P3_CAL_1_t;
__xdata __at( 0x830 ) volatile SMPLR_D_TOP_P3_CAL_1_t SMPLR_D_TOP_P3_CAL_1;
#define reg_SMPLR_D_TOP_P3_CAL_RESULT_RD_LANE_5_0  SMPLR_D_TOP_P3_CAL_1.BF.SMPLR_D_TOP_P3_CAL_RESULT_RD_LANE_5_0

// 0xd	SMPLR_D_MID_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_P3_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_MID_P3_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_MID_P3_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_MID_P3_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_MID_P3_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P3_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P3_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P3_CAL_0_t;
__xdata __at( 0x834 ) volatile SMPLR_D_MID_P3_CAL_0_t SMPLR_D_MID_P3_CAL_0;
#define reg_SMPLR_D_MID_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P3_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P3_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_P3_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_P3_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_P3_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_P3_CAL_BYPASS_EN_LANE  SMPLR_D_MID_P3_CAL_0.BF.SMPLR_D_MID_P3_CAL_BYPASS_EN_LANE

// 0xe	SMPLR_D_MID_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_MID_P3_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P3_CAL_1_t;
__xdata __at( 0x838 ) volatile SMPLR_D_MID_P3_CAL_1_t SMPLR_D_MID_P3_CAL_1;
#define reg_SMPLR_D_MID_P3_CAL_RESULT_RD_LANE_5_0  SMPLR_D_MID_P3_CAL_1.BF.SMPLR_D_MID_P3_CAL_RESULT_RD_LANE_5_0

// 0xf	SMPLR_D_BOT_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_P3_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_BOT_P3_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_BOT_P3_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_BOT_P3_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_BOT_P3_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P3_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P3_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P3_CAL_0_t;
__xdata __at( 0x83c ) volatile SMPLR_D_BOT_P3_CAL_0_t SMPLR_D_BOT_P3_CAL_0;
#define reg_SMPLR_D_BOT_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P3_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P3_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_P3_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_P3_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_P3_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_P3_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_P3_CAL_0.BF.SMPLR_D_BOT_P3_CAL_BYPASS_EN_LANE

// 0x10	SMPLR_D_BOT_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_BOT_P3_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P3_CAL_1_t;
__xdata __at( 0x840 ) volatile SMPLR_D_BOT_P3_CAL_1_t SMPLR_D_BOT_P3_CAL_1;
#define reg_SMPLR_D_BOT_P3_CAL_RESULT_RD_LANE_5_0  SMPLR_D_BOT_P3_CAL_1.BF.SMPLR_D_BOT_P3_CAL_RESULT_RD_LANE_5_0

// 0x11	SMPLR_S_TOP_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_P1_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_TOP_P1_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_TOP_P1_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_TOP_P1_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_TOP_P1_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P1_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P1_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P1_CAL_0_t;
__xdata __at( 0x844 ) volatile SMPLR_S_TOP_P1_CAL_0_t SMPLR_S_TOP_P1_CAL_0;
#define reg_SMPLR_S_TOP_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P1_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P1_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_P1_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_P1_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_P1_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_P1_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_P1_CAL_0.BF.SMPLR_S_TOP_P1_CAL_BYPASS_EN_LANE

// 0x12	SMPLR_S_TOP_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_TOP_P1_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P1_CAL_1_t;
__xdata __at( 0x848 ) volatile SMPLR_S_TOP_P1_CAL_1_t SMPLR_S_TOP_P1_CAL_1;
#define reg_SMPLR_S_TOP_P1_CAL_RESULT_RD_LANE_5_0  SMPLR_S_TOP_P1_CAL_1.BF.SMPLR_S_TOP_P1_CAL_RESULT_RD_LANE_5_0

// 0x13	SMPLR_S_MID_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_P1_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_MID_P1_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_MID_P1_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_MID_P1_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_MID_P1_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P1_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P1_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P1_CAL_0_t;
__xdata __at( 0x84c ) volatile SMPLR_S_MID_P1_CAL_0_t SMPLR_S_MID_P1_CAL_0;
#define reg_SMPLR_S_MID_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P1_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P1_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_P1_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_P1_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_P1_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_P1_CAL_BYPASS_EN_LANE  SMPLR_S_MID_P1_CAL_0.BF.SMPLR_S_MID_P1_CAL_BYPASS_EN_LANE

// 0x14	SMPLR_S_MID_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_MID_P1_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P1_CAL_1_t;
__xdata __at( 0x850 ) volatile SMPLR_S_MID_P1_CAL_1_t SMPLR_S_MID_P1_CAL_1;
#define reg_SMPLR_S_MID_P1_CAL_RESULT_RD_LANE_5_0  SMPLR_S_MID_P1_CAL_1.BF.SMPLR_S_MID_P1_CAL_RESULT_RD_LANE_5_0

// 0x15	SMPLR_S_BOT_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_P1_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_BOT_P1_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_BOT_P1_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_BOT_P1_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_BOT_P1_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P1_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P1_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P1_CAL_0_t;
__xdata __at( 0x854 ) volatile SMPLR_S_BOT_P1_CAL_0_t SMPLR_S_BOT_P1_CAL_0;
#define reg_SMPLR_S_BOT_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P1_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P1_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_P1_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_P1_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_P1_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_P1_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_P1_CAL_0.BF.SMPLR_S_BOT_P1_CAL_BYPASS_EN_LANE

// 0x16	SMPLR_S_BOT_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_BOT_P1_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P1_CAL_1_t;
__xdata __at( 0x858 ) volatile SMPLR_S_BOT_P1_CAL_1_t SMPLR_S_BOT_P1_CAL_1;
#define reg_SMPLR_S_BOT_P1_CAL_RESULT_RD_LANE_5_0  SMPLR_S_BOT_P1_CAL_1.BF.SMPLR_S_BOT_P1_CAL_RESULT_RD_LANE_5_0

// 0x17	SMPLR_S_TOP_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_P3_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_TOP_P3_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_TOP_P3_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_TOP_P3_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_TOP_P3_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P3_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P3_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P3_CAL_0_t;
__xdata __at( 0x85c ) volatile SMPLR_S_TOP_P3_CAL_0_t SMPLR_S_TOP_P3_CAL_0;
#define reg_SMPLR_S_TOP_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P3_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P3_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_P3_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_P3_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_P3_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_P3_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_P3_CAL_0.BF.SMPLR_S_TOP_P3_CAL_BYPASS_EN_LANE

// 0x18	SMPLR_S_TOP_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_TOP_P3_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P3_CAL_1_t;
__xdata __at( 0x860 ) volatile SMPLR_S_TOP_P3_CAL_1_t SMPLR_S_TOP_P3_CAL_1;
#define reg_SMPLR_S_TOP_P3_CAL_RESULT_RD_LANE_5_0  SMPLR_S_TOP_P3_CAL_1.BF.SMPLR_S_TOP_P3_CAL_RESULT_RD_LANE_5_0

// 0x19	SMPLR_S_MID_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_P3_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_MID_P3_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_MID_P3_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_MID_P3_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_MID_P3_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P3_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P3_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P3_CAL_0_t;
__xdata __at( 0x864 ) volatile SMPLR_S_MID_P3_CAL_0_t SMPLR_S_MID_P3_CAL_0;
#define reg_SMPLR_S_MID_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P3_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P3_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_P3_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_P3_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_P3_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_P3_CAL_BYPASS_EN_LANE  SMPLR_S_MID_P3_CAL_0.BF.SMPLR_S_MID_P3_CAL_BYPASS_EN_LANE

// 0x1a	SMPLR_S_MID_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_MID_P3_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P3_CAL_1_t;
__xdata __at( 0x868 ) volatile SMPLR_S_MID_P3_CAL_1_t SMPLR_S_MID_P3_CAL_1;
#define reg_SMPLR_S_MID_P3_CAL_RESULT_RD_LANE_5_0  SMPLR_S_MID_P3_CAL_1.BF.SMPLR_S_MID_P3_CAL_RESULT_RD_LANE_5_0

// 0x1b	SMPLR_S_BOT_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_P3_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_BOT_P3_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_BOT_P3_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_BOT_P3_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_BOT_P3_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P3_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P3_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P3_CAL_0_t;
__xdata __at( 0x86c ) volatile SMPLR_S_BOT_P3_CAL_0_t SMPLR_S_BOT_P3_CAL_0;
#define reg_SMPLR_S_BOT_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P3_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P3_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_P3_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_P3_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_P3_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_P3_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_P3_CAL_0.BF.SMPLR_S_BOT_P3_CAL_BYPASS_EN_LANE

// 0x1c	SMPLR_S_BOT_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_BOT_P3_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P3_CAL_1_t;
__xdata __at( 0x870 ) volatile SMPLR_S_BOT_P3_CAL_1_t SMPLR_S_BOT_P3_CAL_1;
#define reg_SMPLR_S_BOT_P3_CAL_RESULT_RD_LANE_5_0  SMPLR_S_BOT_P3_CAL_1.BF.SMPLR_S_BOT_P3_CAL_RESULT_RD_LANE_5_0

// 0x1d	SMPLR_EDGE_P1_CAL_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_EDGE_P1_CAL_VAL_MAX_PN_LANE_4_0    : 5;	/*  [4:0]     r/w 5'h1f*/
		uint8_t SMPLR_EDGE_P1_CAL_VAL_MAX_PN_SIGN_LANE   : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_DIR_INV_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t SMPLR_EDGE_P1_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P1_CAL_0_t;
__xdata __at( 0x874 ) volatile SMPLR_EDGE_P1_CAL_0_t SMPLR_EDGE_P1_CAL_0;
#define reg_SMPLR_EDGE_P1_CAL_VAL_MAX_PN_LANE_4_0  SMPLR_EDGE_P1_CAL_0.BF.SMPLR_EDGE_P1_CAL_VAL_MAX_PN_LANE_4_0
#define reg_SMPLR_EDGE_P1_CAL_VAL_MAX_PN_SIGN_LANE  SMPLR_EDGE_P1_CAL_0.BF.SMPLR_EDGE_P1_CAL_VAL_MAX_PN_SIGN_LANE
#define reg_SMPLR_EDGE_P1_CAL_DIR_INV_LANE  SMPLR_EDGE_P1_CAL_0.BF.SMPLR_EDGE_P1_CAL_DIR_INV_LANE
#define reg_SMPLR_EDGE_P1_CAL_BYPASS_EN_LANE  SMPLR_EDGE_P1_CAL_0.BF.SMPLR_EDGE_P1_CAL_BYPASS_EN_LANE

// 0x1e	SMPLR_EDGE_P1_CAL_1		TBD
typedef union {
	struct {
		uint8_t SMPLR_EDGE_P1_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_INDV_EXT_EN_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_VAL_MIN_PN_LANE_4_0    : 5;	/*  [6:2]     r/w 5'h1f*/
		uint8_t SMPLR_EDGE_P1_CAL_VAL_MIN_PN_SIGN_LANE   : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P1_CAL_1_t;
__xdata __at( 0x878 ) volatile SMPLR_EDGE_P1_CAL_1_t SMPLR_EDGE_P1_CAL_1;
#define reg_SMPLR_EDGE_P1_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_P1_CAL_1.BF.SMPLR_EDGE_P1_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_P1_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_P1_CAL_1.BF.SMPLR_EDGE_P1_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_P1_CAL_VAL_MIN_PN_LANE_4_0  SMPLR_EDGE_P1_CAL_1.BF.SMPLR_EDGE_P1_CAL_VAL_MIN_PN_LANE_4_0
#define reg_SMPLR_EDGE_P1_CAL_VAL_MIN_PN_SIGN_LANE  SMPLR_EDGE_P1_CAL_1.BF.SMPLR_EDGE_P1_CAL_VAL_MIN_PN_SIGN_LANE

// 0x1f	SMPLR_EDGE_P1_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P1_CAL_RESULT_PN_SIGN_RD_LANE : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_UNDERFLOW_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_OVERFLOW_RD_LANE       : 1;	/*      5       r 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_TIMEOUT_RD_LANE        : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_EDGE_P1_CAL_CAL_DONE_RD_LANE       : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P1_CAL_2_t;
__xdata __at( 0x87c ) volatile SMPLR_EDGE_P1_CAL_2_t SMPLR_EDGE_P1_CAL_2;
#define reg_SMPLR_EDGE_P1_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_P1_CAL_2.BF.SMPLR_EDGE_P1_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_P1_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_P1_CAL_2.BF.SMPLR_EDGE_P1_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P1_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_P1_CAL_2.BF.SMPLR_EDGE_P1_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P1_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_P1_CAL_2.BF.SMPLR_EDGE_P1_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_P1_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_P1_CAL_2.BF.SMPLR_EDGE_P1_CAL_CAL_DONE_RD_LANE

// 0x20	SMPLR_EDGE_P1_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P1_CAL_RESULT_P_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P1_CAL_3_t;
__xdata __at( 0x880 ) volatile SMPLR_EDGE_P1_CAL_3_t SMPLR_EDGE_P1_CAL_3;
#define reg_SMPLR_EDGE_P1_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_P1_CAL_3.BF.SMPLR_EDGE_P1_CAL_RESULT_P_RD_LANE_4_0

// 0x21	SMPLR_EDGE_P1_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P1_CAL_RESULT_N_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P1_CAL_4_t;
__xdata __at( 0x884 ) volatile SMPLR_EDGE_P1_CAL_4_t SMPLR_EDGE_P1_CAL_4;
#define reg_SMPLR_EDGE_P1_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_P1_CAL_4.BF.SMPLR_EDGE_P1_CAL_RESULT_N_RD_LANE_4_0

// 0x22	SMPLR_EDGE_P3_CAL_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_EDGE_P3_CAL_RESULT_PN_SIGN_RD_LANE : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P3_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P3_CAL_0_t;
__xdata __at( 0x888 ) volatile SMPLR_EDGE_P3_CAL_0_t SMPLR_EDGE_P3_CAL_0;
#define reg_SMPLR_EDGE_P3_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_P3_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P3_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P3_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_P3_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_EDGE_P3_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_P3_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_P3_CAL_BYPASS_EN_LANE  SMPLR_EDGE_P3_CAL_0.BF.SMPLR_EDGE_P3_CAL_BYPASS_EN_LANE

// 0x23	SMPLR_EDGE_P3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P3_CAL_RESULT_P_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P3_CAL_1_t;
__xdata __at( 0x88c ) volatile SMPLR_EDGE_P3_CAL_1_t SMPLR_EDGE_P3_CAL_1;
#define reg_SMPLR_EDGE_P3_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_P3_CAL_1.BF.SMPLR_EDGE_P3_CAL_RESULT_P_RD_LANE_4_0

// 0x24	SMPLR_EDGE_P3_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P3_CAL_RESULT_N_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P3_CAL_2_t;
__xdata __at( 0x890 ) volatile SMPLR_EDGE_P3_CAL_2_t SMPLR_EDGE_P3_CAL_2;
#define reg_SMPLR_EDGE_P3_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_P3_CAL_2.BF.SMPLR_EDGE_P3_CAL_RESULT_N_RD_LANE_4_0

// 0x25	RX_EOM_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_SETTING_EXT_LANE_12_9             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RX_EOM_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_EOM_CMP_CTRL_EXT_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_EOM_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_0_t;
__xdata __at( 0x894 ) volatile RX_EOM_0_t RX_EOM_0;
#define reg_RX_EOM_SETTING_EXT_LANE_12_9  RX_EOM_0.BF.RX_EOM_SETTING_EXT_LANE_12_9
#define reg_RX_EOM_AUTO_ZERO_CLK_EXT_LANE  RX_EOM_0.BF.RX_EOM_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_EOM_CMP_CTRL_EXT_LANE_1_0  RX_EOM_0.BF.RX_EOM_CMP_CTRL_EXT_LANE_1_0
#define reg_RX_EOM_COMN_EXT_EN_LANE  RX_EOM_0.BF.RX_EOM_COMN_EXT_EN_LANE

// 0x26	RX_EOM_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_SETTING_EXT_LANE_8_1              : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_1_t;
__xdata __at( 0x898 ) volatile RX_EOM_1_t RX_EOM_1;
#define reg_RX_EOM_SETTING_EXT_LANE_8_1  RX_EOM_1.BF.RX_EOM_SETTING_EXT_LANE_8_1

// 0x27	RX_EOM_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_TOP_DONE_LANE                     : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t RX_EOM_TOP_CONT_START_LANE               : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_EOM_TOP_START_LANE                    : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_EOM_UPDN_RD_LANE                      : 1;	/*      6       r 1'h0*/
		uint8_t RX_EOM_SETTING_EXT_LANE_0                : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_2_t;
__xdata __at( 0x89c ) volatile RX_EOM_2_t RX_EOM_2;
#define reg_RX_EOM_TOP_DONE_LANE  RX_EOM_2.BF.RX_EOM_TOP_DONE_LANE
#define reg_RX_EOM_TESTBUS_CORE_SEL_LANE_2_0  RX_EOM_2.BF.RX_EOM_TESTBUS_CORE_SEL_LANE_2_0
#define reg_RX_EOM_TOP_CONT_START_LANE  RX_EOM_2.BF.RX_EOM_TOP_CONT_START_LANE
#define reg_RX_EOM_TOP_START_LANE  RX_EOM_2.BF.RX_EOM_TOP_START_LANE
#define reg_RX_EOM_UPDN_RD_LANE  RX_EOM_2.BF.RX_EOM_UPDN_RD_LANE
#define reg_RX_EOM_SETTING_EXT_LANE_0  RX_EOM_2.BF.RX_EOM_SETTING_EXT_LANE_0

// 0x28	RX_EOM_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t RX_EOM_TOP_CONT_DONE_LANE                : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_3_t;
__xdata __at( 0x8a0 ) volatile RX_EOM_3_t RX_EOM_3;
#define reg_RX_EOM_TOP_CONT_DONE_LANE  RX_EOM_3.BF.RX_EOM_TOP_CONT_DONE_LANE

// 0x29	RX_EOM_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_EOM_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_EOM_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_0_t;
__xdata __at( 0x8a4 ) volatile RX_EOM_DCC_CAL_0_t RX_EOM_DCC_CAL_0;
#define reg_RX_EOM_DCC_CAL_DIR_INV_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_DIR_INV_LANE
#define reg_RX_EOM_DCC_CAL_CONT_NUM_LANE_3_0  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_DCC_CAL_CONT_EN_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_CONT_EN_LANE
#define reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_SINGLE_EN_LANE

// 0x2a	RX_EOM_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_EOM_DCC_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_1_t;
__xdata __at( 0x8a8 ) volatile RX_EOM_DCC_CAL_1_t RX_EOM_DCC_CAL_1;
#define reg_RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_DCC_CAL_1.BF.RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_DCC_CAL_1.BF.RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DCC_CAL_CMP_CTRL_LANE_1_0  RX_EOM_DCC_CAL_1.BF.RX_EOM_DCC_CAL_CMP_CTRL_LANE_1_0

// 0x2b	RX_EOM_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_EOM_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_EOM_DCC_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_2_t;
__xdata __at( 0x8ac ) volatile RX_EOM_DCC_CAL_2_t RX_EOM_DCC_CAL_2;
#define reg_RX_EOM_DCC_CAL_TIMEOUT_CHK_DIS_LANE  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_EOM_DCC_CAL_RESULT_AVG_EN_LANE  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_EOM_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_EOM_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_EOM_DCC_CAL_BIN_SEARCH_ENABLE_LANE  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_BIN_SEARCH_ENABLE_LANE

// 0x2c	RX_EOM_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_3_t;
__xdata __at( 0x8b0 ) volatile RX_EOM_DCC_CAL_3_t RX_EOM_DCC_CAL_3;
#define reg_RX_EOM_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x2d	RX_EOM_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_SETTING_LANE_12_11        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_EOM_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_EOM_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_4_t;
__xdata __at( 0x8b4 ) volatile RX_EOM_DCC_CAL_4_t RX_EOM_DCC_CAL_4;
#define reg_RX_EOM_DCC_CAL_SETTING_LANE_12_11  RX_EOM_DCC_CAL_4.BF.RX_EOM_DCC_CAL_SETTING_LANE_12_11
#define reg_RX_EOM_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_DCC_CAL_4.BF.RX_EOM_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EOM_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_EOM_DCC_CAL_4.BF.RX_EOM_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x2e	RX_EOM_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_SETTING_LANE_10_3         : 8;	/*  [7:0]     r/w 8'h89*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_5_t;
__xdata __at( 0x8b8 ) volatile RX_EOM_DCC_CAL_5_t RX_EOM_DCC_CAL_5;
#define reg_RX_EOM_DCC_CAL_SETTING_LANE_10_3  RX_EOM_DCC_CAL_5.BF.RX_EOM_DCC_CAL_SETTING_LANE_10_3

// 0x2f	RX_EOM_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_SETTING_LANE_2_0          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_6_t;
__xdata __at( 0x8bc ) volatile RX_EOM_DCC_CAL_6_t RX_EOM_DCC_CAL_6;
#define reg_RX_EOM_DCC_CAL_TIMEOUT_RD_LANE  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_DCC_CAL_CAL_DONE_RD_LANE  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EOM_DCC_CAL_CAL_EN_EXT_LANE  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_DCC_CAL_INDV_EXT_EN_LANE  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_DCC_CAL_SETTING_LANE_2_0  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_SETTING_LANE_2_0

// 0x30	RX_EOM_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_VAL_MAX_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_7_t;
__xdata __at( 0x8c0 ) volatile RX_EOM_DCC_CAL_7_t RX_EOM_DCC_CAL_7;
#define reg_RX_EOM_DCC_CAL_OVERFLOW_RD_LANE  RX_EOM_DCC_CAL_7.BF.RX_EOM_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_DCC_CAL_VAL_MAX_LANE_6_0  RX_EOM_DCC_CAL_7.BF.RX_EOM_DCC_CAL_VAL_MAX_LANE_6_0

// 0x31	RX_EOM_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_VAL_MIN_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_8_t;
__xdata __at( 0x8c4 ) volatile RX_EOM_DCC_CAL_8_t RX_EOM_DCC_CAL_8;
#define reg_RX_EOM_DCC_CAL_UNDERFLOW_RD_LANE  RX_EOM_DCC_CAL_8.BF.RX_EOM_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_DCC_CAL_VAL_MIN_LANE_6_0  RX_EOM_DCC_CAL_8.BF.RX_EOM_DCC_CAL_VAL_MIN_LANE_6_0

// 0x32	RX_EOM_DCC_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DCC_CAL_RESULT_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_9_t;
__xdata __at( 0x8c8 ) volatile RX_EOM_DCC_CAL_9_t RX_EOM_DCC_CAL_9;
#define reg_RX_EOM_DCC_CAL_RESULT_EXT_LANE_6_0  RX_EOM_DCC_CAL_9.BF.RX_EOM_DCC_CAL_RESULT_EXT_LANE_6_0

// 0x33	RX_EOM_DCC_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DCC_CAL_RESULT_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_10_t;
__xdata __at( 0x8cc ) volatile RX_EOM_DCC_CAL_10_t RX_EOM_DCC_CAL_10;
#define reg_RX_EOM_DCC_CAL_RESULT_RD_LANE_6_0  RX_EOM_DCC_CAL_10.BF.RX_EOM_DCC_CAL_RESULT_RD_LANE_6_0

// 0x34	RX_EOM_PI_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RX_EOM_PI_CAL_DIR_INV_LANE               : 1;	/*      3     r/w 1'h1*/
		uint8_t RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0          : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t RX_EOM_PI_CAL_BYPASS_EN_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_SINGLE_EN_LANE             : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_0_t;
__xdata __at( 0x8d0 ) volatile RX_EOM_PI_CAL_0_t RX_EOM_PI_CAL_0;
#define reg_RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_CAL_DIR_INV_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_DIR_INV_LANE
#define reg_RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0
#define reg_RX_EOM_PI_CAL_BYPASS_EN_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_PI_CAL_SINGLE_EN_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_SINGLE_EN_LANE

// 0x35	RX_EOM_PI_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MAX_LANE_10_7          : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RX_EOM_PI_CAL_RESULT_AVG_EN_LANE         : 1;	/*      4     r/w 1'h1*/
		uint8_t RX_EOM_PI_CAL_TOGGLE_TIMES_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_1_t;
__xdata __at( 0x8d4 ) volatile RX_EOM_PI_CAL_1_t RX_EOM_PI_CAL_1;
#define reg_RX_EOM_PI_CAL_VAL_MAX_LANE_10_7  RX_EOM_PI_CAL_1.BF.RX_EOM_PI_CAL_VAL_MAX_LANE_10_7
#define reg_RX_EOM_PI_CAL_RESULT_AVG_EN_LANE  RX_EOM_PI_CAL_1.BF.RX_EOM_PI_CAL_RESULT_AVG_EN_LANE
#define reg_RX_EOM_PI_CAL_TOGGLE_TIMES_LANE_2_0  RX_EOM_PI_CAL_1.BF.RX_EOM_PI_CAL_TOGGLE_TIMES_LANE_2_0

// 0x36	RX_EOM_PI_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_10            : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_VAL_MAX_LANE_6_0           : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_2_t;
__xdata __at( 0x8d8 ) volatile RX_EOM_PI_CAL_2_t RX_EOM_PI_CAL_2;
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_10  RX_EOM_PI_CAL_2.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_10
#define reg_RX_EOM_PI_CAL_VAL_MAX_LANE_6_0  RX_EOM_PI_CAL_2.BF.RX_EOM_PI_CAL_VAL_MAX_LANE_6_0

// 0x37	RX_EOM_PI_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_9_2           : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_3_t;
__xdata __at( 0x8dc ) volatile RX_EOM_PI_CAL_3_t RX_EOM_PI_CAL_3;
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_9_2  RX_EOM_PI_CAL_3.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_9_2

// 0x38	RX_EOM_PI_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SETTING_LANE_12_7          : 6;	/*  [5:0]     r/w 6'h9*/
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_1_0           : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_4_t;
__xdata __at( 0x8e0 ) volatile RX_EOM_PI_CAL_4_t RX_EOM_PI_CAL_4;
#define reg_RX_EOM_PI_CAL_SETTING_LANE_12_7  RX_EOM_PI_CAL_4.BF.RX_EOM_PI_CAL_SETTING_LANE_12_7
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_1_0  RX_EOM_PI_CAL_4.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_1_0

// 0x39	RX_EOM_PI_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_INDV_EXT_EN_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_SETTING_LANE_6_0           : 7;	/*  [7:1]     r/w 7'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_5_t;
__xdata __at( 0x8e4 ) volatile RX_EOM_PI_CAL_5_t RX_EOM_PI_CAL_5;
#define reg_RX_EOM_PI_CAL_INDV_EXT_EN_LANE  RX_EOM_PI_CAL_5.BF.RX_EOM_PI_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_PI_CAL_SETTING_LANE_6_0  RX_EOM_PI_CAL_5.BF.RX_EOM_PI_CAL_SETTING_LANE_6_0

// 0x3a	RX_EOM_PI_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_RESULT_EXT_LANE_10_5       : 6;	/*  [5:0]     r/w 6'h20*/
		uint8_t RX_EOM_PI_CAL_DUMMY_CLK_EXT_LANE         : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_CAL_EN_EXT_LANE            : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_6_t;
__xdata __at( 0x8e8 ) volatile RX_EOM_PI_CAL_6_t RX_EOM_PI_CAL_6;
#define reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_5  RX_EOM_PI_CAL_6.BF.RX_EOM_PI_CAL_RESULT_EXT_LANE_10_5
#define reg_RX_EOM_PI_CAL_DUMMY_CLK_EXT_LANE  RX_EOM_PI_CAL_6.BF.RX_EOM_PI_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EOM_PI_CAL_CAL_EN_EXT_LANE  RX_EOM_PI_CAL_6.BF.RX_EOM_PI_CAL_CAL_EN_EXT_LANE

// 0x3b	RX_EOM_PI_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_OVERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_TIMEOUT_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_CAL_DONE_RD_LANE           : 1;	/*      2       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_RESULT_EXT_LANE_4_0        : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_7_t;
__xdata __at( 0x8ec ) volatile RX_EOM_PI_CAL_7_t RX_EOM_PI_CAL_7;
#define reg_RX_EOM_PI_CAL_OVERFLOW_RD_LANE  RX_EOM_PI_CAL_7.BF.RX_EOM_PI_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE  RX_EOM_PI_CAL_7.BF.RX_EOM_PI_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_PI_CAL_CAL_DONE_RD_LANE  RX_EOM_PI_CAL_7.BF.RX_EOM_PI_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_4_0  RX_EOM_PI_CAL_7.BF.RX_EOM_PI_CAL_RESULT_EXT_LANE_4_0

// 0x3c	RX_EOM_PI_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_RESULT_RD_LANE_10_4        : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RX_EOM_PI_CAL_UNDERFLOW_RD_LANE          : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_8_t;
__xdata __at( 0x8f0 ) volatile RX_EOM_PI_CAL_8_t RX_EOM_PI_CAL_8;
#define reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_4  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_RESULT_RD_LANE_10_4
#define reg_RX_EOM_PI_CAL_UNDERFLOW_RD_LANE  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_UNDERFLOW_RD_LANE

// 0x3d	RX_EOM_PI_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_RESULT_RD_LANE_3_0         : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_9_t;
__xdata __at( 0x8f4 ) volatile RX_EOM_PI_CAL_9_t RX_EOM_PI_CAL_9;
#define reg_RX_EOM_PI_CAL_RESULT_RD_LANE_3_0  RX_EOM_PI_CAL_9.BF.RX_EOM_PI_CAL_RESULT_RD_LANE_3_0

// 0x3e	RX_EOM_ALIGN90_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_DIR_INV_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_CONT_NUM_LANE_3_0     : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_CONT_EN_LANE          : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_EOM_ALIGN90_CAL_SINGLE_EN_LANE        : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_0_t;
__xdata __at( 0x8f8 ) volatile RX_EOM_ALIGN90_CAL_0_t RX_EOM_ALIGN90_CAL_0;
#define reg_RX_EOM_ALIGN90_CAL_DIR_INV_LANE  RX_EOM_ALIGN90_CAL_0.BF.RX_EOM_ALIGN90_CAL_DIR_INV_LANE
#define reg_RX_EOM_ALIGN90_CAL_CONT_NUM_LANE_3_0  RX_EOM_ALIGN90_CAL_0.BF.RX_EOM_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE  RX_EOM_ALIGN90_CAL_0.BF.RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_ALIGN90_CAL_CONT_EN_LANE  RX_EOM_ALIGN90_CAL_0.BF.RX_EOM_ALIGN90_CAL_CONT_EN_LANE
#define reg_RX_EOM_ALIGN90_CAL_SINGLE_EN_LANE  RX_EOM_ALIGN90_CAL_0.BF.RX_EOM_ALIGN90_CAL_SINGLE_EN_LANE

// 0x3f	RX_EOM_ALIGN90_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_EOM_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_CMP_CTRL_LANE_1_0     : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_1_t;
__xdata __at( 0x8fc ) volatile RX_EOM_ALIGN90_CAL_1_t RX_EOM_ALIGN90_CAL_1;
#define reg_RX_EOM_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_ALIGN90_CAL_1.BF.RX_EOM_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_ALIGN90_CAL_1.BF.RX_EOM_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_ALIGN90_CAL_CMP_CTRL_LANE_1_0  RX_EOM_ALIGN90_CAL_1.BF.RX_EOM_ALIGN90_CAL_CMP_CTRL_LANE_1_0

// 0x40	RX_EOM_ALIGN90_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_SETTING_LANE_12       : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  : 3;	/*  [3:1]     r/w 3'h7*/
		uint8_t RX_EOM_ALIGN90_CAL_RESULT_AVG_EN_LANE    : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_2_t;
__xdata __at( 0x900 ) volatile RX_EOM_ALIGN90_CAL_2_t RX_EOM_ALIGN90_CAL_2;
#define reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_12  RX_EOM_ALIGN90_CAL_2.BF.RX_EOM_ALIGN90_CAL_SETTING_LANE_12
#define reg_RX_EOM_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  RX_EOM_ALIGN90_CAL_2.BF.RX_EOM_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_EOM_ALIGN90_CAL_RESULT_AVG_EN_LANE  RX_EOM_ALIGN90_CAL_2.BF.RX_EOM_ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_RX_EOM_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  RX_EOM_ALIGN90_CAL_2.BF.RX_EOM_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0

// 0x41	RX_EOM_ALIGN90_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_SETTING_LANE_11_4     : 8;	/*  [7:0]     r/w 8'h49*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_3_t;
__xdata __at( 0x904 ) volatile RX_EOM_ALIGN90_CAL_3_t RX_EOM_ALIGN90_CAL_3;
#define reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_11_4  RX_EOM_ALIGN90_CAL_3.BF.RX_EOM_ALIGN90_CAL_SETTING_LANE_11_4

// 0x42	RX_EOM_ALIGN90_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_CAL_DONE_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_DUMMY_CLK_EXT_LANE    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_CAL_EN_EXT_LANE       : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_INDV_EXT_EN_LANE      : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_SETTING_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_4_t;
__xdata __at( 0x908 ) volatile RX_EOM_ALIGN90_CAL_4_t RX_EOM_ALIGN90_CAL_4;
#define reg_RX_EOM_ALIGN90_CAL_CAL_DONE_RD_LANE  RX_EOM_ALIGN90_CAL_4.BF.RX_EOM_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  RX_EOM_ALIGN90_CAL_4.BF.RX_EOM_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EOM_ALIGN90_CAL_CAL_EN_EXT_LANE  RX_EOM_ALIGN90_CAL_4.BF.RX_EOM_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_ALIGN90_CAL_INDV_EXT_EN_LANE  RX_EOM_ALIGN90_CAL_4.BF.RX_EOM_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_3_0  RX_EOM_ALIGN90_CAL_4.BF.RX_EOM_ALIGN90_CAL_SETTING_LANE_3_0

// 0x43	RX_EOM_ALIGN90_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_OVERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_TIMEOUT_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_EOM_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_5_t;
__xdata __at( 0x90c ) volatile RX_EOM_ALIGN90_CAL_5_t RX_EOM_ALIGN90_CAL_5;
#define reg_RX_EOM_ALIGN90_CAL_OVERFLOW_RD_LANE  RX_EOM_ALIGN90_CAL_5.BF.RX_EOM_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_ALIGN90_CAL_TIMEOUT_RD_LANE  RX_EOM_ALIGN90_CAL_5.BF.RX_EOM_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_EOM_ALIGN90_CAL_5.BF.RX_EOM_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_EOM_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  RX_EOM_ALIGN90_CAL_5.BF.RX_EOM_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0

// 0x44	RX_EOM_ALIGN90_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_UNDERFLOW_RD_LANE     : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_6_t;
__xdata __at( 0x910 ) volatile RX_EOM_ALIGN90_CAL_6_t RX_EOM_ALIGN90_CAL_6;
#define reg_RX_EOM_ALIGN90_CAL_UNDERFLOW_RD_LANE  RX_EOM_ALIGN90_CAL_6.BF.RX_EOM_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  RX_EOM_ALIGN90_CAL_6.BF.RX_EOM_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0x45	RX_EOM_ALIGN90_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_EOM_ALIGN90_CAL_DUMMY_CLK_RD_LANE     : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_7_t;
__xdata __at( 0x914 ) volatile RX_EOM_ALIGN90_CAL_7_t RX_EOM_ALIGN90_CAL_7;
#define reg_RX_EOM_ALIGN90_CAL_DUMMY_CLK_RD_LANE  RX_EOM_ALIGN90_CAL_7.BF.RX_EOM_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_EOM_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  RX_EOM_ALIGN90_CAL_7.BF.RX_EOM_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0x46	RX_EOM_ALIGN90_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0 : 7;	/*  [7:1]     r/w 7'h5e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_8_t;
__xdata __at( 0x918 ) volatile RX_EOM_ALIGN90_CAL_8_t RX_EOM_ALIGN90_CAL_8;
#define reg_RX_EOM_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  RX_EOM_ALIGN90_CAL_8.BF.RX_EOM_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x47	RX_EOM_ALIGN90_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0 : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_9_t;
__xdata __at( 0x91c ) volatile RX_EOM_ALIGN90_CAL_9_t RX_EOM_ALIGN90_CAL_9;
#define reg_RX_EOM_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  RX_EOM_ALIGN90_CAL_9.BF.RX_EOM_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0

// 0x48	RX_EOM_ALIGN90_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0 : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_ALIGN90_CAL_10_t;
__xdata __at( 0x920 ) volatile RX_EOM_ALIGN90_CAL_10_t RX_EOM_ALIGN90_CAL_10;
#define reg_RX_EOM_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  RX_EOM_ALIGN90_CAL_10.BF.RX_EOM_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0x49	PLL_DCC_0		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_TOP_CONT_DONE_LANE               : 1;	/*      0       r 1'h0*/
		uint8_t PLL_DCC_TOP_DONE_LANE                    : 1;	/*      1       r 1'h0*/
		uint8_t PLL_DCC_TOP_CONT_START_LANE              : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_DCC_TOP_START_LANE                   : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_DCC_UPDN_RD_LANE                     : 1;	/*      4       r 1'h0*/
		uint8_t PLL_DCC_AUTO_ZERO_CLK_EXT_LANE           : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_DCC_CMP_CTRL_EXT_LANE                : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_DCC_COMN_EXT_EN_LANE                 : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_0_t;
__xdata __at( 0x924 ) volatile PLL_DCC_0_t PLL_DCC_0;
#define reg_PLL_DCC_TOP_CONT_DONE_LANE  PLL_DCC_0.BF.PLL_DCC_TOP_CONT_DONE_LANE
#define reg_PLL_DCC_TOP_DONE_LANE  PLL_DCC_0.BF.PLL_DCC_TOP_DONE_LANE
#define reg_PLL_DCC_TOP_CONT_START_LANE  PLL_DCC_0.BF.PLL_DCC_TOP_CONT_START_LANE
#define reg_PLL_DCC_TOP_START_LANE  PLL_DCC_0.BF.PLL_DCC_TOP_START_LANE
#define reg_PLL_DCC_UPDN_RD_LANE  PLL_DCC_0.BF.PLL_DCC_UPDN_RD_LANE
#define reg_PLL_DCC_AUTO_ZERO_CLK_EXT_LANE  PLL_DCC_0.BF.PLL_DCC_AUTO_ZERO_CLK_EXT_LANE
#define reg_PLL_DCC_CMP_CTRL_EXT_LANE  PLL_DCC_0.BF.PLL_DCC_CMP_CTRL_EXT_LANE
#define reg_PLL_DCC_COMN_EXT_EN_LANE  PLL_DCC_0.BF.PLL_DCC_COMN_EXT_EN_LANE

// 0x4a	PLL_DCC_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t PLL_DCC_TESTBUS_CORE_SEL_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_1_t;
__xdata __at( 0x928 ) volatile PLL_DCC_1_t PLL_DCC_1;
#define reg_PLL_DCC_TESTBUS_CORE_SEL_LANE_2_0  PLL_DCC_1.BF.PLL_DCC_TESTBUS_CORE_SEL_LANE_2_0

// 0x4b	PLL_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_DCC_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_DCC_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_0_t;
__xdata __at( 0x92c ) volatile PLL_DCC_CAL_0_t PLL_DCC_CAL_0;
#define reg_PLL_DCC_CAL_DIR_INV_LANE  PLL_DCC_CAL_0.BF.PLL_DCC_CAL_DIR_INV_LANE
#define reg_PLL_DCC_CAL_CONT_NUM_LANE_3_0  PLL_DCC_CAL_0.BF.PLL_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_DCC_CAL_BYPASS_EN_LANE  PLL_DCC_CAL_0.BF.PLL_DCC_CAL_BYPASS_EN_LANE
#define reg_PLL_DCC_CAL_CONT_EN_LANE  PLL_DCC_CAL_0.BF.PLL_DCC_CAL_CONT_EN_LANE
#define reg_PLL_DCC_CAL_SINGLE_EN_LANE  PLL_DCC_CAL_0.BF.PLL_DCC_CAL_SINGLE_EN_LANE

// 0x4c	PLL_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t PLL_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_1_t;
__xdata __at( 0x930 ) volatile PLL_DCC_CAL_1_t PLL_DCC_CAL_1;
#define reg_PLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_DCC_CAL_1.BF.PLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_DCC_CAL_1.BF.PLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_DCC_CAL_1.BF.PLL_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x4d	PLL_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t PLL_DCC_CAL_RESULT_AVG_EN_LANE           : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_2_t;
__xdata __at( 0x934 ) volatile PLL_DCC_CAL_2_t PLL_DCC_CAL_2;
#define reg_PLL_DCC_CAL_TIMEOUT_CHK_DIS_LANE  PLL_DCC_CAL_2.BF.PLL_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  PLL_DCC_CAL_2.BF.PLL_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_PLL_DCC_CAL_RESULT_AVG_EN_LANE  PLL_DCC_CAL_2.BF.PLL_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0  PLL_DCC_CAL_2.BF.PLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0

// 0x4e	PLL_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_3_t;
__xdata __at( 0x938 ) volatile PLL_DCC_CAL_3_t PLL_DCC_CAL_3;
#define reg_PLL_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_DCC_CAL_3.BF.PLL_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x4f	PLL_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_RESULT_LSB_EXT_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_RESULT_MSB_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_DCC_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_4_t;
__xdata __at( 0x93c ) volatile PLL_DCC_CAL_4_t PLL_DCC_CAL_4;
#define reg_PLL_DCC_CAL_RESULT_LSB_EXT_LANE  PLL_DCC_CAL_4.BF.PLL_DCC_CAL_RESULT_LSB_EXT_LANE
#define reg_PLL_DCC_CAL_RESULT_MSB_EXT_LANE  PLL_DCC_CAL_4.BF.PLL_DCC_CAL_RESULT_MSB_EXT_LANE
#define reg_PLL_DCC_CAL_DUMMY_CLK_EXT_LANE  PLL_DCC_CAL_4.BF.PLL_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_DCC_CAL_CAL_EN_EXT_LANE  PLL_DCC_CAL_4.BF.PLL_DCC_CAL_CAL_EN_EXT_LANE
#define reg_PLL_DCC_CAL_INDV_EXT_EN_LANE  PLL_DCC_CAL_4.BF.PLL_DCC_CAL_INDV_EXT_EN_LANE
#define reg_PLL_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_DCC_CAL_4.BF.PLL_DCC_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x50	PLL_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t PLL_DCC_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t PLL_DCC_CAL_VAL_MAX_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_5_t;
__xdata __at( 0x940 ) volatile PLL_DCC_CAL_5_t PLL_DCC_CAL_5;
#define reg_PLL_DCC_CAL_TIMEOUT_RD_LANE  PLL_DCC_CAL_5.BF.PLL_DCC_CAL_TIMEOUT_RD_LANE
#define reg_PLL_DCC_CAL_CAL_DONE_RD_LANE  PLL_DCC_CAL_5.BF.PLL_DCC_CAL_CAL_DONE_RD_LANE
#define reg_PLL_DCC_CAL_VAL_MAX_LANE_5_0  PLL_DCC_CAL_5.BF.PLL_DCC_CAL_VAL_MAX_LANE_5_0

// 0x51	PLL_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t PLL_DCC_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t PLL_DCC_CAL_OVERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t PLL_DCC_CAL_VAL_MIN_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_6_t;
__xdata __at( 0x944 ) volatile PLL_DCC_CAL_6_t PLL_DCC_CAL_6;
#define reg_PLL_DCC_CAL_UNDERFLOW_RD_LANE  PLL_DCC_CAL_6.BF.PLL_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_DCC_CAL_OVERFLOW_RD_LANE  PLL_DCC_CAL_6.BF.PLL_DCC_CAL_OVERFLOW_RD_LANE
#define reg_PLL_DCC_CAL_VAL_MIN_LANE_5_0  PLL_DCC_CAL_6.BF.PLL_DCC_CAL_VAL_MIN_LANE_5_0

// 0x52	PLL_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_DCC_CAL_RESULT_EXT_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_7_t;
__xdata __at( 0x948 ) volatile PLL_DCC_CAL_7_t PLL_DCC_CAL_7;
#define reg_PLL_DCC_CAL_RESULT_EXT_LANE_5_0  PLL_DCC_CAL_7.BF.PLL_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x53	PLL_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_DCC_CAL_RESULT_RD_LANE_5_0           : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_CAL_8_t;
__xdata __at( 0x94c ) volatile PLL_DCC_CAL_8_t PLL_DCC_CAL_8;
#define reg_PLL_DCC_CAL_RESULT_RD_LANE_5_0  PLL_DCC_CAL_8.BF.PLL_DCC_CAL_RESULT_RD_LANE_5_0

#endif
