#ifndef PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H
#define PHY_REG_C_ANA_TRX_CAL_BOT_LANE_H



// 0x0	DLL_0		dll_0
typedef union {
	struct {
		uint8_t DLL_TOP_CONT_DONE_LANE                   : 1;	/*      0       r 1'h0*/
		uint8_t DLL_TOP_DONE_LANE                        : 1;	/*      1       r 1'h0*/
		uint8_t DLL_TOP_CONT_START_LANE                  : 1;	/*      2     r/w 1'h0*/
		uint8_t DLL_TOP_START_LANE                       : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_UPDN_RD_LANE                         : 1;	/*      4       r 1'h0*/
		uint8_t DLL_CMP_CTRL_EXT_LANE_1_0                : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t DLL_COMN_EXT_EN_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_0_t;
__xdata __at( 0xc00 ) volatile DLL_0_t DLL_0;
#define reg_DLL_TOP_CONT_DONE_LANE  DLL_0.BF.DLL_TOP_CONT_DONE_LANE
#define reg_DLL_TOP_DONE_LANE  DLL_0.BF.DLL_TOP_DONE_LANE
#define reg_DLL_TOP_CONT_START_LANE  DLL_0.BF.DLL_TOP_CONT_START_LANE
#define reg_DLL_TOP_START_LANE  DLL_0.BF.DLL_TOP_START_LANE
#define reg_DLL_UPDN_RD_LANE  DLL_0.BF.DLL_UPDN_RD_LANE
#define reg_DLL_CMP_CTRL_EXT_LANE_1_0  DLL_0.BF.DLL_CMP_CTRL_EXT_LANE_1_0
#define reg_DLL_COMN_EXT_EN_LANE  DLL_0.BF.DLL_COMN_EXT_EN_LANE

// 0x1	DLL_1		dll_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t DLL_TESTBUS_CORE_SEL_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_1_t;
__xdata __at( 0xc04 ) volatile DLL_1_t DLL_1;
#define reg_DLL_TESTBUS_CORE_SEL_LANE_2_0  DLL_1.BF.DLL_TESTBUS_CORE_SEL_LANE_2_0

// 0x2	DLL_CMP_OFFSET_CAL_0		dll_cmp_offset_cal_0
typedef union {
	struct {
		uint8_t DLL_CMP_OFFSET_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_DIR_INV_LANE          : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_CMP_CTRL_LANE_1_0     : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE        : 1;	/*      6     r/w 1'h1*/
		uint8_t DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE        : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_0_t;
__xdata __at( 0xc08 ) volatile DLL_CMP_OFFSET_CAL_0_t DLL_CMP_OFFSET_CAL_0;
#define reg_DLL_CMP_OFFSET_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_CMP_OFFSET_CAL_0.BF.DLL_CMP_OFFSET_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_CMP_OFFSET_CAL_DIR_INV_LANE  DLL_CMP_OFFSET_CAL_0.BF.DLL_CMP_OFFSET_CAL_DIR_INV_LANE
#define reg_DLL_CMP_OFFSET_CAL_CMP_CTRL_LANE_1_0  DLL_CMP_OFFSET_CAL_0.BF.DLL_CMP_OFFSET_CAL_CMP_CTRL_LANE_1_0
#define reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE  DLL_CMP_OFFSET_CAL_0.BF.DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE
#define reg_DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE  DLL_CMP_OFFSET_CAL_0.BF.DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE

// 0x3	DLL_CMP_OFFSET_CAL_1		dll_cmp_offset_cal_1
typedef union {
	struct {
		uint8_t DLL_CMP_OFFSET_CAL_TIMEOUT_CHK_DIS_LANE  : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_RESULT_AVG_EN_LANE    : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_1_t;
__xdata __at( 0xc0c ) volatile DLL_CMP_OFFSET_CAL_1_t DLL_CMP_OFFSET_CAL_1;
#define reg_DLL_CMP_OFFSET_CAL_TIMEOUT_CHK_DIS_LANE  DLL_CMP_OFFSET_CAL_1.BF.DLL_CMP_OFFSET_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_CMP_OFFSET_CAL_RESULT_AVG_EN_LANE  DLL_CMP_OFFSET_CAL_1.BF.DLL_CMP_OFFSET_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_CMP_OFFSET_CAL_TOGGLE_TIMES_LANE_2_0  DLL_CMP_OFFSET_CAL_1.BF.DLL_CMP_OFFSET_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_CMP_OFFSET_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_CMP_OFFSET_CAL_1.BF.DLL_CMP_OFFSET_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_DLL_CMP_OFFSET_CAL_BIN_SEARCH_ENABLE_LANE  DLL_CMP_OFFSET_CAL_1.BF.DLL_CMP_OFFSET_CAL_BIN_SEARCH_ENABLE_LANE

// 0x4	DLL_CMP_OFFSET_CAL_2		dll_cmp_offset_cal_2
typedef union {
	struct {
		uint8_t DLL_CMP_OFFSET_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_2_t;
__xdata __at( 0xc10 ) volatile DLL_CMP_OFFSET_CAL_2_t DLL_CMP_OFFSET_CAL_2;
#define reg_DLL_CMP_OFFSET_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_CMP_OFFSET_CAL_2.BF.DLL_CMP_OFFSET_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x5	DLL_CMP_OFFSET_CAL_3		dll_cmp_offset_cal_3
typedef union {
	struct {
		uint8_t DLL_CMP_OFFSET_CAL_INDV_EXT_EN_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_VAL_MAX_LANE_3_0      : 4;	/*  [4:1]     r/w 4'hf*/
		uint8_t DLL_CMP_OFFSET_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_3_t;
__xdata __at( 0xc14 ) volatile DLL_CMP_OFFSET_CAL_3_t DLL_CMP_OFFSET_CAL_3;
#define reg_DLL_CMP_OFFSET_CAL_INDV_EXT_EN_LANE  DLL_CMP_OFFSET_CAL_3.BF.DLL_CMP_OFFSET_CAL_INDV_EXT_EN_LANE
#define reg_DLL_CMP_OFFSET_CAL_VAL_MAX_LANE_3_0  DLL_CMP_OFFSET_CAL_3.BF.DLL_CMP_OFFSET_CAL_VAL_MAX_LANE_3_0
#define reg_DLL_CMP_OFFSET_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_CMP_OFFSET_CAL_3.BF.DLL_CMP_OFFSET_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x6	DLL_CMP_OFFSET_CAL_4		dll_cmp_offset_cal_4
typedef union {
	struct {
		uint8_t DLL_CMP_OFFSET_CAL_OVERFLOW_RD_LANE      : 1;	/*      0       r 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_TIMEOUT_RD_LANE       : 1;	/*      1       r 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_CAL_DONE_RD_LANE      : 1;	/*      2       r 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_CAL_EN_EXT_LANE       : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_VAL_MIN_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_4_t;
__xdata __at( 0xc18 ) volatile DLL_CMP_OFFSET_CAL_4_t DLL_CMP_OFFSET_CAL_4;
#define reg_DLL_CMP_OFFSET_CAL_OVERFLOW_RD_LANE  DLL_CMP_OFFSET_CAL_4.BF.DLL_CMP_OFFSET_CAL_OVERFLOW_RD_LANE
#define reg_DLL_CMP_OFFSET_CAL_TIMEOUT_RD_LANE  DLL_CMP_OFFSET_CAL_4.BF.DLL_CMP_OFFSET_CAL_TIMEOUT_RD_LANE
#define reg_DLL_CMP_OFFSET_CAL_CAL_DONE_RD_LANE  DLL_CMP_OFFSET_CAL_4.BF.DLL_CMP_OFFSET_CAL_CAL_DONE_RD_LANE
#define reg_DLL_CMP_OFFSET_CAL_CAL_EN_EXT_LANE  DLL_CMP_OFFSET_CAL_4.BF.DLL_CMP_OFFSET_CAL_CAL_EN_EXT_LANE
#define reg_DLL_CMP_OFFSET_CAL_VAL_MIN_LANE_3_0  DLL_CMP_OFFSET_CAL_4.BF.DLL_CMP_OFFSET_CAL_VAL_MIN_LANE_3_0

// 0x7	DLL_CMP_OFFSET_CAL_5		dll_cmp_offset_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t DLL_CMP_OFFSET_CAL_UNDERFLOW_RD_LANE     : 1;	/*      3       r 1'h0*/
		uint8_t DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0   : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_5_t;
__xdata __at( 0xc1c ) volatile DLL_CMP_OFFSET_CAL_5_t DLL_CMP_OFFSET_CAL_5;
#define reg_DLL_CMP_OFFSET_CAL_UNDERFLOW_RD_LANE  DLL_CMP_OFFSET_CAL_5.BF.DLL_CMP_OFFSET_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0  DLL_CMP_OFFSET_CAL_5.BF.DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0

// 0x8	DLL_CMP_OFFSET_CAL_6		dll_cmp_offset_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t DLL_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0    : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CMP_OFFSET_CAL_6_t;
__xdata __at( 0xc20 ) volatile DLL_CMP_OFFSET_CAL_6_t DLL_CMP_OFFSET_CAL_6;
#define reg_DLL_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0  DLL_CMP_OFFSET_CAL_6.BF.DLL_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0

// 0x9	DLL_GM_CAL_0		dll_gm_cal_0
typedef union {
	struct {
		uint8_t DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DLL_GM_CAL_DIR_INV_LANE                  : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_GM_CAL_CMP_CTRL_LANE_1_0             : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DLL_GM_CAL_BYPASS_EN_LANE                : 1;	/*      6     r/w 1'h1*/
		uint8_t DLL_GM_CAL_SINGLE_EN_LANE                : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_0_t;
__xdata __at( 0xc24 ) volatile DLL_GM_CAL_0_t DLL_GM_CAL_0;
#define reg_DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_GM_CAL_0.BF.DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_GM_CAL_DIR_INV_LANE  DLL_GM_CAL_0.BF.DLL_GM_CAL_DIR_INV_LANE
#define reg_DLL_GM_CAL_CMP_CTRL_LANE_1_0  DLL_GM_CAL_0.BF.DLL_GM_CAL_CMP_CTRL_LANE_1_0
#define reg_DLL_GM_CAL_BYPASS_EN_LANE  DLL_GM_CAL_0.BF.DLL_GM_CAL_BYPASS_EN_LANE
#define reg_DLL_GM_CAL_SINGLE_EN_LANE  DLL_GM_CAL_0.BF.DLL_GM_CAL_SINGLE_EN_LANE

// 0xa	DLL_GM_CAL_1		dll_gm_cal_1
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
__xdata __at( 0xc28 ) volatile DLL_GM_CAL_1_t DLL_GM_CAL_1;
#define reg_DLL_GM_CAL_TIMEOUT_CHK_DIS_LANE  DLL_GM_CAL_1.BF.DLL_GM_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_GM_CAL_RESULT_AVG_EN_LANE  DLL_GM_CAL_1.BF.DLL_GM_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_GM_CAL_TOGGLE_TIMES_LANE_2_0  DLL_GM_CAL_1.BF.DLL_GM_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_GM_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_GM_CAL_1.BF.DLL_GM_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_DLL_GM_CAL_BIN_SEARCH_ENABLE_LANE  DLL_GM_CAL_1.BF.DLL_GM_CAL_BIN_SEARCH_ENABLE_LANE

// 0xb	DLL_GM_CAL_2		dll_gm_cal_2
typedef union {
	struct {
		uint8_t DLL_GM_CAL_SAMPLE_PULSE_DIV_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_2_t;
__xdata __at( 0xc2c ) volatile DLL_GM_CAL_2_t DLL_GM_CAL_2;
#define reg_DLL_GM_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_GM_CAL_2.BF.DLL_GM_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0xc	DLL_GM_CAL_3		dll_gm_cal_3
typedef union {
	struct {
		uint8_t DLL_GM_CAL_CAL_EN_EXT_LANE               : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_GM_CAL_INDV_EXT_EN_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t DLL_GM_CAL_VAL_MAX_LANE_2_0              : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t DLL_GM_CAL_TIMEOUT_STEPS_LANE_2_0        : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_3_t;
__xdata __at( 0xc30 ) volatile DLL_GM_CAL_3_t DLL_GM_CAL_3;
#define reg_DLL_GM_CAL_CAL_EN_EXT_LANE  DLL_GM_CAL_3.BF.DLL_GM_CAL_CAL_EN_EXT_LANE
#define reg_DLL_GM_CAL_INDV_EXT_EN_LANE  DLL_GM_CAL_3.BF.DLL_GM_CAL_INDV_EXT_EN_LANE
#define reg_DLL_GM_CAL_VAL_MAX_LANE_2_0  DLL_GM_CAL_3.BF.DLL_GM_CAL_VAL_MAX_LANE_2_0
#define reg_DLL_GM_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_GM_CAL_3.BF.DLL_GM_CAL_TIMEOUT_STEPS_LANE_2_0

// 0xd	DLL_GM_CAL_4		dll_gm_cal_4
typedef union {
	struct {
		uint8_t DLL_GM_CAL_TIMEOUT_RD_LANE               : 1;	/*      0       r 1'h0*/
		uint8_t DLL_GM_CAL_CAL_DONE_RD_LANE              : 1;	/*      1       r 1'h0*/
		uint8_t DLL_GM_CAL_RESULT_EXT_LANE_2_0           : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t DLL_GM_CAL_VAL_MIN_LANE_2_0              : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_4_t;
__xdata __at( 0xc34 ) volatile DLL_GM_CAL_4_t DLL_GM_CAL_4;
#define reg_DLL_GM_CAL_TIMEOUT_RD_LANE  DLL_GM_CAL_4.BF.DLL_GM_CAL_TIMEOUT_RD_LANE
#define reg_DLL_GM_CAL_CAL_DONE_RD_LANE  DLL_GM_CAL_4.BF.DLL_GM_CAL_CAL_DONE_RD_LANE
#define reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0  DLL_GM_CAL_4.BF.DLL_GM_CAL_RESULT_EXT_LANE_2_0
#define reg_DLL_GM_CAL_VAL_MIN_LANE_2_0  DLL_GM_CAL_4.BF.DLL_GM_CAL_VAL_MIN_LANE_2_0

// 0xe	DLL_GM_CAL_5		dll_gm_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t DLL_GM_CAL_RESULT_RD_LANE_2_0            : 3;	/*  [5:3]       r 3'h0*/
		uint8_t DLL_GM_CAL_UNDERFLOW_RD_LANE             : 1;	/*      6       r 1'h0*/
		uint8_t DLL_GM_CAL_OVERFLOW_RD_LANE              : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_GM_CAL_5_t;
__xdata __at( 0xc38 ) volatile DLL_GM_CAL_5_t DLL_GM_CAL_5;
#define reg_DLL_GM_CAL_RESULT_RD_LANE_2_0  DLL_GM_CAL_5.BF.DLL_GM_CAL_RESULT_RD_LANE_2_0
#define reg_DLL_GM_CAL_UNDERFLOW_RD_LANE  DLL_GM_CAL_5.BF.DLL_GM_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_GM_CAL_OVERFLOW_RD_LANE  DLL_GM_CAL_5.BF.DLL_GM_CAL_OVERFLOW_RD_LANE

// 0xf	EOM_DLL_GM_CAL_0		eom_dll_gm_cal_0
typedef union {
	struct {
		uint8_t EOM_DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t EOM_DLL_GM_CAL_DIR_INV_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_CMP_CTRL_LANE_1_0         : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t EOM_DLL_GM_CAL_BYPASS_EN_LANE            : 1;	/*      6     r/w 1'h1*/
		uint8_t EOM_DLL_GM_CAL_SINGLE_EN_LANE            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_GM_CAL_0_t;
__xdata __at( 0xc3c ) volatile EOM_DLL_GM_CAL_0_t EOM_DLL_GM_CAL_0;
#define reg_EOM_DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_EOM_DLL_GM_CAL_DIR_INV_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_DIR_INV_LANE
#define reg_EOM_DLL_GM_CAL_CMP_CTRL_LANE_1_0  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_CMP_CTRL_LANE_1_0
#define reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_BYPASS_EN_LANE
#define reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE  EOM_DLL_GM_CAL_0.BF.EOM_DLL_GM_CAL_SINGLE_EN_LANE

// 0x10	EOM_DLL_GM_CAL_1		eom_dll_gm_cal_1
typedef union {
	struct {
		uint8_t EOM_DLL_GM_CAL_CAL_EN_EXT_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_INDV_EXT_EN_LANE          : 1;	/*      1     r/w 1'h0*/
		uint8_t EOM_DLL_GM_CAL_VAL_MIN_LANE_2_0          : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t EOM_DLL_GM_CAL_VAL_MAX_LANE_2_0          : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_GM_CAL_1_t;
__xdata __at( 0xc40 ) volatile EOM_DLL_GM_CAL_1_t EOM_DLL_GM_CAL_1;
#define reg_EOM_DLL_GM_CAL_CAL_EN_EXT_LANE  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_CAL_EN_EXT_LANE
#define reg_EOM_DLL_GM_CAL_INDV_EXT_EN_LANE  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_INDV_EXT_EN_LANE
#define reg_EOM_DLL_GM_CAL_VAL_MIN_LANE_2_0  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_VAL_MIN_LANE_2_0
#define reg_EOM_DLL_GM_CAL_VAL_MAX_LANE_2_0  EOM_DLL_GM_CAL_1.BF.EOM_DLL_GM_CAL_VAL_MAX_LANE_2_0

// 0x11	EOM_DLL_GM_CAL_2		eom_dll_gm_cal_2
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
} EOM_DLL_GM_CAL_2_t;
__xdata __at( 0xc44 ) volatile EOM_DLL_GM_CAL_2_t EOM_DLL_GM_CAL_2;
#define reg_EOM_DLL_GM_CAL_UNDERFLOW_RD_LANE  EOM_DLL_GM_CAL_2.BF.EOM_DLL_GM_CAL_UNDERFLOW_RD_LANE
#define reg_EOM_DLL_GM_CAL_OVERFLOW_RD_LANE  EOM_DLL_GM_CAL_2.BF.EOM_DLL_GM_CAL_OVERFLOW_RD_LANE
#define reg_EOM_DLL_GM_CAL_TIMEOUT_RD_LANE  EOM_DLL_GM_CAL_2.BF.EOM_DLL_GM_CAL_TIMEOUT_RD_LANE
#define reg_EOM_DLL_GM_CAL_CAL_DONE_RD_LANE  EOM_DLL_GM_CAL_2.BF.EOM_DLL_GM_CAL_CAL_DONE_RD_LANE
#define reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0  EOM_DLL_GM_CAL_2.BF.EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0

// 0x12	EOM_DLL_GM_CAL_3		eom_dll_gm_cal_3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0        : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_GM_CAL_3_t;
__xdata __at( 0xc48 ) volatile EOM_DLL_GM_CAL_3_t EOM_DLL_GM_CAL_3;
#define reg_EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0  EOM_DLL_GM_CAL_3.BF.EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0

// 0x13	DLL_VDDA_CAL_0		dll_vdda_cal_0
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_DIR_INV_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_CONT_NUM_LANE_3_0           : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t DLL_VDDA_CAL_BYPASS_EN_LANE              : 1;	/*      5     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_CONT_EN_LANE                : 1;	/*      6     r/w 1'h1*/
		uint8_t DLL_VDDA_CAL_SINGLE_EN_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_0_t;
__xdata __at( 0xc4c ) volatile DLL_VDDA_CAL_0_t DLL_VDDA_CAL_0;
#define reg_DLL_VDDA_CAL_DIR_INV_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_DIR_INV_LANE
#define reg_DLL_VDDA_CAL_CONT_NUM_LANE_3_0  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_CONT_NUM_LANE_3_0
#define reg_DLL_VDDA_CAL_BYPASS_EN_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_BYPASS_EN_LANE
#define reg_DLL_VDDA_CAL_CONT_EN_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_CONT_EN_LANE
#define reg_DLL_VDDA_CAL_SINGLE_EN_LANE  DLL_VDDA_CAL_0.BF.DLL_VDDA_CAL_SINGLE_EN_LANE

// 0x14	DLL_VDDA_CAL_1		dll_vdda_cal_1
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DLL_VDDA_CAL_CMP_CTRL_LANE_1_0           : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_1_t;
__xdata __at( 0xc50 ) volatile DLL_VDDA_CAL_1_t DLL_VDDA_CAL_1;
#define reg_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0  DLL_VDDA_CAL_1.BF.DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  DLL_VDDA_CAL_1.BF.DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0  DLL_VDDA_CAL_1.BF.DLL_VDDA_CAL_CMP_CTRL_LANE_1_0

// 0x15	DLL_VDDA_CAL_2		dll_vdda_cal_2
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
__xdata __at( 0xc54 ) volatile DLL_VDDA_CAL_2_t DLL_VDDA_CAL_2;
#define reg_DLL_VDDA_CAL_TIMEOUT_CHK_DIS_LANE  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_TIMEOUT_CHK_DIS_LANE
#define reg_DLL_VDDA_CAL_RESULT_AVG_EN_LANE  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_RESULT_AVG_EN_LANE
#define reg_DLL_VDDA_CAL_TOGGLE_TIMES_LANE_2_0  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_DLL_VDDA_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0
#define reg_DLL_VDDA_CAL_BIN_SEARCH_ENABLE_LANE  DLL_VDDA_CAL_2.BF.DLL_VDDA_CAL_BIN_SEARCH_ENABLE_LANE

// 0x16	DLL_VDDA_CAL_3		dll_vdda_cal_3
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_SAMPLE_PULSE_DIV_LANE_7_0   : 8;	/*  [7:0]     r/w 8'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_3_t;
__xdata __at( 0xc58 ) volatile DLL_VDDA_CAL_3_t DLL_VDDA_CAL_3;
#define reg_DLL_VDDA_CAL_SAMPLE_PULSE_DIV_LANE_7_0  DLL_VDDA_CAL_3.BF.DLL_VDDA_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x17	DLL_VDDA_CAL_4		dll_vdda_cal_4
typedef union {
	struct {
		uint8_t DLL_VDDA_CAL_OVERFLOW_RD_LANE            : 1;	/*      0       r 1'h0*/
		uint8_t DLL_VDDA_CAL_TIMEOUT_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t DLL_VDDA_CAL_CAL_DONE_RD_LANE            : 1;	/*      2       r 1'h0*/
		uint8_t DLL_VDDA_CAL_CAL_EN_EXT_LANE             : 1;	/*      3     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_INDV_EXT_EN_LANE            : 1;	/*      4     r/w 1'h0*/
		uint8_t DLL_VDDA_CAL_TIMEOUT_STEPS_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_4_t;
__xdata __at( 0xc5c ) volatile DLL_VDDA_CAL_4_t DLL_VDDA_CAL_4;
#define reg_DLL_VDDA_CAL_OVERFLOW_RD_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_OVERFLOW_RD_LANE
#define reg_DLL_VDDA_CAL_TIMEOUT_RD_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_TIMEOUT_RD_LANE
#define reg_DLL_VDDA_CAL_CAL_DONE_RD_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_CAL_DONE_RD_LANE
#define reg_DLL_VDDA_CAL_CAL_EN_EXT_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_CAL_EN_EXT_LANE
#define reg_DLL_VDDA_CAL_INDV_EXT_EN_LANE  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_INDV_EXT_EN_LANE
#define reg_DLL_VDDA_CAL_TIMEOUT_STEPS_LANE_2_0  DLL_VDDA_CAL_4.BF.DLL_VDDA_CAL_TIMEOUT_STEPS_LANE_2_0

// 0x18	DLL_VDDA_CAL_5		dll_vdda_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DLL_VDDA_CAL_UNDERFLOW_RD_LANE           : 1;	/*      1       r 1'h0*/
		uint8_t DLL_VDDA_CAL_VAL_MAX_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h2b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_5_t;
__xdata __at( 0xc60 ) volatile DLL_VDDA_CAL_5_t DLL_VDDA_CAL_5;
#define reg_DLL_VDDA_CAL_UNDERFLOW_RD_LANE  DLL_VDDA_CAL_5.BF.DLL_VDDA_CAL_UNDERFLOW_RD_LANE
#define reg_DLL_VDDA_CAL_VAL_MAX_LANE_5_0  DLL_VDDA_CAL_5.BF.DLL_VDDA_CAL_VAL_MAX_LANE_5_0

// 0x19	DLL_VDDA_CAL_6		dll_vdda_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t DLL_VDDA_CAL_VAL_MIN_LANE_5_0            : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_6_t;
__xdata __at( 0xc64 ) volatile DLL_VDDA_CAL_6_t DLL_VDDA_CAL_6;
#define reg_DLL_VDDA_CAL_VAL_MIN_LANE_5_0  DLL_VDDA_CAL_6.BF.DLL_VDDA_CAL_VAL_MIN_LANE_5_0

// 0x1a	DLL_VDDA_CAL_7		dll_vdda_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t DLL_VDDA_CAL_RESULT_EXT_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_7_t;
__xdata __at( 0xc68 ) volatile DLL_VDDA_CAL_7_t DLL_VDDA_CAL_7;
#define reg_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0  DLL_VDDA_CAL_7.BF.DLL_VDDA_CAL_RESULT_EXT_LANE_5_0

// 0x1b	DLL_VDDA_CAL_8		dll_vdda_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t DLL_VDDA_CAL_RESULT_RD_LANE_5_0          : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_VDDA_CAL_8_t;
__xdata __at( 0xc6c ) volatile DLL_VDDA_CAL_8_t DLL_VDDA_CAL_8;
#define reg_DLL_VDDA_CAL_RESULT_RD_LANE_5_0  DLL_VDDA_CAL_8.BF.DLL_VDDA_CAL_RESULT_RD_LANE_5_0

// 0x1c	EOM_DLL_VDDA_CAL_0		eom_dll_vdda_cal_0
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_DIR_INV_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CONT_NUM_LANE_3_0       : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t EOM_DLL_VDDA_CAL_BYPASS_EN_LANE          : 1;	/*      5     r/w 1'h1*/
		uint8_t EOM_DLL_VDDA_CAL_CONT_EN_LANE            : 1;	/*      6     r/w 1'h1*/
		uint8_t EOM_DLL_VDDA_CAL_SINGLE_EN_LANE          : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_0_t;
__xdata __at( 0xc70 ) volatile EOM_DLL_VDDA_CAL_0_t EOM_DLL_VDDA_CAL_0;
#define reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_DIR_INV_LANE
#define reg_EOM_DLL_VDDA_CAL_CONT_NUM_LANE_3_0  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_CONT_NUM_LANE_3_0
#define reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_BYPASS_EN_LANE
#define reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_CONT_EN_LANE
#define reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE  EOM_DLL_VDDA_CAL_0.BF.EOM_DLL_VDDA_CAL_SINGLE_EN_LANE

// 0x1d	EOM_DLL_VDDA_CAL_1		eom_dll_vdda_cal_1
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t EOM_DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0       : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_1_t;
__xdata __at( 0xc74 ) volatile EOM_DLL_VDDA_CAL_1_t EOM_DLL_VDDA_CAL_1;
#define reg_EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_EOM_DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_EOM_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0  EOM_DLL_VDDA_CAL_1.BF.EOM_DLL_VDDA_CAL_CMP_CTRL_LANE_1_0

// 0x1e	EOM_DLL_VDDA_CAL_2		eom_dll_vdda_cal_2
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_CAL_EN_EXT_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_INDV_EXT_EN_LANE        : 1;	/*      1     r/w 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_VAL_MAX_LANE_5_0        : 6;	/*  [7:2]     r/w 6'h2b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_2_t;
__xdata __at( 0xc78 ) volatile EOM_DLL_VDDA_CAL_2_t EOM_DLL_VDDA_CAL_2;
#define reg_EOM_DLL_VDDA_CAL_CAL_EN_EXT_LANE  EOM_DLL_VDDA_CAL_2.BF.EOM_DLL_VDDA_CAL_CAL_EN_EXT_LANE
#define reg_EOM_DLL_VDDA_CAL_INDV_EXT_EN_LANE  EOM_DLL_VDDA_CAL_2.BF.EOM_DLL_VDDA_CAL_INDV_EXT_EN_LANE
#define reg_EOM_DLL_VDDA_CAL_VAL_MAX_LANE_5_0  EOM_DLL_VDDA_CAL_2.BF.EOM_DLL_VDDA_CAL_VAL_MAX_LANE_5_0

// 0x1f	EOM_DLL_VDDA_CAL_3		eom_dll_vdda_cal_3
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE         : 1;	/*      0       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_CAL_DONE_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_VAL_MIN_LANE_5_0        : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_3_t;
__xdata __at( 0xc7c ) volatile EOM_DLL_VDDA_CAL_3_t EOM_DLL_VDDA_CAL_3;
#define reg_EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE  EOM_DLL_VDDA_CAL_3.BF.EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_CAL_DONE_RD_LANE  EOM_DLL_VDDA_CAL_3.BF.EOM_DLL_VDDA_CAL_CAL_DONE_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_VAL_MIN_LANE_5_0  EOM_DLL_VDDA_CAL_3.BF.EOM_DLL_VDDA_CAL_VAL_MIN_LANE_5_0

// 0x20	EOM_DLL_VDDA_CAL_4		eom_dll_vdda_cal_4
typedef union {
	struct {
		uint8_t EOM_DLL_VDDA_CAL_UNDERFLOW_RD_LANE       : 1;	/*      0       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_OVERFLOW_RD_LANE        : 1;	/*      1       r 1'h0*/
		uint8_t EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0     : 6;	/*  [7:2]     r/w 6'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_4_t;
__xdata __at( 0xc80 ) volatile EOM_DLL_VDDA_CAL_4_t EOM_DLL_VDDA_CAL_4;
#define reg_EOM_DLL_VDDA_CAL_UNDERFLOW_RD_LANE  EOM_DLL_VDDA_CAL_4.BF.EOM_DLL_VDDA_CAL_UNDERFLOW_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_OVERFLOW_RD_LANE  EOM_DLL_VDDA_CAL_4.BF.EOM_DLL_VDDA_CAL_OVERFLOW_RD_LANE
#define reg_EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0  EOM_DLL_VDDA_CAL_4.BF.EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0

// 0x21	EOM_DLL_VDDA_CAL_5		eom_dll_vdda_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0      : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DLL_VDDA_CAL_5_t;
__xdata __at( 0xc84 ) volatile EOM_DLL_VDDA_CAL_5_t EOM_DLL_VDDA_CAL_5;
#define reg_EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0  EOM_DLL_VDDA_CAL_5.BF.EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0

// 0x22	ALIGN90_0		align90_0
typedef union {
	struct {
		uint8_t ALIGN90_TESTBUS_CORE_SEL_LANE_2_0        : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t ALIGN90_TOP_CONT_START_LANE              : 1;	/*      3     r/w 1'h0*/
		uint8_t ALIGN90_TOP_START_LANE                   : 1;	/*      4     r/w 1'h0*/
		uint8_t ALIGN90_UPDN_RD_LANE                     : 1;	/*      5       r 1'h0*/
		uint8_t ALIGN90_CMP_CTRL_EXT_LANE                : 1;	/*      6     r/w 1'h0*/
		uint8_t ALIGN90_COMN_EXT_EN_LANE                 : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_0_t;
__xdata __at( 0xc88 ) volatile ALIGN90_0_t ALIGN90_0;
#define reg_ALIGN90_TESTBUS_CORE_SEL_LANE_2_0  ALIGN90_0.BF.ALIGN90_TESTBUS_CORE_SEL_LANE_2_0
#define reg_ALIGN90_TOP_CONT_START_LANE  ALIGN90_0.BF.ALIGN90_TOP_CONT_START_LANE
#define reg_ALIGN90_TOP_START_LANE  ALIGN90_0.BF.ALIGN90_TOP_START_LANE
#define reg_ALIGN90_UPDN_RD_LANE  ALIGN90_0.BF.ALIGN90_UPDN_RD_LANE
#define reg_ALIGN90_CMP_CTRL_EXT_LANE  ALIGN90_0.BF.ALIGN90_CMP_CTRL_EXT_LANE
#define reg_ALIGN90_COMN_EXT_EN_LANE  ALIGN90_0.BF.ALIGN90_COMN_EXT_EN_LANE

// 0x23	ALIGN90_1		align90_1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t ALIGN90_TOP_CONT_DONE_LANE               : 1;	/*      6       r 1'h0*/
		uint8_t ALIGN90_TOP_DONE_LANE                    : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_1_t;
__xdata __at( 0xc8c ) volatile ALIGN90_1_t ALIGN90_1;
#define reg_ALIGN90_TOP_CONT_DONE_LANE  ALIGN90_1.BF.ALIGN90_TOP_CONT_DONE_LANE
#define reg_ALIGN90_TOP_DONE_LANE  ALIGN90_1.BF.ALIGN90_TOP_DONE_LANE

// 0x24	ALIGN90_CMP_OFFSET_CAL_0		align90_cmp_offset_cal_0
typedef union {
	struct {
		uint8_t ALIGN90_CMP_OFFSET_CAL_RESULT_AVG_EN_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_BIN_SEARCH_ENABLE_LANE : 1;	/*      1     r/w 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_DIR_INV_LANE      : 1;	/*      5     r/w 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE    : 1;	/*      6     r/w 1'h1*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE    : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_0_t;
__xdata __at( 0xc90 ) volatile ALIGN90_CMP_OFFSET_CAL_0_t ALIGN90_CMP_OFFSET_CAL_0;
#define reg_ALIGN90_CMP_OFFSET_CAL_RESULT_AVG_EN_LANE  ALIGN90_CMP_OFFSET_CAL_0.BF.ALIGN90_CMP_OFFSET_CAL_RESULT_AVG_EN_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_BIN_SEARCH_ENABLE_LANE  ALIGN90_CMP_OFFSET_CAL_0.BF.ALIGN90_CMP_OFFSET_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  ALIGN90_CMP_OFFSET_CAL_0.BF.ALIGN90_CMP_OFFSET_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0
#define reg_ALIGN90_CMP_OFFSET_CAL_DIR_INV_LANE  ALIGN90_CMP_OFFSET_CAL_0.BF.ALIGN90_CMP_OFFSET_CAL_DIR_INV_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE  ALIGN90_CMP_OFFSET_CAL_0.BF.ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE  ALIGN90_CMP_OFFSET_CAL_0.BF.ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE

// 0x25	ALIGN90_CMP_OFFSET_CAL_1		align90_cmp_offset_cal_1
typedef union {
	struct {
		uint8_t ALIGN90_CMP_OFFSET_CAL_TIMEOUT_STEPS_LANE_2_0 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_TOGGLE_TIMES_LANE_2_0 : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_1_t;
__xdata __at( 0xc94 ) volatile ALIGN90_CMP_OFFSET_CAL_1_t ALIGN90_CMP_OFFSET_CAL_1;
#define reg_ALIGN90_CMP_OFFSET_CAL_TIMEOUT_STEPS_LANE_2_0  ALIGN90_CMP_OFFSET_CAL_1.BF.ALIGN90_CMP_OFFSET_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_ALIGN90_CMP_OFFSET_CAL_TOGGLE_TIMES_LANE_2_0  ALIGN90_CMP_OFFSET_CAL_1.BF.ALIGN90_CMP_OFFSET_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_ALIGN90_CMP_OFFSET_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  ALIGN90_CMP_OFFSET_CAL_1.BF.ALIGN90_CMP_OFFSET_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x26	ALIGN90_CMP_OFFSET_CAL_2		align90_cmp_offset_cal_2
typedef union {
	struct {
		uint8_t ALIGN90_CMP_OFFSET_CAL_SAMPLE_PULSE_DIV_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_2_t;
__xdata __at( 0xc98 ) volatile ALIGN90_CMP_OFFSET_CAL_2_t ALIGN90_CMP_OFFSET_CAL_2;
#define reg_ALIGN90_CMP_OFFSET_CAL_SAMPLE_PULSE_DIV_LANE_7_0  ALIGN90_CMP_OFFSET_CAL_2.BF.ALIGN90_CMP_OFFSET_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x27	ALIGN90_CMP_OFFSET_CAL_3		align90_cmp_offset_cal_3
typedef union {
	struct {
		uint8_t ALIGN90_CMP_OFFSET_CAL_RESULT_MSB_EXT_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_CAL_EN_EXT_LANE   : 1;	/*      1     r/w 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_INDV_EXT_EN_LANE  : 1;	/*      2     r/w 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_VAL_MAX_LANE_3_0  : 4;	/*  [6:3]     r/w 4'hf*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_TIMEOUT_CHK_DIS_LANE : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_3_t;
__xdata __at( 0xc9c ) volatile ALIGN90_CMP_OFFSET_CAL_3_t ALIGN90_CMP_OFFSET_CAL_3;
#define reg_ALIGN90_CMP_OFFSET_CAL_RESULT_MSB_EXT_LANE  ALIGN90_CMP_OFFSET_CAL_3.BF.ALIGN90_CMP_OFFSET_CAL_RESULT_MSB_EXT_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_CAL_EN_EXT_LANE  ALIGN90_CMP_OFFSET_CAL_3.BF.ALIGN90_CMP_OFFSET_CAL_CAL_EN_EXT_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_INDV_EXT_EN_LANE  ALIGN90_CMP_OFFSET_CAL_3.BF.ALIGN90_CMP_OFFSET_CAL_INDV_EXT_EN_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_VAL_MAX_LANE_3_0  ALIGN90_CMP_OFFSET_CAL_3.BF.ALIGN90_CMP_OFFSET_CAL_VAL_MAX_LANE_3_0
#define reg_ALIGN90_CMP_OFFSET_CAL_TIMEOUT_CHK_DIS_LANE  ALIGN90_CMP_OFFSET_CAL_3.BF.ALIGN90_CMP_OFFSET_CAL_TIMEOUT_CHK_DIS_LANE

// 0x28	ALIGN90_CMP_OFFSET_CAL_4		align90_cmp_offset_cal_4
typedef union {
	struct {
		uint8_t ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_VAL_MIN_LANE_3_0  : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_4_t;
__xdata __at( 0xca0 ) volatile ALIGN90_CMP_OFFSET_CAL_4_t ALIGN90_CMP_OFFSET_CAL_4;
#define reg_ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0  ALIGN90_CMP_OFFSET_CAL_4.BF.ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0
#define reg_ALIGN90_CMP_OFFSET_CAL_VAL_MIN_LANE_3_0  ALIGN90_CMP_OFFSET_CAL_4.BF.ALIGN90_CMP_OFFSET_CAL_VAL_MIN_LANE_3_0

// 0x29	ALIGN90_CMP_OFFSET_CAL_5		align90_cmp_offset_cal_5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_UNDERFLOW_RD_LANE : 1;	/*      3       r 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_OVERFLOW_RD_LANE  : 1;	/*      4       r 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_TIMEOUT_RD_LANE   : 1;	/*      5       r 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_CAL_DONE_RD_LANE  : 1;	/*      6       r 1'h0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_RESULT_LSB_EXT_LANE : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_5_t;
__xdata __at( 0xca4 ) volatile ALIGN90_CMP_OFFSET_CAL_5_t ALIGN90_CMP_OFFSET_CAL_5;
#define reg_ALIGN90_CMP_OFFSET_CAL_UNDERFLOW_RD_LANE  ALIGN90_CMP_OFFSET_CAL_5.BF.ALIGN90_CMP_OFFSET_CAL_UNDERFLOW_RD_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_OVERFLOW_RD_LANE  ALIGN90_CMP_OFFSET_CAL_5.BF.ALIGN90_CMP_OFFSET_CAL_OVERFLOW_RD_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_TIMEOUT_RD_LANE  ALIGN90_CMP_OFFSET_CAL_5.BF.ALIGN90_CMP_OFFSET_CAL_TIMEOUT_RD_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_CAL_DONE_RD_LANE  ALIGN90_CMP_OFFSET_CAL_5.BF.ALIGN90_CMP_OFFSET_CAL_CAL_DONE_RD_LANE
#define reg_ALIGN90_CMP_OFFSET_CAL_RESULT_LSB_EXT_LANE  ALIGN90_CMP_OFFSET_CAL_5.BF.ALIGN90_CMP_OFFSET_CAL_RESULT_LSB_EXT_LANE

// 0x2a	ALIGN90_CMP_OFFSET_CAL_6		align90_cmp_offset_cal_6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t ALIGN90_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0 : 4;	/*  [7:4]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CMP_OFFSET_CAL_6_t;
__xdata __at( 0xca8 ) volatile ALIGN90_CMP_OFFSET_CAL_6_t ALIGN90_CMP_OFFSET_CAL_6;
#define reg_ALIGN90_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0  ALIGN90_CMP_OFFSET_CAL_6.BF.ALIGN90_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0

// 0x2b	ALIGN90_CAL_0		align90_cal_0
typedef union {
	struct {
		uint8_t ALIGN90_CAL_DIR_INV_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t ALIGN90_CAL_CONT_NUM_LANE_3_0            : 4;	/*  [4:1]     r/w 4'h2*/
		uint8_t ALIGN90_CAL_BYPASS_EN_LANE               : 1;	/*      5     r/w 1'h0*/
		uint8_t ALIGN90_CAL_CONT_EN_LANE                 : 1;	/*      6     r/w 1'h1*/
		uint8_t ALIGN90_CAL_SINGLE_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_0_t;
__xdata __at( 0xcac ) volatile ALIGN90_CAL_0_t ALIGN90_CAL_0;
#define reg_ALIGN90_CAL_DIR_INV_LANE  ALIGN90_CAL_0.BF.ALIGN90_CAL_DIR_INV_LANE
#define reg_ALIGN90_CAL_CONT_NUM_LANE_3_0  ALIGN90_CAL_0.BF.ALIGN90_CAL_CONT_NUM_LANE_3_0
#define reg_ALIGN90_CAL_BYPASS_EN_LANE  ALIGN90_CAL_0.BF.ALIGN90_CAL_BYPASS_EN_LANE
#define reg_ALIGN90_CAL_CONT_EN_LANE  ALIGN90_CAL_0.BF.ALIGN90_CAL_CONT_EN_LANE
#define reg_ALIGN90_CAL_SINGLE_EN_LANE  ALIGN90_CAL_0.BF.ALIGN90_CAL_SINGLE_EN_LANE

// 0x2c	ALIGN90_CAL_1		align90_cal_1
typedef union {
	struct {
		uint8_t ALIGN90_CAL_RESULT_AVG_EN_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE       : 1;	/*      1     r/w 1'h0*/
		uint8_t ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  : 3;	/*  [4:2]     r/w 3'h1*/
		uint8_t ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_1_t;
__xdata __at( 0xcb0 ) volatile ALIGN90_CAL_1_t ALIGN90_CAL_1;
#define reg_ALIGN90_CAL_RESULT_AVG_EN_LANE  ALIGN90_CAL_1.BF.ALIGN90_CAL_RESULT_AVG_EN_LANE
#define reg_ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE  ALIGN90_CAL_1.BF.ALIGN90_CAL_BIN_SEARCH_ENABLE_LANE
#define reg_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0  ALIGN90_CAL_1.BF.ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0
#define reg_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0  ALIGN90_CAL_1.BF.ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0

// 0x2d	ALIGN90_CAL_2		align90_cal_2
typedef union {
	struct {
		uint8_t ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0        : 3;	/*  [5:3]     r/w 3'h1*/
		uint8_t ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0 : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_2_t;
__xdata __at( 0xcb4 ) volatile ALIGN90_CAL_2_t ALIGN90_CAL_2;
#define reg_ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0  ALIGN90_CAL_2.BF.ALIGN90_CAL_TIMEOUT_STEPS_LANE_2_0
#define reg_ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0  ALIGN90_CAL_2.BF.ALIGN90_CAL_TOGGLE_TIMES_LANE_2_0
#define reg_ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0  ALIGN90_CAL_2.BF.ALIGN90_CAL_UPDN_TOGGLE_DIR_SEL_LANE_1_0

// 0x2e	ALIGN90_CAL_3		align90_cal_3
typedef union {
	struct {
		uint8_t ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_3_t;
__xdata __at( 0xcb8 ) volatile ALIGN90_CAL_3_t ALIGN90_CAL_3;
#define reg_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0  ALIGN90_CAL_3.BF.ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0

// 0x2f	ALIGN90_CAL_4		align90_cal_4
typedef union {
	struct {
		uint8_t ALIGN90_CAL_INDV_EXT_EN_LANE             : 1;	/*      0     r/w 1'h0*/
		uint8_t ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0         : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0         : 3;	/*  [6:4]     r/w 3'h4*/
		uint8_t ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_4_t;
__xdata __at( 0xcbc ) volatile ALIGN90_CAL_4_t ALIGN90_CAL_4;
#define reg_ALIGN90_CAL_INDV_EXT_EN_LANE  ALIGN90_CAL_4.BF.ALIGN90_CAL_INDV_EXT_EN_LANE
#define reg_ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0  ALIGN90_CAL_4.BF.ALIGN90_CAL_VAL_MIN_MSB_LANE_2_0
#define reg_ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0  ALIGN90_CAL_4.BF.ALIGN90_CAL_VAL_MAX_MSB_LANE_2_0
#define reg_ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE  ALIGN90_CAL_4.BF.ALIGN90_CAL_TIMEOUT_CHK_DIS_LANE

// 0x30	ALIGN90_CAL_5		align90_cal_5
typedef union {
	struct {
		uint8_t ALIGN90_CAL_DUMMY_CLK_EXT_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t ALIGN90_CAL_CAL_EN_EXT_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t ALIGN90_CAL_VAL_MAX_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h33*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_5_t;
__xdata __at( 0xcc0 ) volatile ALIGN90_CAL_5_t ALIGN90_CAL_5;
#define reg_ALIGN90_CAL_DUMMY_CLK_EXT_LANE  ALIGN90_CAL_5.BF.ALIGN90_CAL_DUMMY_CLK_EXT_LANE
#define reg_ALIGN90_CAL_CAL_EN_EXT_LANE  ALIGN90_CAL_5.BF.ALIGN90_CAL_CAL_EN_EXT_LANE
#define reg_ALIGN90_CAL_VAL_MAX_LSB_LANE_5_0  ALIGN90_CAL_5.BF.ALIGN90_CAL_VAL_MAX_LSB_LANE_5_0

// 0x31	ALIGN90_CAL_6		align90_cal_6
typedef union {
	struct {
		uint8_t ALIGN90_CAL_TIMEOUT_RD_LANE              : 1;	/*      0       r 1'h0*/
		uint8_t ALIGN90_CAL_CAL_DONE_RD_LANE             : 1;	/*      1       r 1'h0*/
		uint8_t ALIGN90_CAL_VAL_MIN_LSB_LANE_5_0         : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_6_t;
__xdata __at( 0xcc4 ) volatile ALIGN90_CAL_6_t ALIGN90_CAL_6;
#define reg_ALIGN90_CAL_TIMEOUT_RD_LANE  ALIGN90_CAL_6.BF.ALIGN90_CAL_TIMEOUT_RD_LANE
#define reg_ALIGN90_CAL_CAL_DONE_RD_LANE  ALIGN90_CAL_6.BF.ALIGN90_CAL_CAL_DONE_RD_LANE
#define reg_ALIGN90_CAL_VAL_MIN_LSB_LANE_5_0  ALIGN90_CAL_6.BF.ALIGN90_CAL_VAL_MIN_LSB_LANE_5_0

// 0x32	ALIGN90_CAL_7		align90_cal_7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t ALIGN90_CAL_DUMMY_CLK_RD_LANE            : 1;	/*      2       r 1'h0*/
		uint8_t ALIGN90_CAL_UNDERFLOW_RD_LANE            : 1;	/*      3       r 1'h0*/
		uint8_t ALIGN90_CAL_OVERFLOW_RD_LANE             : 1;	/*      4       r 1'h0*/
		uint8_t ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0      : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_7_t;
__xdata __at( 0xcc8 ) volatile ALIGN90_CAL_7_t ALIGN90_CAL_7;
#define reg_ALIGN90_CAL_DUMMY_CLK_RD_LANE  ALIGN90_CAL_7.BF.ALIGN90_CAL_DUMMY_CLK_RD_LANE
#define reg_ALIGN90_CAL_UNDERFLOW_RD_LANE  ALIGN90_CAL_7.BF.ALIGN90_CAL_UNDERFLOW_RD_LANE
#define reg_ALIGN90_CAL_OVERFLOW_RD_LANE  ALIGN90_CAL_7.BF.ALIGN90_CAL_OVERFLOW_RD_LANE
#define reg_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  ALIGN90_CAL_7.BF.ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0

// 0x33	ALIGN90_CAL_8		align90_cal_8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t ALIGN90_CAL_RESULT_LSB_EXT_LANE_5_0      : 6;	/*  [7:2]     r/w 6'h33*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_8_t;
__xdata __at( 0xccc ) volatile ALIGN90_CAL_8_t ALIGN90_CAL_8;
#define reg_ALIGN90_CAL_RESULT_LSB_EXT_LANE_5_0  ALIGN90_CAL_8.BF.ALIGN90_CAL_RESULT_LSB_EXT_LANE_5_0

// 0x34	ALIGN90_CAL_9		align90_cal_9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0       : 3;	/*  [7:5]       r 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_9_t;
__xdata __at( 0xcd0 ) volatile ALIGN90_CAL_9_t ALIGN90_CAL_9;
#define reg_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0  ALIGN90_CAL_9.BF.ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0

// 0x35	ALIGN90_CAL_10		align90_cal_10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t ALIGN90_CAL_RESULT_LSB_RD_LANE_5_0       : 6;	/*  [7:2]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90_CAL_10_t;
__xdata __at( 0xcd4 ) volatile ALIGN90_CAL_10_t ALIGN90_CAL_10;
#define reg_ALIGN90_CAL_RESULT_LSB_RD_LANE_5_0  ALIGN90_CAL_10.BF.ALIGN90_CAL_RESULT_LSB_RD_LANE_5_0

#endif
