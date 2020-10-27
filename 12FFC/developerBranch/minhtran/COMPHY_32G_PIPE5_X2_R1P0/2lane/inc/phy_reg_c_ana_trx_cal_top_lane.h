#ifndef PHY_REG_C_ANA_TRX_CAL_TOP_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_TOP_LANE_H



// 0x80	DCC_0		TBD
typedef union {
	struct {
		uint8_t DCC_TOP_CONT_START_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t DCC_TOP_START_LANE                       : 1;	/*      1     r/w 1'h0*/
		uint8_t DCC_UPDN_RD_LANE                         : 1;	/*      2       r 1'h0*/
		uint8_t DCC_AUTO_ZERO_CLK_EXT_LANE               : 1;	/*      3     r/w 1'h0*/
		uint8_t DCC_CMP_CTRL_EXT_LANE_2_0                : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t DCC_COMN_EXT_EN_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DCC_0_t;
__xdata __at( 0xe00 ) volatile DCC_0_t DCC_0;
#define reg_DCC_TOP_CONT_START_LANE  DCC_0.BF.DCC_TOP_CONT_START_LANE
#define reg_DCC_TOP_START_LANE  DCC_0.BF.DCC_TOP_START_LANE
#define reg_DCC_UPDN_RD_LANE  DCC_0.BF.DCC_UPDN_RD_LANE
#define reg_DCC_AUTO_ZERO_CLK_EXT_LANE  DCC_0.BF.DCC_AUTO_ZERO_CLK_EXT_LANE
#define reg_DCC_CMP_CTRL_EXT_LANE_2_0  DCC_0.BF.DCC_CMP_CTRL_EXT_LANE_2_0
#define reg_DCC_COMN_EXT_EN_LANE  DCC_0.BF.DCC_COMN_EXT_EN_LANE

// 0x81	DCC_1		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t DCC_TOP_CONT_DONE_LANE                   : 1;	/*      3       r 1'h0*/
		uint8_t DCC_TOP_DONE_LANE                        : 1;	/*      4       r 1'h0*/
		uint8_t DCC_TESTBUS_CORE_SEL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DCC_1_t;
__xdata __at( 0xe04 ) volatile DCC_1_t DCC_1;
#define reg_DCC_TOP_CONT_DONE_LANE  DCC_1.BF.DCC_TOP_CONT_DONE_LANE
#define reg_DCC_TOP_DONE_LANE  DCC_1.BF.DCC_TOP_DONE_LANE
#define reg_DCC_TESTBUS_CORE_SEL_LANE_2_0  DCC_1.BF.DCC_TESTBUS_CORE_SEL_LANE_2_0

// 0x82	TX_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_DIR_INV_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_CAL_CONT_NUM_LANE_3_0             : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t TX_DCC_CAL_BYPASS_EN_LANE                : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_DCC_CAL_CONT_EN_LANE                  : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_DCC_CAL_SINGLE_EN_LANE                : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_0_t;
__xdata __at( 0xe08 ) volatile TX_DCC_CAL_0_t TX_DCC_CAL_0;
#define reg_TX_DCC_CAL_DIR_INV_LANE  TX_DCC_CAL_0.BF.TX_DCC_CAL_DIR_INV_LANE
#define reg_TX_DCC_CAL_CONT_NUM_LANE_3_0  TX_DCC_CAL_0.BF.TX_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_TX_DCC_CAL_BYPASS_EN_LANE  TX_DCC_CAL_0.BF.TX_DCC_CAL_BYPASS_EN_LANE
#define reg_TX_DCC_CAL_CONT_EN_LANE  TX_DCC_CAL_0.BF.TX_DCC_CAL_CONT_EN_LANE
#define reg_TX_DCC_CAL_SINGLE_EN_LANE  TX_DCC_CAL_0.BF.TX_DCC_CAL_SINGLE_EN_LANE

// 0x83	TX_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_RESULT_AVG_EN_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_CAL_BIN_SEARCH_ENABLE_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC_CAL_CMP_CTRL_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_1_t;
__xdata __at( 0xe0c ) volatile TX_DCC_CAL_1_t TX_DCC_CAL_1;
#define reg_TX_DCC_CAL_RESULT_AVG_EN_LANE  TX_DCC_CAL_1.BF.TX_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_TX_DCC_CAL_BIN_SEARCH_ENABLE_LANE  TX_DCC_CAL_1.BF.TX_DCC_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_TX_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_DCC_CAL_1.BF.TX_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC_CAL_CMP_CTRL_LANE_2_0  TX_DCC_CAL_1.BF.TX_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x84	TX_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_TOGGLE_TIMES_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t TX_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_2_t;
__xdata __at( 0xe10 ) volatile TX_DCC_CAL_2_t TX_DCC_CAL_2;
#define reg_TX_DCC_CAL_TOGGLE_TIMES_LANE_2_0  TX_DCC_CAL_2.BF.TX_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_DCC_CAL_2.BF.TX_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC_CAL_2.BF.TX_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x85	TX_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_3_t;
__xdata __at( 0xe14 ) volatile TX_DCC_CAL_3_t TX_DCC_CAL_3;
#define reg_TX_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0  TX_DCC_CAL_3.BF.TX_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x86	TX_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_INDV_EXT_EN_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_CAL_TIMEOUT_CHK_DIS_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC_CAL_TIMEOUT_STEPS_LANE_2_0        : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t TX_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_4_t;
__xdata __at( 0xe18 ) volatile TX_DCC_CAL_4_t TX_DCC_CAL_4;
#define reg_TX_DCC_CAL_INDV_EXT_EN_LANE  TX_DCC_CAL_4.BF.TX_DCC_CAL_INDV_EXT_EN_LANE
#define reg_TX_DCC_CAL_TIMEOUT_CHK_DIS_LANE  TX_DCC_CAL_4.BF.TX_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  TX_DCC_CAL_4.BF.TX_DCC_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_TX_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0  TX_DCC_CAL_4.BF.TX_DCC_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0

// 0x87	TX_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_CAL_DONE_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_CAL_CAL_EN_EXT_LANE               : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC_CAL_VAL_MAX_LANE_5_0              : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_5_t;
__xdata __at( 0xe1c ) volatile TX_DCC_CAL_5_t TX_DCC_CAL_5;
#define reg_TX_DCC_CAL_CAL_DONE_RD_LANE  TX_DCC_CAL_5.BF.TX_DCC_CAL_CAL_DONE_RD_LANE
#define reg_TX_DCC_CAL_CAL_EN_EXT_LANE  TX_DCC_CAL_5.BF.TX_DCC_CAL_CAL_EN_EXT_LANE
#define reg_TX_DCC_CAL_VAL_MAX_LANE_5_0  TX_DCC_CAL_5.BF.TX_DCC_CAL_VAL_MAX_LANE_5_0

// 0x88	TX_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_OVERFLOW_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_CAL_TIMEOUT_RD_LANE               : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_CAL_VAL_MIN_LANE_5_0              : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_6_t;
__xdata __at( 0xe20 ) volatile TX_DCC_CAL_6_t TX_DCC_CAL_6;
#define reg_TX_DCC_CAL_OVERFLOW_RD_LANE  TX_DCC_CAL_6.BF.TX_DCC_CAL_OVERFLOW_RD_LANE
#define reg_TX_DCC_CAL_TIMEOUT_RD_LANE  TX_DCC_CAL_6.BF.TX_DCC_CAL_TIMEOUT_RD_LANE
#define reg_TX_DCC_CAL_VAL_MIN_LANE_5_0  TX_DCC_CAL_6.BF.TX_DCC_CAL_VAL_MIN_LANE_5_0

// 0x89	TX_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC_CAL_UNDERFLOW_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_CAL_RESULT_EXT_LANE_5_0           : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_7_t;
__xdata __at( 0xe24 ) volatile TX_DCC_CAL_7_t TX_DCC_CAL_7;
#define reg_TX_DCC_CAL_UNDERFLOW_RD_LANE  TX_DCC_CAL_7.BF.TX_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_TX_DCC_CAL_RESULT_EXT_LANE_5_0  TX_DCC_CAL_7.BF.TX_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x8a	TX_DCC_CAL_8		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_CAL_RESULT_RD_LANE_5_0            : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_8_t;
__xdata __at( 0xe28 ) volatile TX_DCC_CAL_8_t TX_DCC_CAL_8;
#define reg_TX_DCC_CAL_RESULT_RD_LANE_5_0  TX_DCC_CAL_8.BF.TX_DCC_CAL_RESULT_RD_LANE_5_0

// 0x8b	RX_DLL_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_DLL_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DLL_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_DLL_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_DLL_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_DLL_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_0_t;
__xdata __at( 0xe2c ) volatile RX_DLL_DCC_CAL_0_t RX_DLL_DCC_CAL_0;
#define reg_RX_DLL_DCC_CAL_DIR_INV_LANE  RX_DLL_DCC_CAL_0.BF.RX_DLL_DCC_CAL_DIR_INV_LANE
#define reg_RX_DLL_DCC_CAL_CONT_NUM_LANE_3_0  RX_DLL_DCC_CAL_0.BF.RX_DLL_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_DLL_DCC_CAL_BYPASS_EN_LANE  RX_DLL_DCC_CAL_0.BF.RX_DLL_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_DLL_DCC_CAL_CONT_EN_LANE  RX_DLL_DCC_CAL_0.BF.RX_DLL_DCC_CAL_CONT_EN_LANE
#define reg_RX_DLL_DCC_CAL_SINGLE_EN_LANE  RX_DLL_DCC_CAL_0.BF.RX_DLL_DCC_CAL_SINGLE_EN_LANE

// 0x8c	RX_DLL_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_DLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_DLL_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_DLL_DCC_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_1_t;
__xdata __at( 0xe30 ) volatile RX_DLL_DCC_CAL_1_t RX_DLL_DCC_CAL_1;
#define reg_RX_DLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_DLL_DCC_CAL_1.BF.RX_DLL_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_DLL_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_DLL_DCC_CAL_1.BF.RX_DLL_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_DLL_DCC_CAL_CMP_CTRL_LANE_2_0  RX_DLL_DCC_CAL_1.BF.RX_DLL_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x8d	RX_DLL_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_DLL_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DLL_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t RX_DLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_2_t;
__xdata __at( 0xe34 ) volatile RX_DLL_DCC_CAL_2_t RX_DLL_DCC_CAL_2;
#define reg_RX_DLL_DCC_CAL_INDV_EXT_EN_LANE  RX_DLL_DCC_CAL_2.BF.RX_DLL_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_DLL_DCC_CAL_RESULT_AVG_EN_LANE  RX_DLL_DCC_CAL_2.BF.RX_DLL_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_DLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_DLL_DCC_CAL_2.BF.RX_DLL_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_DLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_DLL_DCC_CAL_2.BF.RX_DLL_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x8e	RX_DLL_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_DLL_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_DLL_DCC_CAL_VAL_MAX_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_3_t;
__xdata __at( 0xe38 ) volatile RX_DLL_DCC_CAL_3_t RX_DLL_DCC_CAL_3;
#define reg_RX_DLL_DCC_CAL_CAL_DONE_RD_LANE  RX_DLL_DCC_CAL_3.BF.RX_DLL_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_DLL_DCC_CAL_CAL_EN_EXT_LANE  RX_DLL_DCC_CAL_3.BF.RX_DLL_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_DLL_DCC_CAL_VAL_MAX_LANE_5_0  RX_DLL_DCC_CAL_3.BF.RX_DLL_DCC_CAL_VAL_MAX_LANE_5_0

// 0x8f	RX_DLL_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RX_DLL_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_DLL_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t RX_DLL_DCC_CAL_VAL_MIN_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_4_t;
__xdata __at( 0xe3c ) volatile RX_DLL_DCC_CAL_4_t RX_DLL_DCC_CAL_4;
#define reg_RX_DLL_DCC_CAL_OVERFLOW_RD_LANE  RX_DLL_DCC_CAL_4.BF.RX_DLL_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_DLL_DCC_CAL_TIMEOUT_RD_LANE  RX_DLL_DCC_CAL_4.BF.RX_DLL_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_DLL_DCC_CAL_VAL_MIN_LANE_5_0  RX_DLL_DCC_CAL_4.BF.RX_DLL_DCC_CAL_VAL_MIN_LANE_5_0

// 0x90	RX_DLL_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_DLL_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_DLL_DCC_CAL_RESULT_EXT_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_5_t;
__xdata __at( 0xe40 ) volatile RX_DLL_DCC_CAL_5_t RX_DLL_DCC_CAL_5;
#define reg_RX_DLL_DCC_CAL_UNDERFLOW_RD_LANE  RX_DLL_DCC_CAL_5.BF.RX_DLL_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_DLL_DCC_CAL_RESULT_EXT_LANE_5_0  RX_DLL_DCC_CAL_5.BF.RX_DLL_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x91	RX_DLL_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_DLL_DCC_CAL_RESULT_RD_LANE_5_0        : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DLL_DCC_CAL_6_t;
__xdata __at( 0xe44 ) volatile RX_DLL_DCC_CAL_6_t RX_DLL_DCC_CAL_6;
#define reg_RX_DLL_DCC_CAL_RESULT_RD_LANE_5_0  RX_DLL_DCC_CAL_6.BF.RX_DLL_DCC_CAL_RESULT_RD_LANE_5_0

// 0x92	RX_EOM_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t RX_EOM_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h1*/
		uint8_t RX_EOM_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_EOM_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_0_t;
__xdata __at( 0xe48 ) volatile RX_EOM_DCC_CAL_0_t RX_EOM_DCC_CAL_0;
#define reg_RX_EOM_DCC_CAL_DIR_INV_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_DIR_INV_LANE
#define reg_RX_EOM_DCC_CAL_CONT_NUM_LANE_3_0  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_EOM_DCC_CAL_CONT_EN_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_CONT_EN_LANE
#define reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE  RX_EOM_DCC_CAL_0.BF.RX_EOM_DCC_CAL_SINGLE_EN_LANE

// 0x93	RX_EOM_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_EOM_DCC_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_1_t;
__xdata __at( 0xe4c ) volatile RX_EOM_DCC_CAL_1_t RX_EOM_DCC_CAL_1;
#define reg_RX_EOM_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_EOM_DCC_CAL_1.BF.RX_EOM_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_EOM_DCC_CAL_1.BF.RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_EOM_DCC_CAL_CMP_CTRL_LANE_2_0  RX_EOM_DCC_CAL_1.BF.RX_EOM_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x94	RX_EOM_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_TIMEOUT_CHK_DIS_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_RESULT_AVG_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_TOGGLE_TIMES_LANE_2_0     : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_2_t;
__xdata __at( 0xe50 ) volatile RX_EOM_DCC_CAL_2_t RX_EOM_DCC_CAL_2;
#define reg_RX_EOM_DCC_CAL_TIMEOUT_CHK_DIS_LANE  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_RX_EOM_DCC_CAL_RESULT_AVG_EN_LANE  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_RESULT_AVG_EN_LANE
#define reg_RX_EOM_DCC_CAL_TOGGLE_TIMES_LANE_2_0  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_EOM_DCC_CAL_2.BF.RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x95	RX_EOM_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RX_EOM_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_EOM_DCC_CAL_TIMEOUT_STEPS_LANE_2_0    : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_3_t;
__xdata __at( 0xe54 ) volatile RX_EOM_DCC_CAL_3_t RX_EOM_DCC_CAL_3;
#define reg_RX_EOM_DCC_CAL_OVERFLOW_RD_LANE  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_EOM_DCC_CAL_TIMEOUT_RD_LANE  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_EOM_DCC_CAL_CAL_DONE_RD_LANE  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_EOM_DCC_CAL_CAL_EN_EXT_LANE  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_EOM_DCC_CAL_INDV_EXT_EN_LANE  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_EOM_DCC_CAL_TIMEOUT_STEPS_LANE_2_0  RX_EOM_DCC_CAL_3.BF.RX_EOM_DCC_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x96	RX_EOM_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_EOM_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_EOM_DCC_CAL_VAL_MAX_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_4_t;
__xdata __at( 0xe58 ) volatile RX_EOM_DCC_CAL_4_t RX_EOM_DCC_CAL_4;
#define reg_RX_EOM_DCC_CAL_UNDERFLOW_RD_LANE  RX_EOM_DCC_CAL_4.BF.RX_EOM_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_EOM_DCC_CAL_VAL_MAX_LANE_5_0  RX_EOM_DCC_CAL_4.BF.RX_EOM_DCC_CAL_VAL_MAX_LANE_5_0

// 0x97	RX_EOM_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_DCC_CAL_VAL_MIN_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_5_t;
__xdata __at( 0xe5c ) volatile RX_EOM_DCC_CAL_5_t RX_EOM_DCC_CAL_5;
#define reg_RX_EOM_DCC_CAL_VAL_MIN_LANE_5_0  RX_EOM_DCC_CAL_5.BF.RX_EOM_DCC_CAL_VAL_MIN_LANE_5_0

// 0x98	RX_EOM_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_DCC_CAL_RESULT_EXT_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_6_t;
__xdata __at( 0xe60 ) volatile RX_EOM_DCC_CAL_6_t RX_EOM_DCC_CAL_6;
#define reg_RX_EOM_DCC_CAL_RESULT_EXT_LANE_5_0  RX_EOM_DCC_CAL_6.BF.RX_EOM_DCC_CAL_RESULT_EXT_LANE_5_0

// 0x99	RX_EOM_DCC_CAL_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_EOM_DCC_CAL_RESULT_RD_LANE_5_0        : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EOM_DCC_CAL_7_t;
__xdata __at( 0xe64 ) volatile RX_EOM_DCC_CAL_7_t RX_EOM_DCC_CAL_7;
#define reg_RX_EOM_DCC_CAL_RESULT_RD_LANE_5_0  RX_EOM_DCC_CAL_7.BF.RX_EOM_DCC_CAL_RESULT_RD_LANE_5_0

// 0x9a	RX_CLK_DCC_CAL_0		TBD
typedef union {
	struct {
		uint8_t RX_CLK_DCC_CAL_DIR_INV_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_CLK_DCC_CAL_CONT_NUM_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t RX_CLK_DCC_CAL_BYPASS_EN_LANE            : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_CLK_DCC_CAL_CONT_EN_LANE              : 1;	/*      6     r/w 1'h1*/
		uint8_t RX_CLK_DCC_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_0_t;
__xdata __at( 0xe68 ) volatile RX_CLK_DCC_CAL_0_t RX_CLK_DCC_CAL_0;
#define reg_RX_CLK_DCC_CAL_DIR_INV_LANE  RX_CLK_DCC_CAL_0.BF.RX_CLK_DCC_CAL_DIR_INV_LANE
#define reg_RX_CLK_DCC_CAL_CONT_NUM_LANE_3_0  RX_CLK_DCC_CAL_0.BF.RX_CLK_DCC_CAL_CONT_NUM_LANE_3_0
#define reg_RX_CLK_DCC_CAL_BYPASS_EN_LANE  RX_CLK_DCC_CAL_0.BF.RX_CLK_DCC_CAL_BYPASS_EN_LANE
#define reg_RX_CLK_DCC_CAL_CONT_EN_LANE  RX_CLK_DCC_CAL_0.BF.RX_CLK_DCC_CAL_CONT_EN_LANE
#define reg_RX_CLK_DCC_CAL_SINGLE_EN_LANE  RX_CLK_DCC_CAL_0.BF.RX_CLK_DCC_CAL_SINGLE_EN_LANE

// 0x9b	RX_CLK_DCC_CAL_1		TBD
typedef union {
	struct {
		uint8_t RX_CLK_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_CLK_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_CLK_DCC_CAL_CMP_CTRL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_1_t;
__xdata __at( 0xe6c ) volatile RX_CLK_DCC_CAL_1_t RX_CLK_DCC_CAL_1;
#define reg_RX_CLK_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  RX_CLK_DCC_CAL_1.BF.RX_CLK_DCC_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_RX_CLK_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  RX_CLK_DCC_CAL_1.BF.RX_CLK_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_RX_CLK_DCC_CAL_CMP_CTRL_LANE_2_0  RX_CLK_DCC_CAL_1.BF.RX_CLK_DCC_CAL_CMP_CTRL_LANE_2_0

// 0x9c	RX_CLK_DCC_CAL_2		TBD
typedef union {
	struct {
		uint8_t RX_CLK_DCC_CAL_OVERFLOW_RD_LANE          : 1;	/*      0       r 1'h0*/
		uint8_t RX_CLK_DCC_CAL_TIMEOUT_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t RX_CLK_DCC_CAL_CAL_DONE_RD_LANE          : 1;	/*      2       r 1'h0*/
		uint8_t RX_CLK_DCC_CAL_CAL_EN_EXT_LANE           : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CLK_DCC_CAL_INDV_EXT_EN_LANE          : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CLK_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_2_t;
__xdata __at( 0xe70 ) volatile RX_CLK_DCC_CAL_2_t RX_CLK_DCC_CAL_2;
#define reg_RX_CLK_DCC_CAL_OVERFLOW_RD_LANE  RX_CLK_DCC_CAL_2.BF.RX_CLK_DCC_CAL_OVERFLOW_RD_LANE
#define reg_RX_CLK_DCC_CAL_TIMEOUT_RD_LANE  RX_CLK_DCC_CAL_2.BF.RX_CLK_DCC_CAL_TIMEOUT_RD_LANE
#define reg_RX_CLK_DCC_CAL_CAL_DONE_RD_LANE  RX_CLK_DCC_CAL_2.BF.RX_CLK_DCC_CAL_CAL_DONE_RD_LANE
#define reg_RX_CLK_DCC_CAL_CAL_EN_EXT_LANE  RX_CLK_DCC_CAL_2.BF.RX_CLK_DCC_CAL_CAL_EN_EXT_LANE
#define reg_RX_CLK_DCC_CAL_INDV_EXT_EN_LANE  RX_CLK_DCC_CAL_2.BF.RX_CLK_DCC_CAL_INDV_EXT_EN_LANE
#define reg_RX_CLK_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0  RX_CLK_DCC_CAL_2.BF.RX_CLK_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0

// 0x9d	RX_CLK_DCC_CAL_3		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_CLK_DCC_CAL_UNDERFLOW_RD_LANE         : 1;	/*      1       r 1'h0*/
		uint8_t RX_CLK_DCC_CAL_VAL_MAX_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_3_t;
__xdata __at( 0xe74 ) volatile RX_CLK_DCC_CAL_3_t RX_CLK_DCC_CAL_3;
#define reg_RX_CLK_DCC_CAL_UNDERFLOW_RD_LANE  RX_CLK_DCC_CAL_3.BF.RX_CLK_DCC_CAL_UNDERFLOW_RD_LANE
#define reg_RX_CLK_DCC_CAL_VAL_MAX_LANE_5_0  RX_CLK_DCC_CAL_3.BF.RX_CLK_DCC_CAL_VAL_MAX_LANE_5_0

// 0x9e	RX_CLK_DCC_CAL_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_CLK_DCC_CAL_VAL_MIN_LANE_5_0          : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_4_t;
__xdata __at( 0xe78 ) volatile RX_CLK_DCC_CAL_4_t RX_CLK_DCC_CAL_4;
#define reg_RX_CLK_DCC_CAL_VAL_MIN_LANE_5_0  RX_CLK_DCC_CAL_4.BF.RX_CLK_DCC_CAL_VAL_MIN_LANE_5_0

// 0x9f	RX_CLK_DCC_CAL_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_CLK_DCC_CAL_RESULT_EXT_LANE_5_0       : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_5_t;
__xdata __at( 0xe7c ) volatile RX_CLK_DCC_CAL_5_t RX_CLK_DCC_CAL_5;
#define reg_RX_CLK_DCC_CAL_RESULT_EXT_LANE_5_0  RX_CLK_DCC_CAL_5.BF.RX_CLK_DCC_CAL_RESULT_EXT_LANE_5_0

// 0xa0	RX_CLK_DCC_CAL_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RX_CLK_DCC_CAL_RESULT_RD_LANE_5_0        : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CLK_DCC_CAL_6_t;
__xdata __at( 0xe80 ) volatile RX_CLK_DCC_CAL_6_t RX_CLK_DCC_CAL_6;
#define reg_RX_CLK_DCC_CAL_RESULT_RD_LANE_5_0  RX_CLK_DCC_CAL_6.BF.RX_CLK_DCC_CAL_RESULT_RD_LANE_5_0

// 0xa1	TX_DCC_CAL_POST_DIV_0		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_POST_DIV_DIR_INV_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_CONT_NUM_LANE_3_0    : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE       : 1;	/*      5     r/w 1'h1*/
		uint8_t TX_DCC_CAL_POST_DIV_CONT_EN_LANE         : 1;	/*      6     r/w 1'h1*/
		uint8_t TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE       : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_0_t;
__xdata __at( 0xe84 ) volatile TX_DCC_CAL_POST_DIV_0_t TX_DCC_CAL_POST_DIV_0;
#define reg_TX_DCC_CAL_POST_DIV_DIR_INV_LANE  TX_DCC_CAL_POST_DIV_0.BF.TX_DCC_CAL_POST_DIV_DIR_INV_LANE
#define reg_TX_DCC_CAL_POST_DIV_CONT_NUM_LANE_3_0  TX_DCC_CAL_POST_DIV_0.BF.TX_DCC_CAL_POST_DIV_CONT_NUM_LANE_3_0
#define reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE  TX_DCC_CAL_POST_DIV_0.BF.TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE
#define reg_TX_DCC_CAL_POST_DIV_CONT_EN_LANE  TX_DCC_CAL_POST_DIV_0.BF.TX_DCC_CAL_POST_DIV_CONT_EN_LANE
#define reg_TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE  TX_DCC_CAL_POST_DIV_0.BF.TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE

// 0xa2	TX_DCC_CAL_POST_DIV_1		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_POST_DIV_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_CMP_CTRL_LANE_2_0    : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_1_t;
__xdata __at( 0xe88 ) volatile TX_DCC_CAL_POST_DIV_1_t TX_DCC_CAL_POST_DIV_1;
#define reg_TX_DCC_CAL_POST_DIV_UPDN_TOGGLE_DIR_SEL_LANE_1_0  TX_DCC_CAL_POST_DIV_1.BF.TX_DCC_CAL_POST_DIV_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_TX_DCC_CAL_POST_DIV_SINGLE_MODE_STEPSIZE_LANE_2_0  TX_DCC_CAL_POST_DIV_1.BF.TX_DCC_CAL_POST_DIV_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_TX_DCC_CAL_POST_DIV_CMP_CTRL_LANE_2_0  TX_DCC_CAL_POST_DIV_1.BF.TX_DCC_CAL_POST_DIV_CMP_CTRL_LANE_2_0

// 0xa3	TX_DCC_CAL_POST_DIV_2		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_POST_DIV_TIMEOUT_CHK_DIS_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_RESULT_AVG_EN_LANE   : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t TX_DCC_CAL_POST_DIV_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_2_t;
__xdata __at( 0xe8c ) volatile TX_DCC_CAL_POST_DIV_2_t TX_DCC_CAL_POST_DIV_2;
#define reg_TX_DCC_CAL_POST_DIV_TIMEOUT_CHK_DIS_LANE  TX_DCC_CAL_POST_DIV_2.BF.TX_DCC_CAL_POST_DIV_TIMEOUT_CHK_DIS_LANE
#define reg_TX_DCC_CAL_POST_DIV_RESULT_AVG_EN_LANE  TX_DCC_CAL_POST_DIV_2.BF.TX_DCC_CAL_POST_DIV_RESULT_AVG_EN_LANE
#define reg_TX_DCC_CAL_POST_DIV_TOGGLE_TIMES_LANE_2_0  TX_DCC_CAL_POST_DIV_2.BF.TX_DCC_CAL_POST_DIV_TOGGLE_TIMES_LANE_2_0
#define reg_TX_DCC_CAL_POST_DIV_CONT_MODE_STEPSIZE_LANE_2_0  TX_DCC_CAL_POST_DIV_2.BF.TX_DCC_CAL_POST_DIV_CONT_MODE_STEPSIZE_LANE_2_0

// 0xa4	TX_DCC_CAL_POST_DIV_3		TBD
typedef union {
	struct {
		uint8_t TX_DCC_CAL_POST_DIV_OVERFLOW_RD_LANE     : 1;	/*      0       r 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_TIMEOUT_RD_LANE      : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_CAL_DONE_RD_LANE     : 1;	/*      2       r 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_CAL_EN_EXT_LANE      : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_INDV_EXT_EN_LANE     : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_3_t;
__xdata __at( 0xe90 ) volatile TX_DCC_CAL_POST_DIV_3_t TX_DCC_CAL_POST_DIV_3;
#define reg_TX_DCC_CAL_POST_DIV_OVERFLOW_RD_LANE  TX_DCC_CAL_POST_DIV_3.BF.TX_DCC_CAL_POST_DIV_OVERFLOW_RD_LANE
#define reg_TX_DCC_CAL_POST_DIV_TIMEOUT_RD_LANE  TX_DCC_CAL_POST_DIV_3.BF.TX_DCC_CAL_POST_DIV_TIMEOUT_RD_LANE
#define reg_TX_DCC_CAL_POST_DIV_CAL_DONE_RD_LANE  TX_DCC_CAL_POST_DIV_3.BF.TX_DCC_CAL_POST_DIV_CAL_DONE_RD_LANE
#define reg_TX_DCC_CAL_POST_DIV_CAL_EN_EXT_LANE  TX_DCC_CAL_POST_DIV_3.BF.TX_DCC_CAL_POST_DIV_CAL_EN_EXT_LANE
#define reg_TX_DCC_CAL_POST_DIV_INDV_EXT_EN_LANE  TX_DCC_CAL_POST_DIV_3.BF.TX_DCC_CAL_POST_DIV_INDV_EXT_EN_LANE
#define reg_TX_DCC_CAL_POST_DIV_TIMEOUT_STEPS_LANE_2_0  TX_DCC_CAL_POST_DIV_3.BF.TX_DCC_CAL_POST_DIV_TIMEOUT_STEPS_LANE_2_0

// 0xa5	TX_DCC_CAL_POST_DIV_4		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_DCC_CAL_POST_DIV_UNDERFLOW_RD_LANE    : 1;	/*      1       r 1'h0*/
		uint8_t TX_DCC_CAL_POST_DIV_VAL_MAX_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_4_t;
__xdata __at( 0xe94 ) volatile TX_DCC_CAL_POST_DIV_4_t TX_DCC_CAL_POST_DIV_4;
#define reg_TX_DCC_CAL_POST_DIV_UNDERFLOW_RD_LANE  TX_DCC_CAL_POST_DIV_4.BF.TX_DCC_CAL_POST_DIV_UNDERFLOW_RD_LANE
#define reg_TX_DCC_CAL_POST_DIV_VAL_MAX_LANE_5_0  TX_DCC_CAL_POST_DIV_4.BF.TX_DCC_CAL_POST_DIV_VAL_MAX_LANE_5_0

// 0xa6	TX_DCC_CAL_POST_DIV_5		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_CAL_POST_DIV_VAL_MIN_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_5_t;
__xdata __at( 0xe98 ) volatile TX_DCC_CAL_POST_DIV_5_t TX_DCC_CAL_POST_DIV_5;
#define reg_TX_DCC_CAL_POST_DIV_VAL_MIN_LANE_5_0  TX_DCC_CAL_POST_DIV_5.BF.TX_DCC_CAL_POST_DIV_VAL_MIN_LANE_5_0

// 0xa7	TX_DCC_CAL_POST_DIV_6		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_CAL_POST_DIV_RESULT_EXT_LANE_5_0  : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_6_t;
__xdata __at( 0xe9c ) volatile TX_DCC_CAL_POST_DIV_6_t TX_DCC_CAL_POST_DIV_6;
#define reg_TX_DCC_CAL_POST_DIV_RESULT_EXT_LANE_5_0  TX_DCC_CAL_POST_DIV_6.BF.TX_DCC_CAL_POST_DIV_RESULT_EXT_LANE_5_0

// 0xa8	TX_DCC_CAL_POST_DIV_7		TBD
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TX_DCC_CAL_POST_DIV_RESULT_RD_LANE_5_0   : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_DCC_CAL_POST_DIV_7_t;
__xdata __at( 0xea0 ) volatile TX_DCC_CAL_POST_DIV_7_t TX_DCC_CAL_POST_DIV_7;
#define reg_TX_DCC_CAL_POST_DIV_RESULT_RD_LANE_5_0  TX_DCC_CAL_POST_DIV_7.BF.TX_DCC_CAL_POST_DIV_RESULT_RD_LANE_5_0

#endif
