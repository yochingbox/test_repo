#ifndef PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H



// 0x0	TX_ALIGN90_DCC_IMP_0		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_TOP_START_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_UPDN_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE      : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_DCC_IMP_0_t;
__xdata __at( 0x1800 ) volatile TX_ALIGN90_DCC_IMP_0_t TX_ALIGN90_DCC_IMP_0;
#define reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE
#define reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_TOP_START_LANE
#define reg_TX_ALIGN90_DCC_IMP_UPDN_RD_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_UPDN_RD_LANE
#define reg_TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE
#define reg_TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_2_0  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_2_0
#define reg_TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE

// 0x1	TX_ALIGN90_DCC_IMP_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE    : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_TOP_DONE_LANE         : 1;	/*      4       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_DCC_IMP_1_t;
__xdata __at( 0x1804 ) volatile TX_ALIGN90_DCC_IMP_1_t TX_ALIGN90_DCC_IMP_1;
#define reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE
#define reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_DONE_LANE
#define reg_TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0

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
__xdata __at( 0x1808 ) volatile TX_ALIGN90_CAL_0_t TX_ALIGN90_CAL_0;
#define reg_TX_ALIGN90_CAL_DIR_INV_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_DIR_INV_LANE
#define reg_TX_ALIGN90_CAL_CONT_NUM_LANE_3_0  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_TX_ALIGN90_CAL_BYPASS_EN_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_TX_ALIGN90_CAL_CONT_EN_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_CONT_EN_LANE
#define reg_TX_ALIGN90_CAL_SINGLE_EN_LANE  TX_ALIGN90_CAL_0.BF.TX_ALIGN90_CAL_SINGLE_EN_LANE

// 0x3	TX_ALIGN90_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_RESULT_AVG_EN_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_ALIGN90_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_1_t;
__xdata __at( 0x180c ) volatile TX_ALIGN90_CAL_1_t TX_ALIGN90_CAL_1;
#define reg_TX_ALIGN90_CAL_RESULT_AVG_EN_LANE  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_ALIGN90_CAL_CMP_CTRL_LANE_2_0  TX_ALIGN90_CAL_1.BF.TX_ALIGN90_CAL_CMP_CTRL_LANE_2_0

// 0x4	TX_ALIGN90_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_2_t;
__xdata __at( 0x1810 ) volatile TX_ALIGN90_CAL_2_t TX_ALIGN90_CAL_2;
#define reg_TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_ALIGN90_CAL_2.BF.TX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x5	TX_ALIGN90_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_3_t;
__xdata __at( 0x1814 ) volatile TX_ALIGN90_CAL_3_t TX_ALIGN90_CAL_3;
#define reg_TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_ALIGN90_CAL_3.BF.TX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x6	TX_ALIGN90_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_4_t;
__xdata __at( 0x1818 ) volatile TX_ALIGN90_CAL_4_t TX_ALIGN90_CAL_4;
#define reg_TX_ALIGN90_CAL_INDV_EXT_EN_LANE  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_ALIGN90_CAL_4.BF.TX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x7	TX_ALIGN90_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h1*/
		uint8_t TX_ALIGN90_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_5_t;
__xdata __at( 0x181c ) volatile TX_ALIGN90_CAL_5_t TX_ALIGN90_CAL_5;
#define reg_TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_ALIGN90_CAL_CAL_EN_EXT_LANE  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  TX_ALIGN90_CAL_5.BF.TX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x8	TX_ALIGN90_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_6_t;
__xdata __at( 0x1820 ) volatile TX_ALIGN90_CAL_6_t TX_ALIGN90_CAL_6;
#define reg_TX_ALIGN90_CAL_CAL_DONE_RD_LANE  TX_ALIGN90_CAL_6.BF.TX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  TX_ALIGN90_CAL_6.BF.TX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0x9	TX_ALIGN90_CAL_7		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_7_t;
__xdata __at( 0x1824 ) volatile TX_ALIGN90_CAL_7_t TX_ALIGN90_CAL_7;
#define reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE  TX_ALIGN90_CAL_7.BF.TX_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  TX_ALIGN90_CAL_7.BF.TX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0xa	TX_ALIGN90_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      2       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_OVERFLOW_RD_LANE          : 1;	/*      4       r 1'h0*/
		uint8_t TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_8_t;
__xdata __at( 0x1828 ) volatile TX_ALIGN90_CAL_8_t TX_ALIGN90_CAL_8;
#define reg_TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_ALIGN90_CAL_UNDERFLOW_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_TX_ALIGN90_CAL_OVERFLOW_RD_LANE  TX_ALIGN90_CAL_8.BF.TX_ALIGN90_CAL_OVERFLOW_RD_LANE
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
__xdata __at( 0x182c ) volatile TX_ALIGN90_CAL_9_t TX_ALIGN90_CAL_9;
#define reg_TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  TX_ALIGN90_CAL_9.BF.TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0xc	TX_ALIGN90_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_10_t;
__xdata __at( 0x1830 ) volatile TX_ALIGN90_CAL_10_t TX_ALIGN90_CAL_10;
#define reg_TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  TX_ALIGN90_CAL_10.BF.TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0

// 0xd	TX_ALIGN90_CAL_11		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_CAL_11_t;
__xdata __at( 0x1834 ) volatile TX_ALIGN90_CAL_11_t TX_ALIGN90_CAL_11;
#define reg_TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  TX_ALIGN90_CAL_11.BF.TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0xe	TX_DCC1_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_RESULT_AVG_EN_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_BIN_SEARCH_ENABLE_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_DIR_INV_LANE                 : 1;	/*      2     r/w 1'h1*/
		uint8_t TX_DCC1_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t TX_DCC1_CAL_BYPASS_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_0_t;
__xdata __at( 0x1838 ) volatile TX_DCC1_CAL_0_t TX_DCC1_CAL_0;
#define reg_TX_DCC1_CAL_RESULT_AVG_EN_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC1_CAL_BIN_SEARCH_ENABLE_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_DCC1_CAL_DIR_INV_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_DIR_INV_LANE
#define reg_TX_DCC1_CAL_CMP_CTRL_LANE_2_0  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_CMP_CTRL_LANE_2_0
#define reg_TX_DCC1_CAL_BYPASS_EN_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_BYPASS_EN_LANE
#define reg_TX_DCC1_CAL_SINGLE_EN_LANE  TX_DCC1_CAL_0.BF.TX_DCC1_CAL_SINGLE_EN_LANE

// 0xf	TX_DCC1_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_1_t;
__xdata __at( 0x183c ) volatile TX_DCC1_CAL_1_t TX_DCC1_CAL_1;
#define reg_TX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_DCC1_CAL_1.BF.TX_DCC1_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x10	TX_DCC1_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC1_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC1_CAL_CAL_EN_EXT_LANE              : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_INDV_EXT_EN_LANE             : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_2_t;
__xdata __at( 0x1840 ) volatile TX_DCC1_CAL_2_t TX_DCC1_CAL_2;
#define reg_TX_DCC1_CAL_TIMEOUT_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC1_CAL_CAL_DONE_RD_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC1_CAL_CAL_EN_EXT_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC1_CAL_INDV_EXT_EN_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC1_CAL_2.BF.TX_DCC1_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x11	TX_DCC1_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC1_CAL_VAL_MAX_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_3_t;
__xdata __at( 0x1844 ) volatile TX_DCC1_CAL_3_t TX_DCC1_CAL_3;
#define reg_TX_DCC1_CAL_OVERFLOW_RD_LANE  TX_DCC1_CAL_3.BF.TX_DCC1_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC1_CAL_VAL_MAX_LANE_6_0  TX_DCC1_CAL_3.BF.TX_DCC1_CAL_VAL_MAX_LANE_6_0

// 0x12	TX_DCC1_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC1_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC1_CAL_VAL_MIN_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_4_t;
__xdata __at( 0x1848 ) volatile TX_DCC1_CAL_4_t TX_DCC1_CAL_4;
#define reg_TX_DCC1_CAL_UNDERFLOW_RD_LANE  TX_DCC1_CAL_4.BF.TX_DCC1_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC1_CAL_VAL_MIN_LANE_6_0  TX_DCC1_CAL_4.BF.TX_DCC1_CAL_VAL_MIN_LANE_6_0

// 0x13	TX_DCC1_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC1_CAL_RESULT_EXT_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_5_t;
__xdata __at( 0x184c ) volatile TX_DCC1_CAL_5_t TX_DCC1_CAL_5;
#define reg_TX_DCC1_CAL_RESULT_EXT_LANE_6_0  TX_DCC1_CAL_5.BF.TX_DCC1_CAL_RESULT_EXT_LANE_6_0

// 0x14	TX_DCC1_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC1_CAL_RESULT_RD_LANE_6_0           : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC1_CAL_6_t;
__xdata __at( 0x1850 ) volatile TX_DCC1_CAL_6_t TX_DCC1_CAL_6;
#define reg_TX_DCC1_CAL_RESULT_RD_LANE_6_0  TX_DCC1_CAL_6.BF.TX_DCC1_CAL_RESULT_RD_LANE_6_0

// 0x15	TX_DCC2_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_RESULT_AVG_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_DIR_INV_LANE                 : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t TX_DCC2_CAL_BYPASS_EN_LANE               : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_DCC2_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_0_t;
__xdata __at( 0x1854 ) volatile TX_DCC2_CAL_0_t TX_DCC2_CAL_0;
#define reg_TX_DCC2_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC2_CAL_RESULT_AVG_EN_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC2_CAL_DIR_INV_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_DIR_INV_LANE
#define reg_TX_DCC2_CAL_CMP_CTRL_LANE_2_0  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_CMP_CTRL_LANE_2_0
#define reg_TX_DCC2_CAL_BYPASS_EN_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_BYPASS_EN_LANE
#define reg_TX_DCC2_CAL_SINGLE_EN_LANE  TX_DCC2_CAL_0.BF.TX_DCC2_CAL_SINGLE_EN_LANE

// 0x16	TX_DCC2_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC2_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC2_CAL_TIMEOUT_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC2_CAL_CAL_DONE_RD_LANE             : 1;	/*      2       r 1'h0*/
		uint8_t TX_DCC2_CAL_CAL_EN_EXT_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_INDV_EXT_EN_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DCC2_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_1_t;
__xdata __at( 0x1858 ) volatile TX_DCC2_CAL_1_t TX_DCC2_CAL_1;
#define reg_TX_DCC2_CAL_OVERFLOW_RD_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC2_CAL_TIMEOUT_RD_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC2_CAL_CAL_DONE_RD_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC2_CAL_CAL_EN_EXT_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC2_CAL_INDV_EXT_EN_LANE  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC2_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC2_CAL_1.BF.TX_DCC2_CAL_TOGGLE_TIMES_LANE_2_0

// 0x17	TX_DCC2_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC2_CAL_UNDERFLOW_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC2_CAL_VAL_MAX_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_2_t;
__xdata __at( 0x185c ) volatile TX_DCC2_CAL_2_t TX_DCC2_CAL_2;
#define reg_TX_DCC2_CAL_UNDERFLOW_RD_LANE  TX_DCC2_CAL_2.BF.TX_DCC2_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC2_CAL_VAL_MAX_LANE_5_0  TX_DCC2_CAL_2.BF.TX_DCC2_CAL_VAL_MAX_LANE_5_0

// 0x18	TX_DCC2_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC2_CAL_VAL_MIN_LANE_5_0             : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_3_t;
__xdata __at( 0x1860 ) volatile TX_DCC2_CAL_3_t TX_DCC2_CAL_3;
#define reg_TX_DCC2_CAL_VAL_MIN_LANE_5_0  TX_DCC2_CAL_3.BF.TX_DCC2_CAL_VAL_MIN_LANE_5_0

// 0x19	TX_DCC2_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC2_CAL_RESULT_EXT_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_4_t;
__xdata __at( 0x1864 ) volatile TX_DCC2_CAL_4_t TX_DCC2_CAL_4;
#define reg_TX_DCC2_CAL_RESULT_EXT_LANE_5_0  TX_DCC2_CAL_4.BF.TX_DCC2_CAL_RESULT_EXT_LANE_5_0

// 0x1a	TX_DCC2_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC2_CAL_RESULT_RD_LANE_5_0           : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC2_CAL_5_t;
__xdata __at( 0x1868 ) volatile TX_DCC2_CAL_5_t TX_DCC2_CAL_5;
#define reg_TX_DCC2_CAL_RESULT_RD_LANE_5_0  TX_DCC2_CAL_5.BF.TX_DCC2_CAL_RESULT_RD_LANE_5_0

// 0x1b	TX_DCC3_CAL_0		TBD
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
__xdata __at( 0x186c ) volatile TX_DCC3_CAL_0_t TX_DCC3_CAL_0;
#define reg_TX_DCC3_CAL_DIR_INV_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_DIR_INV_LANE
#define reg_TX_DCC3_CAL_CONT_NUM_LANE_3_0  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC3_CAL_BYPASS_EN_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_BYPASS_EN_LANE
#define reg_TX_DCC3_CAL_CONT_EN_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_CONT_EN_LANE
#define reg_TX_DCC3_CAL_SINGLE_EN_LANE  TX_DCC3_CAL_0.BF.TX_DCC3_CAL_SINGLE_EN_LANE

// 0x1c	TX_DCC3_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_RESULT_AVG_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC3_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_1_t;
__xdata __at( 0x1870 ) volatile TX_DCC3_CAL_1_t TX_DCC3_CAL_1;
#define reg_TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC3_CAL_RESULT_AVG_EN_LANE  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC3_CAL_CMP_CTRL_LANE_2_0  TX_DCC3_CAL_1.BF.TX_DCC3_CAL_CMP_CTRL_LANE_2_0

// 0x1d	TX_DCC3_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CAL_EN_EXT_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_INDV_EXT_EN_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_2_t;
__xdata __at( 0x1874 ) volatile TX_DCC3_CAL_2_t TX_DCC3_CAL_2;
#define reg_TX_DCC3_CAL_CAL_EN_EXT_LANE  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC3_CAL_INDV_EXT_EN_LANE  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC3_CAL_2.BF.TX_DCC3_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x1e	TX_DCC3_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_CAL_DONE_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC3_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_3_t;
__xdata __at( 0x1878 ) volatile TX_DCC3_CAL_3_t TX_DCC3_CAL_3;
#define reg_TX_DCC3_CAL_CAL_DONE_RD_LANE  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC3_CAL_DUMMY_CLK_EXT_LANE  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC3_CAL_3.BF.TX_DCC3_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x1f	TX_DCC3_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_OVERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC3_CAL_TIMEOUT_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_4_t;
__xdata __at( 0x187c ) volatile TX_DCC3_CAL_4_t TX_DCC3_CAL_4;
#define reg_TX_DCC3_CAL_OVERFLOW_RD_LANE  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC3_CAL_TIMEOUT_RD_LANE  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC3_CAL_4.BF.TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0

