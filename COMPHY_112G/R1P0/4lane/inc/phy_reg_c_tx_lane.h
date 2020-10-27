#ifndef PHY_REG_C_TX_LANE_H
#define PHY_REG_C_TX_LANE_H



// 0x0000	PM_CTRL_TX_LANE_REG1_LANE		Power Control Tx Lane Register 1
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
		uint8_t PIN_PLL_READY_TX_LANE                    : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t PLL_READY_TX_LANE                        : 1;	/*     20       r   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t ANA_TX_IDLE_LANE                         : 1;	/*     24     r/w   1*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t ANA_TX_IDLE_FORCE_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t ANA_PU_TX_LANE                           : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_TX_FORCE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG1_LANE_t;
__xdata __at( 0x2000 ) volatile PM_CTRL_TX_LANE_REG1_LANE_t PM_CTRL_TX_LANE_REG1_LANE;
#define reg_PIN_PLL_READY_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PIN_PLL_READY_TX_LANE
#define reg_PLL_READY_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PLL_READY_TX_LANE
#define reg_ANA_TX_IDLE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_LANE
#define reg_ANA_TX_IDLE_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_FORCE_LANE
#define reg_ANA_PU_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_LANE
#define reg_ANA_PU_TX_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_FORCE_LANE

// 0x0004	PM_CTRL_TX_LANE_REG2_LANE		Power Control Tx Lane Register 2
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t ANA_TX_TXCLK_SYNC_EN_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t PIN_TX_IDLE_RD_LANE                      : 1;	/*     26       r   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t PIN_PU_TX_RD_LANE                        : 1;	/*     28       r   0*/
		uint8_t PIN_PU_PLL_RD_LANE                       : 1;	/*     29       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t ANA_TX_HIZ_EN_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG2_LANE_t;
__xdata __at( 0x2004 ) volatile PM_CTRL_TX_LANE_REG2_LANE_t PM_CTRL_TX_LANE_REG2_LANE;
#define reg_ANA_TX_TXCLK_SYNC_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_TXCLK_SYNC_EN_LANE
#define reg_PIN_TX_IDLE_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_RD_LANE
#define reg_PIN_PU_TX_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_TX_RD_LANE
#define reg_PIN_PU_PLL_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_PLL_RD_LANE
#define reg_ANA_TX_HIZ_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_HIZ_EN_LANE

// 0x0008	INPUT_TX_PIN_REG0_LANE		Input Interface Tx Lane Reg0
typedef union {
	struct {
		uint8_t PU_TX_FM_REG_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t PU_TX_LANE                               : 1;	/*      1     r/w   0*/
		uint8_t PU_PLL_FM_REG_LANE                       : 1;	/*      2     r/w   0*/
		uint8_t PU_PLL_LANE                              : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_FM_REG_LANE          : 1;	/*      4     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_LANE_5_0_b0          : 3;	/* [10:5]     r/w 6'h0*/
		uint8_t REMOTE_STATUS_FIELD_LANE_5_0_b1          : 3;	/* [10:5]     r/w 6'h0*/
		uint8_t REMOTE_CTRL_FIELD_FM_REG_LANE            : 1;	/*     11     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_LANE_5_0_b0            : 4;	/*[17:12]     r/w 6'h0*/
		uint8_t REMOTE_CTRL_FIELD_LANE_5_0_b1            : 2;	/*[17:12]     r/w 6'h0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_FM_REG_LANE      : 1;	/*     18     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_LANE_3_0         : 4;	/*[22:19]     r/w 4'h0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_FM_REG_LANE    : 1;	/*     23     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_LANE           : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t PHY_GEN_TX_FM_REG_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t PHY_GEN_TX_LANE_4_0                      : 5;	/*[31:27]     r/w 5'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG0_LANE_t;
__xdata __at( 0x2008 ) volatile INPUT_TX_PIN_REG0_LANE_t INPUT_TX_PIN_REG0_LANE;
#define reg_PU_TX_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_TX_FM_REG_LANE
#define reg_PU_TX_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_TX_LANE
#define reg_PU_PLL_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_PLL_FM_REG_LANE
#define reg_PU_PLL_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_PLL_LANE
#define reg_REMOTE_STATUS_FIELD_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_LANE_5_0_b0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_LANE_5_0_b0
#define reg_REMOTE_STATUS_FIELD_LANE_5_0_b1  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_LANE_5_0_b1
#define reg_REMOTE_CTRL_FIELD_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_LANE_5_0_b0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_LANE_5_0_b0
#define reg_REMOTE_CTRL_FIELD_LANE_5_0_b1  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_LANE_5_0_b1
#define reg_REMOTE_CTRL_FIELD_RESET_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_LANE_3_0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_RESET_LANE_3_0
#define reg_REMOTE_STATUS_FIELD_RESET_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_RESET_LANE
#define reg_PHY_GEN_TX_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_FM_REG_LANE
#define reg_PHY_GEN_TX_LANE_4_0  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_LANE_4_0

// 0x000c	INPUT_TX_PIN_REG1_LANE		Input Interface Tx Lane Reg1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SSC_EN_FM_REG_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t SSC_EN_LANE                              : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/* [22:7]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [22:7]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 7;	/* [22:7]     r/w 16'h0*/
		uint8_t GPI_FM_REG_LANE                          : 1;	/*     23     r/w   0*/
		uint8_t GPI_LANE_7_0                             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_TX_PIN_REG1_LANE_t;
__xdata __at( 0x200c ) volatile INPUT_TX_PIN_REG1_LANE_t INPUT_TX_PIN_REG1_LANE;
#define reg_SSC_EN_FM_REG_LANE  INPUT_TX_PIN_REG1_LANE.BF.SSC_EN_FM_REG_LANE
#define reg_SSC_EN_LANE  INPUT_TX_PIN_REG1_LANE.BF.SSC_EN_LANE
#define reg_GPI_FM_REG_LANE  INPUT_TX_PIN_REG1_LANE.BF.GPI_FM_REG_LANE
#define reg_GPI_LANE_7_0  INPUT_TX_PIN_REG1_LANE.BF.GPI_LANE_7_0

