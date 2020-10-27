#ifndef PHY_REG_C_TX_LANE_H
#define PHY_REG_C_TX_LANE_H



// 0x0000	PM_CTRL_TX_LANE_REG1_LANE		Power Control Tx Lane Register 1
typedef union {
	struct {
		uint8_t LANE_ID_RD_LANE_1_0                      : 2;	/*  [1:0]       r   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
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
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
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
__xdata __at( 0x3000 ) volatile PM_CTRL_TX_LANE_REG1_LANE_t PM_CTRL_TX_LANE_REG1_LANE;
#define reg_LANE_ID_RD_LANE_1_0  PM_CTRL_TX_LANE_REG1_LANE.BF.LANE_ID_RD_LANE_1_0
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
#define reg_ANA_TX_IDLE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_LANE
#define reg_TX_DRV_IDLE_CAL_DIS_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.TX_DRV_IDLE_CAL_DIS_LANE
#define reg_ANA_TX_IDLE_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_TX_IDLE_FORCE_LANE
#define reg_BEACON_EN_DLY_NUM_LANE_2_0  PM_CTRL_TX_LANE_REG1_LANE.BF.BEACON_EN_DLY_NUM_LANE_2_0
#define reg_ANA_PU_TX_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_LANE
#define reg_ANA_PU_TX_FORCE_LANE  PM_CTRL_TX_LANE_REG1_LANE.BF.ANA_PU_TX_FORCE_LANE

// 0x0004	PM_CTRL_TX_LANE_REG2_LANE		Power Control Tx Lane Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
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
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t PIN_TXDETRX_EN_RD_LANE                   : 1;	/*     24       r   0*/
		uint8_t PIN_TX_VCMHOLD_EN_RD_LANE                : 1;	/*     25       r   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t PIN_TX_IDLE_HIZ_RD_LANE                  : 1;	/*     27       r   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RST_TRX_PM_150M_CLK_LANE                 : 1;	/*     30     r/w   0*/
		uint8_t ANA_TX_HIZ_EN_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_TX_LANE_REG2_LANE_t;
__xdata __at( 0x3004 ) volatile PM_CTRL_TX_LANE_REG2_LANE_t PM_CTRL_TX_LANE_REG2_LANE;
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
#define reg_PIN_TXDETRX_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TXDETRX_EN_RD_LANE
#define reg_PIN_TX_VCMHOLD_EN_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_VCMHOLD_EN_RD_LANE
#define reg_PIN_TX_IDLE_HIZ_RD_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.PIN_TX_IDLE_HIZ_RD_LANE
#define reg_RST_TRX_PM_150M_CLK_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.RST_TRX_PM_150M_CLK_LANE
#define reg_ANA_TX_HIZ_EN_LANE  PM_CTRL_TX_LANE_REG2_LANE.BF.ANA_TX_HIZ_EN_LANE

// 0x0008	INPUT_TX_PIN_REG0_LANE		Input Interface Tx Lane Reg0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 6;	/*  [6:1]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 6;	/* [14:9]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 4;	/*[20:17]     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG0_LANE_t;
__xdata __at( 0x3008 ) volatile INPUT_TX_PIN_REG0_LANE_t INPUT_TX_PIN_REG0_LANE;

// 0x000c	INPUT_TX_PIN_REG1_LANE		Input Interface Tx Lane Reg1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 2;	/*  [5:4]     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/* [22:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [22:7]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:7]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_TX_PIN_REG1_LANE_t;
__xdata __at( 0x300c ) volatile INPUT_TX_PIN_REG1_LANE_t INPUT_TX_PIN_REG1_LANE;

// 0x0010	INPUT_TX_PIN_REG2_LANE		Input Interface Tx Lane Reg2
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
		uint8_t RESERVED_12                              : 4;	/*[27:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[27:12]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:12]     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_TX_PIN_REG2_LANE_t;
__xdata __at( 0x3010 ) volatile INPUT_TX_PIN_REG2_LANE_t INPUT_TX_PIN_REG2_LANE;

// 0x0014	INPUT_TX_PIN_REG3_LANE		Input Interface Tx Lane Reg3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 2;	/*  [2:1]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESET_CORE_FM_PIPE_TX_LANE               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 6;	/* [14:9]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t TX_IDLE_FM_REG_LANE                      : 1;	/*     17     r/w   0*/
		uint8_t TX_IDLE_LANE                             : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG3_LANE_t;
__xdata __at( 0x3014 ) volatile INPUT_TX_PIN_REG3_LANE_t INPUT_TX_PIN_REG3_LANE;
#define reg_RESET_CORE_FM_PIPE_TX_LANE  INPUT_TX_PIN_REG3_LANE.BF.RESET_CORE_FM_PIPE_TX_LANE
#define reg_TX_IDLE_FM_REG_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_FM_REG_LANE
#define reg_TX_IDLE_LANE  INPUT_TX_PIN_REG3_LANE.BF.TX_IDLE_LANE

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
__xdata __at( 0x3018 ) volatile PM_CTRL_INTERRUPT_REG1_LANE_t PM_CTRL_INTERRUPT_REG1_LANE;
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
__xdata __at( 0x301c ) volatile PM_CTRL_INTERRUPT_REG2_t PM_CTRL_INTERRUPT_REG2;
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
		uint8_t TXDATA_LATENCY_REDUCE_EN_LANE            : 1;	/*      0     r/w   0*/
		uint8_t TX_DATA_WIDTH_LANE_1_0                   : 2;	/*  [2:1]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_LANE_2_0                : 3;	/*  [5:3]     r/w   0*/
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
__xdata __at( 0x3020 ) volatile CLKGEN_TX_LANE_REG1_LANE_t CLKGEN_TX_LANE_REG1_LANE;
#define reg_TXDATA_LATENCY_REDUCE_EN_LANE  CLKGEN_TX_LANE_REG1_LANE.BF.TXDATA_LATENCY_REDUCE_EN_LANE
#define reg_TX_DATA_WIDTH_LANE_1_0  CLKGEN_TX_LANE_REG1_LANE.BF.TX_DATA_WIDTH_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_LANE_2_0  CLKGEN_TX_LANE_REG1_LANE.BF.TX_TRAIN_PAT_SEL_LANE_2_0
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
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t PLL_RS_SFT_RST_NO_REG_RD_LANE            : 1;	/*      9       r   0*/
		uint8_t PLL_TS_SFT_RST_NO_REG_RD_LANE            : 1;	/*     10       r   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
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
__xdata __at( 0x3024 ) volatile TX_SPEED_CONVERT_LANE_t TX_SPEED_CONVERT_LANE;
#define reg_RX2TX_R_FIFO_CNT_LANE_4_0  TX_SPEED_CONVERT_LANE.BF.RX2TX_R_FIFO_CNT_LANE_4_0
#define reg_TXDATA_MSB_LSB_SWAP_LANE  TX_SPEED_CONVERT_LANE.BF.TXDATA_MSB_LSB_SWAP_LANE
#define reg_PLL_RS_SFT_RST_NO_REG_RD_LANE  TX_SPEED_CONVERT_LANE.BF.PLL_RS_SFT_RST_NO_REG_RD_LANE
#define reg_PLL_TS_SFT_RST_NO_REG_RD_LANE  TX_SPEED_CONVERT_LANE.BF.PLL_TS_SFT_RST_NO_REG_RD_LANE
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
		uint8_t FM_PIN_STRX_TRAIN_PAT_EN_HI_ISR_LANE     : 1;	/*      0     r/w   0*/
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
__xdata __at( 0x3028 ) volatile SPD_CTRL_INTERRUPT_REG1_LANE_t SPD_CTRL_INTERRUPT_REG1_LANE;
#define reg_FM_PIN_STRX_TRAIN_PAT_EN_HI_ISR_LANE  SPD_CTRL_INTERRUPT_REG1_LANE.BF.FM_PIN_STRX_TRAIN_PAT_EN_HI_ISR_LANE
#define reg_INT_PHY_GEN_RX_CHG_ISR_LANE  SPD_CTRL_INTERRUPT_REG1_LANE.BF.INT_PHY_GEN_RX_CHG_ISR_LANE
#define reg_INT_PHY_GEN_TX_CHG_ISR_LANE  SPD_CTRL_INTERRUPT_REG1_LANE.BF.INT_PHY_GEN_TX_CHG_ISR_LANE

// 0x002c	SPD_CTRL_INTERRUPT_REG2		Speed Control Interrupt Register 2
typedef union {
	struct {
		uint8_t FM_PIN_STRX_TRAIN_PAT_EN_HI_MASK_LANE    : 1;	/*      0     r/w   0*/
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
__xdata __at( 0x302c ) volatile SPD_CTRL_INTERRUPT_REG2_t SPD_CTRL_INTERRUPT_REG2;
#define reg_FM_PIN_STRX_TRAIN_PAT_EN_HI_MASK_LANE  SPD_CTRL_INTERRUPT_REG2.BF.FM_PIN_STRX_TRAIN_PAT_EN_HI_MASK_LANE
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
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w 6'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_TX_LANE_REG1_LANE_t;
__xdata __at( 0x3030 ) volatile SPD_CTRL_TX_LANE_REG1_LANE_t SPD_CTRL_TX_LANE_REG1_LANE;
#define reg_TXDCLK_4X_EN_LANE  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXDCLK_4X_EN_LANE
#define reg_TXDCLK_NT_EN_LANE  SPD_CTRL_TX_LANE_REG1_LANE.BF.TXDCLK_NT_EN_LANE

// 0x0034	TX_SYSTEM_LANE0		Tx System Register0
typedef union {
	struct {
		uint8_t PLL_RS_MCU_CTRL_SEL_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_MCU_CTRL_SEL_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t SHARE_PLL_MODE_LANE_1_0                  : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t RESERVED_4                               : 2;	/*  [5:4]     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CNT_INI_LANE_7_0                         : 8;	/* [15:8]     r/w 8'h95*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t SSC_AMP_LANE_6_0                         : 7;	/*[23:17]     r/w   0*/
		uint8_t SSC_DSPREAD_TX_LANE                      : 1;	/*     24     r/w   1*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t TX_SEL_BITS_RD_LANE_2_0                  : 3;	/*[28:26]       r   0*/
		uint8_t TRX_TXCLK_SEL_LANE                       : 1;	/*     29     r/w   0*/
		uint8_t TRAIN_TX_SEL_BITS_LANE                   : 1;	/*     30     r/w   1*/
		uint8_t TX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE0_t;
__xdata __at( 0x3034 ) volatile TX_SYSTEM_LANE0_t TX_SYSTEM_LANE0;
#define reg_PLL_RS_MCU_CTRL_SEL_LANE  TX_SYSTEM_LANE0.BF.PLL_RS_MCU_CTRL_SEL_LANE
#define reg_PLL_TS_MCU_CTRL_SEL_LANE  TX_SYSTEM_LANE0.BF.PLL_TS_MCU_CTRL_SEL_LANE
#define reg_SHARE_PLL_MODE_LANE_1_0  TX_SYSTEM_LANE0.BF.SHARE_PLL_MODE_LANE_1_0
#define reg_CNT_INI_LANE_7_0  TX_SYSTEM_LANE0.BF.CNT_INI_LANE_7_0
#define reg_SSC_AMP_LANE_6_0  TX_SYSTEM_LANE0.BF.SSC_AMP_LANE_6_0
#define reg_SSC_DSPREAD_TX_LANE  TX_SYSTEM_LANE0.BF.SSC_DSPREAD_TX_LANE
#define reg_TX_SEL_BITS_RD_LANE_2_0  TX_SYSTEM_LANE0.BF.TX_SEL_BITS_RD_LANE_2_0
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
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SYSTEM_LANE1_t;
__xdata __at( 0x303c ) volatile TX_SYSTEM_LANE1_t TX_SYSTEM_LANE1;
#define reg_DIG_ID_LANE_7_0  TX_SYSTEM_LANE1.BF.DIG_ID_LANE_7_0
#define reg_TX_PAM2_EN_LANE  TX_SYSTEM_LANE1.BF.TX_PAM2_EN_LANE

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
__xdata __at( 0x3044 ) volatile DIG_TX_RSVD_REG0_t DIG_TX_RSVD_REG0;
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
__xdata __at( 0x304c ) volatile TX_PLLCAL_LANE_REG1_t TX_PLLCAL_LANE_REG1;
#define reg_ANA_TX_ANA_RSVD_IN_LANE_15_0_b0  TX_PLLCAL_LANE_REG1.BF.ANA_TX_ANA_RSVD_IN_LANE_15_0_b0
#define reg_ANA_TX_ANA_RSVD_IN_LANE_15_0_b1  TX_PLLCAL_LANE_REG1.BF.ANA_TX_ANA_RSVD_IN_LANE_15_0_b1
#define reg_ANA_TX_ANA_RSVD_IN_LANE_15_0  TX_PLLCAL_LANE_REG1.WT.W0

// 0x005c	TX_RESERVED_REG1		Tx Reserved Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t TX_ANA_RSVD_OUT_RD_LANE_15_0_b0          : 8;	/*[31:16]       r   0*/
		uint8_t TX_ANA_RSVD_OUT_RD_LANE_15_0_b1          : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TX_RESERVED_REG1_t;
__xdata __at( 0x305c ) volatile TX_RESERVED_REG1_t TX_RESERVED_REG1;
#define reg_TX_ANA_RSVD_OUT_RD_LANE_15_0_b0  TX_RESERVED_REG1.BF.TX_ANA_RSVD_OUT_RD_LANE_15_0_b0
#define reg_TX_ANA_RSVD_OUT_RD_LANE_15_0_b1  TX_RESERVED_REG1.BF.TX_ANA_RSVD_OUT_RD_LANE_15_0_b1
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
__xdata __at( 0x3060 ) volatile TX_RESERVED_REG2_t TX_RESERVED_REG2;
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
__xdata __at( 0x3064 ) volatile PM_CTRL_INTERRUPT_ISR_REG1_LANE_t PM_CTRL_INTERRUPT_ISR_REG1_LANE;
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
__xdata __at( 0x3068 ) volatile SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE_t SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE;
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
__xdata __at( 0x306c ) volatile PM_PLL_REG1_LANE_t PM_PLL_REG1_LANE;
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
__xdata __at( 0x3070 ) volatile PM_PLL_REG2_LANE_t PM_PLL_REG2_LANE;
#define reg_REF1M_GEN_DIV_LANE_7_0  PM_PLL_REG2_LANE.BF.REF1M_GEN_DIV_LANE_7_0

// 0x007c	DTX_REG2		DTX Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t REPEAT_MODE_DIS_LANE                     : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
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
__xdata __at( 0x307c ) volatile DTX_REG2_t DTX_REG2;
#define reg_REPEAT_MODE_DIS_LANE  DTX_REG2.BF.REPEAT_MODE_DIS_LANE
#define reg_RX2TX_FREQ_TRAN_EN_LANE  DTX_REG2.BF.RX2TX_FREQ_TRAN_EN_LANE
#define reg_RX2TX_RATIO_LANE_2_0  DTX_REG2.BF.RX2TX_RATIO_LANE_2_0
#define reg_RX2TX_RATIO_FORCE_LANE  DTX_REG2.BF.RX2TX_RATIO_FORCE_LANE
#define reg_RX2TX_W_FIFO_CNT_LANE_4_0  DTX_REG2.BF.RX2TX_W_FIFO_CNT_LANE_4_0
#define reg_RX2TX_FIFO_CNT_RD_REQ_LANE  DTX_REG2.BF.RX2TX_FIFO_CNT_RD_REQ_LANE

// 0x0080	LANE_ALIGNMENT_REG1		Lane_alignment Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t ALIGN_FM_INT_LANE                        : 1;	/*      1     r/w   1*/
		uint8_t ALIGN_EXT_FM_SIDE_A_LANE                 : 1;	/*      2     r/w   0*/
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
__xdata __at( 0x3080 ) volatile LANE_ALIGNMENT_REG1_t LANE_ALIGNMENT_REG1;
#define reg_ALIGN_FM_INT_LANE  LANE_ALIGNMENT_REG1.BF.ALIGN_FM_INT_LANE
#define reg_ALIGN_EXT_FM_SIDE_A_LANE  LANE_ALIGNMENT_REG1.BF.ALIGN_EXT_FM_SIDE_A_LANE
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
__xdata __at( 0x3084 ) volatile MON_TOP_t MON_TOP;
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
__xdata __at( 0x3088 ) volatile PM_CTRL_TX_LANE_REG3_LANE_t PM_CTRL_TX_LANE_REG3_LANE;
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
__xdata __at( 0x308c ) volatile LANE_ALIGNMENT_REG2_t LANE_ALIGNMENT_REG2;
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
__xdata __at( 0x3090 ) volatile LANE_ALIGNMENT_REG3_t LANE_ALIGNMENT_REG3;
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
		uint8_t PT_TX_PRBS_ENC_EN_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 3;	/*[19:17]     r/w   0*/
		uint8_t PT_TX_START_RD_LANE                      : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t PT_TX_PATTERN_SEL_LANE_5_0               : 6;	/*[29:24]     r/w 6'h10*/
		uint8_t PT_TX_PHYREADY_FORCE_LANE                : 1;	/*     30     r/w   0*/
		uint8_t PT_TX_EN_LANE                            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_TX0_t;
__xdata __at( 0x3098 ) volatile PHYTEST_TX0_t PHYTEST_TX0;
#define reg_PT_TX_MODE2_RST_DIS_LANE  PHYTEST_TX0.BF.PT_TX_MODE2_RST_DIS_LANE
#define reg_TX_TRAIN_PAT_FORCE_LANE  PHYTEST_TX0.BF.TX_TRAIN_PAT_FORCE_LANE
#define reg_PT_TX_EN_MODE_LANE_1_0  PHYTEST_TX0.BF.PT_TX_EN_MODE_LANE_1_0
#define reg_TX_TRAIN_POLY_SEL_FM_PIN_LANE  PHYTEST_TX0.BF.TX_TRAIN_POLY_SEL_FM_PIN_LANE
#define reg_PT_TX_RST_LANE  PHYTEST_TX0.BF.PT_TX_RST_LANE
#define reg_PT_TX_PRBS_GRAY_EN_LANE  PHYTEST_TX0.BF.PT_TX_PRBS_GRAY_EN_LANE
#define reg_PT_TX_PRBS_INV_LANE  PHYTEST_TX0.BF.PT_TX_PRBS_INV_LANE
#define reg_PT_TX_SSPRQ_INV_LANE  PHYTEST_TX0.BF.PT_TX_SSPRQ_INV_LANE
#define reg_SSPRQ_UI_DLY_CTRL_LANE_4_0  PHYTEST_TX0.BF.SSPRQ_UI_DLY_CTRL_LANE_4_0
#define reg_PT_TX_PRBS_ENC_EN_LANE  PHYTEST_TX0.BF.PT_TX_PRBS_ENC_EN_LANE
#define reg_PT_TX_START_RD_LANE  PHYTEST_TX0.BF.PT_TX_START_RD_LANE
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
__xdata __at( 0x309c ) volatile PHYTEST_TX1_t PHYTEST_TX1;
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
__xdata __at( 0x30a0 ) volatile PHYTEST_TX2_t PHYTEST_TX2;
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b0  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b0
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b1  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b1
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b2  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b2
#define reg_PT_TX_USER_PATTERN_LANE_47_16_b3  PHYTEST_TX2.BF.PT_TX_USER_PATTERN_LANE_47_16_b3

// 0x00a4	PHYTEST_TX3		PHYTEST Control Registers 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t PT_TX_USER_K_CHAR_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t PT_TX_USER_PATTERN_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHYTEST_TX3_t;
__xdata __at( 0x30a4 ) volatile PHYTEST_TX3_t PHYTEST_TX3;
#define reg_PT_TX_USER_K_CHAR_LANE_7_0  PHYTEST_TX3.BF.PT_TX_USER_K_CHAR_LANE_7_0
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
__xdata __at( 0x30a8 ) volatile PHYTEST_TX4_t PHYTEST_TX4;
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b0  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b0
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b1  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b1
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b2  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b2
#define reg_PT_TX_PRBS_SEED_LANE_31_0_b3  PHYTEST_TX4.BF.PT_TX_PRBS_SEED_LANE_31_0_b3

// 0x00ac	INPUT_TX_PIN_REG4_LANE		Input Interface Tx Lane Reg4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 2;	/*  [2:1]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w   0*/
		uint8_t REFCLK_DIS_ACK_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t REFCLK_DIS_ACK_FORCE_LANE                : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 2;	/*[22:21]     r/w   0*/
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
} INPUT_TX_PIN_REG4_LANE_t;
__xdata __at( 0x30ac ) volatile INPUT_TX_PIN_REG4_LANE_t INPUT_TX_PIN_REG4_LANE;
#define reg_REFCLK_DIS_ACK_LANE  INPUT_TX_PIN_REG4_LANE.BF.REFCLK_DIS_ACK_LANE
#define reg_REFCLK_DIS_ACK_FORCE_LANE  INPUT_TX_PIN_REG4_LANE.BF.REFCLK_DIS_ACK_FORCE_LANE

// 0x00b0	INPUT_TX_PIN_REG5_LANE		Input Interface Tx Lane Reg5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG5_LANE_t;
__xdata __at( 0x30b0 ) volatile INPUT_TX_PIN_REG5_LANE_t INPUT_TX_PIN_REG5_LANE;

// 0x00b4	INPUT_TX_PIN_REG6_LANE		Input Interface Tx Lane Reg6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [17:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [17:0]     r/w   0*/
		uint8_t RESERVED_16                              : 2;	/* [17:0]     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_TX_PIN_REG6_LANE_t;
__xdata __at( 0x30b4 ) volatile INPUT_TX_PIN_REG6_LANE_t INPUT_TX_PIN_REG6_LANE;

// 0x00b8	INPUT_TX_PIN_REG7_LANE		Input Interface Tx Lane Reg7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[19:15]     r/w   0*/
		uint8_t RESERVED_16                              : 4;	/*[19:15]     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
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
} INPUT_TX_PIN_REG7_LANE_t;
__xdata __at( 0x30b8 ) volatile INPUT_TX_PIN_REG7_LANE_t INPUT_TX_PIN_REG7_LANE;

// 0x00bc	PHYTEST_OOB_CTRL		PHYTest OOB Control
typedef union {
	struct {
		uint8_t PT_TX_OOB_BURST_LEN_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t PT_TX_OOB_IDLE_LEN_LANE_7_0              : 8;	/* [15:8]     r/w 8'h30*/
		uint8_t PT_TX_OOB_PAT_SEL_LANE_1_0               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t PT_TX_OOB_SPEED_LANE_1_0                 : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t PT_TX_OOB_EN_LANE                        : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t PT_TX_SATA_LONG_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*[31:23]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:23]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHYTEST_OOB_CTRL_t;
__xdata __at( 0x30bc ) volatile PHYTEST_OOB_CTRL_t PHYTEST_OOB_CTRL;
#define reg_PT_TX_OOB_BURST_LEN_LANE_7_0  PHYTEST_OOB_CTRL.BF.PT_TX_OOB_BURST_LEN_LANE_7_0
#define reg_PT_TX_OOB_IDLE_LEN_LANE_7_0  PHYTEST_OOB_CTRL.BF.PT_TX_OOB_IDLE_LEN_LANE_7_0
#define reg_PT_TX_OOB_PAT_SEL_LANE_1_0  PHYTEST_OOB_CTRL.BF.PT_TX_OOB_PAT_SEL_LANE_1_0
#define reg_PT_TX_OOB_SPEED_LANE_1_0  PHYTEST_OOB_CTRL.BF.PT_TX_OOB_SPEED_LANE_1_0
#define reg_PT_TX_OOB_EN_LANE  PHYTEST_OOB_CTRL.BF.PT_TX_OOB_EN_LANE
#define reg_PT_TX_SATA_LONG_LANE  PHYTEST_OOB_CTRL.BF.PT_TX_SATA_LONG_LANE

// 0x00c0	TX_TRAINING_IF_REG1		Tx_Training_IF_reg1
typedef union {
	struct {
		uint8_t TX_TRAIN_PAT_NUM_LANE_9_0_b0             : 8;	/*  [9:0]     r/w 10'h42*/
		uint8_t TX_TRAIN_PAT_NUM_LANE_9_0_b1             : 2;	/*  [9:0]     r/w 10'h42*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG1_t;
__xdata __at( 0x30c0 ) volatile TX_TRAINING_IF_REG1_t TX_TRAINING_IF_REG1;
#define reg_TX_TRAIN_PAT_NUM_LANE_9_0_b0  TX_TRAINING_IF_REG1.BF.TX_TRAIN_PAT_NUM_LANE_9_0_b0
#define reg_TX_TRAIN_PAT_NUM_LANE_9_0_b1  TX_TRAINING_IF_REG1.BF.TX_TRAIN_PAT_NUM_LANE_9_0_b1

// 0x00c4	TX_TRAINING_IF_REG2		Tx_Training_IF_reg2
typedef union {
	struct {
		uint8_t TX_TRAIN_PAT_TOGGLE_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_LANE                   : 1;	/*      1     r/w   1*/
		uint8_t FORCE_PLL_READY_TX_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t FORCE_SEL_BITS_TX_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t FORCE_CONTROL_TX_EN_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t STRX_TRAIN_COE_VALID_DLY_LANE_1_0        : 2;	/*  [6:5]     r/w 2'b00*/
		uint8_t AUTO_FORCE_DIS_TX_LANE                   : 1;	/*      7     r/w   0*/
		uint8_t CTRL_FIELD_START_ADJUST_LANE_1_0         : 2;	/*  [9:8]     r/w 2'b00*/
		uint8_t FORCE_TX_TRAIN_PAT_TX_EN_LANE            : 1;	/*     10     r/w   0*/
		uint8_t DME_ENC_MODE_LANE_1_0                    : 2;	/*[12:11]     r/w 2'h0*/
		uint8_t TX_VREF_TXDRV_SEL_FORCE_LANE             : 1;	/*     13     r/w   0*/
		uint8_t TX_VREF_TXDRV_SEL_FM_MARGIN_PCIE_EN_LANE : 1;	/*     14     r/w   0*/
		uint8_t TX_TRAIN_DIS_CLK_TX_EN_LANE              : 1;	/*     15     r/w   1*/
		uint8_t TX_VREF_TX_SEL_LANE_3_0                  : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t TX_TRAIN_IF_TX_CLK_EN_LANE               : 1;	/*     20     r/w   1*/
		uint8_t TX_TRAIN_IF_TX_CLK_ON_LANE               : 1;	/*     21     r/w   0*/
		uint8_t RST_TX_TRAIN_IF_TX_CLK_LANE              : 1;	/*     22     r/w   0*/
		uint8_t DME_ENC_CLK_EN_LANE                      : 1;	/*     23     r/w   1*/
		uint8_t DME_ENC_CLK_ON_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t RST_DME_ENC_CLK_LANE                     : 1;	/*     25     r/w   0*/
		uint8_t TX_TRAIN_MSB_LSB_SWAP_LANE               : 1;	/*     26     r/w   0*/
		uint8_t TX_TRAIN_PRE_CODE_MSB_LSB_SWAP_LANE      : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG2_t;
__xdata __at( 0x30c4 ) volatile TX_TRAINING_IF_REG2_t TX_TRAINING_IF_REG2;
#define reg_TX_TRAIN_PAT_TOGGLE_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_PAT_TOGGLE_LANE
#define reg_TX_TRAIN_PAT_MODE_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_PAT_MODE_LANE
#define reg_FORCE_PLL_READY_TX_LANE  TX_TRAINING_IF_REG2.BF.FORCE_PLL_READY_TX_LANE
#define reg_FORCE_SEL_BITS_TX_LANE  TX_TRAINING_IF_REG2.BF.FORCE_SEL_BITS_TX_LANE
#define reg_FORCE_CONTROL_TX_EN_LANE  TX_TRAINING_IF_REG2.BF.FORCE_CONTROL_TX_EN_LANE
#define reg_STRX_TRAIN_COE_VALID_DLY_LANE_1_0  TX_TRAINING_IF_REG2.BF.STRX_TRAIN_COE_VALID_DLY_LANE_1_0
#define reg_AUTO_FORCE_DIS_TX_LANE  TX_TRAINING_IF_REG2.BF.AUTO_FORCE_DIS_TX_LANE
#define reg_CTRL_FIELD_START_ADJUST_LANE_1_0  TX_TRAINING_IF_REG2.BF.CTRL_FIELD_START_ADJUST_LANE_1_0
#define reg_FORCE_TX_TRAIN_PAT_TX_EN_LANE  TX_TRAINING_IF_REG2.BF.FORCE_TX_TRAIN_PAT_TX_EN_LANE
#define reg_DME_ENC_MODE_LANE_1_0  TX_TRAINING_IF_REG2.BF.DME_ENC_MODE_LANE_1_0
#define reg_TX_VREF_TXDRV_SEL_FORCE_LANE  TX_TRAINING_IF_REG2.BF.TX_VREF_TXDRV_SEL_FORCE_LANE
#define reg_TX_VREF_TXDRV_SEL_FM_MARGIN_PCIE_EN_LANE  TX_TRAINING_IF_REG2.BF.TX_VREF_TXDRV_SEL_FM_MARGIN_PCIE_EN_LANE
#define reg_TX_TRAIN_DIS_CLK_TX_EN_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_DIS_CLK_TX_EN_LANE
#define reg_TX_VREF_TX_SEL_LANE_3_0  TX_TRAINING_IF_REG2.BF.TX_VREF_TX_SEL_LANE_3_0
#define reg_TX_TRAIN_IF_TX_CLK_EN_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_IF_TX_CLK_EN_LANE
#define reg_TX_TRAIN_IF_TX_CLK_ON_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_IF_TX_CLK_ON_LANE
#define reg_RST_TX_TRAIN_IF_TX_CLK_LANE  TX_TRAINING_IF_REG2.BF.RST_TX_TRAIN_IF_TX_CLK_LANE
#define reg_DME_ENC_CLK_EN_LANE  TX_TRAINING_IF_REG2.BF.DME_ENC_CLK_EN_LANE
#define reg_DME_ENC_CLK_ON_LANE  TX_TRAINING_IF_REG2.BF.DME_ENC_CLK_ON_LANE
#define reg_RST_DME_ENC_CLK_LANE  TX_TRAINING_IF_REG2.BF.RST_DME_ENC_CLK_LANE
#define reg_TX_TRAIN_MSB_LSB_SWAP_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_MSB_LSB_SWAP_LANE
#define reg_TX_TRAIN_PRE_CODE_MSB_LSB_SWAP_LANE  TX_TRAINING_IF_REG2.BF.TX_TRAIN_PRE_CODE_MSB_LSB_SWAP_LANE

// 0x00c8	TX_TRAINING_IF_REG3		
typedef union {
	struct {
		uint8_t ETHERNET_MODE_TX_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/* [30:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [30:2]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [30:2]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/* [30:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TWO_ZERO_LANE               : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG3_t;
__xdata __at( 0x30c8 ) volatile TX_TRAINING_IF_REG3_t TX_TRAINING_IF_REG3;
#define reg_ETHERNET_MODE_TX_LANE_1_0  TX_TRAINING_IF_REG3.BF.ETHERNET_MODE_TX_LANE_1_0
#define reg_TX_TRAIN_PAT_TWO_ZERO_LANE  TX_TRAINING_IF_REG3.BF.TX_TRAIN_PAT_TWO_ZERO_LANE

// 0x00cc	TX_TRAINING_IF_REG4		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_FIR_C3_LANE_5_0                       : 6;	/*  [6:1]     r/w 6'h3f*/
		uint8_t TX_FIR_C3_FORCE_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t TX_FIR_C2_LANE_5_0                       : 6;	/* [14:9]     r/w   0*/
		uint8_t TX_FIR_C2_FORCE_LANE                     : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t TX_FIR_C1_LANE_5_0                       : 6;	/*[22:17]     r/w   0*/
		uint8_t TX_FIR_C1_FORCE_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t TX_FIR_C0_LANE_5_0                       : 6;	/*[29:24]     r/w   0*/
		uint8_t TX_FIR_C0_FORCE_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t FM_PIN_STRX_TRAIN_PAT_EN_HI_ISR_CLEAR_LANE : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG4_t;
__xdata __at( 0x30cc ) volatile TX_TRAINING_IF_REG4_t TX_TRAINING_IF_REG4;
#define reg_TX_FIR_C3_LANE_5_0  TX_TRAINING_IF_REG4.BF.TX_FIR_C3_LANE_5_0
#define reg_TX_FIR_C3_FORCE_LANE  TX_TRAINING_IF_REG4.BF.TX_FIR_C3_FORCE_LANE
#define reg_TX_FIR_C2_LANE_5_0  TX_TRAINING_IF_REG4.BF.TX_FIR_C2_LANE_5_0
#define reg_TX_FIR_C2_FORCE_LANE  TX_TRAINING_IF_REG4.BF.TX_FIR_C2_FORCE_LANE
#define reg_TX_FIR_C1_LANE_5_0  TX_TRAINING_IF_REG4.BF.TX_FIR_C1_LANE_5_0
#define reg_TX_FIR_C1_FORCE_LANE  TX_TRAINING_IF_REG4.BF.TX_FIR_C1_FORCE_LANE
#define reg_TX_FIR_C0_LANE_5_0  TX_TRAINING_IF_REG4.BF.TX_FIR_C0_LANE_5_0
#define reg_TX_FIR_C0_FORCE_LANE  TX_TRAINING_IF_REG4.BF.TX_FIR_C0_FORCE_LANE
#define reg_FM_PIN_STRX_TRAIN_PAT_EN_HI_ISR_CLEAR_LANE  TX_TRAINING_IF_REG4.BF.FM_PIN_STRX_TRAIN_PAT_EN_HI_ISR_CLEAR_LANE

// 0x00d0	TX_TRAINING_IF_REG5		
typedef union {
	struct {
		uint8_t TX_FIR_TAP_POL_FORCE_LANE                : 1;	/*      0     r/w   0*/
		uint8_t TX_FIR_TAP_POL_LANE_5_0                  : 6;	/*  [6:1]     r/w 6'h0a*/
		uint8_t TX_FIR_UPDATE_FORCE_LANE                 : 1;	/*      7     r/w   0*/
		uint8_t TX_FIR_UPDATE_LANE                       : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [16:9]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/* [16:9]     r/w   0*/
		uint8_t TX_FIR_C5_LANE_5_0                       : 6;	/*[22:17]     r/w   0*/
		uint8_t TX_FIR_C5_FORCE_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t TX_FIR_C4_LANE_5_0                       : 6;	/*[30:25]     r/w   0*/
		uint8_t TX_FIR_C4_FORCE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG5_t;
__xdata __at( 0x30d0 ) volatile TX_TRAINING_IF_REG5_t TX_TRAINING_IF_REG5;
#define reg_TX_FIR_TAP_POL_FORCE_LANE  TX_TRAINING_IF_REG5.BF.TX_FIR_TAP_POL_FORCE_LANE
#define reg_TX_FIR_TAP_POL_LANE_5_0  TX_TRAINING_IF_REG5.BF.TX_FIR_TAP_POL_LANE_5_0
#define reg_TX_FIR_UPDATE_FORCE_LANE  TX_TRAINING_IF_REG5.BF.TX_FIR_UPDATE_FORCE_LANE
#define reg_TX_FIR_UPDATE_LANE  TX_TRAINING_IF_REG5.BF.TX_FIR_UPDATE_LANE
#define reg_TX_FIR_C5_LANE_5_0  TX_TRAINING_IF_REG5.BF.TX_FIR_C5_LANE_5_0
#define reg_TX_FIR_C5_FORCE_LANE  TX_TRAINING_IF_REG5.BF.TX_FIR_C5_FORCE_LANE
#define reg_TX_FIR_C4_LANE_5_0  TX_TRAINING_IF_REG5.BF.TX_FIR_C4_LANE_5_0
#define reg_TX_FIR_C4_FORCE_LANE  TX_TRAINING_IF_REG5.BF.TX_FIR_C4_FORCE_LANE

// 0x00d4	TX_TRAINING_IF_REG6		
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
} TX_TRAINING_IF_REG6_t;
__xdata __at( 0x30d4 ) volatile TX_TRAINING_IF_REG6_t TX_TRAINING_IF_REG6;
#define reg_TO_ANA_TX_FIR_C3_LANE_5_0  TX_TRAINING_IF_REG6.BF.TO_ANA_TX_FIR_C3_LANE_5_0
#define reg_TO_ANA_TX_FIR_C2_LANE_5_0  TX_TRAINING_IF_REG6.BF.TO_ANA_TX_FIR_C2_LANE_5_0
#define reg_TO_ANA_TX_FIR_C1_LANE_5_0  TX_TRAINING_IF_REG6.BF.TO_ANA_TX_FIR_C1_LANE_5_0
#define reg_TO_ANA_TX_FIR_C0_LANE_5_0  TX_TRAINING_IF_REG6.BF.TO_ANA_TX_FIR_C0_LANE_5_0

// 0x00d8	TX_TRAINING_IF_REG7		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TX_FIR_TAP_P_LANE_5_0                    : 6;	/*  [6:1]     r/w   0*/
		uint8_t TX_FIR_TAP_P_FORCE_LANE                  : 1;	/*      7     r/w   0*/
		uint8_t TO_ANA_TX_FIR_TAP_POL_LANE_5_0           : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C5_LANE_5_0                : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TO_ANA_TX_FIR_C4_LANE_5_0                : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t TO_ANA_TX_FIR_UPDATE_LANE                : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG7_t;
__xdata __at( 0x30d8 ) volatile TX_TRAINING_IF_REG7_t TX_TRAINING_IF_REG7;
#define reg_TX_FIR_TAP_P_LANE_5_0  TX_TRAINING_IF_REG7.BF.TX_FIR_TAP_P_LANE_5_0
#define reg_TX_FIR_TAP_P_FORCE_LANE  TX_TRAINING_IF_REG7.BF.TX_FIR_TAP_P_FORCE_LANE
#define reg_TO_ANA_TX_FIR_TAP_POL_LANE_5_0  TX_TRAINING_IF_REG7.BF.TO_ANA_TX_FIR_TAP_POL_LANE_5_0
#define reg_TO_ANA_TX_FIR_C5_LANE_5_0  TX_TRAINING_IF_REG7.BF.TO_ANA_TX_FIR_C5_LANE_5_0
#define reg_TO_ANA_TX_FIR_C4_LANE_5_0  TX_TRAINING_IF_REG7.BF.TO_ANA_TX_FIR_C4_LANE_5_0
#define reg_TO_ANA_TX_FIR_UPDATE_LANE  TX_TRAINING_IF_REG7.BF.TO_ANA_TX_FIR_UPDATE_LANE

// 0x00dc	TX_TRAINING_IF_REG8		
typedef union {
	struct {
		uint8_t TX_MARGIN_V0_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t TX_MARGIN_V1_LANE_3_0                    : 4;	/*  [7:4]     r/w 4'h7*/
		uint8_t TX_MARGIN_V2_LANE_3_0                    : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t TX_MARGIN_V3_LANE_3_0                    : 4;	/*[15:12]     r/w 4'h5*/
		uint8_t TX_MARGIN_V4_LANE_3_0                    : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t TX_MARGIN_V5_LANE_3_0                    : 4;	/*[23:20]     r/w 4'h3*/
		uint8_t TX_MARGIN_V6_LANE_3_0                    : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t TX_MARGIN_V7_LANE_3_0                    : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAINING_IF_REG8_t;
__xdata __at( 0x30dc ) volatile TX_TRAINING_IF_REG8_t TX_TRAINING_IF_REG8;
#define reg_TX_MARGIN_V0_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V0_LANE_3_0
#define reg_TX_MARGIN_V1_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V1_LANE_3_0
#define reg_TX_MARGIN_V2_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V2_LANE_3_0
#define reg_TX_MARGIN_V3_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V3_LANE_3_0
#define reg_TX_MARGIN_V4_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V4_LANE_3_0
#define reg_TX_MARGIN_V5_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V5_LANE_3_0
#define reg_TX_MARGIN_V6_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V6_LANE_3_0
#define reg_TX_MARGIN_V7_LANE_3_0  TX_TRAINING_IF_REG8.BF.TX_MARGIN_V7_LANE_3_0

// 0x00e0	TX_GEAR_BOX_REG0		
typedef union {
	struct {
		uint8_t TX_GB_CLK_RST_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TX_GB_TXCLK_EN_LANE                      : 1;	/*      1     r/w   1*/
		uint8_t TX_GB_TXCLK_ON_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t TRAIN_TXCLK_SWITCH_EN_LANE               : 1;	/*      3     r/w   0*/
		uint8_t TX_GB_FIFO_EN_LANE                       : 1;	/*      4     r/w   0*/
		uint8_t TX_GB_FIFO_EN_FORCE_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t TX_MUX_CLK_SEL_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t TX_MUX_CLK_SEL_FORCE_LANE                : 1;	/*      7     r/w   0*/
		uint8_t TX_TRAIN_SEL_BITS_RD_LANE_2_0            : 3;	/* [10:8]       r 3'h0*/
		uint8_t TX_GB_FIFO_PTR_VALID_LANE                : 1;	/*     11     r/w   0*/
		uint8_t TX_DP_SEL_BITS_RD_LANE_2_0               : 3;	/*[14:12]       r 3'h0*/
		uint8_t TX_GB_OUT_SEL_LANE                       : 1;	/*     15     r/w   0*/
		uint8_t TX_GB_TRAIN_CLK_EN_LANE                  : 1;	/*     16     r/w   1*/
		uint8_t TX_GB_TRAIN_CLK_ON_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_GEAR_BOX_REG0_t;
__xdata __at( 0x30e0 ) volatile TX_GEAR_BOX_REG0_t TX_GEAR_BOX_REG0;
#define reg_TX_GB_CLK_RST_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_CLK_RST_LANE
#define reg_TX_GB_TXCLK_EN_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_TXCLK_EN_LANE
#define reg_TX_GB_TXCLK_ON_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_TXCLK_ON_LANE
#define reg_TRAIN_TXCLK_SWITCH_EN_LANE  TX_GEAR_BOX_REG0.BF.TRAIN_TXCLK_SWITCH_EN_LANE
#define reg_TX_GB_FIFO_EN_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_FIFO_EN_LANE
#define reg_TX_GB_FIFO_EN_FORCE_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_FIFO_EN_FORCE_LANE
#define reg_TX_MUX_CLK_SEL_LANE  TX_GEAR_BOX_REG0.BF.TX_MUX_CLK_SEL_LANE
#define reg_TX_MUX_CLK_SEL_FORCE_LANE  TX_GEAR_BOX_REG0.BF.TX_MUX_CLK_SEL_FORCE_LANE
#define reg_TX_TRAIN_SEL_BITS_RD_LANE_2_0  TX_GEAR_BOX_REG0.BF.TX_TRAIN_SEL_BITS_RD_LANE_2_0
#define reg_TX_GB_FIFO_PTR_VALID_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_FIFO_PTR_VALID_LANE
#define reg_TX_DP_SEL_BITS_RD_LANE_2_0  TX_GEAR_BOX_REG0.BF.TX_DP_SEL_BITS_RD_LANE_2_0
#define reg_TX_GB_OUT_SEL_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_OUT_SEL_LANE
#define reg_TX_GB_TRAIN_CLK_EN_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_TRAIN_CLK_EN_LANE
#define reg_TX_GB_TRAIN_CLK_ON_LANE  TX_GEAR_BOX_REG0.BF.TX_GB_TRAIN_CLK_ON_LANE

// 0x00f4	TX_GEAR_BOX_REG1		
typedef union {
	struct {
		uint8_t TO_ANA_TX_TXCLK_TRAIN_EN_LANE            : 1;	/*      0     r/w   0*/
		uint8_t INT_TX_TRAIN_GB_IDLE_LANE                : 1;	/*      1     r/w   1*/
		uint8_t INT_DIG_TX_TXCLK_TRAIN_EN_LANE           : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t TO_ANA_TX_TXCLK_TRAIN_EN_FORCE_LANE      : 1;	/*      4     r/w   0*/
		uint8_t INT_TX_TRAIN_GB_IDLE_FORCE_LANE          : 1;	/*      5     r/w   0*/
		uint8_t INT_DIG_TX_TXCLK_TRAIN_EN_FORCE_LANE     : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TO_ANA_TX_TRAIN_SEL_BITS_FORCE_LANE      : 1;	/*      8     r/w   0*/
		uint8_t TO_ANA_TX_SEL_BITS_FORCE_LANE            : 1;	/*      9     r/w   0*/
		uint8_t TO_ANA_TX_TRAIN_SEL_BITS_LANE            : 1;	/*     10     r/w   0*/
		uint8_t TO_ANA_TX_SEL_BITS_LANE                  : 1;	/*     11     r/w   0*/
		uint8_t TX_TRAIN_SEL_BITS_LANE_2_0               : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t TX_TRAIN_SEL_BITS_FORCE_LANE             : 1;	/*     15     r/w   0*/
		uint8_t TX_PT_SEL_BITS_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t TX_PT_SEL_BITS_FORCE_LANE                : 1;	/*     19     r/w   0*/
		uint8_t TX_DP_SEL_BITS_LANE_2_0                  : 3;	/*[22:20]     r/w 3'h0*/
		uint8_t TX_DP_SEL_BITS_FORCE_LANE                : 1;	/*     23     r/w   0*/
		uint8_t TX_GB_FIFO_WR_PTR_LANE_3_0               : 4;	/*[27:24]       r 4'h0*/
		uint8_t TX_GB_FIFO_RD_PTR_LANE_3_0               : 4;	/*[31:28]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_GEAR_BOX_REG1_t;
__xdata __at( 0x30f4 ) volatile TX_GEAR_BOX_REG1_t TX_GEAR_BOX_REG1;
#define reg_TO_ANA_TX_TXCLK_TRAIN_EN_LANE  TX_GEAR_BOX_REG1.BF.TO_ANA_TX_TXCLK_TRAIN_EN_LANE
#define reg_INT_TX_TRAIN_GB_IDLE_LANE  TX_GEAR_BOX_REG1.BF.INT_TX_TRAIN_GB_IDLE_LANE
#define reg_INT_DIG_TX_TXCLK_TRAIN_EN_LANE  TX_GEAR_BOX_REG1.BF.INT_DIG_TX_TXCLK_TRAIN_EN_LANE
#define reg_TO_ANA_TX_TXCLK_TRAIN_EN_FORCE_LANE  TX_GEAR_BOX_REG1.BF.TO_ANA_TX_TXCLK_TRAIN_EN_FORCE_LANE
#define reg_INT_TX_TRAIN_GB_IDLE_FORCE_LANE  TX_GEAR_BOX_REG1.BF.INT_TX_TRAIN_GB_IDLE_FORCE_LANE
#define reg_INT_DIG_TX_TXCLK_TRAIN_EN_FORCE_LANE  TX_GEAR_BOX_REG1.BF.INT_DIG_TX_TXCLK_TRAIN_EN_FORCE_LANE
#define reg_TO_ANA_TX_TRAIN_SEL_BITS_FORCE_LANE  TX_GEAR_BOX_REG1.BF.TO_ANA_TX_TRAIN_SEL_BITS_FORCE_LANE
#define reg_TO_ANA_TX_SEL_BITS_FORCE_LANE  TX_GEAR_BOX_REG1.BF.TO_ANA_TX_SEL_BITS_FORCE_LANE
#define reg_TO_ANA_TX_TRAIN_SEL_BITS_LANE  TX_GEAR_BOX_REG1.BF.TO_ANA_TX_TRAIN_SEL_BITS_LANE
#define reg_TO_ANA_TX_SEL_BITS_LANE  TX_GEAR_BOX_REG1.BF.TO_ANA_TX_SEL_BITS_LANE
#define reg_TX_TRAIN_SEL_BITS_LANE_2_0  TX_GEAR_BOX_REG1.BF.TX_TRAIN_SEL_BITS_LANE_2_0
#define reg_TX_TRAIN_SEL_BITS_FORCE_LANE  TX_GEAR_BOX_REG1.BF.TX_TRAIN_SEL_BITS_FORCE_LANE
#define reg_TX_PT_SEL_BITS_LANE_2_0  TX_GEAR_BOX_REG1.BF.TX_PT_SEL_BITS_LANE_2_0
#define reg_TX_PT_SEL_BITS_FORCE_LANE  TX_GEAR_BOX_REG1.BF.TX_PT_SEL_BITS_FORCE_LANE
#define reg_TX_DP_SEL_BITS_LANE_2_0  TX_GEAR_BOX_REG1.BF.TX_DP_SEL_BITS_LANE_2_0
#define reg_TX_DP_SEL_BITS_FORCE_LANE  TX_GEAR_BOX_REG1.BF.TX_DP_SEL_BITS_FORCE_LANE
#define reg_TX_GB_FIFO_WR_PTR_LANE_3_0  TX_GEAR_BOX_REG1.BF.TX_GB_FIFO_WR_PTR_LANE_3_0
#define reg_TX_GB_FIFO_RD_PTR_LANE_3_0  TX_GEAR_BOX_REG1.BF.TX_GB_FIFO_RD_PTR_LANE_3_0

// 0x00f8	TX_PCIE_TRAIN_REG0		
typedef union {
	struct {
		uint8_t TX_AMP_PIPE2_LANE_6_0                    : 7;	/*  [6:0]     r/w 7'h2d*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH1_PIPE2_LANE_4_0                  : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t PCIE_GEN12_SEL_LANE                      : 1;	/*     13     r/w   1*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_AMP_PIPE0_LANE_6_0                    : 7;	/*[22:16]     r/w 7'h21*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH1_PIPE0_LANE_4_0                  : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_PCIE_TRAIN_REG0_t;
__xdata __at( 0x30f8 ) volatile TX_PCIE_TRAIN_REG0_t TX_PCIE_TRAIN_REG0;
#define reg_TX_AMP_PIPE2_LANE_6_0  TX_PCIE_TRAIN_REG0.BF.TX_AMP_PIPE2_LANE_6_0
#define reg_TX_EMPH1_PIPE2_LANE_4_0  TX_PCIE_TRAIN_REG0.BF.TX_EMPH1_PIPE2_LANE_4_0
#define reg_PCIE_GEN12_SEL_LANE  TX_PCIE_TRAIN_REG0.BF.PCIE_GEN12_SEL_LANE
#define reg_TX_AMP_PIPE0_LANE_6_0  TX_PCIE_TRAIN_REG0.BF.TX_AMP_PIPE0_LANE_6_0
#define reg_TX_EMPH1_PIPE0_LANE_4_0  TX_PCIE_TRAIN_REG0.BF.TX_EMPH1_PIPE0_LANE_4_0

// 0x00fc	TX_PCIE_TRAIN_REG1		
typedef union {
	struct {
		uint8_t TX_AMP_PIPE1_LANE_6_0                    : 7;	/*  [6:0]     r/w 7'h25*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH1_PIPE1_LANE_4_0                  : 5;	/* [12:8]     r/w 5'h8*/
		uint8_t RESERVED_13                              : 3;	/*[21:13]     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:13]     r/w   0*/
		uint8_t PCIE_MODE_LANE                           : 1;	/*     22     r/w   0*/
		uint8_t TX_COE_FM_PIN_PCIE3_EN_LANE              : 1;	/*     23     r/w   1*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t TX_AMP_OFFSET_PCIE_LANE_6_0              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_PCIE_TRAIN_REG1_t;
__xdata __at( 0x30fc ) volatile TX_PCIE_TRAIN_REG1_t TX_PCIE_TRAIN_REG1;
#define reg_TX_AMP_PIPE1_LANE_6_0  TX_PCIE_TRAIN_REG1.BF.TX_AMP_PIPE1_LANE_6_0
#define reg_TX_EMPH1_PIPE1_LANE_4_0  TX_PCIE_TRAIN_REG1.BF.TX_EMPH1_PIPE1_LANE_4_0
#define reg_PCIE_MODE_LANE  TX_PCIE_TRAIN_REG1.BF.PCIE_MODE_LANE
#define reg_TX_COE_FM_PIN_PCIE3_EN_LANE  TX_PCIE_TRAIN_REG1.BF.TX_COE_FM_PIN_PCIE3_EN_LANE
#define reg_TX_AMP_OFFSET_PCIE_LANE_6_0  TX_PCIE_TRAIN_REG1.BF.TX_AMP_OFFSET_PCIE_LANE_6_0

#endif
