#ifndef PHY_REG_C_TX_IF_LANE_H
#define PHY_REG_C_TX_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_TX_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t PIN_PU_TX_RD_LANE                        : 1;	/*      7       r   0*/
		uint8_t PIN_PU_PLL_RD_LANE                       : 1;	/*      8       r   0*/
		uint8_t PIN_PHY_GEN_TX_RD_LANE_5_0               : 6;	/* [14:9]       r   0*/
		uint8_t PIN_UART_RX_RD_LANE                      : 1;	/*     15       r   0*/
		uint8_t PIN_GPI_RD_LANE_7_0                      : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:24]     r/w   0*/
		uint8_t PIN_COUPLE_MODE_EN_RD_LANE               : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG0_t;
__xdata __at( 0x5500 ) volatile INPUT_PIN_DEBUG_TX_REG0_t INPUT_PIN_DEBUG_TX_REG0;
#define reg_PIN_PU_TX_RD_LANE  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_PU_TX_RD_LANE
#define reg_PIN_PU_PLL_RD_LANE  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_PU_PLL_RD_LANE
#define reg_PIN_PHY_GEN_TX_RD_LANE_5_0  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_PHY_GEN_TX_RD_LANE_5_0
#define reg_PIN_UART_RX_RD_LANE  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_UART_RX_RD_LANE
#define reg_PIN_GPI_RD_LANE_7_0  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_GPI_RD_LANE_7_0
#define reg_PIN_COUPLE_MODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_COUPLE_MODE_EN_RD_LANE

// 0x0004	INPUT_PIN_DEBUG_TX_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:0]     r/w   0*/
		uint8_t PIN_REPEAT_TX_CLKFREQ_RATIO_RD_LANE_2_0  : 3;	/*[13:11]       r   0*/
		uint8_t PIN_REPEAT_MODE_EN_RD_LANE               : 1;	/*     14       r   0*/
		uint8_t PIN_REPEAT_CLK_IN_RD_LANE                : 1;	/*     15       r   0*/
		uint8_t PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0    : 8;	/*[31:16]       r   0*/
		uint8_t PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1    : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG1_t;
__xdata __at( 0x5504 ) volatile INPUT_PIN_DEBUG_TX_REG1_t INPUT_PIN_DEBUG_TX_REG1;
#define reg_PIN_REPEAT_TX_CLKFREQ_RATIO_RD_LANE_2_0  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_REPEAT_TX_CLKFREQ_RATIO_RD_LANE_2_0
#define reg_PIN_REPEAT_MODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_REPEAT_MODE_EN_RD_LANE
#define reg_PIN_REPEAT_CLK_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_REPEAT_CLK_IN_RD_LANE
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG1.WT.W1

// 0x0008	INPUT_PIN_DEBUG_TX_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t PIN_SNRZ_TXD_RD_LANE_79_48_b0            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_79_48_b1            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_79_48_b2            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_79_48_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG2_t;
__xdata __at( 0x5508 ) volatile INPUT_PIN_DEBUG_TX_REG2_t INPUT_PIN_DEBUG_TX_REG2;
#define reg_PIN_SNRZ_TXD_RD_LANE_79_48_b0  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_SNRZ_TXD_RD_LANE_79_48_b0
#define reg_PIN_SNRZ_TXD_RD_LANE_79_48_b1  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_SNRZ_TXD_RD_LANE_79_48_b1
#define reg_PIN_SNRZ_TXD_RD_LANE_79_48_b2  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_SNRZ_TXD_RD_LANE_79_48_b2
#define reg_PIN_SNRZ_TXD_RD_LANE_79_48_b3  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_SNRZ_TXD_RD_LANE_79_48_b3

// 0x000c	INPUT_PIN_DEBUG_TX_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t PIN_SNRZ_TXD_RD_LANE_47_16_b0            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_47_16_b1            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_47_16_b2            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_47_16_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG3_t;
__xdata __at( 0x550c ) volatile INPUT_PIN_DEBUG_TX_REG3_t INPUT_PIN_DEBUG_TX_REG3;
#define reg_PIN_SNRZ_TXD_RD_LANE_47_16_b0  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_SNRZ_TXD_RD_LANE_47_16_b0
#define reg_PIN_SNRZ_TXD_RD_LANE_47_16_b1  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_SNRZ_TXD_RD_LANE_47_16_b1
#define reg_PIN_SNRZ_TXD_RD_LANE_47_16_b2  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_SNRZ_TXD_RD_LANE_47_16_b2
#define reg_PIN_SNRZ_TXD_RD_LANE_47_16_b3  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_SNRZ_TXD_RD_LANE_47_16_b3

