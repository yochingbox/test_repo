#ifndef PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H



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
__xdata __at( 0xc00 ) volatile TX_ALIGN90_DCC_0_t TX_ALIGN90_DCC_0;
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
__xdata __at( 0xc04 ) volatile TX_ALIGN90_DCC_1_t TX_ALIGN90_DCC_1;
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
__xdata __at( 0xc08 ) volatile TX_ALIGN90_CAL_0_t TX_ALIGN90_CAL_0;
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
__xdata __at( 0xc0c ) volatile TX_ALIGN90_CAL_1_t TX_ALIGN90_CAL_1;
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
__xdata __at( 0xc10 ) volatile TX_ALIGN90_CAL_2_t TX_ALIGN90_CAL_2;
#define reg_TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_ALIGN90_CAL_RESULT_AVG_EN_LANE  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE

// 0x5	TX_ALIGN90_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_3_t;
__xdata __at( 0xc14 ) volatile TX_ALIGN90_CAL_3_t TX_ALIGN90_CAL_3;
#define reg_TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_ALIGN90_CAL_3.BF.TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x6	TX_ALIGN90_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_4_t;
__xdata __at( 0xc18 ) volatile TX_ALIGN90_CAL_4_t TX_ALIGN90_CAL_4;
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
		uint8_t TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_5_t;
__xdata __at( 0xc1c ) volatile TX_ALIGN90_CAL_5_t TX_ALIGN90_CAL_5;
#define reg_TX_ALIGN90_CAL_CAL_DONE_RD_LANE  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x8	TX_ALIGN90_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_6_t;
__xdata __at( 0xc20 ) volatile TX_ALIGN90_CAL_6_t TX_ALIGN90_CAL_6;
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
__xdata __at( 0xc24 ) volatile TX_ALIGN90_CAL_7_t TX_ALIGN90_CAL_7;
#define reg_TX_ALIGN90_CAL_OVERFLOW_RD_LANE  TX_ALIGN90_CAL_7.BF.TX_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  TX_ALIGN90_CAL_7.BF.TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0xa	TX_ALIGN90_CAL_8		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [2:0]       r 3'h0*/
		uint8_t TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      4       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_8_t;
__xdata __at( 0xc28 ) volatile TX_ALIGN90_CAL_8_t TX_ALIGN90_CAL_8;
#define reg_TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_ALIGN90_CAL_UNDERFLOW_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0xb	TX_ALIGN90_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_9_t;
__xdata __at( 0xc2c ) volatile TX_ALIGN90_CAL_9_t TX_ALIGN90_CAL_9;
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
__xdata __at( 0xc30 ) volatile TX_ALIGN90_CAL_10_t TX_ALIGN90_CAL_10;
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
__xdata __at( 0xc34 ) volatile TX_DCC1_CAL_0_t TX_DCC1_CAL_0;
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
__xdata __at( 0xc38 ) volatile TX_DCC1_CAL_1_t TX_DCC1_CAL_1;
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
__xdata __at( 0xc3c ) volatile TX_DCC1_CAL_2_t TX_DCC1_CAL_2;
#define reg_TX_DCC1_CAL_OVERFLOW_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC1_CAL_TIMEOUT_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC1_CAL_CAL_DONE_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC1_CAL_CAL_EN_EXT_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC1_CAL_INDV_EXT_EN_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x10	TX_DCC1_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC1_CAL_VAL_MAX_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_3_t;
__xdata __at( 0xc40 ) volatile TX_DCC1_CAL_3_t TX_DCC1_CAL_3;
#define reg_TX_DCC1_CAL_UNDERFLOW_RD_LANE  TX_DCC1_CAL_3.BF.TX_DCC1_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC1_CAL_VAL_MAX_LANE_6_0  TX_DCC1_CAL_3.BF.TX_DCC1_CAL_VAL_MAX_LANE_6_0

// 0x11	TX_DCC1_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC1_CAL_VAL_MIN_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_4_t;
__xdata __at( 0xc44 ) volatile TX_DCC1_CAL_4_t TX_DCC1_CAL_4;
#define reg_TX_DCC1_CAL_VAL_MIN_LANE_6_0  TX_DCC1_CAL_4.BF.TX_DCC1_CAL_VAL_MIN_LANE_6_0

// 0x12	TX_DCC1_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC1_CAL_RESULT_EXT_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_5_t;
__xdata __at( 0xc48 ) volatile TX_DCC1_CAL_5_t TX_DCC1_CAL_5;
#define reg_TX_DCC1_CAL_RESULT_EXT_LANE_6_0  TX_DCC1_CAL_5.BF.TX_DCC1_CAL_RESULT_EXT_LANE_6_0

