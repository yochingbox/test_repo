#ifndef PHY_REG_C_ANA_DFEE_TOP_LANE_H
#define PHY_REG_C_ANA_DFEE_TOP_LANE_H



// 0x1e	ANA_DFEE_REG_1E		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1P_POS_D_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1P_SIGN_D_E_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_1E_t;
__xdata __at( 0x478 ) volatile ANA_DFEE_REG_1E_t ANA_DFEE_REG_1E;
#define reg_OFST_F1P_POS_D_E_LANE_4_0  ANA_DFEE_REG_1E.BF.OFST_F1P_POS_D_E_LANE_4_0
#define reg_OFST_F1P_SIGN_D_E_LANE  ANA_DFEE_REG_1E.BF.OFST_F1P_SIGN_D_E_LANE

// 0x1f	ANA_DFEE_REG_1F		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1P_NEG_D_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_1F_t;
__xdata __at( 0x47c ) volatile ANA_DFEE_REG_1F_t ANA_DFEE_REG_1F;
#define reg_OFST_F1P_NEG_D_E_LANE_4_0  ANA_DFEE_REG_1F.BF.OFST_F1P_NEG_D_E_LANE_4_0

// 0x20	ANA_DFEE_REG_20		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1N_POS_D_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1N_SIGN_D_E_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_20_t;
__xdata __at( 0x480 ) volatile ANA_DFEE_REG_20_t ANA_DFEE_REG_20;
#define reg_OFST_F1N_POS_D_E_LANE_4_0  ANA_DFEE_REG_20.BF.OFST_F1N_POS_D_E_LANE_4_0
#define reg_OFST_F1N_SIGN_D_E_LANE  ANA_DFEE_REG_20.BF.OFST_F1N_SIGN_D_E_LANE

// 0x21	ANA_DFEE_REG_21		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1N_NEG_D_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_21_t;
__xdata __at( 0x484 ) volatile ANA_DFEE_REG_21_t ANA_DFEE_REG_21;
#define reg_OFST_F1N_NEG_D_E_LANE_4_0  ANA_DFEE_REG_21.BF.OFST_F1N_NEG_D_E_LANE_4_0

// 0x22	ANA_DFEE_REG_22		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1P_POS_S_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1P_SIGN_S_E_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_22_t;
__xdata __at( 0x488 ) volatile ANA_DFEE_REG_22_t ANA_DFEE_REG_22;
#define reg_OFST_F1P_POS_S_E_LANE_4_0  ANA_DFEE_REG_22.BF.OFST_F1P_POS_S_E_LANE_4_0
#define reg_OFST_F1P_SIGN_S_E_LANE  ANA_DFEE_REG_22.BF.OFST_F1P_SIGN_S_E_LANE

// 0x23	ANA_DFEE_REG_23		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1P_NEG_S_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_23_t;
__xdata __at( 0x48c ) volatile ANA_DFEE_REG_23_t ANA_DFEE_REG_23;
#define reg_OFST_F1P_NEG_S_E_LANE_4_0  ANA_DFEE_REG_23.BF.OFST_F1P_NEG_S_E_LANE_4_0

// 0x24	ANA_DFEE_REG_24		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1N_POS_S_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_F1N_SIGN_S_E_LANE                   : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_24_t;
__xdata __at( 0x490 ) volatile ANA_DFEE_REG_24_t ANA_DFEE_REG_24;
#define reg_OFST_F1N_POS_S_E_LANE_4_0  ANA_DFEE_REG_24.BF.OFST_F1N_POS_S_E_LANE_4_0
#define reg_OFST_F1N_SIGN_S_E_LANE  ANA_DFEE_REG_24.BF.OFST_F1N_SIGN_S_E_LANE

// 0x25	ANA_DFEE_REG_25		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_F1N_NEG_S_E_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_25_t;
__xdata __at( 0x494 ) volatile ANA_DFEE_REG_25_t ANA_DFEE_REG_25;
#define reg_OFST_F1N_NEG_S_E_LANE_4_0  ANA_DFEE_REG_25.BF.OFST_F1N_NEG_S_E_LANE_4_0

// 0x26	ANA_DFEE_REG_26		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_EDGE_POS_E_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t OFST_EDGE_SIGN_E_LANE                    : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_26_t;
__xdata __at( 0x498 ) volatile ANA_DFEE_REG_26_t ANA_DFEE_REG_26;
#define reg_OFST_EDGE_POS_E_LANE_4_0  ANA_DFEE_REG_26.BF.OFST_EDGE_POS_E_LANE_4_0
#define reg_OFST_EDGE_SIGN_E_LANE  ANA_DFEE_REG_26.BF.OFST_EDGE_SIGN_E_LANE

// 0x27	ANA_DFEE_REG_27		Analog_dfee_related_register_N
typedef union {
	struct {
		uint8_t OFST_EDGE_NEG_E_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFEE_REG_27_t;
__xdata __at( 0x49c ) volatile ANA_DFEE_REG_27_t ANA_DFEE_REG_27;
#define reg_OFST_EDGE_NEG_E_LANE_4_0  ANA_DFEE_REG_27.BF.OFST_EDGE_NEG_E_LANE_4_0

#endif