// 0x0010	INPUT_PIN_DEBUG_TX_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [14:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:0]     r/w   0*/
		uint8_t PIN_SSC_EN_RD_LANE                       : 1;	/*     15       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_15_0_b0             : 8;	/*[31:16]       r   0*/
		uint8_t PIN_SNRZ_TXD_RD_LANE_15_0_b1             : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG4_t;
__xdata __at( 0x5510 ) volatile INPUT_PIN_DEBUG_TX_REG4_t INPUT_PIN_DEBUG_TX_REG4;
#define reg_PIN_SSC_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_SSC_EN_RD_LANE
#define reg_PIN_SNRZ_TXD_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_SNRZ_TXD_RD_LANE_15_0_b0
#define reg_PIN_SNRZ_TXD_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_SNRZ_TXD_RD_LANE_15_0_b1
#define reg_PIN_SNRZ_TXD_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG4.WT.W1

// 0x0014	INPUT_PIN_DEBUG_TX_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_79_48_b0              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_79_48_b1              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_79_48_b2              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_79_48_b3              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG5_t;
__xdata __at( 0x5514 ) volatile INPUT_PIN_DEBUG_TX_REG5_t INPUT_PIN_DEBUG_TX_REG5;
#define reg_PIN_TXDATA_RD_LANE_79_48_b0  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_79_48_b0
#define reg_PIN_TXDATA_RD_LANE_79_48_b1  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_79_48_b1
#define reg_PIN_TXDATA_RD_LANE_79_48_b2  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_79_48_b2
#define reg_PIN_TXDATA_RD_LANE_79_48_b3  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_79_48_b3

// 0x0018	INPUT_PIN_DEBUG_TX_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_47_16_b0              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_47_16_b1              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_47_16_b2              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_47_16_b3              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG6_t;
__xdata __at( 0x5518 ) volatile INPUT_PIN_DEBUG_TX_REG6_t INPUT_PIN_DEBUG_TX_REG6;
#define reg_PIN_TXDATA_RD_LANE_47_16_b0  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_47_16_b0
#define reg_PIN_TXDATA_RD_LANE_47_16_b1  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_47_16_b1
#define reg_PIN_TXDATA_RD_LANE_47_16_b2  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_47_16_b2
#define reg_PIN_TXDATA_RD_LANE_47_16_b3  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_47_16_b3

