#ifndef PHY_REG_C_CDS_LANE_H
#define PHY_REG_C_CDS_LANE_H



// 0x0100	CDS_READ_REG0_P1		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path1
typedef union {
	struct {
		uint8_t CDS_DC_D_BOT_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_MID_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_D_TOP_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_S_BOT_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG0_P1_t;
__xdata __at( 0x6100 ) volatile CDS_READ_REG0_P1_t CDS_READ_REG0_P1;
#define reg_CDS_DC_D_BOT_P1_LANE_7_0  CDS_READ_REG0_P1.BF.CDS_DC_D_BOT_P1_LANE_7_0
#define reg_CDS_DC_D_MID_P1_LANE_7_0  CDS_READ_REG0_P1.BF.CDS_DC_D_MID_P1_LANE_7_0
#define reg_CDS_DC_D_TOP_P1_LANE_7_0  CDS_READ_REG0_P1.BF.CDS_DC_D_TOP_P1_LANE_7_0
#define reg_CDS_DC_S_BOT_P1_LANE_7_0  CDS_READ_REG0_P1.BF.CDS_DC_S_BOT_P1_LANE_7_0

// 0x0104	CDS_READ_REG1_P1		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path1
typedef union {
	struct {
		uint8_t CDS_DC_S_MID_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_S_TOP_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_E_P1_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_VREF_BOT_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG1_P1_t;
__xdata __at( 0x6104 ) volatile CDS_READ_REG1_P1_t CDS_READ_REG1_P1;
#define reg_CDS_DC_S_MID_P1_LANE_7_0  CDS_READ_REG1_P1.BF.CDS_DC_S_MID_P1_LANE_7_0
#define reg_CDS_DC_S_TOP_P1_LANE_7_0  CDS_READ_REG1_P1.BF.CDS_DC_S_TOP_P1_LANE_7_0
#define reg_CDS_DC_E_P1_LANE_7_0  CDS_READ_REG1_P1.BF.CDS_DC_E_P1_LANE_7_0
#define reg_CDS_VREF_BOT_P1_LANE_7_0  CDS_READ_REG1_P1.BF.CDS_VREF_BOT_P1_LANE_7_0

// 0x0108	CDS_READ_REG2_P1		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path1
typedef union {
	struct {
		uint8_t CDS_VREF_MID_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_VREF_TOP_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_D_BOT_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_D_MID_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG2_P1_t;
__xdata __at( 0x6108 ) volatile CDS_READ_REG2_P1_t CDS_READ_REG2_P1;
#define reg_CDS_VREF_MID_P1_LANE_7_0  CDS_READ_REG2_P1.BF.CDS_VREF_MID_P1_LANE_7_0
#define reg_CDS_VREF_TOP_P1_LANE_7_0  CDS_READ_REG2_P1.BF.CDS_VREF_TOP_P1_LANE_7_0
#define reg_CDS_F0_D_BOT_P1_LANE_7_0  CDS_READ_REG2_P1.BF.CDS_F0_D_BOT_P1_LANE_7_0
#define reg_CDS_F0_D_MID_P1_LANE_7_0  CDS_READ_REG2_P1.BF.CDS_F0_D_MID_P1_LANE_7_0

// 0x010c	CDS_READ_REG3_P1		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path1
typedef union {
	struct {
		uint8_t CDS_F0_D_TOP_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_S_BOT_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_MID_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_S_TOP_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG3_P1_t;
__xdata __at( 0x610c ) volatile CDS_READ_REG3_P1_t CDS_READ_REG3_P1;
#define reg_CDS_F0_D_TOP_P1_LANE_7_0  CDS_READ_REG3_P1.BF.CDS_F0_D_TOP_P1_LANE_7_0
#define reg_CDS_F0_S_BOT_P1_LANE_7_0  CDS_READ_REG3_P1.BF.CDS_F0_S_BOT_P1_LANE_7_0
#define reg_CDS_F0_S_MID_P1_LANE_7_0  CDS_READ_REG3_P1.BF.CDS_F0_S_MID_P1_LANE_7_0
#define reg_CDS_F0_S_TOP_P1_LANE_7_0  CDS_READ_REG3_P1.BF.CDS_F0_S_TOP_P1_LANE_7_0

// 0x0110	CDS_READ_REG4_P1		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path1
typedef union {
	struct {
		uint8_t CDS_F2_D_BOT_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_MID_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_D_TOP_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_S_BOT_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG4_P1_t;
__xdata __at( 0x6110 ) volatile CDS_READ_REG4_P1_t CDS_READ_REG4_P1;
#define reg_CDS_F2_D_BOT_P1_LANE_7_0  CDS_READ_REG4_P1.BF.CDS_F2_D_BOT_P1_LANE_7_0
#define reg_CDS_F2_D_MID_P1_LANE_7_0  CDS_READ_REG4_P1.BF.CDS_F2_D_MID_P1_LANE_7_0
#define reg_CDS_F2_D_TOP_P1_LANE_7_0  CDS_READ_REG4_P1.BF.CDS_F2_D_TOP_P1_LANE_7_0
#define reg_CDS_F2_S_BOT_P1_LANE_7_0  CDS_READ_REG4_P1.BF.CDS_F2_S_BOT_P1_LANE_7_0

// 0x0114	CDS_READ_REG5_P1		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path1
typedef union {
	struct {
		uint8_t CDS_F2_S_MID_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_S_TOP_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_D_BOT_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_D_MID_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG5_P1_t;
__xdata __at( 0x6114 ) volatile CDS_READ_REG5_P1_t CDS_READ_REG5_P1;
#define reg_CDS_F2_S_MID_P1_LANE_7_0  CDS_READ_REG5_P1.BF.CDS_F2_S_MID_P1_LANE_7_0
#define reg_CDS_F2_S_TOP_P1_LANE_7_0  CDS_READ_REG5_P1.BF.CDS_F2_S_TOP_P1_LANE_7_0
#define reg_CDS_F3_D_BOT_P1_LANE_7_0  CDS_READ_REG5_P1.BF.CDS_F3_D_BOT_P1_LANE_7_0
#define reg_CDS_F3_D_MID_P1_LANE_7_0  CDS_READ_REG5_P1.BF.CDS_F3_D_MID_P1_LANE_7_0

// 0x0118	CDS_READ_REG6_P1		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path1
typedef union {
	struct {
		uint8_t CDS_F3_D_TOP_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_S_BOT_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_S_MID_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_S_TOP_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG6_P1_t;
__xdata __at( 0x6118 ) volatile CDS_READ_REG6_P1_t CDS_READ_REG6_P1;
#define reg_CDS_F3_D_TOP_P1_LANE_7_0  CDS_READ_REG6_P1.BF.CDS_F3_D_TOP_P1_LANE_7_0
#define reg_CDS_F3_S_BOT_P1_LANE_7_0  CDS_READ_REG6_P1.BF.CDS_F3_S_BOT_P1_LANE_7_0
#define reg_CDS_F3_S_MID_P1_LANE_7_0  CDS_READ_REG6_P1.BF.CDS_F3_S_MID_P1_LANE_7_0
#define reg_CDS_F3_S_TOP_P1_LANE_7_0  CDS_READ_REG6_P1.BF.CDS_F3_S_TOP_P1_LANE_7_0

// 0x011c	CDS_READ_REG7_P1		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path1
typedef union {
	struct {
		uint8_t CDS_F4_D_BOT_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_D_MID_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F4_D_TOP_P1_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F4_S_BOT_P1_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG7_P1_t;
__xdata __at( 0x611c ) volatile CDS_READ_REG7_P1_t CDS_READ_REG7_P1;
#define reg_CDS_F4_D_BOT_P1_LANE_7_0  CDS_READ_REG7_P1.BF.CDS_F4_D_BOT_P1_LANE_7_0
#define reg_CDS_F4_D_MID_P1_LANE_7_0  CDS_READ_REG7_P1.BF.CDS_F4_D_MID_P1_LANE_7_0
#define reg_CDS_F4_D_TOP_P1_LANE_7_0  CDS_READ_REG7_P1.BF.CDS_F4_D_TOP_P1_LANE_7_0
#define reg_CDS_F4_S_BOT_P1_LANE_7_0  CDS_READ_REG7_P1.BF.CDS_F4_S_BOT_P1_LANE_7_0

// 0x0120	CDS_READ_REG8_P1		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path1
typedef union {
	struct {
		uint8_t CDS_F4_S_MID_P1_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_S_TOP_P1_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F5_BOT_P1_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F5_MID_P1_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG8_P1_t;
__xdata __at( 0x6120 ) volatile CDS_READ_REG8_P1_t CDS_READ_REG8_P1;
#define reg_CDS_F4_S_MID_P1_LANE_7_0  CDS_READ_REG8_P1.BF.CDS_F4_S_MID_P1_LANE_7_0
#define reg_CDS_F4_S_TOP_P1_LANE_7_0  CDS_READ_REG8_P1.BF.CDS_F4_S_TOP_P1_LANE_7_0
#define reg_CDS_F5_BOT_P1_LANE_7_0  CDS_READ_REG8_P1.BF.CDS_F5_BOT_P1_LANE_7_0
#define reg_CDS_F5_MID_P1_LANE_7_0  CDS_READ_REG8_P1.BF.CDS_F5_MID_P1_LANE_7_0

// 0x0124	CDS_READ_REG9_P1		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path1
typedef union {
	struct {
		uint8_t CDS_F5_TOP_P1_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F6_BOT_P1_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F6_MID_P1_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_TOP_P1_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG9_P1_t;
__xdata __at( 0x6124 ) volatile CDS_READ_REG9_P1_t CDS_READ_REG9_P1;
#define reg_CDS_F5_TOP_P1_LANE_7_0  CDS_READ_REG9_P1.BF.CDS_F5_TOP_P1_LANE_7_0
#define reg_CDS_F6_BOT_P1_LANE_7_0  CDS_READ_REG9_P1.BF.CDS_F6_BOT_P1_LANE_7_0
#define reg_CDS_F6_MID_P1_LANE_7_0  CDS_READ_REG9_P1.BF.CDS_F6_MID_P1_LANE_7_0
#define reg_CDS_F6_TOP_P1_LANE_7_0  CDS_READ_REG9_P1.BF.CDS_F6_TOP_P1_LANE_7_0

// 0x0128	CDS_READ_REG10_P1		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path1
typedef union {
	struct {
		uint8_t CDS_F7_BOT_P1_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F7_MID_P1_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F7_TOP_P1_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F8_BOT_P1_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG10_P1_t;
__xdata __at( 0x6128 ) volatile CDS_READ_REG10_P1_t CDS_READ_REG10_P1;
#define reg_CDS_F7_BOT_P1_LANE_7_0  CDS_READ_REG10_P1.BF.CDS_F7_BOT_P1_LANE_7_0
#define reg_CDS_F7_MID_P1_LANE_7_0  CDS_READ_REG10_P1.BF.CDS_F7_MID_P1_LANE_7_0
#define reg_CDS_F7_TOP_P1_LANE_7_0  CDS_READ_REG10_P1.BF.CDS_F7_TOP_P1_LANE_7_0
#define reg_CDS_F8_BOT_P1_LANE_7_0  CDS_READ_REG10_P1.BF.CDS_F8_BOT_P1_LANE_7_0

// 0x012c	CDS_READ_REG11_P1		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path1
typedef union {
	struct {
		uint8_t CDS_F8_MID_P1_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F8_TOP_P1_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F9_LSB_P1_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F9_MSB_P1_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG11_P1_t;
__xdata __at( 0x612c ) volatile CDS_READ_REG11_P1_t CDS_READ_REG11_P1;
#define reg_CDS_F8_MID_P1_LANE_7_0  CDS_READ_REG11_P1.BF.CDS_F8_MID_P1_LANE_7_0
#define reg_CDS_F8_TOP_P1_LANE_7_0  CDS_READ_REG11_P1.BF.CDS_F8_TOP_P1_LANE_7_0
#define reg_CDS_F9_LSB_P1_LANE_7_0  CDS_READ_REG11_P1.BF.CDS_F9_LSB_P1_LANE_7_0
#define reg_CDS_F9_MSB_P1_LANE_7_0  CDS_READ_REG11_P1.BF.CDS_F9_MSB_P1_LANE_7_0

// 0x0130	CDS_READ_REG12_P1		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path1
typedef union {
	struct {
		uint8_t CDS_F10_LSB_P1_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F10_MSB_P1_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F11_P1_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F12_LSB_P1_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG12_P1_t;
__xdata __at( 0x6130 ) volatile CDS_READ_REG12_P1_t CDS_READ_REG12_P1;
#define reg_CDS_F10_LSB_P1_LANE_7_0  CDS_READ_REG12_P1.BF.CDS_F10_LSB_P1_LANE_7_0
#define reg_CDS_F10_MSB_P1_LANE_7_0  CDS_READ_REG12_P1.BF.CDS_F10_MSB_P1_LANE_7_0
#define reg_CDS_F11_P1_LANE_7_0  CDS_READ_REG12_P1.BF.CDS_F11_P1_LANE_7_0
#define reg_CDS_F12_LSB_P1_LANE_7_0  CDS_READ_REG12_P1.BF.CDS_F12_LSB_P1_LANE_7_0

// 0x0134	CDS_READ_REG13_P1		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path1
typedef union {
	struct {
		uint8_t CDS_F12_MSB_P1_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F13_P1_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F14_LSB_P1_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F14_MSB_P1_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG13_P1_t;
__xdata __at( 0x6134 ) volatile CDS_READ_REG13_P1_t CDS_READ_REG13_P1;
#define reg_CDS_F12_MSB_P1_LANE_7_0  CDS_READ_REG13_P1.BF.CDS_F12_MSB_P1_LANE_7_0
#define reg_CDS_F13_P1_LANE_7_0  CDS_READ_REG13_P1.BF.CDS_F13_P1_LANE_7_0
#define reg_CDS_F14_LSB_P1_LANE_7_0  CDS_READ_REG13_P1.BF.CDS_F14_LSB_P1_LANE_7_0
#define reg_CDS_F14_MSB_P1_LANE_7_0  CDS_READ_REG13_P1.BF.CDS_F14_MSB_P1_LANE_7_0

// 0x0138	CDS_READ_REG14_P1		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path1
typedef union {
	struct {
		uint8_t CDS_F15_P1_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F16_LSB_P1_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F16_MSB_P1_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F17_P1_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG14_P1_t;
__xdata __at( 0x6138 ) volatile CDS_READ_REG14_P1_t CDS_READ_REG14_P1;
#define reg_CDS_F15_P1_LANE_7_0  CDS_READ_REG14_P1.BF.CDS_F15_P1_LANE_7_0
#define reg_CDS_F16_LSB_P1_LANE_7_0  CDS_READ_REG14_P1.BF.CDS_F16_LSB_P1_LANE_7_0
#define reg_CDS_F16_MSB_P1_LANE_7_0  CDS_READ_REG14_P1.BF.CDS_F16_MSB_P1_LANE_7_0
#define reg_CDS_F17_P1_LANE_7_0  CDS_READ_REG14_P1.BF.CDS_F17_P1_LANE_7_0

// 0x013c	CDS_READ_REG15_P1		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path1
typedef union {
	struct {
		uint8_t CDS_F18_LSB_P1_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F18_MSB_P1_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F19_P1_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F20_LSB_P1_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG15_P1_t;
__xdata __at( 0x613c ) volatile CDS_READ_REG15_P1_t CDS_READ_REG15_P1;
#define reg_CDS_F18_LSB_P1_LANE_7_0  CDS_READ_REG15_P1.BF.CDS_F18_LSB_P1_LANE_7_0
#define reg_CDS_F18_MSB_P1_LANE_7_0  CDS_READ_REG15_P1.BF.CDS_F18_MSB_P1_LANE_7_0
#define reg_CDS_F19_P1_LANE_7_0  CDS_READ_REG15_P1.BF.CDS_F19_P1_LANE_7_0
#define reg_CDS_F20_LSB_P1_LANE_7_0  CDS_READ_REG15_P1.BF.CDS_F20_LSB_P1_LANE_7_0

// 0x0140	CDS_READ_REG16_P1		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path1
typedef union {
	struct {
		uint8_t CDS_F20_MSB_P1_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F21_P1_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F22_P1_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F23_P1_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG16_P1_t;
__xdata __at( 0x6140 ) volatile CDS_READ_REG16_P1_t CDS_READ_REG16_P1;
#define reg_CDS_F20_MSB_P1_LANE_7_0  CDS_READ_REG16_P1.BF.CDS_F20_MSB_P1_LANE_7_0
#define reg_CDS_F21_P1_LANE_7_0  CDS_READ_REG16_P1.BF.CDS_F21_P1_LANE_7_0
#define reg_CDS_F22_P1_LANE_7_0  CDS_READ_REG16_P1.BF.CDS_F22_P1_LANE_7_0
#define reg_CDS_F23_P1_LANE_7_0  CDS_READ_REG16_P1.BF.CDS_F23_P1_LANE_7_0

// 0x0144	CDS_READ_REG17_P1		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path1
typedef union {
	struct {
		uint8_t CDS_F24_P1_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F25_P1_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F26_P1_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F27_P1_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG17_P1_t;
__xdata __at( 0x6144 ) volatile CDS_READ_REG17_P1_t CDS_READ_REG17_P1;
#define reg_CDS_F24_P1_LANE_7_0  CDS_READ_REG17_P1.BF.CDS_F24_P1_LANE_7_0
#define reg_CDS_F25_P1_LANE_7_0  CDS_READ_REG17_P1.BF.CDS_F25_P1_LANE_7_0
#define reg_CDS_F26_P1_LANE_7_0  CDS_READ_REG17_P1.BF.CDS_F26_P1_LANE_7_0
#define reg_CDS_F27_P1_LANE_7_0  CDS_READ_REG17_P1.BF.CDS_F27_P1_LANE_7_0

// 0x0148	CDS_READ_REG18_P1		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path1
typedef union {
	struct {
		uint8_t CDS_F28_P1_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F29_P1_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F30_P1_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG18_P1_t;
__xdata __at( 0x6148 ) volatile CDS_READ_REG18_P1_t CDS_READ_REG18_P1;
#define reg_CDS_F28_P1_LANE_7_0  CDS_READ_REG18_P1.BF.CDS_F28_P1_LANE_7_0
#define reg_CDS_F29_P1_LANE_7_0  CDS_READ_REG18_P1.BF.CDS_F29_P1_LANE_7_0
#define reg_CDS_F30_P1_LANE_7_0  CDS_READ_REG18_P1.BF.CDS_F30_P1_LANE_7_0

// 0x014c	CDS_READ_REG0_P2		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path2
typedef union {
	struct {
		uint8_t CDS_DC_D_BOT_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_MID_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_D_TOP_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_S_BOT_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG0_P2_t;
__xdata __at( 0x614c ) volatile CDS_READ_REG0_P2_t CDS_READ_REG0_P2;
#define reg_CDS_DC_D_BOT_P2_LANE_7_0  CDS_READ_REG0_P2.BF.CDS_DC_D_BOT_P2_LANE_7_0
#define reg_CDS_DC_D_MID_P2_LANE_7_0  CDS_READ_REG0_P2.BF.CDS_DC_D_MID_P2_LANE_7_0
#define reg_CDS_DC_D_TOP_P2_LANE_7_0  CDS_READ_REG0_P2.BF.CDS_DC_D_TOP_P2_LANE_7_0
#define reg_CDS_DC_S_BOT_P2_LANE_7_0  CDS_READ_REG0_P2.BF.CDS_DC_S_BOT_P2_LANE_7_0

// 0x0150	CDS_READ_REG1_P2		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path2
typedef union {
	struct {
		uint8_t CDS_DC_S_MID_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_S_TOP_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_E_P2_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_VREF_BOT_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG1_P2_t;
__xdata __at( 0x6150 ) volatile CDS_READ_REG1_P2_t CDS_READ_REG1_P2;
#define reg_CDS_DC_S_MID_P2_LANE_7_0  CDS_READ_REG1_P2.BF.CDS_DC_S_MID_P2_LANE_7_0
#define reg_CDS_DC_S_TOP_P2_LANE_7_0  CDS_READ_REG1_P2.BF.CDS_DC_S_TOP_P2_LANE_7_0
#define reg_CDS_DC_E_P2_LANE_7_0  CDS_READ_REG1_P2.BF.CDS_DC_E_P2_LANE_7_0
#define reg_CDS_VREF_BOT_P2_LANE_7_0  CDS_READ_REG1_P2.BF.CDS_VREF_BOT_P2_LANE_7_0

// 0x0154	CDS_READ_REG2_P2		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path2
typedef union {
	struct {
		uint8_t CDS_VREF_MID_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_VREF_TOP_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_D_BOT_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_D_MID_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG2_P2_t;
__xdata __at( 0x6154 ) volatile CDS_READ_REG2_P2_t CDS_READ_REG2_P2;
#define reg_CDS_VREF_MID_P2_LANE_7_0  CDS_READ_REG2_P2.BF.CDS_VREF_MID_P2_LANE_7_0
#define reg_CDS_VREF_TOP_P2_LANE_7_0  CDS_READ_REG2_P2.BF.CDS_VREF_TOP_P2_LANE_7_0
#define reg_CDS_F0_D_BOT_P2_LANE_7_0  CDS_READ_REG2_P2.BF.CDS_F0_D_BOT_P2_LANE_7_0
#define reg_CDS_F0_D_MID_P2_LANE_7_0  CDS_READ_REG2_P2.BF.CDS_F0_D_MID_P2_LANE_7_0

// 0x0158	CDS_READ_REG3_P2		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path2
typedef union {
	struct {
		uint8_t CDS_F0_D_TOP_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_S_BOT_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_MID_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_S_TOP_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG3_P2_t;
__xdata __at( 0x6158 ) volatile CDS_READ_REG3_P2_t CDS_READ_REG3_P2;
#define reg_CDS_F0_D_TOP_P2_LANE_7_0  CDS_READ_REG3_P2.BF.CDS_F0_D_TOP_P2_LANE_7_0
#define reg_CDS_F0_S_BOT_P2_LANE_7_0  CDS_READ_REG3_P2.BF.CDS_F0_S_BOT_P2_LANE_7_0
#define reg_CDS_F0_S_MID_P2_LANE_7_0  CDS_READ_REG3_P2.BF.CDS_F0_S_MID_P2_LANE_7_0
#define reg_CDS_F0_S_TOP_P2_LANE_7_0  CDS_READ_REG3_P2.BF.CDS_F0_S_TOP_P2_LANE_7_0

// 0x015c	CDS_READ_REG4_P2		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path2
typedef union {
	struct {
		uint8_t CDS_F2_D_BOT_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_MID_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_D_TOP_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_S_BOT_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG4_P2_t;
__xdata __at( 0x615c ) volatile CDS_READ_REG4_P2_t CDS_READ_REG4_P2;
#define reg_CDS_F2_D_BOT_P2_LANE_7_0  CDS_READ_REG4_P2.BF.CDS_F2_D_BOT_P2_LANE_7_0
#define reg_CDS_F2_D_MID_P2_LANE_7_0  CDS_READ_REG4_P2.BF.CDS_F2_D_MID_P2_LANE_7_0
#define reg_CDS_F2_D_TOP_P2_LANE_7_0  CDS_READ_REG4_P2.BF.CDS_F2_D_TOP_P2_LANE_7_0
#define reg_CDS_F2_S_BOT_P2_LANE_7_0  CDS_READ_REG4_P2.BF.CDS_F2_S_BOT_P2_LANE_7_0

// 0x0160	CDS_READ_REG5_P2		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path2
typedef union {
	struct {
		uint8_t CDS_F2_S_MID_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_S_TOP_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_D_BOT_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_D_MID_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG5_P2_t;
__xdata __at( 0x6160 ) volatile CDS_READ_REG5_P2_t CDS_READ_REG5_P2;
#define reg_CDS_F2_S_MID_P2_LANE_7_0  CDS_READ_REG5_P2.BF.CDS_F2_S_MID_P2_LANE_7_0
#define reg_CDS_F2_S_TOP_P2_LANE_7_0  CDS_READ_REG5_P2.BF.CDS_F2_S_TOP_P2_LANE_7_0
#define reg_CDS_F3_D_BOT_P2_LANE_7_0  CDS_READ_REG5_P2.BF.CDS_F3_D_BOT_P2_LANE_7_0
#define reg_CDS_F3_D_MID_P2_LANE_7_0  CDS_READ_REG5_P2.BF.CDS_F3_D_MID_P2_LANE_7_0

// 0x0164	CDS_READ_REG6_P2		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path2
typedef union {
	struct {
		uint8_t CDS_F3_D_TOP_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_S_BOT_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_S_MID_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_S_TOP_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG6_P2_t;
__xdata __at( 0x6164 ) volatile CDS_READ_REG6_P2_t CDS_READ_REG6_P2;
#define reg_CDS_F3_D_TOP_P2_LANE_7_0  CDS_READ_REG6_P2.BF.CDS_F3_D_TOP_P2_LANE_7_0
#define reg_CDS_F3_S_BOT_P2_LANE_7_0  CDS_READ_REG6_P2.BF.CDS_F3_S_BOT_P2_LANE_7_0
#define reg_CDS_F3_S_MID_P2_LANE_7_0  CDS_READ_REG6_P2.BF.CDS_F3_S_MID_P2_LANE_7_0
#define reg_CDS_F3_S_TOP_P2_LANE_7_0  CDS_READ_REG6_P2.BF.CDS_F3_S_TOP_P2_LANE_7_0

// 0x0168	CDS_READ_REG7_P2		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path2
typedef union {
	struct {
		uint8_t CDS_F4_D_BOT_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_D_MID_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F4_D_TOP_P2_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F4_S_BOT_P2_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG7_P2_t;
__xdata __at( 0x6168 ) volatile CDS_READ_REG7_P2_t CDS_READ_REG7_P2;
#define reg_CDS_F4_D_BOT_P2_LANE_7_0  CDS_READ_REG7_P2.BF.CDS_F4_D_BOT_P2_LANE_7_0
#define reg_CDS_F4_D_MID_P2_LANE_7_0  CDS_READ_REG7_P2.BF.CDS_F4_D_MID_P2_LANE_7_0
#define reg_CDS_F4_D_TOP_P2_LANE_7_0  CDS_READ_REG7_P2.BF.CDS_F4_D_TOP_P2_LANE_7_0
#define reg_CDS_F4_S_BOT_P2_LANE_7_0  CDS_READ_REG7_P2.BF.CDS_F4_S_BOT_P2_LANE_7_0

// 0x016c	CDS_READ_REG8_P2		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path2
typedef union {
	struct {
		uint8_t CDS_F4_S_MID_P2_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_S_TOP_P2_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F5_BOT_P2_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F5_MID_P2_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG8_P2_t;
__xdata __at( 0x616c ) volatile CDS_READ_REG8_P2_t CDS_READ_REG8_P2;
#define reg_CDS_F4_S_MID_P2_LANE_7_0  CDS_READ_REG8_P2.BF.CDS_F4_S_MID_P2_LANE_7_0
#define reg_CDS_F4_S_TOP_P2_LANE_7_0  CDS_READ_REG8_P2.BF.CDS_F4_S_TOP_P2_LANE_7_0
#define reg_CDS_F5_BOT_P2_LANE_7_0  CDS_READ_REG8_P2.BF.CDS_F5_BOT_P2_LANE_7_0
#define reg_CDS_F5_MID_P2_LANE_7_0  CDS_READ_REG8_P2.BF.CDS_F5_MID_P2_LANE_7_0

// 0x0170	CDS_READ_REG9_P2		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path2
typedef union {
	struct {
		uint8_t CDS_F5_TOP_P2_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F6_BOT_P2_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F6_MID_P2_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_TOP_P2_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG9_P2_t;
__xdata __at( 0x6170 ) volatile CDS_READ_REG9_P2_t CDS_READ_REG9_P2;
#define reg_CDS_F5_TOP_P2_LANE_7_0  CDS_READ_REG9_P2.BF.CDS_F5_TOP_P2_LANE_7_0
#define reg_CDS_F6_BOT_P2_LANE_7_0  CDS_READ_REG9_P2.BF.CDS_F6_BOT_P2_LANE_7_0
#define reg_CDS_F6_MID_P2_LANE_7_0  CDS_READ_REG9_P2.BF.CDS_F6_MID_P2_LANE_7_0
#define reg_CDS_F6_TOP_P2_LANE_7_0  CDS_READ_REG9_P2.BF.CDS_F6_TOP_P2_LANE_7_0

// 0x0174	CDS_READ_REG10_P2		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path2
typedef union {
	struct {
		uint8_t CDS_F7_BOT_P2_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F7_MID_P2_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F7_TOP_P2_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F8_BOT_P2_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG10_P2_t;
__xdata __at( 0x6174 ) volatile CDS_READ_REG10_P2_t CDS_READ_REG10_P2;
#define reg_CDS_F7_BOT_P2_LANE_7_0  CDS_READ_REG10_P2.BF.CDS_F7_BOT_P2_LANE_7_0
#define reg_CDS_F7_MID_P2_LANE_7_0  CDS_READ_REG10_P2.BF.CDS_F7_MID_P2_LANE_7_0
#define reg_CDS_F7_TOP_P2_LANE_7_0  CDS_READ_REG10_P2.BF.CDS_F7_TOP_P2_LANE_7_0
#define reg_CDS_F8_BOT_P2_LANE_7_0  CDS_READ_REG10_P2.BF.CDS_F8_BOT_P2_LANE_7_0

// 0x0178	CDS_READ_REG11_P2		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path2
typedef union {
	struct {
		uint8_t CDS_F8_MID_P2_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F8_TOP_P2_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F9_LSB_P2_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F9_MSB_P2_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG11_P2_t;
__xdata __at( 0x6178 ) volatile CDS_READ_REG11_P2_t CDS_READ_REG11_P2;
#define reg_CDS_F8_MID_P2_LANE_7_0  CDS_READ_REG11_P2.BF.CDS_F8_MID_P2_LANE_7_0
#define reg_CDS_F8_TOP_P2_LANE_7_0  CDS_READ_REG11_P2.BF.CDS_F8_TOP_P2_LANE_7_0
#define reg_CDS_F9_LSB_P2_LANE_7_0  CDS_READ_REG11_P2.BF.CDS_F9_LSB_P2_LANE_7_0
#define reg_CDS_F9_MSB_P2_LANE_7_0  CDS_READ_REG11_P2.BF.CDS_F9_MSB_P2_LANE_7_0

// 0x017c	CDS_READ_REG12_P2		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path2
typedef union {
	struct {
		uint8_t CDS_F10_LSB_P2_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F10_MSB_P2_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F11_P2_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F12_LSB_P2_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG12_P2_t;
__xdata __at( 0x617c ) volatile CDS_READ_REG12_P2_t CDS_READ_REG12_P2;
#define reg_CDS_F10_LSB_P2_LANE_7_0  CDS_READ_REG12_P2.BF.CDS_F10_LSB_P2_LANE_7_0
#define reg_CDS_F10_MSB_P2_LANE_7_0  CDS_READ_REG12_P2.BF.CDS_F10_MSB_P2_LANE_7_0
#define reg_CDS_F11_P2_LANE_7_0  CDS_READ_REG12_P2.BF.CDS_F11_P2_LANE_7_0
#define reg_CDS_F12_LSB_P2_LANE_7_0  CDS_READ_REG12_P2.BF.CDS_F12_LSB_P2_LANE_7_0

// 0x0180	CDS_READ_REG13_P2		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path2
typedef union {
	struct {
		uint8_t CDS_F12_MSB_P2_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F13_P2_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F14_LSB_P2_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F14_MSB_P2_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG13_P2_t;
__xdata __at( 0x6180 ) volatile CDS_READ_REG13_P2_t CDS_READ_REG13_P2;
#define reg_CDS_F12_MSB_P2_LANE_7_0  CDS_READ_REG13_P2.BF.CDS_F12_MSB_P2_LANE_7_0
#define reg_CDS_F13_P2_LANE_7_0  CDS_READ_REG13_P2.BF.CDS_F13_P2_LANE_7_0
#define reg_CDS_F14_LSB_P2_LANE_7_0  CDS_READ_REG13_P2.BF.CDS_F14_LSB_P2_LANE_7_0
#define reg_CDS_F14_MSB_P2_LANE_7_0  CDS_READ_REG13_P2.BF.CDS_F14_MSB_P2_LANE_7_0

// 0x0184	CDS_READ_REG14_P2		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path2
typedef union {
	struct {
		uint8_t CDS_F15_P2_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F16_LSB_P2_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F16_MSB_P2_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F17_P2_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG14_P2_t;
__xdata __at( 0x6184 ) volatile CDS_READ_REG14_P2_t CDS_READ_REG14_P2;
#define reg_CDS_F15_P2_LANE_7_0  CDS_READ_REG14_P2.BF.CDS_F15_P2_LANE_7_0
#define reg_CDS_F16_LSB_P2_LANE_7_0  CDS_READ_REG14_P2.BF.CDS_F16_LSB_P2_LANE_7_0
#define reg_CDS_F16_MSB_P2_LANE_7_0  CDS_READ_REG14_P2.BF.CDS_F16_MSB_P2_LANE_7_0
#define reg_CDS_F17_P2_LANE_7_0  CDS_READ_REG14_P2.BF.CDS_F17_P2_LANE_7_0

// 0x0188	CDS_READ_REG15_P2		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path2
typedef union {
	struct {
		uint8_t CDS_F18_LSB_P2_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F18_MSB_P2_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F19_P2_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F20_LSB_P2_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG15_P2_t;
__xdata __at( 0x6188 ) volatile CDS_READ_REG15_P2_t CDS_READ_REG15_P2;
#define reg_CDS_F18_LSB_P2_LANE_7_0  CDS_READ_REG15_P2.BF.CDS_F18_LSB_P2_LANE_7_0
#define reg_CDS_F18_MSB_P2_LANE_7_0  CDS_READ_REG15_P2.BF.CDS_F18_MSB_P2_LANE_7_0
#define reg_CDS_F19_P2_LANE_7_0  CDS_READ_REG15_P2.BF.CDS_F19_P2_LANE_7_0
#define reg_CDS_F20_LSB_P2_LANE_7_0  CDS_READ_REG15_P2.BF.CDS_F20_LSB_P2_LANE_7_0

// 0x018c	CDS_READ_REG16_P2		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path2
typedef union {
	struct {
		uint8_t CDS_F20_MSB_P2_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F21_P2_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F22_P2_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F23_P2_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG16_P2_t;
__xdata __at( 0x618c ) volatile CDS_READ_REG16_P2_t CDS_READ_REG16_P2;
#define reg_CDS_F20_MSB_P2_LANE_7_0  CDS_READ_REG16_P2.BF.CDS_F20_MSB_P2_LANE_7_0
#define reg_CDS_F21_P2_LANE_7_0  CDS_READ_REG16_P2.BF.CDS_F21_P2_LANE_7_0
#define reg_CDS_F22_P2_LANE_7_0  CDS_READ_REG16_P2.BF.CDS_F22_P2_LANE_7_0
#define reg_CDS_F23_P2_LANE_7_0  CDS_READ_REG16_P2.BF.CDS_F23_P2_LANE_7_0

// 0x0190	CDS_READ_REG17_P2		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path2
typedef union {
	struct {
		uint8_t CDS_F24_P2_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F25_P2_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F26_P2_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F27_P2_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG17_P2_t;
__xdata __at( 0x6190 ) volatile CDS_READ_REG17_P2_t CDS_READ_REG17_P2;
#define reg_CDS_F24_P2_LANE_7_0  CDS_READ_REG17_P2.BF.CDS_F24_P2_LANE_7_0
#define reg_CDS_F25_P2_LANE_7_0  CDS_READ_REG17_P2.BF.CDS_F25_P2_LANE_7_0
#define reg_CDS_F26_P2_LANE_7_0  CDS_READ_REG17_P2.BF.CDS_F26_P2_LANE_7_0
#define reg_CDS_F27_P2_LANE_7_0  CDS_READ_REG17_P2.BF.CDS_F27_P2_LANE_7_0

// 0x0194	CDS_READ_REG18_P2		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path2
typedef union {
	struct {
		uint8_t CDS_F28_P2_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F29_P2_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F30_P2_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG18_P2_t;
__xdata __at( 0x6194 ) volatile CDS_READ_REG18_P2_t CDS_READ_REG18_P2;
#define reg_CDS_F28_P2_LANE_7_0  CDS_READ_REG18_P2.BF.CDS_F28_P2_LANE_7_0
#define reg_CDS_F29_P2_LANE_7_0  CDS_READ_REG18_P2.BF.CDS_F29_P2_LANE_7_0
#define reg_CDS_F30_P2_LANE_7_0  CDS_READ_REG18_P2.BF.CDS_F30_P2_LANE_7_0

// 0x0198	CDS_READ_REG0_P3		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path3
typedef union {
	struct {
		uint8_t CDS_DC_D_BOT_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_MID_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_D_TOP_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_S_BOT_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG0_P3_t;
__xdata __at( 0x6198 ) volatile CDS_READ_REG0_P3_t CDS_READ_REG0_P3;
#define reg_CDS_DC_D_BOT_P3_LANE_7_0  CDS_READ_REG0_P3.BF.CDS_DC_D_BOT_P3_LANE_7_0
#define reg_CDS_DC_D_MID_P3_LANE_7_0  CDS_READ_REG0_P3.BF.CDS_DC_D_MID_P3_LANE_7_0
#define reg_CDS_DC_D_TOP_P3_LANE_7_0  CDS_READ_REG0_P3.BF.CDS_DC_D_TOP_P3_LANE_7_0
#define reg_CDS_DC_S_BOT_P3_LANE_7_0  CDS_READ_REG0_P3.BF.CDS_DC_S_BOT_P3_LANE_7_0

// 0x019c	CDS_READ_REG1_P3		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path3
typedef union {
	struct {
		uint8_t CDS_DC_S_MID_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_S_TOP_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_E_P3_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_VREF_BOT_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG1_P3_t;
__xdata __at( 0x619c ) volatile CDS_READ_REG1_P3_t CDS_READ_REG1_P3;
#define reg_CDS_DC_S_MID_P3_LANE_7_0  CDS_READ_REG1_P3.BF.CDS_DC_S_MID_P3_LANE_7_0
#define reg_CDS_DC_S_TOP_P3_LANE_7_0  CDS_READ_REG1_P3.BF.CDS_DC_S_TOP_P3_LANE_7_0
#define reg_CDS_DC_E_P3_LANE_7_0  CDS_READ_REG1_P3.BF.CDS_DC_E_P3_LANE_7_0
#define reg_CDS_VREF_BOT_P3_LANE_7_0  CDS_READ_REG1_P3.BF.CDS_VREF_BOT_P3_LANE_7_0

// 0x01a0	CDS_READ_REG2_P3		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path3
typedef union {
	struct {
		uint8_t CDS_VREF_MID_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_VREF_TOP_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_D_BOT_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_D_MID_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG2_P3_t;
__xdata __at( 0x61a0 ) volatile CDS_READ_REG2_P3_t CDS_READ_REG2_P3;
#define reg_CDS_VREF_MID_P3_LANE_7_0  CDS_READ_REG2_P3.BF.CDS_VREF_MID_P3_LANE_7_0
#define reg_CDS_VREF_TOP_P3_LANE_7_0  CDS_READ_REG2_P3.BF.CDS_VREF_TOP_P3_LANE_7_0
#define reg_CDS_F0_D_BOT_P3_LANE_7_0  CDS_READ_REG2_P3.BF.CDS_F0_D_BOT_P3_LANE_7_0
#define reg_CDS_F0_D_MID_P3_LANE_7_0  CDS_READ_REG2_P3.BF.CDS_F0_D_MID_P3_LANE_7_0

// 0x01a4	CDS_READ_REG3_P3		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path3
typedef union {
	struct {
		uint8_t CDS_F0_D_TOP_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_S_BOT_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_MID_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_S_TOP_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG3_P3_t;
__xdata __at( 0x61a4 ) volatile CDS_READ_REG3_P3_t CDS_READ_REG3_P3;
#define reg_CDS_F0_D_TOP_P3_LANE_7_0  CDS_READ_REG3_P3.BF.CDS_F0_D_TOP_P3_LANE_7_0
#define reg_CDS_F0_S_BOT_P3_LANE_7_0  CDS_READ_REG3_P3.BF.CDS_F0_S_BOT_P3_LANE_7_0
#define reg_CDS_F0_S_MID_P3_LANE_7_0  CDS_READ_REG3_P3.BF.CDS_F0_S_MID_P3_LANE_7_0
#define reg_CDS_F0_S_TOP_P3_LANE_7_0  CDS_READ_REG3_P3.BF.CDS_F0_S_TOP_P3_LANE_7_0

// 0x01a8	CDS_READ_REG4_P3		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path3
typedef union {
	struct {
		uint8_t CDS_F2_D_BOT_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_MID_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_D_TOP_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_S_BOT_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG4_P3_t;
__xdata __at( 0x61a8 ) volatile CDS_READ_REG4_P3_t CDS_READ_REG4_P3;
#define reg_CDS_F2_D_BOT_P3_LANE_7_0  CDS_READ_REG4_P3.BF.CDS_F2_D_BOT_P3_LANE_7_0
#define reg_CDS_F2_D_MID_P3_LANE_7_0  CDS_READ_REG4_P3.BF.CDS_F2_D_MID_P3_LANE_7_0
#define reg_CDS_F2_D_TOP_P3_LANE_7_0  CDS_READ_REG4_P3.BF.CDS_F2_D_TOP_P3_LANE_7_0
#define reg_CDS_F2_S_BOT_P3_LANE_7_0  CDS_READ_REG4_P3.BF.CDS_F2_S_BOT_P3_LANE_7_0

// 0x01ac	CDS_READ_REG5_P3		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path3
typedef union {
	struct {
		uint8_t CDS_F2_S_MID_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_S_TOP_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_D_BOT_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_D_MID_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG5_P3_t;
__xdata __at( 0x61ac ) volatile CDS_READ_REG5_P3_t CDS_READ_REG5_P3;
#define reg_CDS_F2_S_MID_P3_LANE_7_0  CDS_READ_REG5_P3.BF.CDS_F2_S_MID_P3_LANE_7_0
#define reg_CDS_F2_S_TOP_P3_LANE_7_0  CDS_READ_REG5_P3.BF.CDS_F2_S_TOP_P3_LANE_7_0
#define reg_CDS_F3_D_BOT_P3_LANE_7_0  CDS_READ_REG5_P3.BF.CDS_F3_D_BOT_P3_LANE_7_0
#define reg_CDS_F3_D_MID_P3_LANE_7_0  CDS_READ_REG5_P3.BF.CDS_F3_D_MID_P3_LANE_7_0

// 0x01b0	CDS_READ_REG6_P3		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path3
typedef union {
	struct {
		uint8_t CDS_F3_D_TOP_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_S_BOT_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_S_MID_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_S_TOP_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG6_P3_t;
__xdata __at( 0x61b0 ) volatile CDS_READ_REG6_P3_t CDS_READ_REG6_P3;
#define reg_CDS_F3_D_TOP_P3_LANE_7_0  CDS_READ_REG6_P3.BF.CDS_F3_D_TOP_P3_LANE_7_0
#define reg_CDS_F3_S_BOT_P3_LANE_7_0  CDS_READ_REG6_P3.BF.CDS_F3_S_BOT_P3_LANE_7_0
#define reg_CDS_F3_S_MID_P3_LANE_7_0  CDS_READ_REG6_P3.BF.CDS_F3_S_MID_P3_LANE_7_0
#define reg_CDS_F3_S_TOP_P3_LANE_7_0  CDS_READ_REG6_P3.BF.CDS_F3_S_TOP_P3_LANE_7_0

// 0x01b4	CDS_READ_REG7_P3		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path3
typedef union {
	struct {
		uint8_t CDS_F4_D_BOT_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_D_MID_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F4_D_TOP_P3_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F4_S_BOT_P3_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG7_P3_t;
__xdata __at( 0x61b4 ) volatile CDS_READ_REG7_P3_t CDS_READ_REG7_P3;
#define reg_CDS_F4_D_BOT_P3_LANE_7_0  CDS_READ_REG7_P3.BF.CDS_F4_D_BOT_P3_LANE_7_0
#define reg_CDS_F4_D_MID_P3_LANE_7_0  CDS_READ_REG7_P3.BF.CDS_F4_D_MID_P3_LANE_7_0
#define reg_CDS_F4_D_TOP_P3_LANE_7_0  CDS_READ_REG7_P3.BF.CDS_F4_D_TOP_P3_LANE_7_0
#define reg_CDS_F4_S_BOT_P3_LANE_7_0  CDS_READ_REG7_P3.BF.CDS_F4_S_BOT_P3_LANE_7_0

// 0x01b8	CDS_READ_REG8_P3		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path3
typedef union {
	struct {
		uint8_t CDS_F4_S_MID_P3_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_S_TOP_P3_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F5_BOT_P3_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F5_MID_P3_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG8_P3_t;
__xdata __at( 0x61b8 ) volatile CDS_READ_REG8_P3_t CDS_READ_REG8_P3;
#define reg_CDS_F4_S_MID_P3_LANE_7_0  CDS_READ_REG8_P3.BF.CDS_F4_S_MID_P3_LANE_7_0
#define reg_CDS_F4_S_TOP_P3_LANE_7_0  CDS_READ_REG8_P3.BF.CDS_F4_S_TOP_P3_LANE_7_0
#define reg_CDS_F5_BOT_P3_LANE_7_0  CDS_READ_REG8_P3.BF.CDS_F5_BOT_P3_LANE_7_0
#define reg_CDS_F5_MID_P3_LANE_7_0  CDS_READ_REG8_P3.BF.CDS_F5_MID_P3_LANE_7_0

// 0x01bc	CDS_READ_REG9_P3		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path3
typedef union {
	struct {
		uint8_t CDS_F5_TOP_P3_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F6_BOT_P3_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F6_MID_P3_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_TOP_P3_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG9_P3_t;
__xdata __at( 0x61bc ) volatile CDS_READ_REG9_P3_t CDS_READ_REG9_P3;
#define reg_CDS_F5_TOP_P3_LANE_7_0  CDS_READ_REG9_P3.BF.CDS_F5_TOP_P3_LANE_7_0
#define reg_CDS_F6_BOT_P3_LANE_7_0  CDS_READ_REG9_P3.BF.CDS_F6_BOT_P3_LANE_7_0
#define reg_CDS_F6_MID_P3_LANE_7_0  CDS_READ_REG9_P3.BF.CDS_F6_MID_P3_LANE_7_0
#define reg_CDS_F6_TOP_P3_LANE_7_0  CDS_READ_REG9_P3.BF.CDS_F6_TOP_P3_LANE_7_0

// 0x01c0	CDS_READ_REG10_P3		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path3
typedef union {
	struct {
		uint8_t CDS_F7_BOT_P3_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F7_MID_P3_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F7_TOP_P3_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F8_BOT_P3_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG10_P3_t;
__xdata __at( 0x61c0 ) volatile CDS_READ_REG10_P3_t CDS_READ_REG10_P3;
#define reg_CDS_F7_BOT_P3_LANE_7_0  CDS_READ_REG10_P3.BF.CDS_F7_BOT_P3_LANE_7_0
#define reg_CDS_F7_MID_P3_LANE_7_0  CDS_READ_REG10_P3.BF.CDS_F7_MID_P3_LANE_7_0
#define reg_CDS_F7_TOP_P3_LANE_7_0  CDS_READ_REG10_P3.BF.CDS_F7_TOP_P3_LANE_7_0
#define reg_CDS_F8_BOT_P3_LANE_7_0  CDS_READ_REG10_P3.BF.CDS_F8_BOT_P3_LANE_7_0

// 0x01c4	CDS_READ_REG11_P3		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path3
typedef union {
	struct {
		uint8_t CDS_F8_MID_P3_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F8_TOP_P3_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F9_LSB_P3_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F9_MSB_P3_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG11_P3_t;
__xdata __at( 0x61c4 ) volatile CDS_READ_REG11_P3_t CDS_READ_REG11_P3;
#define reg_CDS_F8_MID_P3_LANE_7_0  CDS_READ_REG11_P3.BF.CDS_F8_MID_P3_LANE_7_0
#define reg_CDS_F8_TOP_P3_LANE_7_0  CDS_READ_REG11_P3.BF.CDS_F8_TOP_P3_LANE_7_0
#define reg_CDS_F9_LSB_P3_LANE_7_0  CDS_READ_REG11_P3.BF.CDS_F9_LSB_P3_LANE_7_0
#define reg_CDS_F9_MSB_P3_LANE_7_0  CDS_READ_REG11_P3.BF.CDS_F9_MSB_P3_LANE_7_0

// 0x01c8	CDS_READ_REG12_P3		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path3
typedef union {
	struct {
		uint8_t CDS_F10_LSB_P3_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F10_MSB_P3_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F11_P3_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F12_LSB_P3_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG12_P3_t;
__xdata __at( 0x61c8 ) volatile CDS_READ_REG12_P3_t CDS_READ_REG12_P3;
#define reg_CDS_F10_LSB_P3_LANE_7_0  CDS_READ_REG12_P3.BF.CDS_F10_LSB_P3_LANE_7_0
#define reg_CDS_F10_MSB_P3_LANE_7_0  CDS_READ_REG12_P3.BF.CDS_F10_MSB_P3_LANE_7_0
#define reg_CDS_F11_P3_LANE_7_0  CDS_READ_REG12_P3.BF.CDS_F11_P3_LANE_7_0
#define reg_CDS_F12_LSB_P3_LANE_7_0  CDS_READ_REG12_P3.BF.CDS_F12_LSB_P3_LANE_7_0

// 0x01cc	CDS_READ_REG13_P3		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path3
typedef union {
	struct {
		uint8_t CDS_F12_MSB_P3_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F13_P3_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F14_LSB_P3_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F14_MSB_P3_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG13_P3_t;
__xdata __at( 0x61cc ) volatile CDS_READ_REG13_P3_t CDS_READ_REG13_P3;
#define reg_CDS_F12_MSB_P3_LANE_7_0  CDS_READ_REG13_P3.BF.CDS_F12_MSB_P3_LANE_7_0
#define reg_CDS_F13_P3_LANE_7_0  CDS_READ_REG13_P3.BF.CDS_F13_P3_LANE_7_0
#define reg_CDS_F14_LSB_P3_LANE_7_0  CDS_READ_REG13_P3.BF.CDS_F14_LSB_P3_LANE_7_0
#define reg_CDS_F14_MSB_P3_LANE_7_0  CDS_READ_REG13_P3.BF.CDS_F14_MSB_P3_LANE_7_0

// 0x01d0	CDS_READ_REG14_P3		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path3
typedef union {
	struct {
		uint8_t CDS_F15_P3_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F16_LSB_P3_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F16_MSB_P3_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F17_P3_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG14_P3_t;
__xdata __at( 0x61d0 ) volatile CDS_READ_REG14_P3_t CDS_READ_REG14_P3;
#define reg_CDS_F15_P3_LANE_7_0  CDS_READ_REG14_P3.BF.CDS_F15_P3_LANE_7_0
#define reg_CDS_F16_LSB_P3_LANE_7_0  CDS_READ_REG14_P3.BF.CDS_F16_LSB_P3_LANE_7_0
#define reg_CDS_F16_MSB_P3_LANE_7_0  CDS_READ_REG14_P3.BF.CDS_F16_MSB_P3_LANE_7_0
#define reg_CDS_F17_P3_LANE_7_0  CDS_READ_REG14_P3.BF.CDS_F17_P3_LANE_7_0

// 0x01d4	CDS_READ_REG15_P3		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path3
typedef union {
	struct {
		uint8_t CDS_F18_LSB_P3_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F18_MSB_P3_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F19_P3_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F20_LSB_P3_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG15_P3_t;
__xdata __at( 0x61d4 ) volatile CDS_READ_REG15_P3_t CDS_READ_REG15_P3;
#define reg_CDS_F18_LSB_P3_LANE_7_0  CDS_READ_REG15_P3.BF.CDS_F18_LSB_P3_LANE_7_0
#define reg_CDS_F18_MSB_P3_LANE_7_0  CDS_READ_REG15_P3.BF.CDS_F18_MSB_P3_LANE_7_0
#define reg_CDS_F19_P3_LANE_7_0  CDS_READ_REG15_P3.BF.CDS_F19_P3_LANE_7_0
#define reg_CDS_F20_LSB_P3_LANE_7_0  CDS_READ_REG15_P3.BF.CDS_F20_LSB_P3_LANE_7_0

// 0x01d8	CDS_READ_REG16_P3		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path3
typedef union {
	struct {
		uint8_t CDS_F20_MSB_P3_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F21_P3_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F22_P3_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F23_P3_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG16_P3_t;
__xdata __at( 0x61d8 ) volatile CDS_READ_REG16_P3_t CDS_READ_REG16_P3;
#define reg_CDS_F20_MSB_P3_LANE_7_0  CDS_READ_REG16_P3.BF.CDS_F20_MSB_P3_LANE_7_0
#define reg_CDS_F21_P3_LANE_7_0  CDS_READ_REG16_P3.BF.CDS_F21_P3_LANE_7_0
#define reg_CDS_F22_P3_LANE_7_0  CDS_READ_REG16_P3.BF.CDS_F22_P3_LANE_7_0
#define reg_CDS_F23_P3_LANE_7_0  CDS_READ_REG16_P3.BF.CDS_F23_P3_LANE_7_0

// 0x01dc	CDS_READ_REG17_P3		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path3
typedef union {
	struct {
		uint8_t CDS_F24_P3_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F25_P3_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F26_P3_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F27_P3_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG17_P3_t;
__xdata __at( 0x61dc ) volatile CDS_READ_REG17_P3_t CDS_READ_REG17_P3;
#define reg_CDS_F24_P3_LANE_7_0  CDS_READ_REG17_P3.BF.CDS_F24_P3_LANE_7_0
#define reg_CDS_F25_P3_LANE_7_0  CDS_READ_REG17_P3.BF.CDS_F25_P3_LANE_7_0
#define reg_CDS_F26_P3_LANE_7_0  CDS_READ_REG17_P3.BF.CDS_F26_P3_LANE_7_0
#define reg_CDS_F27_P3_LANE_7_0  CDS_READ_REG17_P3.BF.CDS_F27_P3_LANE_7_0

// 0x01e0	CDS_READ_REG18_P3		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path3
typedef union {
	struct {
		uint8_t CDS_F28_P3_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F29_P3_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F30_P3_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG18_P3_t;
__xdata __at( 0x61e0 ) volatile CDS_READ_REG18_P3_t CDS_READ_REG18_P3;
#define reg_CDS_F28_P3_LANE_7_0  CDS_READ_REG18_P3.BF.CDS_F28_P3_LANE_7_0
#define reg_CDS_F29_P3_LANE_7_0  CDS_READ_REG18_P3.BF.CDS_F29_P3_LANE_7_0
#define reg_CDS_F30_P3_LANE_7_0  CDS_READ_REG18_P3.BF.CDS_F30_P3_LANE_7_0

// 0x01e4	CDS_READ_REG0_P4		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path4
typedef union {
	struct {
		uint8_t CDS_DC_D_BOT_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_MID_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_D_TOP_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_S_BOT_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG0_P4_t;
__xdata __at( 0x61e4 ) volatile CDS_READ_REG0_P4_t CDS_READ_REG0_P4;
#define reg_CDS_DC_D_BOT_P4_LANE_7_0  CDS_READ_REG0_P4.BF.CDS_DC_D_BOT_P4_LANE_7_0
#define reg_CDS_DC_D_MID_P4_LANE_7_0  CDS_READ_REG0_P4.BF.CDS_DC_D_MID_P4_LANE_7_0
#define reg_CDS_DC_D_TOP_P4_LANE_7_0  CDS_READ_REG0_P4.BF.CDS_DC_D_TOP_P4_LANE_7_0
#define reg_CDS_DC_S_BOT_P4_LANE_7_0  CDS_READ_REG0_P4.BF.CDS_DC_S_BOT_P4_LANE_7_0

// 0x01e8	CDS_READ_REG1_P4		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path4
typedef union {
	struct {
		uint8_t CDS_DC_S_MID_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_S_TOP_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_E_P4_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_VREF_BOT_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG1_P4_t;
__xdata __at( 0x61e8 ) volatile CDS_READ_REG1_P4_t CDS_READ_REG1_P4;
#define reg_CDS_DC_S_MID_P4_LANE_7_0  CDS_READ_REG1_P4.BF.CDS_DC_S_MID_P4_LANE_7_0
#define reg_CDS_DC_S_TOP_P4_LANE_7_0  CDS_READ_REG1_P4.BF.CDS_DC_S_TOP_P4_LANE_7_0
#define reg_CDS_DC_E_P4_LANE_7_0  CDS_READ_REG1_P4.BF.CDS_DC_E_P4_LANE_7_0
#define reg_CDS_VREF_BOT_P4_LANE_7_0  CDS_READ_REG1_P4.BF.CDS_VREF_BOT_P4_LANE_7_0

// 0x01ec	CDS_READ_REG2_P4		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path4
typedef union {
	struct {
		uint8_t CDS_VREF_MID_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_VREF_TOP_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_D_BOT_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_D_MID_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG2_P4_t;
__xdata __at( 0x61ec ) volatile CDS_READ_REG2_P4_t CDS_READ_REG2_P4;
#define reg_CDS_VREF_MID_P4_LANE_7_0  CDS_READ_REG2_P4.BF.CDS_VREF_MID_P4_LANE_7_0
#define reg_CDS_VREF_TOP_P4_LANE_7_0  CDS_READ_REG2_P4.BF.CDS_VREF_TOP_P4_LANE_7_0
#define reg_CDS_F0_D_BOT_P4_LANE_7_0  CDS_READ_REG2_P4.BF.CDS_F0_D_BOT_P4_LANE_7_0
#define reg_CDS_F0_D_MID_P4_LANE_7_0  CDS_READ_REG2_P4.BF.CDS_F0_D_MID_P4_LANE_7_0

// 0x01f0	CDS_READ_REG3_P4		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path4
typedef union {
	struct {
		uint8_t CDS_F0_D_TOP_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_S_BOT_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_MID_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_S_TOP_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG3_P4_t;
__xdata __at( 0x61f0 ) volatile CDS_READ_REG3_P4_t CDS_READ_REG3_P4;
#define reg_CDS_F0_D_TOP_P4_LANE_7_0  CDS_READ_REG3_P4.BF.CDS_F0_D_TOP_P4_LANE_7_0
#define reg_CDS_F0_S_BOT_P4_LANE_7_0  CDS_READ_REG3_P4.BF.CDS_F0_S_BOT_P4_LANE_7_0
#define reg_CDS_F0_S_MID_P4_LANE_7_0  CDS_READ_REG3_P4.BF.CDS_F0_S_MID_P4_LANE_7_0
#define reg_CDS_F0_S_TOP_P4_LANE_7_0  CDS_READ_REG3_P4.BF.CDS_F0_S_TOP_P4_LANE_7_0

// 0x01f4	CDS_READ_REG4_P4		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path4
typedef union {
	struct {
		uint8_t CDS_F2_D_BOT_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_MID_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_D_TOP_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_S_BOT_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG4_P4_t;
__xdata __at( 0x61f4 ) volatile CDS_READ_REG4_P4_t CDS_READ_REG4_P4;
#define reg_CDS_F2_D_BOT_P4_LANE_7_0  CDS_READ_REG4_P4.BF.CDS_F2_D_BOT_P4_LANE_7_0
#define reg_CDS_F2_D_MID_P4_LANE_7_0  CDS_READ_REG4_P4.BF.CDS_F2_D_MID_P4_LANE_7_0
#define reg_CDS_F2_D_TOP_P4_LANE_7_0  CDS_READ_REG4_P4.BF.CDS_F2_D_TOP_P4_LANE_7_0
#define reg_CDS_F2_S_BOT_P4_LANE_7_0  CDS_READ_REG4_P4.BF.CDS_F2_S_BOT_P4_LANE_7_0

// 0x01f8	CDS_READ_REG5_P4		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path4
typedef union {
	struct {
		uint8_t CDS_F2_S_MID_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_S_TOP_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_D_BOT_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_D_MID_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG5_P4_t;
__xdata __at( 0x61f8 ) volatile CDS_READ_REG5_P4_t CDS_READ_REG5_P4;
#define reg_CDS_F2_S_MID_P4_LANE_7_0  CDS_READ_REG5_P4.BF.CDS_F2_S_MID_P4_LANE_7_0
#define reg_CDS_F2_S_TOP_P4_LANE_7_0  CDS_READ_REG5_P4.BF.CDS_F2_S_TOP_P4_LANE_7_0
#define reg_CDS_F3_D_BOT_P4_LANE_7_0  CDS_READ_REG5_P4.BF.CDS_F3_D_BOT_P4_LANE_7_0
#define reg_CDS_F3_D_MID_P4_LANE_7_0  CDS_READ_REG5_P4.BF.CDS_F3_D_MID_P4_LANE_7_0

// 0x01fc	CDS_READ_REG6_P4		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path4
typedef union {
	struct {
		uint8_t CDS_F3_D_TOP_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_S_BOT_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_S_MID_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_S_TOP_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG6_P4_t;
__xdata __at( 0x61fc ) volatile CDS_READ_REG6_P4_t CDS_READ_REG6_P4;
#define reg_CDS_F3_D_TOP_P4_LANE_7_0  CDS_READ_REG6_P4.BF.CDS_F3_D_TOP_P4_LANE_7_0
#define reg_CDS_F3_S_BOT_P4_LANE_7_0  CDS_READ_REG6_P4.BF.CDS_F3_S_BOT_P4_LANE_7_0
#define reg_CDS_F3_S_MID_P4_LANE_7_0  CDS_READ_REG6_P4.BF.CDS_F3_S_MID_P4_LANE_7_0
#define reg_CDS_F3_S_TOP_P4_LANE_7_0  CDS_READ_REG6_P4.BF.CDS_F3_S_TOP_P4_LANE_7_0

// 0x0200	CDS_READ_REG7_P4		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path4
typedef union {
	struct {
		uint8_t CDS_F4_D_BOT_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_D_MID_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F4_D_TOP_P4_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F4_S_BOT_P4_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG7_P4_t;
__xdata __at( 0x6200 ) volatile CDS_READ_REG7_P4_t CDS_READ_REG7_P4;
#define reg_CDS_F4_D_BOT_P4_LANE_7_0  CDS_READ_REG7_P4.BF.CDS_F4_D_BOT_P4_LANE_7_0
#define reg_CDS_F4_D_MID_P4_LANE_7_0  CDS_READ_REG7_P4.BF.CDS_F4_D_MID_P4_LANE_7_0
#define reg_CDS_F4_D_TOP_P4_LANE_7_0  CDS_READ_REG7_P4.BF.CDS_F4_D_TOP_P4_LANE_7_0
#define reg_CDS_F4_S_BOT_P4_LANE_7_0  CDS_READ_REG7_P4.BF.CDS_F4_S_BOT_P4_LANE_7_0

// 0x0204	CDS_READ_REG8_P4		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path4
typedef union {
	struct {
		uint8_t CDS_F4_S_MID_P4_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_S_TOP_P4_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F5_BOT_P4_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F5_MID_P4_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG8_P4_t;
__xdata __at( 0x6204 ) volatile CDS_READ_REG8_P4_t CDS_READ_REG8_P4;
#define reg_CDS_F4_S_MID_P4_LANE_7_0  CDS_READ_REG8_P4.BF.CDS_F4_S_MID_P4_LANE_7_0
#define reg_CDS_F4_S_TOP_P4_LANE_7_0  CDS_READ_REG8_P4.BF.CDS_F4_S_TOP_P4_LANE_7_0
#define reg_CDS_F5_BOT_P4_LANE_7_0  CDS_READ_REG8_P4.BF.CDS_F5_BOT_P4_LANE_7_0
#define reg_CDS_F5_MID_P4_LANE_7_0  CDS_READ_REG8_P4.BF.CDS_F5_MID_P4_LANE_7_0

// 0x0208	CDS_READ_REG9_P4		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path4
typedef union {
	struct {
		uint8_t CDS_F5_TOP_P4_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F6_BOT_P4_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F6_MID_P4_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_TOP_P4_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG9_P4_t;
__xdata __at( 0x6208 ) volatile CDS_READ_REG9_P4_t CDS_READ_REG9_P4;
#define reg_CDS_F5_TOP_P4_LANE_7_0  CDS_READ_REG9_P4.BF.CDS_F5_TOP_P4_LANE_7_0
#define reg_CDS_F6_BOT_P4_LANE_7_0  CDS_READ_REG9_P4.BF.CDS_F6_BOT_P4_LANE_7_0
#define reg_CDS_F6_MID_P4_LANE_7_0  CDS_READ_REG9_P4.BF.CDS_F6_MID_P4_LANE_7_0
#define reg_CDS_F6_TOP_P4_LANE_7_0  CDS_READ_REG9_P4.BF.CDS_F6_TOP_P4_LANE_7_0

// 0x020c	CDS_READ_REG10_P4		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path4
typedef union {
	struct {
		uint8_t CDS_F7_BOT_P4_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F7_MID_P4_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F7_TOP_P4_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F8_BOT_P4_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG10_P4_t;
__xdata __at( 0x620c ) volatile CDS_READ_REG10_P4_t CDS_READ_REG10_P4;
#define reg_CDS_F7_BOT_P4_LANE_7_0  CDS_READ_REG10_P4.BF.CDS_F7_BOT_P4_LANE_7_0
#define reg_CDS_F7_MID_P4_LANE_7_0  CDS_READ_REG10_P4.BF.CDS_F7_MID_P4_LANE_7_0
#define reg_CDS_F7_TOP_P4_LANE_7_0  CDS_READ_REG10_P4.BF.CDS_F7_TOP_P4_LANE_7_0
#define reg_CDS_F8_BOT_P4_LANE_7_0  CDS_READ_REG10_P4.BF.CDS_F8_BOT_P4_LANE_7_0

// 0x0210	CDS_READ_REG11_P4		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path4
typedef union {
	struct {
		uint8_t CDS_F8_MID_P4_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F8_TOP_P4_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F9_LSB_P4_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F9_MSB_P4_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG11_P4_t;
__xdata __at( 0x6210 ) volatile CDS_READ_REG11_P4_t CDS_READ_REG11_P4;
#define reg_CDS_F8_MID_P4_LANE_7_0  CDS_READ_REG11_P4.BF.CDS_F8_MID_P4_LANE_7_0
#define reg_CDS_F8_TOP_P4_LANE_7_0  CDS_READ_REG11_P4.BF.CDS_F8_TOP_P4_LANE_7_0
#define reg_CDS_F9_LSB_P4_LANE_7_0  CDS_READ_REG11_P4.BF.CDS_F9_LSB_P4_LANE_7_0
#define reg_CDS_F9_MSB_P4_LANE_7_0  CDS_READ_REG11_P4.BF.CDS_F9_MSB_P4_LANE_7_0

// 0x0214	CDS_READ_REG12_P4		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path4
typedef union {
	struct {
		uint8_t CDS_F10_LSB_P4_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F10_MSB_P4_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F11_P4_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F12_LSB_P4_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG12_P4_t;
__xdata __at( 0x6214 ) volatile CDS_READ_REG12_P4_t CDS_READ_REG12_P4;
#define reg_CDS_F10_LSB_P4_LANE_7_0  CDS_READ_REG12_P4.BF.CDS_F10_LSB_P4_LANE_7_0
#define reg_CDS_F10_MSB_P4_LANE_7_0  CDS_READ_REG12_P4.BF.CDS_F10_MSB_P4_LANE_7_0
#define reg_CDS_F11_P4_LANE_7_0  CDS_READ_REG12_P4.BF.CDS_F11_P4_LANE_7_0
#define reg_CDS_F12_LSB_P4_LANE_7_0  CDS_READ_REG12_P4.BF.CDS_F12_LSB_P4_LANE_7_0

// 0x0218	CDS_READ_REG13_P4		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path4
typedef union {
	struct {
		uint8_t CDS_F12_MSB_P4_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F13_P4_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F14_LSB_P4_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F14_MSB_P4_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG13_P4_t;
__xdata __at( 0x6218 ) volatile CDS_READ_REG13_P4_t CDS_READ_REG13_P4;
#define reg_CDS_F12_MSB_P4_LANE_7_0  CDS_READ_REG13_P4.BF.CDS_F12_MSB_P4_LANE_7_0
#define reg_CDS_F13_P4_LANE_7_0  CDS_READ_REG13_P4.BF.CDS_F13_P4_LANE_7_0
#define reg_CDS_F14_LSB_P4_LANE_7_0  CDS_READ_REG13_P4.BF.CDS_F14_LSB_P4_LANE_7_0
#define reg_CDS_F14_MSB_P4_LANE_7_0  CDS_READ_REG13_P4.BF.CDS_F14_MSB_P4_LANE_7_0

// 0x021c	CDS_READ_REG14_P4		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path4
typedef union {
	struct {
		uint8_t CDS_F15_P4_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F16_LSB_P4_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F16_MSB_P4_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F17_P4_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG14_P4_t;
__xdata __at( 0x621c ) volatile CDS_READ_REG14_P4_t CDS_READ_REG14_P4;
#define reg_CDS_F15_P4_LANE_7_0  CDS_READ_REG14_P4.BF.CDS_F15_P4_LANE_7_0
#define reg_CDS_F16_LSB_P4_LANE_7_0  CDS_READ_REG14_P4.BF.CDS_F16_LSB_P4_LANE_7_0
#define reg_CDS_F16_MSB_P4_LANE_7_0  CDS_READ_REG14_P4.BF.CDS_F16_MSB_P4_LANE_7_0
#define reg_CDS_F17_P4_LANE_7_0  CDS_READ_REG14_P4.BF.CDS_F17_P4_LANE_7_0

// 0x0220	CDS_READ_REG15_P4		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path4
typedef union {
	struct {
		uint8_t CDS_F18_LSB_P4_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F18_MSB_P4_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F19_P4_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F20_LSB_P4_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG15_P4_t;
__xdata __at( 0x6220 ) volatile CDS_READ_REG15_P4_t CDS_READ_REG15_P4;
#define reg_CDS_F18_LSB_P4_LANE_7_0  CDS_READ_REG15_P4.BF.CDS_F18_LSB_P4_LANE_7_0
#define reg_CDS_F18_MSB_P4_LANE_7_0  CDS_READ_REG15_P4.BF.CDS_F18_MSB_P4_LANE_7_0
#define reg_CDS_F19_P4_LANE_7_0  CDS_READ_REG15_P4.BF.CDS_F19_P4_LANE_7_0
#define reg_CDS_F20_LSB_P4_LANE_7_0  CDS_READ_REG15_P4.BF.CDS_F20_LSB_P4_LANE_7_0

// 0x0224	CDS_READ_REG16_P4		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path4
typedef union {
	struct {
		uint8_t CDS_F20_MSB_P4_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F21_P4_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F22_P4_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F23_P4_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG16_P4_t;
__xdata __at( 0x6224 ) volatile CDS_READ_REG16_P4_t CDS_READ_REG16_P4;
#define reg_CDS_F20_MSB_P4_LANE_7_0  CDS_READ_REG16_P4.BF.CDS_F20_MSB_P4_LANE_7_0
#define reg_CDS_F21_P4_LANE_7_0  CDS_READ_REG16_P4.BF.CDS_F21_P4_LANE_7_0
#define reg_CDS_F22_P4_LANE_7_0  CDS_READ_REG16_P4.BF.CDS_F22_P4_LANE_7_0
#define reg_CDS_F23_P4_LANE_7_0  CDS_READ_REG16_P4.BF.CDS_F23_P4_LANE_7_0

// 0x0228	CDS_READ_REG17_P4		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path4
typedef union {
	struct {
		uint8_t CDS_F24_P4_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F25_P4_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F26_P4_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F27_P4_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG17_P4_t;
__xdata __at( 0x6228 ) volatile CDS_READ_REG17_P4_t CDS_READ_REG17_P4;
#define reg_CDS_F24_P4_LANE_7_0  CDS_READ_REG17_P4.BF.CDS_F24_P4_LANE_7_0
#define reg_CDS_F25_P4_LANE_7_0  CDS_READ_REG17_P4.BF.CDS_F25_P4_LANE_7_0
#define reg_CDS_F26_P4_LANE_7_0  CDS_READ_REG17_P4.BF.CDS_F26_P4_LANE_7_0
#define reg_CDS_F27_P4_LANE_7_0  CDS_READ_REG17_P4.BF.CDS_F27_P4_LANE_7_0

// 0x022c	CDS_READ_REG18_P4		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path4
typedef union {
	struct {
		uint8_t CDS_F28_P4_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F29_P4_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F30_P4_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG18_P4_t;
__xdata __at( 0x622c ) volatile CDS_READ_REG18_P4_t CDS_READ_REG18_P4;
#define reg_CDS_F28_P4_LANE_7_0  CDS_READ_REG18_P4.BF.CDS_F28_P4_LANE_7_0
#define reg_CDS_F29_P4_LANE_7_0  CDS_READ_REG18_P4.BF.CDS_F29_P4_LANE_7_0
#define reg_CDS_F30_P4_LANE_7_0  CDS_READ_REG18_P4.BF.CDS_F30_P4_LANE_7_0

// 0x0230	CDS_READ_F0A_REG0		
typedef union {
	struct {
		uint8_t CDS_F0A_D_TOP_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_D_MID_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_D_BOT_P1_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_TOP_P1_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG0_t;
__xdata __at( 0x6230 ) volatile CDS_READ_F0A_REG0_t CDS_READ_F0A_REG0;
#define reg_CDS_F0A_D_TOP_P1_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_D_TOP_P1_LANE_7_0
#define reg_CDS_F0A_D_MID_P1_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_D_MID_P1_LANE_7_0
#define reg_CDS_F0A_D_BOT_P1_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_D_BOT_P1_LANE_7_0
#define reg_CDS_F0A_S_TOP_P1_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_S_TOP_P1_LANE_7_0

// 0x0234	CDS_READ_F0A_REG1		
typedef union {
	struct {
		uint8_t CDS_F0A_S_MID_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_S_BOT_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_D_TOP_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_D_MID_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG1_t;
__xdata __at( 0x6234 ) volatile CDS_READ_F0A_REG1_t CDS_READ_F0A_REG1;
#define reg_CDS_F0A_S_MID_P1_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_S_MID_P1_LANE_7_0
#define reg_CDS_F0A_S_BOT_P1_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_S_BOT_P1_LANE_7_0
#define reg_CDS_F0A_D_TOP_P2_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_D_TOP_P2_LANE_7_0
#define reg_CDS_F0A_D_MID_P2_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_D_MID_P2_LANE_7_0

// 0x0238	CDS_READ_F0A_REG2		
typedef union {
	struct {
		uint8_t CDS_F0A_D_BOT_P2_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_S_TOP_P2_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_S_MID_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_BOT_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG2_t;
__xdata __at( 0x6238 ) volatile CDS_READ_F0A_REG2_t CDS_READ_F0A_REG2;
#define reg_CDS_F0A_D_BOT_P2_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_D_BOT_P2_LANE_7_0
#define reg_CDS_F0A_S_TOP_P2_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_S_TOP_P2_LANE_7_0
#define reg_CDS_F0A_S_MID_P2_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_S_MID_P2_LANE_7_0
#define reg_CDS_F0A_S_BOT_P2_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_S_BOT_P2_LANE_7_0

// 0x023c	CDS_READ_F0A_REG3		
typedef union {
	struct {
		uint8_t CDS_F0A_D_TOP_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_D_MID_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_D_BOT_P3_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_TOP_P3_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG3_t;
__xdata __at( 0x623c ) volatile CDS_READ_F0A_REG3_t CDS_READ_F0A_REG3;
#define reg_CDS_F0A_D_TOP_P3_LANE_7_0  CDS_READ_F0A_REG3.BF.CDS_F0A_D_TOP_P3_LANE_7_0
#define reg_CDS_F0A_D_MID_P3_LANE_7_0  CDS_READ_F0A_REG3.BF.CDS_F0A_D_MID_P3_LANE_7_0
#define reg_CDS_F0A_D_BOT_P3_LANE_7_0  CDS_READ_F0A_REG3.BF.CDS_F0A_D_BOT_P3_LANE_7_0
#define reg_CDS_F0A_S_TOP_P3_LANE_7_0  CDS_READ_F0A_REG3.BF.CDS_F0A_S_TOP_P3_LANE_7_0

// 0x0240	CDS_READ_F0A_REG4		
typedef union {
	struct {
		uint8_t CDS_F0A_S_MID_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_S_BOT_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_D_TOP_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_D_MID_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG4_t;
__xdata __at( 0x6240 ) volatile CDS_READ_F0A_REG4_t CDS_READ_F0A_REG4;
#define reg_CDS_F0A_S_MID_P3_LANE_7_0  CDS_READ_F0A_REG4.BF.CDS_F0A_S_MID_P3_LANE_7_0
#define reg_CDS_F0A_S_BOT_P3_LANE_7_0  CDS_READ_F0A_REG4.BF.CDS_F0A_S_BOT_P3_LANE_7_0
#define reg_CDS_F0A_D_TOP_P4_LANE_7_0  CDS_READ_F0A_REG4.BF.CDS_F0A_D_TOP_P4_LANE_7_0
#define reg_CDS_F0A_D_MID_P4_LANE_7_0  CDS_READ_F0A_REG4.BF.CDS_F0A_D_MID_P4_LANE_7_0

// 0x0244	CDS_READ_F0A_REG5		
typedef union {
	struct {
		uint8_t CDS_F0A_D_BOT_P4_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_S_TOP_P4_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_S_MID_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_BOT_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG5_t;
__xdata __at( 0x6244 ) volatile CDS_READ_F0A_REG5_t CDS_READ_F0A_REG5;
#define reg_CDS_F0A_D_BOT_P4_LANE_7_0  CDS_READ_F0A_REG5.BF.CDS_F0A_D_BOT_P4_LANE_7_0
#define reg_CDS_F0A_S_TOP_P4_LANE_7_0  CDS_READ_F0A_REG5.BF.CDS_F0A_S_TOP_P4_LANE_7_0
#define reg_CDS_F0A_S_MID_P4_LANE_7_0  CDS_READ_F0A_REG5.BF.CDS_F0A_S_MID_P4_LANE_7_0
#define reg_CDS_F0A_S_BOT_P4_LANE_7_0  CDS_READ_F0A_REG5.BF.CDS_F0A_S_BOT_P4_LANE_7_0

// 0x0248	CDS_READ_F0B_REG0		
typedef union {
	struct {
		uint8_t CDS_F0B_D_TOP_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_D_MID_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_D_BOT_P1_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_TOP_P1_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG0_t;
__xdata __at( 0x6248 ) volatile CDS_READ_F0B_REG0_t CDS_READ_F0B_REG0;
#define reg_CDS_F0B_D_TOP_P1_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_D_TOP_P1_LANE_7_0
#define reg_CDS_F0B_D_MID_P1_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_D_MID_P1_LANE_7_0
#define reg_CDS_F0B_D_BOT_P1_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_D_BOT_P1_LANE_7_0
#define reg_CDS_F0B_S_TOP_P1_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_S_TOP_P1_LANE_7_0

// 0x024c	CDS_READ_F0B_REG1		
typedef union {
	struct {
		uint8_t CDS_F0B_S_MID_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_S_BOT_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_D_TOP_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_D_MID_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG1_t;
__xdata __at( 0x624c ) volatile CDS_READ_F0B_REG1_t CDS_READ_F0B_REG1;
#define reg_CDS_F0B_S_MID_P1_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_S_MID_P1_LANE_7_0
#define reg_CDS_F0B_S_BOT_P1_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_S_BOT_P1_LANE_7_0
#define reg_CDS_F0B_D_TOP_P2_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_D_TOP_P2_LANE_7_0
#define reg_CDS_F0B_D_MID_P2_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_D_MID_P2_LANE_7_0

// 0x0250	CDS_READ_F0B_REG2		
typedef union {
	struct {
		uint8_t CDS_F0B_D_BOT_P2_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_S_TOP_P2_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_S_MID_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_BOT_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG2_t;
__xdata __at( 0x6250 ) volatile CDS_READ_F0B_REG2_t CDS_READ_F0B_REG2;
#define reg_CDS_F0B_D_BOT_P2_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_D_BOT_P2_LANE_7_0
#define reg_CDS_F0B_S_TOP_P2_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_S_TOP_P2_LANE_7_0
#define reg_CDS_F0B_S_MID_P2_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_S_MID_P2_LANE_7_0
#define reg_CDS_F0B_S_BOT_P2_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_S_BOT_P2_LANE_7_0

// 0x0254	CDS_READ_F0B_REG3		
typedef union {
	struct {
		uint8_t CDS_F0B_D_TOP_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_D_MID_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_D_BOT_P3_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_TOP_P3_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG3_t;
__xdata __at( 0x6254 ) volatile CDS_READ_F0B_REG3_t CDS_READ_F0B_REG3;
#define reg_CDS_F0B_D_TOP_P3_LANE_7_0  CDS_READ_F0B_REG3.BF.CDS_F0B_D_TOP_P3_LANE_7_0
#define reg_CDS_F0B_D_MID_P3_LANE_7_0  CDS_READ_F0B_REG3.BF.CDS_F0B_D_MID_P3_LANE_7_0
#define reg_CDS_F0B_D_BOT_P3_LANE_7_0  CDS_READ_F0B_REG3.BF.CDS_F0B_D_BOT_P3_LANE_7_0
#define reg_CDS_F0B_S_TOP_P3_LANE_7_0  CDS_READ_F0B_REG3.BF.CDS_F0B_S_TOP_P3_LANE_7_0

// 0x0258	CDS_READ_F0B_REG4		
typedef union {
	struct {
		uint8_t CDS_F0B_S_MID_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_S_BOT_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_D_TOP_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_D_MID_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG4_t;
__xdata __at( 0x6258 ) volatile CDS_READ_F0B_REG4_t CDS_READ_F0B_REG4;
#define reg_CDS_F0B_S_MID_P3_LANE_7_0  CDS_READ_F0B_REG4.BF.CDS_F0B_S_MID_P3_LANE_7_0
#define reg_CDS_F0B_S_BOT_P3_LANE_7_0  CDS_READ_F0B_REG4.BF.CDS_F0B_S_BOT_P3_LANE_7_0
#define reg_CDS_F0B_D_TOP_P4_LANE_7_0  CDS_READ_F0B_REG4.BF.CDS_F0B_D_TOP_P4_LANE_7_0
#define reg_CDS_F0B_D_MID_P4_LANE_7_0  CDS_READ_F0B_REG4.BF.CDS_F0B_D_MID_P4_LANE_7_0

// 0x025c	CDS_READ_F0B_REG5		
typedef union {
	struct {
		uint8_t CDS_F0B_D_BOT_P4_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_S_TOP_P4_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_S_MID_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_BOT_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG5_t;
__xdata __at( 0x625c ) volatile CDS_READ_F0B_REG5_t CDS_READ_F0B_REG5;
#define reg_CDS_F0B_D_BOT_P4_LANE_7_0  CDS_READ_F0B_REG5.BF.CDS_F0B_D_BOT_P4_LANE_7_0
#define reg_CDS_F0B_S_TOP_P4_LANE_7_0  CDS_READ_F0B_REG5.BF.CDS_F0B_S_TOP_P4_LANE_7_0
#define reg_CDS_F0B_S_MID_P4_LANE_7_0  CDS_READ_F0B_REG5.BF.CDS_F0B_S_MID_P4_LANE_7_0
#define reg_CDS_F0B_S_BOT_P4_LANE_7_0  CDS_READ_F0B_REG5.BF.CDS_F0B_S_BOT_P4_LANE_7_0

// 0x0260	CDS_READ_F0K_REG0		
typedef union {
	struct {
		uint8_t CDS_F0K_D_TOP_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_D_MID_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_D_BOT_P1_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_S_TOP_P1_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG0_t;
__xdata __at( 0x6260 ) volatile CDS_READ_F0K_REG0_t CDS_READ_F0K_REG0;
#define reg_CDS_F0K_D_TOP_P1_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_D_TOP_P1_LANE_7_0
#define reg_CDS_F0K_D_MID_P1_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_D_MID_P1_LANE_7_0
#define reg_CDS_F0K_D_BOT_P1_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_D_BOT_P1_LANE_7_0
#define reg_CDS_F0K_S_TOP_P1_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_S_TOP_P1_LANE_7_0

// 0x0264	CDS_READ_F0K_REG1		
typedef union {
	struct {
		uint8_t CDS_F0K_S_MID_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_S_BOT_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_D_TOP_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_D_MID_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG1_t;
__xdata __at( 0x6264 ) volatile CDS_READ_F0K_REG1_t CDS_READ_F0K_REG1;
#define reg_CDS_F0K_S_MID_P1_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_S_MID_P1_LANE_7_0
#define reg_CDS_F0K_S_BOT_P1_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_S_BOT_P1_LANE_7_0
#define reg_CDS_F0K_D_TOP_P2_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_D_TOP_P2_LANE_7_0
#define reg_CDS_F0K_D_MID_P2_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_D_MID_P2_LANE_7_0

// 0x0268	CDS_READ_F0K_REG2		
typedef union {
	struct {
		uint8_t CDS_F0K_D_BOT_P2_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_S_TOP_P2_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_S_MID_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_S_BOT_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG2_t;
__xdata __at( 0x6268 ) volatile CDS_READ_F0K_REG2_t CDS_READ_F0K_REG2;
#define reg_CDS_F0K_D_BOT_P2_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_D_BOT_P2_LANE_7_0
#define reg_CDS_F0K_S_TOP_P2_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_S_TOP_P2_LANE_7_0
#define reg_CDS_F0K_S_MID_P2_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_S_MID_P2_LANE_7_0
#define reg_CDS_F0K_S_BOT_P2_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_S_BOT_P2_LANE_7_0

// 0x026c	CDS_READ_F0K_REG3		
typedef union {
	struct {
		uint8_t CDS_F0K_D_TOP_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_D_MID_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_D_BOT_P3_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_S_TOP_P3_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG3_t;
__xdata __at( 0x626c ) volatile CDS_READ_F0K_REG3_t CDS_READ_F0K_REG3;
#define reg_CDS_F0K_D_TOP_P3_LANE_7_0  CDS_READ_F0K_REG3.BF.CDS_F0K_D_TOP_P3_LANE_7_0
#define reg_CDS_F0K_D_MID_P3_LANE_7_0  CDS_READ_F0K_REG3.BF.CDS_F0K_D_MID_P3_LANE_7_0
#define reg_CDS_F0K_D_BOT_P3_LANE_7_0  CDS_READ_F0K_REG3.BF.CDS_F0K_D_BOT_P3_LANE_7_0
#define reg_CDS_F0K_S_TOP_P3_LANE_7_0  CDS_READ_F0K_REG3.BF.CDS_F0K_S_TOP_P3_LANE_7_0

// 0x0270	CDS_READ_F0K_REG4		
typedef union {
	struct {
		uint8_t CDS_F0K_S_MID_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_S_BOT_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_D_TOP_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_D_MID_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG4_t;
__xdata __at( 0x6270 ) volatile CDS_READ_F0K_REG4_t CDS_READ_F0K_REG4;
#define reg_CDS_F0K_S_MID_P3_LANE_7_0  CDS_READ_F0K_REG4.BF.CDS_F0K_S_MID_P3_LANE_7_0
#define reg_CDS_F0K_S_BOT_P3_LANE_7_0  CDS_READ_F0K_REG4.BF.CDS_F0K_S_BOT_P3_LANE_7_0
#define reg_CDS_F0K_D_TOP_P4_LANE_7_0  CDS_READ_F0K_REG4.BF.CDS_F0K_D_TOP_P4_LANE_7_0
#define reg_CDS_F0K_D_MID_P4_LANE_7_0  CDS_READ_F0K_REG4.BF.CDS_F0K_D_MID_P4_LANE_7_0

// 0x0274	CDS_READ_F0K_REG5		
typedef union {
	struct {
		uint8_t CDS_F0K_D_BOT_P4_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_S_TOP_P4_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_S_MID_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_S_BOT_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG5_t;
__xdata __at( 0x6274 ) volatile CDS_READ_F0K_REG5_t CDS_READ_F0K_REG5;
#define reg_CDS_F0K_D_BOT_P4_LANE_7_0  CDS_READ_F0K_REG5.BF.CDS_F0K_D_BOT_P4_LANE_7_0
#define reg_CDS_F0K_S_TOP_P4_LANE_7_0  CDS_READ_F0K_REG5.BF.CDS_F0K_S_TOP_P4_LANE_7_0
#define reg_CDS_F0K_S_MID_P4_LANE_7_0  CDS_READ_F0K_REG5.BF.CDS_F0K_S_MID_P4_LANE_7_0
#define reg_CDS_F0K_S_BOT_P4_LANE_7_0  CDS_READ_F0K_REG5.BF.CDS_F0K_S_BOT_P4_LANE_7_0

// 0x0278	CDS_READ_F0X_REG0		
typedef union {
	struct {
		uint8_t CDS_F0X_D_TOP_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0X_D_MID_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0X_D_BOT_P1_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0X_S_TOP_P1_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0X_REG0_t;
__xdata __at( 0x6278 ) volatile CDS_READ_F0X_REG0_t CDS_READ_F0X_REG0;
#define reg_CDS_F0X_D_TOP_P1_LANE_7_0  CDS_READ_F0X_REG0.BF.CDS_F0X_D_TOP_P1_LANE_7_0
#define reg_CDS_F0X_D_MID_P1_LANE_7_0  CDS_READ_F0X_REG0.BF.CDS_F0X_D_MID_P1_LANE_7_0
#define reg_CDS_F0X_D_BOT_P1_LANE_7_0  CDS_READ_F0X_REG0.BF.CDS_F0X_D_BOT_P1_LANE_7_0
#define reg_CDS_F0X_S_TOP_P1_LANE_7_0  CDS_READ_F0X_REG0.BF.CDS_F0X_S_TOP_P1_LANE_7_0

// 0x027c	CDS_READ_F0X_REG1		
typedef union {
	struct {
		uint8_t CDS_F0X_S_MID_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0X_S_BOT_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0X_D_TOP_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0X_D_MID_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0X_REG1_t;
__xdata __at( 0x627c ) volatile CDS_READ_F0X_REG1_t CDS_READ_F0X_REG1;
#define reg_CDS_F0X_S_MID_P1_LANE_7_0  CDS_READ_F0X_REG1.BF.CDS_F0X_S_MID_P1_LANE_7_0
#define reg_CDS_F0X_S_BOT_P1_LANE_7_0  CDS_READ_F0X_REG1.BF.CDS_F0X_S_BOT_P1_LANE_7_0
#define reg_CDS_F0X_D_TOP_P2_LANE_7_0  CDS_READ_F0X_REG1.BF.CDS_F0X_D_TOP_P2_LANE_7_0
#define reg_CDS_F0X_D_MID_P2_LANE_7_0  CDS_READ_F0X_REG1.BF.CDS_F0X_D_MID_P2_LANE_7_0

// 0x0280	CDS_READ_F0X_REG2		
typedef union {
	struct {
		uint8_t CDS_F0X_D_BOT_P2_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0X_S_TOP_P2_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0X_S_MID_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0X_S_BOT_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0X_REG2_t;
__xdata __at( 0x6280 ) volatile CDS_READ_F0X_REG2_t CDS_READ_F0X_REG2;
#define reg_CDS_F0X_D_BOT_P2_LANE_7_0  CDS_READ_F0X_REG2.BF.CDS_F0X_D_BOT_P2_LANE_7_0
#define reg_CDS_F0X_S_TOP_P2_LANE_7_0  CDS_READ_F0X_REG2.BF.CDS_F0X_S_TOP_P2_LANE_7_0
#define reg_CDS_F0X_S_MID_P2_LANE_7_0  CDS_READ_F0X_REG2.BF.CDS_F0X_S_MID_P2_LANE_7_0
#define reg_CDS_F0X_S_BOT_P2_LANE_7_0  CDS_READ_F0X_REG2.BF.CDS_F0X_S_BOT_P2_LANE_7_0

// 0x0284	CDS_READ_F0X_REG3		
typedef union {
	struct {
		uint8_t CDS_F0X_D_TOP_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0X_D_MID_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0X_D_BOT_P3_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0X_S_TOP_P3_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0X_REG3_t;
__xdata __at( 0x6284 ) volatile CDS_READ_F0X_REG3_t CDS_READ_F0X_REG3;
#define reg_CDS_F0X_D_TOP_P3_LANE_7_0  CDS_READ_F0X_REG3.BF.CDS_F0X_D_TOP_P3_LANE_7_0
#define reg_CDS_F0X_D_MID_P3_LANE_7_0  CDS_READ_F0X_REG3.BF.CDS_F0X_D_MID_P3_LANE_7_0
#define reg_CDS_F0X_D_BOT_P3_LANE_7_0  CDS_READ_F0X_REG3.BF.CDS_F0X_D_BOT_P3_LANE_7_0
#define reg_CDS_F0X_S_TOP_P3_LANE_7_0  CDS_READ_F0X_REG3.BF.CDS_F0X_S_TOP_P3_LANE_7_0

// 0x0288	CDS_READ_F0X_REG4		
typedef union {
	struct {
		uint8_t CDS_F0X_S_MID_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0X_S_BOT_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0X_D_TOP_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0X_D_MID_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0X_REG4_t;
__xdata __at( 0x6288 ) volatile CDS_READ_F0X_REG4_t CDS_READ_F0X_REG4;
#define reg_CDS_F0X_S_MID_P3_LANE_7_0  CDS_READ_F0X_REG4.BF.CDS_F0X_S_MID_P3_LANE_7_0
#define reg_CDS_F0X_S_BOT_P3_LANE_7_0  CDS_READ_F0X_REG4.BF.CDS_F0X_S_BOT_P3_LANE_7_0
#define reg_CDS_F0X_D_TOP_P4_LANE_7_0  CDS_READ_F0X_REG4.BF.CDS_F0X_D_TOP_P4_LANE_7_0
#define reg_CDS_F0X_D_MID_P4_LANE_7_0  CDS_READ_F0X_REG4.BF.CDS_F0X_D_MID_P4_LANE_7_0

// 0x028c	CDS_READ_F0X_REG5		
typedef union {
	struct {
		uint8_t CDS_F0X_D_BOT_P4_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0X_S_TOP_P4_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0X_S_MID_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0X_S_BOT_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0X_REG5_t;
__xdata __at( 0x628c ) volatile CDS_READ_F0X_REG5_t CDS_READ_F0X_REG5;
#define reg_CDS_F0X_D_BOT_P4_LANE_7_0  CDS_READ_F0X_REG5.BF.CDS_F0X_D_BOT_P4_LANE_7_0
#define reg_CDS_F0X_S_TOP_P4_LANE_7_0  CDS_READ_F0X_REG5.BF.CDS_F0X_S_TOP_P4_LANE_7_0
#define reg_CDS_F0X_S_MID_P4_LANE_7_0  CDS_READ_F0X_REG5.BF.CDS_F0X_S_MID_P4_LANE_7_0
#define reg_CDS_F0X_S_BOT_P4_LANE_7_0  CDS_READ_F0X_REG5.BF.CDS_F0X_S_BOT_P4_LANE_7_0

// 0x0290	CDS_READ_F0D_REG0		
typedef union {
	struct {
		uint8_t CDS_F0D_D_TOP_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_D_MID_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_D_BOT_P1_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_TOP_P1_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG0_t;
__xdata __at( 0x6290 ) volatile CDS_READ_F0D_REG0_t CDS_READ_F0D_REG0;
#define reg_CDS_F0D_D_TOP_P1_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_D_TOP_P1_LANE_7_0
#define reg_CDS_F0D_D_MID_P1_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_D_MID_P1_LANE_7_0
#define reg_CDS_F0D_D_BOT_P1_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_D_BOT_P1_LANE_7_0
#define reg_CDS_F0D_S_TOP_P1_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_S_TOP_P1_LANE_7_0

// 0x0294	CDS_READ_F0D_REG1		
typedef union {
	struct {
		uint8_t CDS_F0D_S_MID_P1_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_S_BOT_P1_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_D_TOP_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_D_MID_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG1_t;
__xdata __at( 0x6294 ) volatile CDS_READ_F0D_REG1_t CDS_READ_F0D_REG1;
#define reg_CDS_F0D_S_MID_P1_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_S_MID_P1_LANE_7_0
#define reg_CDS_F0D_S_BOT_P1_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_S_BOT_P1_LANE_7_0
#define reg_CDS_F0D_D_TOP_P2_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_D_TOP_P2_LANE_7_0
#define reg_CDS_F0D_D_MID_P2_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_D_MID_P2_LANE_7_0

// 0x0298	CDS_READ_F0D_REG2		
typedef union {
	struct {
		uint8_t CDS_F0D_D_BOT_P2_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_S_TOP_P2_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_S_MID_P2_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_BOT_P2_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG2_t;
__xdata __at( 0x6298 ) volatile CDS_READ_F0D_REG2_t CDS_READ_F0D_REG2;
#define reg_CDS_F0D_D_BOT_P2_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_D_BOT_P2_LANE_7_0
#define reg_CDS_F0D_S_TOP_P2_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_S_TOP_P2_LANE_7_0
#define reg_CDS_F0D_S_MID_P2_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_S_MID_P2_LANE_7_0
#define reg_CDS_F0D_S_BOT_P2_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_S_BOT_P2_LANE_7_0

// 0x029c	CDS_READ_F0D_REG3		
typedef union {
	struct {
		uint8_t CDS_F0D_D_TOP_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_D_MID_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_D_BOT_P3_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_TOP_P3_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG3_t;
__xdata __at( 0x629c ) volatile CDS_READ_F0D_REG3_t CDS_READ_F0D_REG3;
#define reg_CDS_F0D_D_TOP_P3_LANE_7_0  CDS_READ_F0D_REG3.BF.CDS_F0D_D_TOP_P3_LANE_7_0
#define reg_CDS_F0D_D_MID_P3_LANE_7_0  CDS_READ_F0D_REG3.BF.CDS_F0D_D_MID_P3_LANE_7_0
#define reg_CDS_F0D_D_BOT_P3_LANE_7_0  CDS_READ_F0D_REG3.BF.CDS_F0D_D_BOT_P3_LANE_7_0
#define reg_CDS_F0D_S_TOP_P3_LANE_7_0  CDS_READ_F0D_REG3.BF.CDS_F0D_S_TOP_P3_LANE_7_0

// 0x02a0	CDS_READ_F0D_REG4		
typedef union {
	struct {
		uint8_t CDS_F0D_S_MID_P3_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_S_BOT_P3_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_D_TOP_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_D_MID_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG4_t;
__xdata __at( 0x62a0 ) volatile CDS_READ_F0D_REG4_t CDS_READ_F0D_REG4;
#define reg_CDS_F0D_S_MID_P3_LANE_7_0  CDS_READ_F0D_REG4.BF.CDS_F0D_S_MID_P3_LANE_7_0
#define reg_CDS_F0D_S_BOT_P3_LANE_7_0  CDS_READ_F0D_REG4.BF.CDS_F0D_S_BOT_P3_LANE_7_0
#define reg_CDS_F0D_D_TOP_P4_LANE_7_0  CDS_READ_F0D_REG4.BF.CDS_F0D_D_TOP_P4_LANE_7_0
#define reg_CDS_F0D_D_MID_P4_LANE_7_0  CDS_READ_F0D_REG4.BF.CDS_F0D_D_MID_P4_LANE_7_0

// 0x02a4	CDS_READ_F0D_REG5		
typedef union {
	struct {
		uint8_t CDS_F0D_D_BOT_P4_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_S_TOP_P4_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_S_MID_P4_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_BOT_P4_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG5_t;
__xdata __at( 0x62a4 ) volatile CDS_READ_F0D_REG5_t CDS_READ_F0D_REG5;
#define reg_CDS_F0D_D_BOT_P4_LANE_7_0  CDS_READ_F0D_REG5.BF.CDS_F0D_D_BOT_P4_LANE_7_0
#define reg_CDS_F0D_S_TOP_P4_LANE_7_0  CDS_READ_F0D_REG5.BF.CDS_F0D_S_TOP_P4_LANE_7_0
#define reg_CDS_F0D_S_MID_P4_LANE_7_0  CDS_READ_F0D_REG5.BF.CDS_F0D_S_MID_P4_LANE_7_0
#define reg_CDS_F0D_S_BOT_P4_LANE_7_0  CDS_READ_F0D_REG5.BF.CDS_F0D_S_BOT_P4_LANE_7_0

// 0x02a8	CDS_READ_F0D_LEFT_REG0		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_TOP_P1_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_MID_P1_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_BOT_P1_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_TOP_P1_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG0_t;
__xdata __at( 0x62a8 ) volatile CDS_READ_F0D_LEFT_REG0_t CDS_READ_F0D_LEFT_REG0;
#define reg_CDS_F0D_LEFT_D_TOP_P1_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_D_TOP_P1_LANE_7_0
#define reg_CDS_F0D_LEFT_D_MID_P1_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_D_MID_P1_LANE_7_0
#define reg_CDS_F0D_LEFT_D_BOT_P1_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_D_BOT_P1_LANE_7_0
#define reg_CDS_F0D_LEFT_S_TOP_P1_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_S_TOP_P1_LANE_7_0

// 0x02ac	CDS_READ_F0D_LEFT_REG1		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_S_MID_P1_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_BOT_P1_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_TOP_P2_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_MID_P2_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG1_t;
__xdata __at( 0x62ac ) volatile CDS_READ_F0D_LEFT_REG1_t CDS_READ_F0D_LEFT_REG1;
#define reg_CDS_F0D_LEFT_S_MID_P1_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_S_MID_P1_LANE_7_0
#define reg_CDS_F0D_LEFT_S_BOT_P1_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_S_BOT_P1_LANE_7_0
#define reg_CDS_F0D_LEFT_D_TOP_P2_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_D_TOP_P2_LANE_7_0
#define reg_CDS_F0D_LEFT_D_MID_P2_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_D_MID_P2_LANE_7_0

// 0x02b0	CDS_READ_F0D_LEFT_REG2		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_BOT_P2_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_TOP_P2_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_MID_P2_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_BOT_P2_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG2_t;
__xdata __at( 0x62b0 ) volatile CDS_READ_F0D_LEFT_REG2_t CDS_READ_F0D_LEFT_REG2;
#define reg_CDS_F0D_LEFT_D_BOT_P2_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_D_BOT_P2_LANE_7_0
#define reg_CDS_F0D_LEFT_S_TOP_P2_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_S_TOP_P2_LANE_7_0
#define reg_CDS_F0D_LEFT_S_MID_P2_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_S_MID_P2_LANE_7_0
#define reg_CDS_F0D_LEFT_S_BOT_P2_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_S_BOT_P2_LANE_7_0

// 0x02b4	CDS_READ_F0D_LEFT_REG3		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_TOP_P3_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_MID_P3_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_BOT_P3_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_TOP_P3_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG3_t;
__xdata __at( 0x62b4 ) volatile CDS_READ_F0D_LEFT_REG3_t CDS_READ_F0D_LEFT_REG3;
#define reg_CDS_F0D_LEFT_D_TOP_P3_LANE_7_0  CDS_READ_F0D_LEFT_REG3.BF.CDS_F0D_LEFT_D_TOP_P3_LANE_7_0
#define reg_CDS_F0D_LEFT_D_MID_P3_LANE_7_0  CDS_READ_F0D_LEFT_REG3.BF.CDS_F0D_LEFT_D_MID_P3_LANE_7_0
#define reg_CDS_F0D_LEFT_D_BOT_P3_LANE_7_0  CDS_READ_F0D_LEFT_REG3.BF.CDS_F0D_LEFT_D_BOT_P3_LANE_7_0
#define reg_CDS_F0D_LEFT_S_TOP_P3_LANE_7_0  CDS_READ_F0D_LEFT_REG3.BF.CDS_F0D_LEFT_S_TOP_P3_LANE_7_0

// 0x02b8	CDS_READ_F0D_LEFT_REG4		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_S_MID_P3_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_BOT_P3_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_TOP_P4_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_MID_P4_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG4_t;
__xdata __at( 0x62b8 ) volatile CDS_READ_F0D_LEFT_REG4_t CDS_READ_F0D_LEFT_REG4;
#define reg_CDS_F0D_LEFT_S_MID_P3_LANE_7_0  CDS_READ_F0D_LEFT_REG4.BF.CDS_F0D_LEFT_S_MID_P3_LANE_7_0
#define reg_CDS_F0D_LEFT_S_BOT_P3_LANE_7_0  CDS_READ_F0D_LEFT_REG4.BF.CDS_F0D_LEFT_S_BOT_P3_LANE_7_0
#define reg_CDS_F0D_LEFT_D_TOP_P4_LANE_7_0  CDS_READ_F0D_LEFT_REG4.BF.CDS_F0D_LEFT_D_TOP_P4_LANE_7_0
#define reg_CDS_F0D_LEFT_D_MID_P4_LANE_7_0  CDS_READ_F0D_LEFT_REG4.BF.CDS_F0D_LEFT_D_MID_P4_LANE_7_0

// 0x02bc	CDS_READ_F0D_LEFT_REG5		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_BOT_P4_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_TOP_P4_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_MID_P4_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_BOT_P4_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG5_t;
__xdata __at( 0x62bc ) volatile CDS_READ_F0D_LEFT_REG5_t CDS_READ_F0D_LEFT_REG5;
#define reg_CDS_F0D_LEFT_D_BOT_P4_LANE_7_0  CDS_READ_F0D_LEFT_REG5.BF.CDS_F0D_LEFT_D_BOT_P4_LANE_7_0
#define reg_CDS_F0D_LEFT_S_TOP_P4_LANE_7_0  CDS_READ_F0D_LEFT_REG5.BF.CDS_F0D_LEFT_S_TOP_P4_LANE_7_0
#define reg_CDS_F0D_LEFT_S_MID_P4_LANE_7_0  CDS_READ_F0D_LEFT_REG5.BF.CDS_F0D_LEFT_S_MID_P4_LANE_7_0
#define reg_CDS_F0D_LEFT_S_BOT_P4_LANE_7_0  CDS_READ_F0D_LEFT_REG5.BF.CDS_F0D_LEFT_S_BOT_P4_LANE_7_0

// 0x02c0	CDS_READ_F0D_RIGHT_REG0		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_TOP_P1_LANE_7_0          : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_MID_P1_LANE_7_0          : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_BOT_P1_LANE_7_0          : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_TOP_P1_LANE_7_0          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG0_t;
__xdata __at( 0x62c0 ) volatile CDS_READ_F0D_RIGHT_REG0_t CDS_READ_F0D_RIGHT_REG0;
#define reg_CDS_F0D_RIGHT_D_TOP_P1_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_D_TOP_P1_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_MID_P1_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_D_MID_P1_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_BOT_P1_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_D_BOT_P1_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_TOP_P1_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_S_TOP_P1_LANE_7_0

// 0x02c4	CDS_READ_F0D_RIGHT_REG1		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_S_MID_P1_LANE_7_0          : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_BOT_P1_LANE_7_0          : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_TOP_P2_LANE_7_0          : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_MID_P2_LANE_7_0          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG1_t;
__xdata __at( 0x62c4 ) volatile CDS_READ_F0D_RIGHT_REG1_t CDS_READ_F0D_RIGHT_REG1;
#define reg_CDS_F0D_RIGHT_S_MID_P1_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_S_MID_P1_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_BOT_P1_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_S_BOT_P1_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_TOP_P2_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_D_TOP_P2_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_MID_P2_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_D_MID_P2_LANE_7_0

// 0x02c8	CDS_READ_F0D_RIGHT_REG2		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_BOT_P2_LANE_7_0          : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_TOP_P2_LANE_7_0          : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_MID_P2_LANE_7_0          : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_BOT_P2_LANE_7_0          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG2_t;
__xdata __at( 0x62c8 ) volatile CDS_READ_F0D_RIGHT_REG2_t CDS_READ_F0D_RIGHT_REG2;
#define reg_CDS_F0D_RIGHT_D_BOT_P2_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_D_BOT_P2_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_TOP_P2_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_S_TOP_P2_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_MID_P2_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_S_MID_P2_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_BOT_P2_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_S_BOT_P2_LANE_7_0

// 0x02cc	CDS_READ_F0D_RIGHT_REG3		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_TOP_P3_LANE_7_0          : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_MID_P3_LANE_7_0          : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_BOT_P3_LANE_7_0          : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_TOP_P3_LANE_7_0          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG3_t;
__xdata __at( 0x62cc ) volatile CDS_READ_F0D_RIGHT_REG3_t CDS_READ_F0D_RIGHT_REG3;
#define reg_CDS_F0D_RIGHT_D_TOP_P3_LANE_7_0  CDS_READ_F0D_RIGHT_REG3.BF.CDS_F0D_RIGHT_D_TOP_P3_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_MID_P3_LANE_7_0  CDS_READ_F0D_RIGHT_REG3.BF.CDS_F0D_RIGHT_D_MID_P3_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_BOT_P3_LANE_7_0  CDS_READ_F0D_RIGHT_REG3.BF.CDS_F0D_RIGHT_D_BOT_P3_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_TOP_P3_LANE_7_0  CDS_READ_F0D_RIGHT_REG3.BF.CDS_F0D_RIGHT_S_TOP_P3_LANE_7_0

// 0x02d0	CDS_READ_F0D_RIGHT_REG4		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_S_MID_P3_LANE_7_0          : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_BOT_P3_LANE_7_0          : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_TOP_P4_LANE_7_0          : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_MID_P4_LANE_7_0          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG4_t;
__xdata __at( 0x62d0 ) volatile CDS_READ_F0D_RIGHT_REG4_t CDS_READ_F0D_RIGHT_REG4;
#define reg_CDS_F0D_RIGHT_S_MID_P3_LANE_7_0  CDS_READ_F0D_RIGHT_REG4.BF.CDS_F0D_RIGHT_S_MID_P3_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_BOT_P3_LANE_7_0  CDS_READ_F0D_RIGHT_REG4.BF.CDS_F0D_RIGHT_S_BOT_P3_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_TOP_P4_LANE_7_0  CDS_READ_F0D_RIGHT_REG4.BF.CDS_F0D_RIGHT_D_TOP_P4_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_MID_P4_LANE_7_0  CDS_READ_F0D_RIGHT_REG4.BF.CDS_F0D_RIGHT_D_MID_P4_LANE_7_0

// 0x02d4	CDS_READ_F0D_RIGHT_REG5		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_BOT_P4_LANE_7_0          : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_TOP_P4_LANE_7_0          : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_MID_P4_LANE_7_0          : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_BOT_P4_LANE_7_0          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG5_t;
__xdata __at( 0x62d4 ) volatile CDS_READ_F0D_RIGHT_REG5_t CDS_READ_F0D_RIGHT_REG5;
#define reg_CDS_F0D_RIGHT_D_BOT_P4_LANE_7_0  CDS_READ_F0D_RIGHT_REG5.BF.CDS_F0D_RIGHT_D_BOT_P4_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_TOP_P4_LANE_7_0  CDS_READ_F0D_RIGHT_REG5.BF.CDS_F0D_RIGHT_S_TOP_P4_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_MID_P4_LANE_7_0  CDS_READ_F0D_RIGHT_REG5.BF.CDS_F0D_RIGHT_S_MID_P4_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_BOT_P4_LANE_7_0  CDS_READ_F0D_RIGHT_REG5.BF.CDS_F0D_RIGHT_S_BOT_P4_LANE_7_0

// 0x02d8	CDS_READ_MISC0		
typedef union {
	struct {
		uint8_t CDS_EYE_CHECK_PASS_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_SATURATE_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_VREF_SATURATE_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_MISC0_t;
__xdata __at( 0x62d8 ) volatile CDS_READ_MISC0_t CDS_READ_MISC0;
#define reg_CDS_EYE_CHECK_PASS_LANE_7_0  CDS_READ_MISC0.BF.CDS_EYE_CHECK_PASS_LANE_7_0
#define reg_CDS_F0A_SATURATE_LANE_7_0  CDS_READ_MISC0.BF.CDS_F0A_SATURATE_LANE_7_0
#define reg_CDS_VREF_SATURATE_LANE_7_0  CDS_READ_MISC0.BF.CDS_VREF_SATURATE_LANE_7_0

// 0x0300	CDS_CTRL_REG0		
typedef union {
	struct {
		uint8_t CDS_ADAPT_SPLR_DIS_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESET_PH_EN_DTL_LANE                     : 1;	/*      8     r/w   1*/
		uint8_t DFE_SAVE_EN_LANE                         : 1;	/*      9     r/w   1*/
		uint8_t LOCK_DFE_ON_LANE                         : 1;	/*     10     r/w   0*/
		uint8_t VH_EO_MODE_LANE                          : 1;	/*     11     r/w   0*/
		uint8_t EO_BASED_LANE                            : 1;	/*     12     r/w   1*/
		uint8_t EYE_CHK_DIS_LANE                         : 1;	/*     13     r/w   0*/
		uint8_t CDS_F0D_AVG_MODE_LANE                    : 1;	/*     14     r/w   0*/
		uint8_t DFE_LOAD_EN_LANE                         : 1;	/*     15     r/w   1*/
		uint8_t CDS_STATE_LANE_7_0                       : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_ERR_CODE_LANE_7_0                    : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG0_t;
__xdata __at( 0x6300 ) volatile CDS_CTRL_REG0_t CDS_CTRL_REG0;
#define reg_CDS_ADAPT_SPLR_DIS_LANE_7_0  CDS_CTRL_REG0.BF.CDS_ADAPT_SPLR_DIS_LANE_7_0
#define reg_RESET_PH_EN_DTL_LANE  CDS_CTRL_REG0.BF.RESET_PH_EN_DTL_LANE
#define reg_DFE_SAVE_EN_LANE  CDS_CTRL_REG0.BF.DFE_SAVE_EN_LANE
#define reg_LOCK_DFE_ON_LANE  CDS_CTRL_REG0.BF.LOCK_DFE_ON_LANE
#define reg_VH_EO_MODE_LANE  CDS_CTRL_REG0.BF.VH_EO_MODE_LANE
#define reg_EO_BASED_LANE  CDS_CTRL_REG0.BF.EO_BASED_LANE
#define reg_EYE_CHK_DIS_LANE  CDS_CTRL_REG0.BF.EYE_CHK_DIS_LANE
#define reg_CDS_F0D_AVG_MODE_LANE  CDS_CTRL_REG0.BF.CDS_F0D_AVG_MODE_LANE
#define reg_DFE_LOAD_EN_LANE  CDS_CTRL_REG0.BF.DFE_LOAD_EN_LANE
#define reg_CDS_STATE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_STATE_LANE_7_0
#define reg_CDS_ERR_CODE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_ERR_CODE_LANE_7_0

// 0x0304	CDS_CTRL_REG1		
typedef union {
	struct {
		uint8_t CDS_UPDATE_F_DIS_LANE                    : 1;	/*      0     r/w   1*/
		uint8_t CDS_F0DK_RES_CUSTOM_EN_LANE              : 1;	/*      1     r/w   0*/
		uint8_t CDS_F0K_RES_CUSTOM_LANE_1_0              : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t CDS_F0D_RES_CUSTOM_LANE_1_0              : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t CDS_VREF_VAL_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h32*/
		uint8_t CDS_VREF_VAL_FORCE_LANE                  : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CDS_F2T_VAL_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t CDS_F2T_VAL_FORCE_LANE                   : 1;	/*     20     r/w   1*/
		uint8_t RESET_DFE_TAP_MODE_LANE                  : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG1_t;
__xdata __at( 0x6304 ) volatile CDS_CTRL_REG1_t CDS_CTRL_REG1;
#define reg_CDS_UPDATE_F_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_F_DIS_LANE
#define reg_CDS_F0DK_RES_CUSTOM_EN_LANE  CDS_CTRL_REG1.BF.CDS_F0DK_RES_CUSTOM_EN_LANE
#define reg_CDS_F0K_RES_CUSTOM_LANE_1_0  CDS_CTRL_REG1.BF.CDS_F0K_RES_CUSTOM_LANE_1_0
#define reg_CDS_F0D_RES_CUSTOM_LANE_1_0  CDS_CTRL_REG1.BF.CDS_F0D_RES_CUSTOM_LANE_1_0
#define reg_CDS_VREF_VAL_LANE_5_0  CDS_CTRL_REG1.BF.CDS_VREF_VAL_LANE_5_0
#define reg_CDS_VREF_VAL_FORCE_LANE  CDS_CTRL_REG1.BF.CDS_VREF_VAL_FORCE_LANE
#define reg_CDS_F2T_VAL_LANE_3_0  CDS_CTRL_REG1.BF.CDS_F2T_VAL_LANE_3_0
#define reg_CDS_F2T_VAL_FORCE_LANE  CDS_CTRL_REG1.BF.CDS_F2T_VAL_FORCE_LANE
#define reg_RESET_DFE_TAP_MODE_LANE  CDS_CTRL_REG1.BF.RESET_DFE_TAP_MODE_LANE

// 0x0308	CDS_CTRL_REG2		
typedef union {
	struct {
		uint8_t EYE_CHK_THRESH_C_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t EYE_CHK_THRESH_K_LANE_3_0                : 4;	/*  [7:4]     r/w 4'h1*/
		uint8_t EYE_CHK_THRESH_VLD_LANE_7_0              : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t EYE_CHK_THRESH_ERR_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h3ff*/
		uint8_t EYE_CHK_THRESH_ERR_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h3ff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_CTRL_REG2_t;
__xdata __at( 0x6308 ) volatile CDS_CTRL_REG2_t CDS_CTRL_REG2;
#define reg_EYE_CHK_THRESH_C_LANE_3_0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_C_LANE_3_0
#define reg_EYE_CHK_THRESH_K_LANE_3_0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_K_LANE_3_0
#define reg_EYE_CHK_THRESH_VLD_LANE_7_0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_VLD_LANE_7_0
#define reg_EYE_CHK_THRESH_ERR_LANE_15_0_b0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_ERR_LANE_15_0_b0
#define reg_EYE_CHK_THRESH_ERR_LANE_15_0_b1  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_ERR_LANE_15_0_b1
#define reg_EYE_CHK_THRESH_ERR_LANE_15_0  CDS_CTRL_REG2.WT.W1

// 0x030c	PH_CTRL_REG0		
typedef union {
	struct {
		uint8_t PH_OS_DAT_LANE_15_0_b0                   : 8;	/* [15:0]     r/w   0*/
		uint8_t PH_OS_DAT_LANE_15_0_b1                   : 8;	/* [15:0]     r/w   0*/
		uint8_t CUR_PH_OS_DAT_LANE_15_0_b0               : 8;	/*[31:16]     r/w   0*/
		uint8_t CUR_PH_OS_DAT_LANE_15_0_b1               : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PH_CTRL_REG0_t;
__xdata __at( 0x630c ) volatile PH_CTRL_REG0_t PH_CTRL_REG0;
#define reg_PH_OS_DAT_LANE_15_0_b0  PH_CTRL_REG0.BF.PH_OS_DAT_LANE_15_0_b0
#define reg_PH_OS_DAT_LANE_15_0_b1  PH_CTRL_REG0.BF.PH_OS_DAT_LANE_15_0_b1
#define reg_CUR_PH_OS_DAT_LANE_15_0_b0  PH_CTRL_REG0.BF.CUR_PH_OS_DAT_LANE_15_0_b0
#define reg_CUR_PH_OS_DAT_LANE_15_0_b1  PH_CTRL_REG0.BF.CUR_PH_OS_DAT_LANE_15_0_b1
#define reg_PH_OS_DAT_LANE_15_0  PH_CTRL_REG0.WT.W0
#define reg_CUR_PH_OS_DAT_LANE_15_0  PH_CTRL_REG0.WT.W1

// 0x0310	PH_CTRL_REG1		
typedef union {
	struct {
		uint8_t PH_OS_ESM_LANE_7_0                       : 8;	/*  [7:0]     r/w   0*/
		uint8_t CUR_PH_OS_ESM_LANE_7_0                   : 8;	/* [15:8]     r/w   0*/
		uint8_t CUR_EOM_DPHER_LSB_LANE_7_0               : 8;	/*[23:16]     r/w   0*/
		uint8_t CUR_EOM_DPHER_MSB_LANE_7_0               : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PH_CTRL_REG1_t;
__xdata __at( 0x6310 ) volatile PH_CTRL_REG1_t PH_CTRL_REG1;
#define reg_PH_OS_ESM_LANE_7_0  PH_CTRL_REG1.BF.PH_OS_ESM_LANE_7_0
#define reg_CUR_PH_OS_ESM_LANE_7_0  PH_CTRL_REG1.BF.CUR_PH_OS_ESM_LANE_7_0
#define reg_CUR_EOM_DPHER_LSB_LANE_7_0  PH_CTRL_REG1.BF.CUR_EOM_DPHER_LSB_LANE_7_0
#define reg_CUR_EOM_DPHER_MSB_LANE_7_0  PH_CTRL_REG1.BF.CUR_EOM_DPHER_MSB_LANE_7_0

// 0x0314	DRIVE_REG0		
typedef union {
	struct {
		uint8_t RXTRAIN_R_IDX_LANE_3_0                   : 4;	/*  [3:0]     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t ADAPT_EVEN_EN_LANE                       : 1;	/*      8     r/w   1*/
		uint8_t ADAPT_ODD_EN_LANE                        : 1;	/*      9     r/w   1*/
		uint8_t ADAPT_DATA_EN_LANE                       : 1;	/*     10     r/w   1*/
		uint8_t ADAPT_SLICER_EN_LANE                     : 1;	/*     11     r/w   1*/
		uint8_t PH_MODE_LANE_1_0                         : 2;	/*[13:12]     r/w   0*/
		uint8_t CUR_PH_MODE_LANE_1_0                     : 2;	/*[15:14]     r/w   0*/
		uint8_t RXTRAIN_C_IDX_LANE_7_0                   : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DRIVE_REG0_t;
__xdata __at( 0x6314 ) volatile DRIVE_REG0_t DRIVE_REG0;
#define reg_RXTRAIN_R_IDX_LANE_3_0  DRIVE_REG0.BF.RXTRAIN_R_IDX_LANE_3_0
#define reg_ADAPT_EVEN_EN_LANE  DRIVE_REG0.BF.ADAPT_EVEN_EN_LANE
#define reg_ADAPT_ODD_EN_LANE  DRIVE_REG0.BF.ADAPT_ODD_EN_LANE
#define reg_ADAPT_DATA_EN_LANE  DRIVE_REG0.BF.ADAPT_DATA_EN_LANE
#define reg_ADAPT_SLICER_EN_LANE  DRIVE_REG0.BF.ADAPT_SLICER_EN_LANE
#define reg_PH_MODE_LANE_1_0  DRIVE_REG0.BF.PH_MODE_LANE_1_0
#define reg_CUR_PH_MODE_LANE_1_0  DRIVE_REG0.BF.CUR_PH_MODE_LANE_1_0
#define reg_RXTRAIN_C_IDX_LANE_7_0  DRIVE_REG0.BF.RXTRAIN_C_IDX_LANE_7_0

// 0x0318	TXTRAIN_IF_REG0		
typedef union {
	struct {
		uint8_t TXTRAIN_CTRL_PAT_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_CN2_LANE_1_0                : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_CN1_LANE_1_0                : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_C0_LANE_1_0                 : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_C1_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_PRESET_LANE_3_0             : 4;	/*[13:10]     r/w 4'h0*/
		uint8_t TXTRAIN_FAIL_LANE                        : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TXTRAIN_STATUS_CN2_LANE_2_0              : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t TXTRAIN_STATUS_CN1_LANE_2_0              : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t TXTRAIN_STATUS_C0_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t TXTRAIN_STATUS_C1_LANE_2_0               : 3;	/*[29:27]     r/w 3'h0*/
		uint8_t TXTRAIN_STATUS_VALID_LANE                : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TXTRAIN_IF_REG0_t;
__xdata __at( 0x6318 ) volatile TXTRAIN_IF_REG0_t TXTRAIN_IF_REG0;
#define reg_TXTRAIN_CTRL_PAT_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_PAT_LANE_1_0
#define reg_TXTRAIN_CTRL_CN2_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_CN2_LANE_1_0
#define reg_TXTRAIN_CTRL_CN1_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_CN1_LANE_1_0
#define reg_TXTRAIN_CTRL_C0_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_C0_LANE_1_0
#define reg_TXTRAIN_CTRL_C1_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_C1_LANE_1_0
#define reg_TXTRAIN_CTRL_PRESET_LANE_3_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_PRESET_LANE_3_0
#define reg_TXTRAIN_FAIL_LANE  TXTRAIN_IF_REG0.BF.TXTRAIN_FAIL_LANE
#define reg_TXTRAIN_STATUS_CN2_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_CN2_LANE_2_0
#define reg_TXTRAIN_STATUS_CN1_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_CN1_LANE_2_0
#define reg_TXTRAIN_STATUS_C0_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_C0_LANE_2_0
#define reg_TXTRAIN_STATUS_C1_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_C1_LANE_2_0
#define reg_TXTRAIN_STATUS_VALID_LANE  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_VALID_LANE

// 0x0320	CDS_TIMER0		
typedef union {
	struct {
		uint8_t CDS_TDTL_COARSE_LANE_15_0_b0             : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDTL_COARSE_LANE_15_0_b1             : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDTL_INIT_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TDTL_INIT_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER0_t;
__xdata __at( 0x6320 ) volatile CDS_TIMER0_t CDS_TIMER0;
#define reg_CDS_TDTL_COARSE_LANE_15_0_b0  CDS_TIMER0.BF.CDS_TDTL_COARSE_LANE_15_0_b0
#define reg_CDS_TDTL_COARSE_LANE_15_0_b1  CDS_TIMER0.BF.CDS_TDTL_COARSE_LANE_15_0_b1
#define reg_CDS_TDTL_INIT_LANE_15_0_b0  CDS_TIMER0.BF.CDS_TDTL_INIT_LANE_15_0_b0
#define reg_CDS_TDTL_INIT_LANE_15_0_b1  CDS_TIMER0.BF.CDS_TDTL_INIT_LANE_15_0_b1
#define reg_CDS_TDTL_COARSE_LANE_15_0  CDS_TIMER0.WT.W0
#define reg_CDS_TDTL_INIT_LANE_15_0  CDS_TIMER0.WT.W1

// 0x0324	CDS_TIMER1		
typedef union {
	struct {
		uint8_t CDS_TDFE_INIT2_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDFE_INIT2_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDFE_INIT1_LANE_15_0_b0              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TDFE_INIT1_LANE_15_0_b1              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER1_t;
__xdata __at( 0x6324 ) volatile CDS_TIMER1_t CDS_TIMER1;
#define reg_CDS_TDFE_INIT2_LANE_15_0_b0  CDS_TIMER1.BF.CDS_TDFE_INIT2_LANE_15_0_b0
#define reg_CDS_TDFE_INIT2_LANE_15_0_b1  CDS_TIMER1.BF.CDS_TDFE_INIT2_LANE_15_0_b1
#define reg_CDS_TDFE_INIT1_LANE_15_0_b0  CDS_TIMER1.BF.CDS_TDFE_INIT1_LANE_15_0_b0
#define reg_CDS_TDFE_INIT1_LANE_15_0_b1  CDS_TIMER1.BF.CDS_TDFE_INIT1_LANE_15_0_b1
#define reg_CDS_TDFE_INIT2_LANE_15_0  CDS_TIMER1.WT.W0
#define reg_CDS_TDFE_INIT1_LANE_15_0  CDS_TIMER1.WT.W1

// 0x0328	CDS_TIMER2		
typedef union {
	struct {
		uint8_t CDS_TEE_FINE_LANE_15_0_b0                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TEE_FINE_LANE_15_0_b1                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TEE_COARSE_LANE_15_0_b0              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TEE_COARSE_LANE_15_0_b1              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER2_t;
__xdata __at( 0x6328 ) volatile CDS_TIMER2_t CDS_TIMER2;
#define reg_CDS_TEE_FINE_LANE_15_0_b0  CDS_TIMER2.BF.CDS_TEE_FINE_LANE_15_0_b0
#define reg_CDS_TEE_FINE_LANE_15_0_b1  CDS_TIMER2.BF.CDS_TEE_FINE_LANE_15_0_b1
#define reg_CDS_TEE_COARSE_LANE_15_0_b0  CDS_TIMER2.BF.CDS_TEE_COARSE_LANE_15_0_b0
#define reg_CDS_TEE_COARSE_LANE_15_0_b1  CDS_TIMER2.BF.CDS_TEE_COARSE_LANE_15_0_b1
#define reg_CDS_TEE_FINE_LANE_15_0  CDS_TIMER2.WT.W0
#define reg_CDS_TEE_COARSE_LANE_15_0  CDS_TIMER2.WT.W1

// 0x032c	CDS_TIMER3		
typedef union {
	struct {
		uint8_t CDS_TF0_COARSE_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0_COARSE_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0_COARSE_PM_LANE_15_0_b0           : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TF0_COARSE_PM_LANE_15_0_b1           : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER3_t;
__xdata __at( 0x632c ) volatile CDS_TIMER3_t CDS_TIMER3;
#define reg_CDS_TF0_COARSE_LANE_15_0_b0  CDS_TIMER3.BF.CDS_TF0_COARSE_LANE_15_0_b0
#define reg_CDS_TF0_COARSE_LANE_15_0_b1  CDS_TIMER3.BF.CDS_TF0_COARSE_LANE_15_0_b1
#define reg_CDS_TF0_COARSE_PM_LANE_15_0_b0  CDS_TIMER3.BF.CDS_TF0_COARSE_PM_LANE_15_0_b0
#define reg_CDS_TF0_COARSE_PM_LANE_15_0_b1  CDS_TIMER3.BF.CDS_TF0_COARSE_PM_LANE_15_0_b1
#define reg_CDS_TF0_COARSE_LANE_15_0  CDS_TIMER3.WT.W0
#define reg_CDS_TF0_COARSE_PM_LANE_15_0  CDS_TIMER3.WT.W1

// 0x0330	CDS_TIMER4		
typedef union {
	struct {
		uint8_t CDS_TDFE_COARSE_LANE_15_0_b0             : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDFE_COARSE_LANE_15_0_b1             : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDFE_COARSE_PM_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TDFE_COARSE_PM_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER4_t;
__xdata __at( 0x6330 ) volatile CDS_TIMER4_t CDS_TIMER4;
#define reg_CDS_TDFE_COARSE_LANE_15_0_b0  CDS_TIMER4.BF.CDS_TDFE_COARSE_LANE_15_0_b0
#define reg_CDS_TDFE_COARSE_LANE_15_0_b1  CDS_TIMER4.BF.CDS_TDFE_COARSE_LANE_15_0_b1
#define reg_CDS_TDFE_COARSE_PM_LANE_15_0_b0  CDS_TIMER4.BF.CDS_TDFE_COARSE_PM_LANE_15_0_b0
#define reg_CDS_TDFE_COARSE_PM_LANE_15_0_b1  CDS_TIMER4.BF.CDS_TDFE_COARSE_PM_LANE_15_0_b1
#define reg_CDS_TDFE_COARSE_LANE_15_0  CDS_TIMER4.WT.W0
#define reg_CDS_TDFE_COARSE_PM_LANE_15_0  CDS_TIMER4.WT.W1

// 0x0334	CDS_TIMER5		
typedef union {
	struct {
		uint8_t CDS_TDFE_ACCU_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDFE_ACCU_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDFE_FINE_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TDFE_FINE_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER5_t;
__xdata __at( 0x6334 ) volatile CDS_TIMER5_t CDS_TIMER5;
#define reg_CDS_TDFE_ACCU_LANE_15_0_b0  CDS_TIMER5.BF.CDS_TDFE_ACCU_LANE_15_0_b0
#define reg_CDS_TDFE_ACCU_LANE_15_0_b1  CDS_TIMER5.BF.CDS_TDFE_ACCU_LANE_15_0_b1
#define reg_CDS_TDFE_FINE_LANE_15_0_b0  CDS_TIMER5.BF.CDS_TDFE_FINE_LANE_15_0_b0
#define reg_CDS_TDFE_FINE_LANE_15_0_b1  CDS_TIMER5.BF.CDS_TDFE_FINE_LANE_15_0_b1
#define reg_CDS_TDFE_ACCU_LANE_15_0  CDS_TIMER5.WT.W0
#define reg_CDS_TDFE_FINE_LANE_15_0  CDS_TIMER5.WT.W1

// 0x0338	CDS_TIMER6		
typedef union {
	struct {
		uint8_t CDS_TF0B_ACCU_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0B_ACCU_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0B_FINE_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TF0B_FINE_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER6_t;
__xdata __at( 0x6338 ) volatile CDS_TIMER6_t CDS_TIMER6;
#define reg_CDS_TF0B_ACCU_LANE_15_0_b0  CDS_TIMER6.BF.CDS_TF0B_ACCU_LANE_15_0_b0
#define reg_CDS_TF0B_ACCU_LANE_15_0_b1  CDS_TIMER6.BF.CDS_TF0B_ACCU_LANE_15_0_b1
#define reg_CDS_TF0B_FINE_LANE_15_0_b0  CDS_TIMER6.BF.CDS_TF0B_FINE_LANE_15_0_b0
#define reg_CDS_TF0B_FINE_LANE_15_0_b1  CDS_TIMER6.BF.CDS_TF0B_FINE_LANE_15_0_b1
#define reg_CDS_TF0B_ACCU_LANE_15_0  CDS_TIMER6.WT.W0
#define reg_CDS_TF0B_FINE_LANE_15_0  CDS_TIMER6.WT.W1

// 0x033c	CDS_TIMER7		
typedef union {
	struct {
		uint8_t CDS_TF0K_FINE_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0K_FINE_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0K_COARSE_LANE_15_0_b0             : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TF0K_COARSE_LANE_15_0_b1             : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER7_t;
__xdata __at( 0x633c ) volatile CDS_TIMER7_t CDS_TIMER7;
#define reg_CDS_TF0K_FINE_LANE_15_0_b0  CDS_TIMER7.BF.CDS_TF0K_FINE_LANE_15_0_b0
#define reg_CDS_TF0K_FINE_LANE_15_0_b1  CDS_TIMER7.BF.CDS_TF0K_FINE_LANE_15_0_b1
#define reg_CDS_TF0K_COARSE_LANE_15_0_b0  CDS_TIMER7.BF.CDS_TF0K_COARSE_LANE_15_0_b0
#define reg_CDS_TF0K_COARSE_LANE_15_0_b1  CDS_TIMER7.BF.CDS_TF0K_COARSE_LANE_15_0_b1
#define reg_CDS_TF0K_FINE_LANE_15_0  CDS_TIMER7.WT.W0
#define reg_CDS_TF0K_COARSE_LANE_15_0  CDS_TIMER7.WT.W1

// 0x0340	CDS_TIMER8		
typedef union {
	struct {
		uint8_t CDS_TF0D_FINE_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0D_FINE_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0D_COARSE_LANE_15_0_b0             : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TF0D_COARSE_LANE_15_0_b1             : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER8_t;
__xdata __at( 0x6340 ) volatile CDS_TIMER8_t CDS_TIMER8;
#define reg_CDS_TF0D_FINE_LANE_15_0_b0  CDS_TIMER8.BF.CDS_TF0D_FINE_LANE_15_0_b0
#define reg_CDS_TF0D_FINE_LANE_15_0_b1  CDS_TIMER8.BF.CDS_TF0D_FINE_LANE_15_0_b1
#define reg_CDS_TF0D_COARSE_LANE_15_0_b0  CDS_TIMER8.BF.CDS_TF0D_COARSE_LANE_15_0_b0
#define reg_CDS_TF0D_COARSE_LANE_15_0_b1  CDS_TIMER8.BF.CDS_TF0D_COARSE_LANE_15_0_b1
#define reg_CDS_TF0D_FINE_LANE_15_0  CDS_TIMER8.WT.W0
#define reg_CDS_TF0D_COARSE_LANE_15_0  CDS_TIMER8.WT.W1

// 0x0344	CDS_TIMER9		
typedef union {
	struct {
		uint8_t CDS_TMAXEO_ACCU_LANE_15_0_b0             : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TMAXEO_ACCU_LANE_15_0_b1             : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TMAXEO_FINE_LANE_15_0_b0             : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TMAXEO_FINE_LANE_15_0_b1             : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER9_t;
__xdata __at( 0x6344 ) volatile CDS_TIMER9_t CDS_TIMER9;
#define reg_CDS_TMAXEO_ACCU_LANE_15_0_b0  CDS_TIMER9.BF.CDS_TMAXEO_ACCU_LANE_15_0_b0
#define reg_CDS_TMAXEO_ACCU_LANE_15_0_b1  CDS_TIMER9.BF.CDS_TMAXEO_ACCU_LANE_15_0_b1
#define reg_CDS_TMAXEO_FINE_LANE_15_0_b0  CDS_TIMER9.BF.CDS_TMAXEO_FINE_LANE_15_0_b0
#define reg_CDS_TMAXEO_FINE_LANE_15_0_b1  CDS_TIMER9.BF.CDS_TMAXEO_FINE_LANE_15_0_b1
#define reg_CDS_TMAXEO_ACCU_LANE_15_0  CDS_TIMER9.WT.W0
#define reg_CDS_TMAXEO_FINE_LANE_15_0  CDS_TIMER9.WT.W1

// 0x0348	CDS_TIMER10		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TEYECHK_LANE_15_0_b0                 : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TEYECHK_LANE_15_0_b1                 : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER10_t;
__xdata __at( 0x6348 ) volatile CDS_TIMER10_t CDS_TIMER10;
#define reg_CDS_TEYECHK_LANE_15_0_b0  CDS_TIMER10.BF.CDS_TEYECHK_LANE_15_0_b0
#define reg_CDS_TEYECHK_LANE_15_0_b1  CDS_TIMER10.BF.CDS_TEYECHK_LANE_15_0_b1
#define reg_CDS_TEYECHK_LANE_15_0  CDS_TIMER10.WT.W1

// 0x034c	CDS_TIMER11		
typedef union {
	struct {
		uint8_t CDS_TDC_ACCU_LANE_15_0_b0                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDC_ACCU_LANE_15_0_b1                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TDC_FINE_LANE_15_0_b0                : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TDC_FINE_LANE_15_0_b1                : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER11_t;
__xdata __at( 0x634c ) volatile CDS_TIMER11_t CDS_TIMER11;
#define reg_CDS_TDC_ACCU_LANE_15_0_b0  CDS_TIMER11.BF.CDS_TDC_ACCU_LANE_15_0_b0
#define reg_CDS_TDC_ACCU_LANE_15_0_b1  CDS_TIMER11.BF.CDS_TDC_ACCU_LANE_15_0_b1
#define reg_CDS_TDC_FINE_LANE_15_0_b0  CDS_TIMER11.BF.CDS_TDC_FINE_LANE_15_0_b0
#define reg_CDS_TDC_FINE_LANE_15_0_b1  CDS_TIMER11.BF.CDS_TDC_FINE_LANE_15_0_b1
#define reg_CDS_TDC_ACCU_LANE_15_0  CDS_TIMER11.WT.W0
#define reg_CDS_TDC_FINE_LANE_15_0  CDS_TIMER11.WT.W1

// 0x0350	CDS_TIMER12		
typedef union {
	struct {
		uint8_t CDS_TF0X_ACCU_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0X_ACCU_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CDS_TF0X_FINE_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CDS_TF0X_FINE_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER12_t;
__xdata __at( 0x6350 ) volatile CDS_TIMER12_t CDS_TIMER12;
#define reg_CDS_TF0X_ACCU_LANE_15_0_b0  CDS_TIMER12.BF.CDS_TF0X_ACCU_LANE_15_0_b0
#define reg_CDS_TF0X_ACCU_LANE_15_0_b1  CDS_TIMER12.BF.CDS_TF0X_ACCU_LANE_15_0_b1
#define reg_CDS_TF0X_FINE_LANE_15_0_b0  CDS_TIMER12.BF.CDS_TF0X_FINE_LANE_15_0_b0
#define reg_CDS_TF0X_FINE_LANE_15_0_b1  CDS_TIMER12.BF.CDS_TF0X_FINE_LANE_15_0_b1
#define reg_CDS_TF0X_ACCU_LANE_15_0  CDS_TIMER12.WT.W0
#define reg_CDS_TF0X_FINE_LANE_15_0  CDS_TIMER12.WT.W1

#endif
