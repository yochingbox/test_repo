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
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
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
#define reg_HOLD_MCU_LANE0  MCU_CONTROL_1.BF.HOLD_MCU_LANE0
#define reg_HOLD_MCU_CMN  MCU_CONTROL_1.BF.HOLD_MCU_CMN
#define reg_CMN_MCU_RESTART  MCU_CONTROL_1.BF.CMN_MCU_RESTART

// 0x0008	MCU_CONTROL_2		MCU CMN Control Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t HOLD_MCU_LANE1                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_2_t;
__xdata __at( 0xa208 ) volatile MCU_CONTROL_2_t MCU_CONTROL_2;
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

// 0x002c	MEMORY_CONTROL_4		Memory Control Register 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
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

// 0x00f8	ANA_IF_CMN_REG1		Analog Interface Register 1
typedef union {
	struct {
		uint8_t ANA_REG_CMN_CAL_FORCE                    : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/* [23:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [23:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:1]     r/w   0*/
		uint8_t ANA_REG_CMN_CAL_RD_OUT_7_0               : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_CMN_REG1_t;
__xdata __at( 0xa2f8 ) volatile ANA_IF_CMN_REG1_t ANA_IF_CMN_REG1;
#define reg_ANA_REG_CMN_CAL_FORCE  ANA_IF_CMN_REG1.BF.ANA_REG_CMN_CAL_FORCE
#define reg_ANA_REG_CMN_CAL_RD_OUT_7_0  ANA_IF_CMN_REG1.BF.ANA_REG_CMN_CAL_RD_OUT_7_0

#endif
