#ifndef PHY_REG_C_TX_LANE_H
#define PHY_REG_C_TX_LANE_H



// 0x0000	PM_CTRL_TX_LANE_REG1_LANE		Power Control Tx Lane Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TXDETRX_SAMPLE_DONE_LANE                 : 1;	/*      1       r   0*/
		uint8_t TXDETRX_OUT_LANE                         : 1;	/*      2       r   0*/
		uint8_t BEACON_IN_FM_PIN_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t BEACON_EN_DELAY_LANE_1_0                 : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t ANA_BEACON_EN_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t ANA_BEACON_EN_FORCE_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t ANA_BEACON_EN_DLY_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t P2_STATE_LANE                            : 1;	/*      9       r   0*/
		uint8_t TXDETRX_SAMPLING_POINT_DBG_LANE          : 1;	/*     10     r/w   0*/
		uint8_t TXDETRX_SAMPLING_POINT_LANE_2_0          : 3;	/*[13:11]     r/w 3'h1*/
		uint8_t PIN_TXDETRX_VALID_LANE                   : 1;	/*     14     r/w   0*/
		uint8_t ANA_TXDETRX_START_LANE                   : 1;	/*     15     r/w   0*/
		uint8_t ANA_TXDETRX_EN_LANE                      : 1;	/*     16     r/w   0*/
		uint8_t TXDETRX_OUT_SRC_SEL_LANE                 : 1;	/*     17     r/w   0*/
		uint8_t PIN_PLL_READY_TX_LANE                    : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t PLL_READY_TX_LANE                        : 1;	/*     20       r   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t ANA_IDLE_SYNC_EN_FORCE_LANE              : 1;	/*     22     r/w   0*/
		uint8_t ANA_IDLE_SYNC_EN_LANE                    : 1;	/*     23     r/w   0*/
		uint8_t ANA_TX_IDLE_LANE                         : 1;	/*     24     r/w   1*/
		uint8_t TX_DRV_IDLE_CAL_DIS_LANE                 : 1;	/*     25     r/w   0*/
		uint8_t ANA_TX_IDLE_FORCE_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t BEACON_EN_DLY_NUM_LANE_2_0               : 3;	/*[29:27]     r/w 3'h5*/
		uint8_t ANA_PU_TX_LANE                           : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_TX_FORCE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG1_LANE_t;
__xdata __at( 0x2000 ) volatile PM_CTRL_TX_LANE_REG1_LANE_t PM_CTRL_TX_LANE_REG1_LANE;
#define reg_TXDETRX_SAMPLE_DONE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TXDETRX_SAMPLE_DONE_LANE
#define reg_TXDETRX_OUT_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TXDETRX_OUT_LANE
#define reg_BEACON_IN_FM_PIN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.BEACON_IN_FM_PIN_LANE
#define reg_BEACON_EN_DELAY_LANE_1_0  PM_CTRL_TX_LANE_REG1_LANE.BF.BEACON_EN_DELAY_LANE_1_0
#define reg_ANA_BEACON_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_BEACON_EN_LANE
#define reg_ANA_BEACON_EN_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_BEACON_EN_FORCE_LANE
#define reg_ANA_BEACON_EN_DLY_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_BEACON_EN_DLY_LANE
#define reg_P2_STATE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.P2_STATE_LANE
#define reg_TXDETRX_SAMPLING_POINT_DBG_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TXDETRX_SAMPLING_POINT_DBG_LANE
#define reg_TXDETRX_SAMPLING_POINT_LANE_2_0  PM_CTRL_TX_LANE_REG1_LANE.BF.TXDETRX_SAMPLING_POINT_LANE_2_0
#define reg_PIN_TXDETRX_VALID_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PIN_TXDETRX_VALID_LANE
#define reg_ANA_TXDETRX_START_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TXDETRX_START_LANE
#define reg_ANA_TXDETRX_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TXDETRX_EN_LANE
#define reg_TXDETRX_OUT_SRC_SEL_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TXDETRX_OUT_SRC_SEL_LANE
#define reg_PIN_PLL_READY_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PIN_PLL_READY_TX_LANE
#define reg_PLL_READY_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PLL_READY_TX_LANE
#define reg_ANA_IDLE_SYNC_EN_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_IDLE_SYNC_EN_FORCE_LANE
#define reg_ANA_IDLE_SYNC_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_IDLE_SYNC_EN_LANE
#define reg_ANA_TX_IDLE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_LANE
#define reg_TX_DRV_IDLE_CAL_DIS_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_DRV_IDLE_CAL_DIS_LANE
#define reg_ANA_TX_IDLE_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_FORCE_LANE
#define reg_BEACON_EN_DLY_NUM_LANE_2_0  PM_CTRL_TX_LANE_REG1_LANE.BF.BEACON_EN_DLY_NUM_LANE_2_0
#define reg_ANA_PU_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_LANE
#define reg_ANA_PU_TX_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_FORCE_LANE

