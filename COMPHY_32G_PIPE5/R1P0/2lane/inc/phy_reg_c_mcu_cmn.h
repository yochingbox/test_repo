#ifndef PHY_REG_C_MCU_CMN_H
#define PHY_REG_C_MCU_CMN_H



// 0x0000	MCU_CONTROL_0		MCU CMN Control Register 0
typedef union {
	struct {
		uint8_t MCU_EN_LANE0                             : 1;	/*      0     r/w   0*/
		uint8_t MCU_EN_LANE1                             : 1;	/*      1     r/w   0*/
		uint8_t MCU_EN_LANE2                             : 1;	/*      2     r/w   0*/
		uint8_t MCU_EN_LANE3                             : 1;	/*      3     r/w   0*/
		uint8_t MCU_EN_CMN                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t INIT_DONE_CMN                            : 1;	/*      8     r/w   0*/
		uint8_t INIT_XDATA_FROM_PMEM                     : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_0_t;
__xdata __at( 0xa200 ) volatile MCU_CONTROL_0_t MCU_CONTROL_0;
#define reg_MCU_EN_LANE0  MCU_CONTROL_0.BF.MCU_EN_LANE0
#define reg_MCU_EN_LANE1  MCU_CONTROL_0.BF.MCU_EN_LANE1
#define reg_MCU_EN_LANE2  MCU_CONTROL_0.BF.MCU_EN_LANE2
#define reg_MCU_EN_LANE3  MCU_CONTROL_0.BF.MCU_EN_LANE3
#define reg_MCU_EN_CMN  MCU_CONTROL_0.BF.MCU_EN_CMN
#define reg_INIT_DONE_CMN  MCU_CONTROL_0.BF.INIT_DONE_CMN
#define reg_INIT_XDATA_FROM_PMEM  MCU_CONTROL_0.BF.INIT_XDATA_FROM_PMEM

// 0x0004	MCU_CONTROL_1		MCU CMN Control Register 1
typedef union {
	struct {
		uint8_t SET_MCU_INT_LANE0                        : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t HOLD_MCU_LANE0                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t HOLD_MCU_CMN                             : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[30:17]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:17]     r/w   0*/
		uint8_t CMN_MCU_RESTART                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_1_t;
__xdata __at( 0xa204 ) volatile MCU_CONTROL_1_t MCU_CONTROL_1;
#define reg_SET_MCU_INT_LANE0  MCU_CONTROL_1.BF.SET_MCU_INT_LANE0
#define reg_HOLD_MCU_LANE0  MCU_CONTROL_1.BF.HOLD_MCU_LANE0
#define reg_HOLD_MCU_CMN  MCU_CONTROL_1.BF.HOLD_MCU_CMN
#define reg_CMN_MCU_RESTART  MCU_CONTROL_1.BF.CMN_MCU_RESTART

// 0x0008	MCU_CONTROL_2		MCU CMN Control Register 2
typedef union {
	struct {
		uint8_t SET_MCU_INT_LANE1                        : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t HOLD_MCU_LANE1                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_2_t;
__xdata __at( 0xa208 ) volatile MCU_CONTROL_2_t MCU_CONTROL_2;
#define reg_SET_MCU_INT_LANE1  MCU_CONTROL_2.BF.SET_MCU_INT_LANE1
#define reg_HOLD_MCU_LANE1  MCU_CONTROL_2.BF.HOLD_MCU_LANE1

// 0x000c	MCU_CONTROL_3		MCU CMN Control Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t HOLD_MCU_LANE2                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_3_t;
__xdata __at( 0xa20c ) volatile MCU_CONTROL_3_t MCU_CONTROL_3;
#define reg_HOLD_MCU_LANE2  MCU_CONTROL_3.BF.HOLD_MCU_LANE2

// 0x0010	MCU_CONTROL_4		MCU CMN Control Register 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t HOLD_MCU_LANE3                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_4_t;
__xdata __at( 0xa210 ) volatile MCU_CONTROL_4_t MCU_CONTROL_4;
#define reg_HOLD_MCU_LANE3  MCU_CONTROL_4.BF.HOLD_MCU_LANE3

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
		uint8_t ROM_PARITY_ERR_SET                       : 1;	/*      0     r/w   0*/
		uint8_t ROM_PARITY_ERR_ENABLE                    : 1;	/*      1     r/w   0*/
		uint8_t ROM_PARITY_ERR_CLEAR                     : 1;	/*      2     r/w   0*/
		uint8_t PROG_RAM_SEL_1_0                         : 2;	/*  [4:3]     r/w   0*/
		uint8_t PRAM_WTSEL_1_0                           : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t PRAM_RTSEL_1_0_b0                        : 1;	/*  [8:7]     r/w 2'h1*/
		uint8_t PRAM_RTSEL_1_0_b1                        : 1;	/*  [8:7]     r/w 2'h1*/
		uint8_t PROM_PTSEL_1_0                           : 2;	/* [10:9]     r/w 2'h1*/
		uint8_t PROM_RTSEL_1_0                           : 2;	/*[12:11]     r/w 2'h1*/
		uint8_t PROM_TRB_1_0                             : 2;	/*[14:13]     r/w 2'h1*/
		uint8_t PROM_TM                                  : 1;	/*     15     r/w   0*/
		uint8_t PRAM_ECC_2ERR_SET                        : 1;	/*     16     r/w   0*/
		uint8_t PRAM_ECC_2ERR_ENABLE                     : 1;	/*     17     r/w   0*/
		uint8_t PRAM_ECC_2ERR_CLEAR                      : 1;	/*     18     r/w   0*/
		uint8_t PRAM_ECC_1ERR_SET                        : 1;	/*     19     r/w   0*/
		uint8_t PRAM_ECC_1ERR_ENABLE                     : 1;	/*     20     r/w   0*/
		uint8_t PRAM_ECC_1ERR_CLEAR                      : 1;	/*     21     r/w   0*/
		uint8_t ROM_PARITY_ERR                           : 1;	/*     22       r   0*/
		uint8_t PRAM_ECC_2ERR                            : 1;	/*     23       r   0*/
		uint8_t PRAM_ECC_1ERR                            : 1;	/*     24       r   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_0_t;
__xdata __at( 0xa21c ) volatile MEMORY_CONTROL_0_t MEMORY_CONTROL_0;
#define reg_ROM_PARITY_ERR_SET  MEMORY_CONTROL_0.BF.ROM_PARITY_ERR_SET
#define reg_ROM_PARITY_ERR_ENABLE  MEMORY_CONTROL_0.BF.ROM_PARITY_ERR_ENABLE
#define reg_ROM_PARITY_ERR_CLEAR  MEMORY_CONTROL_0.BF.ROM_PARITY_ERR_CLEAR
#define reg_PROG_RAM_SEL_1_0  MEMORY_CONTROL_0.BF.PROG_RAM_SEL_1_0
#define reg_PRAM_WTSEL_1_0  MEMORY_CONTROL_0.BF.PRAM_WTSEL_1_0
#define reg_PRAM_RTSEL_1_0_b0  MEMORY_CONTROL_0.BF.PRAM_RTSEL_1_0_b0
#define reg_PRAM_RTSEL_1_0_b1  MEMORY_CONTROL_0.BF.PRAM_RTSEL_1_0_b1
#define reg_PROM_PTSEL_1_0  MEMORY_CONTROL_0.BF.PROM_PTSEL_1_0
#define reg_PROM_RTSEL_1_0  MEMORY_CONTROL_0.BF.PROM_RTSEL_1_0
#define reg_PROM_TRB_1_0  MEMORY_CONTROL_0.BF.PROM_TRB_1_0
#define reg_PROM_TM  MEMORY_CONTROL_0.BF.PROM_TM
#define reg_PRAM_ECC_2ERR_SET  MEMORY_CONTROL_0.BF.PRAM_ECC_2ERR_SET
#define reg_PRAM_ECC_2ERR_ENABLE  MEMORY_CONTROL_0.BF.PRAM_ECC_2ERR_ENABLE
#define reg_PRAM_ECC_2ERR_CLEAR  MEMORY_CONTROL_0.BF.PRAM_ECC_2ERR_CLEAR
#define reg_PRAM_ECC_1ERR_SET  MEMORY_CONTROL_0.BF.PRAM_ECC_1ERR_SET
#define reg_PRAM_ECC_1ERR_ENABLE  MEMORY_CONTROL_0.BF.PRAM_ECC_1ERR_ENABLE
#define reg_PRAM_ECC_1ERR_CLEAR  MEMORY_CONTROL_0.BF.PRAM_ECC_1ERR_CLEAR
#define reg_ROM_PARITY_ERR  MEMORY_CONTROL_0.BF.ROM_PARITY_ERR
#define reg_PRAM_ECC_2ERR  MEMORY_CONTROL_0.BF.PRAM_ECC_2ERR
#define reg_PRAM_ECC_1ERR  MEMORY_CONTROL_0.BF.PRAM_ECC_1ERR

// 0x0020	MEMORY_CONTROL_1		Memory Control Register 1
typedef union {
	struct {
		uint8_t XRAM_CMN_RTSEL_1_0                       : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t XRAM_CMN_WTSEL_1_0                       : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t IRAM_WTSEL_CMN_1_0                       : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t IRAM_RTSEL_CMN_1_0                       : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t CACHE_WTSEL_CMN_1_0                      : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t CACHE_RTSEL_CMN_1_0                      : 2;	/*[11:10]     r/w 2'h1*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_1_t;
__xdata __at( 0xa220 ) volatile MEMORY_CONTROL_1_t MEMORY_CONTROL_1;
#define reg_XRAM_CMN_RTSEL_1_0  MEMORY_CONTROL_1.BF.XRAM_CMN_RTSEL_1_0
#define reg_XRAM_CMN_WTSEL_1_0  MEMORY_CONTROL_1.BF.XRAM_CMN_WTSEL_1_0
#define reg_IRAM_WTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.IRAM_WTSEL_CMN_1_0
#define reg_IRAM_RTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.IRAM_RTSEL_CMN_1_0
#define reg_CACHE_WTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.CACHE_WTSEL_CMN_1_0
#define reg_CACHE_RTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.CACHE_RTSEL_CMN_1_0

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
		uint8_t RESERVED_3                               : 2;	/*  [4:3]     r/w   0*/
		uint8_t XDATA_ECC_1ERR_CMN                       : 1;	/*      5       r   0*/
		uint8_t CACHE_ECC_1ERR_CMN                       : 1;	/*      6       r   0*/
		uint8_t IRAM_ECC_1ERR_CMN                        : 1;	/*      7       r   0*/
		uint8_t XDATA_ECC_2ERR_CMN                       : 1;	/*      8       r   0*/
		uint8_t CACHE_ECC_2ERR_CMN                       : 1;	/*      9       r   0*/
		uint8_t IRAM_ECC_2ERR_CMN                        : 1;	/*     10       r   0*/
		uint8_t XDATA_ECC_1ERR_ENABLE_CMN                : 1;	/*     11     r/w   0*/
		uint8_t CACHE_ECC_1ERR_ENABLE_CMN                : 1;	/*     12     r/w   0*/
		uint8_t IRAM_ECC_1ERR_ENABLE_CMN                 : 1;	/*     13     r/w   0*/
		uint8_t XDATA_ECC_2ERR_ENABLE_CMN                : 1;	/*     14     r/w   0*/
		uint8_t CACHE_ECC_2ERR_ENABLE_CMN                : 1;	/*     15     r/w   0*/
		uint8_t IRAM_ECC_2ERR_ENABLE_CMN                 : 1;	/*     16     r/w   0*/
		uint8_t XDATA_ECC_1ERR_CLEAR_CMN                 : 1;	/*     17     r/w   0*/
		uint8_t CACHE_ECC_1ERR_CLEAR_CMN                 : 1;	/*     18     r/w   0*/
		uint8_t IRAM_ECC_1ERR_CLEAR_CMN                  : 1;	/*     19     r/w   0*/
		uint8_t XDATA_ECC_2ERR_CLEAR_CMN                 : 1;	/*     20     r/w   0*/
		uint8_t CACHE_ECC_2ERR_CLEAR_CMN                 : 1;	/*     21     r/w   0*/
		uint8_t IRAM_ECC_2ERR_CLEAR_CMN                  : 1;	/*     22     r/w   0*/
		uint8_t XDATA_ECC_1ERR_SET_CMN                   : 1;	/*     23     r/w   0*/
		uint8_t CACHE_ECC_1ERR_SET_CMN                   : 1;	/*     24     r/w   0*/
		uint8_t IRAM_ECC_1ERR_SET_CMN                    : 1;	/*     25     r/w   0*/
		uint8_t XDATA_ECC_2ERR_SET_CMN                   : 1;	/*     26     r/w   0*/
		uint8_t CACHE_ECC_2ERR_SET_CMN                   : 1;	/*     27     r/w   0*/
		uint8_t IRAM_ECC_2ERR_SET_CMN                    : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_4_t;
__xdata __at( 0xa22c ) volatile MEMORY_CONTROL_4_t MEMORY_CONTROL_4;
#define reg_PMEM_CHECKSUM_RESET  MEMORY_CONTROL_4.BF.PMEM_CHECKSUM_RESET
#define reg_PMEM_CHECKSUM_PASS  MEMORY_CONTROL_4.BF.PMEM_CHECKSUM_PASS
#define reg_ECC_ENABLE  MEMORY_CONTROL_4.BF.ECC_ENABLE
#define reg_XDATA_ECC_1ERR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_CMN
#define reg_CACHE_ECC_1ERR_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_1ERR_CMN
#define reg_IRAM_ECC_1ERR_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_1ERR_CMN
#define reg_XDATA_ECC_2ERR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_CMN
#define reg_CACHE_ECC_2ERR_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_2ERR_CMN
#define reg_IRAM_ECC_2ERR_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_2ERR_CMN
#define reg_XDATA_ECC_1ERR_ENABLE_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_ENABLE_CMN
#define reg_CACHE_ECC_1ERR_ENABLE_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_1ERR_ENABLE_CMN
#define reg_IRAM_ECC_1ERR_ENABLE_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_1ERR_ENABLE_CMN
#define reg_XDATA_ECC_2ERR_ENABLE_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_ENABLE_CMN
#define reg_CACHE_ECC_2ERR_ENABLE_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_2ERR_ENABLE_CMN
#define reg_IRAM_ECC_2ERR_ENABLE_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_2ERR_ENABLE_CMN
#define reg_XDATA_ECC_1ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_CLEAR_CMN
#define reg_CACHE_ECC_1ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_1ERR_CLEAR_CMN
#define reg_IRAM_ECC_1ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_1ERR_CLEAR_CMN
#define reg_XDATA_ECC_2ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_CLEAR_CMN
#define reg_CACHE_ECC_2ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_2ERR_CLEAR_CMN
#define reg_IRAM_ECC_2ERR_CLEAR_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_2ERR_CLEAR_CMN
#define reg_XDATA_ECC_1ERR_SET_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_1ERR_SET_CMN
#define reg_CACHE_ECC_1ERR_SET_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_1ERR_SET_CMN
#define reg_IRAM_ECC_1ERR_SET_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_1ERR_SET_CMN
#define reg_XDATA_ECC_2ERR_SET_CMN  MEMORY_CONTROL_4.BF.XDATA_ECC_2ERR_SET_CMN
#define reg_CACHE_ECC_2ERR_SET_CMN  MEMORY_CONTROL_4.BF.CACHE_ECC_2ERR_SET_CMN
#define reg_IRAM_ECC_2ERR_SET_CMN  MEMORY_CONTROL_4.BF.IRAM_ECC_2ERR_SET_CMN

// 0x0034	MCU_INFO_0		MCU Information Register 0
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_LANE0_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE0_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE0_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE0_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_0_t;
__xdata __at( 0xa234 ) volatile MCU_INFO_0_t MCU_INFO_0;
#define reg_SET_MCU_COMMAND_LANE0_31_0_b0  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b0
#define reg_SET_MCU_COMMAND_LANE0_31_0_b1  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b1
#define reg_SET_MCU_COMMAND_LANE0_31_0_b2  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b2
#define reg_SET_MCU_COMMAND_LANE0_31_0_b3  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b3

// 0x0038	MCU_INFO_1		MCU Information Register 1
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_LANE1_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE1_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE1_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE1_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_1_t;
__xdata __at( 0xa238 ) volatile MCU_INFO_1_t MCU_INFO_1;
#define reg_SET_MCU_COMMAND_LANE1_31_0_b0  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b0
#define reg_SET_MCU_COMMAND_LANE1_31_0_b1  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b1
#define reg_SET_MCU_COMMAND_LANE1_31_0_b2  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b2
#define reg_SET_MCU_COMMAND_LANE1_31_0_b3  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b3

// 0x003c	MCU_INFO_2		MCU Information Register 2
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_LANE2_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE2_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE2_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE2_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_2_t;
__xdata __at( 0xa23c ) volatile MCU_INFO_2_t MCU_INFO_2;
#define reg_SET_MCU_COMMAND_LANE2_31_0_b0  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b0
#define reg_SET_MCU_COMMAND_LANE2_31_0_b1  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b1
#define reg_SET_MCU_COMMAND_LANE2_31_0_b2  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b2
#define reg_SET_MCU_COMMAND_LANE2_31_0_b3  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b3

// 0x0040	MCU_INFO_3		MCU Information Register 3
typedef union {
	struct {
		uint8_t SET_MCU_COMMAND_LANE3_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE3_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE3_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t SET_MCU_COMMAND_LANE3_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INFO_3_t;
__xdata __at( 0xa240 ) volatile MCU_INFO_3_t MCU_INFO_3;
#define reg_SET_MCU_COMMAND_LANE3_31_0_b0  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b0
#define reg_SET_MCU_COMMAND_LANE3_31_0_b1  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b1
#define reg_SET_MCU_COMMAND_LANE3_31_0_b2  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b2
#define reg_SET_MCU_COMMAND_LANE3_31_0_b3  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b3

// 0x0044	MEM_CMN_ECC_ERR_ADDRESS0		MEMORY CMN ECC ERROR ADDR
typedef union {
	struct {
		uint8_t XDATA_ECC_ERR_ADDR_CMN_8_0_b0            : 8;	/*  [8:0]       r   0*/
		uint8_t XDATA_ECC_ERR_ADDR_CMN_8_0_b1            : 1;	/*  [8:0]       r   0*/
		uint8_t IRAM_ECC_ERR_ADDR_CMN_7_0_b0             : 7;	/* [16:9]       r   0*/
		uint8_t IRAM_ECC_ERR_ADDR_CMN_7_0_b1             : 1;	/* [16:9]       r   0*/
		uint8_t CACHE_ECC_ERR_ADDR_CMN_7_0_b0            : 7;	/*[24:17]       r   0*/
		uint8_t CACHE_ECC_ERR_ADDR_CMN_7_0_b1            : 1;	/*[24:17]       r   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEM_CMN_ECC_ERR_ADDRESS0_t;
__xdata __at( 0xa244 ) volatile MEM_CMN_ECC_ERR_ADDRESS0_t MEM_CMN_ECC_ERR_ADDRESS0;
#define reg_XDATA_ECC_ERR_ADDR_CMN_8_0_b0  MEM_CMN_ECC_ERR_ADDRESS0.BF.XDATA_ECC_ERR_ADDR_CMN_8_0_b0
#define reg_XDATA_ECC_ERR_ADDR_CMN_8_0_b1  MEM_CMN_ECC_ERR_ADDRESS0.BF.XDATA_ECC_ERR_ADDR_CMN_8_0_b1
#define reg_IRAM_ECC_ERR_ADDR_CMN_7_0_b0  MEM_CMN_ECC_ERR_ADDRESS0.BF.IRAM_ECC_ERR_ADDR_CMN_7_0_b0
#define reg_IRAM_ECC_ERR_ADDR_CMN_7_0_b1  MEM_CMN_ECC_ERR_ADDRESS0.BF.IRAM_ECC_ERR_ADDR_CMN_7_0_b1
#define reg_CACHE_ECC_ERR_ADDR_CMN_7_0_b0  MEM_CMN_ECC_ERR_ADDRESS0.BF.CACHE_ECC_ERR_ADDR_CMN_7_0_b0
#define reg_CACHE_ECC_ERR_ADDR_CMN_7_0_b1  MEM_CMN_ECC_ERR_ADDRESS0.BF.CACHE_ECC_ERR_ADDR_CMN_7_0_b1

// 0x00e0	ANA_IF_CMN_REG1		Analog Interface Register 1
typedef union {
	struct {
		uint8_t ANA_REG_CMN_CAL_FORCE                    : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/* [23:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [23:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:1]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_CMN_REG1_t;
__xdata __at( 0xa2e0 ) volatile ANA_IF_CMN_REG1_t ANA_IF_CMN_REG1;
#define reg_ANA_REG_CMN_CAL_FORCE  ANA_IF_CMN_REG1.BF.ANA_REG_CMN_CAL_FORCE

// 0x00e4	MEM_IRQ		memory irq
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
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
#define reg_MCU_REMOTE_REQ_ISR  MEM_IRQ.BF.MCU_REMOTE_REQ_ISR
#define reg_MCU_REMOTE_ACK_ISR  MEM_IRQ.BF.MCU_REMOTE_ACK_ISR

// 0x00e8	MEM_IRQ_MASK		memory irq mask
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
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
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
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
