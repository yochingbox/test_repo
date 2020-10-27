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
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
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
#define reg_CDS_STATE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_STATE_LANE_7_0
#define reg_CDS_ERR_CODE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_ERR_CODE_LANE_7_0

// 0x0204	CDS_CTRL_REG1		
typedef union {
	struct {
		uint8_t CDS_ADAPT_SPLR_DIS_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t CDS_UPDATE_ODD_DIS_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t CDS_UPDATE_F_DIS_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t CDS_F2_DIS_LANE                          : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:7]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG1_t;
__xdata __at( 0x6204 ) volatile CDS_CTRL_REG1_t CDS_CTRL_REG1;
#define reg_CDS_ADAPT_SPLR_DIS_LANE_3_0  CDS_CTRL_REG1.BF.CDS_ADAPT_SPLR_DIS_LANE_3_0
#define reg_CDS_UPDATE_ODD_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_ODD_DIS_LANE
#define reg_CDS_UPDATE_F_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_F_DIS_LANE
#define reg_CDS_F2_DIS_LANE  CDS_CTRL_REG1.BF.CDS_F2_DIS_LANE

#endif
