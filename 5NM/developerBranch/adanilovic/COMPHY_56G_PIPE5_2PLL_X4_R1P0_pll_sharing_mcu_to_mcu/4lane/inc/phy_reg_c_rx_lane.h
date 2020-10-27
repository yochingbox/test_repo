#ifndef PHY_REG_C_RX_LANE_H
#define PHY_REG_C_RX_LANE_H



// 0x0000	PM_CTRL_RX_LANE_REG1_LANE		Power Control RX Lane Register1
typedef union {
	struct {
		uint8_t RX_SELMUFI_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RX_SELMUFF_LANE_3_0                      : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t RX_MAIN_CLK_RST_LANE                     : 1;	/*      8     r/w   0*/
		uint8_t RX_MAIN_CLK_EN_LANE                      : 1;	/*      9     r/w   1*/
		uint8_t RX_MAIN_CLK_ON_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t RX_INIT_DONE_PROT_EN_LANE                : 1;	/*     11     r/w   1*/
		uint8_t RX_INIT_DONE_PROT_CLEAR_LANE             : 1;	/*     12     r/w   0*/
		uint8_t PLL_READY_RX_PROT_EN_LANE                : 1;	/*     13     r/w   1*/
		uint8_t PLL_READY_RX_PROT_CLEAR_LANE             : 1;	/*     14     r/w   0*/
		uint8_t ANA_PU_RX_DLY_LANE                       : 1;	/*     15     r/w   0*/
		uint8_t RX_CLK_EN_LANE                           : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_DTL_LOOP_FREEZE_LANE              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RX_INIT_DONE_LANE                        : 1;	/*     19     r/w   0*/
		uint8_t DTL_CLK_OFF_LANE                         : 1;	/*     20     r/w   1*/
		uint8_t RESET_DTL_LANE                           : 1;	/*     21     r/w   1*/
		uint8_t PIN_PLL_READY_RX_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t RESET_DTL_SYNC_LANE                      : 1;	/*     23     r/w   0*/
		uint8_t PLL_READY_RX_LANE                        : 1;	/*     24       r   0*/
		uint8_t RX_INIT_RD_LANE                          : 1;	/*     25       r   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t PIN_PU_SQ_RD_LANE                        : 1;	/*     27       r   0*/
		uint8_t PU_SQ_FORCE_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t ANA_PU_SQ_LANE                           : 1;	/*     29     r/w   0*/
		uint8_t ANA_PU_RX_LANE                           : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_RX_FORCE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_RX_LANE_REG1_LANE_t;
__xdata __at( 0x3200 ) volatile PM_CTRL_RX_LANE_REG1_LANE_t PM_CTRL_RX_LANE_REG1_LANE;
#define reg_RX_SELMUFI_LANE_3_0  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_SELMUFI_LANE_3_0
#define reg_RX_SELMUFF_LANE_3_0  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_SELMUFF_LANE_3_0
#define reg_RX_MAIN_CLK_RST_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_MAIN_CLK_RST_LANE
#define reg_RX_MAIN_CLK_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_MAIN_CLK_EN_LANE
#define reg_RX_MAIN_CLK_ON_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_MAIN_CLK_ON_LANE
#define reg_RX_INIT_DONE_PROT_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_PROT_EN_LANE
#define reg_RX_INIT_DONE_PROT_CLEAR_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_PROT_CLEAR_LANE
#define reg_PLL_READY_RX_PROT_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_PROT_EN_LANE
#define reg_PLL_READY_RX_PROT_CLEAR_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_PROT_CLEAR_LANE
#define reg_ANA_PU_RX_DLY_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_DLY_LANE
#define reg_RX_CLK_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_CLK_EN_LANE
#define reg_ANA_RX_DTL_LOOP_FREEZE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_RX_DTL_LOOP_FREEZE_LANE
#define reg_RX_INIT_DONE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_LANE
#define reg_DTL_CLK_OFF_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.DTL_CLK_OFF_LANE
#define reg_RESET_DTL_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RESET_DTL_LANE
#define reg_PIN_PLL_READY_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PIN_PLL_READY_RX_LANE
#define reg_RESET_DTL_SYNC_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RESET_DTL_SYNC_LANE
#define reg_PLL_READY_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_LANE
#define reg_RX_INIT_RD_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_RD_LANE
#define reg_PIN_PU_SQ_RD_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PIN_PU_SQ_RD_LANE
#define reg_PU_SQ_FORCE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PU_SQ_FORCE_LANE
#define reg_ANA_PU_SQ_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_SQ_LANE
#define reg_ANA_PU_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_LANE
#define reg_ANA_PU_RX_FORCE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_FORCE_LANE

// 0x0004	RX_SYSTEM_LANE		
typedef union {
	struct {
		uint8_t RX_PAM2_EN_LANE                          : 1;	/*      0     r/w   0*/
		uint8_t RX_DATA_WIDTH_LANE_1_0                   : 2;	/*  [2:1]     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [28:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [28:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:3]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:3]     r/w   0*/
		uint8_t TRAIN_RX_SEL_BITS_LANE                   : 1;	/*     29     r/w   1*/
		uint8_t TRX_RXCLK_SEL_LANE                       : 1;	/*     30     r/w   0*/
		uint8_t RX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SYSTEM_LANE_t;
__xdata __at( 0x3204 ) volatile RX_SYSTEM_LANE_t RX_SYSTEM_LANE;
#define reg_RX_PAM2_EN_LANE  RX_SYSTEM_LANE.BF.RX_PAM2_EN_LANE
#define reg_RX_DATA_WIDTH_LANE_1_0  RX_SYSTEM_LANE.BF.RX_DATA_WIDTH_LANE_1_0
#define reg_TRAIN_RX_SEL_BITS_LANE  RX_SYSTEM_LANE.BF.TRAIN_RX_SEL_BITS_LANE
#define reg_TRX_RXCLK_SEL_LANE  RX_SYSTEM_LANE.BF.TRX_RXCLK_SEL_LANE
#define reg_RX_SEL_BITS_LANE  RX_SYSTEM_LANE.BF.RX_SEL_BITS_LANE

// 0x0008	INPUT_RX_PIN_REG0_LANE		Input Interface Register For Rx Lane0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESET_CORE_FM_PIPE_RX_LANE               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 6;	/* [14:9]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_RX_PIN_REG0_LANE_t;
__xdata __at( 0x3208 ) volatile INPUT_RX_PIN_REG0_LANE_t INPUT_RX_PIN_REG0_LANE;
#define reg_RESET_CORE_FM_PIPE_RX_LANE  INPUT_RX_PIN_REG0_LANE.BF.RESET_CORE_FM_PIPE_RX_LANE

// 0x000c	INPUT_RX_PIN_REG1_LANE		Input Interface Register For Rx Lane1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG1_LANE_t;
__xdata __at( 0x320c ) volatile INPUT_RX_PIN_REG1_LANE_t INPUT_RX_PIN_REG1_LANE;

// 0x0010	INPUT_RX_PIN_REG2_LANE		Input Interface Register For Rx Lane2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[20:11]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:11]     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG2_LANE_t;
__xdata __at( 0x3210 ) volatile INPUT_RX_PIN_REG2_LANE_t INPUT_RX_PIN_REG2_LANE;

// 0x0014	SPD_CTRL_RX_LANE_REG1_LANE		Speed Control Rx Lane Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w 6'h0*/
		uint8_t RESERVED_16                              : 8;	/*[25:16]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:16]     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_RX_LANE_REG1_LANE_t;
__xdata __at( 0x3214 ) volatile SPD_CTRL_RX_LANE_REG1_LANE_t SPD_CTRL_RX_LANE_REG1_LANE;

// 0x0018	DIG_RX_RSVD_REG0		Digital RX Reserved Register 0
typedef union {
	struct {
		uint8_t DIG_RX_INT_RSVD0_LANE_15_0_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_RX_INT_RSVD0_LANE_15_0_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_RX_RSVD0_LANE_15_0_b0                : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t DIG_RX_RSVD0_LANE_15_0_b1                : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DIG_RX_RSVD_REG0_t;
__xdata __at( 0x3218 ) volatile DIG_RX_RSVD_REG0_t DIG_RX_RSVD_REG0;
#define reg_DIG_RX_INT_RSVD0_LANE_15_0_b0  DIG_RX_RSVD_REG0.BF.DIG_RX_INT_RSVD0_LANE_15_0_b0
#define reg_DIG_RX_INT_RSVD0_LANE_15_0_b1  DIG_RX_RSVD_REG0.BF.DIG_RX_INT_RSVD0_LANE_15_0_b1
#define reg_DIG_RX_RSVD0_LANE_15_0_b0  DIG_RX_RSVD_REG0.BF.DIG_RX_RSVD0_LANE_15_0_b0
#define reg_DIG_RX_RSVD0_LANE_15_0_b1  DIG_RX_RSVD_REG0.BF.DIG_RX_RSVD0_LANE_15_0_b1
#define reg_DIG_RX_INT_RSVD0_LANE_15_0  DIG_RX_RSVD_REG0.WT.W0
#define reg_DIG_RX_RSVD0_LANE_15_0  DIG_RX_RSVD_REG0.WT.W1

// 0x001c	CLKGEN_RX_LANE_REG1_LANE		Clock Gen Rx Lane Reg1
typedef union {
	struct {
		uint8_t RXDCLK_4X_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t RXDCLK_NT_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RXDCLK_25M_EN_LANE                       : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 2;	/*[12:11]     r/w   0*/
		uint8_t RST_RX2PLL_LPBK_RX_CLK_LANE              : 1;	/*     13     r/w   0*/
		uint8_t RX2PLL_LPBK_RX_CLK_EN_LANE               : 1;	/*     14     r/w   0*/
		uint8_t RST_RX2PLL_LPBK_PLL_CLK_LANE             : 1;	/*     15     r/w   0*/
		uint8_t RX2PLL_LPBK_PLL_CLK_EN_LANE              : 1;	/*     16     r/w   0*/
		uint8_t DTL_FLOOP_CLK_EN_LANE                    : 1;	/*     17     r/w   0*/
		uint8_t DTL_FLOOP_CLK_OFF_LANE                   : 1;	/*     18     r/w   0*/
		uint8_t RST_SQ_MCU_CLK_LANE                      : 1;	/*     19     r/w   0*/
		uint8_t RST_RX2TX_LPBK_RX_CLK_LANE               : 1;	/*     20     r/w   0*/
		uint8_t RX2TX_LPBK_RX_CLK_EN_LANE                : 1;	/*     21     r/w   0*/
		uint8_t PT_RX_CLK_EN_LANE                        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RXDCLK_AH_LANE                           : 1;	/*     25     r/w   0*/
		uint8_t RST_FRAME_SYNC_DET_CLK_LANE              : 1;	/*     26     r/w   0*/
		uint8_t FRAME_SYNC_DET_CLK_EN_LANE               : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t PIN_RX_CLK_ON_LANE                       : 1;	/*     29     r/w   1*/
		uint8_t ANA_RXCLK_INV_LANE                       : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKGEN_RX_LANE_REG1_LANE_t;
__xdata __at( 0x321c ) volatile CLKGEN_RX_LANE_REG1_LANE_t CLKGEN_RX_LANE_REG1_LANE;
#define reg_RXDCLK_4X_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RXDCLK_4X_EN_LANE
#define reg_RXDCLK_NT_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RXDCLK_NT_EN_LANE
#define reg_RXDCLK_25M_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RXDCLK_25M_EN_LANE
#define reg_RST_RX2PLL_LPBK_RX_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2PLL_LPBK_RX_CLK_LANE
#define reg_RX2PLL_LPBK_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2PLL_LPBK_RX_CLK_EN_LANE
#define reg_RST_RX2PLL_LPBK_PLL_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2PLL_LPBK_PLL_CLK_LANE
#define reg_RX2PLL_LPBK_PLL_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2PLL_LPBK_PLL_CLK_EN_LANE
#define reg_DTL_FLOOP_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.DTL_FLOOP_CLK_EN_LANE
#define reg_DTL_FLOOP_CLK_OFF_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.DTL_FLOOP_CLK_OFF_LANE
#define reg_RST_SQ_MCU_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_SQ_MCU_CLK_LANE
#define reg_RST_RX2TX_LPBK_RX_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2TX_LPBK_RX_CLK_LANE
#define reg_RX2TX_LPBK_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2TX_LPBK_RX_CLK_EN_LANE
#define reg_PT_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.PT_RX_CLK_EN_LANE
#define reg_RXDCLK_AH_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RXDCLK_AH_LANE
#define reg_RST_FRAME_SYNC_DET_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_FRAME_SYNC_DET_CLK_LANE
#define reg_FRAME_SYNC_DET_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.FRAME_SYNC_DET_CLK_EN_LANE
#define reg_PIN_RX_CLK_ON_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.PIN_RX_CLK_ON_LANE
#define reg_ANA_RXCLK_INV_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.ANA_RXCLK_INV_LANE

// 0x0020	FRAME_SYNC_DET_REG0		Frame Sync Detection Reg0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t FRAME_LOCK_LANE                          : 1;	/*      5       r   0*/
		uint8_t FRAME_FOUND_LANE                         : 1;	/*      6       r   0*/
		uint8_t WORD_FOUND_LANE                          : 1;	/*      7       r   0*/
		uint8_t ALIGN_STAT_RD_REQ_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t FRAME_DET_MODE_LANE                      : 1;	/*      9     r/w   0*/
		uint8_t FRAME_REALIGN_MODE_LANE                  : 1;	/*     10     r/w   1*/
		uint8_t FRAME_END_SEL_LANE                       : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 4;	/*[20:12]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:12]     r/w   0*/
		uint8_t BAD_MARKER_NUM_LANE_2_0                  : 3;	/*[23:21]     r/w 3'h4*/
		uint8_t GOOD_MARKER_NUM_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t FRAME_LOCK_SEL_LANE                      : 1;	/*     27     r/w   0*/
		uint8_t FRAME_DET_SIDE_LEVEL_LANE_1_0            : 2;	/*[29:28]     r/w 2'h3*/
		uint8_t FRAME_DET_MIDD_LEVEL_LANE_1_0            : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG0_t;
__xdata __at( 0x3220 ) volatile FRAME_SYNC_DET_REG0_t FRAME_SYNC_DET_REG0;
#define reg_FRAME_LOCK_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_LOCK_LANE
#define reg_FRAME_FOUND_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_FOUND_LANE
#define reg_WORD_FOUND_LANE  FRAME_SYNC_DET_REG0.BF.WORD_FOUND_LANE
#define reg_ALIGN_STAT_RD_REQ_LANE  FRAME_SYNC_DET_REG0.BF.ALIGN_STAT_RD_REQ_LANE
#define reg_FRAME_DET_MODE_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_DET_MODE_LANE
#define reg_FRAME_REALIGN_MODE_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_REALIGN_MODE_LANE
#define reg_FRAME_END_SEL_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_END_SEL_LANE
#define reg_BAD_MARKER_NUM_LANE_2_0  FRAME_SYNC_DET_REG0.BF.BAD_MARKER_NUM_LANE_2_0
#define reg_GOOD_MARKER_NUM_LANE_2_0  FRAME_SYNC_DET_REG0.BF.GOOD_MARKER_NUM_LANE_2_0
#define reg_FRAME_LOCK_SEL_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_LOCK_SEL_LANE
#define reg_FRAME_DET_SIDE_LEVEL_LANE_1_0  FRAME_SYNC_DET_REG0.BF.FRAME_DET_SIDE_LEVEL_LANE_1_0
#define reg_FRAME_DET_MIDD_LEVEL_LANE_1_0  FRAME_SYNC_DET_REG0.BF.FRAME_DET_MIDD_LEVEL_LANE_1_0

// 0x0024	FRAME_SYNC_DET_REG1		Frame Sync Detection Reg1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t FRAME_ALIGN_LEVEL_LANE_15_0_b0           : 8;	/*[31:16]       r   0*/
		uint8_t FRAME_ALIGN_LEVEL_LANE_15_0_b1           : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG1_t;
__xdata __at( 0x3224 ) volatile FRAME_SYNC_DET_REG1_t FRAME_SYNC_DET_REG1;
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0_b0  FRAME_SYNC_DET_REG1.BF.FRAME_ALIGN_LEVEL_LANE_15_0_b0
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0_b1  FRAME_SYNC_DET_REG1.BF.FRAME_ALIGN_LEVEL_LANE_15_0_b1
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0  FRAME_SYNC_DET_REG1.WT.W1

// 0x0028	FRAME_SYNC_DET_REG2		Frame Sync Detection Reg2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t ALIGN_POS_LANE_79_64_b0                  : 8;	/*[31:16]       r   0*/
		uint8_t ALIGN_POS_LANE_79_64_b1                  : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG2_t;
__xdata __at( 0x3228 ) volatile FRAME_SYNC_DET_REG2_t FRAME_SYNC_DET_REG2;
#define reg_ALIGN_POS_LANE_79_64_b0  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_79_64_b0
#define reg_ALIGN_POS_LANE_79_64_b1  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_79_64_b1
#define reg_ALIGN_POS_LANE_79_64  FRAME_SYNC_DET_REG2.WT.W1

// 0x002c	FRAME_SYNC_DET_REG3		Frame Sync Detection Reg3
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_63_32_b0                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_63_32_b1                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_63_32_b2                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_63_32_b3                  : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG3_t;
__xdata __at( 0x322c ) volatile FRAME_SYNC_DET_REG3_t FRAME_SYNC_DET_REG3;
#define reg_ALIGN_POS_LANE_63_32_b0  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b0
#define reg_ALIGN_POS_LANE_63_32_b1  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b1
#define reg_ALIGN_POS_LANE_63_32_b2  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b2
#define reg_ALIGN_POS_LANE_63_32_b3  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b3

// 0x0030	FRAME_SYNC_DET_REG4		Frame Sync Detection Reg4
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_31_0_b0                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b1                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b2                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b3                   : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG4_t;
__xdata __at( 0x3230 ) volatile FRAME_SYNC_DET_REG4_t FRAME_SYNC_DET_REG4;
#define reg_ALIGN_POS_LANE_31_0_b0  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b0
#define reg_ALIGN_POS_LANE_31_0_b1  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b1
#define reg_ALIGN_POS_LANE_31_0_b2  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b2
#define reg_ALIGN_POS_LANE_31_0_b3  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b3

// 0x0034	INPUT_RX_PIN_REG7_LANE		Input Interface Register For Rx Lane7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[19:12]     r/w   0*/
		uint8_t RESERVED_16                              : 4;	/*[19:12]     r/w   0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG7_LANE_t;
__xdata __at( 0x3234 ) volatile INPUT_RX_PIN_REG7_LANE_t INPUT_RX_PIN_REG7_LANE;

// 0x0038	RX_ANA_RSVD_REG0		Rx Analog Reserved Register0
typedef union {
	struct {
		uint8_t ANA_RX_ANA_RSVD_IN_LANE_7_0              : 8;	/*  [7:0]     r/w 8'hf0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w   0*/
		uint8_t RX_ANA_RSVD_OUT_RD_LANE_7_0              : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ANA_RSVD_REG0_t;
__xdata __at( 0x3238 ) volatile RX_ANA_RSVD_REG0_t RX_ANA_RSVD_REG0;
#define reg_ANA_RX_ANA_RSVD_IN_LANE_7_0  RX_ANA_RSVD_REG0.BF.ANA_RX_ANA_RSVD_IN_LANE_7_0
#define reg_RX_ANA_RSVD_OUT_RD_LANE_7_0  RX_ANA_RSVD_REG0.BF.RX_ANA_RSVD_OUT_RD_LANE_7_0

// 0x003c	INPUT_RX_PIN_REG3_LANE		Input Interface Register For Rx Lane3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 4;	/*  [5:2]     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG3_LANE_t;
__xdata __at( 0x323c ) volatile INPUT_RX_PIN_REG3_LANE_t INPUT_RX_PIN_REG3_LANE;

// 0x0040	RX_LANE_INTERRUPT		RX Lane Interrupt Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/* [26:0]     r/w   0*/
		uint8_t LANE_MARGIN_EN_ISR_LANE                  : 1;	/*     27     r/w   0*/
		uint8_t FRAME_UNLOCK_ISR_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t FRAME_LOCK_ISR_LANE                      : 1;	/*     29     r/w   0*/
		uint8_t RX_SFT_RST_CHG_FALLING_ISR_LANE          : 1;	/*     30     r/w   0*/
		uint8_t RX_SFT_RST_CHG_RISING_ISR_LANE           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_t;
__xdata __at( 0x3240 ) volatile RX_LANE_INTERRUPT_t RX_LANE_INTERRUPT;
#define reg_LANE_MARGIN_EN_ISR_LANE  RX_LANE_INTERRUPT.BF.LANE_MARGIN_EN_ISR_LANE
#define reg_FRAME_UNLOCK_ISR_LANE  RX_LANE_INTERRUPT.BF.FRAME_UNLOCK_ISR_LANE
#define reg_FRAME_LOCK_ISR_LANE  RX_LANE_INTERRUPT.BF.FRAME_LOCK_ISR_LANE
#define reg_RX_SFT_RST_CHG_FALLING_ISR_LANE  RX_LANE_INTERRUPT.BF.RX_SFT_RST_CHG_FALLING_ISR_LANE
#define reg_RX_SFT_RST_CHG_RISING_ISR_LANE  RX_LANE_INTERRUPT.BF.RX_SFT_RST_CHG_RISING_ISR_LANE

// 0x0044	RX_LANE_INTERRUPT_MASK		RX Lane Interrupt Mask Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/* [26:0]     r/w   0*/
		uint8_t LANE_MARGIN_EN_MASK_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t FRAME_UNLOCK_MASK_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t FRAME_LOCK_MASK_LANE                     : 1;	/*     29     r/w   0*/
		uint8_t RX_SFT_RST_CHG_FALLING_MASK_LANE         : 1;	/*     30     r/w   0*/
		uint8_t RX_SFT_RST_CHG_RISING_MASK_LANE          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_MASK_t;
__xdata __at( 0x3244 ) volatile RX_LANE_INTERRUPT_MASK_t RX_LANE_INTERRUPT_MASK;
#define reg_LANE_MARGIN_EN_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.LANE_MARGIN_EN_MASK_LANE
#define reg_FRAME_UNLOCK_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.FRAME_UNLOCK_MASK_LANE
#define reg_FRAME_LOCK_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.FRAME_LOCK_MASK_LANE
#define reg_RX_SFT_RST_CHG_FALLING_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.RX_SFT_RST_CHG_FALLING_MASK_LANE
#define reg_RX_SFT_RST_CHG_RISING_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.RX_SFT_RST_CHG_RISING_MASK_LANE

// 0x0048	RX_DATA_PATH_REG		RX Data Path Regiser
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [20:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [20:0]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/* [20:0]     r/w   0*/
		uint8_t RXDATA_PRE_CODE_MSB_LSB_SWAP_LANE        : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RXDATA_MSB_LSB_SWAP_LANE                 : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RXD_MSB_LSB_SWAP_LANE                    : 1;	/*     27     r/w   0*/
		uint8_t RXDATA_LATENCY_REDUCE_EN_LANE            : 1;	/*     28     r/w   0*/
		uint8_t RXD_INV_LANE                             : 1;	/*     29     r/w   0*/
		uint8_t DET_BYPASS_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_DIG_TX2RX_LPBK_EN_LANE             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_PATH_REG_t;
__xdata __at( 0x3248 ) volatile RX_DATA_PATH_REG_t RX_DATA_PATH_REG;
#define reg_RXDATA_PRE_CODE_MSB_LSB_SWAP_LANE  RX_DATA_PATH_REG.BF.RXDATA_PRE_CODE_MSB_LSB_SWAP_LANE
#define reg_RXDATA_MSB_LSB_SWAP_LANE  RX_DATA_PATH_REG.BF.RXDATA_MSB_LSB_SWAP_LANE
#define reg_RXD_MSB_LSB_SWAP_LANE  RX_DATA_PATH_REG.BF.RXD_MSB_LSB_SWAP_LANE
#define reg_RXDATA_LATENCY_REDUCE_EN_LANE  RX_DATA_PATH_REG.BF.RXDATA_LATENCY_REDUCE_EN_LANE
#define reg_RXD_INV_LANE  RX_DATA_PATH_REG.BF.RXD_INV_LANE
#define reg_DET_BYPASS_LANE  RX_DATA_PATH_REG.BF.DET_BYPASS_LANE
#define reg_LOCAL_DIG_TX2RX_LPBK_EN_LANE  RX_DATA_PATH_REG.BF.LOCAL_DIG_TX2RX_LPBK_EN_LANE

// 0x004c	RX_RESERVED_REG		RX Reserved Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t PIN_RESERVED_OUTPUT_RX_LANE_15_0_b0      : 8;	/*[31:16]     r/w   0*/
		uint8_t PIN_RESERVED_OUTPUT_RX_LANE_15_0_b1      : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_RESERVED_REG_t;
__xdata __at( 0x324c ) volatile RX_RESERVED_REG_t RX_RESERVED_REG;
#define reg_PIN_RESERVED_OUTPUT_RX_LANE_15_0_b0  RX_RESERVED_REG.BF.PIN_RESERVED_OUTPUT_RX_LANE_15_0_b0
#define reg_PIN_RESERVED_OUTPUT_RX_LANE_15_0_b1  RX_RESERVED_REG.BF.PIN_RESERVED_OUTPUT_RX_LANE_15_0_b1
#define reg_PIN_RESERVED_OUTPUT_RX_LANE_15_0  RX_RESERVED_REG.WT.W1

// 0x0058	RX_LANE_INTERRUPT_REG1		RX Lane Interrupt Clear Register1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/* [26:0]     r/w   0*/
		uint8_t LANE_MARGIN_EN_ISR_CLEAR_LANE            : 1;	/*     27     r/w   0*/
		uint8_t FRAME_UNLOCK_ISR_CLEAR_LANE              : 1;	/*     28     r/w   0*/
		uint8_t FRAME_LOCK_ISR_CLEAR_LANE                : 1;	/*     29     r/w   0*/
		uint8_t RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE    : 1;	/*     30     r/w   0*/
		uint8_t RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_REG1_t;
__xdata __at( 0x3258 ) volatile RX_LANE_INTERRUPT_REG1_t RX_LANE_INTERRUPT_REG1;
#define reg_LANE_MARGIN_EN_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.LANE_MARGIN_EN_ISR_CLEAR_LANE
#define reg_FRAME_UNLOCK_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.FRAME_UNLOCK_ISR_CLEAR_LANE
#define reg_FRAME_LOCK_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.FRAME_LOCK_ISR_CLEAR_LANE
#define reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE
#define reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE

// 0x005c	DTL_REG4		DTL related register 4
typedef union {
	struct {
		uint8_t DTL_CLAMP_FOFFS_LANE_12_0_b0             : 8;	/* [12:0]     r/w 13'h0*/
		uint8_t DTL_CLAMP_FOFFS_LANE_12_0_b1             : 5;	/* [12:0]     r/w 13'h0*/
		uint8_t RESERVED_13                              : 3;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:13]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG4_t;
__xdata __at( 0x325c ) volatile DTL_REG4_t DTL_REG4;
#define reg_DTL_CLAMP_FOFFS_LANE_12_0_b0  DTL_REG4.BF.DTL_CLAMP_FOFFS_LANE_12_0_b0
#define reg_DTL_CLAMP_FOFFS_LANE_12_0_b1  DTL_REG4.BF.DTL_CLAMP_FOFFS_LANE_12_0_b1

// 0x0060	DTL_REG0		DTL related register 0
typedef union {
	struct {
		uint8_t RX_FOFFSET_SSC_BIAS_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t DTL_CLAMPING_DIV16_EN_LANE               : 1;	/*      9     r/w   0*/
		uint8_t DTL_CLAMP_RST_MODE_LANE_1_0              : 2;	/*[11:10]     r/w 2'h2*/
		uint8_t CLEAR_DTL_CLAMPING_TRIGGERED_LANE        : 1;	/*     12     r/w   0*/
		uint8_t DTL_SQ_DET_EN_LANE                       : 1;	/*     13     r/w   1*/
		uint8_t DTL_FLOOP_EN_LANE                        : 1;	/*     14     r/w   1*/
		uint8_t SSC_DSPREAD_RX_LANE                      : 1;	/*     15     r/w   1*/
		uint8_t RX_FOFFSET_RD_REQ_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t AVG_WINDOW_LANE_1_0                      : 2;	/*[18:17]     r/w 2'h2*/
		uint8_t RX_FOFFSET_EXTRACTION_RST_LANE           : 1;	/*     19     r/w   0*/
		uint8_t RX_FOFFSET_EXTRACTION_EN_LANE            : 1;	/*     20     r/w   0*/
		uint8_t DTL_CLAMPING_RATIO_NEG_LANE_1_0          : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t DTL_CLAMPING_SCALE_LANE                  : 1;	/*     23     r/w   0*/
		uint8_t DTL_CLAMPING_SEL_LANE_2_0                : 3;	/*[26:24]     r/w 3'h6*/
		uint8_t DTL_CLAMPING_EN_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t RX_SSC_FOUND_LANE                        : 1;	/*     28       r   0*/
		uint8_t DTL_CLAMPING_TRIGGERED_LANE              : 1;	/*     29       r   0*/
		uint8_t DTL_FLOOP_FREEZE_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t SEL_MU_F_LANE                            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG0_t;
__xdata __at( 0x3260 ) volatile DTL_REG0_t DTL_REG0;
#define reg_RX_FOFFSET_SSC_BIAS_LANE_7_0  DTL_REG0.BF.RX_FOFFSET_SSC_BIAS_LANE_7_0
#define reg_DTL_CLAMPING_DIV16_EN_LANE  DTL_REG0.BF.DTL_CLAMPING_DIV16_EN_LANE
#define reg_DTL_CLAMP_RST_MODE_LANE_1_0  DTL_REG0.BF.DTL_CLAMP_RST_MODE_LANE_1_0
#define reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE  DTL_REG0.BF.CLEAR_DTL_CLAMPING_TRIGGERED_LANE
#define reg_DTL_SQ_DET_EN_LANE  DTL_REG0.BF.DTL_SQ_DET_EN_LANE
#define reg_DTL_FLOOP_EN_LANE  DTL_REG0.BF.DTL_FLOOP_EN_LANE
#define reg_SSC_DSPREAD_RX_LANE  DTL_REG0.BF.SSC_DSPREAD_RX_LANE
#define reg_RX_FOFFSET_RD_REQ_LANE  DTL_REG0.BF.RX_FOFFSET_RD_REQ_LANE
#define reg_AVG_WINDOW_LANE_1_0  DTL_REG0.BF.AVG_WINDOW_LANE_1_0
#define reg_RX_FOFFSET_EXTRACTION_RST_LANE  DTL_REG0.BF.RX_FOFFSET_EXTRACTION_RST_LANE
#define reg_RX_FOFFSET_EXTRACTION_EN_LANE  DTL_REG0.BF.RX_FOFFSET_EXTRACTION_EN_LANE
#define reg_DTL_CLAMPING_RATIO_NEG_LANE_1_0  DTL_REG0.BF.DTL_CLAMPING_RATIO_NEG_LANE_1_0
#define reg_DTL_CLAMPING_SCALE_LANE  DTL_REG0.BF.DTL_CLAMPING_SCALE_LANE
#define reg_DTL_CLAMPING_SEL_LANE_2_0  DTL_REG0.BF.DTL_CLAMPING_SEL_LANE_2_0
#define reg_DTL_CLAMPING_EN_LANE  DTL_REG0.BF.DTL_CLAMPING_EN_LANE
#define reg_RX_SSC_FOUND_LANE  DTL_REG0.BF.RX_SSC_FOUND_LANE
#define reg_DTL_CLAMPING_TRIGGERED_LANE  DTL_REG0.BF.DTL_CLAMPING_TRIGGERED_LANE
#define reg_DTL_FLOOP_FREEZE_LANE  DTL_REG0.BF.DTL_FLOOP_FREEZE_LANE
#define reg_SEL_MU_F_LANE  DTL_REG0.BF.SEL_MU_F_LANE

// 0x0064	DTL_REG1		DTL related register 1
typedef union {
	struct {
		uint8_t INIT_RXFOFFS_LANE_12_0_b0                : 8;	/* [12:0]     r/w 13'h0*/
		uint8_t INIT_RXFOFFS_LANE_12_0_b1                : 5;	/* [12:0]     r/w 13'h0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_FOFFSET_SSC_DETECT_THRES_LANE_3_0     : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_FOFFSET_READY_THRES_LANE_3_0          : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RX_FOFFSET_READY_CNT_LANE_3_0            : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG1_t;
__xdata __at( 0x3264 ) volatile DTL_REG1_t DTL_REG1;
#define reg_INIT_RXFOFFS_LANE_12_0_b0  DTL_REG1.BF.INIT_RXFOFFS_LANE_12_0_b0
#define reg_INIT_RXFOFFS_LANE_12_0_b1  DTL_REG1.BF.INIT_RXFOFFS_LANE_12_0_b1
#define reg_RX_FOFFSET_SSC_DETECT_THRES_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_SSC_DETECT_THRES_LANE_3_0
#define reg_RX_FOFFSET_READY_THRES_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_READY_THRES_LANE_3_0
#define reg_RX_FOFFSET_READY_CNT_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_READY_CNT_LANE_3_0

// 0x0068	DTL_REG2		DTL related register 2
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_LANE_13_0_b0          : 8;	/* [13:0]     r/w 14'h064f*/
		uint8_t RX_FOFFSET_EXTRA_M_LANE_13_0_b1          : 6;	/* [13:0]     r/w 14'h064f*/
		uint8_t DTL_CLK_MODE_LANE_1_0                    : 2;	/*[15:14]     r/w 2'h2*/
		uint8_t RX_FOFFSET_DISABLE_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t DTL_STEP_MODE_LANE                       : 1;	/*     17     r/w   0*/
		uint8_t RX_FOFFSET_RD_LANE_12_0_b0               : 6;	/*[30:18]       r   0*/
		uint8_t RX_FOFFSET_RD_LANE_12_0_b1               : 7;	/*[30:18]       r   0*/
		uint8_t RX_FOFFSET_RDY_LANE                      : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG2_t;
__xdata __at( 0x3268 ) volatile DTL_REG2_t DTL_REG2;
#define reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0  DTL_REG2.BF.RX_FOFFSET_EXTRA_M_LANE_13_0_b0
#define reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1  DTL_REG2.BF.RX_FOFFSET_EXTRA_M_LANE_13_0_b1
#define reg_DTL_CLK_MODE_LANE_1_0  DTL_REG2.BF.DTL_CLK_MODE_LANE_1_0
#define reg_RX_FOFFSET_DISABLE_LANE  DTL_REG2.BF.RX_FOFFSET_DISABLE_LANE
#define reg_DTL_STEP_MODE_LANE  DTL_REG2.BF.DTL_STEP_MODE_LANE
#define reg_RX_FOFFSET_RD_LANE_12_0_b0  DTL_REG2.BF.RX_FOFFSET_RD_LANE_12_0_b0
#define reg_RX_FOFFSET_RD_LANE_12_0_b1  DTL_REG2.BF.RX_FOFFSET_RD_LANE_12_0_b1
#define reg_RX_FOFFSET_RDY_LANE  DTL_REG2.BF.RX_FOFFSET_RDY_LANE

// 0x006c	DTL_REG3		DTL related register 3
typedef union {
	struct {
		uint8_t RX_EXTRA_SSC_AMP_RD_LANE_12_0_b0         : 8;	/* [12:0]       r   0*/
		uint8_t RX_EXTRA_SSC_AMP_RD_LANE_12_0_b1         : 5;	/* [12:0]       r   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_CDR_PATTERN_EN_LANE               : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_CDR_PATTERN_EN_FORCE_LANE         : 1;	/*     17     r/w   0*/
		uint8_t PM_EN_TIMER_SEL_LANE_2_0                 : 3;	/*[20:18]     r/w 3'h2*/
		uint8_t PM_EN_TIMER_ON_LANE                      : 1;	/*     21     r/w   1*/
		uint8_t PM_DIS_TIMER_ON_LANE                     : 1;	/*     22     r/w   1*/
		uint8_t PM_AUTO_CTRL_EN_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t PM_DIS_TIMER_SEL_LANE_5_0                : 6;	/*[29:24]     r/w 6'hb*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG3_t;
__xdata __at( 0x326c ) volatile DTL_REG3_t DTL_REG3;
#define reg_RX_EXTRA_SSC_AMP_RD_LANE_12_0_b0  DTL_REG3.BF.RX_EXTRA_SSC_AMP_RD_LANE_12_0_b0
#define reg_RX_EXTRA_SSC_AMP_RD_LANE_12_0_b1  DTL_REG3.BF.RX_EXTRA_SSC_AMP_RD_LANE_12_0_b1
#define reg_ANA_RX_CDR_PATTERN_EN_LANE  DTL_REG3.BF.ANA_RX_CDR_PATTERN_EN_LANE
#define reg_ANA_RX_CDR_PATTERN_EN_FORCE_LANE  DTL_REG3.BF.ANA_RX_CDR_PATTERN_EN_FORCE_LANE
#define reg_PM_EN_TIMER_SEL_LANE_2_0  DTL_REG3.BF.PM_EN_TIMER_SEL_LANE_2_0
#define reg_PM_EN_TIMER_ON_LANE  DTL_REG3.BF.PM_EN_TIMER_ON_LANE
#define reg_PM_DIS_TIMER_ON_LANE  DTL_REG3.BF.PM_DIS_TIMER_ON_LANE
#define reg_PM_AUTO_CTRL_EN_LANE  DTL_REG3.BF.PM_AUTO_CTRL_EN_LANE
#define reg_PM_DIS_TIMER_SEL_LANE_5_0  DTL_REG3.BF.PM_DIS_TIMER_SEL_LANE_5_0

// 0x0070	SQ_REG0		squelch glitch filter control
typedef union {
	struct {
		uint8_t SQ_DEGLITCH_WIDTH_P_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t SQ_DEGLITCH_WIDTH_N_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t SQ_DEGLITCH_EN_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t SQ_DETECTED_DURING_CAL_LANE              : 1;	/*      9     r/w   1*/
		uint8_t SQ_DETECTED_GATE_EN_LANE                 : 1;	/*     10     r/w   1*/
		uint8_t INT_SQ_LPF_EN_LANE                       : 1;	/*     11     r/w   1*/
		uint8_t SQ_LPF_EN_LANE                           : 1;	/*     12     r/w   0*/
		uint8_t SQ_GATE_RXDATA_EN_LANE                   : 1;	/*     13     r/w   0*/
		uint8_t PIN_RX_SQ_OUT_LPF_RD_LANE                : 1;	/*     14       r   0*/
		uint8_t PIN_RX_SQ_OUT_RD_LANE                    : 1;	/*     15       r   0*/
		uint8_t SQ_LPF_LANE_15_0_b0                      : 8;	/*[31:16]     r/w 16'h7*/
		uint8_t SQ_LPF_LANE_15_0_b1                      : 8;	/*[31:16]     r/w 16'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} SQ_REG0_t;
__xdata __at( 0x3270 ) volatile SQ_REG0_t SQ_REG0;
#define reg_SQ_DEGLITCH_WIDTH_P_LANE_3_0  SQ_REG0.BF.SQ_DEGLITCH_WIDTH_P_LANE_3_0
#define reg_SQ_DEGLITCH_WIDTH_N_LANE_3_0  SQ_REG0.BF.SQ_DEGLITCH_WIDTH_N_LANE_3_0
#define reg_SQ_DEGLITCH_EN_LANE  SQ_REG0.BF.SQ_DEGLITCH_EN_LANE
#define reg_SQ_DETECTED_DURING_CAL_LANE  SQ_REG0.BF.SQ_DETECTED_DURING_CAL_LANE
#define reg_SQ_DETECTED_GATE_EN_LANE  SQ_REG0.BF.SQ_DETECTED_GATE_EN_LANE
#define reg_INT_SQ_LPF_EN_LANE  SQ_REG0.BF.INT_SQ_LPF_EN_LANE
#define reg_SQ_LPF_EN_LANE  SQ_REG0.BF.SQ_LPF_EN_LANE
#define reg_SQ_GATE_RXDATA_EN_LANE  SQ_REG0.BF.SQ_GATE_RXDATA_EN_LANE
#define reg_PIN_RX_SQ_OUT_LPF_RD_LANE  SQ_REG0.BF.PIN_RX_SQ_OUT_LPF_RD_LANE
#define reg_PIN_RX_SQ_OUT_RD_LANE  SQ_REG0.BF.PIN_RX_SQ_OUT_RD_LANE
#define reg_SQ_LPF_LANE_15_0_b0  SQ_REG0.BF.SQ_LPF_LANE_15_0_b0
#define reg_SQ_LPF_LANE_15_0_b1  SQ_REG0.BF.SQ_LPF_LANE_15_0_b1
#define reg_SQ_LPF_LANE_15_0  SQ_REG0.WT.W1

// 0x0080	PHYTEST_RX0		PHYtest Rx Control Register 0
typedef union {
	struct {
		uint8_t PT_RX_LOCK_CNT_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h40*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w   0*/
		uint8_t TX_TRAIN_PAT_LOCK_MODE_RX_LANE           : 1;	/*     10     r/w   0*/
		uint8_t FORCE_PT_RX_PRBS_DATA_SET_LANE           : 1;	/*     11     r/w   0*/
		uint8_t PT_RX_LOCK_SET_LANE                      : 1;	/*     12     r/w   0*/
		uint8_t FORCE_PT_RX_LOCK_LANE                    : 1;	/*     13     r/w   0*/
		uint8_t PT_RX_PRBS_INV_LANE                      : 1;	/*     14     r/w   0*/
		uint8_t PT_RX_PRBS_GRAY_EN_LANE                  : 1;	/*     15     r/w   0*/
		uint8_t PT_RX_LOCK_MODE_LANE                     : 1;	/*     16     r/w   1*/
		uint8_t PT_RX_PRBS_LOAD_LANE                     : 1;	/*     17     r/w   1*/
		uint8_t PT_RX_SYNC_MODE_LANE                     : 1;	/*     18     r/w   0*/
		uint8_t PT_RX_RELOCK_LANE                        : 1;	/*     19     r/w   0*/
		uint8_t PT_RX_CNT_PAUSE_LANE                     : 1;	/*     20     r/w   0*/
		uint8_t PT_RX_CNT_RST_LANE                       : 1;	/*     21     r/w   0*/
		uint8_t PT_RX_PHYREADY_FORCE_LANE                : 1;	/*     22     r/w   0*/
		uint8_t PT_RX_EN_LANE                            : 1;	/*     23     r/w   0*/
		uint8_t PT_RX_PATTERN_SEL_LANE_5_0               : 6;	/*[29:24]     r/w 6'h10*/
		uint8_t PT_RX_EN_MODE_LANE_1_0                   : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_RX0_t;
__xdata __at( 0x3280 ) volatile PHYTEST_RX0_t PHYTEST_RX0;
#define reg_PT_RX_LOCK_CNT_LANE_7_0  PHYTEST_RX0.BF.PT_RX_LOCK_CNT_LANE_7_0
#define reg_TX_TRAIN_PAT_LOCK_MODE_RX_LANE  PHYTEST_RX0.BF.TX_TRAIN_PAT_LOCK_MODE_RX_LANE
#define reg_FORCE_PT_RX_PRBS_DATA_SET_LANE  PHYTEST_RX0.BF.FORCE_PT_RX_PRBS_DATA_SET_LANE
#define reg_PT_RX_LOCK_SET_LANE  PHYTEST_RX0.BF.PT_RX_LOCK_SET_LANE
#define reg_FORCE_PT_RX_LOCK_LANE  PHYTEST_RX0.BF.FORCE_PT_RX_LOCK_LANE
#define reg_PT_RX_PRBS_INV_LANE  PHYTEST_RX0.BF.PT_RX_PRBS_INV_LANE
#define reg_PT_RX_PRBS_GRAY_EN_LANE  PHYTEST_RX0.BF.PT_RX_PRBS_GRAY_EN_LANE
#define reg_PT_RX_LOCK_MODE_LANE  PHYTEST_RX0.BF.PT_RX_LOCK_MODE_LANE
#define reg_PT_RX_PRBS_LOAD_LANE  PHYTEST_RX0.BF.PT_RX_PRBS_LOAD_LANE
#define reg_PT_RX_SYNC_MODE_LANE  PHYTEST_RX0.BF.PT_RX_SYNC_MODE_LANE
#define reg_PT_RX_RELOCK_LANE  PHYTEST_RX0.BF.PT_RX_RELOCK_LANE
#define reg_PT_RX_CNT_PAUSE_LANE  PHYTEST_RX0.BF.PT_RX_CNT_PAUSE_LANE
#define reg_PT_RX_CNT_RST_LANE  PHYTEST_RX0.BF.PT_RX_CNT_RST_LANE
#define reg_PT_RX_PHYREADY_FORCE_LANE  PHYTEST_RX0.BF.PT_RX_PHYREADY_FORCE_LANE
#define reg_PT_RX_EN_LANE  PHYTEST_RX0.BF.PT_RX_EN_LANE
#define reg_PT_RX_PATTERN_SEL_LANE_5_0  PHYTEST_RX0.BF.PT_RX_PATTERN_SEL_LANE_5_0
#define reg_PT_RX_EN_MODE_LANE_1_0  PHYTEST_RX0.BF.PT_RX_EN_MODE_LANE_1_0

// 0x0084	PHYTEST_RX1		PHYtest Rx Control Register 1
typedef union {
	struct {
		uint8_t PT_RX_USER_PATTERN_LANE_79_48_b0         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_79_48_b1         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_79_48_b2         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_79_48_b3         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_RX1_t;
__xdata __at( 0x3284 ) volatile PHYTEST_RX1_t PHYTEST_RX1;
#define reg_PT_RX_USER_PATTERN_LANE_79_48_b0  PHYTEST_RX1.BF.PT_RX_USER_PATTERN_LANE_79_48_b0
#define reg_PT_RX_USER_PATTERN_LANE_79_48_b1  PHYTEST_RX1.BF.PT_RX_USER_PATTERN_LANE_79_48_b1
#define reg_PT_RX_USER_PATTERN_LANE_79_48_b2  PHYTEST_RX1.BF.PT_RX_USER_PATTERN_LANE_79_48_b2
#define reg_PT_RX_USER_PATTERN_LANE_79_48_b3  PHYTEST_RX1.BF.PT_RX_USER_PATTERN_LANE_79_48_b3

// 0x0088	PHYTEST_RX2		PHYtest Rx Control Register 2
typedef union {
	struct {
		uint8_t PT_RX_USER_PATTERN_LANE_47_16_b0         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_47_16_b1         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_47_16_b2         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_47_16_b3         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_RX2_t;
__xdata __at( 0x3288 ) volatile PHYTEST_RX2_t PHYTEST_RX2;
#define reg_PT_RX_USER_PATTERN_LANE_47_16_b0  PHYTEST_RX2.BF.PT_RX_USER_PATTERN_LANE_47_16_b0
#define reg_PT_RX_USER_PATTERN_LANE_47_16_b1  PHYTEST_RX2.BF.PT_RX_USER_PATTERN_LANE_47_16_b1
#define reg_PT_RX_USER_PATTERN_LANE_47_16_b2  PHYTEST_RX2.BF.PT_RX_USER_PATTERN_LANE_47_16_b2
#define reg_PT_RX_USER_PATTERN_LANE_47_16_b3  PHYTEST_RX2.BF.PT_RX_USER_PATTERN_LANE_47_16_b3

// 0x008c	PHYTEST_RX3		PHYtest Rx Control Register 3
typedef union {
	struct {
		uint8_t PT_RX_LOCK_LANE                          : 1;	/*      0       r   0*/
		uint8_t PT_RX_PASS_LANE                          : 1;	/*      1       r   0*/
		uint8_t PT_RX_CNT_READY_LANE                     : 1;	/*      2       r   0*/
		uint8_t PRBS_DATA_DETECTED_RX_LANE_1_0           : 2;	/*  [4:3]       r   0*/
		uint8_t PT_RX_PRBS_DATA_SET_LANE_1_0             : 2;	/*  [6:5]     r/w   0*/
		uint8_t PT_RX_RST_LANE                           : 1;	/*      7     r/w   0*/
		uint8_t PT_TRX_EN_LANE                           : 1;	/*      8     r/w   0*/
		uint8_t PT_RX_PRBS_ENC_EN_LANE                   : 1;	/*      9     r/w   0*/
		uint8_t PT_RX_SATA_LONG_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t PT_RX_START_RD_LANE                      : 1;	/*     11     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_RX_LANE_2_0             : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PT_RX_USER_PATTERN_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_RX3_t;
__xdata __at( 0x328c ) volatile PHYTEST_RX3_t PHYTEST_RX3;
#define reg_PT_RX_LOCK_LANE  PHYTEST_RX3.BF.PT_RX_LOCK_LANE
#define reg_PT_RX_PASS_LANE  PHYTEST_RX3.BF.PT_RX_PASS_LANE
#define reg_PT_RX_CNT_READY_LANE  PHYTEST_RX3.BF.PT_RX_CNT_READY_LANE
#define reg_PRBS_DATA_DETECTED_RX_LANE_1_0  PHYTEST_RX3.BF.PRBS_DATA_DETECTED_RX_LANE_1_0
#define reg_PT_RX_PRBS_DATA_SET_LANE_1_0  PHYTEST_RX3.BF.PT_RX_PRBS_DATA_SET_LANE_1_0
#define reg_PT_RX_RST_LANE  PHYTEST_RX3.BF.PT_RX_RST_LANE
#define reg_PT_TRX_EN_LANE  PHYTEST_RX3.BF.PT_TRX_EN_LANE
#define reg_PT_RX_PRBS_ENC_EN_LANE  PHYTEST_RX3.BF.PT_RX_PRBS_ENC_EN_LANE
#define reg_PT_RX_SATA_LONG_LANE  PHYTEST_RX3.BF.PT_RX_SATA_LONG_LANE
#define reg_PT_RX_START_RD_LANE  PHYTEST_RX3.BF.PT_RX_START_RD_LANE
#define reg_TX_TRAIN_PAT_SEL_RX_LANE_2_0  PHYTEST_RX3.BF.TX_TRAIN_PAT_SEL_RX_LANE_2_0
#define reg_PT_RX_USER_PATTERN_LANE_15_0_b0  PHYTEST_RX3.BF.PT_RX_USER_PATTERN_LANE_15_0_b0
#define reg_PT_RX_USER_PATTERN_LANE_15_0_b1  PHYTEST_RX3.BF.PT_RX_USER_PATTERN_LANE_15_0_b1
#define reg_PT_RX_USER_PATTERN_LANE_15_0  PHYTEST_RX3.WT.W1

// 0x0090	PHYTEST_RX4		PHYtest Rx Control Register 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t PT_RX_CNT_LANE_47_32_b0                  : 8;	/*[31:16]       r   0*/
		uint8_t PT_RX_CNT_LANE_47_32_b1                  : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_RX4_t;
__xdata __at( 0x3290 ) volatile PHYTEST_RX4_t PHYTEST_RX4;
#define reg_PT_RX_CNT_LANE_47_32_b0  PHYTEST_RX4.BF.PT_RX_CNT_LANE_47_32_b0
#define reg_PT_RX_CNT_LANE_47_32_b1  PHYTEST_RX4.BF.PT_RX_CNT_LANE_47_32_b1
#define reg_PT_RX_CNT_LANE_47_32  PHYTEST_RX4.WT.W1

// 0x0094	PHYTEST_RX5		PHYtest Rx Control Register 5
typedef union {
	struct {
		uint8_t PT_RX_CNT_LANE_31_0_b0                   : 8;	/* [31:0]       r   0*/
		uint8_t PT_RX_CNT_LANE_31_0_b1                   : 8;	/* [31:0]       r   0*/
		uint8_t PT_RX_CNT_LANE_31_0_b2                   : 8;	/* [31:0]       r   0*/
		uint8_t PT_RX_CNT_LANE_31_0_b3                   : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_RX5_t;
__xdata __at( 0x3294 ) volatile PHYTEST_RX5_t PHYTEST_RX5;
#define reg_PT_RX_CNT_LANE_31_0_b0  PHYTEST_RX5.BF.PT_RX_CNT_LANE_31_0_b0
#define reg_PT_RX_CNT_LANE_31_0_b1  PHYTEST_RX5.BF.PT_RX_CNT_LANE_31_0_b1
#define reg_PT_RX_CNT_LANE_31_0_b2  PHYTEST_RX5.BF.PT_RX_CNT_LANE_31_0_b2
#define reg_PT_RX_CNT_LANE_31_0_b3  PHYTEST_RX5.BF.PT_RX_CNT_LANE_31_0_b3

// 0x0098	PHYTEST_RX6		PHYtest Rx Control Register 6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t PT_RX_ERR_CNT_LANE_47_32_b0              : 8;	/*[31:16]       r   0*/
		uint8_t PT_RX_ERR_CNT_LANE_47_32_b1              : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_RX6_t;
__xdata __at( 0x3298 ) volatile PHYTEST_RX6_t PHYTEST_RX6;
#define reg_PT_RX_ERR_CNT_LANE_47_32_b0  PHYTEST_RX6.BF.PT_RX_ERR_CNT_LANE_47_32_b0
#define reg_PT_RX_ERR_CNT_LANE_47_32_b1  PHYTEST_RX6.BF.PT_RX_ERR_CNT_LANE_47_32_b1
#define reg_PT_RX_ERR_CNT_LANE_47_32  PHYTEST_RX6.WT.W1

// 0x009c	PHYTEST_RX7		PHYtest Rx Control Register 7
typedef union {
	struct {
		uint8_t PT_RX_ERR_CNT_LANE_31_0_b0               : 8;	/* [31:0]       r   0*/
		uint8_t PT_RX_ERR_CNT_LANE_31_0_b1               : 8;	/* [31:0]       r   0*/
		uint8_t PT_RX_ERR_CNT_LANE_31_0_b2               : 8;	/* [31:0]       r   0*/
		uint8_t PT_RX_ERR_CNT_LANE_31_0_b3               : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_RX7_t;
__xdata __at( 0x329c ) volatile PHYTEST_RX7_t PHYTEST_RX7;
#define reg_PT_RX_ERR_CNT_LANE_31_0_b0  PHYTEST_RX7.BF.PT_RX_ERR_CNT_LANE_31_0_b0
#define reg_PT_RX_ERR_CNT_LANE_31_0_b1  PHYTEST_RX7.BF.PT_RX_ERR_CNT_LANE_31_0_b1
#define reg_PT_RX_ERR_CNT_LANE_31_0_b2  PHYTEST_RX7.BF.PT_RX_ERR_CNT_LANE_31_0_b2
#define reg_PT_RX_ERR_CNT_LANE_31_0_b3  PHYTEST_RX7.BF.PT_RX_ERR_CNT_LANE_31_0_b3

// 0x00a0	PHYTEST_RX8		PHYtest Rx Control Register 8
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t PT_RX_CNT_MAX_LANE_47_32_b0              : 8;	/*[31:16]     r/w 16'hffff*/
		uint8_t PT_RX_CNT_MAX_LANE_47_32_b1              : 8;	/*[31:16]     r/w 16'hffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_RX8_t;
__xdata __at( 0x32a0 ) volatile PHYTEST_RX8_t PHYTEST_RX8;
#define reg_PT_RX_CNT_MAX_LANE_47_32_b0  PHYTEST_RX8.BF.PT_RX_CNT_MAX_LANE_47_32_b0
#define reg_PT_RX_CNT_MAX_LANE_47_32_b1  PHYTEST_RX8.BF.PT_RX_CNT_MAX_LANE_47_32_b1
#define reg_PT_RX_CNT_MAX_LANE_47_32  PHYTEST_RX8.WT.W1

// 0x00a4	PHYTEST_RX9		PHYtest Rx Control Register 9
typedef union {
	struct {
		uint8_t PT_RX_CNT_MAX_LANE_31_0_b0               : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_RX_CNT_MAX_LANE_31_0_b1               : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_RX_CNT_MAX_LANE_31_0_b2               : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_RX_CNT_MAX_LANE_31_0_b3               : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_RX9_t;
__xdata __at( 0x32a4 ) volatile PHYTEST_RX9_t PHYTEST_RX9;
#define reg_PT_RX_CNT_MAX_LANE_31_0_b0  PHYTEST_RX9.BF.PT_RX_CNT_MAX_LANE_31_0_b0
#define reg_PT_RX_CNT_MAX_LANE_31_0_b1  PHYTEST_RX9.BF.PT_RX_CNT_MAX_LANE_31_0_b1
#define reg_PT_RX_CNT_MAX_LANE_31_0_b2  PHYTEST_RX9.BF.PT_RX_CNT_MAX_LANE_31_0_b2
#define reg_PT_RX_CNT_MAX_LANE_31_0_b3  PHYTEST_RX9.BF.PT_RX_CNT_MAX_LANE_31_0_b3

// 0x00a8	SQ_REG1		squelch glitch filter control1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [29:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [29:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [29:0]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/* [29:0]     r/w   0*/
		uint8_t INT_SQ_DET_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t INT_SQ_DET_FORCE_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SQ_REG1_t;
__xdata __at( 0x32a8 ) volatile SQ_REG1_t SQ_REG1;
#define reg_INT_SQ_DET_LANE  SQ_REG1.BF.INT_SQ_DET_LANE
#define reg_INT_SQ_DET_FORCE_LANE  SQ_REG1.BF.INT_SQ_DET_FORCE_LANE

// 0x00ac	INPUT_RX_PIN_REG4_LANE		Input Interface Register For Rx Lane4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG4_LANE_t;
__xdata __at( 0x32ac ) volatile INPUT_RX_PIN_REG4_LANE_t INPUT_RX_PIN_REG4_LANE;

// 0x00b0	INPUT_RX_PIN_REG5_LANE		Input Interface Register For Rx Lane5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG5_LANE_t;
__xdata __at( 0x32b0 ) volatile INPUT_RX_PIN_REG5_LANE_t INPUT_RX_PIN_REG5_LANE;

// 0x00b4	INPUT_RX_PIN_REG6_LANE		Input Interface Register For Rx Lane6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[31:17]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:17]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_RX_PIN_REG6_LANE_t;
__xdata __at( 0x32b4 ) volatile INPUT_RX_PIN_REG6_LANE_t INPUT_RX_PIN_REG6_LANE;

// 0x00b8	RX2PLL_REG		Rx To PLL Registers
typedef union {
	struct {
		uint8_t RX2PLL_R_FIFO_CNT_LANE_4_0               : 5;	/*  [4:0]       r   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RX2PLL_W_FIFO_CNT_LANE_4_0               : 5;	/* [12:8]       r   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX2PLL_FIFO_CNT_RD_REQ_LANE              : 1;	/*     16     r/w   1*/
		uint8_t RX2PLL_FIFO_EMPTY_FORCE_LANE             : 1;	/*     17     r/w   0*/
		uint8_t RX2PLL_FIFO_FULL_FORCE_LANE              : 1;	/*     18     r/w   0*/
		uint8_t RX2PLL_FIFO_STATUS_CLEAR_LANE            : 1;	/*     19     r/w   0*/
		uint8_t RX2PLL_FIFO_EMPTY_LANE                   : 1;	/*     20       r   0*/
		uint8_t RX2PLL_FIFO_FULL_LANE                    : 1;	/*     21       r   0*/
		uint8_t RX2PLL_FIFO_RD_START_POINT_LANE          : 1;	/*     22     r/w   0*/
		uint8_t RX2PLL_FIFO_NO_STOP_LANE                 : 1;	/*     23     r/w   0*/
		uint8_t RX2PLL_FREQ_TRAN_EN_LANE                 : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX2PLL_REG_t;
__xdata __at( 0x32b8 ) volatile RX2PLL_REG_t RX2PLL_REG;
#define reg_RX2PLL_R_FIFO_CNT_LANE_4_0  RX2PLL_REG.BF.RX2PLL_R_FIFO_CNT_LANE_4_0
#define reg_RX2PLL_W_FIFO_CNT_LANE_4_0  RX2PLL_REG.BF.RX2PLL_W_FIFO_CNT_LANE_4_0
#define reg_RX2PLL_FIFO_CNT_RD_REQ_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_CNT_RD_REQ_LANE
#define reg_RX2PLL_FIFO_EMPTY_FORCE_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_EMPTY_FORCE_LANE
#define reg_RX2PLL_FIFO_FULL_FORCE_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_FULL_FORCE_LANE
#define reg_RX2PLL_FIFO_STATUS_CLEAR_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_STATUS_CLEAR_LANE
#define reg_RX2PLL_FIFO_EMPTY_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_EMPTY_LANE
#define reg_RX2PLL_FIFO_FULL_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_FULL_LANE
#define reg_RX2PLL_FIFO_RD_START_POINT_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_RD_START_POINT_LANE
#define reg_RX2PLL_FIFO_NO_STOP_LANE  RX2PLL_REG.BF.RX2PLL_FIFO_NO_STOP_LANE
#define reg_RX2PLL_FREQ_TRAN_EN_LANE  RX2PLL_REG.BF.RX2PLL_FREQ_TRAN_EN_LANE

// 0x00bc	DTL_REG5		DTL related register 5
typedef union {
	struct {
		uint8_t RX_FOFFSET_INPH_LANE_17_0_b0             : 8;	/* [17:0]       r   0*/
		uint8_t RX_FOFFSET_INPH_LANE_17_0_b1             : 8;	/* [17:0]       r   0*/
		uint8_t RX_FOFFSET_INPH_LANE_17_0_b2             : 2;	/* [17:0]       r   0*/
		uint8_t RX_FOFFSET_INPH_REQ_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG5_t;
__xdata __at( 0x32bc ) volatile DTL_REG5_t DTL_REG5;
#define reg_RX_FOFFSET_INPH_LANE_17_0_b0  DTL_REG5.BF.RX_FOFFSET_INPH_LANE_17_0_b0
#define reg_RX_FOFFSET_INPH_LANE_17_0_b1  DTL_REG5.BF.RX_FOFFSET_INPH_LANE_17_0_b1
#define reg_RX_FOFFSET_INPH_LANE_17_0_b2  DTL_REG5.BF.RX_FOFFSET_INPH_LANE_17_0_b2
#define reg_RX_FOFFSET_INPH_REQ_LANE  DTL_REG5.BF.RX_FOFFSET_INPH_REQ_LANE

// 0x00c0	FRAME_SYNC_DET_REG5		Frame Sync Detection Reg5
typedef union {
	struct {
		uint8_t PACKET_SYNC_CHAR_SEL_LANE_1_0            : 2;	/*  [1:0]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_LANE                     : 1;	/*      2     r/w   1*/
		uint8_t SYNC_DET_DIS_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t PACKET_FOUND_LANE                        : 1;	/*      4       r   0*/
		uint8_t SYNC_FOUND_LANE                          : 1;	/*      5       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t SYNC_REALIGN_MODE_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t SYNC_MASK_LANE_9_0_b0                    : 7;	/* [18:9]     r/w 10'h3ff*/
		uint8_t SYNC_MASK_LANE_9_0_b1                    : 3;	/* [18:9]     r/w 10'h3ff*/
		uint8_t SYNC_CHAR_LANE_9_0_b0                    : 5;	/*[28:19]     r/w 10'h283*/
		uint8_t SYNC_CHAR_LANE_9_0_b1                    : 5;	/*[28:19]     r/w 10'h283*/
		uint8_t SYNC_POL_LANE                            : 1;	/*     29     r/w   1*/
		uint8_t SYNC_DET_AFTER_PHY_RDY_LANE              : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG5_t;
__xdata __at( 0x32c0 ) volatile FRAME_SYNC_DET_REG5_t FRAME_SYNC_DET_REG5;
#define reg_PACKET_SYNC_CHAR_SEL_LANE_1_0  FRAME_SYNC_DET_REG5.BF.PACKET_SYNC_CHAR_SEL_LANE_1_0
#define reg_PACKET_SYNC_DIS_LANE  FRAME_SYNC_DET_REG5.BF.PACKET_SYNC_DIS_LANE
#define reg_SYNC_DET_DIS_LANE  FRAME_SYNC_DET_REG5.BF.SYNC_DET_DIS_LANE
#define reg_PACKET_FOUND_LANE  FRAME_SYNC_DET_REG5.BF.PACKET_FOUND_LANE
#define reg_SYNC_FOUND_LANE  FRAME_SYNC_DET_REG5.BF.SYNC_FOUND_LANE
#define reg_SYNC_REALIGN_MODE_LANE  FRAME_SYNC_DET_REG5.BF.SYNC_REALIGN_MODE_LANE
#define reg_SYNC_MASK_LANE_9_0_b0  FRAME_SYNC_DET_REG5.BF.SYNC_MASK_LANE_9_0_b0
#define reg_SYNC_MASK_LANE_9_0_b1  FRAME_SYNC_DET_REG5.BF.SYNC_MASK_LANE_9_0_b1
#define reg_SYNC_CHAR_LANE_9_0_b0  FRAME_SYNC_DET_REG5.BF.SYNC_CHAR_LANE_9_0_b0
#define reg_SYNC_CHAR_LANE_9_0_b1  FRAME_SYNC_DET_REG5.BF.SYNC_CHAR_LANE_9_0_b1
#define reg_SYNC_POL_LANE  FRAME_SYNC_DET_REG5.BF.SYNC_POL_LANE
#define reg_SYNC_DET_AFTER_PHY_RDY_LANE  FRAME_SYNC_DET_REG5.BF.SYNC_DET_AFTER_PHY_RDY_LANE

// 0x00c4	FRAME_SYNC_DET_REG6		Frame Sync Detection Reg6
typedef union {
	struct {
		uint8_t PACKET_SYNC_CHAR1_LANE_29_0_b0           : 8;	/* [29:0]     r/w 30'h40fea99*/
		uint8_t PACKET_SYNC_CHAR1_LANE_29_0_b1           : 8;	/* [29:0]     r/w 30'h40fea99*/
		uint8_t PACKET_SYNC_CHAR1_LANE_29_0_b2           : 8;	/* [29:0]     r/w 30'h40fea99*/
		uint8_t PACKET_SYNC_CHAR1_LANE_29_0_b3           : 6;	/* [29:0]     r/w 30'h40fea99*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG6_t;
__xdata __at( 0x32c4 ) volatile FRAME_SYNC_DET_REG6_t FRAME_SYNC_DET_REG6;
#define reg_PACKET_SYNC_CHAR1_LANE_29_0_b0  FRAME_SYNC_DET_REG6.BF.PACKET_SYNC_CHAR1_LANE_29_0_b0
#define reg_PACKET_SYNC_CHAR1_LANE_29_0_b1  FRAME_SYNC_DET_REG6.BF.PACKET_SYNC_CHAR1_LANE_29_0_b1
#define reg_PACKET_SYNC_CHAR1_LANE_29_0_b2  FRAME_SYNC_DET_REG6.BF.PACKET_SYNC_CHAR1_LANE_29_0_b2
#define reg_PACKET_SYNC_CHAR1_LANE_29_0_b3  FRAME_SYNC_DET_REG6.BF.PACKET_SYNC_CHAR1_LANE_29_0_b3

// 0x00c8	FRAME_SYNC_DET_REG7		Frame Sync Detection Reg7
typedef union {
	struct {
		uint8_t PACKET_SYNC_CHAR2_LANE_29_0_b0           : 8;	/* [29:0]     r/w 30'h2b9a2789*/
		uint8_t PACKET_SYNC_CHAR2_LANE_29_0_b1           : 8;	/* [29:0]     r/w 30'h2b9a2789*/
		uint8_t PACKET_SYNC_CHAR2_LANE_29_0_b2           : 8;	/* [29:0]     r/w 30'h2b9a2789*/
		uint8_t PACKET_SYNC_CHAR2_LANE_29_0_b3           : 6;	/* [29:0]     r/w 30'h2b9a2789*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG7_t;
__xdata __at( 0x32c8 ) volatile FRAME_SYNC_DET_REG7_t FRAME_SYNC_DET_REG7;
#define reg_PACKET_SYNC_CHAR2_LANE_29_0_b0  FRAME_SYNC_DET_REG7.BF.PACKET_SYNC_CHAR2_LANE_29_0_b0
#define reg_PACKET_SYNC_CHAR2_LANE_29_0_b1  FRAME_SYNC_DET_REG7.BF.PACKET_SYNC_CHAR2_LANE_29_0_b1
#define reg_PACKET_SYNC_CHAR2_LANE_29_0_b2  FRAME_SYNC_DET_REG7.BF.PACKET_SYNC_CHAR2_LANE_29_0_b2
#define reg_PACKET_SYNC_CHAR2_LANE_29_0_b3  FRAME_SYNC_DET_REG7.BF.PACKET_SYNC_CHAR2_LANE_29_0_b3

// 0x00cc	RX_FEC_HIST_CTRL_REG0		Rx FEC Corrupted Symbol Histogram Control Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:0]     r/w   0*/
		uint8_t FEC_HIST_RD_REQ_LANE                     : 1;	/*     29     r/w   0*/
		uint8_t FEC_HIST_RS_TYPE_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t FEC_HIST_START_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_CTRL_REG0_t;
__xdata __at( 0x32cc ) volatile RX_FEC_HIST_CTRL_REG0_t RX_FEC_HIST_CTRL_REG0;
#define reg_FEC_HIST_RD_REQ_LANE  RX_FEC_HIST_CTRL_REG0.BF.FEC_HIST_RD_REQ_LANE
#define reg_FEC_HIST_RS_TYPE_LANE  RX_FEC_HIST_CTRL_REG0.BF.FEC_HIST_RS_TYPE_LANE
#define reg_FEC_HIST_START_LANE  RX_FEC_HIST_CTRL_REG0.BF.FEC_HIST_START_LANE

// 0x00d0	RX_FEC_HIST_RSLT_REG0		Rx FEC Corrupted Symbol Histogram Results Register 0
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_0_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_0_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_0_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_0_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG0_t;
__xdata __at( 0x32d0 ) volatile RX_FEC_HIST_RSLT_REG0_t RX_FEC_HIST_RSLT_REG0;
#define reg_FEC_HIST_CORR_SYMB_0_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG0.BF.FEC_HIST_CORR_SYMB_0_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_0_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG0.BF.FEC_HIST_CORR_SYMB_0_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_0_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG0.BF.FEC_HIST_CORR_SYMB_0_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_0_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG0.BF.FEC_HIST_CORR_SYMB_0_LANE_31_0_b3

// 0x00d4	RX_FEC_HIST_RSLT_REG1		Rx FEC Corrupted Symbol Histogram Results Register 1
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_1_LANE_47_32_b0       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_1_LANE_47_32_b1       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_0_LANE_47_32_b0       : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_0_LANE_47_32_b1       : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG1_t;
__xdata __at( 0x32d4 ) volatile RX_FEC_HIST_RSLT_REG1_t RX_FEC_HIST_RSLT_REG1;
#define reg_FEC_HIST_CORR_SYMB_1_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG1.BF.FEC_HIST_CORR_SYMB_1_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_1_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG1.BF.FEC_HIST_CORR_SYMB_1_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_0_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG1.BF.FEC_HIST_CORR_SYMB_0_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_0_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG1.BF.FEC_HIST_CORR_SYMB_0_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_1_LANE_47_32  RX_FEC_HIST_RSLT_REG1.WT.W0
#define reg_FEC_HIST_CORR_SYMB_0_LANE_47_32  RX_FEC_HIST_RSLT_REG1.WT.W1

// 0x00d8	RX_FEC_HIST_RSLT_REG2		Rx FEC Corrupted Symbol Histogram Results Register 2
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_1_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_1_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_1_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_1_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG2_t;
__xdata __at( 0x32d8 ) volatile RX_FEC_HIST_RSLT_REG2_t RX_FEC_HIST_RSLT_REG2;
#define reg_FEC_HIST_CORR_SYMB_1_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG2.BF.FEC_HIST_CORR_SYMB_1_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_1_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG2.BF.FEC_HIST_CORR_SYMB_1_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_1_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG2.BF.FEC_HIST_CORR_SYMB_1_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_1_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG2.BF.FEC_HIST_CORR_SYMB_1_LANE_31_0_b3

// 0x00dc	RX_FEC_HIST_RSLT_REG3		Rx FEC Corrupted Symbol Histogram Results Register 3
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_2_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_2_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_2_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_2_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG3_t;
__xdata __at( 0x32dc ) volatile RX_FEC_HIST_RSLT_REG3_t RX_FEC_HIST_RSLT_REG3;
#define reg_FEC_HIST_CORR_SYMB_2_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG3.BF.FEC_HIST_CORR_SYMB_2_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_2_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG3.BF.FEC_HIST_CORR_SYMB_2_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_2_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG3.BF.FEC_HIST_CORR_SYMB_2_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_2_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG3.BF.FEC_HIST_CORR_SYMB_2_LANE_31_0_b3

// 0x00e0	RX_FEC_HIST_RSLT_REG4		Rx FEC Corrupted Symbol Histogram Results Register 4
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_3_LANE_47_32_b0       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_3_LANE_47_32_b1       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_2_LANE_47_32_b0       : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_2_LANE_47_32_b1       : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG4_t;
__xdata __at( 0x32e0 ) volatile RX_FEC_HIST_RSLT_REG4_t RX_FEC_HIST_RSLT_REG4;
#define reg_FEC_HIST_CORR_SYMB_3_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG4.BF.FEC_HIST_CORR_SYMB_3_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_3_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG4.BF.FEC_HIST_CORR_SYMB_3_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_2_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG4.BF.FEC_HIST_CORR_SYMB_2_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_2_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG4.BF.FEC_HIST_CORR_SYMB_2_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_3_LANE_47_32  RX_FEC_HIST_RSLT_REG4.WT.W0
#define reg_FEC_HIST_CORR_SYMB_2_LANE_47_32  RX_FEC_HIST_RSLT_REG4.WT.W1

// 0x00e4	RX_FEC_HIST_RSLT_REG5		Rx FEC Corrupted Symbol Histogram Results Register 5
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_3_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_3_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_3_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_3_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG5_t;
__xdata __at( 0x32e4 ) volatile RX_FEC_HIST_RSLT_REG5_t RX_FEC_HIST_RSLT_REG5;
#define reg_FEC_HIST_CORR_SYMB_3_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG5.BF.FEC_HIST_CORR_SYMB_3_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_3_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG5.BF.FEC_HIST_CORR_SYMB_3_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_3_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG5.BF.FEC_HIST_CORR_SYMB_3_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_3_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG5.BF.FEC_HIST_CORR_SYMB_3_LANE_31_0_b3

// 0x00e8	RX_FEC_HIST_RSLT_REG6		Rx FEC Corrupted Symbol Histogram Results Register 6
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_4_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_4_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_4_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_4_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG6_t;
__xdata __at( 0x32e8 ) volatile RX_FEC_HIST_RSLT_REG6_t RX_FEC_HIST_RSLT_REG6;
#define reg_FEC_HIST_CORR_SYMB_4_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG6.BF.FEC_HIST_CORR_SYMB_4_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_4_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG6.BF.FEC_HIST_CORR_SYMB_4_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_4_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG6.BF.FEC_HIST_CORR_SYMB_4_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_4_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG6.BF.FEC_HIST_CORR_SYMB_4_LANE_31_0_b3

// 0x00ec	RX_FEC_HIST_RSLT_REG7		Rx FEC Corrupted Symbol Histogram Results Register 7
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_5_LANE_47_32_b0       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_5_LANE_47_32_b1       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_4_LANE_47_32_b0       : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_4_LANE_47_32_b1       : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG7_t;
__xdata __at( 0x32ec ) volatile RX_FEC_HIST_RSLT_REG7_t RX_FEC_HIST_RSLT_REG7;
#define reg_FEC_HIST_CORR_SYMB_5_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG7.BF.FEC_HIST_CORR_SYMB_5_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_5_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG7.BF.FEC_HIST_CORR_SYMB_5_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_4_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG7.BF.FEC_HIST_CORR_SYMB_4_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_4_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG7.BF.FEC_HIST_CORR_SYMB_4_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_5_LANE_47_32  RX_FEC_HIST_RSLT_REG7.WT.W0
#define reg_FEC_HIST_CORR_SYMB_4_LANE_47_32  RX_FEC_HIST_RSLT_REG7.WT.W1

// 0x00f0	RX_FEC_HIST_RSLT_REG8		Rx FEC Corrupted Symbol Histogram Results Register 8
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_5_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_5_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_5_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_5_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG8_t;
__xdata __at( 0x32f0 ) volatile RX_FEC_HIST_RSLT_REG8_t RX_FEC_HIST_RSLT_REG8;
#define reg_FEC_HIST_CORR_SYMB_5_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG8.BF.FEC_HIST_CORR_SYMB_5_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_5_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG8.BF.FEC_HIST_CORR_SYMB_5_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_5_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG8.BF.FEC_HIST_CORR_SYMB_5_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_5_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG8.BF.FEC_HIST_CORR_SYMB_5_LANE_31_0_b3

// 0x00f4	RX_FEC_HIST_RSLT_REG9		Rx FEC Corrupted Symbol Histogram Results Register 9
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_6_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_6_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_6_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_6_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG9_t;
__xdata __at( 0x32f4 ) volatile RX_FEC_HIST_RSLT_REG9_t RX_FEC_HIST_RSLT_REG9;
#define reg_FEC_HIST_CORR_SYMB_6_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG9.BF.FEC_HIST_CORR_SYMB_6_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_6_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG9.BF.FEC_HIST_CORR_SYMB_6_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_6_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG9.BF.FEC_HIST_CORR_SYMB_6_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_6_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG9.BF.FEC_HIST_CORR_SYMB_6_LANE_31_0_b3

// 0x00f8	RX_FEC_HIST_RSLT_REG10		Rx FEC Corrupted Symbol Histogram Results Register 10
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_7_LANE_47_32_b0       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_7_LANE_47_32_b1       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_6_LANE_47_32_b0       : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_6_LANE_47_32_b1       : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG10_t;
__xdata __at( 0x32f8 ) volatile RX_FEC_HIST_RSLT_REG10_t RX_FEC_HIST_RSLT_REG10;
#define reg_FEC_HIST_CORR_SYMB_7_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG10.BF.FEC_HIST_CORR_SYMB_7_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_7_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG10.BF.FEC_HIST_CORR_SYMB_7_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_6_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG10.BF.FEC_HIST_CORR_SYMB_6_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_6_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG10.BF.FEC_HIST_CORR_SYMB_6_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_7_LANE_47_32  RX_FEC_HIST_RSLT_REG10.WT.W0
#define reg_FEC_HIST_CORR_SYMB_6_LANE_47_32  RX_FEC_HIST_RSLT_REG10.WT.W1

// 0x00fc	RX_FEC_HIST_RSLT_REG11		Rx FEC Corrupted Symbol Histogram Results Register 11
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_7_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_7_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_7_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_7_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG11_t;
__xdata __at( 0x32fc ) volatile RX_FEC_HIST_RSLT_REG11_t RX_FEC_HIST_RSLT_REG11;
#define reg_FEC_HIST_CORR_SYMB_7_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG11.BF.FEC_HIST_CORR_SYMB_7_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_7_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG11.BF.FEC_HIST_CORR_SYMB_7_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_7_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG11.BF.FEC_HIST_CORR_SYMB_7_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_7_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG11.BF.FEC_HIST_CORR_SYMB_7_LANE_31_0_b3

// 0x0100	RX_FEC_HIST_RSLT_REG12		Rx FEC Corrupted Symbol Histogram Results Register 12
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_8_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_8_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_8_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_8_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG12_t;
__xdata __at( 0x3300 ) volatile RX_FEC_HIST_RSLT_REG12_t RX_FEC_HIST_RSLT_REG12;
#define reg_FEC_HIST_CORR_SYMB_8_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG12.BF.FEC_HIST_CORR_SYMB_8_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_8_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG12.BF.FEC_HIST_CORR_SYMB_8_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_8_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG12.BF.FEC_HIST_CORR_SYMB_8_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_8_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG12.BF.FEC_HIST_CORR_SYMB_8_LANE_31_0_b3

// 0x0104	RX_FEC_HIST_RSLT_REG13		Rx FEC Corrupted Symbol Histogram Results Register 13
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_9_LANE_47_32_b0       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_9_LANE_47_32_b1       : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_8_LANE_47_32_b0       : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_8_LANE_47_32_b1       : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG13_t;
__xdata __at( 0x3304 ) volatile RX_FEC_HIST_RSLT_REG13_t RX_FEC_HIST_RSLT_REG13;
#define reg_FEC_HIST_CORR_SYMB_9_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG13.BF.FEC_HIST_CORR_SYMB_9_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_9_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG13.BF.FEC_HIST_CORR_SYMB_9_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_8_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG13.BF.FEC_HIST_CORR_SYMB_8_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_8_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG13.BF.FEC_HIST_CORR_SYMB_8_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_9_LANE_47_32  RX_FEC_HIST_RSLT_REG13.WT.W0
#define reg_FEC_HIST_CORR_SYMB_8_LANE_47_32  RX_FEC_HIST_RSLT_REG13.WT.W1

// 0x0108	RX_FEC_HIST_RSLT_REG14		Rx FEC Corrupted Symbol Histogram Results Register 14
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_9_LANE_31_0_b0        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_9_LANE_31_0_b1        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_9_LANE_31_0_b2        : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_9_LANE_31_0_b3        : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG14_t;
__xdata __at( 0x3308 ) volatile RX_FEC_HIST_RSLT_REG14_t RX_FEC_HIST_RSLT_REG14;
#define reg_FEC_HIST_CORR_SYMB_9_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG14.BF.FEC_HIST_CORR_SYMB_9_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_9_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG14.BF.FEC_HIST_CORR_SYMB_9_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_9_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG14.BF.FEC_HIST_CORR_SYMB_9_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_9_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG14.BF.FEC_HIST_CORR_SYMB_9_LANE_31_0_b3

// 0x010c	RX_FEC_HIST_RSLT_REG15		Rx FEC Corrupted Symbol Histogram Results Register 15
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_10_LANE_31_0_b0       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_10_LANE_31_0_b1       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_10_LANE_31_0_b2       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_10_LANE_31_0_b3       : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG15_t;
__xdata __at( 0x330c ) volatile RX_FEC_HIST_RSLT_REG15_t RX_FEC_HIST_RSLT_REG15;
#define reg_FEC_HIST_CORR_SYMB_10_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG15.BF.FEC_HIST_CORR_SYMB_10_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_10_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG15.BF.FEC_HIST_CORR_SYMB_10_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_10_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG15.BF.FEC_HIST_CORR_SYMB_10_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_10_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG15.BF.FEC_HIST_CORR_SYMB_10_LANE_31_0_b3

// 0x0110	RX_FEC_HIST_RSLT_REG16		Rx FEC Corrupted Symbol Histogram Results Register 16
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_11_LANE_47_32_b0      : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_11_LANE_47_32_b1      : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_10_LANE_47_32_b0      : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_10_LANE_47_32_b1      : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG16_t;
__xdata __at( 0x3310 ) volatile RX_FEC_HIST_RSLT_REG16_t RX_FEC_HIST_RSLT_REG16;
#define reg_FEC_HIST_CORR_SYMB_11_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG16.BF.FEC_HIST_CORR_SYMB_11_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_11_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG16.BF.FEC_HIST_CORR_SYMB_11_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_10_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG16.BF.FEC_HIST_CORR_SYMB_10_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_10_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG16.BF.FEC_HIST_CORR_SYMB_10_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_11_LANE_47_32  RX_FEC_HIST_RSLT_REG16.WT.W0
#define reg_FEC_HIST_CORR_SYMB_10_LANE_47_32  RX_FEC_HIST_RSLT_REG16.WT.W1

// 0x0114	RX_FEC_HIST_RSLT_REG17		Rx FEC Corrupted Symbol Histogram Results Register 17
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_11_LANE_31_0_b0       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_11_LANE_31_0_b1       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_11_LANE_31_0_b2       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_11_LANE_31_0_b3       : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG17_t;
__xdata __at( 0x3314 ) volatile RX_FEC_HIST_RSLT_REG17_t RX_FEC_HIST_RSLT_REG17;
#define reg_FEC_HIST_CORR_SYMB_11_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG17.BF.FEC_HIST_CORR_SYMB_11_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_11_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG17.BF.FEC_HIST_CORR_SYMB_11_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_11_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG17.BF.FEC_HIST_CORR_SYMB_11_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_11_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG17.BF.FEC_HIST_CORR_SYMB_11_LANE_31_0_b3

// 0x0118	RX_FEC_HIST_RSLT_REG18		Rx FEC Corrupted Symbol Histogram Results Register 18
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_12_LANE_31_0_b0       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_12_LANE_31_0_b1       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_12_LANE_31_0_b2       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_12_LANE_31_0_b3       : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG18_t;
__xdata __at( 0x3318 ) volatile RX_FEC_HIST_RSLT_REG18_t RX_FEC_HIST_RSLT_REG18;
#define reg_FEC_HIST_CORR_SYMB_12_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG18.BF.FEC_HIST_CORR_SYMB_12_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_12_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG18.BF.FEC_HIST_CORR_SYMB_12_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_12_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG18.BF.FEC_HIST_CORR_SYMB_12_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_12_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG18.BF.FEC_HIST_CORR_SYMB_12_LANE_31_0_b3

// 0x011c	RX_FEC_HIST_RSLT_REG19		Rx FEC Corrupted Symbol Histogram Results Register 19
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_13_LANE_47_32_b0      : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_13_LANE_47_32_b1      : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_12_LANE_47_32_b0      : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_12_LANE_47_32_b1      : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG19_t;
__xdata __at( 0x331c ) volatile RX_FEC_HIST_RSLT_REG19_t RX_FEC_HIST_RSLT_REG19;
#define reg_FEC_HIST_CORR_SYMB_13_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG19.BF.FEC_HIST_CORR_SYMB_13_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_13_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG19.BF.FEC_HIST_CORR_SYMB_13_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_12_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG19.BF.FEC_HIST_CORR_SYMB_12_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_12_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG19.BF.FEC_HIST_CORR_SYMB_12_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_13_LANE_47_32  RX_FEC_HIST_RSLT_REG19.WT.W0
#define reg_FEC_HIST_CORR_SYMB_12_LANE_47_32  RX_FEC_HIST_RSLT_REG19.WT.W1

// 0x0120	RX_FEC_HIST_RSLT_REG20		Rx FEC Corrupted Symbol Histogram Results Register 20
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_13_LANE_31_0_b0       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_13_LANE_31_0_b1       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_13_LANE_31_0_b2       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_13_LANE_31_0_b3       : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG20_t;
__xdata __at( 0x3320 ) volatile RX_FEC_HIST_RSLT_REG20_t RX_FEC_HIST_RSLT_REG20;
#define reg_FEC_HIST_CORR_SYMB_13_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG20.BF.FEC_HIST_CORR_SYMB_13_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_13_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG20.BF.FEC_HIST_CORR_SYMB_13_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_13_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG20.BF.FEC_HIST_CORR_SYMB_13_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_13_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG20.BF.FEC_HIST_CORR_SYMB_13_LANE_31_0_b3

// 0x0124	RX_FEC_HIST_RSLT_REG21		Rx FEC Corrupted Symbol Histogram Results Register 21
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_14_LANE_31_0_b0       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_14_LANE_31_0_b1       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_14_LANE_31_0_b2       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_14_LANE_31_0_b3       : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG21_t;
__xdata __at( 0x3324 ) volatile RX_FEC_HIST_RSLT_REG21_t RX_FEC_HIST_RSLT_REG21;
#define reg_FEC_HIST_CORR_SYMB_14_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG21.BF.FEC_HIST_CORR_SYMB_14_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_14_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG21.BF.FEC_HIST_CORR_SYMB_14_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_14_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG21.BF.FEC_HIST_CORR_SYMB_14_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_14_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG21.BF.FEC_HIST_CORR_SYMB_14_LANE_31_0_b3

// 0x0128	RX_FEC_HIST_RSLT_REG22		Rx FEC Corrupted Symbol Histogram Results Register 22
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_15_LANE_47_32_b0      : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_15_LANE_47_32_b1      : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_14_LANE_47_32_b0      : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_14_LANE_47_32_b1      : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG22_t;
__xdata __at( 0x3328 ) volatile RX_FEC_HIST_RSLT_REG22_t RX_FEC_HIST_RSLT_REG22;
#define reg_FEC_HIST_CORR_SYMB_15_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG22.BF.FEC_HIST_CORR_SYMB_15_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_15_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG22.BF.FEC_HIST_CORR_SYMB_15_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_14_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG22.BF.FEC_HIST_CORR_SYMB_14_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_14_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG22.BF.FEC_HIST_CORR_SYMB_14_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_15_LANE_47_32  RX_FEC_HIST_RSLT_REG22.WT.W0
#define reg_FEC_HIST_CORR_SYMB_14_LANE_47_32  RX_FEC_HIST_RSLT_REG22.WT.W1

// 0x012c	RX_FEC_HIST_RSLT_REG23		Rx FEC Corrupted Symbol Histogram Results Register 23
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_15_LANE_31_0_b0       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_15_LANE_31_0_b1       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_15_LANE_31_0_b2       : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_15_LANE_31_0_b3       : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG23_t;
__xdata __at( 0x332c ) volatile RX_FEC_HIST_RSLT_REG23_t RX_FEC_HIST_RSLT_REG23;
#define reg_FEC_HIST_CORR_SYMB_15_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG23.BF.FEC_HIST_CORR_SYMB_15_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_15_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG23.BF.FEC_HIST_CORR_SYMB_15_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_15_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG23.BF.FEC_HIST_CORR_SYMB_15_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_15_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG23.BF.FEC_HIST_CORR_SYMB_15_LANE_31_0_b3

// 0x0130	RX_FEC_HIST_RSLT_REG24		Rx FEC Corrupted Symbol Histogram Results Register 24
typedef union {
	struct {
		uint8_t FEC_BIT_ERR_GE8SE_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE8SE_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE8SE_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE8SE_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG24_t;
__xdata __at( 0x3330 ) volatile RX_FEC_HIST_RSLT_REG24_t RX_FEC_HIST_RSLT_REG24;
#define reg_FEC_BIT_ERR_GE8SE_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG24.BF.FEC_BIT_ERR_GE8SE_LANE_31_0_b0
#define reg_FEC_BIT_ERR_GE8SE_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG24.BF.FEC_BIT_ERR_GE8SE_LANE_31_0_b1
#define reg_FEC_BIT_ERR_GE8SE_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG24.BF.FEC_BIT_ERR_GE8SE_LANE_31_0_b2
#define reg_FEC_BIT_ERR_GE8SE_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG24.BF.FEC_BIT_ERR_GE8SE_LANE_31_0_b3

// 0x0134	RX_FEC_HIST_RSLT_REG25		Rx FEC Corrupted Symbol Histogram Results Register 25
typedef union {
	struct {
		uint8_t FEC_BIT_ERR_GE16SE_LANE_47_32_b0         : 8;	/* [15:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE16SE_LANE_47_32_b1         : 8;	/* [15:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE8SE_LANE_47_32_b0          : 8;	/*[31:16]       r   0*/
		uint8_t FEC_BIT_ERR_GE8SE_LANE_47_32_b1          : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG25_t;
__xdata __at( 0x3334 ) volatile RX_FEC_HIST_RSLT_REG25_t RX_FEC_HIST_RSLT_REG25;
#define reg_FEC_BIT_ERR_GE16SE_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG25.BF.FEC_BIT_ERR_GE16SE_LANE_47_32_b0
#define reg_FEC_BIT_ERR_GE16SE_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG25.BF.FEC_BIT_ERR_GE16SE_LANE_47_32_b1
#define reg_FEC_BIT_ERR_GE8SE_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG25.BF.FEC_BIT_ERR_GE8SE_LANE_47_32_b0
#define reg_FEC_BIT_ERR_GE8SE_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG25.BF.FEC_BIT_ERR_GE8SE_LANE_47_32_b1
#define reg_FEC_BIT_ERR_GE16SE_LANE_47_32  RX_FEC_HIST_RSLT_REG25.WT.W0
#define reg_FEC_BIT_ERR_GE8SE_LANE_47_32  RX_FEC_HIST_RSLT_REG25.WT.W1

// 0x0138	RX_FEC_HIST_RSLT_REG26		Rx FEC Corrupted Symbol Histogram Results Register 26
typedef union {
	struct {
		uint8_t FEC_BIT_ERR_GE16SE_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE16SE_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE16SE_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t FEC_BIT_ERR_GE16SE_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG26_t;
__xdata __at( 0x3338 ) volatile RX_FEC_HIST_RSLT_REG26_t RX_FEC_HIST_RSLT_REG26;
#define reg_FEC_BIT_ERR_GE16SE_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG26.BF.FEC_BIT_ERR_GE16SE_LANE_31_0_b0
#define reg_FEC_BIT_ERR_GE16SE_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG26.BF.FEC_BIT_ERR_GE16SE_LANE_31_0_b1
#define reg_FEC_BIT_ERR_GE16SE_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG26.BF.FEC_BIT_ERR_GE16SE_LANE_31_0_b2
#define reg_FEC_BIT_ERR_GE16SE_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG26.BF.FEC_BIT_ERR_GE16SE_LANE_31_0_b3

// 0x013c	RX_FEC_HIST_RSLT_REG27		Rx FEC Corrupted Symbol Histogram Results Register 27
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b0      : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b1      : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b2      : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b3      : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG27_t;
__xdata __at( 0x333c ) volatile RX_FEC_HIST_RSLT_REG27_t RX_FEC_HIST_RSLT_REG27;
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG27.BF.FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG27.BF.FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG27.BF.FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG27.BF.FEC_HIST_CORR_SYMB_GE8_LANE_31_0_b3

// 0x0140	RX_FEC_HIST_RSLT_REG28		Rx FEC Corrupted Symbol Histogram Results Register 28
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_GE16_LANE_47_32_b0    : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE16_LANE_47_32_b1    : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE8_LANE_47_32_b0     : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE8_LANE_47_32_b1     : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG28_t;
__xdata __at( 0x3340 ) volatile RX_FEC_HIST_RSLT_REG28_t RX_FEC_HIST_RSLT_REG28;
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG28.BF.FEC_HIST_CORR_SYMB_GE16_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG28.BF.FEC_HIST_CORR_SYMB_GE16_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG28.BF.FEC_HIST_CORR_SYMB_GE8_LANE_47_32_b0
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG28.BF.FEC_HIST_CORR_SYMB_GE8_LANE_47_32_b1
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_47_32  RX_FEC_HIST_RSLT_REG28.WT.W0
#define reg_FEC_HIST_CORR_SYMB_GE8_LANE_47_32  RX_FEC_HIST_RSLT_REG28.WT.W1

// 0x0144	RX_FEC_HIST_RSLT_REG29		Rx FEC Corrupted Symbol Histogram Results Register 29
typedef union {
	struct {
		uint8_t FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b0     : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b1     : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b2     : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b3     : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG29_t;
__xdata __at( 0x3344 ) volatile RX_FEC_HIST_RSLT_REG29_t RX_FEC_HIST_RSLT_REG29;
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG29.BF.FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b0
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG29.BF.FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b1
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG29.BF.FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b2
#define reg_FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG29.BF.FEC_HIST_CORR_SYMB_GE16_LANE_31_0_b3

// 0x0148	RX_FEC_HIST_RSLT_REG30		Rx FEC Corrupted Symbol Histogram Results Register 30
typedef union {
	struct {
		uint8_t FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b0    : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b1    : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b2    : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b3    : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG30_t;
__xdata __at( 0x3348 ) volatile RX_FEC_HIST_RSLT_REG30_t RX_FEC_HIST_RSLT_REG30;
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG30.BF.FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b0
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG30.BF.FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b1
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG30.BF.FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b2
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG30.BF.FEC_HIST_TX0_RX1_BIT_ERR_LANE_31_0_b3

// 0x014c	RX_FEC_HIST_RSLT_REG31		Rx FEC Corrupted Symbol Histogram Results Register 31
typedef union {
	struct {
		uint8_t FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32_b0   : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32_b1   : 8;	/* [15:0]       r   0*/
		uint8_t FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32_b0   : 8;	/*[31:16]       r   0*/
		uint8_t FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32_b1   : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG31_t;
__xdata __at( 0x334c ) volatile RX_FEC_HIST_RSLT_REG31_t RX_FEC_HIST_RSLT_REG31;
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG31.BF.FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32_b0
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG31.BF.FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32_b1
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG31.BF.FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32_b0
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG31.BF.FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32_b1
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_47_32  RX_FEC_HIST_RSLT_REG31.WT.W0
#define reg_FEC_HIST_TX0_RX1_BIT_ERR_LANE_47_32  RX_FEC_HIST_RSLT_REG31.WT.W1

// 0x0150	RX_FEC_HIST_RSLT_REG32		Rx FEC Corrupted Symbol Histogram Results Register 32
typedef union {
	struct {
		uint8_t FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b0    : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b1    : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b2    : 8;	/* [31:0]       r   0*/
		uint8_t FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b3    : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG32_t;
__xdata __at( 0x3350 ) volatile RX_FEC_HIST_RSLT_REG32_t RX_FEC_HIST_RSLT_REG32;
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG32.BF.FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b0
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG32.BF.FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b1
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG32.BF.FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b2
#define reg_FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG32.BF.FEC_HIST_TX1_RX0_BIT_ERR_LANE_31_0_b3

// 0x0154	RX_FEC_HIST_RSLT_REG33		Rx FEC Corrupted Symbol Histogram Results Register 33
typedef union {
	struct {
		uint8_t FEC_FRAM_NUM_CNT_LANE_31_0_b0            : 8;	/* [31:0]       r   0*/
		uint8_t FEC_FRAM_NUM_CNT_LANE_31_0_b1            : 8;	/* [31:0]       r   0*/
		uint8_t FEC_FRAM_NUM_CNT_LANE_31_0_b2            : 8;	/* [31:0]       r   0*/
		uint8_t FEC_FRAM_NUM_CNT_LANE_31_0_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG33_t;
__xdata __at( 0x3354 ) volatile RX_FEC_HIST_RSLT_REG33_t RX_FEC_HIST_RSLT_REG33;
#define reg_FEC_FRAM_NUM_CNT_LANE_31_0_b0  RX_FEC_HIST_RSLT_REG33.BF.FEC_FRAM_NUM_CNT_LANE_31_0_b0
#define reg_FEC_FRAM_NUM_CNT_LANE_31_0_b1  RX_FEC_HIST_RSLT_REG33.BF.FEC_FRAM_NUM_CNT_LANE_31_0_b1
#define reg_FEC_FRAM_NUM_CNT_LANE_31_0_b2  RX_FEC_HIST_RSLT_REG33.BF.FEC_FRAM_NUM_CNT_LANE_31_0_b2
#define reg_FEC_FRAM_NUM_CNT_LANE_31_0_b3  RX_FEC_HIST_RSLT_REG33.BF.FEC_FRAM_NUM_CNT_LANE_31_0_b3

// 0x0158	RX_FEC_HIST_RSLT_REG34		Rx FEC Corrupted Symbol Histogram Results Register 34
typedef union {
	struct {
		uint8_t FEC_FRAM_NUM_CNT_LANE_47_32_b0           : 8;	/* [15:0]       r   0*/
		uint8_t FEC_FRAM_NUM_CNT_LANE_47_32_b1           : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_FEC_HIST_RSLT_REG34_t;
__xdata __at( 0x3358 ) volatile RX_FEC_HIST_RSLT_REG34_t RX_FEC_HIST_RSLT_REG34;
#define reg_FEC_FRAM_NUM_CNT_LANE_47_32_b0  RX_FEC_HIST_RSLT_REG34.BF.FEC_FRAM_NUM_CNT_LANE_47_32_b0
#define reg_FEC_FRAM_NUM_CNT_LANE_47_32_b1  RX_FEC_HIST_RSLT_REG34.BF.FEC_FRAM_NUM_CNT_LANE_47_32_b1
#define reg_FEC_FRAM_NUM_CNT_LANE_47_32  RX_FEC_HIST_RSLT_REG34.WT.W0

// 0x015c	RX_DP_GB_CTRL_REG0		Rx Data Path Gearbox Control Register 0
typedef union {
	struct {
		uint8_t ANA_RX_TRAIN_SEL_BITS_LANE               : 1;	/*      0     r/w   0*/
		uint8_t ANA_RX_TRAIN_SEL_BITS_FORCE_LANE         : 1;	/*      1     r/w   0*/
		uint8_t ANA_RX_SEL_BITS_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t ANA_RX_SEL_BITS_FORCE_LANE               : 1;	/*      3     r/w   0*/
		uint8_t TX_TRAIN_DONE_LANE                       : 1;	/*      4     r/w   0*/
		uint8_t TX_TRAIN_DONE_FORCE_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t RX_MUX_CLK_SEL_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RX_MUX_CLK_SEL_FORCE_LANE                : 1;	/*      7     r/w   0*/
		uint8_t DIG_RX_RXCLK_TRAIN_EN_LANE               : 1;	/*      8     r/w   0*/
		uint8_t DIG_RX_RXCLK_TRAIN_EN_FORCE_LANE         : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_RXCLK_TRAIN_EN_LANE               : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_RXCLK_TRAIN_EN_FORCE_LANE         : 1;	/*     11     r/w   0*/
		uint8_t RX_GB2_FIFO_WR_PTR_LANE_3_0              : 4;	/*[15:12]       r   0*/
		uint8_t RX_GB2_FIFO_RD_PTR_LANE_3_0              : 4;	/*[19:16]       r   0*/
		uint8_t RESERVED_20                              : 2;	/*[21:20]     r/w   0*/
		uint8_t RX_GB2_FIFO_PTR_VALID_LANE               : 1;	/*     22     r/w   0*/
		uint8_t GB2_FIFO_SEL_LANE                        : 1;	/*     23     r/w   0*/
		uint8_t GB2_FIFO_SEL_FORCE_LANE                  : 1;	/*     24     r/w   0*/
		uint8_t GB2_FIFO_EN_LANE                         : 1;	/*     25     r/w   0*/
		uint8_t GB2_FIFO_EN_FORCE_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 4;	/*[30:27]     r/w   0*/
		uint8_t TRAIN_RXCLK_SWITCH_EN_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_GB_CTRL_REG0_t;
__xdata __at( 0x335c ) volatile RX_DP_GB_CTRL_REG0_t RX_DP_GB_CTRL_REG0;
#define reg_ANA_RX_TRAIN_SEL_BITS_LANE  RX_DP_GB_CTRL_REG0.BF.ANA_RX_TRAIN_SEL_BITS_LANE
#define reg_ANA_RX_TRAIN_SEL_BITS_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.ANA_RX_TRAIN_SEL_BITS_FORCE_LANE
#define reg_ANA_RX_SEL_BITS_LANE  RX_DP_GB_CTRL_REG0.BF.ANA_RX_SEL_BITS_LANE
#define reg_ANA_RX_SEL_BITS_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.ANA_RX_SEL_BITS_FORCE_LANE
#define reg_TX_TRAIN_DONE_LANE  RX_DP_GB_CTRL_REG0.BF.TX_TRAIN_DONE_LANE
#define reg_TX_TRAIN_DONE_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.TX_TRAIN_DONE_FORCE_LANE
#define reg_RX_MUX_CLK_SEL_LANE  RX_DP_GB_CTRL_REG0.BF.RX_MUX_CLK_SEL_LANE
#define reg_RX_MUX_CLK_SEL_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.RX_MUX_CLK_SEL_FORCE_LANE
#define reg_DIG_RX_RXCLK_TRAIN_EN_LANE  RX_DP_GB_CTRL_REG0.BF.DIG_RX_RXCLK_TRAIN_EN_LANE
#define reg_DIG_RX_RXCLK_TRAIN_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.DIG_RX_RXCLK_TRAIN_EN_FORCE_LANE
#define reg_ANA_RX_RXCLK_TRAIN_EN_LANE  RX_DP_GB_CTRL_REG0.BF.ANA_RX_RXCLK_TRAIN_EN_LANE
#define reg_ANA_RX_RXCLK_TRAIN_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.ANA_RX_RXCLK_TRAIN_EN_FORCE_LANE
#define reg_RX_GB2_FIFO_WR_PTR_LANE_3_0  RX_DP_GB_CTRL_REG0.BF.RX_GB2_FIFO_WR_PTR_LANE_3_0
#define reg_RX_GB2_FIFO_RD_PTR_LANE_3_0  RX_DP_GB_CTRL_REG0.BF.RX_GB2_FIFO_RD_PTR_LANE_3_0
#define reg_RX_GB2_FIFO_PTR_VALID_LANE  RX_DP_GB_CTRL_REG0.BF.RX_GB2_FIFO_PTR_VALID_LANE
#define reg_GB2_FIFO_SEL_LANE  RX_DP_GB_CTRL_REG0.BF.GB2_FIFO_SEL_LANE
#define reg_GB2_FIFO_SEL_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.GB2_FIFO_SEL_FORCE_LANE
#define reg_GB2_FIFO_EN_LANE  RX_DP_GB_CTRL_REG0.BF.GB2_FIFO_EN_LANE
#define reg_GB2_FIFO_EN_FORCE_LANE  RX_DP_GB_CTRL_REG0.BF.GB2_FIFO_EN_FORCE_LANE
#define reg_TRAIN_RXCLK_SWITCH_EN_LANE  RX_DP_GB_CTRL_REG0.BF.TRAIN_RXCLK_SWITCH_EN_LANE

// 0x0160	RX_DP_GB_CTRL_REG1		Rx Data Path Gearbox Control Register 1
typedef union {
	struct {
		uint8_t RX_SEL_BITS_RD_LANE_2_0                  : 3;	/*  [2:0]       r   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RX_DP_SEL_BITS_RD_LANE_2_0               : 3;	/*  [6:4]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_TRAIN_SEL_BITS_RD_LANE_2_0            : 3;	/* [10:8]       r   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[20:12]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:12]     r/w   0*/
		uint8_t RX_GB_TRAIN_CLK_EN_LANE                  : 1;	/*     21     r/w   1*/
		uint8_t RX_GB_TRAIN_CLK_ON_LANE                  : 1;	/*     22     r/w   0*/
		uint8_t RX_GB_DATA_CLK_EN_LANE                   : 1;	/*     23     r/w   1*/
		uint8_t RX_GB_DATA_CLK_ON_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 6;	/*[30:25]     r/w   0*/
		uint8_t RX_GB2_RST_LANE                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DP_GB_CTRL_REG1_t;
__xdata __at( 0x3360 ) volatile RX_DP_GB_CTRL_REG1_t RX_DP_GB_CTRL_REG1;
#define reg_RX_SEL_BITS_RD_LANE_2_0  RX_DP_GB_CTRL_REG1.BF.RX_SEL_BITS_RD_LANE_2_0
#define reg_RX_DP_SEL_BITS_RD_LANE_2_0  RX_DP_GB_CTRL_REG1.BF.RX_DP_SEL_BITS_RD_LANE_2_0
#define reg_RX_TRAIN_SEL_BITS_RD_LANE_2_0  RX_DP_GB_CTRL_REG1.BF.RX_TRAIN_SEL_BITS_RD_LANE_2_0
#define reg_RX_GB_TRAIN_CLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_TRAIN_CLK_EN_LANE
#define reg_RX_GB_TRAIN_CLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_TRAIN_CLK_ON_LANE
#define reg_RX_GB_DATA_CLK_EN_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_DATA_CLK_EN_LANE
#define reg_RX_GB_DATA_CLK_ON_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB_DATA_CLK_ON_LANE
#define reg_RX_GB2_RST_LANE  RX_DP_GB_CTRL_REG1.BF.RX_GB2_RST_LANE

#endif
