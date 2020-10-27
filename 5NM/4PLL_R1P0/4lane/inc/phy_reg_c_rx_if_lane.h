#ifndef PHY_REG_C_RX_IF_LANE_H
#define PHY_REG_C_RX_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_RX_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t PIN_REMOTE_CTRL_FIELD_PAT_RD_LANE_1_0    : 2;	/*  [1:0]       r   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_RD_LANE_5_0        : 6;	/*  [7:2]       r   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t PIN_PU_RX_RD_LANE                        : 1;	/*      9       r   0*/
		uint8_t PIN_PHY_GEN_MAX_RX_RD_LANE_5_0           : 6;	/*[15:10]       r   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t PIN_PHY_GEN_RX_RD_LANE_5_0               : 6;	/*[23:18]       r   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:24]     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_RD_LANE           : 1;	/*     29       r   0*/
		uint8_t PIN_PACKET_SYNC_EN_RD_LANE               : 1;	/*     30       r   0*/
		uint8_t PIN_LOCAL_CTRL_FIELD_READY_RD_LANE       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG0_t;
__xdata __at( 0x5600 ) volatile INPUT_PIN_DEBUG_RX_REG0_t INPUT_PIN_DEBUG_RX_REG0;
#define reg_PIN_REMOTE_CTRL_FIELD_PAT_RD_LANE_1_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_REMOTE_CTRL_FIELD_PAT_RD_LANE_1_0
#define reg_PIN_REMOTE_CTRL_FIELD_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_REMOTE_CTRL_FIELD_RD_LANE_5_0
#define reg_PIN_PU_RX_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PU_RX_RD_LANE
#define reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PHY_GEN_MAX_RX_RD_LANE_5_0
#define reg_PIN_PHY_GEN_RX_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PHY_GEN_RX_RD_LANE_5_0
#define reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PAPTA_TRAIN_ENABLE_RD_LANE
#define reg_PIN_PACKET_SYNC_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_PACKET_SYNC_EN_RD_LANE
#define reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE  INPUT_PIN_DEBUG_RX_REG0.BF.PIN_LOCAL_CTRL_FIELD_READY_RD_LANE

// 0x0004	INPUT_PIN_DEBUG_RX_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_8       : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:8]     r/w   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_VALID_RD_LANE    : 1;	/*     14       r   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_RESET_RD_LANE    : 1;	/*     15       r   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_PAT_RD_LANE_1_0  : 2;	/*[17:16]       r   0*/
		uint8_t PIN_REMOTE_STATUS_FIELD_RD_LANE_5_0      : 6;	/*[23:18]       r   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:24]     r/w   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_VALID_RD_LANE      : 1;	/*     27       r   0*/
		uint8_t PIN_REMOTE_CTRL_FIELD_RESET_RD_LANE_3_0  : 4;	/*[31:28]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG1_t;
__xdata __at( 0x5604 ) volatile INPUT_PIN_DEBUG_RX_REG1_t INPUT_PIN_DEBUG_RX_REG1;
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_8  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_8
#define reg_PIN_REMOTE_STATUS_FIELD_VALID_RD_LANE  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_VALID_RD_LANE
#define reg_PIN_REMOTE_STATUS_FIELD_RESET_RD_LANE  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_RESET_RD_LANE
#define reg_PIN_REMOTE_STATUS_FIELD_PAT_RD_LANE_1_0  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_PAT_RD_LANE_1_0
#define reg_PIN_REMOTE_STATUS_FIELD_RD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_STATUS_FIELD_RD_LANE_5_0
#define reg_PIN_REMOTE_CTRL_FIELD_VALID_RD_LANE  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_CTRL_FIELD_VALID_RD_LANE
#define reg_PIN_REMOTE_CTRL_FIELD_RESET_RD_LANE_3_0  INPUT_PIN_DEBUG_RX_REG1.BF.PIN_REMOTE_CTRL_FIELD_RESET_RD_LANE_3_0

// 0x0008	INPUT_PIN_DEBUG_RX_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t PIN_SYNC_DET_EN_RD_LANE                  : 1;	/*      0       r   0*/
		uint8_t PIN_SNRZ_MODE_RD_LANE                    : 1;	/*      1       r   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_RD_LANE              : 1;	/*      2       r   0*/
		uint8_t PIN_RX_INIT_RD_LANE                      : 1;	/*      3       r   0*/
		uint8_t PIN_RX_DC_TERM_EN_RD_LANE                : 1;	/*      4       r   0*/
		uint8_t PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0         : 3;	/*  [7:5]       r   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t PIN_RX_ACJTAG_MODE_RD_LANE               : 1;	/*      9       r   0*/
		uint8_t PIN_RX_ACJTAG_INIT_CLK_RD_LANE           : 1;	/*     10       r   0*/
		uint8_t PIN_RX_ACJTAG_INITP_RD_LANE              : 1;	/*     11       r   0*/
		uint8_t PIN_RX_ACJTAG_INITN_RD_LANE              : 1;	/*     12       r   0*/
		uint8_t PIN_RX_ACJTAG_HYST_RD_LANE_2_0           : 3;	/*[15:13]       r   0*/
		uint8_t PIN_RX_ACJTAG_EN_RD_LANE                 : 1;	/*     16       r   0*/
		uint8_t PIN_RX_ACJTAG_AC_RD_LANE                 : 1;	/*     17       r   0*/
		uint8_t PIN_REPEAT_SRC_GEN_RX_RD_LANE_5_0        : 6;	/*[23:18]       r   0*/
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_7_0        : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG2_t;
__xdata __at( 0x5608 ) volatile INPUT_PIN_DEBUG_RX_REG2_t INPUT_PIN_DEBUG_RX_REG2;
#define reg_PIN_SYNC_DET_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_SYNC_DET_EN_RD_LANE
#define reg_PIN_SNRZ_MODE_RD_LANE  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_SNRZ_MODE_RD_LANE
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
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG2.BF.PIN_RESERVED_INPUT_RX_RD_LANE_7_0

