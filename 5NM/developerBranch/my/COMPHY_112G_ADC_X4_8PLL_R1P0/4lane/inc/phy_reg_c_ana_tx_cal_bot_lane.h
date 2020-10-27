#ifndef PHY_REG_C_ANA_TX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_TX_CAL_BOT_LANE_H



// 0x0	TX_ALIGN90_DCC_IMP_0		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_DCC_IMP_TOP_START_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_UPDN_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_3_0 : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE      : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_DCC_IMP_0_t;
__xdata __at( 0x1c00 ) volatile TX_ALIGN90_DCC_IMP_0_t TX_ALIGN90_DCC_IMP_0;
#define reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_TOP_START_LANE
#define reg_TX_ALIGN90_DCC_IMP_UPDN_RD_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_UPDN_RD_LANE
#define reg_TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE
#define reg_TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_3_0  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_3_0
#define reg_TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE

// 0x1	TX_ALIGN90_DCC_IMP_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE    : 1;	/*      2       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_TOP_DONE_LANE         : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE   : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_DCC_IMP_1_t;
__xdata __at( 0x1c04 ) volatile TX_ALIGN90_DCC_IMP_1_t TX_ALIGN90_DCC_IMP_1;
#define reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE
#define reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_DONE_LANE
#define reg_TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0
#define reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE

// 0x2	TX_E2C_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_DIR_INV_LANE              : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_E2C_DCC_CAL_CMP_CTRL_LANE_3_0         : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t TX_E2C_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_0_t;
__xdata __at( 0x1c08 ) volatile TX_E2C_DCC_CAL_0_t TX_E2C_DCC_CAL_0;
#define reg_TX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_E2C_DCC_CAL_DIR_INV_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_DIR_INV_LANE
#define reg_TX_E2C_DCC_CAL_CMP_CTRL_LANE_3_0  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_BYPASS_EN_LANE
#define reg_TX_E2C_DCC_CAL_SINGLE_EN_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_SINGLE_EN_LANE

// 0x3	TX_E2C_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_1_t;
__xdata __at( 0x1c0c ) volatile TX_E2C_DCC_CAL_1_t TX_E2C_DCC_CAL_1;
#define reg_TX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0  TX_E2C_DCC_CAL_1.BF.TX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_E2C_DCC_CAL_1.BF.TX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_E2C_DCC_CAL_1.BF.TX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x4	TX_E2C_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [3:1]     r/w 3'h4*/
		uint8_t TX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_E2C_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_2_t;
__xdata __at( 0x1c10 ) volatile TX_E2C_DCC_CAL_2_t TX_E2C_DCC_CAL_2;
#define reg_TX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_E2C_DCC_CAL_RESULT_AVG_EN_LANE  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_RESULT_AVG_EN_LANE

// 0x5	TX_E2C_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_3_t;
__xdata __at( 0x1c14 ) volatile TX_E2C_DCC_CAL_3_t TX_E2C_DCC_CAL_3;
#define reg_TX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_E2C_DCC_CAL_3.BF.TX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x6	TX_E2C_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_VAL_MAX_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_4_t;
__xdata __at( 0x1c18 ) volatile TX_E2C_DCC_CAL_4_t TX_E2C_DCC_CAL_4;
#define reg_TX_E2C_DCC_CAL_INDV_EXT_EN_LANE  TX_E2C_DCC_CAL_4.BF.TX_E2C_DCC_CAL_INDV_EXT_EN_LANE
#define reg_TX_E2C_DCC_CAL_VAL_MAX_LANE_6_0  TX_E2C_DCC_CAL_4.BF.TX_E2C_DCC_CAL_VAL_MAX_LANE_6_0

// 0x7	TX_E2C_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_VAL_MIN_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_5_t;
__xdata __at( 0x1c1c ) volatile TX_E2C_DCC_CAL_5_t TX_E2C_DCC_CAL_5;
#define reg_TX_E2C_DCC_CAL_CAL_EN_EXT_LANE  TX_E2C_DCC_CAL_5.BF.TX_E2C_DCC_CAL_CAL_EN_EXT_LANE
#define reg_TX_E2C_DCC_CAL_VAL_MIN_LANE_6_0  TX_E2C_DCC_CAL_5.BF.TX_E2C_DCC_CAL_VAL_MIN_LANE_6_0

// 0x8	TX_E2C_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_6_t;
__xdata __at( 0x1c20 ) volatile TX_E2C_DCC_CAL_6_t TX_E2C_DCC_CAL_6;
#define reg_TX_E2C_DCC_CAL_CAL_DONE_RD_LANE  TX_E2C_DCC_CAL_6.BF.TX_E2C_DCC_CAL_CAL_DONE_RD_LANE
#define reg_TX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0  TX_E2C_DCC_CAL_6.BF.TX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0

// 0x9	TX_E2C_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_E2C_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      5       r 1'h0*/
		uint8_t TX_E2C_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      6       r 1'h0*/
		uint8_t TX_E2C_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_7_t;
__xdata __at( 0x1c24 ) volatile TX_E2C_DCC_CAL_7_t TX_E2C_DCC_CAL_7;
#define reg_TX_E2C_DCC_CAL_UNDERFLOW_RD_LANE  TX_E2C_DCC_CAL_7.BF.TX_E2C_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_TX_E2C_DCC_CAL_OVERFLOW_RD_LANE  TX_E2C_DCC_CAL_7.BF.TX_E2C_DCC_CAL_OVERFLOW_RD_LANE
#define reg_TX_E2C_DCC_CAL_TIMEOUT_RD_LANE  TX_E2C_DCC_CAL_7.BF.TX_E2C_DCC_CAL_TIMEOUT_RD_LANE

// 0xa	TX_E2C_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_CAL_RESULT_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_8_t;
__xdata __at( 0x1c28 ) volatile TX_E2C_DCC_CAL_8_t TX_E2C_DCC_CAL_8;
#define reg_TX_E2C_DCC_CAL_RESULT_RD_LANE_6_0  TX_E2C_DCC_CAL_8.BF.TX_E2C_DCC_CAL_RESULT_RD_LANE_6_0

