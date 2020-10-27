#ifndef C_XSRPHY_112G_N5_SOFTWARE_COMMON_V00.49_2BYTES_REG_MIDAS_H
#define C_XSRPHY_112G_N5_SOFTWARE_COMMON_V00.49_2BYTES_REG_MIDAS_H



// 0x00c4	INEQUALITY_LOW_LIMIT_REGISTER		Common Register
typedef union {
	struct {
		uint8_t LLIM_15_0_b0                             : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t LLIM_15_0_b1                             : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INEQUALITY_LOW_LIMIT_REGISTER_t;
__xdata __at( 0x40c4 ) volatile INEQUALITY_LOW_LIMIT_REGISTER_t INEQUALITY_LOW_LIMIT_REGISTER;
#define reg_LLIM_15_0_b0  INEQUALITY_LOW_LIMIT_REGISTER.BF.LLIM_15_0_b0
#define reg_LLIM_15_0_b1  INEQUALITY_LOW_LIMIT_REGISTER.BF.LLIM_15_0_b1
#define reg_LLIM_15_0  INEQUALITY_LOW_LIMIT_REGISTER.WT.W0

// 0x00c8	INEQUALITY_LOW_LIMIT_MASK_REGISTER		Common Register
typedef union {
	struct {
		uint8_t LMSK_15_0_b0                             : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t LMSK_15_0_b1                             : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INEQUALITY_LOW_LIMIT_MASK_REGISTER_t;
__xdata __at( 0x40c8 ) volatile INEQUALITY_LOW_LIMIT_MASK_REGISTER_t INEQUALITY_LOW_LIMIT_MASK_REGISTER;
#define reg_LMSK_15_0_b0  INEQUALITY_LOW_LIMIT_MASK_REGISTER.BF.LMSK_15_0_b0
#define reg_LMSK_15_0_b1  INEQUALITY_LOW_LIMIT_MASK_REGISTER.BF.LMSK_15_0_b1
#define reg_LMSK_15_0  INEQUALITY_LOW_LIMIT_MASK_REGISTER.WT.W0

// 0x00cc	INEQUALITY_HIGH_LIMIT_REGISTER		Common Register
typedef union {
	struct {
		uint8_t HLIM_15_0_b0                             : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t HLIM_15_0_b1                             : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INEQUALITY_HIGH_LIMIT_REGISTER_t;
__xdata __at( 0x40cc ) volatile INEQUALITY_HIGH_LIMIT_REGISTER_t INEQUALITY_HIGH_LIMIT_REGISTER;
#define reg_HLIM_15_0_b0  INEQUALITY_HIGH_LIMIT_REGISTER.BF.HLIM_15_0_b0
#define reg_HLIM_15_0_b1  INEQUALITY_HIGH_LIMIT_REGISTER.BF.HLIM_15_0_b1
#define reg_HLIM_15_0  INEQUALITY_HIGH_LIMIT_REGISTER.WT.W0

// 0x00d0	INEQUALITY_HIGH_LIMIT_MASK_REGISTER		Common Register
typedef union {
	struct {
		uint8_t HMSK_15_0_b0                             : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t HMSK_15_0_b1                             : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INEQUALITY_HIGH_LIMIT_MASK_REGISTER_t;
__xdata __at( 0x40d0 ) volatile INEQUALITY_HIGH_LIMIT_MASK_REGISTER_t INEQUALITY_HIGH_LIMIT_MASK_REGISTER;
#define reg_HMSK_15_0_b0  INEQUALITY_HIGH_LIMIT_MASK_REGISTER.BF.HMSK_15_0_b0
#define reg_HMSK_15_0_b1  INEQUALITY_HIGH_LIMIT_MASK_REGISTER.BF.HMSK_15_0_b1
#define reg_HMSK_15_0  INEQUALITY_HIGH_LIMIT_MASK_REGISTER.WT.W0

#endif