// 0x001c	INPUT_PIN_DEBUG_TX_REG7		PHY Isolation Debug Register7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PIN_RESET_CORE_TX_RD_LANE                : 1;	/*      1       r   0*/
		uint8_t PIN_TXDCLK_2X_SEL_RD_LANE                : 1;	/*      2       r   0*/
		uint8_t PIN_TXDCLK_4X_EN_RD_LANE                 : 1;	/*      3       r   0*/
		uint8_t PIN_TXDCLK_NT_EN_RD_LANE                 : 1;	/*      4       r   0*/
		uint8_t PIN_TXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*  [7:5]       r   0*/
		uint8_t PIN_TXCLK_SYNC_START_IN_RD_LANE          : 1;	/*      8       r   0*/
		uint8_t PIN_TXCLK_SYNC_EN_PLL_IN_RD_LANE         : 1;	/*      9       r   0*/
		uint8_t PIN_TXCLK_SYNC_EN_IN_RD_LANE             : 1;	/*     10       r   0*/
		uint8_t PIN_TX_TRAIN_POLY_SEL_RD_LANE_1_0        : 2;	/*[12:11]       r   0*/
		uint8_t PIN_TX_IDLE_RD_LANE                      : 1;	/*     13       r   0*/
		uint8_t PIN_TX_ACJTAG_IN_RD_LANE                 : 1;	/*     14       r   0*/
		uint8_t PIN_TX_ACJTAG_EN_RD_LANE                 : 1;	/*     15       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_15_0_b0               : 8;	/*[31:16]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_15_0_b1               : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG7_t;
__xdata __at( 0x551c ) volatile INPUT_PIN_DEBUG_TX_REG7_t INPUT_PIN_DEBUG_TX_REG7;
#define reg_PIN_RESET_CORE_TX_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_RESET_CORE_TX_RD_LANE
#define reg_PIN_TXDCLK_2X_SEL_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDCLK_2X_SEL_RD_LANE
#define reg_PIN_TXDCLK_4X_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDCLK_4X_EN_RD_LANE
#define reg_PIN_TXDCLK_NT_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDCLK_NT_EN_RD_LANE
#define reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_TXCLK_SYNC_START_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXCLK_SYNC_START_IN_RD_LANE
#define reg_PIN_TXCLK_SYNC_EN_PLL_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXCLK_SYNC_EN_PLL_IN_RD_LANE
#define reg_PIN_TXCLK_SYNC_EN_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXCLK_SYNC_EN_IN_RD_LANE
#define reg_PIN_TX_TRAIN_POLY_SEL_RD_LANE_1_0  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TX_TRAIN_POLY_SEL_RD_LANE_1_0
#define reg_PIN_TX_IDLE_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TX_IDLE_RD_LANE
#define reg_PIN_TX_ACJTAG_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TX_ACJTAG_IN_RD_LANE
#define reg_PIN_TX_ACJTAG_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TX_ACJTAG_EN_RD_LANE
#define reg_PIN_TXDATA_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDATA_RD_LANE_15_0_b0
#define reg_PIN_TXDATA_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDATA_RD_LANE_15_0_b1
#define reg_PIN_TXDATA_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG7.WT.W1

// 0x0020	INPUT_PIN_DEBUG_TX_REG8		PHY Isolation Debug Register8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [23:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [23:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:0]     r/w   0*/
		uint8_t PIN_TXDATA_PRE_CODE_EN_RD_LANE           : 1;	/*     24       r   0*/
		uint8_t PIN_TXDATA_GRAY_CODE_EN_RD_LANE          : 1;	/*     25       r   0*/
		uint8_t PIN_REFCLK_SEL_TX_RD_LANE                : 1;	/*     26       r   0*/
		uint8_t PIN_REF_FREF_SEL_TX_RD_LANE_4_0          : 5;	/*[31:27]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG8_t;
__xdata __at( 0x5520 ) volatile INPUT_PIN_DEBUG_TX_REG8_t INPUT_PIN_DEBUG_TX_REG8;
#define reg_PIN_TXDATA_PRE_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_TXDATA_PRE_CODE_EN_RD_LANE
#define reg_PIN_TXDATA_GRAY_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_TXDATA_GRAY_CODE_EN_RD_LANE
#define reg_PIN_REFCLK_SEL_TX_RD_LANE  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_REFCLK_SEL_TX_RD_LANE
#define reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_REF_FREF_SEL_TX_RD_LANE_4_0

// 0x0024	INPUT_PIN_DEBUG_TX_REG9		PHY Isolation Debug Register9
typedef union {
	struct {
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b0    : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b1    : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b2    : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b3    : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG9_t;
__xdata __at( 0x5524 ) volatile INPUT_PIN_DEBUG_TX_REG9_t INPUT_PIN_DEBUG_TX_REG9;
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b0  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b0
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b1  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b1
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b2  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b2
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b3  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_0_b3

// 0x0028	INPUT_PIN_DEBUG_TX_REG10		PHY Isolation Debug Register10
typedef union {
	struct {
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b0   : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b1   : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b2   : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b3   : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG10_t;
__xdata __at( 0x5528 ) volatile INPUT_PIN_DEBUG_TX_REG10_t INPUT_PIN_DEBUG_TX_REG10;
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b0  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b0
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b1  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b1
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b2  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b2
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b3  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_47_16_b3

// 0x002c	INPUT_PIN_DEBUG_TX_REG11		PHY Isolation Debug Register11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t COUPLE_MODE_EN_FM_REG_LANE               : 1;	/*      7     r/w   0*/
		uint8_t COUPLE_MODE_EN_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t PIN_RESET_DTX_IN_RD_LANE                 : 1;	/*      9       r   0*/
		uint8_t PIN_LANE_ALIGN_READY_IN_RD_LANE          : 1;	/*     10       r   0*/
		uint8_t PIN_STRX_TRAIN_EN_IN_RD_LANE             : 1;	/*     11       r   0*/
		uint8_t PIN_STRX_TRAIN_PAT_EN_IN_RD_LANE         : 1;	/*     12       r   0*/
		uint8_t PIN_STRX_TRAIN_PAT_CODE_SEL_IN_RD_LANE_1_0 : 2;	/*[14:13]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_VALID_IN_RD_LANE      : 1;	/*     15       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0_b0    : 8;	/*[31:16]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0_b1    : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG11_t;
__xdata __at( 0x552c ) volatile INPUT_PIN_DEBUG_TX_REG11_t INPUT_PIN_DEBUG_TX_REG11;
#define reg_COUPLE_MODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.COUPLE_MODE_EN_FM_REG_LANE
#define reg_COUPLE_MODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.COUPLE_MODE_EN_LANE
#define reg_PIN_RESET_DTX_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_RESET_DTX_IN_RD_LANE
#define reg_PIN_LANE_ALIGN_READY_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_LANE_ALIGN_READY_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_EN_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_STRX_TRAIN_EN_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_PAT_EN_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_STRX_TRAIN_PAT_EN_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_PAT_CODE_SEL_IN_RD_LANE_1_0  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_STRX_TRAIN_PAT_CODE_SEL_IN_RD_LANE_1_0
#define reg_PIN_STRX_TRAIN_COE_VALID_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_STRX_TRAIN_COE_VALID_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0_b0
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG11.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0_b1
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG11.WT.W1

// 0x0030	INPUT_PIN_DEBUG_TX_REG12		PHY Isolation Debug Register12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [11:0]     r/w   0*/
		uint8_t RESERVED_8                               : 4;	/* [11:0]     r/w   0*/
		uint8_t PU_TX_FM_REG_LANE                        : 1;	/*     12     r/w   0*/
		uint8_t PU_TX_LANE                               : 1;	/*     13     r/w   0*/
		uint8_t PU_PLL_FM_REG_LANE                       : 1;	/*     14     r/w   0*/
		uint8_t PU_PLL_LANE                              : 1;	/*     15     r/w   0*/
		uint8_t PHY_GEN_TX_FM_REG_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t PHY_GEN_TX_LANE_5_0                      : 6;	/*[22:17]     r/w   0*/
		uint8_t GPI_FM_REG_LANE                          : 1;	/*     23     r/w   0*/
		uint8_t GPI_LANE_7_0                             : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG12_t;
