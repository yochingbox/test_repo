#ifndef PHY_REG_C_ANA_TRX_CAL_TOP_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_TOP_LANE_H



// 0x0	TX_ALIGN90_DCC_0		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_DCC_TOP_DONE_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_TOP_CONT_START_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_TOP_START_LANE            : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_UPDN_RD_LANE              : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_AUTO_ZERO_CLK_EXT_LANE    : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_CMP_CTRL_EXT_LANE_1_0     : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t TX_ALIGN90_DCC_COMN_EXT_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_DCC_0_t;
__xdata __at( 0x400 ) volatile TX_ALIGN90_DCC_0_t TX_ALIGN90_DCC_0;
#define reg_TX_ALIGN90_DCC_TOP_DONE_LANE  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_TOP_DONE_LANE
#define reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_TOP_CONT_START_LANE
#define reg_TX_ALIGN90_DCC_TOP_START_LANE  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_TOP_START_LANE
#define reg_TX_ALIGN90_DCC_UPDN_RD_LANE  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_UPDN_RD_LANE
#define reg_TX_ALIGN90_DCC_AUTO_ZERO_CLK_EXT_LANE  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_AUTO_ZERO_CLK_EXT_LANE
#define reg_TX_ALIGN90_DCC_CMP_CTRL_EXT_LANE_1_0  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_CMP_CTRL_EXT_LANE_1_0
#define reg_TX_ALIGN90_DCC_COMN_EXT_EN_LANE  TX_ALIGN90_DCC_0.BF.TX_ALIGN90_DCC_COMN_EXT_EN_LANE

// 0x1	TX_ALIGN90_DCC_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t TX_ALIGN90_DCC_TOP_CONT_DONE_LANE        : 1;	/*      4       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_TESTBUS_CORE_SEL_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_DCC_1_t;
__xdata __at( 0x404 ) volatile TX_ALIGN90_DCC_1_t TX_ALIGN90_DCC_1;
#define reg_TX_ALIGN90_DCC_TOP_CONT_DONE_LANE  TX_ALIGN90_DCC_1.BF.TX_ALIGN90_DCC_TOP_CONT_DONE_LANE
#define reg_TX_ALIGN90_DCC_TESTBUS_CORE_SEL_LANE_2_0  TX_ALIGN90_DCC_1.BF.TX_ALIGN90_DCC_TESTBUS_CORE_SEL_LANE_2_0

// 0x2	TX_ALIGN90_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t TX_ALIGN90_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_ALIGN90_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_0_t;
__xdata __at( 0x408 ) volatile TX_ALIGN90_CAL_0_t TX_ALIGN90_CAL_0;
#define reg_TX_ALIGN90_CAL_DIR_INV_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_DIR_INV_LANE
#define reg_TX_ALIGN90_CAL_CONT_NUM_LANE_3_0  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_TX_ALIGN90_CAL_BYPASS_EN_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_TX_ALIGN90_CAL_CONT_EN_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_CONT_EN_LANE
#define reg_TX_ALIGN90_CAL_SINGLE_EN_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_SINGLE_EN_LANE

// 0x3	TX_ALIGN90_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t TX_ALIGN90_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_1_t;
__xdata __at( 0x40c ) volatile TX_ALIGN90_CAL_1_t TX_ALIGN90_CAL_1;
#define reg_TX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_ALIGN90_CAL_CMP_CTRL_LANE_1_0  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_CMP_CTRL_LANE_1_0

// 0x4	TX_ALIGN90_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_2_t;
__xdata __at( 0x410 ) volatile TX_ALIGN90_CAL_2_t TX_ALIGN90_CAL_2;
#define reg_TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_ALIGN90_CAL_RESULT_AVG_EN_LANE  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE

// 0x5	TX_ALIGN90_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_3_t;
__xdata __at( 0x414 ) volatile TX_ALIGN90_CAL_3_t TX_ALIGN90_CAL_3;
#define reg_TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_ALIGN90_CAL_3.BF.TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x6	TX_ALIGN90_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_4_t;
__xdata __at( 0x418 ) volatile TX_ALIGN90_CAL_4_t TX_ALIGN90_CAL_4;
#define reg_TX_ALIGN90_CAL_CAL_EN_EXT_LANE  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_TX_ALIGN90_CAL_INDV_EXT_EN_LANE  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x7	TX_ALIGN90_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_5_t;
__xdata __at( 0x41c ) volatile TX_ALIGN90_CAL_5_t TX_ALIGN90_CAL_5;
#define reg_TX_ALIGN90_CAL_CAL_DONE_RD_LANE  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x8	TX_ALIGN90_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_6_t;
__xdata __at( 0x420 ) volatile TX_ALIGN90_CAL_6_t TX_ALIGN90_CAL_6;
#define reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE  TX_ALIGN90_CAL_6.BF.TX_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  TX_ALIGN90_CAL_6.BF.TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0x9	TX_ALIGN90_CAL_7		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_7_t;
__xdata __at( 0x424 ) volatile TX_ALIGN90_CAL_7_t TX_ALIGN90_CAL_7;
#define reg_TX_ALIGN90_CAL_OVERFLOW_RD_LANE  TX_ALIGN90_CAL_7.BF.TX_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  TX_ALIGN90_CAL_7.BF.TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0xa	TX_ALIGN90_CAL_8		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [2:0]       r 3'h0*/
		uint8_t TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      4       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_8_t;
__xdata __at( 0x428 ) volatile TX_ALIGN90_CAL_8_t TX_ALIGN90_CAL_8;
#define reg_TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_ALIGN90_CAL_UNDERFLOW_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0xb	TX_ALIGN90_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h50*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_9_t;
__xdata __at( 0x42c ) volatile TX_ALIGN90_CAL_9_t TX_ALIGN90_CAL_9;
#define reg_TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  TX_ALIGN90_CAL_9.BF.TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0xc	TX_ALIGN90_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_10_t;
__xdata __at( 0x430 ) volatile TX_ALIGN90_CAL_10_t TX_ALIGN90_CAL_10;
#define reg_TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  TX_ALIGN90_CAL_10.BF.TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0xd	TX_DCC1_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t TX_DCC1_CAL_DIR_INV_LANE                 : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_CMP_CTRL_LANE_1_0            : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TX_DCC1_CAL_BYPASS_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_0_t;
__xdata __at( 0x434 ) volatile TX_DCC1_CAL_0_t TX_DCC1_CAL_0;
#define reg_TX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC1_CAL_DIR_INV_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_DIR_INV_LANE
#define reg_TX_DCC1_CAL_CMP_CTRL_LANE_1_0  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_CMP_CTRL_LANE_1_0
#define reg_TX_DCC1_CAL_BYPASS_EN_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_BYPASS_EN_LANE
#define reg_TX_DCC1_CAL_SINGLE_EN_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_SINGLE_EN_LANE

// 0xe	TX_DCC1_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_RESULT_AVG_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t TX_DCC1_CAL_BIN_SEARCH_ENABLE_LANE       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_1_t;
__xdata __at( 0x438 ) volatile TX_DCC1_CAL_1_t TX_DCC1_CAL_1;
#define reg_TX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC1_CAL_RESULT_AVG_EN_LANE  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_DCC1_CAL_BIN_SEARCH_ENABLE_LANE  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_BIN_SEARCH_ENABLE_LANE

// 0xf	TX_DCC1_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC1_CAL_TIMEOUT_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC1_CAL_CAL_DONE_RD_LANE             : 1;	/*      2       r 1'h0*/
		uint8_t TX_DCC1_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_2_t;
__xdata __at( 0x43c ) volatile TX_DCC1_CAL_2_t TX_DCC1_CAL_2;
#define reg_TX_DCC1_CAL_OVERFLOW_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC1_CAL_TIMEOUT_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC1_CAL_CAL_DONE_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC1_CAL_CAL_EN_EXT_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC1_CAL_INDV_EXT_EN_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x10	TX_DCC1_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC1_CAL_UNDERFLOW_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC1_CAL_VAL_MAX_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_3_t;
__xdata __at( 0x440 ) volatile TX_DCC1_CAL_3_t TX_DCC1_CAL_3;
#define reg_TX_DCC1_CAL_UNDERFLOW_RD_LANE  TX_DCC1_CAL_3.BF.TX_DCC1_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC1_CAL_VAL_MAX_LANE_5_0  TX_DCC1_CAL_3.BF.TX_DCC1_CAL_VAL_MAX_LANE_5_0

// 0x11	TX_DCC1_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC1_CAL_VAL_MIN_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_4_t;
__xdata __at( 0x444 ) volatile TX_DCC1_CAL_4_t TX_DCC1_CAL_4;
#define reg_TX_DCC1_CAL_VAL_MIN_LANE_5_0  TX_DCC1_CAL_4.BF.TX_DCC1_CAL_VAL_MIN_LANE_5_0

// 0x12	TX_DCC1_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC1_CAL_RESULT_EXT_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_5_t;
__xdata __at( 0x448 ) volatile TX_DCC1_CAL_5_t TX_DCC1_CAL_5;
#define reg_TX_DCC1_CAL_RESULT_EXT_LANE_5_0  TX_DCC1_CAL_5.BF.TX_DCC1_CAL_RESULT_EXT_LANE_5_0

// 0x13	TX_DCC1_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC1_CAL_RESULT_RD_LANE_5_0           : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_6_t;
__xdata __at( 0x44c ) volatile TX_DCC1_CAL_6_t TX_DCC1_CAL_6;
#define reg_TX_DCC1_CAL_RESULT_RD_LANE_5_0  TX_DCC1_CAL_6.BF.TX_DCC1_CAL_RESULT_RD_LANE_5_0

// 0x14	TX_DCC2_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_DCC2_CAL_DIR_INV_LANE                 : 1;	/*      3     r/w 1'h1*/
		uint8_t TX_DCC2_CAL_CMP_CTRL_LANE_1_0            : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TX_DCC2_CAL_BYPASS_EN_LANE               : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_DCC2_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_0_t;
__xdata __at( 0x450 ) volatile TX_DCC2_CAL_0_t TX_DCC2_CAL_0;
#define reg_TX_DCC2_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC2_CAL_DIR_INV_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_DIR_INV_LANE
#define reg_TX_DCC2_CAL_CMP_CTRL_LANE_1_0  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_CMP_CTRL_LANE_1_0
#define reg_TX_DCC2_CAL_BYPASS_EN_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_BYPASS_EN_LANE
#define reg_TX_DCC2_CAL_SINGLE_EN_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_SINGLE_EN_LANE

// 0x15	TX_DCC2_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_VAL_MAX_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t TX_DCC2_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_RESULT_AVG_EN_LANE           : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_1_t;
__xdata __at( 0x454 ) volatile TX_DCC2_CAL_1_t TX_DCC2_CAL_1;
#define reg_TX_DCC2_CAL_VAL_MAX_LANE_5_0  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_VAL_MAX_LANE_5_0
#define reg_TX_DCC2_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC2_CAL_RESULT_AVG_EN_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_RESULT_AVG_EN_LANE

// 0x16	TX_DCC2_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_CAL_EN_EXT_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_INDV_EXT_EN_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_VAL_MIN_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_2_t;
__xdata __at( 0x458 ) volatile TX_DCC2_CAL_2_t TX_DCC2_CAL_2;
#define reg_TX_DCC2_CAL_CAL_EN_EXT_LANE  TX_DCC2_CAL_2.BF.TX_DCC2_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC2_CAL_INDV_EXT_EN_LANE  TX_DCC2_CAL_2.BF.TX_DCC2_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC2_CAL_VAL_MIN_LANE_5_0  TX_DCC2_CAL_2.BF.TX_DCC2_CAL_VAL_MIN_LANE_5_0

// 0x17	TX_DCC2_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC2_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC2_CAL_RESULT_EXT_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_3_t;
__xdata __at( 0x45c ) volatile TX_DCC2_CAL_3_t TX_DCC2_CAL_3;
#define reg_TX_DCC2_CAL_TIMEOUT_RD_LANE  TX_DCC2_CAL_3.BF.TX_DCC2_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC2_CAL_CAL_DONE_RD_LANE  TX_DCC2_CAL_3.BF.TX_DCC2_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC2_CAL_RESULT_EXT_LANE_5_0  TX_DCC2_CAL_3.BF.TX_DCC2_CAL_RESULT_EXT_LANE_5_0

// 0x18	TX_DCC2_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_RESULT_RD_LANE_5_0           : 6;	/*  [5:0]       r 6'h0*/
		uint8_t TX_DCC2_CAL_UNDERFLOW_RD_LANE            : 1;	/*      6       r 1'h0*/
		uint8_t TX_DCC2_CAL_OVERFLOW_RD_LANE             : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_4_t;
__xdata __at( 0x460 ) volatile TX_DCC2_CAL_4_t TX_DCC2_CAL_4;
#define reg_TX_DCC2_CAL_RESULT_RD_LANE_5_0  TX_DCC2_CAL_4.BF.TX_DCC2_CAL_RESULT_RD_LANE_5_0
#define reg_TX_DCC2_CAL_UNDERFLOW_RD_LANE  TX_DCC2_CAL_4.BF.TX_DCC2_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC2_CAL_OVERFLOW_RD_LANE  TX_DCC2_CAL_4.BF.TX_DCC2_CAL_OVERFLOW_RD_LANE

// 0x19	TX_DCC3_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t TX_DCC3_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_DCC3_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_0_t;
__xdata __at( 0x464 ) volatile TX_DCC3_CAL_0_t TX_DCC3_CAL_0;
#define reg_TX_DCC3_CAL_DIR_INV_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_DIR_INV_LANE
#define reg_TX_DCC3_CAL_CONT_NUM_LANE_3_0  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC3_CAL_BYPASS_EN_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_BYPASS_EN_LANE
#define reg_TX_DCC3_CAL_CONT_EN_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_CONT_EN_LANE
#define reg_TX_DCC3_CAL_SINGLE_EN_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_SINGLE_EN_LANE

// 0x1a	TX_DCC3_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t TX_DCC3_CAL_CMP_CTRL_LANE_1_0            : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_1_t;
__xdata __at( 0x468 ) volatile TX_DCC3_CAL_1_t TX_DCC3_CAL_1;
#define reg_TX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC3_CAL_CMP_CTRL_LANE_1_0  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_CMP_CTRL_LANE_1_0

// 0x1b	TX_DCC3_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [3:1]     r/w 3'h6*/
		uint8_t TX_DCC3_CAL_RESULT_AVG_EN_LANE           : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_2_t;
__xdata __at( 0x46c ) volatile TX_DCC3_CAL_2_t TX_DCC3_CAL_2;
#define reg_TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_DCC3_CAL_RESULT_AVG_EN_LANE  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0

// 0x1c	TX_DCC3_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CAL_EN_EXT_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_INDV_EXT_EN_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_3_t;
__xdata __at( 0x470 ) volatile TX_DCC3_CAL_3_t TX_DCC3_CAL_3;
#define reg_TX_DCC3_CAL_CAL_EN_EXT_LANE  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC3_CAL_INDV_EXT_EN_LANE  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0

// 0x1d	TX_DCC3_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CAL_DONE_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC3_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h2f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_4_t;
__xdata __at( 0x474 ) volatile TX_DCC3_CAL_4_t TX_DCC3_CAL_4;
#define reg_TX_DCC3_CAL_CAL_DONE_RD_LANE  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC3_CAL_DUMMY_CLK_EXT_LANE  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0

// 0x1e	TX_DCC3_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC3_CAL_TIMEOUT_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_5_t;
__xdata __at( 0x478 ) volatile TX_DCC3_CAL_5_t TX_DCC3_CAL_5;
#define reg_TX_DCC3_CAL_OVERFLOW_RD_LANE  TX_DCC3_CAL_5.BF.TX_DCC3_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC3_CAL_TIMEOUT_RD_LANE  TX_DCC3_CAL_5.BF.TX_DCC3_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0  TX_DCC3_CAL_5.BF.TX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0

// 0x1f	TX_DCC3_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t TX_DCC3_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      3       r 1'h0*/
		uint8_t TX_DCC3_CAL_UNDERFLOW_RD_LANE            : 1;	/*      4       r 1'h0*/
		uint8_t TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_6_t;
__xdata __at( 0x47c ) volatile TX_DCC3_CAL_6_t TX_DCC3_CAL_6;
#define reg_TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0  TX_DCC3_CAL_6.BF.TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_TX_DCC3_CAL_DUMMY_CLK_RD_LANE  TX_DCC3_CAL_6.BF.TX_DCC3_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_DCC3_CAL_UNDERFLOW_RD_LANE  TX_DCC3_CAL_6.BF.TX_DCC3_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0  TX_DCC3_CAL_6.BF.TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x20	TX_DCC3_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_7_t;
__xdata __at( 0x480 ) volatile TX_DCC3_CAL_7_t TX_DCC3_CAL_7;
#define reg_TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0  TX_DCC3_CAL_7.BF.TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x21	TX_DCC3_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_8_t;
__xdata __at( 0x484 ) volatile TX_DCC3_CAL_8_t TX_DCC3_CAL_8;
#define reg_TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC3_CAL_8.BF.TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0

// 0x22	TX_DCC4_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t TX_DCC4_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_DCC4_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_0_t;
__xdata __at( 0x488 ) volatile TX_DCC4_CAL_0_t TX_DCC4_CAL_0;
#define reg_TX_DCC4_CAL_DIR_INV_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_DIR_INV_LANE
#define reg_TX_DCC4_CAL_CONT_NUM_LANE_3_0  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC4_CAL_BYPASS_EN_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_BYPASS_EN_LANE
#define reg_TX_DCC4_CAL_CONT_EN_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_CONT_EN_LANE
#define reg_TX_DCC4_CAL_SINGLE_EN_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_SINGLE_EN_LANE

// 0x23	TX_DCC4_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t TX_DCC4_CAL_CMP_CTRL_LANE_1_0            : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_1_t;
__xdata __at( 0x48c ) volatile TX_DCC4_CAL_1_t TX_DCC4_CAL_1;
#define reg_TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC4_CAL_CMP_CTRL_LANE_1_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_CMP_CTRL_LANE_1_0

// 0x24	TX_DCC4_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_INDV_EXT_EN_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [3:1]     r/w 3'h4*/
		uint8_t TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [6:4]     r/w 3'h3*/
		uint8_t TX_DCC4_CAL_RESULT_AVG_EN_LANE           : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_2_t;
