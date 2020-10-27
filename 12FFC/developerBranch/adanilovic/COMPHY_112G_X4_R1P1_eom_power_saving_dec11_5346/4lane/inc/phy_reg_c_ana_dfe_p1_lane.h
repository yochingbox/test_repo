#ifndef PHY_REG_C_ANA_DFE_P1_LANE_H
#define PHY_REG_C_ANA_DFE_P1_LANE_H



// 0x0	DFE_P1_REG0		
typedef union {
	struct {
		uint8_t DFE_F0_D_BOT_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG0_t;
__xdata __at( 0x1000 ) volatile DFE_P1_REG0_t DFE_P1_REG0;
#define reg_DFE_F0_D_BOT_P1_LANE_5_0  DFE_P1_REG0.BF.DFE_F0_D_BOT_P1_LANE_5_0

// 0x1	DFE_P1_REG1		
typedef union {
	struct {
		uint8_t DFE_F0_D_MID_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG1_t;
__xdata __at( 0x1004 ) volatile DFE_P1_REG1_t DFE_P1_REG1;
#define reg_DFE_F0_D_MID_P1_LANE_5_0  DFE_P1_REG1.BF.DFE_F0_D_MID_P1_LANE_5_0

// 0x2	DFE_P1_REG2		
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG2_t;
__xdata __at( 0x1008 ) volatile DFE_P1_REG2_t DFE_P1_REG2;
#define reg_DFE_F0_D_TOP_P1_LANE_5_0  DFE_P1_REG2.BF.DFE_F0_D_TOP_P1_LANE_5_0

// 0x3	DFE_P1_REG3		
typedef union {
	struct {
		uint8_t DFE_F0_S_BOT_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG3_t;
__xdata __at( 0x100c ) volatile DFE_P1_REG3_t DFE_P1_REG3;
#define reg_DFE_F0_S_BOT_P1_LANE_5_0  DFE_P1_REG3.BF.DFE_F0_S_BOT_P1_LANE_5_0

// 0x4	DFE_P1_REG4		
typedef union {
	struct {
		uint8_t DFE_F0_S_MID_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG4_t;
__xdata __at( 0x1010 ) volatile DFE_P1_REG4_t DFE_P1_REG4;
#define reg_DFE_F0_S_MID_P1_LANE_5_0  DFE_P1_REG4.BF.DFE_F0_S_MID_P1_LANE_5_0

// 0x5	DFE_P1_REG5		
typedef union {
	struct {
		uint8_t DFE_F0_S_TOP_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG5_t;
__xdata __at( 0x1014 ) volatile DFE_P1_REG5_t DFE_P1_REG5;
#define reg_DFE_F0_S_TOP_P1_LANE_5_0  DFE_P1_REG5.BF.DFE_F0_S_TOP_P1_LANE_5_0

// 0x6	DFE_P1_REG6		
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG6_t;
__xdata __at( 0x1018 ) volatile DFE_P1_REG6_t DFE_P1_REG6;
#define reg_DFE_F2_D_BOT_P1_LANE_6_0  DFE_P1_REG6.BF.DFE_F2_D_BOT_P1_LANE_6_0

// 0x7	DFE_P1_REG7		
typedef union {
	struct {
		uint8_t DFE_F2_D_MID_P1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG7_t;
__xdata __at( 0x101c ) volatile DFE_P1_REG7_t DFE_P1_REG7;
#define reg_DFE_F2_D_MID_P1_LANE_6_0  DFE_P1_REG7.BF.DFE_F2_D_MID_P1_LANE_6_0

// 0x8	DFE_P1_REG8		
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_P1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG8_t;
__xdata __at( 0x1020 ) volatile DFE_P1_REG8_t DFE_P1_REG8;
#define reg_DFE_F2_D_TOP_P1_LANE_6_0  DFE_P1_REG8.BF.DFE_F2_D_TOP_P1_LANE_6_0

// 0x9	DFE_P1_REG9		
typedef union {
	struct {
		uint8_t DFE_F2_S_BOT_P1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG9_t;
__xdata __at( 0x1024 ) volatile DFE_P1_REG9_t DFE_P1_REG9;
#define reg_DFE_F2_S_BOT_P1_LANE_6_0  DFE_P1_REG9.BF.DFE_F2_S_BOT_P1_LANE_6_0

// 0xa	DFE_P1_REG10		
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG10_t;
__xdata __at( 0x1028 ) volatile DFE_P1_REG10_t DFE_P1_REG10;
#define reg_DFE_F2_S_MID_P1_LANE_6_0  DFE_P1_REG10.BF.DFE_F2_S_MID_P1_LANE_6_0

// 0xb	DFE_P1_REG11		
typedef union {
	struct {
		uint8_t DFE_F2_S_TOP_P1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG11_t;
__xdata __at( 0x102c ) volatile DFE_P1_REG11_t DFE_P1_REG11;
#define reg_DFE_F2_S_TOP_P1_LANE_6_0  DFE_P1_REG11.BF.DFE_F2_S_TOP_P1_LANE_6_0

// 0xc	DFE_P1_REG12		
typedef union {
	struct {
		uint8_t DFE_F3_D_BOT_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG12_t;
__xdata __at( 0x1030 ) volatile DFE_P1_REG12_t DFE_P1_REG12;
#define reg_DFE_F3_D_BOT_P1_LANE_5_0  DFE_P1_REG12.BF.DFE_F3_D_BOT_P1_LANE_5_0

// 0xd	DFE_P1_REG13		
typedef union {
	struct {
		uint8_t DFE_F3_D_MID_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG13_t;
__xdata __at( 0x1034 ) volatile DFE_P1_REG13_t DFE_P1_REG13;
#define reg_DFE_F3_D_MID_P1_LANE_5_0  DFE_P1_REG13.BF.DFE_F3_D_MID_P1_LANE_5_0

// 0xe	DFE_P1_REG14		
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG14_t;
__xdata __at( 0x1038 ) volatile DFE_P1_REG14_t DFE_P1_REG14;
#define reg_DFE_F3_D_TOP_P1_LANE_5_0  DFE_P1_REG14.BF.DFE_F3_D_TOP_P1_LANE_5_0

// 0xf	DFE_P1_REG15		
typedef union {
	struct {
		uint8_t DFE_F3_S_BOT_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG15_t;
__xdata __at( 0x103c ) volatile DFE_P1_REG15_t DFE_P1_REG15;
#define reg_DFE_F3_S_BOT_P1_LANE_5_0  DFE_P1_REG15.BF.DFE_F3_S_BOT_P1_LANE_5_0

// 0x10	DFE_P1_REG16		
typedef union {
	struct {
		uint8_t DFE_F3_S_MID_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG16_t;
__xdata __at( 0x1040 ) volatile DFE_P1_REG16_t DFE_P1_REG16;
#define reg_DFE_F3_S_MID_P1_LANE_5_0  DFE_P1_REG16.BF.DFE_F3_S_MID_P1_LANE_5_0

// 0x11	DFE_P1_REG17		
typedef union {
	struct {
		uint8_t DFE_F3_S_TOP_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG17_t;
__xdata __at( 0x1044 ) volatile DFE_P1_REG17_t DFE_P1_REG17;
#define reg_DFE_F3_S_TOP_P1_LANE_5_0  DFE_P1_REG17.BF.DFE_F3_S_TOP_P1_LANE_5_0

// 0x12	DFE_P1_REG18		
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG18_t;
__xdata __at( 0x1048 ) volatile DFE_P1_REG18_t DFE_P1_REG18;
#define reg_DFE_F4_D_BOT_P1_LANE_5_0  DFE_P1_REG18.BF.DFE_F4_D_BOT_P1_LANE_5_0

// 0x13	DFE_P1_REG19		
typedef union {
	struct {
		uint8_t DFE_F4_D_MID_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG19_t;
__xdata __at( 0x104c ) volatile DFE_P1_REG19_t DFE_P1_REG19;
#define reg_DFE_F4_D_MID_P1_LANE_5_0  DFE_P1_REG19.BF.DFE_F4_D_MID_P1_LANE_5_0

// 0x14	DFE_P1_REG20		
typedef union {
	struct {
		uint8_t DFE_F4_D_TOP_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG20_t;
__xdata __at( 0x1050 ) volatile DFE_P1_REG20_t DFE_P1_REG20;
#define reg_DFE_F4_D_TOP_P1_LANE_5_0  DFE_P1_REG20.BF.DFE_F4_D_TOP_P1_LANE_5_0

// 0x15	DFE_P1_REG21		
typedef union {
	struct {
		uint8_t DFE_F4_S_BOT_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG21_t;
__xdata __at( 0x1054 ) volatile DFE_P1_REG21_t DFE_P1_REG21;
#define reg_DFE_F4_S_BOT_P1_LANE_5_0  DFE_P1_REG21.BF.DFE_F4_S_BOT_P1_LANE_5_0

// 0x16	DFE_P1_REG22		
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG22_t;
__xdata __at( 0x1058 ) volatile DFE_P1_REG22_t DFE_P1_REG22;
#define reg_DFE_F4_S_MID_P1_LANE_5_0  DFE_P1_REG22.BF.DFE_F4_S_MID_P1_LANE_5_0

// 0x17	DFE_P1_REG23		
typedef union {
	struct {
		uint8_t DFE_F4_S_TOP_P1_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG23_t;
__xdata __at( 0x105c ) volatile DFE_P1_REG23_t DFE_P1_REG23;
#define reg_DFE_F4_S_TOP_P1_LANE_5_0  DFE_P1_REG23.BF.DFE_F4_S_TOP_P1_LANE_5_0

// 0x18	DFE_P1_REG24		
typedef union {
	struct {
		uint8_t DFE_F5_BOT_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG24_t;
__xdata __at( 0x1060 ) volatile DFE_P1_REG24_t DFE_P1_REG24;
#define reg_DFE_F5_BOT_P1_LANE_5_0  DFE_P1_REG24.BF.DFE_F5_BOT_P1_LANE_5_0

// 0x19	DFE_P1_REG25		
typedef union {
	struct {
		uint8_t DFE_F5_MID_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F5_SIGN_P1_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG25_t;
__xdata __at( 0x1064 ) volatile DFE_P1_REG25_t DFE_P1_REG25;
#define reg_DFE_F5_MID_P1_LANE_5_0  DFE_P1_REG25.BF.DFE_F5_MID_P1_LANE_5_0
#define reg_DFE_F5_SIGN_P1_LANE  DFE_P1_REG25.BF.DFE_F5_SIGN_P1_LANE

// 0x1a	DFE_P1_REG26		
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG26_t;
__xdata __at( 0x1068 ) volatile DFE_P1_REG26_t DFE_P1_REG26;
#define reg_DFE_F5_TOP_P1_LANE_5_0  DFE_P1_REG26.BF.DFE_F5_TOP_P1_LANE_5_0

// 0x1b	DFE_P1_REG27		
typedef union {
	struct {
		uint8_t DFE_F6_BOT_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG27_t;
__xdata __at( 0x106c ) volatile DFE_P1_REG27_t DFE_P1_REG27;
#define reg_DFE_F6_BOT_P1_LANE_5_0  DFE_P1_REG27.BF.DFE_F6_BOT_P1_LANE_5_0

// 0x1c	DFE_P1_REG28		
typedef union {
	struct {
		uint8_t DFE_F6_MID_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F6_SIGN_P1_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG28_t;
__xdata __at( 0x1070 ) volatile DFE_P1_REG28_t DFE_P1_REG28;
#define reg_DFE_F6_MID_P1_LANE_5_0  DFE_P1_REG28.BF.DFE_F6_MID_P1_LANE_5_0
#define reg_DFE_F6_SIGN_P1_LANE  DFE_P1_REG28.BF.DFE_F6_SIGN_P1_LANE

// 0x1d	DFE_P1_REG29		
typedef union {
	struct {
		uint8_t DFE_F6_TOP_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG29_t;
__xdata __at( 0x1074 ) volatile DFE_P1_REG29_t DFE_P1_REG29;
#define reg_DFE_F6_TOP_P1_LANE_5_0  DFE_P1_REG29.BF.DFE_F6_TOP_P1_LANE_5_0

// 0x1e	DFE_P1_REG30		
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG30_t;
__xdata __at( 0x1078 ) volatile DFE_P1_REG30_t DFE_P1_REG30;
#define reg_DFE_F7_BOT_P1_LANE_5_0  DFE_P1_REG30.BF.DFE_F7_BOT_P1_LANE_5_0

// 0x1f	DFE_P1_REG31		
typedef union {
	struct {
		uint8_t DFE_F7_MID_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F7_SIGN_P1_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG31_t;
__xdata __at( 0x107c ) volatile DFE_P1_REG31_t DFE_P1_REG31;
#define reg_DFE_F7_MID_P1_LANE_5_0  DFE_P1_REG31.BF.DFE_F7_MID_P1_LANE_5_0
#define reg_DFE_F7_SIGN_P1_LANE  DFE_P1_REG31.BF.DFE_F7_SIGN_P1_LANE

// 0x20	DFE_P1_REG32		
typedef union {
	struct {
		uint8_t DFE_F7_TOP_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG32_t;
__xdata __at( 0x1080 ) volatile DFE_P1_REG32_t DFE_P1_REG32;
#define reg_DFE_F7_TOP_P1_LANE_5_0  DFE_P1_REG32.BF.DFE_F7_TOP_P1_LANE_5_0

// 0x21	DFE_P1_REG33		
typedef union {
	struct {
		uint8_t DFE_F8_BOT_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG33_t;
__xdata __at( 0x1084 ) volatile DFE_P1_REG33_t DFE_P1_REG33;
#define reg_DFE_F8_BOT_P1_LANE_5_0  DFE_P1_REG33.BF.DFE_F8_BOT_P1_LANE_5_0

// 0x22	DFE_P1_REG34		
typedef union {
	struct {
		uint8_t DFE_F8_MID_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t DFE_F8_SIGN_P1_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG34_t;
__xdata __at( 0x1088 ) volatile DFE_P1_REG34_t DFE_P1_REG34;
#define reg_DFE_F8_MID_P1_LANE_5_0  DFE_P1_REG34.BF.DFE_F8_MID_P1_LANE_5_0
#define reg_DFE_F8_SIGN_P1_LANE  DFE_P1_REG34.BF.DFE_F8_SIGN_P1_LANE

// 0x23	DFE_P1_REG35		
typedef union {
	struct {
		uint8_t DFE_F8_TOP_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG35_t;
__xdata __at( 0x108c ) volatile DFE_P1_REG35_t DFE_P1_REG35;
#define reg_DFE_F8_TOP_P1_LANE_5_0  DFE_P1_REG35.BF.DFE_F8_TOP_P1_LANE_5_0

// 0x24	DFE_P1_REG36		
typedef union {
	struct {
		uint8_t DFE_F9_LSB_P1_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG36_t;
__xdata __at( 0x1090 ) volatile DFE_P1_REG36_t DFE_P1_REG36;
#define reg_DFE_F9_LSB_P1_LANE_4_0  DFE_P1_REG36.BF.DFE_F9_LSB_P1_LANE_4_0

// 0x25	DFE_P1_REG37		
typedef union {
	struct {
		uint8_t DFE_F9_MSB_P1_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F9_SIGN_P1_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG37_t;
__xdata __at( 0x1094 ) volatile DFE_P1_REG37_t DFE_P1_REG37;
#define reg_DFE_F9_MSB_P1_LANE_4_0  DFE_P1_REG37.BF.DFE_F9_MSB_P1_LANE_4_0
#define reg_DFE_F9_SIGN_P1_LANE  DFE_P1_REG37.BF.DFE_F9_SIGN_P1_LANE

// 0x26	DFE_P1_REG38		
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG38_t;
__xdata __at( 0x1098 ) volatile DFE_P1_REG38_t DFE_P1_REG38;
#define reg_DFE_F10_LSB_P1_LANE_4_0  DFE_P1_REG38.BF.DFE_F10_LSB_P1_LANE_4_0

// 0x27	DFE_P1_REG39		
typedef union {
	struct {
		uint8_t DFE_F10_MSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F10_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG39_t;
__xdata __at( 0x109c ) volatile DFE_P1_REG39_t DFE_P1_REG39;
#define reg_DFE_F10_MSB_P1_LANE_4_0  DFE_P1_REG39.BF.DFE_F10_MSB_P1_LANE_4_0
#define reg_DFE_F10_SIGN_P1_LANE  DFE_P1_REG39.BF.DFE_F10_SIGN_P1_LANE

// 0x28	DFE_P1_REG40		
typedef union {
	struct {
		uint8_t DFE_F11_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F11_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG40_t;
__xdata __at( 0x10a0 ) volatile DFE_P1_REG40_t DFE_P1_REG40;
#define reg_DFE_F11_P1_LANE_4_0  DFE_P1_REG40.BF.DFE_F11_P1_LANE_4_0
#define reg_DFE_F11_SIGN_P1_LANE  DFE_P1_REG40.BF.DFE_F11_SIGN_P1_LANE

// 0x29	DFE_P1_REG41		
typedef union {
	struct {
		uint8_t DFE_F12_LSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG41_t;
__xdata __at( 0x10a4 ) volatile DFE_P1_REG41_t DFE_P1_REG41;
#define reg_DFE_F12_LSB_P1_LANE_4_0  DFE_P1_REG41.BF.DFE_F12_LSB_P1_LANE_4_0

// 0x2a	DFE_P1_REG42		
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F12_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG42_t;
__xdata __at( 0x10a8 ) volatile DFE_P1_REG42_t DFE_P1_REG42;
#define reg_DFE_F12_MSB_P1_LANE_4_0  DFE_P1_REG42.BF.DFE_F12_MSB_P1_LANE_4_0
#define reg_DFE_F12_SIGN_P1_LANE  DFE_P1_REG42.BF.DFE_F12_SIGN_P1_LANE

// 0x2b	DFE_P1_REG43		
typedef union {
	struct {
		uint8_t DFE_F13_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F13_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG43_t;
__xdata __at( 0x10ac ) volatile DFE_P1_REG43_t DFE_P1_REG43;
#define reg_DFE_F13_P1_LANE_4_0  DFE_P1_REG43.BF.DFE_F13_P1_LANE_4_0
#define reg_DFE_F13_SIGN_P1_LANE  DFE_P1_REG43.BF.DFE_F13_SIGN_P1_LANE

// 0x2c	DFE_P1_REG44		
typedef union {
	struct {
		uint8_t DFE_F14_LSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG44_t;
__xdata __at( 0x10b0 ) volatile DFE_P1_REG44_t DFE_P1_REG44;
#define reg_DFE_F14_LSB_P1_LANE_4_0  DFE_P1_REG44.BF.DFE_F14_LSB_P1_LANE_4_0

// 0x2d	DFE_P1_REG45		
typedef union {
	struct {
		uint8_t DFE_F14_MSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F14_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG45_t;
__xdata __at( 0x10b4 ) volatile DFE_P1_REG45_t DFE_P1_REG45;
#define reg_DFE_F14_MSB_P1_LANE_4_0  DFE_P1_REG45.BF.DFE_F14_MSB_P1_LANE_4_0
#define reg_DFE_F14_SIGN_P1_LANE  DFE_P1_REG45.BF.DFE_F14_SIGN_P1_LANE

// 0x2e	DFE_P1_REG46		
typedef union {
	struct {
		uint8_t DFE_F15_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F15_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG46_t;
__xdata __at( 0x10b8 ) volatile DFE_P1_REG46_t DFE_P1_REG46;
#define reg_DFE_F15_P1_LANE_4_0  DFE_P1_REG46.BF.DFE_F15_P1_LANE_4_0
#define reg_DFE_F15_SIGN_P1_LANE  DFE_P1_REG46.BF.DFE_F15_SIGN_P1_LANE

// 0x2f	DFE_P1_REG47		
typedef union {
	struct {
		uint8_t DFE_F16_LSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG47_t;
__xdata __at( 0x10bc ) volatile DFE_P1_REG47_t DFE_P1_REG47;
#define reg_DFE_F16_LSB_P1_LANE_4_0  DFE_P1_REG47.BF.DFE_F16_LSB_P1_LANE_4_0

// 0x30	DFE_P1_REG48		
typedef union {
	struct {
		uint8_t DFE_F16_MSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F16_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG48_t;
__xdata __at( 0x10c0 ) volatile DFE_P1_REG48_t DFE_P1_REG48;
#define reg_DFE_F16_MSB_P1_LANE_4_0  DFE_P1_REG48.BF.DFE_F16_MSB_P1_LANE_4_0
#define reg_DFE_F16_SIGN_P1_LANE  DFE_P1_REG48.BF.DFE_F16_SIGN_P1_LANE

// 0x31	DFE_P1_REG49		
typedef union {
	struct {
		uint8_t DFE_F17_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F17_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG49_t;
__xdata __at( 0x10c4 ) volatile DFE_P1_REG49_t DFE_P1_REG49;
#define reg_DFE_F17_P1_LANE_4_0  DFE_P1_REG49.BF.DFE_F17_P1_LANE_4_0
#define reg_DFE_F17_SIGN_P1_LANE  DFE_P1_REG49.BF.DFE_F17_SIGN_P1_LANE

// 0x32	DFE_P1_REG50		
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG50_t;
__xdata __at( 0x10c8 ) volatile DFE_P1_REG50_t DFE_P1_REG50;
#define reg_DFE_F18_LSB_P1_LANE_4_0  DFE_P1_REG50.BF.DFE_F18_LSB_P1_LANE_4_0

// 0x33	DFE_P1_REG51		
typedef union {
	struct {
		uint8_t DFE_F18_MSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F18_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG51_t;
__xdata __at( 0x10cc ) volatile DFE_P1_REG51_t DFE_P1_REG51;
#define reg_DFE_F18_MSB_P1_LANE_4_0  DFE_P1_REG51.BF.DFE_F18_MSB_P1_LANE_4_0
#define reg_DFE_F18_SIGN_P1_LANE  DFE_P1_REG51.BF.DFE_F18_SIGN_P1_LANE

// 0x34	DFE_P1_REG52		
typedef union {
	struct {
		uint8_t DFE_F19_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F19_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG52_t;
__xdata __at( 0x10d0 ) volatile DFE_P1_REG52_t DFE_P1_REG52;
#define reg_DFE_F19_P1_LANE_4_0  DFE_P1_REG52.BF.DFE_F19_P1_LANE_4_0
#define reg_DFE_F19_SIGN_P1_LANE  DFE_P1_REG52.BF.DFE_F19_SIGN_P1_LANE

// 0x35	DFE_P1_REG53		
typedef union {
	struct {
		uint8_t DFE_F20_LSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG53_t;
__xdata __at( 0x10d4 ) volatile DFE_P1_REG53_t DFE_P1_REG53;
#define reg_DFE_F20_LSB_P1_LANE_4_0  DFE_P1_REG53.BF.DFE_F20_LSB_P1_LANE_4_0

// 0x36	DFE_P1_REG54		
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P1_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F20_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG54_t;
__xdata __at( 0x10d8 ) volatile DFE_P1_REG54_t DFE_P1_REG54;
#define reg_DFE_F20_MSB_P1_LANE_4_0  DFE_P1_REG54.BF.DFE_F20_MSB_P1_LANE_4_0
#define reg_DFE_F20_SIGN_P1_LANE  DFE_P1_REG54.BF.DFE_F20_SIGN_P1_LANE

// 0x37	DFE_P1_REG55		
typedef union {
	struct {
		uint8_t DFE_F21_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F21_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG55_t;
__xdata __at( 0x10dc ) volatile DFE_P1_REG55_t DFE_P1_REG55;
#define reg_DFE_F21_P1_LANE_4_0  DFE_P1_REG55.BF.DFE_F21_P1_LANE_4_0
#define reg_DFE_F21_SIGN_P1_LANE  DFE_P1_REG55.BF.DFE_F21_SIGN_P1_LANE

// 0x38	DFE_P1_REG56		
typedef union {
	struct {
		uint8_t DFE_F22_P1_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_F22_SIGN_P1_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG56_t;
__xdata __at( 0x10e0 ) volatile DFE_P1_REG56_t DFE_P1_REG56;
#define reg_DFE_F22_P1_LANE_4_0  DFE_P1_REG56.BF.DFE_F22_P1_LANE_4_0
#define reg_DFE_F22_SIGN_P1_LANE  DFE_P1_REG56.BF.DFE_F22_SIGN_P1_LANE

// 0x39	DFE_P1_REG57		
typedef union {
	struct {
		uint8_t DFE_F23_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F23_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG57_t;
__xdata __at( 0x10e4 ) volatile DFE_P1_REG57_t DFE_P1_REG57;
#define reg_DFE_F23_P1_LANE_3_0  DFE_P1_REG57.BF.DFE_F23_P1_LANE_3_0
#define reg_DFE_F23_SIGN_P1_LANE  DFE_P1_REG57.BF.DFE_F23_SIGN_P1_LANE

// 0x3a	DFE_P1_REG58		
typedef union {
	struct {
		uint8_t DFE_F24_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F24_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG58_t;
__xdata __at( 0x10e8 ) volatile DFE_P1_REG58_t DFE_P1_REG58;
#define reg_DFE_F24_P1_LANE_3_0  DFE_P1_REG58.BF.DFE_F24_P1_LANE_3_0
#define reg_DFE_F24_SIGN_P1_LANE  DFE_P1_REG58.BF.DFE_F24_SIGN_P1_LANE

// 0x3b	DFE_P1_REG59		
typedef union {
	struct {
		uint8_t DFE_F25_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F25_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG59_t;
__xdata __at( 0x10ec ) volatile DFE_P1_REG59_t DFE_P1_REG59;
#define reg_DFE_F25_P1_LANE_3_0  DFE_P1_REG59.BF.DFE_F25_P1_LANE_3_0
#define reg_DFE_F25_SIGN_P1_LANE  DFE_P1_REG59.BF.DFE_F25_SIGN_P1_LANE

// 0x3c	DFE_P1_REG60		
typedef union {
	struct {
		uint8_t DFE_F26_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F26_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG60_t;
__xdata __at( 0x10f0 ) volatile DFE_P1_REG60_t DFE_P1_REG60;
#define reg_DFE_F26_P1_LANE_3_0  DFE_P1_REG60.BF.DFE_F26_P1_LANE_3_0
#define reg_DFE_F26_SIGN_P1_LANE  DFE_P1_REG60.BF.DFE_F26_SIGN_P1_LANE

// 0x3d	DFE_P1_REG61		
typedef union {
	struct {
		uint8_t DFE_F27_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F27_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG61_t;
__xdata __at( 0x10f4 ) volatile DFE_P1_REG61_t DFE_P1_REG61;
#define reg_DFE_F27_P1_LANE_3_0  DFE_P1_REG61.BF.DFE_F27_P1_LANE_3_0
#define reg_DFE_F27_SIGN_P1_LANE  DFE_P1_REG61.BF.DFE_F27_SIGN_P1_LANE

// 0x3e	DFE_P1_REG62		
typedef union {
	struct {
		uint8_t DFE_F28_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F28_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG62_t;
__xdata __at( 0x10f8 ) volatile DFE_P1_REG62_t DFE_P1_REG62;
#define reg_DFE_F28_P1_LANE_3_0  DFE_P1_REG62.BF.DFE_F28_P1_LANE_3_0
#define reg_DFE_F28_SIGN_P1_LANE  DFE_P1_REG62.BF.DFE_F28_SIGN_P1_LANE

// 0x3f	DFE_P1_REG63		
typedef union {
	struct {
		uint8_t DFE_F29_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F29_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG63_t;
__xdata __at( 0x10fc ) volatile DFE_P1_REG63_t DFE_P1_REG63;
#define reg_DFE_F29_P1_LANE_3_0  DFE_P1_REG63.BF.DFE_F29_P1_LANE_3_0
#define reg_DFE_F29_SIGN_P1_LANE  DFE_P1_REG63.BF.DFE_F29_SIGN_P1_LANE

// 0x40	DFE_P1_REG64		
typedef union {
	struct {
		uint8_t DFE_F30_P1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F30_SIGN_P1_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG64_t;
__xdata __at( 0x1100 ) volatile DFE_P1_REG64_t DFE_P1_REG64;
#define reg_DFE_F30_P1_LANE_3_0  DFE_P1_REG64.BF.DFE_F30_P1_LANE_3_0
#define reg_DFE_F30_SIGN_P1_LANE  DFE_P1_REG64.BF.DFE_F30_SIGN_P1_LANE

// 0x41	DFE_P1_REG65		
typedef union {
	struct {
		uint8_t F2_TUNE_BOT_D_P1_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG65_t;
__xdata __at( 0x1104 ) volatile DFE_P1_REG65_t DFE_P1_REG65;
#define reg_F2_TUNE_BOT_D_P1_LANE_3_0  DFE_P1_REG65.BF.F2_TUNE_BOT_D_P1_LANE_3_0

// 0x42	DFE_P1_REG66		
typedef union {
	struct {
		uint8_t F2_TUNE_BOT_S_P1_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG66_t;
__xdata __at( 0x1108 ) volatile DFE_P1_REG66_t DFE_P1_REG66;
#define reg_F2_TUNE_BOT_S_P1_LANE_3_0  DFE_P1_REG66.BF.F2_TUNE_BOT_S_P1_LANE_3_0

// 0x43	DFE_P1_REG67		
typedef union {
	struct {
		uint8_t F2_TUNE_TOP_D_P1_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG67_t;
__xdata __at( 0x110c ) volatile DFE_P1_REG67_t DFE_P1_REG67;
#define reg_F2_TUNE_TOP_D_P1_LANE_3_0  DFE_P1_REG67.BF.F2_TUNE_TOP_D_P1_LANE_3_0

// 0x44	DFE_P1_REG68		
typedef union {
	struct {
		uint8_t F2_TUNE_TOP_S_P1_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG68_t;
__xdata __at( 0x1110 ) volatile DFE_P1_REG68_t DFE_P1_REG68;
#define reg_F2_TUNE_TOP_S_P1_LANE_3_0  DFE_P1_REG68.BF.F2_TUNE_TOP_S_P1_LANE_3_0

// 0x45	DFE_P1_REG69		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_BOT_P1_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG69_t;
__xdata __at( 0x1114 ) volatile DFE_P1_REG69_t DFE_P1_REG69;
#define reg_DFE_VREF_NEG_BOT_P1_LANE_4_0  DFE_P1_REG69.BF.DFE_VREF_NEG_BOT_P1_LANE_4_0

// 0x46	DFE_P1_REG70		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_BOT_P1_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_BOT_P1_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG70_t;
__xdata __at( 0x1118 ) volatile DFE_P1_REG70_t DFE_P1_REG70;
#define reg_DFE_VREF_POS_BOT_P1_LANE_4_0  DFE_P1_REG70.BF.DFE_VREF_POS_BOT_P1_LANE_4_0
#define reg_DFE_VREF_SIGN_BOT_P1_LANE  DFE_P1_REG70.BF.DFE_VREF_SIGN_BOT_P1_LANE

// 0x47	DFE_P1_REG71		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_MID_P1_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG71_t;
__xdata __at( 0x111c ) volatile DFE_P1_REG71_t DFE_P1_REG71;
#define reg_DFE_VREF_NEG_MID_P1_LANE_4_0  DFE_P1_REG71.BF.DFE_VREF_NEG_MID_P1_LANE_4_0

// 0x48	DFE_P1_REG72		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_MID_P1_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_MID_P1_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG72_t;
__xdata __at( 0x1120 ) volatile DFE_P1_REG72_t DFE_P1_REG72;
#define reg_DFE_VREF_POS_MID_P1_LANE_4_0  DFE_P1_REG72.BF.DFE_VREF_POS_MID_P1_LANE_4_0
#define reg_DFE_VREF_SIGN_MID_P1_LANE  DFE_P1_REG72.BF.DFE_VREF_SIGN_MID_P1_LANE

// 0x49	DFE_P1_REG73		
typedef union {
	struct {
		uint8_t DFE_VREF_NEG_TOP_P1_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG73_t;
__xdata __at( 0x1124 ) volatile DFE_P1_REG73_t DFE_P1_REG73;
#define reg_DFE_VREF_NEG_TOP_P1_LANE_4_0  DFE_P1_REG73.BF.DFE_VREF_NEG_TOP_P1_LANE_4_0

// 0x4a	DFE_P1_REG74		
typedef union {
	struct {
		uint8_t DFE_VREF_POS_TOP_P1_LANE_4_0             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t DFE_VREF_SIGN_TOP_P1_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG74_t;
__xdata __at( 0x1128 ) volatile DFE_P1_REG74_t DFE_P1_REG74;
#define reg_DFE_VREF_POS_TOP_P1_LANE_4_0  DFE_P1_REG74.BF.DFE_VREF_POS_TOP_P1_LANE_4_0
#define reg_DFE_VREF_SIGN_TOP_P1_LANE  DFE_P1_REG74.BF.DFE_VREF_SIGN_TOP_P1_LANE

// 0x4b	DFE_P1_REG75		
typedef union {
	struct {
		uint8_t OFST_D_BOT_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG75_t;
__xdata __at( 0x112c ) volatile DFE_P1_REG75_t DFE_P1_REG75;
#define reg_OFST_D_BOT_P1_LANE_5_0  DFE_P1_REG75.BF.OFST_D_BOT_P1_LANE_5_0

// 0x4c	DFE_P1_REG76		
typedef union {
	struct {
		uint8_t OFST_D_MID_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG76_t;
__xdata __at( 0x1130 ) volatile DFE_P1_REG76_t DFE_P1_REG76;
#define reg_OFST_D_MID_P1_LANE_5_0  DFE_P1_REG76.BF.OFST_D_MID_P1_LANE_5_0

// 0x4d	DFE_P1_REG77		
typedef union {
	struct {
		uint8_t OFST_D_TOP_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG77_t;
__xdata __at( 0x1134 ) volatile DFE_P1_REG77_t DFE_P1_REG77;
#define reg_OFST_D_TOP_P1_LANE_5_0  DFE_P1_REG77.BF.OFST_D_TOP_P1_LANE_5_0

// 0x4e	DFE_P1_REG78		
typedef union {
	struct {
		uint8_t OFST_S_BOT_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG78_t;
__xdata __at( 0x1138 ) volatile DFE_P1_REG78_t DFE_P1_REG78;
#define reg_OFST_S_BOT_P1_LANE_5_0  DFE_P1_REG78.BF.OFST_S_BOT_P1_LANE_5_0

// 0x4f	DFE_P1_REG79		
typedef union {
	struct {
		uint8_t OFST_S_MID_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG79_t;
__xdata __at( 0x113c ) volatile DFE_P1_REG79_t DFE_P1_REG79;
#define reg_OFST_S_MID_P1_LANE_5_0  DFE_P1_REG79.BF.OFST_S_MID_P1_LANE_5_0

// 0x50	DFE_P1_REG80		
typedef union {
	struct {
		uint8_t OFST_S_TOP_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG80_t;
__xdata __at( 0x1140 ) volatile DFE_P1_REG80_t DFE_P1_REG80;
#define reg_OFST_S_TOP_P1_LANE_5_0  DFE_P1_REG80.BF.OFST_S_TOP_P1_LANE_5_0

// 0x51	DFE_P1_REG81		
typedef union {
	struct {
		uint8_t OFST_EDGE_NEG_P1_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG81_t;
__xdata __at( 0x1144 ) volatile DFE_P1_REG81_t DFE_P1_REG81;
#define reg_OFST_EDGE_NEG_P1_LANE_4_0  DFE_P1_REG81.BF.OFST_EDGE_NEG_P1_LANE_4_0

// 0x52	DFE_P1_REG82		
typedef union {
	struct {
		uint8_t OFST_EDGE_POS_P1_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_EDGE_SIGN_P1_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG82_t;
__xdata __at( 0x1148 ) volatile DFE_P1_REG82_t DFE_P1_REG82;
#define reg_OFST_EDGE_POS_P1_LANE_4_0  DFE_P1_REG82.BF.OFST_EDGE_POS_P1_LANE_4_0
#define reg_OFST_EDGE_SIGN_P1_LANE  DFE_P1_REG82.BF.OFST_EDGE_SIGN_P1_LANE

// 0x53	DFE_P1_REG83		
typedef union {
	struct {
		uint8_t CTLE_CURRENT1_SEL_PRE_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_P1_REG83_t;
__xdata __at( 0x114c ) volatile DFE_P1_REG83_t DFE_P1_REG83;
#define reg_CTLE_CURRENT1_SEL_PRE_LANE_3_0  DFE_P1_REG83.BF.CTLE_CURRENT1_SEL_PRE_LANE_3_0

#endif
