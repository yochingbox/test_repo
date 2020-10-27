#ifndef PHY_REG_C_RX_LANE_H
#define PHY_REG_C_RX_LANE_H



// 0x0000	PM_CTRL_RX_LANE_REG1_LANE		Power Control RX Lane Register1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:0]     r/w   0*/
		uint8_t RX_INIT_DONE_PROT_EN_LANE                : 1;	/*     11     r/w   1*/
		uint8_t RX_INIT_DONE_PROT_CLEAR_LANE             : 1;	/*     12     r/w   0*/
		uint8_t PLL_READY_RX_PROT_EN_LANE                : 1;	/*     13     r/w   1*/
		uint8_t PLL_READY_RX_PROT_CLEAR_LANE             : 1;	/*     14     r/w   0*/
		uint8_t ANA_PU_RX_DLY_LANE                       : 1;	/*     15     r/w   0*/
		uint8_t RX_CLK_EN_LANE                           : 1;	/*     16     r/w   0*/
		uint8_t RX_MAIN_CLK_RST_LANE                     : 1;	/*     17     r/w   0*/
		uint8_t PIN_PU_RX_RD_LANE                        : 1;	/*     18       r   0*/
		uint8_t RX_INIT_DONE_LANE                        : 1;	/*     19     r/w   0*/
		uint8_t RX_INIT_RD_LANE                          : 1;	/*     20       r   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t PIN_PLL_READY_RX_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t PLL_READY_RX_LANE                        : 1;	/*     24       r   0*/
		uint8_t RX_MAIN_CLK_EN_LANE                      : 1;	/*     25     r/w   1*/
		uint8_t RX_MAIN_CLK_ON_LANE                      : 1;	/*     26     r/w   0*/
		uint8_t RX_RESET_ANA_LANE                        : 1;	/*     27     r/w   1*/
		uint8_t PU_SQ_FORCE_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t ANA_PU_SQ_LANE                           : 1;	/*     29     r/w   0*/
		uint8_t ANA_PU_RX_LANE                           : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_RX_FORCE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_RX_LANE_REG1_LANE_t;
__xdata __at( 0x2100 ) volatile PM_CTRL_RX_LANE_REG1_LANE_t PM_CTRL_RX_LANE_REG1_LANE;
#define reg_RX_INIT_DONE_PROT_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_PROT_EN_LANE
#define reg_RX_INIT_DONE_PROT_CLEAR_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_PROT_CLEAR_LANE
#define reg_PLL_READY_RX_PROT_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_PROT_EN_LANE
#define reg_PLL_READY_RX_PROT_CLEAR_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_PROT_CLEAR_LANE
#define reg_ANA_PU_RX_DLY_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_DLY_LANE
#define reg_RX_CLK_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_CLK_EN_LANE
#define reg_RX_MAIN_CLK_RST_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_MAIN_CLK_RST_LANE
#define reg_PIN_PU_RX_RD_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PIN_PU_RX_RD_LANE
#define reg_RX_INIT_DONE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_LANE
#define reg_RX_INIT_RD_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_RD_LANE
#define reg_PIN_PLL_READY_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PIN_PLL_READY_RX_LANE
#define reg_PLL_READY_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_LANE
#define reg_RX_MAIN_CLK_EN_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_MAIN_CLK_EN_LANE
#define reg_RX_MAIN_CLK_ON_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_MAIN_CLK_ON_LANE
#define reg_RX_RESET_ANA_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_RESET_ANA_LANE
#define reg_PU_SQ_FORCE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PU_SQ_FORCE_LANE
#define reg_ANA_PU_SQ_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_SQ_LANE
#define reg_ANA_PU_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_LANE
#define reg_ANA_PU_RX_FORCE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_FORCE_LANE