// 0x13	TX_DCC1_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC1_CAL_RESULT_RD_LANE_6_0           : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_6_t;
__xdata __at( 0xc4c ) volatile TX_DCC1_CAL_6_t TX_DCC1_CAL_6;
#define reg_TX_DCC1_CAL_RESULT_RD_LANE_6_0  TX_DCC1_CAL_6.BF.TX_DCC1_CAL_RESULT_RD_LANE_6_0

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
__xdata __at( 0xc50 ) volatile TX_DCC2_CAL_0_t TX_DCC2_CAL_0;
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
__xdata __at( 0xc54 ) volatile TX_DCC2_CAL_1_t TX_DCC2_CAL_1;
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
__xdata __at( 0xc58 ) volatile TX_DCC2_CAL_2_t TX_DCC2_CAL_2;
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
__xdata __at( 0xc5c ) volatile TX_DCC2_CAL_3_t TX_DCC2_CAL_3;
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
__xdata __at( 0xc60 ) volatile TX_DCC2_CAL_4_t TX_DCC2_CAL_4;
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
__xdata __at( 0xc64 ) volatile TX_DCC3_CAL_0_t TX_DCC3_CAL_0;
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
__xdata __at( 0xc68 ) volatile TX_DCC3_CAL_1_t TX_DCC3_CAL_1;
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
__xdata __at( 0xc6c ) volatile TX_DCC3_CAL_2_t TX_DCC3_CAL_2;
#define reg_TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_DCC3_CAL_RESULT_AVG_EN_LANE  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0

// 0x1c	TX_DCC3_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CAL_EN_EXT_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_INDV_EXT_EN_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_3_t;
__xdata __at( 0xc70 ) volatile TX_DCC3_CAL_3_t TX_DCC3_CAL_3;
#define reg_TX_DCC3_CAL_CAL_EN_EXT_LANE  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC3_CAL_INDV_EXT_EN_LANE  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0

// 0x1d	TX_DCC3_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CAL_DONE_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC3_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_4_t;
__xdata __at( 0xc74 ) volatile TX_DCC3_CAL_4_t TX_DCC3_CAL_4;
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
__xdata __at( 0xc78 ) volatile TX_DCC3_CAL_5_t TX_DCC3_CAL_5;
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
__xdata __at( 0xc7c ) volatile TX_DCC3_CAL_6_t TX_DCC3_CAL_6;
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
__xdata __at( 0xc80 ) volatile TX_DCC3_CAL_7_t TX_DCC3_CAL_7;
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
__xdata __at( 0xc84 ) volatile TX_DCC3_CAL_8_t TX_DCC3_CAL_8;
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
__xdata __at( 0xc88 ) volatile TX_DCC4_CAL_0_t TX_DCC4_CAL_0;
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
__xdata __at( 0xc8c ) volatile TX_DCC4_CAL_1_t TX_DCC4_CAL_1;
#define reg_TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC4_CAL_CMP_CTRL_LANE_1_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_CMP_CTRL_LANE_1_0

// 0x24	TX_DCC4_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_INDV_EXT_EN_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [3:1]     r/w 3'h7*/
		uint8_t TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [6:4]     r/w 3'h3*/
		uint8_t TX_DCC4_CAL_RESULT_AVG_EN_LANE           : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_2_t;
__xdata __at( 0xc90 ) volatile TX_DCC4_CAL_2_t TX_DCC4_CAL_2;
#define reg_TX_DCC4_CAL_INDV_EXT_EN_LANE  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_DCC4_CAL_RESULT_AVG_EN_LANE  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_RESULT_AVG_EN_LANE

// 0x25	TX_DCC4_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t TX_DCC4_CAL_CAL_EN_EXT_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_3_t;
__xdata __at( 0xc94 ) volatile TX_DCC4_CAL_3_t TX_DCC4_CAL_3;
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
__xdata __at( 0xc98 ) volatile TX_DCC4_CAL_4_t TX_DCC4_CAL_4;
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
__xdata __at( 0xc9c ) volatile TX_DCC4_CAL_5_t TX_DCC4_CAL_5;
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
__xdata __at( 0xca0 ) volatile TX_DCC4_CAL_6_t TX_DCC4_CAL_6;
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
__xdata __at( 0xca4 ) volatile TX_DCC4_CAL_7_t TX_DCC4_CAL_7;
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
__xdata __at( 0xca8 ) volatile TX_DCC4_CAL_8_t TX_DCC4_CAL_8;
#define reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC4_CAL_8.BF.TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0

// 0x2b	TX_IMP_0		TBD
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
__xdata __at( 0xcac ) volatile TX_IMP_0_t TX_IMP_0;
#define reg_TX_IMP_TESTBUS_CORE_SEL_LANE_2_0  TX_IMP_0.BF.TX_IMP_TESTBUS_CORE_SEL_LANE_2_0
#define reg_TX_IMP_TOP_START_LANE  TX_IMP_0.BF.TX_IMP_TOP_START_LANE
#define reg_TX_IMP_UPDN_RD_LANE  TX_IMP_0.BF.TX_IMP_UPDN_RD_LANE
#define reg_TX_IMP_AUTO_ZERO_CLK_EXT_LANE  TX_IMP_0.BF.TX_IMP_AUTO_ZERO_CLK_EXT_LANE
#define reg_TX_IMP_CMP_CTRL_EXT_LANE  TX_IMP_0.BF.TX_IMP_CMP_CTRL_EXT_LANE
#define reg_TX_IMP_COMN_EXT_EN_LANE  TX_IMP_0.BF.TX_IMP_COMN_EXT_EN_LANE

