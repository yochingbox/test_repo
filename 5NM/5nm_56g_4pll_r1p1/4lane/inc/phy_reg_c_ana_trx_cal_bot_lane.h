#ifndef PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H



// 0x0	TX_ALIGN90_DCC_IMP_0		tx_align90_dcc_imp_0
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
__xdata __at( 0x1800 ) volatile TX_ALIGN90_DCC_IMP_0_t TX_ALIGN90_DCC_IMP_0;
#define reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_TOP_START_LANE
#define reg_TX_ALIGN90_DCC_IMP_UPDN_RD_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_UPDN_RD_LANE
#define reg_TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE
#define reg_TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_3_0  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_CMP_CTRL_EXT_LANE_3_0
#define reg_TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE  TX_ALIGN90_DCC_IMP_0.BF.TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE

// 0x1	TX_ALIGN90_DCC_IMP_1		tx_align90_dcc_imp_1
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
__xdata __at( 0x1804 ) volatile TX_ALIGN90_DCC_IMP_1_t TX_ALIGN90_DCC_IMP_1;
#define reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE
#define reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_DONE_LANE
#define reg_TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TESTBUS_CORE_SEL_LANE_2_0
#define reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE  TX_ALIGN90_DCC_IMP_1.BF.TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE

// 0x2	TX_E2C_DCC_CAL_0		tx_e2c_dcc_cal_0
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h1*/
		uint8_t TX_E2C_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t TX_E2C_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_E2C_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_0_t;
__xdata __at( 0x1808 ) volatile TX_E2C_DCC_CAL_0_t TX_E2C_DCC_CAL_0;
#define reg_TX_E2C_DCC_CAL_DIR_INV_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_DIR_INV_LANE
#define reg_TX_E2C_DCC_CAL_CONT_NUM_LANE_3_0  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_BYPASS_EN_LANE
#define reg_TX_E2C_DCC_CAL_CONT_EN_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_CONT_EN_LANE
#define reg_TX_E2C_DCC_CAL_SINGLE_EN_LANE  TX_E2C_DCC_CAL_0.BF.TX_E2C_DCC_CAL_SINGLE_EN_LANE

// 0x3	TX_E2C_DCC_CAL_1		tx_e2c_dcc_cal_1
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE    : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t TX_E2C_DCC_CAL_CMP_CTRL_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_1_t;
__xdata __at( 0x180c ) volatile TX_E2C_DCC_CAL_1_t TX_E2C_DCC_CAL_1;
#define reg_TX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE  TX_E2C_DCC_CAL_1.BF.TX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_E2C_DCC_CAL_1.BF.TX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_E2C_DCC_CAL_CMP_CTRL_LANE_3_0  TX_E2C_DCC_CAL_1.BF.TX_E2C_DCC_CAL_CMP_CTRL_LANE_3_0

// 0x4	TX_E2C_DCC_CAL_2		tx_e2c_dcc_cal_2
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_2_t;
__xdata __at( 0x1810 ) volatile TX_E2C_DCC_CAL_2_t TX_E2C_DCC_CAL_2;
#define reg_TX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_E2C_DCC_CAL_2.BF.TX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x5	TX_E2C_DCC_CAL_3		tx_e2c_dcc_cal_3
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [3:1]     r/w 3'h4*/
		uint8_t TX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [6:4]     r/w 3'h1*/
		uint8_t TX_E2C_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_3_t;
__xdata __at( 0x1814 ) volatile TX_E2C_DCC_CAL_3_t TX_E2C_DCC_CAL_3;
#define reg_TX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE  TX_E2C_DCC_CAL_3.BF.TX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  TX_E2C_DCC_CAL_3.BF.TX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_E2C_DCC_CAL_3.BF.TX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_E2C_DCC_CAL_RESULT_AVG_EN_LANE  TX_E2C_DCC_CAL_3.BF.TX_E2C_DCC_CAL_RESULT_AVG_EN_LANE

// 0x6	TX_E2C_DCC_CAL_4		tx_e2c_dcc_cal_4
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_4_t;
__xdata __at( 0x1818 ) volatile TX_E2C_DCC_CAL_4_t TX_E2C_DCC_CAL_4;
#define reg_TX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_E2C_DCC_CAL_4.BF.TX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x7	TX_E2C_DCC_CAL_5		tx_e2c_dcc_cal_5
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_VAL_MAX_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_5_t;
__xdata __at( 0x181c ) volatile TX_E2C_DCC_CAL_5_t TX_E2C_DCC_CAL_5;
#define reg_TX_E2C_DCC_CAL_INDV_EXT_EN_LANE  TX_E2C_DCC_CAL_5.BF.TX_E2C_DCC_CAL_INDV_EXT_EN_LANE
#define reg_TX_E2C_DCC_CAL_VAL_MAX_LANE_6_0  TX_E2C_DCC_CAL_5.BF.TX_E2C_DCC_CAL_VAL_MAX_LANE_6_0

// 0x8	TX_E2C_DCC_CAL_6		tx_e2c_dcc_cal_6
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_CAL_VAL_MIN_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_6_t;
__xdata __at( 0x1820 ) volatile TX_E2C_DCC_CAL_6_t TX_E2C_DCC_CAL_6;
#define reg_TX_E2C_DCC_CAL_CAL_EN_EXT_LANE  TX_E2C_DCC_CAL_6.BF.TX_E2C_DCC_CAL_CAL_EN_EXT_LANE
#define reg_TX_E2C_DCC_CAL_VAL_MIN_LANE_6_0  TX_E2C_DCC_CAL_6.BF.TX_E2C_DCC_CAL_VAL_MIN_LANE_6_0

