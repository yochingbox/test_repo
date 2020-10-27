#ifndef PHY_REG_C_CDS_LANE_H
#define PHY_REG_C_CDS_LANE_H



// 0x0100	CDS_READ_REG_ODD0		CDS TAP 2'S COMPLIMENT READ BACK REG ODD0
typedef union {
	struct {
		uint8_t CDS_DC_S_MID_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_MID_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_S_TOP_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_D_TOP_O_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD0_t;
__xdata __at( 0x6100 ) volatile CDS_READ_REG_ODD0_t CDS_READ_REG_ODD0;
#define reg_CDS_DC_S_MID_O_LANE_7_0  CDS_READ_REG_ODD0.BF.CDS_DC_S_MID_O_LANE_7_0
#define reg_CDS_DC_D_MID_O_LANE_7_0  CDS_READ_REG_ODD0.BF.CDS_DC_D_MID_O_LANE_7_0
#define reg_CDS_DC_S_TOP_O_LANE_7_0  CDS_READ_REG_ODD0.BF.CDS_DC_S_TOP_O_LANE_7_0
#define reg_CDS_DC_D_TOP_O_LANE_7_0  CDS_READ_REG_ODD0.BF.CDS_DC_D_TOP_O_LANE_7_0

// 0x0104	CDS_READ_REG_ODD1		CDS TAP 2'S COMPLIMENT READ BACK REG ODD1
typedef union {
	struct {
		uint8_t CDS_F0_S_TOP_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_D_TOP_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_S_BOT_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_D_BOT_O_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD1_t;
__xdata __at( 0x6104 ) volatile CDS_READ_REG_ODD1_t CDS_READ_REG_ODD1;
#define reg_CDS_F0_S_TOP_O_LANE_7_0  CDS_READ_REG_ODD1.BF.CDS_F0_S_TOP_O_LANE_7_0
#define reg_CDS_F0_D_TOP_O_LANE_7_0  CDS_READ_REG_ODD1.BF.CDS_F0_D_TOP_O_LANE_7_0
#define reg_CDS_DC_S_BOT_O_LANE_7_0  CDS_READ_REG_ODD1.BF.CDS_DC_S_BOT_O_LANE_7_0
#define reg_CDS_DC_D_BOT_O_LANE_7_0  CDS_READ_REG_ODD1.BF.CDS_DC_D_BOT_O_LANE_7_0

// 0x0108	CDS_READ_REG_ODD2		CDS TAP 2'S COMPLIMENT READ BACK REG ODD2
typedef union {
	struct {
		uint8_t CDS_F0_S_BOT_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_D_BOT_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_MID_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_D_MID_O_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD2_t;
__xdata __at( 0x6108 ) volatile CDS_READ_REG_ODD2_t CDS_READ_REG_ODD2;
#define reg_CDS_F0_S_BOT_O_LANE_7_0  CDS_READ_REG_ODD2.BF.CDS_F0_S_BOT_O_LANE_7_0
#define reg_CDS_F0_D_BOT_O_LANE_7_0  CDS_READ_REG_ODD2.BF.CDS_F0_D_BOT_O_LANE_7_0
#define reg_CDS_F0_S_MID_O_LANE_7_0  CDS_READ_REG_ODD2.BF.CDS_F0_S_MID_O_LANE_7_0
#define reg_CDS_F0_D_MID_O_LANE_7_0  CDS_READ_REG_ODD2.BF.CDS_F0_D_MID_O_LANE_7_0

// 0x010c	CDS_READ_REG_ODD3		CDS TAP 2'S COMPLIMENT READ BACK REG ODD3
typedef union {
	struct {
		uint8_t CDS_F1_S_MID_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F1_D_MID_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F1_S_TOP_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F1_D_TOP_O_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD3_t;
__xdata __at( 0x610c ) volatile CDS_READ_REG_ODD3_t CDS_READ_REG_ODD3;
#define reg_CDS_F1_S_MID_O_LANE_7_0  CDS_READ_REG_ODD3.BF.CDS_F1_S_MID_O_LANE_7_0
#define reg_CDS_F1_D_MID_O_LANE_7_0  CDS_READ_REG_ODD3.BF.CDS_F1_D_MID_O_LANE_7_0
#define reg_CDS_F1_S_TOP_O_LANE_7_0  CDS_READ_REG_ODD3.BF.CDS_F1_S_TOP_O_LANE_7_0
#define reg_CDS_F1_D_TOP_O_LANE_7_0  CDS_READ_REG_ODD3.BF.CDS_F1_D_TOP_O_LANE_7_0

// 0x0110	CDS_READ_REG_ODD4		CDS TAP 2'S COMPLIMENT READ BACK REG ODD4
typedef union {
	struct {
		uint8_t CDS_F2_S_TOP_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_TOP_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F1_S_BOT_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F1_D_BOT_O_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD4_t;
__xdata __at( 0x6110 ) volatile CDS_READ_REG_ODD4_t CDS_READ_REG_ODD4;
#define reg_CDS_F2_S_TOP_O_LANE_7_0  CDS_READ_REG_ODD4.BF.CDS_F2_S_TOP_O_LANE_7_0
#define reg_CDS_F2_D_TOP_O_LANE_7_0  CDS_READ_REG_ODD4.BF.CDS_F2_D_TOP_O_LANE_7_0
#define reg_CDS_F1_S_BOT_O_LANE_7_0  CDS_READ_REG_ODD4.BF.CDS_F1_S_BOT_O_LANE_7_0
#define reg_CDS_F1_D_BOT_O_LANE_7_0  CDS_READ_REG_ODD4.BF.CDS_F1_D_BOT_O_LANE_7_0

// 0x0114	CDS_READ_REG_ODD5		CDS TAP 2'S COMPLIMENT READ BACK REG ODD5
typedef union {
	struct {
		uint8_t CDS_F2_S_BOT_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_BOT_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_S_MID_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_D_MID_O_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD5_t;
__xdata __at( 0x6114 ) volatile CDS_READ_REG_ODD5_t CDS_READ_REG_ODD5;
#define reg_CDS_F2_S_BOT_O_LANE_7_0  CDS_READ_REG_ODD5.BF.CDS_F2_S_BOT_O_LANE_7_0
#define reg_CDS_F2_D_BOT_O_LANE_7_0  CDS_READ_REG_ODD5.BF.CDS_F2_D_BOT_O_LANE_7_0
#define reg_CDS_F2_S_MID_O_LANE_7_0  CDS_READ_REG_ODD5.BF.CDS_F2_S_MID_O_LANE_7_0
#define reg_CDS_F2_D_MID_O_LANE_7_0  CDS_READ_REG_ODD5.BF.CDS_F2_D_MID_O_LANE_7_0

// 0x0118	CDS_READ_REG_ODD6		CDS TAP 2'S COMPLIMENT READ BACK REG ODD6
typedef union {
	struct {
		uint8_t CDS_F4_TOP_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_BOT_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_MID_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_TOP_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD6_t;
__xdata __at( 0x6118 ) volatile CDS_READ_REG_ODD6_t CDS_READ_REG_ODD6;
#define reg_CDS_F4_TOP_O_LANE_7_0  CDS_READ_REG_ODD6.BF.CDS_F4_TOP_O_LANE_7_0
#define reg_CDS_F3_BOT_O_LANE_7_0  CDS_READ_REG_ODD6.BF.CDS_F3_BOT_O_LANE_7_0
#define reg_CDS_F3_MID_O_LANE_7_0  CDS_READ_REG_ODD6.BF.CDS_F3_MID_O_LANE_7_0
#define reg_CDS_F3_TOP_O_LANE_7_0  CDS_READ_REG_ODD6.BF.CDS_F3_TOP_O_LANE_7_0

// 0x011c	CDS_READ_REG_ODD7		CDS TAP 2'S COMPLIMENT READ BACK REG ODD7
typedef union {
	struct {
		uint8_t CDS_F5_LSB_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F5_MSB_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F4_BOT_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F4_MID_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD7_t;
__xdata __at( 0x611c ) volatile CDS_READ_REG_ODD7_t CDS_READ_REG_ODD7;
#define reg_CDS_F5_LSB_O_LANE_7_0  CDS_READ_REG_ODD7.BF.CDS_F5_LSB_O_LANE_7_0
#define reg_CDS_F5_MSB_O_LANE_7_0  CDS_READ_REG_ODD7.BF.CDS_F5_MSB_O_LANE_7_0
#define reg_CDS_F4_BOT_O_LANE_7_0  CDS_READ_REG_ODD7.BF.CDS_F4_BOT_O_LANE_7_0
#define reg_CDS_F4_MID_O_LANE_7_0  CDS_READ_REG_ODD7.BF.CDS_F4_MID_O_LANE_7_0

// 0x0120	CDS_READ_REG_ODD8		CDS TAP 2'S COMPLIMENT READ BACK REG ODD8
typedef union {
	struct {
		uint8_t CDS_F7_LSB_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F7_MSB_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F6_LSB_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_MSB_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD8_t;
__xdata __at( 0x6120 ) volatile CDS_READ_REG_ODD8_t CDS_READ_REG_ODD8;
#define reg_CDS_F7_LSB_O_LANE_7_0  CDS_READ_REG_ODD8.BF.CDS_F7_LSB_O_LANE_7_0
#define reg_CDS_F7_MSB_O_LANE_7_0  CDS_READ_REG_ODD8.BF.CDS_F7_MSB_O_LANE_7_0
#define reg_CDS_F6_LSB_O_LANE_7_0  CDS_READ_REG_ODD8.BF.CDS_F6_LSB_O_LANE_7_0
#define reg_CDS_F6_MSB_O_LANE_7_0  CDS_READ_REG_ODD8.BF.CDS_F6_MSB_O_LANE_7_0

// 0x0124	CDS_READ_REG_ODD9		CDS TAP 2'S COMPLIMENT READ BACK REG ODD9
typedef union {
	struct {
		uint8_t CDS_F9_LSB_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F9_MSB_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F8_LSB_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F8_MSB_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD9_t;
__xdata __at( 0x6124 ) volatile CDS_READ_REG_ODD9_t CDS_READ_REG_ODD9;
#define reg_CDS_F9_LSB_O_LANE_7_0  CDS_READ_REG_ODD9.BF.CDS_F9_LSB_O_LANE_7_0
#define reg_CDS_F9_MSB_O_LANE_7_0  CDS_READ_REG_ODD9.BF.CDS_F9_MSB_O_LANE_7_0
#define reg_CDS_F8_LSB_O_LANE_7_0  CDS_READ_REG_ODD9.BF.CDS_F8_LSB_O_LANE_7_0
#define reg_CDS_F8_MSB_O_LANE_7_0  CDS_READ_REG_ODD9.BF.CDS_F8_MSB_O_LANE_7_0

// 0x0128	CDS_READ_REG_ODD10		CDS TAP 2'S COMPLIMENT READ BACK REG ODD10
typedef union {
	struct {
		uint8_t CDS_F12_O_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F11_O_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F10_LSB_O_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F10_MSB_O_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD10_t;
__xdata __at( 0x6128 ) volatile CDS_READ_REG_ODD10_t CDS_READ_REG_ODD10;
#define reg_CDS_F12_O_LANE_7_0  CDS_READ_REG_ODD10.BF.CDS_F12_O_LANE_7_0
#define reg_CDS_F11_O_LANE_7_0  CDS_READ_REG_ODD10.BF.CDS_F11_O_LANE_7_0
#define reg_CDS_F10_LSB_O_LANE_7_0  CDS_READ_REG_ODD10.BF.CDS_F10_LSB_O_LANE_7_0
#define reg_CDS_F10_MSB_O_LANE_7_0  CDS_READ_REG_ODD10.BF.CDS_F10_MSB_O_LANE_7_0

// 0x012c	CDS_READ_REG_ODD11		CDS TAP 2'S COMPLIMENT READ BACK REG ODD11
typedef union {
	struct {
		uint8_t CDS_FF0_O_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F15_O_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F14_O_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F13_O_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD11_t;
__xdata __at( 0x612c ) volatile CDS_READ_REG_ODD11_t CDS_READ_REG_ODD11;
#define reg_CDS_FF0_O_LANE_7_0  CDS_READ_REG_ODD11.BF.CDS_FF0_O_LANE_7_0
#define reg_CDS_F15_O_LANE_7_0  CDS_READ_REG_ODD11.BF.CDS_F15_O_LANE_7_0
#define reg_CDS_F14_O_LANE_7_0  CDS_READ_REG_ODD11.BF.CDS_F14_O_LANE_7_0
#define reg_CDS_F13_O_LANE_7_0  CDS_READ_REG_ODD11.BF.CDS_F13_O_LANE_7_0

// 0x0130	CDS_READ_REG_ODD12		CDS TAP 2'S COMPLIMENT READ BACK REG ODD12
typedef union {
	struct {
		uint8_t CDS_FF4_O_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_FF3_O_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_FF2_O_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_FF1_O_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD12_t;
__xdata __at( 0x6130 ) volatile CDS_READ_REG_ODD12_t CDS_READ_REG_ODD12;
#define reg_CDS_FF4_O_LANE_7_0  CDS_READ_REG_ODD12.BF.CDS_FF4_O_LANE_7_0
#define reg_CDS_FF3_O_LANE_7_0  CDS_READ_REG_ODD12.BF.CDS_FF3_O_LANE_7_0
#define reg_CDS_FF2_O_LANE_7_0  CDS_READ_REG_ODD12.BF.CDS_FF2_O_LANE_7_0
#define reg_CDS_FF1_O_LANE_7_0  CDS_READ_REG_ODD12.BF.CDS_FF1_O_LANE_7_0

// 0x0134	CDS_READ_REG_ODD13		CDS TAP 2'S COMPLIMENT READ BACK REG ODD13
typedef union {
	struct {
		uint8_t CDS_VREF_BOT_O_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_VREF_MID_O_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_VREF_TOP_O_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_FF5_O_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_ODD13_t;
__xdata __at( 0x6134 ) volatile CDS_READ_REG_ODD13_t CDS_READ_REG_ODD13;
#define reg_CDS_VREF_BOT_O_LANE_7_0  CDS_READ_REG_ODD13.BF.CDS_VREF_BOT_O_LANE_7_0
#define reg_CDS_VREF_MID_O_LANE_7_0  CDS_READ_REG_ODD13.BF.CDS_VREF_MID_O_LANE_7_0
#define reg_CDS_VREF_TOP_O_LANE_7_0  CDS_READ_REG_ODD13.BF.CDS_VREF_TOP_O_LANE_7_0
#define reg_CDS_FF5_O_LANE_7_0  CDS_READ_REG_ODD13.BF.CDS_FF5_O_LANE_7_0

// 0x0138	CDS_READ_REG_ODD14		CDS TAP 2'S COMPLIMENT READ BACK REG ODD14
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t CDS_DC_E_O_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F1P5_O_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_READ_REG_ODD14_t;
__xdata __at( 0x6138 ) volatile CDS_READ_REG_ODD14_t CDS_READ_REG_ODD14;
#define reg_CDS_DC_E_O_LANE_7_0  CDS_READ_REG_ODD14.BF.CDS_DC_E_O_LANE_7_0
#define reg_CDS_F1P5_O_LANE_7_0  CDS_READ_REG_ODD14.BF.CDS_F1P5_O_LANE_7_0

// 0x013c	CDS_READ_REG_EVEN0		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN0
typedef union {
	struct {
		uint8_t CDS_DC_S_MID_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_MID_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_S_TOP_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_D_TOP_E_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN0_t;
__xdata __at( 0x613c ) volatile CDS_READ_REG_EVEN0_t CDS_READ_REG_EVEN0;
#define reg_CDS_DC_S_MID_E_LANE_7_0  CDS_READ_REG_EVEN0.BF.CDS_DC_S_MID_E_LANE_7_0
#define reg_CDS_DC_D_MID_E_LANE_7_0  CDS_READ_REG_EVEN0.BF.CDS_DC_D_MID_E_LANE_7_0
#define reg_CDS_DC_S_TOP_E_LANE_7_0  CDS_READ_REG_EVEN0.BF.CDS_DC_S_TOP_E_LANE_7_0
#define reg_CDS_DC_D_TOP_E_LANE_7_0  CDS_READ_REG_EVEN0.BF.CDS_DC_D_TOP_E_LANE_7_0

// 0x0140	CDS_READ_REG_EVEN1		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN1
typedef union {
	struct {
		uint8_t CDS_F0_S_TOP_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_D_TOP_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_S_BOT_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_D_BOT_E_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN1_t;
__xdata __at( 0x6140 ) volatile CDS_READ_REG_EVEN1_t CDS_READ_REG_EVEN1;
#define reg_CDS_F0_S_TOP_E_LANE_7_0  CDS_READ_REG_EVEN1.BF.CDS_F0_S_TOP_E_LANE_7_0
#define reg_CDS_F0_D_TOP_E_LANE_7_0  CDS_READ_REG_EVEN1.BF.CDS_F0_D_TOP_E_LANE_7_0
#define reg_CDS_DC_S_BOT_E_LANE_7_0  CDS_READ_REG_EVEN1.BF.CDS_DC_S_BOT_E_LANE_7_0
#define reg_CDS_DC_D_BOT_E_LANE_7_0  CDS_READ_REG_EVEN1.BF.CDS_DC_D_BOT_E_LANE_7_0

// 0x0144	CDS_READ_REG_EVEN2		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN2
typedef union {
	struct {
		uint8_t CDS_F0_S_BOT_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_D_BOT_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_MID_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_D_MID_E_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN2_t;
__xdata __at( 0x6144 ) volatile CDS_READ_REG_EVEN2_t CDS_READ_REG_EVEN2;
#define reg_CDS_F0_S_BOT_E_LANE_7_0  CDS_READ_REG_EVEN2.BF.CDS_F0_S_BOT_E_LANE_7_0
#define reg_CDS_F0_D_BOT_E_LANE_7_0  CDS_READ_REG_EVEN2.BF.CDS_F0_D_BOT_E_LANE_7_0
#define reg_CDS_F0_S_MID_E_LANE_7_0  CDS_READ_REG_EVEN2.BF.CDS_F0_S_MID_E_LANE_7_0
#define reg_CDS_F0_D_MID_E_LANE_7_0  CDS_READ_REG_EVEN2.BF.CDS_F0_D_MID_E_LANE_7_0

// 0x0148	CDS_READ_REG_EVEN3		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN3
typedef union {
	struct {
		uint8_t CDS_F1_S_MID_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F1_D_MID_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F1_S_TOP_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F1_D_TOP_E_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN3_t;
__xdata __at( 0x6148 ) volatile CDS_READ_REG_EVEN3_t CDS_READ_REG_EVEN3;
#define reg_CDS_F1_S_MID_E_LANE_7_0  CDS_READ_REG_EVEN3.BF.CDS_F1_S_MID_E_LANE_7_0
#define reg_CDS_F1_D_MID_E_LANE_7_0  CDS_READ_REG_EVEN3.BF.CDS_F1_D_MID_E_LANE_7_0
#define reg_CDS_F1_S_TOP_E_LANE_7_0  CDS_READ_REG_EVEN3.BF.CDS_F1_S_TOP_E_LANE_7_0
#define reg_CDS_F1_D_TOP_E_LANE_7_0  CDS_READ_REG_EVEN3.BF.CDS_F1_D_TOP_E_LANE_7_0

// 0x014c	CDS_READ_REG_EVEN4		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN4
typedef union {
	struct {
		uint8_t CDS_F2_S_TOP_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_TOP_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F1_S_BOT_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F1_D_BOT_E_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN4_t;
__xdata __at( 0x614c ) volatile CDS_READ_REG_EVEN4_t CDS_READ_REG_EVEN4;
#define reg_CDS_F2_S_TOP_E_LANE_7_0  CDS_READ_REG_EVEN4.BF.CDS_F2_S_TOP_E_LANE_7_0
#define reg_CDS_F2_D_TOP_E_LANE_7_0  CDS_READ_REG_EVEN4.BF.CDS_F2_D_TOP_E_LANE_7_0
#define reg_CDS_F1_S_BOT_E_LANE_7_0  CDS_READ_REG_EVEN4.BF.CDS_F1_S_BOT_E_LANE_7_0
#define reg_CDS_F1_D_BOT_E_LANE_7_0  CDS_READ_REG_EVEN4.BF.CDS_F1_D_BOT_E_LANE_7_0

// 0x0150	CDS_READ_REG_EVEN5		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN5
typedef union {
	struct {
		uint8_t CDS_F2_S_BOT_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_BOT_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_S_MID_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_D_MID_E_LANE_7_0                  : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN5_t;
__xdata __at( 0x6150 ) volatile CDS_READ_REG_EVEN5_t CDS_READ_REG_EVEN5;
#define reg_CDS_F2_S_BOT_E_LANE_7_0  CDS_READ_REG_EVEN5.BF.CDS_F2_S_BOT_E_LANE_7_0
#define reg_CDS_F2_D_BOT_E_LANE_7_0  CDS_READ_REG_EVEN5.BF.CDS_F2_D_BOT_E_LANE_7_0
#define reg_CDS_F2_S_MID_E_LANE_7_0  CDS_READ_REG_EVEN5.BF.CDS_F2_S_MID_E_LANE_7_0
#define reg_CDS_F2_D_MID_E_LANE_7_0  CDS_READ_REG_EVEN5.BF.CDS_F2_D_MID_E_LANE_7_0

// 0x0154	CDS_READ_REG_EVEN6		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN6
typedef union {
	struct {
		uint8_t CDS_F4_TOP_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_BOT_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_MID_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_TOP_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN6_t;
__xdata __at( 0x6154 ) volatile CDS_READ_REG_EVEN6_t CDS_READ_REG_EVEN6;
#define reg_CDS_F4_TOP_E_LANE_7_0  CDS_READ_REG_EVEN6.BF.CDS_F4_TOP_E_LANE_7_0
#define reg_CDS_F3_BOT_E_LANE_7_0  CDS_READ_REG_EVEN6.BF.CDS_F3_BOT_E_LANE_7_0
#define reg_CDS_F3_MID_E_LANE_7_0  CDS_READ_REG_EVEN6.BF.CDS_F3_MID_E_LANE_7_0
#define reg_CDS_F3_TOP_E_LANE_7_0  CDS_READ_REG_EVEN6.BF.CDS_F3_TOP_E_LANE_7_0

// 0x0158	CDS_READ_REG_EVEN7		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN7
typedef union {
	struct {
		uint8_t CDS_F5_LSB_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F5_MSB_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F4_BOT_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F4_MID_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN7_t;
__xdata __at( 0x6158 ) volatile CDS_READ_REG_EVEN7_t CDS_READ_REG_EVEN7;
#define reg_CDS_F5_LSB_E_LANE_7_0  CDS_READ_REG_EVEN7.BF.CDS_F5_LSB_E_LANE_7_0
#define reg_CDS_F5_MSB_E_LANE_7_0  CDS_READ_REG_EVEN7.BF.CDS_F5_MSB_E_LANE_7_0
#define reg_CDS_F4_BOT_E_LANE_7_0  CDS_READ_REG_EVEN7.BF.CDS_F4_BOT_E_LANE_7_0
#define reg_CDS_F4_MID_E_LANE_7_0  CDS_READ_REG_EVEN7.BF.CDS_F4_MID_E_LANE_7_0

// 0x015c	CDS_READ_REG_EVEN8		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN8
typedef union {
	struct {
		uint8_t CDS_F7_LSB_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F7_MSB_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F6_LSB_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_MSB_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN8_t;
__xdata __at( 0x615c ) volatile CDS_READ_REG_EVEN8_t CDS_READ_REG_EVEN8;
#define reg_CDS_F7_LSB_E_LANE_7_0  CDS_READ_REG_EVEN8.BF.CDS_F7_LSB_E_LANE_7_0
#define reg_CDS_F7_MSB_E_LANE_7_0  CDS_READ_REG_EVEN8.BF.CDS_F7_MSB_E_LANE_7_0
#define reg_CDS_F6_LSB_E_LANE_7_0  CDS_READ_REG_EVEN8.BF.CDS_F6_LSB_E_LANE_7_0
#define reg_CDS_F6_MSB_E_LANE_7_0  CDS_READ_REG_EVEN8.BF.CDS_F6_MSB_E_LANE_7_0

// 0x0160	CDS_READ_REG_EVEN9		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN9
typedef union {
	struct {
		uint8_t CDS_F9_LSB_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F9_MSB_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F8_LSB_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F8_MSB_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN9_t;
__xdata __at( 0x6160 ) volatile CDS_READ_REG_EVEN9_t CDS_READ_REG_EVEN9;
#define reg_CDS_F9_LSB_E_LANE_7_0  CDS_READ_REG_EVEN9.BF.CDS_F9_LSB_E_LANE_7_0
#define reg_CDS_F9_MSB_E_LANE_7_0  CDS_READ_REG_EVEN9.BF.CDS_F9_MSB_E_LANE_7_0
#define reg_CDS_F8_LSB_E_LANE_7_0  CDS_READ_REG_EVEN9.BF.CDS_F8_LSB_E_LANE_7_0
#define reg_CDS_F8_MSB_E_LANE_7_0  CDS_READ_REG_EVEN9.BF.CDS_F8_MSB_E_LANE_7_0

// 0x0164	CDS_READ_REG_EVEN10		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN10
typedef union {
	struct {
		uint8_t CDS_F12_E_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F11_E_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F10_LSB_E_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F10_MSB_E_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN10_t;
__xdata __at( 0x6164 ) volatile CDS_READ_REG_EVEN10_t CDS_READ_REG_EVEN10;
#define reg_CDS_F12_E_LANE_7_0  CDS_READ_REG_EVEN10.BF.CDS_F12_E_LANE_7_0
#define reg_CDS_F11_E_LANE_7_0  CDS_READ_REG_EVEN10.BF.CDS_F11_E_LANE_7_0
#define reg_CDS_F10_LSB_E_LANE_7_0  CDS_READ_REG_EVEN10.BF.CDS_F10_LSB_E_LANE_7_0
#define reg_CDS_F10_MSB_E_LANE_7_0  CDS_READ_REG_EVEN10.BF.CDS_F10_MSB_E_LANE_7_0

// 0x0168	CDS_READ_REG_EVEN11		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN11
typedef union {
	struct {
		uint8_t CDS_FF0_E_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F15_E_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F14_E_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F13_E_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN11_t;
__xdata __at( 0x6168 ) volatile CDS_READ_REG_EVEN11_t CDS_READ_REG_EVEN11;
#define reg_CDS_FF0_E_LANE_7_0  CDS_READ_REG_EVEN11.BF.CDS_FF0_E_LANE_7_0
#define reg_CDS_F15_E_LANE_7_0  CDS_READ_REG_EVEN11.BF.CDS_F15_E_LANE_7_0
#define reg_CDS_F14_E_LANE_7_0  CDS_READ_REG_EVEN11.BF.CDS_F14_E_LANE_7_0
#define reg_CDS_F13_E_LANE_7_0  CDS_READ_REG_EVEN11.BF.CDS_F13_E_LANE_7_0

// 0x016c	CDS_READ_REG_EVEN12		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN12
typedef union {
	struct {
		uint8_t CDS_FF4_E_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_FF3_E_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_FF2_E_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_FF1_E_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN12_t;
__xdata __at( 0x616c ) volatile CDS_READ_REG_EVEN12_t CDS_READ_REG_EVEN12;
#define reg_CDS_FF4_E_LANE_7_0  CDS_READ_REG_EVEN12.BF.CDS_FF4_E_LANE_7_0
#define reg_CDS_FF3_E_LANE_7_0  CDS_READ_REG_EVEN12.BF.CDS_FF3_E_LANE_7_0
#define reg_CDS_FF2_E_LANE_7_0  CDS_READ_REG_EVEN12.BF.CDS_FF2_E_LANE_7_0
#define reg_CDS_FF1_E_LANE_7_0  CDS_READ_REG_EVEN12.BF.CDS_FF1_E_LANE_7_0

// 0x0170	CDS_READ_REG_EVEN13		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN13
typedef union {
	struct {
		uint8_t CDS_VREF_BOT_E_LANE_7_0                  : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_VREF_MID_E_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_VREF_TOP_E_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_FF5_E_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_REG_EVEN13_t;
__xdata __at( 0x6170 ) volatile CDS_READ_REG_EVEN13_t CDS_READ_REG_EVEN13;
#define reg_CDS_VREF_BOT_E_LANE_7_0  CDS_READ_REG_EVEN13.BF.CDS_VREF_BOT_E_LANE_7_0
#define reg_CDS_VREF_MID_E_LANE_7_0  CDS_READ_REG_EVEN13.BF.CDS_VREF_MID_E_LANE_7_0
#define reg_CDS_VREF_TOP_E_LANE_7_0  CDS_READ_REG_EVEN13.BF.CDS_VREF_TOP_E_LANE_7_0
#define reg_CDS_FF5_E_LANE_7_0  CDS_READ_REG_EVEN13.BF.CDS_FF5_E_LANE_7_0

// 0x0174	CDS_READ_REG_EVEN14		CDS TAP 2'S COMPLIMENT READ BACK REG EVEN14
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t CDS_DC_E_E_LANE_7_0                      : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F1P5_E_LANE_7_0                      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_READ_REG_EVEN14_t;
__xdata __at( 0x6174 ) volatile CDS_READ_REG_EVEN14_t CDS_READ_REG_EVEN14;
#define reg_CDS_DC_E_E_LANE_7_0  CDS_READ_REG_EVEN14.BF.CDS_DC_E_E_LANE_7_0
#define reg_CDS_F1P5_E_LANE_7_0  CDS_READ_REG_EVEN14.BF.CDS_F1P5_E_LANE_7_0

// 0x0178	CDS_READ_F0A_REG0		
typedef union {
	struct {
		uint8_t CDS_F0A_S_TOP_E_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_D_BOT_E_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_D_MID_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_D_TOP_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG0_t;
__xdata __at( 0x6178 ) volatile CDS_READ_F0A_REG0_t CDS_READ_F0A_REG0;
#define reg_CDS_F0A_S_TOP_E_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_S_TOP_E_LANE_7_0
#define reg_CDS_F0A_D_BOT_E_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_D_BOT_E_LANE_7_0
#define reg_CDS_F0A_D_MID_E_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_D_MID_E_LANE_7_0
#define reg_CDS_F0A_D_TOP_E_LANE_7_0  CDS_READ_F0A_REG0.BF.CDS_F0A_D_TOP_E_LANE_7_0

// 0x017c	CDS_READ_F0A_REG1		
typedef union {
	struct {
		uint8_t CDS_F0A_D_MID_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_D_TOP_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_S_BOT_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_MID_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG1_t;
__xdata __at( 0x617c ) volatile CDS_READ_F0A_REG1_t CDS_READ_F0A_REG1;
#define reg_CDS_F0A_D_MID_O_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_D_MID_O_LANE_7_0
#define reg_CDS_F0A_D_TOP_O_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_D_TOP_O_LANE_7_0
#define reg_CDS_F0A_S_BOT_E_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_S_BOT_E_LANE_7_0
#define reg_CDS_F0A_S_MID_E_LANE_7_0  CDS_READ_F0A_REG1.BF.CDS_F0A_S_MID_E_LANE_7_0

// 0x0180	CDS_READ_F0A_REG2		
typedef union {
	struct {
		uint8_t CDS_F0A_S_BOT_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_S_MID_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_S_TOP_O_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_D_BOT_O_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0A_REG2_t;
__xdata __at( 0x6180 ) volatile CDS_READ_F0A_REG2_t CDS_READ_F0A_REG2;
#define reg_CDS_F0A_S_BOT_O_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_S_BOT_O_LANE_7_0
#define reg_CDS_F0A_S_MID_O_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_S_MID_O_LANE_7_0
#define reg_CDS_F0A_S_TOP_O_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_S_TOP_O_LANE_7_0
#define reg_CDS_F0A_D_BOT_O_LANE_7_0  CDS_READ_F0A_REG2.BF.CDS_F0A_D_BOT_O_LANE_7_0

// 0x0184	CDS_READ_F0B_REG0		
typedef union {
	struct {
		uint8_t CDS_F0B_S_TOP_E_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_D_BOT_E_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_D_MID_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_D_TOP_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG0_t;
__xdata __at( 0x6184 ) volatile CDS_READ_F0B_REG0_t CDS_READ_F0B_REG0;
#define reg_CDS_F0B_S_TOP_E_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_S_TOP_E_LANE_7_0
#define reg_CDS_F0B_D_BOT_E_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_D_BOT_E_LANE_7_0
#define reg_CDS_F0B_D_MID_E_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_D_MID_E_LANE_7_0
#define reg_CDS_F0B_D_TOP_E_LANE_7_0  CDS_READ_F0B_REG0.BF.CDS_F0B_D_TOP_E_LANE_7_0

// 0x0188	CDS_READ_F0B_REG1		
typedef union {
	struct {
		uint8_t CDS_F0B_D_MID_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_D_TOP_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_S_BOT_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_MID_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG1_t;
__xdata __at( 0x6188 ) volatile CDS_READ_F0B_REG1_t CDS_READ_F0B_REG1;
#define reg_CDS_F0B_D_MID_O_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_D_MID_O_LANE_7_0
#define reg_CDS_F0B_D_TOP_O_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_D_TOP_O_LANE_7_0
#define reg_CDS_F0B_S_BOT_E_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_S_BOT_E_LANE_7_0
#define reg_CDS_F0B_S_MID_E_LANE_7_0  CDS_READ_F0B_REG1.BF.CDS_F0B_S_MID_E_LANE_7_0

// 0x018c	CDS_READ_F0B_REG2		
typedef union {
	struct {
		uint8_t CDS_F0B_S_BOT_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_S_MID_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_S_TOP_O_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_D_BOT_O_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0B_REG2_t;
__xdata __at( 0x618c ) volatile CDS_READ_F0B_REG2_t CDS_READ_F0B_REG2;
#define reg_CDS_F0B_S_BOT_O_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_S_BOT_O_LANE_7_0
#define reg_CDS_F0B_S_MID_O_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_S_MID_O_LANE_7_0
#define reg_CDS_F0B_S_TOP_O_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_S_TOP_O_LANE_7_0
#define reg_CDS_F0B_D_BOT_O_LANE_7_0  CDS_READ_F0B_REG2.BF.CDS_F0B_D_BOT_O_LANE_7_0

// 0x0190	CDS_READ_F0K_REG0		
typedef union {
	struct {
		uint8_t CDS_F0K_S_TOP_E_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_D_BOT_E_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_D_MID_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_D_TOP_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG0_t;
__xdata __at( 0x6190 ) volatile CDS_READ_F0K_REG0_t CDS_READ_F0K_REG0;
#define reg_CDS_F0K_S_TOP_E_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_S_TOP_E_LANE_7_0
#define reg_CDS_F0K_D_BOT_E_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_D_BOT_E_LANE_7_0
#define reg_CDS_F0K_D_MID_E_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_D_MID_E_LANE_7_0
#define reg_CDS_F0K_D_TOP_E_LANE_7_0  CDS_READ_F0K_REG0.BF.CDS_F0K_D_TOP_E_LANE_7_0

// 0x0194	CDS_READ_F0K_REG1		
typedef union {
	struct {
		uint8_t CDS_F0K_D_MID_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_D_TOP_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_S_BOT_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_S_MID_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG1_t;
__xdata __at( 0x6194 ) volatile CDS_READ_F0K_REG1_t CDS_READ_F0K_REG1;
#define reg_CDS_F0K_D_MID_O_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_D_MID_O_LANE_7_0
#define reg_CDS_F0K_D_TOP_O_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_D_TOP_O_LANE_7_0
#define reg_CDS_F0K_S_BOT_E_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_S_BOT_E_LANE_7_0
#define reg_CDS_F0K_S_MID_E_LANE_7_0  CDS_READ_F0K_REG1.BF.CDS_F0K_S_MID_E_LANE_7_0

// 0x0198	CDS_READ_F0K_REG2		
typedef union {
	struct {
		uint8_t CDS_F0K_S_BOT_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0K_S_MID_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0K_S_TOP_O_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0K_D_BOT_O_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0K_REG2_t;
__xdata __at( 0x6198 ) volatile CDS_READ_F0K_REG2_t CDS_READ_F0K_REG2;
#define reg_CDS_F0K_S_BOT_O_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_S_BOT_O_LANE_7_0
#define reg_CDS_F0K_S_MID_O_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_S_MID_O_LANE_7_0
#define reg_CDS_F0K_S_TOP_O_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_S_TOP_O_LANE_7_0
#define reg_CDS_F0K_D_BOT_O_LANE_7_0  CDS_READ_F0K_REG2.BF.CDS_F0K_D_BOT_O_LANE_7_0

// 0x019c	CDS_READ_F0D_REG0		
typedef union {
	struct {
		uint8_t CDS_F0D_S_TOP_E_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_D_BOT_E_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_D_MID_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_D_TOP_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG0_t;
__xdata __at( 0x619c ) volatile CDS_READ_F0D_REG0_t CDS_READ_F0D_REG0;
#define reg_CDS_F0D_S_TOP_E_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_S_TOP_E_LANE_7_0
#define reg_CDS_F0D_D_BOT_E_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_D_BOT_E_LANE_7_0
#define reg_CDS_F0D_D_MID_E_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_D_MID_E_LANE_7_0
#define reg_CDS_F0D_D_TOP_E_LANE_7_0  CDS_READ_F0D_REG0.BF.CDS_F0D_D_TOP_E_LANE_7_0

// 0x01a0	CDS_READ_F0D_REG1		
typedef union {
	struct {
		uint8_t CDS_F0D_D_MID_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_D_TOP_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_S_BOT_E_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_MID_E_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG1_t;
__xdata __at( 0x61a0 ) volatile CDS_READ_F0D_REG1_t CDS_READ_F0D_REG1;
#define reg_CDS_F0D_D_MID_O_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_D_MID_O_LANE_7_0
#define reg_CDS_F0D_D_TOP_O_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_D_TOP_O_LANE_7_0
#define reg_CDS_F0D_S_BOT_E_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_S_BOT_E_LANE_7_0
#define reg_CDS_F0D_S_MID_E_LANE_7_0  CDS_READ_F0D_REG1.BF.CDS_F0D_S_MID_E_LANE_7_0

// 0x01a4	CDS_READ_F0D_REG2		
typedef union {
	struct {
		uint8_t CDS_F0D_S_BOT_O_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_S_MID_O_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_S_TOP_O_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_D_BOT_O_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_REG2_t;
__xdata __at( 0x61a4 ) volatile CDS_READ_F0D_REG2_t CDS_READ_F0D_REG2;
#define reg_CDS_F0D_S_BOT_O_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_S_BOT_O_LANE_7_0
#define reg_CDS_F0D_S_MID_O_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_S_MID_O_LANE_7_0
#define reg_CDS_F0D_S_TOP_O_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_S_TOP_O_LANE_7_0
#define reg_CDS_F0D_D_BOT_O_LANE_7_0  CDS_READ_F0D_REG2.BF.CDS_F0D_D_BOT_O_LANE_7_0

// 0x01a8	CDS_READ_F0D_LEFT_REG0		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_S_TOP_E_LANE_7_0            : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_BOT_E_LANE_7_0            : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_MID_E_LANE_7_0            : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_TOP_E_LANE_7_0            : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG0_t;
__xdata __at( 0x61a8 ) volatile CDS_READ_F0D_LEFT_REG0_t CDS_READ_F0D_LEFT_REG0;
#define reg_CDS_F0D_LEFT_S_TOP_E_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_S_TOP_E_LANE_7_0
#define reg_CDS_F0D_LEFT_D_BOT_E_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_D_BOT_E_LANE_7_0
#define reg_CDS_F0D_LEFT_D_MID_E_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_D_MID_E_LANE_7_0
#define reg_CDS_F0D_LEFT_D_TOP_E_LANE_7_0  CDS_READ_F0D_LEFT_REG0.BF.CDS_F0D_LEFT_D_TOP_E_LANE_7_0

// 0x01ac	CDS_READ_F0D_LEFT_REG1		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_MID_O_LANE_7_0            : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_TOP_O_LANE_7_0            : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_BOT_E_LANE_7_0            : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_MID_E_LANE_7_0            : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG1_t;
__xdata __at( 0x61ac ) volatile CDS_READ_F0D_LEFT_REG1_t CDS_READ_F0D_LEFT_REG1;
#define reg_CDS_F0D_LEFT_D_MID_O_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_D_MID_O_LANE_7_0
#define reg_CDS_F0D_LEFT_D_TOP_O_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_D_TOP_O_LANE_7_0
#define reg_CDS_F0D_LEFT_S_BOT_E_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_S_BOT_E_LANE_7_0
#define reg_CDS_F0D_LEFT_S_MID_E_LANE_7_0  CDS_READ_F0D_LEFT_REG1.BF.CDS_F0D_LEFT_S_MID_E_LANE_7_0

// 0x01b0	CDS_READ_F0D_LEFT_REG2		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_S_BOT_O_LANE_7_0            : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_MID_O_LANE_7_0            : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_TOP_O_LANE_7_0            : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_BOT_O_LANE_7_0            : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_LEFT_REG2_t;
__xdata __at( 0x61b0 ) volatile CDS_READ_F0D_LEFT_REG2_t CDS_READ_F0D_LEFT_REG2;
#define reg_CDS_F0D_LEFT_S_BOT_O_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_S_BOT_O_LANE_7_0
#define reg_CDS_F0D_LEFT_S_MID_O_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_S_MID_O_LANE_7_0
#define reg_CDS_F0D_LEFT_S_TOP_O_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_S_TOP_O_LANE_7_0
#define reg_CDS_F0D_LEFT_D_BOT_O_LANE_7_0  CDS_READ_F0D_LEFT_REG2.BF.CDS_F0D_LEFT_D_BOT_O_LANE_7_0

// 0x01b4	CDS_READ_F0D_RIGHT_REG0		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_S_TOP_E_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_BOT_E_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_MID_E_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_TOP_E_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG0_t;
__xdata __at( 0x61b4 ) volatile CDS_READ_F0D_RIGHT_REG0_t CDS_READ_F0D_RIGHT_REG0;
#define reg_CDS_F0D_RIGHT_S_TOP_E_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_S_TOP_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_BOT_E_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_D_BOT_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_MID_E_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_D_MID_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_TOP_E_LANE_7_0  CDS_READ_F0D_RIGHT_REG0.BF.CDS_F0D_RIGHT_D_TOP_E_LANE_7_0

// 0x01b8	CDS_READ_F0D_RIGHT_REG1		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_MID_O_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_TOP_O_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_BOT_E_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_MID_E_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG1_t;
__xdata __at( 0x61b8 ) volatile CDS_READ_F0D_RIGHT_REG1_t CDS_READ_F0D_RIGHT_REG1;
#define reg_CDS_F0D_RIGHT_D_MID_O_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_D_MID_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_TOP_O_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_D_TOP_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_BOT_E_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_S_BOT_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_MID_E_LANE_7_0  CDS_READ_F0D_RIGHT_REG1.BF.CDS_F0D_RIGHT_S_MID_E_LANE_7_0

// 0x01bc	CDS_READ_F0D_RIGHT_REG2		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_S_BOT_O_LANE_7_0           : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_MID_O_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_TOP_O_LANE_7_0           : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_BOT_O_LANE_7_0           : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_F0D_RIGHT_REG2_t;
__xdata __at( 0x61bc ) volatile CDS_READ_F0D_RIGHT_REG2_t CDS_READ_F0D_RIGHT_REG2;
#define reg_CDS_F0D_RIGHT_S_BOT_O_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_S_BOT_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_MID_O_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_S_MID_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_TOP_O_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_S_TOP_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_BOT_O_LANE_7_0  CDS_READ_F0D_RIGHT_REG2.BF.CDS_F0D_RIGHT_D_BOT_O_LANE_7_0

// 0x01c0	CDS_READ_MISC0		
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
__xdata __at( 0x61c0 ) volatile CDS_READ_MISC0_t CDS_READ_MISC0;
#define reg_CDS_EYE_CHECK_PASS_LANE_7_0  CDS_READ_MISC0.BF.CDS_EYE_CHECK_PASS_LANE_7_0
#define reg_CDS_F0A_SATURATE_LANE_7_0  CDS_READ_MISC0.BF.CDS_F0A_SATURATE_LANE_7_0
#define reg_CDS_VREF_SATURATE_LANE_7_0  CDS_READ_MISC0.BF.CDS_VREF_SATURATE_LANE_7_0

// 0x0200	CDS_CTRL_REG0		
typedef union {
	struct {
		uint8_t RESET_PH_EN_DTL_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_SAVE_EN_LANE                         : 1;	/*      1     r/w   1*/
		uint8_t LOCK_DFE_ON_LANE                         : 1;	/*      2     r/w   0*/
		uint8_t VH_EO_MODE_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t EO_BASED_LANE                            : 1;	/*      4     r/w   1*/
		uint8_t EYE_CHK_DIS_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t CDS_UPDATE_ODD_DIS_LANE                  : 1;	/*      6     r/w   0*/
		uint8_t CDS_UPDATE_F_DIS_LANE                    : 1;	/*      7     r/w   0*/
		uint8_t CDS_ADAPT_SPLR_DIS_LANE_3_0              : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t CDS_F2_DIS_LANE                          : 1;	/*     12     r/w   0*/
		uint8_t CDS_F0D_AVG_MODE_LANE                    : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CDS_STATE_LANE_7_0                       : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_ERR_CODE_LANE_7_0                    : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG0_t;
__xdata __at( 0x6200 ) volatile CDS_CTRL_REG0_t CDS_CTRL_REG0;
#define reg_RESET_PH_EN_DTL_LANE  CDS_CTRL_REG0.BF.RESET_PH_EN_DTL_LANE
#define reg_DFE_SAVE_EN_LANE  CDS_CTRL_REG0.BF.DFE_SAVE_EN_LANE
#define reg_LOCK_DFE_ON_LANE  CDS_CTRL_REG0.BF.LOCK_DFE_ON_LANE
#define reg_VH_EO_MODE_LANE  CDS_CTRL_REG0.BF.VH_EO_MODE_LANE
#define reg_EO_BASED_LANE  CDS_CTRL_REG0.BF.EO_BASED_LANE
#define reg_EYE_CHK_DIS_LANE  CDS_CTRL_REG0.BF.EYE_CHK_DIS_LANE
#define reg_CDS_UPDATE_ODD_DIS_LANE  CDS_CTRL_REG0.BF.CDS_UPDATE_ODD_DIS_LANE
#define reg_CDS_UPDATE_F_DIS_LANE  CDS_CTRL_REG0.BF.CDS_UPDATE_F_DIS_LANE
#define reg_CDS_ADAPT_SPLR_DIS_LANE_3_0  CDS_CTRL_REG0.BF.CDS_ADAPT_SPLR_DIS_LANE_3_0
#define reg_CDS_F2_DIS_LANE  CDS_CTRL_REG0.BF.CDS_F2_DIS_LANE
#define reg_CDS_F0D_AVG_MODE_LANE  CDS_CTRL_REG0.BF.CDS_F0D_AVG_MODE_LANE
#define reg_CDS_STATE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_STATE_LANE_7_0
#define reg_CDS_ERR_CODE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_ERR_CODE_LANE_7_0

// 0x0204	CDS_CTRL_REG2		
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
__xdata __at( 0x6204 ) volatile CDS_CTRL_REG2_t CDS_CTRL_REG2;
#define reg_EYE_CHK_THRESH_C_LANE_3_0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_C_LANE_3_0
#define reg_EYE_CHK_THRESH_K_LANE_3_0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_K_LANE_3_0
#define reg_EYE_CHK_THRESH_VLD_LANE_7_0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_VLD_LANE_7_0
#define reg_EYE_CHK_THRESH_ERR_LANE_15_0_b0  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_ERR_LANE_15_0_b0
#define reg_EYE_CHK_THRESH_ERR_LANE_15_0_b1  CDS_CTRL_REG2.BF.EYE_CHK_THRESH_ERR_LANE_15_0_b1
#define reg_EYE_CHK_THRESH_ERR_LANE_15_0  CDS_CTRL_REG2.WT.W0

// 0x0208	PH_CTRL_REG0		
typedef union {
	struct {
		uint8_t PH_OS_DAT_LANE_7_0                       : 8;	/*  [7:0]     r/w   0*/
		uint8_t PH_MODE_LANE_1_0                         : 2;	/*  [9:8]     r/w   0*/
		uint8_t CUR_PH_MODE_LANE_1_0                     : 2;	/*[11:10]     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PH_OS_ESM_LANE_7_0                       : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PH_CTRL_REG0_t;
__xdata __at( 0x6208 ) volatile PH_CTRL_REG0_t PH_CTRL_REG0;
#define reg_PH_OS_DAT_LANE_7_0  PH_CTRL_REG0.BF.PH_OS_DAT_LANE_7_0
#define reg_PH_MODE_LANE_1_0  PH_CTRL_REG0.BF.PH_MODE_LANE_1_0
#define reg_CUR_PH_MODE_LANE_1_0  PH_CTRL_REG0.BF.CUR_PH_MODE_LANE_1_0
#define reg_PH_OS_ESM_LANE_7_0  PH_CTRL_REG0.BF.PH_OS_ESM_LANE_7_0

// 0x020c	PH_CTRL_REG1		
typedef union {
	struct {
		uint8_t CUR_PH_OS_DAT_LANE_7_0                   : 8;	/*  [7:0]     r/w   0*/
		uint8_t CUR_PH_OS_ESM_LANE_7_0                   : 8;	/* [15:8]     r/w   0*/
		uint8_t CUR_EOM_DPHER_LSB_LANE_7_0               : 8;	/*[23:16]     r/w   0*/
		uint8_t CUR_EOM_DPHER_MSB_LANE_7_0               : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PH_CTRL_REG1_t;
__xdata __at( 0x620c ) volatile PH_CTRL_REG1_t PH_CTRL_REG1;
#define reg_CUR_PH_OS_DAT_LANE_7_0  PH_CTRL_REG1.BF.CUR_PH_OS_DAT_LANE_7_0
#define reg_CUR_PH_OS_ESM_LANE_7_0  PH_CTRL_REG1.BF.CUR_PH_OS_ESM_LANE_7_0
#define reg_CUR_EOM_DPHER_LSB_LANE_7_0  PH_CTRL_REG1.BF.CUR_EOM_DPHER_LSB_LANE_7_0
#define reg_CUR_EOM_DPHER_MSB_LANE_7_0  PH_CTRL_REG1.BF.CUR_EOM_DPHER_MSB_LANE_7_0

// 0x0210	DRIVE_REG0		
typedef union {
	struct {
		uint8_t RXTRAIN_R_IDX_LANE_3_0                   : 4;	/*  [3:0]     r/w   0*/
		uint8_t RXTRAIN_C_IDX_LANE_3_0                   : 4;	/*  [7:4]     r/w   0*/
		uint8_t ADAPT_EVEN_EN_LANE                       : 1;	/*      8     r/w   1*/
		uint8_t ADAPT_ODD_EN_LANE                        : 1;	/*      9     r/w   1*/
		uint8_t ADAPT_DATA_EN_LANE                       : 1;	/*     10     r/w   1*/
		uint8_t ADAPT_SLICER_EN_LANE                     : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DRIVE_REG0_t;
__xdata __at( 0x6210 ) volatile DRIVE_REG0_t DRIVE_REG0;
#define reg_RXTRAIN_R_IDX_LANE_3_0  DRIVE_REG0.BF.RXTRAIN_R_IDX_LANE_3_0
#define reg_RXTRAIN_C_IDX_LANE_3_0  DRIVE_REG0.BF.RXTRAIN_C_IDX_LANE_3_0
#define reg_ADAPT_EVEN_EN_LANE  DRIVE_REG0.BF.ADAPT_EVEN_EN_LANE
#define reg_ADAPT_ODD_EN_LANE  DRIVE_REG0.BF.ADAPT_ODD_EN_LANE
#define reg_ADAPT_DATA_EN_LANE  DRIVE_REG0.BF.ADAPT_DATA_EN_LANE
#define reg_ADAPT_SLICER_EN_LANE  DRIVE_REG0.BF.ADAPT_SLICER_EN_LANE

// 0x0214	TXTRAIN_IF_REG0		
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
__xdata __at( 0x6214 ) volatile TXTRAIN_IF_REG0_t TXTRAIN_IF_REG0;
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

// 0x0220	CDS_TIMER0		
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
__xdata __at( 0x6220 ) volatile CDS_TIMER0_t CDS_TIMER0;
#define reg_CDS_TDTL_COARSE_LANE_15_0_b0  CDS_TIMER0.BF.CDS_TDTL_COARSE_LANE_15_0_b0
#define reg_CDS_TDTL_COARSE_LANE_15_0_b1  CDS_TIMER0.BF.CDS_TDTL_COARSE_LANE_15_0_b1
#define reg_CDS_TDTL_INIT_LANE_15_0_b0  CDS_TIMER0.BF.CDS_TDTL_INIT_LANE_15_0_b0
#define reg_CDS_TDTL_INIT_LANE_15_0_b1  CDS_TIMER0.BF.CDS_TDTL_INIT_LANE_15_0_b1
#define reg_CDS_TDTL_COARSE_LANE_15_0  CDS_TIMER0.WT.W0
#define reg_CDS_TDTL_INIT_LANE_15_0  CDS_TIMER0.WT.W1

// 0x0224	CDS_TIMER1		
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
__xdata __at( 0x6224 ) volatile CDS_TIMER1_t CDS_TIMER1;
#define reg_CDS_TDFE_INIT2_LANE_15_0_b0  CDS_TIMER1.BF.CDS_TDFE_INIT2_LANE_15_0_b0
#define reg_CDS_TDFE_INIT2_LANE_15_0_b1  CDS_TIMER1.BF.CDS_TDFE_INIT2_LANE_15_0_b1
#define reg_CDS_TDFE_INIT1_LANE_15_0_b0  CDS_TIMER1.BF.CDS_TDFE_INIT1_LANE_15_0_b0
#define reg_CDS_TDFE_INIT1_LANE_15_0_b1  CDS_TIMER1.BF.CDS_TDFE_INIT1_LANE_15_0_b1
#define reg_CDS_TDFE_INIT2_LANE_15_0  CDS_TIMER1.WT.W0
#define reg_CDS_TDFE_INIT1_LANE_15_0  CDS_TIMER1.WT.W1

// 0x0228	CDS_TIMER2		
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
__xdata __at( 0x6228 ) volatile CDS_TIMER2_t CDS_TIMER2;
#define reg_CDS_TEE_FINE_LANE_15_0_b0  CDS_TIMER2.BF.CDS_TEE_FINE_LANE_15_0_b0
#define reg_CDS_TEE_FINE_LANE_15_0_b1  CDS_TIMER2.BF.CDS_TEE_FINE_LANE_15_0_b1
#define reg_CDS_TEE_COARSE_LANE_15_0_b0  CDS_TIMER2.BF.CDS_TEE_COARSE_LANE_15_0_b0
#define reg_CDS_TEE_COARSE_LANE_15_0_b1  CDS_TIMER2.BF.CDS_TEE_COARSE_LANE_15_0_b1
#define reg_CDS_TEE_FINE_LANE_15_0  CDS_TIMER2.WT.W0
#define reg_CDS_TEE_COARSE_LANE_15_0  CDS_TIMER2.WT.W1

// 0x022c	CDS_TIMER3		
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
__xdata __at( 0x622c ) volatile CDS_TIMER3_t CDS_TIMER3;
#define reg_CDS_TF0_COARSE_LANE_15_0_b0  CDS_TIMER3.BF.CDS_TF0_COARSE_LANE_15_0_b0
#define reg_CDS_TF0_COARSE_LANE_15_0_b1  CDS_TIMER3.BF.CDS_TF0_COARSE_LANE_15_0_b1
#define reg_CDS_TF0_COARSE_PM_LANE_15_0_b0  CDS_TIMER3.BF.CDS_TF0_COARSE_PM_LANE_15_0_b0
#define reg_CDS_TF0_COARSE_PM_LANE_15_0_b1  CDS_TIMER3.BF.CDS_TF0_COARSE_PM_LANE_15_0_b1
#define reg_CDS_TF0_COARSE_LANE_15_0  CDS_TIMER3.WT.W0
#define reg_CDS_TF0_COARSE_PM_LANE_15_0  CDS_TIMER3.WT.W1

// 0x0230	CDS_TIMER4		
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
__xdata __at( 0x6230 ) volatile CDS_TIMER4_t CDS_TIMER4;
#define reg_CDS_TDFE_COARSE_LANE_15_0_b0  CDS_TIMER4.BF.CDS_TDFE_COARSE_LANE_15_0_b0
#define reg_CDS_TDFE_COARSE_LANE_15_0_b1  CDS_TIMER4.BF.CDS_TDFE_COARSE_LANE_15_0_b1
#define reg_CDS_TDFE_COARSE_PM_LANE_15_0_b0  CDS_TIMER4.BF.CDS_TDFE_COARSE_PM_LANE_15_0_b0
#define reg_CDS_TDFE_COARSE_PM_LANE_15_0_b1  CDS_TIMER4.BF.CDS_TDFE_COARSE_PM_LANE_15_0_b1
#define reg_CDS_TDFE_COARSE_LANE_15_0  CDS_TIMER4.WT.W0
#define reg_CDS_TDFE_COARSE_PM_LANE_15_0  CDS_TIMER4.WT.W1

// 0x0234	CDS_TIMER5		
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
__xdata __at( 0x6234 ) volatile CDS_TIMER5_t CDS_TIMER5;
#define reg_CDS_TDFE_ACCU_LANE_15_0_b0  CDS_TIMER5.BF.CDS_TDFE_ACCU_LANE_15_0_b0
#define reg_CDS_TDFE_ACCU_LANE_15_0_b1  CDS_TIMER5.BF.CDS_TDFE_ACCU_LANE_15_0_b1
#define reg_CDS_TDFE_FINE_LANE_15_0_b0  CDS_TIMER5.BF.CDS_TDFE_FINE_LANE_15_0_b0
#define reg_CDS_TDFE_FINE_LANE_15_0_b1  CDS_TIMER5.BF.CDS_TDFE_FINE_LANE_15_0_b1
#define reg_CDS_TDFE_ACCU_LANE_15_0  CDS_TIMER5.WT.W0
#define reg_CDS_TDFE_FINE_LANE_15_0  CDS_TIMER5.WT.W1

// 0x0238	CDS_TIMER6		
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
__xdata __at( 0x6238 ) volatile CDS_TIMER6_t CDS_TIMER6;
#define reg_CDS_TF0B_ACCU_LANE_15_0_b0  CDS_TIMER6.BF.CDS_TF0B_ACCU_LANE_15_0_b0
#define reg_CDS_TF0B_ACCU_LANE_15_0_b1  CDS_TIMER6.BF.CDS_TF0B_ACCU_LANE_15_0_b1
#define reg_CDS_TF0B_FINE_LANE_15_0_b0  CDS_TIMER6.BF.CDS_TF0B_FINE_LANE_15_0_b0
#define reg_CDS_TF0B_FINE_LANE_15_0_b1  CDS_TIMER6.BF.CDS_TF0B_FINE_LANE_15_0_b1
#define reg_CDS_TF0B_ACCU_LANE_15_0  CDS_TIMER6.WT.W0
#define reg_CDS_TF0B_FINE_LANE_15_0  CDS_TIMER6.WT.W1

// 0x023c	CDS_TIMER7		
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
__xdata __at( 0x623c ) volatile CDS_TIMER7_t CDS_TIMER7;
#define reg_CDS_TF0K_FINE_LANE_15_0_b0  CDS_TIMER7.BF.CDS_TF0K_FINE_LANE_15_0_b0
#define reg_CDS_TF0K_FINE_LANE_15_0_b1  CDS_TIMER7.BF.CDS_TF0K_FINE_LANE_15_0_b1
#define reg_CDS_TF0K_COARSE_LANE_15_0_b0  CDS_TIMER7.BF.CDS_TF0K_COARSE_LANE_15_0_b0
#define reg_CDS_TF0K_COARSE_LANE_15_0_b1  CDS_TIMER7.BF.CDS_TF0K_COARSE_LANE_15_0_b1
#define reg_CDS_TF0K_FINE_LANE_15_0  CDS_TIMER7.WT.W0
#define reg_CDS_TF0K_COARSE_LANE_15_0  CDS_TIMER7.WT.W1

// 0x0240	CDS_TIMER8		
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
__xdata __at( 0x6240 ) volatile CDS_TIMER8_t CDS_TIMER8;
#define reg_CDS_TF0D_FINE_LANE_15_0_b0  CDS_TIMER8.BF.CDS_TF0D_FINE_LANE_15_0_b0
#define reg_CDS_TF0D_FINE_LANE_15_0_b1  CDS_TIMER8.BF.CDS_TF0D_FINE_LANE_15_0_b1
#define reg_CDS_TF0D_COARSE_LANE_15_0_b0  CDS_TIMER8.BF.CDS_TF0D_COARSE_LANE_15_0_b0
#define reg_CDS_TF0D_COARSE_LANE_15_0_b1  CDS_TIMER8.BF.CDS_TF0D_COARSE_LANE_15_0_b1
#define reg_CDS_TF0D_FINE_LANE_15_0  CDS_TIMER8.WT.W0
#define reg_CDS_TF0D_COARSE_LANE_15_0  CDS_TIMER8.WT.W1

// 0x0244	CDS_TIMER9		
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
__xdata __at( 0x6244 ) volatile CDS_TIMER9_t CDS_TIMER9;
#define reg_CDS_TMAXEO_ACCU_LANE_15_0_b0  CDS_TIMER9.BF.CDS_TMAXEO_ACCU_LANE_15_0_b0
#define reg_CDS_TMAXEO_ACCU_LANE_15_0_b1  CDS_TIMER9.BF.CDS_TMAXEO_ACCU_LANE_15_0_b1
#define reg_CDS_TMAXEO_FINE_LANE_15_0_b0  CDS_TIMER9.BF.CDS_TMAXEO_FINE_LANE_15_0_b0
#define reg_CDS_TMAXEO_FINE_LANE_15_0_b1  CDS_TIMER9.BF.CDS_TMAXEO_FINE_LANE_15_0_b1
#define reg_CDS_TMAXEO_ACCU_LANE_15_0  CDS_TIMER9.WT.W0
#define reg_CDS_TMAXEO_FINE_LANE_15_0  CDS_TIMER9.WT.W1

// 0x0248	CDS_TIMER10		
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
__xdata __at( 0x6248 ) volatile CDS_TIMER10_t CDS_TIMER10;
#define reg_CDS_TEYECHK_LANE_15_0_b0  CDS_TIMER10.BF.CDS_TEYECHK_LANE_15_0_b0
#define reg_CDS_TEYECHK_LANE_15_0_b1  CDS_TIMER10.BF.CDS_TEYECHK_LANE_15_0_b1
#define reg_CDS_TEYECHK_LANE_15_0  CDS_TIMER10.WT.W1

// 0x024c	CDS_TIMER11		
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
__xdata __at( 0x624c ) volatile CDS_TIMER11_t CDS_TIMER11;
#define reg_CDS_TDC_ACCU_LANE_15_0_b0  CDS_TIMER11.BF.CDS_TDC_ACCU_LANE_15_0_b0
#define reg_CDS_TDC_ACCU_LANE_15_0_b1  CDS_TIMER11.BF.CDS_TDC_ACCU_LANE_15_0_b1
#define reg_CDS_TDC_FINE_LANE_15_0_b0  CDS_TIMER11.BF.CDS_TDC_FINE_LANE_15_0_b0
#define reg_CDS_TDC_FINE_LANE_15_0_b1  CDS_TIMER11.BF.CDS_TDC_FINE_LANE_15_0_b1
#define reg_CDS_TDC_ACCU_LANE_15_0  CDS_TIMER11.WT.W0
#define reg_CDS_TDC_FINE_LANE_15_0  CDS_TIMER11.WT.W1

#endif
