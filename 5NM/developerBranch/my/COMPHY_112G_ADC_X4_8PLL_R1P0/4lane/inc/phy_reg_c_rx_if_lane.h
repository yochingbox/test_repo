#ifndef PHY_REG_C_RX_IF_LANE_H
#define PHY_REG_C_RX_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_RX_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_VALID_RD_LANE      : 1;	/*      3       r   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_RESET_RD_LANE_3_0  : 4;	/*  [7:4]       r   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_PAT_RD_LANE_1_0    : 2;	/*  [9:8]       r   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_RD_LANE_5_0        : 6;	/*[15:10]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t PIN_PU_RX_RD_LANE                        : 1;	/*     17       r   0*/
		uint8_t PIN_PHY_GEN_MAX_RX_RD_LANE_5_0           : 6;	/*[23:18]       r   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t PIN_PHY_GEN_RX_RD_LANE_5_0               : 6;	/*[30:25]       r   0*/
		uint8_t PIN_LOCAL_CTRL_FIELD_READY_RD_LANE       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG0_t;
__xdata __at( 0x5600 ) volatile INPUT_PIN_DEBUG_RX_REG0_t INPUT_PIN_DEBUG_RX_REG0;
#define reg_PIN_REMOTE_CTRL_FIELD_VALID_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_REMOTE_CTRL_FIELD_VALID_RD_LANE
#define reg_PIN_REMOTE_CTRL_FIELD_RESET_RD_LANE_3_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_REMOTE_CTRL_FIELD_RESET_RD_LANE_3_0
#define reg_PIN_REMOTE_CTRL_FIELD_PAT_RD_LANE_1_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_REMOTE_CTRL_FIELD_PAT_RD_LANE_1_0
#define reg_PIN_REMOTE_CTRL_FIELD_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_REMOTE_CTRL_FIELD_RD_LANE_5_0
#define reg_PIN_PU_RX_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PU_RX_RD_LANE
#define reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PHY_GEN_MAX_RX_RD_LANE_5_0
#define reg_PIN_PHY_GEN_RX_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PHY_GEN_RX_RD_LANE_5_0
#define reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_LOCAL_CTRL_FIELD_READY_RD_LANE

