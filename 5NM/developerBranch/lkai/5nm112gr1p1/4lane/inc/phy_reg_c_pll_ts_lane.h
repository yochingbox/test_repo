#ifndef PHY_REG_C_PLL_TS_LANE_H
#define PHY_REG_C_PLL_TS_LANE_H



// 0x0000	PLL_TS_LANE_REG0		Tx Side PLL Lane Register 0
typedef union {
	struct {
		uint8_t PLL_TS_FBC_CNT_TIMER_LANE_15_0_b0        : 8;	/* [15:0]     r/w 16'h4f*/
		uint8_t PLL_TS_FBC_CNT_TIMER_LANE_15_0_b1        : 8;	/* [15:0]     r/w 16'h4f*/
		uint8_t PLL_TS_FBC_PLLCAL_CNT_LANE_15_0_b0       : 8;	/*[31:16]       r   0*/
		uint8_t PLL_TS_FBC_PLLCAL_CNT_LANE_15_0_b1       : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_LANE_REG0_t;
__xdata __at( 0x5200 ) volatile PLL_TS_LANE_REG0_t PLL_TS_LANE_REG0;
#define reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0_b0  PLL_TS_LANE_REG0.BF.PLL_TS_FBC_CNT_TIMER_LANE_15_0_b0
#define reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0_b1  PLL_TS_LANE_REG0.BF.PLL_TS_FBC_CNT_TIMER_LANE_15_0_b1
#define reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0_b0  PLL_TS_LANE_REG0.BF.PLL_TS_FBC_PLLCAL_CNT_LANE_15_0_b0
#define reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0_b1  PLL_TS_LANE_REG0.BF.PLL_TS_FBC_PLLCAL_CNT_LANE_15_0_b1
#define reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0  PLL_TS_LANE_REG0.WT.W0
#define reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0  PLL_TS_LANE_REG0.WT.W1

// 0x0004	PLL_TS_LANE_REG1		Tx Side PLL Lane Register 1
typedef union {
	struct {
		uint8_t PLL_TS_INIT_FOFFS_LANE_15_0_b0           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_TS_INIT_FOFFS_LANE_15_0_b1           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 2;	/*[21:20]     r/w   0*/
		uint8_t RST_REF_CLK_TS_LANE                      : 1;	/*     22     r/w   0*/
		uint8_t REF_CLK_EN_TS_LANE                       : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t PLL_TS_FBC_CNT_START_LANE                : 1;	/*     25     r/w   0*/
		uint8_t RST_PLL_TS_FBC_PLLCAL_CLK_LANE           : 1;	/*     26     r/w   0*/
		uint8_t PLL_TS_FBC_PLLCAL_CNT_READY_LANE         : 1;	/*     27       r   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t ANA_PLL_TS_LD_CAL_DATA_LANE              : 1;	/*     30     r/w   0*/
		uint8_t PLL_TS_RESET_ANA_LANE                    : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_LANE_REG1_t;
__xdata __at( 0x5204 ) volatile PLL_TS_LANE_REG1_t PLL_TS_LANE_REG1;
#define reg_PLL_TS_INIT_FOFFS_LANE_15_0_b0  PLL_TS_LANE_REG1.BF.PLL_TS_INIT_FOFFS_LANE_15_0_b0
#define reg_PLL_TS_INIT_FOFFS_LANE_15_0_b1  PLL_TS_LANE_REG1.BF.PLL_TS_INIT_FOFFS_LANE_15_0_b1
#define reg_RST_REF_CLK_TS_LANE  PLL_TS_LANE_REG1.BF.RST_REF_CLK_TS_LANE
#define reg_REF_CLK_EN_TS_LANE  PLL_TS_LANE_REG1.BF.REF_CLK_EN_TS_LANE
#define reg_PLL_TS_FBC_CNT_START_LANE  PLL_TS_LANE_REG1.BF.PLL_TS_FBC_CNT_START_LANE
#define reg_RST_PLL_TS_FBC_PLLCAL_CLK_LANE  PLL_TS_LANE_REG1.BF.RST_PLL_TS_FBC_PLLCAL_CLK_LANE
#define reg_PLL_TS_FBC_PLLCAL_CNT_READY_LANE  PLL_TS_LANE_REG1.BF.PLL_TS_FBC_PLLCAL_CNT_READY_LANE
#define reg_ANA_PLL_TS_LD_CAL_DATA_LANE  PLL_TS_LANE_REG1.BF.ANA_PLL_TS_LD_CAL_DATA_LANE
#define reg_PLL_TS_RESET_ANA_LANE  PLL_TS_LANE_REG1.BF.PLL_TS_RESET_ANA_LANE
#define reg_PLL_TS_INIT_FOFFS_LANE_15_0  PLL_TS_LANE_REG1.WT.W0

// 0x0008	PLL_TS_LANE_REG2		Tx Side PLL Lane Register 2
typedef union {
	struct {
		uint8_t PLL_TS_LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0 : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t PLL_TS_LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0 : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t PLL_TS_LCPLL_CAL_WAIT_TEMPC_5US_LANE_3_0 : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 : 4;	/*[15:12]     r/w 4'ha*/
		uint8_t PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_SYNC_CLK_DIV_SEL_LANE_2_0 : 3;	/*[22:20]     r/w 3'h0*/
		uint8_t RESERVED_23                              : 1;	/*[25:23]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:23]     r/w   0*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_MAX_MIN_OVERWRITE_LANE : 1;	/*     26     r/w   0*/
		uint8_t PLL_TS_LCPLL_TEMPC_DIS_LANE              : 1;	/*     27     r/w   0*/
		uint8_t PLL_TS_LCPLL_TODIG_TEMPC_POLARITY_LANE   : 1;	/*     28     r/w   0*/
		uint8_t PLL_TS_LCPLL_TEMPC_STEP_LANE             : 1;	/*     29     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_CAL_DONE_LANE         : 1;	/*     30       r   0*/
		uint8_t PLL_TS_LCPLL_TEMPC_CAL_EN_LANE           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG2_t;
__xdata __at( 0x5208 ) volatile PLL_TS_LANE_REG2_t PLL_TS_LANE_REG2;
#define reg_PLL_TS_LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0
#define reg_PLL_TS_LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0
#define reg_PLL_TS_LCPLL_CAL_WAIT_TEMPC_5US_LANE_3_0  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_CAL_WAIT_TEMPC_5US_LANE_3_0
#define reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0
#define reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0
#define reg_PLL_TS_LCPLL_TEMPC_SYNC_CLK_DIV_SEL_LANE_2_0  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_SYNC_CLK_DIV_SEL_LANE_2_0
#define reg_PLL_TS_LCPLL_TEMPC_DAC_MAX_MIN_OVERWRITE_LANE  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_DAC_MAX_MIN_OVERWRITE_LANE
#define reg_PLL_TS_LCPLL_TEMPC_DIS_LANE  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_DIS_LANE
#define reg_PLL_TS_LCPLL_TODIG_TEMPC_POLARITY_LANE  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TODIG_TEMPC_POLARITY_LANE
#define reg_PLL_TS_LCPLL_TEMPC_STEP_LANE  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_STEP_LANE
#define reg_PLL_TS_LCPLL_TEMPC_CAL_DONE_LANE  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_CAL_DONE_LANE
#define reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE  PLL_TS_LANE_REG2.BF.PLL_TS_LCPLL_TEMPC_CAL_EN_LANE

// 0x000c	PLL_TS_LANE_REG3		Tx Side PLL Lane Register 3
typedef union {
	struct {
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_MAX_M2_LANE_7_0   : 8;	/*  [7:0]     r/w 8'hfd*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_MAX_LANE_7_0      : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_MIN_P2_LANE_7_0   : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_MIN_LANE_7_0      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG3_t;
__xdata __at( 0x520c ) volatile PLL_TS_LANE_REG3_t PLL_TS_LANE_REG3;
#define reg_PLL_TS_LCPLL_TEMPC_DAC_MAX_M2_LANE_7_0  PLL_TS_LANE_REG3.BF.PLL_TS_LCPLL_TEMPC_DAC_MAX_M2_LANE_7_0
#define reg_PLL_TS_LCPLL_TEMPC_DAC_MAX_LANE_7_0  PLL_TS_LANE_REG3.BF.PLL_TS_LCPLL_TEMPC_DAC_MAX_LANE_7_0
#define reg_PLL_TS_LCPLL_TEMPC_DAC_MIN_P2_LANE_7_0  PLL_TS_LANE_REG3.BF.PLL_TS_LCPLL_TEMPC_DAC_MIN_P2_LANE_7_0
#define reg_PLL_TS_LCPLL_TEMPC_DAC_MIN_LANE_7_0  PLL_TS_LANE_REG3.BF.PLL_TS_LCPLL_TEMPC_DAC_MIN_LANE_7_0

// 0x0010	PLL_TS_LANE_REG4		Tx Side PLL Lane Register 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:0]     r/w   0*/
		uint8_t PLL_TS_LCPLL_TEMPC_REF_CLK_GEN1_DIV_SEL_LANE_2_0 : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_1M_PULSE_DIV_SEL_LANE_1_0 : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_EXT_EN_LANE           : 1;	/*     14     r/w 1'b1*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_VALID_EXT_LANE    : 1;	/*     15     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0  : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG4_t;
__xdata __at( 0x5210 ) volatile PLL_TS_LANE_REG4_t PLL_TS_LANE_REG4;
#define reg_PLL_TS_LCPLL_TEMPC_REF_CLK_GEN1_DIV_SEL_LANE_2_0  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_REF_CLK_GEN1_DIV_SEL_LANE_2_0
#define reg_PLL_TS_LCPLL_TEMPC_1M_PULSE_DIV_SEL_LANE_1_0  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_1M_PULSE_DIV_SEL_LANE_1_0
#define reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_EXT_EN_LANE
#define reg_PLL_TS_LCPLL_TEMPC_DAC_VALID_EXT_LANE  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_DAC_VALID_EXT_LANE
#define reg_PLL_TS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0
#define reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0
#define reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  PLL_TS_LANE_REG4.BF.PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0

// 0x0014	PLL_TS_LANE_REG5		Tx Side PLL Lane Register 5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [12:0]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:0]     r/w   0*/
		uint8_t PLL_TS_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0  : 2;	/*[14:13]       r 2'b0*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_VALID_LANE        : 1;	/*     15       r 1'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_DAC_SEL_LANE_7_0      : 8;	/*[23:16]       r 8'h0*/
		uint8_t PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0 : 4;	/*[27:24]       r 4'h3*/
		uint8_t PLL_TS_LCPLL_TEMPC_MUX_SEL_LANE_3_0      : 4;	/*[31:28]       r 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG5_t;
__xdata __at( 0x5214 ) volatile PLL_TS_LANE_REG5_t PLL_TS_LANE_REG5;
#define reg_PLL_TS_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0  PLL_TS_LANE_REG5.BF.PLL_TS_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0
#define reg_PLL_TS_LCPLL_TEMPC_DAC_VALID_LANE  PLL_TS_LANE_REG5.BF.PLL_TS_LCPLL_TEMPC_DAC_VALID_LANE
#define reg_PLL_TS_LCPLL_TEMPC_DAC_SEL_LANE_7_0  PLL_TS_LANE_REG5.BF.PLL_TS_LCPLL_TEMPC_DAC_SEL_LANE_7_0
#define reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0  PLL_TS_LANE_REG5.BF.PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0
#define reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_LANE_3_0  PLL_TS_LANE_REG5.BF.PLL_TS_LCPLL_TEMPC_MUX_SEL_LANE_3_0

// 0x0018	PLL_TS_DTX_REG0		Tx Side PLL Lane Register 6
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
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t PLL_TS_DTX_CLAMPING_SEL_LANE_1_0         : 2;	/*[19:18]     r/w 2'h1*/
		uint8_t PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE   : 1;	/*     20     r/w   0*/
		uint8_t PLL_TS_DTX_CLAMPING_EN_LANE              : 1;	/*     21     r/w   1*/
		uint8_t PLL_TS_DTX_CLAMPING_TRIGGER_LANE         : 1;	/*     22       r   0*/
		uint8_t PLL_TS_DTX_CLK_OFF_LANE                  : 1;	/*     23     r/w   1*/
		uint8_t RESET_PLL_TS_DTX_LANE                    : 1;	/*     24     r/w   1*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t PLL_TS_FOFF_INV_LANE                     : 1;	/*     26     r/w   0*/
		uint8_t PLL_TS_FOFF_INV_FORCE_LANE               : 1;	/*     27     r/w   0*/
		uint8_t PLL_TS_DTX_FOFFSET_SEL_LANE              : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t PLL_TS_DTX_FLOOP_STEP_SIZE_LANE_1_0      : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_DTX_REG0_t;
__xdata __at( 0x5218 ) volatile PLL_TS_DTX_REG0_t PLL_TS_DTX_REG0;
#define reg_PLL_TS_DTX_CLAMPING_SEL_LANE_1_0  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_CLAMPING_SEL_LANE_1_0
#define reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE
#define reg_PLL_TS_DTX_CLAMPING_EN_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_CLAMPING_EN_LANE
#define reg_PLL_TS_DTX_CLAMPING_TRIGGER_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_CLAMPING_TRIGGER_LANE
#define reg_PLL_TS_DTX_CLK_OFF_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_CLK_OFF_LANE
#define reg_RESET_PLL_TS_DTX_LANE  PLL_TS_DTX_REG0.BF.RESET_PLL_TS_DTX_LANE
#define reg_PLL_TS_FOFF_INV_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_FOFF_INV_LANE
#define reg_PLL_TS_FOFF_INV_FORCE_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_FOFF_INV_FORCE_LANE
#define reg_PLL_TS_DTX_FOFFSET_SEL_LANE  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_FOFFSET_SEL_LANE
#define reg_PLL_TS_DTX_FLOOP_STEP_SIZE_LANE_1_0  PLL_TS_DTX_REG0.BF.PLL_TS_DTX_FLOOP_STEP_SIZE_LANE_1_0

// 0x001c	PLL_TS_DTX_REG1		Tx Side PLL Lane Register 7
typedef union {
	struct {
		uint8_t PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0_b0    : 8;	/* [15:0]       r 16'h0*/
		uint8_t PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0_b1    : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[26:16]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:16]     r/w   0*/
		uint8_t PLL_TS_DTX_FLOOP_FOFFSET_RD_REQ_LANE     : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_DTX_REG1_t;
__xdata __at( 0x521c ) volatile PLL_TS_DTX_REG1_t PLL_TS_DTX_REG1;
#define reg_PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0_b0  PLL_TS_DTX_REG1.BF.PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0_b0
#define reg_PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0_b1  PLL_TS_DTX_REG1.BF.PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0_b1
#define reg_PLL_TS_DTX_FLOOP_FOFFSET_RD_REQ_LANE  PLL_TS_DTX_REG1.BF.PLL_TS_DTX_FLOOP_FOFFSET_RD_REQ_LANE
#define reg_PLL_TS_DTX_FLOOP_FOFFSET_LANE_15_0  PLL_TS_DTX_REG1.WT.W0

// 0x0020	PLL_TS_LANE_REG8		Tx Side PLL Lane Register 8
typedef union {
	struct {
		uint8_t ANA_PLL_TS_CLK100MOR125M_EN_LANE         : 1;	/*      0     r/w   0*/
		uint8_t ANA_PLL_TS_CLK100M_125M_SEL_LANE         : 1;	/*      1     r/w   0*/
		uint8_t ANA_PLL_TS_CLK_READY_LANE                : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t ANA_PLL_TS_PU_PLL_FORCE_LANE             : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t ANA_PLL_TS_PU_PLL_DLY_LANE               : 1;	/*      6     r/w   0*/
		uint8_t ANA_PLL_TS_PU_PLL_LANE                   : 1;	/*      7     r/w   0*/
		uint8_t ANA_PLL_TS_FBCK_SEL_LANE                 : 1;	/*      8     r/w   1*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b0      : 8;	/*[31:16]       r   0*/
		uint8_t PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b1      : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_LANE_REG8_t;
__xdata __at( 0x5220 ) volatile PLL_TS_LANE_REG8_t PLL_TS_LANE_REG8;
#define reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_CLK100MOR125M_EN_LANE
#define reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_CLK100M_125M_SEL_LANE
#define reg_ANA_PLL_TS_CLK_READY_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_CLK_READY_LANE
#define reg_ANA_PLL_TS_PU_PLL_FORCE_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_PU_PLL_FORCE_LANE
#define reg_ANA_PLL_TS_PU_PLL_DLY_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_PU_PLL_DLY_LANE
#define reg_ANA_PLL_TS_PU_PLL_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_PU_PLL_LANE
#define reg_ANA_PLL_TS_FBCK_SEL_LANE  PLL_TS_LANE_REG8.BF.ANA_PLL_TS_FBCK_SEL_LANE
#define reg_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b0  PLL_TS_LANE_REG8.BF.PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b0
#define reg_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b1  PLL_TS_LANE_REG8.BF.PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b1
#define reg_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0  PLL_TS_LANE_REG8.WT.W1

// 0x0024	PLL_TS_DTX_REG2		Tx Side PLL Lane DTX Register 2
typedef union {
	struct {
		uint8_t PLL_TS_SSC_M_LANE_12_0_b0                : 8;	/* [12:0]     r/w 13'h05cf*/
		uint8_t PLL_TS_SSC_M_LANE_12_0_b1                : 5;	/* [12:0]     r/w 13'h05cf*/
		uint8_t RESERVED_13                              : 3;	/*[25:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[25:13]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:13]     r/w   0*/
		uint8_t PLL_TS_SSC_ACC_FACTOR_LANE               : 1;	/*     26     r/w   0*/
		uint8_t PLL_TS_SSC_STEP_125PPM_LANE_3_0          : 4;	/*[30:27]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_DTX_REG2_t;
__xdata __at( 0x5224 ) volatile PLL_TS_DTX_REG2_t PLL_TS_DTX_REG2;
#define reg_PLL_TS_SSC_M_LANE_12_0_b0  PLL_TS_DTX_REG2.BF.PLL_TS_SSC_M_LANE_12_0_b0
#define reg_PLL_TS_SSC_M_LANE_12_0_b1  PLL_TS_DTX_REG2.BF.PLL_TS_SSC_M_LANE_12_0_b1
#define reg_PLL_TS_SSC_ACC_FACTOR_LANE  PLL_TS_DTX_REG2.BF.PLL_TS_SSC_ACC_FACTOR_LANE
#define reg_PLL_TS_SSC_STEP_125PPM_LANE_3_0  PLL_TS_DTX_REG2.BF.PLL_TS_SSC_STEP_125PPM_LANE_3_0

// 0x0028	PLL_TS_LANE_REG9		Tx Side PLL Lane Register 9
typedef union {
	struct {
		uint8_t PLL_TS_REF1M_GEN_DIV_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h18*/
		uint8_t ANA_PLL_TS_REFCLK_SEL_LANE               : 1;	/*      8     r/w   0*/
		uint8_t PLL_TS_ID_RD_LANE_1_0                    : 2;	/* [10:9]       r   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t PLL_TS_TXCLK_SYNC_EN_LANE                : 1;	/*     13     r/w   0*/
		uint8_t PLL_TS_TXCLK_SYNC_EN_FM_REG_LANE         : 1;	/*     14     r/w   0*/
		uint8_t PLL_TS_FIFO_FULL_LANE                    : 1;	/*     15     r/w   0*/
		uint8_t PLL_TS_FIFO_FULL_FM_REG_LANE             : 1;	/*     16     r/w   0*/
		uint8_t PLL_TS_FIFO_EMPTY_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t PLL_TS_FIFO_EMPTY_FM_REG_LANE            : 1;	/*     18     r/w   0*/
		uint8_t PLL_TS_FIFO_CNT_CHG_LANE_3_0             : 4;	/*[22:19]     r/w   0*/
		uint8_t PLL_TS_FIFO_CNT_CHG_FM_REG_LANE          : 1;	/*     23     r/w   0*/
		uint8_t PLL_TS_FIFO_CNT_CHG_VALID_LANE           : 1;	/*     24     r/w   0*/
		uint8_t PLL_TS_FIFO_CNT_CHG_VALID_FM_REG_LANE    : 1;	/*     25     r/w   0*/
		uint8_t PLL_TS_RX2PLL_FREQ_TRAN_EN_LANE          : 1;	/*     26     r/w   0*/
		uint8_t PLL_TS_RX2PLL_FREQ_TRAN_EN_FM_REG_LANE   : 1;	/*     27     r/w   0*/
		uint8_t PLL_TS_LOCAL_DIG_RX2TX_LPBK_EN_LANE      : 1;	/*     28     r/w   0*/
		uint8_t PLL_TS_LOCAL_DIG_RX2TX_LPBK_EN_FM_REG_LANE : 1;	/*     29     r/w   0*/
		uint8_t PLL_TS_REPEAT_MODE_EN_LANE               : 1;	/*     30     r/w   0*/
		uint8_t PLL_TS_REPEAT_MODE_EN_FM_REG_LANE        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG9_t;
__xdata __at( 0x5228 ) volatile PLL_TS_LANE_REG9_t PLL_TS_LANE_REG9;
#define reg_PLL_TS_REF1M_GEN_DIV_LANE_7_0  PLL_TS_LANE_REG9.BF.PLL_TS_REF1M_GEN_DIV_LANE_7_0
#define reg_ANA_PLL_TS_REFCLK_SEL_LANE  PLL_TS_LANE_REG9.BF.ANA_PLL_TS_REFCLK_SEL_LANE
#define reg_PLL_TS_ID_RD_LANE_1_0  PLL_TS_LANE_REG9.BF.PLL_TS_ID_RD_LANE_1_0
#define reg_PLL_TS_TXCLK_SYNC_EN_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_TXCLK_SYNC_EN_LANE
#define reg_PLL_TS_TXCLK_SYNC_EN_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_TXCLK_SYNC_EN_FM_REG_LANE
#define reg_PLL_TS_FIFO_FULL_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_FULL_LANE
#define reg_PLL_TS_FIFO_FULL_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_FULL_FM_REG_LANE
#define reg_PLL_TS_FIFO_EMPTY_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_EMPTY_LANE
#define reg_PLL_TS_FIFO_EMPTY_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_EMPTY_FM_REG_LANE
#define reg_PLL_TS_FIFO_CNT_CHG_LANE_3_0  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_CNT_CHG_LANE_3_0
#define reg_PLL_TS_FIFO_CNT_CHG_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_CNT_CHG_FM_REG_LANE
#define reg_PLL_TS_FIFO_CNT_CHG_VALID_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_CNT_CHG_VALID_LANE
#define reg_PLL_TS_FIFO_CNT_CHG_VALID_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_FIFO_CNT_CHG_VALID_FM_REG_LANE
#define reg_PLL_TS_RX2PLL_FREQ_TRAN_EN_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_RX2PLL_FREQ_TRAN_EN_LANE
#define reg_PLL_TS_RX2PLL_FREQ_TRAN_EN_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_RX2PLL_FREQ_TRAN_EN_FM_REG_LANE
#define reg_PLL_TS_LOCAL_DIG_RX2TX_LPBK_EN_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_LOCAL_DIG_RX2TX_LPBK_EN_LANE
#define reg_PLL_TS_LOCAL_DIG_RX2TX_LPBK_EN_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_LOCAL_DIG_RX2TX_LPBK_EN_FM_REG_LANE
#define reg_PLL_TS_REPEAT_MODE_EN_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_REPEAT_MODE_EN_LANE
#define reg_PLL_TS_REPEAT_MODE_EN_FM_REG_LANE  PLL_TS_LANE_REG9.BF.PLL_TS_REPEAT_MODE_EN_FM_REG_LANE

// 0x002c	PLL_TS_LANE_REG6		Tx Side PLL Lane Register 6
typedef union {
	struct {
		uint8_t PLL_TS_TO_DTX_RX_FOFFSET_LANE_14_0_b0    : 8;	/* [14:0]     r/w   0*/
		uint8_t PLL_TS_TO_DTX_RX_FOFFSET_LANE_14_0_b1    : 7;	/* [14:0]     r/w   0*/
		uint8_t PLL_TS_TO_DTX_RX_FOFFSET_FM_REG_LANE     : 1;	/*     15     r/w   0*/
		uint8_t PLL_TS_RX_FOFFSET_VALID_LANE             : 1;	/*     16     r/w   0*/
		uint8_t PLL_TS_RX_FOFFSET_VALID_FM_REG_LANE      : 1;	/*     17     r/w   0*/
		uint8_t PLL_TS_SSC_EN_LANE                       : 1;	/*     18     r/w   0*/
		uint8_t PLL_TS_SSC_EN_FM_REG_LANE                : 1;	/*     19     r/w   0*/
		uint8_t PLL_TS_SSC_DSPREAD_TS_FM_REG_LANE        : 1;	/*     20     r/w   0*/
		uint8_t PLL_TS_SSC_DSPREAD_TS_LANE               : 1;	/*     21     r/w   1*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t PLL_TS_SSC_AMP_LANE_6_0                  : 7;	/*[30:24]     r/w   0*/
		uint8_t PLL_TS_SSC_AMP_FM_REG_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG6_t;
__xdata __at( 0x522c ) volatile PLL_TS_LANE_REG6_t PLL_TS_LANE_REG6;
#define reg_PLL_TS_TO_DTX_RX_FOFFSET_LANE_14_0_b0  PLL_TS_LANE_REG6.BF.PLL_TS_TO_DTX_RX_FOFFSET_LANE_14_0_b0
#define reg_PLL_TS_TO_DTX_RX_FOFFSET_LANE_14_0_b1  PLL_TS_LANE_REG6.BF.PLL_TS_TO_DTX_RX_FOFFSET_LANE_14_0_b1
#define reg_PLL_TS_TO_DTX_RX_FOFFSET_FM_REG_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_TO_DTX_RX_FOFFSET_FM_REG_LANE
#define reg_PLL_TS_RX_FOFFSET_VALID_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_RX_FOFFSET_VALID_LANE
#define reg_PLL_TS_RX_FOFFSET_VALID_FM_REG_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_RX_FOFFSET_VALID_FM_REG_LANE
#define reg_PLL_TS_SSC_EN_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_SSC_EN_LANE
#define reg_PLL_TS_SSC_EN_FM_REG_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_SSC_EN_FM_REG_LANE
#define reg_PLL_TS_SSC_DSPREAD_TS_FM_REG_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_SSC_DSPREAD_TS_FM_REG_LANE
#define reg_PLL_TS_SSC_DSPREAD_TS_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_SSC_DSPREAD_TS_LANE
#define reg_PLL_TS_SSC_AMP_LANE_6_0  PLL_TS_LANE_REG6.BF.PLL_TS_SSC_AMP_LANE_6_0
#define reg_PLL_TS_SSC_AMP_FM_REG_LANE  PLL_TS_LANE_REG6.BF.PLL_TS_SSC_AMP_FM_REG_LANE

// 0x0030	PLL_TS_LANE_REG10		Tx Side PLL Lane Register 10
typedef union {
	struct {
		uint8_t TESTBUS_SEL_LO1_PLL_TS_LANE_5_0          : 6;	/*  [5:0]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t TESTBUS_SEL_HI1_PLL_TS_LANE_5_0          : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG10_t;
__xdata __at( 0x5230 ) volatile PLL_TS_LANE_REG10_t PLL_TS_LANE_REG10;
#define reg_TESTBUS_SEL_LO1_PLL_TS_LANE_5_0  PLL_TS_LANE_REG10.BF.TESTBUS_SEL_LO1_PLL_TS_LANE_5_0
#define reg_TESTBUS_SEL_HI1_PLL_TS_LANE_5_0  PLL_TS_LANE_REG10.BF.TESTBUS_SEL_HI1_PLL_TS_LANE_5_0

// 0x0034	PLL_TS_LANE_REG11		Tx Side PLL Lane Register 11
typedef union {
	struct {
		uint8_t DIG_TEST_BUS_PLL_TS_LANE_15_0_b0         : 8;	/* [15:0]       r 16'h0*/
		uint8_t DIG_TEST_BUS_PLL_TS_LANE_15_0_b1         : 8;	/* [15:0]       r 16'h0*/
		uint8_t TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0_b0     : 8;	/*[31:16]     r/w   0*/
		uint8_t TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0_b1     : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_LANE_REG11_t;
__xdata __at( 0x5234 ) volatile PLL_TS_LANE_REG11_t PLL_TS_LANE_REG11;
#define reg_DIG_TEST_BUS_PLL_TS_LANE_15_0_b0  PLL_TS_LANE_REG11.BF.DIG_TEST_BUS_PLL_TS_LANE_15_0_b0
#define reg_DIG_TEST_BUS_PLL_TS_LANE_15_0_b1  PLL_TS_LANE_REG11.BF.DIG_TEST_BUS_PLL_TS_LANE_15_0_b1
#define reg_TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0_b0  PLL_TS_LANE_REG11.BF.TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0_b0
#define reg_TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0_b1  PLL_TS_LANE_REG11.BF.TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0_b1
#define reg_DIG_TEST_BUS_PLL_TS_LANE_15_0  PLL_TS_LANE_REG11.WT.W0
#define reg_TESTBUS_SEL_SWAP_PLL_TS_LANE_15_0  PLL_TS_LANE_REG11.WT.W1

// 0x0038	PLL_TS_DTX_PHY_ALIGN_REG0		PLL_TS Dtx_phy_align Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [21:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [21:0]     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/* [21:0]     r/w   0*/
		uint8_t PLL_TS_INIT_TXFOFFS_EN_LANE              : 1;	/*     22     r/w   1*/
		uint8_t PLL_TS_LANE_ALIGN_POFFSET_FORCE_LANE     : 1;	/*     23     r/w   0*/
		uint8_t PLL_TS_LANE_ALIGN_POFFSET_LANE_7_0       : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_DTX_PHY_ALIGN_REG0_t;
__xdata __at( 0x5238 ) volatile PLL_TS_DTX_PHY_ALIGN_REG0_t PLL_TS_DTX_PHY_ALIGN_REG0;
#define reg_PLL_TS_INIT_TXFOFFS_EN_LANE  PLL_TS_DTX_PHY_ALIGN_REG0.BF.PLL_TS_INIT_TXFOFFS_EN_LANE
#define reg_PLL_TS_LANE_ALIGN_POFFSET_FORCE_LANE  PLL_TS_DTX_PHY_ALIGN_REG0.BF.PLL_TS_LANE_ALIGN_POFFSET_FORCE_LANE
#define reg_PLL_TS_LANE_ALIGN_POFFSET_LANE_7_0  PLL_TS_DTX_PHY_ALIGN_REG0.BF.PLL_TS_LANE_ALIGN_POFFSET_LANE_7_0

// 0x003c	PLL_TS_LANE_REG7		Tx Side PLL Lane Register 7
typedef union {
	struct {
		uint8_t PLL_TS_PHASE_OFFS_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_TS_PHASE_OFFS_VALID_LANE             : 1;	/*      8     r/w   0*/
		uint8_t PLL_TS_PHASE_OFFS_VALID_FM_REG_LANE      : 1;	/*      9     r/w   0*/
		uint8_t PLL_TS_PHASE_OFFS_FM_REG_LANE            : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PLL_TS_RX2TX_FOFFSET_VALID_LANE          : 1;	/*     16     r/w   0*/
		uint8_t PLL_TS_RX2TX_FOFFSET_VALID_FM_REG_LANE   : 1;	/*     17     r/w   0*/
		uint8_t PLL_TS_RX2TX_FOFFSET_LANE_12_0_b0        : 6;	/*[30:18]     r/w 13'h0*/
		uint8_t PLL_TS_RX2TX_FOFFSET_LANE_12_0_b1        : 7;	/*[30:18]     r/w 13'h0*/
		uint8_t PLL_TS_RX2TX_FOFFSET_FM_REG_LANE         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_LANE_REG7_t;
__xdata __at( 0x523c ) volatile PLL_TS_LANE_REG7_t PLL_TS_LANE_REG7;
#define reg_PLL_TS_PHASE_OFFS_LANE_7_0  PLL_TS_LANE_REG7.BF.PLL_TS_PHASE_OFFS_LANE_7_0
#define reg_PLL_TS_PHASE_OFFS_VALID_LANE  PLL_TS_LANE_REG7.BF.PLL_TS_PHASE_OFFS_VALID_LANE
#define reg_PLL_TS_PHASE_OFFS_VALID_FM_REG_LANE  PLL_TS_LANE_REG7.BF.PLL_TS_PHASE_OFFS_VALID_FM_REG_LANE
#define reg_PLL_TS_PHASE_OFFS_FM_REG_LANE  PLL_TS_LANE_REG7.BF.PLL_TS_PHASE_OFFS_FM_REG_LANE
#define reg_PLL_TS_RX2TX_FOFFSET_VALID_LANE  PLL_TS_LANE_REG7.BF.PLL_TS_RX2TX_FOFFSET_VALID_LANE
#define reg_PLL_TS_RX2TX_FOFFSET_VALID_FM_REG_LANE  PLL_TS_LANE_REG7.BF.PLL_TS_RX2TX_FOFFSET_VALID_FM_REG_LANE
#define reg_PLL_TS_RX2TX_FOFFSET_LANE_12_0_b0  PLL_TS_LANE_REG7.BF.PLL_TS_RX2TX_FOFFSET_LANE_12_0_b0
#define reg_PLL_TS_RX2TX_FOFFSET_LANE_12_0_b1  PLL_TS_LANE_REG7.BF.PLL_TS_RX2TX_FOFFSET_LANE_12_0_b1
#define reg_PLL_TS_RX2TX_FOFFSET_FM_REG_LANE  PLL_TS_LANE_REG7.BF.PLL_TS_RX2TX_FOFFSET_FM_REG_LANE

// 0x0040	PLL_TS_LANE_REG12		Tx Side PLL Lane Register 12
typedef union {
	struct {
		uint8_t PLL_TS_FBDIV_CAL_LANE_9_0_b0             : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t PLL_TS_FBDIV_CAL_LANE_9_0_b1             : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_LANE_REG12_t;
__xdata __at( 0x5240 ) volatile PLL_TS_LANE_REG12_t PLL_TS_LANE_REG12;
#define reg_PLL_TS_FBDIV_CAL_LANE_9_0_b0  PLL_TS_LANE_REG12.BF.PLL_TS_FBDIV_CAL_LANE_9_0_b0
#define reg_PLL_TS_FBDIV_CAL_LANE_9_0_b1  PLL_TS_LANE_REG12.BF.PLL_TS_FBDIV_CAL_LANE_9_0_b1

// 0x0044	PLL_TS_LANE_REG13		Tx Side PLL Lane Register 13
typedef union {
	struct {
		uint8_t ANA_PLL_TS_RSVD0_LANE_15_0_b0            : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_PLL_TS_RSVD0_LANE_15_0_b1            : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t PLL_TS_ID_LANE_7_0                       : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_LANE_REG13_t;
__xdata __at( 0x5244 ) volatile PLL_TS_LANE_REG13_t PLL_TS_LANE_REG13;
#define reg_ANA_PLL_TS_RSVD0_LANE_15_0_b0  PLL_TS_LANE_REG13.BF.ANA_PLL_TS_RSVD0_LANE_15_0_b0
#define reg_ANA_PLL_TS_RSVD0_LANE_15_0_b1  PLL_TS_LANE_REG13.BF.ANA_PLL_TS_RSVD0_LANE_15_0_b1
#define reg_PLL_TS_ID_LANE_7_0  PLL_TS_LANE_REG13.BF.PLL_TS_ID_LANE_7_0
#define reg_ANA_PLL_TS_RSVD0_LANE_15_0  PLL_TS_LANE_REG13.WT.W0

#endif
