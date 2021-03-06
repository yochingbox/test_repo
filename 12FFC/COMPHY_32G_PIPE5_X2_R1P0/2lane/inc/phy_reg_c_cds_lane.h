#ifndef PHY_REG_C_CDS_LANE_H
#define PHY_REG_C_CDS_LANE_H



// 0x0100	DFE_READ_EVEN_REG0		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F0_D_P_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_D_N_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_P_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_S_N_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG0_t;
__xdata __at( 0x6100 ) volatile DFE_READ_EVEN_REG0_t DFE_READ_EVEN_REG0;
#define reg_CDS_F0_D_P_E_LANE_7_0  DFE_READ_EVEN_REG0.BF.CDS_F0_D_P_E_LANE_7_0
#define reg_CDS_F0_D_N_E_LANE_7_0  DFE_READ_EVEN_REG0.BF.CDS_F0_D_N_E_LANE_7_0
#define reg_CDS_F0_S_P_E_LANE_7_0  DFE_READ_EVEN_REG0.BF.CDS_F0_S_P_E_LANE_7_0
#define reg_CDS_F0_S_N_E_LANE_7_0  DFE_READ_EVEN_REG0.BF.CDS_F0_S_N_E_LANE_7_0

// 0x0104	DFE_READ_EVEN_REG1		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F2_D_P_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_N_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_S_P_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_S_N_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG1_t;
__xdata __at( 0x6104 ) volatile DFE_READ_EVEN_REG1_t DFE_READ_EVEN_REG1;
#define reg_CDS_F2_D_P_E_LANE_7_0  DFE_READ_EVEN_REG1.BF.CDS_F2_D_P_E_LANE_7_0
#define reg_CDS_F2_D_N_E_LANE_7_0  DFE_READ_EVEN_REG1.BF.CDS_F2_D_N_E_LANE_7_0
#define reg_CDS_F2_S_P_E_LANE_7_0  DFE_READ_EVEN_REG1.BF.CDS_F2_S_P_E_LANE_7_0
#define reg_CDS_F2_S_N_E_LANE_7_0  DFE_READ_EVEN_REG1.BF.CDS_F2_S_N_E_LANE_7_0

// 0x0108	DFE_READ_EVEN_REG2		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F3_D_P_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_D_N_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_S_P_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_S_N_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG2_t;
__xdata __at( 0x6108 ) volatile DFE_READ_EVEN_REG2_t DFE_READ_EVEN_REG2;
#define reg_CDS_F3_D_P_E_LANE_7_0  DFE_READ_EVEN_REG2.BF.CDS_F3_D_P_E_LANE_7_0
#define reg_CDS_F3_D_N_E_LANE_7_0  DFE_READ_EVEN_REG2.BF.CDS_F3_D_N_E_LANE_7_0
#define reg_CDS_F3_S_P_E_LANE_7_0  DFE_READ_EVEN_REG2.BF.CDS_F3_S_P_E_LANE_7_0
#define reg_CDS_F3_S_N_E_LANE_7_0  DFE_READ_EVEN_REG2.BF.CDS_F3_S_N_E_LANE_7_0

// 0x010c	DFE_READ_EVEN_REG3		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F1_E_LANE_7_0                        : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_E_LANE_7_0                        : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F5_E_LANE_7_0                        : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_E_LANE_7_0                        : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG3_t;
__xdata __at( 0x610c ) volatile DFE_READ_EVEN_REG3_t DFE_READ_EVEN_REG3;
#define reg_CDS_F1_E_LANE_7_0  DFE_READ_EVEN_REG3.BF.CDS_F1_E_LANE_7_0
#define reg_CDS_F4_E_LANE_7_0  DFE_READ_EVEN_REG3.BF.CDS_F4_E_LANE_7_0
#define reg_CDS_F5_E_LANE_7_0  DFE_READ_EVEN_REG3.BF.CDS_F5_E_LANE_7_0
#define reg_CDS_F6_E_LANE_7_0  DFE_READ_EVEN_REG3.BF.CDS_F6_E_LANE_7_0

