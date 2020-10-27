#ifndef PHY_REG_C_MCU_CMN_H
#define PHY_REG_C_MCU_CMN_H



// 0x0000	MCU_CONTROL_0		MCU CMN Control Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w   0*/
		uint8_t MCU_INIT_DONE                            : 1;	/*      7     r/w   0*/
		uint8_t INIT_DONE_CMN                            : 1;	/*      8     r/w   0*/
		uint8_t INIT_XDATA_FROM_PMEM                     : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t MCU_OCDS_EN_CMN                          : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_0_t;
__xdata __at( 0xa200 ) volatile MCU_CONTROL_0_t MCU_CONTROL_0;
#define reg_MCU_INIT_DONE  MCU_CONTROL_0.BF.MCU_INIT_DONE
#define reg_INIT_DONE_CMN  MCU_CONTROL_0.BF.INIT_DONE_CMN
#define reg_INIT_XDATA_FROM_PMEM  MCU_CONTROL_0.BF.INIT_XDATA_FROM_PMEM
#define reg_MCU_OCDS_EN_CMN  MCU_CONTROL_0.BF.MCU_OCDS_EN_CMN

// 0x0004	MCU_CONTROL_1		MCU CMN Control Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t HOLD_MCU_CMN                             : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[30:17]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:17]     r/w   0*/
		uint8_t CMN_MCU_RESTART                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_CONTROL_1_t;
__xdata __at( 0xa204 ) volatile MCU_CONTROL_1_t MCU_CONTROL_1;
#define reg_HOLD_MCU_CMN  MCU_CONTROL_1.BF.HOLD_MCU_CMN
#define reg_CMN_MCU_RESTART  MCU_CONTROL_1.BF.CMN_MCU_RESTART