// 0x000c	INPUT_PIN_DEBUG_RX_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t PIN_CACHE_DATA_RD_LANE_31_8_b0           : 8;	/* [23:0]       r   0*/
		uint8_t PIN_CACHE_DATA_RD_LANE_31_8_b1           : 8;	/* [23:0]       r   0*/
		uint8_t PIN_CACHE_DATA_RD_LANE_31_8_b2           : 8;	/* [23:0]       r   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:24]     r/w   0*/
		uint8_t PIN_RESET_CORE_RX_RD_LANE                : 1;	/*     27       r   0*/
		uint8_t PIN_RXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*[30:28]       r   0*/
		uint8_t PIN_TX_TRAIN_FRAME_LOCK_ENABLE_RD_LANE   : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG3_t;
__xdata __at( 0x560c ) volatile INPUT_PIN_DEBUG_RX_REG3_t INPUT_PIN_DEBUG_RX_REG3;
#define reg_PIN_CACHE_DATA_RD_LANE_31_8_b0  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_8_b0
#define reg_PIN_CACHE_DATA_RD_LANE_31_8_b1  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_8_b1
#define reg_PIN_CACHE_DATA_RD_LANE_31_8_b2  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_CACHE_DATA_RD_LANE_31_8_b2
#define reg_PIN_RESET_CORE_RX_RD_LANE  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_RESET_CORE_RX_RD_LANE
#define reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_RXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_TX_TRAIN_FRAME_LOCK_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG3.BF.PIN_TX_TRAIN_FRAME_LOCK_ENABLE_RD_LANE

// 0x0010	INPUT_PIN_DEBUG_RX_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16_b0  : 8;	/* [15:0]       r   0*/
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16_b1  : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t PIN_MCU_REMOTE_ACK_RD_LANE               : 1;	/*     22       r   0*/
		uint8_t PIN_CACHE_DATA_VALID_RD_LANE             : 1;	/*     23       r   0*/
		uint8_t PIN_CACHE_DATA_RD_LANE_7_0               : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG4_t;
__xdata __at( 0x5610 ) volatile INPUT_PIN_DEBUG_RX_REG4_t INPUT_PIN_DEBUG_RX_REG4;
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16_b0  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16_b0
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16_b1  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16_b1
#define reg_PIN_MCU_REMOTE_ACK_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_MCU_REMOTE_ACK_RD_LANE
#define reg_PIN_CACHE_DATA_VALID_RD_LANE  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_CACHE_DATA_VALID_RD_LANE
#define reg_PIN_CACHE_DATA_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG4.BF.PIN_CACHE_DATA_RD_LANE_7_0
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_16  INPUT_PIN_DEBUG_RX_REG4.WT.W0

// 0x0014	INPUT_PIN_DEBUG_RX_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_31_24      : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t PIN_MCU_REMOTE_REQ_RD_LANE               : 1;	/*     15       r   0*/
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0_b0   : 8;	/*[31:16]       r   0*/
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0_b1   : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG5_t;
__xdata __at( 0x5614 ) volatile INPUT_PIN_DEBUG_RX_REG5_t INPUT_PIN_DEBUG_RX_REG5;
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_24  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_31_24
#define reg_PIN_MCU_REMOTE_REQ_RD_LANE  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_REQ_RD_LANE
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0_b0
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_RX_REG5.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0_b1
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_15_0  INPUT_PIN_DEBUG_RX_REG5.WT.W1

// 0x0018	INPUT_PIN_DEBUG_RX_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t LOCAL_CTRL_FIELD_READY_FM_REG_LANE       : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_LANE              : 1;	/*      1     r/w   0*/
		uint8_t PIN_STRX_TRAIN_FIELD_END_IN_RD_LANE      : 1;	/*      2       r   0*/
		uint8_t PIN_STRX_TRAIN_CMD_VALID_IN_RD_LANE      : 1;	/*      3       r   0*/
		uint8_t PIN_STRX_ENABLE_RD_LANE                  : 1;	/*      4       r   0*/
		uint8_t PIN_RXDATA_PRE_CODE_EN_RD_LANE           : 1;	/*      5       r   0*/
		uint8_t PIN_RXDATA_GRAY_CODE_EN_RD_LANE          : 1;	/*      6       r   0*/
		uint8_t PIN_MCU_ONEWIRE_IN_RD_LANE               : 1;	/*      7       r   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b0    : 8;	/* [31:8]       r   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b1    : 8;	/* [31:8]       r   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b2    : 8;	/* [31:8]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG6_t;
__xdata __at( 0x5618 ) volatile INPUT_PIN_DEBUG_RX_REG6_t INPUT_PIN_DEBUG_RX_REG6;
#define reg_LOCAL_CTRL_FIELD_READY_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.LOCAL_CTRL_FIELD_READY_FM_REG_LANE
#define reg_LOCAL_CTRL_FIELD_READY_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.LOCAL_CTRL_FIELD_READY_LANE
#define reg_PIN_STRX_TRAIN_FIELD_END_IN_RD_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_STRX_TRAIN_FIELD_END_IN_RD_LANE
#define reg_PIN_STRX_TRAIN_CMD_VALID_IN_RD_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_STRX_TRAIN_CMD_VALID_IN_RD_LANE
#define reg_PIN_STRX_ENABLE_RD_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_STRX_ENABLE_RD_LANE
#define reg_PIN_RXDATA_PRE_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_RXDATA_PRE_CODE_EN_RD_LANE
#define reg_PIN_RXDATA_GRAY_CODE_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_RXDATA_GRAY_CODE_EN_RD_LANE
#define reg_PIN_MCU_ONEWIRE_IN_RD_LANE  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_MCU_ONEWIRE_IN_RD_LANE
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b0  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b0
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b1  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b1
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b2  INPUT_PIN_DEBUG_RX_REG6.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_23_0_b2

// 0x001c	INPUT_PIN_DEBUG_RX_REG7		PHY Isolation Debug Register7
typedef union {
	struct {
		uint8_t REMOTE_CTRL_FIELD_FM_REG_LANE            : 1;	/*      0     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_LANE_5_0               : 6;	/*  [6:1]     r/w   0*/
		uint8_t PU_RX_FM_REG_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t PU_RX_LANE                               : 1;	/*      8     r/w   0*/
		uint8_t PHY_GEN_MAX_RX_FM_REG_LANE               : 1;	/*      9     r/w   0*/
		uint8_t PHY_GEN_MAX_RX_LANE_5_0                  : 6;	/*[15:10]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t PHY_GEN_RX_FM_REG_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t PHY_GEN_RX_LANE_5_0                      : 6;	/*[23:18]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:24]     r/w   0*/
		uint8_t PAPTA_TRAIN_ENABLE_FM_REG_LANE           : 1;	/*     28     r/w   0*/
		uint8_t PAPTA_TRAIN_ENABLE_LANE                  : 1;	/*     29     r/w   0*/
		uint8_t PACKET_SYNC_EN_FM_REG_LANE               : 1;	/*     30     r/w   0*/
		uint8_t PACKET_SYNC_EN_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG7_t;