// 0x20	TX_DCC3_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_DCC3_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC3_CAL_UNDERFLOW_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_5_t;
__xdata __at( 0x1880 ) volatile TX_DCC3_CAL_5_t TX_DCC3_CAL_5;
#define reg_TX_DCC3_CAL_DUMMY_CLK_RD_LANE  TX_DCC3_CAL_5.BF.TX_DCC3_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_DCC3_CAL_UNDERFLOW_RD_LANE  TX_DCC3_CAL_5.BF.TX_DCC3_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0  TX_DCC3_CAL_5.BF.TX_DCC3_CAL_VAL_MAX_LSB_LANE_5_0

// 0x21	TX_DCC3_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_6_t;
__xdata __at( 0x1884 ) volatile TX_DCC3_CAL_6_t TX_DCC3_CAL_6;
#define reg_TX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0  TX_DCC3_CAL_6.BF.TX_DCC3_CAL_VAL_MIN_LSB_LANE_5_0

// 0x22	TX_DCC3_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_7_t;
__xdata __at( 0x1888 ) volatile TX_DCC3_CAL_7_t TX_DCC3_CAL_7;
#define reg_TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0  TX_DCC3_CAL_7.BF.TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x23	TX_DCC3_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_8_t;
__xdata __at( 0x188c ) volatile TX_DCC3_CAL_8_t TX_DCC3_CAL_8;
#define reg_TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0  TX_DCC3_CAL_8.BF.TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0

// 0x24	TX_DCC3_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC3_CAL_9_t;
__xdata __at( 0x1890 ) volatile TX_DCC3_CAL_9_t TX_DCC3_CAL_9;
#define reg_TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC3_CAL_9.BF.TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0

// 0x25	TX_DCC4_CAL_0		TBD
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
__xdata __at( 0x1894 ) volatile TX_DCC4_CAL_0_t TX_DCC4_CAL_0;
#define reg_TX_DCC4_CAL_DIR_INV_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_DIR_INV_LANE
#define reg_TX_DCC4_CAL_CONT_NUM_LANE_3_0  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC4_CAL_BYPASS_EN_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_BYPASS_EN_LANE
#define reg_TX_DCC4_CAL_CONT_EN_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_CONT_EN_LANE
#define reg_TX_DCC4_CAL_SINGLE_EN_LANE  TX_DCC4_CAL_0.BF.TX_DCC4_CAL_SINGLE_EN_LANE

// 0x26	TX_DCC4_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_INDV_EXT_EN_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_RESULT_AVG_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_DCC4_CAL_CMP_CTRL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_1_t;
__xdata __at( 0x1898 ) volatile TX_DCC4_CAL_1_t TX_DCC4_CAL_1;
#define reg_TX_DCC4_CAL_INDV_EXT_EN_LANE  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC4_CAL_RESULT_AVG_EN_LANE  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC4_CAL_CMP_CTRL_LANE_2_0  TX_DCC4_CAL_1.BF.TX_DCC4_CAL_CMP_CTRL_LANE_2_0

// 0x27	TX_DCC4_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t TX_DCC4_CAL_CAL_EN_EXT_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_2_t;
__xdata __at( 0x189c ) volatile TX_DCC4_CAL_2_t TX_DCC4_CAL_2;
#define reg_TX_DCC4_CAL_DUMMY_CLK_EXT_LANE  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_DCC4_CAL_CAL_EN_EXT_LANE  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC4_CAL_2.BF.TX_DCC4_CAL_TOGGLE_TIMES_LANE_2_0

// 0x28	TX_DCC4_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC4_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_3_t;
__xdata __at( 0x18a0 ) volatile TX_DCC4_CAL_3_t TX_DCC4_CAL_3;
#define reg_TX_DCC4_CAL_TIMEOUT_RD_LANE  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC4_CAL_CAL_DONE_RD_LANE  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC4_CAL_3.BF.TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0

// 0x29	TX_DCC4_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC4_CAL_UNDERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC4_CAL_OVERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_4_t;
__xdata __at( 0x18a4 ) volatile TX_DCC4_CAL_4_t TX_DCC4_CAL_4;
#define reg_TX_DCC4_CAL_UNDERFLOW_RD_LANE  TX_DCC4_CAL_4.BF.TX_DCC4_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC4_CAL_OVERFLOW_RD_LANE  TX_DCC4_CAL_4.BF.TX_DCC4_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0  TX_DCC4_CAL_4.BF.TX_DCC4_CAL_VAL_MAX_LSB_LANE_5_0

// 0x2a	TX_DCC4_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC4_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_5_t;
__xdata __at( 0x18a8 ) volatile TX_DCC4_CAL_5_t TX_DCC4_CAL_5;
#define reg_TX_DCC4_CAL_DUMMY_CLK_RD_LANE  TX_DCC4_CAL_5.BF.TX_DCC4_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0  TX_DCC4_CAL_5.BF.TX_DCC4_CAL_VAL_MIN_LSB_LANE_5_0

// 0x2b	TX_DCC4_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_6_t;
__xdata __at( 0x18ac ) volatile TX_DCC4_CAL_6_t TX_DCC4_CAL_6;
#define reg_TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0  TX_DCC4_CAL_6.BF.TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x2c	TX_DCC4_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_7_t;
__xdata __at( 0x18b0 ) volatile TX_DCC4_CAL_7_t TX_DCC4_CAL_7;
#define reg_TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0  TX_DCC4_CAL_7.BF.TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0

// 0x2d	TX_DCC4_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC4_CAL_8_t;
__xdata __at( 0x18b4 ) volatile TX_DCC4_CAL_8_t TX_DCC4_CAL_8;
#define reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC4_CAL_8.BF.TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0

// 0x2e	TX_IMP_N_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_RESULT_AVG_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE      : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_DIR_INV_LANE                : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_CMP_CTRL_LANE_2_0           : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t TX_IMP_N_CAL_BYPASS_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_0_t;
__xdata __at( 0x18b8 ) volatile TX_IMP_N_CAL_0_t TX_IMP_N_CAL_0;
#define reg_TX_IMP_N_CAL_RESULT_AVG_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_RESULT_AVG_EN_LANE
#define reg_TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_N_CAL_DIR_INV_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_DIR_INV_LANE
#define reg_TX_IMP_N_CAL_CMP_CTRL_LANE_2_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_CMP_CTRL_LANE_2_0
#define reg_TX_IMP_N_CAL_BYPASS_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_N_CAL_SINGLE_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_SINGLE_EN_LANE

// 0x2f	TX_IMP_N_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_1_t;
__xdata __at( 0x18bc ) volatile TX_IMP_N_CAL_1_t TX_IMP_N_CAL_1;
#define reg_TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x30	TX_IMP_N_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_2_t;
__xdata __at( 0x18c0 ) volatile TX_IMP_N_CAL_2_t TX_IMP_N_CAL_2;
#define reg_TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x31	TX_IMP_N_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_INDV_EXT_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_3_t;
__xdata __at( 0x18c4 ) volatile TX_IMP_N_CAL_3_t TX_IMP_N_CAL_3;
#define reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x32	TX_IMP_N_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_4_t;
__xdata __at( 0x18c8 ) volatile TX_IMP_N_CAL_4_t TX_IMP_N_CAL_4;
#define reg_TX_IMP_N_CAL_CAL_EN_EXT_LANE  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_N_CAL_VAL_MAX_LANE_6_0  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_VAL_MAX_LANE_6_0

// 0x33	TX_IMP_N_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_5_t;
__xdata __at( 0x18cc ) volatile TX_IMP_N_CAL_5_t TX_IMP_N_CAL_5;
#define reg_TX_IMP_N_CAL_CAL_DONE_RD_LANE  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_N_CAL_VAL_MIN_LANE_6_0  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_VAL_MIN_LANE_6_0

// 0x34	TX_IMP_N_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TIMEOUT_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_6_t;
__xdata __at( 0x18d0 ) volatile TX_IMP_N_CAL_6_t TX_IMP_N_CAL_6;
#define reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_RESULT_EXT_LANE_6_0

// 0x35	TX_IMP_N_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t TX_IMP_N_CAL_UNDERFLOW_RD_LANE           : 1;	/*      6       r 1'h0*/
		uint8_t TX_IMP_N_CAL_OVERFLOW_RD_LANE            : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_7_t;
__xdata __at( 0x18d4 ) volatile TX_IMP_N_CAL_7_t TX_IMP_N_CAL_7;
#define reg_TX_IMP_N_CAL_UNDERFLOW_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_OVERFLOW_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_OVERFLOW_RD_LANE

// 0x36	TX_IMP_N_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_N_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_8_t;
__xdata __at( 0x18d8 ) volatile TX_IMP_N_CAL_8_t TX_IMP_N_CAL_8;
#define reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0  TX_IMP_N_CAL_8.BF.TX_IMP_N_CAL_RESULT_RD_LANE_6_0

// 0x37	TX_IMP_P_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_RESULT_AVG_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE      : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_DIR_INV_LANE                : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_CMP_CTRL_LANE_2_0           : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t TX_IMP_P_CAL_BYPASS_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_0_t;
__xdata __at( 0x18dc ) volatile TX_IMP_P_CAL_0_t TX_IMP_P_CAL_0;
#define reg_TX_IMP_P_CAL_RESULT_AVG_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_RESULT_AVG_EN_LANE
#define reg_TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_P_CAL_DIR_INV_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_DIR_INV_LANE
#define reg_TX_IMP_P_CAL_CMP_CTRL_LANE_2_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_CMP_CTRL_LANE_2_0
#define reg_TX_IMP_P_CAL_BYPASS_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_P_CAL_SINGLE_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_SINGLE_EN_LANE

// 0x38	TX_IMP_P_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_1_t;
__xdata __at( 0x18e0 ) volatile TX_IMP_P_CAL_1_t TX_IMP_P_CAL_1;
#define reg_TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x39	TX_IMP_P_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TIMEOUT_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_CAL_DONE_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_P_CAL_CAL_EN_EXT_LANE             : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_INDV_EXT_EN_LANE            : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_2_t;
__xdata __at( 0x18e4 ) volatile TX_IMP_P_CAL_2_t TX_IMP_P_CAL_2;
#define reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_P_CAL_CAL_DONE_RD_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_P_CAL_CAL_EN_EXT_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x3a	TX_IMP_P_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_OVERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_3_t;
__xdata __at( 0x18e8 ) volatile TX_IMP_P_CAL_3_t TX_IMP_P_CAL_3;
#define reg_TX_IMP_P_CAL_OVERFLOW_RD_LANE  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_VAL_MAX_LANE_6_0  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_VAL_MAX_LANE_6_0

// 0x3b	TX_IMP_P_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_UNDERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_4_t;
__xdata __at( 0x18ec ) volatile TX_IMP_P_CAL_4_t TX_IMP_P_CAL_4;
#define reg_TX_IMP_P_CAL_UNDERFLOW_RD_LANE  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_VAL_MIN_LANE_6_0  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_VAL_MIN_LANE_6_0

// 0x3c	TX_IMP_P_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_5_t;
__xdata __at( 0x18f0 ) volatile TX_IMP_P_CAL_5_t TX_IMP_P_CAL_5;
#define reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_RESULT_EXT_LANE_6_0

// 0x3d	TX_IMP_P_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_6_t;
__xdata __at( 0x18f4 ) volatile TX_IMP_P_CAL_6_t TX_IMP_P_CAL_6;
#define reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0  TX_IMP_P_CAL_6.BF.TX_IMP_P_CAL_RESULT_RD_LANE_6_0

// 0x3e	TX_IMP_ICCP_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE   : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_DIR_INV_LANE             : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_CMP_CTRL_LANE_2_0        : 3;	/*  [5:3]     r/w 3'h5*/
		uint8_t TX_IMP_ICCP_CAL_BYPASS_EN_LANE           : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_SINGLE_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_0_t;
__xdata __at( 0x18f8 ) volatile TX_IMP_ICCP_CAL_0_t TX_IMP_ICCP_CAL_0;
#define reg_TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE
#define reg_TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_ICCP_CAL_DIR_INV_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_DIR_INV_LANE
#define reg_TX_IMP_ICCP_CAL_CMP_CTRL_LANE_2_0  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_CMP_CTRL_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_SINGLE_EN_LANE

// 0x3f	TX_IMP_ICCP_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0    : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_1_t;
__xdata __at( 0x18fc ) volatile TX_IMP_ICCP_CAL_1_t TX_IMP_ICCP_CAL_1;
#define reg_TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x40	TX_IMP_ICCP_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE         : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE     : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_2_t;
__xdata __at( 0x1900 ) volatile TX_IMP_ICCP_CAL_2_t TX_IMP_ICCP_CAL_2;
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x41	TX_IMP_ICCP_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE         : 1;	/*      2       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_3_t;
__xdata __at( 0x1904 ) volatile TX_IMP_ICCP_CAL_3_t TX_IMP_ICCP_CAL_3;
#define reg_TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE  TX_IMP_ICCP_CAL_3.BF.TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE  TX_IMP_ICCP_CAL_3.BF.TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0  TX_IMP_ICCP_CAL_3.BF.TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0

// 0x42	TX_IMP_ICCP_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_4_t;
__xdata __at( 0x1908 ) volatile TX_IMP_ICCP_CAL_4_t TX_IMP_ICCP_CAL_4;
#define reg_TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0

// 0x43	TX_IMP_ICCP_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_5_t;
__xdata __at( 0x190c ) volatile TX_IMP_ICCP_CAL_5_t TX_IMP_ICCP_CAL_5;
#define reg_TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0

// 0x44	TX_IMP_ICCP_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0       : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_6_t;
__xdata __at( 0x1910 ) volatile TX_IMP_ICCP_CAL_6_t TX_IMP_ICCP_CAL_6;
#define reg_TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0  TX_IMP_ICCP_CAL_6.BF.TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0

// 0x45	TX_IMP_ICCN_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE   : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_DIR_INV_LANE             : 1;	/*      2     r/w 1'h1*/
		uint8_t TX_IMP_ICCN_CAL_CMP_CTRL_LANE_2_0        : 3;	/*  [5:3]     r/w 3'h6*/
		uint8_t TX_IMP_ICCN_CAL_BYPASS_EN_LANE           : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_SINGLE_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_0_t;
__xdata __at( 0x1914 ) volatile TX_IMP_ICCN_CAL_0_t TX_IMP_ICCN_CAL_0;
#define reg_TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE
#define reg_TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_ICCN_CAL_DIR_INV_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_DIR_INV_LANE
#define reg_TX_IMP_ICCN_CAL_CMP_CTRL_LANE_2_0  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_CMP_CTRL_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_SINGLE_EN_LANE

