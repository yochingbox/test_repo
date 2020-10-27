#ifndef PHY_REG_C_ANA_DFEO_TOP_LANE_H
#define PHY_REG_C_ANA_DFEO_TOP_LANE_H



// 0xc	ANA_DFEO_REG_0C		Analog_dfeo_related_register_0c
typedef union {
	struct {
		uint8_t DFE_F4_O_LANE_5_0                        : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_0C_t;
__xdata __at( 0x830 ) volatile ANA_DFEO_REG_0C_t ANA_DFEO_REG_0C;
#define reg_DFE_F4_O_LANE_5_0  ANA_DFEO_REG_0C.BF.DFE_F4_O_LANE_5_0

// 0xd	ANA_DFEO_REG_0D		Analog_dfeo_related_register_0d
typedef union {
	struct {
		uint8_t DFE_F5_O_LANE_5_0                        : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_0D_t;
__xdata __at( 0x834 ) volatile ANA_DFEO_REG_0D_t ANA_DFEO_REG_0D;
#define reg_DFE_F5_O_LANE_5_0  ANA_DFEO_REG_0D.BF.DFE_F5_O_LANE_5_0

// 0xe	ANA_DFEO_REG_0E		Analog_dfeo_related_register_0e
typedef union {
	struct {
		uint8_t DFE_F6_O_LANE_5_0                        : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_0E_t;
__xdata __at( 0x838 ) volatile ANA_DFEO_REG_0E_t ANA_DFEO_REG_0E;
#define reg_DFE_F6_O_LANE_5_0  ANA_DFEO_REG_0E.BF.DFE_F6_O_LANE_5_0

// 0xf	ANA_DFEO_REG_0F		Analog_dfeo_related_register_0f
typedef union {
	struct {
		uint8_t DFE_F7_O_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_0F_t;
__xdata __at( 0x83c ) volatile ANA_DFEO_REG_0F_t ANA_DFEO_REG_0F;
#define reg_DFE_F7_O_LANE_4_0  ANA_DFEO_REG_0F.BF.DFE_F7_O_LANE_4_0

// 0x10	ANA_DFEO_REG_10		Analog_dfeo_related_register_10
typedef union {
	struct {
		uint8_t DFE_F8_O_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_10_t;
__xdata __at( 0x840 ) volatile ANA_DFEO_REG_10_t ANA_DFEO_REG_10;
#define reg_DFE_F8_O_LANE_4_0  ANA_DFEO_REG_10.BF.DFE_F8_O_LANE_4_0

// 0x11	ANA_DFEO_REG_11		Analog_dfeo_related_register_11
typedef union {
	struct {
		uint8_t DFE_F9_O_LANE_4_0                        : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_11_t;
__xdata __at( 0x844 ) volatile ANA_DFEO_REG_11_t ANA_DFEO_REG_11;
#define reg_DFE_F9_O_LANE_4_0  ANA_DFEO_REG_11.BF.DFE_F9_O_LANE_4_0

// 0x12	ANA_DFEO_REG_12		Analog_dfeo_related_register_12
typedef union {
	struct {
		uint8_t DFE_F10_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_12_t;
__xdata __at( 0x848 ) volatile ANA_DFEO_REG_12_t ANA_DFEO_REG_12;
#define reg_DFE_F10_O_LANE_4_0  ANA_DFEO_REG_12.BF.DFE_F10_O_LANE_4_0

// 0x13	ANA_DFEO_REG_13		Analog_dfeo_related_register_13
typedef union {
	struct {
		uint8_t DFE_F11_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_13_t;
__xdata __at( 0x84c ) volatile ANA_DFEO_REG_13_t ANA_DFEO_REG_13;
#define reg_DFE_F11_O_LANE_4_0  ANA_DFEO_REG_13.BF.DFE_F11_O_LANE_4_0

// 0x14	ANA_DFEO_REG_14		Analog_dfeo_related_register_14
typedef union {
	struct {
		uint8_t DFE_F12_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_14_t;
__xdata __at( 0x850 ) volatile ANA_DFEO_REG_14_t ANA_DFEO_REG_14;
#define reg_DFE_F12_O_LANE_4_0  ANA_DFEO_REG_14.BF.DFE_F12_O_LANE_4_0

// 0x15	ANA_DFEO_REG_15		Analog_dfeo_related_register_15
typedef union {
	struct {
		uint8_t DFE_F13_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_15_t;
__xdata __at( 0x854 ) volatile ANA_DFEO_REG_15_t ANA_DFEO_REG_15;
#define reg_DFE_F13_O_LANE_4_0  ANA_DFEO_REG_15.BF.DFE_F13_O_LANE_4_0

// 0x16	ANA_DFEO_REG_16		Analog_dfeo_related_register_16
typedef union {
	struct {
		uint8_t DFE_F14_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_16_t;
__xdata __at( 0x858 ) volatile ANA_DFEO_REG_16_t ANA_DFEO_REG_16;
#define reg_DFE_F14_O_LANE_4_0  ANA_DFEO_REG_16.BF.DFE_F14_O_LANE_4_0

// 0x17	ANA_DFEO_REG_17		Analog_dfeo_related_register_17
typedef union {
	struct {
		uint8_t DFE_F15_O_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_17_t;
__xdata __at( 0x85c ) volatile ANA_DFEO_REG_17_t ANA_DFEO_REG_17;
#define reg_DFE_F15_O_LANE_4_0  ANA_DFEO_REG_17.BF.DFE_F15_O_LANE_4_0

// 0x18	ANA_DFEO_REG_18		Analog_dfeo_related_register_18
typedef union {
	struct {
		uint8_t DFE_FF1_O_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_18_t;
__xdata __at( 0x860 ) volatile ANA_DFEO_REG_18_t ANA_DFEO_REG_18;
#define reg_DFE_FF1_O_LANE_5_0  ANA_DFEO_REG_18.BF.DFE_FF1_O_LANE_5_0

// 0x19	ANA_DFEO_REG_19		Analog_dfeo_related_register_19
typedef union {
	struct {
		uint8_t DFE_FF2_O_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_19_t;
__xdata __at( 0x864 ) volatile ANA_DFEO_REG_19_t ANA_DFEO_REG_19;
#define reg_DFE_FF2_O_LANE_5_0  ANA_DFEO_REG_19.BF.DFE_FF2_O_LANE_5_0

// 0x1a	ANA_DFEO_REG_1A		Analog_dfeo_related_register_1a
typedef union {
	struct {
		uint8_t DFE_FF3_O_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_1A_t;
__xdata __at( 0x868 ) volatile ANA_DFEO_REG_1A_t ANA_DFEO_REG_1A;
#define reg_DFE_FF3_O_LANE_5_0  ANA_DFEO_REG_1A.BF.DFE_FF3_O_LANE_5_0

// 0x1b	ANA_DFEO_REG_1B		Analog_dfeo_related_register_1b
typedef union {
	struct {
		uint8_t DFE_FF4_O_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_1B_t;
__xdata __at( 0x86c ) volatile ANA_DFEO_REG_1B_t ANA_DFEO_REG_1B;
#define reg_DFE_FF4_O_LANE_5_0  ANA_DFEO_REG_1B.BF.DFE_FF4_O_LANE_5_0

// 0x1c	ANA_DFEO_REG_1C		Analog_dfeo_related_register_1c
typedef union {
	struct {
		uint8_t DFE_FF5_O_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_1C_t;
__xdata __at( 0x870 ) volatile ANA_DFEO_REG_1C_t ANA_DFEO_REG_1C;
#define reg_DFE_FF5_O_LANE_5_0  ANA_DFEO_REG_1C.BF.DFE_FF5_O_LANE_5_0

// 0x1d	ANA_DFEO_REG_1D		Analog_dfeo_related_register_1d
typedef union {
	struct {
		uint8_t DFE_FF6_O_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_1D_t;
__xdata __at( 0x874 ) volatile ANA_DFEO_REG_1D_t ANA_DFEO_REG_1D;
#define reg_DFE_FF6_O_LANE_5_0  ANA_DFEO_REG_1D.BF.DFE_FF6_O_LANE_5_0

// 0x1e	ANA_DFEO_REG_1E		Analog_dfeo_related_register_1e
typedef union {
	struct {
		uint8_t OFST_F1P_POS_D_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1P_SIGN_D_O_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_1E_t;
__xdata __at( 0x878 ) volatile ANA_DFEO_REG_1E_t ANA_DFEO_REG_1E;
#define reg_OFST_F1P_POS_D_O_LANE_4_0  ANA_DFEO_REG_1E.BF.OFST_F1P_POS_D_O_LANE_4_0
#define reg_OFST_F1P_SIGN_D_O_LANE  ANA_DFEO_REG_1E.BF.OFST_F1P_SIGN_D_O_LANE

// 0x1f	ANA_DFEO_REG_1F		Analog_dfeo_related_register_1f
typedef union {
	struct {
		uint8_t OFST_F1P_NEG_D_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_1F_t;
__xdata __at( 0x87c ) volatile ANA_DFEO_REG_1F_t ANA_DFEO_REG_1F;
#define reg_OFST_F1P_NEG_D_O_LANE_4_0  ANA_DFEO_REG_1F.BF.OFST_F1P_NEG_D_O_LANE_4_0

// 0x20	ANA_DFEO_REG_20		Analog_dfeo_related_register_20
typedef union {
	struct {
		uint8_t OFST_F1N_POS_D_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1N_SIGN_D_O_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_20_t;
__xdata __at( 0x880 ) volatile ANA_DFEO_REG_20_t ANA_DFEO_REG_20;
#define reg_OFST_F1N_POS_D_O_LANE_4_0  ANA_DFEO_REG_20.BF.OFST_F1N_POS_D_O_LANE_4_0
#define reg_OFST_F1N_SIGN_D_O_LANE  ANA_DFEO_REG_20.BF.OFST_F1N_SIGN_D_O_LANE

// 0x21	ANA_DFEO_REG_21		Analog_dfeo_related_register_21
typedef union {
	struct {
		uint8_t OFST_F1N_NEG_D_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_21_t;
__xdata __at( 0x884 ) volatile ANA_DFEO_REG_21_t ANA_DFEO_REG_21;
#define reg_OFST_F1N_NEG_D_O_LANE_4_0  ANA_DFEO_REG_21.BF.OFST_F1N_NEG_D_O_LANE_4_0

// 0x22	ANA_DFEO_REG_22		Analog_dfeo_related_register_22
typedef union {
	struct {
		uint8_t OFST_F1P_POS_S_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1P_SIGN_S_O_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_22_t;
__xdata __at( 0x888 ) volatile ANA_DFEO_REG_22_t ANA_DFEO_REG_22;
#define reg_OFST_F1P_POS_S_O_LANE_4_0  ANA_DFEO_REG_22.BF.OFST_F1P_POS_S_O_LANE_4_0
#define reg_OFST_F1P_SIGN_S_O_LANE  ANA_DFEO_REG_22.BF.OFST_F1P_SIGN_S_O_LANE

// 0x23	ANA_DFEO_REG_23		Analog_dfeo_related_register_23
typedef union {
	struct {
		uint8_t OFST_F1P_NEG_S_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_23_t;
__xdata __at( 0x88c ) volatile ANA_DFEO_REG_23_t ANA_DFEO_REG_23;
#define reg_OFST_F1P_NEG_S_O_LANE_4_0  ANA_DFEO_REG_23.BF.OFST_F1P_NEG_S_O_LANE_4_0

// 0x24	ANA_DFEO_REG_24		Analog_dfeo_related_register_24
typedef union {
	struct {
		uint8_t OFST_F1N_POS_S_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1N_SIGN_S_O_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_24_t;
__xdata __at( 0x890 ) volatile ANA_DFEO_REG_24_t ANA_DFEO_REG_24;
#define reg_OFST_F1N_POS_S_O_LANE_4_0  ANA_DFEO_REG_24.BF.OFST_F1N_POS_S_O_LANE_4_0
#define reg_OFST_F1N_SIGN_S_O_LANE  ANA_DFEO_REG_24.BF.OFST_F1N_SIGN_S_O_LANE

// 0x25	ANA_DFEO_REG_25		Analog_dfeo_related_register_25
typedef union {
	struct {
		uint8_t OFST_F1N_NEG_S_O_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_25_t;
__xdata __at( 0x894 ) volatile ANA_DFEO_REG_25_t ANA_DFEO_REG_25;
#define reg_OFST_F1N_NEG_S_O_LANE_4_0  ANA_DFEO_REG_25.BF.OFST_F1N_NEG_S_O_LANE_4_0

// 0x26	ANA_DFEO_REG_26		Analog_dfeo_related_register_26
typedef union {
	struct {
		uint8_t OFST_EDGE_POS_O_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_EDGE_SIGN_O_LANE                    : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_26_t;
__xdata __at( 0x898 ) volatile ANA_DFEO_REG_26_t ANA_DFEO_REG_26;
#define reg_OFST_EDGE_POS_O_LANE_4_0  ANA_DFEO_REG_26.BF.OFST_EDGE_POS_O_LANE_4_0
#define reg_OFST_EDGE_SIGN_O_LANE  ANA_DFEO_REG_26.BF.OFST_EDGE_SIGN_O_LANE

// 0x27	ANA_DFEO_REG_27		Analog_dfeo_related_register_27
typedef union {
	struct {
		uint8_t OFST_EDGE_NEG_O_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_27_t;
__xdata __at( 0x89c ) volatile ANA_DFEO_REG_27_t ANA_DFEO_REG_27;
#define reg_OFST_EDGE_NEG_O_LANE_4_0  ANA_DFEO_REG_27.BF.OFST_EDGE_NEG_O_LANE_4_0

#endif
