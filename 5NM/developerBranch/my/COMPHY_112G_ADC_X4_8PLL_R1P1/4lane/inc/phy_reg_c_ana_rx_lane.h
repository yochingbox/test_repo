#ifndef PHY_REG_C_ANA_RX_LANE_H
#define PHY_REG_C_ANA_RX_LANE_H



// 0x0	RX_TOP_ANA_REG_0		Analog Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t IMPCAL_RX_LANE_4_0                       : 5;	/*  [6:2]     r/w 5'h10*/
		uint8_t IMPCAL_RX_EN_LANE                        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_0_t;
__xdata __at( 0x1200 ) volatile RX_TOP_ANA_REG_0_t RX_TOP_ANA_REG_0;
#define reg_IMPCAL_RX_LANE_4_0  RX_TOP_ANA_REG_0.BF.IMPCAL_RX_LANE_4_0
#define reg_IMPCAL_RX_EN_LANE  RX_TOP_ANA_REG_0.BF.IMPCAL_RX_EN_LANE

// 0x1	RX_TOP_ANA_REG_1		Analog Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_RXTERM_PWR_SEL_LANE                   : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CTLE_HPF_RSEL_TH_LANE_1_0             : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t RX_CTLE_HPF_RSEL_2ND_LANE_1_0            : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RX_CTLE_HPF_RSEL_1ST_LANE_1_0            : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_1_t;
__xdata __at( 0x1204 ) volatile RX_TOP_ANA_REG_1_t RX_TOP_ANA_REG_1;
#define reg_RX_RXTERM_PWR_SEL_LANE  RX_TOP_ANA_REG_1.BF.RX_RXTERM_PWR_SEL_LANE
#define reg_RX_CTLE_HPF_RSEL_TH_LANE_1_0  RX_TOP_ANA_REG_1.BF.RX_CTLE_HPF_RSEL_TH_LANE_1_0
#define reg_RX_CTLE_HPF_RSEL_2ND_LANE_1_0  RX_TOP_ANA_REG_1.BF.RX_CTLE_HPF_RSEL_2ND_LANE_1_0
#define reg_RX_CTLE_HPF_RSEL_1ST_LANE_1_0  RX_TOP_ANA_REG_1.BF.RX_CTLE_HPF_RSEL_1ST_LANE_1_0

// 0x2	RX_TOP_ANA_REG_2		Analog Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_SQ_REFTHR_LANE_4_0                    : 5;	/*  [5:1]     r/w 5'h10*/
		uint8_t RX_SQ_PKDETCAP_LANE_1_0                  : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_2_t;
__xdata __at( 0x1208 ) volatile RX_TOP_ANA_REG_2_t RX_TOP_ANA_REG_2;
#define reg_RX_SQ_REFTHR_LANE_4_0  RX_TOP_ANA_REG_2.BF.RX_SQ_REFTHR_LANE_4_0
#define reg_RX_SQ_PKDETCAP_LANE_1_0  RX_TOP_ANA_REG_2.BF.RX_SQ_PKDETCAP_LANE_1_0

// 0x3	RX_TOP_ANA_REG_3		Analog Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_SQ_THRESH_CAL_EN_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_SQ_OFFSET_CAL_EN_LANE                 : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_SQ_THRIPTAT_LANE_1_0                  : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_3_t;
__xdata __at( 0x120c ) volatile RX_TOP_ANA_REG_3_t RX_TOP_ANA_REG_3;
#define reg_RX_SQ_THRESH_CAL_EN_LANE  RX_TOP_ANA_REG_3.BF.RX_SQ_THRESH_CAL_EN_LANE
#define reg_RX_SQ_OFFSET_CAL_EN_LANE  RX_TOP_ANA_REG_3.BF.RX_SQ_OFFSET_CAL_EN_LANE
#define reg_RX_SQ_THRIPTAT_LANE_1_0  RX_TOP_ANA_REG_3.BF.RX_SQ_THRIPTAT_LANE_1_0

