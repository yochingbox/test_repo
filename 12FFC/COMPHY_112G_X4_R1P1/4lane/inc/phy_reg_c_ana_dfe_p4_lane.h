#ifndef PHY_REG_C_ANA_DFE_P4_LANE_H
#define PHY_REG_C_ANA_DFE_P4_LANE_H



// 0x0	DFE_P4_REG0		
typedef union {
	struct {
		uint8_t DFE_F0_D_BOT_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG0_t;
__xdata __at( 0x1c00 ) volatile DFE_P4_REG0_t DFE_P4_REG0;
#define reg_DFE_F0_D_BOT_P4_LANE_5_0  DFE_P4_REG0.BF.DFE_F0_D_BOT_P4_LANE_5_0

// 0x1	DFE_P4_REG1		
typedef union {
	struct {
		uint8_t DFE_F0_D_MID_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG1_t;
__xdata __at( 0x1c04 ) volatile DFE_P4_REG1_t DFE_P4_REG1;
#define reg_DFE_F0_D_MID_P4_LANE_5_0  DFE_P4_REG1.BF.DFE_F0_D_MID_P4_LANE_5_0

// 0x2	DFE_P4_REG2		
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG2_t;
__xdata __at( 0x1c08 ) volatile DFE_P4_REG2_t DFE_P4_REG2;
#define reg_DFE_F0_D_TOP_P4_LANE_5_0  DFE_P4_REG2.BF.DFE_F0_D_TOP_P4_LANE_5_0

// 0x3	DFE_P4_REG3		
typedef union {
	struct {
		uint8_t DFE_F0_S_BOT_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG3_t;
__xdata __at( 0x1c0c ) volatile DFE_P4_REG3_t DFE_P4_REG3;
#define reg_DFE_F0_S_BOT_P4_LANE_5_0  DFE_P4_REG3.BF.DFE_F0_S_BOT_P4_LANE_5_0

// 0x4	DFE_P4_REG4		
typedef union {
	struct {
		uint8_t DFE_F0_S_MID_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG4_t;
__xdata __at( 0x1c10 ) volatile DFE_P4_REG4_t DFE_P4_REG4;
#define reg_DFE_F0_S_MID_P4_LANE_5_0  DFE_P4_REG4.BF.DFE_F0_S_MID_P4_LANE_5_0

// 0x5	DFE_P4_REG5		
typedef union {
	struct {
		uint8_t DFE_F0_S_TOP_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG5_t;
__xdata __at( 0x1c14 ) volatile DFE_P4_REG5_t DFE_P4_REG5;
#define reg_DFE_F0_S_TOP_P4_LANE_5_0  DFE_P4_REG5.BF.DFE_F0_S_TOP_P4_LANE_5_0

// 0x6	DFE_P4_REG6		
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P4_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG6_t;
__xdata __at( 0x1c18 ) volatile DFE_P4_REG6_t DFE_P4_REG6;
#define reg_DFE_F2_D_BOT_P4_LANE_6_0  DFE_P4_REG6.BF.DFE_F2_D_BOT_P4_LANE_6_0

// 0x7	DFE_P4_REG7		
typedef union {
	struct {
		uint8_t DFE_F2_D_MID_P4_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG7_t;
__xdata __at( 0x1c1c ) volatile DFE_P4_REG7_t DFE_P4_REG7;
#define reg_DFE_F2_D_MID_P4_LANE_6_0  DFE_P4_REG7.BF.DFE_F2_D_MID_P4_LANE_6_0

// 0x8	DFE_P4_REG8		
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_P4_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG8_t;
__xdata __at( 0x1c20 ) volatile DFE_P4_REG8_t DFE_P4_REG8;
#define reg_DFE_F2_D_TOP_P4_LANE_6_0  DFE_P4_REG8.BF.DFE_F2_D_TOP_P4_LANE_6_0

// 0x9	DFE_P4_REG9		
typedef union {
	struct {
		uint8_t DFE_F2_S_BOT_P4_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG9_t;
__xdata __at( 0x1c24 ) volatile DFE_P4_REG9_t DFE_P4_REG9;
#define reg_DFE_F2_S_BOT_P4_LANE_6_0  DFE_P4_REG9.BF.DFE_F2_S_BOT_P4_LANE_6_0

// 0xa	DFE_P4_REG10		
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P4_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG10_t;
__xdata __at( 0x1c28 ) volatile DFE_P4_REG10_t DFE_P4_REG10;
#define reg_DFE_F2_S_MID_P4_LANE_6_0  DFE_P4_REG10.BF.DFE_F2_S_MID_P4_LANE_6_0

// 0xb	DFE_P4_REG11		
typedef union {
	struct {
		uint8_t DFE_F2_S_TOP_P4_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG11_t;
__xdata __at( 0x1c2c ) volatile DFE_P4_REG11_t DFE_P4_REG11;
#define reg_DFE_F2_S_TOP_P4_LANE_6_0  DFE_P4_REG11.BF.DFE_F2_S_TOP_P4_LANE_6_0

// 0xc	DFE_P4_REG12		
typedef union {
	struct {
		uint8_t DFE_F3_D_BOT_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG12_t;
__xdata __at( 0x1c30 ) volatile DFE_P4_REG12_t DFE_P4_REG12;
#define reg_DFE_F3_D_BOT_P4_LANE_5_0  DFE_P4_REG12.BF.DFE_F3_D_BOT_P4_LANE_5_0

// 0xd	DFE_P4_REG13		
typedef union {
	struct {
		uint8_t DFE_F3_D_MID_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG13_t;
__xdata __at( 0x1c34 ) volatile DFE_P4_REG13_t DFE_P4_REG13;
#define reg_DFE_F3_D_MID_P4_LANE_5_0  DFE_P4_REG13.BF.DFE_F3_D_MID_P4_LANE_5_0

// 0xe	DFE_P4_REG14		
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG14_t;
__xdata __at( 0x1c38 ) volatile DFE_P4_REG14_t DFE_P4_REG14;
#define reg_DFE_F3_D_TOP_P4_LANE_5_0  DFE_P4_REG14.BF.DFE_F3_D_TOP_P4_LANE_5_0

// 0xf	DFE_P4_REG15		
typedef union {
	struct {
		uint8_t DFE_F3_S_BOT_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG15_t;
__xdata __at( 0x1c3c ) volatile DFE_P4_REG15_t DFE_P4_REG15;
#define reg_DFE_F3_S_BOT_P4_LANE_5_0  DFE_P4_REG15.BF.DFE_F3_S_BOT_P4_LANE_5_0

// 0x10	DFE_P4_REG16		
typedef union {
	struct {
		uint8_t DFE_F3_S_MID_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG16_t;
__xdata __at( 0x1c40 ) volatile DFE_P4_REG16_t DFE_P4_REG16;
#define reg_DFE_F3_S_MID_P4_LANE_5_0  DFE_P4_REG16.BF.DFE_F3_S_MID_P4_LANE_5_0

// 0x11	DFE_P4_REG17		
typedef union {
	struct {
		uint8_t DFE_F3_S_TOP_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG17_t;
__xdata __at( 0x1c44 ) volatile DFE_P4_REG17_t DFE_P4_REG17;
#define reg_DFE_F3_S_TOP_P4_LANE_5_0  DFE_P4_REG17.BF.DFE_F3_S_TOP_P4_LANE_5_0

// 0x12	DFE_P4_REG18		
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG18_t;
__xdata __at( 0x1c48 ) volatile DFE_P4_REG18_t DFE_P4_REG18;
#define reg_DFE_F4_D_BOT_P4_LANE_5_0  DFE_P4_REG18.BF.DFE_F4_D_BOT_P4_LANE_5_0

// 0x13	DFE_P4_REG19		
typedef union {
	struct {
		uint8_t DFE_F4_D_MID_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG19_t;
__xdata __at( 0x1c4c ) volatile DFE_P4_REG19_t DFE_P4_REG19;
#define reg_DFE_F4_D_MID_P4_LANE_5_0  DFE_P4_REG19.BF.DFE_F4_D_MID_P4_LANE_5_0

// 0x14	DFE_P4_REG20		
typedef union {
	struct {
		uint8_t DFE_F4_D_TOP_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG20_t;
__xdata __at( 0x1c50 ) volatile DFE_P4_REG20_t DFE_P4_REG20;
#define reg_DFE_F4_D_TOP_P4_LANE_5_0  DFE_P4_REG20.BF.DFE_F4_D_TOP_P4_LANE_5_0

// 0x15	DFE_P4_REG21		
typedef union {
	struct {
		uint8_t DFE_F4_S_BOT_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG21_t;
__xdata __at( 0x1c54 ) volatile DFE_P4_REG21_t DFE_P4_REG21;
#define reg_DFE_F4_S_BOT_P4_LANE_5_0  DFE_P4_REG21.BF.DFE_F4_S_BOT_P4_LANE_5_0

// 0x16	DFE_P4_REG22		
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG22_t;
__xdata __at( 0x1c58 ) volatile DFE_P4_REG22_t DFE_P4_REG22;
#define reg_DFE_F4_S_MID_P4_LANE_5_0  DFE_P4_REG22.BF.DFE_F4_S_MID_P4_LANE_5_0

// 0x17	DFE_P4_REG23		
typedef union {
	struct {
		uint8_t DFE_F4_S_TOP_P4_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG23_t;
__xdata __at( 0x1c5c ) volatile DFE_P4_REG23_t DFE_P4_REG23;
#define reg_DFE_F4_S_TOP_P4_LANE_5_0  DFE_P4_REG23.BF.DFE_F4_S_TOP_P4_LANE_5_0

// 0x18	DFE_P4_REG24		
typedef union {
	struct {
		uint8_t DFE_F5_BOT_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG24_t;
__xdata __at( 0x1c60 ) volatile DFE_P4_REG24_t DFE_P4_REG24;
#define reg_DFE_F5_BOT_P4_LANE_5_0  DFE_P4_REG24.BF.DFE_F5_BOT_P4_LANE_5_0

// 0x19	DFE_P4_REG25		
typedef union {
	struct {
		uint8_t DFE_F5_MID_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F5_SIGN_P4_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG25_t;
__xdata __at( 0x1c64 ) volatile DFE_P4_REG25_t DFE_P4_REG25;
#define reg_DFE_F5_MID_P4_LANE_5_0  DFE_P4_REG25.BF.DFE_F5_MID_P4_LANE_5_0
#define reg_DFE_F5_SIGN_P4_LANE  DFE_P4_REG25.BF.DFE_F5_SIGN_P4_LANE

// 0x1a	DFE_P4_REG26		
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG26_t;
__xdata __at( 0x1c68 ) volatile DFE_P4_REG26_t DFE_P4_REG26;
#define reg_DFE_F5_TOP_P4_LANE_5_0  DFE_P4_REG26.BF.DFE_F5_TOP_P4_LANE_5_0

// 0x1b	DFE_P4_REG27		
typedef union {
	struct {
		uint8_t DFE_F6_BOT_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG27_t;
__xdata __at( 0x1c6c ) volatile DFE_P4_REG27_t DFE_P4_REG27;
#define reg_DFE_F6_BOT_P4_LANE_5_0  DFE_P4_REG27.BF.DFE_F6_BOT_P4_LANE_5_0

// 0x1c	DFE_P4_REG28		
typedef union {
	struct {
		uint8_t DFE_F6_MID_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F6_SIGN_P4_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG28_t;
__xdata __at( 0x1c70 ) volatile DFE_P4_REG28_t DFE_P4_REG28;
#define reg_DFE_F6_MID_P4_LANE_5_0  DFE_P4_REG28.BF.DFE_F6_MID_P4_LANE_5_0
#define reg_DFE_F6_SIGN_P4_LANE  DFE_P4_REG28.BF.DFE_F6_SIGN_P4_LANE

// 0x1d	DFE_P4_REG29		
typedef union {
	struct {
		uint8_t DFE_F6_TOP_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG29_t;
__xdata __at( 0x1c74 ) volatile DFE_P4_REG29_t DFE_P4_REG29;
#define reg_DFE_F6_TOP_P4_LANE_5_0  DFE_P4_REG29.BF.DFE_F6_TOP_P4_LANE_5_0

// 0x1e	DFE_P4_REG30		
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG30_t;
__xdata __at( 0x1c78 ) volatile DFE_P4_REG30_t DFE_P4_REG30;
#define reg_DFE_F7_BOT_P4_LANE_5_0  DFE_P4_REG30.BF.DFE_F7_BOT_P4_LANE_5_0

// 0x1f	DFE_P4_REG31		
typedef union {
	struct {
		uint8_t DFE_F7_MID_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F7_SIGN_P4_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG31_t;
__xdata __at( 0x1c7c ) volatile DFE_P4_REG31_t DFE_P4_REG31;
#define reg_DFE_F7_MID_P4_LANE_5_0  DFE_P4_REG31.BF.DFE_F7_MID_P4_LANE_5_0
#define reg_DFE_F7_SIGN_P4_LANE  DFE_P4_REG31.BF.DFE_F7_SIGN_P4_LANE

// 0x20	DFE_P4_REG32		
typedef union {
	struct {
		uint8_t DFE_F7_TOP_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG32_t;
__xdata __at( 0x1c80 ) volatile DFE_P4_REG32_t DFE_P4_REG32;
#define reg_DFE_F7_TOP_P4_LANE_5_0  DFE_P4_REG32.BF.DFE_F7_TOP_P4_LANE_5_0

// 0x21	DFE_P4_REG33		
typedef union {
	struct {
		uint8_t DFE_F8_BOT_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG33_t;
__xdata __at( 0x1c84 ) volatile DFE_P4_REG33_t DFE_P4_REG33;
#define reg_DFE_F8_BOT_P4_LANE_5_0  DFE_P4_REG33.BF.DFE_F8_BOT_P4_LANE_5_0

// 0x22	DFE_P4_REG34		
typedef union {
	struct {
		uint8_t DFE_F8_MID_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F8_SIGN_P4_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG34_t;
__xdata __at( 0x1c88 ) volatile DFE_P4_REG34_t DFE_P4_REG34;
#define reg_DFE_F8_MID_P4_LANE_5_0  DFE_P4_REG34.BF.DFE_F8_MID_P4_LANE_5_0
#define reg_DFE_F8_SIGN_P4_LANE  DFE_P4_REG34.BF.DFE_F8_SIGN_P4_LANE

// 0x23	DFE_P4_REG35		
typedef union {
	struct {
		uint8_t DFE_F8_TOP_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG35_t;
__xdata __at( 0x1c8c ) volatile DFE_P4_REG35_t DFE_P4_REG35;
#define reg_DFE_F8_TOP_P4_LANE_5_0  DFE_P4_REG35.BF.DFE_F8_TOP_P4_LANE_5_0

// 0x24	DFE_P4_REG36		
typedef union {
	struct {
		uint8_t DFE_F9_LSB_P4_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG36_t;
__xdata __at( 0x1c90 ) volatile DFE_P4_REG36_t DFE_P4_REG36;
#define reg_DFE_F9_LSB_P4_LANE_4_0  DFE_P4_REG36.BF.DFE_F9_LSB_P4_LANE_4_0

// 0x25	DFE_P4_REG37		
typedef union {
	struct {
		uint8_t DFE_F9_MSB_P4_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F9_SIGN_P4_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG37_t;
__xdata __at( 0x1c94 ) volatile DFE_P4_REG37_t DFE_P4_REG37;
#define reg_DFE_F9_MSB_P4_LANE_4_0  DFE_P4_REG37.BF.DFE_F9_MSB_P4_LANE_4_0
#define reg_DFE_F9_SIGN_P4_LANE  DFE_P4_REG37.BF.DFE_F9_SIGN_P4_LANE

// 0x26	DFE_P4_REG38		
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG38_t;
__xdata __at( 0x1c98 ) volatile DFE_P4_REG38_t DFE_P4_REG38;
#define reg_DFE_F10_LSB_P4_LANE_4_0  DFE_P4_REG38.BF.DFE_F10_LSB_P4_LANE_4_0

// 0x27	DFE_P4_REG39		
typedef union {
	struct {
		uint8_t DFE_F10_MSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F10_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG39_t;
__xdata __at( 0x1c9c ) volatile DFE_P4_REG39_t DFE_P4_REG39;
#define reg_DFE_F10_MSB_P4_LANE_4_0  DFE_P4_REG39.BF.DFE_F10_MSB_P4_LANE_4_0
#define reg_DFE_F10_SIGN_P4_LANE  DFE_P4_REG39.BF.DFE_F10_SIGN_P4_LANE

// 0x28	DFE_P4_REG40		
typedef union {
	struct {
		uint8_t DFE_F11_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F11_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG40_t;
__xdata __at( 0x1ca0 ) volatile DFE_P4_REG40_t DFE_P4_REG40;
#define reg_DFE_F11_P4_LANE_4_0  DFE_P4_REG40.BF.DFE_F11_P4_LANE_4_0
#define reg_DFE_F11_SIGN_P4_LANE  DFE_P4_REG40.BF.DFE_F11_SIGN_P4_LANE

// 0x29	DFE_P4_REG41		
typedef union {
	struct {
		uint8_t DFE_F12_LSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG41_t;
__xdata __at( 0x1ca4 ) volatile DFE_P4_REG41_t DFE_P4_REG41;
#define reg_DFE_F12_LSB_P4_LANE_4_0  DFE_P4_REG41.BF.DFE_F12_LSB_P4_LANE_4_0

// 0x2a	DFE_P4_REG42		
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F12_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG42_t;
__xdata __at( 0x1ca8 ) volatile DFE_P4_REG42_t DFE_P4_REG42;
#define reg_DFE_F12_MSB_P4_LANE_4_0  DFE_P4_REG42.BF.DFE_F12_MSB_P4_LANE_4_0
#define reg_DFE_F12_SIGN_P4_LANE  DFE_P4_REG42.BF.DFE_F12_SIGN_P4_LANE

// 0x2b	DFE_P4_REG43		
typedef union {
	struct {
		uint8_t DFE_F13_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F13_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG43_t;
__xdata __at( 0x1cac ) volatile DFE_P4_REG43_t DFE_P4_REG43;
#define reg_DFE_F13_P4_LANE_4_0  DFE_P4_REG43.BF.DFE_F13_P4_LANE_4_0
#define reg_DFE_F13_SIGN_P4_LANE  DFE_P4_REG43.BF.DFE_F13_SIGN_P4_LANE

// 0x2c	DFE_P4_REG44		
typedef union {
	struct {
		uint8_t DFE_F14_LSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG44_t;
__xdata __at( 0x1cb0 ) volatile DFE_P4_REG44_t DFE_P4_REG44;
#define reg_DFE_F14_LSB_P4_LANE_4_0  DFE_P4_REG44.BF.DFE_F14_LSB_P4_LANE_4_0

// 0x2d	DFE_P4_REG45		
typedef union {
	struct {
		uint8_t DFE_F14_MSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F14_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG45_t;
__xdata __at( 0x1cb4 ) volatile DFE_P4_REG45_t DFE_P4_REG45;
#define reg_DFE_F14_MSB_P4_LANE_4_0  DFE_P4_REG45.BF.DFE_F14_MSB_P4_LANE_4_0
#define reg_DFE_F14_SIGN_P4_LANE  DFE_P4_REG45.BF.DFE_F14_SIGN_P4_LANE

// 0x2e	DFE_P4_REG46		
typedef union {
	struct {
		uint8_t DFE_F15_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F15_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG46_t;
__xdata __at( 0x1cb8 ) volatile DFE_P4_REG46_t DFE_P4_REG46;
#define reg_DFE_F15_P4_LANE_4_0  DFE_P4_REG46.BF.DFE_F15_P4_LANE_4_0
#define reg_DFE_F15_SIGN_P4_LANE  DFE_P4_REG46.BF.DFE_F15_SIGN_P4_LANE

// 0x2f	DFE_P4_REG47		
typedef union {
	struct {
		uint8_t DFE_F16_LSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG47_t;
__xdata __at( 0x1cbc ) volatile DFE_P4_REG47_t DFE_P4_REG47;
#define reg_DFE_F16_LSB_P4_LANE_4_0  DFE_P4_REG47.BF.DFE_F16_LSB_P4_LANE_4_0

// 0x30	DFE_P4_REG48		
typedef union {
	struct {
		uint8_t DFE_F16_MSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F16_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG48_t;
__xdata __at( 0x1cc0 ) volatile DFE_P4_REG48_t DFE_P4_REG48;
#define reg_DFE_F16_MSB_P4_LANE_4_0  DFE_P4_REG48.BF.DFE_F16_MSB_P4_LANE_4_0
#define reg_DFE_F16_SIGN_P4_LANE  DFE_P4_REG48.BF.DFE_F16_SIGN_P4_LANE

// 0x31	DFE_P4_REG49		
typedef union {
	struct {
		uint8_t DFE_F17_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F17_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG49_t;
__xdata __at( 0x1cc4 ) volatile DFE_P4_REG49_t DFE_P4_REG49;
#define reg_DFE_F17_P4_LANE_4_0  DFE_P4_REG49.BF.DFE_F17_P4_LANE_4_0
#define reg_DFE_F17_SIGN_P4_LANE  DFE_P4_REG49.BF.DFE_F17_SIGN_P4_LANE

// 0x32	DFE_P4_REG50		
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG50_t;
__xdata __at( 0x1cc8 ) volatile DFE_P4_REG50_t DFE_P4_REG50;
#define reg_DFE_F18_LSB_P4_LANE_4_0  DFE_P4_REG50.BF.DFE_F18_LSB_P4_LANE_4_0

// 0x33	DFE_P4_REG51		
typedef union {
	struct {
		uint8_t DFE_F18_MSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F18_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG51_t;
__xdata __at( 0x1ccc ) volatile DFE_P4_REG51_t DFE_P4_REG51;
#define reg_DFE_F18_MSB_P4_LANE_4_0  DFE_P4_REG51.BF.DFE_F18_MSB_P4_LANE_4_0
#define reg_DFE_F18_SIGN_P4_LANE  DFE_P4_REG51.BF.DFE_F18_SIGN_P4_LANE

// 0x34	DFE_P4_REG52		
typedef union {
	struct {
		uint8_t DFE_F19_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F19_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG52_t;
__xdata __at( 0x1cd0 ) volatile DFE_P4_REG52_t DFE_P4_REG52;
#define reg_DFE_F19_P4_LANE_4_0  DFE_P4_REG52.BF.DFE_F19_P4_LANE_4_0
#define reg_DFE_F19_SIGN_P4_LANE  DFE_P4_REG52.BF.DFE_F19_SIGN_P4_LANE

// 0x35	DFE_P4_REG53		
typedef union {
	struct {
		uint8_t DFE_F20_LSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG53_t;
__xdata __at( 0x1cd4 ) volatile DFE_P4_REG53_t DFE_P4_REG53;
#define reg_DFE_F20_LSB_P4_LANE_4_0  DFE_P4_REG53.BF.DFE_F20_LSB_P4_LANE_4_0

// 0x36	DFE_P4_REG54		
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P4_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F20_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG54_t;
__xdata __at( 0x1cd8 ) volatile DFE_P4_REG54_t DFE_P4_REG54;
#define reg_DFE_F20_MSB_P4_LANE_4_0  DFE_P4_REG54.BF.DFE_F20_MSB_P4_LANE_4_0
#define reg_DFE_F20_SIGN_P4_LANE  DFE_P4_REG54.BF.DFE_F20_SIGN_P4_LANE

// 0x37	DFE_P4_REG55		
typedef union {
	struct {
		uint8_t DFE_F21_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F21_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG55_t;
__xdata __at( 0x1cdc ) volatile DFE_P4_REG55_t DFE_P4_REG55;
#define reg_DFE_F21_P4_LANE_4_0  DFE_P4_REG55.BF.DFE_F21_P4_LANE_4_0
#define reg_DFE_F21_SIGN_P4_LANE  DFE_P4_REG55.BF.DFE_F21_SIGN_P4_LANE

// 0x38	DFE_P4_REG56		
typedef union {
	struct {
		uint8_t DFE_F22_P4_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t DFE_F22_SIGN_P4_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG56_t;
__xdata __at( 0x1ce0 ) volatile DFE_P4_REG56_t DFE_P4_REG56;
#define reg_DFE_F22_P4_LANE_4_0  DFE_P4_REG56.BF.DFE_F22_P4_LANE_4_0
#define reg_DFE_F22_SIGN_P4_LANE  DFE_P4_REG56.BF.DFE_F22_SIGN_P4_LANE

// 0x39	DFE_P4_REG57		
typedef union {
	struct {
		uint8_t DFE_F23_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F23_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG57_t;
__xdata __at( 0x1ce4 ) volatile DFE_P4_REG57_t DFE_P4_REG57;
#define reg_DFE_F23_P4_LANE_3_0  DFE_P4_REG57.BF.DFE_F23_P4_LANE_3_0
#define reg_DFE_F23_SIGN_P4_LANE  DFE_P4_REG57.BF.DFE_F23_SIGN_P4_LANE

// 0x3a	DFE_P4_REG58		
typedef union {
	struct {
		uint8_t DFE_F24_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F24_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG58_t;
__xdata __at( 0x1ce8 ) volatile DFE_P4_REG58_t DFE_P4_REG58;
#define reg_DFE_F24_P4_LANE_3_0  DFE_P4_REG58.BF.DFE_F24_P4_LANE_3_0
#define reg_DFE_F24_SIGN_P4_LANE  DFE_P4_REG58.BF.DFE_F24_SIGN_P4_LANE

// 0x3b	DFE_P4_REG59		
typedef union {
	struct {
		uint8_t DFE_F25_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F25_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG59_t;
__xdata __at( 0x1cec ) volatile DFE_P4_REG59_t DFE_P4_REG59;
#define reg_DFE_F25_P4_LANE_3_0  DFE_P4_REG59.BF.DFE_F25_P4_LANE_3_0
#define reg_DFE_F25_SIGN_P4_LANE  DFE_P4_REG59.BF.DFE_F25_SIGN_P4_LANE

// 0x3c	DFE_P4_REG60		
typedef union {
	struct {
		uint8_t DFE_F26_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F26_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG60_t;
__xdata __at( 0x1cf0 ) volatile DFE_P4_REG60_t DFE_P4_REG60;
#define reg_DFE_F26_P4_LANE_3_0  DFE_P4_REG60.BF.DFE_F26_P4_LANE_3_0
#define reg_DFE_F26_SIGN_P4_LANE  DFE_P4_REG60.BF.DFE_F26_SIGN_P4_LANE

// 0x3d	DFE_P4_REG61		
typedef union {
	struct {
		uint8_t DFE_F27_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F27_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG61_t;
__xdata __at( 0x1cf4 ) volatile DFE_P4_REG61_t DFE_P4_REG61;
#define reg_DFE_F27_P4_LANE_3_0  DFE_P4_REG61.BF.DFE_F27_P4_LANE_3_0
#define reg_DFE_F27_SIGN_P4_LANE  DFE_P4_REG61.BF.DFE_F27_SIGN_P4_LANE

// 0x3e	DFE_P4_REG62		
typedef union {
	struct {
		uint8_t DFE_F28_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F28_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG62_t;
__xdata __at( 0x1cf8 ) volatile DFE_P4_REG62_t DFE_P4_REG62;
#define reg_DFE_F28_P4_LANE_3_0  DFE_P4_REG62.BF.DFE_F28_P4_LANE_3_0
#define reg_DFE_F28_SIGN_P4_LANE  DFE_P4_REG62.BF.DFE_F28_SIGN_P4_LANE

// 0x3f	DFE_P4_REG63		
typedef union {
	struct {
		uint8_t DFE_F29_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F29_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG63_t;
__xdata __at( 0x1cfc ) volatile DFE_P4_REG63_t DFE_P4_REG63;
#define reg_DFE_F29_P4_LANE_3_0  DFE_P4_REG63.BF.DFE_F29_P4_LANE_3_0
#define reg_DFE_F29_SIGN_P4_LANE  DFE_P4_REG63.BF.DFE_F29_SIGN_P4_LANE

// 0x40	DFE_P4_REG64		
typedef union {
	struct {
		uint8_t DFE_F30_P4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F30_SIGN_P4_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG64_t;
__xdata __at( 0x1d00 ) volatile DFE_P4_REG64_t DFE_P4_REG64;
#define reg_DFE_F30_P4_LANE_3_0  DFE_P4_REG64.BF.DFE_F30_P4_LANE_3_0
#define reg_DFE_F30_SIGN_P4_LANE  DFE_P4_REG64.BF.DFE_F30_SIGN_P4_LANE

// 0x41	DFE_P4_REG65		
typedef union {
	struct {
		uint8_t F2_TUNE_BOT_D_P4_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG65_t;
__xdata __at( 0x1d04 ) volatile DFE_P4_REG65_t DFE_P4_REG65;
#define reg_F2_TUNE_BOT_D_P4_LANE_3_0  DFE_P4_REG65.BF.F2_TUNE_BOT_D_P4_LANE_3_0

// 0x42	DFE_P4_REG66		
typedef union {
	struct {
		uint8_t F2_TUNE_BOT_S_P4_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG66_t;
__xdata __at( 0x1d08 ) volatile DFE_P4_REG66_t DFE_P4_REG66;
#define reg_F2_TUNE_BOT_S_P4_LANE_3_0  DFE_P4_REG66.BF.F2_TUNE_BOT_S_P4_LANE_3_0

// 0x43	DFE_P4_REG67		
typedef union {
	struct {
		uint8_t F2_TUNE_TOP_D_P4_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG67_t;
__xdata __at( 0x1d0c ) volatile DFE_P4_REG67_t DFE_P4_REG67;
#define reg_F2_TUNE_TOP_D_P4_LANE_3_0  DFE_P4_REG67.BF.F2_TUNE_TOP_D_P4_LANE_3_0

// 0x44	DFE_P4_REG68		
typedef union {
	struct {
		uint8_t F2_TUNE_TOP_S_P4_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG68_t;
__xdata __at( 0x1d10 ) volatile DFE_P4_REG68_t DFE_P4_REG68;
#define reg_F2_TUNE_TOP_S_P4_LANE_3_0  DFE_P4_REG68.BF.F2_TUNE_TOP_S_P4_LANE_3_0

// 0x45	DFE_P4_REG69		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_BOT_P4_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG69_t;
__xdata __at( 0x1d14 ) volatile DFE_P4_REG69_t DFE_P4_REG69;
#define reg_DFE_VREF_NEG_BOT_P4_LANE_4_0  DFE_P4_REG69.BF.DFE_VREF_NEG_BOT_P4_LANE_4_0

// 0x46	DFE_P4_REG70		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_BOT_P4_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_BOT_P4_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG70_t;
__xdata __at( 0x1d18 ) volatile DFE_P4_REG70_t DFE_P4_REG70;
#define reg_DFE_VREF_POS_BOT_P4_LANE_4_0  DFE_P4_REG70.BF.DFE_VREF_POS_BOT_P4_LANE_4_0
#define reg_DFE_VREF_SIGN_BOT_P4_LANE  DFE_P4_REG70.BF.DFE_VREF_SIGN_BOT_P4_LANE

// 0x47	DFE_P4_REG71		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_MID_P4_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG71_t;
__xdata __at( 0x1d1c ) volatile DFE_P4_REG71_t DFE_P4_REG71;
#define reg_DFE_VREF_NEG_MID_P4_LANE_4_0  DFE_P4_REG71.BF.DFE_VREF_NEG_MID_P4_LANE_4_0

// 0x48	DFE_P4_REG72		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_MID_P4_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_MID_P4_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG72_t;
__xdata __at( 0x1d20 ) volatile DFE_P4_REG72_t DFE_P4_REG72;
#define reg_DFE_VREF_POS_MID_P4_LANE_4_0  DFE_P4_REG72.BF.DFE_VREF_POS_MID_P4_LANE_4_0
#define reg_DFE_VREF_SIGN_MID_P4_LANE  DFE_P4_REG72.BF.DFE_VREF_SIGN_MID_P4_LANE

// 0x49	DFE_P4_REG73		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_TOP_P4_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG73_t;
__xdata __at( 0x1d24 ) volatile DFE_P4_REG73_t DFE_P4_REG73;
#define reg_DFE_VREF_NEG_TOP_P4_LANE_4_0  DFE_P4_REG73.BF.DFE_VREF_NEG_TOP_P4_LANE_4_0

// 0x4a	DFE_P4_REG74		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_TOP_P4_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_TOP_P4_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG74_t;
__xdata __at( 0x1d28 ) volatile DFE_P4_REG74_t DFE_P4_REG74;
#define reg_DFE_VREF_POS_TOP_P4_LANE_4_0  DFE_P4_REG74.BF.DFE_VREF_POS_TOP_P4_LANE_4_0
#define reg_DFE_VREF_SIGN_TOP_P4_LANE  DFE_P4_REG74.BF.DFE_VREF_SIGN_TOP_P4_LANE

// 0x4b	DFE_P4_REG75		
typedef union {
	struct {
		uint8_t OFST_D_BOT_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG75_t;
__xdata __at( 0x1d2c ) volatile DFE_P4_REG75_t DFE_P4_REG75;
#define reg_OFST_D_BOT_P4_LANE_5_0  DFE_P4_REG75.BF.OFST_D_BOT_P4_LANE_5_0

// 0x4c	DFE_P4_REG76		
typedef union {
	struct {
		uint8_t OFST_D_MID_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG76_t;
__xdata __at( 0x1d30 ) volatile DFE_P4_REG76_t DFE_P4_REG76;
#define reg_OFST_D_MID_P4_LANE_5_0  DFE_P4_REG76.BF.OFST_D_MID_P4_LANE_5_0

// 0x4d	DFE_P4_REG77		
typedef union {
	struct {
		uint8_t OFST_D_TOP_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG77_t;
__xdata __at( 0x1d34 ) volatile DFE_P4_REG77_t DFE_P4_REG77;
#define reg_OFST_D_TOP_P4_LANE_5_0  DFE_P4_REG77.BF.OFST_D_TOP_P4_LANE_5_0

// 0x4e	DFE_P4_REG78		
typedef union {
	struct {
		uint8_t OFST_S_BOT_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG78_t;
__xdata __at( 0x1d38 ) volatile DFE_P4_REG78_t DFE_P4_REG78;
#define reg_OFST_S_BOT_P4_LANE_5_0  DFE_P4_REG78.BF.OFST_S_BOT_P4_LANE_5_0

// 0x4f	DFE_P4_REG79		
typedef union {
	struct {
		uint8_t OFST_S_MID_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG79_t;
__xdata __at( 0x1d3c ) volatile DFE_P4_REG79_t DFE_P4_REG79;
#define reg_OFST_S_MID_P4_LANE_5_0  DFE_P4_REG79.BF.OFST_S_MID_P4_LANE_5_0

// 0x50	DFE_P4_REG80		
typedef union {
	struct {
		uint8_t OFST_S_TOP_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG80_t;
__xdata __at( 0x1d40 ) volatile DFE_P4_REG80_t DFE_P4_REG80;
#define reg_OFST_S_TOP_P4_LANE_5_0  DFE_P4_REG80.BF.OFST_S_TOP_P4_LANE_5_0

// 0x51	DFE_P4_REG81		
typedef union {
	struct {
		uint8_t OFST_EDGE_NEG_P4_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG81_t;
__xdata __at( 0x1d44 ) volatile DFE_P4_REG81_t DFE_P4_REG81;
#define reg_OFST_EDGE_NEG_P4_LANE_4_0  DFE_P4_REG81.BF.OFST_EDGE_NEG_P4_LANE_4_0

// 0x52	DFE_P4_REG82		
typedef union {
	struct {
		uint8_t OFST_EDGE_POS_P4_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_EDGE_SIGN_P4_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG82_t;
__xdata __at( 0x1d48 ) volatile DFE_P4_REG82_t DFE_P4_REG82;
#define reg_OFST_EDGE_POS_P4_LANE_4_0  DFE_P4_REG82.BF.OFST_EDGE_POS_P4_LANE_4_0
#define reg_OFST_EDGE_SIGN_P4_LANE  DFE_P4_REG82.BF.OFST_EDGE_SIGN_P4_LANE

// 0x53	DFE_P4_REG83		
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_POST_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P4_REG83_t;
__xdata __at( 0x1d4c ) volatile DFE_P4_REG83_t DFE_P4_REG83;
#define reg_CTLE_RL1_SEL_POST_LANE_3_0  DFE_P4_REG83.BF.CTLE_RL1_SEL_POST_LANE_3_0

#endif