// 0x2c	TX_IMP_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t TX_IMP_TOP_DONE_LANE                     : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_1_t;
__xdata __at( 0xcb0 ) volatile TX_IMP_1_t TX_IMP_1;
#define reg_TX_IMP_TOP_DONE_LANE  TX_IMP_1.BF.TX_IMP_TOP_DONE_LANE

// 0x2d	TX_IMP_N_CAL_0		TBD
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
__xdata __at( 0xcb4 ) volatile TX_IMP_N_CAL_0_t TX_IMP_N_CAL_0;
#define reg_TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_N_CAL_DIR_INV_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_DIR_INV_LANE
#define reg_TX_IMP_N_CAL_BYPASS_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_N_CAL_SINGLE_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_SINGLE_EN_LANE

// 0x2e	TX_IMP_N_CAL_1		TBD
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
__xdata __at( 0xcb8 ) volatile TX_IMP_N_CAL_1_t TX_IMP_N_CAL_1;
#define reg_TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_N_CAL_RESULT_AVG_EN_LANE  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_RESULT_AVG_EN_LANE

// 0x2f	TX_IMP_N_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_2_t;
__xdata __at( 0xcbc ) volatile TX_IMP_N_CAL_2_t TX_IMP_N_CAL_2;
#define reg_TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x30	TX_IMP_N_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_INDV_EXT_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_3_t;
__xdata __at( 0xcc0 ) volatile TX_IMP_N_CAL_3_t TX_IMP_N_CAL_3;
#define reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_N_CAL_VAL_MAX_LANE_6_0  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_VAL_MAX_LANE_6_0

// 0x31	TX_IMP_N_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_4_t;
__xdata __at( 0xcc4 ) volatile TX_IMP_N_CAL_4_t TX_IMP_N_CAL_4;
#define reg_TX_IMP_N_CAL_CAL_EN_EXT_LANE  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_N_CAL_VAL_MIN_LANE_6_0  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_VAL_MIN_LANE_6_0

// 0x32	TX_IMP_N_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_5_t;
__xdata __at( 0xcc8 ) volatile TX_IMP_N_CAL_5_t TX_IMP_N_CAL_5;
#define reg_TX_IMP_N_CAL_CAL_DONE_RD_LANE  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_RESULT_EXT_LANE_6_0

// 0x33	TX_IMP_N_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_IMP_N_CAL_UNDERFLOW_RD_LANE           : 1;	/*      5       r 1'h0*/
		uint8_t TX_IMP_N_CAL_OVERFLOW_RD_LANE            : 1;	/*      6       r 1'h0*/
		uint8_t TX_IMP_N_CAL_TIMEOUT_RD_LANE             : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_6_t;
__xdata __at( 0xccc ) volatile TX_IMP_N_CAL_6_t TX_IMP_N_CAL_6;
#define reg_TX_IMP_N_CAL_UNDERFLOW_RD_LANE  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_OVERFLOW_RD_LANE  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_TIMEOUT_RD_LANE

// 0x34	TX_IMP_N_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_N_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_7_t;
__xdata __at( 0xcd0 ) volatile TX_IMP_N_CAL_7_t TX_IMP_N_CAL_7;
#define reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_RESULT_RD_LANE_6_0

// 0x35	TX_IMP_P_CAL_0		TBD
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
__xdata __at( 0xcd4 ) volatile TX_IMP_P_CAL_0_t TX_IMP_P_CAL_0;
#define reg_TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_P_CAL_DIR_INV_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_DIR_INV_LANE
#define reg_TX_IMP_P_CAL_BYPASS_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_P_CAL_SINGLE_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_SINGLE_EN_LANE

// 0x36	TX_IMP_P_CAL_1		TBD
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
__xdata __at( 0xcd8 ) volatile TX_IMP_P_CAL_1_t TX_IMP_P_CAL_1;
#define reg_TX_IMP_P_CAL_CAL_DONE_RD_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_P_CAL_CAL_EN_EXT_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_P_CAL_RESULT_AVG_EN_LANE  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_RESULT_AVG_EN_LANE

// 0x37	TX_IMP_P_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TIMEOUT_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_2_t;
__xdata __at( 0xcdc ) volatile TX_IMP_P_CAL_2_t TX_IMP_P_CAL_2;
#define reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_P_CAL_VAL_MAX_LANE_6_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_VAL_MAX_LANE_6_0

// 0x38	TX_IMP_P_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_OVERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_3_t;
__xdata __at( 0xce0 ) volatile TX_IMP_P_CAL_3_t TX_IMP_P_CAL_3;
#define reg_TX_IMP_P_CAL_OVERFLOW_RD_LANE  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_VAL_MIN_LANE_6_0  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_VAL_MIN_LANE_6_0

