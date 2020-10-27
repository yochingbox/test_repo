#ifndef C_XSRPHY_112G_N5_SOFTWARE_COMMON_V00.49_1BYTE_REG_MIDAS_H
#define C_XSRPHY_112G_N5_SOFTWARE_COMMON_V00.49_1BYTE_REG_MIDAS_H



// 0x0008	ZCAL_CONTROL_REGISTER		Common Register
typedef union {
	struct {
		uint8_t PLLCALRES_4_0                            : 5;	/*  [4:0]     r/w 5'h1E*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t OVERRIDEEN                               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ZCAL_CONTROL_REGISTER_t;
__xdata __at( 0x4008 ) volatile ZCAL_CONTROL_REGISTER_t ZCAL_CONTROL_REGISTER;
#define reg_PLLCALRES_4_0  ZCAL_CONTROL_REGISTER.BF.PLLCALRES_4_0
#define reg_OVERRIDEEN  ZCAL_CONTROL_REGISTER.BF.OVERRIDEEN

// 0x0014	ANALOG_TEST_MUX_REGISTER		Common Register
typedef union {
	struct {
		uint8_t ATST_4_0                                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANALOG_TEST_MUX_REGISTER_t;
__xdata __at( 0x4014 ) volatile ANALOG_TEST_MUX_REGISTER_t ANALOG_TEST_MUX_REGISTER;
#define reg_ATST_4_0  ANALOG_TEST_MUX_REGISTER.BF.ATST_4_0

// 0x0018	CORE_VERSION_REGISTER		Common Register
typedef union {
	struct {
		uint8_t COREVERS_7_0                             : 8;	/*  [7:0]       r 8'h80*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CORE_VERSION_REGISTER_t;
__xdata __at( 0x4018 ) volatile CORE_VERSION_REGISTER_t CORE_VERSION_REGISTER;
#define reg_COREVERS_7_0  CORE_VERSION_REGISTER.BF.COREVERS_7_0

// 0x001c	LOGIC_VERSION_REGISTER		Common Register
typedef union {
	struct {
		uint8_t LGCVERS_7_0                              : 8;	/*  [7:0]       r 8'h80*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOGIC_VERSION_REGISTER_t;
__xdata __at( 0x401c ) volatile LOGIC_VERSION_REGISTER_t LOGIC_VERSION_REGISTER;
#define reg_LGCVERS_7_0  LOGIC_VERSION_REGISTER.BF.LGCVERS_7_0

// 0x0020	ANALOG_VERSION_REGISTER		Common Register
typedef union {
	struct {
		uint8_t ANLGVERS_7_0                             : 8;	/*  [7:0]       r 8'h80*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANALOG_VERSION_REGISTER_t;
__xdata __at( 0x4020 ) volatile ANALOG_VERSION_REGISTER_t ANALOG_VERSION_REGISTER;
#define reg_ANLGVERS_7_0  ANALOG_VERSION_REGISTER.BF.ANLGVERS_7_0

// 0x0028	STAGE_2_CONTROL_REGISTER_1		Common Register
typedef union {
	struct {
		uint8_t PLLRANGE                                 : 1;	/*      0     r/w 1'h0*/
		uint8_t PLLDIV2_OVRD                             : 1;	/*      1     r/w 1'h0*/
		uint8_t PLLDIV1P5OR2                             : 1;	/*      2     r/w 1'h0*/
		uint8_t STG2OVRD                                 : 1;	/*      3     r/w 1'h0*/
		uint8_t VCORANGE_1_0                             : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STAGE_2_CONTROL_REGISTER_1_t;
__xdata __at( 0x4028 ) volatile STAGE_2_CONTROL_REGISTER_1_t STAGE_2_CONTROL_REGISTER_1;
#define reg_PLLRANGE  STAGE_2_CONTROL_REGISTER_1.BF.PLLRANGE
#define reg_PLLDIV2_OVRD  STAGE_2_CONTROL_REGISTER_1.BF.PLLDIV2_OVRD
#define reg_PLLDIV1P5OR2  STAGE_2_CONTROL_REGISTER_1.BF.PLLDIV1P5OR2
#define reg_STG2OVRD  STAGE_2_CONTROL_REGISTER_1.BF.STG2OVRD
#define reg_VCORANGE_1_0  STAGE_2_CONTROL_REGISTER_1.BF.VCORANGE_1_0

// 0x002c	STAGE_2_CONTROL_REGISTER_2		Common Register
typedef union {
	struct {
		uint8_t CLKDISTP1R0_2_0                          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t CLKDISTP1R1_2_0                          : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STAGE_2_CONTROL_REGISTER_2_t;
__xdata __at( 0x402c ) volatile STAGE_2_CONTROL_REGISTER_2_t STAGE_2_CONTROL_REGISTER_2;
#define reg_CLKDISTP1R0_2_0  STAGE_2_CONTROL_REGISTER_2.BF.CLKDISTP1R0_2_0
#define reg_CLKDISTP1R1_2_0  STAGE_2_CONTROL_REGISTER_2.BF.CLKDISTP1R1_2_0

// 0x0030	STAGE_2_CONTROL_REGISTER_3		Common Register
typedef union {
	struct {
		uint8_t CLKDISTP0R0_2_0                          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t CLKDISTP0R1_2_0                          : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STAGE_2_CONTROL_REGISTER_3_t;
__xdata __at( 0x4030 ) volatile STAGE_2_CONTROL_REGISTER_3_t STAGE_2_CONTROL_REGISTER_3;
#define reg_CLKDISTP0R0_2_0  STAGE_2_CONTROL_REGISTER_3.BF.CLKDISTP0R0_2_0
#define reg_CLKDISTP0R1_2_0  STAGE_2_CONTROL_REGISTER_3.BF.CLKDISTP0R1_2_0

// 0x0034	STAGE_2_CONTROL_REGISTER_4		Common Register
typedef union {
	struct {
		uint8_t DIV2TXQ0                                 : 1;	/*      0     r/w 1'h0*/
		uint8_t DIV2TXQ1                                 : 1;	/*      1     r/w 1'h0*/
		uint8_t DIV2TXQ2                                 : 1;	/*      2     r/w 1'h0*/
		uint8_t DIV2TXQ3                                 : 1;	/*      3     r/w 1'h0*/
		uint8_t DIV2RXQ0                                 : 1;	/*      4     r/w 1'h0*/
		uint8_t DIV2RXQ1                                 : 1;	/*      5     r/w 1'h0*/
		uint8_t DIV2RXQ2                                 : 1;	/*      6     r/w 1'h0*/
		uint8_t DIV2RXQ3                                 : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STAGE_2_CONTROL_REGISTER_4_t;
__xdata __at( 0x4034 ) volatile STAGE_2_CONTROL_REGISTER_4_t STAGE_2_CONTROL_REGISTER_4;
#define reg_DIV2TXQ0  STAGE_2_CONTROL_REGISTER_4.BF.DIV2TXQ0
#define reg_DIV2TXQ1  STAGE_2_CONTROL_REGISTER_4.BF.DIV2TXQ1
#define reg_DIV2TXQ2  STAGE_2_CONTROL_REGISTER_4.BF.DIV2TXQ2
#define reg_DIV2TXQ3  STAGE_2_CONTROL_REGISTER_4.BF.DIV2TXQ3
#define reg_DIV2RXQ0  STAGE_2_CONTROL_REGISTER_4.BF.DIV2RXQ0
#define reg_DIV2RXQ1  STAGE_2_CONTROL_REGISTER_4.BF.DIV2RXQ1
#define reg_DIV2RXQ2  STAGE_2_CONTROL_REGISTER_4.BF.DIV2RXQ2
#define reg_DIV2RXQ3  STAGE_2_CONTROL_REGISTER_4.BF.DIV2RXQ3

// 0x0038	STAGE_2_CONTROL_REGISTER_5		Common Register
typedef union {
	struct {
		uint8_t PDWNPLLOUT_7_0                           : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STAGE_2_CONTROL_REGISTER_5_t;
__xdata __at( 0x4038 ) volatile STAGE_2_CONTROL_REGISTER_5_t STAGE_2_CONTROL_REGISTER_5;
#define reg_PDWNPLLOUT_7_0  STAGE_2_CONTROL_REGISTER_5.BF.PDWNPLLOUT_7_0

// 0x003c	STAGE_2_CONTROL_REGISTER_6		Common Register
typedef union {
	struct {
		uint8_t LINKPDWN_7_0                             : 8;	/*  [7:0]       r 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} STAGE_2_CONTROL_REGISTER_6_t;
__xdata __at( 0x403c ) volatile STAGE_2_CONTROL_REGISTER_6_t STAGE_2_CONTROL_REGISTER_6;
#define reg_LINKPDWN_7_0  STAGE_2_CONTROL_REGISTER_6.BF.LINKPDWN_7_0

// 0x00c0	INEQUALITY_CONTROL_AND_RESULTS_REGISTER		Common Register
typedef union {
	struct {
		uint8_t INEQEN                                   : 1;	/*      0     r/w 1'h0*/
		uint8_t GTORLT_1_0                               : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t VALTYPE_1_0                              : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t ISEQ                                     : 1;	/*      5       r 1'h0*/
		uint8_t ISLT                                     : 1;	/*      6       r 1'h0*/
		uint8_t ISGT                                     : 1;	/*      7       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INEQUALITY_CONTROL_AND_RESULTS_REGISTER_t;
__xdata __at( 0x40c0 ) volatile INEQUALITY_CONTROL_AND_RESULTS_REGISTER_t INEQUALITY_CONTROL_AND_RESULTS_REGISTER;
#define reg_INEQEN  INEQUALITY_CONTROL_AND_RESULTS_REGISTER.BF.INEQEN
#define reg_GTORLT_1_0  INEQUALITY_CONTROL_AND_RESULTS_REGISTER.BF.GTORLT_1_0
#define reg_VALTYPE_1_0  INEQUALITY_CONTROL_AND_RESULTS_REGISTER.BF.VALTYPE_1_0
#define reg_ISEQ  INEQUALITY_CONTROL_AND_RESULTS_REGISTER.BF.ISEQ
#define reg_ISLT  INEQUALITY_CONTROL_AND_RESULTS_REGISTER.BF.ISLT
#define reg_ISGT  INEQUALITY_CONTROL_AND_RESULTS_REGISTER.BF.ISGT

// 0x00e8	MACRO_TEST_CONTROL_REGISTER_6		Common Register
typedef union {
	struct {
		uint8_t JTAGMD                                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w 7'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MACRO_TEST_CONTROL_REGISTER_6_t;
__xdata __at( 0x40e8 ) volatile MACRO_TEST_CONTROL_REGISTER_6_t MACRO_TEST_CONTROL_REGISTER_6;
#define reg_JTAGMD  MACRO_TEST_CONTROL_REGISTER_6.BF.JTAGMD

// 0x00ec	MACRO_TEST_CONTROL_REGISTER_5		Common Register
typedef union {
	struct {
		uint8_t MACROTEST                                : 1;	/*      0     r/w 1'h0*/
		uint8_t SOFTRESET                                : 1;	/*      1     r/w 1'h0*/
		uint8_t REFELRST                                 : 1;	/*      2     r/w 1'h0*/
		uint8_t REFVALA                                  : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t HSSPORPWREN_OVRD                         : 1;	/*      6     r/w 1'h0*/
		uint8_t PORRSTMTC                                : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MACRO_TEST_CONTROL_REGISTER_5_t;
__xdata __at( 0x40ec ) volatile MACRO_TEST_CONTROL_REGISTER_5_t MACRO_TEST_CONTROL_REGISTER_5;
#define reg_MACROTEST  MACRO_TEST_CONTROL_REGISTER_5.BF.MACROTEST
#define reg_SOFTRESET  MACRO_TEST_CONTROL_REGISTER_5.BF.SOFTRESET
#define reg_REFELRST  MACRO_TEST_CONTROL_REGISTER_5.BF.REFELRST
#define reg_REFVALA  MACRO_TEST_CONTROL_REGISTER_5.BF.REFVALA
#define reg_HSSPORPWREN_OVRD  MACRO_TEST_CONTROL_REGISTER_5.BF.HSSPORPWREN_OVRD
#define reg_PORRSTMTC  MACRO_TEST_CONTROL_REGISTER_5.BF.PORRSTMTC

// 0x00f0	MACRO_TEST_CONTROL_REGISTER_4		Common Register
typedef union {
	struct {
		uint8_t REFDIV_2_0                               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t PLLDIV1P5                                : 1;	/*      3     r/w 1'h0*/
		uint8_t PLLDIV2                                  : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MACRO_TEST_CONTROL_REGISTER_4_t;
__xdata __at( 0x40f0 ) volatile MACRO_TEST_CONTROL_REGISTER_4_t MACRO_TEST_CONTROL_REGISTER_4;
#define reg_REFDIV_2_0  MACRO_TEST_CONTROL_REGISTER_4.BF.REFDIV_2_0
#define reg_PLLDIV1P5  MACRO_TEST_CONTROL_REGISTER_4.BF.PLLDIV1P5
#define reg_PLLDIV2  MACRO_TEST_CONTROL_REGISTER_4.BF.PLLDIV2

#endif