// 0x46	TX_IMP_ICCN_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0    : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_1_t;
__xdata __at( 0x1918 ) volatile TX_IMP_ICCN_CAL_1_t TX_IMP_ICCN_CAL_1;
#define reg_TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x47	TX_IMP_ICCN_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE         : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE     : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_2_t;
__xdata __at( 0x191c ) volatile TX_IMP_ICCN_CAL_2_t TX_IMP_ICCN_CAL_2;
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x48	TX_IMP_ICCN_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE         : 1;	/*      2       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_3_t;
__xdata __at( 0x1920 ) volatile TX_IMP_ICCN_CAL_3_t TX_IMP_ICCN_CAL_3;
#define reg_TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE  TX_IMP_ICCN_CAL_3.BF.TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE  TX_IMP_ICCN_CAL_3.BF.TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0  TX_IMP_ICCN_CAL_3.BF.TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0

// 0x49	TX_IMP_ICCN_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_4_t;
__xdata __at( 0x1924 ) volatile TX_IMP_ICCN_CAL_4_t TX_IMP_ICCN_CAL_4;
#define reg_TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0

// 0x4a	TX_IMP_ICCN_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_5_t;
__xdata __at( 0x1928 ) volatile TX_IMP_ICCN_CAL_5_t TX_IMP_ICCN_CAL_5;
#define reg_TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0

// 0x4b	TX_IMP_ICCN_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0       : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_6_t;
__xdata __at( 0x192c ) volatile TX_IMP_ICCN_CAL_6_t TX_IMP_ICCN_CAL_6;
#define reg_TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0  TX_IMP_ICCN_CAL_6.BF.TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0

// 0x4c	TX_IMP_TEMPC_PCAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_DIR_INV_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0      : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE         : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CONT_EN_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_0_t;
__xdata __at( 0x1930 ) volatile TX_IMP_TEMPC_PCAL_0_t TX_IMP_TEMPC_PCAL_0;
#define reg_TX_IMP_TEMPC_PCAL_DIR_INV_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_DIR_INV_LANE
#define reg_TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_CONT_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_CONT_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE

// 0x4d	TX_IMP_TEMPC_PCAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_1_t;
__xdata __at( 0x1934 ) volatile TX_IMP_TEMPC_PCAL_1_t TX_IMP_TEMPC_PCAL_1;
#define reg_TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_2_0  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_2_0

// 0x4e	TX_IMP_TEMPC_PCAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_2_t;
__xdata __at( 0x1938 ) volatile TX_IMP_TEMPC_PCAL_2_t TX_IMP_TEMPC_PCAL_2;
#define reg_TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x4f	TX_IMP_TEMPC_PCAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0       : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_3_t;
__xdata __at( 0x193c ) volatile TX_IMP_TEMPC_PCAL_3_t TX_IMP_TEMPC_PCAL_3;
#define reg_TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0

// 0x50	TX_IMP_TEMPC_PCAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE       : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0       : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_4_t;
__xdata __at( 0x1940 ) volatile TX_IMP_TEMPC_PCAL_4_t TX_IMP_TEMPC_PCAL_4;
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0

// 0x51	TX_IMP_TEMPC_PCAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0    : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_5_t;
__xdata __at( 0x1944 ) volatile TX_IMP_TEMPC_PCAL_5_t TX_IMP_TEMPC_PCAL_5;
#define reg_TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0

// 0x52	TX_IMP_TEMPC_PCAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0     : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_6_t;
__xdata __at( 0x1948 ) volatile TX_IMP_TEMPC_PCAL_6_t TX_IMP_TEMPC_PCAL_6;
#define reg_TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0

// 0x53	TX_IMP_TEMPC_NCAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_DIR_INV_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0      : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE         : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CONT_EN_LANE           : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_0_t;
__xdata __at( 0x194c ) volatile TX_IMP_TEMPC_NCAL_0_t TX_IMP_TEMPC_NCAL_0;
#define reg_TX_IMP_TEMPC_NCAL_DIR_INV_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_DIR_INV_LANE
#define reg_TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_CONT_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_CONT_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE

// 0x54	TX_IMP_TEMPC_NCAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_1_t;
__xdata __at( 0x1950 ) volatile TX_IMP_TEMPC_NCAL_1_t TX_IMP_TEMPC_NCAL_1;
#define reg_TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_2_0  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_2_0

// 0x55	TX_IMP_TEMPC_NCAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_2_t;
__xdata __at( 0x1954 ) volatile TX_IMP_TEMPC_NCAL_2_t TX_IMP_TEMPC_NCAL_2;
#define reg_TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x56	TX_IMP_TEMPC_NCAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0       : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_3_t;
__xdata __at( 0x1958 ) volatile TX_IMP_TEMPC_NCAL_3_t TX_IMP_TEMPC_NCAL_3;
#define reg_TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0

// 0x57	TX_IMP_TEMPC_NCAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE        : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE       : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0       : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_4_t;
__xdata __at( 0x195c ) volatile TX_IMP_TEMPC_NCAL_4_t TX_IMP_TEMPC_NCAL_4;
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0

// 0x58	TX_IMP_TEMPC_NCAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE       : 1;	/*      3       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0    : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_5_t;
__xdata __at( 0x1960 ) volatile TX_IMP_TEMPC_NCAL_5_t TX_IMP_TEMPC_NCAL_5;
#define reg_TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0

// 0x59	TX_IMP_TEMPC_NCAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0     : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_6_t;
__xdata __at( 0x1964 ) volatile TX_IMP_TEMPC_NCAL_6_t TX_IMP_TEMPC_NCAL_6;
#define reg_TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0

// 0x5a	SMPLR_ODD_0		TBD
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
__xdata __at( 0x1968 ) volatile SMPLR_ODD_0_t SMPLR_ODD_0;
#define reg_SMPLR_ODD_TOP_DONE_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_TOP_DONE_LANE
#define reg_SMPLR_ODD_TESTBUS_CORE_SEL_LANE_2_0  SMPLR_ODD_0.BF.SMPLR_ODD_TESTBUS_CORE_SEL_LANE_2_0
#define reg_SMPLR_ODD_TOP_START_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_TOP_START_LANE
#define reg_SMPLR_ODD_UPDN_RD_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_UPDN_RD_LANE
#define reg_SMPLR_ODD_UNDERFLOW_ALL_RD_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_UNDERFLOW_ALL_RD_LANE
#define reg_SMPLR_ODD_OVERFLOW_ALL_RD_LANE  SMPLR_ODD_0.BF.SMPLR_ODD_OVERFLOW_ALL_RD_LANE

// 0x5b	SMPLR_D_TOP_O_CAL_0		TBD
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
__xdata __at( 0x196c ) volatile SMPLR_D_TOP_O_CAL_0_t SMPLR_D_TOP_O_CAL_0;
#define reg_SMPLR_D_TOP_O_CAL_TIMEOUT_CHK_DIS_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_SMPLR_D_TOP_O_CAL_RESULT_AVG_EN_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_RESULT_AVG_EN_LANE
#define reg_SMPLR_D_TOP_O_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SMPLR_D_TOP_O_CAL_DIR_INV_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_DIR_INV_LANE
#define reg_SMPLR_D_TOP_O_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_BYPASS_EN_LANE
#define reg_SMPLR_D_TOP_O_CAL_SINGLE_EN_LANE  SMPLR_D_TOP_O_CAL_0.BF.SMPLR_D_TOP_O_CAL_SINGLE_EN_LANE

// 0x5c	SMPLR_D_TOP_O_CAL_1		TBD
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
__xdata __at( 0x1970 ) volatile SMPLR_D_TOP_O_CAL_1_t SMPLR_D_TOP_O_CAL_1;
#define reg_SMPLR_D_TOP_O_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_O_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_O_CAL_TIMEOUT_STEPS_LANE_2_0  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SMPLR_D_TOP_O_CAL_TOGGLE_TIMES_LANE_2_0  SMPLR_D_TOP_O_CAL_1.BF.SMPLR_D_TOP_O_CAL_TOGGLE_TIMES_LANE_2_0

// 0x5d	SMPLR_D_TOP_O_CAL_2		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_2_t;
__xdata __at( 0x1974 ) volatile SMPLR_D_TOP_O_CAL_2_t SMPLR_D_TOP_O_CAL_2;
#define reg_SMPLR_D_TOP_O_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SMPLR_D_TOP_O_CAL_2.BF.SMPLR_D_TOP_O_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x5e	SMPLR_D_TOP_O_CAL_3		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_VAL_MAX_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_3_t;
__xdata __at( 0x1978 ) volatile SMPLR_D_TOP_O_CAL_3_t SMPLR_D_TOP_O_CAL_3;
#define reg_SMPLR_D_TOP_O_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_O_CAL_3.BF.SMPLR_D_TOP_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_O_CAL_3.BF.SMPLR_D_TOP_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_VAL_MAX_LANE_5_0  SMPLR_D_TOP_O_CAL_3.BF.SMPLR_D_TOP_O_CAL_VAL_MAX_LANE_5_0

// 0x5f	SMPLR_D_TOP_O_CAL_4		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_O_CAL_UNDERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_OVERFLOW_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_O_CAL_VAL_MIN_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_4_t;
__xdata __at( 0x197c ) volatile SMPLR_D_TOP_O_CAL_4_t SMPLR_D_TOP_O_CAL_4;
#define reg_SMPLR_D_TOP_O_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_O_CAL_4.BF.SMPLR_D_TOP_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_O_CAL_4.BF.SMPLR_D_TOP_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_O_CAL_VAL_MIN_LANE_5_0  SMPLR_D_TOP_O_CAL_4.BF.SMPLR_D_TOP_O_CAL_VAL_MIN_LANE_5_0

// 0x60	SMPLR_D_TOP_O_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_O_CAL_5_t;
__xdata __at( 0x1980 ) volatile SMPLR_D_TOP_O_CAL_5_t SMPLR_D_TOP_O_CAL_5;
#define reg_SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_5_0  SMPLR_D_TOP_O_CAL_5.BF.SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_5_0

// 0x61	SMPLR_D_MID_O_CAL_0		TBD
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
__xdata __at( 0x1984 ) volatile SMPLR_D_MID_O_CAL_0_t SMPLR_D_MID_O_CAL_0;
#define reg_SMPLR_D_MID_O_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_O_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_O_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_O_CAL_BYPASS_EN_LANE  SMPLR_D_MID_O_CAL_0.BF.SMPLR_D_MID_O_CAL_BYPASS_EN_LANE

// 0x62	SMPLR_D_MID_O_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_MID_O_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_O_CAL_1_t;
__xdata __at( 0x1988 ) volatile SMPLR_D_MID_O_CAL_1_t SMPLR_D_MID_O_CAL_1;
#define reg_SMPLR_D_MID_O_CAL_RESULT_RD_LANE_5_0  SMPLR_D_MID_O_CAL_1.BF.SMPLR_D_MID_O_CAL_RESULT_RD_LANE_5_0

// 0x63	SMPLR_D_BOT_O_CAL_0		TBD
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
__xdata __at( 0x198c ) volatile SMPLR_D_BOT_O_CAL_0_t SMPLR_D_BOT_O_CAL_0;
#define reg_SMPLR_D_BOT_O_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_O_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_O_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_O_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_O_CAL_0.BF.SMPLR_D_BOT_O_CAL_BYPASS_EN_LANE

// 0x64	SMPLR_D_BOT_O_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_O_CAL_1_t;
__xdata __at( 0x1990 ) volatile SMPLR_D_BOT_O_CAL_1_t SMPLR_D_BOT_O_CAL_1;
#define reg_SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_5_0  SMPLR_D_BOT_O_CAL_1.BF.SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_5_0

// 0x65	SMPLR_S_TOP_O_CAL_0		TBD
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
__xdata __at( 0x1994 ) volatile SMPLR_S_TOP_O_CAL_0_t SMPLR_S_TOP_O_CAL_0;
#define reg_SMPLR_S_TOP_O_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_O_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_O_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_O_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_O_CAL_0.BF.SMPLR_S_TOP_O_CAL_BYPASS_EN_LANE

// 0x66	SMPLR_S_TOP_O_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_O_CAL_1_t;
__xdata __at( 0x1998 ) volatile SMPLR_S_TOP_O_CAL_1_t SMPLR_S_TOP_O_CAL_1;
#define reg_SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_5_0  SMPLR_S_TOP_O_CAL_1.BF.SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_5_0

// 0x67	SMPLR_S_MID_O_CAL_0		TBD
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
__xdata __at( 0x199c ) volatile SMPLR_S_MID_O_CAL_0_t SMPLR_S_MID_O_CAL_0;
#define reg_SMPLR_S_MID_O_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_O_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_O_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_O_CAL_BYPASS_EN_LANE  SMPLR_S_MID_O_CAL_0.BF.SMPLR_S_MID_O_CAL_BYPASS_EN_LANE

// 0x68	SMPLR_S_MID_O_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_MID_O_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_O_CAL_1_t;
__xdata __at( 0x19a0 ) volatile SMPLR_S_MID_O_CAL_1_t SMPLR_S_MID_O_CAL_1;
#define reg_SMPLR_S_MID_O_CAL_RESULT_RD_LANE_5_0  SMPLR_S_MID_O_CAL_1.BF.SMPLR_S_MID_O_CAL_RESULT_RD_LANE_5_0

// 0x69	SMPLR_S_BOT_O_CAL_0		TBD
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
__xdata __at( 0x19a4 ) volatile SMPLR_S_BOT_O_CAL_0_t SMPLR_S_BOT_O_CAL_0;
#define reg_SMPLR_S_BOT_O_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_O_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_O_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_O_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_O_CAL_0.BF.SMPLR_S_BOT_O_CAL_BYPASS_EN_LANE

// 0x6a	SMPLR_S_BOT_O_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_O_CAL_1_t;
__xdata __at( 0x19a8 ) volatile SMPLR_S_BOT_O_CAL_1_t SMPLR_S_BOT_O_CAL_1;
#define reg_SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_5_0  SMPLR_S_BOT_O_CAL_1.BF.SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_5_0

// 0x6b	SMPLR_EDGE_O_CAL_0		TBD
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
__xdata __at( 0x19ac ) volatile SMPLR_EDGE_O_CAL_0_t SMPLR_EDGE_O_CAL_0;
#define reg_SMPLR_EDGE_O_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_O_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MIN_PN_SIGN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_VAL_MIN_PN_SIGN_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MAX_PN_SIGN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_VAL_MAX_PN_SIGN_LANE
#define reg_SMPLR_EDGE_O_CAL_DIR_INV_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_DIR_INV_LANE
#define reg_SMPLR_EDGE_O_CAL_BYPASS_EN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_BYPASS_EN_LANE
#define reg_SMPLR_EDGE_O_CAL_SINGLE_EN_LANE  SMPLR_EDGE_O_CAL_0.BF.SMPLR_EDGE_O_CAL_SINGLE_EN_LANE

// 0x6c	SMPLR_EDGE_O_CAL_1		TBD
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
__xdata __at( 0x19b0 ) volatile SMPLR_EDGE_O_CAL_1_t SMPLR_EDGE_O_CAL_1;
#define reg_SMPLR_EDGE_O_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MAX_PN_LANE_4_0  SMPLR_EDGE_O_CAL_1.BF.SMPLR_EDGE_O_CAL_VAL_MAX_PN_LANE_4_0

// 0x6d	SMPLR_EDGE_O_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE  : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_O_CAL_VAL_MIN_PN_LANE_4_0     : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_2_t;
__xdata __at( 0x19b4 ) volatile SMPLR_EDGE_O_CAL_2_t SMPLR_EDGE_O_CAL_2;
#define reg_SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_O_CAL_2.BF.SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_O_CAL_VAL_MIN_PN_LANE_4_0  SMPLR_EDGE_O_CAL_2.BF.SMPLR_EDGE_O_CAL_VAL_MIN_PN_LANE_4_0

// 0x6e	SMPLR_EDGE_O_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_3_t;
__xdata __at( 0x19b8 ) volatile SMPLR_EDGE_O_CAL_3_t SMPLR_EDGE_O_CAL_3;
#define reg_SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_O_CAL_3.BF.SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0

// 0x6f	SMPLR_EDGE_O_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_O_CAL_4_t;
__xdata __at( 0x19bc ) volatile SMPLR_EDGE_O_CAL_4_t SMPLR_EDGE_O_CAL_4;
#define reg_SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_O_CAL_4.BF.SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0

// 0x70	SMPLR_EVEN_0		TBD
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
__xdata __at( 0x19c0 ) volatile SMPLR_EVEN_0_t SMPLR_EVEN_0;
#define reg_SMPLR_EVEN_TOP_DONE_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_TOP_DONE_LANE
#define reg_SMPLR_EVEN_TESTBUS_CORE_SEL_LANE_2_0  SMPLR_EVEN_0.BF.SMPLR_EVEN_TESTBUS_CORE_SEL_LANE_2_0
#define reg_SMPLR_EVEN_TOP_START_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_TOP_START_LANE
#define reg_SMPLR_EVEN_UPDN_RD_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_UPDN_RD_LANE
#define reg_SMPLR_EVEN_UNDERFLOW_ALL_RD_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_UNDERFLOW_ALL_RD_LANE
#define reg_SMPLR_EVEN_OVERFLOW_ALL_RD_LANE  SMPLR_EVEN_0.BF.SMPLR_EVEN_OVERFLOW_ALL_RD_LANE

// 0x71	SMPLR_D_TOP_E_CAL_0		TBD
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
__xdata __at( 0x19c4 ) volatile SMPLR_D_TOP_E_CAL_0_t SMPLR_D_TOP_E_CAL_0;
#define reg_SMPLR_D_TOP_E_CAL_TIMEOUT_CHK_DIS_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_SMPLR_D_TOP_E_CAL_RESULT_AVG_EN_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_RESULT_AVG_EN_LANE
#define reg_SMPLR_D_TOP_E_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SMPLR_D_TOP_E_CAL_DIR_INV_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_DIR_INV_LANE
#define reg_SMPLR_D_TOP_E_CAL_BYPASS_EN_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_BYPASS_EN_LANE
#define reg_SMPLR_D_TOP_E_CAL_SINGLE_EN_LANE  SMPLR_D_TOP_E_CAL_0.BF.SMPLR_D_TOP_E_CAL_SINGLE_EN_LANE

// 0x72	SMPLR_D_TOP_E_CAL_1		TBD
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
__xdata __at( 0x19c8 ) volatile SMPLR_D_TOP_E_CAL_1_t SMPLR_D_TOP_E_CAL_1;
#define reg_SMPLR_D_TOP_E_CAL_CAL_EN_EXT_LANE  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_TOP_E_CAL_INDV_EXT_EN_LANE  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_TOP_E_CAL_TIMEOUT_STEPS_LANE_2_0  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SMPLR_D_TOP_E_CAL_TOGGLE_TIMES_LANE_2_0  SMPLR_D_TOP_E_CAL_1.BF.SMPLR_D_TOP_E_CAL_TOGGLE_TIMES_LANE_2_0

// 0x73	SMPLR_D_TOP_E_CAL_2		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_2_t;
__xdata __at( 0x19cc ) volatile SMPLR_D_TOP_E_CAL_2_t SMPLR_D_TOP_E_CAL_2;
#define reg_SMPLR_D_TOP_E_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SMPLR_D_TOP_E_CAL_2.BF.SMPLR_D_TOP_E_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x74	SMPLR_D_TOP_E_CAL_3		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_VAL_MAX_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_3_t;
__xdata __at( 0x19d0 ) volatile SMPLR_D_TOP_E_CAL_3_t SMPLR_D_TOP_E_CAL_3;
#define reg_SMPLR_D_TOP_E_CAL_TIMEOUT_RD_LANE  SMPLR_D_TOP_E_CAL_3.BF.SMPLR_D_TOP_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_CAL_DONE_RD_LANE  SMPLR_D_TOP_E_CAL_3.BF.SMPLR_D_TOP_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_VAL_MAX_LANE_5_0  SMPLR_D_TOP_E_CAL_3.BF.SMPLR_D_TOP_E_CAL_VAL_MAX_LANE_5_0

// 0x75	SMPLR_D_TOP_E_CAL_4		TBD
typedef union {
	struct {
		uint8_t SMPLR_D_TOP_E_CAL_UNDERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_OVERFLOW_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t SMPLR_D_TOP_E_CAL_VAL_MIN_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_4_t;
__xdata __at( 0x19d4 ) volatile SMPLR_D_TOP_E_CAL_4_t SMPLR_D_TOP_E_CAL_4;
#define reg_SMPLR_D_TOP_E_CAL_UNDERFLOW_RD_LANE  SMPLR_D_TOP_E_CAL_4.BF.SMPLR_D_TOP_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_OVERFLOW_RD_LANE  SMPLR_D_TOP_E_CAL_4.BF.SMPLR_D_TOP_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_TOP_E_CAL_VAL_MIN_LANE_5_0  SMPLR_D_TOP_E_CAL_4.BF.SMPLR_D_TOP_E_CAL_VAL_MIN_LANE_5_0

// 0x76	SMPLR_D_TOP_E_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_TOP_E_CAL_5_t;
__xdata __at( 0x19d8 ) volatile SMPLR_D_TOP_E_CAL_5_t SMPLR_D_TOP_E_CAL_5;
#define reg_SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_5_0  SMPLR_D_TOP_E_CAL_5.BF.SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_5_0

// 0x77	SMPLR_D_MID_E_CAL_0		TBD
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
__xdata __at( 0x19dc ) volatile SMPLR_D_MID_E_CAL_0_t SMPLR_D_MID_E_CAL_0;
#define reg_SMPLR_D_MID_E_CAL_UNDERFLOW_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_OVERFLOW_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_TIMEOUT_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_CAL_DONE_RD_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_MID_E_CAL_CAL_EN_EXT_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_MID_E_CAL_INDV_EXT_EN_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_MID_E_CAL_BYPASS_EN_LANE  SMPLR_D_MID_E_CAL_0.BF.SMPLR_D_MID_E_CAL_BYPASS_EN_LANE

// 0x78	SMPLR_D_MID_E_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_MID_E_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_MID_E_CAL_1_t;
__xdata __at( 0x19e0 ) volatile SMPLR_D_MID_E_CAL_1_t SMPLR_D_MID_E_CAL_1;
#define reg_SMPLR_D_MID_E_CAL_RESULT_RD_LANE_5_0  SMPLR_D_MID_E_CAL_1.BF.SMPLR_D_MID_E_CAL_RESULT_RD_LANE_5_0

// 0x79	SMPLR_D_BOT_E_CAL_0		TBD
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
__xdata __at( 0x19e4 ) volatile SMPLR_D_BOT_E_CAL_0_t SMPLR_D_BOT_E_CAL_0;
#define reg_SMPLR_D_BOT_E_CAL_UNDERFLOW_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_OVERFLOW_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_TIMEOUT_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_CAL_DONE_RD_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_D_BOT_E_CAL_CAL_EN_EXT_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_D_BOT_E_CAL_INDV_EXT_EN_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_D_BOT_E_CAL_BYPASS_EN_LANE  SMPLR_D_BOT_E_CAL_0.BF.SMPLR_D_BOT_E_CAL_BYPASS_EN_LANE

// 0x7a	SMPLR_D_BOT_E_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_D_BOT_E_CAL_1_t;
__xdata __at( 0x19e8 ) volatile SMPLR_D_BOT_E_CAL_1_t SMPLR_D_BOT_E_CAL_1;
#define reg_SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_5_0  SMPLR_D_BOT_E_CAL_1.BF.SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_5_0

// 0x7b	SMPLR_S_TOP_E_CAL_0		TBD
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
__xdata __at( 0x19ec ) volatile SMPLR_S_TOP_E_CAL_0_t SMPLR_S_TOP_E_CAL_0;
#define reg_SMPLR_S_TOP_E_CAL_UNDERFLOW_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_OVERFLOW_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_TIMEOUT_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_CAL_DONE_RD_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_TOP_E_CAL_CAL_EN_EXT_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_TOP_E_CAL_INDV_EXT_EN_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_TOP_E_CAL_BYPASS_EN_LANE  SMPLR_S_TOP_E_CAL_0.BF.SMPLR_S_TOP_E_CAL_BYPASS_EN_LANE

// 0x7c	SMPLR_S_TOP_E_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_TOP_E_CAL_1_t;
__xdata __at( 0x19f0 ) volatile SMPLR_S_TOP_E_CAL_1_t SMPLR_S_TOP_E_CAL_1;
#define reg_SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_5_0  SMPLR_S_TOP_E_CAL_1.BF.SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_5_0

// 0x7d	SMPLR_S_MID_E_CAL_0		TBD
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
__xdata __at( 0x19f4 ) volatile SMPLR_S_MID_E_CAL_0_t SMPLR_S_MID_E_CAL_0;
#define reg_SMPLR_S_MID_E_CAL_UNDERFLOW_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_OVERFLOW_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_TIMEOUT_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_CAL_DONE_RD_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_MID_E_CAL_CAL_EN_EXT_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_MID_E_CAL_INDV_EXT_EN_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_MID_E_CAL_BYPASS_EN_LANE  SMPLR_S_MID_E_CAL_0.BF.SMPLR_S_MID_E_CAL_BYPASS_EN_LANE

// 0x7e	SMPLR_S_MID_E_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_MID_E_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_MID_E_CAL_1_t;
__xdata __at( 0x19f8 ) volatile SMPLR_S_MID_E_CAL_1_t SMPLR_S_MID_E_CAL_1;
#define reg_SMPLR_S_MID_E_CAL_RESULT_RD_LANE_5_0  SMPLR_S_MID_E_CAL_1.BF.SMPLR_S_MID_E_CAL_RESULT_RD_LANE_5_0

// 0x7f	SMPLR_S_BOT_E_CAL_0		TBD
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
__xdata __at( 0x19fc ) volatile SMPLR_S_BOT_E_CAL_0_t SMPLR_S_BOT_E_CAL_0;
#define reg_SMPLR_S_BOT_E_CAL_UNDERFLOW_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_OVERFLOW_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_TIMEOUT_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_CAL_DONE_RD_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_S_BOT_E_CAL_CAL_EN_EXT_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_S_BOT_E_CAL_INDV_EXT_EN_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_S_BOT_E_CAL_BYPASS_EN_LANE  SMPLR_S_BOT_E_CAL_0.BF.SMPLR_S_BOT_E_CAL_BYPASS_EN_LANE

// 0x80	SMPLR_S_BOT_E_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_S_BOT_E_CAL_1_t;
__xdata __at( 0x1a00 ) volatile SMPLR_S_BOT_E_CAL_1_t SMPLR_S_BOT_E_CAL_1;
#define reg_SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_5_0  SMPLR_S_BOT_E_CAL_1.BF.SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_5_0

// 0x81	SMPLR_EDGE_E_CAL_0		TBD
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
__xdata __at( 0x1a04 ) volatile SMPLR_EDGE_E_CAL_0_t SMPLR_EDGE_E_CAL_0;
#define reg_SMPLR_EDGE_E_CAL_CAL_DONE_RD_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_CAL_DONE_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_CAL_EN_EXT_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_CAL_EN_EXT_LANE
#define reg_SMPLR_EDGE_E_CAL_INDV_EXT_EN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_INDV_EXT_EN_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MIN_PN_SIGN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_VAL_MIN_PN_SIGN_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MAX_PN_SIGN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_VAL_MAX_PN_SIGN_LANE
#define reg_SMPLR_EDGE_E_CAL_DIR_INV_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_DIR_INV_LANE
#define reg_SMPLR_EDGE_E_CAL_BYPASS_EN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_BYPASS_EN_LANE
#define reg_SMPLR_EDGE_E_CAL_SINGLE_EN_LANE  SMPLR_EDGE_E_CAL_0.BF.SMPLR_EDGE_E_CAL_SINGLE_EN_LANE

// 0x82	SMPLR_EDGE_E_CAL_1		TBD
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
__xdata __at( 0x1a08 ) volatile SMPLR_EDGE_E_CAL_1_t SMPLR_EDGE_E_CAL_1;
#define reg_SMPLR_EDGE_E_CAL_UNDERFLOW_RD_LANE  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_UNDERFLOW_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_OVERFLOW_RD_LANE  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_OVERFLOW_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_TIMEOUT_RD_LANE  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_TIMEOUT_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MAX_PN_LANE_4_0  SMPLR_EDGE_E_CAL_1.BF.SMPLR_EDGE_E_CAL_VAL_MAX_PN_LANE_4_0

// 0x83	SMPLR_EDGE_E_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE  : 1;	/*      2       r 1'h0*/
		uint8_t SMPLR_EDGE_E_CAL_VAL_MIN_PN_LANE_4_0     : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_2_t;
