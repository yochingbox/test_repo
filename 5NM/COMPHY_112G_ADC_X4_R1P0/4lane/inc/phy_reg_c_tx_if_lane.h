#ifndef PHY_REG_C_TX_IF_LANE_H
#define PHY_REG_C_TX_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_TX_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t PIN_PU_TX_RD_LANE                        : 1;	/*      0       r   0*/
		uint8_t PIN_PU_PLL_RD_LANE                       : 1;	/*      1       r   0*/
		uint8_t PIN_PHY_GEN_MAX_TX_RD_LANE_5_0           : 6;	/*  [7:2]       r   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
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
#define reg_PIN_PHY_GEN_MAX_TX_RD_LANE_5_0  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_PHY_GEN_MAX_TX_RD_LANE_5_0
#define reg_PIN_PHY_GEN_TX_RD_LANE_5_0  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_PHY_GEN_TX_RD_LANE_5_0
#define reg_PIN_UART_RX_RD_LANE  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_UART_RX_RD_LANE
#define reg_PIN_GPI_RD_LANE_7_0  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_GPI_RD_LANE_7_0
#define reg_PIN_COUPLE_MODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG0.BF.PIN_COUPLE_MODE_EN_RD_LANE

// 0x0004	INPUT_PIN_DEBUG_TX_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_159_152               : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:8]     r/w   0*/
		uint8_t PIN_SSC_EN_RD_LANE                       : 1;	/*     13       r   0*/
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
#define reg_PIN_TXDATA_RD_LANE_159_152  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_TXDATA_RD_LANE_159_152
#define reg_PIN_SSC_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_SSC_EN_RD_LANE
#define reg_PIN_REPEAT_MODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_REPEAT_MODE_EN_RD_LANE
#define reg_PIN_REPEAT_CLK_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_REPEAT_CLK_IN_RD_LANE
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG1.BF.PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG1.WT.W1

// 0x0008	INPUT_PIN_DEBUG_TX_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_151_120_b0            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_151_120_b1            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_151_120_b2            : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_151_120_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG2_t;
__xdata __at( 0x5508 ) volatile INPUT_PIN_DEBUG_TX_REG2_t INPUT_PIN_DEBUG_TX_REG2;
#define reg_PIN_TXDATA_RD_LANE_151_120_b0  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_TXDATA_RD_LANE_151_120_b0
#define reg_PIN_TXDATA_RD_LANE_151_120_b1  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_TXDATA_RD_LANE_151_120_b1
#define reg_PIN_TXDATA_RD_LANE_151_120_b2  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_TXDATA_RD_LANE_151_120_b2
#define reg_PIN_TXDATA_RD_LANE_151_120_b3  INPUT_PIN_DEBUG_TX_REG2.BF.PIN_TXDATA_RD_LANE_151_120_b3

// 0x000c	INPUT_PIN_DEBUG_TX_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_119_88_b0             : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_119_88_b1             : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_119_88_b2             : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_119_88_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG3_t;
__xdata __at( 0x550c ) volatile INPUT_PIN_DEBUG_TX_REG3_t INPUT_PIN_DEBUG_TX_REG3;
#define reg_PIN_TXDATA_RD_LANE_119_88_b0  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_TXDATA_RD_LANE_119_88_b0
#define reg_PIN_TXDATA_RD_LANE_119_88_b1  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_TXDATA_RD_LANE_119_88_b1
#define reg_PIN_TXDATA_RD_LANE_119_88_b2  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_TXDATA_RD_LANE_119_88_b2
#define reg_PIN_TXDATA_RD_LANE_119_88_b3  INPUT_PIN_DEBUG_TX_REG3.BF.PIN_TXDATA_RD_LANE_119_88_b3

// 0x0010	INPUT_PIN_DEBUG_TX_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_87_56_b0              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_87_56_b1              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_87_56_b2              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_87_56_b3              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG4_t;
__xdata __at( 0x5510 ) volatile INPUT_PIN_DEBUG_TX_REG4_t INPUT_PIN_DEBUG_TX_REG4;
#define reg_PIN_TXDATA_RD_LANE_87_56_b0  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_TXDATA_RD_LANE_87_56_b0
#define reg_PIN_TXDATA_RD_LANE_87_56_b1  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_TXDATA_RD_LANE_87_56_b1
#define reg_PIN_TXDATA_RD_LANE_87_56_b2  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_TXDATA_RD_LANE_87_56_b2
#define reg_PIN_TXDATA_RD_LANE_87_56_b3  INPUT_PIN_DEBUG_TX_REG4.BF.PIN_TXDATA_RD_LANE_87_56_b3