__xdata __at( 0x561c ) volatile INPUT_PIN_DEBUG_RX_REG7_t INPUT_PIN_DEBUG_RX_REG7;
#define reg_REMOTE_CTRL_FIELD_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG7.BF.REMOTE_CTRL_FIELD_LANE_5_0
#define reg_PU_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PU_RX_FM_REG_LANE
#define reg_PU_RX_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PU_RX_LANE
#define reg_PHY_GEN_MAX_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PHY_GEN_MAX_RX_FM_REG_LANE
#define reg_PHY_GEN_MAX_RX_LANE_5_0  INPUT_PIN_DEBUG_RX_REG7.BF.PHY_GEN_MAX_RX_LANE_5_0
#define reg_PHY_GEN_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PHY_GEN_RX_FM_REG_LANE
#define reg_PHY_GEN_RX_LANE_5_0  INPUT_PIN_DEBUG_RX_REG7.BF.PHY_GEN_RX_LANE_5_0
#define reg_PAPTA_TRAIN_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PAPTA_TRAIN_ENABLE_FM_REG_LANE
#define reg_PAPTA_TRAIN_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PAPTA_TRAIN_ENABLE_LANE
#define reg_PACKET_SYNC_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PACKET_SYNC_EN_FM_REG_LANE
#define reg_PACKET_SYNC_EN_LANE  INPUT_PIN_DEBUG_RX_REG7.BF.PACKET_SYNC_EN_LANE

// 0x0020	INPUT_PIN_DEBUG_RX_REG8		PHY Isolation Debug Register8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_FM_REG_LANE    : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_LANE           : 1;	/*      9     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_FM_REG_LANE    : 1;	/*     10     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_LANE           : 1;	/*     11     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_PAT_FM_REG_LANE      : 1;	/*     12     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_PAT_LANE_1_0         : 2;	/*[14:13]     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_FM_REG_LANE          : 1;	/*     15     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_LANE_5_0             : 6;	/*[21:16]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_FM_REG_LANE      : 1;	/*     22     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_LANE             : 1;	/*     23     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_FM_REG_LANE      : 1;	/*     24     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_LANE_3_0         : 4;	/*[28:25]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_FM_REG_LANE        : 1;	/*     29     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_LANE_1_0           : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG8_t;
__xdata __at( 0x5620 ) volatile INPUT_PIN_DEBUG_RX_REG8_t INPUT_PIN_DEBUG_RX_REG8;
#define reg_REMOTE_STATUS_FIELD_VALID_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_VALID_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_RESET_LANE
#define reg_REMOTE_STATUS_FIELD_PAT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_PAT_LANE_1_0  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_PAT_LANE_1_0
#define reg_REMOTE_STATUS_FIELD_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_LANE_5_0  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_STATUS_FIELD_LANE_5_0
#define reg_REMOTE_CTRL_FIELD_VALID_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_CTRL_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_CTRL_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_CTRL_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_LANE_3_0  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_CTRL_FIELD_RESET_LANE_3_0
#define reg_REMOTE_CTRL_FIELD_PAT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_CTRL_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_PAT_LANE_1_0  INPUT_PIN_DEBUG_RX_REG8.BF.REMOTE_CTRL_FIELD_PAT_LANE_1_0