__xdata __at( 0x1a0c ) volatile SMPLR_EDGE_E_CAL_2_t SMPLR_EDGE_E_CAL_2;
#define reg_SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE  SMPLR_EDGE_E_CAL_2.BF.SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE
#define reg_SMPLR_EDGE_E_CAL_VAL_MIN_PN_LANE_4_0  SMPLR_EDGE_E_CAL_2.BF.SMPLR_EDGE_E_CAL_VAL_MIN_PN_LANE_4_0

// 0x84	SMPLR_EDGE_E_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_3_t;
__xdata __at( 0x1a10 ) volatile SMPLR_EDGE_E_CAL_3_t SMPLR_EDGE_E_CAL_3;
#define reg_SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0  SMPLR_EDGE_E_CAL_3.BF.SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0

// 0x85	SMPLR_EDGE_E_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0    : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SMPLR_EDGE_E_CAL_4_t;
__xdata __at( 0x1a14 ) volatile SMPLR_EDGE_E_CAL_4_t SMPLR_EDGE_E_CAL_4;
#define reg_SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0  SMPLR_EDGE_E_CAL_4.BF.SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0

// 0x86	RX_CLK_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t RX_CLK_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CLK_CMP_CTRL_EXT_LANE_2_0             : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RX_CLK_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_0_t;
__xdata __at( 0x1a18 ) volatile RX_CLK_0_t RX_CLK_0;
#define reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE  RX_CLK_0.BF.RX_CLK_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_CLK_CMP_CTRL_EXT_LANE_2_0  RX_CLK_0.BF.RX_CLK_CMP_CTRL_EXT_LANE_2_0
#define reg_RX_CLK_COMN_EXT_EN_LANE  RX_CLK_0.BF.RX_CLK_COMN_EXT_EN_LANE