// 0x0110	DFE_READ_EVEN_REG4		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F7_E_LANE_7_0                        : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F8_E_LANE_7_0                        : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F9_E_LANE_7_0                        : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F10_E_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG4_t;
__xdata __at( 0x6110 ) volatile DFE_READ_EVEN_REG4_t DFE_READ_EVEN_REG4;
#define reg_CDS_F7_E_LANE_7_0  DFE_READ_EVEN_REG4.BF.CDS_F7_E_LANE_7_0
#define reg_CDS_F8_E_LANE_7_0  DFE_READ_EVEN_REG4.BF.CDS_F8_E_LANE_7_0
#define reg_CDS_F9_E_LANE_7_0  DFE_READ_EVEN_REG4.BF.CDS_F9_E_LANE_7_0
#define reg_CDS_F10_E_LANE_7_0  DFE_READ_EVEN_REG4.BF.CDS_F10_E_LANE_7_0

// 0x0114	DFE_READ_EVEN_REG5		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F11_E_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F12_E_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F13_E_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F14_E_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG5_t;
__xdata __at( 0x6114 ) volatile DFE_READ_EVEN_REG5_t DFE_READ_EVEN_REG5;
#define reg_CDS_F11_E_LANE_7_0  DFE_READ_EVEN_REG5.BF.CDS_F11_E_LANE_7_0
#define reg_CDS_F12_E_LANE_7_0  DFE_READ_EVEN_REG5.BF.CDS_F12_E_LANE_7_0
#define reg_CDS_F13_E_LANE_7_0  DFE_READ_EVEN_REG5.BF.CDS_F13_E_LANE_7_0
#define reg_CDS_F14_E_LANE_7_0  DFE_READ_EVEN_REG5.BF.CDS_F14_E_LANE_7_0

// 0x0118	DFE_READ_EVEN_REG6		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F15_E_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_FF0_E_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_FF1_E_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_FF2_E_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG6_t;
__xdata __at( 0x6118 ) volatile DFE_READ_EVEN_REG6_t DFE_READ_EVEN_REG6;
#define reg_CDS_F15_E_LANE_7_0  DFE_READ_EVEN_REG6.BF.CDS_F15_E_LANE_7_0
#define reg_CDS_FF0_E_LANE_7_0  DFE_READ_EVEN_REG6.BF.CDS_FF0_E_LANE_7_0
#define reg_CDS_FF1_E_LANE_7_0  DFE_READ_EVEN_REG6.BF.CDS_FF1_E_LANE_7_0
#define reg_CDS_FF2_E_LANE_7_0  DFE_READ_EVEN_REG6.BF.CDS_FF2_E_LANE_7_0

// 0x011c	DFE_READ_EVEN_REG7		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_FF3_E_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_FF4_E_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_FF5_E_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DUMMY_E_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG7_t;
__xdata __at( 0x611c ) volatile DFE_READ_EVEN_REG7_t DFE_READ_EVEN_REG7;
#define reg_CDS_FF3_E_LANE_7_0  DFE_READ_EVEN_REG7.BF.CDS_FF3_E_LANE_7_0
#define reg_CDS_FF4_E_LANE_7_0  DFE_READ_EVEN_REG7.BF.CDS_FF4_E_LANE_7_0
#define reg_CDS_FF5_E_LANE_7_0  DFE_READ_EVEN_REG7.BF.CDS_FF5_E_LANE_7_0
#define reg_CDS_DUMMY_E_LANE_7_0  DFE_READ_EVEN_REG7.BF.CDS_DUMMY_E_LANE_7_0

// 0x0120	DFE_READ_ODD_REG0		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F0_D_P_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0_D_N_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0_S_P_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0_S_N_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG0_t;
__xdata __at( 0x6120 ) volatile DFE_READ_ODD_REG0_t DFE_READ_ODD_REG0;
#define reg_CDS_F0_D_P_O_LANE_7_0  DFE_READ_ODD_REG0.BF.CDS_F0_D_P_O_LANE_7_0
#define reg_CDS_F0_D_N_O_LANE_7_0  DFE_READ_ODD_REG0.BF.CDS_F0_D_N_O_LANE_7_0
#define reg_CDS_F0_S_P_O_LANE_7_0  DFE_READ_ODD_REG0.BF.CDS_F0_S_P_O_LANE_7_0
#define reg_CDS_F0_S_N_O_LANE_7_0  DFE_READ_ODD_REG0.BF.CDS_F0_S_N_O_LANE_7_0