// 0x9	TX_E2C_DCC_CAL_7		tx_e2c_dcc_cal_7
typedef union {
	struct {
		uint8_t TX_E2C_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t TX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_7_t;
__xdata __at( 0x1824 ) volatile TX_E2C_DCC_CAL_7_t TX_E2C_DCC_CAL_7;
#define reg_TX_E2C_DCC_CAL_CAL_DONE_RD_LANE  TX_E2C_DCC_CAL_7.BF.TX_E2C_DCC_CAL_CAL_DONE_RD_LANE
#define reg_TX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0  TX_E2C_DCC_CAL_7.BF.TX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0

// 0xa	TX_E2C_DCC_CAL_8		tx_e2c_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t TX_E2C_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      5       r 1'h0*/
		uint8_t TX_E2C_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      6       r 1'h0*/
		uint8_t TX_E2C_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_8_t;
__xdata __at( 0x1828 ) volatile TX_E2C_DCC_CAL_8_t TX_E2C_DCC_CAL_8;
#define reg_TX_E2C_DCC_CAL_UNDERFLOW_RD_LANE  TX_E2C_DCC_CAL_8.BF.TX_E2C_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_TX_E2C_DCC_CAL_OVERFLOW_RD_LANE  TX_E2C_DCC_CAL_8.BF.TX_E2C_DCC_CAL_OVERFLOW_RD_LANE
#define reg_TX_E2C_DCC_CAL_TIMEOUT_RD_LANE  TX_E2C_DCC_CAL_8.BF.TX_E2C_DCC_CAL_TIMEOUT_RD_LANE

// 0xb	TX_E2C_DCC_CAL_9		tx_e2c_dcc_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_CAL_RESULT_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_CAL_9_t;
__xdata __at( 0x182c ) volatile TX_E2C_DCC_CAL_9_t TX_E2C_DCC_CAL_9;
#define reg_TX_E2C_DCC_CAL_RESULT_RD_LANE_6_0  TX_E2C_DCC_CAL_9.BF.TX_E2C_DCC_CAL_RESULT_RD_LANE_6_0

// 0xc	TX_E2C_DCC_LS_CAL_0		tx_e2c_dcc_ls_cal_0
typedef union {
	struct {
		uint8_t TX_E2C_DCC_LS_CAL_INDV_EXT_EN_LANE       : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_LS_CAL_DIR_INV_LANE           : 1;	/*      1     r/w 1'h1*/
		uint8_t TX_E2C_DCC_LS_CAL_CONT_NUM_LANE_3_0      : 4;	/*  [5:2]     r/w 4'h2*/
		uint8_t TX_E2C_DCC_LS_CAL_BYPASS_EN_LANE         : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_E2C_DCC_LS_CAL_CONT_EN_LANE           : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_0_t;
__xdata __at( 0x1830 ) volatile TX_E2C_DCC_LS_CAL_0_t TX_E2C_DCC_LS_CAL_0;
#define reg_TX_E2C_DCC_LS_CAL_INDV_EXT_EN_LANE  TX_E2C_DCC_LS_CAL_0.BF.TX_E2C_DCC_LS_CAL_INDV_EXT_EN_LANE
#define reg_TX_E2C_DCC_LS_CAL_DIR_INV_LANE  TX_E2C_DCC_LS_CAL_0.BF.TX_E2C_DCC_LS_CAL_DIR_INV_LANE
#define reg_TX_E2C_DCC_LS_CAL_CONT_NUM_LANE_3_0  TX_E2C_DCC_LS_CAL_0.BF.TX_E2C_DCC_LS_CAL_CONT_NUM_LANE_3_0
#define reg_TX_E2C_DCC_LS_CAL_BYPASS_EN_LANE  TX_E2C_DCC_LS_CAL_0.BF.TX_E2C_DCC_LS_CAL_BYPASS_EN_LANE
#define reg_TX_E2C_DCC_LS_CAL_CONT_EN_LANE  TX_E2C_DCC_LS_CAL_0.BF.TX_E2C_DCC_LS_CAL_CONT_EN_LANE

// 0xd	TX_E2C_DCC_LS_CAL_1		tx_e2c_dcc_ls_cal_1
typedef union {
	struct {
		uint8_t TX_E2C_DCC_LS_CAL_CAL_EN_EXT_LANE        : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_E2C_DCC_LS_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h2*/
		uint8_t TX_E2C_DCC_LS_CAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_1_t;
__xdata __at( 0x1834 ) volatile TX_E2C_DCC_LS_CAL_1_t TX_E2C_DCC_LS_CAL_1;
#define reg_TX_E2C_DCC_LS_CAL_CAL_EN_EXT_LANE  TX_E2C_DCC_LS_CAL_1.BF.TX_E2C_DCC_LS_CAL_CAL_EN_EXT_LANE
#define reg_TX_E2C_DCC_LS_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_E2C_DCC_LS_CAL_1.BF.TX_E2C_DCC_LS_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_TX_E2C_DCC_LS_CAL_CMP_CTRL_LANE_3_0  TX_E2C_DCC_LS_CAL_1.BF.TX_E2C_DCC_LS_CAL_CMP_CTRL_LANE_3_0

// 0xe	TX_E2C_DCC_LS_CAL_2		tx_e2c_dcc_ls_cal_2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_LS_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t TX_E2C_DCC_LS_CAL_OVERFLOW_RD_LANE       : 1;	/*      2       r 1'h0*/
		uint8_t TX_E2C_DCC_LS_CAL_TIMEOUT_RD_LANE        : 1;	/*      3       r 1'h0*/
		uint8_t TX_E2C_DCC_LS_CAL_CAL_DONE_RD_LANE       : 1;	/*      4       r 1'h0*/
		uint8_t TX_E2C_DCC_LS_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_2_t;
__xdata __at( 0x1838 ) volatile TX_E2C_DCC_LS_CAL_2_t TX_E2C_DCC_LS_CAL_2;
#define reg_TX_E2C_DCC_LS_CAL_UNDERFLOW_RD_LANE  TX_E2C_DCC_LS_CAL_2.BF.TX_E2C_DCC_LS_CAL_UNDERFLOW_RD_LANE
#define reg_TX_E2C_DCC_LS_CAL_OVERFLOW_RD_LANE  TX_E2C_DCC_LS_CAL_2.BF.TX_E2C_DCC_LS_CAL_OVERFLOW_RD_LANE
#define reg_TX_E2C_DCC_LS_CAL_TIMEOUT_RD_LANE  TX_E2C_DCC_LS_CAL_2.BF.TX_E2C_DCC_LS_CAL_TIMEOUT_RD_LANE
#define reg_TX_E2C_DCC_LS_CAL_CAL_DONE_RD_LANE  TX_E2C_DCC_LS_CAL_2.BF.TX_E2C_DCC_LS_CAL_CAL_DONE_RD_LANE
#define reg_TX_E2C_DCC_LS_CAL_TIMEOUT_STEPS_LANE_2_0  TX_E2C_DCC_LS_CAL_2.BF.TX_E2C_DCC_LS_CAL_TIMEOUT_STEPS_LANE_2_0

// 0xf	TX_E2C_DCC_LS_CAL_3		tx_e2c_dcc_ls_cal_3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_LS_CAL_VAL_MAX_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_3_t;
__xdata __at( 0x183c ) volatile TX_E2C_DCC_LS_CAL_3_t TX_E2C_DCC_LS_CAL_3;
#define reg_TX_E2C_DCC_LS_CAL_VAL_MAX_LANE_6_0  TX_E2C_DCC_LS_CAL_3.BF.TX_E2C_DCC_LS_CAL_VAL_MAX_LANE_6_0

// 0x10	TX_E2C_DCC_LS_CAL_4		tx_e2c_dcc_ls_cal_4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_LS_CAL_VAL_MIN_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_4_t;
__xdata __at( 0x1840 ) volatile TX_E2C_DCC_LS_CAL_4_t TX_E2C_DCC_LS_CAL_4;
#define reg_TX_E2C_DCC_LS_CAL_VAL_MIN_LANE_6_0  TX_E2C_DCC_LS_CAL_4.BF.TX_E2C_DCC_LS_CAL_VAL_MIN_LANE_6_0

// 0x11	TX_E2C_DCC_LS_CAL_5		tx_e2c_dcc_ls_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_LS_CAL_RESULT_EXT_LANE_6_0    : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_5_t;
__xdata __at( 0x1844 ) volatile TX_E2C_DCC_LS_CAL_5_t TX_E2C_DCC_LS_CAL_5;
#define reg_TX_E2C_DCC_LS_CAL_RESULT_EXT_LANE_6_0  TX_E2C_DCC_LS_CAL_5.BF.TX_E2C_DCC_LS_CAL_RESULT_EXT_LANE_6_0

// 0x12	TX_E2C_DCC_LS_CAL_6		tx_e2c_dcc_ls_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_E2C_DCC_LS_CAL_RESULT_RD_LANE_6_0     : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_E2C_DCC_LS_CAL_6_t;
__xdata __at( 0x1848 ) volatile TX_E2C_DCC_LS_CAL_6_t TX_E2C_DCC_LS_CAL_6;
#define reg_TX_E2C_DCC_LS_CAL_RESULT_RD_LANE_6_0  TX_E2C_DCC_LS_CAL_6.BF.TX_E2C_DCC_LS_CAL_RESULT_RD_LANE_6_0

// 0x13	TX_IMP_N_CAL_0		tx_imp_n_cal_0
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
__xdata __at( 0x184c ) volatile TX_IMP_N_CAL_0_t TX_IMP_N_CAL_0;
#define reg_TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_N_CAL_DIR_INV_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_DIR_INV_LANE
#define reg_TX_IMP_N_CAL_CMP_CTRL_LANE_3_0  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_N_CAL_BYPASS_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_N_CAL_SINGLE_EN_LANE  TX_IMP_N_CAL_0.BF.TX_IMP_N_CAL_SINGLE_EN_LANE

// 0x14	TX_IMP_N_CAL_1		tx_imp_n_cal_1
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_1_t;
__xdata __at( 0x1850 ) volatile TX_IMP_N_CAL_1_t TX_IMP_N_CAL_1;
#define reg_TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_N_CAL_1.BF.TX_IMP_N_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x15	TX_IMP_N_CAL_2		tx_imp_n_cal_2
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
__xdata __at( 0x1854 ) volatile TX_IMP_N_CAL_2_t TX_IMP_N_CAL_2;
#define reg_TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_N_CAL_RESULT_AVG_EN_LANE  TX_IMP_N_CAL_2.BF.TX_IMP_N_CAL_RESULT_AVG_EN_LANE

// 0x16	TX_IMP_N_CAL_3		tx_imp_n_cal_3
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_3_t;
__xdata __at( 0x1858 ) volatile TX_IMP_N_CAL_3_t TX_IMP_N_CAL_3;
#define reg_TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_N_CAL_3.BF.TX_IMP_N_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x17	TX_IMP_N_CAL_4		tx_imp_n_cal_4
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_INDV_EXT_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_4_t;
__xdata __at( 0x185c ) volatile TX_IMP_N_CAL_4_t TX_IMP_N_CAL_4;
#define reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_N_CAL_VAL_MAX_LANE_6_0  TX_IMP_N_CAL_4.BF.TX_IMP_N_CAL_VAL_MAX_LANE_6_0

// 0x18	TX_IMP_N_CAL_5		tx_imp_n_cal_5
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_N_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_5_t;
__xdata __at( 0x1860 ) volatile TX_IMP_N_CAL_5_t TX_IMP_N_CAL_5;
#define reg_TX_IMP_N_CAL_CAL_EN_EXT_LANE  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_N_CAL_VAL_MIN_LANE_6_0  TX_IMP_N_CAL_5.BF.TX_IMP_N_CAL_VAL_MIN_LANE_6_0

// 0x19	TX_IMP_N_CAL_6		tx_imp_n_cal_6
typedef union {
	struct {
		uint8_t TX_IMP_N_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_N_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_6_t;
__xdata __at( 0x1864 ) volatile TX_IMP_N_CAL_6_t TX_IMP_N_CAL_6;
#define reg_TX_IMP_N_CAL_CAL_DONE_RD_LANE  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0  TX_IMP_N_CAL_6.BF.TX_IMP_N_CAL_RESULT_EXT_LANE_6_0

// 0x1a	TX_IMP_N_CAL_7		tx_imp_n_cal_7
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
__xdata __at( 0x1868 ) volatile TX_IMP_N_CAL_7_t TX_IMP_N_CAL_7;
#define reg_TX_IMP_N_CAL_UNDERFLOW_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_OVERFLOW_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE  TX_IMP_N_CAL_7.BF.TX_IMP_N_CAL_TIMEOUT_RD_LANE

// 0x1b	TX_IMP_N_CAL_8		tx_imp_n_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_N_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_N_CAL_8_t;
__xdata __at( 0x186c ) volatile TX_IMP_N_CAL_8_t TX_IMP_N_CAL_8;
#define reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0  TX_IMP_N_CAL_8.BF.TX_IMP_N_CAL_RESULT_RD_LANE_6_0

// 0x1c	TX_IMP_P_CAL_0		tx_imp_p_cal_0
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
__xdata __at( 0x1870 ) volatile TX_IMP_P_CAL_0_t TX_IMP_P_CAL_0;
#define reg_TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_P_CAL_DIR_INV_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_DIR_INV_LANE
#define reg_TX_IMP_P_CAL_CMP_CTRL_LANE_3_0  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_P_CAL_BYPASS_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_P_CAL_SINGLE_EN_LANE  TX_IMP_P_CAL_0.BF.TX_IMP_P_CAL_SINGLE_EN_LANE

// 0x1d	TX_IMP_P_CAL_1		tx_imp_p_cal_1
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_1_t;
__xdata __at( 0x1874 ) volatile TX_IMP_P_CAL_1_t TX_IMP_P_CAL_1;
#define reg_TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_P_CAL_1.BF.TX_IMP_P_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x1e	TX_IMP_P_CAL_2		tx_imp_p_cal_2
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
__xdata __at( 0x1878 ) volatile TX_IMP_P_CAL_2_t TX_IMP_P_CAL_2;
#define reg_TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_P_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_P_CAL_RESULT_AVG_EN_LANE  TX_IMP_P_CAL_2.BF.TX_IMP_P_CAL_RESULT_AVG_EN_LANE

// 0x1f	TX_IMP_P_CAL_3		tx_imp_p_cal_3
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_3_t;
__xdata __at( 0x187c ) volatile TX_IMP_P_CAL_3_t TX_IMP_P_CAL_3;
#define reg_TX_IMP_P_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_P_CAL_3.BF.TX_IMP_P_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x20	TX_IMP_P_CAL_4		tx_imp_p_cal_4
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_INDV_EXT_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MAX_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_4_t;
__xdata __at( 0x1880 ) volatile TX_IMP_P_CAL_4_t TX_IMP_P_CAL_4;
#define reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_P_CAL_VAL_MAX_LANE_6_0  TX_IMP_P_CAL_4.BF.TX_IMP_P_CAL_VAL_MAX_LANE_6_0

// 0x21	TX_IMP_P_CAL_5		tx_imp_p_cal_5
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_CAL_EN_EXT_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_P_CAL_VAL_MIN_LANE_6_0            : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_5_t;
__xdata __at( 0x1884 ) volatile TX_IMP_P_CAL_5_t TX_IMP_P_CAL_5;
#define reg_TX_IMP_P_CAL_CAL_EN_EXT_LANE  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_P_CAL_VAL_MIN_LANE_6_0  TX_IMP_P_CAL_5.BF.TX_IMP_P_CAL_VAL_MIN_LANE_6_0

// 0x22	TX_IMP_P_CAL_6		tx_imp_p_cal_6
typedef union {
	struct {
		uint8_t TX_IMP_P_CAL_CAL_DONE_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t TX_IMP_P_CAL_RESULT_EXT_LANE_6_0         : 7;	/*  [7:1]     r/w 7'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_6_t;
__xdata __at( 0x1888 ) volatile TX_IMP_P_CAL_6_t TX_IMP_P_CAL_6;
#define reg_TX_IMP_P_CAL_CAL_DONE_RD_LANE  TX_IMP_P_CAL_6.BF.TX_IMP_P_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0  TX_IMP_P_CAL_6.BF.TX_IMP_P_CAL_RESULT_EXT_LANE_6_0

// 0x23	TX_IMP_P_CAL_7		tx_imp_p_cal_7
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
__xdata __at( 0x188c ) volatile TX_IMP_P_CAL_7_t TX_IMP_P_CAL_7;
#define reg_TX_IMP_P_CAL_UNDERFLOW_RD_LANE  TX_IMP_P_CAL_7.BF.TX_IMP_P_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_OVERFLOW_RD_LANE  TX_IMP_P_CAL_7.BF.TX_IMP_P_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE  TX_IMP_P_CAL_7.BF.TX_IMP_P_CAL_TIMEOUT_RD_LANE

// 0x24	TX_IMP_P_CAL_8		tx_imp_p_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_IMP_P_CAL_RESULT_RD_LANE_6_0          : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_P_CAL_8_t;
__xdata __at( 0x1890 ) volatile TX_IMP_P_CAL_8_t TX_IMP_P_CAL_8;
#define reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0  TX_IMP_P_CAL_8.BF.TX_IMP_P_CAL_RESULT_RD_LANE_6_0

// 0x25	TX_IMP_ICCP_CAL_0		tx_imp_iccp_cal_0
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
__xdata __at( 0x1894 ) volatile TX_IMP_ICCP_CAL_0_t TX_IMP_ICCP_CAL_0;
#define reg_TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_ICCP_CAL_DIR_INV_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_DIR_INV_LANE
#define reg_TX_IMP_ICCP_CAL_CMP_CTRL_LANE_3_0  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE  TX_IMP_ICCP_CAL_0.BF.TX_IMP_ICCP_CAL_SINGLE_EN_LANE

// 0x26	TX_IMP_ICCP_CAL_1		tx_imp_iccp_cal_1
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0    : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_1_t;
__xdata __at( 0x1898 ) volatile TX_IMP_ICCP_CAL_1_t TX_IMP_ICCP_CAL_1;
#define reg_TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_ICCP_CAL_1.BF.TX_IMP_ICCP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x27	TX_IMP_ICCP_CAL_2		tx_imp_iccp_cal_2
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
__xdata __at( 0x189c ) volatile TX_IMP_ICCP_CAL_2_t TX_IMP_ICCP_CAL_2;
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE  TX_IMP_ICCP_CAL_2.BF.TX_IMP_ICCP_CAL_RESULT_AVG_EN_LANE

// 0x28	TX_IMP_ICCP_CAL_3		tx_imp_iccp_cal_3
typedef union {
	struct {
		uint8_t TX_IMP_ICCP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_3_t;
__xdata __at( 0x18a0 ) volatile TX_IMP_ICCP_CAL_3_t TX_IMP_ICCP_CAL_3;
#define reg_TX_IMP_ICCP_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_ICCP_CAL_3.BF.TX_IMP_ICCP_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x29	TX_IMP_ICCP_CAL_4		tx_imp_iccp_cal_4
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
__xdata __at( 0x18a4 ) volatile TX_IMP_ICCP_CAL_4_t TX_IMP_ICCP_CAL_4;
#define reg_TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0  TX_IMP_ICCP_CAL_4.BF.TX_IMP_ICCP_CAL_VAL_MAX_LANE_4_0

// 0x2a	TX_IMP_ICCP_CAL_5		tx_imp_iccp_cal_5
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
__xdata __at( 0x18a8 ) volatile TX_IMP_ICCP_CAL_5_t TX_IMP_ICCP_CAL_5;
#define reg_TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0  TX_IMP_ICCP_CAL_5.BF.TX_IMP_ICCP_CAL_VAL_MIN_LANE_4_0

// 0x2b	TX_IMP_ICCP_CAL_6		tx_imp_iccp_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_6_t;
__xdata __at( 0x18ac ) volatile TX_IMP_ICCP_CAL_6_t TX_IMP_ICCP_CAL_6;
#define reg_TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0  TX_IMP_ICCP_CAL_6.BF.TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0

// 0x2c	TX_IMP_ICCP_CAL_7		tx_imp_iccp_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0       : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCP_CAL_7_t;
__xdata __at( 0x18b0 ) volatile TX_IMP_ICCP_CAL_7_t TX_IMP_ICCP_CAL_7;
#define reg_TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0  TX_IMP_ICCP_CAL_7.BF.TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0

// 0x2d	TX_IMP_ICCN_CAL_0		tx_imp_iccn_cal_0
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
__xdata __at( 0x18b4 ) volatile TX_IMP_ICCN_CAL_0_t TX_IMP_ICCN_CAL_0;
#define reg_TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_ICCN_CAL_DIR_INV_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_DIR_INV_LANE
#define reg_TX_IMP_ICCN_CAL_CMP_CTRL_LANE_3_0  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_CMP_CTRL_LANE_3_0
#define reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_BYPASS_EN_LANE
#define reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE  TX_IMP_ICCN_CAL_0.BF.TX_IMP_ICCN_CAL_SINGLE_EN_LANE

// 0x2e	TX_IMP_ICCN_CAL_1		tx_imp_iccn_cal_1
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0    : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_1_t;
__xdata __at( 0x18b8 ) volatile TX_IMP_ICCN_CAL_1_t TX_IMP_ICCN_CAL_1;
#define reg_TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_ICCN_CAL_1.BF.TX_IMP_ICCN_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x2f	TX_IMP_ICCN_CAL_2		tx_imp_iccn_cal_2
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
__xdata __at( 0x18bc ) volatile TX_IMP_ICCN_CAL_2_t TX_IMP_ICCN_CAL_2;
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE  TX_IMP_ICCN_CAL_2.BF.TX_IMP_ICCN_CAL_RESULT_AVG_EN_LANE

// 0x30	TX_IMP_ICCN_CAL_3		tx_imp_iccn_cal_3
typedef union {
	struct {
		uint8_t TX_IMP_ICCN_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_3_t;
__xdata __at( 0x18c0 ) volatile TX_IMP_ICCN_CAL_3_t TX_IMP_ICCN_CAL_3;
#define reg_TX_IMP_ICCN_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_ICCN_CAL_3.BF.TX_IMP_ICCN_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x31	TX_IMP_ICCN_CAL_4		tx_imp_iccn_cal_4
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
__xdata __at( 0x18c4 ) volatile TX_IMP_ICCN_CAL_4_t TX_IMP_ICCN_CAL_4;
#define reg_TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE
#define reg_TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0  TX_IMP_ICCN_CAL_4.BF.TX_IMP_ICCN_CAL_VAL_MAX_LANE_4_0

// 0x32	TX_IMP_ICCN_CAL_5		tx_imp_iccn_cal_5
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
__xdata __at( 0x18c8 ) volatile TX_IMP_ICCN_CAL_5_t TX_IMP_ICCN_CAL_5;
#define reg_TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_OVERFLOW_RD_LANE
#define reg_TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0  TX_IMP_ICCN_CAL_5.BF.TX_IMP_ICCN_CAL_VAL_MIN_LANE_4_0

// 0x33	TX_IMP_ICCN_CAL_6		tx_imp_iccn_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0      : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_6_t;
__xdata __at( 0x18cc ) volatile TX_IMP_ICCN_CAL_6_t TX_IMP_ICCN_CAL_6;
#define reg_TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0  TX_IMP_ICCN_CAL_6.BF.TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0

// 0x34	TX_IMP_ICCN_CAL_7		tx_imp_iccn_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0       : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_ICCN_CAL_7_t;
__xdata __at( 0x18d0 ) volatile TX_IMP_ICCN_CAL_7_t TX_IMP_ICCN_CAL_7;
#define reg_TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0  TX_IMP_ICCN_CAL_7.BF.TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0

// 0x35	TX_IMP_TEMPC_PCAL_0		tx_imp_tempc_pcal_0
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
__xdata __at( 0x18d4 ) volatile TX_IMP_TEMPC_PCAL_0_t TX_IMP_TEMPC_PCAL_0;
#define reg_TX_IMP_TEMPC_PCAL_DIR_INV_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_DIR_INV_LANE
#define reg_TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_CONT_NUM_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_CONT_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_CONT_EN_LANE
#define reg_TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE  TX_IMP_TEMPC_PCAL_0.BF.TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE

// 0x36	TX_IMP_TEMPC_PCAL_1		tx_imp_tempc_pcal_1
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_1_t;
__xdata __at( 0x18d8 ) volatile TX_IMP_TEMPC_PCAL_1_t TX_IMP_TEMPC_PCAL_1;
#define reg_TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_3_0  TX_IMP_TEMPC_PCAL_1.BF.TX_IMP_TEMPC_PCAL_CMP_CTRL_LANE_3_0

// 0x37	TX_IMP_TEMPC_PCAL_2		tx_imp_tempc_pcal_2
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_2_t;
__xdata __at( 0x18dc ) volatile TX_IMP_TEMPC_PCAL_2_t TX_IMP_TEMPC_PCAL_2;
#define reg_TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_PCAL_2.BF.TX_IMP_TEMPC_PCAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x38	TX_IMP_TEMPC_PCAL_3		tx_imp_tempc_pcal_3
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
__xdata __at( 0x18e0 ) volatile TX_IMP_TEMPC_PCAL_3_t TX_IMP_TEMPC_PCAL_3;
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE  TX_IMP_TEMPC_PCAL_3.BF.TX_IMP_TEMPC_PCAL_RESULT_AVG_EN_LANE

// 0x39	TX_IMP_TEMPC_PCAL_4		tx_imp_tempc_pcal_4
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_4_t;
__xdata __at( 0x18e4 ) volatile TX_IMP_TEMPC_PCAL_4_t TX_IMP_TEMPC_PCAL_4;
#define reg_TX_IMP_TEMPC_PCAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_TEMPC_PCAL_4.BF.TX_IMP_TEMPC_PCAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x3a	TX_IMP_TEMPC_PCAL_5		tx_imp_tempc_pcal_5
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0       : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_PCAL_5_t;
__xdata __at( 0x18e8 ) volatile TX_IMP_TEMPC_PCAL_5_t TX_IMP_TEMPC_PCAL_5;
#define reg_TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_VAL_MIN_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0  TX_IMP_TEMPC_PCAL_5.BF.TX_IMP_TEMPC_PCAL_VAL_MAX_LANE_3_0

// 0x3b	TX_IMP_TEMPC_PCAL_6		tx_imp_tempc_pcal_6
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
__xdata __at( 0x18ec ) volatile TX_IMP_TEMPC_PCAL_6_t TX_IMP_TEMPC_PCAL_6;
#define reg_TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_RESULT_EXT_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE  TX_IMP_TEMPC_PCAL_6.BF.TX_IMP_TEMPC_PCAL_INDV_EXT_EN_LANE

// 0x3c	TX_IMP_TEMPC_PCAL_7		tx_imp_tempc_pcal_7
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
__xdata __at( 0x18f0 ) volatile TX_IMP_TEMPC_PCAL_7_t TX_IMP_TEMPC_PCAL_7;
#define reg_TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0  TX_IMP_TEMPC_PCAL_7.BF.TX_IMP_TEMPC_PCAL_RESULT_RD_LANE_3_0
#define reg_TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE  TX_IMP_TEMPC_PCAL_7.BF.TX_IMP_TEMPC_PCAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE  TX_IMP_TEMPC_PCAL_7.BF.TX_IMP_TEMPC_PCAL_OVERFLOW_RD_LANE

// 0x3d	TX_IMP_TEMPC_NCAL_0		tx_imp_tempc_ncal_0
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
__xdata __at( 0x18f4 ) volatile TX_IMP_TEMPC_NCAL_0_t TX_IMP_TEMPC_NCAL_0;
#define reg_TX_IMP_TEMPC_NCAL_DIR_INV_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_DIR_INV_LANE
#define reg_TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_CONT_NUM_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_CONT_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_CONT_EN_LANE
#define reg_TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE  TX_IMP_TEMPC_NCAL_0.BF.TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE

// 0x3e	TX_IMP_TEMPC_NCAL_1		tx_imp_tempc_ncal_1
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_1_t;
__xdata __at( 0x18f8 ) volatile TX_IMP_TEMPC_NCAL_1_t TX_IMP_TEMPC_NCAL_1;
#define reg_TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_3_0  TX_IMP_TEMPC_NCAL_1.BF.TX_IMP_TEMPC_NCAL_CMP_CTRL_LANE_3_0

// 0x3f	TX_IMP_TEMPC_NCAL_2		tx_imp_tempc_ncal_2
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0  : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_2_t;
__xdata __at( 0x18fc ) volatile TX_IMP_TEMPC_NCAL_2_t TX_IMP_TEMPC_NCAL_2;
#define reg_TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_IMP_TEMPC_NCAL_2.BF.TX_IMP_TEMPC_NCAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x40	TX_IMP_TEMPC_NCAL_3		tx_imp_tempc_ncal_3
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
__xdata __at( 0x1900 ) volatile TX_IMP_TEMPC_NCAL_3_t TX_IMP_TEMPC_NCAL_3;
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE  TX_IMP_TEMPC_NCAL_3.BF.TX_IMP_TEMPC_NCAL_RESULT_AVG_EN_LANE

// 0x41	TX_IMP_TEMPC_NCAL_4		tx_imp_tempc_ncal_4
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_4_t;
__xdata __at( 0x1904 ) volatile TX_IMP_TEMPC_NCAL_4_t TX_IMP_TEMPC_NCAL_4;
#define reg_TX_IMP_TEMPC_NCAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_IMP_TEMPC_NCAL_4.BF.TX_IMP_TEMPC_NCAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x42	TX_IMP_TEMPC_NCAL_5		tx_imp_tempc_ncal_5
typedef union {
	struct {
		uint8_t TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0       : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_IMP_TEMPC_NCAL_5_t;
__xdata __at( 0x1908 ) volatile TX_IMP_TEMPC_NCAL_5_t TX_IMP_TEMPC_NCAL_5;
#define reg_TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_VAL_MIN_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0  TX_IMP_TEMPC_NCAL_5.BF.TX_IMP_TEMPC_NCAL_VAL_MAX_LANE_3_0

// 0x43	TX_IMP_TEMPC_NCAL_6		tx_imp_tempc_ncal_6
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
__xdata __at( 0x190c ) volatile TX_IMP_TEMPC_NCAL_6_t TX_IMP_TEMPC_NCAL_6;
#define reg_TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_CAL_DONE_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_RESULT_EXT_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_CAL_EN_EXT_LANE
#define reg_TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE  TX_IMP_TEMPC_NCAL_6.BF.TX_IMP_TEMPC_NCAL_INDV_EXT_EN_LANE

// 0x44	TX_IMP_TEMPC_NCAL_7		tx_imp_tempc_ncal_7
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
__xdata __at( 0x1910 ) volatile TX_IMP_TEMPC_NCAL_7_t TX_IMP_TEMPC_NCAL_7;
#define reg_TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0  TX_IMP_TEMPC_NCAL_7.BF.TX_IMP_TEMPC_NCAL_RESULT_RD_LANE_3_0
#define reg_TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE  TX_IMP_TEMPC_NCAL_7.BF.TX_IMP_TEMPC_NCAL_UNDERFLOW_RD_LANE
#define reg_TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE  TX_IMP_TEMPC_NCAL_7.BF.TX_IMP_TEMPC_NCAL_OVERFLOW_RD_LANE

// 0x45	RX_CLK_0		rx_clk_0
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
__xdata __at( 0x1914 ) volatile RX_CLK_0_t RX_CLK_0;
#define reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE  RX_CLK_0.BF.RX_CLK_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_CLK_CMP_CTRL_EXT_LANE_2_0  RX_CLK_0.BF.RX_CLK_CMP_CTRL_EXT_LANE_2_0
#define reg_RX_CLK_COMN_EXT_EN_LANE  RX_CLK_0.BF.RX_CLK_COMN_EXT_EN_LANE

// 0x46	RX_CLK_1		rx_clk_1
typedef union {
	struct {
		uint8_t RX_CLK_SETTING_EXT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_1_t;
__xdata __at( 0x1918 ) volatile RX_CLK_1_t RX_CLK_1;
#define reg_RX_CLK_SETTING_EXT_LANE_7_0  RX_CLK_1.BF.RX_CLK_SETTING_EXT_LANE_7_0

// 0x47	RX_CLK_2		rx_clk_2
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
__xdata __at( 0x191c ) volatile RX_CLK_2_t RX_CLK_2;
#define reg_RX_CLK_TOP_CONT_START_LANE  RX_CLK_2.BF.RX_CLK_TOP_CONT_START_LANE
#define reg_RX_CLK_TOP_START_LANE  RX_CLK_2.BF.RX_CLK_TOP_START_LANE
#define reg_RX_CLK_UPDN_RD_LANE  RX_CLK_2.BF.RX_CLK_UPDN_RD_LANE
#define reg_RX_CLK_SETTING_EXT_LANE_12_8  RX_CLK_2.BF.RX_CLK_SETTING_EXT_LANE_12_8

// 0x48	RX_CLK_3		rx_clk_3
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
__xdata __at( 0x1920 ) volatile RX_CLK_3_t RX_CLK_3;
#define reg_RX_CLK_TOP_CONT_DONE_LANE  RX_CLK_3.BF.RX_CLK_TOP_CONT_DONE_LANE
#define reg_RX_CLK_TOP_DONE_LANE  RX_CLK_3.BF.RX_CLK_TOP_DONE_LANE
#define reg_RX_CLK_TESTBUS_CORE_SEL_LANE_2_0  RX_CLK_3.BF.RX_CLK_TESTBUS_CORE_SEL_LANE_2_0

// 0x49	RX_E2C_DCC_CAL_0		rx_e2c_dcc_cal_0
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
__xdata __at( 0x1924 ) volatile RX_E2C_DCC_CAL_0_t RX_E2C_DCC_CAL_0;
#define reg_RX_E2C_DCC_CAL_DIR_INV_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_DIR_INV_LANE
#define reg_RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_E2C_DCC_CAL_CONT_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_CONT_EN_LANE
#define reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE  RX_E2C_DCC_CAL_0.BF.RX_E2C_DCC_CAL_SINGLE_EN_LANE

// 0x4a	RX_E2C_DCC_CAL_1		rx_e2c_dcc_cal_1
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
__xdata __at( 0x1928 ) volatile RX_E2C_DCC_CAL_1_t RX_E2C_DCC_CAL_1;
#define reg_RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_E2C_DCC_CAL_CMP_CTRL_LANE_2_0  RX_E2C_DCC_CAL_1.BF.RX_E2C_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x4b	RX_E2C_DCC_CAL_2		rx_e2c_dcc_cal_2
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_2_t;
__xdata __at( 0x192c ) volatile RX_E2C_DCC_CAL_2_t RX_E2C_DCC_CAL_2;
#define reg_RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_E2C_DCC_CAL_2.BF.RX_E2C_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x4c	RX_E2C_DCC_CAL_3		rx_e2c_dcc_cal_3
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_3_t;
__xdata __at( 0x1930 ) volatile RX_E2C_DCC_CAL_3_t RX_E2C_DCC_CAL_3;
#define reg_RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_E2C_DCC_CAL_3.BF.RX_E2C_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x4d	RX_E2C_DCC_CAL_4		rx_e2c_dcc_cal_4
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
__xdata __at( 0x1934 ) volatile RX_E2C_DCC_CAL_4_t RX_E2C_DCC_CAL_4;
#define reg_RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_E2C_DCC_CAL_4.BF.RX_E2C_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x4e	RX_E2C_DCC_CAL_5		rx_e2c_dcc_cal_5
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_SETTING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_5_t;
__xdata __at( 0x1938 ) volatile RX_E2C_DCC_CAL_5_t RX_E2C_DCC_CAL_5;
#define reg_RX_E2C_DCC_CAL_SETTING_LANE_7_0  RX_E2C_DCC_CAL_5.BF.RX_E2C_DCC_CAL_SETTING_LANE_7_0

// 0x4f	RX_E2C_DCC_CAL_6		rx_e2c_dcc_cal_6
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_E2C_DCC_CAL_SETTING_LANE_12_8         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_6_t;
__xdata __at( 0x193c ) volatile RX_E2C_DCC_CAL_6_t RX_E2C_DCC_CAL_6;
#define reg_RX_E2C_DCC_CAL_CAL_DONE_RD_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_E2C_DCC_CAL_CAL_EN_EXT_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_E2C_DCC_CAL_INDV_EXT_EN_LANE  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_E2C_DCC_CAL_SETTING_LANE_12_8  RX_E2C_DCC_CAL_6.BF.RX_E2C_DCC_CAL_SETTING_LANE_12_8

// 0x50	RX_E2C_DCC_CAL_7		rx_e2c_dcc_cal_7
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MAX_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_7_t;
__xdata __at( 0x1940 ) volatile RX_E2C_DCC_CAL_7_t RX_E2C_DCC_CAL_7;
#define reg_RX_E2C_DCC_CAL_TIMEOUT_RD_LANE  RX_E2C_DCC_CAL_7.BF.RX_E2C_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MAX_LANE_6_0  RX_E2C_DCC_CAL_7.BF.RX_E2C_DCC_CAL_VAL_MAX_LANE_6_0

// 0x51	RX_E2C_DCC_CAL_8		rx_e2c_dcc_cal_8
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_VAL_MIN_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_8_t;
__xdata __at( 0x1944 ) volatile RX_E2C_DCC_CAL_8_t RX_E2C_DCC_CAL_8;
#define reg_RX_E2C_DCC_CAL_OVERFLOW_RD_LANE  RX_E2C_DCC_CAL_8.BF.RX_E2C_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_VAL_MIN_LANE_6_0  RX_E2C_DCC_CAL_8.BF.RX_E2C_DCC_CAL_VAL_MIN_LANE_6_0

// 0x52	RX_E2C_DCC_CAL_9		rx_e2c_dcc_cal_9
typedef union {
	struct {
		uint8_t RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_9_t;
__xdata __at( 0x1948 ) volatile RX_E2C_DCC_CAL_9_t RX_E2C_DCC_CAL_9;
#define reg_RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE  RX_E2C_DCC_CAL_9.BF.RX_E2C_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0  RX_E2C_DCC_CAL_9.BF.RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0

// 0x53	RX_E2C_DCC_CAL_10		rx_e2c_dcc_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_E2C_DCC_CAL_RESULT_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_E2C_DCC_CAL_10_t;
__xdata __at( 0x194c ) volatile RX_E2C_DCC_CAL_10_t RX_E2C_DCC_CAL_10;
#define reg_RX_E2C_DCC_CAL_RESULT_RD_LANE_6_0  RX_E2C_DCC_CAL_10.BF.RX_E2C_DCC_CAL_RESULT_RD_LANE_6_0

// 0x54	RX_DLL_CAL_0		rx_dll_cal_0
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
__xdata __at( 0x1950 ) volatile RX_DLL_CAL_0_t RX_DLL_CAL_0;
#define reg_RX_DLL_CAL_DIR_INV_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_DIR_INV_LANE
#define reg_RX_DLL_CAL_CONT_NUM_LANE_3_0  RX_DLL_CAL_0.BF.RX_DLL_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DLL_CAL_BYPASS_EN_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_BYPASS_EN_LANE
#define reg_RX_DLL_CAL_CONT_EN_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_CONT_EN_LANE
#define reg_RX_DLL_CAL_SINGLE_EN_LANE  RX_DLL_CAL_0.BF.RX_DLL_CAL_SINGLE_EN_LANE

// 0x55	RX_DLL_CAL_1		rx_dll_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DLL_CAL_CMP_CTRL_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_1_t;
__xdata __at( 0x1954 ) volatile RX_DLL_CAL_1_t RX_DLL_CAL_1;
#define reg_RX_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DLL_CAL_1.BF.RX_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DLL_CAL_CMP_CTRL_LANE_2_0  RX_DLL_CAL_1.BF.RX_DLL_CAL_CMP_CTRL_LANE_2_0

// 0x56	RX_DLL_CAL_2		rx_dll_cal_2
typedef union {
	struct {
		uint8_t RX_DLL_CAL_SETTING_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_2_t;
__xdata __at( 0x1958 ) volatile RX_DLL_CAL_2_t RX_DLL_CAL_2;
#define reg_RX_DLL_CAL_SETTING_LANE_7_0  RX_DLL_CAL_2.BF.RX_DLL_CAL_SETTING_LANE_7_0

// 0x57	RX_DLL_CAL_3		rx_dll_cal_3
typedef union {
	struct {
		uint8_t RX_DLL_CAL_DUMMY_CLK_EXT_LANE            : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DLL_CAL_CAL_EN_EXT_LANE               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DLL_CAL_INDV_EXT_EN_LANE              : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_DLL_CAL_SETTING_LANE_12_8             : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_3_t;
__xdata __at( 0x195c ) volatile RX_DLL_CAL_3_t RX_DLL_CAL_3;
#define reg_RX_DLL_CAL_DUMMY_CLK_EXT_LANE  RX_DLL_CAL_3.BF.RX_DLL_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DLL_CAL_CAL_EN_EXT_LANE  RX_DLL_CAL_3.BF.RX_DLL_CAL_CAL_EN_EXT_LANE
#define reg_RX_DLL_CAL_INDV_EXT_EN_LANE  RX_DLL_CAL_3.BF.RX_DLL_CAL_INDV_EXT_EN_LANE
#define reg_RX_DLL_CAL_SETTING_LANE_12_8  RX_DLL_CAL_3.BF.RX_DLL_CAL_SETTING_LANE_12_8

// 0x58	RX_DLL_CAL_4		rx_dll_cal_4
typedef union {
	struct {
		uint8_t RX_DLL_CAL_TIMEOUT_RD_LANE               : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_CAL_DONE_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t RX_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_4_t;
__xdata __at( 0x1960 ) volatile RX_DLL_CAL_4_t RX_DLL_CAL_4;
#define reg_RX_DLL_CAL_TIMEOUT_RD_LANE  RX_DLL_CAL_4.BF.RX_DLL_CAL_TIMEOUT_RD_LANE
#define reg_RX_DLL_CAL_CAL_DONE_RD_LANE  RX_DLL_CAL_4.BF.RX_DLL_CAL_CAL_DONE_RD_LANE
#define reg_RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_DLL_CAL_4.BF.RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_RX_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DLL_CAL_4.BF.RX_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x59	RX_DLL_CAL_5		rx_dll_cal_5
typedef union {
	struct {
		uint8_t RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h22*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_5_t;
__xdata __at( 0x1964 ) volatile RX_DLL_CAL_5_t RX_DLL_CAL_5;
#define reg_RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_DLL_CAL_5.BF.RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x5a	RX_DLL_CAL_6		rx_dll_cal_6
typedef union {
	struct {
		uint8_t RX_DLL_CAL_OVERFLOW_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_VAL_MAX_MSB_LANE_3_0          : 4;	/*  [4:1]     r/w 4'ha*/
		uint8_t RX_DLL_CAL_TIMEOUT_STEPS_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_6_t;
__xdata __at( 0x1968 ) volatile RX_DLL_CAL_6_t RX_DLL_CAL_6;
#define reg_RX_DLL_CAL_OVERFLOW_RD_LANE  RX_DLL_CAL_6.BF.RX_DLL_CAL_OVERFLOW_RD_LANE
#define reg_RX_DLL_CAL_VAL_MAX_MSB_LANE_3_0  RX_DLL_CAL_6.BF.RX_DLL_CAL_VAL_MAX_MSB_LANE_3_0
#define reg_RX_DLL_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DLL_CAL_6.BF.RX_DLL_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x5b	RX_DLL_CAL_7		rx_dll_cal_7
typedef union {
	struct {
		uint8_t RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0       : 4;	/*  [3:0]     r/w 4'ha*/
		uint8_t RX_DLL_CAL_VAL_MIN_MSB_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_7_t;
__xdata __at( 0x196c ) volatile RX_DLL_CAL_7_t RX_DLL_CAL_7;
#define reg_RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0  RX_DLL_CAL_7.BF.RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0
#define reg_RX_DLL_CAL_VAL_MIN_MSB_LANE_3_0  RX_DLL_CAL_7.BF.RX_DLL_CAL_VAL_MIN_MSB_LANE_3_0

// 0x5c	RX_DLL_CAL_8		rx_dll_cal_8
typedef union {
	struct {
		uint8_t RX_DLL_CAL_UNDERFLOW_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_VAL_MAX_LSB_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_8_t;
__xdata __at( 0x1970 ) volatile RX_DLL_CAL_8_t RX_DLL_CAL_8;
#define reg_RX_DLL_CAL_UNDERFLOW_RD_LANE  RX_DLL_CAL_8.BF.RX_DLL_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DLL_CAL_VAL_MAX_LSB_LANE_6_0  RX_DLL_CAL_8.BF.RX_DLL_CAL_VAL_MAX_LSB_LANE_6_0

// 0x5d	RX_DLL_CAL_9		rx_dll_cal_9
typedef union {
	struct {
		uint8_t RX_DLL_CAL_DUMMY_CLK_RD_LANE             : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_CAL_VAL_MIN_LSB_LANE_6_0          : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_9_t;
__xdata __at( 0x1974 ) volatile RX_DLL_CAL_9_t RX_DLL_CAL_9;
#define reg_RX_DLL_CAL_DUMMY_CLK_RD_LANE  RX_DLL_CAL_9.BF.RX_DLL_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DLL_CAL_VAL_MIN_LSB_LANE_6_0  RX_DLL_CAL_9.BF.RX_DLL_CAL_VAL_MIN_LSB_LANE_6_0

// 0x5e	RX_DLL_CAL_10		rx_dll_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0       : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_10_t;
__xdata __at( 0x1978 ) volatile RX_DLL_CAL_10_t RX_DLL_CAL_10;
#define reg_RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0  RX_DLL_CAL_10.BF.RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x5f	RX_DLL_CAL_11		rx_dll_cal_11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_DLL_CAL_RESULT_MSB_RD_LANE_3_0        : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_11_t;
__xdata __at( 0x197c ) volatile RX_DLL_CAL_11_t RX_DLL_CAL_11;
#define reg_RX_DLL_CAL_RESULT_MSB_RD_LANE_3_0  RX_DLL_CAL_11.BF.RX_DLL_CAL_RESULT_MSB_RD_LANE_3_0

// 0x60	RX_DLL_CAL_12		rx_dll_cal_12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DLL_CAL_RESULT_LSB_RD_LANE_6_0        : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_CAL_12_t;
__xdata __at( 0x1980 ) volatile RX_DLL_CAL_12_t RX_DLL_CAL_12;
#define reg_RX_DLL_CAL_RESULT_LSB_RD_LANE_6_0  RX_DLL_CAL_12.BF.RX_DLL_CAL_RESULT_LSB_RD_LANE_6_0

// 0x61	RX_PI_DCC_CAL_0		rx_pi_dcc_cal_0
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_DIR_INV_LANE               : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_PI_DCC_CAL_CONT_NUM_LANE_3_0          : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_PI_DCC_CAL_BYPASS_EN_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_CONT_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_SINGLE_EN_LANE             : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_0_t;
__xdata __at( 0x1984 ) volatile RX_PI_DCC_CAL_0_t RX_PI_DCC_CAL_0;
#define reg_RX_PI_DCC_CAL_DIR_INV_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_DIR_INV_LANE
#define reg_RX_PI_DCC_CAL_CONT_NUM_LANE_3_0  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_PI_DCC_CAL_BYPASS_EN_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_PI_DCC_CAL_CONT_EN_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_CONT_EN_LANE
#define reg_RX_PI_DCC_CAL_SINGLE_EN_LANE  RX_PI_DCC_CAL_0.BF.RX_PI_DCC_CAL_SINGLE_EN_LANE

// 0x62	RX_PI_DCC_CAL_1		rx_pi_dcc_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_PI_DCC_CAL_CMP_CTRL_LANE_2_0          : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_1_t;
__xdata __at( 0x1988 ) volatile RX_PI_DCC_CAL_1_t RX_PI_DCC_CAL_1;
#define reg_RX_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_PI_DCC_CAL_1.BF.RX_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_PI_DCC_CAL_CMP_CTRL_LANE_2_0  RX_PI_DCC_CAL_1.BF.RX_PI_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x63	RX_PI_DCC_CAL_2		rx_pi_dcc_cal_2
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_SETTING_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_2_t;
__xdata __at( 0x198c ) volatile RX_PI_DCC_CAL_2_t RX_PI_DCC_CAL_2;
#define reg_RX_PI_DCC_CAL_SETTING_LANE_7_0  RX_PI_DCC_CAL_2.BF.RX_PI_DCC_CAL_SETTING_LANE_7_0

// 0x64	RX_PI_DCC_CAL_3		rx_pi_dcc_cal_3
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_CAL_DONE_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_PI_DCC_CAL_CAL_EN_EXT_LANE            : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_INDV_EXT_EN_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_PI_DCC_CAL_SETTING_LANE_12_8          : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_3_t;
__xdata __at( 0x1990 ) volatile RX_PI_DCC_CAL_3_t RX_PI_DCC_CAL_3;
#define reg_RX_PI_DCC_CAL_CAL_DONE_RD_LANE  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_PI_DCC_CAL_CAL_EN_EXT_LANE  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_PI_DCC_CAL_INDV_EXT_EN_LANE  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_PI_DCC_CAL_SETTING_LANE_12_8  RX_PI_DCC_CAL_3.BF.RX_PI_DCC_CAL_SETTING_LANE_12_8

// 0x65	RX_PI_DCC_CAL_4		rx_pi_dcc_cal_4
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
__xdata __at( 0x1994 ) volatile RX_PI_DCC_CAL_4_t RX_PI_DCC_CAL_4;
#define reg_RX_PI_DCC_CAL_OVERFLOW_RD_LANE  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_PI_DCC_CAL_TIMEOUT_RD_LANE  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_PI_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0
#define reg_RX_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_PI_DCC_CAL_4.BF.RX_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x66	RX_PI_DCC_CAL_5		rx_pi_dcc_cal_5
typedef union {
	struct {
		uint8_t RX_PI_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_5_t;
__xdata __at( 0x1998 ) volatile RX_PI_DCC_CAL_5_t RX_PI_DCC_CAL_5;
#define reg_RX_PI_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_PI_DCC_CAL_5.BF.RX_PI_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x67	RX_PI_DCC_CAL_6		rx_pi_dcc_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_UNDERFLOW_RD_LANE          : 1;	/*      4       r 1'h0*/
		uint8_t RX_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0     : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_6_t;
__xdata __at( 0x199c ) volatile RX_PI_DCC_CAL_6_t RX_PI_DCC_CAL_6;
#define reg_RX_PI_DCC_CAL_UNDERFLOW_RD_LANE  RX_PI_DCC_CAL_6.BF.RX_PI_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_PI_DCC_CAL_6.BF.RX_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x68	RX_PI_DCC_CAL_7		rx_pi_dcc_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_VAL_MAX_LANE_5_0           : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_7_t;
__xdata __at( 0x19a0 ) volatile RX_PI_DCC_CAL_7_t RX_PI_DCC_CAL_7;
#define reg_RX_PI_DCC_CAL_VAL_MAX_LANE_5_0  RX_PI_DCC_CAL_7.BF.RX_PI_DCC_CAL_VAL_MAX_LANE_5_0

// 0x69	RX_PI_DCC_CAL_8		rx_pi_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_VAL_MIN_LANE_5_0           : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_8_t;
__xdata __at( 0x19a4 ) volatile RX_PI_DCC_CAL_8_t RX_PI_DCC_CAL_8;
#define reg_RX_PI_DCC_CAL_VAL_MIN_LANE_5_0  RX_PI_DCC_CAL_8.BF.RX_PI_DCC_CAL_VAL_MIN_LANE_5_0

// 0x6a	RX_PI_DCC_CAL_9		rx_pi_dcc_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0        : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_9_t;
__xdata __at( 0x19a8 ) volatile RX_PI_DCC_CAL_9_t RX_PI_DCC_CAL_9;
#define reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0  RX_PI_DCC_CAL_9.BF.RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x6b	RX_PI_DCC_CAL_10		rx_pi_dcc_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_PI_DCC_CAL_RESULT_RD_LANE_5_0         : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_PI_DCC_CAL_10_t;
__xdata __at( 0x19ac ) volatile RX_PI_DCC_CAL_10_t RX_PI_DCC_CAL_10;
#define reg_RX_PI_DCC_CAL_RESULT_RD_LANE_5_0  RX_PI_DCC_CAL_10.BF.RX_PI_DCC_CAL_RESULT_RD_LANE_5_0

// 0x6c	RX_ALIGN90_CAL_0		rx_align90_cal_0
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
__xdata __at( 0x19b0 ) volatile RX_ALIGN90_CAL_0_t RX_ALIGN90_CAL_0;
#define reg_RX_ALIGN90_CAL_DIR_INV_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_DIR_INV_LANE
#define reg_RX_ALIGN90_CAL_CONT_NUM_LANE_3_0  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_RX_ALIGN90_CAL_BYPASS_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_BYPASS_EN_LANE
#define reg_RX_ALIGN90_CAL_CONT_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_CONT_EN_LANE
#define reg_RX_ALIGN90_CAL_SINGLE_EN_LANE  RX_ALIGN90_CAL_0.BF.RX_ALIGN90_CAL_SINGLE_EN_LANE

// 0x6d	RX_ALIGN90_CAL_1		rx_align90_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_ALIGN90_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_1_t;
__xdata __at( 0x19b4 ) volatile RX_ALIGN90_CAL_1_t RX_ALIGN90_CAL_1;
#define reg_RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_ALIGN90_CAL_CMP_CTRL_LANE_2_0  RX_ALIGN90_CAL_1.BF.RX_ALIGN90_CAL_CMP_CTRL_LANE_2_0

// 0x6e	RX_ALIGN90_CAL_2		rx_align90_cal_2
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_SETTING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_2_t;
__xdata __at( 0x19b8 ) volatile RX_ALIGN90_CAL_2_t RX_ALIGN90_CAL_2;
#define reg_RX_ALIGN90_CAL_SETTING_LANE_7_0  RX_ALIGN90_CAL_2.BF.RX_ALIGN90_CAL_SETTING_LANE_7_0

// 0x6f	RX_ALIGN90_CAL_3		rx_align90_cal_3
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
__xdata __at( 0x19bc ) volatile RX_ALIGN90_CAL_3_t RX_ALIGN90_CAL_3;
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_ALIGN90_CAL_CAL_EN_EXT_LANE  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_RX_ALIGN90_CAL_INDV_EXT_EN_LANE  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_RX_ALIGN90_CAL_SETTING_LANE_12_8  RX_ALIGN90_CAL_3.BF.RX_ALIGN90_CAL_SETTING_LANE_12_8

// 0x70	RX_ALIGN90_CAL_4		rx_align90_cal_4
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
__xdata __at( 0x19c0 ) volatile RX_ALIGN90_CAL_4_t RX_ALIGN90_CAL_4;
#define reg_RX_ALIGN90_CAL_TIMEOUT_RD_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_RX_ALIGN90_CAL_CAL_DONE_RD_LANE  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_ALIGN90_CAL_4.BF.RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x71	RX_ALIGN90_CAL_5		rx_align90_cal_5
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
__xdata __at( 0x19c4 ) volatile RX_ALIGN90_CAL_5_t RX_ALIGN90_CAL_5;
#define reg_RX_ALIGN90_CAL_UNDERFLOW_RD_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_OVERFLOW_RD_LANE  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  RX_ALIGN90_CAL_5.BF.RX_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0

// 0x72	RX_ALIGN90_CAL_6		rx_align90_cal_6
typedef union {
	struct {
		uint8_t RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_6_t;
__xdata __at( 0x19c8 ) volatile RX_ALIGN90_CAL_6_t RX_ALIGN90_CAL_6;
#define reg_RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0  RX_ALIGN90_CAL_6.BF.RX_ALIGN90_CAL_VAL_MAX_LSB_LANE_6_0

// 0x73	RX_ALIGN90_CAL_7		rx_align90_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_7_t;
__xdata __at( 0x19cc ) volatile RX_ALIGN90_CAL_7_t RX_ALIGN90_CAL_7;
#define reg_RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0  RX_ALIGN90_CAL_7.BF.RX_ALIGN90_CAL_VAL_MIN_LSB_LANE_6_0

// 0x74	RX_ALIGN90_CAL_8		rx_align90_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0    : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_8_t;
__xdata __at( 0x19d0 ) volatile RX_ALIGN90_CAL_8_t RX_ALIGN90_CAL_8;
#define reg_RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  RX_ALIGN90_CAL_8.BF.RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x75	RX_ALIGN90_CAL_9		rx_align90_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_9_t;
__xdata __at( 0x19d4 ) volatile RX_ALIGN90_CAL_9_t RX_ALIGN90_CAL_9;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  RX_ALIGN90_CAL_9.BF.RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x76	RX_ALIGN90_CAL_10		rx_align90_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ALIGN90_CAL_10_t;
__xdata __at( 0x19d8 ) volatile RX_ALIGN90_CAL_10_t RX_ALIGN90_CAL_10;
#define reg_RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0  RX_ALIGN90_CAL_10.BF.RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0

// 0x77	RX_DATA_DCC_CAL_0		rx_data_dcc_cal_0
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
__xdata __at( 0x19dc ) volatile RX_DATA_DCC_CAL_0_t RX_DATA_DCC_CAL_0;
#define reg_RX_DATA_DCC_CAL_DIR_INV_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_DIR_INV_LANE
#define reg_RX_DATA_DCC_CAL_CONT_NUM_LANE_3_0  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_DATA_DCC_CAL_CONT_EN_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_CONT_EN_LANE
#define reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE  RX_DATA_DCC_CAL_0.BF.RX_DATA_DCC_CAL_SINGLE_EN_LANE

// 0x78	RX_DATA_DCC_CAL_1		rx_data_dcc_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DATA_DCC_CAL_CMP_CTRL_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_1_t;
__xdata __at( 0x19e0 ) volatile RX_DATA_DCC_CAL_1_t RX_DATA_DCC_CAL_1;
#define reg_RX_DATA_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DATA_DCC_CAL_1.BF.RX_DATA_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DATA_DCC_CAL_CMP_CTRL_LANE_2_0  RX_DATA_DCC_CAL_1.BF.RX_DATA_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x79	RX_DATA_DCC_CAL_2		rx_data_dcc_cal_2
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_SETTING_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_2_t;
__xdata __at( 0x19e4 ) volatile RX_DATA_DCC_CAL_2_t RX_DATA_DCC_CAL_2;
#define reg_RX_DATA_DCC_CAL_SETTING_LANE_7_0  RX_DATA_DCC_CAL_2.BF.RX_DATA_DCC_CAL_SETTING_LANE_7_0

// 0x7a	RX_DATA_DCC_CAL_3		rx_data_dcc_cal_3
typedef union {
	struct {
		uint8_t RX_DATA_DCC_CAL_DUMMY_CLK_EXT_LANE       : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DATA_DCC_CAL_CAL_EN_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DATA_DCC_CAL_INDV_EXT_EN_LANE         : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_DATA_DCC_CAL_SETTING_LANE_12_8        : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_3_t;
__xdata __at( 0x19e8 ) volatile RX_DATA_DCC_CAL_3_t RX_DATA_DCC_CAL_3;
#define reg_RX_DATA_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_DATA_DCC_CAL_CAL_EN_EXT_LANE  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_DATA_DCC_CAL_INDV_EXT_EN_LANE  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_DATA_DCC_CAL_SETTING_LANE_12_8  RX_DATA_DCC_CAL_3.BF.RX_DATA_DCC_CAL_SETTING_LANE_12_8

// 0x7b	RX_DATA_DCC_CAL_4		rx_data_dcc_cal_4
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
__xdata __at( 0x19ec ) volatile RX_DATA_DCC_CAL_4_t RX_DATA_DCC_CAL_4;
#define reg_RX_DATA_DCC_CAL_TIMEOUT_RD_LANE  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_DATA_DCC_CAL_CAL_DONE_RD_LANE  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_DATA_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_DATA_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DATA_DCC_CAL_4.BF.RX_DATA_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x7c	RX_DATA_DCC_CAL_5		rx_data_dcc_cal_5
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
__xdata __at( 0x19f0 ) volatile RX_DATA_DCC_CAL_5_t RX_DATA_DCC_CAL_5;
#define reg_RX_DATA_DCC_CAL_UNDERFLOW_RD_LANE  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DATA_DCC_CAL_OVERFLOW_RD_LANE  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_DATA_DCC_CAL_VAL_MIN_MSB_LANE_2_0  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_DATA_DCC_CAL_VAL_MAX_MSB_LANE_2_0  RX_DATA_DCC_CAL_5.BF.RX_DATA_DCC_CAL_VAL_MAX_MSB_LANE_2_0

// 0x7d	RX_DATA_DCC_CAL_6		rx_data_dcc_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_DUMMY_CLK_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_DATA_DCC_CAL_VAL_MAX_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_6_t;
__xdata __at( 0x19f4 ) volatile RX_DATA_DCC_CAL_6_t RX_DATA_DCC_CAL_6;
#define reg_RX_DATA_DCC_CAL_DUMMY_CLK_RD_LANE  RX_DATA_DCC_CAL_6.BF.RX_DATA_DCC_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_DATA_DCC_CAL_VAL_MAX_LSB_LANE_5_0  RX_DATA_DCC_CAL_6.BF.RX_DATA_DCC_CAL_VAL_MAX_LSB_LANE_5_0

// 0x7e	RX_DATA_DCC_CAL_7		rx_data_dcc_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_VAL_MIN_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_7_t;
__xdata __at( 0x19f8 ) volatile RX_DATA_DCC_CAL_7_t RX_DATA_DCC_CAL_7;
#define reg_RX_DATA_DCC_CAL_VAL_MIN_LSB_LANE_5_0  RX_DATA_DCC_CAL_7.BF.RX_DATA_DCC_CAL_VAL_MIN_LSB_LANE_5_0

// 0x7f	RX_DATA_DCC_CAL_8		rx_data_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0   : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_8_t;
__xdata __at( 0x19fc ) volatile RX_DATA_DCC_CAL_8_t RX_DATA_DCC_CAL_8;
#define reg_RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0  RX_DATA_DCC_CAL_8.BF.RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  RX_DATA_DCC_CAL_8.BF.RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x80	RX_DATA_DCC_CAL_9		rx_data_dcc_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_9_t;
__xdata __at( 0x1a00 ) volatile RX_DATA_DCC_CAL_9_t RX_DATA_DCC_CAL_9;
#define reg_RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  RX_DATA_DCC_CAL_9.BF.RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x81	RX_DATA_DCC_CAL_10		rx_data_dcc_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0   : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_DCC_CAL_10_t;
__xdata __at( 0x1a04 ) volatile RX_DATA_DCC_CAL_10_t RX_DATA_DCC_CAL_10;
#define reg_RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0  RX_DATA_DCC_CAL_10.BF.RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0

// 0x82	RX_EDGE_DCC_CAL_0		rx_edge_dcc_cal_0
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
__xdata __at( 0x1a08 ) volatile RX_EDGE_DCC_CAL_0_t RX_EDGE_DCC_CAL_0;
#define reg_RX_EDGE_DCC_CAL_DIR_INV_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_DIR_INV_LANE
#define reg_RX_EDGE_DCC_CAL_CONT_NUM_LANE_3_0  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_EDGE_DCC_CAL_CONT_EN_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_CONT_EN_LANE
#define reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE  RX_EDGE_DCC_CAL_0.BF.RX_EDGE_DCC_CAL_SINGLE_EN_LANE

// 0x83	RX_EDGE_DCC_CAL_1		rx_edge_dcc_cal_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_EDGE_DCC_CAL_CMP_CTRL_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_1_t;
__xdata __at( 0x1a0c ) volatile RX_EDGE_DCC_CAL_1_t RX_EDGE_DCC_CAL_1;
#define reg_RX_EDGE_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EDGE_DCC_CAL_1.BF.RX_EDGE_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_CMP_CTRL_LANE_2_0  RX_EDGE_DCC_CAL_1.BF.RX_EDGE_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x84	RX_EDGE_DCC_CAL_2		rx_edge_dcc_cal_2
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_SETTING_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_2_t;
__xdata __at( 0x1a10 ) volatile RX_EDGE_DCC_CAL_2_t RX_EDGE_DCC_CAL_2;
#define reg_RX_EDGE_DCC_CAL_SETTING_LANE_7_0  RX_EDGE_DCC_CAL_2.BF.RX_EDGE_DCC_CAL_SETTING_LANE_7_0

// 0x85	RX_EDGE_DCC_CAL_3		rx_edge_dcc_cal_3
typedef union {
	struct {
		uint8_t RX_EDGE_DCC_CAL_DUMMY_CLK_EXT_LANE       : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_EDGE_DCC_CAL_CAL_EN_EXT_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_INDV_EXT_EN_LANE         : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_SETTING_LANE_12_8        : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_3_t;
__xdata __at( 0x1a14 ) volatile RX_EDGE_DCC_CAL_3_t RX_EDGE_DCC_CAL_3;
#define reg_RX_EDGE_DCC_CAL_DUMMY_CLK_EXT_LANE  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EDGE_DCC_CAL_CAL_EN_EXT_LANE  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_EDGE_DCC_CAL_INDV_EXT_EN_LANE  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_EDGE_DCC_CAL_SETTING_LANE_12_8  RX_EDGE_DCC_CAL_3.BF.RX_EDGE_DCC_CAL_SETTING_LANE_12_8

// 0x86	RX_EDGE_DCC_CAL_4		rx_edge_dcc_cal_4
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
__xdata __at( 0x1a18 ) volatile RX_EDGE_DCC_CAL_4_t RX_EDGE_DCC_CAL_4;
#define reg_RX_EDGE_DCC_CAL_TIMEOUT_RD_LANE  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_EDGE_DCC_CAL_CAL_DONE_RD_LANE  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_EDGE_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EDGE_DCC_CAL_4.BF.RX_EDGE_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x87	RX_EDGE_DCC_CAL_5		rx_edge_dcc_cal_5
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
__xdata __at( 0x1a1c ) volatile RX_EDGE_DCC_CAL_5_t RX_EDGE_DCC_CAL_5;
#define reg_RX_EDGE_DCC_CAL_UNDERFLOW_RD_LANE  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EDGE_DCC_CAL_OVERFLOW_RD_LANE  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_EDGE_DCC_CAL_VAL_MIN_MSB_LANE_2_0  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_VAL_MAX_MSB_LANE_2_0  RX_EDGE_DCC_CAL_5.BF.RX_EDGE_DCC_CAL_VAL_MAX_MSB_LANE_2_0

// 0x88	RX_EDGE_DCC_CAL_6		rx_edge_dcc_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_DUMMY_CLK_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_EDGE_DCC_CAL_VAL_MAX_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_6_t;
__xdata __at( 0x1a20 ) volatile RX_EDGE_DCC_CAL_6_t RX_EDGE_DCC_CAL_6;
#define reg_RX_EDGE_DCC_CAL_DUMMY_CLK_RD_LANE  RX_EDGE_DCC_CAL_6.BF.RX_EDGE_DCC_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_EDGE_DCC_CAL_VAL_MAX_LSB_LANE_5_0  RX_EDGE_DCC_CAL_6.BF.RX_EDGE_DCC_CAL_VAL_MAX_LSB_LANE_5_0

// 0x89	RX_EDGE_DCC_CAL_7		rx_edge_dcc_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_VAL_MIN_LSB_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_7_t;
__xdata __at( 0x1a24 ) volatile RX_EDGE_DCC_CAL_7_t RX_EDGE_DCC_CAL_7;
#define reg_RX_EDGE_DCC_CAL_VAL_MIN_LSB_LANE_5_0  RX_EDGE_DCC_CAL_7.BF.RX_EDGE_DCC_CAL_VAL_MIN_LSB_LANE_5_0

// 0x8a	RX_EDGE_DCC_CAL_8		rx_edge_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0   : 3;	/*  [4:2]       r 3'h0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_8_t;
__xdata __at( 0x1a28 ) volatile RX_EDGE_DCC_CAL_8_t RX_EDGE_DCC_CAL_8;
#define reg_RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0  RX_EDGE_DCC_CAL_8.BF.RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0
#define reg_RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0  RX_EDGE_DCC_CAL_8.BF.RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x8b	RX_EDGE_DCC_CAL_9		rx_edge_dcc_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_9_t;
__xdata __at( 0x1a2c ) volatile RX_EDGE_DCC_CAL_9_t RX_EDGE_DCC_CAL_9;
#define reg_RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0  RX_EDGE_DCC_CAL_9.BF.RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x8c	RX_EDGE_DCC_CAL_10		rx_edge_dcc_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0   : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EDGE_DCC_CAL_10_t;
__xdata __at( 0x1a30 ) volatile RX_EDGE_DCC_CAL_10_t RX_EDGE_DCC_CAL_10;
#define reg_RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0  RX_EDGE_DCC_CAL_10.BF.RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0

// 0x8d	RX_EOM_0		rx_eom_0
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
__xdata __at( 0x1a34 ) volatile RX_EOM_0_t RX_EOM_0;
#define reg_RX_EOM_AUTO_ZERO_CLK_EXT_LANE  RX_EOM_0.BF.RX_EOM_AUTO_ZERO_CLK_EXT_LANE
#define reg_RX_EOM_CMP_CTRL_EXT_LANE_1_0  RX_EOM_0.BF.RX_EOM_CMP_CTRL_EXT_LANE_1_0
#define reg_RX_EOM_COMN_EXT_EN_LANE  RX_EOM_0.BF.RX_EOM_COMN_EXT_EN_LANE

// 0x8e	RX_EOM_1		rx_eom_1
typedef union {
	struct {
		uint8_t RX_EOM_SETTING_EXT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_1_t;
__xdata __at( 0x1a38 ) volatile RX_EOM_1_t RX_EOM_1;
#define reg_RX_EOM_SETTING_EXT_LANE_7_0  RX_EOM_1.BF.RX_EOM_SETTING_EXT_LANE_7_0

// 0x8f	RX_EOM_2		rx_eom_2
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
__xdata __at( 0x1a3c ) volatile RX_EOM_2_t RX_EOM_2;
#define reg_RX_EOM_TOP_CONT_START_LANE  RX_EOM_2.BF.RX_EOM_TOP_CONT_START_LANE
#define reg_RX_EOM_TOP_START_LANE  RX_EOM_2.BF.RX_EOM_TOP_START_LANE
#define reg_RX_EOM_UPDN_RD_LANE  RX_EOM_2.BF.RX_EOM_UPDN_RD_LANE
#define reg_RX_EOM_SETTING_EXT_LANE_12_8  RX_EOM_2.BF.RX_EOM_SETTING_EXT_LANE_12_8

// 0x90	RX_EOM_3		rx_eom_3
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
__xdata __at( 0x1a40 ) volatile RX_EOM_3_t RX_EOM_3;
#define reg_RX_EOM_TOP_CONT_DONE_LANE  RX_EOM_3.BF.RX_EOM_TOP_CONT_DONE_LANE
#define reg_RX_EOM_TOP_DONE_LANE  RX_EOM_3.BF.RX_EOM_TOP_DONE_LANE
#define reg_RX_EOM_TESTBUS_CORE_SEL_LANE_2_0  RX_EOM_3.BF.RX_EOM_TESTBUS_CORE_SEL_LANE_2_0

// 0x91	RX_EOM_DLL_CAL_0		rx_eom_dll_cal_0
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
__xdata __at( 0x1a44 ) volatile RX_EOM_DLL_CAL_0_t RX_EOM_DLL_CAL_0;
#define reg_RX_EOM_DLL_CAL_DIR_INV_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_DIR_INV_LANE
#define reg_RX_EOM_DLL_CAL_CONT_NUM_LANE_3_0  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_DLL_CAL_BYPASS_EN_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_DLL_CAL_CONT_EN_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_CONT_EN_LANE
#define reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE  RX_EOM_DLL_CAL_0.BF.RX_EOM_DLL_CAL_SINGLE_EN_LANE

// 0x92	RX_EOM_DLL_CAL_1		rx_eom_dll_cal_1
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_EOM_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_EOM_DLL_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_1_t;
__xdata __at( 0x1a48 ) volatile RX_EOM_DLL_CAL_1_t RX_EOM_DLL_CAL_1;
#define reg_RX_EOM_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_DLL_CAL_1.BF.RX_EOM_DLL_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_DLL_CAL_1.BF.RX_EOM_DLL_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DLL_CAL_CMP_CTRL_LANE_1_0  RX_EOM_DLL_CAL_1.BF.RX_EOM_DLL_CAL_CMP_CTRL_LANE_1_0

// 0x93	RX_EOM_DLL_CAL_2		rx_eom_dll_cal_2
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
__xdata __at( 0x1a4c ) volatile RX_EOM_DLL_CAL_2_t RX_EOM_DLL_CAL_2;
#define reg_RX_EOM_DLL_CAL_TIMEOUT_CHK_DIS_LANE  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_EOM_DLL_CAL_RESULT_AVG_EN_LANE  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_RESULT_AVG_EN_LANE
#define reg_RX_EOM_DLL_CAL_TOGGLE_TIMES_LANE_2_0  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_EOM_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_EOM_DLL_CAL_BIN_SEARCH_ENABLE_LANE  RX_EOM_DLL_CAL_2.BF.RX_EOM_DLL_CAL_BIN_SEARCH_ENABLE_LANE

// 0x94	RX_EOM_DLL_CAL_3		rx_eom_dll_cal_3
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h22*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_3_t;
__xdata __at( 0x1a50 ) volatile RX_EOM_DLL_CAL_3_t RX_EOM_DLL_CAL_3;
#define reg_RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_EOM_DLL_CAL_3.BF.RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x95	RX_EOM_DLL_CAL_4		rx_eom_dll_cal_4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_4_t;
__xdata __at( 0x1a54 ) volatile RX_EOM_DLL_CAL_4_t RX_EOM_DLL_CAL_4;
#define reg_RX_EOM_DLL_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_DLL_CAL_4.BF.RX_EOM_DLL_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_EOM_DLL_CAL_4.BF.RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x96	RX_EOM_DLL_CAL_5		rx_eom_dll_cal_5
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_SETTING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_5_t;
__xdata __at( 0x1a58 ) volatile RX_EOM_DLL_CAL_5_t RX_EOM_DLL_CAL_5;
#define reg_RX_EOM_DLL_CAL_SETTING_LANE_7_0  RX_EOM_DLL_CAL_5.BF.RX_EOM_DLL_CAL_SETTING_LANE_7_0

// 0x97	RX_EOM_DLL_CAL_6		rx_eom_dll_cal_6
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_DUMMY_CLK_EXT_LANE        : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_EOM_DLL_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_INDV_EXT_EN_LANE          : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_DLL_CAL_SETTING_LANE_12_8         : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_6_t;
__xdata __at( 0x1a5c ) volatile RX_EOM_DLL_CAL_6_t RX_EOM_DLL_CAL_6;
#define reg_RX_EOM_DLL_CAL_DUMMY_CLK_EXT_LANE  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_DUMMY_CLK_EXT_LANE
#define reg_RX_EOM_DLL_CAL_CAL_EN_EXT_LANE  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_DLL_CAL_INDV_EXT_EN_LANE  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_DLL_CAL_SETTING_LANE_12_8  RX_EOM_DLL_CAL_6.BF.RX_EOM_DLL_CAL_SETTING_LANE_12_8

// 0x98	RX_EOM_DLL_CAL_7		rx_eom_dll_cal_7
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0      : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RX_EOM_DLL_CAL_VAL_MAX_MSB_LANE_3_0      : 4;	/*  [7:4]     r/w 4'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_7_t;
__xdata __at( 0x1a60 ) volatile RX_EOM_DLL_CAL_7_t RX_EOM_DLL_CAL_7;
#define reg_RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0  RX_EOM_DLL_CAL_7.BF.RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0
#define reg_RX_EOM_DLL_CAL_VAL_MAX_MSB_LANE_3_0  RX_EOM_DLL_CAL_7.BF.RX_EOM_DLL_CAL_VAL_MAX_MSB_LANE_3_0

// 0x99	RX_EOM_DLL_CAL_8		rx_eom_dll_cal_8
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_VAL_MAX_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_8_t;
__xdata __at( 0x1a64 ) volatile RX_EOM_DLL_CAL_8_t RX_EOM_DLL_CAL_8;
#define reg_RX_EOM_DLL_CAL_CAL_DONE_RD_LANE  RX_EOM_DLL_CAL_8.BF.RX_EOM_DLL_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_DLL_CAL_VAL_MAX_LSB_LANE_6_0  RX_EOM_DLL_CAL_8.BF.RX_EOM_DLL_CAL_VAL_MAX_LSB_LANE_6_0

// 0x9a	RX_EOM_DLL_CAL_9		rx_eom_dll_cal_9
typedef union {
	struct {
		uint8_t RX_EOM_DLL_CAL_TIMEOUT_RD_LANE           : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DLL_CAL_VAL_MIN_LSB_LANE_6_0      : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_9_t;
__xdata __at( 0x1a68 ) volatile RX_EOM_DLL_CAL_9_t RX_EOM_DLL_CAL_9;
#define reg_RX_EOM_DLL_CAL_TIMEOUT_RD_LANE  RX_EOM_DLL_CAL_9.BF.RX_EOM_DLL_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_DLL_CAL_VAL_MIN_LSB_LANE_6_0  RX_EOM_DLL_CAL_9.BF.RX_EOM_DLL_CAL_VAL_MIN_LSB_LANE_6_0

// 0x9b	RX_EOM_DLL_CAL_10		rx_eom_dll_cal_10
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
__xdata __at( 0x1a6c ) volatile RX_EOM_DLL_CAL_10_t RX_EOM_DLL_CAL_10;
#define reg_RX_EOM_DLL_CAL_DUMMY_CLK_RD_LANE  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_DUMMY_CLK_RD_LANE
#define reg_RX_EOM_DLL_CAL_UNDERFLOW_RD_LANE  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_DLL_CAL_OVERFLOW_RD_LANE  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0  RX_EOM_DLL_CAL_10.BF.RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0

// 0x9c	RX_EOM_DLL_CAL_11		rx_eom_dll_cal_11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0   : 7;	/*  [7:1]     r/w 7'h7e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_11_t;
__xdata __at( 0x1a70 ) volatile RX_EOM_DLL_CAL_11_t RX_EOM_DLL_CAL_11;
#define reg_RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0  RX_EOM_DLL_CAL_11.BF.RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0

// 0x9d	RX_EOM_DLL_CAL_12		rx_eom_dll_cal_12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_MSB_RD_LANE_3_0    : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_12_t;
__xdata __at( 0x1a74 ) volatile RX_EOM_DLL_CAL_12_t RX_EOM_DLL_CAL_12;
#define reg_RX_EOM_DLL_CAL_RESULT_MSB_RD_LANE_3_0  RX_EOM_DLL_CAL_12.BF.RX_EOM_DLL_CAL_RESULT_MSB_RD_LANE_3_0

// 0x9e	RX_EOM_DLL_CAL_13		rx_eom_dll_cal_13
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DLL_CAL_RESULT_LSB_RD_LANE_6_0    : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DLL_CAL_13_t;
__xdata __at( 0x1a78 ) volatile RX_EOM_DLL_CAL_13_t RX_EOM_DLL_CAL_13;
#define reg_RX_EOM_DLL_CAL_RESULT_LSB_RD_LANE_6_0  RX_EOM_DLL_CAL_13.BF.RX_EOM_DLL_CAL_RESULT_LSB_RD_LANE_6_0

// 0x9f	RX_EOM_PI_CAL_0		rx_eom_pi_cal_0
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
__xdata __at( 0x1a7c ) volatile RX_EOM_PI_CAL_0_t RX_EOM_PI_CAL_0;
#define reg_RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_CAL_DIR_INV_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_DIR_INV_LANE
#define reg_RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_CMP_CTRL_LANE_1_0
#define reg_RX_EOM_PI_CAL_BYPASS_EN_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_PI_CAL_SINGLE_EN_LANE  RX_EOM_PI_CAL_0.BF.RX_EOM_PI_CAL_SINGLE_EN_LANE

// 0xa0	RX_EOM_PI_CAL_1		rx_eom_pi_cal_1
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SAMPLE_PULSE_DIV_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_1_t;
__xdata __at( 0x1a80 ) volatile RX_EOM_PI_CAL_1_t RX_EOM_PI_CAL_1;
#define reg_RX_EOM_PI_CAL_SAMPLE_PULSE_DIV_LANE_7_0  RX_EOM_PI_CAL_1.BF.RX_EOM_PI_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xa1	RX_EOM_PI_CAL_2		rx_eom_pi_cal_2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_TIMEOUT_STEPS_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RX_EOM_PI_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_2_t;
__xdata __at( 0x1a84 ) volatile RX_EOM_PI_CAL_2_t RX_EOM_PI_CAL_2;
#define reg_RX_EOM_PI_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_PI_CAL_2.BF.RX_EOM_PI_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_RX_EOM_PI_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  RX_EOM_PI_CAL_2.BF.RX_EOM_PI_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0xa2	RX_EOM_PI_CAL_3		rx_eom_pi_cal_3
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MAX_LANE_7_0           : 8;	/*  [7:0]     r/w 8'hff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_3_t;
__xdata __at( 0x1a88 ) volatile RX_EOM_PI_CAL_3_t RX_EOM_PI_CAL_3;
#define reg_RX_EOM_PI_CAL_VAL_MAX_LANE_7_0  RX_EOM_PI_CAL_3.BF.RX_EOM_PI_CAL_VAL_MAX_LANE_7_0

// 0xa3	RX_EOM_PI_CAL_4		rx_eom_pi_cal_4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_VAL_MAX_LANE_10_8          : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_4_t;
__xdata __at( 0x1a8c ) volatile RX_EOM_PI_CAL_4_t RX_EOM_PI_CAL_4;
#define reg_RX_EOM_PI_CAL_VAL_MAX_LANE_10_8  RX_EOM_PI_CAL_4.BF.RX_EOM_PI_CAL_VAL_MAX_LANE_10_8

// 0xa4	RX_EOM_PI_CAL_5		rx_eom_pi_cal_5
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_5_t;
__xdata __at( 0x1a90 ) volatile RX_EOM_PI_CAL_5_t RX_EOM_PI_CAL_5;
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_7_0  RX_EOM_PI_CAL_5.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_7_0

// 0xa5	RX_EOM_PI_CAL_6		rx_eom_pi_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_VAL_MIN_LANE_10_8          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_6_t;
__xdata __at( 0x1a94 ) volatile RX_EOM_PI_CAL_6_t RX_EOM_PI_CAL_6;
#define reg_RX_EOM_PI_CAL_VAL_MIN_LANE_10_8  RX_EOM_PI_CAL_6.BF.RX_EOM_PI_CAL_VAL_MIN_LANE_10_8

// 0xa6	RX_EOM_PI_CAL_7		rx_eom_pi_cal_7
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_SETTING_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_7_t;
__xdata __at( 0x1a98 ) volatile RX_EOM_PI_CAL_7_t RX_EOM_PI_CAL_7;
#define reg_RX_EOM_PI_CAL_SETTING_LANE_7_0  RX_EOM_PI_CAL_7.BF.RX_EOM_PI_CAL_SETTING_LANE_7_0

// 0xa7	RX_EOM_PI_CAL_8		rx_eom_pi_cal_8
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
__xdata __at( 0x1a9c ) volatile RX_EOM_PI_CAL_8_t RX_EOM_PI_CAL_8;
#define reg_RX_EOM_PI_CAL_CAL_EN_EXT_LANE  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_PI_CAL_INDV_EXT_EN_LANE  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_PI_CAL_SETTING_LANE_12_8  RX_EOM_PI_CAL_8.BF.RX_EOM_PI_CAL_SETTING_LANE_12_8

// 0xa8	RX_EOM_PI_CAL_9		rx_eom_pi_cal_9
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_9_t;
__xdata __at( 0x1aa0 ) volatile RX_EOM_PI_CAL_9_t RX_EOM_PI_CAL_9;
#define reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0  RX_EOM_PI_CAL_9.BF.RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0

// 0xa9	RX_EOM_PI_CAL_10		rx_eom_pi_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_PI_CAL_UNDERFLOW_RD_LANE          : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_OVERFLOW_RD_LANE           : 1;	/*      2       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_TIMEOUT_RD_LANE            : 1;	/*      3       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_CAL_DONE_RD_LANE           : 1;	/*      4       r 1'h0*/
		uint8_t RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8       : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_10_t;
__xdata __at( 0x1aa4 ) volatile RX_EOM_PI_CAL_10_t RX_EOM_PI_CAL_10;
#define reg_RX_EOM_PI_CAL_UNDERFLOW_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_PI_CAL_OVERFLOW_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_PI_CAL_CAL_DONE_RD_LANE  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8  RX_EOM_PI_CAL_10.BF.RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8

// 0xaa	RX_EOM_PI_CAL_11		rx_eom_pi_cal_11
typedef union {
	struct {
		uint8_t RX_EOM_PI_CAL_RESULT_RD_LANE_7_0         : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_11_t;
__xdata __at( 0x1aa8 ) volatile RX_EOM_PI_CAL_11_t RX_EOM_PI_CAL_11;
#define reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0  RX_EOM_PI_CAL_11.BF.RX_EOM_PI_CAL_RESULT_RD_LANE_7_0

// 0xab	RX_EOM_PI_CAL_12		rx_eom_pi_cal_12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_CAL_RESULT_RD_LANE_10_8        : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_CAL_12_t;
__xdata __at( 0x1aac ) volatile RX_EOM_PI_CAL_12_t RX_EOM_PI_CAL_12;
#define reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8  RX_EOM_PI_CAL_12.BF.RX_EOM_PI_CAL_RESULT_RD_LANE_10_8

// 0xac	RX_EOM_PI_DCC_CAL_0		rx_eom_pi_dcc_cal_0
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
__xdata __at( 0x1ab0 ) volatile RX_EOM_PI_DCC_CAL_0_t RX_EOM_PI_DCC_CAL_0;
#define reg_RX_EOM_PI_DCC_CAL_DIR_INV_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_DIR_INV_LANE
#define reg_RX_EOM_PI_DCC_CAL_CONT_NUM_LANE_3_0  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_PI_DCC_CAL_CONT_EN_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_CONT_EN_LANE
#define reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE  RX_EOM_PI_DCC_CAL_0.BF.RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE

// 0xad	RX_EOM_PI_DCC_CAL_1		rx_eom_pi_dcc_cal_1
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RX_EOM_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_CMP_CTRL_LANE_1_0      : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_1_t;
__xdata __at( 0x1ab4 ) volatile RX_EOM_PI_DCC_CAL_1_t RX_EOM_PI_DCC_CAL_1;
#define reg_RX_EOM_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_DCC_CAL_1.BF.RX_EOM_PI_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_PI_DCC_CAL_1.BF.RX_EOM_PI_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_PI_DCC_CAL_CMP_CTRL_LANE_1_0  RX_EOM_PI_DCC_CAL_1.BF.RX_EOM_PI_DCC_CAL_CMP_CTRL_LANE_1_0

// 0xae	RX_EOM_PI_DCC_CAL_2		rx_eom_pi_dcc_cal_2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_2_t;
__xdata __at( 0x1ab8 ) volatile RX_EOM_PI_DCC_CAL_2_t RX_EOM_PI_DCC_CAL_2;
#define reg_RX_EOM_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_PI_DCC_CAL_2.BF.RX_EOM_PI_DCC_CAL_TIMEOUT_STEPS_LANE_2_0

// 0xaf	RX_EOM_PI_DCC_CAL_3		rx_eom_pi_dcc_cal_3
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h70*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_3_t;
__xdata __at( 0x1abc ) volatile RX_EOM_PI_DCC_CAL_3_t RX_EOM_PI_DCC_CAL_3;
#define reg_RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0  RX_EOM_PI_DCC_CAL_3.BF.RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0

// 0xb0	RX_EOM_PI_DCC_CAL_4		rx_eom_pi_dcc_cal_4
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_CAL_DONE_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_CAL_EN_EXT_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_INDV_EXT_EN_LANE       : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8      : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_4_t;
__xdata __at( 0x1ac0 ) volatile RX_EOM_PI_DCC_CAL_4_t RX_EOM_PI_DCC_CAL_4;
#define reg_RX_EOM_PI_DCC_CAL_CAL_DONE_RD_LANE  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_CAL_EN_EXT_LANE  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_PI_DCC_CAL_INDV_EXT_EN_LANE  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8  RX_EOM_PI_DCC_CAL_4.BF.RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8

// 0xb1	RX_EOM_PI_DCC_CAL_5		rx_eom_pi_dcc_cal_5
typedef union {
	struct {
		uint8_t RX_EOM_PI_DCC_CAL_OVERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_VAL_MAX_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_5_t;
__xdata __at( 0x1ac4 ) volatile RX_EOM_PI_DCC_CAL_5_t RX_EOM_PI_DCC_CAL_5;
#define reg_RX_EOM_PI_DCC_CAL_OVERFLOW_RD_LANE  RX_EOM_PI_DCC_CAL_5.BF.RX_EOM_PI_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE  RX_EOM_PI_DCC_CAL_5.BF.RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_VAL_MAX_LANE_5_0  RX_EOM_PI_DCC_CAL_5.BF.RX_EOM_PI_DCC_CAL_VAL_MAX_LANE_5_0

// 0xb2	RX_EOM_PI_DCC_CAL_6		rx_eom_pi_dcc_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_UNDERFLOW_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_PI_DCC_CAL_VAL_MIN_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_6_t;
__xdata __at( 0x1ac8 ) volatile RX_EOM_PI_DCC_CAL_6_t RX_EOM_PI_DCC_CAL_6;
#define reg_RX_EOM_PI_DCC_CAL_UNDERFLOW_RD_LANE  RX_EOM_PI_DCC_CAL_6.BF.RX_EOM_PI_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_PI_DCC_CAL_VAL_MIN_LANE_5_0  RX_EOM_PI_DCC_CAL_6.BF.RX_EOM_PI_DCC_CAL_VAL_MIN_LANE_5_0

// 0xb3	RX_EOM_PI_DCC_CAL_7		rx_eom_pi_dcc_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0    : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_7_t;
__xdata __at( 0x1acc ) volatile RX_EOM_PI_DCC_CAL_7_t RX_EOM_PI_DCC_CAL_7;
#define reg_RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0  RX_EOM_PI_DCC_CAL_7.BF.RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0

// 0xb4	RX_EOM_PI_DCC_CAL_8		rx_eom_pi_dcc_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0     : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_PI_DCC_CAL_8_t;
__xdata __at( 0x1ad0 ) volatile RX_EOM_PI_DCC_CAL_8_t RX_EOM_PI_DCC_CAL_8;
#define reg_RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0  RX_EOM_PI_DCC_CAL_8.BF.RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0

// 0xb5	RX_SQ_0		rx_sq_0
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
__xdata __at( 0x1ad4 ) volatile RX_SQ_0_t RX_SQ_0;
#define reg_RX_SQ_TOP_DONE_LANE  RX_SQ_0.BF.RX_SQ_TOP_DONE_LANE
#define reg_RX_SQ_TESTBUS_CORE_SEL_LANE_2_0  RX_SQ_0.BF.RX_SQ_TESTBUS_CORE_SEL_LANE_2_0
#define reg_RX_SQ_TOP_START_LANE  RX_SQ_0.BF.RX_SQ_TOP_START_LANE
#define reg_RX_SQ_UPDN_RD_LANE  RX_SQ_0.BF.RX_SQ_UPDN_RD_LANE
#define reg_RX_SQ_CMP_CTRL_EXT_LANE  RX_SQ_0.BF.RX_SQ_CMP_CTRL_EXT_LANE
#define reg_RX_SQ_COMN_EXT_EN_LANE  RX_SQ_0.BF.RX_SQ_COMN_EXT_EN_LANE

// 0xb6	SQ_CAL_0		sq_cal_0
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
__xdata __at( 0x1ad8 ) volatile SQ_CAL_0_t SQ_CAL_0;
#define reg_SQ_CAL_RESULT_AVG_EN_LANE  SQ_CAL_0.BF.SQ_CAL_RESULT_AVG_EN_LANE
#define reg_SQ_CAL_BIN_SEARCH_ENABLE_LANE  SQ_CAL_0.BF.SQ_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  SQ_CAL_0.BF.SQ_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_SQ_CAL_DIR_INV_LANE  SQ_CAL_0.BF.SQ_CAL_DIR_INV_LANE
#define reg_SQ_CAL_BYPASS_EN_LANE  SQ_CAL_0.BF.SQ_CAL_BYPASS_EN_LANE
#define reg_SQ_CAL_SINGLE_EN_LANE  SQ_CAL_0.BF.SQ_CAL_SINGLE_EN_LANE

// 0xb7	SQ_CAL_1		sq_cal_1
typedef union {
	struct {
		uint8_t SQ_CAL_TIMEOUT_STEPS_LANE_2_0            : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t SQ_CAL_TOGGLE_TIMES_LANE_2_0             : 3;	/*  [5:3]     r/w 3'h2*/
		uint8_t SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0      : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_1_t;
__xdata __at( 0x1adc ) volatile SQ_CAL_1_t SQ_CAL_1;
#define reg_SQ_CAL_TIMEOUT_STEPS_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_SQ_CAL_TOGGLE_TIMES_LANE_2_0  SQ_CAL_1.BF.SQ_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  SQ_CAL_1.BF.SQ_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0xb8	SQ_CAL_2		sq_cal_2
typedef union {
	struct {
		uint8_t SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_2_t;
__xdata __at( 0x1ae0 ) volatile SQ_CAL_2_t SQ_CAL_2;
#define reg_SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0  SQ_CAL_2.BF.SQ_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xb9	SQ_CAL_3		sq_cal_3
typedef union {
	struct {
		uint8_t SQ_CAL_INDV_EXT_EN_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MAX_LANE_5_0                  : 6;	/*  [6:1]     r/w 6'h1f*/
		uint8_t SQ_CAL_TIMEOUT_CHK_DIS_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_3_t;
__xdata __at( 0x1ae4 ) volatile SQ_CAL_3_t SQ_CAL_3;
#define reg_SQ_CAL_INDV_EXT_EN_LANE  SQ_CAL_3.BF.SQ_CAL_INDV_EXT_EN_LANE
#define reg_SQ_CAL_VAL_MAX_LANE_5_0  SQ_CAL_3.BF.SQ_CAL_VAL_MAX_LANE_5_0
#define reg_SQ_CAL_TIMEOUT_CHK_DIS_LANE  SQ_CAL_3.BF.SQ_CAL_TIMEOUT_CHK_DIS_LANE

// 0xba	SQ_CAL_4		sq_cal_4
typedef union {
	struct {
		uint8_t SQ_CAL_CAL_DONE_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_CAL_EN_EXT_LANE                   : 1;	/*      1     r/w 1'h0*/
		uint8_t SQ_CAL_VAL_MIN_LANE_5_0                  : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_4_t;
__xdata __at( 0x1ae8 ) volatile SQ_CAL_4_t SQ_CAL_4;
#define reg_SQ_CAL_CAL_DONE_RD_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_DONE_RD_LANE
#define reg_SQ_CAL_CAL_EN_EXT_LANE  SQ_CAL_4.BF.SQ_CAL_CAL_EN_EXT_LANE
#define reg_SQ_CAL_VAL_MIN_LANE_5_0  SQ_CAL_4.BF.SQ_CAL_VAL_MIN_LANE_5_0

// 0xbb	SQ_CAL_5		sq_cal_5
typedef union {
	struct {
		uint8_t SQ_CAL_OVERFLOW_RD_LANE                  : 1;	/*      0       r 1'h0*/
		uint8_t SQ_CAL_TIMEOUT_RD_LANE                   : 1;	/*      1       r 1'h0*/
		uint8_t SQ_CAL_RESULT_EXT_LANE_5_0               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_5_t;
__xdata __at( 0x1aec ) volatile SQ_CAL_5_t SQ_CAL_5;
#define reg_SQ_CAL_OVERFLOW_RD_LANE  SQ_CAL_5.BF.SQ_CAL_OVERFLOW_RD_LANE
#define reg_SQ_CAL_TIMEOUT_RD_LANE  SQ_CAL_5.BF.SQ_CAL_TIMEOUT_RD_LANE
#define reg_SQ_CAL_RESULT_EXT_LANE_5_0  SQ_CAL_5.BF.SQ_CAL_RESULT_EXT_LANE_5_0

// 0xbc	SQ_CAL_6		sq_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_CAL_RESULT_RD_LANE_5_0                : 6;	/*  [6:1]       r 6'h0*/
		uint8_t SQ_CAL_UNDERFLOW_RD_LANE                 : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_CAL_6_t;
__xdata __at( 0x1af0 ) volatile SQ_CAL_6_t SQ_CAL_6;
#define reg_SQ_CAL_RESULT_RD_LANE_5_0  SQ_CAL_6.BF.SQ_CAL_RESULT_RD_LANE_5_0
#define reg_SQ_CAL_UNDERFLOW_RD_LANE  SQ_CAL_6.BF.SQ_CAL_UNDERFLOW_RD_LANE

#endif
