#ifndef PHY_REG_C_RX_IF_LANE_H
#define PHY_REG_C_RX_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0    : 8;	/* [15:0]       r   0*/
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1    : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 7;	/*[22:16]     r/w   0*/
		uint8_t PIN_PU_RX_RD_LANE                        : 1;	/*     23       r   0*/
		uint8_t PIN_PHY_GEN_RX_RD_LANE_4_0               : 5;	/*[28:24]       r   0*/
		uint8_t PIN_DFE_UPDATE_DIS_RD_LANE               : 1;	/*     29       r   0*/
		uint8_t PIN_DFE_PAT_DIS_RD_LANE                  : 1;	/*     30       r   0*/
		uint8_t PIN_DFE_EN_RD_LANE                       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_REG3_t;
__xdata __at( 0x2f00 ) volatile INPUT_PIN_DEBUG_REG3_t INPUT_PIN_DEBUG_REG3;
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_REG3.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_REG3.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1
#define reg_PIN_PU_RX_RD_LANE  INPUT_PIN_DEBUG_REG3.BF.PIN_PU_RX_RD_LANE
#define reg_PIN_PHY_GEN_RX_RD_LANE_4_0  INPUT_PIN_DEBUG_REG3.BF.PIN_PHY_GEN_RX_RD_LANE_4_0
#define reg_PIN_DFE_UPDATE_DIS_RD_LANE  INPUT_PIN_DEBUG_REG3.BF.PIN_DFE_UPDATE_DIS_RD_LANE
#define reg_PIN_DFE_PAT_DIS_RD_LANE  INPUT_PIN_DEBUG_REG3.BF.PIN_DFE_PAT_DIS_RD_LANE
#define reg_PIN_DFE_EN_RD_LANE  INPUT_PIN_DEBUG_REG3.BF.PIN_DFE_EN_RD_LANE
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0  INPUT_PIN_DEBUG_REG3.WT.W0

// 0x0004	INPUT_PIN_DEBUG_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t PIN_MCU_REMOTE_COMMAND_RD_LANE_7_0       : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w   0*/
		uint8_t PIN_MCU_REMOTE_ACK_RD_LANE               : 1;	/*     12       r   0*/
		uint8_t PIN_RXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*[15:13]       r   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_RD_LANE              : 1;	/*     17       r   0*/
		uint8_t PIN_RX_INIT_RD_LANE                      : 1;	/*     18       r   0*/
		uint8_t PIN_RX_DC_TERM_EN_RD_LANE                : 1;	/*     19       r   0*/
		uint8_t PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0         : 3;	/*[22:20]       r   0*/
		uint8_t PIN_RX_ACJTAG_MODE_RD_LANE               : 1;	/*     23       r   0*/
		uint8_t PIN_RX_ACJTAG_INIT_CLK_RD_LANE           : 1;	/*     24       r   0*/
		uint8_t PIN_RX_ACJTAG_INITP_RD_LANE              : 1;	/*     25       r   0*/
		uint8_t PIN_RX_ACJTAG_INITN_RD_LANE              : 1;	/*     26       r   0*/
		uint8_t PIN_RX_ACJTAG_HYST_RD_LANE_2_0           : 3;	/*[29:27]       r   0*/
		uint8_t PIN_RX_ACJTAG_EN_RD_LANE                 : 1;	/*     30       r   0*/
		uint8_t PIN_RX_ACJTAG_AC_RD_LANE                 : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_REG4_t;
