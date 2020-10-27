#ifndef PHY_REG_C_MCU_CMN_H
#define PHY_REG_C_MCU_CMN_H



// 0x0000	MCU_CONTROL_0		MCU CMN Control Register 0
typedef union {
	struct {
		uint8_t MCU_EN_LANE0                             : 1;	/*      0     r/w   0*/
		uint8_t MCU_EN_LANE1                             : 1;	/*      1     r/w   0*/
		uint8_t MCU_EN_LANE2                             : 1;	/*      2     r/w   0*/
		uint8_t MCU_EN_LANE3                             : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_0_t;
__xdata __at( 0xa200 ) volatile MCU_CONTROL_0_t MCU_CONTROL_0;
#define reg_MCU_EN_LANE0  MCU_CONTROL_0.BF.MCU_EN_LANE0
#define reg_MCU_EN_LANE1  MCU_CONTROL_0.BF.MCU_EN_LANE1
#define reg_MCU_EN_LANE2  MCU_CONTROL_0.BF.MCU_EN_LANE2
#define reg_MCU_EN_LANE3  MCU_CONTROL_0.BF.MCU_EN_LANE3

// 0x0004	MCU_CONTROL_1		MCU CMN Control Register 1
typedef union {
	struct {
		uint8_t SET_MCU_INT_LANE0                        : 1;	/*      0     r/w   0*/
		uint8_t SET_MCU_INT_LANE1                        : 1;	/*      1     r/w   0*/
		uint8_t SET_MCU_INT_LANE2                        : 1;	/*      2     r/w   0*/
		uint8_t SET_MCU_INT_LANE3                        : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t HOLD_MCU_LANE0                           : 1;	/*      8     r/w   0*/
		uint8_t HOLD_MCU_LANE1                           : 1;	/*      9     r/w   0*/
		uint8_t HOLD_MCU_LANE2                           : 1;	/*     10     r/w   0*/
		uint8_t HOLD_MCU_LANE3                           : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_1_t;
__xdata __at( 0xa204 ) volatile MCU_CONTROL_1_t MCU_CONTROL_1;
#define reg_SET_MCU_INT_LANE0  MCU_CONTROL_1.BF.SET_MCU_INT_LANE0
#define reg_SET_MCU_INT_LANE1  MCU_CONTROL_1.BF.SET_MCU_INT_LANE1
#define reg_SET_MCU_INT_LANE2  MCU_CONTROL_1.BF.SET_MCU_INT_LANE2
#define reg_SET_MCU_INT_LANE3  MCU_CONTROL_1.BF.SET_MCU_INT_LANE3
#define reg_HOLD_MCU_LANE0  MCU_CONTROL_1.BF.HOLD_MCU_LANE0
#define reg_HOLD_MCU_LANE1  MCU_CONTROL_1.BF.HOLD_MCU_LANE1
#define reg_HOLD_MCU_LANE2  MCU_CONTROL_1.BF.HOLD_MCU_LANE2
#define reg_HOLD_MCU_LANE3  MCU_CONTROL_1.BF.HOLD_MCU_LANE3

// 0x0014	MCU_DEBUG0		MCU CMN Debug Register 0
typedef union {
	struct {
		uint8_t MCU_DEBUG_CMN_0_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG_CMN_1_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUG_CMN_2_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUG_CMN_3_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG0_t;
__xdata __at( 0xa214 ) volatile MCU_DEBUG0_t MCU_DEBUG0;
#define reg_MCU_DEBUG_CMN_0_7_0  MCU_DEBUG0.BF.MCU_DEBUG_CMN_0_7_0
#define reg_MCU_DEBUG_CMN_1_7_0  MCU_DEBUG0.BF.MCU_DEBUG_CMN_1_7_0
#define reg_MCU_DEBUG_CMN_2_7_0  MCU_DEBUG0.BF.MCU_DEBUG_CMN_2_7_0
#define reg_MCU_DEBUG_CMN_3_7_0  MCU_DEBUG0.BF.MCU_DEBUG_CMN_3_7_0

// 0x0018	MCU_DEBUG1		MCU CMN Debug Register 1
typedef union {
	struct {
		uint8_t MCU_DEBUG_CMN_4_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG_CMN_5_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUG_CMN_6_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUG_CMN_7_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG1_t;
__xdata __at( 0xa218 ) volatile MCU_DEBUG1_t MCU_DEBUG1;
#define reg_MCU_DEBUG_CMN_4_7_0  MCU_DEBUG1.BF.MCU_DEBUG_CMN_4_7_0
#define reg_MCU_DEBUG_CMN_5_7_0  MCU_DEBUG1.BF.MCU_DEBUG_CMN_5_7_0
#define reg_MCU_DEBUG_CMN_6_7_0  MCU_DEBUG1.BF.MCU_DEBUG_CMN_6_7_0
#define reg_MCU_DEBUG_CMN_7_7_0  MCU_DEBUG1.BF.MCU_DEBUG_CMN_7_7_0

// 0x001c	MEMORY_CONTROL_0		Memory Control Register 0
typedef union {
	struct {
		uint8_t PRAM_WTSEL_1_0                           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PRAM_RTSEL_1_0                           : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t PROM_PTSEL_1_0                           : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t PROM_RTSEL_1_0                           : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t PROM_TRB_1_0                             : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t PROM_TM                                  : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_0_t;
__xdata __at( 0xa21c ) volatile MEMORY_CONTROL_0_t MEMORY_CONTROL_0;
#define reg_PRAM_WTSEL_1_0  MEMORY_CONTROL_0.BF.PRAM_WTSEL_1_0
#define reg_PRAM_RTSEL_1_0  MEMORY_CONTROL_0.BF.PRAM_RTSEL_1_0
#define reg_PROM_PTSEL_1_0  MEMORY_CONTROL_0.BF.PROM_PTSEL_1_0
#define reg_PROM_RTSEL_1_0  MEMORY_CONTROL_0.BF.PROM_RTSEL_1_0
#define reg_PROM_TRB_1_0  MEMORY_CONTROL_0.BF.PROM_TRB_1_0
#define reg_PROM_TM  MEMORY_CONTROL_0.BF.PROM_TM

// 0x0020	MEMORY_CONTROL_1		Memory Control Register 1
typedef union {
	struct {
		uint8_t XRAM_CMN_RTSEL_1_0                       : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t XRAM_CMN_WTSEL_1_0                       : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_1_t;
__xdata __at( 0xa220 ) volatile MEMORY_CONTROL_1_t MEMORY_CONTROL_1;
#define reg_XRAM_CMN_RTSEL_1_0  MEMORY_CONTROL_1.BF.XRAM_CMN_RTSEL_1_0
#define reg_XRAM_CMN_WTSEL_1_0  MEMORY_CONTROL_1.BF.XRAM_CMN_WTSEL_1_0

// 0x0024	MEMORY_CONTROL_2		Memory Control Register 2
typedef union {
	struct {
		uint8_t PMEM_CHECKSUM_EXP_31_0_b0                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PMEM_CHECKSUM_EXP_31_0_b1                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PMEM_CHECKSUM_EXP_31_0_b2                : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PMEM_CHECKSUM_EXP_31_0_b3                : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_2_t;
__xdata __at( 0xa224 ) volatile MEMORY_CONTROL_2_t MEMORY_CONTROL_2;
#define reg_PMEM_CHECKSUM_EXP_31_0_b0  MEMORY_CONTROL_2.BF.PMEM_CHECKSUM_EXP_31_0_b0
#define reg_PMEM_CHECKSUM_EXP_31_0_b1  MEMORY_CONTROL_2.BF.PMEM_CHECKSUM_EXP_31_0_b1
#define reg_PMEM_CHECKSUM_EXP_31_0_b2  MEMORY_CONTROL_2.BF.PMEM_CHECKSUM_EXP_31_0_b2
#define reg_PMEM_CHECKSUM_EXP_31_0_b3  MEMORY_CONTROL_2.BF.PMEM_CHECKSUM_EXP_31_0_b3

// 0x0028	MEMORY_CONTROL_3		Memory Control Register 3
typedef union {
	struct {
		uint8_t PMEM_CHECKSUM_31_0_b0                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t PMEM_CHECKSUM_31_0_b1                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t PMEM_CHECKSUM_31_0_b2                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t PMEM_CHECKSUM_31_0_b3                    : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_3_t;
__xdata __at( 0xa228 ) volatile MEMORY_CONTROL_3_t MEMORY_CONTROL_3;
#define reg_PMEM_CHECKSUM_31_0_b0  MEMORY_CONTROL_3.BF.PMEM_CHECKSUM_31_0_b0
#define reg_PMEM_CHECKSUM_31_0_b1  MEMORY_CONTROL_3.BF.PMEM_CHECKSUM_31_0_b1
#define reg_PMEM_CHECKSUM_31_0_b2  MEMORY_CONTROL_3.BF.PMEM_CHECKSUM_31_0_b2
#define reg_PMEM_CHECKSUM_31_0_b3  MEMORY_CONTROL_3.BF.PMEM_CHECKSUM_31_0_b3

// 0x002c	MEMORY_CONTROL_4		Memory Control Register 4
typedef union {
	struct {
		uint8_t PMEM_CHECKSUM_RESET                      : 1;	/*      0     r/w   0*/
		uint8_t PMEM_CHECKSUM_PASS                       : 1;	/*      1       r   0*/
		uint8_t ECC_ENABLE                               : 1;	/*      2     r/w   1*/
		uint8_t PROG_RAM_SEL_1_0                         : 2;	/*  [4:3]     r/w   0*/
		uint8_t XDATA_ECC_1ERR_CMN                       : 1;	/*      5       r   0*/
		uint8_t PRAM_ECC_1ERR                            : 1;	/*      6       r   0*/
		uint8_t ROM_PARITY_ERR                           : 1;	/*      7       r   0*/
		uint8_t XDATA_ECC_2ERR_CMN                       : 1;	/*      8       r   0*/
		uint8_t PRAM_ECC_2ERR                            : 1;	/*      9       r   0*/
		uint8_t XDATA_ECC_1ERR_ENABLE                    : 1;	/*     10     r/w   0*/
		uint8_t PRAM_ECC_1ERR_ENABLE                     : 1;	/*     11     r/w   0*/
		uint8_t ROM_PARITY_ERR_ENABLE                    : 1;	/*     12     r/w   0*/
		uint8_t XDATA_ECC_2ERR_ENABLE                    : 1;	/*     13     r/w   0*/
		uint8_t PRAM_ECC_2ERR_ENABLE                     : 1;	/*     14     r/w   0*/
		uint8_t XDATA_ECC_1ERR_CLEAR_CMN                 : 1;	/*     15     r/w   0*/
		uint8_t PRAM_ECC_1ERR_CLEAR                      : 1;	/*     16     r/w   0*/
		uint8_t ROM_PARITY_ERR_CLEAR                     : 1;	/*     17     r/w   0*/
		uint8_t XDATA_ECC_2ERR_CLEAR_CMN                 : 1;	/*     18     r/w   0*/
		uint8_t PRAM_ECC_2ERR_CLEAR                      : 1;	/*     19     r/w   0*/
		uint8_t XDATA_ECC_1ERR_SET_CMN                   : 1;	/*     20     r/w   0*/
		uint8_t PRAM_ECC_1ERR_SET                        : 1;	/*     21     r/w   0*/
		uint8_t ROM_PARITY_ERR_SET                       : 1;	/*     22     r/w   0*/
		uint8_t XDATA_ECC_2ERR_SET_CMN                   : 1;	/*     23     r/w   0*/
		uint8_t PRAM_ECC_2ERR_SET                        : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_4_t;
__xdata __at( 0xa22c ) volatile MEMORY_CONTROL_4_t MEMORY_CONTROL_4;
#define reg_PMEM_CHECKSUM_RESET  MEMORY_CONTROL_4.BF.PMEM_CHECKSUM_RESET
#define reg_PMEM_CHECKSUM_PASS  MEMORY_CONTROL_4.BF.PMEM_CHECKSUM_PASS
#define reg_ECC_ENABLE  MEMORY_CONTROL_4.BF.ECC_ENABLE
#define reg_PROG_RAM_SEL_1_0  MEMORY_CONTROL_4.BF.PROG_RAM_SEL_1_0
#define reg_XDATA_ECC_1ERR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_CMN
#define reg_PRAM_ECC_1ERR  MEMORY_CONTROL_4.BF.PRAM_ECC_1ERR
#define reg_ROM_PARITY_ERR  MEMORY_CONTROL_4.BF.ROM_PARITY_ERR
#define reg_XDATA_ECC_2ERR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_CMN
#define reg_PRAM_ECC_2ERR  MEMORY_CONTROL_4.BF.PRAM_ECC_2ERR
#define reg_XDATA_ECC_1ERR_ENABLE  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_ENABLE
#define reg_PRAM_ECC_1ERR_ENABLE  MEMORY_CONTROL_4.BF.PRAM_ECC_1ERR_ENABLE
#define reg_ROM_PARITY_ERR_ENABLE  MEMORY_CONTROL_4.BF.ROM_PARITY_ERR_ENABLE
#define reg_XDATA_ECC_2ERR_ENABLE  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_ENABLE
#define reg_PRAM_ECC_2ERR_ENABLE  MEMORY_CONTROL_4.BF.PRAM_ECC_2ERR_ENABLE
#define reg_XDATA_ECC_1ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_CLEAR_CMN
#define reg_PRAM_ECC_1ERR_CLEAR  MEMORY_CONTROL_4.BF.PRAM_ECC_1ERR_CLEAR
#define reg_ROM_PARITY_ERR_CLEAR  MEMORY_CONTROL_4.BF.ROM_PARITY_ERR_CLEAR
#define reg_XDATA_ECC_2ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_CLEAR_CMN
#define reg_PRAM_ECC_2ERR_CLEAR  MEMORY_CONTROL_4.BF.PRAM_ECC_2ERR_CLEAR
#define reg_XDATA_ECC_1ERR_SET_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_SET_CMN
#define reg_PRAM_ECC_1ERR_SET  MEMORY_CONTROL_4.BF.PRAM_ECC_1ERR_SET
#define reg_ROM_PARITY_ERR_SET  MEMORY_CONTROL_4.BF.ROM_PARITY_ERR_SET
#define reg_XDATA_ECC_2ERR_SET_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_SET_CMN
#define reg_PRAM_ECC_2ERR_SET  MEMORY_CONTROL_4.BF.PRAM_ECC_2ERR_SET

// 0x0030	MCU_CLK_CONTROL		MCU Clock Control Register
typedef union {
	struct {
		uint8_t MCU_CLK_SEL                              : 1;	/*      0     r/w   0*/
		uint8_t MCU_CLK_DIV                              : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CLK_CONTROL_t;
__xdata __at( 0xa230 ) volatile MCU_CLK_CONTROL_t MCU_CLK_CONTROL;
#define reg_MCU_CLK_SEL  MCU_CLK_CONTROL.BF.MCU_CLK_SEL
#define reg_MCU_CLK_DIV  MCU_CLK_CONTROL.BF.MCU_CLK_DIV

// 0x0034	MCU_INFO_0		MCU Information Register 0
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND0_LANE0_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE0_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE0_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE0_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_0_t;
__xdata __at( 0xa234 ) volatile MCU_INFO_0_t MCU_INFO_0;
#define reg_SET_MCU_COMMAND0_LANE0_31_0_b0  MCU_INFO_0.BF.SET_MCU_COMMAND0_LANE0_31_0_b0
#define reg_SET_MCU_COMMAND0_LANE0_31_0_b1  MCU_INFO_0.BF.SET_MCU_COMMAND0_LANE0_31_0_b1
#define reg_SET_MCU_COMMAND0_LANE0_31_0_b2  MCU_INFO_0.BF.SET_MCU_COMMAND0_LANE0_31_0_b2
#define reg_SET_MCU_COMMAND0_LANE0_31_0_b3  MCU_INFO_0.BF.SET_MCU_COMMAND0_LANE0_31_0_b3

// 0x0038	MCU_INFO_1		MCU Information Register 1
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND0_LANE1_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE1_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE1_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE1_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_1_t;
__xdata __at( 0xa238 ) volatile MCU_INFO_1_t MCU_INFO_1;
#define reg_SET_MCU_COMMAND0_LANE1_31_0_b0  MCU_INFO_1.BF.SET_MCU_COMMAND0_LANE1_31_0_b0
#define reg_SET_MCU_COMMAND0_LANE1_31_0_b1  MCU_INFO_1.BF.SET_MCU_COMMAND0_LANE1_31_0_b1
#define reg_SET_MCU_COMMAND0_LANE1_31_0_b2  MCU_INFO_1.BF.SET_MCU_COMMAND0_LANE1_31_0_b2
#define reg_SET_MCU_COMMAND0_LANE1_31_0_b3  MCU_INFO_1.BF.SET_MCU_COMMAND0_LANE1_31_0_b3

// 0x003c	MCU_INFO_2		MCU Information Register 2
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND0_LANE2_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE2_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE2_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE2_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_2_t;
__xdata __at( 0xa23c ) volatile MCU_INFO_2_t MCU_INFO_2;
#define reg_SET_MCU_COMMAND0_LANE2_31_0_b0  MCU_INFO_2.BF.SET_MCU_COMMAND0_LANE2_31_0_b0
#define reg_SET_MCU_COMMAND0_LANE2_31_0_b1  MCU_INFO_2.BF.SET_MCU_COMMAND0_LANE2_31_0_b1
#define reg_SET_MCU_COMMAND0_LANE2_31_0_b2  MCU_INFO_2.BF.SET_MCU_COMMAND0_LANE2_31_0_b2
#define reg_SET_MCU_COMMAND0_LANE2_31_0_b3  MCU_INFO_2.BF.SET_MCU_COMMAND0_LANE2_31_0_b3

// 0x0040	MCU_INFO_3		MCU Information Register 3
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND0_LANE3_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE3_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE3_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND0_LANE3_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_3_t;
__xdata __at( 0xa240 ) volatile MCU_INFO_3_t MCU_INFO_3;
#define reg_SET_MCU_COMMAND0_LANE3_31_0_b0  MCU_INFO_3.BF.SET_MCU_COMMAND0_LANE3_31_0_b0
#define reg_SET_MCU_COMMAND0_LANE3_31_0_b1  MCU_INFO_3.BF.SET_MCU_COMMAND0_LANE3_31_0_b1
#define reg_SET_MCU_COMMAND0_LANE3_31_0_b2  MCU_INFO_3.BF.SET_MCU_COMMAND0_LANE3_31_0_b2
#define reg_SET_MCU_COMMAND0_LANE3_31_0_b3  MCU_INFO_3.BF.SET_MCU_COMMAND0_LANE3_31_0_b3

// 0x0044	MCU_INFO_4		MCU Information Register 4
typedef union {
	struct {
		uint8_t MCU_STATUS0_LANE0_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE0_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE0_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE0_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_4_t;
__xdata __at( 0xa244 ) volatile MCU_INFO_4_t MCU_INFO_4;
#define reg_MCU_STATUS0_LANE0_31_0_b0  MCU_INFO_4.BF.MCU_STATUS0_LANE0_31_0_b0
#define reg_MCU_STATUS0_LANE0_31_0_b1  MCU_INFO_4.BF.MCU_STATUS0_LANE0_31_0_b1
#define reg_MCU_STATUS0_LANE0_31_0_b2  MCU_INFO_4.BF.MCU_STATUS0_LANE0_31_0_b2
#define reg_MCU_STATUS0_LANE0_31_0_b3  MCU_INFO_4.BF.MCU_STATUS0_LANE0_31_0_b3

// 0x0048	MCU_INFO_5		MCU Information Register 5
typedef union {
	struct {
		uint8_t MCU_STATUS0_LANE1_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE1_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE1_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE1_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_5_t;
__xdata __at( 0xa248 ) volatile MCU_INFO_5_t MCU_INFO_5;
#define reg_MCU_STATUS0_LANE1_31_0_b0  MCU_INFO_5.BF.MCU_STATUS0_LANE1_31_0_b0
#define reg_MCU_STATUS0_LANE1_31_0_b1  MCU_INFO_5.BF.MCU_STATUS0_LANE1_31_0_b1
#define reg_MCU_STATUS0_LANE1_31_0_b2  MCU_INFO_5.BF.MCU_STATUS0_LANE1_31_0_b2
#define reg_MCU_STATUS0_LANE1_31_0_b3  MCU_INFO_5.BF.MCU_STATUS0_LANE1_31_0_b3

// 0x004c	MCU_INFO_6		MCU Information Register 6
typedef union {
	struct {
		uint8_t MCU_STATUS0_LANE2_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE2_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE2_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE2_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_6_t;
__xdata __at( 0xa24c ) volatile MCU_INFO_6_t MCU_INFO_6;
#define reg_MCU_STATUS0_LANE2_31_0_b0  MCU_INFO_6.BF.MCU_STATUS0_LANE2_31_0_b0
#define reg_MCU_STATUS0_LANE2_31_0_b1  MCU_INFO_6.BF.MCU_STATUS0_LANE2_31_0_b1
#define reg_MCU_STATUS0_LANE2_31_0_b2  MCU_INFO_6.BF.MCU_STATUS0_LANE2_31_0_b2
#define reg_MCU_STATUS0_LANE2_31_0_b3  MCU_INFO_6.BF.MCU_STATUS0_LANE2_31_0_b3

// 0x0050	MCU_INFO_7		MCU Information Register 7
typedef union {
	struct {
		uint8_t MCU_STATUS0_LANE3_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE3_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE3_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_LANE3_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_7_t;
__xdata __at( 0xa250 ) volatile MCU_INFO_7_t MCU_INFO_7;
#define reg_MCU_STATUS0_LANE3_31_0_b0  MCU_INFO_7.BF.MCU_STATUS0_LANE3_31_0_b0
#define reg_MCU_STATUS0_LANE3_31_0_b1  MCU_INFO_7.BF.MCU_STATUS0_LANE3_31_0_b1
#define reg_MCU_STATUS0_LANE3_31_0_b2  MCU_INFO_7.BF.MCU_STATUS0_LANE3_31_0_b2
#define reg_MCU_STATUS0_LANE3_31_0_b3  MCU_INFO_7.BF.MCU_STATUS0_LANE3_31_0_b3

// 0x0054	MCU_INFO_8		MCU Information Register 8
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND1_LANE0_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE0_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE0_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE0_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_8_t;
__xdata __at( 0xa254 ) volatile MCU_INFO_8_t MCU_INFO_8;
#define reg_SET_MCU_COMMAND1_LANE0_31_0_b0  MCU_INFO_8.BF.SET_MCU_COMMAND1_LANE0_31_0_b0
#define reg_SET_MCU_COMMAND1_LANE0_31_0_b1  MCU_INFO_8.BF.SET_MCU_COMMAND1_LANE0_31_0_b1
#define reg_SET_MCU_COMMAND1_LANE0_31_0_b2  MCU_INFO_8.BF.SET_MCU_COMMAND1_LANE0_31_0_b2
#define reg_SET_MCU_COMMAND1_LANE0_31_0_b3  MCU_INFO_8.BF.SET_MCU_COMMAND1_LANE0_31_0_b3

// 0x0058	MCU_INFO_9		MCU Information Register 9
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND1_LANE1_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE1_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE1_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE1_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_9_t;
__xdata __at( 0xa258 ) volatile MCU_INFO_9_t MCU_INFO_9;
#define reg_SET_MCU_COMMAND1_LANE1_31_0_b0  MCU_INFO_9.BF.SET_MCU_COMMAND1_LANE1_31_0_b0
#define reg_SET_MCU_COMMAND1_LANE1_31_0_b1  MCU_INFO_9.BF.SET_MCU_COMMAND1_LANE1_31_0_b1
#define reg_SET_MCU_COMMAND1_LANE1_31_0_b2  MCU_INFO_9.BF.SET_MCU_COMMAND1_LANE1_31_0_b2
#define reg_SET_MCU_COMMAND1_LANE1_31_0_b3  MCU_INFO_9.BF.SET_MCU_COMMAND1_LANE1_31_0_b3

// 0x005c	MCU_INFO_10		MCU Information Register 10
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND1_LANE2_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE2_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE2_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE2_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_10_t;
__xdata __at( 0xa25c ) volatile MCU_INFO_10_t MCU_INFO_10;
#define reg_SET_MCU_COMMAND1_LANE2_31_0_b0  MCU_INFO_10.BF.SET_MCU_COMMAND1_LANE2_31_0_b0
#define reg_SET_MCU_COMMAND1_LANE2_31_0_b1  MCU_INFO_10.BF.SET_MCU_COMMAND1_LANE2_31_0_b1
#define reg_SET_MCU_COMMAND1_LANE2_31_0_b2  MCU_INFO_10.BF.SET_MCU_COMMAND1_LANE2_31_0_b2
#define reg_SET_MCU_COMMAND1_LANE2_31_0_b3  MCU_INFO_10.BF.SET_MCU_COMMAND1_LANE2_31_0_b3

// 0x0060	MCU_INFO_11		MCU Information Register 11
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND1_LANE3_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE3_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE3_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND1_LANE3_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_11_t;
__xdata __at( 0xa260 ) volatile MCU_INFO_11_t MCU_INFO_11;
#define reg_SET_MCU_COMMAND1_LANE3_31_0_b0  MCU_INFO_11.BF.SET_MCU_COMMAND1_LANE3_31_0_b0
#define reg_SET_MCU_COMMAND1_LANE3_31_0_b1  MCU_INFO_11.BF.SET_MCU_COMMAND1_LANE3_31_0_b1
#define reg_SET_MCU_COMMAND1_LANE3_31_0_b2  MCU_INFO_11.BF.SET_MCU_COMMAND1_LANE3_31_0_b2
#define reg_SET_MCU_COMMAND1_LANE3_31_0_b3  MCU_INFO_11.BF.SET_MCU_COMMAND1_LANE3_31_0_b3

// 0x0064	MCU_INFO_12		MCU Information Register 12
typedef union {
	struct {
		uint8_t MCU_STATUS1_LANE0_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE0_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE0_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE0_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_12_t;
__xdata __at( 0xa264 ) volatile MCU_INFO_12_t MCU_INFO_12;
#define reg_MCU_STATUS1_LANE0_31_0_b0  MCU_INFO_12.BF.MCU_STATUS1_LANE0_31_0_b0
#define reg_MCU_STATUS1_LANE0_31_0_b1  MCU_INFO_12.BF.MCU_STATUS1_LANE0_31_0_b1
#define reg_MCU_STATUS1_LANE0_31_0_b2  MCU_INFO_12.BF.MCU_STATUS1_LANE0_31_0_b2
#define reg_MCU_STATUS1_LANE0_31_0_b3  MCU_INFO_12.BF.MCU_STATUS1_LANE0_31_0_b3

// 0x0068	MCU_INFO_13		MCU Information Register 13
typedef union {
	struct {
		uint8_t MCU_STATUS1_LANE1_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE1_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE1_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE1_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_13_t;
__xdata __at( 0xa268 ) volatile MCU_INFO_13_t MCU_INFO_13;
#define reg_MCU_STATUS1_LANE1_31_0_b0  MCU_INFO_13.BF.MCU_STATUS1_LANE1_31_0_b0
#define reg_MCU_STATUS1_LANE1_31_0_b1  MCU_INFO_13.BF.MCU_STATUS1_LANE1_31_0_b1
#define reg_MCU_STATUS1_LANE1_31_0_b2  MCU_INFO_13.BF.MCU_STATUS1_LANE1_31_0_b2
#define reg_MCU_STATUS1_LANE1_31_0_b3  MCU_INFO_13.BF.MCU_STATUS1_LANE1_31_0_b3

// 0x006c	MCU_INFO_14		MCU Information Register 14
typedef union {
	struct {
		uint8_t MCU_STATUS1_LANE2_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE2_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE2_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE2_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_14_t;
__xdata __at( 0xa26c ) volatile MCU_INFO_14_t MCU_INFO_14;
#define reg_MCU_STATUS1_LANE2_31_0_b0  MCU_INFO_14.BF.MCU_STATUS1_LANE2_31_0_b0
#define reg_MCU_STATUS1_LANE2_31_0_b1  MCU_INFO_14.BF.MCU_STATUS1_LANE2_31_0_b1
#define reg_MCU_STATUS1_LANE2_31_0_b2  MCU_INFO_14.BF.MCU_STATUS1_LANE2_31_0_b2
#define reg_MCU_STATUS1_LANE2_31_0_b3  MCU_INFO_14.BF.MCU_STATUS1_LANE2_31_0_b3

// 0x0070	MCU_INFO_15		MCU Information Register 15
typedef union {
	struct {
		uint8_t MCU_STATUS1_LANE3_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE3_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE3_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_LANE3_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_15_t;
__xdata __at( 0xa270 ) volatile MCU_INFO_15_t MCU_INFO_15;
#define reg_MCU_STATUS1_LANE3_31_0_b0  MCU_INFO_15.BF.MCU_STATUS1_LANE3_31_0_b0
#define reg_MCU_STATUS1_LANE3_31_0_b1  MCU_INFO_15.BF.MCU_STATUS1_LANE3_31_0_b1
#define reg_MCU_STATUS1_LANE3_31_0_b2  MCU_INFO_15.BF.MCU_STATUS1_LANE3_31_0_b2
#define reg_MCU_STATUS1_LANE3_31_0_b3  MCU_INFO_15.BF.MCU_STATUS1_LANE3_31_0_b3

// 0x0074	MCU_INFO_16		MCU Information Register 16
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND2_LANE0_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE0_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE0_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE0_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_16_t;
__xdata __at( 0xa274 ) volatile MCU_INFO_16_t MCU_INFO_16;
#define reg_SET_MCU_COMMAND2_LANE0_31_0_b0  MCU_INFO_16.BF.SET_MCU_COMMAND2_LANE0_31_0_b0
#define reg_SET_MCU_COMMAND2_LANE0_31_0_b1  MCU_INFO_16.BF.SET_MCU_COMMAND2_LANE0_31_0_b1
#define reg_SET_MCU_COMMAND2_LANE0_31_0_b2  MCU_INFO_16.BF.SET_MCU_COMMAND2_LANE0_31_0_b2
#define reg_SET_MCU_COMMAND2_LANE0_31_0_b3  MCU_INFO_16.BF.SET_MCU_COMMAND2_LANE0_31_0_b3

// 0x0078	MCU_INFO_17		MCU Information Register 17
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND2_LANE1_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE1_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE1_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE1_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_17_t;
__xdata __at( 0xa278 ) volatile MCU_INFO_17_t MCU_INFO_17;
#define reg_SET_MCU_COMMAND2_LANE1_31_0_b0  MCU_INFO_17.BF.SET_MCU_COMMAND2_LANE1_31_0_b0
#define reg_SET_MCU_COMMAND2_LANE1_31_0_b1  MCU_INFO_17.BF.SET_MCU_COMMAND2_LANE1_31_0_b1
#define reg_SET_MCU_COMMAND2_LANE1_31_0_b2  MCU_INFO_17.BF.SET_MCU_COMMAND2_LANE1_31_0_b2
#define reg_SET_MCU_COMMAND2_LANE1_31_0_b3  MCU_INFO_17.BF.SET_MCU_COMMAND2_LANE1_31_0_b3

// 0x007c	MCU_INFO_18		MCU Information Register 18
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND2_LANE2_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE2_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE2_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE2_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_18_t;
__xdata __at( 0xa27c ) volatile MCU_INFO_18_t MCU_INFO_18;
#define reg_SET_MCU_COMMAND2_LANE2_31_0_b0  MCU_INFO_18.BF.SET_MCU_COMMAND2_LANE2_31_0_b0
#define reg_SET_MCU_COMMAND2_LANE2_31_0_b1  MCU_INFO_18.BF.SET_MCU_COMMAND2_LANE2_31_0_b1
#define reg_SET_MCU_COMMAND2_LANE2_31_0_b2  MCU_INFO_18.BF.SET_MCU_COMMAND2_LANE2_31_0_b2
#define reg_SET_MCU_COMMAND2_LANE2_31_0_b3  MCU_INFO_18.BF.SET_MCU_COMMAND2_LANE2_31_0_b3

// 0x0080	MCU_INFO_19		MCU Information Register 19
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND2_LANE3_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE3_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE3_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND2_LANE3_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_19_t;
__xdata __at( 0xa280 ) volatile MCU_INFO_19_t MCU_INFO_19;
#define reg_SET_MCU_COMMAND2_LANE3_31_0_b0  MCU_INFO_19.BF.SET_MCU_COMMAND2_LANE3_31_0_b0
#define reg_SET_MCU_COMMAND2_LANE3_31_0_b1  MCU_INFO_19.BF.SET_MCU_COMMAND2_LANE3_31_0_b1
#define reg_SET_MCU_COMMAND2_LANE3_31_0_b2  MCU_INFO_19.BF.SET_MCU_COMMAND2_LANE3_31_0_b2
#define reg_SET_MCU_COMMAND2_LANE3_31_0_b3  MCU_INFO_19.BF.SET_MCU_COMMAND2_LANE3_31_0_b3

// 0x0084	MCU_INFO_20		MCU Information Register 20
typedef union {
	struct {
		uint8_t MCU_STATUS2_LANE0_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE0_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE0_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE0_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_20_t;
__xdata __at( 0xa284 ) volatile MCU_INFO_20_t MCU_INFO_20;
#define reg_MCU_STATUS2_LANE0_31_0_b0  MCU_INFO_20.BF.MCU_STATUS2_LANE0_31_0_b0
#define reg_MCU_STATUS2_LANE0_31_0_b1  MCU_INFO_20.BF.MCU_STATUS2_LANE0_31_0_b1
#define reg_MCU_STATUS2_LANE0_31_0_b2  MCU_INFO_20.BF.MCU_STATUS2_LANE0_31_0_b2
#define reg_MCU_STATUS2_LANE0_31_0_b3  MCU_INFO_20.BF.MCU_STATUS2_LANE0_31_0_b3

// 0x0088	MCU_INFO_21		MCU Information Register 21
typedef union {
	struct {
		uint8_t MCU_STATUS2_LANE1_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE1_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE1_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE1_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_21_t;
__xdata __at( 0xa288 ) volatile MCU_INFO_21_t MCU_INFO_21;
#define reg_MCU_STATUS2_LANE1_31_0_b0  MCU_INFO_21.BF.MCU_STATUS2_LANE1_31_0_b0
#define reg_MCU_STATUS2_LANE1_31_0_b1  MCU_INFO_21.BF.MCU_STATUS2_LANE1_31_0_b1
#define reg_MCU_STATUS2_LANE1_31_0_b2  MCU_INFO_21.BF.MCU_STATUS2_LANE1_31_0_b2
#define reg_MCU_STATUS2_LANE1_31_0_b3  MCU_INFO_21.BF.MCU_STATUS2_LANE1_31_0_b3

// 0x008c	MCU_INFO_22		MCU Information Register 22
typedef union {
	struct {
		uint8_t MCU_STATUS2_LANE2_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE2_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE2_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE2_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_22_t;
__xdata __at( 0xa28c ) volatile MCU_INFO_22_t MCU_INFO_22;
#define reg_MCU_STATUS2_LANE2_31_0_b0  MCU_INFO_22.BF.MCU_STATUS2_LANE2_31_0_b0
#define reg_MCU_STATUS2_LANE2_31_0_b1  MCU_INFO_22.BF.MCU_STATUS2_LANE2_31_0_b1
#define reg_MCU_STATUS2_LANE2_31_0_b2  MCU_INFO_22.BF.MCU_STATUS2_LANE2_31_0_b2
#define reg_MCU_STATUS2_LANE2_31_0_b3  MCU_INFO_22.BF.MCU_STATUS2_LANE2_31_0_b3

// 0x0090	MCU_INFO_23		MCU Information Register 23
typedef union {
	struct {
		uint8_t MCU_STATUS2_LANE3_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE3_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE3_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_LANE3_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_23_t;
__xdata __at( 0xa290 ) volatile MCU_INFO_23_t MCU_INFO_23;
#define reg_MCU_STATUS2_LANE3_31_0_b0  MCU_INFO_23.BF.MCU_STATUS2_LANE3_31_0_b0
#define reg_MCU_STATUS2_LANE3_31_0_b1  MCU_INFO_23.BF.MCU_STATUS2_LANE3_31_0_b1
#define reg_MCU_STATUS2_LANE3_31_0_b2  MCU_INFO_23.BF.MCU_STATUS2_LANE3_31_0_b2
#define reg_MCU_STATUS2_LANE3_31_0_b3  MCU_INFO_23.BF.MCU_STATUS2_LANE3_31_0_b3

// 0x0094	MCU_INFO_24		MCU Information Register 24
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND3_LANE0_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE0_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE0_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE0_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_24_t;
__xdata __at( 0xa294 ) volatile MCU_INFO_24_t MCU_INFO_24;
#define reg_SET_MCU_COMMAND3_LANE0_31_0_b0  MCU_INFO_24.BF.SET_MCU_COMMAND3_LANE0_31_0_b0
#define reg_SET_MCU_COMMAND3_LANE0_31_0_b1  MCU_INFO_24.BF.SET_MCU_COMMAND3_LANE0_31_0_b1
#define reg_SET_MCU_COMMAND3_LANE0_31_0_b2  MCU_INFO_24.BF.SET_MCU_COMMAND3_LANE0_31_0_b2
#define reg_SET_MCU_COMMAND3_LANE0_31_0_b3  MCU_INFO_24.BF.SET_MCU_COMMAND3_LANE0_31_0_b3

// 0x0098	MCU_INFO_25		MCU Information Register 25
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND3_LANE1_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE1_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE1_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE1_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_25_t;
__xdata __at( 0xa298 ) volatile MCU_INFO_25_t MCU_INFO_25;
#define reg_SET_MCU_COMMAND3_LANE1_31_0_b0  MCU_INFO_25.BF.SET_MCU_COMMAND3_LANE1_31_0_b0
#define reg_SET_MCU_COMMAND3_LANE1_31_0_b1  MCU_INFO_25.BF.SET_MCU_COMMAND3_LANE1_31_0_b1
#define reg_SET_MCU_COMMAND3_LANE1_31_0_b2  MCU_INFO_25.BF.SET_MCU_COMMAND3_LANE1_31_0_b2
#define reg_SET_MCU_COMMAND3_LANE1_31_0_b3  MCU_INFO_25.BF.SET_MCU_COMMAND3_LANE1_31_0_b3

// 0x009c	MCU_INFO_26		MCU Information Register 26
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND3_LANE2_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE2_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE2_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE2_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_26_t;
__xdata __at( 0xa29c ) volatile MCU_INFO_26_t MCU_INFO_26;
#define reg_SET_MCU_COMMAND3_LANE2_31_0_b0  MCU_INFO_26.BF.SET_MCU_COMMAND3_LANE2_31_0_b0
#define reg_SET_MCU_COMMAND3_LANE2_31_0_b1  MCU_INFO_26.BF.SET_MCU_COMMAND3_LANE2_31_0_b1
#define reg_SET_MCU_COMMAND3_LANE2_31_0_b2  MCU_INFO_26.BF.SET_MCU_COMMAND3_LANE2_31_0_b2
#define reg_SET_MCU_COMMAND3_LANE2_31_0_b3  MCU_INFO_26.BF.SET_MCU_COMMAND3_LANE2_31_0_b3

// 0x00a0	MCU_INFO_27		MCU Information Register 27
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND3_LANE3_31_0_b0           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE3_31_0_b1           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE3_31_0_b2           : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND3_LANE3_31_0_b3           : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_27_t;
__xdata __at( 0xa2a0 ) volatile MCU_INFO_27_t MCU_INFO_27;
#define reg_SET_MCU_COMMAND3_LANE3_31_0_b0  MCU_INFO_27.BF.SET_MCU_COMMAND3_LANE3_31_0_b0
#define reg_SET_MCU_COMMAND3_LANE3_31_0_b1  MCU_INFO_27.BF.SET_MCU_COMMAND3_LANE3_31_0_b1
#define reg_SET_MCU_COMMAND3_LANE3_31_0_b2  MCU_INFO_27.BF.SET_MCU_COMMAND3_LANE3_31_0_b2
#define reg_SET_MCU_COMMAND3_LANE3_31_0_b3  MCU_INFO_27.BF.SET_MCU_COMMAND3_LANE3_31_0_b3

// 0x00a4	MCU_INFO_28		MCU Information Register 28
typedef union {
	struct {
		uint8_t MCU_STATUS3_LANE0_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE0_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE0_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE0_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_28_t;
__xdata __at( 0xa2a4 ) volatile MCU_INFO_28_t MCU_INFO_28;
#define reg_MCU_STATUS3_LANE0_31_0_b0  MCU_INFO_28.BF.MCU_STATUS3_LANE0_31_0_b0
#define reg_MCU_STATUS3_LANE0_31_0_b1  MCU_INFO_28.BF.MCU_STATUS3_LANE0_31_0_b1
#define reg_MCU_STATUS3_LANE0_31_0_b2  MCU_INFO_28.BF.MCU_STATUS3_LANE0_31_0_b2
#define reg_MCU_STATUS3_LANE0_31_0_b3  MCU_INFO_28.BF.MCU_STATUS3_LANE0_31_0_b3

// 0x00a8	MCU_INFO_29		MCU Information Register 29
typedef union {
	struct {
		uint8_t MCU_STATUS3_LANE1_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE1_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE1_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE1_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_29_t;
__xdata __at( 0xa2a8 ) volatile MCU_INFO_29_t MCU_INFO_29;
#define reg_MCU_STATUS3_LANE1_31_0_b0  MCU_INFO_29.BF.MCU_STATUS3_LANE1_31_0_b0
#define reg_MCU_STATUS3_LANE1_31_0_b1  MCU_INFO_29.BF.MCU_STATUS3_LANE1_31_0_b1
#define reg_MCU_STATUS3_LANE1_31_0_b2  MCU_INFO_29.BF.MCU_STATUS3_LANE1_31_0_b2
#define reg_MCU_STATUS3_LANE1_31_0_b3  MCU_INFO_29.BF.MCU_STATUS3_LANE1_31_0_b3

// 0x00ac	MCU_INFO_30		MCU Information Register 30
typedef union {
	struct {
		uint8_t MCU_STATUS3_LANE2_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE2_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE2_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE2_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_30_t;
__xdata __at( 0xa2ac ) volatile MCU_INFO_30_t MCU_INFO_30;
#define reg_MCU_STATUS3_LANE2_31_0_b0  MCU_INFO_30.BF.MCU_STATUS3_LANE2_31_0_b0
#define reg_MCU_STATUS3_LANE2_31_0_b1  MCU_INFO_30.BF.MCU_STATUS3_LANE2_31_0_b1
#define reg_MCU_STATUS3_LANE2_31_0_b2  MCU_INFO_30.BF.MCU_STATUS3_LANE2_31_0_b2
#define reg_MCU_STATUS3_LANE2_31_0_b3  MCU_INFO_30.BF.MCU_STATUS3_LANE2_31_0_b3

// 0x00b0	MCU_INFO_31		MCU Information Register 31
typedef union {
	struct {
		uint8_t MCU_STATUS3_LANE3_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE3_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE3_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_LANE3_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_31_t;
__xdata __at( 0xa2b0 ) volatile MCU_INFO_31_t MCU_INFO_31;
#define reg_MCU_STATUS3_LANE3_31_0_b0  MCU_INFO_31.BF.MCU_STATUS3_LANE3_31_0_b0
#define reg_MCU_STATUS3_LANE3_31_0_b1  MCU_INFO_31.BF.MCU_STATUS3_LANE3_31_0_b1
#define reg_MCU_STATUS3_LANE3_31_0_b2  MCU_INFO_31.BF.MCU_STATUS3_LANE3_31_0_b2
#define reg_MCU_STATUS3_LANE3_31_0_b3  MCU_INFO_31.BF.MCU_STATUS3_LANE3_31_0_b3

// 0x00b4	MCU_INFO_32		MCU Information Register 32
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_ALL0_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL0_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL0_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL0_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_32_t;
__xdata __at( 0xa2b4 ) volatile MCU_INFO_32_t MCU_INFO_32;
#define reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b0  MCU_INFO_32.BF.SET_MCU_COMMAND_ALL0_LANE_31_0_b0
#define reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b1  MCU_INFO_32.BF.SET_MCU_COMMAND_ALL0_LANE_31_0_b1
#define reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b2  MCU_INFO_32.BF.SET_MCU_COMMAND_ALL0_LANE_31_0_b2
#define reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b3  MCU_INFO_32.BF.SET_MCU_COMMAND_ALL0_LANE_31_0_b3

// 0x00b8	MCU_INFO_33		MCU Information Register 33
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_ALL1_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL1_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL1_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL1_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_33_t;
__xdata __at( 0xa2b8 ) volatile MCU_INFO_33_t MCU_INFO_33;
#define reg_SET_MCU_COMMAND_ALL1_LANE_31_0_b0  MCU_INFO_33.BF.SET_MCU_COMMAND_ALL1_LANE_31_0_b0
#define reg_SET_MCU_COMMAND_ALL1_LANE_31_0_b1  MCU_INFO_33.BF.SET_MCU_COMMAND_ALL1_LANE_31_0_b1
#define reg_SET_MCU_COMMAND_ALL1_LANE_31_0_b2  MCU_INFO_33.BF.SET_MCU_COMMAND_ALL1_LANE_31_0_b2
#define reg_SET_MCU_COMMAND_ALL1_LANE_31_0_b3  MCU_INFO_33.BF.SET_MCU_COMMAND_ALL1_LANE_31_0_b3

// 0x00bc	MCU_INFO_34		MCU Information Register 34
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_ALL2_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL2_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL2_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL2_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_34_t;
__xdata __at( 0xa2bc ) volatile MCU_INFO_34_t MCU_INFO_34;
#define reg_SET_MCU_COMMAND_ALL2_LANE_31_0_b0  MCU_INFO_34.BF.SET_MCU_COMMAND_ALL2_LANE_31_0_b0
#define reg_SET_MCU_COMMAND_ALL2_LANE_31_0_b1  MCU_INFO_34.BF.SET_MCU_COMMAND_ALL2_LANE_31_0_b1
#define reg_SET_MCU_COMMAND_ALL2_LANE_31_0_b2  MCU_INFO_34.BF.SET_MCU_COMMAND_ALL2_LANE_31_0_b2
#define reg_SET_MCU_COMMAND_ALL2_LANE_31_0_b3  MCU_INFO_34.BF.SET_MCU_COMMAND_ALL2_LANE_31_0_b3

// 0x00c0	MCU_INFO_35		MCU Information Register 35
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_ALL3_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL3_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL3_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_ALL3_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_35_t;
__xdata __at( 0xa2c0 ) volatile MCU_INFO_35_t MCU_INFO_35;
#define reg_SET_MCU_COMMAND_ALL3_LANE_31_0_b0  MCU_INFO_35.BF.SET_MCU_COMMAND_ALL3_LANE_31_0_b0
#define reg_SET_MCU_COMMAND_ALL3_LANE_31_0_b1  MCU_INFO_35.BF.SET_MCU_COMMAND_ALL3_LANE_31_0_b1
#define reg_SET_MCU_COMMAND_ALL3_LANE_31_0_b2  MCU_INFO_35.BF.SET_MCU_COMMAND_ALL3_LANE_31_0_b2
#define reg_SET_MCU_COMMAND_ALL3_LANE_31_0_b3  MCU_INFO_35.BF.SET_MCU_COMMAND_ALL3_LANE_31_0_b3

// 0x00c4	MCU_INFO_36		MCU Information Register 36
typedef union {
	struct {
		uint8_t MCU_STATUS0_AND_31_0_b0                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_AND_31_0_b1                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_AND_31_0_b2                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_AND_31_0_b3                  : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_36_t;
__xdata __at( 0xa2c4 ) volatile MCU_INFO_36_t MCU_INFO_36;
#define reg_MCU_STATUS0_AND_31_0_b0  MCU_INFO_36.BF.MCU_STATUS0_AND_31_0_b0
#define reg_MCU_STATUS0_AND_31_0_b1  MCU_INFO_36.BF.MCU_STATUS0_AND_31_0_b1
#define reg_MCU_STATUS0_AND_31_0_b2  MCU_INFO_36.BF.MCU_STATUS0_AND_31_0_b2
#define reg_MCU_STATUS0_AND_31_0_b3  MCU_INFO_36.BF.MCU_STATUS0_AND_31_0_b3

// 0x00c8	MCU_INFO_37		MCU Information Register 37
typedef union {
	struct {
		uint8_t MCU_STATUS1_AND_31_0_b0                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_AND_31_0_b1                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_AND_31_0_b2                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_AND_31_0_b3                  : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_37_t;
__xdata __at( 0xa2c8 ) volatile MCU_INFO_37_t MCU_INFO_37;
#define reg_MCU_STATUS1_AND_31_0_b0  MCU_INFO_37.BF.MCU_STATUS1_AND_31_0_b0
#define reg_MCU_STATUS1_AND_31_0_b1  MCU_INFO_37.BF.MCU_STATUS1_AND_31_0_b1
#define reg_MCU_STATUS1_AND_31_0_b2  MCU_INFO_37.BF.MCU_STATUS1_AND_31_0_b2
#define reg_MCU_STATUS1_AND_31_0_b3  MCU_INFO_37.BF.MCU_STATUS1_AND_31_0_b3

// 0x00cc	MCU_INFO_38		MCU Information Register 38
typedef union {
	struct {
		uint8_t MCU_STATUS2_AND_31_0_b0                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_AND_31_0_b1                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_AND_31_0_b2                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_AND_31_0_b3                  : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_38_t;
__xdata __at( 0xa2cc ) volatile MCU_INFO_38_t MCU_INFO_38;
#define reg_MCU_STATUS2_AND_31_0_b0  MCU_INFO_38.BF.MCU_STATUS2_AND_31_0_b0
#define reg_MCU_STATUS2_AND_31_0_b1  MCU_INFO_38.BF.MCU_STATUS2_AND_31_0_b1
#define reg_MCU_STATUS2_AND_31_0_b2  MCU_INFO_38.BF.MCU_STATUS2_AND_31_0_b2
#define reg_MCU_STATUS2_AND_31_0_b3  MCU_INFO_38.BF.MCU_STATUS2_AND_31_0_b3

// 0x00d0	MCU_INFO_39		MCU Information Register 39
typedef union {
	struct {
		uint8_t MCU_STATUS3_AND_31_0_b0                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_AND_31_0_b1                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_AND_31_0_b2                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_AND_31_0_b3                  : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_39_t;
__xdata __at( 0xa2d0 ) volatile MCU_INFO_39_t MCU_INFO_39;
#define reg_MCU_STATUS3_AND_31_0_b0  MCU_INFO_39.BF.MCU_STATUS3_AND_31_0_b0
#define reg_MCU_STATUS3_AND_31_0_b1  MCU_INFO_39.BF.MCU_STATUS3_AND_31_0_b1
#define reg_MCU_STATUS3_AND_31_0_b2  MCU_INFO_39.BF.MCU_STATUS3_AND_31_0_b2
#define reg_MCU_STATUS3_AND_31_0_b3  MCU_INFO_39.BF.MCU_STATUS3_AND_31_0_b3

// 0x00d4	MCU_INFO_40		MCU Information Register 40
typedef union {
	struct {
		uint8_t MCU_STATUS0_OR_31_0_b0                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_OR_31_0_b1                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_OR_31_0_b2                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS0_OR_31_0_b3                   : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_40_t;
__xdata __at( 0xa2d4 ) volatile MCU_INFO_40_t MCU_INFO_40;
#define reg_MCU_STATUS0_OR_31_0_b0  MCU_INFO_40.BF.MCU_STATUS0_OR_31_0_b0
#define reg_MCU_STATUS0_OR_31_0_b1  MCU_INFO_40.BF.MCU_STATUS0_OR_31_0_b1
#define reg_MCU_STATUS0_OR_31_0_b2  MCU_INFO_40.BF.MCU_STATUS0_OR_31_0_b2
#define reg_MCU_STATUS0_OR_31_0_b3  MCU_INFO_40.BF.MCU_STATUS0_OR_31_0_b3

// 0x00d8	MCU_INFO_41		MCU Information Register 41
typedef union {
	struct {
		uint8_t MCU_STATUS1_OR_31_0_b0                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_OR_31_0_b1                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_OR_31_0_b2                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS1_OR_31_0_b3                   : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_41_t;
__xdata __at( 0xa2d8 ) volatile MCU_INFO_41_t MCU_INFO_41;
#define reg_MCU_STATUS1_OR_31_0_b0  MCU_INFO_41.BF.MCU_STATUS1_OR_31_0_b0
#define reg_MCU_STATUS1_OR_31_0_b1  MCU_INFO_41.BF.MCU_STATUS1_OR_31_0_b1
#define reg_MCU_STATUS1_OR_31_0_b2  MCU_INFO_41.BF.MCU_STATUS1_OR_31_0_b2
#define reg_MCU_STATUS1_OR_31_0_b3  MCU_INFO_41.BF.MCU_STATUS1_OR_31_0_b3

// 0x00dc	MCU_INFO_42		MCU Information Register 42
typedef union {
	struct {
		uint8_t MCU_STATUS2_OR_31_0_b0                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_OR_31_0_b1                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_OR_31_0_b2                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS2_OR_31_0_b3                   : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_42_t;
__xdata __at( 0xa2dc ) volatile MCU_INFO_42_t MCU_INFO_42;
#define reg_MCU_STATUS2_OR_31_0_b0  MCU_INFO_42.BF.MCU_STATUS2_OR_31_0_b0
#define reg_MCU_STATUS2_OR_31_0_b1  MCU_INFO_42.BF.MCU_STATUS2_OR_31_0_b1
#define reg_MCU_STATUS2_OR_31_0_b2  MCU_INFO_42.BF.MCU_STATUS2_OR_31_0_b2
#define reg_MCU_STATUS2_OR_31_0_b3  MCU_INFO_42.BF.MCU_STATUS2_OR_31_0_b3

// 0x00e0	MCU_INFO_43		MCU Information Register 43
typedef union {
	struct {
		uint8_t MCU_STATUS3_OR_31_0_b0                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_OR_31_0_b1                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_OR_31_0_b2                   : 8;	/* [31:0]       r 32'h0*/
		uint8_t MCU_STATUS3_OR_31_0_b3                   : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_43_t;
__xdata __at( 0xa2e0 ) volatile MCU_INFO_43_t MCU_INFO_43;
#define reg_MCU_STATUS3_OR_31_0_b0  MCU_INFO_43.BF.MCU_STATUS3_OR_31_0_b0
#define reg_MCU_STATUS3_OR_31_0_b1  MCU_INFO_43.BF.MCU_STATUS3_OR_31_0_b1
#define reg_MCU_STATUS3_OR_31_0_b2  MCU_INFO_43.BF.MCU_STATUS3_OR_31_0_b2
#define reg_MCU_STATUS3_OR_31_0_b3  MCU_INFO_43.BF.MCU_STATUS3_OR_31_0_b3

// 0x00e4	MEM_IRQ		memory irq
typedef union {
	struct {
		uint8_t INT_PMEM_ECC_ERROR_ISR                   : 1;	/*      0     r/w   0*/
		uint8_t INT_CMN_MEM_ECC_ERROR_ISR                : 1;	/*      1     r/w   0*/
		uint8_t MCU_REMOTE_REQ_ISR                       : 1;	/*      2     r/w   0*/
		uint8_t MCU_REMOTE_ACK_ISR                       : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEM_IRQ_t;
__xdata __at( 0xa2e4 ) volatile MEM_IRQ_t MEM_IRQ;
#define reg_INT_PMEM_ECC_ERROR_ISR  MEM_IRQ.BF.INT_PMEM_ECC_ERROR_ISR
#define reg_INT_CMN_MEM_ECC_ERROR_ISR  MEM_IRQ.BF.INT_CMN_MEM_ECC_ERROR_ISR
#define reg_MCU_REMOTE_REQ_ISR  MEM_IRQ.BF.MCU_REMOTE_REQ_ISR
#define reg_MCU_REMOTE_ACK_ISR  MEM_IRQ.BF.MCU_REMOTE_ACK_ISR

// 0x00e8	MEM_IRQ_MASK		memory irq mask
typedef union {
	struct {
		uint8_t INT_PMEM_ECC_ERROR_MASK                  : 1;	/*      0     r/w   0*/
		uint8_t INT_CMN_MEM_ECC_ERROR_MASK               : 1;	/*      1     r/w   0*/
		uint8_t MCU_REMOTE_REQ_MASK                      : 1;	/*      2     r/w   0*/
		uint8_t MCU_REMOTE_ACK_MASK                      : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEM_IRQ_MASK_t;
__xdata __at( 0xa2e8 ) volatile MEM_IRQ_MASK_t MEM_IRQ_MASK;
#define reg_INT_PMEM_ECC_ERROR_MASK  MEM_IRQ_MASK.BF.INT_PMEM_ECC_ERROR_MASK
#define reg_INT_CMN_MEM_ECC_ERROR_MASK  MEM_IRQ_MASK.BF.INT_CMN_MEM_ECC_ERROR_MASK
#define reg_MCU_REMOTE_REQ_MASK  MEM_IRQ_MASK.BF.MCU_REMOTE_REQ_MASK
#define reg_MCU_REMOTE_ACK_MASK  MEM_IRQ_MASK.BF.MCU_REMOTE_ACK_MASK

// 0x00ec	ANA_IF_CMN_REG0		Analog Interface Register 0
typedef union {
	struct {
		uint8_t ANA_REG_SU_DLY_SEL_1_0                   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t ANA_REG_HD_DLY_SEL_1_0                   : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t ANA_REG_CMN_FORCE                        : 1;	/*      4     r/w   0*/
		uint8_t ANA_REG_CMN_RE                           : 1;	/*      5     r/w   0*/
		uint8_t ANA_REG_CMN_WE                           : 1;	/*      6     r/w   0*/
		uint8_t ANA_REG_CMN_RST                          : 1;	/*      7     r/w   0*/
		uint8_t ANA_REG_CMN_RD_OUT_7_0                   : 8;	/* [15:8]       r   0*/
		uint8_t ANA_REG_CMN_WD_7_0                       : 8;	/*[23:16]     r/w   0*/
		uint8_t ANA_REG_CMN_ADDR_7_0                     : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_CMN_REG0_t;
__xdata __at( 0xa2ec ) volatile ANA_IF_CMN_REG0_t ANA_IF_CMN_REG0;
#define reg_ANA_REG_SU_DLY_SEL_1_0  ANA_IF_CMN_REG0.BF.ANA_REG_SU_DLY_SEL_1_0
#define reg_ANA_REG_HD_DLY_SEL_1_0  ANA_IF_CMN_REG0.BF.ANA_REG_HD_DLY_SEL_1_0
#define reg_ANA_REG_CMN_FORCE  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_FORCE
#define reg_ANA_REG_CMN_RE  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_RE
#define reg_ANA_REG_CMN_WE  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_WE
#define reg_ANA_REG_CMN_RST  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_RST
#define reg_ANA_REG_CMN_RD_OUT_7_0  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_RD_OUT_7_0
#define reg_ANA_REG_CMN_WD_7_0  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_WD_7_0
#define reg_ANA_REG_CMN_ADDR_7_0  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_ADDR_7_0

// 0x00f0	APB_CONTROL_REG		APB Bus Control Register
typedef union {
	struct {
		uint8_t APB_BURST_EN                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:1]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} APB_CONTROL_REG_t;
__xdata __at( 0xa2f0 ) volatile APB_CONTROL_REG_t APB_CONTROL_REG;
#define reg_APB_BURST_EN  APB_CONTROL_REG.BF.APB_BURST_EN

// 0x00f4	MEM_IRQ_CLEAR		memory irq clear
typedef union {
	struct {
		uint8_t INT_PMEM_ECC_ERROR_ISR_CLEAR             : 1;	/*      0     r/w   0*/
		uint8_t INT_CMN_MEM_ECC_ERROR_ISR_CLEAR          : 1;	/*      1     r/w   0*/
		uint8_t MCU_REMOTE_REQ_ISR_CLEAR                 : 1;	/*      2     r/w   0*/
		uint8_t MCU_REMOTE_ACK_ISR_CLEAR                 : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEM_IRQ_CLEAR_t;
__xdata __at( 0xa2f4 ) volatile MEM_IRQ_CLEAR_t MEM_IRQ_CLEAR;
#define reg_INT_PMEM_ECC_ERROR_ISR_CLEAR  MEM_IRQ_CLEAR.BF.INT_PMEM_ECC_ERROR_ISR_CLEAR
#define reg_INT_CMN_MEM_ECC_ERROR_ISR_CLEAR  MEM_IRQ_CLEAR.BF.INT_CMN_MEM_ECC_ERROR_ISR_CLEAR
#define reg_MCU_REMOTE_REQ_ISR_CLEAR  MEM_IRQ_CLEAR.BF.MCU_REMOTE_REQ_ISR_CLEAR
#define reg_MCU_REMOTE_ACK_ISR_CLEAR  MEM_IRQ_CLEAR.BF.MCU_REMOTE_ACK_ISR_CLEAR

// 0x00f8	MCU_SYNC1		MCU Sync 1
typedef union {
	struct {
		uint8_t MCU_LOCAL_COMMAND_7_0                    : 8;	/*  [7:0]     r/w   0*/
		uint8_t MCU_LOCAL_REQ                            : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t MCU_LOCAL_STATUS_7_0                     : 8;	/*[23:16]     r/w   0*/
		uint8_t MCU_LOCAL_ACK                            : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_SYNC1_t;
__xdata __at( 0xa2f8 ) volatile MCU_SYNC1_t MCU_SYNC1;
#define reg_MCU_LOCAL_COMMAND_7_0  MCU_SYNC1.BF.MCU_LOCAL_COMMAND_7_0
#define reg_MCU_LOCAL_REQ  MCU_SYNC1.BF.MCU_LOCAL_REQ
#define reg_MCU_LOCAL_STATUS_7_0  MCU_SYNC1.BF.MCU_LOCAL_STATUS_7_0
#define reg_MCU_LOCAL_ACK  MCU_SYNC1.BF.MCU_LOCAL_ACK

// 0x00fc	MCU_SYNC2		MCU Sync 2
typedef union {
	struct {
		uint8_t MCU_REMOTE_COMMAND_RD_7_0                : 8;	/*  [7:0]       r   0*/
		uint8_t MCU_REMOTE_REQ_RD                        : 1;	/*      8       r   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_RD_7_0                 : 8;	/*[23:16]       r   0*/
		uint8_t MCU_REMOTE_ACK_RD                        : 1;	/*     24       r   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_SYNC2_t;
__xdata __at( 0xa2fc ) volatile MCU_SYNC2_t MCU_SYNC2;
#define reg_MCU_REMOTE_COMMAND_RD_7_0  MCU_SYNC2.BF.MCU_REMOTE_COMMAND_RD_7_0
#define reg_MCU_REMOTE_REQ_RD  MCU_SYNC2.BF.MCU_REMOTE_REQ_RD
#define reg_MCU_REMOTE_STATUS_RD_7_0  MCU_SYNC2.BF.MCU_REMOTE_STATUS_RD_7_0
#define reg_MCU_REMOTE_ACK_RD  MCU_SYNC2.BF.MCU_REMOTE_ACK_RD

#endif