// 0xb	TX_ALIGN90_HS_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_HS_CAL_INDV_EXT_EN_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_DIR_INV_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [5:2]     r/w 4'h2*/
		uint8_t TX_ALIGN90_HS_CAL_BYPASS_EN_LANE         : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_CONT_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_0_t;
__xdata __at( 0x1c2c ) volatile TX_ALIGN90_HS_CAL_0_t TX_ALIGN90_HS_CAL_0;
#define reg_TX_ALIGN90_HS_CAL_INDV_EXT_EN_LANE  TX_ALIGN90_HS_CAL_0.BF.TX_ALIGN90_HS_CAL_INDV_EXT_EN_LANE
#define reg_TX_ALIGN90_HS_CAL_DIR_INV_LANE  TX_ALIGN90_HS_CAL_0.BF.TX_ALIGN90_HS_CAL_DIR_INV_LANE
#define reg_TX_ALIGN90_HS_CAL_CONT_NUM_LANE_3_0  TX_ALIGN90_HS_CAL_0.BF.TX_ALIGN90_HS_CAL_CONT_NUM_LANE_3_0
#define reg_TX_ALIGN90_HS_CAL_BYPASS_EN_LANE  TX_ALIGN90_HS_CAL_0.BF.TX_ALIGN90_HS_CAL_BYPASS_EN_LANE
#define reg_TX_ALIGN90_HS_CAL_CONT_EN_LANE  TX_ALIGN90_HS_CAL_0.BF.TX_ALIGN90_HS_CAL_CONT_EN_LANE

// 0xc	TX_ALIGN90_HS_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_HS_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_ALIGN90_HS_CAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_1_t;
__xdata __at( 0x1c30 ) volatile TX_ALIGN90_HS_CAL_1_t TX_ALIGN90_HS_CAL_1;
#define reg_TX_ALIGN90_HS_CAL_CAL_EN_EXT_LANE  TX_ALIGN90_HS_CAL_1.BF.TX_ALIGN90_HS_CAL_CAL_EN_EXT_LANE
#define reg_TX_ALIGN90_HS_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_ALIGN90_HS_CAL_1.BF.TX_ALIGN90_HS_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_ALIGN90_HS_CAL_CMP_CTRL_LANE_3_0  TX_ALIGN90_HS_CAL_1.BF.TX_ALIGN90_HS_CAL_CMP_CTRL_LANE_3_0

// 0xd	TX_ALIGN90_HS_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_HS_CAL_CAL_DONE_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_DUMMY_CLK_EXT_LANE     : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_ALIGN90_HS_CAL_VAL_MAX_MSB_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t TX_ALIGN90_HS_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_2_t;
__xdata __at( 0x1c34 ) volatile TX_ALIGN90_HS_CAL_2_t TX_ALIGN90_HS_CAL_2;
#define reg_TX_ALIGN90_HS_CAL_CAL_DONE_RD_LANE  TX_ALIGN90_HS_CAL_2.BF.TX_ALIGN90_HS_CAL_CAL_DONE_RD_LANE
#define reg_TX_ALIGN90_HS_CAL_DUMMY_CLK_EXT_LANE  TX_ALIGN90_HS_CAL_2.BF.TX_ALIGN90_HS_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_ALIGN90_HS_CAL_VAL_MAX_MSB_LANE_2_0  TX_ALIGN90_HS_CAL_2.BF.TX_ALIGN90_HS_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_ALIGN90_HS_CAL_TIMEOUT_STEPS_LANE_2_0  TX_ALIGN90_HS_CAL_2.BF.TX_ALIGN90_HS_CAL_TIMEOUT_STEPS_LANE_2_0

// 0xe	TX_ALIGN90_HS_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_HS_CAL_OVERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_TIMEOUT_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_RESULT_MSB_EXT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t TX_ALIGN90_HS_CAL_VAL_MIN_MSB_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_3_t;
__xdata __at( 0x1c38 ) volatile TX_ALIGN90_HS_CAL_3_t TX_ALIGN90_HS_CAL_3;
#define reg_TX_ALIGN90_HS_CAL_OVERFLOW_RD_LANE  TX_ALIGN90_HS_CAL_3.BF.TX_ALIGN90_HS_CAL_OVERFLOW_RD_LANE
#define reg_TX_ALIGN90_HS_CAL_TIMEOUT_RD_LANE  TX_ALIGN90_HS_CAL_3.BF.TX_ALIGN90_HS_CAL_TIMEOUT_RD_LANE
#define reg_TX_ALIGN90_HS_CAL_RESULT_MSB_EXT_LANE_2_0  TX_ALIGN90_HS_CAL_3.BF.TX_ALIGN90_HS_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_TX_ALIGN90_HS_CAL_VAL_MIN_MSB_LANE_2_0  TX_ALIGN90_HS_CAL_3.BF.TX_ALIGN90_HS_CAL_VAL_MIN_MSB_LANE_2_0

// 0xf	TX_ALIGN90_HS_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_HS_CAL_UNDERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_VAL_MAX_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_4_t;
__xdata __at( 0x1c3c ) volatile TX_ALIGN90_HS_CAL_4_t TX_ALIGN90_HS_CAL_4;
#define reg_TX_ALIGN90_HS_CAL_UNDERFLOW_RD_LANE  TX_ALIGN90_HS_CAL_4.BF.TX_ALIGN90_HS_CAL_UNDERFLOW_RD_LANE
#define reg_TX_ALIGN90_HS_CAL_VAL_MAX_LSB_LANE_6_0  TX_ALIGN90_HS_CAL_4.BF.TX_ALIGN90_HS_CAL_VAL_MAX_LSB_LANE_6_0