// 0x0004	RX_SYSTEM_LANE		
typedef union {
	struct {
		uint8_t RXDATA_LATENCY_REDUCE_EN_LANE            : 1;	/*      0     r/w   0*/
		uint8_t RX_DATA_WIDTH_LANE_1_0                   : 2;	/*  [2:1]     r/w   0*/
		uint8_t RX_WIDTH_HALF_SEL_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [27:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [27:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [27:4]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/* [27:4]     r/w   0*/
		uint8_t TRAIN_RX_SEL_BITS_LANE                   : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t TRX_RXCLK_SEL_LANE                       : 1;	/*     30     r/w   0*/
		uint8_t RX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SYSTEM_LANE_t;
__xdata __at( 0x2104 ) volatile RX_SYSTEM_LANE_t RX_SYSTEM_LANE;
#define reg_RXDATA_LATENCY_REDUCE_EN_LANE  RX_SYSTEM_LANE.BF.RXDATA_LATENCY_REDUCE_EN_LANE
#define reg_RX_DATA_WIDTH_LANE_1_0  RX_SYSTEM_LANE.BF.RX_DATA_WIDTH_LANE_1_0
#define reg_RX_WIDTH_HALF_SEL_LANE  RX_SYSTEM_LANE.BF.RX_WIDTH_HALF_SEL_LANE
#define reg_TRAIN_RX_SEL_BITS_LANE  RX_SYSTEM_LANE.BF.TRAIN_RX_SEL_BITS_LANE
#define reg_TRX_RXCLK_SEL_LANE  RX_SYSTEM_LANE.BF.TRX_RXCLK_SEL_LANE
#define reg_RX_SEL_BITS_LANE  RX_SYSTEM_LANE.BF.RX_SEL_BITS_LANE

// 0x0008	INPUT_RX_PIN_REG0_LANE		Input Interface Register For Rx Lane0
typedef union {
	struct {
		uint8_t PU_RX_LANE                               : 1;	/*      0     r/w   0*/
		uint8_t PU_RX_FM_REG_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RX_ACJTAG_HYST_FM_REG_LANE               : 1;	/*      4     r/w   0*/
		uint8_t RX_ACJTAG_HYST_LANE_2_0                  : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t RESERVED_8                               : 8;	/* [23:8]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/* [23:8]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t PHY_GEN_RX_FM_REG_LANE                   : 1;	/*     25     r/w   0*/
		uint8_t PHY_GEN_RX_LANE_5_0                      : 6;	/*[31:26]     r/w 6'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_RX_PIN_REG0_LANE_t;
__xdata __at( 0x2108 ) volatile INPUT_RX_PIN_REG0_LANE_t INPUT_RX_PIN_REG0_LANE;
#define reg_PU_RX_LANE  INPUT_RX_PIN_REG0_LANE.BF.PU_RX_LANE
#define reg_PU_RX_FM_REG_LANE  INPUT_RX_PIN_REG0_LANE.BF.PU_RX_FM_REG_LANE
#define reg_RX_ACJTAG_HYST_FM_REG_LANE  INPUT_RX_PIN_REG0_LANE.BF.RX_ACJTAG_HYST_FM_REG_LANE
#define reg_RX_ACJTAG_HYST_LANE_2_0  INPUT_RX_PIN_REG0_LANE.BF.RX_ACJTAG_HYST_LANE_2_0
#define reg_PHY_GEN_RX_FM_REG_LANE  INPUT_RX_PIN_REG0_LANE.BF.PHY_GEN_RX_FM_REG_LANE
#define reg_PHY_GEN_RX_LANE_5_0  INPUT_RX_PIN_REG0_LANE.BF.PHY_GEN_RX_LANE_5_0

// 0x000c	INPUT_RX_PIN_REG1_LANE		Input Interface Register For Rx Lane1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_HIZ_LANE                              : 1;	/*      1     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*      2     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_LANE                     : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RX_INIT_FM_REG_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RX_INIT_LANE                             : 1;	/*      7     r/w   0*/
		uint8_t RX_ACJTAG_MODE_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t RX_ACJTAG_MODE_FM_REG_LANE               : 1;	/*      9     r/w   0*/
		uint8_t RX_ACJTAG_INITP_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t RX_ACJTAG_INITP_FM_REG_LANE              : 1;	/*     11     r/w   0*/
		uint8_t RX_ACJTAG_INITN_LANE                     : 1;	/*     12     r/w   0*/
		uint8_t RX_ACJTAG_INITN_FM_REG_LANE              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[23:14]     r/w 10'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:14]     r/w 10'h0*/
		uint8_t RX_DC_TERM_EN_FM_REG_LANE                : 1;	/*     24     r/w   0*/
		uint8_t RXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*     25     r/w   0*/
		uint8_t RXDCLK_NT_SEL_LANE_2_0                   : 3;	/*[28:26]     r/w   0*/
		uint8_t RX_DC_TERM_EN_LANE                       : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG1_LANE_t;
__xdata __at( 0x210c ) volatile INPUT_RX_PIN_REG1_LANE_t INPUT_RX_PIN_REG1_LANE;
#define reg_RX_HIZ_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_HIZ_LANE
#define reg_RX_TRAIN_ENABLE_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_TRAIN_ENABLE_FM_REG_LANE
#define reg_RX_TRAIN_ENABLE_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_TRAIN_ENABLE_LANE
#define reg_RX_INIT_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_INIT_FM_REG_LANE
#define reg_RX_INIT_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_INIT_LANE
#define reg_RX_ACJTAG_MODE_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_MODE_LANE
#define reg_RX_ACJTAG_MODE_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_MODE_FM_REG_LANE
#define reg_RX_ACJTAG_INITP_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITP_LANE
#define reg_RX_ACJTAG_INITP_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITP_FM_REG_LANE
#define reg_RX_ACJTAG_INITN_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITN_LANE
#define reg_RX_ACJTAG_INITN_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITN_FM_REG_LANE
#define reg_RX_DC_TERM_EN_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_DC_TERM_EN_FM_REG_LANE
#define reg_RXDCLK_NT_SEL_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RXDCLK_NT_SEL_FM_REG_LANE
#define reg_RXDCLK_NT_SEL_LANE_2_0  INPUT_RX_PIN_REG1_LANE.BF.RXDCLK_NT_SEL_LANE_2_0
#define reg_RX_DC_TERM_EN_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_DC_TERM_EN_LANE

// 0x0010	INPUT_RX_PIN_REG2_LANE		Input Interface Register For Rx Lane2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ACJTAG_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t RX_ACJTAG_AC_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t RX_ACJTAG_AC_FM_REG_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_FM_REG_LANE                : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_LANE                       : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[22:11]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/*[22:11]     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_FM_REG_LANE           : 1;	/*     23     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_LANE                  : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 3;	/*[27:25]     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_FM_REG_LANE             : 1;	/*     28     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_LANE_2_0                : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG2_LANE_t;
__xdata __at( 0x2110 ) volatile INPUT_RX_PIN_REG2_LANE_t INPUT_RX_PIN_REG2_LANE;
#define reg_RX_ACJTAG_EN_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_EN_LANE
#define reg_RX_ACJTAG_EN_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_EN_FM_REG_LANE
#define reg_RX_ACJTAG_AC_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_AC_LANE
#define reg_RX_ACJTAG_AC_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_AC_FM_REG_LANE
#define reg_ANA_RX_SQ_OUT_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_SQ_OUT_FM_REG_LANE
#define reg_ANA_RX_SQ_OUT_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_SQ_OUT_LANE
#define reg_RX_ACJTAG_INIT_CLK_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_INIT_CLK_FM_REG_LANE
#define reg_RX_ACJTAG_INIT_CLK_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_INIT_CLK_LANE
#define reg_RX_ACJTAG_DCBIAS_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_DCBIAS_FM_REG_LANE
#define reg_RX_ACJTAG_DCBIAS_LANE_2_0  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_DCBIAS_LANE_2_0

// 0x0014	SPD_CTRL_RX_LANE_REG1_LANE		Speed Control Rx Lane Register 1
typedef union {
	struct {
		uint8_t RXDCLK_4X_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t RXDCLK_NT_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t PHY_GEN_MAX_RX_LANE_5_0                  : 6;	/*  [7:2]     r/w 6'h9*/
		uint8_t PHY_GEN_MAX_RX_FM_REG_LANE               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t PIN_PHY_GEN_MAX_RX_RD_LANE_5_0           : 6;	/*[15:10]       r 6'h0*/
		uint8_t RESERVED_16                              : 5;	/*[20:16]     r/w   0*/
		uint8_t PIN_RXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*[23:21]       r   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t PIN_PHY_GEN_RX_RD_LANE_5_0               : 6;	/*[31:26]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_RX_LANE_REG1_LANE_t;
__xdata __at( 0x2114 ) volatile SPD_CTRL_RX_LANE_REG1_LANE_t SPD_CTRL_RX_LANE_REG1_LANE;
#define reg_RXDCLK_4X_EN_LANE  SPD_CTRL_RX_LANE_REG1_LANE.BF.RXDCLK_4X_EN_LANE
#define reg_RXDCLK_NT_EN_LANE  SPD_CTRL_RX_LANE_REG1_LANE.BF.RXDCLK_NT_EN_LANE
#define reg_PHY_GEN_MAX_RX_LANE_5_0  SPD_CTRL_RX_LANE_REG1_LANE.BF.PHY_GEN_MAX_RX_LANE_5_0
#define reg_PHY_GEN_MAX_RX_FM_REG_LANE  SPD_CTRL_RX_LANE_REG1_LANE.BF.PHY_GEN_MAX_RX_FM_REG_LANE
#define reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0  SPD_CTRL_RX_LANE_REG1_LANE.BF.PIN_PHY_GEN_MAX_RX_RD_LANE_5_0
#define reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0  SPD_CTRL_RX_LANE_REG1_LANE.BF.PIN_RXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_PHY_GEN_RX_RD_LANE_5_0  SPD_CTRL_RX_LANE_REG1_LANE.BF.PIN_PHY_GEN_RX_RD_LANE_5_0

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
__xdata __at( 0x2118 ) volatile DIG_RX_RSVD_REG0_t DIG_RX_RSVD_REG0;
#define reg_DIG_RX_INT_RSVD0_LANE_15_0_b0  DIG_RX_RSVD_REG0.BF.DIG_RX_INT_RSVD0_LANE_15_0_b0
#define reg_DIG_RX_INT_RSVD0_LANE_15_0_b1  DIG_RX_RSVD_REG0.BF.DIG_RX_INT_RSVD0_LANE_15_0_b1
#define reg_DIG_RX_RSVD0_LANE_15_0_b0  DIG_RX_RSVD_REG0.BF.DIG_RX_RSVD0_LANE_15_0_b0
#define reg_DIG_RX_RSVD0_LANE_15_0_b1  DIG_RX_RSVD_REG0.BF.DIG_RX_RSVD0_LANE_15_0_b1
#define reg_DIG_RX_INT_RSVD0_LANE_15_0  DIG_RX_RSVD_REG0.WT.W0
#define reg_DIG_RX_RSVD0_LANE_15_0  DIG_RX_RSVD_REG0.WT.W1

// 0x001c	CLKGEN_RX_LANE_REG1_LANE		Clock Gen Rx Lane Reg1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [12:0]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:0]     r/w   0*/
		uint8_t RST_RX2PLL_LPBK_RX_CLK_LANE              : 1;	/*     13     r/w   0*/
		uint8_t RX2PLL_LPBK_RX_CLK_EN_LANE               : 1;	/*     14     r/w   0*/
		uint8_t RST_RX2PLL_LPBK_PLL_CLK_LANE             : 1;	/*     15     r/w   0*/
		uint8_t RX2PLL_LPBK_PLL_CLK_EN_LANE              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RST_SQ_MCU_CLK_LANE                      : 1;	/*     19     r/w   0*/
		uint8_t RST_RX2TX_LPBK_RX_CLK_LANE               : 1;	/*     20     r/w   0*/
		uint8_t RX2TX_LPBK_RX_CLK_EN_LANE                : 1;	/*     21     r/w   0*/
		uint8_t PT_RX_CLK_EN_LANE                        : 1;	/*     22     r/w   0*/
		uint8_t SFT_RST_NO_REG_RX_RD_LANE                : 1;	/*     23       r   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RXDCLK_AH_LANE                           : 1;	/*     25     r/w   0*/
		uint8_t RST_FRAME_SYNC_DET_CLK_LANE              : 1;	/*     26     r/w   0*/
		uint8_t FRAME_SYNC_DET_CLK_EN_LANE               : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t PIN_RX_CLK_ON_LANE                       : 1;	/*     29     r/w   1*/
		uint8_t ANA_RXCLK_INV_LANE                       : 1;	/*     30     r/w   1*/
		uint8_t ANA_ADCCLK_INV_LANE                      : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKGEN_RX_LANE_REG1_LANE_t;
__xdata __at( 0x211c ) volatile CLKGEN_RX_LANE_REG1_LANE_t CLKGEN_RX_LANE_REG1_LANE;
#define reg_RST_RX2PLL_LPBK_RX_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2PLL_LPBK_RX_CLK_LANE
#define reg_RX2PLL_LPBK_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2PLL_LPBK_RX_CLK_EN_LANE
#define reg_RST_RX2PLL_LPBK_PLL_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2PLL_LPBK_PLL_CLK_LANE
#define reg_RX2PLL_LPBK_PLL_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2PLL_LPBK_PLL_CLK_EN_LANE
#define reg_RST_SQ_MCU_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_SQ_MCU_CLK_LANE
#define reg_RST_RX2TX_LPBK_RX_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2TX_LPBK_RX_CLK_LANE
#define reg_RX2TX_LPBK_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2TX_LPBK_RX_CLK_EN_LANE
#define reg_PT_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.PT_RX_CLK_EN_LANE
#define reg_SFT_RST_NO_REG_RX_RD_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.SFT_RST_NO_REG_RX_RD_LANE
#define reg_RXDCLK_AH_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RXDCLK_AH_LANE
#define reg_RST_FRAME_SYNC_DET_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_FRAME_SYNC_DET_CLK_LANE
#define reg_FRAME_SYNC_DET_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.FRAME_SYNC_DET_CLK_EN_LANE
#define reg_PIN_RX_CLK_ON_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.PIN_RX_CLK_ON_LANE
#define reg_ANA_RXCLK_INV_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.ANA_RXCLK_INV_LANE
#define reg_ANA_ADCCLK_INV_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.ANA_ADCCLK_INV_LANE

// 0x0020	FRAME_SYNC_DET_REG0		Frame Sync Detection Reg0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
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
__xdata __at( 0x2120 ) volatile FRAME_SYNC_DET_REG0_t FRAME_SYNC_DET_REG0;
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
__xdata __at( 0x2124 ) volatile FRAME_SYNC_DET_REG1_t FRAME_SYNC_DET_REG1;
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0_b0  FRAME_SYNC_DET_REG1.BF.FRAME_ALIGN_LEVEL_LANE_15_0_b0
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0_b1  FRAME_SYNC_DET_REG1.BF.FRAME_ALIGN_LEVEL_LANE_15_0_b1
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0  FRAME_SYNC_DET_REG1.WT.W1

// 0x0028	FRAME_SYNC_DET_REG2		Frame Sync Detection Reg2
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_31_0_b0                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b1                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b2                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b3                   : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG2_t;
__xdata __at( 0x2128 ) volatile FRAME_SYNC_DET_REG2_t FRAME_SYNC_DET_REG2;
#define reg_ALIGN_POS_LANE_31_0_b0  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_31_0_b0
#define reg_ALIGN_POS_LANE_31_0_b1  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_31_0_b1
#define reg_ALIGN_POS_LANE_31_0_b2  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_31_0_b2
#define reg_ALIGN_POS_LANE_31_0_b3  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_31_0_b3

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
__xdata __at( 0x212c ) volatile FRAME_SYNC_DET_REG3_t FRAME_SYNC_DET_REG3;
#define reg_ALIGN_POS_LANE_63_32_b0  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b0
#define reg_ALIGN_POS_LANE_63_32_b1  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b1
#define reg_ALIGN_POS_LANE_63_32_b2  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b2
#define reg_ALIGN_POS_LANE_63_32_b3  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b3

// 0x0030	FRAME_SYNC_DET_REG4		Frame Sync Detection Reg4
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_95_64_b0                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_95_64_b1                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_95_64_b2                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_95_64_b3                  : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG4_t;
__xdata __at( 0x2130 ) volatile FRAME_SYNC_DET_REG4_t FRAME_SYNC_DET_REG4;
#define reg_ALIGN_POS_LANE_95_64_b0  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_95_64_b0
#define reg_ALIGN_POS_LANE_95_64_b1  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_95_64_b1
#define reg_ALIGN_POS_LANE_95_64_b2  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_95_64_b2
#define reg_ALIGN_POS_LANE_95_64_b3  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_95_64_b3

// 0x0034	FRAME_SYNC_DET_REG5		Frame Sync Detection Reg5
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_127_96_b0                 : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_127_96_b1                 : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_127_96_b2                 : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_127_96_b3                 : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG5_t;
__xdata __at( 0x2134 ) volatile FRAME_SYNC_DET_REG5_t FRAME_SYNC_DET_REG5;
#define reg_ALIGN_POS_LANE_127_96_b0  FRAME_SYNC_DET_REG5.BF.ALIGN_POS_LANE_127_96_b0
#define reg_ALIGN_POS_LANE_127_96_b1  FRAME_SYNC_DET_REG5.BF.ALIGN_POS_LANE_127_96_b1
#define reg_ALIGN_POS_LANE_127_96_b2  FRAME_SYNC_DET_REG5.BF.ALIGN_POS_LANE_127_96_b2
#define reg_ALIGN_POS_LANE_127_96_b3  FRAME_SYNC_DET_REG5.BF.ALIGN_POS_LANE_127_96_b3

// 0x0038	FRAME_SYNC_DET_REG6		Frame Sync Detection Reg6
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_159_128_b0                : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_159_128_b1                : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_159_128_b2                : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_159_128_b3                : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG6_t;
__xdata __at( 0x2138 ) volatile FRAME_SYNC_DET_REG6_t FRAME_SYNC_DET_REG6;
#define reg_ALIGN_POS_LANE_159_128_b0  FRAME_SYNC_DET_REG6.BF.ALIGN_POS_LANE_159_128_b0
#define reg_ALIGN_POS_LANE_159_128_b1  FRAME_SYNC_DET_REG6.BF.ALIGN_POS_LANE_159_128_b1
#define reg_ALIGN_POS_LANE_159_128_b2  FRAME_SYNC_DET_REG6.BF.ALIGN_POS_LANE_159_128_b2
#define reg_ALIGN_POS_LANE_159_128_b3  FRAME_SYNC_DET_REG6.BF.ALIGN_POS_LANE_159_128_b3

// 0x0040	RX_LANE_INTERRUPT		RX Lane Interrupt Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/* [27:0]     r/w   0*/
		uint8_t FRAME_UNLOCK_ISR_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t FRAME_LOCK_ISR_LANE                      : 1;	/*     29     r/w   0*/
		uint8_t RX_SFT_RST_CHG_FALLING_ISR_LANE          : 1;	/*     30     r/w   0*/
		uint8_t RX_SFT_RST_CHG_RISING_ISR_LANE           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_t;
__xdata __at( 0x2140 ) volatile RX_LANE_INTERRUPT_t RX_LANE_INTERRUPT;
#define reg_FRAME_UNLOCK_ISR_LANE  RX_LANE_INTERRUPT.BF.FRAME_UNLOCK_ISR_LANE
#define reg_FRAME_LOCK_ISR_LANE  RX_LANE_INTERRUPT.BF.FRAME_LOCK_ISR_LANE
#define reg_RX_SFT_RST_CHG_FALLING_ISR_LANE  RX_LANE_INTERRUPT.BF.RX_SFT_RST_CHG_FALLING_ISR_LANE
#define reg_RX_SFT_RST_CHG_RISING_ISR_LANE  RX_LANE_INTERRUPT.BF.RX_SFT_RST_CHG_RISING_ISR_LANE

// 0x0044	RX_LANE_INTERRUPT_MASK		RX Lane Interrupt Mask Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/* [27:0]     r/w   0*/
		uint8_t FRAME_UNLOCK_MASK_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t FRAME_LOCK_MASK_LANE                     : 1;	/*     29     r/w   0*/
		uint8_t RX_SFT_RST_CHG_FALLING_MASK_LANE         : 1;	/*     30     r/w   0*/
		uint8_t RX_SFT_RST_CHG_RISING_MASK_LANE          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_MASK_t;
__xdata __at( 0x2144 ) volatile RX_LANE_INTERRUPT_MASK_t RX_LANE_INTERRUPT_MASK;
#define reg_FRAME_UNLOCK_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.FRAME_UNLOCK_MASK_LANE
#define reg_FRAME_LOCK_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.FRAME_LOCK_MASK_LANE
#define reg_RX_SFT_RST_CHG_FALLING_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.RX_SFT_RST_CHG_FALLING_MASK_LANE
#define reg_RX_SFT_RST_CHG_RISING_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.RX_SFT_RST_CHG_RISING_MASK_LANE

// 0x0048	RX_DATA_PATH_REG		RX Data Path Regiser
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [21:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [21:0]     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/* [21:0]     r/w   0*/
		uint8_t RXDATA_PRE_CODE_EN_FM_REG_LANE           : 1;	/*     22     r/w   0*/
		uint8_t RXDATA_GRAY_CODE_EN_FM_REG_LANE          : 1;	/*     23     r/w   0*/
		uint8_t RXDATA_PRE_CODE_MSB_LSB_SWAP_LANE        : 1;	/*     24     r/w   0*/
		uint8_t RXDATA_MSB_LSB_SWAP_LANE                 : 1;	/*     25     r/w   0*/
		uint8_t RXDATA_PRE_CODE_EN_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t RXDATA_GRAY_CODE_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t RXD_MSB_LSB_SWAP_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t RXD_INV_LANE                             : 1;	/*     29     r/w   0*/
		uint8_t DET_BYPASS_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_DIG_TX2RX_LPBK_EN_LANE             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_PATH_REG_t;
__xdata __at( 0x2148 ) volatile RX_DATA_PATH_REG_t RX_DATA_PATH_REG;
#define reg_RXDATA_PRE_CODE_EN_FM_REG_LANE  RX_DATA_PATH_REG.BF.RXDATA_PRE_CODE_EN_FM_REG_LANE
#define reg_RXDATA_GRAY_CODE_EN_FM_REG_LANE  RX_DATA_PATH_REG.BF.RXDATA_GRAY_CODE_EN_FM_REG_LANE
#define reg_RXDATA_PRE_CODE_MSB_LSB_SWAP_LANE  RX_DATA_PATH_REG.BF.RXDATA_PRE_CODE_MSB_LSB_SWAP_LANE
#define reg_RXDATA_MSB_LSB_SWAP_LANE  RX_DATA_PATH_REG.BF.RXDATA_MSB_LSB_SWAP_LANE
#define reg_RXDATA_PRE_CODE_EN_LANE  RX_DATA_PATH_REG.BF.RXDATA_PRE_CODE_EN_LANE
#define reg_RXDATA_GRAY_CODE_EN_LANE  RX_DATA_PATH_REG.BF.RXDATA_GRAY_CODE_EN_LANE
#define reg_RXD_MSB_LSB_SWAP_LANE  RX_DATA_PATH_REG.BF.RXD_MSB_LSB_SWAP_LANE
#define reg_RXD_INV_LANE  RX_DATA_PATH_REG.BF.RXD_INV_LANE
#define reg_DET_BYPASS_LANE  RX_DATA_PATH_REG.BF.DET_BYPASS_LANE
#define reg_LOCAL_DIG_TX2RX_LPBK_EN_LANE  RX_DATA_PATH_REG.BF.LOCAL_DIG_TX2RX_LPBK_EN_LANE

// 0x004c	RX_RESERVED_REG		RX Reserved Register
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0    : 8;	/* [15:0]       r   0*/
		uint8_t PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1    : 8;	/* [15:0]       r   0*/
		uint8_t PIN_RESERVED_OUTPUT_RX_LANE_15_0_b0      : 8;	/*[31:16]     r/w   0*/
		uint8_t PIN_RESERVED_OUTPUT_RX_LANE_15_0_b1      : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_RESERVED_REG_t;
__xdata __at( 0x214c ) volatile RX_RESERVED_REG_t RX_RESERVED_REG;
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0  RX_RESERVED_REG.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1  RX_RESERVED_REG.BF.PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1
#define reg_PIN_RESERVED_OUTPUT_RX_LANE_15_0_b0  RX_RESERVED_REG.BF.PIN_RESERVED_OUTPUT_RX_LANE_15_0_b0
#define reg_PIN_RESERVED_OUTPUT_RX_LANE_15_0_b1  RX_RESERVED_REG.BF.PIN_RESERVED_OUTPUT_RX_LANE_15_0_b1
#define reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0  RX_RESERVED_REG.WT.W0
#define reg_PIN_RESERVED_OUTPUT_RX_LANE_15_0  RX_RESERVED_REG.WT.W1

// 0x0050	RX2PLL_REG		Rx To PLL Registers
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
__xdata __at( 0x2150 ) volatile RX2PLL_REG_t RX2PLL_REG;
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

// 0x0058	RX_LANE_INTERRUPT_REG1		RX Lane Interrupt Clear Register1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/* [27:0]     r/w   0*/
		uint8_t FRAME_UNLOCK_ISR_CLEAR_LANE              : 1;	/*     28     r/w   0*/
		uint8_t FRAME_LOCK_ISR_CLEAR_LANE                : 1;	/*     29     r/w   0*/
		uint8_t RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE    : 1;	/*     30     r/w   0*/
		uint8_t RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_REG1_t;
__xdata __at( 0x2158 ) volatile RX_LANE_INTERRUPT_REG1_t RX_LANE_INTERRUPT_REG1;
#define reg_FRAME_UNLOCK_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.FRAME_UNLOCK_ISR_CLEAR_LANE
#define reg_FRAME_LOCK_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.FRAME_LOCK_ISR_CLEAR_LANE
#define reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE
#define reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE  RX_LANE_INTERRUPT_REG1.BF.RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE

// 0x005c	INPUT_RX_PIN_REG3_LANE		Input Interface Register For Rx Lane3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:0]     r/w   0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_FM_REG_LANE          : 1;	/*     11     r/w   0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_LANE_7_0_b0          : 4;	/*[19:12]     r/w 8'h0*/
		uint8_t ANA_RX_ANA_RSVD_OUT_LANE_7_0_b1          : 4;	/*[19:12]     r/w 8'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG3_LANE_t;
__xdata __at( 0x215c ) volatile INPUT_RX_PIN_REG3_LANE_t INPUT_RX_PIN_REG3_LANE;
#define reg_ANA_RX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_RX_PIN_REG3_LANE.BF.ANA_RX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_RX_ANA_RSVD_OUT_LANE_7_0_b0  INPUT_RX_PIN_REG3_LANE.BF.ANA_RX_ANA_RSVD_OUT_LANE_7_0_b0
#define reg_ANA_RX_ANA_RSVD_OUT_LANE_7_0_b1  INPUT_RX_PIN_REG3_LANE.BF.ANA_RX_ANA_RSVD_OUT_LANE_7_0_b1

// 0x0060	RX_ANA_RSVD_REG0		Rx Analog Reserved Register0
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
__xdata __at( 0x2160 ) volatile RX_ANA_RSVD_REG0_t RX_ANA_RSVD_REG0;
#define reg_ANA_RX_ANA_RSVD_IN_LANE_7_0  RX_ANA_RSVD_REG0.BF.ANA_RX_ANA_RSVD_IN_LANE_7_0
#define reg_RX_ANA_RSVD_OUT_RD_LANE_7_0  RX_ANA_RSVD_REG0.BF.RX_ANA_RSVD_OUT_RD_LANE_7_0

// 0x0070	SQ_REG0		squelch glitch filter control0
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
__xdata __at( 0x2170 ) volatile SQ_REG0_t SQ_REG0;
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
		uint8_t TX_TRAIN_PAT_SEL_RX_LANE_1_0             : 2;	/*  [9:8]     r/w   0*/
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
__xdata __at( 0x2180 ) volatile PHYTEST_RX0_t PHYTEST_RX0;
#define reg_PT_RX_LOCK_CNT_LANE_7_0  PHYTEST_RX0.BF.PT_RX_LOCK_CNT_LANE_7_0
#define reg_TX_TRAIN_PAT_SEL_RX_LANE_1_0  PHYTEST_RX0.BF.TX_TRAIN_PAT_SEL_RX_LANE_1_0
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
__xdata __at( 0x2184 ) volatile PHYTEST_RX1_t PHYTEST_RX1;
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
__xdata __at( 0x2188 ) volatile PHYTEST_RX2_t PHYTEST_RX2;
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
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PT_RX_USER_PATTERN_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t PT_RX_USER_PATTERN_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_RX3_t;
__xdata __at( 0x218c ) volatile PHYTEST_RX3_t PHYTEST_RX3;
#define reg_PT_RX_LOCK_LANE  PHYTEST_RX3.BF.PT_RX_LOCK_LANE
#define reg_PT_RX_PASS_LANE  PHYTEST_RX3.BF.PT_RX_PASS_LANE
#define reg_PT_RX_CNT_READY_LANE  PHYTEST_RX3.BF.PT_RX_CNT_READY_LANE
#define reg_PRBS_DATA_DETECTED_RX_LANE_1_0  PHYTEST_RX3.BF.PRBS_DATA_DETECTED_RX_LANE_1_0
#define reg_PT_RX_PRBS_DATA_SET_LANE_1_0  PHYTEST_RX3.BF.PT_RX_PRBS_DATA_SET_LANE_1_0
#define reg_PT_RX_RST_LANE  PHYTEST_RX3.BF.PT_RX_RST_LANE
#define reg_PT_TRX_EN_LANE  PHYTEST_RX3.BF.PT_TRX_EN_LANE
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
__xdata __at( 0x2190 ) volatile PHYTEST_RX4_t PHYTEST_RX4;
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
__xdata __at( 0x2194 ) volatile PHYTEST_RX5_t PHYTEST_RX5;
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
__xdata __at( 0x2198 ) volatile PHYTEST_RX6_t PHYTEST_RX6;
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
__xdata __at( 0x219c ) volatile PHYTEST_RX7_t PHYTEST_RX7;
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
__xdata __at( 0x21a0 ) volatile PHYTEST_RX8_t PHYTEST_RX8;
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
__xdata __at( 0x21a4 ) volatile PHYTEST_RX9_t PHYTEST_RX9;
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
__xdata __at( 0x21a8 ) volatile SQ_REG1_t SQ_REG1;
#define reg_INT_SQ_DET_LANE  SQ_REG1.BF.INT_SQ_DET_LANE
#define reg_INT_SQ_DET_FORCE_LANE  SQ_REG1.BF.INT_SQ_DET_FORCE_LANE

// 0x00ac	INPUT_RX_PIN_REG4_LANE		Input Interface Register For Rx Lane4
typedef union {
	struct {
		uint8_t STRX_TRAIN_FIELD_END_IN_LANE             : 1;	/*      0     r/w   0*/
		uint8_t STRX_TRAIN_FIELD_END_IN_FM_REG_LANE      : 1;	/*      1     r/w   0*/
		uint8_t STRX_TRAIN_COE_VALID_IN_LANE             : 1;	/*      2     r/w   0*/
		uint8_t STRX_TRAIN_COE_VALID_IN_FM_REG_LANE      : 1;	/*      3     r/w   0*/
		uint8_t STRX_TRAIN_CMD_VALID_IN_LANE             : 1;	/*      4     r/w   0*/
		uint8_t STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE      : 1;	/*      5     r/w   0*/
		uint8_t STRX_ENABLE_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t STRX_ENABLE_FM_REG_LANE                  : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG4_LANE_t;
__xdata __at( 0x21ac ) volatile INPUT_RX_PIN_REG4_LANE_t INPUT_RX_PIN_REG4_LANE;
#define reg_STRX_TRAIN_FIELD_END_IN_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_TRAIN_FIELD_END_IN_LANE
#define reg_STRX_TRAIN_FIELD_END_IN_FM_REG_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_TRAIN_FIELD_END_IN_FM_REG_LANE
#define reg_STRX_TRAIN_COE_VALID_IN_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_TRAIN_COE_VALID_IN_LANE
#define reg_STRX_TRAIN_COE_VALID_IN_FM_REG_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_TRAIN_COE_VALID_IN_FM_REG_LANE
#define reg_STRX_TRAIN_CMD_VALID_IN_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_TRAIN_CMD_VALID_IN_LANE
#define reg_STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_TRAIN_CMD_VALID_IN_FM_REG_LANE
#define reg_STRX_ENABLE_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_ENABLE_LANE
#define reg_STRX_ENABLE_FM_REG_LANE  INPUT_RX_PIN_REG4_LANE.BF.STRX_ENABLE_FM_REG_LANE

// 0x00b0	INPUT_RX_PIN_REG5_LANE		Input Interface Register For Rx Lane5
typedef union {
	struct {
		uint8_t STRX_TRAIN_COE_IN_LANE_31_0_b0           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_31_0_b1           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_31_0_b2           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_31_0_b3           : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG5_LANE_t;
__xdata __at( 0x21b0 ) volatile INPUT_RX_PIN_REG5_LANE_t INPUT_RX_PIN_REG5_LANE;
#define reg_STRX_TRAIN_COE_IN_LANE_31_0_b0  INPUT_RX_PIN_REG5_LANE.BF.STRX_TRAIN_COE_IN_LANE_31_0_b0
#define reg_STRX_TRAIN_COE_IN_LANE_31_0_b1  INPUT_RX_PIN_REG5_LANE.BF.STRX_TRAIN_COE_IN_LANE_31_0_b1
#define reg_STRX_TRAIN_COE_IN_LANE_31_0_b2  INPUT_RX_PIN_REG5_LANE.BF.STRX_TRAIN_COE_IN_LANE_31_0_b2
#define reg_STRX_TRAIN_COE_IN_LANE_31_0_b3  INPUT_RX_PIN_REG5_LANE.BF.STRX_TRAIN_COE_IN_LANE_31_0_b3

// 0x00b4	INPUT_RX_PIN_REG6_LANE		Input Interface Register For Rx Lane6
typedef union {
	struct {
		uint8_t STRX_TRAIN_COE_IN_LANE_47_32_b0          : 8;	/* [15:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_LANE_47_32_b1          : 8;	/* [15:0]     r/w   0*/
		uint8_t STRX_TRAIN_COE_IN_FM_REG_LANE            : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[31:17]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:17]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_RX_PIN_REG6_LANE_t;
__xdata __at( 0x21b4 ) volatile INPUT_RX_PIN_REG6_LANE_t INPUT_RX_PIN_REG6_LANE;
#define reg_STRX_TRAIN_COE_IN_LANE_47_32_b0  INPUT_RX_PIN_REG6_LANE.BF.STRX_TRAIN_COE_IN_LANE_47_32_b0
#define reg_STRX_TRAIN_COE_IN_LANE_47_32_b1  INPUT_RX_PIN_REG6_LANE.BF.STRX_TRAIN_COE_IN_LANE_47_32_b1
#define reg_STRX_TRAIN_COE_IN_FM_REG_LANE  INPUT_RX_PIN_REG6_LANE.BF.STRX_TRAIN_COE_IN_FM_REG_LANE
#define reg_STRX_TRAIN_COE_IN_LANE_47_32  INPUT_RX_PIN_REG6_LANE.WT.W0

#endif