// 0x0004	INPUT_PIN_DEBUG_RX_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0    : 8;	/* [15:0]       r   0*/
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1    : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_VALID_RD_LANE    : 1;	/*     22       r   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_RESET_RD_LANE    : 1;	/*     23       r   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_PAT_RD_LANE_1_0  : 2;	/*[25:24]       r   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_RD_LANE_5_0      : 6;	/*[31:26]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG1_t;
__xdata __at( 0x5604 ) volatile INPUT_PIN_DEBUG_RX_REG1_t INPUT_PIN_DEBUG_RX_REG1;
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1
#define reg_PIN_REMOTE_STATUS_FIELD_VALID_RD_LANE  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_VALID_RD_LANE
#define reg_PIN_REMOTE_STATUS_FIELD_RESET_RD_LANE  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_RESET_RD_LANE
#define reg_PIN_REMOTE_STATUS_FIELD_PAT_RD_LANE_1_0  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_PAT_RD_LANE_1_0
#define reg_PIN_REMOTE_STATUS_FIELD_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_RD_LANE_5_0
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0  INPUT_PIN_DEBUG_RX_REG1.WT.W0

// 0x0008	INPUT_PIN_DEBUG_RX_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t PIN_RESET_CORE_RX_RD_LANE                : 1;	/*      4       r   0*/
		uint8_t PIN_RXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*  [7:5]       r   0*/
		uint8_t PIN_TX_TRAIN_FRAME_LOCK_ENABLE_RD_LANE   : 1;	/*      8       r   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_RD_LANE              : 1;	/*      9       r   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_RD_LANE              : 1;	/*     10       r   0*/
		uint8_t PIN_RX_INIT_RD_LANE                      : 1;	/*     11       r   0*/
		uint8_t PIN_RX_DC_TERM_EN_RD_LANE                : 1;	/*     12       r   0*/
		uint8_t PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0         : 3;	/*[15:13]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t PIN_RX_ACJTAG_MODE_RD_LANE               : 1;	/*     17       r   0*/
		uint8_t PIN_RX_ACJTAG_INIT_CLK_RD_LANE           : 1;	/*     18       r   0*/
		uint8_t PIN_RX_ACJTAG_INITP_RD_LANE              : 1;	/*     19       r   0*/
		uint8_t PIN_RX_ACJTAG_INITN_RD_LANE              : 1;	/*     20       r   0*/
		uint8_t PIN_RX_ACJTAG_HYST_RD_LANE_2_0           : 3;	/*[23:21]       r   0*/
		uint8_t PIN_RX_ACJTAG_EN_RD_LANE                 : 1;	/*     24       r   0*/
		uint8_t PIN_RX_ACJTAG_AC_RD_LANE                 : 1;	/*     25       r   0*/
		uint8_t PIN_REPEAT_SRC_GEN_RX_RD_LANE_5_0        : 6;	/*[31:26]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG2_t;
__xdata __at( 0x5608 ) volatile INPUT_PIN_DEBUG_RX_REG2_t INPUT_PIN_DEBUG_RX_REG2;
#define reg_PIN_RESET_CORE_RX_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RESET_CORE_RX_RD_LANE
#define reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_TX_TRAIN_FRAME_LOCK_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_TX_TRAIN_FRAME_LOCK_ENABLE_RD_LANE
#define reg_PIN_TX_TRAIN_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_TX_TRAIN_ENABLE_RD_LANE
#define reg_PIN_RX_TRAIN_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_TRAIN_ENABLE_RD_LANE
#define reg_PIN_RX_INIT_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_INIT_RD_LANE
#define reg_PIN_RX_DC_TERM_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_DC_TERM_EN_RD_LANE
#define reg_PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0
#define reg_PIN_RX_ACJTAG_MODE_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_MODE_RD_LANE
#define reg_PIN_RX_ACJTAG_INIT_CLK_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_INIT_CLK_RD_LANE
#define reg_PIN_RX_ACJTAG_INITP_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_INITP_RD_LANE
#define reg_PIN_RX_ACJTAG_INITN_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_INITN_RD_LANE
#define reg_PIN_RX_ACJTAG_HYST_RD_LANE_2_0  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_HYST_RD_LANE_2_0
#define reg_PIN_RX_ACJTAG_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_EN_RD_LANE
#define reg_PIN_RX_ACJTAG_AC_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RX_ACJTAG_AC_RD_LANE
#define reg_PIN_REPEAT_SRC_GEN_RX_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_REPEAT_SRC_GEN_RX_RD_LANE_5_0

// 0x000c	INPUT_PIN_DEBUG_RX_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t PIN_CACHE_DATA_RD_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t PIN_CACHE_DATA_RD_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t PIN_CACHE_DATA_RD_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t PIN_CACHE_DATA_RD_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG3_t;
__xdata __at( 0x560c ) volatile INPUT_PIN_DEBUG_RX_REG3_t INPUT_PIN_DEBUG_RX_REG3;
#define reg_PIN_CACHE_DATA_RD_LANE_31_0_b0  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_0_b0
#define reg_PIN_CACHE_DATA_RD_LANE_31_0_b1  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_0_b1
#define reg_PIN_CACHE_DATA_RD_LANE_31_0_b2  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_0_b2
#define reg_PIN_CACHE_DATA_RD_LANE_31_0_b3  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_0_b3

// 0x0010	INPUT_PIN_DEBUG_RX_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b0   : 8;	/* [23:0]       r   0*/
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b1   : 8;	/* [23:0]       r   0*/
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b2   : 8;	/* [23:0]       r   0*/
		uint8_t PIN_MCU_REMOTE_ACK_RD_LANE               : 1;	/*     24       r   0*/
		uint8_t PIN_STRX_TRAIN_FIELD_END_IN_RD_LANE      : 1;	/*     25       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_VALID_IN_RD_LANE      : 1;	/*     26       r   0*/
		uint8_t PIN_STRX_ENABLE_RD_LANE                  : 1;	/*     27       r   0*/
		uint8_t PIN_RXDATA_PRE_CODE_EN_RD_LANE           : 1;	/*     28       r   0*/
		uint8_t PIN_RXDATA_GRAY_CODE_EN_RD_LANE          : 1;	/*     29       r   0*/
		uint8_t PIN_MCU_ONEWIRE_IN_RD_LANE               : 1;	/*     30       r   0*/
		uint8_t PIN_CACHE_DATA_VALID_RD_LANE             : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG4_t;
__xdata __at( 0x5610 ) volatile INPUT_PIN_DEBUG_RX_REG4_t INPUT_PIN_DEBUG_RX_REG4;
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b0  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b0
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b1  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b1
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b2  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_31_8_b2
#define reg_PIN_MCU_REMOTE_ACK_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_ACK_RD_LANE
#define reg_PIN_STRX_TRAIN_FIELD_END_IN_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_STRX_TRAIN_FIELD_END_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_CMD_VALID_IN_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_STRX_TRAIN_CMD_VALID_IN_RD_LANE
#define reg_PIN_STRX_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_STRX_ENABLE_RD_LANE
#define reg_PIN_RXDATA_PRE_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_RXDATA_PRE_CODE_EN_RD_LANE
#define reg_PIN_RXDATA_GRAY_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_RXDATA_GRAY_CODE_EN_RD_LANE
#define reg_PIN_MCU_ONEWIRE_IN_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_ONEWIRE_IN_RD_LANE
#define reg_PIN_CACHE_DATA_VALID_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_CACHE_DATA_VALID_RD_LANE