// 0x0008	REG_SFT_RST_CTL_CMN0		Register Soft Reset Control CMN 0
typedef union {
	struct {
		uint8_t SFT_RST_CMN_MASK_EN_CMN                  : 1;	/*      0     r/w   0*/
		uint8_t SFT_RST_CMN_IF_MASK_EN_CMN               : 1;	/*      1     r/w   0*/
		uint8_t SFT_RST_MCU_MASK_EN_CMN                  : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SFT_RST_CMN_CMN                          : 1;	/*      8     r/w   0*/
		uint8_t SFT_RST_CMN_IF                           : 1;	/*      9     r/w   0*/
		uint8_t SFT_RST_MCU_CMN                          : 1;	/*     10     r/w   0*/
		uint8_t SFT_RST_ANA_CMN                          : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} REG_SFT_RST_CTL_CMN0_t;
__xdata __at( 0xa208 ) volatile REG_SFT_RST_CTL_CMN0_t REG_SFT_RST_CTL_CMN0;
#define reg_SFT_RST_CMN_MASK_EN_CMN  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_CMN_MASK_EN_CMN
#define reg_SFT_RST_CMN_IF_MASK_EN_CMN  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_CMN_IF_MASK_EN_CMN
#define reg_SFT_RST_MCU_MASK_EN_CMN  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_MCU_MASK_EN_CMN
#define reg_SFT_RST_CMN_CMN  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_CMN_CMN
#define reg_SFT_RST_CMN_IF  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_CMN_IF
#define reg_SFT_RST_MCU_CMN  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_MCU_CMN
#define reg_SFT_RST_ANA_CMN  REG_SFT_RST_CTL_CMN0.BF.SFT_RST_ANA_CMN

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

// 0x001c	MEMORY_CONTROL_1		Memory Control Register 1
typedef union {
	struct {
		uint8_t XRAM_CMN_RTSEL_1_0                       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t XRAM_CMN_WTSEL_1_0                       : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t IRAM_WTSEL_CMN_1_0                       : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t IRAM_RTSEL_CMN_1_0                       : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t CACHE_WTSEL_CMN_1_0                      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t CACHE_RTSEL_CMN_1_0                      : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t RESERVED_12                              : 4;	/*[30:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[30:12]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:12]     r/w   0*/
		uint8_t SRAM_CEB_FORCE_ENABLE_CMN                : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_1_t;
__xdata __at( 0xa21c ) volatile MEMORY_CONTROL_1_t MEMORY_CONTROL_1;
#define reg_XRAM_CMN_RTSEL_1_0  MEMORY_CONTROL_1.BF.XRAM_CMN_RTSEL_1_0
#define reg_XRAM_CMN_WTSEL_1_0  MEMORY_CONTROL_1.BF.XRAM_CMN_WTSEL_1_0
#define reg_IRAM_WTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.IRAM_WTSEL_CMN_1_0
#define reg_IRAM_RTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.IRAM_RTSEL_CMN_1_0
#define reg_CACHE_WTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.CACHE_WTSEL_CMN_1_0
#define reg_CACHE_RTSEL_CMN_1_0  MEMORY_CONTROL_1.BF.CACHE_RTSEL_CMN_1_0
#define reg_SRAM_CEB_FORCE_ENABLE_CMN  MEMORY_CONTROL_1.BF.SRAM_CEB_FORCE_ENABLE_CMN

// 0x0020	MEMORY_CONTROL_4		Memory Control Register 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t ECC_ENABLE_CMN                           : 1;	/*      2     r/w   1*/
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
		uint8_t XDATA_AUTO_CLEAR_ENABLE_CMN              : 1;	/*     29     r/w 1'b1*/
		uint8_t XDATA_CLEAR_ENABLE_CMN                   : 1;	/*     30     r/w   0*/
		uint8_t XDATA_CLEAR_DONE_CMN                     : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEMORY_CONTROL_4_t;
__xdata __at( 0xa220 ) volatile MEMORY_CONTROL_4_t MEMORY_CONTROL_4;
#define reg_ECC_ENABLE_CMN  MEMORY_CONTROL_4.BF.ECC_ENABLE_CMN
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
#define reg_XDATA_AUTO_CLEAR_ENABLE_CMN  MEMORY_CONTROL_4.BF.XDATA_AUTO_CLEAR_ENABLE_CMN
#define reg_XDATA_CLEAR_ENABLE_CMN  MEMORY_CONTROL_4.BF.XDATA_CLEAR_ENABLE_CMN
#define reg_XDATA_CLEAR_DONE_CMN  MEMORY_CONTROL_4.BF.XDATA_CLEAR_DONE_CMN

// 0x0024	MCU_INFO_0		MCU Information Register 0
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
__xdata __at( 0xa224 ) volatile MCU_INFO_0_t MCU_INFO_0;
#define reg_SET_MCU_COMMAND_LANE0_31_0_b0  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b0
#define reg_SET_MCU_COMMAND_LANE0_31_0_b1  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b1
#define reg_SET_MCU_COMMAND_LANE0_31_0_b2  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b2
#define reg_SET_MCU_COMMAND_LANE0_31_0_b3  MCU_INFO_0.BF.SET_MCU_COMMAND_LANE0_31_0_b3

// 0x0028	MCU_INFO_1		MCU Information Register 1
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
__xdata __at( 0xa228 ) volatile MCU_INFO_1_t MCU_INFO_1;
#define reg_SET_MCU_COMMAND_LANE1_31_0_b0  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b0
#define reg_SET_MCU_COMMAND_LANE1_31_0_b1  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b1
#define reg_SET_MCU_COMMAND_LANE1_31_0_b2  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b2
#define reg_SET_MCU_COMMAND_LANE1_31_0_b3  MCU_INFO_1.BF.SET_MCU_COMMAND_LANE1_31_0_b3

// 0x002c	MCU_INFO_2		MCU Information Register 2
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
__xdata __at( 0xa22c ) volatile MCU_INFO_2_t MCU_INFO_2;
#define reg_SET_MCU_COMMAND_LANE2_31_0_b0  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b0
#define reg_SET_MCU_COMMAND_LANE2_31_0_b1  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b1
#define reg_SET_MCU_COMMAND_LANE2_31_0_b2  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b2
#define reg_SET_MCU_COMMAND_LANE2_31_0_b3  MCU_INFO_2.BF.SET_MCU_COMMAND_LANE2_31_0_b3

// 0x0030	MCU_INFO_3		MCU Information Register 3
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
__xdata __at( 0xa230 ) volatile MCU_INFO_3_t MCU_INFO_3;
#define reg_SET_MCU_COMMAND_LANE3_31_0_b0  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b0
#define reg_SET_MCU_COMMAND_LANE3_31_0_b1  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b1
#define reg_SET_MCU_COMMAND_LANE3_31_0_b2  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b2
#define reg_SET_MCU_COMMAND_LANE3_31_0_b3  MCU_INFO_3.BF.SET_MCU_COMMAND_LANE3_31_0_b3

// 0x0034	MEM_CMN_ECC_ERR_ADDRESS0		MEMORY CMN ECC ERROR ADDR
typedef union {
	struct {
		uint8_t XDATA_ECC_ERR_ADDR_CMN_8_0_b0            : 8;	/*  [8:0]       r   0*/
		uint8_t XDATA_ECC_ERR_ADDR_CMN_8_0_b1            : 1;	/*  [8:0]       r   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t IRAM_ECC_ERR_ADDR_CMN_7_0                : 8;	/*[23:16]       r   0*/
		uint8_t CACHE_ECC_ERR_ADDR_CMN_7_0               : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEM_CMN_ECC_ERR_ADDRESS0_t;
__xdata __at( 0xa234 ) volatile MEM_CMN_ECC_ERR_ADDRESS0_t MEM_CMN_ECC_ERR_ADDRESS0;
#define reg_XDATA_ECC_ERR_ADDR_CMN_8_0_b0  MEM_CMN_ECC_ERR_ADDRESS0.BF.XDATA_ECC_ERR_ADDR_CMN_8_0_b0
#define reg_XDATA_ECC_ERR_ADDR_CMN_8_0_b1  MEM_CMN_ECC_ERR_ADDRESS0.BF.XDATA_ECC_ERR_ADDR_CMN_8_0_b1
#define reg_IRAM_ECC_ERR_ADDR_CMN_7_0  MEM_CMN_ECC_ERR_ADDRESS0.BF.IRAM_ECC_ERR_ADDR_CMN_7_0
#define reg_CACHE_ECC_ERR_ADDR_CMN_7_0  MEM_CMN_ECC_ERR_ADDRESS0.BF.CACHE_ECC_ERR_ADDR_CMN_7_0

// 0x0038	ANA_IF_CMN_REG0		Analog Interface Register 0
typedef union {
	struct {
		uint8_t ANA_REG_CMN_FORCE                        : 1;	/*      0     r/w   0*/
		uint8_t ANA_REG_CMN_RE                           : 1;	/*      1     r/w   0*/
		uint8_t ANA_REG_CMN_WE                           : 1;	/*      2     r/w   0*/
		uint8_t ANA_REG_CMN_RST                          : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t ANA_REG_CMN_RD_OUT_7_0                   : 8;	/* [15:8]       r   0*/
		uint8_t ANA_REG_CMN_WD_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_CMN_REG0_t;
__xdata __at( 0xa238 ) volatile ANA_IF_CMN_REG0_t ANA_IF_CMN_REG0;
#define reg_ANA_REG_CMN_FORCE  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_FORCE
#define reg_ANA_REG_CMN_RE  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_RE
#define reg_ANA_REG_CMN_WE  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_WE
#define reg_ANA_REG_CMN_RST  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_RST
#define reg_ANA_REG_CMN_RD_OUT_7_0  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_RD_OUT_7_0
#define reg_ANA_REG_CMN_WD_7_0  ANA_IF_CMN_REG0.BF.ANA_REG_CMN_WD_7_0

// 0x003c	ANA_IF_CMN_REG1		Analog Interface Register 1
typedef union {
	struct {
		uint8_t ANA_REG_SU_DLY_SEL_CMN_2_0               : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t ANA_REG_HD_DLY_SEL_CMN_2_0               : 3;	/*  [5:3]     r/w 3'h3*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t ANA_REG_CMN_ADDR_8_0_b0                  : 8;	/* [16:8]     r/w   0*/
		uint8_t ANA_REG_CMN_ADDR_8_0_b1                  : 1;	/* [16:8]     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[31:17]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:17]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_CMN_REG1_t;
__xdata __at( 0xa23c ) volatile ANA_IF_CMN_REG1_t ANA_IF_CMN_REG1;
#define reg_ANA_REG_SU_DLY_SEL_CMN_2_0  ANA_IF_CMN_REG1.BF.ANA_REG_SU_DLY_SEL_CMN_2_0
#define reg_ANA_REG_HD_DLY_SEL_CMN_2_0  ANA_IF_CMN_REG1.BF.ANA_REG_HD_DLY_SEL_CMN_2_0
#define reg_ANA_REG_CMN_ADDR_8_0_b0  ANA_IF_CMN_REG1.BF.ANA_REG_CMN_ADDR_8_0_b0
#define reg_ANA_REG_CMN_ADDR_8_0_b1  ANA_IF_CMN_REG1.BF.ANA_REG_CMN_ADDR_8_0_b1

// 0x0054	CMN_IRQ		cmn irq
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t INT_TIMER0_CMN_ISR                       : 1;	/*      2     r/w   0*/
		uint8_t INT_TIMER1_CMN_ISR                       : 1;	/*      3     r/w   0*/
		uint8_t INT_TIMER2_CMN_ISR                       : 1;	/*      4     r/w   0*/
		uint8_t INT_TIMER3_CMN_ISR                       : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_IRQ_t;
__xdata __at( 0xa254 ) volatile CMN_IRQ_t CMN_IRQ;
#define reg_INT_TIMER0_CMN_ISR  CMN_IRQ.BF.INT_TIMER0_CMN_ISR
#define reg_INT_TIMER1_CMN_ISR  CMN_IRQ.BF.INT_TIMER1_CMN_ISR
#define reg_INT_TIMER2_CMN_ISR  CMN_IRQ.BF.INT_TIMER2_CMN_ISR
#define reg_INT_TIMER3_CMN_ISR  CMN_IRQ.BF.INT_TIMER3_CMN_ISR

// 0x0058	CMN_IRQ_MASK		cmn irq mask
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t INT_TIMER0_CMN_MASK                      : 1;	/*      2     r/w   0*/
		uint8_t INT_TIMER1_CMN_MASK                      : 1;	/*      3     r/w   0*/
		uint8_t INT_TIMER2_CMN_MASK                      : 1;	/*      4     r/w   0*/
		uint8_t INT_TIMER3_CMN_MASK                      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_IRQ_MASK_t;
__xdata __at( 0xa258 ) volatile CMN_IRQ_MASK_t CMN_IRQ_MASK;
#define reg_INT_TIMER0_CMN_MASK  CMN_IRQ_MASK.BF.INT_TIMER0_CMN_MASK
#define reg_INT_TIMER1_CMN_MASK  CMN_IRQ_MASK.BF.INT_TIMER1_CMN_MASK
#define reg_INT_TIMER2_CMN_MASK  CMN_IRQ_MASK.BF.INT_TIMER2_CMN_MASK
#define reg_INT_TIMER3_CMN_MASK  CMN_IRQ_MASK.BF.INT_TIMER3_CMN_MASK

// 0x005c	CMN_IRQ_CLEAR		cmn irq clear
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t INT_TIMER0_CMN_ISR_CLEAR                 : 1;	/*      2     r/w   0*/
		uint8_t INT_TIMER1_CMN_ISR_CLEAR                 : 1;	/*      3     r/w   0*/
		uint8_t INT_TIMER2_CMN_ISR_CLEAR                 : 1;	/*      4     r/w   0*/
		uint8_t INT_TIMER3_CMN_ISR_CLEAR                 : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_IRQ_CLEAR_t;
__xdata __at( 0xa25c ) volatile CMN_IRQ_CLEAR_t CMN_IRQ_CLEAR;
#define reg_INT_TIMER0_CMN_ISR_CLEAR  CMN_IRQ_CLEAR.BF.INT_TIMER0_CMN_ISR_CLEAR
#define reg_INT_TIMER1_CMN_ISR_CLEAR  CMN_IRQ_CLEAR.BF.INT_TIMER1_CMN_ISR_CLEAR
#define reg_INT_TIMER2_CMN_ISR_CLEAR  CMN_IRQ_CLEAR.BF.INT_TIMER2_CMN_ISR_CLEAR
#define reg_INT_TIMER3_CMN_ISR_CLEAR  CMN_IRQ_CLEAR.BF.INT_TIMER3_CMN_ISR_CLEAR

// 0x0060	MCU_ADDR_REG		CMN MCU Address 
typedef union {
	struct {
		uint8_t MEMADDR_CMN_17_0_b0                      : 8;	/* [17:0]       r   0*/
		uint8_t MEMADDR_CMN_17_0_b1                      : 8;	/* [17:0]       r   0*/
		uint8_t MEMADDR_CMN_17_0_b2                      : 2;	/* [17:0]       r   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_ADDR_REG_t;
__xdata __at( 0xa260 ) volatile MCU_ADDR_REG_t MCU_ADDR_REG;
#define reg_MEMADDR_CMN_17_0_b0  MCU_ADDR_REG.BF.MEMADDR_CMN_17_0_b0
#define reg_MEMADDR_CMN_17_0_b1  MCU_ADDR_REG.BF.MEMADDR_CMN_17_0_b1
#define reg_MEMADDR_CMN_17_0_b2  MCU_ADDR_REG.BF.MEMADDR_CMN_17_0_b2

// 0x0064	CMN_MCU_INT_REG0		CMN MCU INT0 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT0_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT0_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT0_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT0_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT0_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT0_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT0_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT0_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT0_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT0_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT0_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT0_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG0_t;
__xdata __at( 0xa264 ) volatile CMN_MCU_INT_REG0_t CMN_MCU_INT_REG0;
#define reg_INT0_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG0.BF.INT0_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT0_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG0.BF.INT0_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT0_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG0.BF.INT0_INT_TIMER0_CMN_INT_EN
#define reg_INT0_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG0.BF.INT0_INT_TIMER1_CMN_INT_EN
#define reg_INT0_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG0.BF.INT0_INT_TIMER2_CMN_INT_EN
#define reg_INT0_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG0.BF.INT0_INT_TIMER3_CMN_INT_EN
#define reg_INT0_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG0.BF.INT0_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT0_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG0.BF.INT0_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT0_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG0.BF.INT0_REFCLK_DIS_LANE0_INT_EN
#define reg_INT0_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG0.BF.INT0_REFCLK_DIS_LANE1_INT_EN
#define reg_INT0_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG0.BF.INT0_REFCLK_DIS_LANE2_INT_EN
#define reg_INT0_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG0.BF.INT0_REFCLK_DIS_LANE3_INT_EN

// 0x0068	CMN_MCU_INT_REG1		CMN MCU INT1 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT1_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT1_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT1_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT1_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT1_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT1_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT1_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT1_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT1_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT1_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT1_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT1_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG1_t;
__xdata __at( 0xa268 ) volatile CMN_MCU_INT_REG1_t CMN_MCU_INT_REG1;
#define reg_INT1_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG1.BF.INT1_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT1_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG1.BF.INT1_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT1_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG1.BF.INT1_INT_TIMER0_CMN_INT_EN
#define reg_INT1_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG1.BF.INT1_INT_TIMER1_CMN_INT_EN
#define reg_INT1_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG1.BF.INT1_INT_TIMER2_CMN_INT_EN
#define reg_INT1_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG1.BF.INT1_INT_TIMER3_CMN_INT_EN
#define reg_INT1_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG1.BF.INT1_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT1_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG1.BF.INT1_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT1_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG1.BF.INT1_REFCLK_DIS_LANE0_INT_EN
#define reg_INT1_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG1.BF.INT1_REFCLK_DIS_LANE1_INT_EN
#define reg_INT1_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG1.BF.INT1_REFCLK_DIS_LANE2_INT_EN
#define reg_INT1_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG1.BF.INT1_REFCLK_DIS_LANE3_INT_EN

// 0x006c	CMN_MCU_INT_REG2		CMN MCU INT2 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT2_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT2_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT2_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT2_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT2_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT2_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT2_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT2_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT2_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT2_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT2_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT2_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG2_t;
__xdata __at( 0xa26c ) volatile CMN_MCU_INT_REG2_t CMN_MCU_INT_REG2;
#define reg_INT2_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG2.BF.INT2_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT2_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG2.BF.INT2_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT2_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG2.BF.INT2_INT_TIMER0_CMN_INT_EN
#define reg_INT2_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG2.BF.INT2_INT_TIMER1_CMN_INT_EN
#define reg_INT2_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG2.BF.INT2_INT_TIMER2_CMN_INT_EN
#define reg_INT2_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG2.BF.INT2_INT_TIMER3_CMN_INT_EN
#define reg_INT2_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG2.BF.INT2_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT2_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG2.BF.INT2_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT2_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG2.BF.INT2_REFCLK_DIS_LANE0_INT_EN
#define reg_INT2_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG2.BF.INT2_REFCLK_DIS_LANE1_INT_EN
#define reg_INT2_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG2.BF.INT2_REFCLK_DIS_LANE2_INT_EN
#define reg_INT2_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG2.BF.INT2_REFCLK_DIS_LANE3_INT_EN

// 0x0070	CMN_MCU_INT_REG3		CMN MCU INT3 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT3_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT3_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT3_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT3_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT3_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT3_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT3_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT3_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT3_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT3_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT3_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT3_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG3_t;
__xdata __at( 0xa270 ) volatile CMN_MCU_INT_REG3_t CMN_MCU_INT_REG3;
#define reg_INT3_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG3.BF.INT3_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT3_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG3.BF.INT3_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT3_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG3.BF.INT3_INT_TIMER0_CMN_INT_EN
#define reg_INT3_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG3.BF.INT3_INT_TIMER1_CMN_INT_EN
#define reg_INT3_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG3.BF.INT3_INT_TIMER2_CMN_INT_EN
#define reg_INT3_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG3.BF.INT3_INT_TIMER3_CMN_INT_EN
#define reg_INT3_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG3.BF.INT3_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT3_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG3.BF.INT3_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT3_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG3.BF.INT3_REFCLK_DIS_LANE0_INT_EN
#define reg_INT3_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG3.BF.INT3_REFCLK_DIS_LANE1_INT_EN
#define reg_INT3_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG3.BF.INT3_REFCLK_DIS_LANE2_INT_EN
#define reg_INT3_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG3.BF.INT3_REFCLK_DIS_LANE3_INT_EN

// 0x0074	CMN_MCU_INT_REG4		CMN MCU INT4 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT4_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT4_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT4_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT4_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT4_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT4_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT4_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT4_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT4_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT4_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT4_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT4_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG4_t;
__xdata __at( 0xa274 ) volatile CMN_MCU_INT_REG4_t CMN_MCU_INT_REG4;
#define reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG4.BF.INT4_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT4_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG4.BF.INT4_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT4_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG4.BF.INT4_INT_TIMER0_CMN_INT_EN
#define reg_INT4_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG4.BF.INT4_INT_TIMER1_CMN_INT_EN
#define reg_INT4_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG4.BF.INT4_INT_TIMER2_CMN_INT_EN
#define reg_INT4_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG4.BF.INT4_INT_TIMER3_CMN_INT_EN
#define reg_INT4_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG4.BF.INT4_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT4_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG4.BF.INT4_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT4_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG4.BF.INT4_REFCLK_DIS_LANE0_INT_EN
#define reg_INT4_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG4.BF.INT4_REFCLK_DIS_LANE1_INT_EN
#define reg_INT4_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG4.BF.INT4_REFCLK_DIS_LANE2_INT_EN
#define reg_INT4_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG4.BF.INT4_REFCLK_DIS_LANE3_INT_EN

// 0x0078	CMN_MCU_INT_REG5		CMN MCU INT5 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT5_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT5_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT5_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT5_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT5_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT5_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT5_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT5_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT5_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT5_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT5_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT5_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG5_t;
__xdata __at( 0xa278 ) volatile CMN_MCU_INT_REG5_t CMN_MCU_INT_REG5;
#define reg_INT5_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG5.BF.INT5_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT5_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG5.BF.INT5_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT5_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG5.BF.INT5_INT_TIMER0_CMN_INT_EN
#define reg_INT5_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG5.BF.INT5_INT_TIMER1_CMN_INT_EN
#define reg_INT5_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG5.BF.INT5_INT_TIMER2_CMN_INT_EN
#define reg_INT5_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG5.BF.INT5_INT_TIMER3_CMN_INT_EN
#define reg_INT5_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG5.BF.INT5_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT5_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG5.BF.INT5_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT5_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG5.BF.INT5_REFCLK_DIS_LANE0_INT_EN
#define reg_INT5_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG5.BF.INT5_REFCLK_DIS_LANE1_INT_EN
#define reg_INT5_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG5.BF.INT5_REFCLK_DIS_LANE2_INT_EN
#define reg_INT5_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG5.BF.INT5_REFCLK_DIS_LANE3_INT_EN

// 0x007c	CMN_MCU_INT_REG6		CMN MCU INT6 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT6_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT6_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT6_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT6_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT6_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT6_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT6_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT6_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT6_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT6_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT6_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT6_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG6_t;
__xdata __at( 0xa27c ) volatile CMN_MCU_INT_REG6_t CMN_MCU_INT_REG6;
#define reg_INT6_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG6.BF.INT6_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT6_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG6.BF.INT6_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT6_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG6.BF.INT6_INT_TIMER0_CMN_INT_EN
#define reg_INT6_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG6.BF.INT6_INT_TIMER1_CMN_INT_EN
#define reg_INT6_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG6.BF.INT6_INT_TIMER2_CMN_INT_EN
#define reg_INT6_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG6.BF.INT6_INT_TIMER3_CMN_INT_EN
#define reg_INT6_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG6.BF.INT6_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT6_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG6.BF.INT6_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT6_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG6.BF.INT6_REFCLK_DIS_LANE0_INT_EN
#define reg_INT6_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG6.BF.INT6_REFCLK_DIS_LANE1_INT_EN
#define reg_INT6_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG6.BF.INT6_REFCLK_DIS_LANE2_INT_EN
#define reg_INT6_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG6.BF.INT6_REFCLK_DIS_LANE3_INT_EN

// 0x0080	CMN_MCU_INT_REG7		CMN MCU INT7 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT7_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT7_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT7_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT7_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT7_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT7_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT7_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT7_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT7_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT7_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT7_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT7_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG7_t;
__xdata __at( 0xa280 ) volatile CMN_MCU_INT_REG7_t CMN_MCU_INT_REG7;
#define reg_INT7_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG7.BF.INT7_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT7_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG7.BF.INT7_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT7_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG7.BF.INT7_INT_TIMER0_CMN_INT_EN
#define reg_INT7_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG7.BF.INT7_INT_TIMER1_CMN_INT_EN
#define reg_INT7_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG7.BF.INT7_INT_TIMER2_CMN_INT_EN
#define reg_INT7_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG7.BF.INT7_INT_TIMER3_CMN_INT_EN
#define reg_INT7_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG7.BF.INT7_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT7_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG7.BF.INT7_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT7_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG7.BF.INT7_REFCLK_DIS_LANE0_INT_EN
#define reg_INT7_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG7.BF.INT7_REFCLK_DIS_LANE1_INT_EN
#define reg_INT7_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG7.BF.INT7_REFCLK_DIS_LANE2_INT_EN
#define reg_INT7_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG7.BF.INT7_REFCLK_DIS_LANE3_INT_EN

// 0x0084	CMN_MCU_INT_REG8		CMN MCU INT8 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT8_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT8_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT8_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT8_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT8_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT8_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT8_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT8_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT8_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT8_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT8_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT8_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG8_t;
__xdata __at( 0xa284 ) volatile CMN_MCU_INT_REG8_t CMN_MCU_INT_REG8;
#define reg_INT8_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG8.BF.INT8_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT8_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG8.BF.INT8_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT8_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG8.BF.INT8_INT_TIMER0_CMN_INT_EN
#define reg_INT8_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG8.BF.INT8_INT_TIMER1_CMN_INT_EN
#define reg_INT8_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG8.BF.INT8_INT_TIMER2_CMN_INT_EN
#define reg_INT8_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG8.BF.INT8_INT_TIMER3_CMN_INT_EN
#define reg_INT8_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG8.BF.INT8_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT8_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG8.BF.INT8_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT8_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG8.BF.INT8_REFCLK_DIS_LANE0_INT_EN
#define reg_INT8_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG8.BF.INT8_REFCLK_DIS_LANE1_INT_EN
#define reg_INT8_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG8.BF.INT8_REFCLK_DIS_LANE2_INT_EN
#define reg_INT8_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG8.BF.INT8_REFCLK_DIS_LANE3_INT_EN

// 0x0088	CMN_MCU_INT_REG9		CMN MCU INT9 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT9_PHY_MCU_REMOTE_REQ_INT_EN           : 1;	/*      4     r/w   0*/
		uint8_t INT9_PHY_MCU_REMOTE_ACK_INT_EN           : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT9_INT_TIMER0_CMN_INT_EN               : 1;	/*      8     r/w   0*/
		uint8_t INT9_INT_TIMER1_CMN_INT_EN               : 1;	/*      9     r/w   0*/
		uint8_t INT9_INT_TIMER2_CMN_INT_EN               : 1;	/*     10     r/w   0*/
		uint8_t INT9_INT_TIMER3_CMN_INT_EN               : 1;	/*     11     r/w   0*/
		uint8_t INT9_SFT_RST_CMN_CHG_FALLING_INT_EN      : 1;	/*     12     r/w   0*/
		uint8_t INT9_SFT_RST_CMN_CHG_RISING_INT_EN       : 1;	/*     13     r/w   0*/
		uint8_t INT9_REFCLK_DIS_LANE0_INT_EN             : 1;	/*     14     r/w   0*/
		uint8_t INT9_REFCLK_DIS_LANE1_INT_EN             : 1;	/*     15     r/w   0*/
		uint8_t INT9_REFCLK_DIS_LANE2_INT_EN             : 1;	/*     16     r/w   0*/
		uint8_t INT9_REFCLK_DIS_LANE3_INT_EN             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG9_t;
__xdata __at( 0xa288 ) volatile CMN_MCU_INT_REG9_t CMN_MCU_INT_REG9;
#define reg_INT9_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG9.BF.INT9_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT9_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG9.BF.INT9_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT9_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG9.BF.INT9_INT_TIMER0_CMN_INT_EN
#define reg_INT9_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG9.BF.INT9_INT_TIMER1_CMN_INT_EN
#define reg_INT9_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG9.BF.INT9_INT_TIMER2_CMN_INT_EN
#define reg_INT9_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG9.BF.INT9_INT_TIMER3_CMN_INT_EN
#define reg_INT9_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG9.BF.INT9_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT9_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG9.BF.INT9_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT9_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG9.BF.INT9_REFCLK_DIS_LANE0_INT_EN
#define reg_INT9_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG9.BF.INT9_REFCLK_DIS_LANE1_INT_EN
#define reg_INT9_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG9.BF.INT9_REFCLK_DIS_LANE2_INT_EN
#define reg_INT9_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG9.BF.INT9_REFCLK_DIS_LANE3_INT_EN

// 0x008c	CMN_MCU_INT_REG10		CMN MCU INT10 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT10_PHY_MCU_REMOTE_REQ_INT_EN          : 1;	/*      4     r/w   0*/
		uint8_t INT10_PHY_MCU_REMOTE_ACK_INT_EN          : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT10_INT_TIMER0_CMN_INT_EN              : 1;	/*      8     r/w   0*/
		uint8_t INT10_INT_TIMER1_CMN_INT_EN              : 1;	/*      9     r/w   0*/
		uint8_t INT10_INT_TIMER2_CMN_INT_EN              : 1;	/*     10     r/w   0*/
		uint8_t INT10_INT_TIMER3_CMN_INT_EN              : 1;	/*     11     r/w   0*/
		uint8_t INT10_SFT_RST_CMN_CHG_FALLING_INT_EN     : 1;	/*     12     r/w   0*/
		uint8_t INT10_SFT_RST_CMN_CHG_RISING_INT_EN      : 1;	/*     13     r/w   0*/
		uint8_t INT10_REFCLK_DIS_LANE0_INT_EN            : 1;	/*     14     r/w   0*/
		uint8_t INT10_REFCLK_DIS_LANE1_INT_EN            : 1;	/*     15     r/w   0*/
		uint8_t INT10_REFCLK_DIS_LANE2_INT_EN            : 1;	/*     16     r/w   0*/
		uint8_t INT10_REFCLK_DIS_LANE3_INT_EN            : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG10_t;
__xdata __at( 0xa28c ) volatile CMN_MCU_INT_REG10_t CMN_MCU_INT_REG10;
#define reg_INT10_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG10.BF.INT10_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT10_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG10.BF.INT10_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT10_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG10.BF.INT10_INT_TIMER0_CMN_INT_EN
#define reg_INT10_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG10.BF.INT10_INT_TIMER1_CMN_INT_EN
#define reg_INT10_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG10.BF.INT10_INT_TIMER2_CMN_INT_EN
#define reg_INT10_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG10.BF.INT10_INT_TIMER3_CMN_INT_EN
#define reg_INT10_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG10.BF.INT10_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT10_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG10.BF.INT10_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT10_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG10.BF.INT10_REFCLK_DIS_LANE0_INT_EN
#define reg_INT10_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG10.BF.INT10_REFCLK_DIS_LANE1_INT_EN
#define reg_INT10_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG10.BF.INT10_REFCLK_DIS_LANE2_INT_EN
#define reg_INT10_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG10.BF.INT10_REFCLK_DIS_LANE3_INT_EN

// 0x0090	CMN_MCU_INT_REG11		CMN MCU INT11 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT11_PHY_MCU_REMOTE_REQ_INT_EN          : 1;	/*      4     r/w   0*/
		uint8_t INT11_PHY_MCU_REMOTE_ACK_INT_EN          : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT11_INT_TIMER0_CMN_INT_EN              : 1;	/*      8     r/w   0*/
		uint8_t INT11_INT_TIMER1_CMN_INT_EN              : 1;	/*      9     r/w   0*/
		uint8_t INT11_INT_TIMER2_CMN_INT_EN              : 1;	/*     10     r/w   0*/
		uint8_t INT11_INT_TIMER3_CMN_INT_EN              : 1;	/*     11     r/w   0*/
		uint8_t INT11_SFT_RST_CMN_CHG_FALLING_INT_EN     : 1;	/*     12     r/w   0*/
		uint8_t INT11_SFT_RST_CMN_CHG_RISING_INT_EN      : 1;	/*     13     r/w   0*/
		uint8_t INT11_REFCLK_DIS_LANE0_INT_EN            : 1;	/*     14     r/w   0*/
		uint8_t INT11_REFCLK_DIS_LANE1_INT_EN            : 1;	/*     15     r/w   0*/
		uint8_t INT11_REFCLK_DIS_LANE2_INT_EN            : 1;	/*     16     r/w   0*/
		uint8_t INT11_REFCLK_DIS_LANE3_INT_EN            : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG11_t;
__xdata __at( 0xa290 ) volatile CMN_MCU_INT_REG11_t CMN_MCU_INT_REG11;
#define reg_INT11_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG11.BF.INT11_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT11_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG11.BF.INT11_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT11_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG11.BF.INT11_INT_TIMER0_CMN_INT_EN
#define reg_INT11_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG11.BF.INT11_INT_TIMER1_CMN_INT_EN
#define reg_INT11_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG11.BF.INT11_INT_TIMER2_CMN_INT_EN
#define reg_INT11_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG11.BF.INT11_INT_TIMER3_CMN_INT_EN
#define reg_INT11_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG11.BF.INT11_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT11_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG11.BF.INT11_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT11_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG11.BF.INT11_REFCLK_DIS_LANE0_INT_EN
#define reg_INT11_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG11.BF.INT11_REFCLK_DIS_LANE1_INT_EN
#define reg_INT11_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG11.BF.INT11_REFCLK_DIS_LANE2_INT_EN
#define reg_INT11_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG11.BF.INT11_REFCLK_DIS_LANE3_INT_EN

// 0x0094	CMN_MCU_INT_REG12		CMN MCU INT12 Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t INT12_PHY_MCU_REMOTE_REQ_INT_EN          : 1;	/*      4     r/w   0*/
		uint8_t INT12_PHY_MCU_REMOTE_ACK_INT_EN          : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t INT12_INT_TIMER0_CMN_INT_EN              : 1;	/*      8     r/w   0*/
		uint8_t INT12_INT_TIMER1_CMN_INT_EN              : 1;	/*      9     r/w   0*/
		uint8_t INT12_INT_TIMER2_CMN_INT_EN              : 1;	/*     10     r/w   0*/
		uint8_t INT12_INT_TIMER3_CMN_INT_EN              : 1;	/*     11     r/w   0*/
		uint8_t INT12_SFT_RST_CMN_CHG_FALLING_INT_EN     : 1;	/*     12     r/w   0*/
		uint8_t INT12_SFT_RST_CMN_CHG_RISING_INT_EN      : 1;	/*     13     r/w   0*/
		uint8_t INT12_REFCLK_DIS_LANE0_INT_EN            : 1;	/*     14     r/w   0*/
		uint8_t INT12_REFCLK_DIS_LANE1_INT_EN            : 1;	/*     15     r/w   0*/
		uint8_t INT12_REFCLK_DIS_LANE2_INT_EN            : 1;	/*     16     r/w   0*/
		uint8_t INT12_REFCLK_DIS_LANE3_INT_EN            : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_INT_REG12_t;
__xdata __at( 0xa294 ) volatile CMN_MCU_INT_REG12_t CMN_MCU_INT_REG12;
#define reg_INT12_PHY_MCU_REMOTE_REQ_INT_EN  CMN_MCU_INT_REG12.BF.INT12_PHY_MCU_REMOTE_REQ_INT_EN
#define reg_INT12_PHY_MCU_REMOTE_ACK_INT_EN  CMN_MCU_INT_REG12.BF.INT12_PHY_MCU_REMOTE_ACK_INT_EN
#define reg_INT12_INT_TIMER0_CMN_INT_EN  CMN_MCU_INT_REG12.BF.INT12_INT_TIMER0_CMN_INT_EN
#define reg_INT12_INT_TIMER1_CMN_INT_EN  CMN_MCU_INT_REG12.BF.INT12_INT_TIMER1_CMN_INT_EN
#define reg_INT12_INT_TIMER2_CMN_INT_EN  CMN_MCU_INT_REG12.BF.INT12_INT_TIMER2_CMN_INT_EN
#define reg_INT12_INT_TIMER3_CMN_INT_EN  CMN_MCU_INT_REG12.BF.INT12_INT_TIMER3_CMN_INT_EN
#define reg_INT12_SFT_RST_CMN_CHG_FALLING_INT_EN  CMN_MCU_INT_REG12.BF.INT12_SFT_RST_CMN_CHG_FALLING_INT_EN
#define reg_INT12_SFT_RST_CMN_CHG_RISING_INT_EN  CMN_MCU_INT_REG12.BF.INT12_SFT_RST_CMN_CHG_RISING_INT_EN
#define reg_INT12_REFCLK_DIS_LANE0_INT_EN  CMN_MCU_INT_REG12.BF.INT12_REFCLK_DIS_LANE0_INT_EN
#define reg_INT12_REFCLK_DIS_LANE1_INT_EN  CMN_MCU_INT_REG12.BF.INT12_REFCLK_DIS_LANE1_INT_EN
#define reg_INT12_REFCLK_DIS_LANE2_INT_EN  CMN_MCU_INT_REG12.BF.INT12_REFCLK_DIS_LANE2_INT_EN
#define reg_INT12_REFCLK_DIS_LANE3_INT_EN  CMN_MCU_INT_REG12.BF.INT12_REFCLK_DIS_LANE3_INT_EN

// 0x0098	CMN_MCU_STATUS_REG0		CMN MCU status register 0
typedef union {
	struct {
		uint8_t MCU_STATUS0_CMN_31_0_b0                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS0_CMN_31_0_b1                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS0_CMN_31_0_b2                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS0_CMN_31_0_b3                  : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_STATUS_REG0_t;
__xdata __at( 0xa298 ) volatile CMN_MCU_STATUS_REG0_t CMN_MCU_STATUS_REG0;
#define reg_MCU_STATUS0_CMN_31_0_b0  CMN_MCU_STATUS_REG0.BF.MCU_STATUS0_CMN_31_0_b0
#define reg_MCU_STATUS0_CMN_31_0_b1  CMN_MCU_STATUS_REG0.BF.MCU_STATUS0_CMN_31_0_b1
#define reg_MCU_STATUS0_CMN_31_0_b2  CMN_MCU_STATUS_REG0.BF.MCU_STATUS0_CMN_31_0_b2
#define reg_MCU_STATUS0_CMN_31_0_b3  CMN_MCU_STATUS_REG0.BF.MCU_STATUS0_CMN_31_0_b3

// 0x009c	CMN_MCU_STATUS_REG1		CMN MCU status register 1
typedef union {
	struct {
		uint8_t MCU_STATUS1_CMN_31_0_b0                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS1_CMN_31_0_b1                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS1_CMN_31_0_b2                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS1_CMN_31_0_b3                  : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_STATUS_REG1_t;
__xdata __at( 0xa29c ) volatile CMN_MCU_STATUS_REG1_t CMN_MCU_STATUS_REG1;
#define reg_MCU_STATUS1_CMN_31_0_b0  CMN_MCU_STATUS_REG1.BF.MCU_STATUS1_CMN_31_0_b0
#define reg_MCU_STATUS1_CMN_31_0_b1  CMN_MCU_STATUS_REG1.BF.MCU_STATUS1_CMN_31_0_b1
#define reg_MCU_STATUS1_CMN_31_0_b2  CMN_MCU_STATUS_REG1.BF.MCU_STATUS1_CMN_31_0_b2
#define reg_MCU_STATUS1_CMN_31_0_b3  CMN_MCU_STATUS_REG1.BF.MCU_STATUS1_CMN_31_0_b3

// 0x00a0	CMN_MCU_STATUS_REG2		CMN MCU status register 2
typedef union {
	struct {
		uint8_t MCU_STATUS2_CMN_31_0_b0                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS2_CMN_31_0_b1                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS2_CMN_31_0_b2                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS2_CMN_31_0_b3                  : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_STATUS_REG2_t;
__xdata __at( 0xa2a0 ) volatile CMN_MCU_STATUS_REG2_t CMN_MCU_STATUS_REG2;
#define reg_MCU_STATUS2_CMN_31_0_b0  CMN_MCU_STATUS_REG2.BF.MCU_STATUS2_CMN_31_0_b0
#define reg_MCU_STATUS2_CMN_31_0_b1  CMN_MCU_STATUS_REG2.BF.MCU_STATUS2_CMN_31_0_b1
#define reg_MCU_STATUS2_CMN_31_0_b2  CMN_MCU_STATUS_REG2.BF.MCU_STATUS2_CMN_31_0_b2
#define reg_MCU_STATUS2_CMN_31_0_b3  CMN_MCU_STATUS_REG2.BF.MCU_STATUS2_CMN_31_0_b3

// 0x00a4	CMN_MCU_STATUS_REG3		CMN MCU status register 3
typedef union {
	struct {
		uint8_t MCU_STATUS3_CMN_31_0_b0                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS3_CMN_31_0_b1                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS3_CMN_31_0_b2                  : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_STATUS3_CMN_31_0_b3                  : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_STATUS_REG3_t;
__xdata __at( 0xa2a4 ) volatile CMN_MCU_STATUS_REG3_t CMN_MCU_STATUS_REG3;
#define reg_MCU_STATUS3_CMN_31_0_b0  CMN_MCU_STATUS_REG3.BF.MCU_STATUS3_CMN_31_0_b0
#define reg_MCU_STATUS3_CMN_31_0_b1  CMN_MCU_STATUS_REG3.BF.MCU_STATUS3_CMN_31_0_b1
#define reg_MCU_STATUS3_CMN_31_0_b2  CMN_MCU_STATUS_REG3.BF.MCU_STATUS3_CMN_31_0_b2
#define reg_MCU_STATUS3_CMN_31_0_b3  CMN_MCU_STATUS_REG3.BF.MCU_STATUS3_CMN_31_0_b3

#endif