// 0x0124	DFE_READ_ODD_REG1		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F2_D_P_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F2_D_N_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F2_S_P_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F2_S_N_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG1_t;
__xdata __at( 0x6124 ) volatile DFE_READ_ODD_REG1_t DFE_READ_ODD_REG1;
#define reg_CDS_F2_D_P_O_LANE_7_0  DFE_READ_ODD_REG1.BF.CDS_F2_D_P_O_LANE_7_0
#define reg_CDS_F2_D_N_O_LANE_7_0  DFE_READ_ODD_REG1.BF.CDS_F2_D_N_O_LANE_7_0
#define reg_CDS_F2_S_P_O_LANE_7_0  DFE_READ_ODD_REG1.BF.CDS_F2_S_P_O_LANE_7_0
#define reg_CDS_F2_S_N_O_LANE_7_0  DFE_READ_ODD_REG1.BF.CDS_F2_S_N_O_LANE_7_0

// 0x0128	DFE_READ_ODD_REG2		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F3_D_P_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F3_D_N_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F3_S_P_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F3_S_N_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG2_t;
__xdata __at( 0x6128 ) volatile DFE_READ_ODD_REG2_t DFE_READ_ODD_REG2;
#define reg_CDS_F3_D_P_O_LANE_7_0  DFE_READ_ODD_REG2.BF.CDS_F3_D_P_O_LANE_7_0
#define reg_CDS_F3_D_N_O_LANE_7_0  DFE_READ_ODD_REG2.BF.CDS_F3_D_N_O_LANE_7_0
#define reg_CDS_F3_S_P_O_LANE_7_0  DFE_READ_ODD_REG2.BF.CDS_F3_S_P_O_LANE_7_0
#define reg_CDS_F3_S_N_O_LANE_7_0  DFE_READ_ODD_REG2.BF.CDS_F3_S_N_O_LANE_7_0

// 0x012c	DFE_READ_ODD_REG3		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F1_O_LANE_7_0                        : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F4_O_LANE_7_0                        : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F5_O_LANE_7_0                        : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F6_O_LANE_7_0                        : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG3_t;
__xdata __at( 0x612c ) volatile DFE_READ_ODD_REG3_t DFE_READ_ODD_REG3;
#define reg_CDS_F1_O_LANE_7_0  DFE_READ_ODD_REG3.BF.CDS_F1_O_LANE_7_0
#define reg_CDS_F4_O_LANE_7_0  DFE_READ_ODD_REG3.BF.CDS_F4_O_LANE_7_0
#define reg_CDS_F5_O_LANE_7_0  DFE_READ_ODD_REG3.BF.CDS_F5_O_LANE_7_0
#define reg_CDS_F6_O_LANE_7_0  DFE_READ_ODD_REG3.BF.CDS_F6_O_LANE_7_0

// 0x0130	DFE_READ_ODD_REG4		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F7_O_LANE_7_0                        : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F8_O_LANE_7_0                        : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F9_O_LANE_7_0                        : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F10_O_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG4_t;
__xdata __at( 0x6130 ) volatile DFE_READ_ODD_REG4_t DFE_READ_ODD_REG4;
#define reg_CDS_F7_O_LANE_7_0  DFE_READ_ODD_REG4.BF.CDS_F7_O_LANE_7_0
#define reg_CDS_F8_O_LANE_7_0  DFE_READ_ODD_REG4.BF.CDS_F8_O_LANE_7_0
#define reg_CDS_F9_O_LANE_7_0  DFE_READ_ODD_REG4.BF.CDS_F9_O_LANE_7_0
#define reg_CDS_F10_O_LANE_7_0  DFE_READ_ODD_REG4.BF.CDS_F10_O_LANE_7_0

// 0x0134	DFE_READ_ODD_REG5		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F11_O_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F12_O_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F13_O_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F14_O_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG5_t;
__xdata __at( 0x6134 ) volatile DFE_READ_ODD_REG5_t DFE_READ_ODD_REG5;
#define reg_CDS_F11_O_LANE_7_0  DFE_READ_ODD_REG5.BF.CDS_F11_O_LANE_7_0
#define reg_CDS_F12_O_LANE_7_0  DFE_READ_ODD_REG5.BF.CDS_F12_O_LANE_7_0
#define reg_CDS_F13_O_LANE_7_0  DFE_READ_ODD_REG5.BF.CDS_F13_O_LANE_7_0
#define reg_CDS_F14_O_LANE_7_0  DFE_READ_ODD_REG5.BF.CDS_F14_O_LANE_7_0