// 0x4	RX_TOP_ANA_REG_4		Analog Register 4
typedef union {
	struct {
		uint8_t RX_SQ_LINEAR_DISABLE_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_SQ_OFFSETCAL_SEL_LANE_1_0             : 2;	/*  [2:1]     r/w 2'h1*/
		uint8_t RX_SQ_OFFSET_LANE_4_0                    : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_4_t;
__xdata __at( 0x1210 ) volatile RX_TOP_ANA_REG_4_t RX_TOP_ANA_REG_4;
#define reg_RX_SQ_LINEAR_DISABLE_LANE  RX_TOP_ANA_REG_4.BF.RX_SQ_LINEAR_DISABLE_LANE
#define reg_RX_SQ_OFFSETCAL_SEL_LANE_1_0  RX_TOP_ANA_REG_4.BF.RX_SQ_OFFSETCAL_SEL_LANE_1_0
#define reg_RX_SQ_OFFSET_LANE_4_0  RX_TOP_ANA_REG_4.BF.RX_SQ_OFFSET_LANE_4_0

// 0x5	RX_TOP_ANA_REG_5		Analog Register 5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_SQ_DC_EN_IN_LANE                      : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_SQ_PKDETI_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t RX_SQ_AMPBW_LANE_1_0                     : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RX_SQ_CAL_EN_LANE                        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_5_t;
__xdata __at( 0x1214 ) volatile RX_TOP_ANA_REG_5_t RX_TOP_ANA_REG_5;
#define reg_RX_SQ_DC_EN_IN_LANE  RX_TOP_ANA_REG_5.BF.RX_SQ_DC_EN_IN_LANE
#define reg_RX_SQ_PKDETI_LANE_1_0  RX_TOP_ANA_REG_5.BF.RX_SQ_PKDETI_LANE_1_0
#define reg_RX_SQ_AMPBW_LANE_1_0  RX_TOP_ANA_REG_5.BF.RX_SQ_AMPBW_LANE_1_0
#define reg_RX_SQ_CAL_EN_LANE  RX_TOP_ANA_REG_5.BF.RX_SQ_CAL_EN_LANE

// 0x6	RX_TOP_ANA_REG_6		Analog Register 6
typedef union {
	struct {
		uint8_t RX_CTLE_RL1_EXTRA_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RX_CTLE_CL1_CTRL_LANE_3_0                : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t RX_PU_CTLE_LANE                          : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_6_t;
__xdata __at( 0x1218 ) volatile RX_TOP_ANA_REG_6_t RX_TOP_ANA_REG_6;
#define reg_RX_CTLE_RL1_EXTRA_LANE_2_0  RX_TOP_ANA_REG_6.BF.RX_CTLE_RL1_EXTRA_LANE_2_0
#define reg_RX_CTLE_CL1_CTRL_LANE_3_0  RX_TOP_ANA_REG_6.BF.RX_CTLE_CL1_CTRL_LANE_3_0
#define reg_RX_PU_CTLE_LANE  RX_TOP_ANA_REG_6.BF.RX_PU_CTLE_LANE

// 0x7	RX_TOP_ANA_REG_7		Analog Register 7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_CTLE_CS1_MID_LANE_2_0                 : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t RX_CTLE_MID_FREQ_EN_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CTLE_CUR1_SEL2_LANE_2_0               : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_7_t;
__xdata __at( 0x121c ) volatile RX_TOP_ANA_REG_7_t RX_TOP_ANA_REG_7;
#define reg_RX_CTLE_CS1_MID_LANE_2_0  RX_TOP_ANA_REG_7.BF.RX_CTLE_CS1_MID_LANE_2_0
#define reg_RX_CTLE_MID_FREQ_EN_LANE  RX_TOP_ANA_REG_7.BF.RX_CTLE_MID_FREQ_EN_LANE
#define reg_RX_CTLE_CUR1_SEL2_LANE_2_0  RX_TOP_ANA_REG_7.BF.RX_CTLE_CUR1_SEL2_LANE_2_0

// 0x8	RX_TOP_ANA_REG_8		Analog Register 8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CTLE_CUR2_SEL2_LANE_2_0               : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RX_CTLE_RS1_MID_LANE_2_0                 : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_8_t;
__xdata __at( 0x1220 ) volatile RX_TOP_ANA_REG_8_t RX_TOP_ANA_REG_8;
#define reg_RX_CTLE_CUR2_SEL2_LANE_2_0  RX_TOP_ANA_REG_8.BF.RX_CTLE_CUR2_SEL2_LANE_2_0
#define reg_RX_CTLE_RS1_MID_LANE_2_0  RX_TOP_ANA_REG_8.BF.RX_CTLE_RS1_MID_LANE_2_0

// 0x9	RX_TOP_ANA_REG_9		Analog Register 9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CTLE_CUR_TIA_SEL2_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_9_t;
__xdata __at( 0x1224 ) volatile RX_TOP_ANA_REG_9_t RX_TOP_ANA_REG_9;
#define reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0  RX_TOP_ANA_REG_9.BF.RX_CTLE_CUR_TIA_SEL2_LANE_2_0

// 0xa	RX_TOP_ANA_REG_10		Analog Register 10
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_CTLE_VICM1_SEL_LANE_2_0               : 3;	/*  [5:3]     r/w 3'h3*/
		uint8_t RX_CTLE_GBIAS_SEL_LANE_1_0               : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_10_t;
__xdata __at( 0x1228 ) volatile RX_TOP_ANA_REG_10_t RX_TOP_ANA_REG_10;
#define reg_RX_CTLE_VICM1_SEL_LANE_2_0  RX_TOP_ANA_REG_10.BF.RX_CTLE_VICM1_SEL_LANE_2_0
#define reg_RX_CTLE_GBIAS_SEL_LANE_1_0  RX_TOP_ANA_REG_10.BF.RX_CTLE_GBIAS_SEL_LANE_1_0

// 0xb	RX_TOP_ANA_REG_11		Analog Register 11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CTLE_VNICM2_SEL_LANE_2_0              : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t RX_CTLE_VPICM2_SEL_LANE_2_0              : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_11_t;
__xdata __at( 0x122c ) volatile RX_TOP_ANA_REG_11_t RX_TOP_ANA_REG_11;
#define reg_RX_CTLE_VNICM2_SEL_LANE_2_0  RX_TOP_ANA_REG_11.BF.RX_CTLE_VNICM2_SEL_LANE_2_0
#define reg_RX_CTLE_VPICM2_SEL_LANE_2_0  RX_TOP_ANA_REG_11.BF.RX_CTLE_VPICM2_SEL_LANE_2_0

// 0xc	RX_TOP_ANA_REG_12		Analog Register 12
typedef union {
	struct {
		uint8_t RX_CTLE_OUT_SQ_EN_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_CTLE_VLOW_SEL_LANE_1_0                : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t RX_CTLE_V1P0_SEL_LANE_1_0                : 2;	/*  [4:3]     r/w 2'h3*/
		uint8_t RX_CTLE_CM2_SEL_LANE_2_0                 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_12_t;
__xdata __at( 0x1230 ) volatile RX_TOP_ANA_REG_12_t RX_TOP_ANA_REG_12;
#define reg_RX_CTLE_OUT_SQ_EN_LANE  RX_TOP_ANA_REG_12.BF.RX_CTLE_OUT_SQ_EN_LANE
#define reg_RX_CTLE_VLOW_SEL_LANE_1_0  RX_TOP_ANA_REG_12.BF.RX_CTLE_VLOW_SEL_LANE_1_0
#define reg_RX_CTLE_V1P0_SEL_LANE_1_0  RX_TOP_ANA_REG_12.BF.RX_CTLE_V1P0_SEL_LANE_1_0
#define reg_RX_CTLE_CM2_SEL_LANE_2_0  RX_TOP_ANA_REG_12.BF.RX_CTLE_CM2_SEL_LANE_2_0

// 0xd	RX_TOP_ANA_REG_13		Analog Register 13
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_CTLE_HPF_SHORT_LANE                   : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CTLE_OUT_DC_SEL_LANE_2_0              : 3;	/*  [6:4]     r/w 3'h7*/
		uint8_t RX_CTLE_OUT_DC_EN_LANE                   : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_13_t;
__xdata __at( 0x1234 ) volatile RX_TOP_ANA_REG_13_t RX_TOP_ANA_REG_13;
#define reg_RX_CTLE_HPF_SHORT_LANE  RX_TOP_ANA_REG_13.BF.RX_CTLE_HPF_SHORT_LANE
#define reg_RX_CTLE_OUT_DC_SEL_LANE_2_0  RX_TOP_ANA_REG_13.BF.RX_CTLE_OUT_DC_SEL_LANE_2_0
#define reg_RX_CTLE_OUT_DC_EN_LANE  RX_TOP_ANA_REG_13.BF.RX_CTLE_OUT_DC_EN_LANE

// 0xe	RX_TOP_ANA_REG_14		Analog Register 14
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_CTLE_LB_RES_SEL_LANE_3_0              : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_14_t;
__xdata __at( 0x1238 ) volatile RX_TOP_ANA_REG_14_t RX_TOP_ANA_REG_14;
#define reg_RX_CTLE_LB_RES_SEL_LANE_3_0  RX_TOP_ANA_REG_14.BF.RX_CTLE_LB_RES_SEL_LANE_3_0

// 0xf	RX_TOP_ANA_REG_15		Analog Register 15
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_TSEN_SEL_LANE                         : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_CTLE_TEST_SEL_LANE_3_0                : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t RX_CTLE_TEST_EN_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_15_t;
__xdata __at( 0x123c ) volatile RX_TOP_ANA_REG_15_t RX_TOP_ANA_REG_15;
#define reg_RX_TSEN_SEL_LANE  RX_TOP_ANA_REG_15.BF.RX_TSEN_SEL_LANE
#define reg_RX_CTLE_TEST_SEL_LANE_3_0  RX_TOP_ANA_REG_15.BF.RX_CTLE_TEST_SEL_LANE_3_0
#define reg_RX_CTLE_TEST_EN_LANE  RX_TOP_ANA_REG_15.BF.RX_CTLE_TEST_EN_LANE

// 0x10	RX_TOP_ANA_REG_16		Analog Register 16
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_CLKTOP_TST_EN_LANE_2_0                : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t RX_CLKTOP_TST_SEL_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_16_t;
__xdata __at( 0x1240 ) volatile RX_TOP_ANA_REG_16_t RX_TOP_ANA_REG_16;
#define reg_RX_CLKTOP_TST_EN_LANE_2_0  RX_TOP_ANA_REG_16.BF.RX_CLKTOP_TST_EN_LANE_2_0
#define reg_RX_CLKTOP_TST_SEL_LANE_3_0  RX_TOP_ANA_REG_16.BF.RX_CLKTOP_TST_SEL_LANE_3_0

// 0x11	RX_TOP_ANA_REG_17		Analog Register 17
typedef union {
	struct {
		uint8_t RX_CLKTOP_RSV_LANE_9_2                   : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_17_t;
__xdata __at( 0x1244 ) volatile RX_TOP_ANA_REG_17_t RX_TOP_ANA_REG_17;
#define reg_RX_CLKTOP_RSV_LANE_9_2  RX_TOP_ANA_REG_17.BF.RX_CLKTOP_RSV_LANE_9_2

// 0x12	RX_TOP_ANA_REG_18		Analog Register 18
typedef union {
	struct {
		uint8_t RX_PU_EOM_DLY_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_EOM_DPHER_DLY_SEL_LANE_1_0            : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t RX_EOM_PI_CLKDET_EN_LANE                 : 1;	/*      3     r/w 1'h1*/
		uint8_t RX_EOM_PI_RESET_EXT_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_PU_EOM_PI_LANE                        : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_CLKTOP_RSV_LANE_1_0                   : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_18_t;
__xdata __at( 0x1248 ) volatile RX_TOP_ANA_REG_18_t RX_TOP_ANA_REG_18;
#define reg_RX_PU_EOM_DLY_LANE  RX_TOP_ANA_REG_18.BF.RX_PU_EOM_DLY_LANE
#define reg_RX_EOM_DPHER_DLY_SEL_LANE_1_0  RX_TOP_ANA_REG_18.BF.RX_EOM_DPHER_DLY_SEL_LANE_1_0
#define reg_RX_EOM_PI_CLKDET_EN_LANE  RX_TOP_ANA_REG_18.BF.RX_EOM_PI_CLKDET_EN_LANE
#define reg_RX_EOM_PI_RESET_EXT_LANE  RX_TOP_ANA_REG_18.BF.RX_EOM_PI_RESET_EXT_LANE
#define reg_RX_PU_EOM_PI_LANE  RX_TOP_ANA_REG_18.BF.RX_PU_EOM_PI_LANE
#define reg_RX_CLKTOP_RSV_LANE_1_0  RX_TOP_ANA_REG_18.BF.RX_CLKTOP_RSV_LANE_1_0

// 0x13	RX_TOP_ANA_REG_19		Analog Register 19
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ADC_REF_SEL_LANE_2_0                  : 3;	/*  [3:1]     r/w 3'h4*/
		uint8_t RX_ADC_RESET_LANE                        : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_PU_ADC_LANE                           : 1;	/*      5     r/w 1'h1*/
		uint8_t RX_TH_CMSEL_LANE_1_0                     : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_19_t;
__xdata __at( 0x124c ) volatile RX_TOP_ANA_REG_19_t RX_TOP_ANA_REG_19;
#define reg_RX_ADC_REF_SEL_LANE_2_0  RX_TOP_ANA_REG_19.BF.RX_ADC_REF_SEL_LANE_2_0
#define reg_RX_ADC_RESET_LANE  RX_TOP_ANA_REG_19.BF.RX_ADC_RESET_LANE
#define reg_RX_PU_ADC_LANE  RX_TOP_ANA_REG_19.BF.RX_PU_ADC_LANE
#define reg_RX_TH_CMSEL_LANE_1_0  RX_TOP_ANA_REG_19.BF.RX_TH_CMSEL_LANE_1_0

// 0x14	RX_TOP_ANA_REG_20		Analog Register 20
typedef union {
	struct {
		uint8_t RX_ADC_CMSHFT_SEL_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_ADC_TGDLY_SEL_LANE_1_0                : 2;	/*  [3:2]     r/w 2'h3*/
		uint8_t RX_ADC_FAST4_EN_LANE                     : 1;	/*      4     r/w 1'h1*/
		uint8_t RX_ADC_COMP_CUR_SEL_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h3*/
		uint8_t RX_ADC_FNRED_LANE                        : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_20_t;
__xdata __at( 0x1250 ) volatile RX_TOP_ANA_REG_20_t RX_TOP_ANA_REG_20;
#define reg_RX_ADC_CMSHFT_SEL_LANE_1_0  RX_TOP_ANA_REG_20.BF.RX_ADC_CMSHFT_SEL_LANE_1_0
#define reg_RX_ADC_TGDLY_SEL_LANE_1_0  RX_TOP_ANA_REG_20.BF.RX_ADC_TGDLY_SEL_LANE_1_0
#define reg_RX_ADC_FAST4_EN_LANE  RX_TOP_ANA_REG_20.BF.RX_ADC_FAST4_EN_LANE
#define reg_RX_ADC_COMP_CUR_SEL_LANE_1_0  RX_TOP_ANA_REG_20.BF.RX_ADC_COMP_CUR_SEL_LANE_1_0
#define reg_RX_ADC_FNRED_LANE  RX_TOP_ANA_REG_20.BF.RX_ADC_FNRED_LANE

// 0x15	RX_TOP_ANA_REG_21		Analog Register 21
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ADC_TEST_EN_LANE                      : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_ADC_MUTE_LANE                         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_21_t;
__xdata __at( 0x1254 ) volatile RX_TOP_ANA_REG_21_t RX_TOP_ANA_REG_21;
#define reg_RX_ADC_TEST_EN_LANE  RX_TOP_ANA_REG_21.BF.RX_ADC_TEST_EN_LANE
#define reg_RX_ADC_MUTE_LANE  RX_TOP_ANA_REG_21.BF.RX_ADC_MUTE_LANE

// 0x16	RX_TOP_ANA_REG_22		Analog Register 22
typedef union {
	struct {
		uint8_t RX_ADC_TEST_SEL_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_22_t;
__xdata __at( 0x1258 ) volatile RX_TOP_ANA_REG_22_t RX_TOP_ANA_REG_22;
#define reg_RX_ADC_TEST_SEL_LANE_7_0  RX_TOP_ANA_REG_22.BF.RX_ADC_TEST_SEL_LANE_7_0

// 0x17	RX_TOP_ANA_REG_23		Analog Register 23
typedef union {
	struct {
		uint8_t RX_ADC_RSV_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_23_t;
__xdata __at( 0x125c ) volatile RX_TOP_ANA_REG_23_t RX_TOP_ANA_REG_23;
#define reg_RX_ADC_RSV_LANE_7_0  RX_TOP_ANA_REG_23.BF.RX_ADC_RSV_LANE_7_0

// 0x18	RX_TOP_ANA_REG_24		Analog Register 24
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_PU_DLL_CMP_LANE                       : 1;	/*      5     r/w 1'h1*/
		uint8_t RX_DLL_RESSHORT_BWFLT_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_E2C_DCC_HG_LANE                       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_24_t;
__xdata __at( 0x1260 ) volatile RX_TOP_ANA_REG_24_t RX_TOP_ANA_REG_24;
#define reg_RX_PU_DLL_CMP_LANE  RX_TOP_ANA_REG_24.BF.RX_PU_DLL_CMP_LANE
#define reg_RX_DLL_RESSHORT_BWFLT_LANE  RX_TOP_ANA_REG_24.BF.RX_DLL_RESSHORT_BWFLT_LANE
#define reg_RX_E2C_DCC_HG_LANE  RX_TOP_ANA_REG_24.BF.RX_E2C_DCC_HG_LANE

// 0x19	RX_TOP_ANA_REG_25		Analog Register 25
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_PI_DPHERCK_DLY_SEL_LANE_1_0           : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t RX_PI_DCC_HG_DCLK_LANE                   : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_PI_BIAS_SHORT_EN_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_PI_CLKDET_EN_LANE                     : 1;	/*      5     r/w 1'h1*/
		uint8_t RX_PI_RESET_EXT_LANE                     : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_PU_PI_LANE                            : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_25_t;
__xdata __at( 0x1264 ) volatile RX_TOP_ANA_REG_25_t RX_TOP_ANA_REG_25;
#define reg_RX_PI_DPHERCK_DLY_SEL_LANE_1_0  RX_TOP_ANA_REG_25.BF.RX_PI_DPHERCK_DLY_SEL_LANE_1_0
#define reg_RX_PI_DCC_HG_DCLK_LANE  RX_TOP_ANA_REG_25.BF.RX_PI_DCC_HG_DCLK_LANE
#define reg_RX_PI_BIAS_SHORT_EN_LANE  RX_TOP_ANA_REG_25.BF.RX_PI_BIAS_SHORT_EN_LANE
#define reg_RX_PI_CLKDET_EN_LANE  RX_TOP_ANA_REG_25.BF.RX_PI_CLKDET_EN_LANE
#define reg_RX_PI_RESET_EXT_LANE  RX_TOP_ANA_REG_25.BF.RX_PI_RESET_EXT_LANE
#define reg_RX_PU_PI_LANE  RX_TOP_ANA_REG_25.BF.RX_PU_PI_LANE

// 0x1a	RX_TOP_ANA_REG_26		Analog Register 26
typedef union {
	struct {
		uint8_t RX_CLKTOP_CONFIG_LANE_10_3               : 8;	/*  [7:0]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_26_t;
__xdata __at( 0x1268 ) volatile RX_TOP_ANA_REG_26_t RX_TOP_ANA_REG_26;
#define reg_RX_CLKTOP_CONFIG_LANE_10_3  RX_TOP_ANA_REG_26.BF.RX_CLKTOP_CONFIG_LANE_10_3

// 0x1b	RX_TOP_ANA_REG_27		Analog Register 27
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_SKCTRL_RESSHORT_FILTBW_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_PU_A90_CMP_LANE                       : 1;	/*      3     r/w 1'h1*/
		uint8_t RX_A90_REF_FILT_BW_LANE                  : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_CLKTOP_CONFIG_LANE_2_0                : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_27_t;
__xdata __at( 0x126c ) volatile RX_TOP_ANA_REG_27_t RX_TOP_ANA_REG_27;
#define reg_RX_SKCTRL_RESSHORT_FILTBW_LANE  RX_TOP_ANA_REG_27.BF.RX_SKCTRL_RESSHORT_FILTBW_LANE
#define reg_RX_PU_A90_CMP_LANE  RX_TOP_ANA_REG_27.BF.RX_PU_A90_CMP_LANE
#define reg_RX_A90_REF_FILT_BW_LANE  RX_TOP_ANA_REG_27.BF.RX_A90_REF_FILT_BW_LANE
#define reg_RX_CLKTOP_CONFIG_LANE_2_0  RX_TOP_ANA_REG_27.BF.RX_CLKTOP_CONFIG_LANE_2_0

// 0x1c	RX_TOP_ANA_REG_28		Analog Register 28
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_RXCLKNT_INTDIV_EN_LANE                : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_RXCLKNT_DIV_RESET_LANE                : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_RXCLKNT_DIV_SEL_LANE_4_0              : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_28_t;
__xdata __at( 0x1270 ) volatile RX_TOP_ANA_REG_28_t RX_TOP_ANA_REG_28;
#define reg_RX_RXCLKNT_INTDIV_EN_LANE  RX_TOP_ANA_REG_28.BF.RX_RXCLKNT_INTDIV_EN_LANE
#define reg_RX_RXCLKNT_DIV_RESET_LANE  RX_TOP_ANA_REG_28.BF.RX_RXCLKNT_DIV_RESET_LANE
#define reg_RX_RXCLKNT_DIV_SEL_LANE_4_0  RX_TOP_ANA_REG_28.BF.RX_RXCLKNT_DIV_SEL_LANE_4_0

// 0x1d	RX_TOP_ANA_REG_29		Analog Register 29
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_RXCLKNT_CTRL_LANE_1_0                 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RX_RXCLKNT_DIV_SPEED_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_29_t;
__xdata __at( 0x1274 ) volatile RX_TOP_ANA_REG_29_t RX_TOP_ANA_REG_29;
#define reg_RX_RXCLKNT_CTRL_LANE_1_0  RX_TOP_ANA_REG_29.BF.RX_RXCLKNT_CTRL_LANE_1_0
#define reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0  RX_TOP_ANA_REG_29.BF.RX_RXCLKNT_DIV_SPEED_LANE_2_0

// 0x1e	RX_TOP_ANA_REG_30		Analog Register 30
typedef union {
	struct {
		uint8_t RX_TOP_RSV_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_30_t;
__xdata __at( 0x1278 ) volatile RX_TOP_ANA_REG_30_t RX_TOP_ANA_REG_30;
#define reg_RX_TOP_RSV_LANE_7_0  RX_TOP_ANA_REG_30.BF.RX_TOP_RSV_LANE_7_0

// 0x1f	RX_TOP_ANA_REG_31		Analog Register 31
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_TEST_EN_LANE                          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_31_t;
__xdata __at( 0x127c ) volatile RX_TOP_ANA_REG_31_t RX_TOP_ANA_REG_31;
#define reg_RX_TEST_EN_LANE  RX_TOP_ANA_REG_31.BF.RX_TEST_EN_LANE

// 0x20	RX_TOP_ANA_REG_32		Analog Register 32
typedef union {
	struct {
		uint8_t RX_CTLE_RL1_CTRL_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hF*/
		uint8_t RX_INNET_TCOIL_CL_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_32_t;
__xdata __at( 0x1280 ) volatile RX_TOP_ANA_REG_32_t RX_TOP_ANA_REG_32;
#define reg_RX_CTLE_RL1_CTRL_LANE_3_0  RX_TOP_ANA_REG_32.BF.RX_CTLE_RL1_CTRL_LANE_3_0
#define reg_RX_INNET_TCOIL_CL_LANE_3_0  RX_TOP_ANA_REG_32.BF.RX_INNET_TCOIL_CL_LANE_3_0

// 0x21	RX_TOP_ANA_REG_33		Analog Register 33
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_CTLE_CS1_CTRL_LANE_4_0                : 5;	/*  [7:3]     r/w 5'h1F*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_33_t;
__xdata __at( 0x1284 ) volatile RX_TOP_ANA_REG_33_t RX_TOP_ANA_REG_33;
#define reg_RX_CTLE_CS1_CTRL_LANE_4_0  RX_TOP_ANA_REG_33.BF.RX_CTLE_CS1_CTRL_LANE_4_0

// 0x22	RX_TOP_ANA_REG_34		Analog Register 34
typedef union {
	struct {
		uint8_t RX_CTLE_CUR1_SEL_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hF*/
		uint8_t RX_CTLE_RS1_CTRL_LANE_3_0                : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_34_t;
__xdata __at( 0x1288 ) volatile RX_TOP_ANA_REG_34_t RX_TOP_ANA_REG_34;
#define reg_RX_CTLE_CUR1_SEL_LANE_3_0  RX_TOP_ANA_REG_34.BF.RX_CTLE_CUR1_SEL_LANE_3_0
#define reg_RX_CTLE_RS1_CTRL_LANE_3_0  RX_TOP_ANA_REG_34.BF.RX_CTLE_RS1_CTRL_LANE_3_0

// 0x23	RX_TOP_ANA_REG_35		Analog Register 35
typedef union {
	struct {
		uint8_t RX_CTLE_RS2_CTRL_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RX_CTLE_CS2_CTRL_LANE_3_0                : 4;	/*  [7:4]     r/w 4'hF*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_35_t;
__xdata __at( 0x128c ) volatile RX_TOP_ANA_REG_35_t RX_TOP_ANA_REG_35;
#define reg_RX_CTLE_RS2_CTRL_LANE_3_0  RX_TOP_ANA_REG_35.BF.RX_CTLE_RS2_CTRL_LANE_3_0
#define reg_RX_CTLE_CS2_CTRL_LANE_3_0  RX_TOP_ANA_REG_35.BF.RX_CTLE_CS2_CTRL_LANE_3_0

// 0x24	RX_TOP_ANA_REG_36		Analog Register 36
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CTLE_CUR2_SEL_LANE_3_0                : 4;	/*  [5:2]     r/w 4'hF*/
		uint8_t RX_CTLE_RS2_SEL_LANE_1_0                 : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_36_t;
__xdata __at( 0x1290 ) volatile RX_TOP_ANA_REG_36_t RX_TOP_ANA_REG_36;
#define reg_RX_CTLE_CUR2_SEL_LANE_3_0  RX_TOP_ANA_REG_36.BF.RX_CTLE_CUR2_SEL_LANE_3_0
#define reg_RX_CTLE_RS2_SEL_LANE_1_0  RX_TOP_ANA_REG_36.BF.RX_CTLE_RS2_SEL_LANE_1_0

// 0x25	RX_TOP_ANA_REG_37		Analog Register 37
typedef union {
	struct {
		uint8_t RX_CTLE_GAIN_COARSE_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RX_CTLE_CUR_TIA_SEL_LANE_3_0             : 4;	/*  [7:4]     r/w 4'hF*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_37_t;
__xdata __at( 0x1294 ) volatile RX_TOP_ANA_REG_37_t RX_TOP_ANA_REG_37;
#define reg_RX_CTLE_GAIN_COARSE_LANE_3_0  RX_TOP_ANA_REG_37.BF.RX_CTLE_GAIN_COARSE_LANE_3_0
#define reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0  RX_TOP_ANA_REG_37.BF.RX_CTLE_CUR_TIA_SEL_LANE_3_0

// 0x26	RX_TOP_ANA_REG_38		Analog Register 38
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_PI_RSEL_LANE_1_0                      : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t RX_CTLE_IPTAT_SEL_LANE_2_0               : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t RX_CTLE_RFB_SEL_LANE_1_0                 : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_38_t;
__xdata __at( 0x1298 ) volatile RX_TOP_ANA_REG_38_t RX_TOP_ANA_REG_38;
#define reg_RX_PI_RSEL_LANE_1_0  RX_TOP_ANA_REG_38.BF.RX_PI_RSEL_LANE_1_0
#define reg_RX_CTLE_IPTAT_SEL_LANE_2_0  RX_TOP_ANA_REG_38.BF.RX_CTLE_IPTAT_SEL_LANE_2_0
#define reg_RX_CTLE_RFB_SEL_LANE_1_0  RX_TOP_ANA_REG_38.BF.RX_CTLE_RFB_SEL_LANE_1_0

// 0x27	RX_TOP_ANA_REG_39		Analog Register 39
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ADC_RES_SEL_LANE_1_0                  : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t RX_ADC_VDD_SEL_LANE_2_0                  : 3;	/*  [5:3]     r/w 3'h3*/
		uint8_t RX_ADC_ICC_SEL_LANE_1_0                  : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_39_t;
__xdata __at( 0x129c ) volatile RX_TOP_ANA_REG_39_t RX_TOP_ANA_REG_39;
#define reg_RX_ADC_RES_SEL_LANE_1_0  RX_TOP_ANA_REG_39.BF.RX_ADC_RES_SEL_LANE_1_0
#define reg_RX_ADC_VDD_SEL_LANE_2_0  RX_TOP_ANA_REG_39.BF.RX_ADC_VDD_SEL_LANE_2_0
#define reg_RX_ADC_ICC_SEL_LANE_1_0  RX_TOP_ANA_REG_39.BF.RX_ADC_ICC_SEL_LANE_1_0

// 0x28	RX_TOP_ANA_REG_40		Analog Register 40
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_A90_CAP_SEL_LANE_1_0                  : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t RX_DLL_CAP_SEL_LANE_2_0                  : 3;	/*  [7:5]     r/w 3'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_40_t;
__xdata __at( 0x12a0 ) volatile RX_TOP_ANA_REG_40_t RX_TOP_ANA_REG_40;
#define reg_RX_A90_CAP_SEL_LANE_1_0  RX_TOP_ANA_REG_40.BF.RX_A90_CAP_SEL_LANE_1_0
#define reg_RX_DLL_CAP_SEL_LANE_2_0  RX_TOP_ANA_REG_40.BF.RX_DLL_CAP_SEL_LANE_2_0

// 0x29	RX_TOP_ANA_REG_41		Analog Register 41
typedef union {
	struct {
		uint8_t RX_TH_CMO_EN_LANE                        : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ADC_EOM1SF_EN_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ADC_PROT_DIS_LANE                     : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_ADC_INT_REF_SEL_LANE                  : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_ADC_SLOW_MSB_EN_LANE                  : 1;	/*      4     r/w 1'h1*/
		uint8_t RX_DCO_CDRLOOP_EN_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_SKEW_RANGE_LANE_1_0                   : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_41_t;
__xdata __at( 0x12a4 ) volatile RX_TOP_ANA_REG_41_t RX_TOP_ANA_REG_41;
#define reg_RX_TH_CMO_EN_LANE  RX_TOP_ANA_REG_41.BF.RX_TH_CMO_EN_LANE
#define reg_RX_ADC_EOM1SF_EN_LANE  RX_TOP_ANA_REG_41.BF.RX_ADC_EOM1SF_EN_LANE
#define reg_RX_ADC_PROT_DIS_LANE  RX_TOP_ANA_REG_41.BF.RX_ADC_PROT_DIS_LANE
#define reg_RX_ADC_INT_REF_SEL_LANE  RX_TOP_ANA_REG_41.BF.RX_ADC_INT_REF_SEL_LANE
#define reg_RX_ADC_SLOW_MSB_EN_LANE  RX_TOP_ANA_REG_41.BF.RX_ADC_SLOW_MSB_EN_LANE
#define reg_RX_DCO_CDRLOOP_EN_LANE  RX_TOP_ANA_REG_41.BF.RX_DCO_CDRLOOP_EN_LANE
#define reg_RX_SKEW_RANGE_LANE_1_0  RX_TOP_ANA_REG_41.BF.RX_SKEW_RANGE_LANE_1_0

// 0x2a	RX_TOP_ANA_REG_42		Analog Register 42
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CTLE_LTE_EN_LANE                      : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_ADC_2UI_DLY_LANE_2_0                  : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RX_ADC_IPPTH_SEL_LANE_1_0                : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_42_t;
__xdata __at( 0x12a8 ) volatile RX_TOP_ANA_REG_42_t RX_TOP_ANA_REG_42;
#define reg_RX_CTLE_LTE_EN_LANE  RX_TOP_ANA_REG_42.BF.RX_CTLE_LTE_EN_LANE
#define reg_RX_ADC_2UI_DLY_LANE_2_0  RX_TOP_ANA_REG_42.BF.RX_ADC_2UI_DLY_LANE_2_0
#define reg_RX_ADC_IPPTH_SEL_LANE_1_0  RX_TOP_ANA_REG_42.BF.RX_ADC_IPPTH_SEL_LANE_1_0

// 0x2b	RX_TOP_ANA_REG_43		Analog Register 43
typedef union {
	struct {
		uint8_t RX_E2C_DCC_EN_LANE                       : 1;	/*      0     r/w 1'h1*/
		uint8_t RX_DLL_FILT_BW_SEL_LANE                  : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_CTLE_LTE_FREQ_CTRL_LANE_2_0           : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RX_CTLE_LTE_GAIN_CTRL_LANE_2_0           : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_43_t;
__xdata __at( 0x12ac ) volatile RX_TOP_ANA_REG_43_t RX_TOP_ANA_REG_43;
#define reg_RX_E2C_DCC_EN_LANE  RX_TOP_ANA_REG_43.BF.RX_E2C_DCC_EN_LANE
#define reg_RX_DLL_FILT_BW_SEL_LANE  RX_TOP_ANA_REG_43.BF.RX_DLL_FILT_BW_SEL_LANE
#define reg_RX_CTLE_LTE_FREQ_CTRL_LANE_2_0  RX_TOP_ANA_REG_43.BF.RX_CTLE_LTE_FREQ_CTRL_LANE_2_0
#define reg_RX_CTLE_LTE_GAIN_CTRL_LANE_2_0  RX_TOP_ANA_REG_43.BF.RX_CTLE_LTE_GAIN_CTRL_LANE_2_0

// 0x2c	RX_TOP_ANA_REG_44		Analog Register 44
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_ANA_LB_CML_RS_LANE_1_0                : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t RX_ANA_LB_CML_BIAS_LANE_1_0              : 2;	/*  [4:3]     r/w 2'h2*/
		uint8_t RX_ANA_LB_RX_IMP_LANE_1_0                : 2;	/*  [6:5]     r/w 2'h2*/
		uint8_t RX_ANA_LB_EN_LANE                        : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_44_t;
__xdata __at( 0x12b0 ) volatile RX_TOP_ANA_REG_44_t RX_TOP_ANA_REG_44;
#define reg_RX_ANA_LB_CML_RS_LANE_1_0  RX_TOP_ANA_REG_44.BF.RX_ANA_LB_CML_RS_LANE_1_0
#define reg_RX_ANA_LB_CML_BIAS_LANE_1_0  RX_TOP_ANA_REG_44.BF.RX_ANA_LB_CML_BIAS_LANE_1_0
#define reg_RX_ANA_LB_RX_IMP_LANE_1_0  RX_TOP_ANA_REG_44.BF.RX_ANA_LB_RX_IMP_LANE_1_0
#define reg_RX_ANA_LB_EN_LANE  RX_TOP_ANA_REG_44.BF.RX_ANA_LB_EN_LANE

// 0x2d	RX_TOP_ANA_REG_45		Analog Register 45
typedef union {
	struct {
		uint8_t RX_CTLE_V0P8_SEL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RX_TH_CMFB_REF_SEL_LANE                  : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_TH_CM_EX_SEL_LANE_1_0                 : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RX_CTLE_RS1_SHORT_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ANA_LB_CML_CS_LANE_1_0                : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_45_t;
__xdata __at( 0x12b4 ) volatile RX_TOP_ANA_REG_45_t RX_TOP_ANA_REG_45;
#define reg_RX_CTLE_V0P8_SEL_LANE_1_0  RX_TOP_ANA_REG_45.BF.RX_CTLE_V0P8_SEL_LANE_1_0
#define reg_RX_TH_CMFB_REF_SEL_LANE  RX_TOP_ANA_REG_45.BF.RX_TH_CMFB_REF_SEL_LANE
#define reg_RX_TH_CM_EX_SEL_LANE_1_0  RX_TOP_ANA_REG_45.BF.RX_TH_CM_EX_SEL_LANE_1_0
#define reg_RX_CTLE_RS1_SHORT_LANE  RX_TOP_ANA_REG_45.BF.RX_CTLE_RS1_SHORT_LANE
#define reg_RX_ANA_LB_CML_CS_LANE_1_0  RX_TOP_ANA_REG_45.BF.RX_ANA_LB_CML_CS_LANE_1_0

// 0x2e	RX_TOP_ANA_REG_46		Analog Register 46
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RX_ADC_SPD_SENSE_CNT_WIDTH_LANE_1_0      : 2;	/*  [3:2]     r/w 2'h3*/
		uint8_t RX_ADC_SPD_SENSE_EN_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_ADC_SPD_SENSE_DLY_LANE_1_0            : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RX_CTLE_TSTPT_EX_SEL_LANE                : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_46_t;
__xdata __at( 0x12b8 ) volatile RX_TOP_ANA_REG_46_t RX_TOP_ANA_REG_46;
#define reg_RX_ADC_SPD_SENSE_CNT_WIDTH_LANE_1_0  RX_TOP_ANA_REG_46.BF.RX_ADC_SPD_SENSE_CNT_WIDTH_LANE_1_0
#define reg_RX_ADC_SPD_SENSE_EN_LANE  RX_TOP_ANA_REG_46.BF.RX_ADC_SPD_SENSE_EN_LANE
#define reg_RX_ADC_SPD_SENSE_DLY_LANE_1_0  RX_TOP_ANA_REG_46.BF.RX_ADC_SPD_SENSE_DLY_LANE_1_0
#define reg_RX_CTLE_TSTPT_EX_SEL_LANE  RX_TOP_ANA_REG_46.BF.RX_CTLE_TSTPT_EX_SEL_LANE

// 0x2f	RX_TOP_ANA_REG_47		Analog Register 47
typedef union {
	struct {
		uint8_t RX_ADC_SPD_SENSE_CNT_OUT_LANE_9_2        : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_47_t;
__xdata __at( 0x12bc ) volatile RX_TOP_ANA_REG_47_t RX_TOP_ANA_REG_47;
#define reg_RX_ADC_SPD_SENSE_CNT_OUT_LANE_9_2  RX_TOP_ANA_REG_47.BF.RX_ADC_SPD_SENSE_CNT_OUT_LANE_9_2

// 0x30	RX_TOP_ANA_REG_48		Analog Register 48
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RX_ADC_SPD_SENSE_CNT_OUT_LANE_1_0        : 2;	/*  [7:6]       r 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TOP_ANA_REG_48_t;
__xdata __at( 0x12c0 ) volatile RX_TOP_ANA_REG_48_t RX_TOP_ANA_REG_48;
#define reg_RX_ADC_SPD_SENSE_CNT_OUT_LANE_1_0  RX_TOP_ANA_REG_48.BF.RX_ADC_SPD_SENSE_CNT_OUT_LANE_1_0

// 0x31	RX_CAL_REG0		Digital rx Calibration Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RX_DIG_CAL_CLK_RST_BOT_LANE              : 1;	/*      4     r/w 1'h0*/
		uint8_t RX_DIG_CAL_CLK_EN_BOT_LANE               : 1;	/*      5     r/w 1'h1*/
		uint8_t RX_DIG_CAL_CLK_RST_TOP_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t RX_DIG_CAL_CLK_EN_TOP_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CAL_REG0_t;
__xdata __at( 0x12c4 ) volatile RX_CAL_REG0_t RX_CAL_REG0;
#define reg_RX_DIG_CAL_CLK_RST_BOT_LANE  RX_CAL_REG0.BF.RX_DIG_CAL_CLK_RST_BOT_LANE
#define reg_RX_DIG_CAL_CLK_EN_BOT_LANE  RX_CAL_REG0.BF.RX_DIG_CAL_CLK_EN_BOT_LANE
#define reg_RX_DIG_CAL_CLK_RST_TOP_LANE  RX_CAL_REG0.BF.RX_DIG_CAL_CLK_RST_TOP_LANE
#define reg_RX_DIG_CAL_CLK_EN_TOP_LANE  RX_CAL_REG0.BF.RX_DIG_CAL_CLK_EN_TOP_LANE

// 0x32	RX_CAL_REG1		Digital rx Calibration Register 1
typedef union {
	struct {
		uint8_t RX_DIG_CAL2M_DIV_TOP_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CAL_REG1_t;
__xdata __at( 0x12c8 ) volatile RX_CAL_REG1_t RX_CAL_REG1;
#define reg_RX_DIG_CAL2M_DIV_TOP_LANE_7_0  RX_CAL_REG1.BF.RX_DIG_CAL2M_DIV_TOP_LANE_7_0

// 0x33	RX_CAL_REG2		Digital rx Calibration Register 2
typedef union {
	struct {
		uint8_t RX_DIG_CAL2M_DIV_BOT_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CAL_REG2_t;
__xdata __at( 0x12cc ) volatile RX_CAL_REG2_t RX_CAL_REG2;
#define reg_RX_DIG_CAL2M_DIV_BOT_LANE_7_0  RX_CAL_REG2.BF.RX_DIG_CAL2M_DIV_BOT_LANE_7_0

// 0x34	RX_CAL_REG3		Digital RX Calibration Register 3
typedef union {
	struct {
		uint8_t RX_DIG_TESTBUS_SEL_BOT_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RX_DIG_TESTBUS_SEL_TOP_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CAL_REG3_t;
__xdata __at( 0x12d0 ) volatile RX_CAL_REG3_t RX_CAL_REG3;
#define reg_RX_DIG_TESTBUS_SEL_BOT_LANE_3_0  RX_CAL_REG3.BF.RX_DIG_TESTBUS_SEL_BOT_LANE_3_0
#define reg_RX_DIG_TESTBUS_SEL_TOP_LANE_3_0  RX_CAL_REG3.BF.RX_DIG_TESTBUS_SEL_TOP_LANE_3_0

#endif