// 0x0014	INPUT_PIN_DEBUG_TX_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t PIN_TXDATA_RD_LANE_55_24_b0              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_55_24_b1              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_55_24_b2              : 8;	/* [31:0]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_55_24_b3              : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG5_t;
__xdata __at( 0x5514 ) volatile INPUT_PIN_DEBUG_TX_REG5_t INPUT_PIN_DEBUG_TX_REG5;
#define reg_PIN_TXDATA_RD_LANE_55_24_b0  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_55_24_b0
#define reg_PIN_TXDATA_RD_LANE_55_24_b1  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_55_24_b1
#define reg_PIN_TXDATA_RD_LANE_55_24_b2  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_55_24_b2
#define reg_PIN_TXDATA_RD_LANE_55_24_b3  INPUT_PIN_DEBUG_TX_REG5.BF.PIN_TXDATA_RD_LANE_55_24_b3

// 0x0018	INPUT_PIN_DEBUG_TX_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t PIN_TXCLK_SYNC_EN_PLL_RD_LANE            : 1;	/*      2       r   0*/
		uint8_t PIN_TX_TRAIN_POLY_SEL_RD_LANE_1_0        : 2;	/*  [4:3]       r   0*/
		uint8_t PIN_TX_IDLE_RD_LANE                      : 1;	/*      5       r   0*/
		uint8_t PIN_TX_ACJTAG_IN_RD_LANE                 : 1;	/*      6       r   0*/
		uint8_t PIN_TX_ACJTAG_EN_RD_LANE                 : 1;	/*      7       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_23_0_b0               : 8;	/* [31:8]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_23_0_b1               : 8;	/* [31:8]       r   0*/
		uint8_t PIN_TXDATA_RD_LANE_23_0_b2               : 8;	/* [31:8]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG6_t;
__xdata __at( 0x5518 ) volatile INPUT_PIN_DEBUG_TX_REG6_t INPUT_PIN_DEBUG_TX_REG6;
#define reg_PIN_TXCLK_SYNC_EN_PLL_RD_LANE  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXCLK_SYNC_EN_PLL_RD_LANE
#define reg_PIN_TX_TRAIN_POLY_SEL_RD_LANE_1_0  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TX_TRAIN_POLY_SEL_RD_LANE_1_0
#define reg_PIN_TX_IDLE_RD_LANE  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TX_IDLE_RD_LANE
#define reg_PIN_TX_ACJTAG_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TX_ACJTAG_IN_RD_LANE
#define reg_PIN_TX_ACJTAG_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TX_ACJTAG_EN_RD_LANE
#define reg_PIN_TXDATA_RD_LANE_23_0_b0  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_23_0_b0
#define reg_PIN_TXDATA_RD_LANE_23_0_b1  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_23_0_b1
#define reg_PIN_TXDATA_RD_LANE_23_0_b2  INPUT_PIN_DEBUG_TX_REG6.BF.PIN_TXDATA_RD_LANE_23_0_b2

// 0x001c	INPUT_PIN_DEBUG_TX_REG7		PHY Isolation Debug Register7
typedef union {
	struct {
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_24      : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t PIN_TXDATA_PRE_CODE_EN_RD_LANE           : 1;	/*     15       r   0*/
		uint8_t PIN_TXDATA_GRAY_CODE_EN_RD_LANE          : 1;	/*     16       r   0*/
		uint8_t PIN_REFCLK_DIS_RD_LANE                   : 1;	/*     17       r   0*/
		uint8_t PIN_REFCLK_SEL_RD_LANE                   : 1;	/*     18       r   0*/
		uint8_t PIN_REF_FREF_SEL_RD_LANE_4_0             : 5;	/*[23:19]       r   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:24]     r/w   0*/
		uint8_t PIN_RESET_CORE_TX_RD_LANE                : 1;	/*     28       r   0*/
		uint8_t PIN_TXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*[31:29]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG7_t;