// 0x10	TX_ALIGN90_HS_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_HS_CAL_DUMMY_CLK_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t TX_ALIGN90_HS_CAL_VAL_MIN_LSB_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_5_t;
__xdata __at( 0x1c40 ) volatile TX_ALIGN90_HS_CAL_5_t TX_ALIGN90_HS_CAL_5;
#define reg_TX_ALIGN90_HS_CAL_DUMMY_CLK_RD_LANE  TX_ALIGN90_HS_CAL_5.BF.TX_ALIGN90_HS_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_ALIGN90_HS_CAL_VAL_MIN_LSB_LANE_6_0  TX_ALIGN90_HS_CAL_5.BF.TX_ALIGN90_HS_CAL_VAL_MIN_LSB_LANE_6_0

// 0x11	TX_ALIGN90_HS_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_HS_CAL_RESULT_LSB_EXT_LANE_6_0 : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_6_t;
__xdata __at( 0x1c44 ) volatile TX_ALIGN90_HS_CAL_6_t TX_ALIGN90_HS_CAL_6;
#define reg_TX_ALIGN90_HS_CAL_RESULT_LSB_EXT_LANE_6_0  TX_ALIGN90_HS_CAL_6.BF.TX_ALIGN90_HS_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x12	TX_ALIGN90_HS_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_ALIGN90_HS_CAL_RESULT_MSB_RD_LANE_2_0 : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_7_t;
__xdata __at( 0x1c48 ) volatile TX_ALIGN90_HS_CAL_7_t TX_ALIGN90_HS_CAL_7;
#define reg_TX_ALIGN90_HS_CAL_RESULT_MSB_RD_LANE_2_0  TX_ALIGN90_HS_CAL_7.BF.TX_ALIGN90_HS_CAL_RESULT_MSB_RD_LANE_2_0

// 0x13	TX_ALIGN90_HS_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_HS_CAL_RESULT_LSB_RD_LANE_6_0 : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_HS_CAL_8_t;
__xdata __at( 0x1c4c ) volatile TX_ALIGN90_HS_CAL_8_t TX_ALIGN90_HS_CAL_8;
#define reg_TX_ALIGN90_HS_CAL_RESULT_LSB_RD_LANE_6_0  TX_ALIGN90_HS_CAL_8.BF.TX_ALIGN90_HS_CAL_RESULT_LSB_RD_LANE_6_0

// 0x14	TX_ALIGN90_LS_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_LS_CAL_INDV_EXT_EN_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_DIR_INV_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [5:2]     r/w 4'h2*/
		uint8_t TX_ALIGN90_LS_CAL_BYPASS_EN_LANE         : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_ALIGN90_LS_CAL_CONT_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_0_t;
__xdata __at( 0x1c50 ) volatile TX_ALIGN90_LS_CAL_0_t TX_ALIGN90_LS_CAL_0;
#define reg_TX_ALIGN90_LS_CAL_INDV_EXT_EN_LANE  TX_ALIGN90_LS_CAL_0.BF.TX_ALIGN90_LS_CAL_INDV_EXT_EN_LANE
#define reg_TX_ALIGN90_LS_CAL_DIR_INV_LANE  TX_ALIGN90_LS_CAL_0.BF.TX_ALIGN90_LS_CAL_DIR_INV_LANE
#define reg_TX_ALIGN90_LS_CAL_CONT_NUM_LANE_3_0  TX_ALIGN90_LS_CAL_0.BF.TX_ALIGN90_LS_CAL_CONT_NUM_LANE_3_0
#define reg_TX_ALIGN90_LS_CAL_BYPASS_EN_LANE  TX_ALIGN90_LS_CAL_0.BF.TX_ALIGN90_LS_CAL_BYPASS_EN_LANE
#define reg_TX_ALIGN90_LS_CAL_CONT_EN_LANE  TX_ALIGN90_LS_CAL_0.BF.TX_ALIGN90_LS_CAL_CONT_EN_LANE

// 0x15	TX_ALIGN90_LS_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_ALIGN90_LS_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_ALIGN90_LS_CAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_1_t;
__xdata __at( 0x1c54 ) volatile TX_ALIGN90_LS_CAL_1_t TX_ALIGN90_LS_CAL_1;
#define reg_TX_ALIGN90_LS_CAL_CAL_EN_EXT_LANE  TX_ALIGN90_LS_CAL_1.BF.TX_ALIGN90_LS_CAL_CAL_EN_EXT_LANE
#define reg_TX_ALIGN90_LS_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_ALIGN90_LS_CAL_1.BF.TX_ALIGN90_LS_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_ALIGN90_LS_CAL_CMP_CTRL_LANE_3_0  TX_ALIGN90_LS_CAL_1.BF.TX_ALIGN90_LS_CAL_CMP_CTRL_LANE_3_0

// 0x16	TX_ALIGN90_LS_CAL_2		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_LS_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t TX_ALIGN90_LS_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_2_t;
__xdata __at( 0x1c58 ) volatile TX_ALIGN90_LS_CAL_2_t TX_ALIGN90_LS_CAL_2;
#define reg_TX_ALIGN90_LS_CAL_UNDERFLOW_RD_LANE  TX_ALIGN90_LS_CAL_2.BF.TX_ALIGN90_LS_CAL_UNDERFLOW_RD_LANE
#define reg_TX_ALIGN90_LS_CAL_OVERFLOW_RD_LANE  TX_ALIGN90_LS_CAL_2.BF.TX_ALIGN90_LS_CAL_OVERFLOW_RD_LANE
#define reg_TX_ALIGN90_LS_CAL_TIMEOUT_RD_LANE  TX_ALIGN90_LS_CAL_2.BF.TX_ALIGN90_LS_CAL_TIMEOUT_RD_LANE
#define reg_TX_ALIGN90_LS_CAL_CAL_DONE_RD_LANE  TX_ALIGN90_LS_CAL_2.BF.TX_ALIGN90_LS_CAL_CAL_DONE_RD_LANE
#define reg_TX_ALIGN90_LS_CAL_TIMEOUT_STEPS_LANE_2_0  TX_ALIGN90_LS_CAL_2.BF.TX_ALIGN90_LS_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x17	TX_ALIGN90_LS_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_LS_CAL_VAL_MAX_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_3_t;
__xdata __at( 0x1c5c ) volatile TX_ALIGN90_LS_CAL_3_t TX_ALIGN90_LS_CAL_3;
#define reg_TX_ALIGN90_LS_CAL_VAL_MAX_LANE_6_0  TX_ALIGN90_LS_CAL_3.BF.TX_ALIGN90_LS_CAL_VAL_MAX_LANE_6_0

