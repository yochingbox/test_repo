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
		uint8_t ANA_PU_DRVREG_LANE                       : 1;	/*     20     r/w   1*/
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
		uint8_t ANA_TX_IDLE_HIZ_EN_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG2_LANE_t;
__xdata __at( 0x2004 ) volatile PM_CTRL_TX_LANE_REG2_LANE_t PM_CTRL_TX_LANE_REG2_LANE;
#define reg_ANA_PU_DRVREG_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_PU_DRVREG_LANE
#define reg_ANA_TX_TXCLK_SYNC_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_TXCLK_SYNC_EN_LANE
#define reg_PIN_TX_IDLE_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_RD_LANE
#define reg_PIN_PU_TX_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_TX_RD_LANE
#define reg_PIN_PU_PLL_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_PLL_RD_LANE
#define reg_ANA_TX_IDLE_HIZ_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_IDLE_HIZ_EN_LANE

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
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t PHY_GEN_TX_FM_REG_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t PHY_GEN_TX_LANE_3_0                      : 4;	/*[31:28]     r/w 4'h9*/
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
#define reg_PHY_GEN_TX_LANE_3_0  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_LANE_3_0

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
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
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
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
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
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
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
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t TXD_MSB_LSB_SWAP_LANE                    : 1;	/*     17     r/w   0*/
		uint8_t TXD_GRAY_EN_LANE                         : 1;	/*     18     r/w   0*/
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
#define reg_TXD_MSB_LSB_SWAP_LANE  TX_SPEED_CONVERT_LANE.BF.TXD_MSB_LSB_SWAP_LANE
#define reg_TXD_GRAY_EN_LANE  TX_SPEED_CONVERT_LANE.BF.TXD_GRAY_EN_LANE
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
		uint8_t PIN_PHY_GEN_TX_RD_LANE_3_0               : 4;	/*[31:28]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_TX_LANE_REG1_LANE_t;
__xdata __at( 0x2030 ) volatile SPD_CTRL_TX_LANE_REG1_LANE_t SPD_CTRL_TX_LANE_REG1_LANE;
#define reg_PIN_PHY_GEN_TX_RD_LANE_3_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_PHY_GEN_TX_RD_LANE_3_0

// 0x0034	TX_SYSTEM_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:0]     r/w   0*/
		uint8_t TX_PAM2_EN_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t TX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE_t;
__xdata __at( 0x2034 ) volatile TX_SYSTEM_LANE_t TX_SYSTEM_LANE;
#define reg_TX_PAM2_EN_LANE  TX_SYSTEM_LANE.BF.TX_PAM2_EN_LANE
#define reg_TX_SEL_BITS_LANE  TX_SYSTEM_LANE.BF.TX_SEL_BITS_LANE

// 0x003c	INPUT_TX_PIN_REG4_LANE		Input Interface Tx Lane Reg4
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
		uint8_t ANA_TRX_TXDCC_DN_FM_REG_LANE             : 1;	/*     19     r/w   0*/
		uint8_t ANA_TRX_TXDCC_DN_LANE                    : 1;	/*     20     r/w   0*/
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
	uint32_t VAL;
} INPUT_TX_PIN_REG4_LANE_t;
__xdata __at( 0x203c ) volatile INPUT_TX_PIN_REG4_LANE_t INPUT_TX_PIN_REG4_LANE;
#define reg_ANA_TRX_TXDCC_DN_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.ANA_TRX_TXDCC_DN_FM_REG_LANE
#define reg_ANA_TRX_TXDCC_DN_LANE  INPUT_TX_PIN_REG4_LANE.BF.ANA_TRX_TXDCC_DN_LANE

