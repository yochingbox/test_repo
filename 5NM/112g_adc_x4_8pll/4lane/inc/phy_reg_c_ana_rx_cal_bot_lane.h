#ifndef PHY_REG_C_ANA_RX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_RX_CAL_BOT_LANE_H



// 0x0	RX_CLK_0		rx_clk_0
typedef union {
	struct {
		uint8_t RX_CLK_TOP_DONE_LANE                     : 1;	/*      0       r 1'h0*/
		uint8_t RX_CLK_TOP_CONT_START_LANE               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CLK_TOP_START_LANE                    : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_CLK_UPDN_RD_LANE                      : 1;	/*      3       r 1'h0*/
		uint8_t RX_CLK_AUTO_ZERO_CLK_EXT_LANE            : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CLK_CMP_CTRL_EXT_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_CLK_COMN_EXT_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_0_t;
__xdata __at( 0x1a00 ) volatile RX_CLK_0_t RX_CLK_0;
#define reg_RX_CLK_TOP_DONE_LANE  RX_CLK_0.BF.RX_CLK_TOP_DONE_LANE
#define reg_RX_CLK_TOP_CONT_START_LANE  RX_CLK_0.BF.RX_CLK_TOP_CONT_START_LANE
#define reg_RX_CLK_TOP_START_LANE  RX_CLK_0.BF.RX_CLK_TOP_START_LANE
#define reg_RX_CLK_UPDN_RD_LANE  RX_CLK_0.BF.RX_CLK_UPDN_RD_LANE
#define reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE  RX_CLK_0.BF.RX_CLK_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_CLK_CMP_CTRL_EXT_LANE_1_0  RX_CLK_0.BF.RX_CLK_CMP_CTRL_EXT_LANE_1_0
#define reg_RX_CLK_COMN_EXT_EN_LANE  RX_CLK_0.BF.RX_CLK_COMN_EXT_EN_LANE

// 0x1	RX_CLK_1		rx_clk_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_CLK_TOP_CONT_DONE_LANE                : 1;	/*      4       r 1'h0*/
		uint8_t RX_CLK_TESTBUS_CORE_SEL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_1_t;
__xdata __at( 0x1a04 ) volatile RX_CLK_1_t RX_CLK_1;
#define reg_RX_CLK_TOP_CONT_DONE_LANE  RX_CLK_1.BF.RX_CLK_TOP_CONT_DONE_LANE
#define reg_RX_CLK_TESTBUS_CORE_SEL_LANE_2_0  RX_CLK_1.BF.RX_CLK_TESTBUS_CORE_SEL_LANE_2_0

// 0x2	RX_ALIGN90_CAL_0		rx_align90_cal_0
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
__xdata __at( 0x1a08 ) volatile RX_ALIGN90_CAL_0_t RX_ALIGN90_CAL_0;
#define reg_RX_ALIGN90_CAL_DIR_INV_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_CAL_BYPASS_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_CAL_CONT_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_CAL_SINGLE_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_SINGLE_EN_LANE

// 0x3	RX_ALIGN90_CAL_1		rx_align90_cal_1
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_ALIGN90_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_1_t;
__xdata __at( 0x1a0c ) volatile RX_ALIGN90_CAL_1_t RX_ALIGN90_CAL_1;
#define reg_RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_CAL_CMP_CTRL_LANE_1_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_CMP_CTRL_LANE_1_0

// 0x4	RX_ALIGN90_CAL_2		rx_align90_cal_2
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
__xdata __at( 0x1a10 ) volatile RX_ALIGN90_CAL_2_t RX_ALIGN90_CAL_2;
#define reg_RX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_ALIGN90_CAL_RESULT_AVG_EN_LANE  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_RX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE

// 0x5	RX_ALIGN90_CAL_3		rx_align90_cal_3
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_3_t;
__xdata __at( 0x1a14 ) volatile RX_ALIGN90_CAL_3_t RX_ALIGN90_CAL_3;
#define reg_RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x6	RX_ALIGN90_CAL_4		rx_align90_cal_4
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_4_t;
__xdata __at( 0x1a18 ) volatile RX_ALIGN90_CAL_4_t RX_ALIGN90_CAL_4;
#define reg_RX_ALIGN90_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x7	RX_ALIGN90_CAL_5		rx_align90_cal_5
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
__xdata __at( 0x1a1c ) volatile RX_ALIGN90_CAL_5_t RX_ALIGN90_CAL_5;
#define reg_RX_ALIGN90_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x8	RX_ALIGN90_CAL_6		rx_align90_cal_6
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_6_t;
__xdata __at( 0x1a20 ) volatile RX_ALIGN90_CAL_6_t RX_ALIGN90_CAL_6;
#define reg_RX_ALIGN90_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0x9	RX_ALIGN90_CAL_7		rx_align90_cal_7
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_7_t;
__xdata __at( 0x1a24 ) volatile RX_ALIGN90_CAL_7_t RX_ALIGN90_CAL_7;
#define reg_RX_ALIGN90_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_CAL_7.BF.RX_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_CAL_7.BF.RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0xa	RX_ALIGN90_CAL_8		rx_align90_cal_8
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
__xdata __at( 0x1a28 ) volatile RX_ALIGN90_CAL_8_t RX_ALIGN90_CAL_8;
#define reg_RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0xb	RX_ALIGN90_CAL_9		rx_align90_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_9_t;
__xdata __at( 0x1a2c ) volatile RX_ALIGN90_CAL_9_t RX_ALIGN90_CAL_9;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_CAL_9.BF.RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0xc	RX_ALIGN90_CAL_10		rx_align90_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_10_t;
__xdata __at( 0x1a30 ) volatile RX_ALIGN90_CAL_10_t RX_ALIGN90_CAL_10;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_CAL_10.BF.RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0xd	RX_DCC_A0_CAL_0		rx_dcc_a0_cal_0
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
__xdata __at( 0x1a34 ) volatile RX_DCC_A0_CAL_0_t RX_DCC_A0_CAL_0;
#define reg_RX_DCC_A0_CAL_DIR_INV_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_DIR_INV_LANE
#define reg_RX_DCC_A0_CAL_CONT_NUM_LANE_3_0  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC_A0_CAL_BYPASS_EN_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_BYPASS_EN_LANE
#define reg_RX_DCC_A0_CAL_CONT_EN_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_CONT_EN_LANE
#define reg_RX_DCC_A0_CAL_SINGLE_EN_LANE  RX_DCC_A0_CAL_0.BF.RX_DCC_A0_CAL_SINGLE_EN_LANE

// 0xe	RX_DCC_A0_CAL_1		rx_dcc_a0_cal_1
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RX_DCC_A0_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_DCC_A0_CAL_CMP_CTRL_LANE_1_0          : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_1_t;
__xdata __at( 0x1a38 ) volatile RX_DCC_A0_CAL_1_t RX_DCC_A0_CAL_1;
#define reg_RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC_A0_CAL_1.BF.RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A0_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC_A0_CAL_1.BF.RX_DCC_A0_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A0_CAL_CMP_CTRL_LANE_1_0  RX_DCC_A0_CAL_1.BF.RX_DCC_A0_CAL_CMP_CTRL_LANE_1_0

// 0xf	RX_DCC_A0_CAL_2		rx_dcc_a0_cal_2
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_TIMEOUT_CHK_DIS_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_RESULT_AVG_EN_LANE         : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_TOGGLE_TIMES_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_DCC_A0_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_DCC_A0_CAL_BIN_SEARCH_ENABLE_LANE     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_2_t;
__xdata __at( 0x1a3c ) volatile RX_DCC_A0_CAL_2_t RX_DCC_A0_CAL_2;
#define reg_RX_DCC_A0_CAL_TIMEOUT_CHK_DIS_LANE  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_DCC_A0_CAL_RESULT_AVG_EN_LANE  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_RESULT_AVG_EN_LANE
#define reg_RX_DCC_A0_CAL_TOGGLE_TIMES_LANE_2_0  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_DCC_A0_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_DCC_A0_CAL_BIN_SEARCH_ENABLE_LANE  RX_DCC_A0_CAL_2.BF.RX_DCC_A0_CAL_BIN_SEARCH_ENABLE_LANE

// 0x10	RX_DCC_A0_CAL_3		rx_dcc_a0_cal_3
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_SAMPLE_PULSE_DIV_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_3_t;
__xdata __at( 0x1a40 ) volatile RX_DCC_A0_CAL_3_t RX_DCC_A0_CAL_3;
#define reg_RX_DCC_A0_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_DCC_A0_CAL_3.BF.RX_DCC_A0_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x11	RX_DCC_A0_CAL_4		rx_dcc_a0_cal_4
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_CAL_EN_EXT_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_INDV_EXT_EN_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC_A0_CAL_TIMEOUT_STEPS_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_DCC_A0_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_4_t;
__xdata __at( 0x1a44 ) volatile RX_DCC_A0_CAL_4_t RX_DCC_A0_CAL_4;
#define reg_RX_DCC_A0_CAL_CAL_EN_EXT_LANE  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC_A0_CAL_INDV_EXT_EN_LANE  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC_A0_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_DCC_A0_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_DCC_A0_CAL_4.BF.RX_DCC_A0_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x12	RX_DCC_A0_CAL_5		rx_dcc_a0_cal_5
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_CAL_DONE_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE         : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0       : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_5_t;
__xdata __at( 0x1a48 ) volatile RX_DCC_A0_CAL_5_t RX_DCC_A0_CAL_5;
#define reg_RX_DCC_A0_CAL_CAL_DONE_RD_LANE  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC_A0_CAL_5.BF.RX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0

// 0x13	RX_DCC_A0_CAL_6		rx_dcc_a0_cal_6
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_OVERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_TIMEOUT_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_6_t;
__xdata __at( 0x1a4c ) volatile RX_DCC_A0_CAL_6_t RX_DCC_A0_CAL_6;
#define reg_RX_DCC_A0_CAL_OVERFLOW_RD_LANE  RX_DCC_A0_CAL_6.BF.RX_DCC_A0_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC_A0_CAL_TIMEOUT_RD_LANE  RX_DCC_A0_CAL_6.BF.RX_DCC_A0_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC_A0_CAL_6.BF.RX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0

// 0x14	RX_DCC_A0_CAL_7		rx_dcc_a0_cal_7
typedef union {
	struct {
		uint8_t RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_UNDERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_7_t;
__xdata __at( 0x1a50 ) volatile RX_DCC_A0_CAL_7_t RX_DCC_A0_CAL_7;
#define reg_RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE  RX_DCC_A0_CAL_7.BF.RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC_A0_CAL_UNDERFLOW_RD_LANE  RX_DCC_A0_CAL_7.BF.RX_DCC_A0_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC_A0_CAL_7.BF.RX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0

// 0x15	RX_DCC_A0_CAL_8		rx_dcc_a0_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0     : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0    : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_8_t;
__xdata __at( 0x1a54 ) volatile RX_DCC_A0_CAL_8_t RX_DCC_A0_CAL_8;
#define reg_RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC_A0_CAL_8.BF.RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC_A0_CAL_8.BF.RX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x16	RX_DCC_A0_CAL_9		rx_dcc_a0_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0    : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_9_t;
__xdata __at( 0x1a58 ) volatile RX_DCC_A0_CAL_9_t RX_DCC_A0_CAL_9;
#define reg_RX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC_A0_CAL_9.BF.RX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x17	RX_DCC_A0_CAL_10		rx_dcc_a0_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A0_CAL_10_t;
__xdata __at( 0x1a5c ) volatile RX_DCC_A0_CAL_10_t RX_DCC_A0_CAL_10;
#define reg_RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC_A0_CAL_10.BF.RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0

// 0x18	RX_DCC_A90_CAL_0		rx_dcc_a90_cal_0
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
__xdata __at( 0x1a60 ) volatile RX_DCC_A90_CAL_0_t RX_DCC_A90_CAL_0;
#define reg_RX_DCC_A90_CAL_DIR_INV_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_DIR_INV_LANE
#define reg_RX_DCC_A90_CAL_CONT_NUM_LANE_3_0  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DCC_A90_CAL_BYPASS_EN_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_BYPASS_EN_LANE
#define reg_RX_DCC_A90_CAL_CONT_EN_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_CONT_EN_LANE
#define reg_RX_DCC_A90_CAL_SINGLE_EN_LANE  RX_DCC_A90_CAL_0.BF.RX_DCC_A90_CAL_SINGLE_EN_LANE

// 0x19	RX_DCC_A90_CAL_1		rx_dcc_a90_cal_1
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RX_DCC_A90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_DCC_A90_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_1_t;
__xdata __at( 0x1a64 ) volatile RX_DCC_A90_CAL_1_t RX_DCC_A90_CAL_1;
#define reg_RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DCC_A90_CAL_1.BF.RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DCC_A90_CAL_1.BF.RX_DCC_A90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DCC_A90_CAL_CMP_CTRL_LANE_1_0  RX_DCC_A90_CAL_1.BF.RX_DCC_A90_CAL_CMP_CTRL_LANE_1_0

// 0x1a	RX_DCC_A90_CAL_2		rx_dcc_a90_cal_2
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_DCC_A90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RX_DCC_A90_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_2_t;
__xdata __at( 0x1a68 ) volatile RX_DCC_A90_CAL_2_t RX_DCC_A90_CAL_2;
#define reg_RX_DCC_A90_CAL_TIMEOUT_CHK_DIS_LANE  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_DCC_A90_CAL_RESULT_AVG_EN_LANE  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_RESULT_AVG_EN_LANE
#define reg_RX_DCC_A90_CAL_TOGGLE_TIMES_LANE_2_0  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_DCC_A90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_DCC_A90_CAL_BIN_SEARCH_ENABLE_LANE  RX_DCC_A90_CAL_2.BF.RX_DCC_A90_CAL_BIN_SEARCH_ENABLE_LANE

// 0x1b	RX_DCC_A90_CAL_3		rx_dcc_a90_cal_3
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_3_t;
__xdata __at( 0x1a6c ) volatile RX_DCC_A90_CAL_3_t RX_DCC_A90_CAL_3;
#define reg_RX_DCC_A90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_DCC_A90_CAL_3.BF.RX_DCC_A90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x1c	RX_DCC_A90_CAL_4		rx_dcc_a90_cal_4
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DCC_A90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t RX_DCC_A90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_4_t;
__xdata __at( 0x1a70 ) volatile RX_DCC_A90_CAL_4_t RX_DCC_A90_CAL_4;
#define reg_RX_DCC_A90_CAL_CAL_EN_EXT_LANE  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_CAL_EN_EXT_LANE
#define reg_RX_DCC_A90_CAL_INDV_EXT_EN_LANE  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_INDV_EXT_EN_LANE
#define reg_RX_DCC_A90_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_DCC_A90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_DCC_A90_CAL_4.BF.RX_DCC_A90_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x1d	RX_DCC_A90_CAL_5		rx_dcc_a90_cal_5
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_5_t;
__xdata __at( 0x1a74 ) volatile RX_DCC_A90_CAL_5_t RX_DCC_A90_CAL_5;
#define reg_RX_DCC_A90_CAL_CAL_DONE_RD_LANE  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_CAL_DONE_RD_LANE
#define reg_RX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0  RX_DCC_A90_CAL_5.BF.RX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x1e	RX_DCC_A90_CAL_6		rx_dcc_a90_cal_6
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_TIMEOUT_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_6_t;
__xdata __at( 0x1a78 ) volatile RX_DCC_A90_CAL_6_t RX_DCC_A90_CAL_6;
#define reg_RX_DCC_A90_CAL_OVERFLOW_RD_LANE  RX_DCC_A90_CAL_6.BF.RX_DCC_A90_CAL_OVERFLOW_RD_LANE
#define reg_RX_DCC_A90_CAL_TIMEOUT_RD_LANE  RX_DCC_A90_CAL_6.BF.RX_DCC_A90_CAL_TIMEOUT_RD_LANE
#define reg_RX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0  RX_DCC_A90_CAL_6.BF.RX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0

// 0x1f	RX_DCC_A90_CAL_7		rx_dcc_a90_cal_7
typedef union {
	struct {
		uint8_t RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_7_t;
__xdata __at( 0x1a7c ) volatile RX_DCC_A90_CAL_7_t RX_DCC_A90_CAL_7;
#define reg_RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE  RX_DCC_A90_CAL_7.BF.RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DCC_A90_CAL_UNDERFLOW_RD_LANE  RX_DCC_A90_CAL_7.BF.RX_DCC_A90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0  RX_DCC_A90_CAL_7.BF.RX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0

// 0x20	RX_DCC_A90_CAL_8		rx_dcc_a90_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_8_t;
__xdata __at( 0x1a80 ) volatile RX_DCC_A90_CAL_8_t RX_DCC_A90_CAL_8;
#define reg_RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0  RX_DCC_A90_CAL_8.BF.RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DCC_A90_CAL_8.BF.RX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x21	RX_DCC_A90_CAL_9		rx_dcc_a90_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0   : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_9_t;
__xdata __at( 0x1a84 ) volatile RX_DCC_A90_CAL_9_t RX_DCC_A90_CAL_9;
#define reg_RX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DCC_A90_CAL_9.BF.RX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x22	RX_DCC_A90_CAL_10		rx_dcc_a90_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DCC_A90_CAL_10_t;
__xdata __at( 0x1a88 ) volatile RX_DCC_A90_CAL_10_t RX_DCC_A90_CAL_10;
#define reg_RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0  RX_DCC_A90_CAL_10.BF.RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0

// 0x23	DLL_0		dll_0
typedef union {
	struct {
		uint8_t DLL_TOP_CONT_DONE_LANE                   : 1;	/*      0       r 1'h0*/
		uint8_t DLL_TOP_DONE_LANE                        : 1;	/*      1       r 1'h0*/
		uint8_t DLL_TOP_CONT_START_LANE                  : 1;	/*      2     r/w 1'h0*/
		uint8_t DLL_TOP_START_LANE                       : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_UPDN_RD_LANE                         : 1;	/*      4       r 1'h0*/
		uint8_t DLL_AUTO_ZERO_CLK_EXT_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t DLL_CMP_CTRL_EXT_LANE                    : 1;	/*      6     r/w 1'h0*/
		uint8_t DLL_COMN_EXT_EN_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_0_t;
__xdata __at( 0x1a8c ) volatile DLL_0_t DLL_0;
#define reg_DLL_TOP_CONT_DONE_LANE  DLL_0.BF.DLL_TOP_CONT_DONE_LANE
#define reg_DLL_TOP_DONE_LANE  DLL_0.BF.DLL_TOP_DONE_LANE
#define reg_DLL_TOP_CONT_START_LANE  DLL_0.BF.DLL_TOP_CONT_START_LANE
#define reg_DLL_TOP_START_LANE  DLL_0.BF.DLL_TOP_START_LANE
#define reg_DLL_UPDN_RD_LANE  DLL_0.BF.DLL_UPDN_RD_LANE
#define reg_DLL_AUTO_ZERO_CLK_EXT_LANE  DLL_0.BF.DLL_AUTO_ZERO_CLK_EXT_LANE
#define reg_DLL_CMP_CTRL_EXT_LANE  DLL_0.BF.DLL_CMP_CTRL_EXT_LANE
#define reg_DLL_COMN_EXT_EN_LANE  DLL_0.BF.DLL_COMN_EXT_EN_LANE

// 0x24	DLL_1		dll_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t DLL_TESTBUS_CORE_SEL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_1_t;
__xdata __at( 0x1a90 ) volatile DLL_1_t DLL_1;
#define reg_DLL_TESTBUS_CORE_SEL_LANE_2_0  DLL_1.BF.DLL_TESTBUS_CORE_SEL_LANE_2_0

// 0x25	DLL_CAL_0		dll_cal_0
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
__xdata __at( 0x1a94 ) volatile DLL_CAL_0_t DLL_CAL_0;
#define reg_DLL_CAL_CMP_CTRL_LANE  DLL_CAL_0.BF.DLL_CAL_CMP_CTRL_LANE
#define reg_DLL_CAL_CONT_NUM_LANE_3_0  DLL_CAL_0.BF.DLL_CAL_CONT_NUM_LANE_3_0
#define reg_DLL_CAL_BYPASS_EN_LANE  DLL_CAL_0.BF.DLL_CAL_BYPASS_EN_LANE
#define reg_DLL_CAL_CONT_EN_LANE  DLL_CAL_0.BF.DLL_CAL_CONT_EN_LANE
#define reg_DLL_CAL_SINGLE_EN_LANE  DLL_CAL_0.BF.DLL_CAL_SINGLE_EN_LANE

// 0x26	DLL_CAL_1		dll_cal_1
typedef union {
	struct {
		uint8_t DLL_CAL_BIN_SEARCH_ENABLE_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0    : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t DLL_CAL_DIR_INV_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_1_t;
__xdata __at( 0x1a98 ) volatile DLL_CAL_1_t DLL_CAL_1;
#define reg_DLL_CAL_BIN_SEARCH_ENABLE_LANE  DLL_CAL_1.BF.DLL_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0  DLL_CAL_1.BF.DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_CAL_1.BF.DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_CAL_DIR_INV_LANE  DLL_CAL_1.BF.DLL_CAL_DIR_INV_LANE

// 0x27	DLL_CAL_2		dll_cal_2
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
__xdata __at( 0x1a9c ) volatile DLL_CAL_2_t DLL_CAL_2;
#define reg_DLL_CAL_INDV_EXT_EN_LANE  DLL_CAL_2.BF.DLL_CAL_INDV_EXT_EN_LANE
#define reg_DLL_CAL_TIMEOUT_CHK_DIS_LANE  DLL_CAL_2.BF.DLL_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_CAL_RESULT_AVG_EN_LANE  DLL_CAL_2.BF.DLL_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_CAL_TOGGLE_TIMES_LANE_2_0  DLL_CAL_2.BF.DLL_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_CAL_2.BF.DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x28	DLL_CAL_3		dll_cal_3
typedef union {
	struct {
		uint8_t DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h42*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_3_t;
__xdata __at( 0x1aa0 ) volatile DLL_CAL_3_t DLL_CAL_3;
#define reg_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_CAL_3.BF.DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x29	DLL_CAL_4		dll_cal_4
typedef union {
	struct {
		uint8_t DLL_CAL_DUMMY_CLK_EXT_LANE               : 1;	/*      0     r/w 1'h1*/
		uint8_t DLL_CAL_CAL_EN_EXT_LANE                  : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_CAL_TIMEOUT_STEPS_LANE_2_0           : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_4_t;
__xdata __at( 0x1aa4 ) volatile DLL_CAL_4_t DLL_CAL_4;
#define reg_DLL_CAL_DUMMY_CLK_EXT_LANE  DLL_CAL_4.BF.DLL_CAL_DUMMY_CLK_EXT_LANE
#define reg_DLL_CAL_CAL_EN_EXT_LANE  DLL_CAL_4.BF.DLL_CAL_CAL_EN_EXT_LANE
#define reg_DLL_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_CAL_4.BF.DLL_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  DLL_CAL_4.BF.DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x2a	DLL_CAL_5		dll_cal_5
typedef union {
	struct {
		uint8_t DLL_CAL_VAL_MIN_MSB_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t DLL_CAL_VAL_MAX_MSB_LANE_3_0             : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_5_t;
__xdata __at( 0x1aa8 ) volatile DLL_CAL_5_t DLL_CAL_5;
#define reg_DLL_CAL_VAL_MIN_MSB_LANE_3_0  DLL_CAL_5.BF.DLL_CAL_VAL_MIN_MSB_LANE_3_0
#define reg_DLL_CAL_VAL_MAX_MSB_LANE_3_0  DLL_CAL_5.BF.DLL_CAL_VAL_MAX_MSB_LANE_3_0

// 0x2b	DLL_CAL_6		dll_cal_6
typedef union {
	struct {
		uint8_t DLL_CAL_CAL_DONE_RD_LANE                 : 1;	/*      0       r 1'h0*/
		uint8_t DLL_CAL_VAL_MAX_LSB_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_6_t;
__xdata __at( 0x1aac ) volatile DLL_CAL_6_t DLL_CAL_6;
#define reg_DLL_CAL_CAL_DONE_RD_LANE  DLL_CAL_6.BF.DLL_CAL_CAL_DONE_RD_LANE
#define reg_DLL_CAL_VAL_MAX_LSB_LANE_6_0  DLL_CAL_6.BF.DLL_CAL_VAL_MAX_LSB_LANE_6_0

// 0x2c	DLL_CAL_7		dll_cal_7
typedef union {
	struct {
		uint8_t DLL_CAL_TIMEOUT_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t DLL_CAL_VAL_MIN_LSB_LANE_6_0             : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_7_t;
__xdata __at( 0x1ab0 ) volatile DLL_CAL_7_t DLL_CAL_7;
#define reg_DLL_CAL_TIMEOUT_RD_LANE  DLL_CAL_7.BF.DLL_CAL_TIMEOUT_RD_LANE
#define reg_DLL_CAL_VAL_MIN_LSB_LANE_6_0  DLL_CAL_7.BF.DLL_CAL_VAL_MIN_LSB_LANE_6_0

// 0x2d	DLL_CAL_8		dll_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_CAL_DUMMY_CLK_RD_LANE                : 1;	/*      1       r 1'h0*/
		uint8_t DLL_CAL_UNDERFLOW_RD_LANE                : 1;	/*      2       r 1'h0*/
		uint8_t DLL_CAL_OVERFLOW_RD_LANE                 : 1;	/*      3       r 1'h0*/
		uint8_t DLL_CAL_RESULT_MSB_EXT_LANE_3_0          : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_8_t;
__xdata __at( 0x1ab4 ) volatile DLL_CAL_8_t DLL_CAL_8;
#define reg_DLL_CAL_DUMMY_CLK_RD_LANE  DLL_CAL_8.BF.DLL_CAL_DUMMY_CLK_RD_LANE
#define reg_DLL_CAL_UNDERFLOW_RD_LANE  DLL_CAL_8.BF.DLL_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_CAL_OVERFLOW_RD_LANE  DLL_CAL_8.BF.DLL_CAL_OVERFLOW_RD_LANE
#define reg_DLL_CAL_RESULT_MSB_EXT_LANE_3_0  DLL_CAL_8.BF.DLL_CAL_RESULT_MSB_EXT_LANE_3_0

// 0x2e	DLL_CAL_9		dll_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_CAL_RESULT_LSB_EXT_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_9_t;
__xdata __at( 0x1ab8 ) volatile DLL_CAL_9_t DLL_CAL_9;
#define reg_DLL_CAL_RESULT_LSB_EXT_LANE_6_0  DLL_CAL_9.BF.DLL_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x2f	DLL_CAL_10		dll_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t DLL_CAL_RESULT_MSB_RD_LANE_3_0           : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_10_t;
__xdata __at( 0x1abc ) volatile DLL_CAL_10_t DLL_CAL_10;
#define reg_DLL_CAL_RESULT_MSB_RD_LANE_3_0  DLL_CAL_10.BF.DLL_CAL_RESULT_MSB_RD_LANE_3_0

// 0x30	DLL_CAL_11		dll_cal_11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_CAL_RESULT_LSB_RD_LANE_6_0           : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_11_t;
__xdata __at( 0x1ac0 ) volatile DLL_CAL_11_t DLL_CAL_11;
#define reg_DLL_CAL_RESULT_LSB_RD_LANE_6_0  DLL_CAL_11.BF.DLL_CAL_RESULT_LSB_RD_LANE_6_0

// 0x31	RX_E2C_DCC_CAL_0		rx_e2c_dcc_cal_0
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
__xdata __at( 0x1ac4 ) volatile RX_E2C_DCC_CAL_0_t RX_E2C_DCC_CAL_0;
#define reg_RX_E2C_DCC_CAL_CMP_CTRL_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CMP_CTRL_LANE
#define reg_RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_E2C_DCC_CAL_CONT_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_EN_LANE
#define reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_SINGLE_EN_LANE

// 0x32	RX_E2C_DCC_CAL_1		rx_e2c_dcc_cal_1
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RX_E2C_DCC_CAL_DIR_INV_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_1_t;
__xdata __at( 0x1ac8 ) volatile RX_E2C_DCC_CAL_1_t RX_E2C_DCC_CAL_1;
#define reg_RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_E2C_DCC_CAL_DIR_INV_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_DIR_INV_LANE

// 0x33	RX_E2C_DCC_CAL_2		rx_e2c_dcc_cal_2
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
__xdata __at( 0x1acc ) volatile RX_E2C_DCC_CAL_2_t RX_E2C_DCC_CAL_2;
#define reg_RX_E2C_DCC_CAL_INDV_EXT_EN_LANE  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x34	RX_E2C_DCC_CAL_3		rx_e2c_dcc_cal_3
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_3_t;
__xdata __at( 0x1ad0 ) volatile RX_E2C_DCC_CAL_3_t RX_E2C_DCC_CAL_3;
#define reg_RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_E2C_DCC_CAL_3.BF.RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x35	RX_E2C_DCC_CAL_4		rx_e2c_dcc_cal_4
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_4_t;
__xdata __at( 0x1ad4 ) volatile RX_E2C_DCC_CAL_4_t RX_E2C_DCC_CAL_4;
#define reg_RX_E2C_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_E2C_DCC_CAL_CAL_EN_EXT_LANE  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x36	RX_E2C_DCC_CAL_5		rx_e2c_dcc_cal_5
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MAX_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_5_t;
__xdata __at( 0x1ad8 ) volatile RX_E2C_DCC_CAL_5_t RX_E2C_DCC_CAL_5;
#define reg_RX_E2C_DCC_CAL_TIMEOUT_RD_LANE  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_E2C_DCC_CAL_CAL_DONE_RD_LANE  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MAX_LANE_5_0  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_VAL_MAX_LANE_5_0

// 0x37	RX_E2C_DCC_CAL_6		rx_e2c_dcc_cal_6
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MIN_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_6_t;
__xdata __at( 0x1adc ) volatile RX_E2C_DCC_CAL_6_t RX_E2C_DCC_CAL_6;
#define reg_RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_OVERFLOW_RD_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MIN_LANE_5_0  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_VAL_MIN_LANE_5_0

// 0x38	RX_E2C_DCC_CAL_7		rx_e2c_dcc_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_EXT_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_7_t;
__xdata __at( 0x1ae0 ) volatile RX_E2C_DCC_CAL_7_t RX_E2C_DCC_CAL_7;
#define reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_5_0  RX_E2C_DCC_CAL_7.BF.RX_E2C_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x39	RX_E2C_DCC_CAL_8		rx_e2c_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0        : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_8_t;
__xdata __at( 0x1ae4 ) volatile RX_E2C_DCC_CAL_8_t RX_E2C_DCC_CAL_8;
#define reg_RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0  RX_E2C_DCC_CAL_8.BF.RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0

#endif