// 0x18	TX_ALIGN90_LS_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_LS_CAL_VAL_MIN_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_4_t;
__xdata __at( 0x1c60 ) volatile TX_ALIGN90_LS_CAL_4_t TX_ALIGN90_LS_CAL_4;
#define reg_TX_ALIGN90_LS_CAL_VAL_MIN_LANE_6_0  TX_ALIGN90_LS_CAL_4.BF.TX_ALIGN90_LS_CAL_VAL_MIN_LANE_6_0

// 0x19	TX_ALIGN90_LS_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_LS_CAL_RESULT_EXT_LANE_6_0    : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_5_t;
__xdata __at( 0x1c64 ) volatile TX_ALIGN90_LS_CAL_5_t TX_ALIGN90_LS_CAL_5;
#define reg_TX_ALIGN90_LS_CAL_RESULT_EXT_LANE_6_0  TX_ALIGN90_LS_CAL_5.BF.TX_ALIGN90_LS_CAL_RESULT_EXT_LANE_6_0

// 0x1a	TX_ALIGN90_LS_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_ALIGN90_LS_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_ALIGN90_LS_CAL_6_t;
__xdata __at( 0x1c68 ) volatile TX_ALIGN90_LS_CAL_6_t TX_ALIGN90_LS_CAL_6;
#define reg_TX_ALIGN90_LS_CAL_RESULT_RD_LANE_6_0  TX_ALIGN90_LS_CAL_6.BF.TX_ALIGN90_LS_CAL_RESULT_RD_LANE_6_0

// 0x1b	TX_DCC_A90_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A90_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_A90_CAL_DIR_INV_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC_A90_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [5:2]     r/w 4'h2*/
		uint8_t TX_DCC_A90_CAL_BYPASS_EN_LANE            : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DCC_A90_CAL_CONT_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_0_t;
__xdata __at( 0x1c6c ) volatile TX_DCC_A90_CAL_0_t TX_DCC_A90_CAL_0;
#define reg_TX_DCC_A90_CAL_INDV_EXT_EN_LANE  TX_DCC_A90_CAL_0.BF.TX_DCC_A90_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC_A90_CAL_DIR_INV_LANE  TX_DCC_A90_CAL_0.BF.TX_DCC_A90_CAL_DIR_INV_LANE
#define reg_TX_DCC_A90_CAL_CONT_NUM_LANE_3_0  TX_DCC_A90_CAL_0.BF.TX_DCC_A90_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC_A90_CAL_BYPASS_EN_LANE  TX_DCC_A90_CAL_0.BF.TX_DCC_A90_CAL_BYPASS_EN_LANE
#define reg_TX_DCC_A90_CAL_CONT_EN_LANE  TX_DCC_A90_CAL_0.BF.TX_DCC_A90_CAL_CONT_EN_LANE

// 0x1c	TX_DCC_A90_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A90_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_DCC_A90_CAL_CMP_CTRL_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_1_t;
__xdata __at( 0x1c70 ) volatile TX_DCC_A90_CAL_1_t TX_DCC_A90_CAL_1;
#define reg_TX_DCC_A90_CAL_CAL_EN_EXT_LANE  TX_DCC_A90_CAL_1.BF.TX_DCC_A90_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC_A90_CAL_1.BF.TX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC_A90_CAL_CMP_CTRL_LANE_3_0  TX_DCC_A90_CAL_1.BF.TX_DCC_A90_CAL_CMP_CTRL_LANE_3_0

// 0x1d	TX_DCC_A90_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A90_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0      : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t TX_DCC_A90_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_2_t;
__xdata __at( 0x1c74 ) volatile TX_DCC_A90_CAL_2_t TX_DCC_A90_CAL_2;
#define reg_TX_DCC_A90_CAL_CAL_DONE_RD_LANE  TX_DCC_A90_CAL_2.BF.TX_DCC_A90_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE  TX_DCC_A90_CAL_2.BF.TX_DCC_A90_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC_A90_CAL_2.BF.TX_DCC_A90_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_DCC_A90_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC_A90_CAL_2.BF.TX_DCC_A90_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x1e	TX_DCC_A90_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A90_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_A90_CAL_TIMEOUT_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_3_t;
__xdata __at( 0x1c78 ) volatile TX_DCC_A90_CAL_3_t TX_DCC_A90_CAL_3;
#define reg_TX_DCC_A90_CAL_OVERFLOW_RD_LANE  TX_DCC_A90_CAL_3.BF.TX_DCC_A90_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC_A90_CAL_TIMEOUT_RD_LANE  TX_DCC_A90_CAL_3.BF.TX_DCC_A90_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0  TX_DCC_A90_CAL_3.BF.TX_DCC_A90_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_TX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC_A90_CAL_3.BF.TX_DCC_A90_CAL_VAL_MIN_MSB_LANE_2_0

// 0x1f	TX_DCC_A90_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_A90_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_4_t;
__xdata __at( 0x1c7c ) volatile TX_DCC_A90_CAL_4_t TX_DCC_A90_CAL_4;
#define reg_TX_DCC_A90_CAL_DUMMY_CLK_RD_LANE  TX_DCC_A90_CAL_4.BF.TX_DCC_A90_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_DCC_A90_CAL_UNDERFLOW_RD_LANE  TX_DCC_A90_CAL_4.BF.TX_DCC_A90_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0  TX_DCC_A90_CAL_4.BF.TX_DCC_A90_CAL_VAL_MAX_LSB_LANE_5_0

// 0x20	TX_DCC_A90_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_5_t;
__xdata __at( 0x1c80 ) volatile TX_DCC_A90_CAL_5_t TX_DCC_A90_CAL_5;
#define reg_TX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0  TX_DCC_A90_CAL_5.BF.TX_DCC_A90_CAL_VAL_MIN_LSB_LANE_5_0

