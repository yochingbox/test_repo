#ifndef PHY_REG_C_ANA_RX_CAL_TOP_LANE_H
#define PHY_REG_C_ANA_RX_CAL_TOP_LANE_H



// 0x0	RX_SQ_0		TBD
typedef union {
	struct {
		uint8_t RX_SQ_TOP_DONE_LANE                      : 1;	/*      0       r 1'h0*/
		uint8_t RX_SQ_TESTBUS_CORE_SEL_LANE_2_0          : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t RX_SQ_TOP_START_LANE                     : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_SQ_UPDN_RD_LANE                       : 1;	/*      5       r 1'h0*/
		uint8_t RX_SQ_CMP_CTRL_EXT_LANE                  : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_SQ_COMN_EXT_EN_LANE                   : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SQ_0_t;
__xdata __at( 0x1800 ) volatile RX_SQ_0_t RX_SQ_0;
#define reg_RX_SQ_TOP_DONE_LANE  RX_SQ_0.BF.RX_SQ_TOP_DONE_LANE
#define reg_RX_SQ_TESTBUS_CORE_SEL_LANE_2_0  RX_SQ_0.BF.RX_SQ_TESTBUS_CORE_SEL_LANE_2_0
#define reg_RX_SQ_TOP_START_LANE  RX_SQ_0.BF.RX_SQ_TOP_START_LANE
#define reg_RX_SQ_UPDN_RD_LANE  RX_SQ_0.BF.RX_SQ_UPDN_RD_LANE
#define reg_RX_SQ_CMP_CTRL_EXT_LANE  RX_SQ_0.BF.RX_SQ_CMP_CTRL_EXT_LANE
#define reg_RX_SQ_COMN_EXT_EN_LANE  RX_SQ_0.BF.RX_SQ_COMN_EXT_EN_LANE

// 0x1	SQ_CAL_0		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_RESULT_AVG_EN_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t SQ_CAL_BIN_SEARCH_ENABLE_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t SQ_CAL_DIR_INV_LANE                      : 1;	/*      5     r/w 1'h0*/
		uint8_t SQ_CAL_BYPASS_EN_LANE                    : 1;	/*      6     r/w 1'h0*/
		uint8_t SQ_CAL_SINGLE_EN_LANE                    : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_0_t;
__xdata __at( 0x1804 ) volatile SQ_CAL_0_t SQ_CAL_0;
#define reg_SQ_CAL_RESULT_AVG_EN_LANE  SQ_CAL_0.BF.SQ_CAL_RESULT_AVG_EN_LANE
#define reg_SQ_CAL_BIN_SEARCH_ENABLE_LANE  SQ_CAL_0.BF.SQ_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SQ_CAL_0.BF.SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SQ_CAL_DIR_INV_LANE  SQ_CAL_0.BF.SQ_CAL_DIR_INV_LANE
#define reg_SQ_CAL_BYPASS_EN_LANE  SQ_CAL_0.BF.SQ_CAL_BYPASS_EN_LANE
#define reg_SQ_CAL_SINGLE_EN_LANE  SQ_CAL_0.BF.SQ_CAL_SINGLE_EN_LANE

// 0x2	SQ_CAL_1		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_TIMEOUT_STEPS_LANE_2_0            : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t SQ_CAL_TOGGLE_TIMES_LANE_2_0             : 3;	/*  [5:3]     r/w 3'h2*/
		uint8_t SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0      : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_1_t;
__xdata __at( 0x1808 ) volatile SQ_CAL_1_t SQ_CAL_1;
#define reg_SQ_CAL_TIMEOUT_STEPS_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SQ_CAL_TOGGLE_TIMES_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  SQ_CAL_1.BF.SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x3	SQ_CAL_2		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_2_t;
__xdata __at( 0x180c ) volatile SQ_CAL_2_t SQ_CAL_2;
#define reg_SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SQ_CAL_2.BF.SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x4	SQ_CAL_3		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_INDV_EXT_EN_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MAX_LANE_5_0                  : 6;	/*  [6:1]     r/w 6'h1f*/
		uint8_t SQ_CAL_TIMEOUT_CHK_DIS_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_3_t;
__xdata __at( 0x1810 ) volatile SQ_CAL_3_t SQ_CAL_3;
#define reg_SQ_CAL_INDV_EXT_EN_LANE  SQ_CAL_3.BF.SQ_CAL_INDV_EXT_EN_LANE
#define reg_SQ_CAL_VAL_MAX_LANE_5_0  SQ_CAL_3.BF.SQ_CAL_VAL_MAX_LANE_5_0
#define reg_SQ_CAL_TIMEOUT_CHK_DIS_LANE  SQ_CAL_3.BF.SQ_CAL_TIMEOUT_CHK_DIS_LANE

// 0x5	SQ_CAL_4		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_CAL_DONE_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_CAL_EN_EXT_LANE                   : 1;	/*      1     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MIN_LANE_5_0                  : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_4_t;
__xdata __at( 0x1814 ) volatile SQ_CAL_4_t SQ_CAL_4;
#define reg_SQ_CAL_CAL_DONE_RD_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_DONE_RD_LANE
#define reg_SQ_CAL_CAL_EN_EXT_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_EN_EXT_LANE
#define reg_SQ_CAL_VAL_MIN_LANE_5_0  SQ_CAL_4.BF.SQ_CAL_VAL_MIN_LANE_5_0

// 0x6	SQ_CAL_5		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_OVERFLOW_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_TIMEOUT_RD_LANE                   : 1;	/*      1       r 1'h0*/
		uint8_t SQ_CAL_RESULT_EXT_LANE_5_0               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_5_t;
__xdata __at( 0x1818 ) volatile SQ_CAL_5_t SQ_CAL_5;
#define reg_SQ_CAL_OVERFLOW_RD_LANE  SQ_CAL_5.BF.SQ_CAL_OVERFLOW_RD_LANE
#define reg_SQ_CAL_TIMEOUT_RD_LANE  SQ_CAL_5.BF.SQ_CAL_TIMEOUT_RD_LANE
#define reg_SQ_CAL_RESULT_EXT_LANE_5_0  SQ_CAL_5.BF.SQ_CAL_RESULT_EXT_LANE_5_0

// 0x7	SQ_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_CAL_RESULT_RD_LANE_5_0                : 6;	/*  [6:1]       r 6'h0*/
		uint8_t SQ_CAL_UNDERFLOW_RD_LANE                 : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_6_t;
__xdata __at( 0x181c ) volatile SQ_CAL_6_t SQ_CAL_6;
#define reg_SQ_CAL_RESULT_RD_LANE_5_0  SQ_CAL_6.BF.SQ_CAL_RESULT_RD_LANE_5_0
#define reg_SQ_CAL_UNDERFLOW_RD_LANE  SQ_CAL_6.BF.SQ_CAL_UNDERFLOW_RD_LANE

#endif