__xdata __at( 0x490 ) volatile TX_DCC4_CAL_2_t TX_DCC4_CAL_2;
#define reg_TX_DCC4_CAL_INDV_EXT_EN_LANE  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_DCC4_CAL_RESULT_AVG_EN_LANE  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_RESULT_AVG_EN_LANE

// 0x25	TX_DCC4_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t TX_DCC4_CAL_CAL_EN_EXT_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h2f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_3_t;
__xdata __at( 0x494 ) volatile TX_DCC4_CAL_3_t TX_DCC4_CAL_3;
#define reg_TX_DCC4_CAL_DUMMY_CLK_EXT_LANE  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_DCC4_CAL_CAL_EN_EXT_LANE  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0

// 0x26	TX_DCC4_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC4_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_4_t;
__xdata __at( 0x498 ) volatile TX_DCC4_CAL_4_t TX_DCC4_CAL_4;
#define reg_TX_DCC4_CAL_TIMEOUT_RD_LANE  TX_DCC4_CAL_4.BF.TX_DCC4_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC4_CAL_CAL_DONE_RD_LANE  TX_DCC4_CAL_4.BF.TX_DCC4_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0  TX_DCC4_CAL_4.BF.TX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0

// 0x27	TX_DCC4_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      2       r 1'h0*/
		uint8_t TX_DCC4_CAL_UNDERFLOW_RD_LANE            : 1;	/*      3       r 1'h0*/
		uint8_t TX_DCC4_CAL_OVERFLOW_RD_LANE             : 1;	/*      4       r 1'h0*/
		uint8_t TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_5_t;
__xdata __at( 0x49c ) volatile TX_DCC4_CAL_5_t TX_DCC4_CAL_5;
#define reg_TX_DCC4_CAL_DUMMY_CLK_RD_LANE  TX_DCC4_CAL_5.BF.TX_DCC4_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_DCC4_CAL_UNDERFLOW_RD_LANE  TX_DCC4_CAL_5.BF.TX_DCC4_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC4_CAL_OVERFLOW_RD_LANE  TX_DCC4_CAL_5.BF.TX_DCC4_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0  TX_DCC4_CAL_5.BF.TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x28	TX_DCC4_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_6_t;
__xdata __at( 0x4a0 ) volatile TX_DCC4_CAL_6_t TX_DCC4_CAL_6;
#define reg_TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0  TX_DCC4_CAL_6.BF.TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x29	TX_DCC4_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_7_t;
__xdata __at( 0x4a4 ) volatile TX_DCC4_CAL_7_t TX_DCC4_CAL_7;
#define reg_TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0  TX_DCC4_CAL_7.BF.TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0

// 0x2a	TX_DCC4_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_8_t;
__xdata __at( 0x4a8 ) volatile TX_DCC4_CAL_8_t TX_DCC4_CAL_8;
#define reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC4_CAL_8.BF.TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0

// 0x2b	SMPLR_P2P4_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_P2P4_TOP_DONE_LANE                 : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_P2P4_TESTBUS_CORE_SEL_LANE_2_0     : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t SMPLR_P2P4_TOP_START_LANE                : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_P2P4_UPDN_RD_LANE                  : 1;	/*      5       r 1'h0*/
		uint8_t SMPLR_P2P4_UNDERFLOW_ALL_RD_LANE         : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_P2P4_OVERFLOW_ALL_RD_LANE          : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_P2P4_0_t;
__xdata __at( 0x4ac ) volatile SMPLR_P2P4_0_t SMPLR_P2P4_0;
#define reg_SMPLR_P2P4_TOP_DONE_LANE  SMPLR_P2P4_0.BF.SMPLR_P2P4_TOP_DONE_LANE
#define reg_SMPLR_P2P4_TESTBUS_CORE_SEL_LANE_2_0  SMPLR_P2P4_0.BF.SMPLR_P2P4_TESTBUS_CORE_SEL_LANE_2_0
#define reg_SMPLR_P2P4_TOP_START_LANE  SMPLR_P2P4_0.BF.SMPLR_P2P4_TOP_START_LANE
#define reg_SMPLR_P2P4_UPDN_RD_LANE  SMPLR_P2P4_0.BF.SMPLR_P2P4_UPDN_RD_LANE
#define reg_SMPLR_P2P4_UNDERFLOW_ALL_RD_LANE  SMPLR_P2P4_0.BF.SMPLR_P2P4_UNDERFLOW_ALL_RD_LANE
#define reg_SMPLR_P2P4_OVERFLOW_ALL_RD_LANE  SMPLR_P2P4_0.BF.SMPLR_P2P4_OVERFLOW_ALL_RD_LANE

// 0x2c	SMPLR_D_TOP_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_P2_CAL_TIMEOUT_CHK_DIS_LANE  : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_RESULT_AVG_EN_LANE    : 1;	/*      1     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_P2_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t SMPLR_D_TOP_P2_CAL_DIR_INV_LANE          : 1;	/*      5     r/w 1'h1*/
		uint8_t SMPLR_D_TOP_P2_CAL_BYPASS_EN_LANE        : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_SINGLE_EN_LANE        : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P2_CAL_0_t;
__xdata __at( 0x4b0 ) volatile SMPLR_D_TOP_P2_CAL_0_t SMPLR_D_TOP_P2_CAL_0;
#define reg_SMPLR_D_TOP_P2_CAL_TIMEOUT_CHK_DIS_LANE  SMPLR_D_TOP_P2_CAL_0.BF.SMPLR_D_TOP_P2_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_SMPLR_D_TOP_P2_CAL_RESULT_AVG_EN_LANE  SMPLR_D_TOP_P2_CAL_0.BF.SMPLR_D_TOP_P2_CAL_RESULT_AVG_EN_LANE
#define reg_SMPLR_D_TOP_P2_CAL_TOGGLE_TIMES_LANE_2_0  SMPLR_D_TOP_P2_CAL_0.BF.SMPLR_D_TOP_P2_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_SMPLR_D_TOP_P2_CAL_DIR_INV_LANE  SMPLR_D_TOP_P2_CAL_0.BF.SMPLR_D_TOP_P2_CAL_DIR_INV_LANE
#define reg_SMPLR_D_TOP_P2_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_P2_CAL_0.BF.SMPLR_D_TOP_P2_CAL_BYPASS_EN_LANE
#define reg_SMPLR_D_TOP_P2_CAL_SINGLE_EN_LANE  SMPLR_D_TOP_P2_CAL_0.BF.SMPLR_D_TOP_P2_CAL_SINGLE_EN_LANE

// 0x2d	SMPLR_D_TOP_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_P2_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P2_CAL_1_t;
__xdata __at( 0x4b4 ) volatile SMPLR_D_TOP_P2_CAL_1_t SMPLR_D_TOP_P2_CAL_1;
#define reg_SMPLR_D_TOP_P2_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SMPLR_D_TOP_P2_CAL_1.BF.SMPLR_D_TOP_P2_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x2e	SMPLR_D_TOP_P2_CAL_2		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_P2_CAL_OVERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_TIMEOUT_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_CAL_DONE_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_CAL_EN_EXT_LANE       : 1;	/*      3     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_INDV_EXT_EN_LANE      : 1;	/*      4     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P2_CAL_2_t;
__xdata __at( 0x4b8 ) volatile SMPLR_D_TOP_P2_CAL_2_t SMPLR_D_TOP_P2_CAL_2;
#define reg_SMPLR_D_TOP_P2_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_P2_CAL_2.BF.SMPLR_D_TOP_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P2_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_P2_CAL_2.BF.SMPLR_D_TOP_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_P2_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_P2_CAL_2.BF.SMPLR_D_TOP_P2_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_P2_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_P2_CAL_2.BF.SMPLR_D_TOP_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_P2_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_P2_CAL_2.BF.SMPLR_D_TOP_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_P2_CAL_TIMEOUT_STEPS_LANE_2_0  SMPLR_D_TOP_P2_CAL_2.BF.SMPLR_D_TOP_P2_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x2f	SMPLR_D_TOP_P2_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_TOP_P2_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_P2_CAL_VAL_MAX_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P2_CAL_3_t;
__xdata __at( 0x4bc ) volatile SMPLR_D_TOP_P2_CAL_3_t SMPLR_D_TOP_P2_CAL_3;
#define reg_SMPLR_D_TOP_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_P2_CAL_3.BF.SMPLR_D_TOP_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P2_CAL_VAL_MAX_LANE_5_0  SMPLR_D_TOP_P2_CAL_3.BF.SMPLR_D_TOP_P2_CAL_VAL_MAX_LANE_5_0

// 0x30	SMPLR_D_TOP_P2_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_P2_CAL_VAL_MIN_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P2_CAL_4_t;
__xdata __at( 0x4c0 ) volatile SMPLR_D_TOP_P2_CAL_4_t SMPLR_D_TOP_P2_CAL_4;
#define reg_SMPLR_D_TOP_P2_CAL_VAL_MIN_LANE_5_0  SMPLR_D_TOP_P2_CAL_4.BF.SMPLR_D_TOP_P2_CAL_VAL_MIN_LANE_5_0

// 0x31	SMPLR_D_TOP_P2_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_P2_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P2_CAL_5_t;
__xdata __at( 0x4c4 ) volatile SMPLR_D_TOP_P2_CAL_5_t SMPLR_D_TOP_P2_CAL_5;
#define reg_SMPLR_D_TOP_P2_CAL_RESULT_RD_LANE_5_0  SMPLR_D_TOP_P2_CAL_5.BF.SMPLR_D_TOP_P2_CAL_RESULT_RD_LANE_5_0

// 0x32	SMPLR_D_MID_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_P2_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_MID_P2_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_MID_P2_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_MID_P2_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_MID_P2_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P2_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P2_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P2_CAL_0_t;
__xdata __at( 0x4c8 ) volatile SMPLR_D_MID_P2_CAL_0_t SMPLR_D_MID_P2_CAL_0;
#define reg_SMPLR_D_MID_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P2_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P2_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_P2_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_P2_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_P2_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_P2_CAL_BYPASS_EN_LANE  SMPLR_D_MID_P2_CAL_0.BF.SMPLR_D_MID_P2_CAL_BYPASS_EN_LANE

// 0x33	SMPLR_D_MID_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_MID_P2_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P2_CAL_1_t;
__xdata __at( 0x4cc ) volatile SMPLR_D_MID_P2_CAL_1_t SMPLR_D_MID_P2_CAL_1;
#define reg_SMPLR_D_MID_P2_CAL_RESULT_RD_LANE_5_0  SMPLR_D_MID_P2_CAL_1.BF.SMPLR_D_MID_P2_CAL_RESULT_RD_LANE_5_0

// 0x34	SMPLR_D_BOT_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_P2_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_BOT_P2_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_BOT_P2_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_BOT_P2_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_BOT_P2_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P2_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P2_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P2_CAL_0_t;
__xdata __at( 0x4d0 ) volatile SMPLR_D_BOT_P2_CAL_0_t SMPLR_D_BOT_P2_CAL_0;
#define reg_SMPLR_D_BOT_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P2_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P2_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_P2_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_P2_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_P2_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_P2_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_P2_CAL_0.BF.SMPLR_D_BOT_P2_CAL_BYPASS_EN_LANE

// 0x35	SMPLR_D_BOT_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_BOT_P2_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P2_CAL_1_t;
__xdata __at( 0x4d4 ) volatile SMPLR_D_BOT_P2_CAL_1_t SMPLR_D_BOT_P2_CAL_1;
#define reg_SMPLR_D_BOT_P2_CAL_RESULT_RD_LANE_5_0  SMPLR_D_BOT_P2_CAL_1.BF.SMPLR_D_BOT_P2_CAL_RESULT_RD_LANE_5_0

// 0x36	SMPLR_D_TOP_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_TOP_P4_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_P4_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_TOP_P4_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_TOP_P4_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_TOP_P4_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P4_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_TOP_P4_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P4_CAL_0_t;
__xdata __at( 0x4d8 ) volatile SMPLR_D_TOP_P4_CAL_0_t SMPLR_D_TOP_P4_CAL_0;
#define reg_SMPLR_D_TOP_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P4_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_P4_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_P4_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_P4_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_P4_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_P4_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_P4_CAL_0.BF.SMPLR_D_TOP_P4_CAL_BYPASS_EN_LANE

// 0x37	SMPLR_D_TOP_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_P4_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_P4_CAL_1_t;
__xdata __at( 0x4dc ) volatile SMPLR_D_TOP_P4_CAL_1_t SMPLR_D_TOP_P4_CAL_1;
#define reg_SMPLR_D_TOP_P4_CAL_RESULT_RD_LANE_5_0  SMPLR_D_TOP_P4_CAL_1.BF.SMPLR_D_TOP_P4_CAL_RESULT_RD_LANE_5_0

// 0x38	SMPLR_D_MID_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_MID_P4_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_MID_P4_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_MID_P4_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_MID_P4_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_MID_P4_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P4_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_MID_P4_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P4_CAL_0_t;
__xdata __at( 0x4e0 ) volatile SMPLR_D_MID_P4_CAL_0_t SMPLR_D_MID_P4_CAL_0;
#define reg_SMPLR_D_MID_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P4_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_P4_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_P4_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_P4_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_P4_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_P4_CAL_BYPASS_EN_LANE  SMPLR_D_MID_P4_CAL_0.BF.SMPLR_D_MID_P4_CAL_BYPASS_EN_LANE

// 0x39	SMPLR_D_MID_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_MID_P4_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_P4_CAL_1_t;
__xdata __at( 0x4e4 ) volatile SMPLR_D_MID_P4_CAL_1_t SMPLR_D_MID_P4_CAL_1;
#define reg_SMPLR_D_MID_P4_CAL_RESULT_RD_LANE_5_0  SMPLR_D_MID_P4_CAL_1.BF.SMPLR_D_MID_P4_CAL_RESULT_RD_LANE_5_0

// 0x3a	SMPLR_D_BOT_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_D_BOT_P4_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_BOT_P4_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_D_BOT_P4_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_D_BOT_P4_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_D_BOT_P4_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P4_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_D_BOT_P4_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P4_CAL_0_t;
__xdata __at( 0x4e8 ) volatile SMPLR_D_BOT_P4_CAL_0_t SMPLR_D_BOT_P4_CAL_0;
#define reg_SMPLR_D_BOT_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P4_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_P4_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_P4_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_P4_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_P4_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_P4_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_P4_CAL_0.BF.SMPLR_D_BOT_P4_CAL_BYPASS_EN_LANE

// 0x3b	SMPLR_D_BOT_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_BOT_P4_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_P4_CAL_1_t;
__xdata __at( 0x4ec ) volatile SMPLR_D_BOT_P4_CAL_1_t SMPLR_D_BOT_P4_CAL_1;
#define reg_SMPLR_D_BOT_P4_CAL_RESULT_RD_LANE_5_0  SMPLR_D_BOT_P4_CAL_1.BF.SMPLR_D_BOT_P4_CAL_RESULT_RD_LANE_5_0

// 0x3c	SMPLR_S_TOP_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_P2_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_TOP_P2_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_TOP_P2_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_TOP_P2_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_TOP_P2_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P2_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P2_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P2_CAL_0_t;
__xdata __at( 0x4f0 ) volatile SMPLR_S_TOP_P2_CAL_0_t SMPLR_S_TOP_P2_CAL_0;
#define reg_SMPLR_S_TOP_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P2_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P2_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_P2_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_P2_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_P2_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_P2_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_P2_CAL_0.BF.SMPLR_S_TOP_P2_CAL_BYPASS_EN_LANE

// 0x3d	SMPLR_S_TOP_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_TOP_P2_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P2_CAL_1_t;
__xdata __at( 0x4f4 ) volatile SMPLR_S_TOP_P2_CAL_1_t SMPLR_S_TOP_P2_CAL_1;
#define reg_SMPLR_S_TOP_P2_CAL_RESULT_RD_LANE_5_0  SMPLR_S_TOP_P2_CAL_1.BF.SMPLR_S_TOP_P2_CAL_RESULT_RD_LANE_5_0

// 0x3e	SMPLR_S_MID_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_P2_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_MID_P2_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_MID_P2_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_MID_P2_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_MID_P2_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P2_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P2_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P2_CAL_0_t;
__xdata __at( 0x4f8 ) volatile SMPLR_S_MID_P2_CAL_0_t SMPLR_S_MID_P2_CAL_0;
#define reg_SMPLR_S_MID_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P2_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P2_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_P2_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_P2_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_P2_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_P2_CAL_BYPASS_EN_LANE  SMPLR_S_MID_P2_CAL_0.BF.SMPLR_S_MID_P2_CAL_BYPASS_EN_LANE

// 0x3f	SMPLR_S_MID_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_MID_P2_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P2_CAL_1_t;
__xdata __at( 0x4fc ) volatile SMPLR_S_MID_P2_CAL_1_t SMPLR_S_MID_P2_CAL_1;
#define reg_SMPLR_S_MID_P2_CAL_RESULT_RD_LANE_5_0  SMPLR_S_MID_P2_CAL_1.BF.SMPLR_S_MID_P2_CAL_RESULT_RD_LANE_5_0

// 0x40	SMPLR_S_BOT_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_P2_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_BOT_P2_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_BOT_P2_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_BOT_P2_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_BOT_P2_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P2_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P2_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P2_CAL_0_t;
__xdata __at( 0x500 ) volatile SMPLR_S_BOT_P2_CAL_0_t SMPLR_S_BOT_P2_CAL_0;
#define reg_SMPLR_S_BOT_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P2_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P2_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_P2_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_P2_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_P2_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_P2_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_P2_CAL_0.BF.SMPLR_S_BOT_P2_CAL_BYPASS_EN_LANE

// 0x41	SMPLR_S_BOT_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_BOT_P2_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P2_CAL_1_t;
__xdata __at( 0x504 ) volatile SMPLR_S_BOT_P2_CAL_1_t SMPLR_S_BOT_P2_CAL_1;
#define reg_SMPLR_S_BOT_P2_CAL_RESULT_RD_LANE_5_0  SMPLR_S_BOT_P2_CAL_1.BF.SMPLR_S_BOT_P2_CAL_RESULT_RD_LANE_5_0