// 0x21	TX_DCC_A90_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0   : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_6_t;
__xdata __at( 0x1c84 ) volatile TX_DCC_A90_CAL_6_t TX_DCC_A90_CAL_6;
#define reg_TX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0  TX_DCC_A90_CAL_6.BF.TX_DCC_A90_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x22	TX_DCC_A90_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_7_t;
__xdata __at( 0x1c88 ) volatile TX_DCC_A90_CAL_7_t TX_DCC_A90_CAL_7;
#define reg_TX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0  TX_DCC_A90_CAL_7.BF.TX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0

// 0x23	TX_DCC_A90_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0    : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A90_CAL_8_t;
__xdata __at( 0x1c8c ) volatile TX_DCC_A90_CAL_8_t TX_DCC_A90_CAL_8;
#define reg_TX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC_A90_CAL_8.BF.TX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0

// 0x24	TX_DCC_A0_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A0_CAL_INDV_EXT_EN_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_A0_CAL_DIR_INV_LANE               : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC_A0_CAL_CONT_NUM_LANE_3_0          : 4;	/*  [5:2]     r/w 4'h2*/
		uint8_t TX_DCC_A0_CAL_BYPASS_EN_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DCC_A0_CAL_CONT_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_0_t;
__xdata __at( 0x1c90 ) volatile TX_DCC_A0_CAL_0_t TX_DCC_A0_CAL_0;
#define reg_TX_DCC_A0_CAL_INDV_EXT_EN_LANE  TX_DCC_A0_CAL_0.BF.TX_DCC_A0_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC_A0_CAL_DIR_INV_LANE  TX_DCC_A0_CAL_0.BF.TX_DCC_A0_CAL_DIR_INV_LANE
#define reg_TX_DCC_A0_CAL_CONT_NUM_LANE_3_0  TX_DCC_A0_CAL_0.BF.TX_DCC_A0_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC_A0_CAL_BYPASS_EN_LANE  TX_DCC_A0_CAL_0.BF.TX_DCC_A0_CAL_BYPASS_EN_LANE
#define reg_TX_DCC_A0_CAL_CONT_EN_LANE  TX_DCC_A0_CAL_0.BF.TX_DCC_A0_CAL_CONT_EN_LANE

// 0x25	TX_DCC_A0_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A0_CAL_CAL_EN_EXT_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_DCC_A0_CAL_CMP_CTRL_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_1_t;
__xdata __at( 0x1c94 ) volatile TX_DCC_A0_CAL_1_t TX_DCC_A0_CAL_1;
#define reg_TX_DCC_A0_CAL_CAL_EN_EXT_LANE  TX_DCC_A0_CAL_1.BF.TX_DCC_A0_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC_A0_CAL_1.BF.TX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC_A0_CAL_CMP_CTRL_LANE_3_0  TX_DCC_A0_CAL_1.BF.TX_DCC_A0_CAL_CMP_CTRL_LANE_3_0

// 0x26	TX_DCC_A0_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A0_CAL_CAL_DONE_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE         : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0       : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t TX_DCC_A0_CAL_TIMEOUT_STEPS_LANE_2_0     : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_2_t;
__xdata __at( 0x1c98 ) volatile TX_DCC_A0_CAL_2_t TX_DCC_A0_CAL_2;
#define reg_TX_DCC_A0_CAL_CAL_DONE_RD_LANE  TX_DCC_A0_CAL_2.BF.TX_DCC_A0_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE  TX_DCC_A0_CAL_2.BF.TX_DCC_A0_CAL_DUMMY_CLK_EXT_LANE
#define reg_TX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0  TX_DCC_A0_CAL_2.BF.TX_DCC_A0_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_TX_DCC_A0_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC_A0_CAL_2.BF.TX_DCC_A0_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x27	TX_DCC_A0_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A0_CAL_OVERFLOW_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_A0_CAL_TIMEOUT_RD_LANE            : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_3_t;
__xdata __at( 0x1c9c ) volatile TX_DCC_A0_CAL_3_t TX_DCC_A0_CAL_3;
#define reg_TX_DCC_A0_CAL_OVERFLOW_RD_LANE  TX_DCC_A0_CAL_3.BF.TX_DCC_A0_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC_A0_CAL_TIMEOUT_RD_LANE  TX_DCC_A0_CAL_3.BF.TX_DCC_A0_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0  TX_DCC_A0_CAL_3.BF.TX_DCC_A0_CAL_RESULT_MSB_EXT_LANE_2_0
#define reg_TX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0  TX_DCC_A0_CAL_3.BF.TX_DCC_A0_CAL_VAL_MIN_MSB_LANE_2_0

// 0x28	TX_DCC_A0_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC_A0_CAL_DUMMY_CLK_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_A0_CAL_UNDERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_4_t;
__xdata __at( 0x1ca0 ) volatile TX_DCC_A0_CAL_4_t TX_DCC_A0_CAL_4;
#define reg_TX_DCC_A0_CAL_DUMMY_CLK_RD_LANE  TX_DCC_A0_CAL_4.BF.TX_DCC_A0_CAL_DUMMY_CLK_RD_LANE
#define reg_TX_DCC_A0_CAL_UNDERFLOW_RD_LANE  TX_DCC_A0_CAL_4.BF.TX_DCC_A0_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0  TX_DCC_A0_CAL_4.BF.TX_DCC_A0_CAL_VAL_MAX_LSB_LANE_5_0

// 0x29	TX_DCC_A0_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_5_t;
__xdata __at( 0x1ca4 ) volatile TX_DCC_A0_CAL_5_t TX_DCC_A0_CAL_5;
#define reg_TX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0  TX_DCC_A0_CAL_5.BF.TX_DCC_A0_CAL_VAL_MIN_LSB_LANE_5_0

// 0x2a	TX_DCC_A0_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0    : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_6_t;
__xdata __at( 0x1ca8 ) volatile TX_DCC_A0_CAL_6_t TX_DCC_A0_CAL_6;
#define reg_TX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0  TX_DCC_A0_CAL_6.BF.TX_DCC_A0_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x2b	TX_DCC_A0_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0     : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_7_t;
__xdata __at( 0x1cac ) volatile TX_DCC_A0_CAL_7_t TX_DCC_A0_CAL_7;
#define reg_TX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0  TX_DCC_A0_CAL_7.BF.TX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0