// 0x0014	INPUT_PIN_DEBUG_RX_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_31_16_b0   : 8;	/* [15:0]       r   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_31_16_b1   : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 7;	/*[22:16]     r/w   0*/
		uint8_t PIN_MCU_REMOTE_REQ_RD_LANE               : 1;	/*     23       r   0*/
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_7_0       : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG5_t;
__xdata __at( 0x5614 ) volatile INPUT_PIN_DEBUG_RX_REG5_t INPUT_PIN_DEBUG_RX_REG5;
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_16_b0  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_31_16_b0
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_16_b1  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_31_16_b1
#define reg_PIN_MCU_REMOTE_REQ_RD_LANE  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_REQ_RD_LANE
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_7_0
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_16  INPUT_PIN_DEBUG_RX_REG5.WT.W0

// 0x0018	INPUT_PIN_DEBUG_RX_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t PHY_GEN_MAX_RX_FM_REG_LANE               : 1;	/*      0     r/w   0*/
		uint8_t PHY_GEN_MAX_RX_LANE_5_0                  : 6;	/*  [6:1]     r/w   0*/
		uint8_t PHY_GEN_RX_FM_REG_LANE                   : 1;	/*      7     r/w   0*/
		uint8_t PHY_GEN_RX_LANE_5_0                      : 6;	/* [13:8]     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_FM_REG_LANE       : 1;	/*     14     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_LANE              : 1;	/*     15     r/w   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_15_0_b0    : 8;	/*[31:16]       r   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_15_0_b1    : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG6_t;
__xdata __at( 0x5618 ) volatile INPUT_PIN_DEBUG_RX_REG6_t INPUT_PIN_DEBUG_RX_REG6;
#define reg_PHY_GEN_MAX_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PHY_GEN_MAX_RX_FM_REG_LANE
#define reg_PHY_GEN_MAX_RX_LANE_5_0  INPUT_PIN_DEBUG_RX_REG6.BF.PHY_GEN_MAX_RX_LANE_5_0
#define reg_PHY_GEN_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PHY_GEN_RX_FM_REG_LANE
#define reg_PHY_GEN_RX_LANE_5_0  INPUT_PIN_DEBUG_RX_REG6.BF.PHY_GEN_RX_LANE_5_0
#define reg_LOCAL_CTRL_FIELD_READY_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.LOCAL_CTRL_FIELD_READY_FM_REG_LANE
#define reg_LOCAL_CTRL_FIELD_READY_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.LOCAL_CTRL_FIELD_READY_LANE
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_15_0_b0
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_15_0_b1
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_15_0  INPUT_PIN_DEBUG_RX_REG6.WT.W1

// 0x001c	INPUT_PIN_DEBUG_RX_REG7		PHY Isolation Debug Register7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_FM_REG_LANE          : 1;	/*      1     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_LANE_5_0             : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:8]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_FM_REG_LANE      : 1;	/*     13     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_LANE             : 1;	/*     14     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_FM_REG_LANE      : 1;	/*     15     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_LANE_3_0         : 4;	/*[19:16]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_FM_REG_LANE        : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_LANE_1_0           : 2;	/*[22:21]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_FM_REG_LANE            : 1;	/*     23     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_LANE_5_0               : 6;	/*[29:24]     r/w   0*/
		uint8_t PU_RX_FM_REG_LANE                        : 1;	/*     30     r/w   0*/
		uint8_t PU_RX_LANE                               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG7_t;
__xdata __at( 0x561c ) volatile INPUT_PIN_DEBUG_RX_REG7_t INPUT_PIN_DEBUG_RX_REG7;
#define reg_REMOTE_STATUS_FIELD_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_STATUS_FIELD_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_STATUS_FIELD_LANE_5_0
#define reg_REMOTE_CTRL_FIELD_VALID_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_LANE_3_0  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_RESET_LANE_3_0
#define reg_REMOTE_CTRL_FIELD_PAT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_PAT_LANE_1_0  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_PAT_LANE_1_0
#define reg_REMOTE_CTRL_FIELD_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_LANE_5_0
#define reg_PU_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PU_RX_FM_REG_LANE
#define reg_PU_RX_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PU_RX_LANE

