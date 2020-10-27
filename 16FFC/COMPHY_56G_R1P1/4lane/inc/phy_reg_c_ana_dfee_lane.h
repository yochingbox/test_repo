#ifndef PHY_REG_C_ANA_DFEE_LANE_H
#define PHY_REG_C_ANA_DFEE_LANE_H



// 0x0	DFEE_REG0		
typedef union {
	struct {
		uint8_t DFE_F0_D_BOT_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG0_t;
__xdata __at( 0x400 ) volatile DFEE_REG0_t DFEE_REG0;
#define reg_DFE_F0_D_BOT_E_LANE_5_0  DFEE_REG0.BF.DFE_F0_D_BOT_E_LANE_5_0

// 0x1	DFEE_REG1		
typedef union {
	struct {
		uint8_t DFE_F0_D_MID_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG1_t;
__xdata __at( 0x404 ) volatile DFEE_REG1_t DFEE_REG1;
#define reg_DFE_F0_D_MID_E_LANE_5_0  DFEE_REG1.BF.DFE_F0_D_MID_E_LANE_5_0

// 0x2	DFEE_REG2		
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG2_t;
__xdata __at( 0x408 ) volatile DFEE_REG2_t DFEE_REG2;
#define reg_DFE_F0_D_TOP_E_LANE_5_0  DFEE_REG2.BF.DFE_F0_D_TOP_E_LANE_5_0

// 0x3	DFEE_REG3		
typedef union {
	struct {
		uint8_t DFE_F0_S_BOT_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG3_t;
__xdata __at( 0x40c ) volatile DFEE_REG3_t DFEE_REG3;
#define reg_DFE_F0_S_BOT_E_LANE_5_0  DFEE_REG3.BF.DFE_F0_S_BOT_E_LANE_5_0

// 0x4	DFEE_REG4		
typedef union {
	struct {
		uint8_t DFE_F0_S_MID_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG4_t;
__xdata __at( 0x410 ) volatile DFEE_REG4_t DFEE_REG4;
#define reg_DFE_F0_S_MID_E_LANE_5_0  DFEE_REG4.BF.DFE_F0_S_MID_E_LANE_5_0

// 0x5	DFEE_REG5		
typedef union {
	struct {
		uint8_t DFE_F0_S_TOP_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG5_t;
__xdata __at( 0x414 ) volatile DFEE_REG5_t DFEE_REG5;
#define reg_DFE_F0_S_TOP_E_LANE_5_0  DFEE_REG5.BF.DFE_F0_S_TOP_E_LANE_5_0

// 0x6	DFEE_REG6		
typedef union {
	struct {
		uint8_t DFE_F1_D_BOT_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG6_t;
__xdata __at( 0x418 ) volatile DFEE_REG6_t DFEE_REG6;
#define reg_DFE_F1_D_BOT_E_LANE_5_0  DFEE_REG6.BF.DFE_F1_D_BOT_E_LANE_5_0

// 0x7	DFEE_REG7		
typedef union {
	struct {
		uint8_t DFE_F1_D_MID_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG7_t;
__xdata __at( 0x41c ) volatile DFEE_REG7_t DFEE_REG7;
#define reg_DFE_F1_D_MID_E_LANE_5_0  DFEE_REG7.BF.DFE_F1_D_MID_E_LANE_5_0

// 0x8	DFEE_REG8		
typedef union {
	struct {
		uint8_t DFE_F1_D_TOP_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG8_t;
__xdata __at( 0x420 ) volatile DFEE_REG8_t DFEE_REG8;
#define reg_DFE_F1_D_TOP_E_LANE_5_0  DFEE_REG8.BF.DFE_F1_D_TOP_E_LANE_5_0

// 0x9	DFEE_REG9		
typedef union {
	struct {
		uint8_t DFE_F1_S_BOT_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG9_t;
__xdata __at( 0x424 ) volatile DFEE_REG9_t DFEE_REG9;
#define reg_DFE_F1_S_BOT_E_LANE_5_0  DFEE_REG9.BF.DFE_F1_S_BOT_E_LANE_5_0

// 0xa	DFEE_REG10		
typedef union {
	struct {
		uint8_t DFE_F1_S_MID_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG10_t;
__xdata __at( 0x428 ) volatile DFEE_REG10_t DFEE_REG10;
#define reg_DFE_F1_S_MID_E_LANE_5_0  DFEE_REG10.BF.DFE_F1_S_MID_E_LANE_5_0

// 0xb	DFEE_REG11		
typedef union {
	struct {
		uint8_t DFE_F1_S_TOP_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG11_t;
__xdata __at( 0x42c ) volatile DFEE_REG11_t DFEE_REG11;
#define reg_DFE_F1_S_TOP_E_LANE_5_0  DFEE_REG11.BF.DFE_F1_S_TOP_E_LANE_5_0

// 0xc	DFEE_REG12		
typedef union {
	struct {
		uint8_t DFE_F1P5_E_LANE_5_0                      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG12_t;
__xdata __at( 0x430 ) volatile DFEE_REG12_t DFEE_REG12;
#define reg_DFE_F1P5_E_LANE_5_0  DFEE_REG12.BF.DFE_F1P5_E_LANE_5_0

// 0xd	DFEE_REG13		
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG13_t;
__xdata __at( 0x434 ) volatile DFEE_REG13_t DFEE_REG13;
#define reg_DFE_F2_D_BOT_E_LANE_5_0  DFEE_REG13.BF.DFE_F2_D_BOT_E_LANE_5_0

// 0xe	DFEE_REG14		
typedef union {
	struct {
		uint8_t DFE_F2_D_MID_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG14_t;
__xdata __at( 0x438 ) volatile DFEE_REG14_t DFEE_REG14;
#define reg_DFE_F2_D_MID_E_LANE_5_0  DFEE_REG14.BF.DFE_F2_D_MID_E_LANE_5_0

// 0xf	DFEE_REG15		
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG15_t;
__xdata __at( 0x43c ) volatile DFEE_REG15_t DFEE_REG15;
#define reg_DFE_F2_D_TOP_E_LANE_5_0  DFEE_REG15.BF.DFE_F2_D_TOP_E_LANE_5_0

// 0x10	DFEE_REG16		
typedef union {
	struct {
		uint8_t DFE_F2_S_BOT_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG16_t;
__xdata __at( 0x440 ) volatile DFEE_REG16_t DFEE_REG16;
#define reg_DFE_F2_S_BOT_E_LANE_5_0  DFEE_REG16.BF.DFE_F2_S_BOT_E_LANE_5_0

// 0x11	DFEE_REG17		
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG17_t;
__xdata __at( 0x444 ) volatile DFEE_REG17_t DFEE_REG17;
#define reg_DFE_F2_S_MID_E_LANE_5_0  DFEE_REG17.BF.DFE_F2_S_MID_E_LANE_5_0

// 0x12	DFEE_REG18		
typedef union {
	struct {
		uint8_t DFE_F2_S_TOP_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG18_t;
__xdata __at( 0x448 ) volatile DFEE_REG18_t DFEE_REG18;
#define reg_DFE_F2_S_TOP_E_LANE_5_0  DFEE_REG18.BF.DFE_F2_S_TOP_E_LANE_5_0

// 0x13	DFEE_REG19		
typedef union {
	struct {
		uint8_t DFE_F3_BOT_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG19_t;
__xdata __at( 0x44c ) volatile DFEE_REG19_t DFEE_REG19;
#define reg_DFE_F3_BOT_E_LANE_5_0  DFEE_REG19.BF.DFE_F3_BOT_E_LANE_5_0

// 0x14	DFEE_REG20		
typedef union {
	struct {
		uint8_t DFE_F3_MID_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F3_SIGN_E_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG20_t;
__xdata __at( 0x450 ) volatile DFEE_REG20_t DFEE_REG20;
#define reg_DFE_F3_MID_E_LANE_5_0  DFEE_REG20.BF.DFE_F3_MID_E_LANE_5_0
#define reg_DFE_F3_SIGN_E_LANE  DFEE_REG20.BF.DFE_F3_SIGN_E_LANE

// 0x15	DFEE_REG21		
typedef union {
	struct {
		uint8_t DFE_F3_TOP_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG21_t;
__xdata __at( 0x454 ) volatile DFEE_REG21_t DFEE_REG21;
#define reg_DFE_F3_TOP_E_LANE_5_0  DFEE_REG21.BF.DFE_F3_TOP_E_LANE_5_0

// 0x16	DFEE_REG22		
typedef union {
	struct {
		uint8_t DFE_F4_BOT_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG22_t;
__xdata __at( 0x458 ) volatile DFEE_REG22_t DFEE_REG22;
#define reg_DFE_F4_BOT_E_LANE_5_0  DFEE_REG22.BF.DFE_F4_BOT_E_LANE_5_0

// 0x17	DFEE_REG23		
typedef union {
	struct {
		uint8_t DFE_F4_MID_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F4_SIGN_E_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG23_t;
__xdata __at( 0x45c ) volatile DFEE_REG23_t DFEE_REG23;
#define reg_DFE_F4_MID_E_LANE_5_0  DFEE_REG23.BF.DFE_F4_MID_E_LANE_5_0
#define reg_DFE_F4_SIGN_E_LANE  DFEE_REG23.BF.DFE_F4_SIGN_E_LANE

// 0x18	DFEE_REG24		
typedef union {
	struct {
		uint8_t DFE_F4_TOP_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG24_t;
__xdata __at( 0x460 ) volatile DFEE_REG24_t DFEE_REG24;
#define reg_DFE_F4_TOP_E_LANE_5_0  DFEE_REG24.BF.DFE_F4_TOP_E_LANE_5_0

// 0x19	DFEE_REG25		
typedef union {
	struct {
		uint8_t DFE_F5_LSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG25_t;
__xdata __at( 0x464 ) volatile DFEE_REG25_t DFEE_REG25;
#define reg_DFE_F5_LSB_E_LANE_4_0  DFEE_REG25.BF.DFE_F5_LSB_E_LANE_4_0

// 0x1a	DFEE_REG26		
typedef union {
	struct {
		uint8_t DFE_F5_MSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F5_SIGN_E_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG26_t;
__xdata __at( 0x468 ) volatile DFEE_REG26_t DFEE_REG26;
#define reg_DFE_F5_MSB_E_LANE_4_0  DFEE_REG26.BF.DFE_F5_MSB_E_LANE_4_0
#define reg_DFE_F5_SIGN_E_LANE  DFEE_REG26.BF.DFE_F5_SIGN_E_LANE

// 0x1b	DFEE_REG27		
typedef union {
	struct {
		uint8_t DFE_F6_LSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG27_t;
__xdata __at( 0x46c ) volatile DFEE_REG27_t DFEE_REG27;
#define reg_DFE_F6_LSB_E_LANE_4_0  DFEE_REG27.BF.DFE_F6_LSB_E_LANE_4_0

// 0x1c	DFEE_REG28		
typedef union {
	struct {
		uint8_t DFE_F6_MSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F6_SIGN_E_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG28_t;
__xdata __at( 0x470 ) volatile DFEE_REG28_t DFEE_REG28;
#define reg_DFE_F6_MSB_E_LANE_4_0  DFEE_REG28.BF.DFE_F6_MSB_E_LANE_4_0
#define reg_DFE_F6_SIGN_E_LANE  DFEE_REG28.BF.DFE_F6_SIGN_E_LANE

// 0x1d	DFEE_REG29		
typedef union {
	struct {
		uint8_t DFE_F7_LSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG29_t;
__xdata __at( 0x474 ) volatile DFEE_REG29_t DFEE_REG29;
#define reg_DFE_F7_LSB_E_LANE_4_0  DFEE_REG29.BF.DFE_F7_LSB_E_LANE_4_0

// 0x1e	DFEE_REG30		
typedef union {
	struct {
		uint8_t DFE_F7_MSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F7_SIGN_E_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG30_t;
__xdata __at( 0x478 ) volatile DFEE_REG30_t DFEE_REG30;
#define reg_DFE_F7_MSB_E_LANE_4_0  DFEE_REG30.BF.DFE_F7_MSB_E_LANE_4_0
#define reg_DFE_F7_SIGN_E_LANE  DFEE_REG30.BF.DFE_F7_SIGN_E_LANE

// 0x1f	DFEE_REG31		
typedef union {
	struct {
		uint8_t DFE_F8_LSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG31_t;
__xdata __at( 0x47c ) volatile DFEE_REG31_t DFEE_REG31;
#define reg_DFE_F8_LSB_E_LANE_4_0  DFEE_REG31.BF.DFE_F8_LSB_E_LANE_4_0

// 0x20	DFEE_REG32		
typedef union {
	struct {
		uint8_t DFE_F8_MSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F8_SIGN_E_LANE                       : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG32_t;
__xdata __at( 0x480 ) volatile DFEE_REG32_t DFEE_REG32;
#define reg_DFE_F8_MSB_E_LANE_4_0  DFEE_REG32.BF.DFE_F8_MSB_E_LANE_4_0
#define reg_DFE_F8_SIGN_E_LANE  DFEE_REG32.BF.DFE_F8_SIGN_E_LANE

// 0x21	DFEE_REG33		
typedef union {
	struct {
		uint8_t DFE_F9_LSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG33_t;
__xdata __at( 0x484 ) volatile DFEE_REG33_t DFEE_REG33;
#define reg_DFE_F9_LSB_E_LANE_4_0  DFEE_REG33.BF.DFE_F9_LSB_E_LANE_4_0

// 0x22	DFEE_REG34		
typedef union {
	struct {
		uint8_t DFE_F9_MSB_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t DFE_F9_SIGN_E_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG34_t;
__xdata __at( 0x488 ) volatile DFEE_REG34_t DFEE_REG34;
#define reg_DFE_F9_MSB_E_LANE_4_0  DFEE_REG34.BF.DFE_F9_MSB_E_LANE_4_0
#define reg_DFE_F9_SIGN_E_LANE  DFEE_REG34.BF.DFE_F9_SIGN_E_LANE

// 0x23	DFEE_REG35		
typedef union {
	struct {
		uint8_t DFE_F10_LSB_E_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG35_t;
__xdata __at( 0x48c ) volatile DFEE_REG35_t DFEE_REG35;
#define reg_DFE_F10_LSB_E_LANE_4_0  DFEE_REG35.BF.DFE_F10_LSB_E_LANE_4_0

// 0x24	DFEE_REG36		
typedef union {
	struct {
		uint8_t DFE_F10_MSB_E_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t DFE_F10_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG36_t;
__xdata __at( 0x490 ) volatile DFEE_REG36_t DFEE_REG36;
#define reg_DFE_F10_MSB_E_LANE_4_0  DFEE_REG36.BF.DFE_F10_MSB_E_LANE_4_0
#define reg_DFE_F10_SIGN_E_LANE  DFEE_REG36.BF.DFE_F10_SIGN_E_LANE

// 0x25	DFEE_REG37		
typedef union {
	struct {
		uint8_t DFE_F11_E_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F11_SIGN_E_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG37_t;
__xdata __at( 0x494 ) volatile DFEE_REG37_t DFEE_REG37;
#define reg_DFE_F11_E_LANE_3_0  DFEE_REG37.BF.DFE_F11_E_LANE_3_0
#define reg_DFE_F11_SIGN_E_LANE  DFEE_REG37.BF.DFE_F11_SIGN_E_LANE

// 0x26	DFEE_REG38		
typedef union {
	struct {
		uint8_t DFE_F12_E_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F12_SIGN_E_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG38_t;
__xdata __at( 0x498 ) volatile DFEE_REG38_t DFEE_REG38;
#define reg_DFE_F12_E_LANE_3_0  DFEE_REG38.BF.DFE_F12_E_LANE_3_0
#define reg_DFE_F12_SIGN_E_LANE  DFEE_REG38.BF.DFE_F12_SIGN_E_LANE

// 0x27	DFEE_REG39		
typedef union {
	struct {
		uint8_t DFE_F13_E_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F13_SIGN_E_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG39_t;
__xdata __at( 0x49c ) volatile DFEE_REG39_t DFEE_REG39;
#define reg_DFE_F13_E_LANE_3_0  DFEE_REG39.BF.DFE_F13_E_LANE_3_0
#define reg_DFE_F13_SIGN_E_LANE  DFEE_REG39.BF.DFE_F13_SIGN_E_LANE

// 0x28	DFEE_REG40		
typedef union {
	struct {
		uint8_t DFE_F14_E_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F14_SIGN_E_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG40_t;
__xdata __at( 0x4a0 ) volatile DFEE_REG40_t DFEE_REG40;
#define reg_DFE_F14_E_LANE_3_0  DFEE_REG40.BF.DFE_F14_E_LANE_3_0
#define reg_DFE_F14_SIGN_E_LANE  DFEE_REG40.BF.DFE_F14_SIGN_E_LANE

// 0x29	DFEE_REG41		
typedef union {
	struct {
		uint8_t DFE_F15_E_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F15_SIGN_E_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG41_t;
__xdata __at( 0x4a4 ) volatile DFEE_REG41_t DFEE_REG41;
#define reg_DFE_F15_E_LANE_3_0  DFEE_REG41.BF.DFE_F15_E_LANE_3_0
#define reg_DFE_F15_SIGN_E_LANE  DFEE_REG41.BF.DFE_F15_SIGN_E_LANE

// 0x2a	DFEE_REG42		
typedef union {
	struct {
		uint8_t DFE_FF1_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF1_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG42_t;
__xdata __at( 0x4a8 ) volatile DFEE_REG42_t DFEE_REG42;
#define reg_DFE_FF1_E_LANE_4_0  DFEE_REG42.BF.DFE_FF1_E_LANE_4_0
#define reg_DFE_FF1_SIGN_E_LANE  DFEE_REG42.BF.DFE_FF1_SIGN_E_LANE

// 0x2b	DFEE_REG43		
typedef union {
	struct {
		uint8_t DFE_FF2_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF2_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG43_t;
__xdata __at( 0x4ac ) volatile DFEE_REG43_t DFEE_REG43;
#define reg_DFE_FF2_E_LANE_4_0  DFEE_REG43.BF.DFE_FF2_E_LANE_4_0
#define reg_DFE_FF2_SIGN_E_LANE  DFEE_REG43.BF.DFE_FF2_SIGN_E_LANE

// 0x2c	DFEE_REG44		
typedef union {
	struct {
		uint8_t DFE_FF3_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF3_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG44_t;
__xdata __at( 0x4b0 ) volatile DFEE_REG44_t DFEE_REG44;
#define reg_DFE_FF3_E_LANE_4_0  DFEE_REG44.BF.DFE_FF3_E_LANE_4_0
#define reg_DFE_FF3_SIGN_E_LANE  DFEE_REG44.BF.DFE_FF3_SIGN_E_LANE

// 0x2d	DFEE_REG45		
typedef union {
	struct {
		uint8_t DFE_FF4_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF4_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG45_t;
__xdata __at( 0x4b4 ) volatile DFEE_REG45_t DFEE_REG45;
#define reg_DFE_FF4_E_LANE_4_0  DFEE_REG45.BF.DFE_FF4_E_LANE_4_0
#define reg_DFE_FF4_SIGN_E_LANE  DFEE_REG45.BF.DFE_FF4_SIGN_E_LANE

// 0x2e	DFEE_REG46		
typedef union {
	struct {
		uint8_t DFE_FF5_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF5_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG46_t;
__xdata __at( 0x4b8 ) volatile DFEE_REG46_t DFEE_REG46;
#define reg_DFE_FF5_E_LANE_4_0  DFEE_REG46.BF.DFE_FF5_E_LANE_4_0
#define reg_DFE_FF5_SIGN_E_LANE  DFEE_REG46.BF.DFE_FF5_SIGN_E_LANE

// 0x2f	DFEE_REG47		
typedef union {
	struct {
		uint8_t DFE_FF6_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF6_SIGN_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG47_t;
__xdata __at( 0x4bc ) volatile DFEE_REG47_t DFEE_REG47;
#define reg_DFE_FF6_E_LANE_4_0  DFEE_REG47.BF.DFE_FF6_E_LANE_4_0
#define reg_DFE_FF6_SIGN_E_LANE  DFEE_REG47.BF.DFE_FF6_SIGN_E_LANE

// 0x30	DFEE_REG48		
typedef union {
	struct {
		uint8_t F1_TUNE_TOP_D_E_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG48_t;
__xdata __at( 0x4c0 ) volatile DFEE_REG48_t DFEE_REG48;
#define reg_F1_TUNE_TOP_D_E_LANE_3_0  DFEE_REG48.BF.F1_TUNE_TOP_D_E_LANE_3_0

// 0x31	DFEE_REG49		
typedef union {
	struct {
		uint8_t F1_TUNE_TOP_S_E_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG49_t;
__xdata __at( 0x4c4 ) volatile DFEE_REG49_t DFEE_REG49;
#define reg_F1_TUNE_TOP_S_E_LANE_3_0  DFEE_REG49.BF.F1_TUNE_TOP_S_E_LANE_3_0

// 0x32	DFEE_REG50		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_BOT_E_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG50_t;
__xdata __at( 0x4c8 ) volatile DFEE_REG50_t DFEE_REG50;
#define reg_DFE_VREF_NEG_BOT_E_LANE_4_0  DFEE_REG50.BF.DFE_VREF_NEG_BOT_E_LANE_4_0

// 0x33	DFEE_REG51		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_BOT_E_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_BOT_E_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG51_t;
__xdata __at( 0x4cc ) volatile DFEE_REG51_t DFEE_REG51;
#define reg_DFE_VREF_POS_BOT_E_LANE_4_0  DFEE_REG51.BF.DFE_VREF_POS_BOT_E_LANE_4_0
#define reg_DFE_VREF_SIGN_BOT_E_LANE  DFEE_REG51.BF.DFE_VREF_SIGN_BOT_E_LANE

// 0x34	DFEE_REG52		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_MID_E_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG52_t;
__xdata __at( 0x4d0 ) volatile DFEE_REG52_t DFEE_REG52;
#define reg_DFE_VREF_NEG_MID_E_LANE_4_0  DFEE_REG52.BF.DFE_VREF_NEG_MID_E_LANE_4_0

// 0x35	DFEE_REG53		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_MID_E_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_MID_E_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG53_t;
__xdata __at( 0x4d4 ) volatile DFEE_REG53_t DFEE_REG53;
#define reg_DFE_VREF_POS_MID_E_LANE_4_0  DFEE_REG53.BF.DFE_VREF_POS_MID_E_LANE_4_0
#define reg_DFE_VREF_SIGN_MID_E_LANE  DFEE_REG53.BF.DFE_VREF_SIGN_MID_E_LANE

// 0x36	DFEE_REG54		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_TOP_E_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG54_t;
__xdata __at( 0x4d8 ) volatile DFEE_REG54_t DFEE_REG54;
#define reg_DFE_VREF_NEG_TOP_E_LANE_4_0  DFEE_REG54.BF.DFE_VREF_NEG_TOP_E_LANE_4_0

// 0x37	DFEE_REG55		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_TOP_E_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_TOP_E_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG55_t;
__xdata __at( 0x4dc ) volatile DFEE_REG55_t DFEE_REG55;
#define reg_DFE_VREF_POS_TOP_E_LANE_4_0  DFEE_REG55.BF.DFE_VREF_POS_TOP_E_LANE_4_0
#define reg_DFE_VREF_SIGN_TOP_E_LANE  DFEE_REG55.BF.DFE_VREF_SIGN_TOP_E_LANE

// 0x38	DFEE_REG56		
typedef union {
	struct {
		uint8_t OFST_D_BOT_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG56_t;
__xdata __at( 0x4e0 ) volatile DFEE_REG56_t DFEE_REG56;
#define reg_OFST_D_BOT_E_LANE_5_0  DFEE_REG56.BF.OFST_D_BOT_E_LANE_5_0

// 0x39	DFEE_REG57		
typedef union {
	struct {
		uint8_t OFST_D_MID_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG57_t;
__xdata __at( 0x4e4 ) volatile DFEE_REG57_t DFEE_REG57;
#define reg_OFST_D_MID_E_LANE_5_0  DFEE_REG57.BF.OFST_D_MID_E_LANE_5_0

// 0x3a	DFEE_REG58		
typedef union {
	struct {
		uint8_t OFST_D_TOP_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG58_t;
__xdata __at( 0x4e8 ) volatile DFEE_REG58_t DFEE_REG58;
#define reg_OFST_D_TOP_E_LANE_5_0  DFEE_REG58.BF.OFST_D_TOP_E_LANE_5_0

// 0x3b	DFEE_REG59		
typedef union {
	struct {
		uint8_t OFST_S_BOT_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG59_t;
__xdata __at( 0x4ec ) volatile DFEE_REG59_t DFEE_REG59;
#define reg_OFST_S_BOT_E_LANE_5_0  DFEE_REG59.BF.OFST_S_BOT_E_LANE_5_0

// 0x3c	DFEE_REG60		
typedef union {
	struct {
		uint8_t OFST_S_MID_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG60_t;
__xdata __at( 0x4f0 ) volatile DFEE_REG60_t DFEE_REG60;
#define reg_OFST_S_MID_E_LANE_5_0  DFEE_REG60.BF.OFST_S_MID_E_LANE_5_0

// 0x3d	DFEE_REG61		
typedef union {
	struct {
		uint8_t OFST_S_TOP_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG61_t;
__xdata __at( 0x4f4 ) volatile DFEE_REG61_t DFEE_REG61;
#define reg_OFST_S_TOP_E_LANE_5_0  DFEE_REG61.BF.OFST_S_TOP_E_LANE_5_0

// 0x3e	DFEE_REG62		
typedef union {
	struct {
		uint8_t OFST_EDGE_NEG_E_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG62_t;
__xdata __at( 0x4f8 ) volatile DFEE_REG62_t DFEE_REG62;
#define reg_OFST_EDGE_NEG_E_LANE_4_0  DFEE_REG62.BF.OFST_EDGE_NEG_E_LANE_4_0

// 0x3f	DFEE_REG63		
typedef union {
	struct {
		uint8_t OFST_EDGE_POS_E_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_EDGE_SIGN_E_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG63_t;
__xdata __at( 0x4fc ) volatile DFEE_REG63_t DFEE_REG63;
#define reg_OFST_EDGE_POS_E_LANE_4_0  DFEE_REG63.BF.OFST_EDGE_POS_E_LANE_4_0
#define reg_OFST_EDGE_SIGN_E_LANE  DFEE_REG63.BF.OFST_EDGE_SIGN_E_LANE

// 0x40	DFEE_REG64		
typedef union {
	struct {
		uint8_t F1_TUNE_BOT_D_E_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG64_t;
__xdata __at( 0x500 ) volatile DFEE_REG64_t DFEE_REG64;
#define reg_F1_TUNE_BOT_D_E_LANE_3_0  DFEE_REG64.BF.F1_TUNE_BOT_D_E_LANE_3_0

// 0x41	DFEE_REG65		
typedef union {
	struct {
		uint8_t F1_TUNE_BOT_S_E_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEE_REG65_t;
__xdata __at( 0x504 ) volatile DFEE_REG65_t DFEE_REG65;
#define reg_F1_TUNE_BOT_S_E_LANE_3_0  DFEE_REG65.BF.F1_TUNE_BOT_S_E_LANE_3_0

// 0x42	AFIR_REG0		
typedef union {
	struct {
		uint8_t AFIR_FN1_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AFIR_REG0_t;
__xdata __at( 0x508 ) volatile AFIR_REG0_t AFIR_REG0;
#define reg_AFIR_FN1_LANE_4_0  AFIR_REG0.BF.AFIR_FN1_LANE_4_0

// 0x43	AFIR_REG1		
typedef union {
	struct {
		uint8_t AFIR_F0_LANE_4_0                         : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AFIR_REG1_t;
__xdata __at( 0x50c ) volatile AFIR_REG1_t AFIR_REG1;
#define reg_AFIR_F0_LANE_4_0  AFIR_REG1.BF.AFIR_F0_LANE_4_0

// 0x44	AFIR_REG2		
typedef union {
	struct {
		uint8_t AFIR_FP1_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AFIR_REG2_t;
__xdata __at( 0x510 ) volatile AFIR_REG2_t AFIR_REG2;
#define reg_AFIR_FP1_LANE_4_0  AFIR_REG2.BF.AFIR_FP1_LANE_4_0

#endif