// 0x0138	DFE_READ_ODD_REG6		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_F15_O_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_FF0_O_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_FF1_O_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_FF2_O_LANE_7_0                       : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG6_t;
__xdata __at( 0x6138 ) volatile DFE_READ_ODD_REG6_t DFE_READ_ODD_REG6;
#define reg_CDS_F15_O_LANE_7_0  DFE_READ_ODD_REG6.BF.CDS_F15_O_LANE_7_0
#define reg_CDS_FF0_O_LANE_7_0  DFE_READ_ODD_REG6.BF.CDS_FF0_O_LANE_7_0
#define reg_CDS_FF1_O_LANE_7_0  DFE_READ_ODD_REG6.BF.CDS_FF1_O_LANE_7_0
#define reg_CDS_FF2_O_LANE_7_0  DFE_READ_ODD_REG6.BF.CDS_FF2_O_LANE_7_0

// 0x013c	DFE_READ_ODD_REG7		DFE TAP 2C READBACK
typedef union {
	struct {
		uint8_t CDS_FF3_O_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_FF4_O_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_FF5_O_LANE_7_0                       : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DUMMY_O_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG7_t;
__xdata __at( 0x613c ) volatile DFE_READ_ODD_REG7_t DFE_READ_ODD_REG7;
#define reg_CDS_FF3_O_LANE_7_0  DFE_READ_ODD_REG7.BF.CDS_FF3_O_LANE_7_0
#define reg_CDS_FF4_O_LANE_7_0  DFE_READ_ODD_REG7.BF.CDS_FF4_O_LANE_7_0
#define reg_CDS_FF5_O_LANE_7_0  DFE_READ_ODD_REG7.BF.CDS_FF5_O_LANE_7_0
#define reg_CDS_DUMMY_O_LANE_7_0  DFE_READ_ODD_REG7.BF.CDS_DUMMY_O_LANE_7_0

// 0x0140	DFE_READ_EVEN_REG8		DFE DC 2C READBACK
typedef union {
	struct {
		uint8_t CDS_DC_D_P_E_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_N_E_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_S_P_E_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_S_N_E_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_REG8_t;
__xdata __at( 0x6140 ) volatile DFE_READ_EVEN_REG8_t DFE_READ_EVEN_REG8;
#define reg_CDS_DC_D_P_E_LANE_7_0  DFE_READ_EVEN_REG8.BF.CDS_DC_D_P_E_LANE_7_0
#define reg_CDS_DC_D_N_E_LANE_7_0  DFE_READ_EVEN_REG8.BF.CDS_DC_D_N_E_LANE_7_0
#define reg_CDS_DC_S_P_E_LANE_7_0  DFE_READ_EVEN_REG8.BF.CDS_DC_S_P_E_LANE_7_0
#define reg_CDS_DC_S_N_E_LANE_7_0  DFE_READ_EVEN_REG8.BF.CDS_DC_S_N_E_LANE_7_0

// 0x0144	DFE_READ_ODD_REG8		DFE DC 2C READBACK
typedef union {
	struct {
		uint8_t CDS_DC_D_P_O_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_DC_D_N_O_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_DC_S_P_O_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_DC_S_N_O_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_REG8_t;
__xdata __at( 0x6144 ) volatile DFE_READ_ODD_REG8_t DFE_READ_ODD_REG8;
#define reg_CDS_DC_D_P_O_LANE_7_0  DFE_READ_ODD_REG8.BF.CDS_DC_D_P_O_LANE_7_0
#define reg_CDS_DC_D_N_O_LANE_7_0  DFE_READ_ODD_REG8.BF.CDS_DC_D_N_O_LANE_7_0
#define reg_CDS_DC_S_P_O_LANE_7_0  DFE_READ_ODD_REG8.BF.CDS_DC_S_P_O_LANE_7_0
#define reg_CDS_DC_S_N_O_LANE_7_0  DFE_READ_ODD_REG8.BF.CDS_DC_S_N_O_LANE_7_0

// 0x0148	DFE_READ_F0A_EVEN		
typedef union {
	struct {
		uint8_t CDS_F0A_D_P_E_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_D_N_E_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_S_P_E_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_N_E_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0A_EVEN_t;
__xdata __at( 0x6148 ) volatile DFE_READ_F0A_EVEN_t DFE_READ_F0A_EVEN;
#define reg_CDS_F0A_D_P_E_LANE_7_0  DFE_READ_F0A_EVEN.BF.CDS_F0A_D_P_E_LANE_7_0
#define reg_CDS_F0A_D_N_E_LANE_7_0  DFE_READ_F0A_EVEN.BF.CDS_F0A_D_N_E_LANE_7_0
#define reg_CDS_F0A_S_P_E_LANE_7_0  DFE_READ_F0A_EVEN.BF.CDS_F0A_S_P_E_LANE_7_0
#define reg_CDS_F0A_S_N_E_LANE_7_0  DFE_READ_F0A_EVEN.BF.CDS_F0A_S_N_E_LANE_7_0

// 0x014c	DFE_READ_F0A_ODD		
typedef union {
	struct {
		uint8_t CDS_F0A_D_P_O_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_D_N_O_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0A_S_P_O_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0A_S_N_O_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0A_ODD_t;
__xdata __at( 0x614c ) volatile DFE_READ_F0A_ODD_t DFE_READ_F0A_ODD;
#define reg_CDS_F0A_D_P_O_LANE_7_0  DFE_READ_F0A_ODD.BF.CDS_F0A_D_P_O_LANE_7_0
#define reg_CDS_F0A_D_N_O_LANE_7_0  DFE_READ_F0A_ODD.BF.CDS_F0A_D_N_O_LANE_7_0
#define reg_CDS_F0A_S_P_O_LANE_7_0  DFE_READ_F0A_ODD.BF.CDS_F0A_S_P_O_LANE_7_0
#define reg_CDS_F0A_S_N_O_LANE_7_0  DFE_READ_F0A_ODD.BF.CDS_F0A_S_N_O_LANE_7_0

// 0x0150	DFE_READ_F0B_EVEN		
typedef union {
	struct {
		uint8_t CDS_F0B_D_P_E_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_D_N_E_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_S_P_E_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_N_E_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0B_EVEN_t;
__xdata __at( 0x6150 ) volatile DFE_READ_F0B_EVEN_t DFE_READ_F0B_EVEN;
#define reg_CDS_F0B_D_P_E_LANE_7_0  DFE_READ_F0B_EVEN.BF.CDS_F0B_D_P_E_LANE_7_0
#define reg_CDS_F0B_D_N_E_LANE_7_0  DFE_READ_F0B_EVEN.BF.CDS_F0B_D_N_E_LANE_7_0
#define reg_CDS_F0B_S_P_E_LANE_7_0  DFE_READ_F0B_EVEN.BF.CDS_F0B_S_P_E_LANE_7_0
#define reg_CDS_F0B_S_N_E_LANE_7_0  DFE_READ_F0B_EVEN.BF.CDS_F0B_S_N_E_LANE_7_0

// 0x0154	DFE_READ_F0B_ODD		
typedef union {
	struct {
		uint8_t CDS_F0B_D_P_O_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0B_D_N_O_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0B_S_P_O_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0B_S_N_O_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0B_ODD_t;
__xdata __at( 0x6154 ) volatile DFE_READ_F0B_ODD_t DFE_READ_F0B_ODD;
#define reg_CDS_F0B_D_P_O_LANE_7_0  DFE_READ_F0B_ODD.BF.CDS_F0B_D_P_O_LANE_7_0
#define reg_CDS_F0B_D_N_O_LANE_7_0  DFE_READ_F0B_ODD.BF.CDS_F0B_D_N_O_LANE_7_0
#define reg_CDS_F0B_S_P_O_LANE_7_0  DFE_READ_F0B_ODD.BF.CDS_F0B_S_P_O_LANE_7_0
#define reg_CDS_F0B_S_N_O_LANE_7_0  DFE_READ_F0B_ODD.BF.CDS_F0B_S_N_O_LANE_7_0

// 0x0158	DFE_READ_F0D_EVEN		
typedef union {
	struct {
		uint8_t CDS_F0D_D_P_E_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_D_N_E_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_S_P_E_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_N_E_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0D_EVEN_t;
__xdata __at( 0x6158 ) volatile DFE_READ_F0D_EVEN_t DFE_READ_F0D_EVEN;
#define reg_CDS_F0D_D_P_E_LANE_7_0  DFE_READ_F0D_EVEN.BF.CDS_F0D_D_P_E_LANE_7_0
#define reg_CDS_F0D_D_N_E_LANE_7_0  DFE_READ_F0D_EVEN.BF.CDS_F0D_D_N_E_LANE_7_0
#define reg_CDS_F0D_S_P_E_LANE_7_0  DFE_READ_F0D_EVEN.BF.CDS_F0D_S_P_E_LANE_7_0
#define reg_CDS_F0D_S_N_E_LANE_7_0  DFE_READ_F0D_EVEN.BF.CDS_F0D_S_N_E_LANE_7_0

// 0x015c	DFE_READ_F0D_ODD		
typedef union {
	struct {
		uint8_t CDS_F0D_D_P_O_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_D_N_O_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_S_P_O_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_S_N_O_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0D_ODD_t;
__xdata __at( 0x615c ) volatile DFE_READ_F0D_ODD_t DFE_READ_F0D_ODD;
#define reg_CDS_F0D_D_P_O_LANE_7_0  DFE_READ_F0D_ODD.BF.CDS_F0D_D_P_O_LANE_7_0
#define reg_CDS_F0D_D_N_O_LANE_7_0  DFE_READ_F0D_ODD.BF.CDS_F0D_D_N_O_LANE_7_0
#define reg_CDS_F0D_S_P_O_LANE_7_0  DFE_READ_F0D_ODD.BF.CDS_F0D_S_P_O_LANE_7_0
#define reg_CDS_F0D_S_N_O_LANE_7_0  DFE_READ_F0D_ODD.BF.CDS_F0D_S_N_O_LANE_7_0

// 0x0160	DFE_READ_F0D_LEFT_EVEN		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_P_E_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_N_E_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_P_E_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_N_E_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0D_LEFT_EVEN_t;
__xdata __at( 0x6160 ) volatile DFE_READ_F0D_LEFT_EVEN_t DFE_READ_F0D_LEFT_EVEN;
#define reg_CDS_F0D_LEFT_D_P_E_LANE_7_0  DFE_READ_F0D_LEFT_EVEN.BF.CDS_F0D_LEFT_D_P_E_LANE_7_0
#define reg_CDS_F0D_LEFT_D_N_E_LANE_7_0  DFE_READ_F0D_LEFT_EVEN.BF.CDS_F0D_LEFT_D_N_E_LANE_7_0
#define reg_CDS_F0D_LEFT_S_P_E_LANE_7_0  DFE_READ_F0D_LEFT_EVEN.BF.CDS_F0D_LEFT_S_P_E_LANE_7_0
#define reg_CDS_F0D_LEFT_S_N_E_LANE_7_0  DFE_READ_F0D_LEFT_EVEN.BF.CDS_F0D_LEFT_S_N_E_LANE_7_0

// 0x0164	DFE_READ_F0D_LEFT_ODD		
typedef union {
	struct {
		uint8_t CDS_F0D_LEFT_D_P_O_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_D_N_O_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_P_O_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_LEFT_S_N_O_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0D_LEFT_ODD_t;
__xdata __at( 0x6164 ) volatile DFE_READ_F0D_LEFT_ODD_t DFE_READ_F0D_LEFT_ODD;
#define reg_CDS_F0D_LEFT_D_P_O_LANE_7_0  DFE_READ_F0D_LEFT_ODD.BF.CDS_F0D_LEFT_D_P_O_LANE_7_0
#define reg_CDS_F0D_LEFT_D_N_O_LANE_7_0  DFE_READ_F0D_LEFT_ODD.BF.CDS_F0D_LEFT_D_N_O_LANE_7_0
#define reg_CDS_F0D_LEFT_S_P_O_LANE_7_0  DFE_READ_F0D_LEFT_ODD.BF.CDS_F0D_LEFT_S_P_O_LANE_7_0
#define reg_CDS_F0D_LEFT_S_N_O_LANE_7_0  DFE_READ_F0D_LEFT_ODD.BF.CDS_F0D_LEFT_S_N_O_LANE_7_0

// 0x0168	DFE_READ_F0D_RIGHT_EVEN		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_P_E_LANE_7_0             : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_N_E_LANE_7_0             : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_P_E_LANE_7_0             : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_N_E_LANE_7_0             : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0D_RIGHT_EVEN_t;
__xdata __at( 0x6168 ) volatile DFE_READ_F0D_RIGHT_EVEN_t DFE_READ_F0D_RIGHT_EVEN;
#define reg_CDS_F0D_RIGHT_D_P_E_LANE_7_0  DFE_READ_F0D_RIGHT_EVEN.BF.CDS_F0D_RIGHT_D_P_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_N_E_LANE_7_0  DFE_READ_F0D_RIGHT_EVEN.BF.CDS_F0D_RIGHT_D_N_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_P_E_LANE_7_0  DFE_READ_F0D_RIGHT_EVEN.BF.CDS_F0D_RIGHT_S_P_E_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_N_E_LANE_7_0  DFE_READ_F0D_RIGHT_EVEN.BF.CDS_F0D_RIGHT_S_N_E_LANE_7_0

// 0x016c	DFE_READ_F0D_RIGHT_ODD		
typedef union {
	struct {
		uint8_t CDS_F0D_RIGHT_D_P_O_LANE_7_0             : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_D_N_O_LANE_7_0             : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_P_O_LANE_7_0             : 8;	/*[23:16]       r 8'h0*/
		uint8_t CDS_F0D_RIGHT_S_N_O_LANE_7_0             : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_F0D_RIGHT_ODD_t;
__xdata __at( 0x616c ) volatile DFE_READ_F0D_RIGHT_ODD_t DFE_READ_F0D_RIGHT_ODD;
#define reg_CDS_F0D_RIGHT_D_P_O_LANE_7_0  DFE_READ_F0D_RIGHT_ODD.BF.CDS_F0D_RIGHT_D_P_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_D_N_O_LANE_7_0  DFE_READ_F0D_RIGHT_ODD.BF.CDS_F0D_RIGHT_D_N_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_P_O_LANE_7_0  DFE_READ_F0D_RIGHT_ODD.BF.CDS_F0D_RIGHT_S_P_O_LANE_7_0
#define reg_CDS_F0D_RIGHT_S_N_O_LANE_7_0  DFE_READ_F0D_RIGHT_ODD.BF.CDS_F0D_RIGHT_S_N_O_LANE_7_0

// 0x0170	CDS_READ_MISC0		
typedef union {
	struct {
		uint8_t CDS_EYE_CHECK_PASS_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t CDS_F0A_SATURATE_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_READ_MISC0_t;
__xdata __at( 0x6170 ) volatile CDS_READ_MISC0_t CDS_READ_MISC0;
#define reg_CDS_EYE_CHECK_PASS_LANE_7_0  CDS_READ_MISC0.BF.CDS_EYE_CHECK_PASS_LANE_7_0
#define reg_CDS_F0A_SATURATE_LANE_7_0  CDS_READ_MISC0.BF.CDS_F0A_SATURATE_LANE_7_0

// 0x0174	CDS_READ_MISC1		
typedef union {
	struct {
		uint8_t CDS_TB_LANE_15_0_b0                      : 8;	/* [15:0]       r 16'h0*/
		uint8_t CDS_TB_LANE_15_0_b1                      : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_READ_MISC1_t;
__xdata __at( 0x6174 ) volatile CDS_READ_MISC1_t CDS_READ_MISC1;
#define reg_CDS_TB_LANE_15_0_b0  CDS_READ_MISC1.BF.CDS_TB_LANE_15_0_b0
#define reg_CDS_TB_LANE_15_0_b1  CDS_READ_MISC1.BF.CDS_TB_LANE_15_0_b1
#define reg_CDS_TB_LANE_15_0  CDS_READ_MISC1.WT.W0

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

#endif