// 0x87	RX_CLK_1		TBD
typedef union {
	struct {
		uint8_t RX_CLK_SETTING_EXT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_1_t;
__xdata __at( 0x1a1c ) volatile RX_CLK_1_t RX_CLK_1;
#define reg_RX_CLK_SETTING_EXT_LANE_7_0  RX_CLK_1.BF.RX_CLK_SETTING_EXT_LANE_7_0

// 0x88	RX_CLK_2		TBD
typedef union {
	struct {
		uint8_t RX_CLK_TOP_CONT_START_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_CLK_TOP_START_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CLK_UPDN_RD_LANE                      : 1;	/*      2       r 1'h0*/
		uint8_t RX_CLK_SETTING_EXT_LANE_12_8             : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_2_t;
__xdata __at( 0x1a20 ) volatile RX_CLK_2_t RX_CLK_2;
#define reg_RX_CLK_TOP_CONT_START_LANE  RX_CLK_2.BF.RX_CLK_TOP_CONT_START_LANE
#define reg_RX_CLK_TOP_START_LANE  RX_CLK_2.BF.RX_CLK_TOP_START_LANE
#define reg_RX_CLK_UPDN_RD_LANE  RX_CLK_2.BF.RX_CLK_UPDN_RD_LANE
#define reg_RX_CLK_SETTING_EXT_LANE_12_8  RX_CLK_2.BF.RX_CLK_SETTING_EXT_LANE_12_8

// 0x89	RX_CLK_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t RX_CLK_TOP_CONT_DONE_LANE                : 1;	/*      3       r 1'h0*/
		uint8_t RX_CLK_TOP_DONE_LANE                     : 1;	/*      4       r 1'h0*/
		uint8_t RX_CLK_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_3_t;
__xdata __at( 0x1a24 ) volatile RX_CLK_3_t RX_CLK_3;
#define reg_RX_CLK_TOP_CONT_DONE_LANE  RX_CLK_3.BF.RX_CLK_TOP_CONT_DONE_LANE
#define reg_RX_CLK_TOP_DONE_LANE  RX_CLK_3.BF.RX_CLK_TOP_DONE_LANE
#define reg_RX_CLK_TESTBUS_CORE_SEL_LANE_2_0  RX_CLK_3.BF.RX_CLK_TESTBUS_CORE_SEL_LANE_2_0

// 0x8a	RX_E2C_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_E2C_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_E2C_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_0_t;
__xdata __at( 0x1a28 ) volatile RX_E2C_DCC_CAL_0_t RX_E2C_DCC_CAL_0;
#define reg_RX_E2C_DCC_CAL_DIR_INV_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_DIR_INV_LANE
#define reg_RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_E2C_DCC_CAL_CONT_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_EN_LANE
#define reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_SINGLE_EN_LANE

// 0x8b	RX_E2C_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_E2C_DCC_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_1_t;
__xdata __at( 0x1a2c ) volatile RX_E2C_DCC_CAL_1_t RX_E2C_DCC_CAL_1;
#define reg_RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_E2C_DCC_CAL_CMP_CTRL_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x8c	RX_E2C_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_2_t;
__xdata __at( 0x1a30 ) volatile RX_E2C_DCC_CAL_2_t RX_E2C_DCC_CAL_2;
#define reg_RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x8d	RX_E2C_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_3_t;
__xdata __at( 0x1a34 ) volatile RX_E2C_DCC_CAL_3_t RX_E2C_DCC_CAL_3;
#define reg_RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_E2C_DCC_CAL_3.BF.RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x8e	RX_E2C_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_4_t;
__xdata __at( 0x1a38 ) volatile RX_E2C_DCC_CAL_4_t RX_E2C_DCC_CAL_4;
#define reg_RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x8f	RX_E2C_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_SETTING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_5_t;
__xdata __at( 0x1a3c ) volatile RX_E2C_DCC_CAL_5_t RX_E2C_DCC_CAL_5;
#define reg_RX_E2C_DCC_CAL_SETTING_LANE_7_0  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_SETTING_LANE_7_0

// 0x90	RX_E2C_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_SETTING_LANE_12_8         : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_6_t;
__xdata __at( 0x1a40 ) volatile RX_E2C_DCC_CAL_6_t RX_E2C_DCC_CAL_6;
#define reg_RX_E2C_DCC_CAL_CAL_DONE_RD_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_E2C_DCC_CAL_CAL_EN_EXT_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_E2C_DCC_CAL_INDV_EXT_EN_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_E2C_DCC_CAL_SETTING_LANE_12_8  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_SETTING_LANE_12_8

// 0x91	RX_E2C_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MAX_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_7_t;
__xdata __at( 0x1a44 ) volatile RX_E2C_DCC_CAL_7_t RX_E2C_DCC_CAL_7;
#define reg_RX_E2C_DCC_CAL_TIMEOUT_RD_LANE  RX_E2C_DCC_CAL_7.BF.RX_E2C_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MAX_LANE_6_0  RX_E2C_DCC_CAL_7.BF.RX_E2C_DCC_CAL_VAL_MAX_LANE_6_0

// 0x92	RX_E2C_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MIN_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_8_t;
__xdata __at( 0x1a48 ) volatile RX_E2C_DCC_CAL_8_t RX_E2C_DCC_CAL_8;
#define reg_RX_E2C_DCC_CAL_OVERFLOW_RD_LANE  RX_E2C_DCC_CAL_8.BF.RX_E2C_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MIN_LANE_6_0  RX_E2C_DCC_CAL_8.BF.RX_E2C_DCC_CAL_VAL_MIN_LANE_6_0

// 0x93	RX_E2C_DCC_CAL_9		TBD
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_9_t;
__xdata __at( 0x1a4c ) volatile RX_E2C_DCC_CAL_9_t RX_E2C_DCC_CAL_9;
#define reg_RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE  RX_E2C_DCC_CAL_9.BF.RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0  RX_E2C_DCC_CAL_9.BF.RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0

// 0x94	RX_E2C_DCC_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_10_t;
__xdata __at( 0x1a50 ) volatile RX_E2C_DCC_CAL_10_t RX_E2C_DCC_CAL_10;
#define reg_RX_E2C_DCC_CAL_RESULT_RD_LANE_6_0  RX_E2C_DCC_CAL_10.BF.RX_E2C_DCC_CAL_RESULT_RD_LANE_6_0

// 0x95	RX_DLL_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_DIR_INV_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DLL_CAL_CONT_NUM_LANE_3_0             : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DLL_CAL_BYPASS_EN_LANE                : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DLL_CAL_CONT_EN_LANE                  : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DLL_CAL_SINGLE_EN_LANE                : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_0_t;
__xdata __at( 0x1a54 ) volatile RX_DLL_CAL_0_t RX_DLL_CAL_0;
#define reg_RX_DLL_CAL_DIR_INV_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_DIR_INV_LANE
#define reg_RX_DLL_CAL_CONT_NUM_LANE_3_0  RX_DLL_CAL_0.BF.RX_DLL_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DLL_CAL_BYPASS_EN_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_BYPASS_EN_LANE
#define reg_RX_DLL_CAL_CONT_EN_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_CONT_EN_LANE
#define reg_RX_DLL_CAL_SINGLE_EN_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_SINGLE_EN_LANE

// 0x96	RX_DLL_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DLL_CAL_CMP_CTRL_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_1_t;
__xdata __at( 0x1a58 ) volatile RX_DLL_CAL_1_t RX_DLL_CAL_1;
#define reg_RX_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DLL_CAL_1.BF.RX_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DLL_CAL_CMP_CTRL_LANE_2_0  RX_DLL_CAL_1.BF.RX_DLL_CAL_CMP_CTRL_LANE_2_0

// 0x97	RX_DLL_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_SETTING_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_2_t;
__xdata __at( 0x1a5c ) volatile RX_DLL_CAL_2_t RX_DLL_CAL_2;
#define reg_RX_DLL_CAL_SETTING_LANE_7_0  RX_DLL_CAL_2.BF.RX_DLL_CAL_SETTING_LANE_7_0

// 0x98	RX_DLL_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_DUMMY_CLK_EXT_LANE            : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DLL_CAL_CAL_EN_EXT_LANE               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DLL_CAL_INDV_EXT_EN_LANE              : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_DLL_CAL_SETTING_LANE_12_8             : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_3_t;
__xdata __at( 0x1a60 ) volatile RX_DLL_CAL_3_t RX_DLL_CAL_3;
#define reg_RX_DLL_CAL_DUMMY_CLK_EXT_LANE  RX_DLL_CAL_3.BF.RX_DLL_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DLL_CAL_CAL_EN_EXT_LANE  RX_DLL_CAL_3.BF.RX_DLL_CAL_CAL_EN_EXT_LANE
#define reg_RX_DLL_CAL_INDV_EXT_EN_LANE  RX_DLL_CAL_3.BF.RX_DLL_CAL_INDV_EXT_EN_LANE
#define reg_RX_DLL_CAL_SETTING_LANE_12_8  RX_DLL_CAL_3.BF.RX_DLL_CAL_SETTING_LANE_12_8

// 0x99	RX_DLL_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_TIMEOUT_RD_LANE               : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_CAL_DONE_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_4_t;
__xdata __at( 0x1a64 ) volatile RX_DLL_CAL_4_t RX_DLL_CAL_4;
#define reg_RX_DLL_CAL_TIMEOUT_RD_LANE  RX_DLL_CAL_4.BF.RX_DLL_CAL_TIMEOUT_RD_LANE
#define reg_RX_DLL_CAL_CAL_DONE_RD_LANE  RX_DLL_CAL_4.BF.RX_DLL_CAL_CAL_DONE_RD_LANE
#define reg_RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_DLL_CAL_4.BF.RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_RX_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DLL_CAL_4.BF.RX_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x9a	RX_DLL_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_5_t;
__xdata __at( 0x1a68 ) volatile RX_DLL_CAL_5_t RX_DLL_CAL_5;
#define reg_RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_DLL_CAL_5.BF.RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x9b	RX_DLL_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_OVERFLOW_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_VAL_MAX_MSB_LANE_3_0          : 4;	/*  [4:1]     r/w 4'ha*/
		uint8_t RX_DLL_CAL_TIMEOUT_STEPS_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_6_t;
__xdata __at( 0x1a6c ) volatile RX_DLL_CAL_6_t RX_DLL_CAL_6;
#define reg_RX_DLL_CAL_OVERFLOW_RD_LANE  RX_DLL_CAL_6.BF.RX_DLL_CAL_OVERFLOW_RD_LANE
#define reg_RX_DLL_CAL_VAL_MAX_MSB_LANE_3_0  RX_DLL_CAL_6.BF.RX_DLL_CAL_VAL_MAX_MSB_LANE_3_0
#define reg_RX_DLL_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DLL_CAL_6.BF.RX_DLL_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x9c	RX_DLL_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0       : 4;	/*  [3:0]     r/w 4'ha*/
		uint8_t RX_DLL_CAL_VAL_MIN_MSB_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_7_t;
__xdata __at( 0x1a70 ) volatile RX_DLL_CAL_7_t RX_DLL_CAL_7;
#define reg_RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0  RX_DLL_CAL_7.BF.RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0
#define reg_RX_DLL_CAL_VAL_MIN_MSB_LANE_3_0  RX_DLL_CAL_7.BF.RX_DLL_CAL_VAL_MIN_MSB_LANE_3_0

// 0x9d	RX_DLL_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_UNDERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_VAL_MAX_LSB_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_8_t;
__xdata __at( 0x1a74 ) volatile RX_DLL_CAL_8_t RX_DLL_CAL_8;
#define reg_RX_DLL_CAL_UNDERFLOW_RD_LANE  RX_DLL_CAL_8.BF.RX_DLL_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DLL_CAL_VAL_MAX_LSB_LANE_6_0  RX_DLL_CAL_8.BF.RX_DLL_CAL_VAL_MAX_LSB_LANE_6_0

// 0x9e	RX_DLL_CAL_9		TBD
typedef union {
	struct {
		uint8_t RX_DLL_CAL_DUMMY_CLK_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_VAL_MIN_LSB_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_9_t;
__xdata __at( 0x1a78 ) volatile RX_DLL_CAL_9_t RX_DLL_CAL_9;
#define reg_RX_DLL_CAL_DUMMY_CLK_RD_LANE  RX_DLL_CAL_9.BF.RX_DLL_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DLL_CAL_VAL_MIN_LSB_LANE_6_0  RX_DLL_CAL_9.BF.RX_DLL_CAL_VAL_MIN_LSB_LANE_6_0

// 0x9f	RX_DLL_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_10_t;
__xdata __at( 0x1a7c ) volatile RX_DLL_CAL_10_t RX_DLL_CAL_10;
#define reg_RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0  RX_DLL_CAL_10.BF.RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0

// 0xa0	RX_DLL_CAL_11		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_DLL_CAL_RESULT_MSB_RD_LANE_3_0        : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_11_t;
__xdata __at( 0x1a80 ) volatile RX_DLL_CAL_11_t RX_DLL_CAL_11;
#define reg_RX_DLL_CAL_RESULT_MSB_RD_LANE_3_0  RX_DLL_CAL_11.BF.RX_DLL_CAL_RESULT_MSB_RD_LANE_3_0

// 0xa1	RX_DLL_CAL_12		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DLL_CAL_RESULT_LSB_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_12_t;
__xdata __at( 0x1a84 ) volatile RX_DLL_CAL_12_t RX_DLL_CAL_12;
#define reg_RX_DLL_CAL_RESULT_LSB_RD_LANE_6_0  RX_DLL_CAL_12.BF.RX_DLL_CAL_RESULT_LSB_RD_LANE_6_0

// 0xa2	RX_PI_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_DIR_INV_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_CONT_NUM_LANE_3_0          : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_PI_DCC_CAL_BYPASS_EN_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_CONT_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_SINGLE_EN_LANE             : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_0_t;
__xdata __at( 0x1a88 ) volatile RX_PI_DCC_CAL_0_t RX_PI_DCC_CAL_0;
#define reg_RX_PI_DCC_CAL_DIR_INV_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_DIR_INV_LANE
#define reg_RX_PI_DCC_CAL_CONT_NUM_LANE_3_0  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_PI_DCC_CAL_BYPASS_EN_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_PI_DCC_CAL_CONT_EN_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_CONT_EN_LANE
#define reg_RX_PI_DCC_CAL_SINGLE_EN_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_SINGLE_EN_LANE

// 0xa3	RX_PI_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_PI_DCC_CAL_CMP_CTRL_LANE_2_0          : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_1_t;
__xdata __at( 0x1a8c ) volatile RX_PI_DCC_CAL_1_t RX_PI_DCC_CAL_1;
#define reg_RX_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_PI_DCC_CAL_1.BF.RX_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_PI_DCC_CAL_CMP_CTRL_LANE_2_0  RX_PI_DCC_CAL_1.BF.RX_PI_DCC_CAL_CMP_CTRL_LANE_2_0

// 0xa4	RX_PI_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_SETTING_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_2_t;
__xdata __at( 0x1a90 ) volatile RX_PI_DCC_CAL_2_t RX_PI_DCC_CAL_2;
#define reg_RX_PI_DCC_CAL_SETTING_LANE_7_0  RX_PI_DCC_CAL_2.BF.RX_PI_DCC_CAL_SETTING_LANE_7_0

// 0xa5	RX_PI_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_CAL_DONE_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_PI_DCC_CAL_CAL_EN_EXT_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_INDV_EXT_EN_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_SETTING_LANE_12_8          : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_3_t;
__xdata __at( 0x1a94 ) volatile RX_PI_DCC_CAL_3_t RX_PI_DCC_CAL_3;
#define reg_RX_PI_DCC_CAL_CAL_DONE_RD_LANE  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_PI_DCC_CAL_CAL_EN_EXT_LANE  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_PI_DCC_CAL_INDV_EXT_EN_LANE  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_PI_DCC_CAL_SETTING_LANE_12_8  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_SETTING_LANE_12_8

// 0xa6	RX_PI_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_OVERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_PI_DCC_CAL_TIMEOUT_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_PI_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_4_t;
__xdata __at( 0x1a98 ) volatile RX_PI_DCC_CAL_4_t RX_PI_DCC_CAL_4;
#define reg_RX_PI_DCC_CAL_OVERFLOW_RD_LANE  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_PI_DCC_CAL_TIMEOUT_RD_LANE  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_PI_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_RX_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xa7	RX_PI_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_5_t;
__xdata __at( 0x1a9c ) volatile RX_PI_DCC_CAL_5_t RX_PI_DCC_CAL_5;
#define reg_RX_PI_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_PI_DCC_CAL_5.BF.RX_PI_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xa8	RX_PI_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_UNDERFLOW_RD_LANE          : 1;	/*      4       r 1'h0*/
		uint8_t RX_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0     : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_6_t;
__xdata __at( 0x1aa0 ) volatile RX_PI_DCC_CAL_6_t RX_PI_DCC_CAL_6;
#define reg_RX_PI_DCC_CAL_UNDERFLOW_RD_LANE  RX_PI_DCC_CAL_6.BF.RX_PI_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_PI_DCC_CAL_6.BF.RX_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0

// 0xa9	RX_PI_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_VAL_MAX_LANE_5_0           : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_7_t;
__xdata __at( 0x1aa4 ) volatile RX_PI_DCC_CAL_7_t RX_PI_DCC_CAL_7;
#define reg_RX_PI_DCC_CAL_VAL_MAX_LANE_5_0  RX_PI_DCC_CAL_7.BF.RX_PI_DCC_CAL_VAL_MAX_LANE_5_0

// 0xaa	RX_PI_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_VAL_MIN_LANE_5_0           : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_8_t;
__xdata __at( 0x1aa8 ) volatile RX_PI_DCC_CAL_8_t RX_PI_DCC_CAL_8;
#define reg_RX_PI_DCC_CAL_VAL_MIN_LANE_5_0  RX_PI_DCC_CAL_8.BF.RX_PI_DCC_CAL_VAL_MIN_LANE_5_0

// 0xab	RX_PI_DCC_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0        : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_9_t;
__xdata __at( 0x1aac ) volatile RX_PI_DCC_CAL_9_t RX_PI_DCC_CAL_9;
#define reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0  RX_PI_DCC_CAL_9.BF.RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0

// 0xac	RX_PI_DCC_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_RESULT_RD_LANE_5_0         : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_10_t;
__xdata __at( 0x1ab0 ) volatile RX_PI_DCC_CAL_10_t RX_PI_DCC_CAL_10;
#define reg_RX_PI_DCC_CAL_RESULT_RD_LANE_5_0  RX_PI_DCC_CAL_10.BF.RX_PI_DCC_CAL_RESULT_RD_LANE_5_0

// 0xad	RX_ALIGN90_CAL_0		TBD
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
__xdata __at( 0x1ab4 ) volatile RX_ALIGN90_CAL_0_t RX_ALIGN90_CAL_0;
#define reg_RX_ALIGN90_CAL_DIR_INV_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_CAL_BYPASS_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_CAL_CONT_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_CAL_SINGLE_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_SINGLE_EN_LANE

// 0xae	RX_ALIGN90_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_ALIGN90_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_1_t;
__xdata __at( 0x1ab8 ) volatile RX_ALIGN90_CAL_1_t RX_ALIGN90_CAL_1;
#define reg_RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_CAL_CMP_CTRL_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_CMP_CTRL_LANE_2_0

// 0xaf	RX_ALIGN90_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_SETTING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_2_t;
__xdata __at( 0x1abc ) volatile RX_ALIGN90_CAL_2_t RX_ALIGN90_CAL_2;
#define reg_RX_ALIGN90_CAL_SETTING_LANE_7_0  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_SETTING_LANE_7_0

// 0xb0	RX_ALIGN90_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_ALIGN90_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_INDV_EXT_EN_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_SETTING_LANE_12_8         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_3_t;
__xdata __at( 0x1ac0 ) volatile RX_ALIGN90_CAL_3_t RX_ALIGN90_CAL_3;
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_CAL_SETTING_LANE_12_8  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_SETTING_LANE_12_8

// 0xb1	RX_ALIGN90_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_CAL_DONE_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_4_t;
__xdata __at( 0x1ac4 ) volatile RX_ALIGN90_CAL_4_t RX_ALIGN90_CAL_4;
#define reg_RX_ALIGN90_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xb2	RX_ALIGN90_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_OVERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_5_t;
__xdata __at( 0x1ac8 ) volatile RX_ALIGN90_CAL_5_t RX_ALIGN90_CAL_5;
#define reg_RX_ALIGN90_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0xb3	RX_ALIGN90_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_6_t;
__xdata __at( 0x1acc ) volatile RX_ALIGN90_CAL_6_t RX_ALIGN90_CAL_6;
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0xb4	RX_ALIGN90_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_7_t;
__xdata __at( 0x1ad0 ) volatile RX_ALIGN90_CAL_7_t RX_ALIGN90_CAL_7;
#define reg_RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_CAL_7.BF.RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0xb5	RX_ALIGN90_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_8_t;
__xdata __at( 0x1ad4 ) volatile RX_ALIGN90_CAL_8_t RX_ALIGN90_CAL_8;
#define reg_RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0xb6	RX_ALIGN90_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_9_t;
__xdata __at( 0x1ad8 ) volatile RX_ALIGN90_CAL_9_t RX_ALIGN90_CAL_9;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_CAL_9.BF.RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0xb7	RX_ALIGN90_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_10_t;
__xdata __at( 0x1adc ) volatile RX_ALIGN90_CAL_10_t RX_ALIGN90_CAL_10;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_CAL_10.BF.RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0xb8	RX_DATA_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_DIR_INV_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DATA_DCC_CAL_CONT_NUM_LANE_3_0        : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_DATA_DCC_CAL_BYPASS_EN_LANE           : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DATA_DCC_CAL_CONT_EN_LANE             : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DATA_DCC_CAL_SINGLE_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_0_t;
__xdata __at( 0x1ae0 ) volatile RX_DATA_DCC_CAL_0_t RX_DATA_DCC_CAL_0;
#define reg_RX_DATA_DCC_CAL_DIR_INV_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_DIR_INV_LANE
#define reg_RX_DATA_DCC_CAL_CONT_NUM_LANE_3_0  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_DATA_DCC_CAL_CONT_EN_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_CONT_EN_LANE
#define reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_SINGLE_EN_LANE

// 0xb9	RX_DATA_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DATA_DCC_CAL_CMP_CTRL_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_1_t;
__xdata __at( 0x1ae4 ) volatile RX_DATA_DCC_CAL_1_t RX_DATA_DCC_CAL_1;
#define reg_RX_DATA_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DATA_DCC_CAL_1.BF.RX_DATA_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DATA_DCC_CAL_CMP_CTRL_LANE_2_0  RX_DATA_DCC_CAL_1.BF.RX_DATA_DCC_CAL_CMP_CTRL_LANE_2_0

// 0xba	RX_DATA_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_SETTING_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_2_t;
__xdata __at( 0x1ae8 ) volatile RX_DATA_DCC_CAL_2_t RX_DATA_DCC_CAL_2;
#define reg_RX_DATA_DCC_CAL_SETTING_LANE_7_0  RX_DATA_DCC_CAL_2.BF.RX_DATA_DCC_CAL_SETTING_LANE_7_0

// 0xbb	RX_DATA_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_DUMMY_CLK_EXT_LANE       : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DATA_DCC_CAL_CAL_EN_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DATA_DCC_CAL_INDV_EXT_EN_LANE         : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_DATA_DCC_CAL_SETTING_LANE_12_8        : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_3_t;
__xdata __at( 0x1aec ) volatile RX_DATA_DCC_CAL_3_t RX_DATA_DCC_CAL_3;
#define reg_RX_DATA_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DATA_DCC_CAL_CAL_EN_EXT_LANE  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_DATA_DCC_CAL_INDV_EXT_EN_LANE  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_DATA_DCC_CAL_SETTING_LANE_12_8  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_SETTING_LANE_12_8

// 0xbc	RX_DATA_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_TIMEOUT_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DATA_DCC_CAL_CAL_DONE_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_DATA_DCC_CAL_TIMEOUT_STEPS_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t RX_DATA_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_4_t;
__xdata __at( 0x1af0 ) volatile RX_DATA_DCC_CAL_4_t RX_DATA_DCC_CAL_4;
#define reg_RX_DATA_DCC_CAL_TIMEOUT_RD_LANE  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_DATA_DCC_CAL_CAL_DONE_RD_LANE  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_DATA_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_DATA_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xbd	RX_DATA_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_UNDERFLOW_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t RX_DATA_DCC_CAL_OVERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_DATA_DCC_CAL_VAL_MIN_MSB_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_DATA_DCC_CAL_VAL_MAX_MSB_LANE_2_0     : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_5_t;
__xdata __at( 0x1af4 ) volatile RX_DATA_DCC_CAL_5_t RX_DATA_DCC_CAL_5;
#define reg_RX_DATA_DCC_CAL_UNDERFLOW_RD_LANE  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DATA_DCC_CAL_OVERFLOW_RD_LANE  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_DATA_DCC_CAL_VAL_MIN_MSB_LANE_2_0  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_DATA_DCC_CAL_VAL_MAX_MSB_LANE_2_0  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_VAL_MAX_MSB_LANE_2_0

// 0xbe	RX_DATA_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_DUMMY_CLK_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_DATA_DCC_CAL_VAL_MAX_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_6_t;
__xdata __at( 0x1af8 ) volatile RX_DATA_DCC_CAL_6_t RX_DATA_DCC_CAL_6;
#define reg_RX_DATA_DCC_CAL_DUMMY_CLK_RD_LANE  RX_DATA_DCC_CAL_6.BF.RX_DATA_DCC_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DATA_DCC_CAL_VAL_MAX_LSB_LANE_5_0  RX_DATA_DCC_CAL_6.BF.RX_DATA_DCC_CAL_VAL_MAX_LSB_LANE_5_0

// 0xbf	RX_DATA_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_VAL_MIN_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_7_t;
__xdata __at( 0x1afc ) volatile RX_DATA_DCC_CAL_7_t RX_DATA_DCC_CAL_7;
#define reg_RX_DATA_DCC_CAL_VAL_MIN_LSB_LANE_5_0  RX_DATA_DCC_CAL_7.BF.RX_DATA_DCC_CAL_VAL_MIN_LSB_LANE_5_0

// 0xc0	RX_DATA_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0   : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_8_t;
__xdata __at( 0x1b00 ) volatile RX_DATA_DCC_CAL_8_t RX_DATA_DCC_CAL_8;
#define reg_RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0  RX_DATA_DCC_CAL_8.BF.RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DATA_DCC_CAL_8.BF.RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0

// 0xc1	RX_DATA_DCC_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_9_t;
__xdata __at( 0x1b04 ) volatile RX_DATA_DCC_CAL_9_t RX_DATA_DCC_CAL_9;
#define reg_RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DATA_DCC_CAL_9.BF.RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0

// 0xc2	RX_DATA_DCC_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0   : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_10_t;
__xdata __at( 0x1b08 ) volatile RX_DATA_DCC_CAL_10_t RX_DATA_DCC_CAL_10;
#define reg_RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0  RX_DATA_DCC_CAL_10.BF.RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0

// 0xc3	RX_EDGE_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_DIR_INV_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_CONT_NUM_LANE_3_0        : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_EDGE_DCC_CAL_BYPASS_EN_LANE           : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_CONT_EN_LANE             : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_EDGE_DCC_CAL_SINGLE_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_0_t;
__xdata __at( 0x1b0c ) volatile RX_EDGE_DCC_CAL_0_t RX_EDGE_DCC_CAL_0;
#define reg_RX_EDGE_DCC_CAL_DIR_INV_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_DIR_INV_LANE
#define reg_RX_EDGE_DCC_CAL_CONT_NUM_LANE_3_0  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_EDGE_DCC_CAL_CONT_EN_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_CONT_EN_LANE
#define reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_SINGLE_EN_LANE

// 0xc4	RX_EDGE_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_EDGE_DCC_CAL_CMP_CTRL_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_1_t;
__xdata __at( 0x1b10 ) volatile RX_EDGE_DCC_CAL_1_t RX_EDGE_DCC_CAL_1;
#define reg_RX_EDGE_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EDGE_DCC_CAL_1.BF.RX_EDGE_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_CMP_CTRL_LANE_2_0  RX_EDGE_DCC_CAL_1.BF.RX_EDGE_DCC_CAL_CMP_CTRL_LANE_2_0

// 0xc5	RX_EDGE_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_SETTING_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_2_t;
__xdata __at( 0x1b14 ) volatile RX_EDGE_DCC_CAL_2_t RX_EDGE_DCC_CAL_2;
#define reg_RX_EDGE_DCC_CAL_SETTING_LANE_7_0  RX_EDGE_DCC_CAL_2.BF.RX_EDGE_DCC_CAL_SETTING_LANE_7_0

// 0xc6	RX_EDGE_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_DUMMY_CLK_EXT_LANE       : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_EDGE_DCC_CAL_CAL_EN_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_INDV_EXT_EN_LANE         : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_SETTING_LANE_12_8        : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_3_t;
__xdata __at( 0x1b18 ) volatile RX_EDGE_DCC_CAL_3_t RX_EDGE_DCC_CAL_3;
#define reg_RX_EDGE_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EDGE_DCC_CAL_CAL_EN_EXT_LANE  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_EDGE_DCC_CAL_INDV_EXT_EN_LANE  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_EDGE_DCC_CAL_SETTING_LANE_12_8  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_SETTING_LANE_12_8

// 0xc7	RX_EDGE_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_TIMEOUT_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_CAL_DONE_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_TIMEOUT_STEPS_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t RX_EDGE_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_4_t;
__xdata __at( 0x1b1c ) volatile RX_EDGE_DCC_CAL_4_t RX_EDGE_DCC_CAL_4;
#define reg_RX_EDGE_DCC_CAL_TIMEOUT_RD_LANE  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_EDGE_DCC_CAL_CAL_DONE_RD_LANE  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_EDGE_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xc8	RX_EDGE_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_UNDERFLOW_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_OVERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_VAL_MIN_MSB_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_EDGE_DCC_CAL_VAL_MAX_MSB_LANE_2_0     : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_5_t;
__xdata __at( 0x1b20 ) volatile RX_EDGE_DCC_CAL_5_t RX_EDGE_DCC_CAL_5;
#define reg_RX_EDGE_DCC_CAL_UNDERFLOW_RD_LANE  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EDGE_DCC_CAL_OVERFLOW_RD_LANE  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_EDGE_DCC_CAL_VAL_MIN_MSB_LANE_2_0  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_VAL_MAX_MSB_LANE_2_0  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_VAL_MAX_MSB_LANE_2_0

// 0xc9	RX_EDGE_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_DUMMY_CLK_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_VAL_MAX_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_6_t;
__xdata __at( 0x1b24 ) volatile RX_EDGE_DCC_CAL_6_t RX_EDGE_DCC_CAL_6;
#define reg_RX_EDGE_DCC_CAL_DUMMY_CLK_RD_LANE  RX_EDGE_DCC_CAL_6.BF.RX_EDGE_DCC_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_EDGE_DCC_CAL_VAL_MAX_LSB_LANE_5_0  RX_EDGE_DCC_CAL_6.BF.RX_EDGE_DCC_CAL_VAL_MAX_LSB_LANE_5_0

// 0xca	RX_EDGE_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_VAL_MIN_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_7_t;
__xdata __at( 0x1b28 ) volatile RX_EDGE_DCC_CAL_7_t RX_EDGE_DCC_CAL_7;
#define reg_RX_EDGE_DCC_CAL_VAL_MIN_LSB_LANE_5_0  RX_EDGE_DCC_CAL_7.BF.RX_EDGE_DCC_CAL_VAL_MIN_LSB_LANE_5_0

// 0xcb	RX_EDGE_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0   : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_8_t;
__xdata __at( 0x1b2c ) volatile RX_EDGE_DCC_CAL_8_t RX_EDGE_DCC_CAL_8;
#define reg_RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0  RX_EDGE_DCC_CAL_8.BF.RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  RX_EDGE_DCC_CAL_8.BF.RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0

// 0xcc	RX_EDGE_DCC_CAL_9		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_9_t;
__xdata __at( 0x1b30 ) volatile RX_EDGE_DCC_CAL_9_t RX_EDGE_DCC_CAL_9;
#define reg_RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  RX_EDGE_DCC_CAL_9.BF.RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0

// 0xcd	RX_EDGE_DCC_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0   : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_10_t;
__xdata __at( 0x1b34 ) volatile RX_EDGE_DCC_CAL_10_t RX_EDGE_DCC_CAL_10;
#define reg_RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0  RX_EDGE_DCC_CAL_10.BF.RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0

// 0xce	RX_EOM_0		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_EOM_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_EOM_CMP_CTRL_EXT_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_EOM_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_0_t;
__xdata __at( 0x1b38 ) volatile RX_EOM_0_t RX_EOM_0;
#define reg_RX_EOM_AUTO_ZERO_CLK_EXT_LANE  RX_EOM_0.BF.RX_EOM_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_EOM_CMP_CTRL_EXT_LANE_1_0  RX_EOM_0.BF.RX_EOM_CMP_CTRL_EXT_LANE_1_0
#define reg_RX_EOM_COMN_EXT_EN_LANE  RX_EOM_0.BF.RX_EOM_COMN_EXT_EN_LANE

// 0xcf	RX_EOM_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_SETTING_EXT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_1_t;
__xdata __at( 0x1b3c ) volatile RX_EOM_1_t RX_EOM_1;
#define reg_RX_EOM_SETTING_EXT_LANE_7_0  RX_EOM_1.BF.RX_EOM_SETTING_EXT_LANE_7_0

// 0xd0	RX_EOM_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_TOP_CONT_START_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_TOP_START_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_UPDN_RD_LANE                      : 1;	/*      2       r 1'h0*/
		uint8_t RX_EOM_SETTING_EXT_LANE_12_8             : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_2_t;
__xdata __at( 0x1b40 ) volatile RX_EOM_2_t RX_EOM_2;
#define reg_RX_EOM_TOP_CONT_START_LANE  RX_EOM_2.BF.RX_EOM_TOP_CONT_START_LANE
#define reg_RX_EOM_TOP_START_LANE  RX_EOM_2.BF.RX_EOM_TOP_START_LANE
#define reg_RX_EOM_UPDN_RD_LANE  RX_EOM_2.BF.RX_EOM_UPDN_RD_LANE
#define reg_RX_EOM_SETTING_EXT_LANE_12_8  RX_EOM_2.BF.RX_EOM_SETTING_EXT_LANE_12_8

// 0xd1	RX_EOM_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t RX_EOM_TOP_CONT_DONE_LANE                : 1;	/*      3       r 1'h0*/
		uint8_t RX_EOM_TOP_DONE_LANE                     : 1;	/*      4       r 1'h0*/
		uint8_t RX_EOM_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_3_t;
__xdata __at( 0x1b44 ) volatile RX_EOM_3_t RX_EOM_3;
#define reg_RX_EOM_TOP_CONT_DONE_LANE  RX_EOM_3.BF.RX_EOM_TOP_CONT_DONE_LANE
#define reg_RX_EOM_TOP_DONE_LANE  RX_EOM_3.BF.RX_EOM_TOP_DONE_LANE
#define reg_RX_EOM_TESTBUS_CORE_SEL_LANE_2_0  RX_EOM_3.BF.RX_EOM_TESTBUS_CORE_SEL_LANE_2_0

// 0xd2	RX_EOM_DLL_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_EOM_DLL_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_EOM_DLL_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_0_t;
__xdata __at( 0x1b48 ) volatile RX_EOM_DLL_CAL_0_t RX_EOM_DLL_CAL_0;
#define reg_RX_EOM_DLL_CAL_DIR_INV_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_DIR_INV_LANE
#define reg_RX_EOM_DLL_CAL_CONT_NUM_LANE_3_0  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_DLL_CAL_BYPASS_EN_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_DLL_CAL_CONT_EN_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_CONT_EN_LANE
#define reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_SINGLE_EN_LANE

// 0xd3	RX_EOM_DLL_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_EOM_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_EOM_DLL_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_1_t;
__xdata __at( 0x1b4c ) volatile RX_EOM_DLL_CAL_1_t RX_EOM_DLL_CAL_1;
#define reg_RX_EOM_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_DLL_CAL_1.BF.RX_EOM_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_DLL_CAL_1.BF.RX_EOM_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DLL_CAL_CMP_CTRL_LANE_1_0  RX_EOM_DLL_CAL_1.BF.RX_EOM_DLL_CAL_CMP_CTRL_LANE_1_0

// 0xd4	RX_EOM_DLL_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_EOM_DLL_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t RX_EOM_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_EOM_DLL_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_2_t;
__xdata __at( 0x1b50 ) volatile RX_EOM_DLL_CAL_2_t RX_EOM_DLL_CAL_2;
#define reg_RX_EOM_DLL_CAL_TIMEOUT_CHK_DIS_LANE  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_EOM_DLL_CAL_RESULT_AVG_EN_LANE  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_RESULT_AVG_EN_LANE
#define reg_RX_EOM_DLL_CAL_TOGGLE_TIMES_LANE_2_0  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_EOM_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_EOM_DLL_CAL_BIN_SEARCH_ENABLE_LANE  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_BIN_SEARCH_ENABLE_LANE

// 0xd5	RX_EOM_DLL_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_3_t;
__xdata __at( 0x1b54 ) volatile RX_EOM_DLL_CAL_3_t RX_EOM_DLL_CAL_3;
#define reg_RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_EOM_DLL_CAL_3.BF.RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xd6	RX_EOM_DLL_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_4_t;
__xdata __at( 0x1b58 ) volatile RX_EOM_DLL_CAL_4_t RX_EOM_DLL_CAL_4;
#define reg_RX_EOM_DLL_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_DLL_CAL_4.BF.RX_EOM_DLL_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_EOM_DLL_CAL_4.BF.RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0xd7	RX_EOM_DLL_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_SETTING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_5_t;
__xdata __at( 0x1b5c ) volatile RX_EOM_DLL_CAL_5_t RX_EOM_DLL_CAL_5;
#define reg_RX_EOM_DLL_CAL_SETTING_LANE_7_0  RX_EOM_DLL_CAL_5.BF.RX_EOM_DLL_CAL_SETTING_LANE_7_0

// 0xd8	RX_EOM_DLL_CAL_6		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_EOM_DLL_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_INDV_EXT_EN_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_SETTING_LANE_12_8         : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_6_t;
__xdata __at( 0x1b60 ) volatile RX_EOM_DLL_CAL_6_t RX_EOM_DLL_CAL_6;
#define reg_RX_EOM_DLL_CAL_DUMMY_CLK_EXT_LANE  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EOM_DLL_CAL_CAL_EN_EXT_LANE  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_DLL_CAL_INDV_EXT_EN_LANE  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_DLL_CAL_SETTING_LANE_12_8  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_SETTING_LANE_12_8

// 0xd9	RX_EOM_DLL_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RX_EOM_DLL_CAL_VAL_MAX_MSB_LANE_3_0      : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_7_t;
__xdata __at( 0x1b64 ) volatile RX_EOM_DLL_CAL_7_t RX_EOM_DLL_CAL_7;
#define reg_RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0  RX_EOM_DLL_CAL_7.BF.RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0
#define reg_RX_EOM_DLL_CAL_VAL_MAX_MSB_LANE_3_0  RX_EOM_DLL_CAL_7.BF.RX_EOM_DLL_CAL_VAL_MAX_MSB_LANE_3_0

// 0xda	RX_EOM_DLL_CAL_8		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_8_t;
__xdata __at( 0x1b68 ) volatile RX_EOM_DLL_CAL_8_t RX_EOM_DLL_CAL_8;
#define reg_RX_EOM_DLL_CAL_CAL_DONE_RD_LANE  RX_EOM_DLL_CAL_8.BF.RX_EOM_DLL_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_DLL_CAL_VAL_MAX_LSB_LANE_6_0  RX_EOM_DLL_CAL_8.BF.RX_EOM_DLL_CAL_VAL_MAX_LSB_LANE_6_0

// 0xdb	RX_EOM_DLL_CAL_9		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_9_t;
__xdata __at( 0x1b6c ) volatile RX_EOM_DLL_CAL_9_t RX_EOM_DLL_CAL_9;
#define reg_RX_EOM_DLL_CAL_TIMEOUT_RD_LANE  RX_EOM_DLL_CAL_9.BF.RX_EOM_DLL_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_DLL_CAL_VAL_MIN_LSB_LANE_6_0  RX_EOM_DLL_CAL_9.BF.RX_EOM_DLL_CAL_VAL_MIN_LSB_LANE_6_0

// 0xdc	RX_EOM_DLL_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_UNDERFLOW_RD_LANE         : 1;	/*      2       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_OVERFLOW_RD_LANE          : 1;	/*      3       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0   : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_10_t;
__xdata __at( 0x1b70 ) volatile RX_EOM_DLL_CAL_10_t RX_EOM_DLL_CAL_10;
#define reg_RX_EOM_DLL_CAL_DUMMY_CLK_RD_LANE  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_EOM_DLL_CAL_UNDERFLOW_RD_LANE  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_DLL_CAL_OVERFLOW_RD_LANE  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0

// 0xdd	RX_EOM_DLL_CAL_11		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_11_t;
__xdata __at( 0x1b74 ) volatile RX_EOM_DLL_CAL_11_t RX_EOM_DLL_CAL_11;
#define reg_RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0  RX_EOM_DLL_CAL_11.BF.RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0

// 0xde	RX_EOM_DLL_CAL_12		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_MSB_RD_LANE_3_0    : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_12_t;
__xdata __at( 0x1b78 ) volatile RX_EOM_DLL_CAL_12_t RX_EOM_DLL_CAL_12;
#define reg_RX_EOM_DLL_CAL_RESULT_MSB_RD_LANE_3_0  RX_EOM_DLL_CAL_12.BF.RX_EOM_DLL_CAL_RESULT_MSB_RD_LANE_3_0

// 0xdf	RX_EOM_DLL_CAL_13		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_13_t;
__xdata __at( 0x1b7c ) volatile RX_EOM_DLL_CAL_13_t RX_EOM_DLL_CAL_13;
#define reg_RX_EOM_DLL_CAL_RESULT_LSB_RD_LANE_6_0  RX_EOM_DLL_CAL_13.BF.RX_EOM_DLL_CAL_RESULT_LSB_RD_LANE_6_0

// 0xe0	RX_EOM_PI_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RX_EOM_PI_CAL_DIR_INV_LANE               : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0          : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t RX_EOM_PI_CAL_BYPASS_EN_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_SINGLE_EN_LANE             : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_0_t;
__xdata __at( 0x1b80 ) volatile RX_EOM_PI_CAL_0_t RX_EOM_PI_CAL_0;
#define reg_RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_CAL_DIR_INV_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_DIR_INV_LANE
#define reg_RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0
#define reg_RX_EOM_PI_CAL_BYPASS_EN_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_PI_CAL_SINGLE_EN_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_SINGLE_EN_LANE

// 0xe1	RX_EOM_PI_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SAMPLE_PULSE_DIV_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_1_t;
__xdata __at( 0x1b84 ) volatile RX_EOM_PI_CAL_1_t RX_EOM_PI_CAL_1;
#define reg_RX_EOM_PI_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_EOM_PI_CAL_1.BF.RX_EOM_PI_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xe2	RX_EOM_PI_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_TIMEOUT_STEPS_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RX_EOM_PI_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_2_t;
__xdata __at( 0x1b88 ) volatile RX_EOM_PI_CAL_2_t RX_EOM_PI_CAL_2;
#define reg_RX_EOM_PI_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_PI_CAL_2.BF.RX_EOM_PI_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EOM_PI_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_EOM_PI_CAL_2.BF.RX_EOM_PI_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0xe3	RX_EOM_PI_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MAX_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h9f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_3_t;
__xdata __at( 0x1b8c ) volatile RX_EOM_PI_CAL_3_t RX_EOM_PI_CAL_3;
#define reg_RX_EOM_PI_CAL_VAL_MAX_LANE_7_0  RX_EOM_PI_CAL_3.BF.RX_EOM_PI_CAL_VAL_MAX_LANE_7_0

// 0xe4	RX_EOM_PI_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_VAL_MAX_LANE_10_8          : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_4_t;
__xdata __at( 0x1b90 ) volatile RX_EOM_PI_CAL_4_t RX_EOM_PI_CAL_4;
#define reg_RX_EOM_PI_CAL_VAL_MAX_LANE_10_8  RX_EOM_PI_CAL_4.BF.RX_EOM_PI_CAL_VAL_MAX_LANE_10_8

// 0xe5	RX_EOM_PI_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_5_t;
__xdata __at( 0x1b94 ) volatile RX_EOM_PI_CAL_5_t RX_EOM_PI_CAL_5;
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_7_0  RX_EOM_PI_CAL_5.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_7_0

// 0xe6	RX_EOM_PI_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_10_8          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_6_t;
__xdata __at( 0x1b98 ) volatile RX_EOM_PI_CAL_6_t RX_EOM_PI_CAL_6;
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_10_8  RX_EOM_PI_CAL_6.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_10_8

// 0xe7	RX_EOM_PI_CAL_7		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SETTING_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_7_t;
__xdata __at( 0x1b9c ) volatile RX_EOM_PI_CAL_7_t RX_EOM_PI_CAL_7;
#define reg_RX_EOM_PI_CAL_SETTING_LANE_7_0  RX_EOM_PI_CAL_7.BF.RX_EOM_PI_CAL_SETTING_LANE_7_0

// 0xe8	RX_EOM_PI_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_PI_CAL_CAL_EN_EXT_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_INDV_EXT_EN_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_PI_CAL_SETTING_LANE_12_8          : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_8_t;
__xdata __at( 0x1ba0 ) volatile RX_EOM_PI_CAL_8_t RX_EOM_PI_CAL_8;
#define reg_RX_EOM_PI_CAL_CAL_EN_EXT_LANE  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_PI_CAL_INDV_EXT_EN_LANE  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_PI_CAL_SETTING_LANE_12_8  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_SETTING_LANE_12_8

// 0xe9	RX_EOM_PI_CAL_9		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h80*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_9_t;
__xdata __at( 0x1ba4 ) volatile RX_EOM_PI_CAL_9_t RX_EOM_PI_CAL_9;
#define reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0  RX_EOM_PI_CAL_9.BF.RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0

// 0xea	RX_EOM_PI_CAL_10		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_PI_CAL_UNDERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_OVERFLOW_RD_LANE           : 1;	/*      2       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_TIMEOUT_RD_LANE            : 1;	/*      3       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_CAL_DONE_RD_LANE           : 1;	/*      4       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8       : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_10_t;
__xdata __at( 0x1ba8 ) volatile RX_EOM_PI_CAL_10_t RX_EOM_PI_CAL_10;
#define reg_RX_EOM_PI_CAL_UNDERFLOW_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_PI_CAL_OVERFLOW_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_PI_CAL_CAL_DONE_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8

// 0xeb	RX_EOM_PI_CAL_11		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_RESULT_RD_LANE_7_0         : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_11_t;
__xdata __at( 0x1bac ) volatile RX_EOM_PI_CAL_11_t RX_EOM_PI_CAL_11;
#define reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0  RX_EOM_PI_CAL_11.BF.RX_EOM_PI_CAL_RESULT_RD_LANE_7_0

// 0xec	RX_EOM_PI_CAL_12		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_RESULT_RD_LANE_10_8        : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_12_t;
__xdata __at( 0x1bb0 ) volatile RX_EOM_PI_CAL_12_t RX_EOM_PI_CAL_12;
#define reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8  RX_EOM_PI_CAL_12.BF.RX_EOM_PI_CAL_RESULT_RD_LANE_10_8

// 0xed	RX_EOM_PI_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_DIR_INV_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE         : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_CONT_EN_LANE           : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE         : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_0_t;
__xdata __at( 0x1bb4 ) volatile RX_EOM_PI_DCC_CAL_0_t RX_EOM_PI_DCC_CAL_0;
#define reg_RX_EOM_PI_DCC_CAL_DIR_INV_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_DIR_INV_LANE
#define reg_RX_EOM_PI_DCC_CAL_CONT_NUM_LANE_3_0  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_PI_DCC_CAL_CONT_EN_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_CONT_EN_LANE
#define reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE

// 0xee	RX_EOM_PI_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_EOM_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_CMP_CTRL_LANE_1_0      : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_1_t;
__xdata __at( 0x1bb8 ) volatile RX_EOM_PI_DCC_CAL_1_t RX_EOM_PI_DCC_CAL_1;
#define reg_RX_EOM_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_DCC_CAL_1.BF.RX_EOM_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_DCC_CAL_1.BF.RX_EOM_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_DCC_CAL_CMP_CTRL_LANE_1_0  RX_EOM_PI_DCC_CAL_1.BF.RX_EOM_PI_DCC_CAL_CMP_CTRL_LANE_1_0

// 0xef	RX_EOM_PI_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_2_t;
__xdata __at( 0x1bbc ) volatile RX_EOM_PI_DCC_CAL_2_t RX_EOM_PI_DCC_CAL_2;
#define reg_RX_EOM_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_PI_DCC_CAL_2.BF.RX_EOM_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0

// 0xf0	RX_EOM_PI_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_3_t;
__xdata __at( 0x1bc0 ) volatile RX_EOM_PI_DCC_CAL_3_t RX_EOM_PI_DCC_CAL_3;
#define reg_RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0  RX_EOM_PI_DCC_CAL_3.BF.RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0

// 0xf1	RX_EOM_PI_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_CAL_DONE_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_CAL_EN_EXT_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_INDV_EXT_EN_LANE       : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_4_t;
__xdata __at( 0x1bc4 ) volatile RX_EOM_PI_DCC_CAL_4_t RX_EOM_PI_DCC_CAL_4;
#define reg_RX_EOM_PI_DCC_CAL_CAL_DONE_RD_LANE  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_CAL_EN_EXT_LANE  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_PI_DCC_CAL_INDV_EXT_EN_LANE  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8

// 0xf2	RX_EOM_PI_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_OVERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_VAL_MAX_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_5_t;
__xdata __at( 0x1bc8 ) volatile RX_EOM_PI_DCC_CAL_5_t RX_EOM_PI_DCC_CAL_5;
#define reg_RX_EOM_PI_DCC_CAL_OVERFLOW_RD_LANE  RX_EOM_PI_DCC_CAL_5.BF.RX_EOM_PI_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE  RX_EOM_PI_DCC_CAL_5.BF.RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_VAL_MAX_LANE_5_0  RX_EOM_PI_DCC_CAL_5.BF.RX_EOM_PI_DCC_CAL_VAL_MAX_LANE_5_0

// 0xf3	RX_EOM_PI_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_VAL_MIN_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_6_t;
__xdata __at( 0x1bcc ) volatile RX_EOM_PI_DCC_CAL_6_t RX_EOM_PI_DCC_CAL_6;
#define reg_RX_EOM_PI_DCC_CAL_UNDERFLOW_RD_LANE  RX_EOM_PI_DCC_CAL_6.BF.RX_EOM_PI_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_VAL_MIN_LANE_5_0  RX_EOM_PI_DCC_CAL_6.BF.RX_EOM_PI_DCC_CAL_VAL_MIN_LANE_5_0

// 0xf4	RX_EOM_PI_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0    : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_7_t;
__xdata __at( 0x1bd0 ) volatile RX_EOM_PI_DCC_CAL_7_t RX_EOM_PI_DCC_CAL_7;
#define reg_RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0  RX_EOM_PI_DCC_CAL_7.BF.RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0

// 0xf5	RX_EOM_PI_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_8_t;
__xdata __at( 0x1bd4 ) volatile RX_EOM_PI_DCC_CAL_8_t RX_EOM_PI_DCC_CAL_8;
#define reg_RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0  RX_EOM_PI_DCC_CAL_8.BF.RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0

// 0xf6	RX_SQ_0		TBD
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
__xdata __at( 0x1bd8 ) volatile RX_SQ_0_t RX_SQ_0;
#define reg_RX_SQ_TOP_DONE_LANE  RX_SQ_0.BF.RX_SQ_TOP_DONE_LANE
#define reg_RX_SQ_TESTBUS_CORE_SEL_LANE_2_0  RX_SQ_0.BF.RX_SQ_TESTBUS_CORE_SEL_LANE_2_0
#define reg_RX_SQ_TOP_START_LANE  RX_SQ_0.BF.RX_SQ_TOP_START_LANE
#define reg_RX_SQ_UPDN_RD_LANE  RX_SQ_0.BF.RX_SQ_UPDN_RD_LANE
#define reg_RX_SQ_CMP_CTRL_EXT_LANE  RX_SQ_0.BF.RX_SQ_CMP_CTRL_EXT_LANE
#define reg_RX_SQ_COMN_EXT_EN_LANE  RX_SQ_0.BF.RX_SQ_COMN_EXT_EN_LANE

// 0xf7	SQ_CAL_0		TBD
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
__xdata __at( 0x1bdc ) volatile SQ_CAL_0_t SQ_CAL_0;
#define reg_SQ_CAL_RESULT_AVG_EN_LANE  SQ_CAL_0.BF.SQ_CAL_RESULT_AVG_EN_LANE
#define reg_SQ_CAL_BIN_SEARCH_ENABLE_LANE  SQ_CAL_0.BF.SQ_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SQ_CAL_0.BF.SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SQ_CAL_DIR_INV_LANE  SQ_CAL_0.BF.SQ_CAL_DIR_INV_LANE
#define reg_SQ_CAL_BYPASS_EN_LANE  SQ_CAL_0.BF.SQ_CAL_BYPASS_EN_LANE
#define reg_SQ_CAL_SINGLE_EN_LANE  SQ_CAL_0.BF.SQ_CAL_SINGLE_EN_LANE

// 0xf8	SQ_CAL_1		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_TIMEOUT_STEPS_LANE_2_0            : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t SQ_CAL_TOGGLE_TIMES_LANE_2_0             : 3;	/*  [5:3]     r/w 3'h2*/
		uint8_t SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0      : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_1_t;
__xdata __at( 0x1be0 ) volatile SQ_CAL_1_t SQ_CAL_1;
#define reg_SQ_CAL_TIMEOUT_STEPS_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SQ_CAL_TOGGLE_TIMES_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  SQ_CAL_1.BF.SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0xf9	SQ_CAL_2		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_2_t;
__xdata __at( 0x1be4 ) volatile SQ_CAL_2_t SQ_CAL_2;
#define reg_SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SQ_CAL_2.BF.SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xfa	SQ_CAL_3		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_INDV_EXT_EN_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MAX_LANE_5_0                  : 6;	/*  [6:1]     r/w 6'h1f*/
		uint8_t SQ_CAL_TIMEOUT_CHK_DIS_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_3_t;
__xdata __at( 0x1be8 ) volatile SQ_CAL_3_t SQ_CAL_3;
#define reg_SQ_CAL_INDV_EXT_EN_LANE  SQ_CAL_3.BF.SQ_CAL_INDV_EXT_EN_LANE
#define reg_SQ_CAL_VAL_MAX_LANE_5_0  SQ_CAL_3.BF.SQ_CAL_VAL_MAX_LANE_5_0
#define reg_SQ_CAL_TIMEOUT_CHK_DIS_LANE  SQ_CAL_3.BF.SQ_CAL_TIMEOUT_CHK_DIS_LANE

// 0xfb	SQ_CAL_4		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_CAL_DONE_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_CAL_EN_EXT_LANE                   : 1;	/*      1     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MIN_LANE_5_0                  : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_4_t;
__xdata __at( 0x1bec ) volatile SQ_CAL_4_t SQ_CAL_4;
#define reg_SQ_CAL_CAL_DONE_RD_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_DONE_RD_LANE
#define reg_SQ_CAL_CAL_EN_EXT_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_EN_EXT_LANE
#define reg_SQ_CAL_VAL_MIN_LANE_5_0  SQ_CAL_4.BF.SQ_CAL_VAL_MIN_LANE_5_0

// 0xfc	SQ_CAL_5		TBD
typedef union {
	struct {
		uint8_t SQ_CAL_OVERFLOW_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_TIMEOUT_RD_LANE                   : 1;	/*      1       r 1'h0*/
		uint8_t SQ_CAL_RESULT_EXT_LANE_5_0               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_5_t;
__xdata __at( 0x1bf0 ) volatile SQ_CAL_5_t SQ_CAL_5;
#define reg_SQ_CAL_OVERFLOW_RD_LANE  SQ_CAL_5.BF.SQ_CAL_OVERFLOW_RD_LANE
#define reg_SQ_CAL_TIMEOUT_RD_LANE  SQ_CAL_5.BF.SQ_CAL_TIMEOUT_RD_LANE
#define reg_SQ_CAL_RESULT_EXT_LANE_5_0  SQ_CAL_5.BF.SQ_CAL_RESULT_EXT_LANE_5_0

// 0xfd	SQ_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_CAL_RESULT_RD_LANE_5_0                : 6;	/*  [6:1]       r 6'h0*/
		uint8_t SQ_CAL_UNDERFLOW_RD_LANE                 : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_6_t;
__xdata __at( 0x1bf4 ) volatile SQ_CAL_6_t SQ_CAL_6;
#define reg_SQ_CAL_RESULT_RD_LANE_5_0  SQ_CAL_6.BF.SQ_CAL_RESULT_RD_LANE_5_0
#define reg_SQ_CAL_UNDERFLOW_RD_LANE  SQ_CAL_6.BF.SQ_CAL_UNDERFLOW_RD_LANE

#endif
