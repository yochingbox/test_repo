#ifndef PHY_REG_C_ANA_DFEO_BOT_LANE_H
#define PHY_REG_C_ANA_DFEO_BOT_LANE_H



// 0x0	ANA_DFEO_REG_00		Analog_dfeo_related_register_00
typedef union {
	struct {
		uint8_t DFE_F0_D_O_LANE_5_0                      : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_00_t;
__xdata __at( 0x800 ) volatile ANA_DFEO_REG_00_t ANA_DFEO_REG_00;
#define reg_DFE_F0_D_O_LANE_5_0  ANA_DFEO_REG_00.BF.DFE_F0_D_O_LANE_5_0

// 0x1	ANA_DFEO_REG_01		Analog_dfeo_related_register_01
typedef union {
	struct {
		uint8_t DFE_F0_S_O_LANE_5_0                      : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_01_t;
__xdata __at( 0x804 ) volatile ANA_DFEO_REG_01_t ANA_DFEO_REG_01;
#define reg_DFE_F0_S_O_LANE_5_0  ANA_DFEO_REG_01.BF.DFE_F0_S_O_LANE_5_0

// 0x2	ANA_DFEO_REG_02		Analog_dfeo_related_register_02
typedef union {
	struct {
		uint8_t DFE_F1_POS_O_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DFE_F1_SIGN_O_LANE                       : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_02_t;
__xdata __at( 0x808 ) volatile ANA_DFEO_REG_02_t ANA_DFEO_REG_02;
#define reg_DFE_F1_POS_O_LANE_3_0  ANA_DFEO_REG_02.BF.DFE_F1_POS_O_LANE_3_0
#define reg_DFE_F1_SIGN_O_LANE  ANA_DFEO_REG_02.BF.DFE_F1_SIGN_O_LANE

// 0x3	ANA_DFEO_REG_03		Analog_dfeo_related_register_03
typedef union {
	struct {
		uint8_t DFE_F1_NEG_O_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'b0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'b0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_03_t;
__xdata __at( 0x80c ) volatile ANA_DFEO_REG_03_t ANA_DFEO_REG_03;
#define reg_DFE_F1_NEG_O_LANE_3_0  ANA_DFEO_REG_03.BF.DFE_F1_NEG_O_LANE_3_0

// 0x4	ANA_DFEO_REG_04		Analog_dfeo_related_register_04
typedef union {
	struct {
		uint8_t DFE_F2_F1P_D_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_04_t;
__xdata __at( 0x810 ) volatile ANA_DFEO_REG_04_t ANA_DFEO_REG_04;
#define reg_DFE_F2_F1P_D_O_LANE_5_0  ANA_DFEO_REG_04.BF.DFE_F2_F1P_D_O_LANE_5_0

// 0x5	ANA_DFEO_REG_05		Analog_dfeo_related_register_05
typedef union {
	struct {
		uint8_t DFE_F2_F1N_D_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_05_t;
__xdata __at( 0x814 ) volatile ANA_DFEO_REG_05_t ANA_DFEO_REG_05;
#define reg_DFE_F2_F1N_D_O_LANE_5_0  ANA_DFEO_REG_05.BF.DFE_F2_F1N_D_O_LANE_5_0

// 0x6	ANA_DFEO_REG_06		Analog_dfeo_related_register_06
typedef union {
	struct {
		uint8_t DFE_F2_F1P_S_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_06_t;
__xdata __at( 0x818 ) volatile ANA_DFEO_REG_06_t ANA_DFEO_REG_06;
#define reg_DFE_F2_F1P_S_O_LANE_5_0  ANA_DFEO_REG_06.BF.DFE_F2_F1P_S_O_LANE_5_0

// 0x7	ANA_DFEO_REG_07		Analog_dfeo_related_register_07
typedef union {
	struct {
		uint8_t DFE_F2_F1N_S_O_LANE_5_0                  : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_07_t;
__xdata __at( 0x81c ) volatile ANA_DFEO_REG_07_t ANA_DFEO_REG_07;
#define reg_DFE_F2_F1N_S_O_LANE_5_0  ANA_DFEO_REG_07.BF.DFE_F2_F1N_S_O_LANE_5_0

// 0x8	ANA_DFEO_REG_08		Analog_dfeo_related_register_08
typedef union {
	struct {
		uint8_t DFE_F3_F1P_D_O_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_08_t;
__xdata __at( 0x820 ) volatile ANA_DFEO_REG_08_t ANA_DFEO_REG_08;
#define reg_DFE_F3_F1P_D_O_LANE_4_0  ANA_DFEO_REG_08.BF.DFE_F3_F1P_D_O_LANE_4_0

// 0x9	ANA_DFEO_REG_09		Analog_dfeo_related_register_09
typedef union {
	struct {
		uint8_t DFE_F3_F1N_D_O_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_09_t;
__xdata __at( 0x824 ) volatile ANA_DFEO_REG_09_t ANA_DFEO_REG_09;
#define reg_DFE_F3_F1N_D_O_LANE_4_0  ANA_DFEO_REG_09.BF.DFE_F3_F1N_D_O_LANE_4_0

// 0xa	ANA_DFEO_REG_0A		Analog_dfeo_related_register_0a
typedef union {
	struct {
		uint8_t DFE_F3_F1P_S_O_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_0A_t;
__xdata __at( 0x828 ) volatile ANA_DFEO_REG_0A_t ANA_DFEO_REG_0A;
#define reg_DFE_F3_F1P_S_O_LANE_4_0  ANA_DFEO_REG_0A.BF.DFE_F3_F1P_S_O_LANE_4_0

// 0xb	ANA_DFEO_REG_0B		Analog_dfeo_related_register_0b
typedef union {
	struct {
		uint8_t DFE_F3_F1N_S_O_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEO_REG_0B_t;
__xdata __at( 0x82c ) volatile ANA_DFEO_REG_0B_t ANA_DFEO_REG_0B;
#define reg_DFE_F3_F1N_S_O_LANE_4_0  ANA_DFEO_REG_0B.BF.DFE_F3_F1N_S_O_LANE_4_0

#endif