// 0x2c	TX_DCC_A0_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_A0_CAL_8_t;
__xdata __at( 0x1cb0 ) volatile TX_DCC_A0_CAL_8_t TX_DCC_A0_CAL_8;
#define reg_TX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0  TX_DCC_A0_CAL_8.BF.TX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0

// 0x2d	TX_IMP_N_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_DIR_INV_LANE                : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_CMP_CTRL_LANE_3_0           : 4;	/*  [5:2]     r/w 4'h4*/
		uint8_t TX_IMP_N_CAL_BYPASS_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_0_t;
__xdata __at( 0x1cb4 ) volatile TX_IMP_N_CAL_0_t TX_IMP_N_CAL_0;
#define reg_TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_N_CAL_DIR_INV_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_DIR_INV_LANE
#define reg_TX_IMP_N_CAL_CMP_CTRL_LANE_3_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_N_CAL_BYPASS_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_N_CAL_SINGLE_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_SINGLE_EN_LANE

// 0x2e	TX_IMP_N_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_1_t;
__xdata __at( 0x1cb8 ) volatile TX_IMP_N_CAL_1_t TX_IMP_N_CAL_1;
#define reg_TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x2f	TX_IMP_N_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_IMP_N_CAL_RESULT_AVG_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_2_t;
__xdata __at( 0x1cbc ) volatile TX_IMP_N_CAL_2_t TX_IMP_N_CAL_2;
#define reg_TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_N_CAL_RESULT_AVG_EN_LANE  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_RESULT_AVG_EN_LANE

// 0x30	TX_IMP_N_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_3_t;
__xdata __at( 0x1cc0 ) volatile TX_IMP_N_CAL_3_t TX_IMP_N_CAL_3;
#define reg_TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x31	TX_IMP_N_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_INDV_EXT_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_4_t;
__xdata __at( 0x1cc4 ) volatile TX_IMP_N_CAL_4_t TX_IMP_N_CAL_4;
#define reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_N_CAL_VAL_MAX_LANE_6_0  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_VAL_MAX_LANE_6_0

// 0x32	TX_IMP_N_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_5_t;
__xdata __at( 0x1cc8 ) volatile TX_IMP_N_CAL_5_t TX_IMP_N_CAL_5;
#define reg_TX_IMP_N_CAL_CAL_EN_EXT_LANE  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_N_CAL_VAL_MIN_LANE_6_0  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_VAL_MIN_LANE_6_0

// 0x33	TX_IMP_N_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_6_t;
__xdata __at( 0x1ccc ) volatile TX_IMP_N_CAL_6_t TX_IMP_N_CAL_6;
#define reg_TX_IMP_N_CAL_CAL_DONE_RD_LANE  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_RESULT_EXT_LANE_6_0

// 0x34	TX_IMP_N_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_IMP_N_CAL_UNDERFLOW_RD_LANE           : 1;	/*      5       r 1'h0*/
		uint8_t TX_IMP_N_CAL_OVERFLOW_RD_LANE            : 1;	/*      6       r 1'h0*/
		uint8_t TX_IMP_N_CAL_TIMEOUT_RD_LANE             : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_7_t;
__xdata __at( 0x1cd0 ) volatile TX_IMP_N_CAL_7_t TX_IMP_N_CAL_7;
#define reg_TX_IMP_N_CAL_UNDERFLOW_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_OVERFLOW_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_TIMEOUT_RD_LANE

// 0x35	TX_IMP_N_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_N_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_8_t;
__xdata __at( 0x1cd4 ) volatile TX_IMP_N_CAL_8_t TX_IMP_N_CAL_8;
#define reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0  TX_IMP_N_CAL_8.BF.TX_IMP_N_CAL_RESULT_RD_LANE_6_0

// 0x36	TX_IMP_P_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_DIR_INV_LANE                : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_CMP_CTRL_LANE_3_0           : 4;	/*  [5:2]     r/w 4'h4*/
		uint8_t TX_IMP_P_CAL_BYPASS_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_0_t;
__xdata __at( 0x1cd8 ) volatile TX_IMP_P_CAL_0_t TX_IMP_P_CAL_0;
#define reg_TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_P_CAL_DIR_INV_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_DIR_INV_LANE
#define reg_TX_IMP_P_CAL_CMP_CTRL_LANE_3_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_P_CAL_BYPASS_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_P_CAL_SINGLE_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_SINGLE_EN_LANE

// 0x37	TX_IMP_P_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_1_t;
__xdata __at( 0x1cdc ) volatile TX_IMP_P_CAL_1_t TX_IMP_P_CAL_1;
#define reg_TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x38	TX_IMP_P_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t TX_IMP_P_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_IMP_P_CAL_RESULT_AVG_EN_LANE          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_2_t;
__xdata __at( 0x1ce0 ) volatile TX_IMP_P_CAL_2_t TX_IMP_P_CAL_2;
#define reg_TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_P_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_P_CAL_RESULT_AVG_EN_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_RESULT_AVG_EN_LANE

// 0x39	TX_IMP_P_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_3_t;
__xdata __at( 0x1ce4 ) volatile TX_IMP_P_CAL_3_t TX_IMP_P_CAL_3;
#define reg_TX_IMP_P_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x3a	TX_IMP_P_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_INDV_EXT_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_4_t;
__xdata __at( 0x1ce8 ) volatile TX_IMP_P_CAL_4_t TX_IMP_P_CAL_4;
#define reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_P_CAL_VAL_MAX_LANE_6_0  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_VAL_MAX_LANE_6_0

// 0x3b	TX_IMP_P_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_5_t;
__xdata __at( 0x1cec ) volatile TX_IMP_P_CAL_5_t TX_IMP_P_CAL_5;
#define reg_TX_IMP_P_CAL_CAL_EN_EXT_LANE  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_P_CAL_VAL_MIN_LANE_6_0  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_VAL_MIN_LANE_6_0