// 0x0010	INPUT_TX_PIN_REG2_LANE		Input Interface Tx Lane Reg2
typedef union {
	struct {
		uint8_t LOCAL_CTRL_FIELD_READY_FM_REG_LANE       : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_LANE              : 1;	/*      1     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE   : 1;	/*      2     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_LANE          : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*      6     r/w   0*/
		uint8_t TX_ACJTAG_EN_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t TX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_FM_REG_LANE         : 1;	/*     11     r/w   0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b0        : 4;	/*[27:12]     r/w 16'h0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b1        : 8;	/*[27:12]     r/w 16'h0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b2        : 4;	/*[27:12]     r/w 16'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t REPEAT_MODE_EN_FM_REG_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_TX_PIN_REG2_LANE_t;
__xdata __at( 0x2010 ) volatile INPUT_TX_PIN_REG2_LANE_t INPUT_TX_PIN_REG2_LANE;
#define reg_LOCAL_CTRL_FIELD_READY_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.LOCAL_CTRL_FIELD_READY_FM_REG_LANE
#define reg_LOCAL_CTRL_FIELD_READY_LANE  INPUT_TX_PIN_REG2_LANE.BF.LOCAL_CTRL_FIELD_READY_LANE
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_FRAME_LOCK_ENABLE_LANE
#define reg_TX_TRAIN_ENABLE_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_ENABLE_LANE
#define reg_TX_TRAIN_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_ENABLE_FM_REG_LANE
#define reg_TX_ACJTAG_EN_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_ACJTAG_EN_LANE
#define reg_TX_ACJTAG_EN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_ACJTAG_EN_FM_REG_LANE
#define reg_ANA_TRX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b0  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b0
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b1  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b1
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b2  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b2
#define reg_REPEAT_MODE_EN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.REPEAT_MODE_EN_FM_REG_LANE
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0  INPUT_TX_PIN_REG2_LANE.WT.W0

// 0x0014	INPUT_TX_PIN_REG3_LANE		Input Interface Tx Lane Reg3
typedef union {
	struct {
		uint8_t REMOTE_STATUS_FIELD_PAT_FM_REG_LANE      : 1;	/*      0     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_PAT_LANE_1_0         : 2;	/*  [2:1]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t TX_ACJTAG_IN_FM_REG_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t TX_ACJTAG_IN_LANE                        : 1;	/*      6     r/w   0*/
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
		uint8_t TX_IDLE_FM_REG_LANE                      : 1;	/*     17     r/w   0*/
		uint8_t TX_IDLE_LANE                             : 1;	/*     18     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_FM_REG_LANE    : 1;	/*     19     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_LANE           : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_FM_REG_LANE      : 1;	/*     21     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_LANE             : 1;	/*     22     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_FM_REG_LANE        : 1;	/*     23     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_LANE_1_0           : 2;	/*[25:24]     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t TXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*     28     r/w   0*/
		uint8_t TXDCLK_NT_SEL_LANE_2_0                   : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG3_LANE_t;
__xdata __at( 0x2014 ) volatile INPUT_TX_PIN_REG3_LANE_t INPUT_TX_PIN_REG3_LANE;
#define reg_REMOTE_STATUS_FIELD_PAT_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_PAT_LANE_1_0  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_PAT_LANE_1_0
#define reg_TX_ACJTAG_IN_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_ACJTAG_IN_FM_REG_LANE
#define reg_TX_ACJTAG_IN_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_ACJTAG_IN_LANE
#define reg_TX_IDLE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_FM_REG_LANE
#define reg_TX_IDLE_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_PAT_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_PAT_LANE_1_0  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_PAT_LANE_1_0
#define reg_TXDCLK_NT_SEL_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TXDCLK_NT_SEL_FM_REG_LANE
#define reg_TXDCLK_NT_SEL_LANE_2_0  INPUT_TX_PIN_REG3_LANE.BF.TXDCLK_NT_SEL_LANE_2_0

// 0x0018	PM_CTRL_INTERRUPT_REG1_LANE		Power Control Interrupt Register 1
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_ISR_LANE                 : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_ISR_LANE               : 1;	/*     24     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_ISR_LANE              : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_ISR_LANE                : 1;	/*     26     r/w   0*/
		uint8_t INT_RX_INIT_RISE_ISR_LANE                : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_RX_CHG_ISR_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_TX_CHG_ISR_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_ISR_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_REG1_LANE_t;
__xdata __at( 0x2018 ) volatile PM_CTRL_INTERRUPT_REG1_LANE_t PM_CTRL_INTERRUPT_REG1_LANE;
#define reg_INT_TX_IDLE_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_IDLE_CHG_ISR_LANE
#define reg_INT_PU_PLL_OR_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_OR_CHG_ISR_LANE
#define reg_INT_REFCLK_DIS_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_REFCLK_DIS_CHG_ISR_LANE
#define reg_INT_PU_IVREF_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_IVREF_CHG_ISR_LANE
#define reg_INT_RX_INIT_RISE_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_RX_INIT_RISE_ISR_LANE
#define reg_INT_PU_RX_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_RX_CHG_ISR_LANE
#define reg_INT_PU_TX_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_TX_CHG_ISR_LANE
#define reg_INT_PU_PLL_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_CHG_ISR_LANE

// 0x001c	PM_CTRL_INTERRUPT_REG2		Power Control Interrupt Register 2
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_MASK_LANE                : 1;	/*     20     r/w   1*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_MASK_LANE              : 1;	/*     24     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_MASK_LANE             : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_MASK_LANE               : 1;	/*     26     r/w   0*/
		uint8_t INT_RX_INIT_RISE_MASK_LANE               : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_RX_CHG_MASK_LANE                  : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_TX_CHG_MASK_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_MASK_LANE                 : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_REG2_t;
__xdata __at( 0x201c ) volatile PM_CTRL_INTERRUPT_REG2_t PM_CTRL_INTERRUPT_REG2;
#define reg_INT_TX_IDLE_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_IDLE_CHG_MASK_LANE
#define reg_INT_PU_PLL_OR_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_OR_CHG_MASK_LANE
#define reg_INT_REFCLK_DIS_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_REFCLK_DIS_CHG_MASK_LANE
#define reg_INT_PU_IVREF_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_IVREF_CHG_MASK_LANE
#define reg_INT_RX_INIT_RISE_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_RX_INIT_RISE_MASK_LANE
#define reg_INT_PU_RX_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_RX_CHG_MASK_LANE
#define reg_INT_PU_TX_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_TX_CHG_MASK_LANE
#define reg_INT_PU_PLL_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_CHG_MASK_LANE

// 0x0020	CLKGEN_TX_LANE_REG1_LANE		Clock Gen Tx Lane Reg1
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RST_RX2TX_LPBK_TX_CLK_LANE               : 1;	/*     20     r/w   0*/
		uint8_t RX2TX_LPBK_TX_CLK_EN_LANE                : 1;	/*     21     r/w   0*/
		uint8_t PT_TX_CLK_EN_LANE                        : 1;	/*     22     r/w   0*/
		uint8_t TXDCLK_AH_LANE                           : 1;	/*     23     r/w   0*/
		uint8_t ANA_TXCLK_INV_LANE                       : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RST_REF_CLK_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t REF_CLK_EN_LANE                          : 1;	/*     27     r/w   0*/
		uint8_t REFCLK_ON_DCLK_DIS_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t PIN_TX_CLK_ON_LANE                       : 1;	/*     29     r/w   1*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKGEN_TX_LANE_REG1_LANE_t;
__xdata __at( 0x2020 ) volatile CLKGEN_TX_LANE_REG1_LANE_t CLKGEN_TX_LANE_REG1_LANE;
#define reg_RST_RX2TX_LPBK_TX_CLK_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.RST_RX2TX_LPBK_TX_CLK_LANE
#define reg_RX2TX_LPBK_TX_CLK_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.RX2TX_LPBK_TX_CLK_EN_LANE
#define reg_PT_TX_CLK_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.PT_TX_CLK_EN_LANE
#define reg_TXDCLK_AH_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.TXDCLK_AH_LANE
#define reg_ANA_TXCLK_INV_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TXCLK_INV_LANE
#define reg_RST_REF_CLK_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.RST_REF_CLK_LANE
#define reg_REF_CLK_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.REF_CLK_EN_LANE
#define reg_REFCLK_ON_DCLK_DIS_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.REFCLK_ON_DCLK_DIS_LANE
#define reg_PIN_TX_CLK_ON_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.PIN_TX_CLK_ON_LANE

// 0x0024	TX_SPEED_CONVERT_LANE		TX Clock and Data Speed Convert
typedef union {
	struct {
		uint8_t RX2TX_R_FIFO_CNT_LANE_4_0                : 5;	/*  [4:0]       r   0*/
		uint8_t RX2TX_W_FIFO_CNT_LANE_4_0_b0             : 3;	/*  [9:5]       r   0*/
		uint8_t RX2TX_W_FIFO_CNT_LANE_4_0_b1             : 2;	/*  [9:5]       r   0*/
		uint8_t RX2TX_FIFO_CNT_RD_REQ_LANE               : 1;	/*     10     r/w   1*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t TXDATA_MSB_LSB_SWAP_LANE                 : 1;	/*     15     r/w   0*/
		uint8_t TXDATA_PRE_CODE_EN_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t TXDATA_GRAY_CODE_EN_LANE                 : 1;	/*     17     r/w   0*/
		uint8_t TXD_MSB_LSB_SWAP_LANE                    : 1;	/*     18     r/w   0*/
		uint8_t RX2TX_FIFO_EMPTY_FORCE_LANE              : 1;	/*     19     r/w   0*/
		uint8_t RX2TX_FIFO_FULL_FORCE_LANE               : 1;	/*     20     r/w   0*/
		uint8_t RX2TX_FIFO_STATUS_CLEAR_LANE             : 1;	/*     21     r/w   0*/
		uint8_t RX2TX_FIFO_EMPTY_LANE                    : 1;	/*     22       r   0*/
		uint8_t RX2TX_FIFO_FULL_LANE                     : 1;	/*     23       r   0*/
		uint8_t RX2TX_FIFO_RD_START_POINT_LANE           : 1;	/*     24     r/w   0*/
		uint8_t RX2TX_FIFO_NO_STOP_LANE                  : 1;	/*     25     r/w   0*/
		uint8_t ADD_ERR_NUM_LANE_2_0                     : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t ADD_ERR_EN_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t TXD_INV_LANE                             : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_DIG_RX2TX_LPBK_EN_LANE             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SPEED_CONVERT_LANE_t;
__xdata __at( 0x2024 ) volatile TX_SPEED_CONVERT_LANE_t TX_SPEED_CONVERT_LANE;
#define reg_RX2TX_R_FIFO_CNT_LANE_4_0  TX_SPEED_CONVERT_LANE.BF.RX2TX_R_FIFO_CNT_LANE_4_0
#define reg_RX2TX_W_FIFO_CNT_LANE_4_0_b0  TX_SPEED_CONVERT_LANE.BF.RX2TX_W_FIFO_CNT_LANE_4_0_b0
#define reg_RX2TX_W_FIFO_CNT_LANE_4_0_b1  TX_SPEED_CONVERT_LANE.BF.RX2TX_W_FIFO_CNT_LANE_4_0_b1
#define reg_RX2TX_FIFO_CNT_RD_REQ_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_CNT_RD_REQ_LANE
#define reg_TXDATA_MSB_LSB_SWAP_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_MSB_LSB_SWAP_LANE
#define reg_TXDATA_PRE_CODE_EN_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_PRE_CODE_EN_LANE
#define reg_TXDATA_GRAY_CODE_EN_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_GRAY_CODE_EN_LANE
#define reg_TXD_MSB_LSB_SWAP_LANE  TX_SPEED_CONVERT_LANE.BF.TXD_MSB_LSB_SWAP_LANE
#define reg_RX2TX_FIFO_EMPTY_FORCE_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_EMPTY_FORCE_LANE
#define reg_RX2TX_FIFO_FULL_FORCE_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_FULL_FORCE_LANE
#define reg_RX2TX_FIFO_STATUS_CLEAR_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_STATUS_CLEAR_LANE
#define reg_RX2TX_FIFO_EMPTY_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_EMPTY_LANE
#define reg_RX2TX_FIFO_FULL_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_FULL_LANE
#define reg_RX2TX_FIFO_RD_START_POINT_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_RD_START_POINT_LANE
#define reg_RX2TX_FIFO_NO_STOP_LANE  TX_SPEED_CONVERT_LANE.BF.RX2TX_FIFO_NO_STOP_LANE
#define reg_ADD_ERR_NUM_LANE_2_0  TX_SPEED_CONVERT_LANE.BF.ADD_ERR_NUM_LANE_2_0
#define reg_ADD_ERR_EN_LANE  TX_SPEED_CONVERT_LANE.BF.ADD_ERR_EN_LANE
#define reg_TXD_INV_LANE  TX_SPEED_CONVERT_LANE.BF.TXD_INV_LANE
#define reg_LOCAL_DIG_RX2TX_LPBK_EN_LANE  TX_SPEED_CONVERT_LANE.BF.LOCAL_DIG_RX2TX_LPBK_EN_LANE

// 0x0028	SPD_CTRL_INTERRUPT_REG1_LANE		Speed Control Interrupt Register 1
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t INT_PHY_GEN_RX_CHG_ISR_LANE              : 1;	/*     30     r/w   0*/
		uint8_t INT_PHY_GEN_TX_CHG_ISR_LANE              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_INTERRUPT_REG1_LANE_t;
__xdata __at( 0x2028 ) volatile SPD_CTRL_INTERRUPT_REG1_LANE_t SPD_CTRL_INTERRUPT_REG1_LANE;
#define reg_INT_PHY_GEN_RX_CHG_ISR_LANE  SPD_CTRL_INTERRUPT_REG1_LANE.BF.INT_PHY_GEN_RX_CHG_ISR_LANE
#define reg_INT_PHY_GEN_TX_CHG_ISR_LANE  SPD_CTRL_INTERRUPT_REG1_LANE.BF.INT_PHY_GEN_TX_CHG_ISR_LANE

// 0x002c	SPD_CTRL_INTERRUPT_REG2		Speed Control Interrupt Register 2
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t INT_PHY_GEN_RX_CHG_MASK_LANE             : 1;	/*     30     r/w   0*/
		uint8_t INT_PHY_GEN_TX_CHG_MASK_LANE             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_INTERRUPT_REG2_t;
__xdata __at( 0x202c ) volatile SPD_CTRL_INTERRUPT_REG2_t SPD_CTRL_INTERRUPT_REG2;
#define reg_INT_PHY_GEN_RX_CHG_MASK_LANE  SPD_CTRL_INTERRUPT_REG2.BF.INT_PHY_GEN_RX_CHG_MASK_LANE
#define reg_INT_PHY_GEN_TX_CHG_MASK_LANE  SPD_CTRL_INTERRUPT_REG2.BF.INT_PHY_GEN_TX_CHG_MASK_LANE

// 0x0030	SPD_CTRL_TX_LANE_REG1_LANE		Speed Control Tx Lane Register 1
typedef union {
	struct {
		uint8_t TXDCLK_4X_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t TXDCLK_NT_EN_LANE                        : 1;	/*      1     r/w   0*/
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t PIN_TXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*[26:24]       r   0*/
		uint8_t PIN_PHY_GEN_TX_RD_LANE_4_0               : 5;	/*[31:27]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_TX_LANE_REG1_LANE_t;
__xdata __at( 0x2030 ) volatile SPD_CTRL_TX_LANE_REG1_LANE_t SPD_CTRL_TX_LANE_REG1_LANE;
#define reg_TXDCLK_4X_EN_LANE  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXDCLK_4X_EN_LANE
#define reg_TXDCLK_NT_EN_LANE  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXDCLK_NT_EN_LANE
#define reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_TXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_PHY_GEN_TX_RD_LANE_4_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_PHY_GEN_TX_RD_LANE_4_0

// 0x0034	TX_SYSTEM_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/* [26:0]     r/w   0*/
		uint8_t AN_TX_SEL_BITS_LANE                      : 1;	/*     27     r/w   0*/
		uint8_t TRAIN_TX_SEL_BITS_LANE                   : 1;	/*     28     r/w   1*/
		uint8_t TX_PAM2_EN_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t TX_HALFRATE_EN_LANE                      : 1;	/*     30     r/w   0*/
		uint8_t TX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE_t;
__xdata __at( 0x2034 ) volatile TX_SYSTEM_LANE_t TX_SYSTEM_LANE;
#define reg_AN_TX_SEL_BITS_LANE  TX_SYSTEM_LANE.BF.AN_TX_SEL_BITS_LANE
#define reg_TRAIN_TX_SEL_BITS_LANE  TX_SYSTEM_LANE.BF.TRAIN_TX_SEL_BITS_LANE
#define reg_TX_PAM2_EN_LANE  TX_SYSTEM_LANE.BF.TX_PAM2_EN_LANE
#define reg_TX_HALFRATE_EN_LANE  TX_SYSTEM_LANE.BF.TX_HALFRATE_EN_LANE
#define reg_TX_SEL_BITS_LANE  TX_SYSTEM_LANE.BF.TX_SEL_BITS_LANE

// 0x0044	DIG_TX_RSVD_REG0		Digital TX Reserved Register0
typedef union {
	struct {
		uint8_t DIG_TX_INT_RSVD0_LANE_15_0_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_TX_INT_RSVD0_LANE_15_0_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_TX_RSVD0_LANE_15_0_b0                : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t DIG_TX_RSVD0_LANE_15_0_b1                : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DIG_TX_RSVD_REG0_t;
__xdata __at( 0x2044 ) volatile DIG_TX_RSVD_REG0_t DIG_TX_RSVD_REG0;
#define reg_DIG_TX_INT_RSVD0_LANE_15_0_b0  DIG_TX_RSVD_REG0.BF.DIG_TX_INT_RSVD0_LANE_15_0_b0
#define reg_DIG_TX_INT_RSVD0_LANE_15_0_b1  DIG_TX_RSVD_REG0.BF.DIG_TX_INT_RSVD0_LANE_15_0_b1
#define reg_DIG_TX_RSVD0_LANE_15_0_b0  DIG_TX_RSVD_REG0.BF.DIG_TX_RSVD0_LANE_15_0_b0
#define reg_DIG_TX_RSVD0_LANE_15_0_b1  DIG_TX_RSVD_REG0.BF.DIG_TX_RSVD0_LANE_15_0_b1
#define reg_DIG_TX_INT_RSVD0_LANE_15_0  DIG_TX_RSVD_REG0.WT.W0
#define reg_DIG_TX_RSVD0_LANE_15_0  DIG_TX_RSVD_REG0.WT.W1

// 0x0048	PLLCAL_LANE_REG0		PLL Calibration Related Register Lane 0
typedef union {
	struct {
		uint8_t FBC_CNT_TIMER_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h4f*/
		uint8_t FBC_CNT_TIMER_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h4f*/
		uint8_t FBC_PLLCAL_CNT_LANE_15_0_b0              : 8;	/*[31:16]       r   0*/
		uint8_t FBC_PLLCAL_CNT_LANE_15_0_b1              : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLLCAL_LANE_REG0_t;
__xdata __at( 0x2048 ) volatile PLLCAL_LANE_REG0_t PLLCAL_LANE_REG0;
#define reg_FBC_CNT_TIMER_LANE_15_0_b0  PLLCAL_LANE_REG0.BF.FBC_CNT_TIMER_LANE_15_0_b0
#define reg_FBC_CNT_TIMER_LANE_15_0_b1  PLLCAL_LANE_REG0.BF.FBC_CNT_TIMER_LANE_15_0_b1
#define reg_FBC_PLLCAL_CNT_LANE_15_0_b0  PLLCAL_LANE_REG0.BF.FBC_PLLCAL_CNT_LANE_15_0_b0
#define reg_FBC_PLLCAL_CNT_LANE_15_0_b1  PLLCAL_LANE_REG0.BF.FBC_PLLCAL_CNT_LANE_15_0_b1
#define reg_FBC_CNT_TIMER_LANE_15_0  PLLCAL_LANE_REG0.WT.W0
#define reg_FBC_PLLCAL_CNT_LANE_15_0  PLLCAL_LANE_REG0.WT.W1

// 0x004c	PLLCAL_LANE_REG1		PLL Calibration Related Register Lane 1
typedef union {
	struct {
		uint8_t ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_TRX_PLL_TEMPC_LEVEL_TODIG_RD_LANE_1_0 : 2;	/*[17:16]       r   0*/
		uint8_t ANA_TRX_PLL_TEMPC_LEVEL_TODIG_RD_REQ_LANE : 1;	/*     18     r/w   1*/
		uint8_t ANA_TRX_PLL_TEMPC_LEVEL_TODIG_FM_REG_LANE : 1;	/*     19     r/w   0*/
		uint8_t ANA_TRX_PLL_TEMPC_LEVEL_TODIG_LANE_1_0   : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t ANA_TRX_PLL_LOCK_FM_REG_LANE             : 1;	/*     22     r/w   0*/
		uint8_t ANA_TRX_PLL_LOCK_LANE                    : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t FBC_CNT_START_LANE                       : 1;	/*     25     r/w   0*/
		uint8_t RST_FBC_PLLCAL_CLK_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t FBC_PLLCAL_CNT_READY_LANE                : 1;	/*     27       r   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t ANA_LD_CAL_DATA_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t RESET_ANA_LANE                           : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLLCAL_LANE_REG1_t;
__xdata __at( 0x204c ) volatile PLLCAL_LANE_REG1_t PLLCAL_LANE_REG1;
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0  PLLCAL_LANE_REG1.BF.ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1  PLLCAL_LANE_REG1.BF.ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1
#define reg_ANA_TRX_PLL_TEMPC_LEVEL_TODIG_RD_LANE_1_0  PLLCAL_LANE_REG1.BF.ANA_TRX_PLL_TEMPC_LEVEL_TODIG_RD_LANE_1_0
#define reg_ANA_TRX_PLL_TEMPC_LEVEL_TODIG_RD_REQ_LANE  PLLCAL_LANE_REG1.BF.ANA_TRX_PLL_TEMPC_LEVEL_TODIG_RD_REQ_LANE
#define reg_ANA_TRX_PLL_TEMPC_LEVEL_TODIG_FM_REG_LANE  PLLCAL_LANE_REG1.BF.ANA_TRX_PLL_TEMPC_LEVEL_TODIG_FM_REG_LANE
#define reg_ANA_TRX_PLL_TEMPC_LEVEL_TODIG_LANE_1_0  PLLCAL_LANE_REG1.BF.ANA_TRX_PLL_TEMPC_LEVEL_TODIG_LANE_1_0
#define reg_ANA_TRX_PLL_LOCK_FM_REG_LANE  PLLCAL_LANE_REG1.BF.ANA_TRX_PLL_LOCK_FM_REG_LANE
#define reg_ANA_TRX_PLL_LOCK_LANE  PLLCAL_LANE_REG1.BF.ANA_TRX_PLL_LOCK_LANE
#define reg_FBC_CNT_START_LANE  PLLCAL_LANE_REG1.BF.FBC_CNT_START_LANE
#define reg_RST_FBC_PLLCAL_CLK_LANE  PLLCAL_LANE_REG1.BF.RST_FBC_PLLCAL_CLK_LANE
#define reg_FBC_PLLCAL_CNT_READY_LANE  PLLCAL_LANE_REG1.BF.FBC_PLLCAL_CNT_READY_LANE
#define reg_ANA_LD_CAL_DATA_LANE  PLLCAL_LANE_REG1.BF.ANA_LD_CAL_DATA_LANE
#define reg_RESET_ANA_LANE  PLLCAL_LANE_REG1.BF.RESET_ANA_LANE
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0  PLLCAL_LANE_REG1.WT.W0

// 0x0050	TX_EMPHASIS_CONTROL0		Tx Emphasis Control0
typedef union {
	struct {
		uint8_t TX_EM_MAIN_CTRL_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h3f*/
		uint8_t TX_EM_PRE_CTRL_FORCE_LANE                : 1;	/*      7     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_LANE_4_0                  : 5;	/* [12:8]     r/w   0*/
		uint8_t TX_EM_MAIN_CTRL_FORCE_LANE               : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t TX_EM_POST_CTRL_FORCE_LANE               : 1;	/*     15     r/w   0*/
		uint8_t TX_EM_POST_CTRL_LANE_4_0                 : 5;	/*[20:16]     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_FORCE_LANE               : 1;	/*     21     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_LANE_4_0_b0              : 2;	/*[26:22]     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_LANE_4_0_b1              : 3;	/*[26:22]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t TX_VREF_TXDRV_SEL_LANE_2_0               : 3;	/*[31:29]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL0_t;
__xdata __at( 0x2050 ) volatile TX_EMPHASIS_CONTROL0_t TX_EMPHASIS_CONTROL0;
#define reg_TX_EM_MAIN_CTRL_LANE_6_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_MAIN_CTRL_LANE_6_0
#define reg_TX_EM_PRE_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_CTRL_FORCE_LANE
#define reg_TX_EM_PRE_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_CTRL_LANE_4_0
#define reg_TX_EM_MAIN_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_MAIN_CTRL_FORCE_LANE
#define reg_TX_EM_POST_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_CTRL_FORCE_LANE
#define reg_TX_EM_POST_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_CTRL_LANE_4_0
#define reg_TX_EM_PRE2_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_FORCE_LANE
#define reg_TX_EM_PRE2_CTRL_LANE_4_0_b0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_LANE_4_0_b0
#define reg_TX_EM_PRE2_CTRL_LANE_4_0_b1  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_LANE_4_0_b1
#define reg_TX_VREF_TXDRV_SEL_LANE_2_0  TX_EMPHASIS_CONTROL0.BF.TX_VREF_TXDRV_SEL_LANE_2_0

// 0x0054	TX_EMPHASIS_CONTROL1		Tx Emphasis Control1
typedef union {
	struct {
		uint8_t TX_FIR_TAP_POL_FORCE_LANE                : 1;	/*      0     r/w   0*/
		uint8_t TX_FIR_TAP_POL_LANE_5_0                  : 6;	/*  [6:1]     r/w   0*/
		uint8_t TX_FIR_UPDATE_FORCE_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t TX_FIR_UPDATE_LANE                       : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t TX_FIR_C_CTRL1_LANE_5_0                  : 6;	/*[15:10]     r/w   0*/
		uint8_t TX_FIR_C_CTRL2_LANE_5_0                  : 6;	/*[21:16]     r/w   0*/
		uint8_t TX_FIR_SEL_LANE_1_0                      : 2;	/*[23:22]     r/w   0*/
		uint8_t TX_FIR_C_CTRL3_LANE_5_0                  : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL1_t;
__xdata __at( 0x2054 ) volatile TX_EMPHASIS_CONTROL1_t TX_EMPHASIS_CONTROL1;
#define reg_TX_FIR_TAP_POL_FORCE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_FIR_TAP_POL_FORCE_LANE
#define reg_TX_FIR_TAP_POL_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_TAP_POL_LANE_5_0
#define reg_TX_FIR_UPDATE_FORCE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_FIR_UPDATE_FORCE_LANE
#define reg_TX_FIR_UPDATE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_FIR_UPDATE_LANE
#define reg_TX_FIR_C_CTRL1_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_C_CTRL1_LANE_5_0
#define reg_TX_FIR_C_CTRL2_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_C_CTRL2_LANE_5_0
#define reg_TX_FIR_SEL_LANE_1_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_SEL_LANE_1_0
#define reg_TX_FIR_C_CTRL3_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_C_CTRL3_LANE_5_0

// 0x0058	TX_EMPHASIS_CONTROL2		Tx Emphasis Control2
typedef union {
	struct {
		uint8_t TO_ANA_TX_FIR_C3_LANE_5_0                : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C2_LANE_5_0                : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C1_LANE_5_0                : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C0_LANE_5_0                : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL2_t;
__xdata __at( 0x2058 ) volatile TX_EMPHASIS_CONTROL2_t TX_EMPHASIS_CONTROL2;
#define reg_TO_ANA_TX_FIR_C3_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C3_LANE_5_0
#define reg_TO_ANA_TX_FIR_C2_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C2_LANE_5_0
#define reg_TO_ANA_TX_FIR_C1_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C1_LANE_5_0
#define reg_TO_ANA_TX_FIR_C0_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C0_LANE_5_0

// 0x005c	TX_RESERVED_REG1		Tx Reserved Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]       r   0*/
		uint8_t TRX_ANA_RSVD_OUT_RD_LANE_15_0_b0         : 8;	/*[31:16]       r   0*/
		uint8_t TRX_ANA_RSVD_OUT_RD_LANE_15_0_b1         : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TX_RESERVED_REG1_t;
__xdata __at( 0x205c ) volatile TX_RESERVED_REG1_t TX_RESERVED_REG1;
#define reg_TRX_ANA_RSVD_OUT_RD_LANE_15_0_b0  TX_RESERVED_REG1.BF.TRX_ANA_RSVD_OUT_RD_LANE_15_0_b0
#define reg_TRX_ANA_RSVD_OUT_RD_LANE_15_0_b1  TX_RESERVED_REG1.BF.TRX_ANA_RSVD_OUT_RD_LANE_15_0_b1
#define reg_TRX_ANA_RSVD_OUT_RD_LANE_15_0  TX_RESERVED_REG1.WT.W1

// 0x0060	TX_RESERVED_REG2		Tx Reserved Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
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
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TX_RESERVED_REG2_t;
__xdata __at( 0x2060 ) volatile TX_RESERVED_REG2_t TX_RESERVED_REG2;

// 0x0064	PM_CTRL_INTERRUPT_ISR_REG1_LANE		Power Control Interrupt Clear Register 1
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_ISR_CLEAR_LANE           : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE         : 1;	/*     24     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE        : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_ISR_CLEAR_LANE          : 1;	/*     26     r/w   0*/
		uint8_t INT_RX_INIT_RISE_ISR_CLEAR_LANE          : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_RX_CHG_ISR_CLEAR_LANE             : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_TX_CHG_ISR_CLEAR_LANE             : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_ISR_CLEAR_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_ISR_REG1_LANE_t;
__xdata __at( 0x2064 ) volatile PM_CTRL_INTERRUPT_ISR_REG1_LANE_t PM_CTRL_INTERRUPT_ISR_REG1_LANE;
#define reg_INT_TX_IDLE_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_IDLE_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE
#define reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_IVREF_CHG_ISR_CLEAR_LANE
#define reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_RX_INIT_RISE_ISR_CLEAR_LANE
#define reg_INT_PU_RX_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_RX_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_TX_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_TX_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_CHG_ISR_CLEAR_LANE

// 0x0068	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE		Speed Control Interrupt Clear Register 1
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
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE        : 1;	/*     30     r/w   0*/
		uint8_t INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE_t;
__xdata __at( 0x2068 ) volatile SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE_t SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE;
#define reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE  SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BF.INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE
#define reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE  SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BF.INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE

// 0x006c	PM_PLL_REG1_LANE		Power Control PLL Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t PWRON_SEQ_LANE                           : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DTX_CLK_OFF_LANE                         : 1;	/*      8     r/w   1*/
		uint8_t ANA_TRX_PLL_FBCK_SEL_LANE                : 1;	/*      9     r/w   1*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t ANA_PLL_LOCK_RD_LANE                     : 1;	/*     14       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t ANA_PU_PLL_FORCE_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t ANA_PU_PLL_DLY_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t ANA_PU_PLL_LANE                          : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_PLL_REG1_LANE_t;
__xdata __at( 0x206c ) volatile PM_PLL_REG1_LANE_t PM_PLL_REG1_LANE;
#define reg_PWRON_SEQ_LANE  PM_PLL_REG1_LANE.BF.PWRON_SEQ_LANE
#define reg_DTX_CLK_OFF_LANE  PM_PLL_REG1_LANE.BF.DTX_CLK_OFF_LANE
#define reg_ANA_TRX_PLL_FBCK_SEL_LANE  PM_PLL_REG1_LANE.BF.ANA_TRX_PLL_FBCK_SEL_LANE
#define reg_ANA_PLL_LOCK_RD_LANE  PM_PLL_REG1_LANE.BF.ANA_PLL_LOCK_RD_LANE
#define reg_ANA_PU_PLL_FORCE_LANE  PM_PLL_REG1_LANE.BF.ANA_PU_PLL_FORCE_LANE
#define reg_ANA_PU_PLL_DLY_LANE  PM_PLL_REG1_LANE.BF.ANA_PU_PLL_DLY_LANE
#define reg_ANA_PU_PLL_LANE  PM_PLL_REG1_LANE.BF.ANA_PU_PLL_LANE

// 0x0070	PM_PLL_REG2_LANE		Power Control PLL register 2
typedef union {
	struct {
		uint8_t REF1M_GEN_DIV_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'h18*/
		uint8_t RESERVED_8                               : 8;	/* [23:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:8]     r/w   0*/
		uint8_t ANA_PLL_CLK_READY_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PM_PLL_REG2_LANE_t;
__xdata __at( 0x2070 ) volatile PM_PLL_REG2_LANE_t PM_PLL_REG2_LANE;
#define reg_REF1M_GEN_DIV_LANE_7_0  PM_PLL_REG2_LANE.BF.REF1M_GEN_DIV_LANE_7_0
#define reg_ANA_PLL_CLK_READY_LANE  PM_PLL_REG2_LANE.BF.ANA_PLL_CLK_READY_LANE

// 0x0074	DTX_REG0		DTX Register 0
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_LANE_12_0_b0                : 8;	/* [12:0]     r/w 13'h0*/
		uint8_t INIT_TXFOFFS_LANE_12_0_b1                : 5;	/* [12:0]     r/w 13'h0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t LCPLL_SSC_DIS_LANE                       : 1;	/*     19     r/w   0*/
		uint8_t DPHER_CAL_MODE_LANE                      : 1;	/*     20     r/w   1*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESET_DTX_LANE                           : 1;	/*     23     r/w   1*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t SSC_ACC_FACTOR_LANE                      : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t TX_FOFF_INV_FORCE_LANE                   : 1;	/*     28     r/w   0*/
		uint8_t TX_FOFF_INV_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t SSC_DSPREAD_TX_LANE                      : 1;	/*     30     r/w   1*/
		uint8_t AUTO_TX_FOFFSET_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG0_t;
__xdata __at( 0x2074 ) volatile DTX_REG0_t DTX_REG0;
#define reg_INIT_TXFOFFS_LANE_12_0_b0  DTX_REG0.BF.INIT_TXFOFFS_LANE_12_0_b0
#define reg_INIT_TXFOFFS_LANE_12_0_b1  DTX_REG0.BF.INIT_TXFOFFS_LANE_12_0_b1
#define reg_LCPLL_SSC_DIS_LANE  DTX_REG0.BF.LCPLL_SSC_DIS_LANE
#define reg_DPHER_CAL_MODE_LANE  DTX_REG0.BF.DPHER_CAL_MODE_LANE
#define reg_RESET_DTX_LANE  DTX_REG0.BF.RESET_DTX_LANE
#define reg_SSC_ACC_FACTOR_LANE  DTX_REG0.BF.SSC_ACC_FACTOR_LANE
#define reg_TX_FOFF_INV_FORCE_LANE  DTX_REG0.BF.TX_FOFF_INV_FORCE_LANE
#define reg_TX_FOFF_INV_LANE  DTX_REG0.BF.TX_FOFF_INV_LANE
#define reg_SSC_DSPREAD_TX_LANE  DTX_REG0.BF.SSC_DSPREAD_TX_LANE
#define reg_AUTO_TX_FOFFSET_LANE  DTX_REG0.BF.AUTO_TX_FOFFSET_LANE

// 0x0078	DTX_REG1		DTX Register 1
typedef union {
	struct {
		uint8_t SSC_STEP_125PPM_LANE_3_0                 : 4;	/*  [3:0]     r/w   0*/
		uint8_t SSC_AMP_LANE_6_0_b0                      : 4;	/* [10:4]     r/w   0*/
		uint8_t SSC_AMP_LANE_6_0_b1                      : 3;	/* [10:4]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SSC_M_LANE_12_0_b0                       : 8;	/*[28:16]     r/w 13'h05cf*/
		uint8_t SSC_M_LANE_12_0_b1                       : 5;	/*[28:16]     r/w 13'h05cf*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG1_t;
__xdata __at( 0x2078 ) volatile DTX_REG1_t DTX_REG1;
#define reg_SSC_STEP_125PPM_LANE_3_0  DTX_REG1.BF.SSC_STEP_125PPM_LANE_3_0
#define reg_SSC_AMP_LANE_6_0_b0  DTX_REG1.BF.SSC_AMP_LANE_6_0_b0
#define reg_SSC_AMP_LANE_6_0_b1  DTX_REG1.BF.SSC_AMP_LANE_6_0_b1
#define reg_SSC_M_LANE_12_0_b0  DTX_REG1.BF.SSC_M_LANE_12_0_b0
#define reg_SSC_M_LANE_12_0_b1  DTX_REG1.BF.SSC_M_LANE_12_0_b1

// 0x007c	DTX_REG2		DTX Register 2
typedef union {
	struct {
		uint8_t LANE_ALIGN_POFFSET_LANE_6_0              : 7;	/*  [6:0]     r/w   0*/
		uint8_t LANE_ALIGN_POFFSET_FORCE_LANE            : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t REPEAT_MODE_EN_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t DTX_CLAMPING_TRIGGER_LANE                : 1;	/*     11       r   0*/
		uint8_t DTX_CLAMPING_TRIGGER_CLEAR_LANE          : 1;	/*     12     r/w   0*/
		uint8_t DTX_CLAMPING_EN_LANE                     : 1;	/*     13     r/w   1*/
		uint8_t DTX_CLAMPING_SEL_LANE_1_0                : 2;	/*[15:14]     r/w 2'h1*/
		uint8_t RX2TX_FREQ_TRAN_EN_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t DTX_FOFFSET_SEL_LANE                     : 1;	/*     18     r/w   1*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t DTX_FLOOP_STEP_SIZE_LANE_1_0             : 2;	/*[21:20]     r/w   0*/
		uint8_t RX2TX_RATIO_LANE_2_0_b0                  : 2;	/*[24:22]     r/w   0*/
		uint8_t RX2TX_RATIO_LANE_2_0_b1                  : 1;	/*[24:22]     r/w   0*/
		uint8_t RX2TX_RATIO_FORCE_LANE                   : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG2_t;
__xdata __at( 0x207c ) volatile DTX_REG2_t DTX_REG2;
#define reg_LANE_ALIGN_POFFSET_LANE_6_0  DTX_REG2.BF.LANE_ALIGN_POFFSET_LANE_6_0
#define reg_LANE_ALIGN_POFFSET_FORCE_LANE  DTX_REG2.BF.LANE_ALIGN_POFFSET_FORCE_LANE
#define reg_REPEAT_MODE_EN_LANE  DTX_REG2.BF.REPEAT_MODE_EN_LANE
#define reg_DTX_CLAMPING_TRIGGER_LANE  DTX_REG2.BF.DTX_CLAMPING_TRIGGER_LANE
#define reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE  DTX_REG2.BF.DTX_CLAMPING_TRIGGER_CLEAR_LANE
#define reg_DTX_CLAMPING_EN_LANE  DTX_REG2.BF.DTX_CLAMPING_EN_LANE
#define reg_DTX_CLAMPING_SEL_LANE_1_0  DTX_REG2.BF.DTX_CLAMPING_SEL_LANE_1_0
#define reg_RX2TX_FREQ_TRAN_EN_LANE  DTX_REG2.BF.RX2TX_FREQ_TRAN_EN_LANE
#define reg_DTX_FOFFSET_SEL_LANE  DTX_REG2.BF.DTX_FOFFSET_SEL_LANE
#define reg_DTX_FLOOP_STEP_SIZE_LANE_1_0  DTX_REG2.BF.DTX_FLOOP_STEP_SIZE_LANE_1_0
#define reg_RX2TX_RATIO_LANE_2_0_b0  DTX_REG2.BF.RX2TX_RATIO_LANE_2_0_b0
#define reg_RX2TX_RATIO_LANE_2_0_b1  DTX_REG2.BF.RX2TX_RATIO_LANE_2_0_b1
#define reg_RX2TX_RATIO_FORCE_LANE  DTX_REG2.BF.RX2TX_RATIO_FORCE_LANE

// 0x0080	DTX_REG3		DTX Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t ANA_TRX_PLL_TXCLK_SYNC_EN_LANE           : 1;	/*      6     r/w   0*/
		uint8_t ANA_TRX_PLL_TXCLK_SYNC_EN_FORCE_LANE     : 1;	/*      7     r/w   0*/
		uint8_t ANA_TX_TXCLK_SYNC_EN_FORCE_LANE          : 1;	/*      8     r/w   0*/
		uint8_t FORCE_COUPLE_MODE_EN_LOW_LANE            : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DTX_FLOOP_FOFFSET_LANE_10_0_b0           : 8;	/*[26:16]       r   0*/
		uint8_t DTX_FLOOP_FOFFSET_LANE_10_0_b1           : 3;	/*[26:16]       r   0*/
		uint8_t DTX_FLOOP_FOFFSET_RD_REQ_LANE            : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG3_t;
__xdata __at( 0x2080 ) volatile DTX_REG3_t DTX_REG3;
#define reg_ANA_TRX_PLL_TXCLK_SYNC_EN_LANE  DTX_REG3.BF.ANA_TRX_PLL_TXCLK_SYNC_EN_LANE
#define reg_ANA_TRX_PLL_TXCLK_SYNC_EN_FORCE_LANE  DTX_REG3.BF.ANA_TRX_PLL_TXCLK_SYNC_EN_FORCE_LANE
#define reg_ANA_TX_TXCLK_SYNC_EN_FORCE_LANE  DTX_REG3.BF.ANA_TX_TXCLK_SYNC_EN_FORCE_LANE
#define reg_FORCE_COUPLE_MODE_EN_LOW_LANE  DTX_REG3.BF.FORCE_COUPLE_MODE_EN_LOW_LANE
#define reg_DTX_FLOOP_FOFFSET_LANE_10_0_b0  DTX_REG3.BF.DTX_FLOOP_FOFFSET_LANE_10_0_b0
#define reg_DTX_FLOOP_FOFFSET_LANE_10_0_b1  DTX_REG3.BF.DTX_FLOOP_FOFFSET_LANE_10_0_b1
#define reg_DTX_FLOOP_FOFFSET_RD_REQ_LANE  DTX_REG3.BF.DTX_FLOOP_FOFFSET_RD_REQ_LANE

// 0x0084	MON_TOP		Test Bus Control Register
typedef union {
	struct {
		uint8_t TESTBUS_SEL_LO1_LANE_5_0                 : 6;	/*  [5:0]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t TESTBUS_SEL_LO0_LANE_5_0                 : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t TESTBUS_SEL_HI1_LANE_5_0                 : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t TESTBUS_SEL_HI0_LANE_5_0                 : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MON_TOP_t;
__xdata __at( 0x2084 ) volatile MON_TOP_t MON_TOP;
#define reg_TESTBUS_SEL_LO1_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_LO1_LANE_5_0
#define reg_TESTBUS_SEL_LO0_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_LO0_LANE_5_0
#define reg_TESTBUS_SEL_HI1_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_HI1_LANE_5_0
#define reg_TESTBUS_SEL_HI0_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_HI0_LANE_5_0

// 0x0088	LCPLL_TEMPC_CALL_REG0		LCPLL TEMPC Calibration Control 0
typedef union {
	struct {
		uint8_t LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0      : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0       : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t LCPLL_CAL_WAIT_TEMPC_5US_LANE_3_0        : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0    : 4;	/*[15:12]     r/w 4'ha*/
		uint8_t LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0    : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[25:20]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:20]     r/w   0*/
		uint8_t LCPLL_TEMPC_DAC_MAX_MIN_OVERWRITE        : 1;	/*     26     r/w   0*/
		uint8_t LCPLL_TEMPC_DIS_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t LCPLL_TODIG_TEMPC_POLARITY_LANE          : 1;	/*     28     r/w   0*/
		uint8_t LCPLL_TEMPC_STEP_LANE                    : 1;	/*     29     r/w 1'h0*/
		uint8_t LCPLL_TEMPC_CAL_DONE_LANE                : 1;	/*     30       r   0*/
		uint8_t LCPLL_TEMPC_CAL_EN_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LCPLL_TEMPC_CALL_REG0_t;
__xdata __at( 0x2088 ) volatile LCPLL_TEMPC_CALL_REG0_t LCPLL_TEMPC_CALL_REG0;
#define reg_LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0
#define reg_LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0
#define reg_LCPLL_CAL_WAIT_TEMPC_5US_LANE_3_0  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_CAL_WAIT_TEMPC_5US_LANE_3_0
#define reg_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0
#define reg_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0
#define reg_LCPLL_TEMPC_DAC_MAX_MIN_OVERWRITE  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_DAC_MAX_MIN_OVERWRITE
#define reg_LCPLL_TEMPC_DIS_LANE  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_DIS_LANE
#define reg_LCPLL_TODIG_TEMPC_POLARITY_LANE  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TODIG_TEMPC_POLARITY_LANE
#define reg_LCPLL_TEMPC_STEP_LANE  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_STEP_LANE
#define reg_LCPLL_TEMPC_CAL_DONE_LANE  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_CAL_DONE_LANE
#define reg_LCPLL_TEMPC_CAL_EN_LANE  LCPLL_TEMPC_CALL_REG0.BF.LCPLL_TEMPC_CAL_EN_LANE

// 0x008c	LCPLL_TEMPC_CAL_REG1		LCPLL TEMPC Calibration Control 1
typedef union {
	struct {
		uint8_t LCPLL_TEMPC_DAC_MAX_M2_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hfd*/
		uint8_t LCPLL_TEMPC_DAC_MAX_LANE_7_0             : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t LCPLL_TEMPC_DAC_MIN_P2_LANE_7_0          : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t LCPLL_TEMPC_DAC_MIN_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LCPLL_TEMPC_CAL_REG1_t;
__xdata __at( 0x208c ) volatile LCPLL_TEMPC_CAL_REG1_t LCPLL_TEMPC_CAL_REG1;
#define reg_LCPLL_TEMPC_DAC_MAX_M2_LANE_7_0  LCPLL_TEMPC_CAL_REG1.BF.LCPLL_TEMPC_DAC_MAX_M2_LANE_7_0
#define reg_LCPLL_TEMPC_DAC_MAX_LANE_7_0  LCPLL_TEMPC_CAL_REG1.BF.LCPLL_TEMPC_DAC_MAX_LANE_7_0
#define reg_LCPLL_TEMPC_DAC_MIN_P2_LANE_7_0  LCPLL_TEMPC_CAL_REG1.BF.LCPLL_TEMPC_DAC_MIN_P2_LANE_7_0
#define reg_LCPLL_TEMPC_DAC_MIN_LANE_7_0  LCPLL_TEMPC_CAL_REG1.BF.LCPLL_TEMPC_DAC_MIN_LANE_7_0

// 0x0090	LCPLL_TEMPC_CAL_REG2		LCPLL TEMPC Calibration Control 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [13:0]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:0]     r/w   0*/
		uint8_t LCPLL_TEMPC_EXT_EN_LANE                  : 1;	/*     14     r/w 1'b1*/
		uint8_t LCPLL_TEMPC_DAC_VALID_EXT_LANE           : 1;	/*     15     r/w 1'h0*/
		uint8_t LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0    : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0         : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LCPLL_TEMPC_CAL_REG2_t;
__xdata __at( 0x2090 ) volatile LCPLL_TEMPC_CAL_REG2_t LCPLL_TEMPC_CAL_REG2;
#define reg_LCPLL_TEMPC_EXT_EN_LANE  LCPLL_TEMPC_CAL_REG2.BF.LCPLL_TEMPC_EXT_EN_LANE
#define reg_LCPLL_TEMPC_DAC_VALID_EXT_LANE  LCPLL_TEMPC_CAL_REG2.BF.LCPLL_TEMPC_DAC_VALID_EXT_LANE
#define reg_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0  LCPLL_TEMPC_CAL_REG2.BF.LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0
#define reg_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0  LCPLL_TEMPC_CAL_REG2.BF.LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0
#define reg_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  LCPLL_TEMPC_CAL_REG2.BF.LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0

// 0x0094	LCPLL_TEMPC_CAL_REG3		LCPLL TEMPC Calibration Control 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [12:0]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:0]     r/w   0*/
		uint8_t LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0         : 2;	/*[14:13]       r 2'b0*/
		uint8_t LCPLL_TEMPC_DAC_VALID_LANE               : 1;	/*     15       r 1'h0*/
		uint8_t LCPLL_TEMPC_DAC_SEL_LANE_7_0             : 8;	/*[23:16]       r 8'h0*/
		uint8_t LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0        : 4;	/*[27:24]       r 4'h3*/
		uint8_t LCPLL_TEMPC_MUX_SEL_LANE_3_0             : 4;	/*[31:28]       r 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LCPLL_TEMPC_CAL_REG3_t;
__xdata __at( 0x2094 ) volatile LCPLL_TEMPC_CAL_REG3_t LCPLL_TEMPC_CAL_REG3;
#define reg_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0  LCPLL_TEMPC_CAL_REG3.BF.LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0
#define reg_LCPLL_TEMPC_DAC_VALID_LANE  LCPLL_TEMPC_CAL_REG3.BF.LCPLL_TEMPC_DAC_VALID_LANE
#define reg_LCPLL_TEMPC_DAC_SEL_LANE_7_0  LCPLL_TEMPC_CAL_REG3.BF.LCPLL_TEMPC_DAC_SEL_LANE_7_0
#define reg_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0  LCPLL_TEMPC_CAL_REG3.BF.LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0
#define reg_LCPLL_TEMPC_MUX_SEL_LANE_3_0  LCPLL_TEMPC_CAL_REG3.BF.LCPLL_TEMPC_MUX_SEL_LANE_3_0

// 0x0098	TX_EMPHASIS_CONTROL3		Tx Emphasis Control3
typedef union {
	struct {
		uint8_t TO_ANA_TX_FIR_UPDATE_LANE                : 1;	/*      0       r   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TO_ANA_TX_FIR_TAP_POL_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C5_LANE_5_0                : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C4_LANE_5_0                : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL3_t;
__xdata __at( 0x2098 ) volatile TX_EMPHASIS_CONTROL3_t TX_EMPHASIS_CONTROL3;
#define reg_TO_ANA_TX_FIR_UPDATE_LANE  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_UPDATE_LANE
#define reg_TO_ANA_TX_FIR_TAP_POL_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_TAP_POL_LANE_5_0
#define reg_TO_ANA_TX_FIR_C5_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_C5_LANE_5_0
#define reg_TO_ANA_TX_FIR_C4_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_C4_LANE_5_0

#endif
