#ifndef PHY_REG_C_ANA_PLL_RS_CAL_LANE_H
#define PHY_REG_C_ANA_PLL_RS_CAL_LANE_H



// 0x0	PLL_DCC_VDD_RS_0		pll_dcc_vdd_rs_0
typedef union {
	struct {
		uint8_t PLL_DCC_VDD_RS_TOP_START_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_DCC_VDD_RS_UPDN_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t PLL_DCC_VDD_RS_AUTO_ZERO_CLK_EXT_LANE    : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_DCC_VDD_RS_CMP_CTRL_EXT_LANE_3_0     : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t PLL_DCC_VDD_RS_COMN_EXT_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_VDD_RS_0_t;
__xdata __at( 0x2c00 ) volatile PLL_DCC_VDD_RS_0_t PLL_DCC_VDD_RS_0;
#define reg_PLL_DCC_VDD_RS_TOP_START_LANE  PLL_DCC_VDD_RS_0.BF.PLL_DCC_VDD_RS_TOP_START_LANE
#define reg_PLL_DCC_VDD_RS_UPDN_RD_LANE  PLL_DCC_VDD_RS_0.BF.PLL_DCC_VDD_RS_UPDN_RD_LANE
#define reg_PLL_DCC_VDD_RS_AUTO_ZERO_CLK_EXT_LANE  PLL_DCC_VDD_RS_0.BF.PLL_DCC_VDD_RS_AUTO_ZERO_CLK_EXT_LANE
#define reg_PLL_DCC_VDD_RS_CMP_CTRL_EXT_LANE_3_0  PLL_DCC_VDD_RS_0.BF.PLL_DCC_VDD_RS_CMP_CTRL_EXT_LANE_3_0
#define reg_PLL_DCC_VDD_RS_COMN_EXT_EN_LANE  PLL_DCC_VDD_RS_0.BF.PLL_DCC_VDD_RS_COMN_EXT_EN_LANE

// 0x1	PLL_DCC_VDD_RS_1		pll_dcc_vdd_rs_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_DCC_VDD_RS_TOP_CONT_DONE_LANE        : 1;	/*      2       r 1'h0*/
		uint8_t PLL_DCC_VDD_RS_TOP_DONE_LANE             : 1;	/*      3       r 1'h0*/
		uint8_t PLL_DCC_VDD_RS_TESTBUS_CORE_SEL_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t PLL_DCC_VDD_RS_TOP_CONT_START_LANE       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DCC_VDD_RS_1_t;
__xdata __at( 0x2c04 ) volatile PLL_DCC_VDD_RS_1_t PLL_DCC_VDD_RS_1;
#define reg_PLL_DCC_VDD_RS_TOP_CONT_DONE_LANE  PLL_DCC_VDD_RS_1.BF.PLL_DCC_VDD_RS_TOP_CONT_DONE_LANE
#define reg_PLL_DCC_VDD_RS_TOP_DONE_LANE  PLL_DCC_VDD_RS_1.BF.PLL_DCC_VDD_RS_TOP_DONE_LANE
#define reg_PLL_DCC_VDD_RS_TESTBUS_CORE_SEL_LANE_2_0  PLL_DCC_VDD_RS_1.BF.PLL_DCC_VDD_RS_TESTBUS_CORE_SEL_LANE_2_0
#define reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE  PLL_DCC_VDD_RS_1.BF.PLL_DCC_VDD_RS_TOP_CONT_START_LANE

// 0x2	PLL_RS_DCC_CAL_0		pll_rs_dcc_cal_0
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_RS_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_RS_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_0_t;
__xdata __at( 0x2c08 ) volatile PLL_RS_DCC_CAL_0_t PLL_RS_DCC_CAL_0;
#define reg_PLL_RS_DCC_CAL_DIR_INV_LANE  PLL_RS_DCC_CAL_0.BF.PLL_RS_DCC_CAL_DIR_INV_LANE
#define reg_PLL_RS_DCC_CAL_CONT_NUM_LANE_3_0  PLL_RS_DCC_CAL_0.BF.PLL_RS_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE  PLL_RS_DCC_CAL_0.BF.PLL_RS_DCC_CAL_BYPASS_EN_LANE
#define reg_PLL_RS_DCC_CAL_CONT_EN_LANE  PLL_RS_DCC_CAL_0.BF.PLL_RS_DCC_CAL_CONT_EN_LANE
#define reg_PLL_RS_DCC_CAL_SINGLE_EN_LANE  PLL_RS_DCC_CAL_0.BF.PLL_RS_DCC_CAL_SINGLE_EN_LANE

// 0x3	PLL_RS_DCC_CAL_1		pll_rs_dcc_cal_1
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t PLL_RS_DCC_CAL_CMP_CTRL_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_1_t;
__xdata __at( 0x2c0c ) volatile PLL_RS_DCC_CAL_1_t PLL_RS_DCC_CAL_1;
#define reg_PLL_RS_DCC_CAL_RESULT_AVG_EN_LANE  PLL_RS_DCC_CAL_1.BF.PLL_RS_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_RS_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_RS_DCC_CAL_1.BF.PLL_RS_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_RS_DCC_CAL_CMP_CTRL_LANE_3_0  PLL_RS_DCC_CAL_1.BF.PLL_RS_DCC_CAL_CMP_CTRL_LANE_3_0

// 0x4	PLL_RS_DCC_CAL_2		pll_rs_dcc_cal_2
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t PLL_RS_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t PLL_RS_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_2_t;
__xdata __at( 0x2c10 ) volatile PLL_RS_DCC_CAL_2_t PLL_RS_DCC_CAL_2;
#define reg_PLL_RS_DCC_CAL_TOGGLE_TIMES_LANE_2_0  PLL_RS_DCC_CAL_2.BF.PLL_RS_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_PLL_RS_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_RS_DCC_CAL_2.BF.PLL_RS_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_RS_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_RS_DCC_CAL_2.BF.PLL_RS_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x5	PLL_RS_DCC_CAL_3		pll_rs_dcc_cal_3
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_3_t;
__xdata __at( 0x2c14 ) volatile PLL_RS_DCC_CAL_3_t PLL_RS_DCC_CAL_3;
#define reg_PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_RS_DCC_CAL_3.BF.PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x6	PLL_RS_DCC_CAL_4		pll_rs_dcc_cal_4
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t PLL_RS_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_4_t;
__xdata __at( 0x2c18 ) volatile PLL_RS_DCC_CAL_4_t PLL_RS_DCC_CAL_4;
#define reg_PLL_RS_DCC_CAL_INDV_EXT_EN_LANE  PLL_RS_DCC_CAL_4.BF.PLL_RS_DCC_CAL_INDV_EXT_EN_LANE
#define reg_PLL_RS_DCC_CAL_TIMEOUT_CHK_DIS_LANE  PLL_RS_DCC_CAL_4.BF.PLL_RS_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_RS_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_RS_DCC_CAL_4.BF.PLL_RS_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_RS_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  PLL_RS_DCC_CAL_4.BF.PLL_RS_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x7	PLL_RS_DCC_CAL_5		pll_rs_dcc_cal_5
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DCC_CAL_VAL_MAX_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_5_t;
__xdata __at( 0x2c1c ) volatile PLL_RS_DCC_CAL_5_t PLL_RS_DCC_CAL_5;
#define reg_PLL_RS_DCC_CAL_CAL_EN_EXT_LANE  PLL_RS_DCC_CAL_5.BF.PLL_RS_DCC_CAL_CAL_EN_EXT_LANE
#define reg_PLL_RS_DCC_CAL_VAL_MAX_LANE_6_0  PLL_RS_DCC_CAL_5.BF.PLL_RS_DCC_CAL_VAL_MAX_LANE_6_0

// 0x8	PLL_RS_DCC_CAL_6		pll_rs_dcc_cal_6
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DCC_CAL_VAL_MIN_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_6_t;
__xdata __at( 0x2c20 ) volatile PLL_RS_DCC_CAL_6_t PLL_RS_DCC_CAL_6;
#define reg_PLL_RS_DCC_CAL_DUMMY_CLK_EXT_LANE  PLL_RS_DCC_CAL_6.BF.PLL_RS_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_RS_DCC_CAL_VAL_MIN_LANE_6_0  PLL_RS_DCC_CAL_6.BF.PLL_RS_DCC_CAL_VAL_MIN_LANE_6_0

// 0x9	PLL_RS_DCC_CAL_7		pll_rs_dcc_cal_7
typedef union {
	struct {
		uint8_t PLL_RS_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t PLL_RS_DCC_CAL_RESULT_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_7_t;
__xdata __at( 0x2c24 ) volatile PLL_RS_DCC_CAL_7_t PLL_RS_DCC_CAL_7;
#define reg_PLL_RS_DCC_CAL_CAL_DONE_RD_LANE  PLL_RS_DCC_CAL_7.BF.PLL_RS_DCC_CAL_CAL_DONE_RD_LANE
#define reg_PLL_RS_DCC_CAL_RESULT_EXT_LANE_6_0  PLL_RS_DCC_CAL_7.BF.PLL_RS_DCC_CAL_RESULT_EXT_LANE_6_0

// 0xa	PLL_RS_DCC_CAL_8		pll_rs_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t PLL_RS_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      5       r 1'h0*/
		uint8_t PLL_RS_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      6       r 1'h0*/
		uint8_t PLL_RS_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_8_t;
__xdata __at( 0x2c28 ) volatile PLL_RS_DCC_CAL_8_t PLL_RS_DCC_CAL_8;
#define reg_PLL_RS_DCC_CAL_UNDERFLOW_RD_LANE  PLL_RS_DCC_CAL_8.BF.PLL_RS_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_RS_DCC_CAL_OVERFLOW_RD_LANE  PLL_RS_DCC_CAL_8.BF.PLL_RS_DCC_CAL_OVERFLOW_RD_LANE
#define reg_PLL_RS_DCC_CAL_TIMEOUT_RD_LANE  PLL_RS_DCC_CAL_8.BF.PLL_RS_DCC_CAL_TIMEOUT_RD_LANE

// 0xb	PLL_RS_DCC_CAL_9		pll_rs_dcc_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_RS_DCC_CAL_RESULT_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DCC_CAL_9_t;
__xdata __at( 0x2c2c ) volatile PLL_RS_DCC_CAL_9_t PLL_RS_DCC_CAL_9;
#define reg_PLL_RS_DCC_CAL_RESULT_RD_LANE_6_0  PLL_RS_DCC_CAL_9.BF.PLL_RS_DCC_CAL_RESULT_RD_LANE_6_0

// 0xc	PLL_RS_DIV_DCC_CAL_0		pll_rs_div_dcc_cal_0
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_DIR_INV_LANE          : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_RS_DIV_DCC_CAL_CONT_NUM_LANE_3_0     : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_CONT_EN_LANE          : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_RS_DIV_DCC_CAL_SINGLE_EN_LANE        : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_0_t;
__xdata __at( 0x2c30 ) volatile PLL_RS_DIV_DCC_CAL_0_t PLL_RS_DIV_DCC_CAL_0;
#define reg_PLL_RS_DIV_DCC_CAL_DIR_INV_LANE  PLL_RS_DIV_DCC_CAL_0.BF.PLL_RS_DIV_DCC_CAL_DIR_INV_LANE
#define reg_PLL_RS_DIV_DCC_CAL_CONT_NUM_LANE_3_0  PLL_RS_DIV_DCC_CAL_0.BF.PLL_RS_DIV_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE  PLL_RS_DIV_DCC_CAL_0.BF.PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE
#define reg_PLL_RS_DIV_DCC_CAL_CONT_EN_LANE  PLL_RS_DIV_DCC_CAL_0.BF.PLL_RS_DIV_DCC_CAL_CONT_EN_LANE
#define reg_PLL_RS_DIV_DCC_CAL_SINGLE_EN_LANE  PLL_RS_DIV_DCC_CAL_0.BF.PLL_RS_DIV_DCC_CAL_SINGLE_EN_LANE

// 0xd	PLL_RS_DIV_DCC_CAL_1		pll_rs_div_dcc_cal_1
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_RESULT_AVG_EN_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_CMP_CTRL_LANE_3_0     : 4;	/*  [7:4]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_1_t;
__xdata __at( 0x2c34 ) volatile PLL_RS_DIV_DCC_CAL_1_t PLL_RS_DIV_DCC_CAL_1;
#define reg_PLL_RS_DIV_DCC_CAL_RESULT_AVG_EN_LANE  PLL_RS_DIV_DCC_CAL_1.BF.PLL_RS_DIV_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_RS_DIV_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_RS_DIV_DCC_CAL_1.BF.PLL_RS_DIV_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_RS_DIV_DCC_CAL_CMP_CTRL_LANE_3_0  PLL_RS_DIV_DCC_CAL_1.BF.PLL_RS_DIV_DCC_CAL_CMP_CTRL_LANE_3_0

// 0xe	PLL_RS_DIV_DCC_CAL_2		pll_rs_div_dcc_cal_2
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t PLL_RS_DIV_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_2_t;
__xdata __at( 0x2c38 ) volatile PLL_RS_DIV_DCC_CAL_2_t PLL_RS_DIV_DCC_CAL_2;
#define reg_PLL_RS_DIV_DCC_CAL_TOGGLE_TIMES_LANE_2_0  PLL_RS_DIV_DCC_CAL_2.BF.PLL_RS_DIV_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_PLL_RS_DIV_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_RS_DIV_DCC_CAL_2.BF.PLL_RS_DIV_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_RS_DIV_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_RS_DIV_DCC_CAL_2.BF.PLL_RS_DIV_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0xf	PLL_RS_DIV_DCC_CAL_3		pll_rs_div_dcc_cal_3
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_3_t;
__xdata __at( 0x2c3c ) volatile PLL_RS_DIV_DCC_CAL_3_t PLL_RS_DIV_DCC_CAL_3;
#define reg_PLL_RS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_RS_DIV_DCC_CAL_3.BF.PLL_RS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x10	PLL_RS_DIV_DCC_CAL_4		pll_rs_div_dcc_cal_4
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_INDV_EXT_EN_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_TIMEOUT_CHK_DIS_LANE  : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t PLL_RS_DIV_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_4_t;
__xdata __at( 0x2c40 ) volatile PLL_RS_DIV_DCC_CAL_4_t PLL_RS_DIV_DCC_CAL_4;
#define reg_PLL_RS_DIV_DCC_CAL_INDV_EXT_EN_LANE  PLL_RS_DIV_DCC_CAL_4.BF.PLL_RS_DIV_DCC_CAL_INDV_EXT_EN_LANE
#define reg_PLL_RS_DIV_DCC_CAL_TIMEOUT_CHK_DIS_LANE  PLL_RS_DIV_DCC_CAL_4.BF.PLL_RS_DIV_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_RS_DIV_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_RS_DIV_DCC_CAL_4.BF.PLL_RS_DIV_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_RS_DIV_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  PLL_RS_DIV_DCC_CAL_4.BF.PLL_RS_DIV_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x11	PLL_RS_DIV_DCC_CAL_5		pll_rs_div_dcc_cal_5
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_DUMMY_CLK_EXT_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_CAL_EN_EXT_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_VAL_MAX_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_5_t;
__xdata __at( 0x2c44 ) volatile PLL_RS_DIV_DCC_CAL_5_t PLL_RS_DIV_DCC_CAL_5;
#define reg_PLL_RS_DIV_DCC_CAL_DUMMY_CLK_EXT_LANE  PLL_RS_DIV_DCC_CAL_5.BF.PLL_RS_DIV_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_RS_DIV_DCC_CAL_CAL_EN_EXT_LANE  PLL_RS_DIV_DCC_CAL_5.BF.PLL_RS_DIV_DCC_CAL_CAL_EN_EXT_LANE
#define reg_PLL_RS_DIV_DCC_CAL_VAL_MAX_LANE_5_0  PLL_RS_DIV_DCC_CAL_5.BF.PLL_RS_DIV_DCC_CAL_VAL_MAX_LANE_5_0

// 0x12	PLL_RS_DIV_DCC_CAL_6		pll_rs_div_dcc_cal_6
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_TIMEOUT_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_CAL_DONE_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_VAL_MIN_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_6_t;
__xdata __at( 0x2c48 ) volatile PLL_RS_DIV_DCC_CAL_6_t PLL_RS_DIV_DCC_CAL_6;
#define reg_PLL_RS_DIV_DCC_CAL_TIMEOUT_RD_LANE  PLL_RS_DIV_DCC_CAL_6.BF.PLL_RS_DIV_DCC_CAL_TIMEOUT_RD_LANE
#define reg_PLL_RS_DIV_DCC_CAL_CAL_DONE_RD_LANE  PLL_RS_DIV_DCC_CAL_6.BF.PLL_RS_DIV_DCC_CAL_CAL_DONE_RD_LANE
#define reg_PLL_RS_DIV_DCC_CAL_VAL_MIN_LANE_5_0  PLL_RS_DIV_DCC_CAL_6.BF.PLL_RS_DIV_DCC_CAL_VAL_MIN_LANE_5_0

// 0x13	PLL_RS_DIV_DCC_CAL_7		pll_rs_div_dcc_cal_7
typedef union {
	struct {
		uint8_t PLL_RS_DIV_DCC_CAL_UNDERFLOW_RD_LANE     : 1;	/*      0       r 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_OVERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t PLL_RS_DIV_DCC_CAL_RESULT_EXT_LANE_5_0   : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_7_t;
__xdata __at( 0x2c4c ) volatile PLL_RS_DIV_DCC_CAL_7_t PLL_RS_DIV_DCC_CAL_7;
#define reg_PLL_RS_DIV_DCC_CAL_UNDERFLOW_RD_LANE  PLL_RS_DIV_DCC_CAL_7.BF.PLL_RS_DIV_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_RS_DIV_DCC_CAL_OVERFLOW_RD_LANE  PLL_RS_DIV_DCC_CAL_7.BF.PLL_RS_DIV_DCC_CAL_OVERFLOW_RD_LANE
#define reg_PLL_RS_DIV_DCC_CAL_RESULT_EXT_LANE_5_0  PLL_RS_DIV_DCC_CAL_7.BF.PLL_RS_DIV_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x14	PLL_RS_DIV_DCC_CAL_8		pll_rs_div_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_RS_DIV_DCC_CAL_RESULT_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_DIV_DCC_CAL_8_t;
__xdata __at( 0x2c50 ) volatile PLL_RS_DIV_DCC_CAL_8_t PLL_RS_DIV_DCC_CAL_8;
#define reg_PLL_RS_DIV_DCC_CAL_RESULT_RD_LANE_5_0  PLL_RS_DIV_DCC_CAL_8.BF.PLL_RS_DIV_DCC_CAL_RESULT_RD_LANE_5_0

// 0x15	PLL_RS_VDDA_FBDIV_CAL_0		pll_rs_vdda_fbdiv_cal_0
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_DIR_INV_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_CONT_NUM_LANE_3_0  : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE     : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_CONT_EN_LANE       : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE     : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_0_t;
__xdata __at( 0x2c54 ) volatile PLL_RS_VDDA_FBDIV_CAL_0_t PLL_RS_VDDA_FBDIV_CAL_0;
#define reg_PLL_RS_VDDA_FBDIV_CAL_DIR_INV_LANE  PLL_RS_VDDA_FBDIV_CAL_0.BF.PLL_RS_VDDA_FBDIV_CAL_DIR_INV_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_CONT_NUM_LANE_3_0  PLL_RS_VDDA_FBDIV_CAL_0.BF.PLL_RS_VDDA_FBDIV_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE  PLL_RS_VDDA_FBDIV_CAL_0.BF.PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_CONT_EN_LANE  PLL_RS_VDDA_FBDIV_CAL_0.BF.PLL_RS_VDDA_FBDIV_CAL_CONT_EN_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE  PLL_RS_VDDA_FBDIV_CAL_0.BF.PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE

// 0x16	PLL_RS_VDDA_FBDIV_CAL_1		pll_rs_vdda_fbdiv_cal_1
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_RESULT_AVG_EN_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_CMP_CTRL_LANE_3_0  : 4;	/*  [7:4]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_1_t;
__xdata __at( 0x2c58 ) volatile PLL_RS_VDDA_FBDIV_CAL_1_t PLL_RS_VDDA_FBDIV_CAL_1;
#define reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_AVG_EN_LANE  PLL_RS_VDDA_FBDIV_CAL_1.BF.PLL_RS_VDDA_FBDIV_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_RS_VDDA_FBDIV_CAL_1.BF.PLL_RS_VDDA_FBDIV_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_CMP_CTRL_LANE_3_0  PLL_RS_VDDA_FBDIV_CAL_1.BF.PLL_RS_VDDA_FBDIV_CAL_CMP_CTRL_LANE_3_0

// 0x17	PLL_RS_VDDA_FBDIV_CAL_2		pll_rs_vdda_fbdiv_cal_2
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_2_t;
__xdata __at( 0x2c5c ) volatile PLL_RS_VDDA_FBDIV_CAL_2_t PLL_RS_VDDA_FBDIV_CAL_2;
#define reg_PLL_RS_VDDA_FBDIV_CAL_TOGGLE_TIMES_LANE_2_0  PLL_RS_VDDA_FBDIV_CAL_2.BF.PLL_RS_VDDA_FBDIV_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_RS_VDDA_FBDIV_CAL_2.BF.PLL_RS_VDDA_FBDIV_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_RS_VDDA_FBDIV_CAL_2.BF.PLL_RS_VDDA_FBDIV_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x18	PLL_RS_VDDA_FBDIV_CAL_3		pll_rs_vdda_fbdiv_cal_3
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_3_t;
__xdata __at( 0x2c60 ) volatile PLL_RS_VDDA_FBDIV_CAL_3_t PLL_RS_VDDA_FBDIV_CAL_3;
#define reg_PLL_RS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_RS_VDDA_FBDIV_CAL_3.BF.PLL_RS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x19	PLL_RS_VDDA_FBDIV_CAL_4		pll_rs_vdda_fbdiv_cal_4
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_INDV_EXT_EN_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_CHK_DIS_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_4_t;
__xdata __at( 0x2c64 ) volatile PLL_RS_VDDA_FBDIV_CAL_4_t PLL_RS_VDDA_FBDIV_CAL_4;
#define reg_PLL_RS_VDDA_FBDIV_CAL_INDV_EXT_EN_LANE  PLL_RS_VDDA_FBDIV_CAL_4.BF.PLL_RS_VDDA_FBDIV_CAL_INDV_EXT_EN_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_CHK_DIS_LANE  PLL_RS_VDDA_FBDIV_CAL_4.BF.PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_RS_VDDA_FBDIV_CAL_4.BF.PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  PLL_RS_VDDA_FBDIV_CAL_4.BF.PLL_RS_VDDA_FBDIV_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x1a	PLL_RS_VDDA_FBDIV_CAL_5		pll_rs_vdda_fbdiv_cal_5
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_VAL_MIN_LANE_3_0   : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_VAL_MAX_LANE_3_0   : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_5_t;
__xdata __at( 0x2c68 ) volatile PLL_RS_VDDA_FBDIV_CAL_5_t PLL_RS_VDDA_FBDIV_CAL_5;
#define reg_PLL_RS_VDDA_FBDIV_CAL_VAL_MIN_LANE_3_0  PLL_RS_VDDA_FBDIV_CAL_5.BF.PLL_RS_VDDA_FBDIV_CAL_VAL_MIN_LANE_3_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_VAL_MAX_LANE_3_0  PLL_RS_VDDA_FBDIV_CAL_5.BF.PLL_RS_VDDA_FBDIV_CAL_VAL_MAX_LANE_3_0

// 0x1b	PLL_RS_VDDA_FBDIV_CAL_6		pll_rs_vdda_fbdiv_cal_6
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE    : 1;	/*      0       r 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_CAL_DONE_RD_LANE   : 1;	/*      1       r 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_DUMMY_CLK_EXT_LANE : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_CAL_EN_EXT_LANE    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_6_t;
__xdata __at( 0x2c6c ) volatile PLL_RS_VDDA_FBDIV_CAL_6_t PLL_RS_VDDA_FBDIV_CAL_6;
#define reg_PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE  PLL_RS_VDDA_FBDIV_CAL_6.BF.PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_CAL_DONE_RD_LANE  PLL_RS_VDDA_FBDIV_CAL_6.BF.PLL_RS_VDDA_FBDIV_CAL_CAL_DONE_RD_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0  PLL_RS_VDDA_FBDIV_CAL_6.BF.PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_DUMMY_CLK_EXT_LANE  PLL_RS_VDDA_FBDIV_CAL_6.BF.PLL_RS_VDDA_FBDIV_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_CAL_EN_EXT_LANE  PLL_RS_VDDA_FBDIV_CAL_6.BF.PLL_RS_VDDA_FBDIV_CAL_CAL_EN_EXT_LANE

// 0x1c	PLL_RS_VDDA_FBDIV_CAL_7		pll_rs_vdda_fbdiv_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0 : 4;	/*  [5:2]       r 4'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_UNDERFLOW_RD_LANE  : 1;	/*      6       r 1'h0*/
		uint8_t PLL_RS_VDDA_FBDIV_CAL_OVERFLOW_RD_LANE   : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_FBDIV_CAL_7_t;
__xdata __at( 0x2c70 ) volatile PLL_RS_VDDA_FBDIV_CAL_7_t PLL_RS_VDDA_FBDIV_CAL_7;
#define reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0  PLL_RS_VDDA_FBDIV_CAL_7.BF.PLL_RS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0
#define reg_PLL_RS_VDDA_FBDIV_CAL_UNDERFLOW_RD_LANE  PLL_RS_VDDA_FBDIV_CAL_7.BF.PLL_RS_VDDA_FBDIV_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_RS_VDDA_FBDIV_CAL_OVERFLOW_RD_LANE  PLL_RS_VDDA_FBDIV_CAL_7.BF.PLL_RS_VDDA_FBDIV_CAL_OVERFLOW_RD_LANE

// 0x1d	PLL_RS_VDDA_INTP_CAL_0		pll_rs_vdda_intp_cal_0
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_DIR_INV_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_CONT_NUM_LANE_3_0   : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE      : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_CONT_EN_LANE        : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE      : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_0_t;
__xdata __at( 0x2c74 ) volatile PLL_RS_VDDA_INTP_CAL_0_t PLL_RS_VDDA_INTP_CAL_0;
#define reg_PLL_RS_VDDA_INTP_CAL_DIR_INV_LANE  PLL_RS_VDDA_INTP_CAL_0.BF.PLL_RS_VDDA_INTP_CAL_DIR_INV_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_CONT_NUM_LANE_3_0  PLL_RS_VDDA_INTP_CAL_0.BF.PLL_RS_VDDA_INTP_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE  PLL_RS_VDDA_INTP_CAL_0.BF.PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_CONT_EN_LANE  PLL_RS_VDDA_INTP_CAL_0.BF.PLL_RS_VDDA_INTP_CAL_CONT_EN_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE  PLL_RS_VDDA_INTP_CAL_0.BF.PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE

// 0x1e	PLL_RS_VDDA_INTP_CAL_1		pll_rs_vdda_intp_cal_1
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_RESULT_AVG_EN_LANE  : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_CMP_CTRL_LANE_3_0   : 4;	/*  [7:4]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_1_t;
__xdata __at( 0x2c78 ) volatile PLL_RS_VDDA_INTP_CAL_1_t PLL_RS_VDDA_INTP_CAL_1;
#define reg_PLL_RS_VDDA_INTP_CAL_RESULT_AVG_EN_LANE  PLL_RS_VDDA_INTP_CAL_1.BF.PLL_RS_VDDA_INTP_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_RS_VDDA_INTP_CAL_1.BF.PLL_RS_VDDA_INTP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_RS_VDDA_INTP_CAL_CMP_CTRL_LANE_3_0  PLL_RS_VDDA_INTP_CAL_1.BF.PLL_RS_VDDA_INTP_CAL_CMP_CTRL_LANE_3_0

// 0x1f	PLL_RS_VDDA_INTP_CAL_2		pll_rs_vdda_intp_cal_2
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t PLL_RS_VDDA_INTP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_2_t;
__xdata __at( 0x2c7c ) volatile PLL_RS_VDDA_INTP_CAL_2_t PLL_RS_VDDA_INTP_CAL_2;
#define reg_PLL_RS_VDDA_INTP_CAL_TOGGLE_TIMES_LANE_2_0  PLL_RS_VDDA_INTP_CAL_2.BF.PLL_RS_VDDA_INTP_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_PLL_RS_VDDA_INTP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_RS_VDDA_INTP_CAL_2.BF.PLL_RS_VDDA_INTP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_RS_VDDA_INTP_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_RS_VDDA_INTP_CAL_2.BF.PLL_RS_VDDA_INTP_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x20	PLL_RS_VDDA_INTP_CAL_3		pll_rs_vdda_intp_cal_3
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_3_t;
__xdata __at( 0x2c80 ) volatile PLL_RS_VDDA_INTP_CAL_3_t PLL_RS_VDDA_INTP_CAL_3;
#define reg_PLL_RS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_RS_VDDA_INTP_CAL_3.BF.PLL_RS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x21	PLL_RS_VDDA_INTP_CAL_4		pll_rs_vdda_intp_cal_4
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_INDV_EXT_EN_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_TIMEOUT_CHK_DIS_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t PLL_RS_VDDA_INTP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_4_t;
__xdata __at( 0x2c84 ) volatile PLL_RS_VDDA_INTP_CAL_4_t PLL_RS_VDDA_INTP_CAL_4;
#define reg_PLL_RS_VDDA_INTP_CAL_INDV_EXT_EN_LANE  PLL_RS_VDDA_INTP_CAL_4.BF.PLL_RS_VDDA_INTP_CAL_INDV_EXT_EN_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_TIMEOUT_CHK_DIS_LANE  PLL_RS_VDDA_INTP_CAL_4.BF.PLL_RS_VDDA_INTP_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_RS_VDDA_INTP_CAL_4.BF.PLL_RS_VDDA_INTP_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_RS_VDDA_INTP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  PLL_RS_VDDA_INTP_CAL_4.BF.PLL_RS_VDDA_INTP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x22	PLL_RS_VDDA_INTP_CAL_5		pll_rs_vdda_intp_cal_5
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_VAL_MIN_LANE_3_0    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_VAL_MAX_LANE_3_0    : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_5_t;
__xdata __at( 0x2c88 ) volatile PLL_RS_VDDA_INTP_CAL_5_t PLL_RS_VDDA_INTP_CAL_5;
#define reg_PLL_RS_VDDA_INTP_CAL_VAL_MIN_LANE_3_0  PLL_RS_VDDA_INTP_CAL_5.BF.PLL_RS_VDDA_INTP_CAL_VAL_MIN_LANE_3_0
#define reg_PLL_RS_VDDA_INTP_CAL_VAL_MAX_LANE_3_0  PLL_RS_VDDA_INTP_CAL_5.BF.PLL_RS_VDDA_INTP_CAL_VAL_MAX_LANE_3_0

// 0x23	PLL_RS_VDDA_INTP_CAL_6		pll_rs_vdda_intp_cal_6
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_INTP_CAL_TIMEOUT_RD_LANE     : 1;	/*      0       r 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_CAL_DONE_RD_LANE    : 1;	/*      1       r 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_DUMMY_CLK_EXT_LANE  : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_CAL_EN_EXT_LANE     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_6_t;
__xdata __at( 0x2c8c ) volatile PLL_RS_VDDA_INTP_CAL_6_t PLL_RS_VDDA_INTP_CAL_6;
#define reg_PLL_RS_VDDA_INTP_CAL_TIMEOUT_RD_LANE  PLL_RS_VDDA_INTP_CAL_6.BF.PLL_RS_VDDA_INTP_CAL_TIMEOUT_RD_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_CAL_DONE_RD_LANE  PLL_RS_VDDA_INTP_CAL_6.BF.PLL_RS_VDDA_INTP_CAL_CAL_DONE_RD_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0  PLL_RS_VDDA_INTP_CAL_6.BF.PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0
#define reg_PLL_RS_VDDA_INTP_CAL_DUMMY_CLK_EXT_LANE  PLL_RS_VDDA_INTP_CAL_6.BF.PLL_RS_VDDA_INTP_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_CAL_EN_EXT_LANE  PLL_RS_VDDA_INTP_CAL_6.BF.PLL_RS_VDDA_INTP_CAL_CAL_EN_EXT_LANE

// 0x24	PLL_RS_VDDA_INTP_CAL_7		pll_rs_vdda_intp_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0  : 4;	/*  [5:2]       r 4'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_UNDERFLOW_RD_LANE   : 1;	/*      6       r 1'h0*/
		uint8_t PLL_RS_VDDA_INTP_CAL_OVERFLOW_RD_LANE    : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_INTP_CAL_7_t;
__xdata __at( 0x2c90 ) volatile PLL_RS_VDDA_INTP_CAL_7_t PLL_RS_VDDA_INTP_CAL_7;
#define reg_PLL_RS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0  PLL_RS_VDDA_INTP_CAL_7.BF.PLL_RS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0
#define reg_PLL_RS_VDDA_INTP_CAL_UNDERFLOW_RD_LANE  PLL_RS_VDDA_INTP_CAL_7.BF.PLL_RS_VDDA_INTP_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_RS_VDDA_INTP_CAL_OVERFLOW_RD_LANE  PLL_RS_VDDA_INTP_CAL_7.BF.PLL_RS_VDDA_INTP_CAL_OVERFLOW_RD_LANE

// 0x25	PLL_RS_VDDA_PFD_CAL_0		pll_rs_vdda_pfd_cal_0
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_DIR_INV_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_CONT_NUM_LANE_3_0    : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE       : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_CONT_EN_LANE         : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE       : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_0_t;
__xdata __at( 0x2c94 ) volatile PLL_RS_VDDA_PFD_CAL_0_t PLL_RS_VDDA_PFD_CAL_0;
#define reg_PLL_RS_VDDA_PFD_CAL_DIR_INV_LANE  PLL_RS_VDDA_PFD_CAL_0.BF.PLL_RS_VDDA_PFD_CAL_DIR_INV_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_CONT_NUM_LANE_3_0  PLL_RS_VDDA_PFD_CAL_0.BF.PLL_RS_VDDA_PFD_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE  PLL_RS_VDDA_PFD_CAL_0.BF.PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_CONT_EN_LANE  PLL_RS_VDDA_PFD_CAL_0.BF.PLL_RS_VDDA_PFD_CAL_CONT_EN_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE  PLL_RS_VDDA_PFD_CAL_0.BF.PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE

// 0x26	PLL_RS_VDDA_PFD_CAL_1		pll_rs_vdda_pfd_cal_1
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_RESULT_AVG_EN_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_CMP_CTRL_LANE_3_0    : 4;	/*  [7:4]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_1_t;
__xdata __at( 0x2c98 ) volatile PLL_RS_VDDA_PFD_CAL_1_t PLL_RS_VDDA_PFD_CAL_1;
#define reg_PLL_RS_VDDA_PFD_CAL_RESULT_AVG_EN_LANE  PLL_RS_VDDA_PFD_CAL_1.BF.PLL_RS_VDDA_PFD_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_RS_VDDA_PFD_CAL_1.BF.PLL_RS_VDDA_PFD_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_RS_VDDA_PFD_CAL_CMP_CTRL_LANE_3_0  PLL_RS_VDDA_PFD_CAL_1.BF.PLL_RS_VDDA_PFD_CAL_CMP_CTRL_LANE_3_0

// 0x27	PLL_RS_VDDA_PFD_CAL_2		pll_rs_vdda_pfd_cal_2
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t PLL_RS_VDDA_PFD_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_2_t;
__xdata __at( 0x2c9c ) volatile PLL_RS_VDDA_PFD_CAL_2_t PLL_RS_VDDA_PFD_CAL_2;
#define reg_PLL_RS_VDDA_PFD_CAL_TOGGLE_TIMES_LANE_2_0  PLL_RS_VDDA_PFD_CAL_2.BF.PLL_RS_VDDA_PFD_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_PLL_RS_VDDA_PFD_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_RS_VDDA_PFD_CAL_2.BF.PLL_RS_VDDA_PFD_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_RS_VDDA_PFD_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_RS_VDDA_PFD_CAL_2.BF.PLL_RS_VDDA_PFD_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x28	PLL_RS_VDDA_PFD_CAL_3		pll_rs_vdda_pfd_cal_3
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_3_t;
__xdata __at( 0x2ca0 ) volatile PLL_RS_VDDA_PFD_CAL_3_t PLL_RS_VDDA_PFD_CAL_3;
#define reg_PLL_RS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_RS_VDDA_PFD_CAL_3.BF.PLL_RS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x29	PLL_RS_VDDA_PFD_CAL_4		pll_rs_vdda_pfd_cal_4
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_INDV_EXT_EN_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_TIMEOUT_CHK_DIS_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t PLL_RS_VDDA_PFD_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_4_t;
__xdata __at( 0x2ca4 ) volatile PLL_RS_VDDA_PFD_CAL_4_t PLL_RS_VDDA_PFD_CAL_4;
#define reg_PLL_RS_VDDA_PFD_CAL_INDV_EXT_EN_LANE  PLL_RS_VDDA_PFD_CAL_4.BF.PLL_RS_VDDA_PFD_CAL_INDV_EXT_EN_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_TIMEOUT_CHK_DIS_LANE  PLL_RS_VDDA_PFD_CAL_4.BF.PLL_RS_VDDA_PFD_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_RS_VDDA_PFD_CAL_4.BF.PLL_RS_VDDA_PFD_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_RS_VDDA_PFD_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  PLL_RS_VDDA_PFD_CAL_4.BF.PLL_RS_VDDA_PFD_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x2a	PLL_RS_VDDA_PFD_CAL_5		pll_rs_vdda_pfd_cal_5
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_VAL_MIN_LANE_3_0     : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_VAL_MAX_LANE_3_0     : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_5_t;
__xdata __at( 0x2ca8 ) volatile PLL_RS_VDDA_PFD_CAL_5_t PLL_RS_VDDA_PFD_CAL_5;
#define reg_PLL_RS_VDDA_PFD_CAL_VAL_MIN_LANE_3_0  PLL_RS_VDDA_PFD_CAL_5.BF.PLL_RS_VDDA_PFD_CAL_VAL_MIN_LANE_3_0
#define reg_PLL_RS_VDDA_PFD_CAL_VAL_MAX_LANE_3_0  PLL_RS_VDDA_PFD_CAL_5.BF.PLL_RS_VDDA_PFD_CAL_VAL_MAX_LANE_3_0

// 0x2b	PLL_RS_VDDA_PFD_CAL_6		pll_rs_vdda_pfd_cal_6
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_PFD_CAL_TIMEOUT_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_CAL_DONE_RD_LANE     : 1;	/*      1       r 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0  : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_DUMMY_CLK_EXT_LANE   : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_CAL_EN_EXT_LANE      : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_6_t;
__xdata __at( 0x2cac ) volatile PLL_RS_VDDA_PFD_CAL_6_t PLL_RS_VDDA_PFD_CAL_6;
#define reg_PLL_RS_VDDA_PFD_CAL_TIMEOUT_RD_LANE  PLL_RS_VDDA_PFD_CAL_6.BF.PLL_RS_VDDA_PFD_CAL_TIMEOUT_RD_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_CAL_DONE_RD_LANE  PLL_RS_VDDA_PFD_CAL_6.BF.PLL_RS_VDDA_PFD_CAL_CAL_DONE_RD_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0  PLL_RS_VDDA_PFD_CAL_6.BF.PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0
#define reg_PLL_RS_VDDA_PFD_CAL_DUMMY_CLK_EXT_LANE  PLL_RS_VDDA_PFD_CAL_6.BF.PLL_RS_VDDA_PFD_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_CAL_EN_EXT_LANE  PLL_RS_VDDA_PFD_CAL_6.BF.PLL_RS_VDDA_PFD_CAL_CAL_EN_EXT_LANE

// 0x2c	PLL_RS_VDDA_PFD_CAL_7		pll_rs_vdda_pfd_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0   : 4;	/*  [5:2]       r 4'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_UNDERFLOW_RD_LANE    : 1;	/*      6       r 1'h0*/
		uint8_t PLL_RS_VDDA_PFD_CAL_OVERFLOW_RD_LANE     : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_VDDA_PFD_CAL_7_t;
__xdata __at( 0x2cb0 ) volatile PLL_RS_VDDA_PFD_CAL_7_t PLL_RS_VDDA_PFD_CAL_7;
#define reg_PLL_RS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0  PLL_RS_VDDA_PFD_CAL_7.BF.PLL_RS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0
#define reg_PLL_RS_VDDA_PFD_CAL_UNDERFLOW_RD_LANE  PLL_RS_VDDA_PFD_CAL_7.BF.PLL_RS_VDDA_PFD_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_RS_VDDA_PFD_CAL_OVERFLOW_RD_LANE  PLL_RS_VDDA_PFD_CAL_7.BF.PLL_RS_VDDA_PFD_CAL_OVERFLOW_RD_LANE

// 0x2d	PLL_AMP_RS_0		pll_amp_rs_0
typedef union {
	struct {
		uint8_t PLL_AMP_RS_TESTBUS_CORE_SEL_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t PLL_AMP_RS_TOP_CONT_START_LANE           : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_AMP_RS_TOP_START_LANE                : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_AMP_RS_UPDN_RD_LANE                  : 1;	/*      5       r 1'h0*/
		uint8_t PLL_AMP_RS_CMP_CTRL_EXT_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_AMP_RS_COMN_EXT_EN_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_RS_0_t;
__xdata __at( 0x2cb4 ) volatile PLL_AMP_RS_0_t PLL_AMP_RS_0;
#define reg_PLL_AMP_RS_TESTBUS_CORE_SEL_LANE_2_0  PLL_AMP_RS_0.BF.PLL_AMP_RS_TESTBUS_CORE_SEL_LANE_2_0
#define reg_PLL_AMP_RS_TOP_CONT_START_LANE  PLL_AMP_RS_0.BF.PLL_AMP_RS_TOP_CONT_START_LANE
#define reg_PLL_AMP_RS_TOP_START_LANE  PLL_AMP_RS_0.BF.PLL_AMP_RS_TOP_START_LANE
#define reg_PLL_AMP_RS_UPDN_RD_LANE  PLL_AMP_RS_0.BF.PLL_AMP_RS_UPDN_RD_LANE
#define reg_PLL_AMP_RS_CMP_CTRL_EXT_LANE  PLL_AMP_RS_0.BF.PLL_AMP_RS_CMP_CTRL_EXT_LANE
#define reg_PLL_AMP_RS_COMN_EXT_EN_LANE  PLL_AMP_RS_0.BF.PLL_AMP_RS_COMN_EXT_EN_LANE

// 0x2e	PLL_AMP_RS_1		pll_amp_rs_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t PLL_AMP_RS_TOP_CONT_DONE_LANE            : 1;	/*      6       r 1'h0*/
		uint8_t PLL_AMP_RS_TOP_DONE_LANE                 : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_AMP_RS_1_t;
__xdata __at( 0x2cb8 ) volatile PLL_AMP_RS_1_t PLL_AMP_RS_1;
#define reg_PLL_AMP_RS_TOP_CONT_DONE_LANE  PLL_AMP_RS_1.BF.PLL_AMP_RS_TOP_CONT_DONE_LANE
#define reg_PLL_AMP_RS_TOP_DONE_LANE  PLL_AMP_RS_1.BF.PLL_AMP_RS_TOP_DONE_LANE

// 0x2f	PLL_RS_AMP_CAL_0		pll_rs_amp_cal_0
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_RS_AMP_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_AMP_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_AMP_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t PLL_RS_AMP_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_0_t;
__xdata __at( 0x2cbc ) volatile PLL_RS_AMP_CAL_0_t PLL_RS_AMP_CAL_0;
#define reg_PLL_RS_AMP_CAL_DIR_INV_LANE  PLL_RS_AMP_CAL_0.BF.PLL_RS_AMP_CAL_DIR_INV_LANE
#define reg_PLL_RS_AMP_CAL_CONT_NUM_LANE_3_0  PLL_RS_AMP_CAL_0.BF.PLL_RS_AMP_CAL_CONT_NUM_LANE_3_0
#define reg_PLL_RS_AMP_CAL_BYPASS_EN_LANE  PLL_RS_AMP_CAL_0.BF.PLL_RS_AMP_CAL_BYPASS_EN_LANE
#define reg_PLL_RS_AMP_CAL_CONT_EN_LANE  PLL_RS_AMP_CAL_0.BF.PLL_RS_AMP_CAL_CONT_EN_LANE
#define reg_PLL_RS_AMP_CAL_SINGLE_EN_LANE  PLL_RS_AMP_CAL_0.BF.PLL_RS_AMP_CAL_SINGLE_EN_LANE

// 0x30	PLL_RS_AMP_CAL_1		pll_rs_amp_cal_1
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_RS_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t PLL_RS_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_1_t;
__xdata __at( 0x2cc0 ) volatile PLL_RS_AMP_CAL_1_t PLL_RS_AMP_CAL_1;
#define reg_PLL_RS_AMP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  PLL_RS_AMP_CAL_1.BF.PLL_RS_AMP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_PLL_RS_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0  PLL_RS_AMP_CAL_1.BF.PLL_RS_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_PLL_RS_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  PLL_RS_AMP_CAL_1.BF.PLL_RS_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x31	PLL_RS_AMP_CAL_2		pll_rs_amp_cal_2
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_AMP_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [3:1]     r/w 3'h5*/
		uint8_t PLL_RS_AMP_CAL_RESULT_AVG_EN_LANE        : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_RS_AMP_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_2_t;
__xdata __at( 0x2cc4 ) volatile PLL_RS_AMP_CAL_2_t PLL_RS_AMP_CAL_2;
#define reg_PLL_RS_AMP_CAL_TIMEOUT_CHK_DIS_LANE  PLL_RS_AMP_CAL_2.BF.PLL_RS_AMP_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_PLL_RS_AMP_CAL_TIMEOUT_STEPS_LANE_2_0  PLL_RS_AMP_CAL_2.BF.PLL_RS_AMP_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_PLL_RS_AMP_CAL_RESULT_AVG_EN_LANE  PLL_RS_AMP_CAL_2.BF.PLL_RS_AMP_CAL_RESULT_AVG_EN_LANE
#define reg_PLL_RS_AMP_CAL_TOGGLE_TIMES_LANE_2_0  PLL_RS_AMP_CAL_2.BF.PLL_RS_AMP_CAL_TOGGLE_TIMES_LANE_2_0

// 0x32	PLL_RS_AMP_CAL_3		pll_rs_amp_cal_3
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_3_t;
__xdata __at( 0x2cc8 ) volatile PLL_RS_AMP_CAL_3_t PLL_RS_AMP_CAL_3;
#define reg_PLL_RS_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0  PLL_RS_AMP_CAL_3.BF.PLL_RS_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x33	PLL_RS_AMP_CAL_4		pll_rs_amp_cal_4
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_VAL_MAX_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_4_t;
__xdata __at( 0x2ccc ) volatile PLL_RS_AMP_CAL_4_t PLL_RS_AMP_CAL_4;
#define reg_PLL_RS_AMP_CAL_VAL_MAX_LANE_7_0  PLL_RS_AMP_CAL_4.BF.PLL_RS_AMP_CAL_VAL_MAX_LANE_7_0

// 0x34	PLL_RS_AMP_CAL_5		pll_rs_amp_cal_5
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_VAL_MIN_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_5_t;
__xdata __at( 0x2cd0 ) volatile PLL_RS_AMP_CAL_5_t PLL_RS_AMP_CAL_5;
#define reg_PLL_RS_AMP_CAL_VAL_MIN_LANE_7_0  PLL_RS_AMP_CAL_5.BF.PLL_RS_AMP_CAL_VAL_MIN_LANE_7_0

// 0x35	PLL_RS_AMP_CAL_6		pll_rs_amp_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_RS_AMP_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t PLL_RS_AMP_CAL_OVERFLOW_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t PLL_RS_AMP_CAL_TIMEOUT_RD_LANE           : 1;	/*      3       r 1'h0*/
		uint8_t PLL_RS_AMP_CAL_CAL_DONE_RD_LANE          : 1;	/*      4       r 1'h0*/
		uint8_t PLL_RS_AMP_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_AMP_CAL_CAL_EN_EXT_LANE           : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_AMP_CAL_INDV_EXT_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_6_t;
__xdata __at( 0x2cd4 ) volatile PLL_RS_AMP_CAL_6_t PLL_RS_AMP_CAL_6;
#define reg_PLL_RS_AMP_CAL_UNDERFLOW_RD_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_UNDERFLOW_RD_LANE
#define reg_PLL_RS_AMP_CAL_OVERFLOW_RD_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_OVERFLOW_RD_LANE
#define reg_PLL_RS_AMP_CAL_TIMEOUT_RD_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_TIMEOUT_RD_LANE
#define reg_PLL_RS_AMP_CAL_CAL_DONE_RD_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_CAL_DONE_RD_LANE
#define reg_PLL_RS_AMP_CAL_DUMMY_CLK_EXT_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_DUMMY_CLK_EXT_LANE
#define reg_PLL_RS_AMP_CAL_CAL_EN_EXT_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_CAL_EN_EXT_LANE
#define reg_PLL_RS_AMP_CAL_INDV_EXT_EN_LANE  PLL_RS_AMP_CAL_6.BF.PLL_RS_AMP_CAL_INDV_EXT_EN_LANE

// 0x36	PLL_RS_AMP_CAL_7		pll_rs_amp_cal_7
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_RESULT_EXT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h4f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_7_t;
__xdata __at( 0x2cd8 ) volatile PLL_RS_AMP_CAL_7_t PLL_RS_AMP_CAL_7;
#define reg_PLL_RS_AMP_CAL_RESULT_EXT_LANE_7_0  PLL_RS_AMP_CAL_7.BF.PLL_RS_AMP_CAL_RESULT_EXT_LANE_7_0

// 0x37	PLL_RS_AMP_CAL_8		pll_rs_amp_cal_8
typedef union {
	struct {
		uint8_t PLL_RS_AMP_CAL_RESULT_RD_LANE_7_0        : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_AMP_CAL_8_t;
__xdata __at( 0x2cdc ) volatile PLL_RS_AMP_CAL_8_t PLL_RS_AMP_CAL_8;
#define reg_PLL_RS_AMP_CAL_RESULT_RD_LANE_7_0  PLL_RS_AMP_CAL_8.BF.PLL_RS_AMP_CAL_RESULT_RD_LANE_7_0

#endif