// 0x0024	INPUT_PIN_DEBUG_RX_REG9		PHY Isolation Debug Register9
typedef union {
	struct {
		uint8_t RX_INIT_LANE                             : 1;	/*      0     r/w   0*/
		uint8_t RX_DC_TERM_EN_FM_REG_LANE                : 1;	/*      1     r/w   0*/
		uint8_t RX_DC_TERM_EN_LANE                       : 1;	/*      2     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_FM_REG_LANE             : 1;	/*      3     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_LANE_2_0                : 3;	/*  [6:4]     r/w   0*/
		uint8_t RX_ACJTAG_MODE_FM_REG_LANE               : 1;	/*      7     r/w   0*/
		uint8_t RX_ACJTAG_MODE_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_FM_REG_LANE           : 1;	/*      9     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_LANE                  : 1;	/*     10     r/w   0*/
		uint8_t RX_ACJTAG_INITP_FM_REG_LANE              : 1;	/*     11     r/w   0*/
		uint8_t RX_ACJTAG_INITP_LANE                     : 1;	/*     12     r/w   0*/
		uint8_t RX_ACJTAG_INITN_FM_REG_LANE              : 1;	/*     13     r/w   0*/
		uint8_t RX_ACJTAG_INITN_LANE                     : 1;	/*     14     r/w   0*/
		uint8_t RX_ACJTAG_HYST_FM_REG_LANE               : 1;	/*     15     r/w   0*/
		uint8_t RX_ACJTAG_HYST_LANE_2_0                  : 3;	/*[18:16]     r/w   0*/
		uint8_t RX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*     19     r/w   0*/
		uint8_t RX_ACJTAG_EN_LANE                        : 1;	/*     20     r/w   0*/
		uint8_t RX_ACJTAG_AC_FM_REG_LANE                 : 1;	/*     21     r/w   0*/
		uint8_t RX_ACJTAG_AC_LANE                        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG9_t;
__xdata __at( 0x5624 ) volatile INPUT_PIN_DEBUG_RX_REG9_t INPUT_PIN_DEBUG_RX_REG9;
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
#define reg_RX_ACJTAG_HYST_LANE_2_0  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_HYST_LANE_2_0
#define reg_RX_ACJTAG_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_EN_FM_REG_LANE
#define reg_RX_ACJTAG_EN_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_EN_LANE
#define reg_RX_ACJTAG_AC_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_AC_FM_REG_LANE
#define reg_RX_ACJTAG_AC_LANE  INPUT_PIN_DEBUG_RX_REG9.BF.RX_ACJTAG_AC_LANE

// 0x0028	INPUT_PIN_DEBUG_RX_REG10		PHY Isolation Debug Register10
typedef union {
	struct {
		uint8_t MCU_REMOTE_COMMAND_LANE_31_24            : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t MCU_REMOTE_ACK_FM_REG_LANE               : 1;	/*     15     r/w   0*/
		uint8_t MCU_REMOTE_ACK_LANE                      : 1;	/*     16     r/w   0*/
		uint8_t RESET_CORE_RX_FM_REG_LANE                : 1;	/*     17     r/w   0*/
		uint8_t RESET_CORE_RX_LANE                       : 1;	/*     18     r/w   0*/
		uint8_t RXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*     19     r/w   0*/
		uint8_t RXDCLK_NT_SEL_LANE_2_0                   : 3;	/*[22:20]     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE   : 1;	/*     23     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_LANE          : 1;	/*     24     r/w   0*/
		uint8_t SYNC_DET_EN_FM_REG_LANE                  : 1;	/*     25     r/w   0*/
		uint8_t SYNC_DET_EN_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t SNRZ_MODE_FM_REG_LANE                    : 1;	/*     27     r/w   0*/
		uint8_t SNRZ_MODE_LANE                           : 1;	/*     28     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*     29     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t RX_INIT_FM_REG_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG10_t;
__xdata __at( 0x5628 ) volatile INPUT_PIN_DEBUG_RX_REG10_t INPUT_PIN_DEBUG_RX_REG10;
#define reg_MCU_REMOTE_COMMAND_LANE_31_24  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_COMMAND_LANE_31_24
#define reg_MCU_REMOTE_ACK_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_ACK_FM_REG_LANE
#define reg_MCU_REMOTE_ACK_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.MCU_REMOTE_ACK_LANE
#define reg_RESET_CORE_RX_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RESET_CORE_RX_FM_REG_LANE
#define reg_RESET_CORE_RX_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RESET_CORE_RX_LANE
#define reg_RXDCLK_NT_SEL_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RXDCLK_NT_SEL_FM_REG_LANE
#define reg_RXDCLK_NT_SEL_LANE_2_0  INPUT_PIN_DEBUG_RX_REG10.BF.RXDCLK_NT_SEL_LANE_2_0
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.TX_TRAIN_FRAME_LOCK_ENABLE_LANE
#define reg_SYNC_DET_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.SYNC_DET_EN_FM_REG_LANE
#define reg_SYNC_DET_EN_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.SYNC_DET_EN_LANE
#define reg_SNRZ_MODE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.SNRZ_MODE_FM_REG_LANE
#define reg_SNRZ_MODE_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.SNRZ_MODE_LANE
#define reg_RX_TRAIN_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RX_TRAIN_ENABLE_FM_REG_LANE
#define reg_RX_TRAIN_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RX_TRAIN_ENABLE_LANE
#define reg_RX_INIT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG10.BF.RX_INIT_FM_REG_LANE

// 0x002c	INPUT_PIN_DEBUG_RX_REG11		PHY Isolation Debug Register11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t MCU_REMOTE_REQ_FM_REG_LANE               : 1;	/*      5     r/w   0*/
		uint8_t MCU_REMOTE_REQ_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_FM_REG_LANE           : 1;	/*      7     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_LANE_23_0_b0          : 8;	/* [31:8]     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_LANE_23_0_b1          : 8;	/* [31:8]     r/w   0*/
		uint8_t MCU_REMOTE_COMMAND_LANE_23_0_b2          : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG11_t;
__xdata __at( 0x562c ) volatile INPUT_PIN_DEBUG_RX_REG11_t INPUT_PIN_DEBUG_RX_REG11;
#define reg_MCU_REMOTE_REQ_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_REQ_FM_REG_LANE
#define reg_MCU_REMOTE_REQ_LANE  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_REQ_LANE
#define reg_MCU_REMOTE_COMMAND_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_FM_REG_LANE
#define reg_MCU_REMOTE_COMMAND_LANE_23_0_b0  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_LANE_23_0_b0
#define reg_MCU_REMOTE_COMMAND_LANE_23_0_b1  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_LANE_23_0_b1
#define reg_MCU_REMOTE_COMMAND_LANE_23_0_b2  INPUT_PIN_DEBUG_RX_REG11.BF.MCU_REMOTE_COMMAND_LANE_23_0_b2

// 0x0030	INPUT_PIN_DEBUG_RX_REG12		PHY Isolation Debug Register12
typedef union {
	struct {
		uint8_t MCU_REMOTE_STATUS_LANE_31_0_b0           : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_LANE_31_0_b1           : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_LANE_31_0_b2           : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_LANE_31_0_b3           : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG12_t;
__xdata __at( 0x5630 ) volatile INPUT_PIN_DEBUG_RX_REG12_t INPUT_PIN_DEBUG_RX_REG12;
#define reg_MCU_REMOTE_STATUS_LANE_31_0_b0  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_31_0_b0
#define reg_MCU_REMOTE_STATUS_LANE_31_0_b1  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_31_0_b1
#define reg_MCU_REMOTE_STATUS_LANE_31_0_b2  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_31_0_b2
#define reg_MCU_REMOTE_STATUS_LANE_31_0_b3  INPUT_PIN_DEBUG_RX_REG12.BF.MCU_REMOTE_STATUS_LANE_31_0_b3

// 0x0034	INPUT_PIN_DEBUG_RX_REG13		PHY Isolation Debug Register13
typedef union {
	struct {
		uint8_t DPHY_ANA_MARGIN_OFFSET_CHG_RD_LANE       : 1;	/*      0       r   0*/
		uint8_t DPHY_ANA_MARGIN_OFFSET_RD_LANE_6_0       : 7;	/*  [7:1]       r   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w   0*/
		uint8_t DPHY_ANA_MARGIN_EN_RD_LANE               : 1;	/*     10       r   0*/
		uint8_t DPHY_ANA_RX_PRESET_HINT_RD_LANE_3_0      : 4;	/*[14:11]       r   0*/
		uint8_t DPHY_ANA_RX_HIZ_RD_LANE                  : 1;	/*     15       r   0*/
		uint8_t DPHY_ANA_PU_SQ_RD_LANE                   : 1;	/*     16       r   0*/
		uint8_t DPHY_ANA_EYE_OPEN_EN_RD_LANE             : 1;	/*     17       r   0*/
		uint8_t DPHY_ANA_DFE_UPDATE_DIS_RD_LANE          : 1;	/*     18       r   0*/
		uint8_t DPHY_ANA_DFE_PAT_DIS_RD_LANE             : 1;	/*     19       r   0*/
		uint8_t DPHY_ANA_DFE_EN_RD_LANE                  : 1;	/*     20       r   0*/
		uint8_t STRX_TRAIN_FIELD_END_IN_FM_REG_LANE      : 1;	/*     21     r/w   0*/
		uint8_t STRX_TRAIN_FIELD_END_IN_LANE             : 1;	/*     22     r/w   0*/
		uint8_t STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE      : 1;	/*     23     r/w   0*/
		uint8_t STRX_TRAIN_CMD_VALID_IN_LANE             : 1;	/*     24     r/w   0*/
		uint8_t STRX_ENABLE_FM_REG_LANE                  : 1;	/*     25     r/w   0*/
		uint8_t STRX_ENABLE_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t RXDATA_PRE_CODE_EN_FM_REG_LANE           : 1;	/*     27     r/w   0*/
		uint8_t RXDATA_PRE_CODE_EN_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t RXDATA_GRAY_CODE_EN_FM_REG_LANE          : 1;	/*     29     r/w   0*/
		uint8_t RXDATA_GRAY_CODE_EN_LANE                 : 1;	/*     30     r/w   0*/
		uint8_t MCU_REMOTE_STATUS_FM_REG_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG13_t;
__xdata __at( 0x5634 ) volatile INPUT_PIN_DEBUG_RX_REG13_t INPUT_PIN_DEBUG_RX_REG13;
#define reg_DPHY_ANA_MARGIN_OFFSET_CHG_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_MARGIN_OFFSET_CHG_RD_LANE
#define reg_DPHY_ANA_MARGIN_OFFSET_RD_LANE_6_0  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_MARGIN_OFFSET_RD_LANE_6_0
#define reg_DPHY_ANA_MARGIN_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_MARGIN_EN_RD_LANE
#define reg_DPHY_ANA_RX_PRESET_HINT_RD_LANE_3_0  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_RX_PRESET_HINT_RD_LANE_3_0
#define reg_DPHY_ANA_RX_HIZ_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_RX_HIZ_RD_LANE
#define reg_DPHY_ANA_PU_SQ_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_PU_SQ_RD_LANE
#define reg_DPHY_ANA_EYE_OPEN_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_EYE_OPEN_EN_RD_LANE
#define reg_DPHY_ANA_DFE_UPDATE_DIS_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_DFE_UPDATE_DIS_RD_LANE
#define reg_DPHY_ANA_DFE_PAT_DIS_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_DFE_PAT_DIS_RD_LANE
#define reg_DPHY_ANA_DFE_EN_RD_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.DPHY_ANA_DFE_EN_RD_LANE
#define reg_STRX_TRAIN_FIELD_END_IN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.STRX_TRAIN_FIELD_END_IN_FM_REG_LANE
#define reg_STRX_TRAIN_FIELD_END_IN_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.STRX_TRAIN_FIELD_END_IN_LANE
#define reg_STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE
#define reg_STRX_TRAIN_CMD_VALID_IN_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.STRX_TRAIN_CMD_VALID_IN_LANE
#define reg_STRX_ENABLE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.STRX_ENABLE_FM_REG_LANE
#define reg_STRX_ENABLE_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.STRX_ENABLE_LANE
#define reg_RXDATA_PRE_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.RXDATA_PRE_CODE_EN_FM_REG_LANE
#define reg_RXDATA_PRE_CODE_EN_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.RXDATA_PRE_CODE_EN_LANE
#define reg_RXDATA_GRAY_CODE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.RXDATA_GRAY_CODE_EN_FM_REG_LANE
#define reg_RXDATA_GRAY_CODE_EN_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.RXDATA_GRAY_CODE_EN_LANE
#define reg_MCU_REMOTE_STATUS_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG13.BF.MCU_REMOTE_STATUS_FM_REG_LANE

// 0x0038	INPUT_PIN_DEBUG_RX_REG14		PHY Isolation Debug Register14
typedef union {
	struct {
		uint8_t MARGIN_OFFSET_FM_REG_LANE                : 1;	/*      0     r/w   0*/
		uint8_t MARGIN_OFFSET_LANE_6_0                   : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t MARGIN_EN_FM_REG_LANE                    : 1;	/*      9     r/w   0*/
		uint8_t MARGIN_EN_LANE                           : 1;	/*     10     r/w   0*/
		uint8_t RX_PRESET_HINT_FM_REG_LANE               : 1;	/*     11     r/w   0*/
		uint8_t RX_PRESET_HINT_LANE_3_0                  : 4;	/*[15:12]     r/w   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t RX_HIZ_FM_REG_LANE                       : 1;	/*     18     r/w   0*/
		uint8_t RX_HIZ_LANE                              : 1;	/*     19     r/w   0*/
		uint8_t PU_SQ_FM_REG_LANE                        : 1;	/*     20     r/w   0*/
		uint8_t PU_SQ_LANE                               : 1;	/*     21     r/w   0*/
		uint8_t EYE_OPEN_EN_FM_REG_LANE                  : 1;	/*     22     r/w   0*/
		uint8_t EYE_OPEN_EN_LANE                         : 1;	/*     23     r/w   0*/
		uint8_t DFE_UPDATE_DIS_FM_REG_LANE               : 1;	/*     24     r/w   0*/
		uint8_t DFE_UPDATE_DIS_LANE                      : 1;	/*     25     r/w   0*/
		uint8_t DFE_PAT_DIS_FM_REG_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t DFE_PAT_DIS_LANE                         : 1;	/*     27     r/w   0*/
		uint8_t DFE_EN_FM_REG_LANE                       : 1;	/*     28     r/w   0*/
		uint8_t DFE_EN_LANE                              : 1;	/*     29     r/w   0*/
		uint8_t DPHY_ANA_MARGIN_TYPE_RD_LANE             : 1;	/*     30       r   0*/
		uint8_t DPHY_ANA_MARGIN_DIR_RD_LANE              : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG14_t;
__xdata __at( 0x5638 ) volatile INPUT_PIN_DEBUG_RX_REG14_t INPUT_PIN_DEBUG_RX_REG14;
#define reg_MARGIN_OFFSET_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.MARGIN_OFFSET_FM_REG_LANE
#define reg_MARGIN_OFFSET_LANE_6_0  INPUT_PIN_DEBUG_RX_REG14.BF.MARGIN_OFFSET_LANE_6_0
#define reg_MARGIN_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.MARGIN_EN_FM_REG_LANE
#define reg_MARGIN_EN_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.MARGIN_EN_LANE
#define reg_RX_PRESET_HINT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.RX_PRESET_HINT_FM_REG_LANE
#define reg_RX_PRESET_HINT_LANE_3_0  INPUT_PIN_DEBUG_RX_REG14.BF.RX_PRESET_HINT_LANE_3_0
#define reg_RX_HIZ_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.RX_HIZ_FM_REG_LANE
#define reg_RX_HIZ_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.RX_HIZ_LANE
#define reg_PU_SQ_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.PU_SQ_FM_REG_LANE
#define reg_PU_SQ_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.PU_SQ_LANE
#define reg_EYE_OPEN_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.EYE_OPEN_EN_FM_REG_LANE
#define reg_EYE_OPEN_EN_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.EYE_OPEN_EN_LANE
#define reg_DFE_UPDATE_DIS_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DFE_UPDATE_DIS_FM_REG_LANE
#define reg_DFE_UPDATE_DIS_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DFE_UPDATE_DIS_LANE
#define reg_DFE_PAT_DIS_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DFE_PAT_DIS_FM_REG_LANE
#define reg_DFE_PAT_DIS_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DFE_PAT_DIS_LANE
#define reg_DFE_EN_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DFE_EN_FM_REG_LANE
#define reg_DFE_EN_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DFE_EN_LANE
#define reg_DPHY_ANA_MARGIN_TYPE_RD_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DPHY_ANA_MARGIN_TYPE_RD_LANE
#define reg_DPHY_ANA_MARGIN_DIR_RD_LANE  INPUT_PIN_DEBUG_RX_REG14.BF.DPHY_ANA_MARGIN_DIR_RD_LANE

// 0x003c	INPUT_PIN_DEBUG_RX_REG15		PHY Isolation Debug Register15
typedef union {
	struct {
		uint8_t ANA_RX_ANA_RSVD_OUT_RD_LANE_7_0          : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_RD_LANE                    : 1;	/*     15       r   0*/
		uint8_t ANA_RX_UP2FLOOP_RD_LANE_3_0              : 4;	/*[19:16]       r   0*/
		uint8_t ANA_RX_DN2FLOOP_RD_LANE_3_0              : 4;	/*[23:20]       r   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t MARGIN_TYPE_FM_REG_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t MARGIN_TYPE_LANE                         : 1;	/*     27     r/w   0*/
		uint8_t MARGIN_DIR_FM_REG_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t MARGIN_DIR_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t MARGIN_OFFSET_CHG_FM_REG_LANE            : 1;	/*     30     r/w   0*/
		uint8_t MARGIN_OFFSET_CHG_LANE                   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG15_t;
__xdata __at( 0x563c ) volatile INPUT_PIN_DEBUG_RX_REG15_t INPUT_PIN_DEBUG_RX_REG15;
#define reg_ANA_RX_ANA_RSVD_OUT_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_ANA_RSVD_OUT_RD_LANE_7_0
#define reg_ANA_RX_SQ_OUT_RD_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_SQ_OUT_RD_LANE
#define reg_ANA_RX_UP2FLOOP_RD_LANE_3_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_UP2FLOOP_RD_LANE_3_0
#define reg_ANA_RX_DN2FLOOP_RD_LANE_3_0  INPUT_PIN_DEBUG_RX_REG15.BF.ANA_RX_DN2FLOOP_RD_LANE_3_0
#define reg_MARGIN_TYPE_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.MARGIN_TYPE_FM_REG_LANE
#define reg_MARGIN_TYPE_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.MARGIN_TYPE_LANE
#define reg_MARGIN_DIR_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.MARGIN_DIR_FM_REG_LANE
#define reg_MARGIN_DIR_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.MARGIN_DIR_LANE
#define reg_MARGIN_OFFSET_CHG_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.MARGIN_OFFSET_CHG_FM_REG_LANE
#define reg_MARGIN_OFFSET_CHG_LANE  INPUT_PIN_DEBUG_RX_REG15.BF.MARGIN_OFFSET_CHG_LANE

// 0x0040	INPUT_PIN_DEBUG_RX_REG16		PHY Isolation Debug Register16
typedef union {
	struct {
		uint8_t ANA_RX_DOUT_MSB_RD_LANE_39_8_b0          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_DOUT_MSB_RD_LANE_39_8_b1          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_DOUT_MSB_RD_LANE_39_8_b2          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_DOUT_MSB_RD_LANE_39_8_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG16_t;
__xdata __at( 0x5640 ) volatile INPUT_PIN_DEBUG_RX_REG16_t INPUT_PIN_DEBUG_RX_REG16;
#define reg_ANA_RX_DOUT_MSB_RD_LANE_39_8_b0  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_DOUT_MSB_RD_LANE_39_8_b0
#define reg_ANA_RX_DOUT_MSB_RD_LANE_39_8_b1  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_DOUT_MSB_RD_LANE_39_8_b1
#define reg_ANA_RX_DOUT_MSB_RD_LANE_39_8_b2  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_DOUT_MSB_RD_LANE_39_8_b2
#define reg_ANA_RX_DOUT_MSB_RD_LANE_39_8_b3  INPUT_PIN_DEBUG_RX_REG16.BF.ANA_RX_DOUT_MSB_RD_LANE_39_8_b3

// 0x0044	INPUT_PIN_DEBUG_RX_REG17		PHY Isolation Debug Register17
typedef union {
	struct {
		uint8_t ANA_RX_DOUT_LSB_RD_LANE_39_16_b0         : 8;	/* [23:0]       r   0*/
		uint8_t ANA_RX_DOUT_LSB_RD_LANE_39_16_b1         : 8;	/* [23:0]       r   0*/
		uint8_t ANA_RX_DOUT_LSB_RD_LANE_39_16_b2         : 8;	/* [23:0]       r   0*/
		uint8_t ANA_RX_DOUT_MSB_RD_LANE_7_0              : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG17_t;
__xdata __at( 0x5644 ) volatile INPUT_PIN_DEBUG_RX_REG17_t INPUT_PIN_DEBUG_RX_REG17;
#define reg_ANA_RX_DOUT_LSB_RD_LANE_39_16_b0  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_DOUT_LSB_RD_LANE_39_16_b0
#define reg_ANA_RX_DOUT_LSB_RD_LANE_39_16_b1  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_DOUT_LSB_RD_LANE_39_16_b1
#define reg_ANA_RX_DOUT_LSB_RD_LANE_39_16_b2  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_DOUT_LSB_RD_LANE_39_16_b2
#define reg_ANA_RX_DOUT_MSB_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG17.BF.ANA_RX_DOUT_MSB_RD_LANE_7_0

// 0x0048	INPUT_PIN_DEBUG_RX_REG18		PHY Isolation Debug Register18
typedef union {
	struct {
		uint8_t ANA_RX_EOUT_TOP_RD_LANE_39_24_b0         : 8;	/* [15:0]       r   0*/
		uint8_t ANA_RX_EOUT_TOP_RD_LANE_39_24_b1         : 8;	/* [15:0]       r   0*/
		uint8_t ANA_RX_DOUT_LSB_RD_LANE_15_0_b0          : 8;	/*[31:16]       r   0*/
		uint8_t ANA_RX_DOUT_LSB_RD_LANE_15_0_b1          : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG18_t;
__xdata __at( 0x5648 ) volatile INPUT_PIN_DEBUG_RX_REG18_t INPUT_PIN_DEBUG_RX_REG18;
#define reg_ANA_RX_EOUT_TOP_RD_LANE_39_24_b0  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_EOUT_TOP_RD_LANE_39_24_b0
#define reg_ANA_RX_EOUT_TOP_RD_LANE_39_24_b1  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_EOUT_TOP_RD_LANE_39_24_b1
#define reg_ANA_RX_DOUT_LSB_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_DOUT_LSB_RD_LANE_15_0_b0
#define reg_ANA_RX_DOUT_LSB_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_RX_REG18.BF.ANA_RX_DOUT_LSB_RD_LANE_15_0_b1
#define reg_ANA_RX_EOUT_TOP_RD_LANE_39_24  INPUT_PIN_DEBUG_RX_REG18.WT.W0
#define reg_ANA_RX_DOUT_LSB_RD_LANE_15_0  INPUT_PIN_DEBUG_RX_REG18.WT.W1

// 0x004c	INPUT_PIN_DEBUG_RX_REG19		PHY Isolation Debug Register19
typedef union {
	struct {
		uint8_t ANA_RX_EOUT_MID_RD_LANE_39_32            : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_RX_EOUT_TOP_RD_LANE_23_0_b0          : 8;	/* [31:8]       r   0*/
		uint8_t ANA_RX_EOUT_TOP_RD_LANE_23_0_b1          : 8;	/* [31:8]       r   0*/
		uint8_t ANA_RX_EOUT_TOP_RD_LANE_23_0_b2          : 8;	/* [31:8]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG19_t;
__xdata __at( 0x564c ) volatile INPUT_PIN_DEBUG_RX_REG19_t INPUT_PIN_DEBUG_RX_REG19;
#define reg_ANA_RX_EOUT_MID_RD_LANE_39_32  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_EOUT_MID_RD_LANE_39_32
#define reg_ANA_RX_EOUT_TOP_RD_LANE_23_0_b0  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_EOUT_TOP_RD_LANE_23_0_b0
#define reg_ANA_RX_EOUT_TOP_RD_LANE_23_0_b1  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_EOUT_TOP_RD_LANE_23_0_b1
#define reg_ANA_RX_EOUT_TOP_RD_LANE_23_0_b2  INPUT_PIN_DEBUG_RX_REG19.BF.ANA_RX_EOUT_TOP_RD_LANE_23_0_b2

// 0x0050	INPUT_PIN_DEBUG_RX_REG20		PHY Isolation Debug Register20
typedef union {
	struct {
		uint8_t ANA_RX_EOUT_MID_RD_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_EOUT_MID_RD_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_EOUT_MID_RD_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_EOUT_MID_RD_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG20_t;
__xdata __at( 0x5650 ) volatile INPUT_PIN_DEBUG_RX_REG20_t INPUT_PIN_DEBUG_RX_REG20;
#define reg_ANA_RX_EOUT_MID_RD_LANE_31_0_b0  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_EOUT_MID_RD_LANE_31_0_b0
#define reg_ANA_RX_EOUT_MID_RD_LANE_31_0_b1  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_EOUT_MID_RD_LANE_31_0_b1
#define reg_ANA_RX_EOUT_MID_RD_LANE_31_0_b2  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_EOUT_MID_RD_LANE_31_0_b2
#define reg_ANA_RX_EOUT_MID_RD_LANE_31_0_b3  INPUT_PIN_DEBUG_RX_REG20.BF.ANA_RX_EOUT_MID_RD_LANE_31_0_b3

// 0x0054	INPUT_PIN_DEBUG_RX_REG21		PHY Isolation Debug Register21
typedef union {
	struct {
		uint8_t ANA_RX_EOUT_BOT_RD_LANE_39_8_b0          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_EOUT_BOT_RD_LANE_39_8_b1          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_EOUT_BOT_RD_LANE_39_8_b2          : 8;	/* [31:0]       r   0*/
		uint8_t ANA_RX_EOUT_BOT_RD_LANE_39_8_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG21_t;
__xdata __at( 0x5654 ) volatile INPUT_PIN_DEBUG_RX_REG21_t INPUT_PIN_DEBUG_RX_REG21;
#define reg_ANA_RX_EOUT_BOT_RD_LANE_39_8_b0  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_EOUT_BOT_RD_LANE_39_8_b0
#define reg_ANA_RX_EOUT_BOT_RD_LANE_39_8_b1  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_EOUT_BOT_RD_LANE_39_8_b1
#define reg_ANA_RX_EOUT_BOT_RD_LANE_39_8_b2  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_EOUT_BOT_RD_LANE_39_8_b2
#define reg_ANA_RX_EOUT_BOT_RD_LANE_39_8_b3  INPUT_PIN_DEBUG_RX_REG21.BF.ANA_RX_EOUT_BOT_RD_LANE_39_8_b3

// 0x0058	INPUT_PIN_DEBUG_RX_REG22		PHY Isolation Debug Register22
typedef union {
	struct {
		uint8_t ANA_RX_ANA_RSVD_OUT_LANE_7_0             : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_FM_REG_LANE                : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_LANE                       : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_UP2FLOOP_FM_REG_LANE              : 1;	/*     11     r/w   0*/
		uint8_t ANA_RX_UP2FLOOP_LANE_3_0                 : 4;	/*[15:12]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_DN2FLOOP_FM_REG_LANE              : 1;	/*     17     r/w   0*/
		uint8_t ANA_RX_DN2FLOOP_LANE_3_0                 : 4;	/*[21:18]     r/w   0*/
		uint8_t ANA_RX_ACJTAG_RXN_RD_LANE                : 1;	/*     22       r   0*/
		uint8_t ANA_RX_ACJTAG_RXP_RD_LANE                : 1;	/*     23       r   0*/
		uint8_t ANA_RX_EOUT_BOT_RD_LANE_7_0              : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG22_t;
__xdata __at( 0x5658 ) volatile INPUT_PIN_DEBUG_RX_REG22_t INPUT_PIN_DEBUG_RX_REG22;
#define reg_ANA_RX_ANA_RSVD_OUT_LANE_7_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ANA_RSVD_OUT_LANE_7_0
#define reg_ANA_RX_SQ_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_SQ_OUT_FM_REG_LANE
#define reg_ANA_RX_SQ_OUT_LANE  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_SQ_OUT_LANE
#define reg_ANA_RX_UP2FLOOP_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_UP2FLOOP_FM_REG_LANE
#define reg_ANA_RX_UP2FLOOP_LANE_3_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_UP2FLOOP_LANE_3_0
#define reg_ANA_RX_DN2FLOOP_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_DN2FLOOP_FM_REG_LANE
#define reg_ANA_RX_DN2FLOOP_LANE_3_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_DN2FLOOP_LANE_3_0
#define reg_ANA_RX_ACJTAG_RXN_RD_LANE  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ACJTAG_RXN_RD_LANE
#define reg_ANA_RX_ACJTAG_RXP_RD_LANE  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_ACJTAG_RXP_RD_LANE
#define reg_ANA_RX_EOUT_BOT_RD_LANE_7_0  INPUT_PIN_DEBUG_RX_REG22.BF.ANA_RX_EOUT_BOT_RD_LANE_7_0

// 0x005c	INPUT_PIN_DEBUG_RX_REG23		PHY Isolation Debug Register23
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [30:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [30:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [30:0]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/* [30:0]     r/w   0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_FM_REG_LANE          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_RX_REG23_t;
__xdata __at( 0x565c ) volatile INPUT_PIN_DEBUG_RX_REG23_t INPUT_PIN_DEBUG_RX_REG23;
#define reg_ANA_RX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_RX_REG23.BF.ANA_RX_ANA_RSVD_OUT_FM_REG_LANE

#endif