// 0x42	SMPLR_S_TOP_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_TOP_P4_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_TOP_P4_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_TOP_P4_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_TOP_P4_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_TOP_P4_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P4_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_TOP_P4_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P4_CAL_0_t;
__xdata __at( 0x508 ) volatile SMPLR_S_TOP_P4_CAL_0_t SMPLR_S_TOP_P4_CAL_0;
#define reg_SMPLR_S_TOP_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P4_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_P4_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_P4_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_P4_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_P4_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_P4_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_P4_CAL_0.BF.SMPLR_S_TOP_P4_CAL_BYPASS_EN_LANE

// 0x43	SMPLR_S_TOP_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_TOP_P4_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_P4_CAL_1_t;
__xdata __at( 0x50c ) volatile SMPLR_S_TOP_P4_CAL_1_t SMPLR_S_TOP_P4_CAL_1;
#define reg_SMPLR_S_TOP_P4_CAL_RESULT_RD_LANE_5_0  SMPLR_S_TOP_P4_CAL_1.BF.SMPLR_S_TOP_P4_CAL_RESULT_RD_LANE_5_0

// 0x44	SMPLR_S_MID_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_MID_P4_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_MID_P4_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_MID_P4_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_MID_P4_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_MID_P4_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P4_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_MID_P4_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P4_CAL_0_t;
__xdata __at( 0x510 ) volatile SMPLR_S_MID_P4_CAL_0_t SMPLR_S_MID_P4_CAL_0;
#define reg_SMPLR_S_MID_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P4_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_P4_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_P4_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_P4_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_P4_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_P4_CAL_BYPASS_EN_LANE  SMPLR_S_MID_P4_CAL_0.BF.SMPLR_S_MID_P4_CAL_BYPASS_EN_LANE

// 0x45	SMPLR_S_MID_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_MID_P4_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_P4_CAL_1_t;
__xdata __at( 0x514 ) volatile SMPLR_S_MID_P4_CAL_1_t SMPLR_S_MID_P4_CAL_1;
#define reg_SMPLR_S_MID_P4_CAL_RESULT_RD_LANE_5_0  SMPLR_S_MID_P4_CAL_1.BF.SMPLR_S_MID_P4_CAL_RESULT_RD_LANE_5_0

// 0x46	SMPLR_S_BOT_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_S_BOT_P4_CAL_UNDERFLOW_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_S_BOT_P4_CAL_OVERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_S_BOT_P4_CAL_TIMEOUT_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_S_BOT_P4_CAL_CAL_DONE_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_S_BOT_P4_CAL_CAL_EN_EXT_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P4_CAL_INDV_EXT_EN_LANE      : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_S_BOT_P4_CAL_BYPASS_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P4_CAL_0_t;
__xdata __at( 0x518 ) volatile SMPLR_S_BOT_P4_CAL_0_t SMPLR_S_BOT_P4_CAL_0;
#define reg_SMPLR_S_BOT_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P4_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_P4_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_P4_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_P4_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_P4_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_P4_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_P4_CAL_0.BF.SMPLR_S_BOT_P4_CAL_BYPASS_EN_LANE

// 0x47	SMPLR_S_BOT_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_BOT_P4_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_P4_CAL_1_t;
__xdata __at( 0x51c ) volatile SMPLR_S_BOT_P4_CAL_1_t SMPLR_S_BOT_P4_CAL_1;
#define reg_SMPLR_S_BOT_P4_CAL_RESULT_RD_LANE_5_0  SMPLR_S_BOT_P4_CAL_1.BF.SMPLR_S_BOT_P4_CAL_RESULT_RD_LANE_5_0

// 0x48	SMPLR_EDGE_P2_CAL_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_EDGE_P2_CAL_VAL_MAX_PN_LANE_4_0    : 5;	/*  [4:0]     r/w 5'h1f*/
		uint8_t SMPLR_EDGE_P2_CAL_VAL_MAX_PN_SIGN_LANE   : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_DIR_INV_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t SMPLR_EDGE_P2_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P2_CAL_0_t;
__xdata __at( 0x520 ) volatile SMPLR_EDGE_P2_CAL_0_t SMPLR_EDGE_P2_CAL_0;
#define reg_SMPLR_EDGE_P2_CAL_VAL_MAX_PN_LANE_4_0  SMPLR_EDGE_P2_CAL_0.BF.SMPLR_EDGE_P2_CAL_VAL_MAX_PN_LANE_4_0
#define reg_SMPLR_EDGE_P2_CAL_VAL_MAX_PN_SIGN_LANE  SMPLR_EDGE_P2_CAL_0.BF.SMPLR_EDGE_P2_CAL_VAL_MAX_PN_SIGN_LANE
#define reg_SMPLR_EDGE_P2_CAL_DIR_INV_LANE  SMPLR_EDGE_P2_CAL_0.BF.SMPLR_EDGE_P2_CAL_DIR_INV_LANE
#define reg_SMPLR_EDGE_P2_CAL_BYPASS_EN_LANE  SMPLR_EDGE_P2_CAL_0.BF.SMPLR_EDGE_P2_CAL_BYPASS_EN_LANE