// 0x0020	INPUT_PIN_DEBUG_RX_REG8		PHY Isolation Debug Register8
typedef union {
	struct {
		uint8_t RX_ACJTAG_HYST_LANE_2_0                  : 3;	/*  [2:0]     r/w   0*/
		uint8_t RX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t RX_ACJTAG_EN_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t RX_ACJTAG_AC_FM_REG_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RX_ACJTAG_AC_LANE                        : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [23:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:8]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_FM_REG_LANE    : 1;	/*     25     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_LANE           : 1;	/*     26     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_FM_REG_LANE    : 1;	/*     27     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_LANE           : 1;	/*     28     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_PAT_FM_REG_LANE      : 1;	/*     29     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_PAT_LANE_1_0         : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG8_t;
__xdata __at( 0x5620 ) volatile INPUT_PIN_DEBUG_RX_REG8_t INPUT_PIN_DEBUG_RX_REG8;
#define reg_RX_ACJTAG_HYST_LANE_2_0  INPUT_PIN_DEBUG_RX_REG8.BF.RX_ACJTAG_HYST_LANE_2_0
#define reg_RX_ACJTAG_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.RX_ACJTAG_EN_FM_REG_LANE
#define reg_RX_ACJTAG_EN_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.RX_ACJTAG_EN_LANE
#define reg_RX_ACJTAG_AC_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.RX_ACJTAG_AC_FM_REG_LANE
#define reg_RX_ACJTAG_AC_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.RX_ACJTAG_AC_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_VALID_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_RESET_LANE
#define reg_REMOTE_STATUS_FIELD_PAT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_PAT_LANE_1_0  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_PAT_LANE_1_0

// 0x0024	INPUT_PIN_DEBUG_RX_REG9		PHY Isolation Debug Register9
typedef union {
	struct {
		uint8_t RXDATA_GRAY_CODE_EN_FM_REG_LANE          : 1;	/*      0     r/w   0*/
		uint8_t RXDATA_GRAY_CODE_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t RESET_CORE_RX_FM_REG_LANE                : 1;	/*      2     r/w   0*/
		uint8_t RESET_CORE_RX_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t RXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*      4     r/w   0*/
		uint8_t RXDCLK_NT_SEL_LANE_2_0                   : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE   : 1;	/*      9     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_LANE          : 1;	/*     10     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*     11     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_LANE                     : 1;	/*     12     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*     13     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_LANE                     : 1;	/*     14     r/w   0*/
		uint8_t RX_INIT_FM_REG_LANE                      : 1;	/*     15     r/w   0*/
		uint8_t RX_INIT_LANE                             : 1;	/*     16     r/w   0*/
		uint8_t RX_DC_TERM_EN_FM_REG_LANE                : 1;	/*     17     r/w   0*/
		uint8_t RX_DC_TERM_EN_LANE                       : 1;	/*     18     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_FM_REG_LANE             : 1;	/*     19     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_LANE_2_0                : 3;	/*[22:20]     r/w   0*/
		uint8_t RX_ACJTAG_MODE_FM_REG_LANE               : 1;	/*     23     r/w   0*/
		uint8_t RX_ACJTAG_MODE_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_FM_REG_LANE           : 1;	/*     25     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t RX_ACJTAG_INITP_FM_REG_LANE              : 1;	/*     27     r/w   0*/
		uint8_t RX_ACJTAG_INITP_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t RX_ACJTAG_INITN_FM_REG_LANE              : 1;	/*     29     r/w   0*/
		uint8_t RX_ACJTAG_INITN_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t RX_ACJTAG_HYST_FM_REG_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG9_t;
__xdata __at( 0x5624 ) volatile INPUT_PIN_DEBUG_RX_REG9_t INPUT_PIN_DEBUG_RX_REG9;
#define reg_RXDATA_GRAY_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RXDATA_GRAY_CODE_EN_FM_REG_LANE
#define reg_RXDATA_GRAY_CODE_EN_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RXDATA_GRAY_CODE_EN_LANE
#define reg_RESET_CORE_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RESET_CORE_RX_FM_REG_LANE
#define reg_RESET_CORE_RX_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RESET_CORE_RX_LANE
#define reg_RXDCLK_NT_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RXDCLK_NT_SEL_FM_REG_LANE
#define reg_RXDCLK_NT_SEL_LANE_2_0  INPUT_PIN_DEBUG_RX_REG9.BF.RXDCLK_NT_SEL_LANE_2_0
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.TX_TRAIN_FRAME_LOCK_ENABLE_LANE
#define reg_TX_TRAIN_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.TX_TRAIN_ENABLE_FM_REG_LANE
#define reg_TX_TRAIN_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.TX_TRAIN_ENABLE_LANE
#define reg_RX_TRAIN_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_TRAIN_ENABLE_FM_REG_LANE
#define reg_RX_TRAIN_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_TRAIN_ENABLE_LANE
#define reg_RX_INIT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_INIT_FM_REG_LANE
#define reg_RX_INIT_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_INIT_LANE
#define reg_RX_DC_TERM_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_DC_TERM_EN_FM_REG_LANE
#define reg_RX_DC_TERM_EN_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_DC_TERM_EN_LANE
#define reg_RX_ACJTAG_DCBIAS_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_DCBIAS_FM_REG_LANE
#define reg_RX_ACJTAG_DCBIAS_LANE_2_0  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_DCBIAS_LANE_2_0
#define reg_RX_ACJTAG_MODE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_MODE_FM_REG_LANE
#define reg_RX_ACJTAG_MODE_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_MODE_LANE
#define reg_RX_ACJTAG_INIT_CLK_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_INIT_CLK_FM_REG_LANE
#define reg_RX_ACJTAG_INIT_CLK_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_INIT_CLK_LANE
#define reg_RX_ACJTAG_INITP_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_INITP_FM_REG_LANE
#define reg_RX_ACJTAG_INITP_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_INITP_LANE
#define reg_RX_ACJTAG_INITN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_INITN_FM_REG_LANE
#define reg_RX_ACJTAG_INITN_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_INITN_LANE
#define reg_RX_ACJTAG_HYST_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_HYST_FM_REG_LANE

// 0x0028	INPUT_PIN_DEBUG_RX_REG10		PHY Isolation Debug Register10
typedef union {
	struct {
		uint8_t MCU_REMOTE_COMMAND_LANE_31_16_b0         : 8;	/* [15:0]     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_LANE_31_16_b1         : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t MCU_REMOTE_ACK_FM_REG_LANE               : 1;	/*     22     r/w   0*/
		uint8_t MCU_REMOTE_ACK_LANE                      : 1;	/*     23     r/w   0*/
		uint8_t STRX_TRAIN_FIELD_END_IN_FM_REG_LANE      : 1;	/*     24     r/w   0*/
		uint8_t STRX_TRAIN_FIELD_END_IN_LANE             : 1;	/*     25     r/w   0*/
		uint8_t STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE      : 1;	/*     26     r/w   0*/
		uint8_t STRX_TRAIN_CMD_VALID_IN_LANE             : 1;	/*     27     r/w   0*/
		uint8_t STRX_ENABLE_FM_REG_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t STRX_ENABLE_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t RXDATA_PRE_CODE_EN_FM_REG_LANE           : 1;	/*     30     r/w   0*/
		uint8_t RXDATA_PRE_CODE_EN_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG10_t;
__xdata __at( 0x5628 ) volatile INPUT_PIN_DEBUG_RX_REG10_t INPUT_PIN_DEBUG_RX_REG10;
#define reg_MCU_REMOTE_COMMAND_LANE_31_16_b0  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_COMMAND_LANE_31_16_b0
#define reg_MCU_REMOTE_COMMAND_LANE_31_16_b1  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_COMMAND_LANE_31_16_b1
#define reg_MCU_REMOTE_ACK_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_ACK_FM_REG_LANE
#define reg_MCU_REMOTE_ACK_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_ACK_LANE
#define reg_STRX_TRAIN_FIELD_END_IN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.STRX_TRAIN_FIELD_END_IN_FM_REG_LANE
#define reg_STRX_TRAIN_FIELD_END_IN_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.STRX_TRAIN_FIELD_END_IN_LANE
#define reg_STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE
#define reg_STRX_TRAIN_CMD_VALID_IN_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.STRX_TRAIN_CMD_VALID_IN_LANE
#define reg_STRX_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.STRX_ENABLE_FM_REG_LANE
#define reg_STRX_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.STRX_ENABLE_LANE
#define reg_RXDATA_PRE_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RXDATA_PRE_CODE_EN_FM_REG_LANE
#define reg_RXDATA_PRE_CODE_EN_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RXDATA_PRE_CODE_EN_LANE
#define reg_MCU_REMOTE_COMMAND_LANE_31_16  INPUT_PIN_DEBUG_RX_REG10.WT.W0

// 0x002c	INPUT_PIN_DEBUG_RX_REG11		PHY Isolation Debug Register11
typedef union {
	struct {
		uint8_t MCU_REMOTE_STATUS_LANE_31_24             : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:8]     r/w   0*/
		uint8_t MCU_REMOTE_REQ_FM_REG_LANE               : 1;	/*     13     r/w   0*/
		uint8_t MCU_REMOTE_REQ_LANE                      : 1;	/*     14     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_FM_REG_LANE           : 1;	/*     15     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_LANE_15_0_b0          : 8;	/*[31:16]     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_LANE_15_0_b1          : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG11_t;
__xdata __at( 0x562c ) volatile INPUT_PIN_DEBUG_RX_REG11_t INPUT_PIN_DEBUG_RX_REG11;
#define reg_MCU_REMOTE_STATUS_LANE_31_24  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_STATUS_LANE_31_24
#define reg_MCU_REMOTE_REQ_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_REQ_FM_REG_LANE
#define reg_MCU_REMOTE_REQ_LANE  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_REQ_LANE
#define reg_MCU_REMOTE_COMMAND_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_FM_REG_LANE
#define reg_MCU_REMOTE_COMMAND_LANE_15_0_b0  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_LANE_15_0_b0
#define reg_MCU_REMOTE_COMMAND_LANE_15_0_b1  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_LANE_15_0_b1
#define reg_MCU_REMOTE_COMMAND_LANE_15_0  INPUT_PIN_DEBUG_RX_REG11.WT.W1

// 0x0030	INPUT_PIN_DEBUG_RX_REG12		PHY Isolation Debug Register12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_FM_REG_LANE            : 1;	/*      7     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_LANE_23_0_b0           : 8;	/* [31:8]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_LANE_23_0_b1           : 8;	/* [31:8]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_LANE_23_0_b2           : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG12_t;
__xdata __at( 0x5630 ) volatile INPUT_PIN_DEBUG_RX_REG12_t INPUT_PIN_DEBUG_RX_REG12;
#define reg_MCU_REMOTE_STATUS_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_FM_REG_LANE
#define reg_MCU_REMOTE_STATUS_LANE_23_0_b0  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_23_0_b0
#define reg_MCU_REMOTE_STATUS_LANE_23_0_b1  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_23_0_b1
#define reg_MCU_REMOTE_STATUS_LANE_23_0_b2  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_23_0_b2

// 0x0034	INPUT_PIN_DEBUG_RX_REG13		PHY Isolation Debug Register13
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_02_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_01_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_00_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_EOM_RD_LANE_7_0            : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG13_t;
__xdata __at( 0x5634 ) volatile INPUT_PIN_DEBUG_RX_REG13_t INPUT_PIN_DEBUG_RX_REG13;
#define reg_ANA_RX_ADCOUT_02_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG13.BF.ANA_RX_ADCOUT_02_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_01_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG13.BF.ANA_RX_ADCOUT_01_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_00_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG13.BF.ANA_RX_ADCOUT_00_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_EOM_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG13.BF.ANA_RX_ADCOUT_EOM_RD_LANE_7_0

// 0x0038	INPUT_PIN_DEBUG_RX_REG14		PHY Isolation Debug Register14
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_06_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_05_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_04_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_03_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG14_t;
__xdata __at( 0x5638 ) volatile INPUT_PIN_DEBUG_RX_REG14_t INPUT_PIN_DEBUG_RX_REG14;
#define reg_ANA_RX_ADCOUT_06_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG14.BF.ANA_RX_ADCOUT_06_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_05_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG14.BF.ANA_RX_ADCOUT_05_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_04_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG14.BF.ANA_RX_ADCOUT_04_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_03_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG14.BF.ANA_RX_ADCOUT_03_RD_LANE_7_0

// 0x003c	INPUT_PIN_DEBUG_RX_REG15		PHY Isolation Debug Register15
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_12_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_11_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_10_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_07_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG15_t;
__xdata __at( 0x563c ) volatile INPUT_PIN_DEBUG_RX_REG15_t INPUT_PIN_DEBUG_RX_REG15;
#define reg_ANA_RX_ADCOUT_12_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_ADCOUT_12_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_11_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_ADCOUT_11_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_10_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_ADCOUT_10_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_07_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_ADCOUT_07_RD_LANE_7_0

// 0x0040	INPUT_PIN_DEBUG_RX_REG16		PHY Isolation Debug Register16
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_16_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_15_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_14_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_13_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG16_t;
__xdata __at( 0x5640 ) volatile INPUT_PIN_DEBUG_RX_REG16_t INPUT_PIN_DEBUG_RX_REG16;
#define reg_ANA_RX_ADCOUT_16_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_ADCOUT_16_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_15_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_ADCOUT_15_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_14_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_ADCOUT_14_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_13_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_ADCOUT_13_RD_LANE_7_0

// 0x0044	INPUT_PIN_DEBUG_RX_REG17		PHY Isolation Debug Register17
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_22_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_21_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_20_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_17_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG17_t;
__xdata __at( 0x5644 ) volatile INPUT_PIN_DEBUG_RX_REG17_t INPUT_PIN_DEBUG_RX_REG17;
#define reg_ANA_RX_ADCOUT_22_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_ADCOUT_22_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_21_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_ADCOUT_21_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_20_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_ADCOUT_20_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_17_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_ADCOUT_17_RD_LANE_7_0

// 0x0048	INPUT_PIN_DEBUG_RX_REG18		PHY Isolation Debug Register18
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_26_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_25_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_24_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_23_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG18_t;
__xdata __at( 0x5648 ) volatile INPUT_PIN_DEBUG_RX_REG18_t INPUT_PIN_DEBUG_RX_REG18;
#define reg_ANA_RX_ADCOUT_26_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_ADCOUT_26_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_25_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_ADCOUT_25_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_24_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_ADCOUT_24_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_23_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_ADCOUT_23_RD_LANE_7_0

// 0x004c	INPUT_PIN_DEBUG_RX_REG19		PHY Isolation Debug Register19
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_32_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_31_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_30_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_27_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG19_t;
__xdata __at( 0x564c ) volatile INPUT_PIN_DEBUG_RX_REG19_t INPUT_PIN_DEBUG_RX_REG19;
#define reg_ANA_RX_ADCOUT_32_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_ADCOUT_32_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_31_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_ADCOUT_31_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_30_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_ADCOUT_30_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_27_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_ADCOUT_27_RD_LANE_7_0

// 0x0050	INPUT_PIN_DEBUG_RX_REG20		PHY Isolation Debug Register20
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_36_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_35_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_34_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_33_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG20_t;
__xdata __at( 0x5650 ) volatile INPUT_PIN_DEBUG_RX_REG20_t INPUT_PIN_DEBUG_RX_REG20;
#define reg_ANA_RX_ADCOUT_36_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_ADCOUT_36_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_35_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_ADCOUT_35_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_34_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_ADCOUT_34_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_33_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_ADCOUT_33_RD_LANE_7_0

// 0x0054	INPUT_PIN_DEBUG_RX_REG21		PHY Isolation Debug Register21
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_42_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_41_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_40_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_37_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG21_t;
__xdata __at( 0x5654 ) volatile INPUT_PIN_DEBUG_RX_REG21_t INPUT_PIN_DEBUG_RX_REG21;
#define reg_ANA_RX_ADCOUT_42_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_ADCOUT_42_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_41_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_ADCOUT_41_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_40_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_ADCOUT_40_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_37_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_ADCOUT_37_RD_LANE_7_0

// 0x0058	INPUT_PIN_DEBUG_RX_REG22		PHY Isolation Debug Register22
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_46_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_45_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_44_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_43_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG22_t;
__xdata __at( 0x5658 ) volatile INPUT_PIN_DEBUG_RX_REG22_t INPUT_PIN_DEBUG_RX_REG22;
#define reg_ANA_RX_ADCOUT_46_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ADCOUT_46_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_45_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ADCOUT_45_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_44_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ADCOUT_44_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_43_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ADCOUT_43_RD_LANE_7_0

// 0x005c	INPUT_PIN_DEBUG_RX_REG23		PHY Isolation Debug Register23
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_52_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_51_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_50_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_47_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG23_t;
__xdata __at( 0x565c ) volatile INPUT_PIN_DEBUG_RX_REG23_t INPUT_PIN_DEBUG_RX_REG23;
#define reg_ANA_RX_ADCOUT_52_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG23.BF.ANA_RX_ADCOUT_52_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_51_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG23.BF.ANA_RX_ADCOUT_51_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_50_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG23.BF.ANA_RX_ADCOUT_50_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_47_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG23.BF.ANA_RX_ADCOUT_47_RD_LANE_7_0

// 0x0060	INPUT_PIN_DEBUG_RX_REG24		PHY Isolation Debug Register24
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_56_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_55_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_54_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_53_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG24_t;
__xdata __at( 0x5660 ) volatile INPUT_PIN_DEBUG_RX_REG24_t INPUT_PIN_DEBUG_RX_REG24;
#define reg_ANA_RX_ADCOUT_56_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG24.BF.ANA_RX_ADCOUT_56_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_55_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG24.BF.ANA_RX_ADCOUT_55_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_54_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG24.BF.ANA_RX_ADCOUT_54_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_53_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG24.BF.ANA_RX_ADCOUT_53_RD_LANE_7_0

// 0x0064	INPUT_PIN_DEBUG_RX_REG25		PHY Isolation Debug Register25
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_62_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_61_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_60_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_57_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG25_t;
__xdata __at( 0x5664 ) volatile INPUT_PIN_DEBUG_RX_REG25_t INPUT_PIN_DEBUG_RX_REG25;
#define reg_ANA_RX_ADCOUT_62_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG25.BF.ANA_RX_ADCOUT_62_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_61_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG25.BF.ANA_RX_ADCOUT_61_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_60_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG25.BF.ANA_RX_ADCOUT_60_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_57_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG25.BF.ANA_RX_ADCOUT_57_RD_LANE_7_0

// 0x0068	INPUT_PIN_DEBUG_RX_REG26		PHY Isolation Debug Register26
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_66_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_65_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_64_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_63_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG26_t;
__xdata __at( 0x5668 ) volatile INPUT_PIN_DEBUG_RX_REG26_t INPUT_PIN_DEBUG_RX_REG26;
#define reg_ANA_RX_ADCOUT_66_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG26.BF.ANA_RX_ADCOUT_66_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_65_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG26.BF.ANA_RX_ADCOUT_65_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_64_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG26.BF.ANA_RX_ADCOUT_64_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_63_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG26.BF.ANA_RX_ADCOUT_63_RD_LANE_7_0

// 0x006c	INPUT_PIN_DEBUG_RX_REG27		PHY Isolation Debug Register27
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_72_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_71_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_70_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_67_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG27_t;
__xdata __at( 0x566c ) volatile INPUT_PIN_DEBUG_RX_REG27_t INPUT_PIN_DEBUG_RX_REG27;
#define reg_ANA_RX_ADCOUT_72_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG27.BF.ANA_RX_ADCOUT_72_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_71_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG27.BF.ANA_RX_ADCOUT_71_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_70_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG27.BF.ANA_RX_ADCOUT_70_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_67_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG27.BF.ANA_RX_ADCOUT_67_RD_LANE_7_0

// 0x0070	INPUT_PIN_DEBUG_RX_REG28		PHY Isolation Debug Register28
typedef union {
	struct {
		uint8_t ANA_RX_ADCOUT_76_RD_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_ADCOUT_75_RD_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t ANA_RX_ADCOUT_74_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t ANA_RX_ADCOUT_73_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG28_t;
__xdata __at( 0x5670 ) volatile INPUT_PIN_DEBUG_RX_REG28_t INPUT_PIN_DEBUG_RX_REG28;
#define reg_ANA_RX_ADCOUT_76_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG28.BF.ANA_RX_ADCOUT_76_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_75_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG28.BF.ANA_RX_ADCOUT_75_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_74_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG28.BF.ANA_RX_ADCOUT_74_RD_LANE_7_0
#define reg_ANA_RX_ADCOUT_73_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG28.BF.ANA_RX_ADCOUT_73_RD_LANE_7_0

// 0x0074	INPUT_PIN_DEBUG_RX_REG29		PHY Isolation Debug Register29
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_FM_REG_LANE                : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_LANE                       : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_ACJTAG_RXN_RD_LANE                : 1;	/*      6       r   0*/
		uint8_t ANA_RX_ACJTAG_RXP_RD_LANE                : 1;	/*      7       r   0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_RD_LANE_7_0          : 8;	/* [15:8]       r   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:16]     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_RD_LANE                    : 1;	/*     21       r   0*/
		uint8_t ANA_RX_RXCLK_NT_RD_LANE                  : 1;	/*     22       r   0*/
		uint8_t ANA_RX_RXCLK_4X_RD_LANE                  : 1;	/*     23       r   0*/
		uint8_t ANA_RX_ADCOUT_77_RD_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG29_t;
__xdata __at( 0x5674 ) volatile INPUT_PIN_DEBUG_RX_REG29_t INPUT_PIN_DEBUG_RX_REG29;
#define reg_ANA_RX_SQ_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_SQ_OUT_FM_REG_LANE
#define reg_ANA_RX_SQ_OUT_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_SQ_OUT_LANE
#define reg_ANA_RX_ACJTAG_RXN_RD_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_ACJTAG_RXN_RD_LANE
#define reg_ANA_RX_ACJTAG_RXP_RD_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_ACJTAG_RXP_RD_LANE
#define reg_ANA_RX_ANA_RSVD_OUT_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_ANA_RSVD_OUT_RD_LANE_7_0
#define reg_ANA_RX_SQ_OUT_RD_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_SQ_OUT_RD_LANE
#define reg_ANA_RX_RXCLK_NT_RD_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_RXCLK_NT_RD_LANE
#define reg_ANA_RX_RXCLK_4X_RD_LANE  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_RXCLK_4X_RD_LANE
#define reg_ANA_RX_ADCOUT_77_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG29.BF.ANA_RX_ADCOUT_77_RD_LANE_7_0

// 0x0078	INPUT_PIN_DEBUG_RX_REG30		PHY Isolation Debug Register30
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:0]     r/w   0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_FM_REG_LANE          : 1;	/*     23     r/w   0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_LANE_7_0             : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG30_t;
__xdata __at( 0x5678 ) volatile INPUT_PIN_DEBUG_RX_REG30_t INPUT_PIN_DEBUG_RX_REG30;
#define reg_ANA_RX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG30.BF.ANA_RX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_RX_ANA_RSVD_OUT_LANE_7_0  INPUT_PIN_DEBUG_RX_REG30.BF.ANA_RX_ANA_RSVD_OUT_LANE_7_0

#endif
