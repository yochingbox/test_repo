#ifndef PHY_REG_C_ANA_DFEO_LANE_H
#define PHY_REG_C_ANA_DFEO_LANE_H



// 0x0	DFEO_REG0		
typedef union {
	struct {
		uint8_t DFE_F0_D_BOT_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG0_t;
__xdata __at( 0x800 ) volatile DFEO_REG0_t DFEO_REG0;
#define reg_DFE_F0_D_BOT_O_LANE_5_0  DFEO_REG0.BF.DFE_F0_D_BOT_O_LANE_5_0

// 0x1	DFEO_REG1		
typedef union {
	struct {
		uint8_t DFE_F0_D_MID_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG1_t;
__xdata __at( 0x804 ) volatile DFEO_REG1_t DFEO_REG1;
#define reg_DFE_F0_D_MID_O_LANE_5_0  DFEO_REG1.BF.DFE_F0_D_MID_O_LANE_5_0

// 0x2	DFEO_REG2		
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG2_t;
__xdata __at( 0x808 ) volatile DFEO_REG2_t DFEO_REG2;
#define reg_DFE_F0_D_TOP_O_LANE_5_0  DFEO_REG2.BF.DFE_F0_D_TOP_O_LANE_5_0

// 0x3	DFEO_REG3		
typedef union {
	struct {
		uint8_t DFE_F0_S_BOT_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG3_t;
__xdata __at( 0x80c ) volatile DFEO_REG3_t DFEO_REG3;
#define reg_DFE_F0_S_BOT_O_LANE_5_0  DFEO_REG3.BF.DFE_F0_S_BOT_O_LANE_5_0

// 0x4	DFEO_REG4		
typedef union {
	struct {
		uint8_t DFE_F0_S_MID_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG4_t;
__xdata __at( 0x810 ) volatile DFEO_REG4_t DFEO_REG4;
#define reg_DFE_F0_S_MID_O_LANE_5_0  DFEO_REG4.BF.DFE_F0_S_MID_O_LANE_5_0

// 0x5	DFEO_REG5		
typedef union {
	struct {
		uint8_t DFE_F0_S_TOP_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG5_t;
__xdata __at( 0x814 ) volatile DFEO_REG5_t DFEO_REG5;
#define reg_DFE_F0_S_TOP_O_LANE_5_0  DFEO_REG5.BF.DFE_F0_S_TOP_O_LANE_5_0

// 0x6	DFEO_REG6		
typedef union {
	struct {
		uint8_t DFE_F1_D_BOT_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG6_t;
__xdata __at( 0x818 ) volatile DFEO_REG6_t DFEO_REG6;
#define reg_DFE_F1_D_BOT_O_LANE_5_0  DFEO_REG6.BF.DFE_F1_D_BOT_O_LANE_5_0

// 0x7	DFEO_REG7		
typedef union {
	struct {
		uint8_t DFE_F1_D_MID_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG7_t;
__xdata __at( 0x81c ) volatile DFEO_REG7_t DFEO_REG7;
#define reg_DFE_F1_D_MID_O_LANE_5_0  DFEO_REG7.BF.DFE_F1_D_MID_O_LANE_5_0

// 0x8	DFEO_REG8		
typedef union {
	struct {
		uint8_t DFE_F1_D_TOP_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG8_t;
__xdata __at( 0x820 ) volatile DFEO_REG8_t DFEO_REG8;
#define reg_DFE_F1_D_TOP_O_LANE_5_0  DFEO_REG8.BF.DFE_F1_D_TOP_O_LANE_5_0

// 0x9	DFEO_REG9		
typedef union {
	struct {
		uint8_t DFE_F1_S_BOT_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG9_t;
__xdata __at( 0x824 ) volatile DFEO_REG9_t DFEO_REG9;
#define reg_DFE_F1_S_BOT_O_LANE_5_0  DFEO_REG9.BF.DFE_F1_S_BOT_O_LANE_5_0

// 0xa	DFEO_REG10		
typedef union {
	struct {
		uint8_t DFE_F1_S_MID_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG10_t;
__xdata __at( 0x828 ) volatile DFEO_REG10_t DFEO_REG10;
#define reg_DFE_F1_S_MID_O_LANE_5_0  DFEO_REG10.BF.DFE_F1_S_MID_O_LANE_5_0

// 0xb	DFEO_REG11		
typedef union {
	struct {
		uint8_t DFE_F1_S_TOP_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG11_t;
__xdata __at( 0x82c ) volatile DFEO_REG11_t DFEO_REG11;
#define reg_DFE_F1_S_TOP_O_LANE_5_0  DFEO_REG11.BF.DFE_F1_S_TOP_O_LANE_5_0

// 0xc	DFEO_REG12		
typedef union {
	struct {
		uint8_t DFE_F1P5_O_LANE_5_0                      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG12_t;
__xdata __at( 0x830 ) volatile DFEO_REG12_t DFEO_REG12;
#define reg_DFE_F1P5_O_LANE_5_0  DFEO_REG12.BF.DFE_F1P5_O_LANE_5_0

// 0xd	DFEO_REG13		
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG13_t;
__xdata __at( 0x834 ) volatile DFEO_REG13_t DFEO_REG13;
#define reg_DFE_F2_D_BOT_O_LANE_5_0  DFEO_REG13.BF.DFE_F2_D_BOT_O_LANE_5_0

// 0xe	DFEO_REG14		
typedef union {
	struct {
		uint8_t DFE_F2_D_MID_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG14_t;
__xdata __at( 0x838 ) volatile DFEO_REG14_t DFEO_REG14;
#define reg_DFE_F2_D_MID_O_LANE_5_0  DFEO_REG14.BF.DFE_F2_D_MID_O_LANE_5_0

// 0xf	DFEO_REG15		
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG15_t;
__xdata __at( 0x83c ) volatile DFEO_REG15_t DFEO_REG15;
#define reg_DFE_F2_D_TOP_O_LANE_5_0  DFEO_REG15.BF.DFE_F2_D_TOP_O_LANE_5_0

// 0x10	DFEO_REG16		
typedef union {
	struct {
		uint8_t DFE_F2_S_BOT_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG16_t;
__xdata __at( 0x840 ) volatile DFEO_REG16_t DFEO_REG16;
#define reg_DFE_F2_S_BOT_O_LANE_5_0  DFEO_REG16.BF.DFE_F2_S_BOT_O_LANE_5_0

// 0x11	DFEO_REG17		
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG17_t;
__xdata __at( 0x844 ) volatile DFEO_REG17_t DFEO_REG17;
#define reg_DFE_F2_S_MID_O_LANE_5_0  DFEO_REG17.BF.DFE_F2_S_MID_O_LANE_5_0

// 0x12	DFEO_REG18		
typedef union {
	struct {
		uint8_t DFE_F2_S_TOP_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG18_t;
__xdata __at( 0x848 ) volatile DFEO_REG18_t DFEO_REG18;
#define reg_DFE_F2_S_TOP_O_LANE_5_0  DFEO_REG18.BF.DFE_F2_S_TOP_O_LANE_5_0

// 0x13	DFEO_REG19		
typedef union {
	struct {
		uint8_t DFE_F3_BOT_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG19_t;
__xdata __at( 0x84c ) volatile DFEO_REG19_t DFEO_REG19;
#define reg_DFE_F3_BOT_O_LANE_5_0  DFEO_REG19.BF.DFE_F3_BOT_O_LANE_5_0

// 0x14	DFEO_REG20		
typedef union {
	struct {
		uint8_t DFE_F3_MID_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F3_SIGN_O_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG20_t;
__xdata __at( 0x850 ) volatile DFEO_REG20_t DFEO_REG20;
#define reg_DFE_F3_MID_O_LANE_5_0  DFEO_REG20.BF.DFE_F3_MID_O_LANE_5_0
#define reg_DFE_F3_SIGN_O_LANE  DFEO_REG20.BF.DFE_F3_SIGN_O_LANE

// 0x15	DFEO_REG21		
typedef union {
	struct {
		uint8_t DFE_F3_TOP_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG21_t;
__xdata __at( 0x854 ) volatile DFEO_REG21_t DFEO_REG21;
#define reg_DFE_F3_TOP_O_LANE_5_0  DFEO_REG21.BF.DFE_F3_TOP_O_LANE_5_0

// 0x16	DFEO_REG22		
typedef union {
	struct {
		uint8_t DFE_F4_BOT_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG22_t;
__xdata __at( 0x858 ) volatile DFEO_REG22_t DFEO_REG22;
#define reg_DFE_F4_BOT_O_LANE_5_0  DFEO_REG22.BF.DFE_F4_BOT_O_LANE_5_0

// 0x17	DFEO_REG23		
typedef union {
	struct {
		uint8_t DFE_F4_MID_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F4_SIGN_O_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG23_t;
__xdata __at( 0x85c ) volatile DFEO_REG23_t DFEO_REG23;
#define reg_DFE_F4_MID_O_LANE_5_0  DFEO_REG23.BF.DFE_F4_MID_O_LANE_5_0
#define reg_DFE_F4_SIGN_O_LANE  DFEO_REG23.BF.DFE_F4_SIGN_O_LANE

// 0x18	DFEO_REG24		
typedef union {
	struct {
		uint8_t DFE_F4_TOP_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG24_t;
__xdata __at( 0x860 ) volatile DFEO_REG24_t DFEO_REG24;
#define reg_DFE_F4_TOP_O_LANE_5_0  DFEO_REG24.BF.DFE_F4_TOP_O_LANE_5_0

// 0x19	DFEO_REG25		
typedef union {
	struct {
		uint8_t DFE_F5_LSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG25_t;
__xdata __at( 0x864 ) volatile DFEO_REG25_t DFEO_REG25;
#define reg_DFE_F5_LSB_O_LANE_4_0  DFEO_REG25.BF.DFE_F5_LSB_O_LANE_4_0

// 0x1a	DFEO_REG26		
typedef union {
	struct {
		uint8_t DFE_F5_MSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F5_SIGN_O_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG26_t;
__xdata __at( 0x868 ) volatile DFEO_REG26_t DFEO_REG26;
#define reg_DFE_F5_MSB_O_LANE_4_0  DFEO_REG26.BF.DFE_F5_MSB_O_LANE_4_0
#define reg_DFE_F5_SIGN_O_LANE  DFEO_REG26.BF.DFE_F5_SIGN_O_LANE

// 0x1b	DFEO_REG27		
typedef union {
	struct {
		uint8_t DFE_F6_LSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG27_t;
__xdata __at( 0x86c ) volatile DFEO_REG27_t DFEO_REG27;
#define reg_DFE_F6_LSB_O_LANE_4_0  DFEO_REG27.BF.DFE_F6_LSB_O_LANE_4_0

// 0x1c	DFEO_REG28		
typedef union {
	struct {
		uint8_t DFE_F6_MSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F6_SIGN_O_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG28_t;
__xdata __at( 0x870 ) volatile DFEO_REG28_t DFEO_REG28;
#define reg_DFE_F6_MSB_O_LANE_4_0  DFEO_REG28.BF.DFE_F6_MSB_O_LANE_4_0
#define reg_DFE_F6_SIGN_O_LANE  DFEO_REG28.BF.DFE_F6_SIGN_O_LANE

// 0x1d	DFEO_REG29		
typedef union {
	struct {
		uint8_t DFE_F7_LSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG29_t;
__xdata __at( 0x874 ) volatile DFEO_REG29_t DFEO_REG29;
#define reg_DFE_F7_LSB_O_LANE_4_0  DFEO_REG29.BF.DFE_F7_LSB_O_LANE_4_0

// 0x1e	DFEO_REG30		
typedef union {
	struct {
		uint8_t DFE_F7_MSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F7_SIGN_O_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG30_t;
__xdata __at( 0x878 ) volatile DFEO_REG30_t DFEO_REG30;
#define reg_DFE_F7_MSB_O_LANE_4_0  DFEO_REG30.BF.DFE_F7_MSB_O_LANE_4_0
#define reg_DFE_F7_SIGN_O_LANE  DFEO_REG30.BF.DFE_F7_SIGN_O_LANE

// 0x1f	DFEO_REG31		
typedef union {
	struct {
		uint8_t DFE_F8_LSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG31_t;
__xdata __at( 0x87c ) volatile DFEO_REG31_t DFEO_REG31;
#define reg_DFE_F8_LSB_O_LANE_4_0  DFEO_REG31.BF.DFE_F8_LSB_O_LANE_4_0

// 0x20	DFEO_REG32		
typedef union {
	struct {
		uint8_t DFE_F8_MSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F8_SIGN_O_LANE                       : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG32_t;
__xdata __at( 0x880 ) volatile DFEO_REG32_t DFEO_REG32;
#define reg_DFE_F8_MSB_O_LANE_4_0  DFEO_REG32.BF.DFE_F8_MSB_O_LANE_4_0
#define reg_DFE_F8_SIGN_O_LANE  DFEO_REG32.BF.DFE_F8_SIGN_O_LANE

// 0x21	DFEO_REG33		
typedef union {
	struct {
		uint8_t DFE_F9_LSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG33_t;
__xdata __at( 0x884 ) volatile DFEO_REG33_t DFEO_REG33;
#define reg_DFE_F9_LSB_O_LANE_4_0  DFEO_REG33.BF.DFE_F9_LSB_O_LANE_4_0

// 0x22	DFEO_REG34		
typedef union {
	struct {
		uint8_t DFE_F9_MSB_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t DFE_F9_SIGN_O_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG34_t;
__xdata __at( 0x888 ) volatile DFEO_REG34_t DFEO_REG34;
#define reg_DFE_F9_MSB_O_LANE_4_0  DFEO_REG34.BF.DFE_F9_MSB_O_LANE_4_0
#define reg_DFE_F9_SIGN_O_LANE  DFEO_REG34.BF.DFE_F9_SIGN_O_LANE

// 0x23	DFEO_REG35		
typedef union {
	struct {
		uint8_t DFE_F10_LSB_O_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG35_t;
__xdata __at( 0x88c ) volatile DFEO_REG35_t DFEO_REG35;
#define reg_DFE_F10_LSB_O_LANE_4_0  DFEO_REG35.BF.DFE_F10_LSB_O_LANE_4_0

// 0x24	DFEO_REG36		
typedef union {
	struct {
		uint8_t DFE_F10_MSB_O_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t DFE_F10_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG36_t;
__xdata __at( 0x890 ) volatile DFEO_REG36_t DFEO_REG36;
#define reg_DFE_F10_MSB_O_LANE_4_0  DFEO_REG36.BF.DFE_F10_MSB_O_LANE_4_0
#define reg_DFE_F10_SIGN_O_LANE  DFEO_REG36.BF.DFE_F10_SIGN_O_LANE

// 0x25	DFEO_REG37		
typedef union {
	struct {
		uint8_t DFE_F11_O_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F11_SIGN_O_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG37_t;
__xdata __at( 0x894 ) volatile DFEO_REG37_t DFEO_REG37;
#define reg_DFE_F11_O_LANE_3_0  DFEO_REG37.BF.DFE_F11_O_LANE_3_0
#define reg_DFE_F11_SIGN_O_LANE  DFEO_REG37.BF.DFE_F11_SIGN_O_LANE

// 0x26	DFEO_REG38		
typedef union {
	struct {
		uint8_t DFE_F12_O_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F12_SIGN_O_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG38_t;
__xdata __at( 0x898 ) volatile DFEO_REG38_t DFEO_REG38;
#define reg_DFE_F12_O_LANE_3_0  DFEO_REG38.BF.DFE_F12_O_LANE_3_0
#define reg_DFE_F12_SIGN_O_LANE  DFEO_REG38.BF.DFE_F12_SIGN_O_LANE

// 0x27	DFEO_REG39		
typedef union {
	struct {
		uint8_t DFE_F13_O_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F13_SIGN_O_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG39_t;
__xdata __at( 0x89c ) volatile DFEO_REG39_t DFEO_REG39;
#define reg_DFE_F13_O_LANE_3_0  DFEO_REG39.BF.DFE_F13_O_LANE_3_0
#define reg_DFE_F13_SIGN_O_LANE  DFEO_REG39.BF.DFE_F13_SIGN_O_LANE

// 0x28	DFEO_REG40		
typedef union {
	struct {
		uint8_t DFE_F14_O_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F14_SIGN_O_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG40_t;
__xdata __at( 0x8a0 ) volatile DFEO_REG40_t DFEO_REG40;
#define reg_DFE_F14_O_LANE_3_0  DFEO_REG40.BF.DFE_F14_O_LANE_3_0
#define reg_DFE_F14_SIGN_O_LANE  DFEO_REG40.BF.DFE_F14_SIGN_O_LANE

// 0x29	DFEO_REG41		
typedef union {
	struct {
		uint8_t DFE_F15_O_LANE_3_0                       : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F15_SIGN_O_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG41_t;
__xdata __at( 0x8a4 ) volatile DFEO_REG41_t DFEO_REG41;
#define reg_DFE_F15_O_LANE_3_0  DFEO_REG41.BF.DFE_F15_O_LANE_3_0
#define reg_DFE_F15_SIGN_O_LANE  DFEO_REG41.BF.DFE_F15_SIGN_O_LANE

// 0x2a	DFEO_REG42		
typedef union {
	struct {
		uint8_t DFE_FF1_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF1_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG42_t;
__xdata __at( 0x8a8 ) volatile DFEO_REG42_t DFEO_REG42;
#define reg_DFE_FF1_O_LANE_4_0  DFEO_REG42.BF.DFE_FF1_O_LANE_4_0
#define reg_DFE_FF1_SIGN_O_LANE  DFEO_REG42.BF.DFE_FF1_SIGN_O_LANE

// 0x2b	DFEO_REG43		
typedef union {
	struct {
		uint8_t DFE_FF2_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF2_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG43_t;
__xdata __at( 0x8ac ) volatile DFEO_REG43_t DFEO_REG43;
#define reg_DFE_FF2_O_LANE_4_0  DFEO_REG43.BF.DFE_FF2_O_LANE_4_0
#define reg_DFE_FF2_SIGN_O_LANE  DFEO_REG43.BF.DFE_FF2_SIGN_O_LANE

// 0x2c	DFEO_REG44		
typedef union {
	struct {
		uint8_t DFE_FF3_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF3_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG44_t;
__xdata __at( 0x8b0 ) volatile DFEO_REG44_t DFEO_REG44;
#define reg_DFE_FF3_O_LANE_4_0  DFEO_REG44.BF.DFE_FF3_O_LANE_4_0
#define reg_DFE_FF3_SIGN_O_LANE  DFEO_REG44.BF.DFE_FF3_SIGN_O_LANE

// 0x2d	DFEO_REG45		
typedef union {
	struct {
		uint8_t DFE_FF4_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF4_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG45_t;
__xdata __at( 0x8b4 ) volatile DFEO_REG45_t DFEO_REG45;
#define reg_DFE_FF4_O_LANE_4_0  DFEO_REG45.BF.DFE_FF4_O_LANE_4_0
#define reg_DFE_FF4_SIGN_O_LANE  DFEO_REG45.BF.DFE_FF4_SIGN_O_LANE

// 0x2e	DFEO_REG46		
typedef union {
	struct {
		uint8_t DFE_FF5_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF5_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG46_t;
__xdata __at( 0x8b8 ) volatile DFEO_REG46_t DFEO_REG46;
#define reg_DFE_FF5_O_LANE_4_0  DFEO_REG46.BF.DFE_FF5_O_LANE_4_0
#define reg_DFE_FF5_SIGN_O_LANE  DFEO_REG46.BF.DFE_FF5_SIGN_O_LANE

// 0x2f	DFEO_REG47		
typedef union {
	struct {
		uint8_t DFE_FF6_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_FF6_SIGN_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG47_t;
__xdata __at( 0x8bc ) volatile DFEO_REG47_t DFEO_REG47;
#define reg_DFE_FF6_O_LANE_4_0  DFEO_REG47.BF.DFE_FF6_O_LANE_4_0
#define reg_DFE_FF6_SIGN_O_LANE  DFEO_REG47.BF.DFE_FF6_SIGN_O_LANE

// 0x30	DFEO_REG48		
typedef union {
	struct {
		uint8_t F1_TUNE_TOP_D_O_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG48_t;
__xdata __at( 0x8c0 ) volatile DFEO_REG48_t DFEO_REG48;
#define reg_F1_TUNE_TOP_D_O_LANE_3_0  DFEO_REG48.BF.F1_TUNE_TOP_D_O_LANE_3_0

// 0x31	DFEO_REG49		
typedef union {
	struct {
		uint8_t F1_TUNE_TOP_S_O_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG49_t;
__xdata __at( 0x8c4 ) volatile DFEO_REG49_t DFEO_REG49;
#define reg_F1_TUNE_TOP_S_O_LANE_3_0  DFEO_REG49.BF.F1_TUNE_TOP_S_O_LANE_3_0

// 0x32	DFEO_REG50		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_BOT_O_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG50_t;
__xdata __at( 0x8c8 ) volatile DFEO_REG50_t DFEO_REG50;
#define reg_DFE_VREF_NEG_BOT_O_LANE_4_0  DFEO_REG50.BF.DFE_VREF_NEG_BOT_O_LANE_4_0

// 0x33	DFEO_REG51		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_BOT_O_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_BOT_O_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG51_t;
__xdata __at( 0x8cc ) volatile DFEO_REG51_t DFEO_REG51;
#define reg_DFE_VREF_POS_BOT_O_LANE_4_0  DFEO_REG51.BF.DFE_VREF_POS_BOT_O_LANE_4_0
#define reg_DFE_VREF_SIGN_BOT_O_LANE  DFEO_REG51.BF.DFE_VREF_SIGN_BOT_O_LANE

// 0x34	DFEO_REG52		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_MID_O_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG52_t;
__xdata __at( 0x8d0 ) volatile DFEO_REG52_t DFEO_REG52;
#define reg_DFE_VREF_NEG_MID_O_LANE_4_0  DFEO_REG52.BF.DFE_VREF_NEG_MID_O_LANE_4_0

// 0x35	DFEO_REG53		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_MID_O_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_MID_O_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG53_t;
__xdata __at( 0x8d4 ) volatile DFEO_REG53_t DFEO_REG53;
#define reg_DFE_VREF_POS_MID_O_LANE_4_0  DFEO_REG53.BF.DFE_VREF_POS_MID_O_LANE_4_0
#define reg_DFE_VREF_SIGN_MID_O_LANE  DFEO_REG53.BF.DFE_VREF_SIGN_MID_O_LANE

// 0x36	DFEO_REG54		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_TOP_O_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG54_t;
__xdata __at( 0x8d8 ) volatile DFEO_REG54_t DFEO_REG54;
#define reg_DFE_VREF_NEG_TOP_O_LANE_4_0  DFEO_REG54.BF.DFE_VREF_NEG_TOP_O_LANE_4_0

// 0x37	DFEO_REG55		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_TOP_O_LANE_4_0              : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_TOP_O_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG55_t;
__xdata __at( 0x8dc ) volatile DFEO_REG55_t DFEO_REG55;
#define reg_DFE_VREF_POS_TOP_O_LANE_4_0  DFEO_REG55.BF.DFE_VREF_POS_TOP_O_LANE_4_0
#define reg_DFE_VREF_SIGN_TOP_O_LANE  DFEO_REG55.BF.DFE_VREF_SIGN_TOP_O_LANE

// 0x38	DFEO_REG56		
typedef union {
	struct {
		uint8_t OFST_D_BOT_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG56_t;
__xdata __at( 0x8e0 ) volatile DFEO_REG56_t DFEO_REG56;
#define reg_OFST_D_BOT_O_LANE_5_0  DFEO_REG56.BF.OFST_D_BOT_O_LANE_5_0

// 0x39	DFEO_REG57		
typedef union {
	struct {
		uint8_t OFST_D_MID_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG57_t;
__xdata __at( 0x8e4 ) volatile DFEO_REG57_t DFEO_REG57;
#define reg_OFST_D_MID_O_LANE_5_0  DFEO_REG57.BF.OFST_D_MID_O_LANE_5_0

// 0x3a	DFEO_REG58		
typedef union {
	struct {
		uint8_t OFST_D_TOP_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG58_t;
__xdata __at( 0x8e8 ) volatile DFEO_REG58_t DFEO_REG58;
#define reg_OFST_D_TOP_O_LANE_5_0  DFEO_REG58.BF.OFST_D_TOP_O_LANE_5_0

// 0x3b	DFEO_REG59		
typedef union {
	struct {
		uint8_t OFST_S_BOT_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG59_t;
__xdata __at( 0x8ec ) volatile DFEO_REG59_t DFEO_REG59;
#define reg_OFST_S_BOT_O_LANE_5_0  DFEO_REG59.BF.OFST_S_BOT_O_LANE_5_0

// 0x3c	DFEO_REG60		
typedef union {
	struct {
		uint8_t OFST_S_MID_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG60_t;
__xdata __at( 0x8f0 ) volatile DFEO_REG60_t DFEO_REG60;
#define reg_OFST_S_MID_O_LANE_5_0  DFEO_REG60.BF.OFST_S_MID_O_LANE_5_0

// 0x3d	DFEO_REG61		
typedef union {
	struct {
		uint8_t OFST_S_TOP_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG61_t;
__xdata __at( 0x8f4 ) volatile DFEO_REG61_t DFEO_REG61;
#define reg_OFST_S_TOP_O_LANE_5_0  DFEO_REG61.BF.OFST_S_TOP_O_LANE_5_0

// 0x3e	DFEO_REG62		
typedef union {
	struct {
		uint8_t OFST_EDGE_NEG_O_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG62_t;
__xdata __at( 0x8f8 ) volatile DFEO_REG62_t DFEO_REG62;
#define reg_OFST_EDGE_NEG_O_LANE_4_0  DFEO_REG62.BF.OFST_EDGE_NEG_O_LANE_4_0

// 0x3f	DFEO_REG63		
typedef union {
	struct {
		uint8_t OFST_EDGE_POS_O_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_EDGE_SIGN_O_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG63_t;
__xdata __at( 0x8fc ) volatile DFEO_REG63_t DFEO_REG63;
#define reg_OFST_EDGE_POS_O_LANE_4_0  DFEO_REG63.BF.OFST_EDGE_POS_O_LANE_4_0
#define reg_OFST_EDGE_SIGN_O_LANE  DFEO_REG63.BF.OFST_EDGE_SIGN_O_LANE

// 0x40	DFEO_REG64		
typedef union {
	struct {
		uint8_t F1_TUNE_BOT_D_O_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG64_t;
__xdata __at( 0x900 ) volatile DFEO_REG64_t DFEO_REG64;
#define reg_F1_TUNE_BOT_D_O_LANE_3_0  DFEO_REG64.BF.F1_TUNE_BOT_D_O_LANE_3_0

// 0x41	DFEO_REG65		
typedef union {
	struct {
		uint8_t F1_TUNE_BOT_S_O_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFEO_REG65_t;
__xdata __at( 0x904 ) volatile DFEO_REG65_t DFEO_REG65;
#define reg_F1_TUNE_BOT_S_O_LANE_3_0  DFEO_REG65.BF.F1_TUNE_BOT_S_O_LANE_3_0

#endif