__xdata __at( 0x551c ) volatile INPUT_PIN_DEBUG_TX_REG7_t INPUT_PIN_DEBUG_TX_REG7;
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_24  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_31_24
#define reg_PIN_TXDATA_PRE_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDATA_PRE_CODE_EN_RD_LANE
#define reg_PIN_TXDATA_GRAY_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDATA_GRAY_CODE_EN_RD_LANE
#define reg_PIN_REFCLK_DIS_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_REFCLK_DIS_RD_LANE
#define reg_PIN_REFCLK_SEL_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_REFCLK_SEL_RD_LANE
#define reg_PIN_REF_FREF_SEL_RD_LANE_4_0  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_REF_FREF_SEL_RD_LANE_4_0
#define reg_PIN_RESET_CORE_TX_RD_LANE  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_RESET_CORE_TX_RD_LANE
#define reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0  INPUT_PIN_DEBUG_TX_REG7.BF.PIN_TXDCLK_NT_SEL_RD_LANE_2_0

// 0x0020	INPUT_PIN_DEBUG_TX_REG8		PHY Isolation Debug Register8
typedef union {
	struct {
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_47_40      : 8;	/*  [7:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b0    : 8;	/* [31:8]       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b1    : 8;	/* [31:8]       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b2    : 8;	/* [31:8]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG8_t;
__xdata __at( 0x5520 ) volatile INPUT_PIN_DEBUG_TX_REG8_t INPUT_PIN_DEBUG_TX_REG8;
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_47_40  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_47_40
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b0  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b0
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b1  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b1
#define reg_PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b2  INPUT_PIN_DEBUG_TX_REG8.BF.PIN_STRX_TRAIN_CMD_IN_RD_LANE_23_0_b2

// 0x0024	INPUT_PIN_DEBUG_TX_REG9		PHY Isolation Debug Register9
typedef union {
	struct {
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b0    : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b1    : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b2    : 8;	/* [31:0]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b3    : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG9_t;
__xdata __at( 0x5524 ) volatile INPUT_PIN_DEBUG_TX_REG9_t INPUT_PIN_DEBUG_TX_REG9;
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b0  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b0
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b1  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b1
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b2  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b2
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b3  INPUT_PIN_DEBUG_TX_REG9.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_39_8_b3

// 0x0028	INPUT_PIN_DEBUG_TX_REG10		PHY Isolation Debug Register10
typedef union {
	struct {
		uint8_t PHY_GEN_TX_FM_REG_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t PHY_GEN_TX_LANE_5_0                      : 6;	/*  [6:1]     r/w   0*/
		uint8_t GPI_FM_REG_LANE                          : 1;	/*      7     r/w   0*/
		uint8_t GPI_LANE_7_0                             : 8;	/* [15:8]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t COUPLE_MODE_EN_FM_REG_LANE               : 1;	/*     17     r/w   0*/
		uint8_t COUPLE_MODE_EN_LANE                      : 1;	/*     18     r/w   0*/
		uint8_t PIN_STRX_TRAIN_EN_IN_RD_LANE             : 1;	/*     19       r   0*/
		uint8_t PIN_STRX_TRAIN_PAT_EN_IN_RD_LANE         : 1;	/*     20       r   0*/
		uint8_t PIN_STRX_TRAIN_PAT_CODE_SEL_IN_RD_LANE_1_0 : 2;	/*[22:21]       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_VALID_IN_RD_LANE      : 1;	/*     23       r   0*/
		uint8_t PIN_STRX_TRAIN_COE_IN_RD_LANE_7_0        : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG10_t;
__xdata __at( 0x5528 ) volatile INPUT_PIN_DEBUG_TX_REG10_t INPUT_PIN_DEBUG_TX_REG10;
#define reg_PHY_GEN_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.PHY_GEN_TX_FM_REG_LANE
#define reg_PHY_GEN_TX_LANE_5_0  INPUT_PIN_DEBUG_TX_REG10.BF.PHY_GEN_TX_LANE_5_0
#define reg_GPI_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.GPI_FM_REG_LANE
#define reg_GPI_LANE_7_0  INPUT_PIN_DEBUG_TX_REG10.BF.GPI_LANE_7_0
#define reg_COUPLE_MODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.COUPLE_MODE_EN_FM_REG_LANE
#define reg_COUPLE_MODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.COUPLE_MODE_EN_LANE
#define reg_PIN_STRX_TRAIN_EN_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_EN_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_PAT_EN_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_PAT_EN_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_PAT_CODE_SEL_IN_RD_LANE_1_0  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_PAT_CODE_SEL_IN_RD_LANE_1_0
#define reg_PIN_STRX_TRAIN_COE_VALID_IN_RD_LANE  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_COE_VALID_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_COE_IN_RD_LANE_7_0  INPUT_PIN_DEBUG_TX_REG10.BF.PIN_STRX_TRAIN_COE_IN_RD_LANE_7_0

// 0x002c	INPUT_PIN_DEBUG_TX_REG11		PHY Isolation Debug Register11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:16]     r/w   0*/
		uint8_t PU_TX_FM_REG_LANE                        : 1;	/*     21     r/w   0*/
		uint8_t PU_TX_LANE                               : 1;	/*     22     r/w   0*/
		uint8_t PU_PLL_FM_REG_LANE                       : 1;	/*     23     r/w   0*/
		uint8_t PU_PLL_LANE                              : 1;	/*     24     r/w   0*/
		uint8_t PHY_GEN_MAX_TX_FM_REG_LANE               : 1;	/*     25     r/w   0*/
		uint8_t PHY_GEN_MAX_TX_LANE_5_0                  : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG11_t;
__xdata __at( 0x552c ) volatile INPUT_PIN_DEBUG_TX_REG11_t INPUT_PIN_DEBUG_TX_REG11;
#define reg_PU_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PU_TX_FM_REG_LANE
#define reg_PU_TX_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PU_TX_LANE
#define reg_PU_PLL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PU_PLL_FM_REG_LANE
#define reg_PU_PLL_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PU_PLL_LANE
#define reg_PHY_GEN_MAX_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG11.BF.PHY_GEN_MAX_TX_FM_REG_LANE
#define reg_PHY_GEN_MAX_TX_LANE_5_0  INPUT_PIN_DEBUG_TX_REG11.BF.PHY_GEN_MAX_TX_LANE_5_0

// 0x0030	INPUT_PIN_DEBUG_TX_REG12		PHY Isolation Debug Register12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t TXDATA_PRE_CODE_EN_FM_REG_LANE           : 1;	/*      2     r/w   0*/
		uint8_t TXDATA_PRE_CODE_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t TXDATA_GRAY_CODE_EN_FM_REG_LANE          : 1;	/*      4     r/w   0*/
		uint8_t TXDATA_GRAY_CODE_EN_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t REFCLK_DIS_FM_REG_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t REFCLK_DIS_LANE                          : 1;	/*      7     r/w   0*/
		uint8_t REFCLK_SEL_FM_REG_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t REFCLK_SEL_LANE                          : 1;	/*      9     r/w   0*/
		uint8_t REF_FREF_SEL_FM_REG_LANE                 : 1;	/*     10     r/w   0*/
		uint8_t REF_FREF_SEL_LANE_4_0                    : 5;	/*[15:11]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESET_CORE_TX_FM_REG_LANE                : 1;	/*     17     r/w   0*/
		uint8_t RESET_CORE_TX_LANE                       : 1;	/*     18     r/w   0*/
		uint8_t TXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*     19     r/w   0*/
		uint8_t TXDCLK_NT_SEL_LANE_2_0                   : 3;	/*[22:20]     r/w   0*/
		uint8_t TX_ACJTAG_IN_FM_REG_LANE                 : 1;	/*     23     r/w   0*/
		uint8_t TX_ACJTAG_IN_LANE                        : 1;	/*     24     r/w   0*/
		uint8_t TX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*     25     r/w   0*/
		uint8_t TX_ACJTAG_EN_LANE                        : 1;	/*     26     r/w   0*/
		uint8_t SSC_EN_FM_REG_LANE                       : 1;	/*     27     r/w   0*/
		uint8_t SSC_EN_LANE                              : 1;	/*     28     r/w   0*/
		uint8_t REPEAT_MODE_EN_FM_REG_LANE               : 1;	/*     29     r/w   0*/
		uint8_t REPEAT_MODE_EN_LANE                      : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG12_t;
__xdata __at( 0x5530 ) volatile INPUT_PIN_DEBUG_TX_REG12_t INPUT_PIN_DEBUG_TX_REG12;
#define reg_TXDATA_PRE_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TXDATA_PRE_CODE_EN_FM_REG_LANE
#define reg_TXDATA_PRE_CODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TXDATA_PRE_CODE_EN_LANE
#define reg_TXDATA_GRAY_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TXDATA_GRAY_CODE_EN_FM_REG_LANE
#define reg_TXDATA_GRAY_CODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TXDATA_GRAY_CODE_EN_LANE
#define reg_REFCLK_DIS_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REFCLK_DIS_FM_REG_LANE
#define reg_REFCLK_DIS_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REFCLK_DIS_LANE
#define reg_REFCLK_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REFCLK_SEL_FM_REG_LANE
#define reg_REFCLK_SEL_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REFCLK_SEL_LANE
#define reg_REF_FREF_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REF_FREF_SEL_FM_REG_LANE
#define reg_REF_FREF_SEL_LANE_4_0  INPUT_PIN_DEBUG_TX_REG12.BF.REF_FREF_SEL_LANE_4_0
#define reg_RESET_CORE_TX_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.RESET_CORE_TX_FM_REG_LANE
#define reg_RESET_CORE_TX_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.RESET_CORE_TX_LANE
#define reg_TXDCLK_NT_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TXDCLK_NT_SEL_FM_REG_LANE
#define reg_TXDCLK_NT_SEL_LANE_2_0  INPUT_PIN_DEBUG_TX_REG12.BF.TXDCLK_NT_SEL_LANE_2_0
#define reg_TX_ACJTAG_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TX_ACJTAG_IN_FM_REG_LANE
#define reg_TX_ACJTAG_IN_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TX_ACJTAG_IN_LANE
#define reg_TX_ACJTAG_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TX_ACJTAG_EN_FM_REG_LANE
#define reg_TX_ACJTAG_EN_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.TX_ACJTAG_EN_LANE
#define reg_SSC_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.SSC_EN_FM_REG_LANE
#define reg_SSC_EN_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.SSC_EN_LANE
#define reg_REPEAT_MODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REPEAT_MODE_EN_FM_REG_LANE
#define reg_REPEAT_MODE_EN_LANE  INPUT_PIN_DEBUG_TX_REG12.BF.REPEAT_MODE_EN_LANE

// 0x0034	INPUT_PIN_DEBUG_TX_REG13		PHY Isolation Debug Register13
typedef union {
	struct {
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b0           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b1           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b2           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b3           : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG13_t;
__xdata __at( 0x5534 ) volatile INPUT_PIN_DEBUG_TX_REG13_t INPUT_PIN_DEBUG_TX_REG13;
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b0  INPUT_PIN_DEBUG_TX_REG13.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b0
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b1  INPUT_PIN_DEBUG_TX_REG13.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b1
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b2  INPUT_PIN_DEBUG_TX_REG13.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b2
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b3  INPUT_PIN_DEBUG_TX_REG13.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b3

// 0x0038	INPUT_PIN_DEBUG_TX_REG14		PHY Isolation Debug Register14
typedef union {
	struct {
		uint8_t STRX_TRAIN_COE_IN_LANE_47_24_b0          : 8;	/* [23:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_47_24_b1          : 8;	/* [23:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_47_24_b2          : 8;	/* [23:0]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:24]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_FM_REG_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG14_t;
__xdata __at( 0x5538 ) volatile INPUT_PIN_DEBUG_TX_REG14_t INPUT_PIN_DEBUG_TX_REG14;
#define reg_STRX_TRAIN_COE_IN_LANE_47_24_b0  INPUT_PIN_DEBUG_TX_REG14.BF.STRX_TRAIN_COE_IN_LANE_47_24_b0
#define reg_STRX_TRAIN_COE_IN_LANE_47_24_b1  INPUT_PIN_DEBUG_TX_REG14.BF.STRX_TRAIN_COE_IN_LANE_47_24_b1
#define reg_STRX_TRAIN_COE_IN_LANE_47_24_b2  INPUT_PIN_DEBUG_TX_REG14.BF.STRX_TRAIN_COE_IN_LANE_47_24_b2
#define reg_STRX_TRAIN_CMD_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG14.BF.STRX_TRAIN_CMD_IN_FM_REG_LANE

// 0x003c	INPUT_PIN_DEBUG_TX_REG15		PHY Isolation Debug Register15
typedef union {
	struct {
		uint8_t STRX_TRAIN_PAT_EN_IN_FM_REG_LANE         : 1;	/*      0     r/w   0*/
		uint8_t STRX_TRAIN_PAT_EN_IN_LANE                : 1;	/*      1     r/w   0*/
		uint8_t STRX_TRAIN_PAT_CODE_SEL_IN_FM_REG_LANE   : 1;	/*      2     r/w   0*/
		uint8_t STRX_TRAIN_PAT_CODE_SEL_IN_LANE_1_0      : 2;	/*  [4:3]     r/w   0*/
		uint8_t STRX_TRAIN_COE_VALID_IN_FM_REG_LANE      : 1;	/*      5     r/w   0*/
		uint8_t STRX_TRAIN_COE_VALID_IN_LANE             : 1;	/*      6     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_FM_REG_LANE            : 1;	/*      7     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_23_0_b0           : 8;	/* [31:8]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_23_0_b1           : 8;	/* [31:8]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_23_0_b2           : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG15_t;
__xdata __at( 0x553c ) volatile INPUT_PIN_DEBUG_TX_REG15_t INPUT_PIN_DEBUG_TX_REG15;
#define reg_STRX_TRAIN_PAT_EN_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_PAT_EN_IN_FM_REG_LANE
#define reg_STRX_TRAIN_PAT_EN_IN_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_PAT_EN_IN_LANE
#define reg_STRX_TRAIN_PAT_CODE_SEL_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_PAT_CODE_SEL_IN_FM_REG_LANE
#define reg_STRX_TRAIN_PAT_CODE_SEL_IN_LANE_1_0  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_PAT_CODE_SEL_IN_LANE_1_0
#define reg_STRX_TRAIN_COE_VALID_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_COE_VALID_IN_FM_REG_LANE
#define reg_STRX_TRAIN_COE_VALID_IN_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_COE_VALID_IN_LANE
#define reg_STRX_TRAIN_COE_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_COE_IN_FM_REG_LANE
#define reg_STRX_TRAIN_COE_IN_LANE_23_0_b0  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_COE_IN_LANE_23_0_b0
#define reg_STRX_TRAIN_COE_IN_LANE_23_0_b1  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_COE_IN_LANE_23_0_b1
#define reg_STRX_TRAIN_COE_IN_LANE_23_0_b2  INPUT_PIN_DEBUG_TX_REG15.BF.STRX_TRAIN_COE_IN_LANE_23_0_b2

// 0x0040	INPUT_PIN_DEBUG_TX_REG16		PHY Isolation Debug Register16
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_RD_LANE               : 1;	/*      7       r   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0      : 8;	/* [23:8]       r   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1      : 8;	/* [23:8]       r   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t STRX_TRAIN_EN_IN_FM_REG_LANE             : 1;	/*     30     r/w   0*/
		uint8_t STRX_TRAIN_EN_IN_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG16_t;
__xdata __at( 0x5540 ) volatile INPUT_PIN_DEBUG_TX_REG16_t INPUT_PIN_DEBUG_TX_REG16;
#define reg_ANA_TX_TXDETRX_OUT_RD_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.ANA_TX_TXDETRX_OUT_RD_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG16.BF.ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG16.BF.ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1
#define reg_STRX_TRAIN_EN_IN_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.STRX_TRAIN_EN_IN_FM_REG_LANE
#define reg_STRX_TRAIN_EN_IN_LANE  INPUT_PIN_DEBUG_TX_REG16.BF.STRX_TRAIN_EN_IN_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_RD_LANE_15_0  INPUT_PIN_DEBUG_TX_REG16.WT.W1

// 0x0044	INPUT_PIN_DEBUG_TX_REG17		PHY Isolation Debug Register17
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [14:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:0]     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_FM_REG_LANE          : 1;	/*     15     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0         : 8;	/*[31:16]     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1         : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_TX_REG17_t;
__xdata __at( 0x5544 ) volatile INPUT_PIN_DEBUG_TX_REG17_t INPUT_PIN_DEBUG_TX_REG17;
#define reg_ANA_TX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_TX_REG17.BF.ANA_TX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0  INPUT_PIN_DEBUG_TX_REG17.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1  INPUT_PIN_DEBUG_TX_REG17.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0  INPUT_PIN_DEBUG_TX_REG17.WT.W1

#endif