// 0x0004	PM_CTRL_TX_LANE_REG2_LANE		Power Control Tx Lane Register 2
typedef union {
	struct {
		uint8_t CNT_INI_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h95*/
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
		uint8_t PIN_TX_ACJTAG_EN_RD_LANE                 : 1;	/*     23       r   0*/
		uint8_t PIN_TXDETRX_EN_RD_LANE                   : 1;	/*     24       r   0*/
		uint8_t PIN_TX_VCMHOLD_EN_RD_LANE                : 1;	/*     25       r   0*/
		uint8_t PIN_TX_IDLE_RD_LANE                      : 1;	/*     26       r   0*/
		uint8_t PIN_TX_IDLE_HIZ_RD_LANE                  : 1;	/*     27       r   0*/
		uint8_t PIN_PU_TX_RD_LANE                        : 1;	/*     28       r   0*/
		uint8_t PIN_PU_PLL_RD_LANE                       : 1;	/*     29       r   0*/
		uint8_t ANA_TX_LESS_CUR_IDLE_LANE                : 1;	/*     30     r/w   0*/
		uint8_t ANA_TX_IDLE_HIZ_EN_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG2_LANE_t;
__xdata __at( 0x2004 ) volatile PM_CTRL_TX_LANE_REG2_LANE_t PM_CTRL_TX_LANE_REG2_LANE;
#define reg_CNT_INI_LANE_7_0  PM_CTRL_TX_LANE_REG2_LANE.BF.CNT_INI_LANE_7_0
#define reg_ANA_PU_DRVREG_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_PU_DRVREG_LANE
#define reg_ANA_TX_TXCLK_SYNC_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_TXCLK_SYNC_EN_LANE
#define reg_PIN_TX_ACJTAG_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_ACJTAG_EN_RD_LANE
#define reg_PIN_TXDETRX_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TXDETRX_EN_RD_LANE
#define reg_PIN_TX_VCMHOLD_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_VCMHOLD_EN_RD_LANE
#define reg_PIN_TX_IDLE_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_RD_LANE
#define reg_PIN_TX_IDLE_HIZ_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_HIZ_RD_LANE
#define reg_PIN_PU_TX_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_TX_RD_LANE
#define reg_PIN_PU_PLL_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_PLL_RD_LANE
#define reg_ANA_TX_LESS_CUR_IDLE_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_LESS_CUR_IDLE_LANE
#define reg_ANA_TX_IDLE_HIZ_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_IDLE_HIZ_EN_LANE

// 0x0008	INPUT_TX_PIN_REG0_LANE		Input Interface Tx Lane Reg0
typedef union {
	struct {
		uint8_t PU_TX_FM_REG_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t PU_TX_LANE                               : 1;	/*      1     r/w   0*/
		uint8_t PU_PLL_FM_REG_LANE                       : 1;	/*      2     r/w   0*/
		uint8_t PU_PLL_LANE                              : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_FM_REG_LANE          : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/* [10:5]     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:5]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_FM_REG_LANE            : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[17:12]     r/w   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:12]     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_FM_REG_LANE      : 1;	/*     18     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_LANE_3_0         : 4;	/*[22:19]     r/w 4'h0*/
		uint8_t PAPTA_TRAIN_ENABLE_FM_REG_LANE           : 1;	/*     23     r/w   0*/
		uint8_t PAPTA_TRAIN_ENABLE_LANE                  : 1;	/*     24     r/w   0*/
		uint8_t POWER_STATE_P2_FM_REG_LANE               : 1;	/*     25     r/w   0*/
		uint8_t POWER_STATE_P2_LANE                      : 1;	/*     26     r/w   0*/
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
#define reg_REMOTE_CTRL_FIELD_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_LANE_3_0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_RESET_LANE_3_0
#define reg_PAPTA_TRAIN_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PAPTA_TRAIN_ENABLE_FM_REG_LANE
#define reg_PAPTA_TRAIN_ENABLE_LANE  INPUT_TX_PIN_REG0_LANE.BF.PAPTA_TRAIN_ENABLE_LANE
#define reg_POWER_STATE_P2_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.POWER_STATE_P2_FM_REG_LANE
#define reg_POWER_STATE_P2_LANE  INPUT_TX_PIN_REG0_LANE.BF.POWER_STATE_P2_LANE
#define reg_PHY_GEN_TX_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_FM_REG_LANE
#define reg_PHY_GEN_TX_LANE_3_0  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_LANE_3_0

// 0x000c	INPUT_TX_PIN_REG1_LANE		Input Interface Tx Lane Reg1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SSC_EN_FM_REG_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t SSC_EN_LANE                              : 1;	/*      2     r/w   0*/
		uint8_t TX_DEEMPH_FM_REG_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t TX_DEEMPH_LANE_1_0                       : 2;	/*  [5:4]     r/w 2'h0*/
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
#define reg_TX_DEEMPH_FM_REG_LANE  INPUT_TX_PIN_REG1_LANE.BF.TX_DEEMPH_FM_REG_LANE
#define reg_TX_DEEMPH_LANE_1_0  INPUT_TX_PIN_REG1_LANE.BF.TX_DEEMPH_LANE_1_0
#define reg_GPI_FM_REG_LANE  INPUT_TX_PIN_REG1_LANE.BF.GPI_FM_REG_LANE
#define reg_GPI_LANE_7_0  INPUT_TX_PIN_REG1_LANE.BF.GPI_LANE_7_0

// 0x0010	INPUT_TX_PIN_REG2_LANE		Input Interface Tx Lane Reg2
typedef union {
	struct {
		uint8_t LOCAL_CTRL_FIELD_READY_FM_REG_LANE       : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_LANE              : 1;	/*      1     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE   : 1;	/*      2     r/w   0*/
		uint8_t TX_TRAIN_FRAME_LOCK_ENABLE_LANE          : 1;	/*      3     r/w   0*/
		uint8_t REPEAT_MODE_EN_FM_REG_LANE               : 1;	/*      4     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*      6     r/w   0*/
		uint8_t TX_ACJTAG_EN_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t TX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      8     r/w   0*/
		uint8_t POWER_STATE_VALID_LANE                   : 1;	/*      9     r/w   0*/
		uint8_t POWER_STATE_VALID_FM_REG_LANE            : 1;	/*     10     r/w   0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_FM_REG_LANE         : 1;	/*     11     r/w   0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b0        : 4;	/*[27:12]     r/w 16'h0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b1        : 8;	/*[27:12]     r/w 16'h0*/
		uint8_t ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b2        : 4;	/*[27:12]     r/w 16'h0*/
		uint8_t TX_MARGIN_FM_REG_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t TX_MARGIN_LANE_2_0                       : 3;	/*[31:29]     r/w 3'h0*/
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
#define reg_REPEAT_MODE_EN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.REPEAT_MODE_EN_FM_REG_LANE
#define reg_TX_TRAIN_ENABLE_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_ENABLE_LANE
#define reg_TX_TRAIN_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_ENABLE_FM_REG_LANE
#define reg_TX_ACJTAG_EN_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_ACJTAG_EN_LANE
#define reg_TX_ACJTAG_EN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_ACJTAG_EN_FM_REG_LANE
#define reg_POWER_STATE_VALID_LANE  INPUT_TX_PIN_REG2_LANE.BF.POWER_STATE_VALID_LANE
#define reg_POWER_STATE_VALID_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.POWER_STATE_VALID_FM_REG_LANE
#define reg_ANA_TRX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b0  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b0
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b1  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b1
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b2  INPUT_TX_PIN_REG2_LANE.BF.ANA_TRX_ANA_RSVD_OUT_LANE_15_0_b2
#define reg_TX_MARGIN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_MARGIN_FM_REG_LANE
#define reg_TX_MARGIN_LANE_2_0  INPUT_TX_PIN_REG2_LANE.BF.TX_MARGIN_LANE_2_0
#define reg_ANA_TRX_ANA_RSVD_OUT_LANE_15_0  INPUT_TX_PIN_REG2_LANE.WT.W1

// 0x0014	INPUT_TX_PIN_REG3_LANE		Input Interface Tx Lane Reg3
typedef union {
	struct {
		uint8_t RX_INIT_RD_LANE                          : 1;	/*      0       r   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t LANE_DISABLE_FM_REG_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t LANE_DISABLE_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t TX_ACJTAG_IN_FM_REG_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t TX_ACJTAG_IN_LANE                        : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_FM_REG_LANE           : 1;	/*      9     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_LANE                  : 1;	/*     10     r/w   0*/
		uint8_t TXDETRX_EN_FM_REG_LANE                   : 1;	/*     11     r/w   0*/
		uint8_t TXDETRX_EN_LANE                          : 1;	/*     12     r/w   0*/
		uint8_t TX_VCMHOLD_EN_FM_REG_LANE                : 1;	/*     13     r/w   0*/
		uint8_t TX_VCMHOLD_EN_LANE                       : 1;	/*     14     r/w   0*/
		uint8_t TX_IDLE_HIZ_FM_REG_LANE                  : 1;	/*     15     r/w   0*/
		uint8_t TX_IDLE_HIZ_LANE                         : 1;	/*     16     r/w   0*/
		uint8_t TX_IDLE_FM_REG_LANE                      : 1;	/*     17     r/w   0*/
		uint8_t TX_IDLE_LANE                             : 1;	/*     18     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_FM_REG_LANE    : 1;	/*     19     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_LANE           : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_FM_REG_LANE      : 1;	/*     21     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_LANE             : 1;	/*     22     r/w   0*/
		uint8_t REPEAT_MODE_EN_LANE                      : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t SNRZ_MODE_FM_REG_LANE                    : 1;	/*     26     r/w   0*/
		uint8_t SNRZ_MODE_LANE                           : 1;	/*     27     r/w   0*/
		uint8_t TX_SWING_FM_REG_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t TX_SWING_LANE                            : 1;	/*     29     r/w   0*/
		uint8_t BACKCHANNEL_WINDOW_FM_REG_LANE           : 1;	/*     30     r/w   0*/
		uint8_t BACKCHANNEL_WINDOW_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG3_LANE_t;
__xdata __at( 0x2014 ) volatile INPUT_TX_PIN_REG3_LANE_t INPUT_TX_PIN_REG3_LANE;
#define reg_RX_INIT_RD_LANE  INPUT_TX_PIN_REG3_LANE.BF.RX_INIT_RD_LANE
#define reg_LANE_DISABLE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.LANE_DISABLE_FM_REG_LANE
#define reg_LANE_DISABLE_LANE  INPUT_TX_PIN_REG3_LANE.BF.LANE_DISABLE_LANE
#define reg_TX_ACJTAG_IN_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_ACJTAG_IN_FM_REG_LANE
#define reg_TX_ACJTAG_IN_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_ACJTAG_IN_LANE
#define reg_ANA_TX_TXDETRX_OUT_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.ANA_TX_TXDETRX_OUT_FM_REG_LANE
#define reg_ANA_TX_TXDETRX_OUT_LANE  INPUT_TX_PIN_REG3_LANE.BF.ANA_TX_TXDETRX_OUT_LANE
#define reg_TXDETRX_EN_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TXDETRX_EN_FM_REG_LANE
#define reg_TXDETRX_EN_LANE  INPUT_TX_PIN_REG3_LANE.BF.TXDETRX_EN_LANE
#define reg_TX_VCMHOLD_EN_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_VCMHOLD_EN_FM_REG_LANE
#define reg_TX_VCMHOLD_EN_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_VCMHOLD_EN_LANE
#define reg_TX_IDLE_HIZ_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_HIZ_FM_REG_LANE
#define reg_TX_IDLE_HIZ_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_HIZ_LANE
#define reg_TX_IDLE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_FM_REG_LANE
#define reg_TX_IDLE_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_VALID_LANE
#define reg_REPEAT_MODE_EN_LANE  INPUT_TX_PIN_REG3_LANE.BF.REPEAT_MODE_EN_LANE
#define reg_SNRZ_MODE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.SNRZ_MODE_FM_REG_LANE
#define reg_SNRZ_MODE_LANE  INPUT_TX_PIN_REG3_LANE.BF.SNRZ_MODE_LANE
#define reg_TX_SWING_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_SWING_FM_REG_LANE
#define reg_TX_SWING_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_SWING_LANE
#define reg_BACKCHANNEL_WINDOW_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.BACKCHANNEL_WINDOW_FM_REG_LANE
#define reg_BACKCHANNEL_WINDOW_LANE  INPUT_TX_PIN_REG3_LANE.BF.BACKCHANNEL_WINDOW_LANE

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
		uint8_t DPHY_ANA_LANE_DISABLE_ISR_LANE           : 1;	/*     17     r/w   0*/
		uint8_t INT_TX_IDLE_HIZ_CHG_ISR_LANE             : 1;	/*     18     r/w   0*/
		uint8_t INT_PU_SQ_CHG_ISR_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_ISR_LANE                 : 1;	/*     20     r/w   0*/
		uint8_t INT_TX_VCMHOLD_EN_CHG_ISR_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_ISR_LANE            : 1;	/*     22     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_ISR_LANE              : 1;	/*     23     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_ISR_LANE               : 1;	/*     24     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_ISR_LANE              : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_ISR_LANE                : 1;	/*     26     r/w   0*/
		uint8_t INT_RX_INIT_RISE_ISR_LANE                : 1;	/*     27     r/w   0*/
		uint8_t INT_POWER_STATE_VALID_RISE_ISR_LANE      : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_RX_CHG_ISR_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_TX_CHG_ISR_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_ISR_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_REG1_LANE_t;
__xdata __at( 0x2018 ) volatile PM_CTRL_INTERRUPT_REG1_LANE_t PM_CTRL_INTERRUPT_REG1_LANE;
#define reg_DPHY_ANA_LANE_DISABLE_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.DPHY_ANA_LANE_DISABLE_ISR_LANE
#define reg_INT_TX_IDLE_HIZ_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_IDLE_HIZ_CHG_ISR_LANE
#define reg_INT_PU_SQ_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_SQ_CHG_ISR_LANE
#define reg_INT_TX_IDLE_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_IDLE_CHG_ISR_LANE
#define reg_INT_TX_VCMHOLD_EN_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_VCMHOLD_EN_CHG_ISR_LANE
#define reg_INT_BEACON_TX_EN_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_BEACON_TX_EN_CHG_ISR_LANE
#define reg_INT_TXDETRX_EN_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TXDETRX_EN_CHG_ISR_LANE
#define reg_INT_PU_PLL_OR_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_OR_CHG_ISR_LANE
#define reg_INT_REFCLK_DIS_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_REFCLK_DIS_CHG_ISR_LANE
#define reg_INT_PU_IVREF_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_IVREF_CHG_ISR_LANE
#define reg_INT_RX_INIT_RISE_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_RX_INIT_RISE_ISR_LANE
#define reg_INT_POWER_STATE_VALID_RISE_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_POWER_STATE_VALID_RISE_ISR_LANE
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
		uint8_t DPHY_ANA_LANE_DISABLE_MASK_LANE          : 1;	/*     17     r/w   0*/
		uint8_t INT_TX_IDLE_HIZ_CHG_MASK_LANE            : 1;	/*     18     r/w   1*/
		uint8_t INT_PU_SQ_CHG_MASK_LANE                  : 1;	/*     19     r/w   1*/
		uint8_t INT_TX_IDLE_CHG_MASK_LANE                : 1;	/*     20     r/w   1*/
		uint8_t INT_TX_VCMHOLD_EN_CHG_MASK_LANE          : 1;	/*     21     r/w   1*/
		uint8_t INT_BEACON_TX_EN_CHG_MASK_LANE           : 1;	/*     22     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_MASK_LANE             : 1;	/*     23     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_MASK_LANE              : 1;	/*     24     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_MASK_LANE             : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_MASK_LANE               : 1;	/*     26     r/w   0*/
		uint8_t INT_RX_INIT_RISE_MASK_LANE               : 1;	/*     27     r/w   0*/
		uint8_t INT_POWER_STATE_VALID_RISE_MASK_LANE     : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_RX_CHG_MASK_LANE                  : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_TX_CHG_MASK_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_MASK_LANE                 : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_REG2_t;
__xdata __at( 0x201c ) volatile PM_CTRL_INTERRUPT_REG2_t PM_CTRL_INTERRUPT_REG2;
#define reg_DPHY_ANA_LANE_DISABLE_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.DPHY_ANA_LANE_DISABLE_MASK_LANE
#define reg_INT_TX_IDLE_HIZ_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_IDLE_HIZ_CHG_MASK_LANE
#define reg_INT_PU_SQ_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_SQ_CHG_MASK_LANE
#define reg_INT_TX_IDLE_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_IDLE_CHG_MASK_LANE
#define reg_INT_TX_VCMHOLD_EN_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_VCMHOLD_EN_CHG_MASK_LANE
#define reg_INT_BEACON_TX_EN_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_BEACON_TX_EN_CHG_MASK_LANE
#define reg_INT_TXDETRX_EN_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TXDETRX_EN_CHG_MASK_LANE
#define reg_INT_PU_PLL_OR_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_OR_CHG_MASK_LANE
#define reg_INT_REFCLK_DIS_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_REFCLK_DIS_CHG_MASK_LANE
#define reg_INT_PU_IVREF_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_IVREF_CHG_MASK_LANE
#define reg_INT_RX_INIT_RISE_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_RX_INIT_RISE_MASK_LANE
#define reg_INT_POWER_STATE_VALID_RISE_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_POWER_STATE_VALID_RISE_MASK_LANE
#define reg_INT_PU_RX_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_RX_CHG_MASK_LANE
#define reg_INT_PU_TX_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_TX_CHG_MASK_LANE
#define reg_INT_PU_PLL_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_CHG_MASK_LANE

// 0x0020	CLKGEN_TX_LANE_REG1_LANE		Clock Gen Tx Lane Reg1
typedef union {
	struct {
		uint8_t ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE    : 1;	/*      0     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_IN_DIG_LANE           : 1;	/*      1     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE        : 1;	/*      2     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S1_LANE               : 1;	/*      3     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE        : 1;	/*      4     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S2_LANE               : 1;	/*      5     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE        : 1;	/*      6     r/w   0*/
		uint8_t ANA_TX_TXCLK_ALIGN_S3_LANE               : 1;	/*      7     r/w   0*/
		uint8_t TX_CK_SEL_DIG_LANE                       : 1;	/*      8     r/w   0*/
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
		uint8_t TXDCLK_4X_EN_LANE                        : 1;	/*     30     r/w   0*/
		uint8_t TXDCLK_NT_EN_LANE                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKGEN_TX_LANE_REG1_LANE_t;
__xdata __at( 0x2020 ) volatile CLKGEN_TX_LANE_REG1_LANE_t CLKGEN_TX_LANE_REG1_LANE;
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S1_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S2_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S3_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S3_LANE
#define reg_TX_CK_SEL_DIG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.TX_CK_SEL_DIG_LANE
#define reg_RST_RX2TX_LPBK_TX_CLK_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.RST_RX2TX_LPBK_TX_CLK_LANE
#define reg_RX2TX_LPBK_TX_CLK_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.RX2TX_LPBK_TX_CLK_EN_LANE
#define reg_PT_TX_CLK_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.PT_TX_CLK_EN_LANE
#define reg_TXDCLK_AH_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.TXDCLK_AH_LANE
#define reg_ANA_TXCLK_INV_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TXCLK_INV_LANE
#define reg_REFCLK_ON_DCLK_DIS_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.REFCLK_ON_DCLK_DIS_LANE
#define reg_PIN_TX_CLK_ON_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.PIN_TX_CLK_ON_LANE
#define reg_TXDCLK_4X_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.TXDCLK_4X_EN_LANE
#define reg_TXDCLK_NT_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.TXDCLK_NT_EN_LANE

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
		uint8_t TXDATA_LATENCY_REDUCE_EN_LANE            : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
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
#define reg_TXDATA_LATENCY_REDUCE_EN_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_LATENCY_REDUCE_EN_LANE
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
		uint8_t TXSPEED_DIV_LANE_2_0                     : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t REF1M_GEN_DIV_LANE_7_0                   : 8;	/* [15:8]     r/w 8'h18*/
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
#define reg_TXSPEED_DIV_LANE_2_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXSPEED_DIV_LANE_2_0
#define reg_REF1M_GEN_DIV_LANE_7_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.REF1M_GEN_DIV_LANE_7_0
#define reg_PIN_PHY_GEN_TX_RD_LANE_3_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_PHY_GEN_TX_RD_LANE_3_0

// 0x0034	TX_SYSTEM_LANE		
typedef union {
	struct {
		uint8_t LANE_DISABLE_RD_LANE                     : 1;	/*      0       r   0*/
		uint8_t RESERVED_1                               : 7;	/* [30:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [30:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [30:1]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/* [30:1]     r/w   0*/
		uint8_t TX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE_t;
__xdata __at( 0x2034 ) volatile TX_SYSTEM_LANE_t TX_SYSTEM_LANE;
#define reg_LANE_DISABLE_RD_LANE  TX_SYSTEM_LANE.BF.LANE_DISABLE_RD_LANE
#define reg_TX_SEL_BITS_LANE  TX_SYSTEM_LANE.BF.TX_SEL_BITS_LANE

// 0x003c	INPUT_TX_PIN_REG4_LANE		Input Interface Tx Lane Reg4
typedef union {
	struct {
		uint8_t TX_COEFF_LANE_17_0_b0                    : 8;	/* [17:0]     r/w 18'h0*/
		uint8_t TX_COEFF_LANE_17_0_b1                    : 8;	/* [17:0]     r/w 18'h0*/
		uint8_t TX_COEFF_LANE_17_0_b2                    : 2;	/* [17:0]     r/w 18'h0*/
		uint8_t TX_COEFF_FM_REG_LANE                     : 1;	/*     18     r/w   0*/
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
	uint32_t VAL;
} INPUT_TX_PIN_REG4_LANE_t;
__xdata __at( 0x203c ) volatile INPUT_TX_PIN_REG4_LANE_t INPUT_TX_PIN_REG4_LANE;
#define reg_TX_COEFF_LANE_17_0_b0  INPUT_TX_PIN_REG4_LANE.BF.TX_COEFF_LANE_17_0_b0
#define reg_TX_COEFF_LANE_17_0_b1  INPUT_TX_PIN_REG4_LANE.BF.TX_COEFF_LANE_17_0_b1
#define reg_TX_COEFF_LANE_17_0_b2  INPUT_TX_PIN_REG4_LANE.BF.TX_COEFF_LANE_17_0_b2
#define reg_TX_COEFF_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.TX_COEFF_FM_REG_LANE

// 0x0040	TX_CALIBRATION_LANE		tx_calibration_lane
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CALIBRATION_LANE_t;
__xdata __at( 0x2040 ) volatile TX_CALIBRATION_LANE_t TX_CALIBRATION_LANE;

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

// 0x0048	INPUT_TX_PIN_REG5_LANE		Input Interface Tx Lane Reg5
typedef union {
	struct {
		uint8_t REMOTE_STATUS_FIELD_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
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
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG5_LANE_t;
__xdata __at( 0x2048 ) volatile INPUT_TX_PIN_REG5_LANE_t INPUT_TX_PIN_REG5_LANE;
#define reg_REMOTE_STATUS_FIELD_LANE_5_0  INPUT_TX_PIN_REG5_LANE.BF.REMOTE_STATUS_FIELD_LANE_5_0
#define reg_REMOTE_CTRL_FIELD_LANE_5_0  INPUT_TX_PIN_REG5_LANE.BF.REMOTE_CTRL_FIELD_LANE_5_0

// 0x004c	ANA_TX_RSVD_REG0		Analog TX Reserved Register0
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
} ANA_TX_RSVD_REG0_t;
__xdata __at( 0x204c ) volatile ANA_TX_RSVD_REG0_t ANA_TX_RSVD_REG0;
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0  ANA_TX_RSVD_REG0.BF.ANA_TRX_ANA_RSVD_IN_LANE_15_0_b0
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1  ANA_TX_RSVD_REG0.BF.ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1
#define reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0  ANA_TX_RSVD_REG0.WT.W0

// 0x0050	PM_CTRL_INTERRUPT_ISR_REG1_LANE		Power Control Interrupt Clear Register 1
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
		uint8_t DPHY_ANA_LANE_DISABLE_ISR_CLEAR_LANE     : 1;	/*     17     r/w   0*/
		uint8_t INT_TX_IDLE_HIZ_CHG_ISR_CLEAR_LANE       : 1;	/*     18     r/w   0*/
		uint8_t INT_PU_SQ_CHG_ISR_CLEAR_LANE             : 1;	/*     19     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_ISR_CLEAR_LANE           : 1;	/*     20     r/w   0*/
		uint8_t INT_TX_VCMHOLD_EN_CHG_ISR_CLEAR_LANE     : 1;	/*     21     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE      : 1;	/*     22     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE        : 1;	/*     23     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE         : 1;	/*     24     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE        : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_ISR_CLEAR_LANE          : 1;	/*     26     r/w   0*/
		uint8_t INT_RX_INIT_RISE_ISR_CLEAR_LANE          : 1;	/*     27     r/w   0*/
		uint8_t INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_RX_CHG_ISR_CLEAR_LANE             : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_TX_CHG_ISR_CLEAR_LANE             : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_ISR_CLEAR_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_ISR_REG1_LANE_t;
__xdata __at( 0x2050 ) volatile PM_CTRL_INTERRUPT_ISR_REG1_LANE_t PM_CTRL_INTERRUPT_ISR_REG1_LANE;
#define reg_DPHY_ANA_LANE_DISABLE_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.DPHY_ANA_LANE_DISABLE_ISR_CLEAR_LANE
#define reg_INT_TX_IDLE_HIZ_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_IDLE_HIZ_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_SQ_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_SQ_CHG_ISR_CLEAR_LANE
#define reg_INT_TX_IDLE_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_IDLE_CHG_ISR_CLEAR_LANE
#define reg_INT_TX_VCMHOLD_EN_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_VCMHOLD_EN_CHG_ISR_CLEAR_LANE
#define reg_INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE
#define reg_INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE
#define reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_IVREF_CHG_ISR_CLEAR_LANE
#define reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_RX_INIT_RISE_ISR_CLEAR_LANE
#define reg_INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE
#define reg_INT_PU_RX_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_RX_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_TX_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_TX_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_CHG_ISR_CLEAR_LANE

// 0x0054	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE		Speed Control Interrupt Clear Register 1
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
__xdata __at( 0x2054 ) volatile SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE_t SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE;
#define reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE  SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BF.INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE
#define reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE  SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BF.INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE

// 0x0058	ANALOG_TX_REALTIME_REG_1		Analog TX Realtime Control Registers 1
typedef union {
	struct {
		uint8_t ANA_TX_REALTIME_EM_CLK_LANE              : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t ANA_TX_REALTIME_EM_CLK_DLY_LANE          : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ANA_TX_REALTIME_EM_EN_LANE               : 1;	/*     16     r/w   0*/
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
	uint32_t VAL;
} ANALOG_TX_REALTIME_REG_1_t;
__xdata __at( 0x2058 ) volatile ANALOG_TX_REALTIME_REG_1_t ANALOG_TX_REALTIME_REG_1;
#define reg_ANA_TX_REALTIME_EM_CLK_LANE  ANALOG_TX_REALTIME_REG_1.BF.ANA_TX_REALTIME_EM_CLK_LANE
#define reg_ANA_TX_REALTIME_EM_CLK_DLY_LANE  ANALOG_TX_REALTIME_REG_1.BF.ANA_TX_REALTIME_EM_CLK_DLY_LANE
#define reg_ANA_TX_REALTIME_EM_EN_LANE  ANALOG_TX_REALTIME_REG_1.BF.ANA_TX_REALTIME_EM_EN_LANE

// 0x005c	MON_TOP		Test Bus Control Register
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
__xdata __at( 0x205c ) volatile MON_TOP_t MON_TOP;
#define reg_TESTBUS_SEL_LO1_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_LO1_LANE_5_0
#define reg_TESTBUS_SEL_LO0_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_LO0_LANE_5_0
#define reg_TESTBUS_SEL_HI1_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_HI1_LANE_5_0
#define reg_TESTBUS_SEL_HI0_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_HI0_LANE_5_0

#endif