// 0x0040	TX_CALIBRATION_LANE		tx_calibration_lane
typedef union {
	struct {
		uint8_t ANA_TRX_TXDCC_DN_RD_LANE                 : 1;	/*      0       r   0*/
		uint8_t TRX_TXDCC_DN_REQ_LANE                    : 1;	/*      1     r/w   1*/
		uint8_t RESERVED_2                               : 6;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CALIBRATION_LANE_t;
__xdata __at( 0x2040 ) volatile TX_CALIBRATION_LANE_t TX_CALIBRATION_LANE;
#define reg_ANA_TRX_TXDCC_DN_RD_LANE  TX_CALIBRATION_LANE.BF.ANA_TRX_TXDCC_DN_RD_LANE
#define reg_TRX_TXDCC_DN_REQ_LANE  TX_CALIBRATION_LANE.BF.TRX_TXDCC_DN_REQ_LANE

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

// 0x004c	_FIELDNAME__LANE		_field description_
typedef union {
	struct {
		uint8_t ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'hff00*/
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
} _FIELDNAME__LANE_t;
__xdata __at( 0x204c ) volatile _FIELDNAME__LANE_t _FIELDNAME__LANE;
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0  _FIELDNAME__LANE.BF.ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1  _FIELDNAME__LANE.BF.ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0  _FIELDNAME__LANE.WT.W0

// 0x0050	TX_EMPHASIS_CONTROL0		Tx Emphasis Control0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_EM_PEAK_EN_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t TX_EM_PEAK_CTRL_LANE_1_0                 : 2;	/*  [4:3]     r/w   0*/
		uint8_t TX_EM_PRE_EN_FORCE_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t TX_EM_PRE_EN_LANE                        : 1;	/*      6     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_FORCE_LANE                : 1;	/*      7     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_LANE_4_0                  : 5;	/* [12:8]     r/w   0*/
		uint8_t TX_EM_POST_EN_FORCE_LANE                 : 1;	/*     13     r/w   0*/
		uint8_t TX_EM_POST_EN_LANE                       : 1;	/*     14     r/w   0*/
		uint8_t TX_EM_POST_CTRL_FORCE_LANE               : 1;	/*     15     r/w   0*/
		uint8_t TX_EM_POST_CTRL_LANE_4_0                 : 5;	/*[20:16]     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_FORCE_LANE               : 1;	/*     21     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_LANE_2_0_b0              : 2;	/*[24:22]     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_LANE_2_0_b1              : 1;	/*[24:22]     r/w   0*/
		uint8_t TX_EM_PRE2_EN_FORCE_LANE                 : 1;	/*     25     r/w   0*/
		uint8_t TX_EM_PRE2_EN_LANE                       : 1;	/*     26     r/w   0*/
		uint8_t TX_EM_PRE2_POLARITY_LANE                 : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t TX_VREF_TXDRV_SEL_LANE_2_0               : 3;	/*[31:29]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL0_t;
__xdata __at( 0x2050 ) volatile TX_EMPHASIS_CONTROL0_t TX_EMPHASIS_CONTROL0;
#define reg_TX_EM_PEAK_EN_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PEAK_EN_LANE
#define reg_TX_EM_PEAK_CTRL_LANE_1_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PEAK_CTRL_LANE_1_0
#define reg_TX_EM_PRE_EN_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_EN_FORCE_LANE
#define reg_TX_EM_PRE_EN_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_EN_LANE
#define reg_TX_EM_PRE_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_CTRL_FORCE_LANE
#define reg_TX_EM_PRE_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_CTRL_LANE_4_0
#define reg_TX_EM_POST_EN_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_EN_FORCE_LANE
#define reg_TX_EM_POST_EN_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_EN_LANE
#define reg_TX_EM_POST_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_CTRL_FORCE_LANE
#define reg_TX_EM_POST_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_CTRL_LANE_4_0
#define reg_TX_EM_PRE2_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_FORCE_LANE
#define reg_TX_EM_PRE2_CTRL_LANE_2_0_b0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_LANE_2_0_b0
#define reg_TX_EM_PRE2_CTRL_LANE_2_0_b1  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_LANE_2_0_b1
#define reg_TX_EM_PRE2_EN_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_EN_FORCE_LANE
#define reg_TX_EM_PRE2_EN_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_EN_LANE
#define reg_TX_EM_PRE2_POLARITY_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_POLARITY_LANE
#define reg_TX_VREF_TXDRV_SEL_LANE_2_0  TX_EMPHASIS_CONTROL0.BF.TX_VREF_TXDRV_SEL_LANE_2_0

// 0x0054	TX_EMPHASIS_CONTROL1		Tx Emphasis Control1
typedef union {
	struct {
		uint8_t TX_EM_BK_CTRL_FORCE_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t TX_EM_BK_CTRL_LANE_4_0                   : 5;	/*  [5:1]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL1_t;
__xdata __at( 0x2054 ) volatile TX_EMPHASIS_CONTROL1_t TX_EMPHASIS_CONTROL1;
#define reg_TX_EM_BK_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_EM_BK_CTRL_FORCE_LANE
#define reg_TX_EM_BK_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL1.BF.TX_EM_BK_CTRL_LANE_4_0

// 0x0058	TX_EMPHASIS_CONTROL2		Tx Emphasis Control2
typedef union {
	struct {
		uint8_t TO_ANA_TX_EM_PEAK_CTRL_LANE_1_0          : 2;	/*  [1:0]       r   0*/
		uint8_t TO_ANA_TX_EM_POST_CTRL_LANE_4_0          : 5;	/*  [6:2]       r   0*/
		uint8_t TO_ANA_TX_EM_PRE_CTRL_LANE_4_0_b0        : 1;	/* [11:7]       r   0*/
		uint8_t TO_ANA_TX_EM_PRE_CTRL_LANE_4_0_b1        : 4;	/* [11:7]       r   0*/
		uint8_t TO_ANA_TX_EM_PRE2_CTRL_LANE_2_0          : 3;	/*[14:12]       r   0*/
		uint8_t TO_ANA_TX_EM_PEAK_EN_LANE                : 1;	/*     15       r   0*/
		uint8_t TO_ANA_TX_EM_POST_EN_LANE                : 1;	/*     16       r   0*/
		uint8_t TO_ANA_TX_EM_PRE_EN_LANE                 : 1;	/*     17       r   0*/
		uint8_t TO_ANA_TX_EM_PRE2_EN_LANE                : 1;	/*     18       r   0*/
		uint8_t TO_ANA_TX_EM_BK_CTRL_LANE_4_0            : 5;	/*[23:19]       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL2_t;
__xdata __at( 0x2058 ) volatile TX_EMPHASIS_CONTROL2_t TX_EMPHASIS_CONTROL2;
#define reg_TO_ANA_TX_EM_PEAK_CTRL_LANE_1_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PEAK_CTRL_LANE_1_0
#define reg_TO_ANA_TX_EM_POST_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_POST_CTRL_LANE_4_0
#define reg_TO_ANA_TX_EM_PRE_CTRL_LANE_4_0_b0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PRE_CTRL_LANE_4_0_b0
#define reg_TO_ANA_TX_EM_PRE_CTRL_LANE_4_0_b1  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PRE_CTRL_LANE_4_0_b1
#define reg_TO_ANA_TX_EM_PRE2_CTRL_LANE_2_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PRE2_CTRL_LANE_2_0
#define reg_TO_ANA_TX_EM_PEAK_EN_LANE  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PEAK_EN_LANE
#define reg_TO_ANA_TX_EM_POST_EN_LANE  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_POST_EN_LANE
#define reg_TO_ANA_TX_EM_PRE_EN_LANE  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PRE_EN_LANE
#define reg_TO_ANA_TX_EM_PRE2_EN_LANE  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_PRE2_EN_LANE
#define reg_TO_ANA_TX_EM_BK_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_EM_BK_CTRL_LANE_4_0

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

#endif