__xdata __at( 0x2f04 ) volatile INPUT_PIN_DEBUG_REG4_t INPUT_PIN_DEBUG_REG4;
#define reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_7_0  INPUT_PIN_DEBUG_REG4.BF.PIN_MCU_REMOTE_COMMAND_RD_LANE_7_0
#define reg_PIN_MCU_REMOTE_ACK_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_MCU_REMOTE_ACK_RD_LANE
#define reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0  INPUT_PIN_DEBUG_REG4.BF.PIN_RXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_RX_TRAIN_ENABLE_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_TRAIN_ENABLE_RD_LANE
#define reg_PIN_RX_INIT_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_INIT_RD_LANE
#define reg_PIN_RX_DC_TERM_EN_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_DC_TERM_EN_RD_LANE
#define reg_PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_DCBIAS_RD_LANE_2_0
#define reg_PIN_RX_ACJTAG_MODE_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_MODE_RD_LANE
#define reg_PIN_RX_ACJTAG_INIT_CLK_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_INIT_CLK_RD_LANE
#define reg_PIN_RX_ACJTAG_INITP_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_INITP_RD_LANE
#define reg_PIN_RX_ACJTAG_INITN_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_INITN_RD_LANE
#define reg_PIN_RX_ACJTAG_HYST_RD_LANE_2_0  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_HYST_RD_LANE_2_0
#define reg_PIN_RX_ACJTAG_EN_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_EN_RD_LANE
#define reg_PIN_RX_ACJTAG_AC_RD_LANE  INPUT_PIN_DEBUG_REG4.BF.PIN_RX_ACJTAG_AC_RD_LANE

// 0x0008	INPUT_PIN_DEBUG_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t ANA_RX_UP2FLOOP_P1P3_RD_LANE_3_0         : 4;	/*  [6:3]       r   0*/
		uint8_t ANA_RX_SQ_OUT_RD_LANE                    : 1;	/*      7       r   0*/
		uint8_t ANA_RX_DN2FLOOP_P2P4_RD_LANE_3_0         : 4;	/* [11:8]       r   0*/
		uint8_t ANA_RX_DN2FLOOP_P1P3_RD_LANE_3_0         : 4;	/*[15:12]       r   0*/
		uint8_t PIN_MCU_REMOTE_STATUS_RD_LANE_7_0        : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:24]     r/w   0*/
		uint8_t PIN_MCU_REMOTE_REQ_RD_LANE               : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_REG5_t;
__xdata __at( 0x2f08 ) volatile INPUT_PIN_DEBUG_REG5_t INPUT_PIN_DEBUG_REG5;
#define reg_ANA_RX_UP2FLOOP_P1P3_RD_LANE_3_0  INPUT_PIN_DEBUG_REG5.BF.ANA_RX_UP2FLOOP_P1P3_RD_LANE_3_0
#define reg_ANA_RX_SQ_OUT_RD_LANE  INPUT_PIN_DEBUG_REG5.BF.ANA_RX_SQ_OUT_RD_LANE
#define reg_ANA_RX_DN2FLOOP_P2P4_RD_LANE_3_0  INPUT_PIN_DEBUG_REG5.BF.ANA_RX_DN2FLOOP_P2P4_RD_LANE_3_0
#define reg_ANA_RX_DN2FLOOP_P1P3_RD_LANE_3_0  INPUT_PIN_DEBUG_REG5.BF.ANA_RX_DN2FLOOP_P1P3_RD_LANE_3_0
#define reg_PIN_MCU_REMOTE_STATUS_RD_LANE_7_0  INPUT_PIN_DEBUG_REG5.BF.PIN_MCU_REMOTE_STATUS_RD_LANE_7_0
#define reg_PIN_MCU_REMOTE_REQ_RD_LANE  INPUT_PIN_DEBUG_REG5.BF.PIN_MCU_REMOTE_REQ_RD_LANE

// 0x000c	INPUT_PIN_DEBUG_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/* [27:0]     r/w   0*/
		uint8_t ANA_RX_UP2FLOOP_P2P4_RD_LANE_3_0         : 4;	/*[31:28]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_REG6_t;
__xdata __at( 0x2f0c ) volatile INPUT_PIN_DEBUG_REG6_t INPUT_PIN_DEBUG_REG6;
#define reg_ANA_RX_UP2FLOOP_P2P4_RD_LANE_3_0  INPUT_PIN_DEBUG_REG6.BF.ANA_RX_UP2FLOOP_P2P4_RD_LANE_3_0

#endif
