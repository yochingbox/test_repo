#ifndef PHY_REG_C_AN_LANE_H
#define PHY_REG_C_AN_LANE_H



// 0x0000	AN_CONTROL0		Main Control Register
typedef union {
	struct {
		uint8_t AN_RX_CLK_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t AN_TX_CLK_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t AN_RST_LANE                              : 1;	/*      2     r/w   0*/
		uint8_t AN_NONCE_MATCH_DIS_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t AN_DET_CLK_TRAN_TIMER_LANE_2_0           : 3;	/*  [6:4]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t AN_DET_DAT_TRAN_TIMER_LANE_2_0           : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t AN_LINK_FAIL_INHIBIT_TIMER_LANE_1_0      : 2;	/*[13:12]     r/w   0*/
		uint8_t AN_LINK_FAIL_INHIBIT_TIMER_DIS_LANE      : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[26:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[26:15]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:15]     r/w   0*/
		uint8_t AN_INCOMPATIBLE_LINK_LANE                : 1;	/*     27     r/w   0*/
		uint8_t AN_LINK_STATUS_HCD_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t AN_AUTO_SPD_CHG_LANE                     : 1;	/*     29     r/w   0*/
		uint8_t AN_ENABLE_FM_REG_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t AN_ENABLE_LANE                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_CONTROL0_t;
__xdata __at( 0x2d00 ) volatile AN_CONTROL0_t AN_CONTROL0;
#define reg_AN_RX_CLK_EN_LANE  AN_CONTROL0.BF.AN_RX_CLK_EN_LANE
#define reg_AN_TX_CLK_EN_LANE  AN_CONTROL0.BF.AN_TX_CLK_EN_LANE
#define reg_AN_RST_LANE  AN_CONTROL0.BF.AN_RST_LANE
#define reg_AN_NONCE_MATCH_DIS_LANE  AN_CONTROL0.BF.AN_NONCE_MATCH_DIS_LANE
#define reg_AN_DET_CLK_TRAN_TIMER_LANE_2_0  AN_CONTROL0.BF.AN_DET_CLK_TRAN_TIMER_LANE_2_0
#define reg_AN_DET_DAT_TRAN_TIMER_LANE_2_0  AN_CONTROL0.BF.AN_DET_DAT_TRAN_TIMER_LANE_2_0
#define reg_AN_LINK_FAIL_INHIBIT_TIMER_LANE_1_0  AN_CONTROL0.BF.AN_LINK_FAIL_INHIBIT_TIMER_LANE_1_0
#define reg_AN_LINK_FAIL_INHIBIT_TIMER_DIS_LANE  AN_CONTROL0.BF.AN_LINK_FAIL_INHIBIT_TIMER_DIS_LANE
#define reg_AN_INCOMPATIBLE_LINK_LANE  AN_CONTROL0.BF.AN_INCOMPATIBLE_LINK_LANE
#define reg_AN_LINK_STATUS_HCD_LANE  AN_CONTROL0.BF.AN_LINK_STATUS_HCD_LANE
#define reg_AN_AUTO_SPD_CHG_LANE  AN_CONTROL0.BF.AN_AUTO_SPD_CHG_LANE
#define reg_AN_ENABLE_FM_REG_LANE  AN_CONTROL0.BF.AN_ENABLE_FM_REG_LANE
#define reg_AN_ENABLE_LANE  AN_CONTROL0.BF.AN_ENABLE_LANE

// 0x0004	AN_CONTROL1		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_BASE_PAGE_LANE_31_0_b0             : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_BASE_PAGE_LANE_31_0_b1             : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_BASE_PAGE_LANE_31_0_b2             : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_BASE_PAGE_LANE_31_0_b3             : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_CONTROL1_t;
__xdata __at( 0x2d04 ) volatile AN_CONTROL1_t AN_CONTROL1;
#define reg_AN_TX_BASE_PAGE_LANE_31_0_b0  AN_CONTROL1.BF.AN_TX_BASE_PAGE_LANE_31_0_b0
#define reg_AN_TX_BASE_PAGE_LANE_31_0_b1  AN_CONTROL1.BF.AN_TX_BASE_PAGE_LANE_31_0_b1
#define reg_AN_TX_BASE_PAGE_LANE_31_0_b2  AN_CONTROL1.BF.AN_TX_BASE_PAGE_LANE_31_0_b2
#define reg_AN_TX_BASE_PAGE_LANE_31_0_b3  AN_CONTROL1.BF.AN_TX_BASE_PAGE_LANE_31_0_b3

// 0x0008	AN_CONTROL2		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_BASE_PAGE_LANE_47_32_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_TX_BASE_PAGE_LANE_47_32_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_CONTROL2_t;
__xdata __at( 0x2d08 ) volatile AN_CONTROL2_t AN_CONTROL2;
#define reg_AN_TX_BASE_PAGE_LANE_47_32_b0  AN_CONTROL2.BF.AN_TX_BASE_PAGE_LANE_47_32_b0
#define reg_AN_TX_BASE_PAGE_LANE_47_32_b1  AN_CONTROL2.BF.AN_TX_BASE_PAGE_LANE_47_32_b1
#define reg_AN_TX_BASE_PAGE_LANE_47_32  AN_CONTROL2.WT.W0

// 0x000c	AN_CONTROL3		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_NEXT_PAGE0_LANE_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE0_LANE_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE0_LANE_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE0_LANE_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_CONTROL3_t;
__xdata __at( 0x2d0c ) volatile AN_CONTROL3_t AN_CONTROL3;
#define reg_AN_TX_NEXT_PAGE0_LANE_31_0_b0  AN_CONTROL3.BF.AN_TX_NEXT_PAGE0_LANE_31_0_b0
#define reg_AN_TX_NEXT_PAGE0_LANE_31_0_b1  AN_CONTROL3.BF.AN_TX_NEXT_PAGE0_LANE_31_0_b1
#define reg_AN_TX_NEXT_PAGE0_LANE_31_0_b2  AN_CONTROL3.BF.AN_TX_NEXT_PAGE0_LANE_31_0_b2
#define reg_AN_TX_NEXT_PAGE0_LANE_31_0_b3  AN_CONTROL3.BF.AN_TX_NEXT_PAGE0_LANE_31_0_b3

// 0x0010	AN_CONTROL4		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_NEXT_PAGE0_LANE_47_32_b0           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_TX_NEXT_PAGE0_LANE_47_32_b1           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_CONTROL4_t;
__xdata __at( 0x2d10 ) volatile AN_CONTROL4_t AN_CONTROL4;
#define reg_AN_TX_NEXT_PAGE0_LANE_47_32_b0  AN_CONTROL4.BF.AN_TX_NEXT_PAGE0_LANE_47_32_b0
#define reg_AN_TX_NEXT_PAGE0_LANE_47_32_b1  AN_CONTROL4.BF.AN_TX_NEXT_PAGE0_LANE_47_32_b1
#define reg_AN_TX_NEXT_PAGE0_LANE_47_32  AN_CONTROL4.WT.W0

// 0x0014	AN_CONTROL5		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_NEXT_PAGE1_LANE_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE1_LANE_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE1_LANE_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE1_LANE_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_CONTROL5_t;
__xdata __at( 0x2d14 ) volatile AN_CONTROL5_t AN_CONTROL5;
#define reg_AN_TX_NEXT_PAGE1_LANE_31_0_b0  AN_CONTROL5.BF.AN_TX_NEXT_PAGE1_LANE_31_0_b0
#define reg_AN_TX_NEXT_PAGE1_LANE_31_0_b1  AN_CONTROL5.BF.AN_TX_NEXT_PAGE1_LANE_31_0_b1
#define reg_AN_TX_NEXT_PAGE1_LANE_31_0_b2  AN_CONTROL5.BF.AN_TX_NEXT_PAGE1_LANE_31_0_b2
#define reg_AN_TX_NEXT_PAGE1_LANE_31_0_b3  AN_CONTROL5.BF.AN_TX_NEXT_PAGE1_LANE_31_0_b3

// 0x0018	AN_CONTROL6		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_NEXT_PAGE1_LANE_47_32_b0           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_TX_NEXT_PAGE1_LANE_47_32_b1           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_CONTROL6_t;
__xdata __at( 0x2d18 ) volatile AN_CONTROL6_t AN_CONTROL6;
#define reg_AN_TX_NEXT_PAGE1_LANE_47_32_b0  AN_CONTROL6.BF.AN_TX_NEXT_PAGE1_LANE_47_32_b0
#define reg_AN_TX_NEXT_PAGE1_LANE_47_32_b1  AN_CONTROL6.BF.AN_TX_NEXT_PAGE1_LANE_47_32_b1
#define reg_AN_TX_NEXT_PAGE1_LANE_47_32  AN_CONTROL6.WT.W0

// 0x001c	AN_CONTROL7		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_NEXT_PAGE2_LANE_31_0_b0            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE2_LANE_31_0_b1            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE2_LANE_31_0_b2            : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_TX_NEXT_PAGE2_LANE_31_0_b3            : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_CONTROL7_t;
__xdata __at( 0x2d1c ) volatile AN_CONTROL7_t AN_CONTROL7;
#define reg_AN_TX_NEXT_PAGE2_LANE_31_0_b0  AN_CONTROL7.BF.AN_TX_NEXT_PAGE2_LANE_31_0_b0
#define reg_AN_TX_NEXT_PAGE2_LANE_31_0_b1  AN_CONTROL7.BF.AN_TX_NEXT_PAGE2_LANE_31_0_b1
#define reg_AN_TX_NEXT_PAGE2_LANE_31_0_b2  AN_CONTROL7.BF.AN_TX_NEXT_PAGE2_LANE_31_0_b2
#define reg_AN_TX_NEXT_PAGE2_LANE_31_0_b3  AN_CONTROL7.BF.AN_TX_NEXT_PAGE2_LANE_31_0_b3

// 0x0020	AN_CONTROL8		Main Control Register
typedef union {
	struct {
		uint8_t AN_TX_NEXT_PAGE2_LANE_47_32_b0           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_TX_NEXT_PAGE2_LANE_47_32_b1           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_CONTROL8_t;
__xdata __at( 0x2d20 ) volatile AN_CONTROL8_t AN_CONTROL8;
#define reg_AN_TX_NEXT_PAGE2_LANE_47_32_b0  AN_CONTROL8.BF.AN_TX_NEXT_PAGE2_LANE_47_32_b0
#define reg_AN_TX_NEXT_PAGE2_LANE_47_32_b1  AN_CONTROL8.BF.AN_TX_NEXT_PAGE2_LANE_47_32_b1
#define reg_AN_TX_NEXT_PAGE2_LANE_47_32  AN_CONTROL8.WT.W0

// 0x0024	AN_RESULT0		Main Result Register
typedef union {
	struct {
		uint8_t AN_ENABLE_RD_LANE                        : 1;	/*      0       r   0*/
		uint8_t RESERVED_1                               : 7;	/* [21:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [21:1]     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/* [21:1]     r/w   0*/
		uint8_t AN_RECEIVE_IDLE_LANE                     : 1;	/*     22       r   0*/
		uint8_t AN_NONCE_MATCH_LANE                      : 1;	/*     23       r   0*/
		uint8_t AN_CONSISTENCY_MATCH_LANE                : 1;	/*     24       r   0*/
		uint8_t AN_ACKNOWLEDGE_MATCH_LANE                : 1;	/*     25       r   0*/
		uint8_t AN_ACK_NONCE_MATCH_LANE                  : 1;	/*     26       r   0*/
		uint8_t AN_ABILITY_MATCH_LANE                    : 1;	/*     27       r   0*/
		uint8_t AN_ERROR_LANE_1_0                        : 2;	/*[29:28]       r 2'h0*/
		uint8_t AN_FAIL_LANE                             : 1;	/*     30       r   0*/
		uint8_t AN_COMPLETE_LANE                         : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_RESULT0_t;
__xdata __at( 0x2d24 ) volatile AN_RESULT0_t AN_RESULT0;
#define reg_AN_ENABLE_RD_LANE  AN_RESULT0.BF.AN_ENABLE_RD_LANE
#define reg_AN_RECEIVE_IDLE_LANE  AN_RESULT0.BF.AN_RECEIVE_IDLE_LANE
#define reg_AN_NONCE_MATCH_LANE  AN_RESULT0.BF.AN_NONCE_MATCH_LANE
#define reg_AN_CONSISTENCY_MATCH_LANE  AN_RESULT0.BF.AN_CONSISTENCY_MATCH_LANE
#define reg_AN_ACKNOWLEDGE_MATCH_LANE  AN_RESULT0.BF.AN_ACKNOWLEDGE_MATCH_LANE
#define reg_AN_ACK_NONCE_MATCH_LANE  AN_RESULT0.BF.AN_ACK_NONCE_MATCH_LANE
#define reg_AN_ABILITY_MATCH_LANE  AN_RESULT0.BF.AN_ABILITY_MATCH_LANE
#define reg_AN_ERROR_LANE_1_0  AN_RESULT0.BF.AN_ERROR_LANE_1_0
#define reg_AN_FAIL_LANE  AN_RESULT0.BF.AN_FAIL_LANE
#define reg_AN_COMPLETE_LANE  AN_RESULT0.BF.AN_COMPLETE_LANE

// 0x0028	AN_RESULT1		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_BASE_PAGE_LANE_31_0_b0             : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_BASE_PAGE_LANE_31_0_b1             : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_BASE_PAGE_LANE_31_0_b2             : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_BASE_PAGE_LANE_31_0_b3             : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_RESULT1_t;
__xdata __at( 0x2d28 ) volatile AN_RESULT1_t AN_RESULT1;
#define reg_AN_RX_BASE_PAGE_LANE_31_0_b0  AN_RESULT1.BF.AN_RX_BASE_PAGE_LANE_31_0_b0
#define reg_AN_RX_BASE_PAGE_LANE_31_0_b1  AN_RESULT1.BF.AN_RX_BASE_PAGE_LANE_31_0_b1
#define reg_AN_RX_BASE_PAGE_LANE_31_0_b2  AN_RESULT1.BF.AN_RX_BASE_PAGE_LANE_31_0_b2
#define reg_AN_RX_BASE_PAGE_LANE_31_0_b3  AN_RESULT1.BF.AN_RX_BASE_PAGE_LANE_31_0_b3

// 0x002c	AN_RESULT2		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_BASE_PAGE_LANE_47_32_b0            : 8;	/* [15:0]       r 16'h0*/
		uint8_t AN_RX_BASE_PAGE_LANE_47_32_b1            : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_RESULT2_t;
__xdata __at( 0x2d2c ) volatile AN_RESULT2_t AN_RESULT2;
#define reg_AN_RX_BASE_PAGE_LANE_47_32_b0  AN_RESULT2.BF.AN_RX_BASE_PAGE_LANE_47_32_b0
#define reg_AN_RX_BASE_PAGE_LANE_47_32_b1  AN_RESULT2.BF.AN_RX_BASE_PAGE_LANE_47_32_b1
#define reg_AN_RX_BASE_PAGE_LANE_47_32  AN_RESULT2.WT.W0

// 0x0030	AN_RESULT3		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_NEXT_PAGE0_LANE_31_0_b0            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE0_LANE_31_0_b1            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE0_LANE_31_0_b2            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE0_LANE_31_0_b3            : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_RESULT3_t;
__xdata __at( 0x2d30 ) volatile AN_RESULT3_t AN_RESULT3;
#define reg_AN_RX_NEXT_PAGE0_LANE_31_0_b0  AN_RESULT3.BF.AN_RX_NEXT_PAGE0_LANE_31_0_b0
#define reg_AN_RX_NEXT_PAGE0_LANE_31_0_b1  AN_RESULT3.BF.AN_RX_NEXT_PAGE0_LANE_31_0_b1
#define reg_AN_RX_NEXT_PAGE0_LANE_31_0_b2  AN_RESULT3.BF.AN_RX_NEXT_PAGE0_LANE_31_0_b2
#define reg_AN_RX_NEXT_PAGE0_LANE_31_0_b3  AN_RESULT3.BF.AN_RX_NEXT_PAGE0_LANE_31_0_b3

// 0x0034	AN_RESULT4		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_NEXT_PAGE0_LANE_47_32_b0           : 8;	/* [15:0]       r 16'h0*/
		uint8_t AN_RX_NEXT_PAGE0_LANE_47_32_b1           : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_RESULT4_t;
__xdata __at( 0x2d34 ) volatile AN_RESULT4_t AN_RESULT4;
#define reg_AN_RX_NEXT_PAGE0_LANE_47_32_b0  AN_RESULT4.BF.AN_RX_NEXT_PAGE0_LANE_47_32_b0
#define reg_AN_RX_NEXT_PAGE0_LANE_47_32_b1  AN_RESULT4.BF.AN_RX_NEXT_PAGE0_LANE_47_32_b1
#define reg_AN_RX_NEXT_PAGE0_LANE_47_32  AN_RESULT4.WT.W0

// 0x0038	AN_RESULT5		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_NEXT_PAGE1_LANE_31_0_b0            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE1_LANE_31_0_b1            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE1_LANE_31_0_b2            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE1_LANE_31_0_b3            : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_RESULT5_t;
__xdata __at( 0x2d38 ) volatile AN_RESULT5_t AN_RESULT5;
#define reg_AN_RX_NEXT_PAGE1_LANE_31_0_b0  AN_RESULT5.BF.AN_RX_NEXT_PAGE1_LANE_31_0_b0
#define reg_AN_RX_NEXT_PAGE1_LANE_31_0_b1  AN_RESULT5.BF.AN_RX_NEXT_PAGE1_LANE_31_0_b1
#define reg_AN_RX_NEXT_PAGE1_LANE_31_0_b2  AN_RESULT5.BF.AN_RX_NEXT_PAGE1_LANE_31_0_b2
#define reg_AN_RX_NEXT_PAGE1_LANE_31_0_b3  AN_RESULT5.BF.AN_RX_NEXT_PAGE1_LANE_31_0_b3

// 0x003c	AN_RESULT6		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_NEXT_PAGE1_LANE_47_32_b0           : 8;	/* [15:0]       r 16'h0*/
		uint8_t AN_RX_NEXT_PAGE1_LANE_47_32_b1           : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_RESULT6_t;
__xdata __at( 0x2d3c ) volatile AN_RESULT6_t AN_RESULT6;
#define reg_AN_RX_NEXT_PAGE1_LANE_47_32_b0  AN_RESULT6.BF.AN_RX_NEXT_PAGE1_LANE_47_32_b0
#define reg_AN_RX_NEXT_PAGE1_LANE_47_32_b1  AN_RESULT6.BF.AN_RX_NEXT_PAGE1_LANE_47_32_b1
#define reg_AN_RX_NEXT_PAGE1_LANE_47_32  AN_RESULT6.WT.W0

// 0x0040	AN_RESULT7		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_NEXT_PAGE2_LANE_31_0_b0            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE2_LANE_31_0_b1            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE2_LANE_31_0_b2            : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_NEXT_PAGE2_LANE_31_0_b3            : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_RESULT7_t;
__xdata __at( 0x2d40 ) volatile AN_RESULT7_t AN_RESULT7;
#define reg_AN_RX_NEXT_PAGE2_LANE_31_0_b0  AN_RESULT7.BF.AN_RX_NEXT_PAGE2_LANE_31_0_b0
#define reg_AN_RX_NEXT_PAGE2_LANE_31_0_b1  AN_RESULT7.BF.AN_RX_NEXT_PAGE2_LANE_31_0_b1
#define reg_AN_RX_NEXT_PAGE2_LANE_31_0_b2  AN_RESULT7.BF.AN_RX_NEXT_PAGE2_LANE_31_0_b2
#define reg_AN_RX_NEXT_PAGE2_LANE_31_0_b3  AN_RESULT7.BF.AN_RX_NEXT_PAGE2_LANE_31_0_b3

// 0x0044	AN_RESULT8		Main Result Register
typedef union {
	struct {
		uint8_t AN_RX_NEXT_PAGE2_LANE_47_32_b0           : 8;	/* [15:0]       r 16'h0*/
		uint8_t AN_RX_NEXT_PAGE2_LANE_47_32_b1           : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_RESULT8_t;
__xdata __at( 0x2d44 ) volatile AN_RESULT8_t AN_RESULT8;
#define reg_AN_RX_NEXT_PAGE2_LANE_47_32_b0  AN_RESULT8.BF.AN_RX_NEXT_PAGE2_LANE_47_32_b0
#define reg_AN_RX_NEXT_PAGE2_LANE_47_32_b1  AN_RESULT8.BF.AN_RX_NEXT_PAGE2_LANE_47_32_b1
#define reg_AN_RX_NEXT_PAGE2_LANE_47_32  AN_RESULT8.WT.W0

// 0x0048	AN_EXT_CONTROL0		External Control Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [17:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [17:0]     r/w   0*/
		uint8_t RESERVED_16                              : 2;	/* [17:0]     r/w   0*/
		uint8_t AN_EXT_TX_NONCE_FREEZE_LANE              : 1;	/*     18     r/w   0*/
		uint8_t AN_EXT_TRANSMIT_DISABLE_LANE             : 1;	/*     19     r/w   0*/
		uint8_t AN_EXT_CLEAR_NONCE_MATCH_LANE            : 1;	/*     20     r/w   0*/
		uint8_t AN_EXT_CLEAR_ACK_MATCH_LANE              : 1;	/*     21     r/w   0*/
		uint8_t AN_EXT_CLEAR_ABILITY_MATCH_LANE          : 1;	/*     22     r/w   0*/
		uint8_t AN_EXT_RX_PAGE_RD_REQ_LANE               : 1;	/*     23     r/w   0*/
		uint8_t AN_EXT_PAGE_SEL_LANE_1_0                 : 2;	/*[25:24]     r/w   0*/
		uint8_t AN_EXT_LOAD_PAGE_LANE                    : 1;	/*     26     r/w   0*/
		uint8_t AN_EXT_ERROR_LANE_1_0                    : 2;	/*[28:27]     r/w   0*/
		uint8_t AN_EXT_FAIL_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t AN_EXT_COMPLETE_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t AN_EXT_CTRL_EN_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_EXT_CONTROL0_t;
__xdata __at( 0x2d48 ) volatile AN_EXT_CONTROL0_t AN_EXT_CONTROL0;
#define reg_AN_EXT_TX_NONCE_FREEZE_LANE  AN_EXT_CONTROL0.BF.AN_EXT_TX_NONCE_FREEZE_LANE
#define reg_AN_EXT_TRANSMIT_DISABLE_LANE  AN_EXT_CONTROL0.BF.AN_EXT_TRANSMIT_DISABLE_LANE
#define reg_AN_EXT_CLEAR_NONCE_MATCH_LANE  AN_EXT_CONTROL0.BF.AN_EXT_CLEAR_NONCE_MATCH_LANE
#define reg_AN_EXT_CLEAR_ACK_MATCH_LANE  AN_EXT_CONTROL0.BF.AN_EXT_CLEAR_ACK_MATCH_LANE
#define reg_AN_EXT_CLEAR_ABILITY_MATCH_LANE  AN_EXT_CONTROL0.BF.AN_EXT_CLEAR_ABILITY_MATCH_LANE
#define reg_AN_EXT_RX_PAGE_RD_REQ_LANE  AN_EXT_CONTROL0.BF.AN_EXT_RX_PAGE_RD_REQ_LANE
#define reg_AN_EXT_PAGE_SEL_LANE_1_0  AN_EXT_CONTROL0.BF.AN_EXT_PAGE_SEL_LANE_1_0
#define reg_AN_EXT_LOAD_PAGE_LANE  AN_EXT_CONTROL0.BF.AN_EXT_LOAD_PAGE_LANE
#define reg_AN_EXT_ERROR_LANE_1_0  AN_EXT_CONTROL0.BF.AN_EXT_ERROR_LANE_1_0
#define reg_AN_EXT_FAIL_LANE  AN_EXT_CONTROL0.BF.AN_EXT_FAIL_LANE
#define reg_AN_EXT_COMPLETE_LANE  AN_EXT_CONTROL0.BF.AN_EXT_COMPLETE_LANE
#define reg_AN_EXT_CTRL_EN_LANE  AN_EXT_CONTROL0.BF.AN_EXT_CTRL_EN_LANE

// 0x004c	AN_EXT_CONTROL1		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_BASE_PAGE_LANE_31_0_b0         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_BASE_PAGE_LANE_31_0_b1         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_BASE_PAGE_LANE_31_0_b2         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_BASE_PAGE_LANE_31_0_b3         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_EXT_CONTROL1_t;
__xdata __at( 0x2d4c ) volatile AN_EXT_CONTROL1_t AN_EXT_CONTROL1;
#define reg_AN_EXT_RX_BASE_PAGE_LANE_31_0_b0  AN_EXT_CONTROL1.BF.AN_EXT_RX_BASE_PAGE_LANE_31_0_b0
#define reg_AN_EXT_RX_BASE_PAGE_LANE_31_0_b1  AN_EXT_CONTROL1.BF.AN_EXT_RX_BASE_PAGE_LANE_31_0_b1
#define reg_AN_EXT_RX_BASE_PAGE_LANE_31_0_b2  AN_EXT_CONTROL1.BF.AN_EXT_RX_BASE_PAGE_LANE_31_0_b2
#define reg_AN_EXT_RX_BASE_PAGE_LANE_31_0_b3  AN_EXT_CONTROL1.BF.AN_EXT_RX_BASE_PAGE_LANE_31_0_b3

// 0x0050	AN_EXT_CONTROL2		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_BASE_PAGE_LANE_47_32_b0        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_EXT_RX_BASE_PAGE_LANE_47_32_b1        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_EXT_CONTROL2_t;
__xdata __at( 0x2d50 ) volatile AN_EXT_CONTROL2_t AN_EXT_CONTROL2;
#define reg_AN_EXT_RX_BASE_PAGE_LANE_47_32_b0  AN_EXT_CONTROL2.BF.AN_EXT_RX_BASE_PAGE_LANE_47_32_b0
#define reg_AN_EXT_RX_BASE_PAGE_LANE_47_32_b1  AN_EXT_CONTROL2.BF.AN_EXT_RX_BASE_PAGE_LANE_47_32_b1
#define reg_AN_EXT_RX_BASE_PAGE_LANE_47_32  AN_EXT_CONTROL2.WT.W0

// 0x0054	AN_EXT_CONTROL3		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_EXT_CONTROL3_t;
__xdata __at( 0x2d54 ) volatile AN_EXT_CONTROL3_t AN_EXT_CONTROL3;
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b0  AN_EXT_CONTROL3.BF.AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b0
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b1  AN_EXT_CONTROL3.BF.AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b1
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b2  AN_EXT_CONTROL3.BF.AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b2
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b3  AN_EXT_CONTROL3.BF.AN_EXT_RX_NEXT_PAGE0_LANE_31_0_b3

// 0x0058	AN_EXT_CONTROL4		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_NEXT_PAGE0_LANE_47_32_b0       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE0_LANE_47_32_b1       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_EXT_CONTROL4_t;
__xdata __at( 0x2d58 ) volatile AN_EXT_CONTROL4_t AN_EXT_CONTROL4;
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_47_32_b0  AN_EXT_CONTROL4.BF.AN_EXT_RX_NEXT_PAGE0_LANE_47_32_b0
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_47_32_b1  AN_EXT_CONTROL4.BF.AN_EXT_RX_NEXT_PAGE0_LANE_47_32_b1
#define reg_AN_EXT_RX_NEXT_PAGE0_LANE_47_32  AN_EXT_CONTROL4.WT.W0

// 0x005c	AN_EXT_CONTROL5		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_EXT_CONTROL5_t;
__xdata __at( 0x2d5c ) volatile AN_EXT_CONTROL5_t AN_EXT_CONTROL5;
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b0  AN_EXT_CONTROL5.BF.AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b0
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b1  AN_EXT_CONTROL5.BF.AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b1
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b2  AN_EXT_CONTROL5.BF.AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b2
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b3  AN_EXT_CONTROL5.BF.AN_EXT_RX_NEXT_PAGE1_LANE_31_0_b3

// 0x0060	AN_EXT_CONTROL6		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_NEXT_PAGE1_LANE_47_32_b0       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE1_LANE_47_32_b1       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_EXT_CONTROL6_t;
__xdata __at( 0x2d60 ) volatile AN_EXT_CONTROL6_t AN_EXT_CONTROL6;
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_47_32_b0  AN_EXT_CONTROL6.BF.AN_EXT_RX_NEXT_PAGE1_LANE_47_32_b0
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_47_32_b1  AN_EXT_CONTROL6.BF.AN_EXT_RX_NEXT_PAGE1_LANE_47_32_b1
#define reg_AN_EXT_RX_NEXT_PAGE1_LANE_47_32  AN_EXT_CONTROL6.WT.W0

// 0x0064	AN_EXT_CONTROL7		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b0        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b1        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b2        : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b3        : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_EXT_CONTROL7_t;
__xdata __at( 0x2d64 ) volatile AN_EXT_CONTROL7_t AN_EXT_CONTROL7;
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b0  AN_EXT_CONTROL7.BF.AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b0
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b1  AN_EXT_CONTROL7.BF.AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b1
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b2  AN_EXT_CONTROL7.BF.AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b2
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b3  AN_EXT_CONTROL7.BF.AN_EXT_RX_NEXT_PAGE2_LANE_31_0_b3

// 0x0068	AN_EXT_CONTROL8		External Control Register
typedef union {
	struct {
		uint8_t AN_EXT_RX_NEXT_PAGE2_LANE_47_32_b0       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t AN_EXT_RX_NEXT_PAGE2_LANE_47_32_b1       : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_EXT_CONTROL8_t;
__xdata __at( 0x2d68 ) volatile AN_EXT_CONTROL8_t AN_EXT_CONTROL8;
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_47_32_b0  AN_EXT_CONTROL8.BF.AN_EXT_RX_NEXT_PAGE2_LANE_47_32_b0
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_47_32_b1  AN_EXT_CONTROL8.BF.AN_EXT_RX_NEXT_PAGE2_LANE_47_32_b1
#define reg_AN_EXT_RX_NEXT_PAGE2_LANE_47_32  AN_EXT_CONTROL8.WT.W0

// 0x006c	AN_EXT_CONTROL9		External Control Register
typedef union {
	struct {
		uint8_t AN_RX_PAGE_LANE_31_0_b0                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_PAGE_LANE_31_0_b1                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_PAGE_LANE_31_0_b2                  : 8;	/* [31:0]       r 32'h0*/
		uint8_t AN_RX_PAGE_LANE_31_0_b3                  : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_EXT_CONTROL9_t;
__xdata __at( 0x2d6c ) volatile AN_EXT_CONTROL9_t AN_EXT_CONTROL9;
#define reg_AN_RX_PAGE_LANE_31_0_b0  AN_EXT_CONTROL9.BF.AN_RX_PAGE_LANE_31_0_b0
#define reg_AN_RX_PAGE_LANE_31_0_b1  AN_EXT_CONTROL9.BF.AN_RX_PAGE_LANE_31_0_b1
#define reg_AN_RX_PAGE_LANE_31_0_b2  AN_EXT_CONTROL9.BF.AN_RX_PAGE_LANE_31_0_b2
#define reg_AN_RX_PAGE_LANE_31_0_b3  AN_EXT_CONTROL9.BF.AN_RX_PAGE_LANE_31_0_b3

// 0x0070	AN_EXT_CONTROL10		External Control Register
typedef union {
	struct {
		uint8_t AN_RX_PAGE_LANE_47_32_b0                 : 8;	/* [15:0]       r 16'h0*/
		uint8_t AN_RX_PAGE_LANE_47_32_b1                 : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AN_EXT_CONTROL10_t;
__xdata __at( 0x2d70 ) volatile AN_EXT_CONTROL10_t AN_EXT_CONTROL10;
#define reg_AN_RX_PAGE_LANE_47_32_b0  AN_EXT_CONTROL10.BF.AN_RX_PAGE_LANE_47_32_b0
#define reg_AN_RX_PAGE_LANE_47_32_b1  AN_EXT_CONTROL10.BF.AN_RX_PAGE_LANE_47_32_b1
#define reg_AN_RX_PAGE_LANE_47_32  AN_EXT_CONTROL10.WT.W0

// 0x0074	AN_INTERRUPT_ISR		Interrupt Register ISR
typedef union {
	struct {
		uint8_t AN_EN_ISR_LANE                           : 1;	/*      0     r/w   0*/
		uint8_t AN_SPD_CHG_ISR_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t AN_RECEIVE_IDLE_ISR_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_INTERRUPT_ISR_t;
__xdata __at( 0x2d74 ) volatile AN_INTERRUPT_ISR_t AN_INTERRUPT_ISR;
#define reg_AN_EN_ISR_LANE  AN_INTERRUPT_ISR.BF.AN_EN_ISR_LANE
#define reg_AN_SPD_CHG_ISR_LANE  AN_INTERRUPT_ISR.BF.AN_SPD_CHG_ISR_LANE
#define reg_AN_RECEIVE_IDLE_ISR_LANE  AN_INTERRUPT_ISR.BF.AN_RECEIVE_IDLE_ISR_LANE

// 0x0078	AN_INTERRUPT_MASK		Interrupt Register Mask
typedef union {
	struct {
		uint8_t AN_EN_MASK_LANE                          : 1;	/*      0     r/w   0*/
		uint8_t AN_SPD_CHG_MASK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t AN_RECEIVE_IDLE_MASK_LANE                : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_INTERRUPT_MASK_t;
__xdata __at( 0x2d78 ) volatile AN_INTERRUPT_MASK_t AN_INTERRUPT_MASK;
#define reg_AN_EN_MASK_LANE  AN_INTERRUPT_MASK.BF.AN_EN_MASK_LANE
#define reg_AN_SPD_CHG_MASK_LANE  AN_INTERRUPT_MASK.BF.AN_SPD_CHG_MASK_LANE
#define reg_AN_RECEIVE_IDLE_MASK_LANE  AN_INTERRUPT_MASK.BF.AN_RECEIVE_IDLE_MASK_LANE

// 0x007c	AN_INTERRUPT_CLEAR		Interrupt Register Clear
typedef union {
	struct {
		uint8_t AN_EN_ISR_CLEAR_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t AN_SPD_CHG_ISR_CLEAR_LANE                : 1;	/*      1     r/w   0*/
		uint8_t AN_RECEIVE_IDLE_ISR_CLEAR_LANE           : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AN_INTERRUPT_CLEAR_t;
__xdata __at( 0x2d7c ) volatile AN_INTERRUPT_CLEAR_t AN_INTERRUPT_CLEAR;
#define reg_AN_EN_ISR_CLEAR_LANE  AN_INTERRUPT_CLEAR.BF.AN_EN_ISR_CLEAR_LANE
#define reg_AN_SPD_CHG_ISR_CLEAR_LANE  AN_INTERRUPT_CLEAR.BF.AN_SPD_CHG_ISR_CLEAR_LANE
#define reg_AN_RECEIVE_IDLE_ISR_CLEAR_LANE  AN_INTERRUPT_CLEAR.BF.AN_RECEIVE_IDLE_ISR_CLEAR_LANE

#endif
