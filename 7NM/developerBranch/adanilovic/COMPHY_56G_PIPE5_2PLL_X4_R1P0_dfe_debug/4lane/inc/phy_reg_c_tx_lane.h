#ifndef PHY_REG_C_TX_LANE_H
#define PHY_REG_C_TX_LANE_H



// 0x0000	PM_CTRL_TX_LANE_REG1_LANE		Power Control Tx Lane Register 1
typedef union {
	struct {
		uint8_t LANE_ID_RD_LANE_1_0                      : 2;	/*  [1:0]       r   0*/
		uint8_t REFCLK_SEL_FM_REG_LANE                   : 1;	/*      2     r/w   0*/
		uint8_t REFCLK_SEL_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t PIN_REFCLK_SEL_RD_LANE                   : 1;	/*      4       r   0*/
		uint8_t REFCLK_DIS_FM_PM_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_MAIN_CLK_RST_LANE                     : 1;	/*      8     r/w   0*/
		uint8_t TX_MAIN_CLK_EN_LANE                      : 1;	/*      9     r/w   1*/
		uint8_t TX_MAIN_CLK_ON_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t TX_CLK_EN_LANE                           : 1;	/*     11     r/w   0*/
		uint8_t ANA_TX_TXCLK_SYNC_EN_LANE                : 1;	/*     12     r/w   0*/
		uint8_t ANA_TX_TXCLK_SYNC_EN_FORCE_LANE          : 1;	/*     13     r/w   0*/
		uint8_t PLL_READY_TX_PROT_EN_LANE                : 1;	/*     14     r/w   1*/
		uint8_t PLL_READY_TX_PROT_CLEAR_LANE             : 1;	/*     15     r/w   0*/
		uint8_t ANA_IDLE_SYNC_EN_LANE                    : 1;	/*     16     r/w   0*/
		uint8_t ANA_IDLE_SYNC_EN_FORCE_LANE              : 1;	/*     17     r/w   0*/
		uint8_t PIN_PLL_READY_TX_LANE                    : 1;	/*     18     r/w   0*/
		uint8_t TXDATA_PRE_CODE_MSB_LSB_SWAP_LANE        : 1;	/*     19     r/w   0*/
		uint8_t PLL_READY_TX_LANE                        : 1;	/*     20       r   0*/
		uint8_t SFT_RST_NO_REG_TX_RD_LANE                : 1;	/*     21       r   0*/
		uint8_t ANA_TX_CLK500M_DIG_EN_LANE               : 1;	/*     22     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_RD_LANE               : 1;	/*     23       r   0*/
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
__xdata __at( 0x4400 ) volatile PM_CTRL_TX_LANE_REG1_LANE_t PM_CTRL_TX_LANE_REG1_LANE;
#define reg_LANE_ID_RD_LANE_1_0  PM_CTRL_TX_LANE_REG1_LANE.BF.LANE_ID_RD_LANE_1_0
#define reg_REFCLK_SEL_FM_REG_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.REFCLK_SEL_FM_REG_LANE
#define reg_REFCLK_SEL_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.REFCLK_SEL_LANE
#define reg_PIN_REFCLK_SEL_RD_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PIN_REFCLK_SEL_RD_LANE
#define reg_REFCLK_DIS_FM_PM_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.REFCLK_DIS_FM_PM_LANE
#define reg_TX_MAIN_CLK_RST_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_MAIN_CLK_RST_LANE
#define reg_TX_MAIN_CLK_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_MAIN_CLK_EN_LANE
#define reg_TX_MAIN_CLK_ON_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_MAIN_CLK_ON_LANE
#define reg_TX_CLK_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_CLK_EN_LANE
#define reg_ANA_TX_TXCLK_SYNC_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_SYNC_EN_LANE
#define reg_ANA_TX_TXCLK_SYNC_EN_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_SYNC_EN_FORCE_LANE
#define reg_PLL_READY_TX_PROT_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PLL_READY_TX_PROT_EN_LANE
#define reg_PLL_READY_TX_PROT_CLEAR_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PLL_READY_TX_PROT_CLEAR_LANE
#define reg_ANA_IDLE_SYNC_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_IDLE_SYNC_EN_LANE
#define reg_ANA_IDLE_SYNC_EN_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_IDLE_SYNC_EN_FORCE_LANE
#define reg_PIN_PLL_READY_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PIN_PLL_READY_TX_LANE
#define reg_TXDATA_PRE_CODE_MSB_LSB_SWAP_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TXDATA_PRE_CODE_MSB_LSB_SWAP_LANE
#define reg_PLL_READY_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.PLL_READY_TX_LANE
#define reg_SFT_RST_NO_REG_TX_RD_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.SFT_RST_NO_REG_TX_RD_LANE
#define reg_ANA_TX_CLK500M_DIG_EN_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_CLK500M_DIG_EN_LANE
#define reg_ANA_TX_TXDETRX_OUT_RD_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_TXDETRX_OUT_RD_LANE
#define reg_ANA_TX_IDLE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_LANE
#define reg_TX_DRV_IDLE_CAL_DIS_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_DRV_IDLE_CAL_DIS_LANE
#define reg_ANA_TX_IDLE_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_FORCE_LANE
#define reg_BEACON_EN_DLY_NUM_LANE_2_0  PM_CTRL_TX_LANE_REG1_LANE.BF.BEACON_EN_DLY_NUM_LANE_2_0
#define reg_ANA_PU_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_LANE
#define reg_ANA_PU_TX_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_FORCE_LANE

// 0x0004	PM_CTRL_TX_LANE_REG2_LANE		Power Control Tx Lane Register 2
typedef union {
	struct {
		uint8_t PIN_SPD_CFG_RD_LANE_3_0                  : 4;	/*  [3:0]       r 4'h0*/
		uint8_t TXDETRX_SAMPLE_DONE_LANE                 : 1;	/*      4       r   0*/
		uint8_t TXDETRX_OUT_LANE                         : 1;	/*      5       r   0*/
		uint8_t BEACON_EN_DELAY_LANE_1_0                 : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t BEACON_IN_FM_PIN_LANE                    : 1;	/*      8     r/w   0*/
		uint8_t ANA_BEACON_EN_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t ANA_BEACON_EN_FORCE_LANE                 : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t P2_STATE_LANE                            : 1;	/*     12       r   0*/
		uint8_t TXDETRX_SAMPLING_POINT_LANE_2_0          : 3;	/*[15:13]     r/w 3'h1*/
		uint8_t TXDETRX_SAMPLING_POINT_DBG_LANE          : 1;	/*     16     r/w   0*/
		uint8_t PIN_TXDETRX_VALID_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t ANA_TXDETRX_START_LANE                   : 1;	/*     18     r/w   0*/
		uint8_t ANA_TXDETRX_EN_LANE                      : 1;	/*     19     r/w   0*/
		uint8_t TXDETRX_OUT_SRC_SEL_LANE                 : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t LANE_DISABLE_RD_LANE                     : 1;	/*     22       r   0*/
		uint8_t PIN_TX_ACJTAG_EN_RD_LANE                 : 1;	/*     23       r   0*/
		uint8_t PIN_TXDETRX_EN_RD_LANE                   : 1;	/*     24       r   0*/
		uint8_t PIN_TX_VCMHOLD_EN_RD_LANE                : 1;	/*     25       r   0*/
		uint8_t PIN_TX_IDLE_RD_LANE                      : 1;	/*     26       r   0*/
		uint8_t PIN_TX_IDLE_HIZ_RD_LANE                  : 1;	/*     27       r   0*/
		uint8_t PIN_PU_TX_RD_LANE                        : 1;	/*     28       r   0*/
		uint8_t PIN_PU_PLL_RD_LANE                       : 1;	/*     29       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t ANA_TX_HIZ_EN_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG2_LANE_t;
__xdata __at( 0x4404 ) volatile PM_CTRL_TX_LANE_REG2_LANE_t PM_CTRL_TX_LANE_REG2_LANE;
#define reg_PIN_SPD_CFG_RD_LANE_3_0  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_SPD_CFG_RD_LANE_3_0
#define reg_TXDETRX_SAMPLE_DONE_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.TXDETRX_SAMPLE_DONE_LANE
#define reg_TXDETRX_OUT_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.TXDETRX_OUT_LANE
#define reg_BEACON_EN_DELAY_LANE_1_0  PM_CTRL_TX_LANE_REG2_LANE.BF.BEACON_EN_DELAY_LANE_1_0
#define reg_BEACON_IN_FM_PIN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.BEACON_IN_FM_PIN_LANE
#define reg_ANA_BEACON_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_BEACON_EN_LANE
#define reg_ANA_BEACON_EN_FORCE_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_BEACON_EN_FORCE_LANE
#define reg_P2_STATE_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.P2_STATE_LANE
#define reg_TXDETRX_SAMPLING_POINT_LANE_2_0  PM_CTRL_TX_LANE_REG2_LANE.BF.TXDETRX_SAMPLING_POINT_LANE_2_0
#define reg_TXDETRX_SAMPLING_POINT_DBG_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.TXDETRX_SAMPLING_POINT_DBG_LANE
#define reg_PIN_TXDETRX_VALID_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TXDETRX_VALID_LANE
#define reg_ANA_TXDETRX_START_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TXDETRX_START_LANE
#define reg_ANA_TXDETRX_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TXDETRX_EN_LANE
#define reg_TXDETRX_OUT_SRC_SEL_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.TXDETRX_OUT_SRC_SEL_LANE
#define reg_LANE_DISABLE_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.LANE_DISABLE_RD_LANE
#define reg_PIN_TX_ACJTAG_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_ACJTAG_EN_RD_LANE
#define reg_PIN_TXDETRX_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TXDETRX_EN_RD_LANE
#define reg_PIN_TX_VCMHOLD_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_VCMHOLD_EN_RD_LANE
#define reg_PIN_TX_IDLE_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_RD_LANE
#define reg_PIN_TX_IDLE_HIZ_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_HIZ_RD_LANE
#define reg_PIN_PU_TX_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_TX_RD_LANE
#define reg_PIN_PU_PLL_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_PU_PLL_RD_LANE
#define reg_ANA_TX_HIZ_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_HIZ_EN_LANE

// 0x0008	INPUT_TX_PIN_REG0_LANE		Input Interface Tx Lane Reg0
typedef union {
	struct {
		uint8_t REMOTE_STATUS_FIELD_FM_REG_LANE          : 1;	/*      0     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_LANE_5_0             : 6;	/*  [6:1]     r/w 6'h0*/
		uint8_t PU_TX_FM_REG_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_FM_REG_LANE            : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_LANE_5_0               : 6;	/* [14:9]     r/w 6'h0*/
		uint8_t PU_TX_LANE                               : 1;	/*     15     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_FM_REG_LANE      : 1;	/*     16     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_RESET_LANE_3_0         : 4;	/*[20:17]     r/w 4'h0*/
		uint8_t PU_PLL_FM_REG_LANE                       : 1;	/*     21     r/w   0*/
		uint8_t PU_PLL_LANE                              : 1;	/*     22     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_FM_REG_LANE    : 1;	/*     23     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_RESET_LANE           : 1;	/*     24     r/w   0*/
		uint8_t PHY_GEN_TX_FM_REG_LANE                   : 1;	/*     25     r/w   0*/
		uint8_t PHY_GEN_TX_LANE_5_0                      : 6;	/*[31:26]     r/w 6'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG0_LANE_t;
__xdata __at( 0x4408 ) volatile INPUT_TX_PIN_REG0_LANE_t INPUT_TX_PIN_REG0_LANE;
#define reg_REMOTE_STATUS_FIELD_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_LANE_5_0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_LANE_5_0
#define reg_PU_TX_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_TX_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_LANE_5_0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_LANE_5_0
#define reg_PU_TX_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_TX_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_RESET_LANE_3_0  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_CTRL_FIELD_RESET_LANE_3_0
#define reg_PU_PLL_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_PLL_FM_REG_LANE
#define reg_PU_PLL_LANE  INPUT_TX_PIN_REG0_LANE.BF.PU_PLL_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_RESET_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_RESET_LANE  INPUT_TX_PIN_REG0_LANE.BF.REMOTE_STATUS_FIELD_RESET_LANE
#define reg_PHY_GEN_TX_FM_REG_LANE  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_FM_REG_LANE
#define reg_PHY_GEN_TX_LANE_5_0  INPUT_TX_PIN_REG0_LANE.BF.PHY_GEN_TX_LANE_5_0

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
__xdata __at( 0x440c ) volatile INPUT_TX_PIN_REG1_LANE_t INPUT_TX_PIN_REG1_LANE;
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
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*      6     r/w   0*/
		uint8_t TX_ACJTAG_EN_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t TX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      8     r/w   0*/
		uint8_t POWER_STATE_VALID_LANE                   : 1;	/*      9     r/w   0*/
		uint8_t POWER_STATE_VALID_FM_REG_LANE            : 1;	/*     10     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_FM_REG_LANE          : 1;	/*     11     r/w   0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0         : 4;	/*[27:12]     r/w 16'h0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1         : 8;	/*[27:12]     r/w 16'h0*/
		uint8_t ANA_TX_ANA_RSVD_OUT_LANE_15_0_b2         : 4;	/*[27:12]     r/w 16'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t REPEAT_MODE_EN_FM_REG_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_TX_PIN_REG2_LANE_t;
__xdata __at( 0x4410 ) volatile INPUT_TX_PIN_REG2_LANE_t INPUT_TX_PIN_REG2_LANE;
#define reg_LOCAL_CTRL_FIELD_READY_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.LOCAL_CTRL_FIELD_READY_FM_REG_LANE
#define reg_LOCAL_CTRL_FIELD_READY_LANE  INPUT_TX_PIN_REG2_LANE.BF.LOCAL_CTRL_FIELD_READY_LANE
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_FRAME_LOCK_ENABLE_FM_REG_LANE
#define reg_TX_TRAIN_FRAME_LOCK_ENABLE_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_FRAME_LOCK_ENABLE_LANE
#define reg_TX_TRAIN_ENABLE_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_ENABLE_LANE
#define reg_TX_TRAIN_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_TRAIN_ENABLE_FM_REG_LANE
#define reg_TX_ACJTAG_EN_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_ACJTAG_EN_LANE
#define reg_TX_ACJTAG_EN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.TX_ACJTAG_EN_FM_REG_LANE
#define reg_POWER_STATE_VALID_LANE  INPUT_TX_PIN_REG2_LANE.BF.POWER_STATE_VALID_LANE
#define reg_POWER_STATE_VALID_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.POWER_STATE_VALID_FM_REG_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.ANA_TX_ANA_RSVD_OUT_FM_REG_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0  INPUT_TX_PIN_REG2_LANE.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1  INPUT_TX_PIN_REG2_LANE.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b1
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0_b2  INPUT_TX_PIN_REG2_LANE.BF.ANA_TX_ANA_RSVD_OUT_LANE_15_0_b2
#define reg_REPEAT_MODE_EN_FM_REG_LANE  INPUT_TX_PIN_REG2_LANE.BF.REPEAT_MODE_EN_FM_REG_LANE
#define reg_ANA_TX_ANA_RSVD_OUT_LANE_15_0  INPUT_TX_PIN_REG2_LANE.WT.W1

// 0x0014	INPUT_TX_PIN_REG3_LANE		Input Interface Tx Lane Reg3
typedef union {
	struct {
		uint8_t REMOTE_STATUS_FIELD_PAT_FM_REG_LANE      : 1;	/*      0     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_PAT_LANE_1_0         : 2;	/*  [2:1]     r/w   0*/
		uint8_t LANE_DISABLE_FM_REG_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t LANE_DISABLE_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t TX_ACJTAG_IN_FM_REG_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t TX_ACJTAG_IN_LANE                        : 1;	/*      6     r/w   0*/
		uint8_t RESET_CORE_FM_PIPE_TX_LANE               : 1;	/*      7     r/w   0*/
		uint8_t PHY_GEN_MAX_TX_FM_REG_LANE               : 1;	/*      8     r/w   0*/
		uint8_t PHY_GEN_MAX_TX_LANE_5_0                  : 6;	/* [14:9]     r/w 6'h9*/
		uint8_t TX_IDLE_HIZ_FM_REG_LANE                  : 1;	/*     15     r/w   0*/
		uint8_t TX_IDLE_HIZ_LANE                         : 1;	/*     16     r/w   0*/
		uint8_t TX_IDLE_FM_REG_LANE                      : 1;	/*     17     r/w   0*/
		uint8_t TX_IDLE_LANE                             : 1;	/*     18     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_FM_REG_LANE    : 1;	/*     19     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_LANE           : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_FM_REG_LANE      : 1;	/*     21     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_LANE             : 1;	/*     22     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_FM_REG_LANE        : 1;	/*     23     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_PAT_LANE_1_0           : 2;	/*[25:24]     r/w   0*/
		uint8_t SNRZ_MODE_FM_REG_LANE                    : 1;	/*     26     r/w   0*/
		uint8_t SNRZ_MODE_LANE                           : 1;	/*     27     r/w   0*/
		uint8_t TXDCLK_NT_SEL_FM_REG_LANE                : 1;	/*     28     r/w   0*/
		uint8_t TXDCLK_NT_SEL_LANE_2_0                   : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG3_LANE_t;
__xdata __at( 0x4414 ) volatile INPUT_TX_PIN_REG3_LANE_t INPUT_TX_PIN_REG3_LANE;
#define reg_REMOTE_STATUS_FIELD_PAT_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_PAT_LANE_1_0  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_PAT_LANE_1_0
#define reg_LANE_DISABLE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.LANE_DISABLE_FM_REG_LANE
#define reg_LANE_DISABLE_LANE  INPUT_TX_PIN_REG3_LANE.BF.LANE_DISABLE_LANE
#define reg_TX_ACJTAG_IN_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_ACJTAG_IN_FM_REG_LANE
#define reg_TX_ACJTAG_IN_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_ACJTAG_IN_LANE
#define reg_RESET_CORE_FM_PIPE_TX_LANE  INPUT_TX_PIN_REG3_LANE.BF.RESET_CORE_FM_PIPE_TX_LANE
#define reg_PHY_GEN_MAX_TX_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.PHY_GEN_MAX_TX_FM_REG_LANE
#define reg_PHY_GEN_MAX_TX_LANE_5_0  INPUT_TX_PIN_REG3_LANE.BF.PHY_GEN_MAX_TX_LANE_5_0
#define reg_TX_IDLE_HIZ_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_HIZ_FM_REG_LANE
#define reg_TX_IDLE_HIZ_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_HIZ_LANE
#define reg_TX_IDLE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_FM_REG_LANE
#define reg_TX_IDLE_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_STATUS_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_VALID_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_VALID_LANE
#define reg_REMOTE_CTRL_FIELD_PAT_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_PAT_FM_REG_LANE
#define reg_REMOTE_CTRL_FIELD_PAT_LANE_1_0  INPUT_TX_PIN_REG3_LANE.BF.REMOTE_CTRL_FIELD_PAT_LANE_1_0
#define reg_SNRZ_MODE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.SNRZ_MODE_FM_REG_LANE
#define reg_SNRZ_MODE_LANE  INPUT_TX_PIN_REG3_LANE.BF.SNRZ_MODE_LANE
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
		uint8_t INT_POWER_STATE_VALID_CHG_RISING_ISR_LANE : 1;	/*      5     r/w   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_CHG_FALLING_ISR_LANE : 1;	/*      6     r/w   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_CHG_RISING_ISR_LANE : 1;	/*      7     r/w   0*/
		uint8_t INT_PU_SQ_CHG_ISR_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t INT_TX_IDLE_HIZ_CHG_ISR_LANE             : 1;	/*      9     r/w   0*/
		uint8_t INT_TX_VCMHOLD_EN_CHG_ISR_LANE           : 1;	/*     10     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_FALLING_ISR_LANE    : 1;	/*     11     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_RISING_ISR_LANE     : 1;	/*     12     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_FALLING_ISR_LANE      : 1;	/*     13     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_RISING_ISR_LANE       : 1;	/*     14     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_FALLING_ISR_LANE         : 1;	/*     15     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_RISING_ISR_LANE          : 1;	/*     16     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_ISR_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_FALLING_ISR_LANE       : 1;	/*     18     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_RISING_ISR_LANE        : 1;	/*     19     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_FALLING_ISR_LANE      : 1;	/*     20     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_RISING_ISR_LANE       : 1;	/*     21     r/w   0*/
		uint8_t INT_RX_INIT_CHG_FALLING_ISR_LANE         : 1;	/*     22     r/w   0*/
		uint8_t INT_RX_INIT_CHG_RISING_ISR_LANE          : 1;	/*     23     r/w   0*/
		uint8_t TX_SFT_RST_CHG_FALLING_ISR_LANE          : 1;	/*     24     r/w   0*/
		uint8_t TX_SFT_RST_CHG_RISING_ISR_LANE           : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_RX_CHG_FALLING_ISR_LANE           : 1;	/*     26     r/w   0*/
		uint8_t INT_PU_RX_CHG_RISING_ISR_LANE            : 1;	/*     27     r/w   0*/
		uint8_t INT_PU_TX_CHG_FALLING_ISR_LANE           : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_TX_CHG_RISING_ISR_LANE            : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_PLL_CHG_FALLING_ISR_LANE          : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_RISING_ISR_LANE           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_REG1_LANE_t;
__xdata __at( 0x4418 ) volatile PM_CTRL_INTERRUPT_REG1_LANE_t PM_CTRL_INTERRUPT_REG1_LANE;
#define reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_POWER_STATE_VALID_CHG_RISING_ISR_LANE
#define reg_DPHY_ANA_LANE_DISABLE_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.DPHY_ANA_LANE_DISABLE_CHG_FALLING_ISR_LANE
#define reg_DPHY_ANA_LANE_DISABLE_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.DPHY_ANA_LANE_DISABLE_CHG_RISING_ISR_LANE
#define reg_INT_PU_SQ_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_SQ_CHG_ISR_LANE
#define reg_INT_TX_IDLE_HIZ_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_IDLE_HIZ_CHG_ISR_LANE
#define reg_INT_TX_VCMHOLD_EN_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_VCMHOLD_EN_CHG_ISR_LANE
#define reg_INT_BEACON_TX_EN_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_BEACON_TX_EN_CHG_FALLING_ISR_LANE
#define reg_INT_BEACON_TX_EN_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_BEACON_TX_EN_CHG_RISING_ISR_LANE
#define reg_INT_TXDETRX_EN_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TXDETRX_EN_CHG_FALLING_ISR_LANE
#define reg_INT_TXDETRX_EN_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TXDETRX_EN_CHG_RISING_ISR_LANE
#define reg_INT_TX_IDLE_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_IDLE_CHG_FALLING_ISR_LANE
#define reg_INT_TX_IDLE_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_TX_IDLE_CHG_RISING_ISR_LANE
#define reg_INT_PU_IVREF_CHG_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_IVREF_CHG_ISR_LANE
#define reg_INT_PU_PLL_OR_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_OR_CHG_FALLING_ISR_LANE
#define reg_INT_PU_PLL_OR_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_OR_CHG_RISING_ISR_LANE
#define reg_INT_REFCLK_DIS_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_REFCLK_DIS_CHG_FALLING_ISR_LANE
#define reg_INT_REFCLK_DIS_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_REFCLK_DIS_CHG_RISING_ISR_LANE
#define reg_INT_RX_INIT_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_RX_INIT_CHG_FALLING_ISR_LANE
#define reg_INT_RX_INIT_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_RX_INIT_CHG_RISING_ISR_LANE
#define reg_TX_SFT_RST_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.TX_SFT_RST_CHG_FALLING_ISR_LANE
#define reg_TX_SFT_RST_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.TX_SFT_RST_CHG_RISING_ISR_LANE
#define reg_INT_PU_RX_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_RX_CHG_FALLING_ISR_LANE
#define reg_INT_PU_RX_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_RX_CHG_RISING_ISR_LANE
#define reg_INT_PU_TX_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_TX_CHG_FALLING_ISR_LANE
#define reg_INT_PU_TX_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_TX_CHG_RISING_ISR_LANE
#define reg_INT_PU_PLL_CHG_FALLING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_CHG_FALLING_ISR_LANE
#define reg_INT_PU_PLL_CHG_RISING_ISR_LANE  PM_CTRL_INTERRUPT_REG1_LANE.BF.INT_PU_PLL_CHG_RISING_ISR_LANE

// 0x001c	PM_CTRL_INTERRUPT_REG2		Power Control Interrupt Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t INT_POWER_STATE_VALID_CHG_RISING_MASK_LANE : 1;	/*      5     r/w   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_CHG_FALLING_MASK_LANE : 1;	/*      6     r/w   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_CHG_RISING_MASK_LANE : 1;	/*      7     r/w   0*/
		uint8_t INT_PU_SQ_CHG_MASK_LANE                  : 1;	/*      8     r/w   1*/
		uint8_t INT_TX_IDLE_HIZ_CHG_MASK_LANE            : 1;	/*      9     r/w   1*/
		uint8_t INT_TX_VCMHOLD_EN_CHG_MASK_LANE          : 1;	/*     10     r/w   1*/
		uint8_t INT_BEACON_TX_EN_CHG_FALLING_MASK_LANE   : 1;	/*     11     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_RISING_MASK_LANE    : 1;	/*     12     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_FALLING_MASK_LANE     : 1;	/*     13     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_RISING_MASK_LANE      : 1;	/*     14     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_FALLING_MASK_LANE        : 1;	/*     15     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_RISING_MASK_LANE         : 1;	/*     16     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_MASK_LANE               : 1;	/*     17     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_FALLING_MASK_LANE      : 1;	/*     18     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_RISING_MASK_LANE       : 1;	/*     19     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_FALLING_MASK_LANE     : 1;	/*     20     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_RISING_MASK_LANE      : 1;	/*     21     r/w   0*/
		uint8_t INT_RX_INIT_CHG_FALLING_MASK_LANE        : 1;	/*     22     r/w   0*/
		uint8_t INT_RX_INIT_CHG_RISING_MASK_LANE         : 1;	/*     23     r/w   0*/
		uint8_t TX_SFT_RST_CHG_FALLING_MASK_LANE         : 1;	/*     24     r/w   0*/
		uint8_t TX_SFT_RST_CHG_RISING_MASK_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_RX_CHG_FALLING_MASK_LANE          : 1;	/*     26     r/w   0*/
		uint8_t INT_PU_RX_CHG_RISING_MASK_LANE           : 1;	/*     27     r/w   0*/
		uint8_t INT_PU_TX_CHG_FALLING_MASK_LANE          : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_TX_CHG_RISING_MASK_LANE           : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_PLL_CHG_FALLING_MASK_LANE         : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_RISING_MASK_LANE          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_REG2_t;
__xdata __at( 0x441c ) volatile PM_CTRL_INTERRUPT_REG2_t PM_CTRL_INTERRUPT_REG2;
#define reg_INT_POWER_STATE_VALID_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_POWER_STATE_VALID_CHG_RISING_MASK_LANE
#define reg_DPHY_ANA_LANE_DISABLE_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.DPHY_ANA_LANE_DISABLE_CHG_FALLING_MASK_LANE
#define reg_DPHY_ANA_LANE_DISABLE_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.DPHY_ANA_LANE_DISABLE_CHG_RISING_MASK_LANE
#define reg_INT_PU_SQ_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_SQ_CHG_MASK_LANE
#define reg_INT_TX_IDLE_HIZ_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_IDLE_HIZ_CHG_MASK_LANE
#define reg_INT_TX_VCMHOLD_EN_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_VCMHOLD_EN_CHG_MASK_LANE
#define reg_INT_BEACON_TX_EN_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_BEACON_TX_EN_CHG_FALLING_MASK_LANE
#define reg_INT_BEACON_TX_EN_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_BEACON_TX_EN_CHG_RISING_MASK_LANE
#define reg_INT_TXDETRX_EN_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TXDETRX_EN_CHG_FALLING_MASK_LANE
#define reg_INT_TXDETRX_EN_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TXDETRX_EN_CHG_RISING_MASK_LANE
#define reg_INT_TX_IDLE_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_IDLE_CHG_FALLING_MASK_LANE
#define reg_INT_TX_IDLE_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_TX_IDLE_CHG_RISING_MASK_LANE
#define reg_INT_PU_IVREF_CHG_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_IVREF_CHG_MASK_LANE
#define reg_INT_PU_PLL_OR_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_OR_CHG_FALLING_MASK_LANE
#define reg_INT_PU_PLL_OR_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_OR_CHG_RISING_MASK_LANE
#define reg_INT_REFCLK_DIS_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_REFCLK_DIS_CHG_FALLING_MASK_LANE
#define reg_INT_REFCLK_DIS_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_REFCLK_DIS_CHG_RISING_MASK_LANE
#define reg_INT_RX_INIT_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_RX_INIT_CHG_FALLING_MASK_LANE
#define reg_INT_RX_INIT_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_RX_INIT_CHG_RISING_MASK_LANE
#define reg_TX_SFT_RST_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.TX_SFT_RST_CHG_FALLING_MASK_LANE
#define reg_TX_SFT_RST_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.TX_SFT_RST_CHG_RISING_MASK_LANE
#define reg_INT_PU_RX_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_RX_CHG_FALLING_MASK_LANE
#define reg_INT_PU_RX_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_RX_CHG_RISING_MASK_LANE
#define reg_INT_PU_TX_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_TX_CHG_FALLING_MASK_LANE
#define reg_INT_PU_TX_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_TX_CHG_RISING_MASK_LANE
#define reg_INT_PU_PLL_CHG_FALLING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_CHG_FALLING_MASK_LANE
#define reg_INT_PU_PLL_CHG_RISING_MASK_LANE  PM_CTRL_INTERRUPT_REG2.BF.INT_PU_PLL_CHG_RISING_MASK_LANE

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
__xdata __at( 0x4420 ) volatile CLKGEN_TX_LANE_REG1_LANE_t CLKGEN_TX_LANE_REG1_LANE;
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_IN_DIG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_IN_DIG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S1_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S1_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S1_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S2_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S2_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S2_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S3_FM_REG_LANE
#define reg_ANA_TX_TXCLK_ALIGN_S3_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.ANA_TX_TXCLK_ALIGN_S3_LANE
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
		uint8_t TXDATA_MSB_LSB_SWAP_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t TXDATA_PRE_CODE_EN_FM_REG_LANE           : 1;	/*      6     r/w   0*/
		uint8_t TXDATA_GRAY_CODE_EN_FM_REG_LANE          : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t TXDATA_LATENCY_REDUCE_EN_LANE            : 1;	/*     15     r/w   0*/
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
__xdata __at( 0x4424 ) volatile TX_SPEED_CONVERT_LANE_t TX_SPEED_CONVERT_LANE;
#define reg_RX2TX_R_FIFO_CNT_LANE_4_0  TX_SPEED_CONVERT_LANE.BF.RX2TX_R_FIFO_CNT_LANE_4_0
#define reg_TXDATA_MSB_LSB_SWAP_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_MSB_LSB_SWAP_LANE
#define reg_TXDATA_PRE_CODE_EN_FM_REG_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_PRE_CODE_EN_FM_REG_LANE
#define reg_TXDATA_GRAY_CODE_EN_FM_REG_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_GRAY_CODE_EN_FM_REG_LANE
#define reg_TXDATA_LATENCY_REDUCE_EN_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_LATENCY_REDUCE_EN_LANE
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
__xdata __at( 0x4428 ) volatile SPD_CTRL_INTERRUPT_REG1_LANE_t SPD_CTRL_INTERRUPT_REG1_LANE;
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
__xdata __at( 0x442c ) volatile SPD_CTRL_INTERRUPT_REG2_t SPD_CTRL_INTERRUPT_REG2;
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
		uint8_t PIN_PHY_GEN_MAX_TX_RD_LANE_5_0           : 6;	/*[15:10]       r 6'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t PIN_TXDCLK_NT_SEL_RD_LANE_2_0            : 3;	/*[23:21]       r   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t PIN_PHY_GEN_TX_RD_LANE_5_0               : 6;	/*[31:26]       r 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_TX_LANE_REG1_LANE_t;
__xdata __at( 0x4430 ) volatile SPD_CTRL_TX_LANE_REG1_LANE_t SPD_CTRL_TX_LANE_REG1_LANE;
#define reg_TXDCLK_4X_EN_LANE  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXDCLK_4X_EN_LANE
#define reg_TXDCLK_NT_EN_LANE  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXDCLK_NT_EN_LANE
#define reg_PIN_PHY_GEN_MAX_TX_RD_LANE_5_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_PHY_GEN_MAX_TX_RD_LANE_5_0
#define reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_TXDCLK_NT_SEL_RD_LANE_2_0
#define reg_PIN_PHY_GEN_TX_RD_LANE_5_0  SPD_CTRL_TX_LANE_REG1_LANE.BF.PIN_PHY_GEN_TX_RD_LANE_5_0

// 0x0034	TX_SYSTEM_LANE0		Tx System Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w   0*/
		uint8_t TX_DATA_WIDTH_LANE_1_0                   : 2;	/*  [7:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [16:8]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/* [16:8]     r/w   0*/
		uint8_t SSC_AMP_LANE_6_0                         : 7;	/*[23:17]     r/w   0*/
		uint8_t SSC_DSPREAD_TX_LANE                      : 1;	/*     24     r/w   1*/
		uint8_t RESERVED_25                              : 4;	/*[28:25]     r/w   0*/
		uint8_t TRX_TXCLK_SEL_LANE                       : 1;	/*     29     r/w   0*/
		uint8_t TRAIN_TX_SEL_BITS_LANE                   : 1;	/*     30     r/w   1*/
		uint8_t TX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE0_t;
__xdata __at( 0x4434 ) volatile TX_SYSTEM_LANE0_t TX_SYSTEM_LANE0;
#define reg_TX_DATA_WIDTH_LANE_1_0  TX_SYSTEM_LANE0.BF.TX_DATA_WIDTH_LANE_1_0
#define reg_SSC_AMP_LANE_6_0  TX_SYSTEM_LANE0.BF.SSC_AMP_LANE_6_0
#define reg_SSC_DSPREAD_TX_LANE  TX_SYSTEM_LANE0.BF.SSC_DSPREAD_TX_LANE
#define reg_TRX_TXCLK_SEL_LANE  TX_SYSTEM_LANE0.BF.TRX_TXCLK_SEL_LANE
#define reg_TRAIN_TX_SEL_BITS_LANE  TX_SYSTEM_LANE0.BF.TRAIN_TX_SEL_BITS_LANE
#define reg_TX_SEL_BITS_LANE  TX_SYSTEM_LANE0.BF.TX_SEL_BITS_LANE

// 0x003c	TX_SYSTEM_LANE1		Tx System Register1
typedef union {
	struct {
		uint8_t DIG_ID_LANE_7_0                          : 8;	/*  [7:0]       r 8'h10*/
		uint8_t RESERVED_8                               : 8;	/* [29:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [29:8]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/* [29:8]     r/w   0*/
		uint8_t TX_PAM2_EN_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t TX_HALFRATE_EN_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE1_t;
__xdata __at( 0x443c ) volatile TX_SYSTEM_LANE1_t TX_SYSTEM_LANE1;
#define reg_DIG_ID_LANE_7_0  TX_SYSTEM_LANE1.BF.DIG_ID_LANE_7_0
#define reg_TX_PAM2_EN_LANE  TX_SYSTEM_LANE1.BF.TX_PAM2_EN_LANE
#define reg_TX_HALFRATE_EN_LANE  TX_SYSTEM_LANE1.BF.TX_HALFRATE_EN_LANE

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
__xdata __at( 0x4444 ) volatile DIG_TX_RSVD_REG0_t DIG_TX_RSVD_REG0;
#define reg_DIG_TX_INT_RSVD0_LANE_15_0_b0  DIG_TX_RSVD_REG0.BF.DIG_TX_INT_RSVD0_LANE_15_0_b0
#define reg_DIG_TX_INT_RSVD0_LANE_15_0_b1  DIG_TX_RSVD_REG0.BF.DIG_TX_INT_RSVD0_LANE_15_0_b1
#define reg_DIG_TX_RSVD0_LANE_15_0_b0  DIG_TX_RSVD_REG0.BF.DIG_TX_RSVD0_LANE_15_0_b0
#define reg_DIG_TX_RSVD0_LANE_15_0_b1  DIG_TX_RSVD_REG0.BF.DIG_TX_RSVD0_LANE_15_0_b1
#define reg_DIG_TX_INT_RSVD0_LANE_15_0  DIG_TX_RSVD_REG0.WT.W0
#define reg_DIG_TX_RSVD0_LANE_15_0  DIG_TX_RSVD_REG0.WT.W1

// 0x004c	TX_PLLCAL_LANE_REG1		Tx PLL Calibration Related Register Lane 1
typedef union {
	struct {
		uint8_t ANA_TX_ANA_RSVD_IN_LANE_15_0_b0          : 8;	/* [15:0]     r/w 16'hff00*/
		uint8_t ANA_TX_ANA_RSVD_IN_LANE_15_0_b1          : 8;	/* [15:0]     r/w 16'hff00*/
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
} TX_PLLCAL_LANE_REG1_t;
__xdata __at( 0x444c ) volatile TX_PLLCAL_LANE_REG1_t TX_PLLCAL_LANE_REG1;
#define reg_ANA_TX_ANA_RSVD_IN_LANE_15_0_b0  TX_PLLCAL_LANE_REG1.BF.ANA_TX_ANA_RSVD_IN_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_IN_LANE_15_0_b1  TX_PLLCAL_LANE_REG1.BF.ANA_TX_ANA_RSVD_IN_LANE_15_0_b1
#define reg_ANA_TX_ANA_RSVD_IN_LANE_15_0  TX_PLLCAL_LANE_REG1.WT.W0

// 0x005c	TX_RESERVED_REG1		Tx Reserved Register 1
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0    : 8;	/* [15:0]       r   0*/
		uint8_t PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1    : 8;	/* [15:0]       r   0*/
		uint8_t TX_ANA_RSVD_OUT_RD_LANE_15_0_b0          : 8;	/*[31:16]       r   0*/
		uint8_t TX_ANA_RSVD_OUT_RD_LANE_15_0_b1          : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TX_RESERVED_REG1_t;
__xdata __at( 0x445c ) volatile TX_RESERVED_REG1_t TX_RESERVED_REG1;
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0  TX_RESERVED_REG1.BF.PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1  TX_RESERVED_REG1.BF.PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1
#define reg_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0  TX_RESERVED_REG1.BF.TX_ANA_RSVD_OUT_RD_LANE_15_0_b0
#define reg_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1  TX_RESERVED_REG1.BF.TX_ANA_RSVD_OUT_RD_LANE_15_0_b1
#define reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0  TX_RESERVED_REG1.WT.W0
#define reg_TX_ANA_RSVD_OUT_RD_LANE_15_0  TX_RESERVED_REG1.WT.W1

// 0x0060	TX_RESERVED_REG2		Tx Reserved Register 2
typedef union {
	struct {
		uint8_t PIN_RESERVED_OUTPUT_TX_LANE_15_0_b0      : 8;	/* [15:0]     r/w   0*/
		uint8_t PIN_RESERVED_OUTPUT_TX_LANE_15_0_b1      : 8;	/* [15:0]     r/w   0*/
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
__xdata __at( 0x4460 ) volatile TX_RESERVED_REG2_t TX_RESERVED_REG2;
#define reg_PIN_RESERVED_OUTPUT_TX_LANE_15_0_b0  TX_RESERVED_REG2.BF.PIN_RESERVED_OUTPUT_TX_LANE_15_0_b0
#define reg_PIN_RESERVED_OUTPUT_TX_LANE_15_0_b1  TX_RESERVED_REG2.BF.PIN_RESERVED_OUTPUT_TX_LANE_15_0_b1
#define reg_PIN_RESERVED_OUTPUT_TX_LANE_15_0  TX_RESERVED_REG2.WT.W0

// 0x0064	PM_CTRL_INTERRUPT_ISR_REG1_LANE		Power Control Interrupt Clear Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE : 1;	/*      5     r/w   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_CHG_FALLING_ISR_CLEAR_LANE : 1;	/*      6     r/w   0*/
		uint8_t DPHY_ANA_LANE_DISABLE_CHG_RISING_ISR_CLEAR_LANE : 1;	/*      7     r/w   0*/
		uint8_t INT_PU_SQ_CHG_ISR_CLEAR_LANE             : 1;	/*      8     r/w   0*/
		uint8_t INT_TX_IDLE_HIZ_CHG_ISR_CLEAR_LANE       : 1;	/*      9     r/w   0*/
		uint8_t INT_TX_VCMHOLD_EN_CHG_ISR_CLEAR_LANE     : 1;	/*     10     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_FALLING_ISR_CLEAR_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT_BEACON_TX_EN_CHG_RISING_ISR_CLEAR_LANE : 1;	/*     12     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_FALLING_ISR_CLEAR_LANE : 1;	/*     13     r/w   0*/
		uint8_t INT_TXDETRX_EN_CHG_RISING_ISR_CLEAR_LANE : 1;	/*     14     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_FALLING_ISR_CLEAR_LANE   : 1;	/*     15     r/w   0*/
		uint8_t INT_TX_IDLE_CHG_RISING_ISR_CLEAR_LANE    : 1;	/*     16     r/w   0*/
		uint8_t INT_PU_IVREF_CHG_ISR_CLEAR_LANE          : 1;	/*     17     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_FALLING_ISR_CLEAR_LANE : 1;	/*     18     r/w   0*/
		uint8_t INT_PU_PLL_OR_CHG_RISING_ISR_CLEAR_LANE  : 1;	/*     19     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE : 1;	/*     20     r/w   0*/
		uint8_t INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE : 1;	/*     21     r/w   0*/
		uint8_t INT_RX_INIT_CHG_FALLING_ISR_CLEAR_LANE   : 1;	/*     22     r/w   0*/
		uint8_t INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE    : 1;	/*     23     r/w   0*/
		uint8_t TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE    : 1;	/*     24     r/w   0*/
		uint8_t TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE     : 1;	/*     25     r/w   0*/
		uint8_t INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE     : 1;	/*     26     r/w   0*/
		uint8_t INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE      : 1;	/*     27     r/w   0*/
		uint8_t INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE     : 1;	/*     28     r/w   0*/
		uint8_t INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE      : 1;	/*     29     r/w   0*/
		uint8_t INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE    : 1;	/*     30     r/w   0*/
		uint8_t INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_INTERRUPT_ISR_REG1_LANE_t;
__xdata __at( 0x4464 ) volatile PM_CTRL_INTERRUPT_ISR_REG1_LANE_t PM_CTRL_INTERRUPT_ISR_REG1_LANE;
#define reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE
#define reg_DPHY_ANA_LANE_DISABLE_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.DPHY_ANA_LANE_DISABLE_CHG_FALLING_ISR_CLEAR_LANE
#define reg_DPHY_ANA_LANE_DISABLE_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.DPHY_ANA_LANE_DISABLE_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_PU_SQ_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_SQ_CHG_ISR_CLEAR_LANE
#define reg_INT_TX_IDLE_HIZ_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_IDLE_HIZ_CHG_ISR_CLEAR_LANE
#define reg_INT_TX_VCMHOLD_EN_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_VCMHOLD_EN_CHG_ISR_CLEAR_LANE
#define reg_INT_BEACON_TX_EN_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_BEACON_TX_EN_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_BEACON_TX_EN_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_BEACON_TX_EN_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_TXDETRX_EN_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TXDETRX_EN_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_TXDETRX_EN_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TXDETRX_EN_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_TX_IDLE_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_IDLE_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_TX_IDLE_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_TX_IDLE_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_IVREF_CHG_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_OR_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_OR_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_OR_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_OR_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_RX_INIT_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_RX_INIT_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE
#define reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE
#define reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE
#define reg_INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE  PM_CTRL_INTERRUPT_ISR_REG1_LANE.BF.INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE

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
__xdata __at( 0x4468 ) volatile SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE_t SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE;
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
		uint8_t RESERVED_21                              : 3;	/*[26:21]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:21]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_PLL_REG1_LANE_t;
__xdata __at( 0x446c ) volatile PM_PLL_REG1_LANE_t PM_PLL_REG1_LANE;
#define reg_PWRON_SEQ_LANE  PM_PLL_REG1_LANE.BF.PWRON_SEQ_LANE

// 0x0070	PM_PLL_REG2_LANE		Power Control PLL register 2
typedef union {
	struct {
		uint8_t REF1M_GEN_DIV_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'h18*/
		uint8_t RESERVED_8                               : 8;	/* [23:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:8]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
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
__xdata __at( 0x4470 ) volatile PM_PLL_REG2_LANE_t PM_PLL_REG2_LANE;
#define reg_REF1M_GEN_DIV_LANE_7_0  PM_PLL_REG2_LANE.BF.REF1M_GEN_DIV_LANE_7_0

// 0x007c	DTX_REG2		DTX Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t REPEAT_MODE_DIS_LANE                     : 1;	/*      9     r/w   0*/
		uint8_t REPEAT_MODE_EN_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX2TX_FREQ_TRAN_EN_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t RX2TX_RATIO_LANE_2_0                     : 3;	/*[19:17]     r/w   0*/
		uint8_t RX2TX_RATIO_FORCE_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[25:21]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:21]     r/w   0*/
		uint8_t RX2TX_W_FIFO_CNT_LANE_4_0                : 5;	/*[30:26]       r   0*/
		uint8_t RX2TX_FIFO_CNT_RD_REQ_LANE               : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG2_t;
__xdata __at( 0x447c ) volatile DTX_REG2_t DTX_REG2;
#define reg_REPEAT_MODE_DIS_LANE  DTX_REG2.BF.REPEAT_MODE_DIS_LANE
#define reg_REPEAT_MODE_EN_LANE  DTX_REG2.BF.REPEAT_MODE_EN_LANE
#define reg_RX2TX_FREQ_TRAN_EN_LANE  DTX_REG2.BF.RX2TX_FREQ_TRAN_EN_LANE
#define reg_RX2TX_RATIO_LANE_2_0  DTX_REG2.BF.RX2TX_RATIO_LANE_2_0
#define reg_RX2TX_RATIO_FORCE_LANE  DTX_REG2.BF.RX2TX_RATIO_FORCE_LANE
#define reg_RX2TX_W_FIFO_CNT_LANE_4_0  DTX_REG2.BF.RX2TX_W_FIFO_CNT_LANE_4_0
#define reg_RX2TX_FIFO_CNT_RD_REQ_LANE  DTX_REG2.BF.RX2TX_FIFO_CNT_RD_REQ_LANE

// 0x0080	LANE_ALIGNMENT_REG1		Lane_alignment Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t MASTER_LANE_EN_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t LANE_ALIGN_OFF_LANE                      : 1;	/*      4     r/w   1*/
		uint8_t ANA_TX_PLL_TXCLK_SYNC_EN_LANE            : 1;	/*      5     r/w   0*/
		uint8_t ANA_TX_PLL_TXCLK_SYNC_EN_FORCE_LANE      : 1;	/*      6     r/w   0*/
		uint8_t RESET_TX_SYNC_LANE                       : 1;	/*      7     r/w   1*/
		uint8_t FORCE_COUPLE_MODE_EN_LOW_LANE            : 1;	/*      8     r/w   0*/
		uint8_t TXCLK_SYNC_START_OUT_FORCE_LANE          : 1;	/*      9     r/w   0*/
		uint8_t TXCLK_SYNC_START_OUT_LANE                : 1;	/*     10     r/w   0*/
		uint8_t BYPASS_TX_SYNC_LANE                      : 1;	/*     11     r/w   0*/
		uint8_t LANE_ALIGN_FREEZE_LANE                   : 1;	/*     12     r/w   0*/
		uint8_t LANE_ALIGN_SAMPLE_SEL_LANE               : 1;	/*     13     r/w   0*/
		uint8_t LANE_ALIGN_READY_IN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t LANE_ALIGN_READY_IN_FORCE_LANE           : 1;	/*     15     r/w   0*/
		uint8_t LANE_ALIGN_READY_OUT_LANE                : 1;	/*     16     r/w   0*/
		uint8_t LANE_ALIGN_READY_OUT_FORCE_LANE          : 1;	/*     17     r/w   0*/
		uint8_t LANE_ALIGN_READY_MODE_LANE_1_0           : 2;	/*[19:18]     r/w 2'h2*/
		uint8_t RESET_DTX_FM_MASTER_LANE                 : 1;	/*     20     r/w   1*/
		uint8_t TXCLK_SYNC_EN_IN_FORCE_LANE              : 1;	/*     21     r/w   0*/
		uint8_t TXCLK_SYNC_EN_IN_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t TXCLK_SYNC_EN_PLL_IN_FORCE_LANE          : 1;	/*     23     r/w   0*/
		uint8_t TXCLK_SYNC_EN_PLL_IN_LANE                : 1;	/*     24     r/w   0*/
		uint8_t TXCLK_SYNC_START_IN_FORCE_LANE           : 1;	/*     25     r/w   0*/
		uint8_t TXCLK_SYNC_START_IN_LANE                 : 1;	/*     26     r/w   0*/
		uint8_t INT_LANE_ALIGN_READY_OUT_LANE            : 1;	/*     27       r   0*/
		uint8_t INT_LANE_ALIGN_READY_IN_LANE             : 1;	/*     28       r   0*/
		uint8_t TXCLK_SYNC_EN_IN_RD_LANE                 : 1;	/*     29       r   0*/
		uint8_t TXCLK_SYNC_EN_PLL_IN_RD_LANE             : 1;	/*     30       r   0*/
		uint8_t TXCLK_SYNC_START_IN_RD_LANE              : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_ALIGNMENT_REG1_t;
__xdata __at( 0x4480 ) volatile LANE_ALIGNMENT_REG1_t LANE_ALIGNMENT_REG1;
#define reg_MASTER_LANE_EN_LANE  LANE_ALIGNMENT_REG1.BF.MASTER_LANE_EN_LANE
#define reg_LANE_ALIGN_OFF_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_OFF_LANE
#define reg_ANA_TX_PLL_TXCLK_SYNC_EN_LANE  LANE_ALIGNMENT_REG1.BF.ANA_TX_PLL_TXCLK_SYNC_EN_LANE
#define reg_ANA_TX_PLL_TXCLK_SYNC_EN_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.ANA_TX_PLL_TXCLK_SYNC_EN_FORCE_LANE
#define reg_RESET_TX_SYNC_LANE  LANE_ALIGNMENT_REG1.BF.RESET_TX_SYNC_LANE
#define reg_FORCE_COUPLE_MODE_EN_LOW_LANE  LANE_ALIGNMENT_REG1.BF.FORCE_COUPLE_MODE_EN_LOW_LANE
#define reg_TXCLK_SYNC_START_OUT_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_START_OUT_FORCE_LANE
#define reg_TXCLK_SYNC_START_OUT_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_START_OUT_LANE
#define reg_BYPASS_TX_SYNC_LANE  LANE_ALIGNMENT_REG1.BF.BYPASS_TX_SYNC_LANE
#define reg_LANE_ALIGN_FREEZE_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_FREEZE_LANE
#define reg_LANE_ALIGN_SAMPLE_SEL_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_SAMPLE_SEL_LANE
#define reg_LANE_ALIGN_READY_IN_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_READY_IN_LANE
#define reg_LANE_ALIGN_READY_IN_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_READY_IN_FORCE_LANE
#define reg_LANE_ALIGN_READY_OUT_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_READY_OUT_LANE
#define reg_LANE_ALIGN_READY_OUT_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_READY_OUT_FORCE_LANE
#define reg_LANE_ALIGN_READY_MODE_LANE_1_0  LANE_ALIGNMENT_REG1.BF.LANE_ALIGN_READY_MODE_LANE_1_0
#define reg_RESET_DTX_FM_MASTER_LANE  LANE_ALIGNMENT_REG1.BF.RESET_DTX_FM_MASTER_LANE
#define reg_TXCLK_SYNC_EN_IN_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_EN_IN_FORCE_LANE
#define reg_TXCLK_SYNC_EN_IN_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_EN_IN_LANE
#define reg_TXCLK_SYNC_EN_PLL_IN_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_EN_PLL_IN_FORCE_LANE
#define reg_TXCLK_SYNC_EN_PLL_IN_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_EN_PLL_IN_LANE
#define reg_TXCLK_SYNC_START_IN_FORCE_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_START_IN_FORCE_LANE
#define reg_TXCLK_SYNC_START_IN_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_START_IN_LANE
#define reg_INT_LANE_ALIGN_READY_OUT_LANE  LANE_ALIGNMENT_REG1.BF.INT_LANE_ALIGN_READY_OUT_LANE
#define reg_INT_LANE_ALIGN_READY_IN_LANE  LANE_ALIGNMENT_REG1.BF.INT_LANE_ALIGN_READY_IN_LANE
#define reg_TXCLK_SYNC_EN_IN_RD_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_EN_IN_RD_LANE
#define reg_TXCLK_SYNC_EN_PLL_IN_RD_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_EN_PLL_IN_RD_LANE
#define reg_TXCLK_SYNC_START_IN_RD_LANE  LANE_ALIGNMENT_REG1.BF.TXCLK_SYNC_START_IN_RD_LANE

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
__xdata __at( 0x4484 ) volatile MON_TOP_t MON_TOP;
#define reg_TESTBUS_SEL_LO1_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_LO1_LANE_5_0
#define reg_TESTBUS_SEL_LO0_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_LO0_LANE_5_0
#define reg_TESTBUS_SEL_HI1_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_HI1_LANE_5_0
#define reg_TESTBUS_SEL_HI0_LANE_5_0  MON_TOP.BF.TESTBUS_SEL_HI0_LANE_5_0

// 0x0088	PM_CTRL_TX_LANE_REG3_LANE		Power Control Tx Lane Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t SYNC_EN_FAL_DLY_CNT_NUM_LANE_7_0         : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t SYNC_EN_HIGH_CNT_NUM_LANE_7_0            : 8;	/*[23:16]     r/w 8'h14*/
		uint8_t COUPLE_MODE_SYNC_EN_FAL_DLY_CNT_NUM_LANE_7_0 : 8;	/*[31:24]     r/w 8'hd2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG3_LANE_t;
__xdata __at( 0x4488 ) volatile PM_CTRL_TX_LANE_REG3_LANE_t PM_CTRL_TX_LANE_REG3_LANE;
#define reg_SYNC_EN_FAL_DLY_CNT_NUM_LANE_7_0  PM_CTRL_TX_LANE_REG3_LANE.BF.SYNC_EN_FAL_DLY_CNT_NUM_LANE_7_0
#define reg_SYNC_EN_HIGH_CNT_NUM_LANE_7_0  PM_CTRL_TX_LANE_REG3_LANE.BF.SYNC_EN_HIGH_CNT_NUM_LANE_7_0
#define reg_COUPLE_MODE_SYNC_EN_FAL_DLY_CNT_NUM_LANE_7_0  PM_CTRL_TX_LANE_REG3_LANE.BF.COUPLE_MODE_SYNC_EN_FAL_DLY_CNT_NUM_LANE_7_0

// 0x008c	LANE_ALIGNMENT_REG2		Lane_alignment Register 2
typedef union {
	struct {
		uint8_t LANE_ALIGN_FINE_STEP_LANE_1_0            : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t LANE_ALIGN_ACCURATE_STEP_LANE_1_0        : 2;	/*  [3:2]     r/w   0*/
		uint8_t LANE_ALIGN_COARSE_STEP_LANE_2_0          : 3;	/*  [6:4]     r/w 3'h3*/
		uint8_t LANE_ALIGN_COARSE_TIMEOUT_EN_LANE        : 1;	/*      7     r/w   1*/
		uint8_t LANE_ALIGN_COMP_PHASE_LANE_7_0           : 8;	/* [15:8]     r/w   0*/
		uint8_t LANE_ALIGN_SETTLE_TIME_SEL_LANE_2_0      : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t LANE_ALIGN_FAST_DONE_SEL_LANE_1_0        : 2;	/*[20:19]     r/w 2'h1*/
		uint8_t CNT1M_INI_TXCLK_FORCE_LANE               : 1;	/*     21     r/w   0*/
		uint8_t CNT1M_INI_TXCLK_LANE_9_0_b0              : 2;	/*[31:22]     r/w 10'h7d*/
		uint8_t CNT1M_INI_TXCLK_LANE_9_0_b1              : 8;	/*[31:22]     r/w 10'h7d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_ALIGNMENT_REG2_t;
__xdata __at( 0x448c ) volatile LANE_ALIGNMENT_REG2_t LANE_ALIGNMENT_REG2;
#define reg_LANE_ALIGN_FINE_STEP_LANE_1_0  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_FINE_STEP_LANE_1_0
#define reg_LANE_ALIGN_ACCURATE_STEP_LANE_1_0  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_ACCURATE_STEP_LANE_1_0
#define reg_LANE_ALIGN_COARSE_STEP_LANE_2_0  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_COARSE_STEP_LANE_2_0
#define reg_LANE_ALIGN_COARSE_TIMEOUT_EN_LANE  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_COARSE_TIMEOUT_EN_LANE
#define reg_LANE_ALIGN_COMP_PHASE_LANE_7_0  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_COMP_PHASE_LANE_7_0
#define reg_LANE_ALIGN_SETTLE_TIME_SEL_LANE_2_0  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_SETTLE_TIME_SEL_LANE_2_0
#define reg_LANE_ALIGN_FAST_DONE_SEL_LANE_1_0  LANE_ALIGNMENT_REG2.BF.LANE_ALIGN_FAST_DONE_SEL_LANE_1_0
#define reg_CNT1M_INI_TXCLK_FORCE_LANE  LANE_ALIGNMENT_REG2.BF.CNT1M_INI_TXCLK_FORCE_LANE
#define reg_CNT1M_INI_TXCLK_LANE_9_0_b0  LANE_ALIGNMENT_REG2.BF.CNT1M_INI_TXCLK_LANE_9_0_b0
#define reg_CNT1M_INI_TXCLK_LANE_9_0_b1  LANE_ALIGNMENT_REG2.BF.CNT1M_INI_TXCLK_LANE_9_0_b1

// 0x0090	LANE_ALIGNMENT_REG3		Lane_alignment Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/* [26:0]     r/w   0*/
		uint8_t LANE_ALIGN_VALID_WIDTH_LANE_1_0          : 2;	/*[28:27]     r/w   0*/
		uint8_t LANE_ALIGN_VALID_WIDTH_FORCE_LANE        : 1;	/*     29     r/w   0*/
		uint8_t LANE_ALIGN_CMPSAT_EN_LANE                : 1;	/*     30     r/w   0*/
		uint8_t LANE_ALIGN_ACCURATE_EN_LANE              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_ALIGNMENT_REG3_t;
__xdata __at( 0x4490 ) volatile LANE_ALIGNMENT_REG3_t LANE_ALIGNMENT_REG3;
#define reg_LANE_ALIGN_VALID_WIDTH_LANE_1_0  LANE_ALIGNMENT_REG3.BF.LANE_ALIGN_VALID_WIDTH_LANE_1_0
#define reg_LANE_ALIGN_VALID_WIDTH_FORCE_LANE  LANE_ALIGNMENT_REG3.BF.LANE_ALIGN_VALID_WIDTH_FORCE_LANE
#define reg_LANE_ALIGN_CMPSAT_EN_LANE  LANE_ALIGNMENT_REG3.BF.LANE_ALIGN_CMPSAT_EN_LANE
#define reg_LANE_ALIGN_ACCURATE_EN_LANE  LANE_ALIGNMENT_REG3.BF.LANE_ALIGN_ACCURATE_EN_LANE

// 0x0098	PHYTEST_TX0		PHYTEST Control Registers 0
typedef union {
	struct {
		uint8_t PT_TX_MODE2_RST_DIS_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t TX_TRAIN_PAT_FORCE_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t PT_TX_EN_MODE_LANE_1_0                   : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TX_TRAIN_POLY_SEL_FM_PIN_LANE            : 1;	/*      4     r/w   0*/
		uint8_t PT_TX_RST_LANE                           : 1;	/*      5     r/w   0*/
		uint8_t PT_TX_PRBS_GRAY_EN_LANE                  : 1;	/*      6     r/w   0*/
		uint8_t PT_TX_PRBS_INV_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w   0*/
		uint8_t PT_TX_SSPRQ_INV_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t SSPRQ_UI_DLY_CTRL_LANE_4_0               : 5;	/*[15:11]     r/w 5'h0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_LANE_1_0                : 2;	/*[23:22]     r/w   0*/
		uint8_t PT_TX_PATTERN_SEL_LANE_5_0               : 6;	/*[29:24]     r/w 6'h10*/
		uint8_t PT_TX_PHYREADY_FORCE_LANE                : 1;	/*     30     r/w   0*/
		uint8_t PT_TX_EN_LANE                            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_TX0_t;
__xdata __at( 0x4498 ) volatile PHYTEST_TX0_t PHYTEST_TX0;
#define reg_PT_TX_MODE2_RST_DIS_LANE  PHYTEST_TX0.BF.PT_TX_MODE2_RST_DIS_LANE
#define reg_TX_TRAIN_PAT_FORCE_LANE  PHYTEST_TX0.BF.TX_TRAIN_PAT_FORCE_LANE
#define reg_PT_TX_EN_MODE_LANE_1_0  PHYTEST_TX0.BF.PT_TX_EN_MODE_LANE_1_0
#define reg_TX_TRAIN_POLY_SEL_FM_PIN_LANE  PHYTEST_TX0.BF.TX_TRAIN_POLY_SEL_FM_PIN_LANE
#define reg_PT_TX_RST_LANE  PHYTEST_TX0.BF.PT_TX_RST_LANE
#define reg_PT_TX_PRBS_GRAY_EN_LANE  PHYTEST_TX0.BF.PT_TX_PRBS_GRAY_EN_LANE
#define reg_PT_TX_PRBS_INV_LANE  PHYTEST_TX0.BF.PT_TX_PRBS_INV_LANE
#define reg_PT_TX_SSPRQ_INV_LANE  PHYTEST_TX0.BF.PT_TX_SSPRQ_INV_LANE
#define reg_SSPRQ_UI_DLY_CTRL_LANE_4_0  PHYTEST_TX0.BF.SSPRQ_UI_DLY_CTRL_LANE_4_0
#define reg_TX_TRAIN_PAT_SEL_LANE_1_0  PHYTEST_TX0.BF.TX_TRAIN_PAT_SEL_LANE_1_0
#define reg_PT_TX_PATTERN_SEL_LANE_5_0  PHYTEST_TX0.BF.PT_TX_PATTERN_SEL_LANE_5_0
#define reg_PT_TX_PHYREADY_FORCE_LANE  PHYTEST_TX0.BF.PT_TX_PHYREADY_FORCE_LANE
#define reg_PT_TX_EN_LANE  PHYTEST_TX0.BF.PT_TX_EN_LANE

// 0x009c	PHYTEST_TX1		PHYTEST Control Registers 1
typedef union {
	struct {
		uint8_t PT_TX_USER_PATTERN_LANE_79_48_b0         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_79_48_b1         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_79_48_b2         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_79_48_b3         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_TX1_t;
__xdata __at( 0x449c ) volatile PHYTEST_TX1_t PHYTEST_TX1;
#define reg_PT_TX_USER_PATTERN_LANE_79_48_b0  PHYTEST_TX1.BF.PT_TX_USER_PATTERN_LANE_79_48_b0
#define reg_PT_TX_USER_PATTERN_LANE_79_48_b1  PHYTEST_TX1.BF.PT_TX_USER_PATTERN_LANE_79_48_b1
#define reg_PT_TX_USER_PATTERN_LANE_79_48_b2  PHYTEST_TX1.BF.PT_TX_USER_PATTERN_LANE_79_48_b2
#define reg_PT_TX_USER_PATTERN_LANE_79_48_b3  PHYTEST_TX1.BF.PT_TX_USER_PATTERN_LANE_79_48_b3

// 0x00a0	PHYTEST_TX2		PHYTEST Control Registers 2
typedef union {
	struct {
		uint8_t PT_TX_USER_PATTERN_LANE_47_16_b0         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_47_16_b1         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_47_16_b2         : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_47_16_b3         : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_TX2_t;
__xdata __at( 0x44a0 ) volatile PHYTEST_TX2_t PHYTEST_TX2;
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b0  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b0
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b1  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b1
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b2  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b2
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b3  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b3

// 0x00a4	PHYTEST_TX3		PHYTEST Control Registers 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t PT_TX_USER_PATTERN_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_TX3_t;
__xdata __at( 0x44a4 ) volatile PHYTEST_TX3_t PHYTEST_TX3;
#define reg_PT_TX_USER_PATTERN_LANE_15_0_b0  PHYTEST_TX3.BF.PT_TX_USER_PATTERN_LANE_15_0_b0
#define reg_PT_TX_USER_PATTERN_LANE_15_0_b1  PHYTEST_TX3.BF.PT_TX_USER_PATTERN_LANE_15_0_b1
#define reg_PT_TX_USER_PATTERN_LANE_15_0  PHYTEST_TX3.WT.W1

// 0x00a8	PHYTEST_TX4		PHYTEST Control Registers 4
typedef union {
	struct {
		uint8_t PT_TX_PRBS_SEED_LANE_31_0_b0             : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_TX_PRBS_SEED_LANE_31_0_b1             : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_TX_PRBS_SEED_LANE_31_0_b2             : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t PT_TX_PRBS_SEED_LANE_31_0_b3             : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_TX4_t;
__xdata __at( 0x44a8 ) volatile PHYTEST_TX4_t PHYTEST_TX4;
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b0  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b0
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b1  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b1
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b2  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b2
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b3  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b3

// 0x00ac	INPUT_TX_PIN_REG4_LANE		Input Interface Tx Lane Reg4
typedef union {
	struct {
		uint8_t STRX_TRAIN_PAT_CODE_SEL_IN_FM_REG_LANE   : 1;	/*      0     r/w   0*/
		uint8_t STRX_TRAIN_PAT_CODE_SEL_IN_LANE_1_0      : 2;	/*  [2:1]     r/w   0*/
		uint8_t STRX_TRAIN_PAT_EN_IN_FM_REG_LANE         : 1;	/*      3     r/w   0*/
		uint8_t STRX_TRAIN_PAT_EN_IN_LANE                : 1;	/*      4     r/w   0*/
		uint8_t STRX_TRAIN_EN_IN_FM_REG_LANE             : 1;	/*      5     r/w   0*/
		uint8_t STRX_TRAIN_EN_IN_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_FM_REG_LANE            : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w   0*/
		uint8_t REFCLK_DIS_ACK_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t REFCLK_DIS_ACK_FORCE_LANE                : 1;	/*     11     r/w   0*/
		uint8_t PIN_REFCLK_DIS_RD_LANE                   : 1;	/*     12       r   0*/
		uint8_t REFCLK_DIS_FM_REG_LANE                   : 1;	/*     13     r/w   0*/
		uint8_t REFCLK_DIS_LANE                          : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[22:15]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/*[22:15]     r/w   0*/
		uint8_t PAPTA_TRAIN_ENABLE_FM_REG_LANE           : 1;	/*     23     r/w   0*/
		uint8_t PAPTA_TRAIN_ENABLE_LANE                  : 1;	/*     24     r/w   0*/
		uint8_t POWER_STATE_P2_FM_REG_LANE               : 1;	/*     25     r/w   0*/
		uint8_t POWER_STATE_P2_LANE                      : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG4_LANE_t;
__xdata __at( 0x44ac ) volatile INPUT_TX_PIN_REG4_LANE_t INPUT_TX_PIN_REG4_LANE;
#define reg_STRX_TRAIN_PAT_CODE_SEL_IN_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_PAT_CODE_SEL_IN_FM_REG_LANE
#define reg_STRX_TRAIN_PAT_CODE_SEL_IN_LANE_1_0  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_PAT_CODE_SEL_IN_LANE_1_0
#define reg_STRX_TRAIN_PAT_EN_IN_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_PAT_EN_IN_FM_REG_LANE
#define reg_STRX_TRAIN_PAT_EN_IN_LANE  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_PAT_EN_IN_LANE
#define reg_STRX_TRAIN_EN_IN_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_EN_IN_FM_REG_LANE
#define reg_STRX_TRAIN_EN_IN_LANE  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_EN_IN_LANE
#define reg_STRX_TRAIN_CMD_IN_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.STRX_TRAIN_CMD_IN_FM_REG_LANE
#define reg_REFCLK_DIS_ACK_LANE  INPUT_TX_PIN_REG4_LANE.BF.REFCLK_DIS_ACK_LANE
#define reg_REFCLK_DIS_ACK_FORCE_LANE  INPUT_TX_PIN_REG4_LANE.BF.REFCLK_DIS_ACK_FORCE_LANE
#define reg_PIN_REFCLK_DIS_RD_LANE  INPUT_TX_PIN_REG4_LANE.BF.PIN_REFCLK_DIS_RD_LANE
#define reg_REFCLK_DIS_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.REFCLK_DIS_FM_REG_LANE
#define reg_REFCLK_DIS_LANE  INPUT_TX_PIN_REG4_LANE.BF.REFCLK_DIS_LANE
#define reg_PAPTA_TRAIN_ENABLE_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.PAPTA_TRAIN_ENABLE_FM_REG_LANE
#define reg_PAPTA_TRAIN_ENABLE_LANE  INPUT_TX_PIN_REG4_LANE.BF.PAPTA_TRAIN_ENABLE_LANE
#define reg_POWER_STATE_P2_FM_REG_LANE  INPUT_TX_PIN_REG4_LANE.BF.POWER_STATE_P2_FM_REG_LANE
#define reg_POWER_STATE_P2_LANE  INPUT_TX_PIN_REG4_LANE.BF.POWER_STATE_P2_LANE

// 0x00b0	INPUT_TX_PIN_REG5_LANE		Input Interface Tx Lane Reg5
typedef union {
	struct {
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b0           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b1           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b2           : 8;	/* [31:0]     r/w   0*/
		uint8_t STRX_TRAIN_CMD_IN_LANE_31_0_b3           : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG5_LANE_t;
__xdata __at( 0x44b0 ) volatile INPUT_TX_PIN_REG5_LANE_t INPUT_TX_PIN_REG5_LANE;
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b0  INPUT_TX_PIN_REG5_LANE.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b0
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b1  INPUT_TX_PIN_REG5_LANE.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b1
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b2  INPUT_TX_PIN_REG5_LANE.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b2
#define reg_STRX_TRAIN_CMD_IN_LANE_31_0_b3  INPUT_TX_PIN_REG5_LANE.BF.STRX_TRAIN_CMD_IN_LANE_31_0_b3

// 0x00b4	INPUT_TX_PIN_REG6_LANE		Input Interface Tx Lane Reg6
typedef union {
	struct {
		uint8_t TX_COEFF_LANE_17_0_b0                    : 8;	/* [17:0]     r/w 18'h0*/
		uint8_t TX_COEFF_LANE_17_0_b1                    : 8;	/* [17:0]     r/w 18'h0*/
		uint8_t TX_COEFF_LANE_17_0_b2                    : 2;	/* [17:0]     r/w 18'h0*/
		uint8_t TX_COEFF_FM_REG_LANE                     : 1;	/*     18     r/w   0*/
		uint8_t TX_COEFF_VALID_LANE                      : 1;	/*     19     r/w   0*/
		uint8_t TX_COEFF_VALID_FM_REG_LANE               : 1;	/*     20     r/w   0*/
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
} INPUT_TX_PIN_REG6_LANE_t;
__xdata __at( 0x44b4 ) volatile INPUT_TX_PIN_REG6_LANE_t INPUT_TX_PIN_REG6_LANE;
#define reg_TX_COEFF_LANE_17_0_b0  INPUT_TX_PIN_REG6_LANE.BF.TX_COEFF_LANE_17_0_b0
#define reg_TX_COEFF_LANE_17_0_b1  INPUT_TX_PIN_REG6_LANE.BF.TX_COEFF_LANE_17_0_b1
#define reg_TX_COEFF_LANE_17_0_b2  INPUT_TX_PIN_REG6_LANE.BF.TX_COEFF_LANE_17_0_b2
#define reg_TX_COEFF_FM_REG_LANE  INPUT_TX_PIN_REG6_LANE.BF.TX_COEFF_FM_REG_LANE
#define reg_TX_COEFF_VALID_LANE  INPUT_TX_PIN_REG6_LANE.BF.TX_COEFF_VALID_LANE
#define reg_TX_COEFF_VALID_FM_REG_LANE  INPUT_TX_PIN_REG6_LANE.BF.TX_COEFF_VALID_FM_REG_LANE

// 0x00b8	INPUT_TX_PIN_REG7_LANE		Input Interface Tx Lane Reg7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:0]     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_FM_REG_LANE           : 1;	/*      9     r/w   0*/
		uint8_t ANA_TX_TXDETRX_OUT_LANE                  : 1;	/*     10     r/w   0*/
		uint8_t TXDETRX_EN_FM_REG_LANE                   : 1;	/*     11     r/w   0*/
		uint8_t TXDETRX_EN_LANE                          : 1;	/*     12     r/w   0*/
		uint8_t TX_VCMHOLD_EN_FM_REG_LANE                : 1;	/*     13     r/w   0*/
		uint8_t TX_VCMHOLD_EN_LANE                       : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[19:15]     r/w   0*/
		uint8_t RESERVED_16                              : 4;	/*[19:15]     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t TX_SWING_FM_REG_LANE                     : 1;	/*     26     r/w   0*/
		uint8_t TX_SWING_LANE                            : 1;	/*     27     r/w   0*/
		uint8_t TX_MARGIN_FM_REG_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t TX_MARGIN_LANE_2_0                       : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG7_LANE_t;
__xdata __at( 0x44b8 ) volatile INPUT_TX_PIN_REG7_LANE_t INPUT_TX_PIN_REG7_LANE;
#define reg_ANA_TX_TXDETRX_OUT_FM_REG_LANE  INPUT_TX_PIN_REG7_LANE.BF.ANA_TX_TXDETRX_OUT_FM_REG_LANE
#define reg_ANA_TX_TXDETRX_OUT_LANE  INPUT_TX_PIN_REG7_LANE.BF.ANA_TX_TXDETRX_OUT_LANE
#define reg_TXDETRX_EN_FM_REG_LANE  INPUT_TX_PIN_REG7_LANE.BF.TXDETRX_EN_FM_REG_LANE
#define reg_TXDETRX_EN_LANE  INPUT_TX_PIN_REG7_LANE.BF.TXDETRX_EN_LANE
#define reg_TX_VCMHOLD_EN_FM_REG_LANE  INPUT_TX_PIN_REG7_LANE.BF.TX_VCMHOLD_EN_FM_REG_LANE
#define reg_TX_VCMHOLD_EN_LANE  INPUT_TX_PIN_REG7_LANE.BF.TX_VCMHOLD_EN_LANE
#define reg_TX_SWING_FM_REG_LANE  INPUT_TX_PIN_REG7_LANE.BF.TX_SWING_FM_REG_LANE
#define reg_TX_SWING_LANE  INPUT_TX_PIN_REG7_LANE.BF.TX_SWING_LANE
#define reg_TX_MARGIN_FM_REG_LANE  INPUT_TX_PIN_REG7_LANE.BF.TX_MARGIN_FM_REG_LANE
#define reg_TX_MARGIN_LANE_2_0  INPUT_TX_PIN_REG7_LANE.BF.TX_MARGIN_LANE_2_0

#endif