// 0x3c	TX_IMP_P_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_6_t;
__xdata __at( 0x1cf0 ) volatile TX_IMP_P_CAL_6_t TX_IMP_P_CAL_6;
#define reg_TX_IMP_P_CAL_CAL_DONE_RD_LANE  TX_IMP_P_CAL_6.BF.TX_IMP_P_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0  TX_IMP_P_CAL_6.BF.TX_IMP_P_CAL_RESULT_EXT_LANE_6_0

// 0x3d	TX_IMP_P_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_IMP_P_CAL_UNDERFLOW_RD_LANE           : 1;	/*      5       r 1'h0*/
		uint8_t TX_IMP_P_CAL_OVERFLOW_RD_LANE            : 1;	/*      6       r 1'h0*/
		uint8_t TX_IMP_P_CAL_TIMEOUT_RD_LANE             : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_7_t;
__xdata __at( 0x1cf4 ) volatile TX_IMP_P_CAL_7_t TX_IMP_P_CAL_7;
#define reg_TX_IMP_P_CAL_UNDERFLOW_RD_LANE  TX_IMP_P_CAL_7.BF.TX_IMP_P_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_OVERFLOW_RD_LANE  TX_IMP_P_CAL_7.BF.TX_IMP_P_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE  TX_IMP_P_CAL_7.BF.TX_IMP_P_CAL_TIMEOUT_RD_LANE

// 0x3e	TX_IMP_P_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_8_t;
__xdata __at( 0x1cf8 ) volatile TX_IMP_P_CAL_8_t TX_IMP_P_CAL_8;
#define reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0  TX_IMP_P_CAL_8.BF.TX_IMP_P_CAL_RESULT_RD_LANE_6_0

// 0x3f	TX_IMP_ICCP_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_DIR_INV_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_CMP_CTRL_LANE_3_0        : 4;	/*  [5:2]     r/w 4'h5*/
		uint8_t TX_IMP_ICCP_CAL_BYPASS_EN_LANE           : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_SINGLE_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_0_t;
__xdata __at( 0x1cfc ) volatile TX_IMP_ICCP_CAL_0_t TX_IMP_ICCP_CAL_0;
#define reg_TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_ICCP_CAL_DIR_INV_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_DIR_INV_LANE
#define reg_TX_IMP_ICCP_CAL_CMP_CTRL_LANE_3_0  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_SINGLE_EN_LANE

// 0x40	TX_IMP_ICCP_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0    : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_1_t;
__xdata __at( 0x1d00 ) volatile TX_IMP_ICCP_CAL_1_t TX_IMP_ICCP_CAL_1;
#define reg_TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x41	TX_IMP_ICCP_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0   : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_IMP_ICCP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_2_t;
__xdata __at( 0x1d04 ) volatile TX_IMP_ICCP_CAL_2_t TX_IMP_ICCP_CAL_2;
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE

// 0x42	TX_IMP_ICCP_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_3_t;
__xdata __at( 0x1d08 ) volatile TX_IMP_ICCP_CAL_3_t TX_IMP_ICCP_CAL_3;
#define reg_TX_IMP_ICCP_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_ICCP_CAL_3.BF.TX_IMP_ICCP_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x43	TX_IMP_ICCP_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE         : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_4_t;
__xdata __at( 0x1d0c ) volatile TX_IMP_ICCP_CAL_4_t TX_IMP_ICCP_CAL_4;
#define reg_TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0

// 0x44	TX_IMP_ICCP_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_5_t;
__xdata __at( 0x1d10 ) volatile TX_IMP_ICCP_CAL_5_t TX_IMP_ICCP_CAL_5;
#define reg_TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0

// 0x45	TX_IMP_ICCP_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_6_t;
__xdata __at( 0x1d14 ) volatile TX_IMP_ICCP_CAL_6_t TX_IMP_ICCP_CAL_6;
#define reg_TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0  TX_IMP_ICCP_CAL_6.BF.TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0

// 0x46	TX_IMP_ICCP_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0       : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_7_t;
__xdata __at( 0x1d18 ) volatile TX_IMP_ICCP_CAL_7_t TX_IMP_ICCP_CAL_7;
#define reg_TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0  TX_IMP_ICCP_CAL_7.BF.TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0

// 0x47	TX_IMP_ICCN_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_DIR_INV_LANE             : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_IMP_ICCN_CAL_CMP_CTRL_LANE_3_0        : 4;	/*  [5:2]     r/w 4'h6*/
		uint8_t TX_IMP_ICCN_CAL_BYPASS_EN_LANE           : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_SINGLE_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_0_t;
__xdata __at( 0x1d1c ) volatile TX_IMP_ICCN_CAL_0_t TX_IMP_ICCN_CAL_0;
#define reg_TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_ICCN_CAL_DIR_INV_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_DIR_INV_LANE
#define reg_TX_IMP_ICCN_CAL_CMP_CTRL_LANE_3_0  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_SINGLE_EN_LANE

// 0x48	TX_IMP_ICCN_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0    : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_1_t;
__xdata __at( 0x1d20 ) volatile TX_IMP_ICCN_CAL_1_t TX_IMP_ICCN_CAL_1;
#define reg_TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x49	TX_IMP_ICCN_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0   : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_IMP_ICCN_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_2_t;
__xdata __at( 0x1d24 ) volatile TX_IMP_ICCN_CAL_2_t TX_IMP_ICCN_CAL_2;
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE

// 0x4a	TX_IMP_ICCN_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_3_t;
__xdata __at( 0x1d28 ) volatile TX_IMP_ICCN_CAL_3_t TX_IMP_ICCN_CAL_3;
#define reg_TX_IMP_ICCN_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_ICCN_CAL_3.BF.TX_IMP_ICCN_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x4b	TX_IMP_ICCN_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE         : 1;	/*      2     r/w 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_4_t;
__xdata __at( 0x1d2c ) volatile TX_IMP_ICCN_CAL_4_t TX_IMP_ICCN_CAL_4;
#define reg_TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0

