#ifndef PHY_REG_C_ANA_DFEE_BOT_LANE_H
#define PHY_REG_C_ANA_DFEE_BOT_LANE_H



// 0x0	ANA_DFEE_REG_00		Analog_dfee_related_register_00
typedef union {
	struct {
		uint8_t DFE_F0_D_E_LANE_5_0                      : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_00_t;
__xdata __at( 0x400 ) volatile ANA_DFEE_REG_00_t ANA_DFEE_REG_00;
#define reg_DFE_F0_D_E_LANE_5_0  ANA_DFEE_REG_00.BF.DFE_F0_D_E_LANE_5_0

// 0x1	ANA_DFEE_REG_01		Analog_dfee_related_register_01
typedef union {
	struct {
		uint8_t DFE_F0_S_E_LANE_5_0                      : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_01_t;
__xdata __at( 0x404 ) volatile ANA_DFEE_REG_01_t ANA_DFEE_REG_01;
#define reg_DFE_F0_S_E_LANE_5_0  ANA_DFEE_REG_01.BF.DFE_F0_S_E_LANE_5_0

// 0x2	ANA_DFEE_REG_02		Analog_dfee_related_register_02
typedef union {
	struct {
		uint8_t DFE_F1_POS_E_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F1_SIGN_E_LANE                       : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_02_t;
__xdata __at( 0x408 ) volatile ANA_DFEE_REG_02_t ANA_DFEE_REG_02;
#define reg_DFE_F1_POS_E_LANE_3_0  ANA_DFEE_REG_02.BF.DFE_F1_POS_E_LANE_3_0
#define reg_DFE_F1_SIGN_E_LANE  ANA_DFEE_REG_02.BF.DFE_F1_SIGN_E_LANE

// 0x3	ANA_DFEE_REG_03		Analog_dfee_related_register_03
typedef union {
	struct {
		uint8_t DFE_F1_NEG_E_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'b0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'b0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_03_t;
__xdata __at( 0x40c ) volatile ANA_DFEE_REG_03_t ANA_DFEE_REG_03;
#define reg_DFE_F1_NEG_E_LANE_3_0  ANA_DFEE_REG_03.BF.DFE_F1_NEG_E_LANE_3_0

// 0x4	ANA_DFEE_REG_04		Analog_dfee_related_register_04
typedef union {
	struct {
		uint8_t DFE_F2_F1P_D_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_04_t;
__xdata __at( 0x410 ) volatile ANA_DFEE_REG_04_t ANA_DFEE_REG_04;
#define reg_DFE_F2_F1P_D_E_LANE_5_0  ANA_DFEE_REG_04.BF.DFE_F2_F1P_D_E_LANE_5_0

// 0x5	ANA_DFEE_REG_05		Analog_dfee_related_register_05
typedef union {
	struct {
		uint8_t DFE_F2_F1N_D_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_05_t;
__xdata __at( 0x414 ) volatile ANA_DFEE_REG_05_t ANA_DFEE_REG_05;
#define reg_DFE_F2_F1N_D_E_LANE_5_0  ANA_DFEE_REG_05.BF.DFE_F2_F1N_D_E_LANE_5_0

// 0x6	ANA_DFEE_REG_06		Analog_dfee_related_register_06
typedef union {
	struct {
		uint8_t DFE_F2_F1P_S_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_06_t;
__xdata __at( 0x418 ) volatile ANA_DFEE_REG_06_t ANA_DFEE_REG_06;
#define reg_DFE_F2_F1P_S_E_LANE_5_0  ANA_DFEE_REG_06.BF.DFE_F2_F1P_S_E_LANE_5_0

// 0x7	ANA_DFEE_REG_07		Analog_dfee_related_register_07
typedef union {
	struct {
		uint8_t DFE_F2_F1N_S_E_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_07_t;
__xdata __at( 0x41c ) volatile ANA_DFEE_REG_07_t ANA_DFEE_REG_07;
#define reg_DFE_F2_F1N_S_E_LANE_5_0  ANA_DFEE_REG_07.BF.DFE_F2_F1N_S_E_LANE_5_0

// 0x8	ANA_DFEE_REG_08		Analog_dfee_related_register_08
typedef union {
	struct {
		uint8_t DFE_F3_F1P_D_E_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_08_t;
__xdata __at( 0x420 ) volatile ANA_DFEE_REG_08_t ANA_DFEE_REG_08;
#define reg_DFE_F3_F1P_D_E_LANE_4_0  ANA_DFEE_REG_08.BF.DFE_F3_F1P_D_E_LANE_4_0

// 0x9	ANA_DFEE_REG_09		Analog_dfee_related_register_09
typedef union {
	struct {
		uint8_t DFE_F3_F1N_D_E_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_09_t;
__xdata __at( 0x424 ) volatile ANA_DFEE_REG_09_t ANA_DFEE_REG_09;
#define reg_DFE_F3_F1N_D_E_LANE_4_0  ANA_DFEE_REG_09.BF.DFE_F3_F1N_D_E_LANE_4_0

// 0xa	ANA_DFEE_REG_0A		Analog_dfee_related_register_0a
typedef union {
	struct {
		uint8_t DFE_F3_F1P_S_E_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_0A_t;
__xdata __at( 0x428 ) volatile ANA_DFEE_REG_0A_t ANA_DFEE_REG_0A;
#define reg_DFE_F3_F1P_S_E_LANE_4_0  ANA_DFEE_REG_0A.BF.DFE_F3_F1P_S_E_LANE_4_0

// 0xb	ANA_DFEE_REG_0B		Analog_dfee_related_register_0b
typedef union {
	struct {
		uint8_t DFE_F3_F1N_S_E_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_0B_t;
__xdata __at( 0x42c ) volatile ANA_DFEE_REG_0B_t ANA_DFEE_REG_0B;
#define reg_DFE_F3_F1N_S_E_LANE_4_0  ANA_DFEE_REG_0B.BF.DFE_F3_F1N_S_E_LANE_4_0

// 0xc	ANA_DFEE_REG_0C		Analog_dfee_related_register_0c
typedef union {
	struct {
		uint8_t DFE_F4_E_LANE_5_0                        : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_0C_t;
__xdata __at( 0x430 ) volatile ANA_DFEE_REG_0C_t ANA_DFEE_REG_0C;
#define reg_DFE_F4_E_LANE_5_0  ANA_DFEE_REG_0C.BF.DFE_F4_E_LANE_5_0

// 0xd	ANA_DFEE_REG_0D		Analog_dfee_related_register_0d
typedef union {
	struct {
		uint8_t DFE_F5_E_LANE_5_0                        : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_0D_t;
__xdata __at( 0x434 ) volatile ANA_DFEE_REG_0D_t ANA_DFEE_REG_0D;
#define reg_DFE_F5_E_LANE_5_0  ANA_DFEE_REG_0D.BF.DFE_F5_E_LANE_5_0

// 0xe	ANA_DFEE_REG_0E		Analog_dfee_related_register_0e
typedef union {
	struct {
		uint8_t DFE_F6_E_LANE_5_0                        : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_0E_t;
__xdata __at( 0x438 ) volatile ANA_DFEE_REG_0E_t ANA_DFEE_REG_0E;
#define reg_DFE_F6_E_LANE_5_0  ANA_DFEE_REG_0E.BF.DFE_F6_E_LANE_5_0

// 0xf	ANA_DFEE_REG_0F		Analog_dfee_related_register_0f
typedef union {
	struct {
		uint8_t DFE_F7_E_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_0F_t;
__xdata __at( 0x43c ) volatile ANA_DFEE_REG_0F_t ANA_DFEE_REG_0F;
#define reg_DFE_F7_E_LANE_4_0  ANA_DFEE_REG_0F.BF.DFE_F7_E_LANE_4_0

// 0x10	ANA_DFEE_REG_10		Analog_dfee_related_register_10
typedef union {
	struct {
		uint8_t DFE_F8_E_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_10_t;
__xdata __at( 0x440 ) volatile ANA_DFEE_REG_10_t ANA_DFEE_REG_10;
#define reg_DFE_F8_E_LANE_4_0  ANA_DFEE_REG_10.BF.DFE_F8_E_LANE_4_0

// 0x11	ANA_DFEE_REG_11		Analog_dfee_related_register_11
typedef union {
	struct {
		uint8_t DFE_F9_E_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_11_t;
__xdata __at( 0x444 ) volatile ANA_DFEE_REG_11_t ANA_DFEE_REG_11;
#define reg_DFE_F9_E_LANE_4_0  ANA_DFEE_REG_11.BF.DFE_F9_E_LANE_4_0

// 0x12	ANA_DFEE_REG_12		Analog_dfee_related_register_12
typedef union {
	struct {
		uint8_t DFE_F10_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_12_t;
__xdata __at( 0x448 ) volatile ANA_DFEE_REG_12_t ANA_DFEE_REG_12;
#define reg_DFE_F10_E_LANE_4_0  ANA_DFEE_REG_12.BF.DFE_F10_E_LANE_4_0

// 0x13	ANA_DFEE_REG_13		Analog_dfee_related_register_13
typedef union {
	struct {
		uint8_t DFE_F11_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_13_t;
__xdata __at( 0x44c ) volatile ANA_DFEE_REG_13_t ANA_DFEE_REG_13;
#define reg_DFE_F11_E_LANE_4_0  ANA_DFEE_REG_13.BF.DFE_F11_E_LANE_4_0

// 0x14	ANA_DFEE_REG_14		Analog_dfee_related_register_14
typedef union {
	struct {
		uint8_t DFE_F12_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_14_t;
__xdata __at( 0x450 ) volatile ANA_DFEE_REG_14_t ANA_DFEE_REG_14;
#define reg_DFE_F12_E_LANE_4_0  ANA_DFEE_REG_14.BF.DFE_F12_E_LANE_4_0

// 0x15	ANA_DFEE_REG_15		Analog_dfee_related_register_15
typedef union {
	struct {
		uint8_t DFE_F13_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_15_t;
__xdata __at( 0x454 ) volatile ANA_DFEE_REG_15_t ANA_DFEE_REG_15;
#define reg_DFE_F13_E_LANE_4_0  ANA_DFEE_REG_15.BF.DFE_F13_E_LANE_4_0

// 0x16	ANA_DFEE_REG_16		Analog_dfee_related_register_16
typedef union {
	struct {
		uint8_t DFE_F14_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_16_t;
__xdata __at( 0x458 ) volatile ANA_DFEE_REG_16_t ANA_DFEE_REG_16;
#define reg_DFE_F14_E_LANE_4_0  ANA_DFEE_REG_16.BF.DFE_F14_E_LANE_4_0

// 0x17	ANA_DFEE_REG_17		Analog_dfee_related_register_17
typedef union {
	struct {
		uint8_t DFE_F15_E_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_17_t;
__xdata __at( 0x45c ) volatile ANA_DFEE_REG_17_t ANA_DFEE_REG_17;
#define reg_DFE_F15_E_LANE_4_0  ANA_DFEE_REG_17.BF.DFE_F15_E_LANE_4_0

// 0x18	ANA_DFEE_REG_18		Analog_dfee_related_register_18
typedef union {
	struct {
		uint8_t DFE_FF1_E_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_18_t;
__xdata __at( 0x460 ) volatile ANA_DFEE_REG_18_t ANA_DFEE_REG_18;
#define reg_DFE_FF1_E_LANE_5_0  ANA_DFEE_REG_18.BF.DFE_FF1_E_LANE_5_0

// 0x19	ANA_DFEE_REG_19		Analog_dfee_related_register_19
typedef union {
	struct {
		uint8_t DFE_FF2_E_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_19_t;
__xdata __at( 0x464 ) volatile ANA_DFEE_REG_19_t ANA_DFEE_REG_19;
#define reg_DFE_FF2_E_LANE_5_0  ANA_DFEE_REG_19.BF.DFE_FF2_E_LANE_5_0

// 0x1a	ANA_DFEE_REG_1A		Analog_dfee_related_register_1a
typedef union {
	struct {
		uint8_t DFE_FF3_E_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_1A_t;
__xdata __at( 0x468 ) volatile ANA_DFEE_REG_1A_t ANA_DFEE_REG_1A;
#define reg_DFE_FF3_E_LANE_5_0  ANA_DFEE_REG_1A.BF.DFE_FF3_E_LANE_5_0

// 0x1b	ANA_DFEE_REG_1B		Analog_dfee_related_register_1b
typedef union {
	struct {
		uint8_t DFE_FF4_E_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_1B_t;
__xdata __at( 0x46c ) volatile ANA_DFEE_REG_1B_t ANA_DFEE_REG_1B;
#define reg_DFE_FF4_E_LANE_5_0  ANA_DFEE_REG_1B.BF.DFE_FF4_E_LANE_5_0

// 0x1c	ANA_DFEE_REG_1C		Analog_dfee_related_register_1c
typedef union {
	struct {
		uint8_t DFE_FF5_E_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_1C_t;
__xdata __at( 0x470 ) volatile ANA_DFEE_REG_1C_t ANA_DFEE_REG_1C;
#define reg_DFE_FF5_E_LANE_5_0  ANA_DFEE_REG_1C.BF.DFE_FF5_E_LANE_5_0

// 0x1d	ANA_DFEE_REG_1D		Analog_dfee_related_register_1d
typedef union {
	struct {
		uint8_t DFE_FF6_E_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_1D_t;
__xdata __at( 0x474 ) volatile ANA_DFEE_REG_1D_t ANA_DFEE_REG_1D;
#define reg_DFE_FF6_E_LANE_5_0  ANA_DFEE_REG_1D.BF.DFE_FF6_E_LANE_5_0

#endif