// 0x39	TX_IMP_P_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_UNDERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_4_t;
__xdata __at( 0xce4 ) volatile TX_IMP_P_CAL_4_t TX_IMP_P_CAL_4;
#define reg_TX_IMP_P_CAL_UNDERFLOW_RD_LANE  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_RESULT_EXT_LANE_6_0

// 0x3a	TX_IMP_P_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_5_t;
__xdata __at( 0xce8 ) volatile TX_IMP_P_CAL_5_t TX_IMP_P_CAL_5;
#define reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_RESULT_RD_LANE_6_0

// 0x3b	RX_CLK_0		TBD
typedef union {
	struct {
		uint8_t RX_CLK_TOP_CONT_START_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_CLK_TOP_START_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CLK_UPDN_RD_LANE                      : 1;	/*      2       r 1'h0*/
		uint8_t RX_CLK_SETTING_EXT_LANE                  : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CLK_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CLK_CMP_CTRL_EXT_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_CLK_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_0_t;
__xdata __at( 0xcec ) volatile RX_CLK_0_t RX_CLK_0;
#define reg_RX_CLK_TOP_CONT_START_LANE  RX_CLK_0.BF.RX_CLK_TOP_CONT_START_LANE
#define reg_RX_CLK_TOP_START_LANE  RX_CLK_0.BF.RX_CLK_TOP_START_LANE
#define reg_RX_CLK_UPDN_RD_LANE  RX_CLK_0.BF.RX_CLK_UPDN_RD_LANE
#define reg_RX_CLK_SETTING_EXT_LANE  RX_CLK_0.BF.RX_CLK_SETTING_EXT_LANE
#define reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE  RX_CLK_0.BF.RX_CLK_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_CLK_CMP_CTRL_EXT_LANE_1_0  RX_CLK_0.BF.RX_CLK_CMP_CTRL_EXT_LANE_1_0
#define reg_RX_CLK_COMN_EXT_EN_LANE  RX_CLK_0.BF.RX_CLK_COMN_EXT_EN_LANE

// 0x3c	RX_CLK_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t RX_CLK_TOP_CONT_DONE_LANE                : 1;	/*      3       r 1'h0*/
		uint8_t RX_CLK_TOP_DONE_LANE                     : 1;	/*      4       r 1'h0*/
		uint8_t RX_CLK_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_1_t;
__xdata __at( 0xcf0 ) volatile RX_CLK_1_t RX_CLK_1;
#define reg_RX_CLK_TOP_CONT_DONE_LANE  RX_CLK_1.BF.RX_CLK_TOP_CONT_DONE_LANE
#define reg_RX_CLK_TOP_DONE_LANE  RX_CLK_1.BF.RX_CLK_TOP_DONE_LANE
#define reg_RX_CLK_TESTBUS_CORE_SEL_LANE_2_0  RX_CLK_1.BF.RX_CLK_TESTBUS_CORE_SEL_LANE_2_0

// 0x3d	RX_ALIGN90_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_ALIGN90_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_ALIGN90_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_0_t;
__xdata __at( 0xcf4 ) volatile RX_ALIGN90_CAL_0_t RX_ALIGN90_CAL_0;
#define reg_RX_ALIGN90_CAL_DIR_INV_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_CAL_BYPASS_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_CAL_CONT_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_CAL_SINGLE_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_SINGLE_EN_LANE

// 0x3e	RX_ALIGN90_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_ALIGN90_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_1_t;
__xdata __at( 0xcf8 ) volatile RX_ALIGN90_CAL_1_t RX_ALIGN90_CAL_1;
#define reg_RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_CAL_CMP_CTRL_LANE_1_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_CMP_CTRL_LANE_1_0

// 0x3f	RX_ALIGN90_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_2_t;
__xdata __at( 0xcfc ) volatile RX_ALIGN90_CAL_2_t RX_ALIGN90_CAL_2;
#define reg_RX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_ALIGN90_CAL_RESULT_AVG_EN_LANE  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_RX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE

// 0x40	RX_ALIGN90_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_3_t;
__xdata __at( 0xd00 ) volatile RX_ALIGN90_CAL_3_t RX_ALIGN90_CAL_3;
#define reg_RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x41	RX_ALIGN90_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_4_t;
__xdata __at( 0xd04 ) volatile RX_ALIGN90_CAL_4_t RX_ALIGN90_CAL_4;
#define reg_RX_ALIGN90_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x42	RX_ALIGN90_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_5_t;
__xdata __at( 0xd08 ) volatile RX_ALIGN90_CAL_5_t RX_ALIGN90_CAL_5;
#define reg_RX_ALIGN90_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x43	RX_ALIGN90_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_6_t;
__xdata __at( 0xd0c ) volatile RX_ALIGN90_CAL_6_t RX_ALIGN90_CAL_6;
#define reg_RX_ALIGN90_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0x44	RX_ALIGN90_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_7_t;
__xdata __at( 0xd10 ) volatile RX_ALIGN90_CAL_7_t RX_ALIGN90_CAL_7;
#define reg_RX_ALIGN90_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_CAL_7.BF.RX_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_CAL_7.BF.RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0x45	RX_ALIGN90_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      3       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      4       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_8_t;
__xdata __at( 0xd14 ) volatile RX_ALIGN90_CAL_8_t RX_ALIGN90_CAL_8;
#define reg_RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x46	RX_ALIGN90_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h6e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_9_t;
__xdata __at( 0xd18 ) volatile RX_ALIGN90_CAL_9_t RX_ALIGN90_CAL_9;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_CAL_9.BF.RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x47	RX_ALIGN90_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_10_t;
__xdata __at( 0xd1c ) volatile RX_ALIGN90_CAL_10_t RX_ALIGN90_CAL_10;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_CAL_10.BF.RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0x48	RX_DCC_A0_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_DIR_INV_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_CONT_NUM_LANE_3_0          : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DCC_A0_CAL_BYPASS_EN_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_CONT_EN_LANE               : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DCC_A0_CAL_SINGLE_EN_LANE             : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_0_t;
__xdata __at( 0xd20 ) volatile RX_DCC_A0_CAL_0_t RX_DCC_A0_CAL_0;
#define reg_RX_DCC_A0_CAL_DIR_INV_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_DIR_INV_LANE
#define reg_RX_DCC_A0_CAL_CONT_NUM_LANE_3_0  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC_A0_CAL_BYPASS_EN_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_BYPASS_EN_LANE
#define reg_RX_DCC_A0_CAL_CONT_EN_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_CONT_EN_LANE
#define reg_RX_DCC_A0_CAL_SINGLE_EN_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_SINGLE_EN_LANE

// 0x49	RX_DCC_A0_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_DCC_A0_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_DCC_A0_CAL_CMP_CTRL_LANE_1_0          : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_1_t;
__xdata __at( 0xd24 ) volatile RX_DCC_A0_CAL_1_t RX_DCC_A0_CAL_1;
#define reg_RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC_A0_CAL_1.BF.RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A0_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC_A0_CAL_1.BF.RX_DCC_A0_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A0_CAL_CMP_CTRL_LANE_1_0  RX_DCC_A0_CAL_1.BF.RX_DCC_A0_CAL_CMP_CTRL_LANE_1_0

// 0x4a	RX_DCC_A0_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_CAL_EN_EXT_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_INDV_EXT_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0       : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_2_t;
__xdata __at( 0xd28 ) volatile RX_DCC_A0_CAL_2_t RX_DCC_A0_CAL_2;
#define reg_RX_DCC_A0_CAL_CAL_EN_EXT_LANE  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC_A0_CAL_INDV_EXT_EN_LANE  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0

// 0x4b	RX_DCC_A0_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_CAL_DONE_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE         : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_3_t;
__xdata __at( 0xd2c ) volatile RX_DCC_A0_CAL_3_t RX_DCC_A0_CAL_3;
#define reg_RX_DCC_A0_CAL_CAL_DONE_RD_LANE  RX_DCC_A0_CAL_3.BF.RX_DCC_A0_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE  RX_DCC_A0_CAL_3.BF.RX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC_A0_CAL_3.BF.RX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0

// 0x4c	RX_DCC_A0_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_OVERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_TIMEOUT_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_4_t;
__xdata __at( 0xd30 ) volatile RX_DCC_A0_CAL_4_t RX_DCC_A0_CAL_4;
#define reg_RX_DCC_A0_CAL_OVERFLOW_RD_LANE  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC_A0_CAL_TIMEOUT_RD_LANE  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0

// 0x4d	RX_DCC_A0_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0     : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE          : 1;	/*      3       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_UNDERFLOW_RD_LANE          : 1;	/*      4       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0    : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_5_t;
__xdata __at( 0xd34 ) volatile RX_DCC_A0_CAL_5_t RX_DCC_A0_CAL_5;
#define reg_RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC_A0_CAL_UNDERFLOW_RD_LANE  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x4e	RX_DCC_A0_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0    : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_6_t;
__xdata __at( 0xd38 ) volatile RX_DCC_A0_CAL_6_t RX_DCC_A0_CAL_6;
#define reg_RX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC_A0_CAL_6.BF.RX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x4f	RX_DCC_A0_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_7_t;
__xdata __at( 0xd3c ) volatile RX_DCC_A0_CAL_7_t RX_DCC_A0_CAL_7;
#define reg_RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC_A0_CAL_7.BF.RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0

// 0x50	RX_DCC_A90_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DCC_A90_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DCC_A90_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_0_t;
__xdata __at( 0xd40 ) volatile RX_DCC_A90_CAL_0_t RX_DCC_A90_CAL_0;
#define reg_RX_DCC_A90_CAL_DIR_INV_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_DIR_INV_LANE
#define reg_RX_DCC_A90_CAL_CONT_NUM_LANE_3_0  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC_A90_CAL_BYPASS_EN_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_BYPASS_EN_LANE
#define reg_RX_DCC_A90_CAL_CONT_EN_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_CONT_EN_LANE
#define reg_RX_DCC_A90_CAL_SINGLE_EN_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_SINGLE_EN_LANE

// 0x51	RX_DCC_A90_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_DCC_A90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_DCC_A90_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_1_t;
__xdata __at( 0xd44 ) volatile RX_DCC_A90_CAL_1_t RX_DCC_A90_CAL_1;
#define reg_RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC_A90_CAL_1.BF.RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC_A90_CAL_1.BF.RX_DCC_A90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A90_CAL_CMP_CTRL_LANE_1_0  RX_DCC_A90_CAL_1.BF.RX_DCC_A90_CAL_CMP_CTRL_LANE_1_0

// 0x52	RX_DCC_A90_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_2_t;
__xdata __at( 0xd48 ) volatile RX_DCC_A90_CAL_2_t RX_DCC_A90_CAL_2;
#define reg_RX_DCC_A90_CAL_CAL_EN_EXT_LANE  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC_A90_CAL_INDV_EXT_EN_LANE  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x53	RX_DCC_A90_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_3_t;
__xdata __at( 0xd4c ) volatile RX_DCC_A90_CAL_3_t RX_DCC_A90_CAL_3;
#define reg_RX_DCC_A90_CAL_CAL_DONE_RD_LANE  RX_DCC_A90_CAL_3.BF.RX_DCC_A90_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE  RX_DCC_A90_CAL_3.BF.RX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC_A90_CAL_3.BF.RX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0

// 0x54	RX_DCC_A90_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_TIMEOUT_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_4_t;
__xdata __at( 0xd50 ) volatile RX_DCC_A90_CAL_4_t RX_DCC_A90_CAL_4;
#define reg_RX_DCC_A90_CAL_OVERFLOW_RD_LANE  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC_A90_CAL_TIMEOUT_RD_LANE  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0

// 0x55	RX_DCC_A90_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      3       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      4       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_5_t;
__xdata __at( 0xd54 ) volatile RX_DCC_A90_CAL_5_t RX_DCC_A90_CAL_5;
#define reg_RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC_A90_CAL_UNDERFLOW_RD_LANE  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x56	RX_DCC_A90_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0   : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_6_t;
__xdata __at( 0xd58 ) volatile RX_DCC_A90_CAL_6_t RX_DCC_A90_CAL_6;
#define reg_RX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC_A90_CAL_6.BF.RX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x57	RX_DCC_A90_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_7_t;
__xdata __at( 0xd5c ) volatile RX_DCC_A90_CAL_7_t RX_DCC_A90_CAL_7;
#define reg_RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC_A90_CAL_7.BF.RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0

// 0x58	DLL_0		TBD
typedef union {
	struct {
		uint8_t DLL_TOP_DONE_LANE                        : 1;	/*      0       r 1'h0*/
		uint8_t DLL_TOP_CONT_START_LANE                  : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_TOP_START_LANE                       : 1;	/*      2     r/w 1'h0*/
		uint8_t DLL_UPDN_RD_LANE                         : 1;	/*      3       r 1'h0*/
		uint8_t DLL_SETTING_EXT_LANE                     : 1;	/*      4     r/w 1'h0*/
		uint8_t DLL_AUTO_ZERO_CLK_EXT_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t DLL_CMP_CTRL_EXT_LANE                    : 1;	/*      6     r/w 1'h0*/
		uint8_t DLL_COMN_EXT_EN_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_0_t;
__xdata __at( 0xd60 ) volatile DLL_0_t DLL_0;
#define reg_DLL_TOP_DONE_LANE  DLL_0.BF.DLL_TOP_DONE_LANE
#define reg_DLL_TOP_CONT_START_LANE  DLL_0.BF.DLL_TOP_CONT_START_LANE
#define reg_DLL_TOP_START_LANE  DLL_0.BF.DLL_TOP_START_LANE
#define reg_DLL_UPDN_RD_LANE  DLL_0.BF.DLL_UPDN_RD_LANE
#define reg_DLL_SETTING_EXT_LANE  DLL_0.BF.DLL_SETTING_EXT_LANE
#define reg_DLL_AUTO_ZERO_CLK_EXT_LANE  DLL_0.BF.DLL_AUTO_ZERO_CLK_EXT_LANE
#define reg_DLL_CMP_CTRL_EXT_LANE  DLL_0.BF.DLL_CMP_CTRL_EXT_LANE
#define reg_DLL_COMN_EXT_EN_LANE  DLL_0.BF.DLL_COMN_EXT_EN_LANE

// 0x59	DLL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t DLL_TOP_CONT_DONE_LANE                   : 1;	/*      4       r 1'h0*/
		uint8_t DLL_TESTBUS_CORE_SEL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_1_t;
__xdata __at( 0xd64 ) volatile DLL_1_t DLL_1;
#define reg_DLL_TOP_CONT_DONE_LANE  DLL_1.BF.DLL_TOP_CONT_DONE_LANE
#define reg_DLL_TESTBUS_CORE_SEL_LANE_2_0  DLL_1.BF.DLL_TESTBUS_CORE_SEL_LANE_2_0

// 0x5a	DLL_CAL_0		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_CMP_CTRL_LANE                    : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_CAL_CONT_NUM_LANE_3_0                : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t DLL_CAL_BYPASS_EN_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t DLL_CAL_CONT_EN_LANE                     : 1;	/*      6     r/w 1'h1*/
		uint8_t DLL_CAL_SINGLE_EN_LANE                   : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_0_t;
__xdata __at( 0xd68 ) volatile DLL_CAL_0_t DLL_CAL_0;
#define reg_DLL_CAL_CMP_CTRL_LANE  DLL_CAL_0.BF.DLL_CAL_CMP_CTRL_LANE
#define reg_DLL_CAL_CONT_NUM_LANE_3_0  DLL_CAL_0.BF.DLL_CAL_CONT_NUM_LANE_3_0
#define reg_DLL_CAL_BYPASS_EN_LANE  DLL_CAL_0.BF.DLL_CAL_BYPASS_EN_LANE
#define reg_DLL_CAL_CONT_EN_LANE  DLL_CAL_0.BF.DLL_CAL_CONT_EN_LANE
#define reg_DLL_CAL_SINGLE_EN_LANE  DLL_CAL_0.BF.DLL_CAL_SINGLE_EN_LANE

// 0x5b	DLL_CAL_1		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_BIN_SEARCH_ENABLE_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0    : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t DLL_CAL_DIR_INV_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_1_t;
__xdata __at( 0xd6c ) volatile DLL_CAL_1_t DLL_CAL_1;
#define reg_DLL_CAL_BIN_SEARCH_ENABLE_LANE  DLL_CAL_1.BF.DLL_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0  DLL_CAL_1.BF.DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_CAL_1.BF.DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_CAL_DIR_INV_LANE  DLL_CAL_1.BF.DLL_CAL_DIR_INV_LANE

// 0x5c	DLL_CAL_2		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_INDV_EXT_EN_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_CAL_TIMEOUT_CHK_DIS_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_CAL_RESULT_AVG_EN_LANE               : 1;	/*      2     r/w 1'h0*/
		uint8_t DLL_CAL_TOGGLE_TIMES_LANE_2_0            : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_2_t;
__xdata __at( 0xd70 ) volatile DLL_CAL_2_t DLL_CAL_2;
#define reg_DLL_CAL_INDV_EXT_EN_LANE  DLL_CAL_2.BF.DLL_CAL_INDV_EXT_EN_LANE
#define reg_DLL_CAL_TIMEOUT_CHK_DIS_LANE  DLL_CAL_2.BF.DLL_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_CAL_RESULT_AVG_EN_LANE  DLL_CAL_2.BF.DLL_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_CAL_TOGGLE_TIMES_LANE_2_0  DLL_CAL_2.BF.DLL_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_CAL_2.BF.DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x5d	DLL_CAL_3		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_3_t;
__xdata __at( 0xd74 ) volatile DLL_CAL_3_t DLL_CAL_3;
#define reg_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_CAL_3.BF.DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x5e	DLL_CAL_4		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_DUMMY_CLK_EXT_LANE               : 1;	/*      0     r/w 1'h1*/
		uint8_t DLL_CAL_CAL_EN_EXT_LANE                  : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_CAL_TIMEOUT_STEPS_LANE_2_0           : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_4_t;
__xdata __at( 0xd78 ) volatile DLL_CAL_4_t DLL_CAL_4;
#define reg_DLL_CAL_DUMMY_CLK_EXT_LANE  DLL_CAL_4.BF.DLL_CAL_DUMMY_CLK_EXT_LANE
#define reg_DLL_CAL_CAL_EN_EXT_LANE  DLL_CAL_4.BF.DLL_CAL_CAL_EN_EXT_LANE
#define reg_DLL_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_CAL_4.BF.DLL_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  DLL_CAL_4.BF.DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x5f	DLL_CAL_5		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_VAL_MIN_MSB_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t DLL_CAL_VAL_MAX_MSB_LANE_3_0             : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_5_t;
__xdata __at( 0xd7c ) volatile DLL_CAL_5_t DLL_CAL_5;
#define reg_DLL_CAL_VAL_MIN_MSB_LANE_3_0  DLL_CAL_5.BF.DLL_CAL_VAL_MIN_MSB_LANE_3_0
#define reg_DLL_CAL_VAL_MAX_MSB_LANE_3_0  DLL_CAL_5.BF.DLL_CAL_VAL_MAX_MSB_LANE_3_0

// 0x60	DLL_CAL_6		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_CAL_DONE_RD_LANE                 : 1;	/*      0       r 1'h0*/
		uint8_t DLL_CAL_VAL_MAX_LSB_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_6_t;
__xdata __at( 0xd80 ) volatile DLL_CAL_6_t DLL_CAL_6;
#define reg_DLL_CAL_CAL_DONE_RD_LANE  DLL_CAL_6.BF.DLL_CAL_CAL_DONE_RD_LANE
#define reg_DLL_CAL_VAL_MAX_LSB_LANE_6_0  DLL_CAL_6.BF.DLL_CAL_VAL_MAX_LSB_LANE_6_0

// 0x61	DLL_CAL_7		TBD
typedef union {
	struct {
		uint8_t DLL_CAL_TIMEOUT_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t DLL_CAL_VAL_MIN_LSB_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_7_t;
__xdata __at( 0xd84 ) volatile DLL_CAL_7_t DLL_CAL_7;
#define reg_DLL_CAL_TIMEOUT_RD_LANE  DLL_CAL_7.BF.DLL_CAL_TIMEOUT_RD_LANE
#define reg_DLL_CAL_VAL_MIN_LSB_LANE_6_0  DLL_CAL_7.BF.DLL_CAL_VAL_MIN_LSB_LANE_6_0

// 0x62	DLL_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_CAL_RESULT_RD_LANE                   : 1;	/*      1       r 1'h0*/
		uint8_t DLL_CAL_UNDERFLOW_RD_LANE                : 1;	/*      2       r 1'h0*/
		uint8_t DLL_CAL_OVERFLOW_RD_LANE                 : 1;	/*      3       r 1'h0*/
		uint8_t DLL_CAL_RESULT_MSB_EXT_LANE_3_0          : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_8_t;
__xdata __at( 0xd88 ) volatile DLL_CAL_8_t DLL_CAL_8;
#define reg_DLL_CAL_RESULT_RD_LANE  DLL_CAL_8.BF.DLL_CAL_RESULT_RD_LANE
#define reg_DLL_CAL_UNDERFLOW_RD_LANE  DLL_CAL_8.BF.DLL_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_CAL_OVERFLOW_RD_LANE  DLL_CAL_8.BF.DLL_CAL_OVERFLOW_RD_LANE
#define reg_DLL_CAL_RESULT_MSB_EXT_LANE_3_0  DLL_CAL_8.BF.DLL_CAL_RESULT_MSB_EXT_LANE_3_0

// 0x63	DLL_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_CAL_RESULT_LSB_EXT_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_9_t;
__xdata __at( 0xd8c ) volatile DLL_CAL_9_t DLL_CAL_9;
#define reg_DLL_CAL_RESULT_LSB_EXT_LANE_6_0  DLL_CAL_9.BF.DLL_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x64	RX_E2C_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_CMP_CTRL_LANE             : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_E2C_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_E2C_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_0_t;
__xdata __at( 0xd90 ) volatile RX_E2C_DCC_CAL_0_t RX_E2C_DCC_CAL_0;
#define reg_RX_E2C_DCC_CAL_CMP_CTRL_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CMP_CTRL_LANE
#define reg_RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_E2C_DCC_CAL_CONT_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_EN_LANE
#define reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_SINGLE_EN_LANE

// 0x65	RX_E2C_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RX_E2C_DCC_CAL_DIR_INV_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_1_t;
__xdata __at( 0xd94 ) volatile RX_E2C_DCC_CAL_1_t RX_E2C_DCC_CAL_1;
#define reg_RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_E2C_DCC_CAL_DIR_INV_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_DIR_INV_LANE

// 0x66	RX_E2C_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_2_t;
__xdata __at( 0xd98 ) volatile RX_E2C_DCC_CAL_2_t RX_E2C_DCC_CAL_2;
#define reg_RX_E2C_DCC_CAL_INDV_EXT_EN_LANE  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x67	RX_E2C_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_3_t;
__xdata __at( 0xd9c ) volatile RX_E2C_DCC_CAL_3_t RX_E2C_DCC_CAL_3;
#define reg_RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_E2C_DCC_CAL_3.BF.RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x68	RX_E2C_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_4_t;
__xdata __at( 0xda0 ) volatile RX_E2C_DCC_CAL_4_t RX_E2C_DCC_CAL_4;
#define reg_RX_E2C_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_E2C_DCC_CAL_CAL_EN_EXT_LANE  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x69	RX_E2C_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MAX_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_5_t;
__xdata __at( 0xda4 ) volatile RX_E2C_DCC_CAL_5_t RX_E2C_DCC_CAL_5;
#define reg_RX_E2C_DCC_CAL_TIMEOUT_RD_LANE  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_E2C_DCC_CAL_CAL_DONE_RD_LANE  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MAX_LANE_5_0  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_VAL_MAX_LANE_5_0

// 0x6a	RX_E2C_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MIN_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_6_t;
__xdata __at( 0xda8 ) volatile RX_E2C_DCC_CAL_6_t RX_E2C_DCC_CAL_6;
#define reg_RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_OVERFLOW_RD_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MIN_LANE_5_0  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_VAL_MIN_LANE_5_0

// 0x6b	RX_E2C_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_EXT_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_7_t;
__xdata __at( 0xdac ) volatile RX_E2C_DCC_CAL_7_t RX_E2C_DCC_CAL_7;
#define reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_5_0  RX_E2C_DCC_CAL_7.BF.RX_E2C_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x6c	RX_E2C_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0        : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_8_t;
__xdata __at( 0xdb0 ) volatile RX_E2C_DCC_CAL_8_t RX_E2C_DCC_CAL_8;
#define reg_RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0  RX_E2C_DCC_CAL_8.BF.RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0

#endif