// 0x49	SMPLR_EDGE_P2_CAL_1		TBD
typedef union {
	struct {
		uint8_t SMPLR_EDGE_P2_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_INDV_EXT_EN_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_VAL_MIN_PN_LANE_4_0    : 5;	/*  [6:2]     r/w 5'h1f*/
		uint8_t SMPLR_EDGE_P2_CAL_VAL_MIN_PN_SIGN_LANE   : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P2_CAL_1_t;
__xdata __at( 0x524 ) volatile SMPLR_EDGE_P2_CAL_1_t SMPLR_EDGE_P2_CAL_1;
#define reg_SMPLR_EDGE_P2_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_P2_CAL_1.BF.SMPLR_EDGE_P2_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_P2_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_P2_CAL_1.BF.SMPLR_EDGE_P2_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_P2_CAL_VAL_MIN_PN_LANE_4_0  SMPLR_EDGE_P2_CAL_1.BF.SMPLR_EDGE_P2_CAL_VAL_MIN_PN_LANE_4_0
#define reg_SMPLR_EDGE_P2_CAL_VAL_MIN_PN_SIGN_LANE  SMPLR_EDGE_P2_CAL_1.BF.SMPLR_EDGE_P2_CAL_VAL_MIN_PN_SIGN_LANE

// 0x4a	SMPLR_EDGE_P2_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P2_CAL_RESULT_PN_SIGN_RD_LANE : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_UNDERFLOW_RD_LANE      : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_OVERFLOW_RD_LANE       : 1;	/*      5       r 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_TIMEOUT_RD_LANE        : 1;	/*      6       r 1'h0*/
		uint8_t SMPLR_EDGE_P2_CAL_CAL_DONE_RD_LANE       : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P2_CAL_2_t;
__xdata __at( 0x528 ) volatile SMPLR_EDGE_P2_CAL_2_t SMPLR_EDGE_P2_CAL_2;
#define reg_SMPLR_EDGE_P2_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_P2_CAL_2.BF.SMPLR_EDGE_P2_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_P2_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_P2_CAL_2.BF.SMPLR_EDGE_P2_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P2_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_P2_CAL_2.BF.SMPLR_EDGE_P2_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P2_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_P2_CAL_2.BF.SMPLR_EDGE_P2_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_P2_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_P2_CAL_2.BF.SMPLR_EDGE_P2_CAL_CAL_DONE_RD_LANE

// 0x4b	SMPLR_EDGE_P2_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P2_CAL_RESULT_P_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P2_CAL_3_t;
__xdata __at( 0x52c ) volatile SMPLR_EDGE_P2_CAL_3_t SMPLR_EDGE_P2_CAL_3;
#define reg_SMPLR_EDGE_P2_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_P2_CAL_3.BF.SMPLR_EDGE_P2_CAL_RESULT_P_RD_LANE_4_0

// 0x4c	SMPLR_EDGE_P2_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P2_CAL_RESULT_N_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P2_CAL_4_t;
__xdata __at( 0x530 ) volatile SMPLR_EDGE_P2_CAL_4_t SMPLR_EDGE_P2_CAL_4;
#define reg_SMPLR_EDGE_P2_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_P2_CAL_4.BF.SMPLR_EDGE_P2_CAL_RESULT_N_RD_LANE_4_0

// 0x4d	SMPLR_EDGE_P4_CAL_0		TBD
typedef union {
	struct {
		uint8_t SMPLR_EDGE_P4_CAL_RESULT_PN_SIGN_RD_LANE : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_CAL_EN_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_INDV_EXT_EN_LANE       : 1;	/*      6     r/w 1'h0*/
		uint8_t SMPLR_EDGE_P4_CAL_BYPASS_EN_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P4_CAL_0_t;
__xdata __at( 0x534 ) volatile SMPLR_EDGE_P4_CAL_0_t SMPLR_EDGE_P4_CAL_0;
#define reg_SMPLR_EDGE_P4_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_P4_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P4_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_P4_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_P4_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_EDGE_P4_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_P4_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_P4_CAL_BYPASS_EN_LANE  SMPLR_EDGE_P4_CAL_0.BF.SMPLR_EDGE_P4_CAL_BYPASS_EN_LANE

// 0x4e	SMPLR_EDGE_P4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P4_CAL_RESULT_P_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P4_CAL_1_t;
__xdata __at( 0x538 ) volatile SMPLR_EDGE_P4_CAL_1_t SMPLR_EDGE_P4_CAL_1;
#define reg_SMPLR_EDGE_P4_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_P4_CAL_1.BF.SMPLR_EDGE_P4_CAL_RESULT_P_RD_LANE_4_0

// 0x4f	SMPLR_EDGE_P4_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_P4_CAL_RESULT_N_RD_LANE_4_0   : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_P4_CAL_2_t;
__xdata __at( 0x53c ) volatile SMPLR_EDGE_P4_CAL_2_t SMPLR_EDGE_P4_CAL_2;
#define reg_SMPLR_EDGE_P4_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_P4_CAL_2.BF.SMPLR_EDGE_P4_CAL_RESULT_N_RD_LANE_4_0

// 0x50	DLL_0		TBD
typedef union {
	struct {
		uint8_t DLL_TOP_DONE_LANE                        : 1;	/*      0       r 1'h0*/
		uint8_t DLL_TOP_CONT_START_LANE                  : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_TOP_START_LANE                       : 1;	/*      2     r/w 1'h0*/
		uint8_t DLL_UPDN_RD_LANE                         : 1;	/*      3       r 1'h0*/
		uint8_t DLL_AUTO_ZERO_CLK_EXT_LANE               : 1;	/*      4     r/w 1'h0*/
		uint8_t DLL_CMP_CTRL_EXT_LANE_1_0                : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t DLL_COMN_EXT_EN_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_0_t;
__xdata __at( 0x540 ) volatile DLL_0_t DLL_0;
#define reg_DLL_TOP_DONE_LANE  DLL_0.BF.DLL_TOP_DONE_LANE
#define reg_DLL_TOP_CONT_START_LANE  DLL_0.BF.DLL_TOP_CONT_START_LANE
#define reg_DLL_TOP_START_LANE  DLL_0.BF.DLL_TOP_START_LANE
#define reg_DLL_UPDN_RD_LANE  DLL_0.BF.DLL_UPDN_RD_LANE
#define reg_DLL_AUTO_ZERO_CLK_EXT_LANE  DLL_0.BF.DLL_AUTO_ZERO_CLK_EXT_LANE
#define reg_DLL_CMP_CTRL_EXT_LANE_1_0  DLL_0.BF.DLL_CMP_CTRL_EXT_LANE_1_0
#define reg_DLL_COMN_EXT_EN_LANE  DLL_0.BF.DLL_COMN_EXT_EN_LANE

// 0x51	DLL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t DLL_TOP_CONT_DONE_LANE                   : 1;	/*      4       r 1'h0*/
		uint8_t DLL_TESTBUS_CORE_SEL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_1_t;
__xdata __at( 0x544 ) volatile DLL_1_t DLL_1;
#define reg_DLL_TOP_CONT_DONE_LANE  DLL_1.BF.DLL_TOP_CONT_DONE_LANE
#define reg_DLL_TESTBUS_CORE_SEL_LANE_2_0  DLL_1.BF.DLL_TESTBUS_CORE_SEL_LANE_2_0

// 0x52	DLL_GM_CAL_0		TBD
typedef union {
	struct {
		uint8_t DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DLL_GM_CAL_DIR_INV_LANE                  : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_GM_CAL_CMP_CTRL_LANE_1_0             : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DLL_GM_CAL_BYPASS_EN_LANE                : 1;	/*      6     r/w 1'h0*/
		uint8_t DLL_GM_CAL_SINGLE_EN_LANE                : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_0_t;
__xdata __at( 0x548 ) volatile DLL_GM_CAL_0_t DLL_GM_CAL_0;
#define reg_DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_GM_CAL_0.BF.DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_GM_CAL_DIR_INV_LANE  DLL_GM_CAL_0.BF.DLL_GM_CAL_DIR_INV_LANE
#define reg_DLL_GM_CAL_CMP_CTRL_LANE_1_0  DLL_GM_CAL_0.BF.DLL_GM_CAL_CMP_CTRL_LANE_1_0
#define reg_DLL_GM_CAL_BYPASS_EN_LANE  DLL_GM_CAL_0.BF.DLL_GM_CAL_BYPASS_EN_LANE
#define reg_DLL_GM_CAL_SINGLE_EN_LANE  DLL_GM_CAL_0.BF.DLL_GM_CAL_SINGLE_EN_LANE

// 0x53	DLL_GM_CAL_1		TBD
typedef union {
	struct {
		uint8_t DLL_GM_CAL_TIMEOUT_CHK_DIS_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_GM_CAL_RESULT_AVG_EN_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_GM_CAL_TOGGLE_TIMES_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t DLL_GM_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  : 2;	/*  [6:5]     r/w 2'h2*/
		uint8_t DLL_GM_CAL_BIN_SEARCH_ENABLE_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_1_t;
__xdata __at( 0x54c ) volatile DLL_GM_CAL_1_t DLL_GM_CAL_1;
#define reg_DLL_GM_CAL_TIMEOUT_CHK_DIS_LANE  DLL_GM_CAL_1.BF.DLL_GM_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_GM_CAL_RESULT_AVG_EN_LANE  DLL_GM_CAL_1.BF.DLL_GM_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_GM_CAL_TOGGLE_TIMES_LANE_2_0  DLL_GM_CAL_1.BF.DLL_GM_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_GM_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_GM_CAL_1.BF.DLL_GM_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_DLL_GM_CAL_BIN_SEARCH_ENABLE_LANE  DLL_GM_CAL_1.BF.DLL_GM_CAL_BIN_SEARCH_ENABLE_LANE

// 0x54	DLL_GM_CAL_2		TBD
typedef union {
	struct {
		uint8_t DLL_GM_CAL_SAMPLE_PULSE_DIV_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_2_t;
__xdata __at( 0x550 ) volatile DLL_GM_CAL_2_t DLL_GM_CAL_2;
#define reg_DLL_GM_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_GM_CAL_2.BF.DLL_GM_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x55	DLL_GM_CAL_3		TBD
typedef union {
	struct {
		uint8_t DLL_GM_CAL_CAL_EN_EXT_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_GM_CAL_INDV_EXT_EN_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_GM_CAL_TIMEOUT_STEPS_LANE_2_0        : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t DLL_GM_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_3_t;
__xdata __at( 0x554 ) volatile DLL_GM_CAL_3_t DLL_GM_CAL_3;
#define reg_DLL_GM_CAL_CAL_EN_EXT_LANE  DLL_GM_CAL_3.BF.DLL_GM_CAL_CAL_EN_EXT_LANE
#define reg_DLL_GM_CAL_INDV_EXT_EN_LANE  DLL_GM_CAL_3.BF.DLL_GM_CAL_INDV_EXT_EN_LANE
#define reg_DLL_GM_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_GM_CAL_3.BF.DLL_GM_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_DLL_GM_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  DLL_GM_CAL_3.BF.DLL_GM_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x56	DLL_GM_CAL_4		TBD
typedef union {
	struct {
		uint8_t DLL_GM_CAL_CAL_DONE_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t DLL_GM_CAL_DUMMY_CLK_EXT_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_GM_CAL_VAL_MIN_LANE_2_0              : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t DLL_GM_CAL_VAL_MAX_LANE_2_0              : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_4_t;
__xdata __at( 0x558 ) volatile DLL_GM_CAL_4_t DLL_GM_CAL_4;
#define reg_DLL_GM_CAL_CAL_DONE_RD_LANE  DLL_GM_CAL_4.BF.DLL_GM_CAL_CAL_DONE_RD_LANE
#define reg_DLL_GM_CAL_DUMMY_CLK_EXT_LANE  DLL_GM_CAL_4.BF.DLL_GM_CAL_DUMMY_CLK_EXT_LANE
#define reg_DLL_GM_CAL_VAL_MIN_LANE_2_0  DLL_GM_CAL_4.BF.DLL_GM_CAL_VAL_MIN_LANE_2_0
#define reg_DLL_GM_CAL_VAL_MAX_LANE_2_0  DLL_GM_CAL_4.BF.DLL_GM_CAL_VAL_MAX_LANE_2_0

// 0x57	DLL_GM_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t DLL_GM_CAL_UNDERFLOW_RD_LANE             : 1;	/*      2       r 1'h0*/
		uint8_t DLL_GM_CAL_OVERFLOW_RD_LANE              : 1;	/*      3       r 1'h0*/
		uint8_t DLL_GM_CAL_TIMEOUT_RD_LANE               : 1;	/*      4       r 1'h0*/
		uint8_t DLL_GM_CAL_RESULT_EXT_LANE_2_0           : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_5_t;
__xdata __at( 0x55c ) volatile DLL_GM_CAL_5_t DLL_GM_CAL_5;
#define reg_DLL_GM_CAL_UNDERFLOW_RD_LANE  DLL_GM_CAL_5.BF.DLL_GM_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_GM_CAL_OVERFLOW_RD_LANE  DLL_GM_CAL_5.BF.DLL_GM_CAL_OVERFLOW_RD_LANE
#define reg_DLL_GM_CAL_TIMEOUT_RD_LANE  DLL_GM_CAL_5.BF.DLL_GM_CAL_TIMEOUT_RD_LANE
#define reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0  DLL_GM_CAL_5.BF.DLL_GM_CAL_RESULT_EXT_LANE_2_0

// 0x58	DLL_GM_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t DLL_GM_CAL_RESULT_RD_LANE_2_0            : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_6_t;
__xdata __at( 0x560 ) volatile DLL_GM_CAL_6_t DLL_GM_CAL_6;
#define reg_DLL_GM_CAL_RESULT_RD_LANE_2_0  DLL_GM_CAL_6.BF.DLL_GM_CAL_RESULT_RD_LANE_2_0

// 0x59	EOM_DLL_GM_CAL_0		TBD
typedef union {
	struct {
		uint8_t EOM_DLL_GM_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_INDV_EXT_EN_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_DIR_INV_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t EOM_DLL_GM_CAL_BYPASS_EN_LANE            : 1;	/*      6     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_GM_CAL_0_t;
__xdata __at( 0x564 ) volatile EOM_DLL_GM_CAL_0_t EOM_DLL_GM_CAL_0;
#define reg_EOM_DLL_GM_CAL_DUMMY_CLK_EXT_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_DUMMY_CLK_EXT_LANE
#define reg_EOM_DLL_GM_CAL_CAL_EN_EXT_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_CAL_EN_EXT_LANE
#define reg_EOM_DLL_GM_CAL_INDV_EXT_EN_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_INDV_EXT_EN_LANE
#define reg_EOM_DLL_GM_CAL_DIR_INV_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_DIR_INV_LANE
#define reg_EOM_DLL_GM_CAL_CMP_CTRL_LANE_1_0  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_CMP_CTRL_LANE_1_0
#define reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_BYPASS_EN_LANE
#define reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_SINGLE_EN_LANE

// 0x5a	EOM_DLL_GM_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t EOM_DLL_GM_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t EOM_DLL_GM_CAL_OVERFLOW_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t EOM_DLL_GM_CAL_TIMEOUT_RD_LANE           : 1;	/*      3       r 1'h0*/
		uint8_t EOM_DLL_GM_CAL_CAL_DONE_RD_LANE          : 1;	/*      4       r 1'h0*/
		uint8_t EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_GM_CAL_1_t;
__xdata __at( 0x568 ) volatile EOM_DLL_GM_CAL_1_t EOM_DLL_GM_CAL_1;
#define reg_EOM_DLL_GM_CAL_UNDERFLOW_RD_LANE  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_UNDERFLOW_RD_LANE
#define reg_EOM_DLL_GM_CAL_OVERFLOW_RD_LANE  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_OVERFLOW_RD_LANE
#define reg_EOM_DLL_GM_CAL_TIMEOUT_RD_LANE  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_TIMEOUT_RD_LANE
#define reg_EOM_DLL_GM_CAL_CAL_DONE_RD_LANE  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_CAL_DONE_RD_LANE
#define reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0

// 0x5b	EOM_DLL_GM_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0        : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_GM_CAL_2_t;
__xdata __at( 0x56c ) volatile EOM_DLL_GM_CAL_2_t EOM_DLL_GM_CAL_2;
#define reg_EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0  EOM_DLL_GM_CAL_2.BF.EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0

// 0x5c	DLL_VDDA_CAL_0		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_DIR_INV_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t DLL_VDDA_CAL_CONT_NUM_LANE_3_0           : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t DLL_VDDA_CAL_BYPASS_EN_LANE              : 1;	/*      5     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_CONT_EN_LANE                : 1;	/*      6     r/w 1'h1*/
		uint8_t DLL_VDDA_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_0_t;
__xdata __at( 0x570 ) volatile DLL_VDDA_CAL_0_t DLL_VDDA_CAL_0;
#define reg_DLL_VDDA_CAL_DIR_INV_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_DIR_INV_LANE
#define reg_DLL_VDDA_CAL_CONT_NUM_LANE_3_0  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_CONT_NUM_LANE_3_0
#define reg_DLL_VDDA_CAL_BYPASS_EN_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_BYPASS_EN_LANE
#define reg_DLL_VDDA_CAL_CONT_EN_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_CONT_EN_LANE
#define reg_DLL_VDDA_CAL_SINGLE_EN_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_SINGLE_EN_LANE

// 0x5d	DLL_VDDA_CAL_1		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DLL_VDDA_CAL_CMP_CTRL_LANE_1_0           : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_1_t;
__xdata __at( 0x574 ) volatile DLL_VDDA_CAL_1_t DLL_VDDA_CAL_1;
#define reg_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0  DLL_VDDA_CAL_1.BF.DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_VDDA_CAL_1.BF.DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0  DLL_VDDA_CAL_1.BF.DLL_VDDA_CAL_CMP_CTRL_LANE_1_0

// 0x5e	DLL_VDDA_CAL_2		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_RESULT_AVG_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t DLL_VDDA_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t DLL_VDDA_CAL_BIN_SEARCH_ENABLE_LANE      : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_2_t;
__xdata __at( 0x578 ) volatile DLL_VDDA_CAL_2_t DLL_VDDA_CAL_2;
#define reg_DLL_VDDA_CAL_TIMEOUT_CHK_DIS_LANE  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_VDDA_CAL_RESULT_AVG_EN_LANE  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_VDDA_CAL_TOGGLE_TIMES_LANE_2_0  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_VDDA_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_DLL_VDDA_CAL_BIN_SEARCH_ENABLE_LANE  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_BIN_SEARCH_ENABLE_LANE

// 0x5f	DLL_VDDA_CAL_3		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_3_t;
__xdata __at( 0x57c ) volatile DLL_VDDA_CAL_3_t DLL_VDDA_CAL_3;
#define reg_DLL_VDDA_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_VDDA_CAL_3.BF.DLL_VDDA_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x60	DLL_VDDA_CAL_4		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_INDV_EXT_EN_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t DLL_VDDA_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_4_t;
__xdata __at( 0x580 ) volatile DLL_VDDA_CAL_4_t DLL_VDDA_CAL_4;
#define reg_DLL_VDDA_CAL_CAL_EN_EXT_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_CAL_EN_EXT_LANE
#define reg_DLL_VDDA_CAL_INDV_EXT_EN_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_INDV_EXT_EN_LANE
#define reg_DLL_VDDA_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_DLL_VDDA_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x61	DLL_VDDA_CAL_5		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t DLL_VDDA_CAL_DUMMY_CLK_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_VAL_MAX_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h2b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_5_t;
__xdata __at( 0x584 ) volatile DLL_VDDA_CAL_5_t DLL_VDDA_CAL_5;
#define reg_DLL_VDDA_CAL_CAL_DONE_RD_LANE  DLL_VDDA_CAL_5.BF.DLL_VDDA_CAL_CAL_DONE_RD_LANE
#define reg_DLL_VDDA_CAL_DUMMY_CLK_EXT_LANE  DLL_VDDA_CAL_5.BF.DLL_VDDA_CAL_DUMMY_CLK_EXT_LANE
#define reg_DLL_VDDA_CAL_VAL_MAX_LANE_5_0  DLL_VDDA_CAL_5.BF.DLL_VDDA_CAL_VAL_MAX_LANE_5_0

// 0x62	DLL_VDDA_CAL_6		TBD
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_OVERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t DLL_VDDA_CAL_TIMEOUT_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t DLL_VDDA_CAL_VAL_MIN_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_6_t;
__xdata __at( 0x588 ) volatile DLL_VDDA_CAL_6_t DLL_VDDA_CAL_6;
#define reg_DLL_VDDA_CAL_OVERFLOW_RD_LANE  DLL_VDDA_CAL_6.BF.DLL_VDDA_CAL_OVERFLOW_RD_LANE
#define reg_DLL_VDDA_CAL_TIMEOUT_RD_LANE  DLL_VDDA_CAL_6.BF.DLL_VDDA_CAL_TIMEOUT_RD_LANE
#define reg_DLL_VDDA_CAL_VAL_MIN_LANE_5_0  DLL_VDDA_CAL_6.BF.DLL_VDDA_CAL_VAL_MIN_LANE_5_0

// 0x63	DLL_VDDA_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_VDDA_CAL_UNDERFLOW_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t DLL_VDDA_CAL_RESULT_EXT_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_7_t;
__xdata __at( 0x58c ) volatile DLL_VDDA_CAL_7_t DLL_VDDA_CAL_7;
#define reg_DLL_VDDA_CAL_UNDERFLOW_RD_LANE  DLL_VDDA_CAL_7.BF.DLL_VDDA_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0  DLL_VDDA_CAL_7.BF.DLL_VDDA_CAL_RESULT_EXT_LANE_5_0

// 0x64	DLL_VDDA_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t DLL_VDDA_CAL_RESULT_RD_LANE_5_0          : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_8_t;
__xdata __at( 0x590 ) volatile DLL_VDDA_CAL_8_t DLL_VDDA_CAL_8;
#define reg_DLL_VDDA_CAL_RESULT_RD_LANE_5_0  DLL_VDDA_CAL_8.BF.DLL_VDDA_CAL_RESULT_RD_LANE_5_0

// 0x65	EOM_DLL_VDDA_CAL_0		TBD
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_DIR_INV_LANE            : 1;	/*      0     r/w 1'h1*/
		uint8_t EOM_DLL_VDDA_CAL_CONT_NUM_LANE_3_0       : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t EOM_DLL_VDDA_CAL_BYPASS_EN_LANE          : 1;	/*      5     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CONT_EN_LANE            : 1;	/*      6     r/w 1'h1*/
		uint8_t EOM_DLL_VDDA_CAL_SINGLE_EN_LANE          : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_0_t;
__xdata __at( 0x594 ) volatile EOM_DLL_VDDA_CAL_0_t EOM_DLL_VDDA_CAL_0;
#define reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_DIR_INV_LANE
#define reg_EOM_DLL_VDDA_CAL_CONT_NUM_LANE_3_0  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_CONT_NUM_LANE_3_0
#define reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_BYPASS_EN_LANE
#define reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_CONT_EN_LANE
#define reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_SINGLE_EN_LANE

// 0x66	EOM_DLL_VDDA_CAL_1		TBD
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_DUMMY_CLK_EXT_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CAL_EN_EXT_LANE         : 1;	/*      1     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_INDV_EXT_EN_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t EOM_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0       : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_1_t;
__xdata __at( 0x598 ) volatile EOM_DLL_VDDA_CAL_1_t EOM_DLL_VDDA_CAL_1;
#define reg_EOM_DLL_VDDA_CAL_DUMMY_CLK_EXT_LANE  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_DUMMY_CLK_EXT_LANE
#define reg_EOM_DLL_VDDA_CAL_CAL_EN_EXT_LANE  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_CAL_EN_EXT_LANE
#define reg_EOM_DLL_VDDA_CAL_INDV_EXT_EN_LANE  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_INDV_EXT_EN_LANE
#define reg_EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_EOM_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0

// 0x67	EOM_DLL_VDDA_CAL_2		TBD
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CAL_DONE_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_VAL_MAX_LANE_5_0        : 6;	/*  [7:2]     r/w 6'h2b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_2_t;
__xdata __at( 0x59c ) volatile EOM_DLL_VDDA_CAL_2_t EOM_DLL_VDDA_CAL_2;
#define reg_EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE  EOM_DLL_VDDA_CAL_2.BF.EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_CAL_DONE_RD_LANE  EOM_DLL_VDDA_CAL_2.BF.EOM_DLL_VDDA_CAL_CAL_DONE_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_VAL_MAX_LANE_5_0  EOM_DLL_VDDA_CAL_2.BF.EOM_DLL_VDDA_CAL_VAL_MAX_LANE_5_0

// 0x68	EOM_DLL_VDDA_CAL_3		TBD
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_UNDERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_OVERFLOW_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_3_t;
__xdata __at( 0x5a0 ) volatile EOM_DLL_VDDA_CAL_3_t EOM_DLL_VDDA_CAL_3;
#define reg_EOM_DLL_VDDA_CAL_UNDERFLOW_RD_LANE  EOM_DLL_VDDA_CAL_3.BF.EOM_DLL_VDDA_CAL_UNDERFLOW_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_OVERFLOW_RD_LANE  EOM_DLL_VDDA_CAL_3.BF.EOM_DLL_VDDA_CAL_OVERFLOW_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0  EOM_DLL_VDDA_CAL_3.BF.EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0

// 0x69	EOM_DLL_VDDA_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0      : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_4_t;
__xdata __at( 0x5a4 ) volatile EOM_DLL_VDDA_CAL_4_t EOM_DLL_VDDA_CAL_4;
#define reg_EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0  EOM_DLL_VDDA_CAL_4.BF.EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0

// 0x6a	DLL_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t DLL_DCC_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h1*/
		uint8_t DLL_DCC_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t DLL_DCC_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t DLL_DCC_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t DLL_DCC_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_0_t;
__xdata __at( 0x5a8 ) volatile DLL_DCC_CAL_0_t DLL_DCC_CAL_0;
#define reg_DLL_DCC_CAL_DIR_INV_LANE  DLL_DCC_CAL_0.BF.DLL_DCC_CAL_DIR_INV_LANE
#define reg_DLL_DCC_CAL_CONT_NUM_LANE_3_0  DLL_DCC_CAL_0.BF.DLL_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_DLL_DCC_CAL_BYPASS_EN_LANE  DLL_DCC_CAL_0.BF.DLL_DCC_CAL_BYPASS_EN_LANE
#define reg_DLL_DCC_CAL_CONT_EN_LANE  DLL_DCC_CAL_0.BF.DLL_DCC_CAL_CONT_EN_LANE
#define reg_DLL_DCC_CAL_SINGLE_EN_LANE  DLL_DCC_CAL_0.BF.DLL_DCC_CAL_SINGLE_EN_LANE

// 0x6b	DLL_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t DLL_DCC_CAL_RESULT_AVG_EN_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t DLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t DLL_DCC_CAL_CMP_CTRL_LANE_1_0            : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_1_t;
__xdata __at( 0x5ac ) volatile DLL_DCC_CAL_1_t DLL_DCC_CAL_1;
#define reg_DLL_DCC_CAL_RESULT_AVG_EN_LANE  DLL_DCC_CAL_1.BF.DLL_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_DCC_CAL_1.BF.DLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_DLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  DLL_DCC_CAL_1.BF.DLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_DCC_CAL_CMP_CTRL_LANE_1_0  DLL_DCC_CAL_1.BF.DLL_DCC_CAL_CMP_CTRL_LANE_1_0

// 0x6c	DLL_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t DLL_DCC_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t DLL_DCC_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t DLL_DCC_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t DLL_DCC_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_DCC_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t DLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_2_t;
__xdata __at( 0x5b0 ) volatile DLL_DCC_CAL_2_t DLL_DCC_CAL_2;
#define reg_DLL_DCC_CAL_TIMEOUT_RD_LANE  DLL_DCC_CAL_2.BF.DLL_DCC_CAL_TIMEOUT_RD_LANE
#define reg_DLL_DCC_CAL_CAL_DONE_RD_LANE  DLL_DCC_CAL_2.BF.DLL_DCC_CAL_CAL_DONE_RD_LANE
#define reg_DLL_DCC_CAL_DUMMY_CLK_EXT_LANE  DLL_DCC_CAL_2.BF.DLL_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_DLL_DCC_CAL_CAL_EN_EXT_LANE  DLL_DCC_CAL_2.BF.DLL_DCC_CAL_CAL_EN_EXT_LANE
#define reg_DLL_DCC_CAL_INDV_EXT_EN_LANE  DLL_DCC_CAL_2.BF.DLL_DCC_CAL_INDV_EXT_EN_LANE
#define reg_DLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0  DLL_DCC_CAL_2.BF.DLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0

// 0x6d	DLL_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t DLL_DCC_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t DLL_DCC_CAL_VAL_MAX_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_3_t;
__xdata __at( 0x5b4 ) volatile DLL_DCC_CAL_3_t DLL_DCC_CAL_3;
#define reg_DLL_DCC_CAL_OVERFLOW_RD_LANE  DLL_DCC_CAL_3.BF.DLL_DCC_CAL_OVERFLOW_RD_LANE
#define reg_DLL_DCC_CAL_VAL_MAX_LANE_6_0  DLL_DCC_CAL_3.BF.DLL_DCC_CAL_VAL_MAX_LANE_6_0

// 0x6e	DLL_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t DLL_DCC_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t DLL_DCC_CAL_VAL_MIN_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_4_t;
__xdata __at( 0x5b8 ) volatile DLL_DCC_CAL_4_t DLL_DCC_CAL_4;
#define reg_DLL_DCC_CAL_UNDERFLOW_RD_LANE  DLL_DCC_CAL_4.BF.DLL_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_DCC_CAL_VAL_MIN_LANE_6_0  DLL_DCC_CAL_4.BF.DLL_DCC_CAL_VAL_MIN_LANE_6_0

// 0x6f	DLL_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_DCC_CAL_RESULT_EXT_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_5_t;
__xdata __at( 0x5bc ) volatile DLL_DCC_CAL_5_t DLL_DCC_CAL_5;
#define reg_DLL_DCC_CAL_RESULT_EXT_LANE_6_0  DLL_DCC_CAL_5.BF.DLL_DCC_CAL_RESULT_EXT_LANE_6_0

// 0x70	DLL_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_DCC_CAL_RESULT_RD_LANE_6_0           : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_DCC_CAL_6_t;
__xdata __at( 0x5c0 ) volatile DLL_DCC_CAL_6_t DLL_DCC_CAL_6;
#define reg_DLL_DCC_CAL_RESULT_RD_LANE_6_0  DLL_DCC_CAL_6.BF.DLL_DCC_CAL_RESULT_RD_LANE_6_0

// 0x71	RX_CLK_0		TBD
typedef union {
	struct {
		uint8_t RX_CLK_SETTING_EXT_LANE_12_10            : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RX_CLK_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CLK_CMP_CTRL_EXT_LANE_2_0             : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RX_CLK_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_0_t;
__xdata __at( 0x5c4 ) volatile RX_CLK_0_t RX_CLK_0;
#define reg_RX_CLK_SETTING_EXT_LANE_12_10  RX_CLK_0.BF.RX_CLK_SETTING_EXT_LANE_12_10
#define reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE  RX_CLK_0.BF.RX_CLK_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_CLK_CMP_CTRL_EXT_LANE_2_0  RX_CLK_0.BF.RX_CLK_CMP_CTRL_EXT_LANE_2_0
#define reg_RX_CLK_COMN_EXT_EN_LANE  RX_CLK_0.BF.RX_CLK_COMN_EXT_EN_LANE

// 0x72	RX_CLK_1		TBD
typedef union {
	struct {
		uint8_t RX_CLK_SETTING_EXT_LANE_9_2              : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_1_t;
__xdata __at( 0x5c8 ) volatile RX_CLK_1_t RX_CLK_1;
#define reg_RX_CLK_SETTING_EXT_LANE_9_2  RX_CLK_1.BF.RX_CLK_SETTING_EXT_LANE_9_2

// 0x73	RX_CLK_2		TBD
typedef union {
	struct {
		uint8_t RX_CLK_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RX_CLK_TOP_CONT_START_LANE               : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CLK_TOP_START_LANE                    : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CLK_UPDN_RD_LANE                      : 1;	/*      5       r 1'h0*/
		uint8_t RX_CLK_SETTING_EXT_LANE_1_0              : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_2_t;
__xdata __at( 0x5cc ) volatile RX_CLK_2_t RX_CLK_2;
#define reg_RX_CLK_TESTBUS_CORE_SEL_LANE_2_0  RX_CLK_2.BF.RX_CLK_TESTBUS_CORE_SEL_LANE_2_0
#define reg_RX_CLK_TOP_CONT_START_LANE  RX_CLK_2.BF.RX_CLK_TOP_CONT_START_LANE
#define reg_RX_CLK_TOP_START_LANE  RX_CLK_2.BF.RX_CLK_TOP_START_LANE
#define reg_RX_CLK_UPDN_RD_LANE  RX_CLK_2.BF.RX_CLK_UPDN_RD_LANE
#define reg_RX_CLK_SETTING_EXT_LANE_1_0  RX_CLK_2.BF.RX_CLK_SETTING_EXT_LANE_1_0

// 0x74	RX_CLK_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t RX_CLK_TOP_CONT_DONE_LANE                : 1;	/*      6       r 1'h0*/
		uint8_t RX_CLK_TOP_DONE_LANE                     : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_3_t;
__xdata __at( 0x5d0 ) volatile RX_CLK_3_t RX_CLK_3;
#define reg_RX_CLK_TOP_CONT_DONE_LANE  RX_CLK_3.BF.RX_CLK_TOP_CONT_DONE_LANE
#define reg_RX_CLK_TOP_DONE_LANE  RX_CLK_3.BF.RX_CLK_TOP_DONE_LANE

// 0x75	RX_ALIGN90_DD_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_DIR_INV_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_ALIGN90_DD_CAL_BYPASS_EN_LANE         : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_CONT_EN_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_ALIGN90_DD_CAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_0_t;
__xdata __at( 0x5d4 ) volatile RX_ALIGN90_DD_CAL_0_t RX_ALIGN90_DD_CAL_0;
#define reg_RX_ALIGN90_DD_CAL_DIR_INV_LANE  RX_ALIGN90_DD_CAL_0.BF.RX_ALIGN90_DD_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_DD_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_DD_CAL_0.BF.RX_ALIGN90_DD_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_DD_CAL_BYPASS_EN_LANE  RX_ALIGN90_DD_CAL_0.BF.RX_ALIGN90_DD_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_DD_CAL_CONT_EN_LANE  RX_ALIGN90_DD_CAL_0.BF.RX_ALIGN90_DD_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_DD_CAL_SINGLE_EN_LANE  RX_ALIGN90_DD_CAL_0.BF.RX_ALIGN90_DD_CAL_SINGLE_EN_LANE

// 0x76	RX_ALIGN90_DD_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_RESULT_AVG_EN_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_ALIGN90_DD_CAL_CMP_CTRL_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_1_t;
__xdata __at( 0x5d8 ) volatile RX_ALIGN90_DD_CAL_1_t RX_ALIGN90_DD_CAL_1;
#define reg_RX_ALIGN90_DD_CAL_RESULT_AVG_EN_LANE  RX_ALIGN90_DD_CAL_1.BF.RX_ALIGN90_DD_CAL_RESULT_AVG_EN_LANE
#define reg_RX_ALIGN90_DD_CAL_BIN_SEARCH_ENABLE_LANE  RX_ALIGN90_DD_CAL_1.BF.RX_ALIGN90_DD_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_RX_ALIGN90_DD_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_DD_CAL_1.BF.RX_ALIGN90_DD_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_DD_CAL_CMP_CTRL_LANE_2_0  RX_ALIGN90_DD_CAL_1.BF.RX_ALIGN90_DD_CAL_CMP_CTRL_LANE_2_0

// 0x77	RX_ALIGN90_DD_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_ALIGN90_DD_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RX_ALIGN90_DD_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_2_t;
__xdata __at( 0x5dc ) volatile RX_ALIGN90_DD_CAL_2_t RX_ALIGN90_DD_CAL_2;
#define reg_RX_ALIGN90_DD_CAL_TOGGLE_TIMES_LANE_2_0  RX_ALIGN90_DD_CAL_2.BF.RX_ALIGN90_DD_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_ALIGN90_DD_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_ALIGN90_DD_CAL_2.BF.RX_ALIGN90_DD_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_ALIGN90_DD_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_DD_CAL_2.BF.RX_ALIGN90_DD_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x78	RX_ALIGN90_DD_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_3_t;
__xdata __at( 0x5e0 ) volatile RX_ALIGN90_DD_CAL_3_t RX_ALIGN90_DD_CAL_3;
#define reg_RX_ALIGN90_DD_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_ALIGN90_DD_CAL_3.BF.RX_ALIGN90_DD_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x79	RX_ALIGN90_DD_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_SETTING_LANE_12        : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_ALIGN90_DD_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_4_t;
__xdata __at( 0x5e4 ) volatile RX_ALIGN90_DD_CAL_4_t RX_ALIGN90_DD_CAL_4;
#define reg_RX_ALIGN90_DD_CAL_SETTING_LANE_12  RX_ALIGN90_DD_CAL_4.BF.RX_ALIGN90_DD_CAL_SETTING_LANE_12
#define reg_RX_ALIGN90_DD_CAL_TIMEOUT_CHK_DIS_LANE  RX_ALIGN90_DD_CAL_4.BF.RX_ALIGN90_DD_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_ALIGN90_DD_CAL_TIMEOUT_STEPS_LANE_2_0  RX_ALIGN90_DD_CAL_4.BF.RX_ALIGN90_DD_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_ALIGN90_DD_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_ALIGN90_DD_CAL_4.BF.RX_ALIGN90_DD_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x7a	RX_ALIGN90_DD_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_SETTING_LANE_11_4      : 8;	/*  [7:0]     r/w 8'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_5_t;
__xdata __at( 0x5e8 ) volatile RX_ALIGN90_DD_CAL_5_t RX_ALIGN90_DD_CAL_5;
#define reg_RX_ALIGN90_DD_CAL_SETTING_LANE_11_4  RX_ALIGN90_DD_CAL_5.BF.RX_ALIGN90_DD_CAL_SETTING_LANE_11_4

// 0x7b	RX_ALIGN90_DD_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_CAL_DONE_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_DUMMY_CLK_EXT_LANE     : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_ALIGN90_DD_CAL_CAL_EN_EXT_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_INDV_EXT_EN_LANE       : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_SETTING_LANE_3_0       : 4;	/*  [7:4]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_6_t;
__xdata __at( 0x5ec ) volatile RX_ALIGN90_DD_CAL_6_t RX_ALIGN90_DD_CAL_6;
#define reg_RX_ALIGN90_DD_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_DD_CAL_6.BF.RX_ALIGN90_DD_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_DD_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_DD_CAL_6.BF.RX_ALIGN90_DD_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_DD_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_DD_CAL_6.BF.RX_ALIGN90_DD_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_DD_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_DD_CAL_6.BF.RX_ALIGN90_DD_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_DD_CAL_SETTING_LANE_3_0  RX_ALIGN90_DD_CAL_6.BF.RX_ALIGN90_DD_CAL_SETTING_LANE_3_0

// 0x7c	RX_ALIGN90_DD_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_OVERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_TIMEOUT_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_VAL_MIN_MSB_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_ALIGN90_DD_CAL_VAL_MAX_MSB_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_7_t;
__xdata __at( 0x5f0 ) volatile RX_ALIGN90_DD_CAL_7_t RX_ALIGN90_DD_CAL_7;
#define reg_RX_ALIGN90_DD_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_DD_CAL_7.BF.RX_ALIGN90_DD_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_DD_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_DD_CAL_7.BF.RX_ALIGN90_DD_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_DD_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_DD_CAL_7.BF.RX_ALIGN90_DD_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_ALIGN90_DD_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_DD_CAL_7.BF.RX_ALIGN90_DD_CAL_VAL_MAX_MSB_LANE_2_0

// 0x7d	RX_ALIGN90_DD_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_UNDERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_VAL_MAX_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_8_t;
__xdata __at( 0x5f4 ) volatile RX_ALIGN90_DD_CAL_8_t RX_ALIGN90_DD_CAL_8;
#define reg_RX_ALIGN90_DD_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_DD_CAL_8.BF.RX_ALIGN90_DD_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_DD_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_DD_CAL_8.BF.RX_ALIGN90_DD_CAL_VAL_MAX_LSB_LANE_6_0

// 0x7e	RX_ALIGN90_DD_CAL_9		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DD_CAL_DUMMY_CLK_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_DD_CAL_VAL_MIN_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_9_t;
__xdata __at( 0x5f8 ) volatile RX_ALIGN90_DD_CAL_9_t RX_ALIGN90_DD_CAL_9;
#define reg_RX_ALIGN90_DD_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_DD_CAL_9.BF.RX_ALIGN90_DD_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_DD_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_DD_CAL_9.BF.RX_ALIGN90_DD_CAL_VAL_MIN_LSB_LANE_6_0

// 0x7f	RX_ALIGN90_DD_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_ALIGN90_DD_CAL_RESULT_MSB_RD_LANE_2_0 : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_ALIGN90_DD_CAL_RESULT_MSB_EXT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_10_t;
__xdata __at( 0x5fc ) volatile RX_ALIGN90_DD_CAL_10_t RX_ALIGN90_DD_CAL_10;
#define reg_RX_ALIGN90_DD_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_DD_CAL_10.BF.RX_ALIGN90_DD_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_ALIGN90_DD_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_DD_CAL_10.BF.RX_ALIGN90_DD_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x80	RX_ALIGN90_DD_CAL_11		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DD_CAL_RESULT_LSB_EXT_LANE_6_0 : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_11_t;
__xdata __at( 0x600 ) volatile RX_ALIGN90_DD_CAL_11_t RX_ALIGN90_DD_CAL_11;
#define reg_RX_ALIGN90_DD_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_DD_CAL_11.BF.RX_ALIGN90_DD_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x81	RX_ALIGN90_DD_CAL_12		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DD_CAL_RESULT_LSB_RD_LANE_6_0 : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DD_CAL_12_t;
__xdata __at( 0x604 ) volatile RX_ALIGN90_DD_CAL_12_t RX_ALIGN90_DD_CAL_12;
#define reg_RX_ALIGN90_DD_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_DD_CAL_12.BF.RX_ALIGN90_DD_CAL_RESULT_LSB_RD_LANE_6_0

// 0x82	RX_ALIGN90_DE_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DE_CAL_DIR_INV_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_ALIGN90_DE_CAL_BYPASS_EN_LANE         : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_CONT_EN_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_ALIGN90_DE_CAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_0_t;
__xdata __at( 0x608 ) volatile RX_ALIGN90_DE_CAL_0_t RX_ALIGN90_DE_CAL_0;
#define reg_RX_ALIGN90_DE_CAL_DIR_INV_LANE  RX_ALIGN90_DE_CAL_0.BF.RX_ALIGN90_DE_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_DE_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_DE_CAL_0.BF.RX_ALIGN90_DE_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_DE_CAL_BYPASS_EN_LANE  RX_ALIGN90_DE_CAL_0.BF.RX_ALIGN90_DE_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_DE_CAL_CONT_EN_LANE  RX_ALIGN90_DE_CAL_0.BF.RX_ALIGN90_DE_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_DE_CAL_SINGLE_EN_LANE  RX_ALIGN90_DE_CAL_0.BF.RX_ALIGN90_DE_CAL_SINGLE_EN_LANE

// 0x83	RX_ALIGN90_DE_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DE_CAL_SETTING_LANE_12_11     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_ALIGN90_DE_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_ALIGN90_DE_CAL_CMP_CTRL_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_1_t;
__xdata __at( 0x60c ) volatile RX_ALIGN90_DE_CAL_1_t RX_ALIGN90_DE_CAL_1;
#define reg_RX_ALIGN90_DE_CAL_SETTING_LANE_12_11  RX_ALIGN90_DE_CAL_1.BF.RX_ALIGN90_DE_CAL_SETTING_LANE_12_11
#define reg_RX_ALIGN90_DE_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_DE_CAL_1.BF.RX_ALIGN90_DE_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_DE_CAL_CMP_CTRL_LANE_2_0  RX_ALIGN90_DE_CAL_1.BF.RX_ALIGN90_DE_CAL_CMP_CTRL_LANE_2_0

// 0x84	RX_ALIGN90_DE_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DE_CAL_SETTING_LANE_10_3      : 8;	/*  [7:0]     r/w 8'h24*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_2_t;
__xdata __at( 0x610 ) volatile RX_ALIGN90_DE_CAL_2_t RX_ALIGN90_DE_CAL_2;
#define reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3  RX_ALIGN90_DE_CAL_2.BF.RX_ALIGN90_DE_CAL_SETTING_LANE_10_3

// 0x85	RX_ALIGN90_DE_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DE_CAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_DUMMY_CLK_EXT_LANE     : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_ALIGN90_DE_CAL_CAL_EN_EXT_LANE        : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_INDV_EXT_EN_LANE       : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_SETTING_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_3_t;
__xdata __at( 0x614 ) volatile RX_ALIGN90_DE_CAL_3_t RX_ALIGN90_DE_CAL_3;
#define reg_RX_ALIGN90_DE_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_DE_CAL_3.BF.RX_ALIGN90_DE_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_DE_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_DE_CAL_3.BF.RX_ALIGN90_DE_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_DE_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_DE_CAL_3.BF.RX_ALIGN90_DE_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_DE_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_DE_CAL_3.BF.RX_ALIGN90_DE_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_DE_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_DE_CAL_3.BF.RX_ALIGN90_DE_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0  RX_ALIGN90_DE_CAL_3.BF.RX_ALIGN90_DE_CAL_SETTING_LANE_2_0

// 0x86	RX_ALIGN90_DE_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_DE_CAL_UNDERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_OVERFLOW_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_VAL_MAX_MSB_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RX_ALIGN90_DE_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_4_t;
__xdata __at( 0x618 ) volatile RX_ALIGN90_DE_CAL_4_t RX_ALIGN90_DE_CAL_4;
#define reg_RX_ALIGN90_DE_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_DE_CAL_4.BF.RX_ALIGN90_DE_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_DE_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_DE_CAL_4.BF.RX_ALIGN90_DE_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_DE_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_DE_CAL_4.BF.RX_ALIGN90_DE_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_ALIGN90_DE_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_DE_CAL_4.BF.RX_ALIGN90_DE_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x87	RX_ALIGN90_DE_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DE_CAL_DUMMY_CLK_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_DE_CAL_RESULT_MSB_EXT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_ALIGN90_DE_CAL_VAL_MIN_MSB_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_5_t;
__xdata __at( 0x61c ) volatile RX_ALIGN90_DE_CAL_5_t RX_ALIGN90_DE_CAL_5;
#define reg_RX_ALIGN90_DE_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_DE_CAL_5.BF.RX_ALIGN90_DE_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_DE_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_DE_CAL_5.BF.RX_ALIGN90_DE_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_ALIGN90_DE_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_DE_CAL_5.BF.RX_ALIGN90_DE_CAL_VAL_MIN_MSB_LANE_2_0

// 0x88	RX_ALIGN90_DE_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DE_CAL_VAL_MAX_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_6_t;
__xdata __at( 0x620 ) volatile RX_ALIGN90_DE_CAL_6_t RX_ALIGN90_DE_CAL_6;
#define reg_RX_ALIGN90_DE_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_DE_CAL_6.BF.RX_ALIGN90_DE_CAL_VAL_MAX_LSB_LANE_6_0

// 0x89	RX_ALIGN90_DE_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DE_CAL_VAL_MIN_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_7_t;
__xdata __at( 0x624 ) volatile RX_ALIGN90_DE_CAL_7_t RX_ALIGN90_DE_CAL_7;
#define reg_RX_ALIGN90_DE_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_DE_CAL_7.BF.RX_ALIGN90_DE_CAL_VAL_MIN_LSB_LANE_6_0

// 0x8a	RX_ALIGN90_DE_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DE_CAL_RESULT_LSB_EXT_LANE_6_0 : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_8_t;
__xdata __at( 0x628 ) volatile RX_ALIGN90_DE_CAL_8_t RX_ALIGN90_DE_CAL_8;
#define reg_RX_ALIGN90_DE_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_DE_CAL_8.BF.RX_ALIGN90_DE_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x8b	RX_ALIGN90_DE_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_ALIGN90_DE_CAL_RESULT_MSB_RD_LANE_2_0 : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_9_t;
__xdata __at( 0x62c ) volatile RX_ALIGN90_DE_CAL_9_t RX_ALIGN90_DE_CAL_9;
#define reg_RX_ALIGN90_DE_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_DE_CAL_9.BF.RX_ALIGN90_DE_CAL_RESULT_MSB_RD_LANE_2_0

// 0x8c	RX_ALIGN90_DE_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_DE_CAL_RESULT_LSB_RD_LANE_6_0 : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_DE_CAL_10_t;
__xdata __at( 0x630 ) volatile RX_ALIGN90_DE_CAL_10_t RX_ALIGN90_DE_CAL_10;
#define reg_RX_ALIGN90_DE_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_DE_CAL_10.BF.RX_ALIGN90_DE_CAL_RESULT_LSB_RD_LANE_6_0

// 0x8d	RX_ALIGN90_EE_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_EE_CAL_DIR_INV_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_ALIGN90_EE_CAL_BYPASS_EN_LANE         : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_CONT_EN_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_ALIGN90_EE_CAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_0_t;
__xdata __at( 0x634 ) volatile RX_ALIGN90_EE_CAL_0_t RX_ALIGN90_EE_CAL_0;
#define reg_RX_ALIGN90_EE_CAL_DIR_INV_LANE  RX_ALIGN90_EE_CAL_0.BF.RX_ALIGN90_EE_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_EE_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_EE_CAL_0.BF.RX_ALIGN90_EE_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_EE_CAL_BYPASS_EN_LANE  RX_ALIGN90_EE_CAL_0.BF.RX_ALIGN90_EE_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_EE_CAL_CONT_EN_LANE  RX_ALIGN90_EE_CAL_0.BF.RX_ALIGN90_EE_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_EE_CAL_SINGLE_EN_LANE  RX_ALIGN90_EE_CAL_0.BF.RX_ALIGN90_EE_CAL_SINGLE_EN_LANE

// 0x8e	RX_ALIGN90_EE_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_EE_CAL_SETTING_LANE_12_11     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_ALIGN90_EE_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_ALIGN90_EE_CAL_CMP_CTRL_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_1_t;
__xdata __at( 0x638 ) volatile RX_ALIGN90_EE_CAL_1_t RX_ALIGN90_EE_CAL_1;
#define reg_RX_ALIGN90_EE_CAL_SETTING_LANE_12_11  RX_ALIGN90_EE_CAL_1.BF.RX_ALIGN90_EE_CAL_SETTING_LANE_12_11
#define reg_RX_ALIGN90_EE_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_EE_CAL_1.BF.RX_ALIGN90_EE_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_EE_CAL_CMP_CTRL_LANE_2_0  RX_ALIGN90_EE_CAL_1.BF.RX_ALIGN90_EE_CAL_CMP_CTRL_LANE_2_0

// 0x8f	RX_ALIGN90_EE_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_EE_CAL_SETTING_LANE_10_3      : 8;	/*  [7:0]     r/w 8'h30*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_2_t;
__xdata __at( 0x63c ) volatile RX_ALIGN90_EE_CAL_2_t RX_ALIGN90_EE_CAL_2;
#define reg_RX_ALIGN90_EE_CAL_SETTING_LANE_10_3  RX_ALIGN90_EE_CAL_2.BF.RX_ALIGN90_EE_CAL_SETTING_LANE_10_3

// 0x90	RX_ALIGN90_EE_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_EE_CAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_DUMMY_CLK_EXT_LANE     : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_ALIGN90_EE_CAL_CAL_EN_EXT_LANE        : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_INDV_EXT_EN_LANE       : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_SETTING_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_3_t;
__xdata __at( 0x640 ) volatile RX_ALIGN90_EE_CAL_3_t RX_ALIGN90_EE_CAL_3;
#define reg_RX_ALIGN90_EE_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_EE_CAL_3.BF.RX_ALIGN90_EE_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_EE_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_EE_CAL_3.BF.RX_ALIGN90_EE_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_EE_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_EE_CAL_3.BF.RX_ALIGN90_EE_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_EE_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_EE_CAL_3.BF.RX_ALIGN90_EE_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_EE_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_EE_CAL_3.BF.RX_ALIGN90_EE_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_EE_CAL_SETTING_LANE_2_0  RX_ALIGN90_EE_CAL_3.BF.RX_ALIGN90_EE_CAL_SETTING_LANE_2_0

// 0x91	RX_ALIGN90_EE_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_EE_CAL_UNDERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_OVERFLOW_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_VAL_MAX_MSB_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_ALIGN90_EE_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_4_t;
__xdata __at( 0x644 ) volatile RX_ALIGN90_EE_CAL_4_t RX_ALIGN90_EE_CAL_4;
#define reg_RX_ALIGN90_EE_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_EE_CAL_4.BF.RX_ALIGN90_EE_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_EE_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_EE_CAL_4.BF.RX_ALIGN90_EE_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_EE_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_EE_CAL_4.BF.RX_ALIGN90_EE_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_ALIGN90_EE_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_EE_CAL_4.BF.RX_ALIGN90_EE_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x92	RX_ALIGN90_EE_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_EE_CAL_DUMMY_CLK_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_EE_CAL_RESULT_MSB_EXT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_ALIGN90_EE_CAL_VAL_MIN_MSB_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_5_t;
__xdata __at( 0x648 ) volatile RX_ALIGN90_EE_CAL_5_t RX_ALIGN90_EE_CAL_5;
#define reg_RX_ALIGN90_EE_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_EE_CAL_5.BF.RX_ALIGN90_EE_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_EE_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_EE_CAL_5.BF.RX_ALIGN90_EE_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_ALIGN90_EE_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_EE_CAL_5.BF.RX_ALIGN90_EE_CAL_VAL_MIN_MSB_LANE_2_0

// 0x93	RX_ALIGN90_EE_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_EE_CAL_VAL_MAX_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_6_t;
__xdata __at( 0x64c ) volatile RX_ALIGN90_EE_CAL_6_t RX_ALIGN90_EE_CAL_6;
#define reg_RX_ALIGN90_EE_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_EE_CAL_6.BF.RX_ALIGN90_EE_CAL_VAL_MAX_LSB_LANE_6_0

// 0x94	RX_ALIGN90_EE_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_EE_CAL_VAL_MIN_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_7_t;
__xdata __at( 0x650 ) volatile RX_ALIGN90_EE_CAL_7_t RX_ALIGN90_EE_CAL_7;
#define reg_RX_ALIGN90_EE_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_EE_CAL_7.BF.RX_ALIGN90_EE_CAL_VAL_MIN_LSB_LANE_6_0

// 0x95	RX_ALIGN90_EE_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_EE_CAL_RESULT_LSB_EXT_LANE_6_0 : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_8_t;
__xdata __at( 0x654 ) volatile RX_ALIGN90_EE_CAL_8_t RX_ALIGN90_EE_CAL_8;
#define reg_RX_ALIGN90_EE_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_EE_CAL_8.BF.RX_ALIGN90_EE_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x96	RX_ALIGN90_EE_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_ALIGN90_EE_CAL_RESULT_MSB_RD_LANE_2_0 : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_9_t;
__xdata __at( 0x658 ) volatile RX_ALIGN90_EE_CAL_9_t RX_ALIGN90_EE_CAL_9;
#define reg_RX_ALIGN90_EE_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_EE_CAL_9.BF.RX_ALIGN90_EE_CAL_RESULT_MSB_RD_LANE_2_0

// 0x97	RX_ALIGN90_EE_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_EE_CAL_RESULT_LSB_RD_LANE_6_0 : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_EE_CAL_10_t;
__xdata __at( 0x65c ) volatile RX_ALIGN90_EE_CAL_10_t RX_ALIGN90_EE_CAL_10;
#define reg_RX_ALIGN90_EE_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_EE_CAL_10.BF.RX_ALIGN90_EE_CAL_RESULT_LSB_RD_LANE_6_0

// 0x98	RX_DCC1_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DCC1_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DCC1_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DCC1_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DCC1_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_0_t;
__xdata __at( 0x660 ) volatile RX_DCC1_CAL_0_t RX_DCC1_CAL_0;
#define reg_RX_DCC1_CAL_DIR_INV_LANE  RX_DCC1_CAL_0.BF.RX_DCC1_CAL_DIR_INV_LANE
#define reg_RX_DCC1_CAL_CONT_NUM_LANE_3_0  RX_DCC1_CAL_0.BF.RX_DCC1_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC1_CAL_BYPASS_EN_LANE  RX_DCC1_CAL_0.BF.RX_DCC1_CAL_BYPASS_EN_LANE
#define reg_RX_DCC1_CAL_CONT_EN_LANE  RX_DCC1_CAL_0.BF.RX_DCC1_CAL_CONT_EN_LANE
#define reg_RX_DCC1_CAL_SINGLE_EN_LANE  RX_DCC1_CAL_0.BF.RX_DCC1_CAL_SINGLE_EN_LANE

// 0x99	RX_DCC1_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC1_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_1_t;
__xdata __at( 0x664 ) volatile RX_DCC1_CAL_1_t RX_DCC1_CAL_1;
#define reg_RX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_DCC1_CAL_1.BF.RX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC1_CAL_1.BF.RX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC1_CAL_CMP_CTRL_LANE_2_0  RX_DCC1_CAL_1.BF.RX_DCC1_CAL_CMP_CTRL_LANE_2_0

// 0x9a	RX_DCC1_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC1_CAL_RESULT_AVG_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_DCC1_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_2_t;
__xdata __at( 0x668 ) volatile RX_DCC1_CAL_2_t RX_DCC1_CAL_2;
#define reg_RX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE  RX_DCC1_CAL_2.BF.RX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_DCC1_CAL_RESULT_AVG_EN_LANE  RX_DCC1_CAL_2.BF.RX_DCC1_CAL_RESULT_AVG_EN_LANE
#define reg_RX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0  RX_DCC1_CAL_2.BF.RX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_DCC1_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC1_CAL_2.BF.RX_DCC1_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x9b	RX_DCC1_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_SETTING_LANE_12_11           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DCC1_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_3_t;
__xdata __at( 0x66c ) volatile RX_DCC1_CAL_3_t RX_DCC1_CAL_3;
#define reg_RX_DCC1_CAL_SETTING_LANE_12_11  RX_DCC1_CAL_3.BF.RX_DCC1_CAL_SETTING_LANE_12_11
#define reg_RX_DCC1_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC1_CAL_3.BF.RX_DCC1_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DCC1_CAL_3.BF.RX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x9c	RX_DCC1_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_SETTING_LANE_10_3            : 8;	/*  [7:0]     r/w 8'h1c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_4_t;
__xdata __at( 0x670 ) volatile RX_DCC1_CAL_4_t RX_DCC1_CAL_4;
#define reg_RX_DCC1_CAL_SETTING_LANE_10_3  RX_DCC1_CAL_4.BF.RX_DCC1_CAL_SETTING_LANE_10_3

// 0x9d	RX_DCC1_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC1_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC1_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_DCC1_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_DCC1_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_DCC1_CAL_SETTING_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_5_t;
__xdata __at( 0x674 ) volatile RX_DCC1_CAL_5_t RX_DCC1_CAL_5;
#define reg_RX_DCC1_CAL_TIMEOUT_RD_LANE  RX_DCC1_CAL_5.BF.RX_DCC1_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC1_CAL_CAL_DONE_RD_LANE  RX_DCC1_CAL_5.BF.RX_DCC1_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC1_CAL_DUMMY_CLK_EXT_LANE  RX_DCC1_CAL_5.BF.RX_DCC1_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC1_CAL_CAL_EN_EXT_LANE  RX_DCC1_CAL_5.BF.RX_DCC1_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC1_CAL_INDV_EXT_EN_LANE  RX_DCC1_CAL_5.BF.RX_DCC1_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC1_CAL_SETTING_LANE_2_0  RX_DCC1_CAL_5.BF.RX_DCC1_CAL_SETTING_LANE_2_0

// 0x9e	RX_DCC1_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_DCC1_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC1_CAL_OVERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC1_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC1_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_6_t;
__xdata __at( 0x678 ) volatile RX_DCC1_CAL_6_t RX_DCC1_CAL_6;
#define reg_RX_DCC1_CAL_UNDERFLOW_RD_LANE  RX_DCC1_CAL_6.BF.RX_DCC1_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC1_CAL_OVERFLOW_RD_LANE  RX_DCC1_CAL_6.BF.RX_DCC1_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC1_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC1_CAL_6.BF.RX_DCC1_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_DCC1_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC1_CAL_6.BF.RX_DCC1_CAL_VAL_MIN_MSB_LANE_2_0

// 0x9f	RX_DCC1_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC1_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC1_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h2f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_7_t;
__xdata __at( 0x67c ) volatile RX_DCC1_CAL_7_t RX_DCC1_CAL_7;
#define reg_RX_DCC1_CAL_DUMMY_CLK_RD_LANE  RX_DCC1_CAL_7.BF.RX_DCC1_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC1_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC1_CAL_7.BF.RX_DCC1_CAL_VAL_MAX_LSB_LANE_5_0

// 0xa0	RX_DCC1_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC1_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_8_t;
__xdata __at( 0x680 ) volatile RX_DCC1_CAL_8_t RX_DCC1_CAL_8;
#define reg_RX_DCC1_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC1_CAL_8.BF.RX_DCC1_CAL_VAL_MIN_LSB_LANE_5_0

// 0xa1	RX_DCC1_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC1_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_9_t;
__xdata __at( 0x684 ) volatile RX_DCC1_CAL_9_t RX_DCC1_CAL_9;
#define reg_RX_DCC1_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC1_CAL_9.BF.RX_DCC1_CAL_RESULT_LSB_EXT_LANE_5_0

// 0xa2	RX_DCC1_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_DCC1_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_10_t;
__xdata __at( 0x688 ) volatile RX_DCC1_CAL_10_t RX_DCC1_CAL_10;
#define reg_RX_DCC1_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC1_CAL_10.BF.RX_DCC1_CAL_RESULT_MSB_RD_LANE_2_0

// 0xa3	RX_DCC1_CAL_11		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC1_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC1_CAL_11_t;
__xdata __at( 0x68c ) volatile RX_DCC1_CAL_11_t RX_DCC1_CAL_11;
#define reg_RX_DCC1_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC1_CAL_11.BF.RX_DCC1_CAL_RESULT_LSB_RD_LANE_5_0

// 0xa4	RX_DCC2_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC2_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DCC2_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DCC2_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DCC2_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DCC2_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_0_t;
__xdata __at( 0x690 ) volatile RX_DCC2_CAL_0_t RX_DCC2_CAL_0;
#define reg_RX_DCC2_CAL_DIR_INV_LANE  RX_DCC2_CAL_0.BF.RX_DCC2_CAL_DIR_INV_LANE
#define reg_RX_DCC2_CAL_CONT_NUM_LANE_3_0  RX_DCC2_CAL_0.BF.RX_DCC2_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC2_CAL_BYPASS_EN_LANE  RX_DCC2_CAL_0.BF.RX_DCC2_CAL_BYPASS_EN_LANE
#define reg_RX_DCC2_CAL_CONT_EN_LANE  RX_DCC2_CAL_0.BF.RX_DCC2_CAL_CONT_EN_LANE
#define reg_RX_DCC2_CAL_SINGLE_EN_LANE  RX_DCC2_CAL_0.BF.RX_DCC2_CAL_SINGLE_EN_LANE

// 0xa5	RX_DCC2_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC2_CAL_SETTING_LANE_12_11           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DCC2_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC2_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_1_t;
__xdata __at( 0x694 ) volatile RX_DCC2_CAL_1_t RX_DCC2_CAL_1;
#define reg_RX_DCC2_CAL_SETTING_LANE_12_11  RX_DCC2_CAL_1.BF.RX_DCC2_CAL_SETTING_LANE_12_11
#define reg_RX_DCC2_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC2_CAL_1.BF.RX_DCC2_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC2_CAL_CMP_CTRL_LANE_2_0  RX_DCC2_CAL_1.BF.RX_DCC2_CAL_CMP_CTRL_LANE_2_0

// 0xa6	RX_DCC2_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC2_CAL_SETTING_LANE_10_3            : 8;	/*  [7:0]     r/w 8'h1c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_2_t;
__xdata __at( 0x698 ) volatile RX_DCC2_CAL_2_t RX_DCC2_CAL_2;
#define reg_RX_DCC2_CAL_SETTING_LANE_10_3  RX_DCC2_CAL_2.BF.RX_DCC2_CAL_SETTING_LANE_10_3

// 0xa7	RX_DCC2_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DCC2_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC2_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC2_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_DCC2_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_DCC2_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_DCC2_CAL_SETTING_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_3_t;
__xdata __at( 0x69c ) volatile RX_DCC2_CAL_3_t RX_DCC2_CAL_3;
#define reg_RX_DCC2_CAL_TIMEOUT_RD_LANE  RX_DCC2_CAL_3.BF.RX_DCC2_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC2_CAL_CAL_DONE_RD_LANE  RX_DCC2_CAL_3.BF.RX_DCC2_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC2_CAL_DUMMY_CLK_EXT_LANE  RX_DCC2_CAL_3.BF.RX_DCC2_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC2_CAL_CAL_EN_EXT_LANE  RX_DCC2_CAL_3.BF.RX_DCC2_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC2_CAL_INDV_EXT_EN_LANE  RX_DCC2_CAL_3.BF.RX_DCC2_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC2_CAL_SETTING_LANE_2_0  RX_DCC2_CAL_3.BF.RX_DCC2_CAL_SETTING_LANE_2_0

// 0xa8	RX_DCC2_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DCC2_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC2_CAL_OVERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC2_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_DCC2_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_4_t;
__xdata __at( 0x6a0 ) volatile RX_DCC2_CAL_4_t RX_DCC2_CAL_4;
#define reg_RX_DCC2_CAL_UNDERFLOW_RD_LANE  RX_DCC2_CAL_4.BF.RX_DCC2_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC2_CAL_OVERFLOW_RD_LANE  RX_DCC2_CAL_4.BF.RX_DCC2_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC2_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC2_CAL_4.BF.RX_DCC2_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_DCC2_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC2_CAL_4.BF.RX_DCC2_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xa9	RX_DCC2_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC2_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC2_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC2_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_5_t;
__xdata __at( 0x6a4 ) volatile RX_DCC2_CAL_5_t RX_DCC2_CAL_5;
#define reg_RX_DCC2_CAL_DUMMY_CLK_RD_LANE  RX_DCC2_CAL_5.BF.RX_DCC2_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC2_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC2_CAL_5.BF.RX_DCC2_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_DCC2_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC2_CAL_5.BF.RX_DCC2_CAL_VAL_MIN_MSB_LANE_2_0

// 0xaa	RX_DCC2_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC2_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h2f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_6_t;
__xdata __at( 0x6a8 ) volatile RX_DCC2_CAL_6_t RX_DCC2_CAL_6;
#define reg_RX_DCC2_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC2_CAL_6.BF.RX_DCC2_CAL_VAL_MAX_LSB_LANE_5_0

// 0xab	RX_DCC2_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC2_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_7_t;
__xdata __at( 0x6ac ) volatile RX_DCC2_CAL_7_t RX_DCC2_CAL_7;
#define reg_RX_DCC2_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC2_CAL_7.BF.RX_DCC2_CAL_VAL_MIN_LSB_LANE_5_0

// 0xac	RX_DCC2_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC2_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_8_t;
__xdata __at( 0x6b0 ) volatile RX_DCC2_CAL_8_t RX_DCC2_CAL_8;
#define reg_RX_DCC2_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC2_CAL_8.BF.RX_DCC2_CAL_RESULT_LSB_EXT_LANE_5_0

// 0xad	RX_DCC2_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_DCC2_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_9_t;
__xdata __at( 0x6b4 ) volatile RX_DCC2_CAL_9_t RX_DCC2_CAL_9;
#define reg_RX_DCC2_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC2_CAL_9.BF.RX_DCC2_CAL_RESULT_MSB_RD_LANE_2_0

// 0xae	RX_DCC2_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC2_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC2_CAL_10_t;
__xdata __at( 0x6b8 ) volatile RX_DCC2_CAL_10_t RX_DCC2_CAL_10;
#define reg_RX_DCC2_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC2_CAL_10.BF.RX_DCC2_CAL_RESULT_LSB_RD_LANE_5_0

// 0xaf	RX_DCC3_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC3_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC3_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DCC3_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DCC3_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DCC3_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_0_t;
__xdata __at( 0x6bc ) volatile RX_DCC3_CAL_0_t RX_DCC3_CAL_0;
#define reg_RX_DCC3_CAL_DIR_INV_LANE  RX_DCC3_CAL_0.BF.RX_DCC3_CAL_DIR_INV_LANE
#define reg_RX_DCC3_CAL_CONT_NUM_LANE_3_0  RX_DCC3_CAL_0.BF.RX_DCC3_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC3_CAL_BYPASS_EN_LANE  RX_DCC3_CAL_0.BF.RX_DCC3_CAL_BYPASS_EN_LANE
#define reg_RX_DCC3_CAL_CONT_EN_LANE  RX_DCC3_CAL_0.BF.RX_DCC3_CAL_CONT_EN_LANE
#define reg_RX_DCC3_CAL_SINGLE_EN_LANE  RX_DCC3_CAL_0.BF.RX_DCC3_CAL_SINGLE_EN_LANE

// 0xb0	RX_DCC3_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC3_CAL_SETTING_LANE_12_11           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC3_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_1_t;
__xdata __at( 0x6c0 ) volatile RX_DCC3_CAL_1_t RX_DCC3_CAL_1;
#define reg_RX_DCC3_CAL_SETTING_LANE_12_11  RX_DCC3_CAL_1.BF.RX_DCC3_CAL_SETTING_LANE_12_11
#define reg_RX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC3_CAL_1.BF.RX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC3_CAL_CMP_CTRL_LANE_2_0  RX_DCC3_CAL_1.BF.RX_DCC3_CAL_CMP_CTRL_LANE_2_0

// 0xb1	RX_DCC3_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC3_CAL_SETTING_LANE_10_3            : 8;	/*  [7:0]     r/w 8'h1c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_2_t;
__xdata __at( 0x6c4 ) volatile RX_DCC3_CAL_2_t RX_DCC3_CAL_2;
#define reg_RX_DCC3_CAL_SETTING_LANE_10_3  RX_DCC3_CAL_2.BF.RX_DCC3_CAL_SETTING_LANE_10_3

// 0xb2	RX_DCC3_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DCC3_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC3_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC3_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_DCC3_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_DCC3_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_DCC3_CAL_SETTING_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_3_t;
__xdata __at( 0x6c8 ) volatile RX_DCC3_CAL_3_t RX_DCC3_CAL_3;
#define reg_RX_DCC3_CAL_TIMEOUT_RD_LANE  RX_DCC3_CAL_3.BF.RX_DCC3_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC3_CAL_CAL_DONE_RD_LANE  RX_DCC3_CAL_3.BF.RX_DCC3_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC3_CAL_DUMMY_CLK_EXT_LANE  RX_DCC3_CAL_3.BF.RX_DCC3_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC3_CAL_CAL_EN_EXT_LANE  RX_DCC3_CAL_3.BF.RX_DCC3_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC3_CAL_INDV_EXT_EN_LANE  RX_DCC3_CAL_3.BF.RX_DCC3_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC3_CAL_SETTING_LANE_2_0  RX_DCC3_CAL_3.BF.RX_DCC3_CAL_SETTING_LANE_2_0

// 0xb3	RX_DCC3_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DCC3_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC3_CAL_OVERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_4_t;
__xdata __at( 0x6cc ) volatile RX_DCC3_CAL_4_t RX_DCC3_CAL_4;
#define reg_RX_DCC3_CAL_UNDERFLOW_RD_LANE  RX_DCC3_CAL_4.BF.RX_DCC3_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC3_CAL_OVERFLOW_RD_LANE  RX_DCC3_CAL_4.BF.RX_DCC3_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC3_CAL_4.BF.RX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC3_CAL_4.BF.RX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xb4	RX_DCC3_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC3_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_5_t;
__xdata __at( 0x6d0 ) volatile RX_DCC3_CAL_5_t RX_DCC3_CAL_5;
#define reg_RX_DCC3_CAL_DUMMY_CLK_RD_LANE  RX_DCC3_CAL_5.BF.RX_DCC3_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC3_CAL_5.BF.RX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC3_CAL_5.BF.RX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0

// 0xb5	RX_DCC3_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h2f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_6_t;
__xdata __at( 0x6d4 ) volatile RX_DCC3_CAL_6_t RX_DCC3_CAL_6;
#define reg_RX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC3_CAL_6.BF.RX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0

// 0xb6	RX_DCC3_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_7_t;
__xdata __at( 0x6d8 ) volatile RX_DCC3_CAL_7_t RX_DCC3_CAL_7;
#define reg_RX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC3_CAL_7.BF.RX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0

// 0xb7	RX_DCC3_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_8_t;
__xdata __at( 0x6dc ) volatile RX_DCC3_CAL_8_t RX_DCC3_CAL_8;
#define reg_RX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC3_CAL_8.BF.RX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0

// 0xb8	RX_DCC3_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_9_t;
__xdata __at( 0x6e0 ) volatile RX_DCC3_CAL_9_t RX_DCC3_CAL_9;
#define reg_RX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC3_CAL_9.BF.RX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0

// 0xb9	RX_DCC3_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC3_CAL_10_t;
__xdata __at( 0x6e4 ) volatile RX_DCC3_CAL_10_t RX_DCC3_CAL_10;
#define reg_RX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC3_CAL_10.BF.RX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0

// 0xba	RX_DCC4_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC4_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DCC4_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DCC4_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DCC4_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DCC4_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_0_t;
__xdata __at( 0x6e8 ) volatile RX_DCC4_CAL_0_t RX_DCC4_CAL_0;
#define reg_RX_DCC4_CAL_DIR_INV_LANE  RX_DCC4_CAL_0.BF.RX_DCC4_CAL_DIR_INV_LANE
#define reg_RX_DCC4_CAL_CONT_NUM_LANE_3_0  RX_DCC4_CAL_0.BF.RX_DCC4_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC4_CAL_BYPASS_EN_LANE  RX_DCC4_CAL_0.BF.RX_DCC4_CAL_BYPASS_EN_LANE
#define reg_RX_DCC4_CAL_CONT_EN_LANE  RX_DCC4_CAL_0.BF.RX_DCC4_CAL_CONT_EN_LANE
#define reg_RX_DCC4_CAL_SINGLE_EN_LANE  RX_DCC4_CAL_0.BF.RX_DCC4_CAL_SINGLE_EN_LANE

// 0xbb	RX_DCC4_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC4_CAL_SETTING_LANE_12_11           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DCC4_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC4_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_1_t;
__xdata __at( 0x6ec ) volatile RX_DCC4_CAL_1_t RX_DCC4_CAL_1;
#define reg_RX_DCC4_CAL_SETTING_LANE_12_11  RX_DCC4_CAL_1.BF.RX_DCC4_CAL_SETTING_LANE_12_11
#define reg_RX_DCC4_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC4_CAL_1.BF.RX_DCC4_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC4_CAL_CMP_CTRL_LANE_2_0  RX_DCC4_CAL_1.BF.RX_DCC4_CAL_CMP_CTRL_LANE_2_0

// 0xbc	RX_DCC4_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC4_CAL_SETTING_LANE_10_3            : 8;	/*  [7:0]     r/w 8'h1c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_2_t;
__xdata __at( 0x6f0 ) volatile RX_DCC4_CAL_2_t RX_DCC4_CAL_2;
#define reg_RX_DCC4_CAL_SETTING_LANE_10_3  RX_DCC4_CAL_2.BF.RX_DCC4_CAL_SETTING_LANE_10_3

// 0xbd	RX_DCC4_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DCC4_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC4_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC4_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_DCC4_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_DCC4_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_DCC4_CAL_SETTING_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_3_t;
__xdata __at( 0x6f4 ) volatile RX_DCC4_CAL_3_t RX_DCC4_CAL_3;
#define reg_RX_DCC4_CAL_TIMEOUT_RD_LANE  RX_DCC4_CAL_3.BF.RX_DCC4_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC4_CAL_CAL_DONE_RD_LANE  RX_DCC4_CAL_3.BF.RX_DCC4_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC4_CAL_DUMMY_CLK_EXT_LANE  RX_DCC4_CAL_3.BF.RX_DCC4_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC4_CAL_CAL_EN_EXT_LANE  RX_DCC4_CAL_3.BF.RX_DCC4_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC4_CAL_INDV_EXT_EN_LANE  RX_DCC4_CAL_3.BF.RX_DCC4_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC4_CAL_SETTING_LANE_2_0  RX_DCC4_CAL_3.BF.RX_DCC4_CAL_SETTING_LANE_2_0

// 0xbe	RX_DCC4_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DCC4_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC4_CAL_OVERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_4_t;
__xdata __at( 0x6f8 ) volatile RX_DCC4_CAL_4_t RX_DCC4_CAL_4;
#define reg_RX_DCC4_CAL_UNDERFLOW_RD_LANE  RX_DCC4_CAL_4.BF.RX_DCC4_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC4_CAL_OVERFLOW_RD_LANE  RX_DCC4_CAL_4.BF.RX_DCC4_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC4_CAL_4.BF.RX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_RX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC4_CAL_4.BF.RX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xbf	RX_DCC4_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC4_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_5_t;
__xdata __at( 0x6fc ) volatile RX_DCC4_CAL_5_t RX_DCC4_CAL_5;
#define reg_RX_DCC4_CAL_DUMMY_CLK_RD_LANE  RX_DCC4_CAL_5.BF.RX_DCC4_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC4_CAL_5.BF.RX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_RX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC4_CAL_5.BF.RX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0

// 0xc0	RX_DCC4_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h2f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_6_t;
__xdata __at( 0x700 ) volatile RX_DCC4_CAL_6_t RX_DCC4_CAL_6;
#define reg_RX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC4_CAL_6.BF.RX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0

// 0xc1	RX_DCC4_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_7_t;
__xdata __at( 0x704 ) volatile RX_DCC4_CAL_7_t RX_DCC4_CAL_7;
#define reg_RX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC4_CAL_7.BF.RX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0

// 0xc2	RX_DCC4_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_8_t;
__xdata __at( 0x708 ) volatile RX_DCC4_CAL_8_t RX_DCC4_CAL_8;
#define reg_RX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC4_CAL_8.BF.RX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0

// 0xc3	RX_DCC4_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_9_t;
__xdata __at( 0x70c ) volatile RX_DCC4_CAL_9_t RX_DCC4_CAL_9;
#define reg_RX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC4_CAL_9.BF.RX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0

// 0xc4	RX_DCC4_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC4_CAL_10_t;
__xdata __at( 0x710 ) volatile RX_DCC4_CAL_10_t RX_DCC4_CAL_10;
#define reg_RX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC4_CAL_10.BF.RX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0

// 0xc5	RX_DCC5_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC5_CAL_SETTING_LANE_12_11           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DCC5_CAL_DIR_INV_LANE                 : 1;	/*      2     r/w 1'h1*/
		uint8_t RX_DCC5_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t RX_DCC5_CAL_BYPASS_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_DCC5_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_0_t;
__xdata __at( 0x714 ) volatile RX_DCC5_CAL_0_t RX_DCC5_CAL_0;
#define reg_RX_DCC5_CAL_SETTING_LANE_12_11  RX_DCC5_CAL_0.BF.RX_DCC5_CAL_SETTING_LANE_12_11
#define reg_RX_DCC5_CAL_DIR_INV_LANE  RX_DCC5_CAL_0.BF.RX_DCC5_CAL_DIR_INV_LANE
#define reg_RX_DCC5_CAL_CMP_CTRL_LANE_2_0  RX_DCC5_CAL_0.BF.RX_DCC5_CAL_CMP_CTRL_LANE_2_0
#define reg_RX_DCC5_CAL_BYPASS_EN_LANE  RX_DCC5_CAL_0.BF.RX_DCC5_CAL_BYPASS_EN_LANE
#define reg_RX_DCC5_CAL_SINGLE_EN_LANE  RX_DCC5_CAL_0.BF.RX_DCC5_CAL_SINGLE_EN_LANE

// 0xc6	RX_DCC5_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC5_CAL_SETTING_LANE_10_3            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_1_t;
__xdata __at( 0x718 ) volatile RX_DCC5_CAL_1_t RX_DCC5_CAL_1;
#define reg_RX_DCC5_CAL_SETTING_LANE_10_3  RX_DCC5_CAL_1.BF.RX_DCC5_CAL_SETTING_LANE_10_3

// 0xc7	RX_DCC5_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC5_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC5_CAL_TIMEOUT_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC5_CAL_CAL_DONE_RD_LANE             : 1;	/*      2       r 1'h0*/
		uint8_t RX_DCC5_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_DCC5_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_DCC5_CAL_SETTING_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_2_t;
__xdata __at( 0x71c ) volatile RX_DCC5_CAL_2_t RX_DCC5_CAL_2;
#define reg_RX_DCC5_CAL_OVERFLOW_RD_LANE  RX_DCC5_CAL_2.BF.RX_DCC5_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC5_CAL_TIMEOUT_RD_LANE  RX_DCC5_CAL_2.BF.RX_DCC5_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC5_CAL_CAL_DONE_RD_LANE  RX_DCC5_CAL_2.BF.RX_DCC5_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC5_CAL_CAL_EN_EXT_LANE  RX_DCC5_CAL_2.BF.RX_DCC5_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC5_CAL_INDV_EXT_EN_LANE  RX_DCC5_CAL_2.BF.RX_DCC5_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC5_CAL_SETTING_LANE_2_0  RX_DCC5_CAL_2.BF.RX_DCC5_CAL_SETTING_LANE_2_0

// 0xc8	RX_DCC5_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_DCC5_CAL_UNDERFLOW_RD_LANE            : 1;	/*      4       r 1'h0*/
		uint8_t RX_DCC5_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_3_t;
__xdata __at( 0x720 ) volatile RX_DCC5_CAL_3_t RX_DCC5_CAL_3;
#define reg_RX_DCC5_CAL_UNDERFLOW_RD_LANE  RX_DCC5_CAL_3.BF.RX_DCC5_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC5_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC5_CAL_3.BF.RX_DCC5_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0xc9	RX_DCC5_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC5_CAL_VAL_MAX_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_4_t;
__xdata __at( 0x724 ) volatile RX_DCC5_CAL_4_t RX_DCC5_CAL_4;
#define reg_RX_DCC5_CAL_VAL_MAX_LANE_6_0  RX_DCC5_CAL_4.BF.RX_DCC5_CAL_VAL_MAX_LANE_6_0

// 0xca	RX_DCC5_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC5_CAL_VAL_MIN_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_5_t;
__xdata __at( 0x728 ) volatile RX_DCC5_CAL_5_t RX_DCC5_CAL_5;
#define reg_RX_DCC5_CAL_VAL_MIN_LANE_6_0  RX_DCC5_CAL_5.BF.RX_DCC5_CAL_VAL_MIN_LANE_6_0

// 0xcb	RX_DCC5_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC5_CAL_RESULT_EXT_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_6_t;
__xdata __at( 0x72c ) volatile RX_DCC5_CAL_6_t RX_DCC5_CAL_6;
#define reg_RX_DCC5_CAL_RESULT_EXT_LANE_6_0  RX_DCC5_CAL_6.BF.RX_DCC5_CAL_RESULT_EXT_LANE_6_0

// 0xcc	RX_DCC5_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DCC5_CAL_RESULT_RD_LANE_6_0           : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC5_CAL_7_t;
__xdata __at( 0x730 ) volatile RX_DCC5_CAL_7_t RX_DCC5_CAL_7;
#define reg_RX_DCC5_CAL_RESULT_RD_LANE_6_0  RX_DCC5_CAL_7.BF.RX_DCC5_CAL_RESULT_RD_LANE_6_0

// 0xcd	TX_IMP_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t TX_IMP_TOP_START_LANE                    : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_UPDN_RD_LANE                      : 1;	/*      4       r 1'h0*/
		uint8_t TX_IMP_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_IMP_CMP_CTRL_EXT_LANE                 : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_0_t;
__xdata __at( 0x734 ) volatile TX_IMP_0_t TX_IMP_0;
#define reg_TX_IMP_TESTBUS_CORE_SEL_LANE_2_0  TX_IMP_0.BF.TX_IMP_TESTBUS_CORE_SEL_LANE_2_0
#define reg_TX_IMP_TOP_START_LANE  TX_IMP_0.BF.TX_IMP_TOP_START_LANE
#define reg_TX_IMP_UPDN_RD_LANE  TX_IMP_0.BF.TX_IMP_UPDN_RD_LANE
#define reg_TX_IMP_AUTO_ZERO_CLK_EXT_LANE  TX_IMP_0.BF.TX_IMP_AUTO_ZERO_CLK_EXT_LANE
#define reg_TX_IMP_CMP_CTRL_EXT_LANE  TX_IMP_0.BF.TX_IMP_CMP_CTRL_EXT_LANE
#define reg_TX_IMP_COMN_EXT_EN_LANE  TX_IMP_0.BF.TX_IMP_COMN_EXT_EN_LANE

// 0xce	TX_IMP_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t TX_IMP_TOP_DONE_LANE                     : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_1_t;
__xdata __at( 0x738 ) volatile TX_IMP_1_t TX_IMP_1;
#define reg_TX_IMP_TOP_DONE_LANE  TX_IMP_1.BF.TX_IMP_TOP_DONE_LANE

// 0xcf	TX_IMP_N_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_N_CAL_DIR_INV_LANE                : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_BYPASS_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_0_t;
__xdata __at( 0x73c ) volatile TX_IMP_N_CAL_0_t TX_IMP_N_CAL_0;
#define reg_TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_N_CAL_DIR_INV_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_DIR_INV_LANE
#define reg_TX_IMP_N_CAL_BYPASS_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_N_CAL_SINGLE_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_SINGLE_EN_LANE

// 0xd0	TX_IMP_N_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h6*/
		uint8_t TX_IMP_N_CAL_RESULT_AVG_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_1_t;
__xdata __at( 0x740 ) volatile TX_IMP_N_CAL_1_t TX_IMP_N_CAL_1;
#define reg_TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_N_CAL_RESULT_AVG_EN_LANE  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_RESULT_AVG_EN_LANE

// 0xd1	TX_IMP_N_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_2_t;
__xdata __at( 0x744 ) volatile TX_IMP_N_CAL_2_t TX_IMP_N_CAL_2;
#define reg_TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xd2	TX_IMP_N_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_INDV_EXT_EN_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MAX_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_3_t;
__xdata __at( 0x748 ) volatile TX_IMP_N_CAL_3_t TX_IMP_N_CAL_3;
#define reg_TX_IMP_N_CAL_CAL_EN_EXT_LANE  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_N_CAL_VAL_MAX_LANE_5_0  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_VAL_MAX_LANE_5_0

// 0xd3	TX_IMP_N_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TIMEOUT_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_CAL_DONE_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MIN_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_4_t;
__xdata __at( 0x74c ) volatile TX_IMP_N_CAL_4_t TX_IMP_N_CAL_4;
#define reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_N_CAL_CAL_DONE_RD_LANE  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_N_CAL_VAL_MIN_LANE_5_0  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_VAL_MIN_LANE_5_0

// 0xd4	TX_IMP_N_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_UNDERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_OVERFLOW_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_N_CAL_RESULT_EXT_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_5_t;
__xdata __at( 0x750 ) volatile TX_IMP_N_CAL_5_t TX_IMP_N_CAL_5;
#define reg_TX_IMP_N_CAL_UNDERFLOW_RD_LANE  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_OVERFLOW_RD_LANE  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_RESULT_EXT_LANE_5_0

// 0xd5	TX_IMP_N_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_N_CAL_RESULT_RD_LANE_5_0          : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_6_t;
__xdata __at( 0x754 ) volatile TX_IMP_N_CAL_6_t TX_IMP_N_CAL_6;
#define reg_TX_IMP_N_CAL_RESULT_RD_LANE_5_0  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_RESULT_RD_LANE_5_0

// 0xd6	TX_IMP_P_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_P_CAL_DIR_INV_LANE                : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_BYPASS_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_0_t;
__xdata __at( 0x758 ) volatile TX_IMP_P_CAL_0_t TX_IMP_P_CAL_0;
#define reg_TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_P_CAL_DIR_INV_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_DIR_INV_LANE
#define reg_TX_IMP_P_CAL_BYPASS_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_P_CAL_SINGLE_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_SINGLE_EN_LANE

// 0xd7	TX_IMP_P_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_CAL_EN_EXT_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_INDV_EXT_EN_LANE            : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [6:4]     r/w 3'h2*/
		uint8_t TX_IMP_P_CAL_RESULT_AVG_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_1_t;
__xdata __at( 0x75c ) volatile TX_IMP_P_CAL_1_t TX_IMP_P_CAL_1;
#define reg_TX_IMP_P_CAL_CAL_DONE_RD_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_P_CAL_CAL_EN_EXT_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_P_CAL_RESULT_AVG_EN_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_RESULT_AVG_EN_LANE

// 0xd8	TX_IMP_P_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_OVERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MAX_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_2_t;
__xdata __at( 0x760 ) volatile TX_IMP_P_CAL_2_t TX_IMP_P_CAL_2;
#define reg_TX_IMP_P_CAL_OVERFLOW_RD_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_P_CAL_VAL_MAX_LANE_5_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_VAL_MAX_LANE_5_0

// 0xd9	TX_IMP_P_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_P_CAL_UNDERFLOW_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MIN_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_3_t;
__xdata __at( 0x764 ) volatile TX_IMP_P_CAL_3_t TX_IMP_P_CAL_3;
#define reg_TX_IMP_P_CAL_UNDERFLOW_RD_LANE  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_VAL_MIN_LANE_5_0  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_VAL_MIN_LANE_5_0

// 0xda	TX_IMP_P_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_EXT_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_4_t;
__xdata __at( 0x768 ) volatile TX_IMP_P_CAL_4_t TX_IMP_P_CAL_4;
#define reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_RESULT_EXT_LANE_5_0

// 0xdb	TX_IMP_P_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_RD_LANE_5_0          : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_5_t;
__xdata __at( 0x76c ) volatile TX_IMP_P_CAL_5_t TX_IMP_P_CAL_5;
#define reg_TX_IMP_P_CAL_RESULT_RD_LANE_5_0  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_RESULT_RD_LANE_5_0

// 0xdc	PLL_AMP_0		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_TESTBUS_CORE_SEL_LANE_2_0        : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t PLL_AMP_TOP_CONT_START_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_AMP_TOP_START_LANE                   : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_AMP_UPDN_RD_LANE                     : 1;	/*      5       r 1'h0*/
		uint8_t PLL_AMP_CMP_CTRL_EXT_LANE                : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_AMP_COMN_EXT_EN_LANE                 : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_0_t;
__xdata __at( 0x770 ) volatile PLL_AMP_0_t PLL_AMP_0;
#define reg_PLL_AMP_TESTBUS_CORE_SEL_LANE_2_0  PLL_AMP_0.BF.PLL_AMP_TESTBUS_CORE_SEL_LANE_2_0
#define reg_PLL_AMP_TOP_CONT_START_LANE  PLL_AMP_0.BF.PLL_AMP_TOP_CONT_START_LANE
#define reg_PLL_AMP_TOP_START_LANE  PLL_AMP_0.BF.PLL_AMP_TOP_START_LANE
#define reg_PLL_AMP_UPDN_RD_LANE  PLL_AMP_0.BF.PLL_AMP_UPDN_RD_LANE
#define reg_PLL_AMP_CMP_CTRL_EXT_LANE  PLL_AMP_0.BF.PLL_AMP_CMP_CTRL_EXT_LANE
#define reg_PLL_AMP_COMN_EXT_EN_LANE  PLL_AMP_0.BF.PLL_AMP_COMN_EXT_EN_LANE

// 0xdd	PLL_AMP_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t PLL_AMP_TOP_CONT_DONE_LANE               : 1;	/*      6       r 1'h0*/
		uint8_t PLL_AMP_TOP_DONE_LANE                    : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_1_t;
__xdata __at( 0x774 ) volatile PLL_AMP_1_t PLL_AMP_1;
#define reg_PLL_AMP_TOP_CONT_DONE_LANE  PLL_AMP_1.BF.PLL_AMP_TOP_CONT_DONE_LANE
#define reg_PLL_AMP_TOP_DONE_LANE  PLL_AMP_1.BF.PLL_AMP_TOP_DONE_LANE

// 0xde	PLL_AMP_CAL_0		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_AMP_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_AMP_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_AMP_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_AMP_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_0_t;
__xdata __at( 0x778 ) volatile PLL_AMP_CAL_0_t PLL_AMP_CAL_0;
#define reg_PLL_AMP_CAL_DIR_INV_LANE  PLL_AMP_CAL_0.BF.PLL_AMP_CAL_DIR_INV_LANE
#define reg_PLL_AMP_CAL_CONT_NUM_LANE_3_0  PLL_AMP_CAL_0.BF.PLL_AMP_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_AMP_CAL_BYPASS_EN_LANE  PLL_AMP_CAL_0.BF.PLL_AMP_CAL_BYPASS_EN_LANE
#define reg_PLL_AMP_CAL_CONT_EN_LANE  PLL_AMP_CAL_0.BF.PLL_AMP_CAL_CONT_EN_LANE
#define reg_PLL_AMP_CAL_SINGLE_EN_LANE  PLL_AMP_CAL_0.BF.PLL_AMP_CAL_SINGLE_EN_LANE

// 0xdf	PLL_AMP_CAL_1		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t PLL_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_1_t;
__xdata __at( 0x77c ) volatile PLL_AMP_CAL_1_t PLL_AMP_CAL_1;
#define reg_PLL_AMP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_AMP_CAL_1.BF.PLL_AMP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_AMP_CAL_1.BF.PLL_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_AMP_CAL_1.BF.PLL_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0xe0	PLL_AMP_CAL_2		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_AMP_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [3:1]     r/w 3'h5*/
		uint8_t PLL_AMP_CAL_RESULT_AVG_EN_LANE           : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_AMP_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_2_t;
__xdata __at( 0x780 ) volatile PLL_AMP_CAL_2_t PLL_AMP_CAL_2;
#define reg_PLL_AMP_CAL_TIMEOUT_CHK_DIS_LANE  PLL_AMP_CAL_2.BF.PLL_AMP_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_AMP_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_AMP_CAL_2.BF.PLL_AMP_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_AMP_CAL_RESULT_AVG_EN_LANE  PLL_AMP_CAL_2.BF.PLL_AMP_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_AMP_CAL_TOGGLE_TIMES_LANE_2_0  PLL_AMP_CAL_2.BF.PLL_AMP_CAL_TOGGLE_TIMES_LANE_2_0

// 0xe1	PLL_AMP_CAL_3		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_3_t;
__xdata __at( 0x784 ) volatile PLL_AMP_CAL_3_t PLL_AMP_CAL_3;
#define reg_PLL_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_AMP_CAL_3.BF.PLL_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xe2	PLL_AMP_CAL_4		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_VAL_MAX_LANE_7_0             : 8;	/*  [7:0]     r/w 8'hff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_4_t;
__xdata __at( 0x788 ) volatile PLL_AMP_CAL_4_t PLL_AMP_CAL_4;
#define reg_PLL_AMP_CAL_VAL_MAX_LANE_7_0  PLL_AMP_CAL_4.BF.PLL_AMP_CAL_VAL_MAX_LANE_7_0

// 0xe3	PLL_AMP_CAL_5		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_VAL_MIN_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_5_t;
__xdata __at( 0x78c ) volatile PLL_AMP_CAL_5_t PLL_AMP_CAL_5;
#define reg_PLL_AMP_CAL_VAL_MIN_LANE_7_0  PLL_AMP_CAL_5.BF.PLL_AMP_CAL_VAL_MIN_LANE_7_0

// 0xe4	PLL_AMP_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_AMP_CAL_UNDERFLOW_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t PLL_AMP_CAL_OVERFLOW_RD_LANE             : 1;	/*      2       r 1'h0*/
		uint8_t PLL_AMP_CAL_TIMEOUT_RD_LANE              : 1;	/*      3       r 1'h0*/
		uint8_t PLL_AMP_CAL_CAL_DONE_RD_LANE             : 1;	/*      4       r 1'h0*/
		uint8_t PLL_AMP_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_AMP_CAL_CAL_EN_EXT_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_AMP_CAL_INDV_EXT_EN_LANE             : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_6_t;
__xdata __at( 0x790 ) volatile PLL_AMP_CAL_6_t PLL_AMP_CAL_6;
#define reg_PLL_AMP_CAL_UNDERFLOW_RD_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_AMP_CAL_OVERFLOW_RD_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_OVERFLOW_RD_LANE
#define reg_PLL_AMP_CAL_TIMEOUT_RD_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_TIMEOUT_RD_LANE
#define reg_PLL_AMP_CAL_CAL_DONE_RD_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_CAL_DONE_RD_LANE
#define reg_PLL_AMP_CAL_DUMMY_CLK_EXT_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_AMP_CAL_CAL_EN_EXT_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_CAL_EN_EXT_LANE
#define reg_PLL_AMP_CAL_INDV_EXT_EN_LANE  PLL_AMP_CAL_6.BF.PLL_AMP_CAL_INDV_EXT_EN_LANE

// 0xe5	PLL_AMP_CAL_7		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_RESULT_EXT_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h4f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_7_t;
__xdata __at( 0x794 ) volatile PLL_AMP_CAL_7_t PLL_AMP_CAL_7;
#define reg_PLL_AMP_CAL_RESULT_EXT_LANE_7_0  PLL_AMP_CAL_7.BF.PLL_AMP_CAL_RESULT_EXT_LANE_7_0

// 0xe6	PLL_AMP_CAL_8		TBD
typedef union {
	struct {
		uint8_t PLL_AMP_CAL_RESULT_RD_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_CAL_8_t;
__xdata __at( 0x798 ) volatile PLL_AMP_CAL_8_t PLL_AMP_CAL_8;
#define reg_PLL_AMP_CAL_RESULT_RD_LANE_7_0  PLL_AMP_CAL_8.BF.PLL_AMP_CAL_RESULT_RD_LANE_7_0

// 0xe7	RX_SQ_0		TBD
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
__xdata __at( 0x79c ) volatile RX_SQ_0_t RX_SQ_0;
#define reg_RX_SQ_TOP_DONE_LANE  RX_SQ_0.BF.RX_SQ_TOP_DONE_LANE
#define reg_RX_SQ_TESTBUS_CORE_SEL_LANE_2_0  RX_SQ_0.BF.RX_SQ_TESTBUS_CORE_SEL_LANE_2_0
#define reg_RX_SQ_TOP_START_LANE  RX_SQ_0.BF.RX_SQ_TOP_START_LANE
#define reg_RX_SQ_UPDN_RD_LANE  RX_SQ_0.BF.RX_SQ_UPDN_RD_LANE
#define reg_RX_SQ_CMP_CTRL_EXT_LANE  RX_SQ_0.BF.RX_SQ_CMP_CTRL_EXT_LANE
#define reg_RX_SQ_COMN_EXT_EN_LANE  RX_SQ_0.BF.RX_SQ_COMN_EXT_EN_LANE

// 0xe8	SQ_CAL_0		TBD
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
__xdata __at( 0x7a0 ) volatile SQ_CAL_0_t SQ_CAL_0;
#define reg_SQ_CAL_RESULT_AVG_EN_LANE  SQ_CAL_0.BF.SQ_CAL_RESULT_AVG_EN_LANE
#define reg_SQ_CAL_BIN_SEARCH_ENABLE_LANE  SQ_CAL_0.BF.SQ_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SQ_CAL_0.BF.SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SQ_CAL_DIR_INV_LANE  SQ_CAL_0.BF.SQ_CAL_DIR_INV_LANE
#define reg_SQ_CAL_BYPASS_EN_LANE  SQ_CAL_0.BF.SQ_CAL_BYPASS_EN_LANE
#define reg_SQ_CAL_SINGLE_EN_LANE  SQ_CAL_0.BF.SQ_CAL_SINGLE_EN_LANE

// 0xe9	SQ_CAL_1		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_TIMEOUT_STEPS_LANE_2_0            : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t SQ_CAL_TOGGLE_TIMES_LANE_2_0             : 3;	/*  [5:3]     r/w 3'h2*/
		uint8_t SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0      : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_1_t;
__xdata __at( 0x7a4 ) volatile SQ_CAL_1_t SQ_CAL_1;
#define reg_SQ_CAL_TIMEOUT_STEPS_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SQ_CAL_TOGGLE_TIMES_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  SQ_CAL_1.BF.SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0xea	SQ_CAL_2		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_2_t;
__xdata __at( 0x7a8 ) volatile SQ_CAL_2_t SQ_CAL_2;
#define reg_SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SQ_CAL_2.BF.SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xeb	SQ_CAL_3		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_INDV_EXT_EN_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MAX_LANE_5_0                  : 6;	/*  [6:1]     r/w 6'h1f*/
		uint8_t SQ_CAL_TIMEOUT_CHK_DIS_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_3_t;
__xdata __at( 0x7ac ) volatile SQ_CAL_3_t SQ_CAL_3;
#define reg_SQ_CAL_INDV_EXT_EN_LANE  SQ_CAL_3.BF.SQ_CAL_INDV_EXT_EN_LANE
#define reg_SQ_CAL_VAL_MAX_LANE_5_0  SQ_CAL_3.BF.SQ_CAL_VAL_MAX_LANE_5_0
#define reg_SQ_CAL_TIMEOUT_CHK_DIS_LANE  SQ_CAL_3.BF.SQ_CAL_TIMEOUT_CHK_DIS_LANE

// 0xec	SQ_CAL_4		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_CAL_DONE_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_CAL_EN_EXT_LANE                   : 1;	/*      1     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MIN_LANE_5_0                  : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_4_t;
__xdata __at( 0x7b0 ) volatile SQ_CAL_4_t SQ_CAL_4;
#define reg_SQ_CAL_CAL_DONE_RD_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_DONE_RD_LANE
#define reg_SQ_CAL_CAL_EN_EXT_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_EN_EXT_LANE
#define reg_SQ_CAL_VAL_MIN_LANE_5_0  SQ_CAL_4.BF.SQ_CAL_VAL_MIN_LANE_5_0

// 0xed	SQ_CAL_5		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_OVERFLOW_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_TIMEOUT_RD_LANE                   : 1;	/*      1       r 1'h0*/
		uint8_t SQ_CAL_RESULT_EXT_LANE_5_0               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_5_t;
__xdata __at( 0x7b4 ) volatile SQ_CAL_5_t SQ_CAL_5;
#define reg_SQ_CAL_OVERFLOW_RD_LANE  SQ_CAL_5.BF.SQ_CAL_OVERFLOW_RD_LANE
#define reg_SQ_CAL_TIMEOUT_RD_LANE  SQ_CAL_5.BF.SQ_CAL_TIMEOUT_RD_LANE
#define reg_SQ_CAL_RESULT_EXT_LANE_5_0  SQ_CAL_5.BF.SQ_CAL_RESULT_EXT_LANE_5_0

// 0xee	SQ_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_CAL_RESULT_RD_LANE_5_0                : 6;	/*  [6:1]       r 6'h0*/
		uint8_t SQ_CAL_UNDERFLOW_RD_LANE                 : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_6_t;
__xdata __at( 0x7b8 ) volatile SQ_CAL_6_t SQ_CAL_6;
#define reg_SQ_CAL_RESULT_RD_LANE_5_0  SQ_CAL_6.BF.SQ_CAL_RESULT_RD_LANE_5_0
#define reg_SQ_CAL_UNDERFLOW_RD_LANE  SQ_CAL_6.BF.SQ_CAL_UNDERFLOW_RD_LANE

#endif