// 0x4c	TX_IMP_ICCN_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_5_t;
__xdata __at( 0x1d30 ) volatile TX_IMP_ICCN_CAL_5_t TX_IMP_ICCN_CAL_5;
#define reg_TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0

// 0x4d	TX_IMP_ICCN_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_6_t;
__xdata __at( 0x1d34 ) volatile TX_IMP_ICCN_CAL_6_t TX_IMP_ICCN_CAL_6;
#define reg_TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0  TX_IMP_ICCN_CAL_6.BF.TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0

// 0x4e	TX_IMP_ICCN_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0       : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_7_t;
__xdata __at( 0x1d38 ) volatile TX_IMP_ICCN_CAL_7_t TX_IMP_ICCN_CAL_7;
#define reg_TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0  TX_IMP_ICCN_CAL_7.BF.TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0

// 0x4f	TX_IMP_TEMPC_PCAL_0		TBD
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
__xdata __at( 0x1d3c ) volatile TX_IMP_TEMPC_PCAL_0_t TX_IMP_TEMPC_PCAL_0;
#define reg_TX_IMP_TEMPC_PCAL_DIR_INV_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_DIR_INV_LANE
#define reg_TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_CONT_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_CONT_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE

// 0x50	TX_IMP_TEMPC_PCAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_1_t;
__xdata __at( 0x1d40 ) volatile TX_IMP_TEMPC_PCAL_1_t TX_IMP_TEMPC_PCAL_1;
#define reg_TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_3_0  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_3_0

// 0x51	TX_IMP_TEMPC_PCAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_2_t;
__xdata __at( 0x1d44 ) volatile TX_IMP_TEMPC_PCAL_2_t TX_IMP_TEMPC_PCAL_2;
#define reg_TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x52	TX_IMP_TEMPC_PCAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_3_t;
__xdata __at( 0x1d48 ) volatile TX_IMP_TEMPC_PCAL_3_t TX_IMP_TEMPC_PCAL_3;
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE

// 0x53	TX_IMP_TEMPC_PCAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_4_t;
__xdata __at( 0x1d4c ) volatile TX_IMP_TEMPC_PCAL_4_t TX_IMP_TEMPC_PCAL_4;
#define reg_TX_IMP_TEMPC_PCAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x54	TX_IMP_TEMPC_PCAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0       : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_5_t;
__xdata __at( 0x1d50 ) volatile TX_IMP_TEMPC_PCAL_5_t TX_IMP_TEMPC_PCAL_5;
#define reg_TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0

// 0x55	TX_IMP_TEMPC_PCAL_6		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0    : 4;	/*  [5:2]     r/w 4'h8*/
		uint8_t TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE        : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_6_t;
__xdata __at( 0x1d54 ) volatile TX_IMP_TEMPC_PCAL_6_t TX_IMP_TEMPC_PCAL_6;
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE

// 0x56	TX_IMP_TEMPC_PCAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0     : 4;	/*  [5:2]       r 4'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE      : 1;	/*      6       r 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE       : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_7_t;
__xdata __at( 0x1d58 ) volatile TX_IMP_TEMPC_PCAL_7_t TX_IMP_TEMPC_PCAL_7;
#define reg_TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0  TX_IMP_TEMPC_PCAL_7.BF.TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE  TX_IMP_TEMPC_PCAL_7.BF.TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE  TX_IMP_TEMPC_PCAL_7.BF.TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE

// 0x57	TX_IMP_TEMPC_NCAL_0		TBD
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
__xdata __at( 0x1d5c ) volatile TX_IMP_TEMPC_NCAL_0_t TX_IMP_TEMPC_NCAL_0;
#define reg_TX_IMP_TEMPC_NCAL_DIR_INV_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_DIR_INV_LANE
#define reg_TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_CONT_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_CONT_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE

// 0x58	TX_IMP_TEMPC_NCAL_1		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_1_t;
__xdata __at( 0x1d60 ) volatile TX_IMP_TEMPC_NCAL_1_t TX_IMP_TEMPC_NCAL_1;
#define reg_TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_3_0  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_3_0

// 0x59	TX_IMP_TEMPC_NCAL_2		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_2_t;
__xdata __at( 0x1d64 ) volatile TX_IMP_TEMPC_NCAL_2_t TX_IMP_TEMPC_NCAL_2;
#define reg_TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x5a	TX_IMP_TEMPC_NCAL_3		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_NCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_3_t;
__xdata __at( 0x1d68 ) volatile TX_IMP_TEMPC_NCAL_3_t TX_IMP_TEMPC_NCAL_3;
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE

// 0x5b	TX_IMP_TEMPC_NCAL_4		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_4_t;
__xdata __at( 0x1d6c ) volatile TX_IMP_TEMPC_NCAL_4_t TX_IMP_TEMPC_NCAL_4;
#define reg_TX_IMP_TEMPC_NCAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x5c	TX_IMP_TEMPC_NCAL_5		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0       : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_5_t;
__xdata __at( 0x1d70 ) volatile TX_IMP_TEMPC_NCAL_5_t TX_IMP_TEMPC_NCAL_5;
#define reg_TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0

// 0x5d	TX_IMP_TEMPC_NCAL_6		TBD
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE        : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0    : 4;	/*  [5:2]     r/w 4'h8*/
		uint8_t TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE        : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_6_t;
__xdata __at( 0x1d74 ) volatile TX_IMP_TEMPC_NCAL_6_t TX_IMP_TEMPC_NCAL_6;
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE

// 0x5e	TX_IMP_TEMPC_NCAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0     : 4;	/*  [5:2]       r 4'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE      : 1;	/*      6       r 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE       : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_7_t;
__xdata __at( 0x1d78 ) volatile TX_IMP_TEMPC_NCAL_7_t TX_IMP_TEMPC_NCAL_7;
#define reg_TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0  TX_IMP_TEMPC_NCAL_7.BF.TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE  TX_IMP_TEMPC_NCAL_7.BF.TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE  TX_IMP_TEMPC_NCAL_7.BF.TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE

#endif
