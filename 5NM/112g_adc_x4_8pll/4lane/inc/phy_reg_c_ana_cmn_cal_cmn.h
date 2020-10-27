#ifndef PHY_REG_C_ANA_CMN_CAL_CMN_H
#define PHY_REG_C_ANA_CMN_CAL_CMN_H



// 0x0	RX_IMP_0		rx_imp_0
typedef union {
	struct {
		uint8_t RX_IMP_TESTBUS_CORE_SEL_2_0              : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RX_IMP_TOP_START                         : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_IMP_UPDN_RD                           : 1;	/*      4       r 1'h0*/
		uint8_t RX_IMP_AUTO_ZERO_CLK_EXT                 : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_IMP_CMP_CTRL_EXT                      : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_IMP_COMN_EXT_EN                       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_0_t;
__xdata __at( 0x8400 ) volatile RX_IMP_0_t RX_IMP_0;
#define reg_RX_IMP_TESTBUS_CORE_SEL_2_0  RX_IMP_0.BF.RX_IMP_TESTBUS_CORE_SEL_2_0
#define reg_RX_IMP_TOP_START  RX_IMP_0.BF.RX_IMP_TOP_START
#define reg_RX_IMP_UPDN_RD  RX_IMP_0.BF.RX_IMP_UPDN_RD
#define reg_RX_IMP_AUTO_ZERO_CLK_EXT  RX_IMP_0.BF.RX_IMP_AUTO_ZERO_CLK_EXT
#define reg_RX_IMP_CMP_CTRL_EXT  RX_IMP_0.BF.RX_IMP_CMP_CTRL_EXT
#define reg_RX_IMP_COMN_EXT_EN  RX_IMP_0.BF.RX_IMP_COMN_EXT_EN

// 0x1	RX_IMP_1		rx_imp_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t RX_IMP_TOP_DONE                          : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_1_t;
__xdata __at( 0x8404 ) volatile RX_IMP_1_t RX_IMP_1;
#define reg_RX_IMP_TOP_DONE  RX_IMP_1.BF.RX_IMP_TOP_DONE

// 0x2	RX_IMP_CAL_0		rx_imp_cal_0
typedef union {
	struct {
		uint8_t RX_IMP_CAL_UPDN_TOGGLE_DIR_SEL_1_0       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_IMP_CAL_SINGLE_MODE_STEPSIZE_2_0      : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t RX_IMP_CAL_DIR_INV                       : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_IMP_CAL_BYPASS_EN                     : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_IMP_CAL_SINGLE_EN                     : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_0_t;
__xdata __at( 0x8408 ) volatile RX_IMP_CAL_0_t RX_IMP_CAL_0;
#define reg_RX_IMP_CAL_UPDN_TOGGLE_DIR_SEL_1_0  RX_IMP_CAL_0.BF.RX_IMP_CAL_UPDN_TOGGLE_DIR_SEL_1_0
#define reg_RX_IMP_CAL_SINGLE_MODE_STEPSIZE_2_0  RX_IMP_CAL_0.BF.RX_IMP_CAL_SINGLE_MODE_STEPSIZE_2_0
#define reg_RX_IMP_CAL_DIR_INV  RX_IMP_CAL_0.BF.RX_IMP_CAL_DIR_INV
#define reg_RX_IMP_CAL_BYPASS_EN  RX_IMP_CAL_0.BF.RX_IMP_CAL_BYPASS_EN
#define reg_RX_IMP_CAL_SINGLE_EN  RX_IMP_CAL_0.BF.RX_IMP_CAL_SINGLE_EN

// 0x3	RX_IMP_CAL_1		rx_imp_cal_1
typedef union {
	struct {
		uint8_t RX_IMP_CAL_TIMEOUT_CHK_DIS               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_IMP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_2_0 : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t RX_IMP_CAL_RESULT_AVG_EN                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_IMP_CAL_TOGGLE_TIMES_2_0              : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_1_t;
__xdata __at( 0x840c ) volatile RX_IMP_CAL_1_t RX_IMP_CAL_1;
#define reg_RX_IMP_CAL_TIMEOUT_CHK_DIS  RX_IMP_CAL_1.BF.RX_IMP_CAL_TIMEOUT_CHK_DIS
#define reg_RX_IMP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_2_0  RX_IMP_CAL_1.BF.RX_IMP_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_2_0
#define reg_RX_IMP_CAL_RESULT_AVG_EN  RX_IMP_CAL_1.BF.RX_IMP_CAL_RESULT_AVG_EN
#define reg_RX_IMP_CAL_TOGGLE_TIMES_2_0  RX_IMP_CAL_1.BF.RX_IMP_CAL_TOGGLE_TIMES_2_0

// 0x4	RX_IMP_CAL_2		rx_imp_cal_2
typedef union {
	struct {
		uint8_t RX_IMP_CAL_SAMPLE_PULSE_DIV_7_0          : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_2_t;
__xdata __at( 0x8410 ) volatile RX_IMP_CAL_2_t RX_IMP_CAL_2;
#define reg_RX_IMP_CAL_SAMPLE_PULSE_DIV_7_0  RX_IMP_CAL_2.BF.RX_IMP_CAL_SAMPLE_PULSE_DIV_7_0

// 0x5	RX_IMP_CAL_3		rx_imp_cal_3
typedef union {
	struct {
		uint8_t RX_IMP_CAL_VAL_MAX_4_0                   : 5;	/*  [4:0]     r/w 5'h1f*/
		uint8_t RX_IMP_CAL_TIMEOUT_STEPS_2_0             : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_3_t;
__xdata __at( 0x8414 ) volatile RX_IMP_CAL_3_t RX_IMP_CAL_3;
#define reg_RX_IMP_CAL_VAL_MAX_4_0  RX_IMP_CAL_3.BF.RX_IMP_CAL_VAL_MAX_4_0
#define reg_RX_IMP_CAL_TIMEOUT_STEPS_2_0  RX_IMP_CAL_3.BF.RX_IMP_CAL_TIMEOUT_STEPS_2_0

// 0x6	RX_IMP_CAL_4		rx_imp_cal_4
typedef union {
	struct {
		uint8_t RX_IMP_CAL_CAL_DONE_RD                   : 1;	/*      0       r 1'h0*/
		uint8_t RX_IMP_CAL_CAL_EN_EXT                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_IMP_CAL_INDV_EXT_EN                   : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_IMP_CAL_VAL_MIN_4_0                   : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_4_t;
__xdata __at( 0x8418 ) volatile RX_IMP_CAL_4_t RX_IMP_CAL_4;
#define reg_RX_IMP_CAL_CAL_DONE_RD  RX_IMP_CAL_4.BF.RX_IMP_CAL_CAL_DONE_RD
#define reg_RX_IMP_CAL_CAL_EN_EXT  RX_IMP_CAL_4.BF.RX_IMP_CAL_CAL_EN_EXT
#define reg_RX_IMP_CAL_INDV_EXT_EN  RX_IMP_CAL_4.BF.RX_IMP_CAL_INDV_EXT_EN
#define reg_RX_IMP_CAL_VAL_MIN_4_0  RX_IMP_CAL_4.BF.RX_IMP_CAL_VAL_MIN_4_0

// 0x7	RX_IMP_CAL_5		rx_imp_cal_5
typedef union {
	struct {
		uint8_t RX_IMP_CAL_UNDERFLOW_RD                  : 1;	/*      0       r 1'h0*/
		uint8_t RX_IMP_CAL_OVERFLOW_RD                   : 1;	/*      1       r 1'h0*/
		uint8_t RX_IMP_CAL_TIMEOUT_RD                    : 1;	/*      2       r 1'h0*/
		uint8_t RX_IMP_CAL_RESULT_EXT_4_0                : 5;	/*  [7:3]     r/w 5'he*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_5_t;
__xdata __at( 0x841c ) volatile RX_IMP_CAL_5_t RX_IMP_CAL_5;
#define reg_RX_IMP_CAL_UNDERFLOW_RD  RX_IMP_CAL_5.BF.RX_IMP_CAL_UNDERFLOW_RD
#define reg_RX_IMP_CAL_OVERFLOW_RD  RX_IMP_CAL_5.BF.RX_IMP_CAL_OVERFLOW_RD
#define reg_RX_IMP_CAL_TIMEOUT_RD  RX_IMP_CAL_5.BF.RX_IMP_CAL_TIMEOUT_RD
#define reg_RX_IMP_CAL_RESULT_EXT_4_0  RX_IMP_CAL_5.BF.RX_IMP_CAL_RESULT_EXT_4_0

// 0x8	RX_IMP_CAL_6		rx_imp_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t RX_IMP_CAL_RESULT_RD_4_0                 : 5;	/*  [7:3]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_IMP_CAL_6_t;
__xdata __at( 0x8420 ) volatile RX_IMP_CAL_6_t RX_IMP_CAL_6;
#define reg_RX_IMP_CAL_RESULT_RD_4_0  RX_IMP_CAL_6.BF.RX_IMP_CAL_RESULT_RD_4_0

#endif