__xdata __at( 0x5530 ) volatile INPUT_PIN_DEBUG_TX_REG12_t INPUT_PIN_DEBUG_TX_REG12;
#define reg_PU_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.PU_TX_FM_REG_LANE
#define reg_PU_TX_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.PU_TX_LANE
#define reg_PU_PLL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.PU_PLL_FM_REG_LANE
#define reg_PU_PLL_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.PU_PLL_LANE
#define reg_PHY_GEN_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.PHY_GEN_TX_FM_REG_LANE
#define reg_PHY_GEN_TX_LANE_5_0  INPUT_PIN_DEBUG_TX_REG12.BF.PHY_GEN_TX_LANE_5_0
#define reg_GPI_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.GPI_FM_REG_LANE
#define reg_GPI_LANE_7_0  INPUT_PIN_DEBUG_TX_REG12.BF.GPI_LANE_7_0

// 0x0034	INPUT_PIN_DEBUG_TX_REG13		PHY Isolation Debug Register13
typedef union {
	struct {
		uint8_t TXDCLK_4X_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t TXDCLK_NT_EN_FM_REG_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t TXDCLK_NT_EN_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t TXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*      3     r/w   0*/
		uint8_t TXDCLK_NT_SEL_LANE_2_0                   : 3;	/*  [6:4]     r/w   0*/
		uint8_t TX_ACJTAG_IN_FM_REG_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t TX_ACJTAG_IN_LANE                        : 1;	/*      8     r/w   0*/
		uint8_t TX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      9     r/w   0*/
		uint8_t TX_ACJTAG_EN_LANE                        : 1;	/*     10     r/w   0*/
		uint8_t SSC_EN_FM_REG_LANE                       : 1;	/*     11     r/w   0*/
		uint8_t SSC_EN_LANE                              : 1;	/*     12     r/w   0*/
		uint8_t REPEAT_MODE_EN_FM_REG_LANE               : 1;	/*     13     r/w   0*/
		uint8_t REPEAT_MODE_EN_LANE                      : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG13_t;
__xdata __at( 0x5534 ) volatile INPUT_PIN_DEBUG_TX_REG13_t INPUT_PIN_DEBUG_TX_REG13;
#define reg_TXDCLK_4X_EN_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TXDCLK_4X_EN_LANE
#define reg_TXDCLK_NT_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TXDCLK_NT_EN_FM_REG_LANE
#define reg_TXDCLK_NT_EN_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TXDCLK_NT_EN_LANE
#define reg_TXDCLK_NT_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TXDCLK_NT_SEL_FM_REG_LANE
#define reg_TXDCLK_NT_SEL_LANE_2_0  INPUT_PIN_DEBUG_TX_REG13.BF.TXDCLK_NT_SEL_LANE_2_0
#define reg_TX_ACJTAG_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TX_ACJTAG_IN_FM_REG_LANE
#define reg_TX_ACJTAG_IN_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TX_ACJTAG_IN_LANE
#define reg_TX_ACJTAG_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TX_ACJTAG_EN_FM_REG_LANE
#define reg_TX_ACJTAG_EN_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.TX_ACJTAG_EN_LANE
#define reg_SSC_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.SSC_EN_FM_REG_LANE
#define reg_SSC_EN_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.SSC_EN_LANE
#define reg_REPEAT_MODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.REPEAT_MODE_EN_FM_REG_LANE
#define reg_REPEAT_MODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG13.BF.REPEAT_MODE_EN_LANE

// 0x0038	INPUT_PIN_DEBUG_TX_REG14		PHY Isolation Debug Register14
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t DPHY_ANA_POWER_STATE_VALID_RD_LANE       : 1;	/*      8       r   0*/
		uint8_t DPHY_ANA_POWER_STATE_P2_RD_LANE          : 1;	/*      9       r   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_RD_LANE            : 1;	/*     10       r   0*/
		uint8_t DPHY_ANA_REFCLK_DIS_RD_LANE              : 1;	/*     11       r   0*/
		uint8_t TXDATA_PRE_CODE_EN_FM_REG_LANE           : 1;	/*     12     r/w   0*/
		uint8_t TXDATA_PRE_CODE_EN_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t TXDATA_GRAY_CODE_EN_FM_REG_LANE          : 1;	/*     14     r/w   0*/
		uint8_t TXDATA_GRAY_CODE_EN_LANE                 : 1;	/*     15     r/w   0*/
		uint8_t REFCLK_SEL_TX_FM_REG_LANE                : 1;	/*     16     r/w   0*/
		uint8_t REFCLK_SEL_TX_LANE                       : 1;	/*     17     r/w   0*/
		uint8_t REF_FREF_SEL_TX_FM_REG_LANE              : 1;	/*     18     r/w   0*/
		uint8_t REF_FREF_SEL_TX_LANE_4_0                 : 5;	/*[23:19]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:24]     r/w   0*/
		uint8_t RESET_CORE_TX_FM_REG_LANE                : 1;	/*     27     r/w   0*/
		uint8_t RESET_CORE_TX_LANE                       : 1;	/*     28     r/w   0*/
		uint8_t TXDCLK_2X_SEL_FM_REG_LANE                : 1;	/*     29     r/w   0*/
		uint8_t TXDCLK_2X_SEL_LANE                       : 1;	/*     30     r/w   0*/
		uint8_t TXDCLK_4X_EN_FM_REG_LANE                 : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG14_t;
__xdata __at( 0x5538 ) volatile INPUT_PIN_DEBUG_TX_REG14_t INPUT_PIN_DEBUG_TX_REG14;
#define reg_DPHY_ANA_POWER_STATE_VALID_RD_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.DPHY_ANA_POWER_STATE_VALID_RD_LANE
#define reg_DPHY_ANA_POWER_STATE_P2_RD_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.DPHY_ANA_POWER_STATE_P2_RD_LANE
#define reg_DPHY_ANA_LANE_DISABLE_RD_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.DPHY_ANA_LANE_DISABLE_RD_LANE
#define reg_DPHY_ANA_REFCLK_DIS_RD_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.DPHY_ANA_REFCLK_DIS_RD_LANE
#define reg_TXDATA_PRE_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDATA_PRE_CODE_EN_FM_REG_LANE
#define reg_TXDATA_PRE_CODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDATA_PRE_CODE_EN_LANE
#define reg_TXDATA_GRAY_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDATA_GRAY_CODE_EN_FM_REG_LANE
#define reg_TXDATA_GRAY_CODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDATA_GRAY_CODE_EN_LANE
#define reg_REFCLK_SEL_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.REFCLK_SEL_TX_FM_REG_LANE
#define reg_REFCLK_SEL_TX_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.REFCLK_SEL_TX_LANE
#define reg_REF_FREF_SEL_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.REF_FREF_SEL_TX_FM_REG_LANE
#define reg_REF_FREF_SEL_TX_LANE_4_0  INPUT_PIN_DEBUG_TX_REG14.BF.REF_FREF_SEL_TX_LANE_4_0
#define reg_RESET_CORE_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.RESET_CORE_TX_FM_REG_LANE
#define reg_RESET_CORE_TX_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.RESET_CORE_TX_LANE
#define reg_TXDCLK_2X_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDCLK_2X_SEL_FM_REG_LANE
#define reg_TXDCLK_2X_SEL_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDCLK_2X_SEL_LANE
#define reg_TXDCLK_4X_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.TXDCLK_4X_EN_FM_REG_LANE

// 0x003c	INPUT_PIN_DEBUG_TX_REG15		PHY Isolation Debug Register15
typedef union {
	struct {
		uint8_t DPHY_ANA_TX_SWING_RD_LANE                : 1;	/*      0       r   0*/
		uint8_t DPHY_ANA_TX_MARGIN_RD_LANE_2_0           : 3;	/*  [3:1]       r   0*/
		uint8_t DPHY_ANA_TX_IDLE_HIZ_RD_LANE             : 1;	/*      4       r   0*/
		uint8_t DPHY_ANA_TX_DEEMPH_RD_LANE_1_0           : 2;	/*  [6:5]       r   0*/
		uint8_t DPHY_ANA_TX_COEFF_VALID_RD_LANE          : 1;	/*      7       r   0*/
		uint8_t DPHY_ANA_TX_COEFF_RD_LANE_17_0_b0        : 8;	/* [25:8]       r   0*/
		uint8_t DPHY_ANA_TX_COEFF_RD_LANE_17_0_b1        : 8;	/* [25:8]       r   0*/
		uint8_t DPHY_ANA_TX_COEFF_RD_LANE_17_0_b2        : 2;	/* [25:8]       r   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG15_t;
__xdata __at( 0x553c ) volatile INPUT_PIN_DEBUG_TX_REG15_t INPUT_PIN_DEBUG_TX_REG15;
#define reg_DPHY_ANA_TX_SWING_RD_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_SWING_RD_LANE
#define reg_DPHY_ANA_TX_MARGIN_RD_LANE_2_0  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_MARGIN_RD_LANE_2_0
#define reg_DPHY_ANA_TX_IDLE_HIZ_RD_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_IDLE_HIZ_RD_LANE
#define reg_DPHY_ANA_TX_DEEMPH_RD_LANE_1_0  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_DEEMPH_RD_LANE_1_0
#define reg_DPHY_ANA_TX_COEFF_VALID_RD_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_COEFF_VALID_RD_LANE
#define reg_DPHY_ANA_TX_COEFF_RD_LANE_17_0_b0  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_COEFF_RD_LANE_17_0_b0
#define reg_DPHY_ANA_TX_COEFF_RD_LANE_17_0_b1  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_COEFF_RD_LANE_17_0_b1
#define reg_DPHY_ANA_TX_COEFF_RD_LANE_17_0_b2  INPUT_PIN_DEBUG_TX_REG15.BF.DPHY_ANA_TX_COEFF_RD_LANE_17_0_b2

// 0x0040	INPUT_PIN_DEBUG_TX_REG16		PHY Isolation Debug Register16
typedef union {
	struct {
		uint8_t TX_COEFF_LANE_17_0_b0                    : 8;	/* [17:0]     r/w   0*/
		uint8_t TX_COEFF_LANE_17_0_b1                    : 8;	/* [17:0]     r/w   0*/
		uint8_t TX_COEFF_LANE_17_0_b2                    : 2;	/* [17:0]     r/w   0*/
		uint8_t RESERVED_18                              : 4;	/*[21:18]     r/w   0*/
		uint8_t POWER_STATE_VALID_FM_REG_LANE            : 1;	/*     22     r/w   0*/
		uint8_t POWER_STATE_VALID_LANE                   : 1;	/*     23     r/w   0*/
		uint8_t POWER_STATE_P2_FM_REG_LANE               : 1;	/*     24     r/w   0*/
		uint8_t POWER_STATE_P2_LANE                      : 1;	/*     25     r/w   0*/
		uint8_t LANE_DISABLE_FM_REG_LANE                 : 1;	/*     26     r/w   0*/
		uint8_t LANE_DISABLE_LANE                        : 1;	/*     27     r/w   0*/
		uint8_t REFCLK_DIS_FM_REG_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t REFCLK_DIS_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t DPHY_ANA_TXDETRX_EN_RD_LANE              : 1;	/*     30       r   0*/
		uint8_t DPHY_ANA_TX_VCMHOLD_EN_RD_LANE           : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG16_t;
__xdata __at( 0x5540 ) volatile INPUT_PIN_DEBUG_TX_REG16_t INPUT_PIN_DEBUG_TX_REG16;
#define reg_TX_COEFF_LANE_17_0_b0  INPUT_PIN_DEBUG_TX_REG16.BF.TX_COEFF_LANE_17_0_b0
#define reg_TX_COEFF_LANE_17_0_b1  INPUT_PIN_DEBUG_TX_REG16.BF.TX_COEFF_LANE_17_0_b1
#define reg_TX_COEFF_LANE_17_0_b2  INPUT_PIN_DEBUG_TX_REG16.BF.TX_COEFF_LANE_17_0_b2
#define reg_POWER_STATE_VALID_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.POWER_STATE_VALID_FM_REG_LANE
#define reg_POWER_STATE_VALID_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.POWER_STATE_VALID_LANE
#define reg_POWER_STATE_P2_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.POWER_STATE_P2_FM_REG_LANE
#define reg_POWER_STATE_P2_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.POWER_STATE_P2_LANE
#define reg_LANE_DISABLE_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.LANE_DISABLE_FM_REG_LANE
#define reg_LANE_DISABLE_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.LANE_DISABLE_LANE
#define reg_REFCLK_DIS_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.REFCLK_DIS_FM_REG_LANE
#define reg_REFCLK_DIS_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.REFCLK_DIS_LANE
#define reg_DPHY_ANA_TXDETRX_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.DPHY_ANA_TXDETRX_EN_RD_LANE
#define reg_DPHY_ANA_TX_VCMHOLD_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.DPHY_ANA_TX_VCMHOLD_EN_RD_LANE

// 0x0044	INPUT_PIN_DEBUG_TX_REG17		PHY Isolation Debug Register17
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [13:0]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:0]     r/w   0*/
		uint8_t TXDETRX_EN_FM_REG_LANE                   : 1;	/*     14     r/w   0*/
		uint8_t TXDETRX_EN_LANE                          : 1;	/*     15     r/w   0*/
		uint8_t TX_VCMHOLD_EN_FM_REG_LANE                : 1;	/*     16     r/w   0*/
		uint8_t TX_VCMHOLD_EN_LANE                       : 1;	/*     17     r/w   0*/
		uint8_t TX_SWING_FM_REG_LANE                     : 1;	/*     18     r/w   0*/
		uint8_t TX_SWING_LANE                            : 1;	/*     19     r/w   0*/
		uint8_t TX_MARGIN_FM_REG_LANE                    : 1;	/*     20     r/w   0*/
		uint8_t TX_MARGIN_LANE_2_0                       : 3;	/*[23:21]     r/w   0*/
		uint8_t TX_IDLE_HIZ_FM_REG_LANE                  : 1;	/*     24     r/w   0*/
		uint8_t TX_IDLE_HIZ_LANE                         : 1;	/*     25     r/w   0*/
		uint8_t TX_DEEMPH_FM_REG_LANE                    : 1;	/*     26     r/w   0*/
		uint8_t TX_DEEMPH_LANE_1_0                       : 2;	/*[28:27]     r/w   0*/
		uint8_t TX_COEFF_VALID_FM_REG_LANE               : 1;	/*     29     r/w   0*/
		uint8_t TX_COEFF_VALID_LANE                      : 1;	/*     30     r/w   0*/
		uint8_t TX_COEFF_FM_REG_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG17_t;
__xdata __at( 0x5544 ) volatile INPUT_PIN_DEBUG_TX_REG17_t INPUT_PIN_DEBUG_TX_REG17;
#define reg_TXDETRX_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TXDETRX_EN_FM_REG_LANE
#define reg_TXDETRX_EN_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TXDETRX_EN_LANE
#define reg_TX_VCMHOLD_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_VCMHOLD_EN_FM_REG_LANE
#define reg_TX_VCMHOLD_EN_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_VCMHOLD_EN_LANE
#define reg_TX_SWING_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_SWING_FM_REG_LANE
#define reg_TX_SWING_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_SWING_LANE
#define reg_TX_MARGIN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_MARGIN_FM_REG_LANE
#define reg_TX_MARGIN_LANE_2_0  INPUT_PIN_DEBUG_TX_REG17.BF.TX_MARGIN_LANE_2_0
#define reg_TX_IDLE_HIZ_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_IDLE_HIZ_FM_REG_LANE
#define reg_TX_IDLE_HIZ_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_IDLE_HIZ_LANE
#define reg_TX_DEEMPH_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_DEEMPH_FM_REG_LANE
#define reg_TX_DEEMPH_LANE_1_0  INPUT_PIN_DEBUG_TX_REG17.BF.TX_DEEMPH_LANE_1_0
#define reg_TX_COEFF_VALID_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_COEFF_VALID_FM_REG_LANE
#define reg_TX_COEFF_VALID_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_COEFF_VALID_LANE
#define reg_TX_COEFF_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.TX_COEFF_FM_REG_LANE

// 0x0048	INPUT_PIN_DEBUG_TX_REG18		PHY Isolation Debug Register18
typedef union {
	struct {
		uint8_t ANA_TX_FIR_MON_VAL_RD_LANE_15_0_b0       : 8;	/* [15:0]       r   0*/
		uint8_t ANA_TX_FIR_MON_VAL_RD_LANE_15_0_b1       : 8;	/* [15:0]       r   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0      : 8;	/*[31:16]       r   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1      : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG18_t;
__xdata __at( 0x5548 ) volatile INPUT_PIN_DEBUG_TX_REG18_t INPUT_PIN_DEBUG_TX_REG18;
#define reg_ANA_TX_FIR_MON_VAL_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG18.BF.ANA_TX_FIR_MON_VAL_RD_LANE_15_0_b0
#define reg_ANA_TX_FIR_MON_VAL_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG18.BF.ANA_TX_FIR_MON_VAL_RD_LANE_15_0_b1
#define reg_ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG18.BF.ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG18.BF.ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1
#define reg_ANA_TX_FIR_MON_VAL_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG18.WT.W0
#define reg_ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG18.WT.W1

// 0x004c	INPUT_PIN_DEBUG_TX_REG19		PHY Isolation Debug Register19
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_FM_REG_LANE          : 1;	/*      7     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0         : 8;	/* [23:8]     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1         : 8;	/* [23:8]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:24]     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S3_RD_LANE            : 1;	/*     27       r   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S2_RD_LANE            : 1;	/*     28       r   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S1_RD_LANE            : 1;	/*     29       r   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_IN_DIG_RD_LANE        : 1;	/*     30       r   0*/
		uint8_t ANA_TX_TXDETRX_OUT_RD_LANE               : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG19_t;
__xdata __at( 0x554c ) volatile INPUT_PIN_DEBUG_TX_REG19_t INPUT_PIN_DEBUG_TX_REG19;
#define reg_ANA_TX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1
#define reg_ANA_TX_TXCLK_ALIGN_S3_RD_LANE  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_TXCLK_ALIGN_S3_RD_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_RD_LANE  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_TXCLK_ALIGN_S2_RD_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_RD_LANE  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_TXCLK_ALIGN_S1_RD_LANE
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_RD_LANE  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_RD_LANE
#define reg_ANA_TX_TXDETRX_OUT_RD_LANE  INPUT_PIN_DEBUG_TX_REG19.BF.ANA_TX_TXDETRX_OUT_RD_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0  INPUT_PIN_DEBUG_TX_REG19.WT.W1

// 0x0050	INPUT_PIN_DEBUG_TX_REG20		PHY Isolation Debug Register20
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE        : 1;	/*      5     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S3_LANE               : 1;	/*      6     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE        : 1;	/*      7     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S2_LANE               : 1;	/*      8     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE        : 1;	/*      9     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S1_LANE               : 1;	/*     10     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE    : 1;	/*     11     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_IN_DIG_LANE           : 1;	/*     12     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_FM_REG_LANE           : 1;	/*     13     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_LANE                  : 1;	/*     14     r/w   0*/
		uint8_t ANA_TX_FIR_MON_VAL_FM_REG_LANE           : 1;	/*     15     r/w   0*/
		uint8_t ANA_TX_FIR_MON_VAL_LANE_15_0_b0          : 8;	/*[31:16]     r/w   0*/
		uint8_t ANA_TX_FIR_MON_VAL_LANE_15_0_b1          : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG20_t;
__xdata __at( 0x5550 ) volatile INPUT_PIN_DEBUG_TX_REG20_t INPUT_PIN_DEBUG_TX_REG20;
#define reg_ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S3_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_S3_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_S2_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_S1_LANE
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_LANE
#define reg_ANA_TX_TXDETRX_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXDETRX_OUT_FM_REG_LANE
#define reg_ANA_TX_TXDETRX_OUT_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_TXDETRX_OUT_LANE
#define reg_ANA_TX_FIR_MON_VAL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_FIR_MON_VAL_FM_REG_LANE
#define reg_ANA_TX_FIR_MON_VAL_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_FIR_MON_VAL_LANE_15_0_b0
#define reg_ANA_TX_FIR_MON_VAL_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG20.BF.ANA_TX_FIR_MON_VAL_LANE_15_0_b1
#define reg_ANA_TX_FIR_MON_VAL_LANE_15_0  INPUT_PIN_DEBUG_TX_REG20.WT.W1

#endif
