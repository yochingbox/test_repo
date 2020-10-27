#ifndef PHY_REG_C_PIPE_LANE_H
#define PHY_REG_C_PIPE_LANE_H



// 0x0000	LANE_CFG0		Lane Configuration 0
typedef union {
	struct {
		uint8_t PRD_TXDEEMPH0_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t PRD_TXDEEMPH1_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t PRD_TXMARGIN_LANE_2_0                    : 3;	/*  [4:2]     r/w   0*/
		uint8_t PRD_TXSWING_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t CFG_TX_ALIGN_POS_LANE_5_0_b0             : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_TX_ALIGN_POS_LANE_5_0_b1             : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t SPARE_REG_180_12_LANE                    : 1;	/*     12     r/w   0*/
		uint8_t CFG_FAST_SYNCH_LANE                      : 1;	/*     13     r/w   0*/
		uint8_t CFG_FORCE_RXPRESENT_LANE_1_0             : 2;	/*[15:14]     r/w   0*/
		uint8_t CFG_TXELECIDLE_MODE_LANE                 : 1;	/*     16     r/w   1*/
		uint8_t CFG_GEN1_TXDATA_DLY_LANE_1_0             : 2;	/*[18:17]     r/w 2'h0*/
		uint8_t CFG_GEN2_TXDATA_DLY_LANE_1_0             : 2;	/*[20:19]     r/w 2'h0*/
		uint8_t CFG_ALIGN_IDLE_HIZ_LANE                  : 1;	/*     21     r/w   0*/
		uint8_t CFG_TXDETRX_MODE_LANE                    : 1;	/*     22     r/w   1*/
		uint8_t CFG_DISABLE_TXDETVAL_LANE                : 1;	/*     23     r/w   0*/
		uint8_t CFG_SPD_CHANGE_WAIT_LANE                 : 1;	/*     24     r/w   0*/
		uint8_t CFG_USE_MAX_PLL_RATE_LANE                : 1;	/*     25     r/w   0*/
		uint8_t CFG_USE_GEN2_PLL_CAL_LANE                : 1;	/*     26     r/w   0*/
		uint8_t CFG_USE_GEN3_PLL_CAL_LANE                : 1;	/*     27     r/w   0*/
		uint8_t SPARE_REG_181_12_LANE                    : 1;	/*     28     r/w   0*/
		uint8_t SPARE_REG_181_13_LANE                    : 1;	/*     29     r/w   0*/
		uint8_t SPARE_REG_181_14_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t CFG_FORCE_LANE_DISABLE_LANE              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_CFG0_t;
__xdata __at( 0x5300 ) volatile LANE_CFG0_t LANE_CFG0;
#define reg_PRD_TXDEEMPH0_LANE  LANE_CFG0.BF.PRD_TXDEEMPH0_LANE
#define reg_PRD_TXDEEMPH1_LANE  LANE_CFG0.BF.PRD_TXDEEMPH1_LANE
#define reg_PRD_TXMARGIN_LANE_2_0  LANE_CFG0.BF.PRD_TXMARGIN_LANE_2_0
#define reg_PRD_TXSWING_LANE  LANE_CFG0.BF.PRD_TXSWING_LANE
#define reg_CFG_TX_ALIGN_POS_LANE_5_0_b0  LANE_CFG0.BF.CFG_TX_ALIGN_POS_LANE_5_0_b0
#define reg_CFG_TX_ALIGN_POS_LANE_5_0_b1  LANE_CFG0.BF.CFG_TX_ALIGN_POS_LANE_5_0_b1
#define reg_SPARE_REG_180_12_LANE  LANE_CFG0.BF.SPARE_REG_180_12_LANE
#define reg_CFG_FAST_SYNCH_LANE  LANE_CFG0.BF.CFG_FAST_SYNCH_LANE
#define reg_CFG_FORCE_RXPRESENT_LANE_1_0  LANE_CFG0.BF.CFG_FORCE_RXPRESENT_LANE_1_0
#define reg_CFG_TXELECIDLE_MODE_LANE  LANE_CFG0.BF.CFG_TXELECIDLE_MODE_LANE
#define reg_CFG_GEN1_TXDATA_DLY_LANE_1_0  LANE_CFG0.BF.CFG_GEN1_TXDATA_DLY_LANE_1_0
#define reg_CFG_GEN2_TXDATA_DLY_LANE_1_0  LANE_CFG0.BF.CFG_GEN2_TXDATA_DLY_LANE_1_0
#define reg_CFG_ALIGN_IDLE_HIZ_LANE  LANE_CFG0.BF.CFG_ALIGN_IDLE_HIZ_LANE
#define reg_CFG_TXDETRX_MODE_LANE  LANE_CFG0.BF.CFG_TXDETRX_MODE_LANE
#define reg_CFG_DISABLE_TXDETVAL_LANE  LANE_CFG0.BF.CFG_DISABLE_TXDETVAL_LANE
#define reg_CFG_SPD_CHANGE_WAIT_LANE  LANE_CFG0.BF.CFG_SPD_CHANGE_WAIT_LANE
#define reg_CFG_USE_MAX_PLL_RATE_LANE  LANE_CFG0.BF.CFG_USE_MAX_PLL_RATE_LANE
#define reg_CFG_USE_GEN2_PLL_CAL_LANE  LANE_CFG0.BF.CFG_USE_GEN2_PLL_CAL_LANE
#define reg_CFG_USE_GEN3_PLL_CAL_LANE  LANE_CFG0.BF.CFG_USE_GEN3_PLL_CAL_LANE
#define reg_SPARE_REG_181_12_LANE  LANE_CFG0.BF.SPARE_REG_181_12_LANE
#define reg_SPARE_REG_181_13_LANE  LANE_CFG0.BF.SPARE_REG_181_13_LANE
#define reg_SPARE_REG_181_14_LANE  LANE_CFG0.BF.SPARE_REG_181_14_LANE
#define reg_CFG_FORCE_LANE_DISABLE_LANE  LANE_CFG0.BF.CFG_FORCE_LANE_DISABLE_LANE

// 0x0004	LANE_STATUS0		Lane Status 0
typedef union {
	struct {
		uint8_t PM_RESET_LANE                            : 1;	/*      0       r   0*/
		uint8_t PM_PU_PLL_LANE                           : 1;	/*      1       r   0*/
		uint8_t PM_PU_TX_LANE                            : 1;	/*      2       r   0*/
		uint8_t PM_PU_RX_LANE                            : 1;	/*      3       r   0*/
		uint8_t PM_TX_RATE_SEL_LANE_2_0                  : 3;	/*  [6:4]       r   0*/
		uint8_t PM_RX_RATE_SEL_LANE_2_0_b0               : 1;	/*  [9:7]       r   0*/
		uint8_t PM_RX_RATE_SEL_LANE_2_0_b1               : 2;	/*  [9:7]       r   0*/
		uint8_t PM_RX_INIT_LANE                          : 1;	/*     10       r   0*/
		uint8_t PM_TX_IDLE_LOZ_LANE                      : 1;	/*     11       r   0*/
		uint8_t PM_TX_IDLE_HIZ_LANE                      : 1;	/*     12       r   0*/
		uint8_t PM_TXDETECTRX_EN_LANE                    : 1;	/*     13       r   0*/
		uint8_t PM_PU_IVREF_LANE                         : 1;	/*     14       r   0*/
		uint8_t PM_BEACON_TX_EN_LANE                     : 1;	/*     15       r   0*/
		uint8_t PM_BEACON_RX_EN_LANE                     : 1;	/*     16       r   0*/
		uint8_t PM_TX_VCMHOLD_EN_LANE                    : 1;	/*     17       r   0*/
		uint8_t PM_TXDCLK_PCLK_EN_LANE                   : 1;	/*     18       r   0*/
		uint8_t PM_PCLK_DPCLK_EN_LANE                    : 1;	/*     19       r   0*/
		uint8_t PM_OSCCLK_PCLK_EN_LANE                   : 1;	/*     20       r   0*/
		uint8_t PM_OSCCLK_AUX_CLK_EN_LANE                : 1;	/*     21       r   0*/
		uint8_t PM_DP_RST_N_LANE                         : 1;	/*     22       r   0*/
		uint8_t PM_ASYNC_RST_N_LANE                      : 1;	/*     23       r   0*/
		uint8_t PM_PIPE_64B_LANE                         : 1;	/*     24       r   0*/
		uint8_t PM_CLK_REQ_N_LANE                        : 1;	/*     25       r   0*/
		uint8_t PM_STATE_LANE_5_0                        : 6;	/*[31:26]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_STATUS0_t;
__xdata __at( 0x5304 ) volatile LANE_STATUS0_t LANE_STATUS0;
#define reg_PM_RESET_LANE  LANE_STATUS0.BF.PM_RESET_LANE
#define reg_PM_PU_PLL_LANE  LANE_STATUS0.BF.PM_PU_PLL_LANE
#define reg_PM_PU_TX_LANE  LANE_STATUS0.BF.PM_PU_TX_LANE
#define reg_PM_PU_RX_LANE  LANE_STATUS0.BF.PM_PU_RX_LANE
#define reg_PM_TX_RATE_SEL_LANE_2_0  LANE_STATUS0.BF.PM_TX_RATE_SEL_LANE_2_0
#define reg_PM_RX_RATE_SEL_LANE_2_0_b0  LANE_STATUS0.BF.PM_RX_RATE_SEL_LANE_2_0_b0
#define reg_PM_RX_RATE_SEL_LANE_2_0_b1  LANE_STATUS0.BF.PM_RX_RATE_SEL_LANE_2_0_b1
#define reg_PM_RX_INIT_LANE  LANE_STATUS0.BF.PM_RX_INIT_LANE
#define reg_PM_TX_IDLE_LOZ_LANE  LANE_STATUS0.BF.PM_TX_IDLE_LOZ_LANE
#define reg_PM_TX_IDLE_HIZ_LANE  LANE_STATUS0.BF.PM_TX_IDLE_HIZ_LANE
#define reg_PM_TXDETECTRX_EN_LANE  LANE_STATUS0.BF.PM_TXDETECTRX_EN_LANE
#define reg_PM_PU_IVREF_LANE  LANE_STATUS0.BF.PM_PU_IVREF_LANE
#define reg_PM_BEACON_TX_EN_LANE  LANE_STATUS0.BF.PM_BEACON_TX_EN_LANE
#define reg_PM_BEACON_RX_EN_LANE  LANE_STATUS0.BF.PM_BEACON_RX_EN_LANE
#define reg_PM_TX_VCMHOLD_EN_LANE  LANE_STATUS0.BF.PM_TX_VCMHOLD_EN_LANE
#define reg_PM_TXDCLK_PCLK_EN_LANE  LANE_STATUS0.BF.PM_TXDCLK_PCLK_EN_LANE
#define reg_PM_PCLK_DPCLK_EN_LANE  LANE_STATUS0.BF.PM_PCLK_DPCLK_EN_LANE
#define reg_PM_OSCCLK_PCLK_EN_LANE  LANE_STATUS0.BF.PM_OSCCLK_PCLK_EN_LANE
#define reg_PM_OSCCLK_AUX_CLK_EN_LANE  LANE_STATUS0.BF.PM_OSCCLK_AUX_CLK_EN_LANE
#define reg_PM_DP_RST_N_LANE  LANE_STATUS0.BF.PM_DP_RST_N_LANE
#define reg_PM_ASYNC_RST_N_LANE  LANE_STATUS0.BF.PM_ASYNC_RST_N_LANE
#define reg_PM_PIPE_64B_LANE  LANE_STATUS0.BF.PM_PIPE_64B_LANE
#define reg_PM_CLK_REQ_N_LANE  LANE_STATUS0.BF.PM_CLK_REQ_N_LANE
#define reg_PM_STATE_LANE_5_0  LANE_STATUS0.BF.PM_STATE_LANE_5_0

// 0x0008	LANE_CFG_STATUS2_LANE		Lane configuration and Status 2
typedef union {
	struct {
		uint8_t ANA_DPHY_RXPRESENT_LANE                  : 1;	/*      0       r   0*/
		uint8_t ANA_DPHY_SQ_DETECTED_LANE                : 1;	/*      1       r   0*/
		uint8_t ANA_DPHY_RX_INIT_DONE_LANE               : 1;	/*      2       r   0*/
		uint8_t ANA_DPHY_TXDETRX_VALID_LANE              : 1;	/*      3       r   0*/
		uint8_t ANA_DPHY_PLL_READY_RX_LANE               : 1;	/*      4       r   0*/
		uint8_t MAC_PHY_RX_TERMINATION_RD_LANE           : 1;	/*      5       r   0*/
		uint8_t ANA_DPHY_PLL_READY_TX_LANE               : 1;	/*      6       r   0*/
		uint8_t PHY_MAC_RXELECIDLE_LANE                  : 1;	/*      7       r   0*/
		uint8_t PHY_MAC_RXVALID_LANE                     : 1;	/*      8       r   0*/
		uint8_t MAC_PHY_RATE_RD_LANE_2_0                 : 3;	/* [11:9]       r   0*/
		uint8_t MAC_PHY_POWERDOWN_RD_LANE_1_0            : 2;	/*[13:12]       r   0*/
		uint8_t MAC_PHY_TXELECIDLE_RD_LANE               : 1;	/*     14       r   0*/
		uint8_t MAC_PHY_TXDETECTRX_LOOPBACK_RD_LANE      : 1;	/*     15       r   0*/
		uint8_t CFG_BEACON_TX_EN_LANE                    : 1;	/*     16     r/w   1*/
		uint8_t CFG_BEACON_RX_EN_LANE                    : 1;	/*     17     r/w   0*/
		uint8_t CFG_BEACON_TXLOZ_WAIT_LANE_3_0           : 4;	/*[21:18]     r/w 4'h0*/
		uint8_t CFG_BEACON_MODE_LANE                     : 1;	/*     22     r/w   0*/
		uint8_t CFG_IVREF_MODE_LANE                      : 1;	/*     23     r/w   1*/
		uint8_t CFG_RXEIDETECT_DLY_LANE_5_0              : 6;	/*[29:24]     r/w 6'ha*/
		uint8_t CFG_POWER_SETTLE_WAIT_LANE               : 1;	/*     30     r/w   1*/
		uint8_t BEACON_DETECTED_LANE                     : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_CFG_STATUS2_LANE_t;
__xdata __at( 0x5308 ) volatile LANE_CFG_STATUS2_LANE_t LANE_CFG_STATUS2_LANE;
#define reg_ANA_DPHY_RXPRESENT_LANE  LANE_CFG_STATUS2_LANE.BF.ANA_DPHY_RXPRESENT_LANE
#define reg_ANA_DPHY_SQ_DETECTED_LANE  LANE_CFG_STATUS2_LANE.BF.ANA_DPHY_SQ_DETECTED_LANE
#define reg_ANA_DPHY_RX_INIT_DONE_LANE  LANE_CFG_STATUS2_LANE.BF.ANA_DPHY_RX_INIT_DONE_LANE
#define reg_ANA_DPHY_TXDETRX_VALID_LANE  LANE_CFG_STATUS2_LANE.BF.ANA_DPHY_TXDETRX_VALID_LANE
#define reg_ANA_DPHY_PLL_READY_RX_LANE  LANE_CFG_STATUS2_LANE.BF.ANA_DPHY_PLL_READY_RX_LANE
#define reg_MAC_PHY_RX_TERMINATION_RD_LANE  LANE_CFG_STATUS2_LANE.BF.MAC_PHY_RX_TERMINATION_RD_LANE
#define reg_ANA_DPHY_PLL_READY_TX_LANE  LANE_CFG_STATUS2_LANE.BF.ANA_DPHY_PLL_READY_TX_LANE
#define reg_PHY_MAC_RXELECIDLE_LANE  LANE_CFG_STATUS2_LANE.BF.PHY_MAC_RXELECIDLE_LANE
#define reg_PHY_MAC_RXVALID_LANE  LANE_CFG_STATUS2_LANE.BF.PHY_MAC_RXVALID_LANE
#define reg_MAC_PHY_RATE_RD_LANE_2_0  LANE_CFG_STATUS2_LANE.BF.MAC_PHY_RATE_RD_LANE_2_0
#define reg_MAC_PHY_POWERDOWN_RD_LANE_1_0  LANE_CFG_STATUS2_LANE.BF.MAC_PHY_POWERDOWN_RD_LANE_1_0
#define reg_MAC_PHY_TXELECIDLE_RD_LANE  LANE_CFG_STATUS2_LANE.BF.MAC_PHY_TXELECIDLE_RD_LANE
#define reg_MAC_PHY_TXDETECTRX_LOOPBACK_RD_LANE  LANE_CFG_STATUS2_LANE.BF.MAC_PHY_TXDETECTRX_LOOPBACK_RD_LANE
#define reg_CFG_BEACON_TX_EN_LANE  LANE_CFG_STATUS2_LANE.BF.CFG_BEACON_TX_EN_LANE
#define reg_CFG_BEACON_RX_EN_LANE  LANE_CFG_STATUS2_LANE.BF.CFG_BEACON_RX_EN_LANE
#define reg_CFG_BEACON_TXLOZ_WAIT_LANE_3_0  LANE_CFG_STATUS2_LANE.BF.CFG_BEACON_TXLOZ_WAIT_LANE_3_0
#define reg_CFG_BEACON_MODE_LANE  LANE_CFG_STATUS2_LANE.BF.CFG_BEACON_MODE_LANE
#define reg_CFG_IVREF_MODE_LANE  LANE_CFG_STATUS2_LANE.BF.CFG_IVREF_MODE_LANE
#define reg_CFG_RXEIDETECT_DLY_LANE_5_0  LANE_CFG_STATUS2_LANE.BF.CFG_RXEIDETECT_DLY_LANE_5_0
#define reg_CFG_POWER_SETTLE_WAIT_LANE  LANE_CFG_STATUS2_LANE.BF.CFG_POWER_SETTLE_WAIT_LANE
#define reg_BEACON_DETECTED_LANE  LANE_CFG_STATUS2_LANE.BF.BEACON_DETECTED_LANE

// 0x000c	LANE_CFG2_LANE		Lane Configuration 2
typedef union {
	struct {
		uint8_t CFG_USE_FTS_LOCK_LANE                    : 1;	/*      0     r/w   1*/
		uint8_t CFG_USE_SKP_LOCK_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t CFG_DET_FTS_WINDOW_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t CFG_DET_ALL_SKP_LANE                     : 1;	/*      3     r/w   0*/
		uint8_t CFG_IGNORE_SQ_DETECT_LANE                : 1;	/*      4     r/w   0*/
		uint8_t CFG_GEN3_TXELECIDLE_DLY_LANE_1_0         : 2;	/*  [6:5]     r/w   0*/
		uint8_t CFG_GEN3_TXDATA_DLY_LANE_1_0_b0          : 1;	/*  [8:7]     r/w   0*/
		uint8_t CFG_GEN3_TXDATA_DLY_LANE_1_0_b1          : 1;	/*  [8:7]     r/w   0*/
		uint8_t TXELECIDLE_CLEAR_REMINDER_LANE           : 1;	/*      9     r/w   1*/
		uint8_t USE_TXDATAVALID_SAMPLE_TXELECIDLE_LANE   : 1;	/*     10     r/w   1*/
		uint8_t CFG_BLK_ALIGN_CTRL_LANE_1_0              : 2;	/*[12:11]     r/w   0*/
		uint8_t CFG_BLK_ALIGN_CTRL_LANE_2                : 1;	/*     13     r/w   1*/
		uint8_t BLK_ALIGN_AT_PRE_SYNC_LANE               : 1;	/*     14     r/w   0*/
		uint8_t BLK_ALIGN_AT_SYNC_OK_LANE                : 1;	/*     15     r/w   0*/
		uint8_t CFG_ELB_THRESHOLD_LANE_4_0               : 5;	/*[20:16]     r/w 5'h8*/
		uint8_t CFG_LOW_WATER_MARK_LANE_4_0_b0           : 3;	/*[25:21]     r/w 5'h0*/
		uint8_t CFG_LOW_WATER_MARK_LANE_4_0_b1           : 2;	/*[25:21]     r/w 5'h0*/
		uint8_t CFG_HIGH_WATER_MARK_LANE_4_0             : 5;	/*[30:26]     r/w 5'h13*/
		uint8_t EBUF_THRESHOLD_WIDE_LANE                 : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_CFG2_LANE_t;
__xdata __at( 0x530c ) volatile LANE_CFG2_LANE_t LANE_CFG2_LANE;
#define reg_CFG_USE_FTS_LOCK_LANE  LANE_CFG2_LANE.BF.CFG_USE_FTS_LOCK_LANE
#define reg_CFG_USE_SKP_LOCK_LANE  LANE_CFG2_LANE.BF.CFG_USE_SKP_LOCK_LANE
#define reg_CFG_DET_FTS_WINDOW_LANE  LANE_CFG2_LANE.BF.CFG_DET_FTS_WINDOW_LANE
#define reg_CFG_DET_ALL_SKP_LANE  LANE_CFG2_LANE.BF.CFG_DET_ALL_SKP_LANE
#define reg_CFG_IGNORE_SQ_DETECT_LANE  LANE_CFG2_LANE.BF.CFG_IGNORE_SQ_DETECT_LANE
#define reg_CFG_GEN3_TXELECIDLE_DLY_LANE_1_0  LANE_CFG2_LANE.BF.CFG_GEN3_TXELECIDLE_DLY_LANE_1_0
#define reg_CFG_GEN3_TXDATA_DLY_LANE_1_0_b0  LANE_CFG2_LANE.BF.CFG_GEN3_TXDATA_DLY_LANE_1_0_b0
#define reg_CFG_GEN3_TXDATA_DLY_LANE_1_0_b1  LANE_CFG2_LANE.BF.CFG_GEN3_TXDATA_DLY_LANE_1_0_b1
#define reg_TXELECIDLE_CLEAR_REMINDER_LANE  LANE_CFG2_LANE.BF.TXELECIDLE_CLEAR_REMINDER_LANE
#define reg_USE_TXDATAVALID_SAMPLE_TXELECIDLE_LANE  LANE_CFG2_LANE.BF.USE_TXDATAVALID_SAMPLE_TXELECIDLE_LANE
#define reg_CFG_BLK_ALIGN_CTRL_LANE_1_0  LANE_CFG2_LANE.BF.CFG_BLK_ALIGN_CTRL_LANE_1_0
#define reg_CFG_BLK_ALIGN_CTRL_LANE_2  LANE_CFG2_LANE.BF.CFG_BLK_ALIGN_CTRL_LANE_2
#define reg_BLK_ALIGN_AT_PRE_SYNC_LANE  LANE_CFG2_LANE.BF.BLK_ALIGN_AT_PRE_SYNC_LANE
#define reg_BLK_ALIGN_AT_SYNC_OK_LANE  LANE_CFG2_LANE.BF.BLK_ALIGN_AT_SYNC_OK_LANE
#define reg_CFG_ELB_THRESHOLD_LANE_4_0  LANE_CFG2_LANE.BF.CFG_ELB_THRESHOLD_LANE_4_0
#define reg_CFG_LOW_WATER_MARK_LANE_4_0_b0  LANE_CFG2_LANE.BF.CFG_LOW_WATER_MARK_LANE_4_0_b0
#define reg_CFG_LOW_WATER_MARK_LANE_4_0_b1  LANE_CFG2_LANE.BF.CFG_LOW_WATER_MARK_LANE_4_0_b1
#define reg_CFG_HIGH_WATER_MARK_LANE_4_0  LANE_CFG2_LANE.BF.CFG_HIGH_WATER_MARK_LANE_4_0
#define reg_EBUF_THRESHOLD_WIDE_LANE  LANE_CFG2_LANE.BF.EBUF_THRESHOLD_WIDE_LANE

// 0x0010	LANE_CFG4		Lane Configuration 4
typedef union {
	struct {
		uint8_t CFG_DFE_CTRL_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t CFG_DFE_EN_SEL_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t CFG_DFE_PAT_SEL_LANE                     : 1;	/*      4     r/w   1*/
		uint8_t CFG_DFE_UPDATE_SEL_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t CFG_DFE_OVERRIDE_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t CFG_SSC_CTRL_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t CFG_REF_FREF_SEL_LANE_4_0                : 5;	/* [12:8]     r/w   0*/
		uint8_t CFG_SRIS_CTRL_LANE                       : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_RX_INIT_SEL_LANE                     : 1;	/*     16     r/w   0*/
		uint8_t CFG_SQ_DET_SEL_LANE                      : 1;	/*     17     r/w   0*/
		uint8_t CFG_RX_EQ_CTRL_LANE                      : 1;	/*     18     r/w   1*/
		uint8_t CFG_RXEIDET_DG_EN_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t CFG_RXEI_DG_WEIGHT_LANE                  : 1;	/*     20     r/w   0*/
		uint8_t CFG_SIGNAL_DET_SEL_LANE                  : 1;	/*     21     r/w   0*/
		uint8_t CFG_RX_TRAIN_SEL_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t CFG_DATA_BIT_MAP_LANE                    : 1;	/*     23     r/w   1*/
		uint8_t CFG_PHY_RESERVED_CTRL_LANE_7_0           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_CFG4_t;
__xdata __at( 0x5310 ) volatile LANE_CFG4_t LANE_CFG4;
#define reg_CFG_DFE_CTRL_LANE_2_0  LANE_CFG4.BF.CFG_DFE_CTRL_LANE_2_0
#define reg_CFG_DFE_EN_SEL_LANE  LANE_CFG4.BF.CFG_DFE_EN_SEL_LANE
#define reg_CFG_DFE_PAT_SEL_LANE  LANE_CFG4.BF.CFG_DFE_PAT_SEL_LANE
#define reg_CFG_DFE_UPDATE_SEL_LANE  LANE_CFG4.BF.CFG_DFE_UPDATE_SEL_LANE
#define reg_CFG_DFE_OVERRIDE_LANE  LANE_CFG4.BF.CFG_DFE_OVERRIDE_LANE
#define reg_CFG_SSC_CTRL_LANE  LANE_CFG4.BF.CFG_SSC_CTRL_LANE
#define reg_CFG_REF_FREF_SEL_LANE_4_0  LANE_CFG4.BF.CFG_REF_FREF_SEL_LANE_4_0
#define reg_CFG_SRIS_CTRL_LANE  LANE_CFG4.BF.CFG_SRIS_CTRL_LANE
#define reg_CFG_RX_INIT_SEL_LANE  LANE_CFG4.BF.CFG_RX_INIT_SEL_LANE
#define reg_CFG_SQ_DET_SEL_LANE  LANE_CFG4.BF.CFG_SQ_DET_SEL_LANE
#define reg_CFG_RX_EQ_CTRL_LANE  LANE_CFG4.BF.CFG_RX_EQ_CTRL_LANE
#define reg_CFG_RXEIDET_DG_EN_LANE  LANE_CFG4.BF.CFG_RXEIDET_DG_EN_LANE
#define reg_CFG_RXEI_DG_WEIGHT_LANE  LANE_CFG4.BF.CFG_RXEI_DG_WEIGHT_LANE
#define reg_CFG_SIGNAL_DET_SEL_LANE  LANE_CFG4.BF.CFG_SIGNAL_DET_SEL_LANE
#define reg_CFG_RX_TRAIN_SEL_LANE  LANE_CFG4.BF.CFG_RX_TRAIN_SEL_LANE
#define reg_CFG_DATA_BIT_MAP_LANE  LANE_CFG4.BF.CFG_DATA_BIT_MAP_LANE
#define reg_CFG_PHY_RESERVED_CTRL_LANE_7_0  LANE_CFG4.BF.CFG_PHY_RESERVED_CTRL_LANE_7_0

// 0x0014	LANE_CFG_STATUS3_LANE		Lane Configuration and Status 3
typedef union {
	struct {
		uint8_t PM_STATUS_PCLK_LANE_8_0_b0               : 8;	/*  [8:0]       r   0*/
		uint8_t PM_STATUS_PCLK_LANE_8_0_b1               : 1;	/*  [8:0]       r   0*/
		uint8_t PM_RX_TRAIN_ENABLE_LANE                  : 1;	/*      9       r   0*/
		uint8_t PM_PU_SQ_LANE                            : 1;	/*     10       r   0*/
		uint8_t PM_REFCLK_DIS_LANE                       : 1;	/*     11       r   0*/
		uint8_t ANA_REFCLK_DIS_ACK_LANE                  : 1;	/*     12       r   0*/
		uint8_t PM_REFCLK_VALID_LANE                     : 1;	/*     13       r   0*/
		uint8_t PM_RX_HIZ_LANE                           : 1;	/*     14       r   0*/
		uint8_t MAC_PHY_TXCOMPLIANCE_RD_LANE             : 1;	/*     15       r   0*/
		uint8_t CFG_TXCMN_DIS_DLY_LANE_5_0               : 6;	/*[21:16]     r/w 6'h14*/
		uint8_t CFG_DELAY_TDR_PHYST_LANE                 : 1;	/*     22     r/w   0*/
		uint8_t CFG_DELAY_P12_PHYST_LANE                 : 1;	/*     23     r/w   0*/
		uint8_t CFG_HIZ_CAL_WAIT_LANE_3_0                : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t CFG_HIZ_CAL_TIMER_EN_LANE                : 1;	/*     28     r/w   0*/
		uint8_t CFG_P0S_IDLE_HIZ_DIS_LANE                : 1;	/*     29     r/w   1*/
		uint8_t CFG_P1_WAKEUP_LANE                       : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_CFG_STATUS3_LANE_t;
__xdata __at( 0x5314 ) volatile LANE_CFG_STATUS3_LANE_t LANE_CFG_STATUS3_LANE;
#define reg_PM_STATUS_PCLK_LANE_8_0_b0  LANE_CFG_STATUS3_LANE.BF.PM_STATUS_PCLK_LANE_8_0_b0
#define reg_PM_STATUS_PCLK_LANE_8_0_b1  LANE_CFG_STATUS3_LANE.BF.PM_STATUS_PCLK_LANE_8_0_b1
#define reg_PM_RX_TRAIN_ENABLE_LANE  LANE_CFG_STATUS3_LANE.BF.PM_RX_TRAIN_ENABLE_LANE
#define reg_PM_PU_SQ_LANE  LANE_CFG_STATUS3_LANE.BF.PM_PU_SQ_LANE
#define reg_PM_REFCLK_DIS_LANE  LANE_CFG_STATUS3_LANE.BF.PM_REFCLK_DIS_LANE
#define reg_ANA_REFCLK_DIS_ACK_LANE  LANE_CFG_STATUS3_LANE.BF.ANA_REFCLK_DIS_ACK_LANE
#define reg_PM_REFCLK_VALID_LANE  LANE_CFG_STATUS3_LANE.BF.PM_REFCLK_VALID_LANE
#define reg_PM_RX_HIZ_LANE  LANE_CFG_STATUS3_LANE.BF.PM_RX_HIZ_LANE
#define reg_MAC_PHY_TXCOMPLIANCE_RD_LANE  LANE_CFG_STATUS3_LANE.BF.MAC_PHY_TXCOMPLIANCE_RD_LANE
#define reg_CFG_TXCMN_DIS_DLY_LANE_5_0  LANE_CFG_STATUS3_LANE.BF.CFG_TXCMN_DIS_DLY_LANE_5_0
#define reg_CFG_DELAY_TDR_PHYST_LANE  LANE_CFG_STATUS3_LANE.BF.CFG_DELAY_TDR_PHYST_LANE
#define reg_CFG_DELAY_P12_PHYST_LANE  LANE_CFG_STATUS3_LANE.BF.CFG_DELAY_P12_PHYST_LANE
#define reg_CFG_HIZ_CAL_WAIT_LANE_3_0  LANE_CFG_STATUS3_LANE.BF.CFG_HIZ_CAL_WAIT_LANE_3_0
#define reg_CFG_HIZ_CAL_TIMER_EN_LANE  LANE_CFG_STATUS3_LANE.BF.CFG_HIZ_CAL_TIMER_EN_LANE
#define reg_CFG_P0S_IDLE_HIZ_DIS_LANE  LANE_CFG_STATUS3_LANE.BF.CFG_P0S_IDLE_HIZ_DIS_LANE
#define reg_CFG_P1_WAKEUP_LANE  LANE_CFG_STATUS3_LANE.BF.CFG_P1_WAKEUP_LANE

// 0x0018	LANE_DP_PIE8_CFG0_LANE		Lane PIE8 Datapath configuration 0
typedef union {
	struct {
		uint8_t DBG_PIPE_SUB_SEL_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h00*/
		uint8_t PHY_MAC_PHYSTATUS_LANE                   : 1;	/*      8       r   0*/
		uint8_t MAC_PHY_TXCMN_MODE_DIS_RD_LANE           : 1;	/*      9       r   0*/
		uint8_t MAC_PHY_RXEIDETECT_DIS_RD_LANE           : 1;	/*     10       r   0*/
		uint8_t PIPE_CLK_ACK_N_LANE                      : 1;	/*     11       r   0*/
		uint8_t PIPE_CLK_REQ_N_LANE                      : 1;	/*     12       r   0*/
		uint8_t MAC_PHY_ASYNCPWRCHGACK_LANE              : 1;	/*     13       r   0*/
		uint8_t MAC_PHY_POWERDOWN_RD_LANE_3_2            : 2;	/*[15:14]       r   0*/
		uint8_t MODE_PIE8_IF_LANE                        : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t NOT_USE_EQ_FAILED_LANE                   : 1;	/*     25     r/w   0*/
		uint8_t MODE_PIE8_EQ_LANE                        : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_DP_PIE8_CFG0_LANE_t;
__xdata __at( 0x5318 ) volatile LANE_DP_PIE8_CFG0_LANE_t LANE_DP_PIE8_CFG0_LANE;
#define reg_DBG_PIPE_SUB_SEL_LANE_7_0  LANE_DP_PIE8_CFG0_LANE.BF.DBG_PIPE_SUB_SEL_LANE_7_0
#define reg_PHY_MAC_PHYSTATUS_LANE  LANE_DP_PIE8_CFG0_LANE.BF.PHY_MAC_PHYSTATUS_LANE
#define reg_MAC_PHY_TXCMN_MODE_DIS_RD_LANE  LANE_DP_PIE8_CFG0_LANE.BF.MAC_PHY_TXCMN_MODE_DIS_RD_LANE
#define reg_MAC_PHY_RXEIDETECT_DIS_RD_LANE  LANE_DP_PIE8_CFG0_LANE.BF.MAC_PHY_RXEIDETECT_DIS_RD_LANE
#define reg_PIPE_CLK_ACK_N_LANE  LANE_DP_PIE8_CFG0_LANE.BF.PIPE_CLK_ACK_N_LANE
#define reg_PIPE_CLK_REQ_N_LANE  LANE_DP_PIE8_CFG0_LANE.BF.PIPE_CLK_REQ_N_LANE
#define reg_MAC_PHY_ASYNCPWRCHGACK_LANE  LANE_DP_PIE8_CFG0_LANE.BF.MAC_PHY_ASYNCPWRCHGACK_LANE
#define reg_MAC_PHY_POWERDOWN_RD_LANE_3_2  LANE_DP_PIE8_CFG0_LANE.BF.MAC_PHY_POWERDOWN_RD_LANE_3_2
#define reg_MODE_PIE8_IF_LANE  LANE_DP_PIE8_CFG0_LANE.BF.MODE_PIE8_IF_LANE
#define reg_NOT_USE_EQ_FAILED_LANE  LANE_DP_PIE8_CFG0_LANE.BF.NOT_USE_EQ_FAILED_LANE
#define reg_MODE_PIE8_EQ_LANE  LANE_DP_PIE8_CFG0_LANE.BF.MODE_PIE8_EQ_LANE

// 0x001c	LANE_USB_DP_CFG1_LANE		Lane USB Datapath Configuration 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CFG_NUM_ONESZEROS_LANE_3_0               : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t CFG_RX_LFPS_NUM_CNT_LANE_4_0_b0          : 4;	/*[24:20]     r/w 5'hf*/
		uint8_t CFG_RX_LFPS_NUM_CNT_LANE_4_0_b1          : 1;	/*[24:20]     r/w 5'hf*/
		uint8_t CFG_USE_SKP_LOCK_USB_LANE                : 1;	/*     25     r/w   0*/
		uint8_t CFG_EBUF_4COM_INIT_LANE                  : 1;	/*     26     r/w   1*/
		uint8_t CFG_EBUF_SKIP_INIT_LANE                  : 1;	/*     27     r/w   1*/
		uint8_t CFG_EBUF_EMPTY_RST_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t CFG_EBUF_FULL_RST_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t CFG_IGNORE_RXEQ_G1_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t CFG_IGNORE_RXEQ_G2_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} LANE_USB_DP_CFG1_LANE_t;
__xdata __at( 0x531c ) volatile LANE_USB_DP_CFG1_LANE_t LANE_USB_DP_CFG1_LANE;
#define reg_CFG_NUM_ONESZEROS_LANE_3_0  LANE_USB_DP_CFG1_LANE.BF.CFG_NUM_ONESZEROS_LANE_3_0
#define reg_CFG_RX_LFPS_NUM_CNT_LANE_4_0_b0  LANE_USB_DP_CFG1_LANE.BF.CFG_RX_LFPS_NUM_CNT_LANE_4_0_b0
#define reg_CFG_RX_LFPS_NUM_CNT_LANE_4_0_b1  LANE_USB_DP_CFG1_LANE.BF.CFG_RX_LFPS_NUM_CNT_LANE_4_0_b1
#define reg_CFG_USE_SKP_LOCK_USB_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_USE_SKP_LOCK_USB_LANE
#define reg_CFG_EBUF_4COM_INIT_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_EBUF_4COM_INIT_LANE
#define reg_CFG_EBUF_SKIP_INIT_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_EBUF_SKIP_INIT_LANE
#define reg_CFG_EBUF_EMPTY_RST_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_EBUF_EMPTY_RST_LANE
#define reg_CFG_EBUF_FULL_RST_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_EBUF_FULL_RST_LANE
#define reg_CFG_IGNORE_RXEQ_G1_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_IGNORE_RXEQ_G1_LANE
#define reg_CFG_IGNORE_RXEQ_G2_LANE  LANE_USB_DP_CFG1_LANE.BF.CFG_IGNORE_RXEQ_G2_LANE

// 0x0020	LANE_USB_DP_CFG2_LANE		Lane USB Datapath Configuration 2
typedef union {
	struct {
		uint8_t USB_OS_1BIT_ERROR_CORRECTION_LANE        : 1;	/*      0     r/w   0*/
		uint8_t USB_SKP_ERROR_CORRECTION_LANE            : 1;	/*      1     r/w   0*/
		uint8_t USB_HEADER_CORRECTION_LANE               : 1;	/*      2     r/w   0*/
		uint8_t REPORT_USB_SKP_1BIT_ERROR_LANE           : 1;	/*      3     r/w   1*/
		uint8_t REPORT_USB_OS_1BIT_ERROR_LANE            : 1;	/*      4     r/w   0*/
		uint8_t USB_SKP_ERR_MAX_LANE                     : 1;	/*      5     r/w   1*/
		uint8_t USB_SKP_END_ERR_MAX_LANE_1_0             : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t USB_IGNORE_1BIT_HEADER_ERROR_LANE        : 1;	/*      8     r/w   1*/
		uint8_t CFG_USE_RXVALID_CHECK_RX_LFPS_LANE       : 1;	/*      9     r/w   1*/
		uint8_t CFG_START_BLK_IS_SYNC_LANE               : 1;	/*     10     r/w   0*/
		uint8_t CFG_EBUF_TSBLK_INIT_LANE                 : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t USB31_SPD_CHG_CHK_P0_LANE                : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} LANE_USB_DP_CFG2_LANE_t;
__xdata __at( 0x5320 ) volatile LANE_USB_DP_CFG2_LANE_t LANE_USB_DP_CFG2_LANE;
#define reg_USB_OS_1BIT_ERROR_CORRECTION_LANE  LANE_USB_DP_CFG2_LANE.BF.USB_OS_1BIT_ERROR_CORRECTION_LANE
#define reg_USB_SKP_ERROR_CORRECTION_LANE  LANE_USB_DP_CFG2_LANE.BF.USB_SKP_ERROR_CORRECTION_LANE
#define reg_USB_HEADER_CORRECTION_LANE  LANE_USB_DP_CFG2_LANE.BF.USB_HEADER_CORRECTION_LANE
#define reg_REPORT_USB_SKP_1BIT_ERROR_LANE  LANE_USB_DP_CFG2_LANE.BF.REPORT_USB_SKP_1BIT_ERROR_LANE
#define reg_REPORT_USB_OS_1BIT_ERROR_LANE  LANE_USB_DP_CFG2_LANE.BF.REPORT_USB_OS_1BIT_ERROR_LANE
#define reg_USB_SKP_ERR_MAX_LANE  LANE_USB_DP_CFG2_LANE.BF.USB_SKP_ERR_MAX_LANE
#define reg_USB_SKP_END_ERR_MAX_LANE_1_0  LANE_USB_DP_CFG2_LANE.BF.USB_SKP_END_ERR_MAX_LANE_1_0
#define reg_USB_IGNORE_1BIT_HEADER_ERROR_LANE  LANE_USB_DP_CFG2_LANE.BF.USB_IGNORE_1BIT_HEADER_ERROR_LANE
#define reg_CFG_USE_RXVALID_CHECK_RX_LFPS_LANE  LANE_USB_DP_CFG2_LANE.BF.CFG_USE_RXVALID_CHECK_RX_LFPS_LANE
#define reg_CFG_START_BLK_IS_SYNC_LANE  LANE_USB_DP_CFG2_LANE.BF.CFG_START_BLK_IS_SYNC_LANE
#define reg_CFG_EBUF_TSBLK_INIT_LANE  LANE_USB_DP_CFG2_LANE.BF.CFG_EBUF_TSBLK_INIT_LANE
#define reg_USB31_SPD_CHG_CHK_P0_LANE  LANE_USB_DP_CFG2_LANE.BF.USB31_SPD_CHG_CHK_P0_LANE

// 0x0024	LANE_EQ_CFG0_LANE		Lane Equalization Configuration 0
typedef union {
	struct {
		uint8_t REMOTE_FS_LANE_5_0                       : 6;	/*  [5:0]       r   0*/
		uint8_t REMOTE_LF_LANE_5_0_b0                    : 2;	/* [11:6]       r   0*/
		uint8_t REMOTE_LF_LANE_5_0_b1                    : 4;	/* [11:6]       r   0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t CFG_EQ_FS_LANE_5_0                       : 6;	/*[21:16]     r/w 6'h3f*/
		uint8_t CFG_EQ_LF_LANE_5_0_b0                    : 2;	/*[27:22]     r/w 6'h15*/
		uint8_t CFG_EQ_LF_LANE_5_0_b1                    : 4;	/*[27:22]     r/w 6'h15*/
		uint8_t CFG_PHY_RC_EP_LANE                       : 1;	/*     28     r/w   0*/
		uint8_t CFG_SEL_EQ_STATUS_LANE_1_0               : 2;	/*[30:29]     r/w   0*/
		uint8_t CFG_USE_CTRL_FLD_RST_LANE                : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_EQ_CFG0_LANE_t;
__xdata __at( 0x5324 ) volatile LANE_EQ_CFG0_LANE_t LANE_EQ_CFG0_LANE;
#define reg_REMOTE_FS_LANE_5_0  LANE_EQ_CFG0_LANE.BF.REMOTE_FS_LANE_5_0
#define reg_REMOTE_LF_LANE_5_0_b0  LANE_EQ_CFG0_LANE.BF.REMOTE_LF_LANE_5_0_b0
#define reg_REMOTE_LF_LANE_5_0_b1  LANE_EQ_CFG0_LANE.BF.REMOTE_LF_LANE_5_0_b1
#define reg_CFG_EQ_FS_LANE_5_0  LANE_EQ_CFG0_LANE.BF.CFG_EQ_FS_LANE_5_0
#define reg_CFG_EQ_LF_LANE_5_0_b0  LANE_EQ_CFG0_LANE.BF.CFG_EQ_LF_LANE_5_0_b0
#define reg_CFG_EQ_LF_LANE_5_0_b1  LANE_EQ_CFG0_LANE.BF.CFG_EQ_LF_LANE_5_0_b1
#define reg_CFG_PHY_RC_EP_LANE  LANE_EQ_CFG0_LANE.BF.CFG_PHY_RC_EP_LANE
#define reg_CFG_SEL_EQ_STATUS_LANE_1_0  LANE_EQ_CFG0_LANE.BF.CFG_SEL_EQ_STATUS_LANE_1_0
#define reg_CFG_USE_CTRL_FLD_RST_LANE  LANE_EQ_CFG0_LANE.BF.CFG_USE_CTRL_FLD_RST_LANE

// 0x0028	LANE_EQ_CFG1_LANE		Lane Equalization Configuration 1
typedef union {
	struct {
		uint8_t CFG_COEFF_STEP_SIZE0_LANE_11_0_b0        : 8;	/* [11:0]     r/w 12'h041*/
		uint8_t CFG_COEFF_STEP_SIZE0_LANE_11_0_b1        : 4;	/* [11:0]     r/w 12'h041*/
		uint8_t CFG_UPDATE_POLARITY_LANE                 : 1;	/*     12     r/w   1*/
		uint8_t CFG_USE_INIT_COEFF_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t CFG_COEFF_CHECK_EN_LANE                  : 1;	/*     14     r/w   1*/
		uint8_t CFG_ALWAYS_SEND_LANE                     : 1;	/*     15     r/w   0*/
		uint8_t CFG_COEFF_STEP_SIZE1_LANE_5_0            : 6;	/*[21:16]     r/w 6'h1*/
		uint8_t CFG_EQ_BYPASS_PH23_LANE                  : 1;	/*     22     r/w   0*/
		uint8_t CFG_RESET_EIEOS_COUNT_LANE               : 1;	/*     23     r/w   0*/
		uint8_t CFG_TX_COEFF_OVERRIDE_LANE               : 1;	/*     24     r/w   0*/
		uint8_t CFG_COEFF_P2P_HOLD_LANE                  : 1;	/*     25     r/w   1*/
		uint8_t CFG_NUM_ITERATION_LANE_1_0               : 2;	/*[27:26]     r/w   0*/
		uint8_t CFG_FORCE_EQ_COMPLETE_LANE               : 1;	/*     28     r/w   0*/
		uint8_t CFG_USE_PRESET_LANE                      : 1;	/*     29     r/w   0*/
		uint8_t CFG_EQ_BUNDLE_DIS_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t CFG_EXT_FORCE_EQ_CMPL_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_EQ_CFG1_LANE_t;
__xdata __at( 0x5328 ) volatile LANE_EQ_CFG1_LANE_t LANE_EQ_CFG1_LANE;
#define reg_CFG_COEFF_STEP_SIZE0_LANE_11_0_b0  LANE_EQ_CFG1_LANE.BF.CFG_COEFF_STEP_SIZE0_LANE_11_0_b0
#define reg_CFG_COEFF_STEP_SIZE0_LANE_11_0_b1  LANE_EQ_CFG1_LANE.BF.CFG_COEFF_STEP_SIZE0_LANE_11_0_b1
#define reg_CFG_UPDATE_POLARITY_LANE  LANE_EQ_CFG1_LANE.BF.CFG_UPDATE_POLARITY_LANE
#define reg_CFG_USE_INIT_COEFF_LANE  LANE_EQ_CFG1_LANE.BF.CFG_USE_INIT_COEFF_LANE
#define reg_CFG_COEFF_CHECK_EN_LANE  LANE_EQ_CFG1_LANE.BF.CFG_COEFF_CHECK_EN_LANE
#define reg_CFG_ALWAYS_SEND_LANE  LANE_EQ_CFG1_LANE.BF.CFG_ALWAYS_SEND_LANE
#define reg_CFG_COEFF_STEP_SIZE1_LANE_5_0  LANE_EQ_CFG1_LANE.BF.CFG_COEFF_STEP_SIZE1_LANE_5_0
#define reg_CFG_EQ_BYPASS_PH23_LANE  LANE_EQ_CFG1_LANE.BF.CFG_EQ_BYPASS_PH23_LANE
#define reg_CFG_RESET_EIEOS_COUNT_LANE  LANE_EQ_CFG1_LANE.BF.CFG_RESET_EIEOS_COUNT_LANE
#define reg_CFG_TX_COEFF_OVERRIDE_LANE  LANE_EQ_CFG1_LANE.BF.CFG_TX_COEFF_OVERRIDE_LANE
#define reg_CFG_COEFF_P2P_HOLD_LANE  LANE_EQ_CFG1_LANE.BF.CFG_COEFF_P2P_HOLD_LANE
#define reg_CFG_NUM_ITERATION_LANE_1_0  LANE_EQ_CFG1_LANE.BF.CFG_NUM_ITERATION_LANE_1_0
#define reg_CFG_FORCE_EQ_COMPLETE_LANE  LANE_EQ_CFG1_LANE.BF.CFG_FORCE_EQ_COMPLETE_LANE
#define reg_CFG_USE_PRESET_LANE  LANE_EQ_CFG1_LANE.BF.CFG_USE_PRESET_LANE
#define reg_CFG_EQ_BUNDLE_DIS_LANE  LANE_EQ_CFG1_LANE.BF.CFG_EQ_BUNDLE_DIS_LANE
#define reg_CFG_EXT_FORCE_EQ_CMPL_LANE  LANE_EQ_CFG1_LANE.BF.CFG_EXT_FORCE_EQ_CMPL_LANE

// 0x002c	LANE_PRESET_CFG0_LANE		Lane Equalization Preset Configuration 0
typedef union {
	struct {
		uint8_t CFG_CURSOR_PRESET0_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h2f*/
		uint8_t CFG_CURSOR_PRESET1_LANE_5_0_b0           : 2;	/* [11:6]     r/w 6'h34*/
		uint8_t CFG_CURSOR_PRESET1_LANE_5_0_b1           : 4;	/* [11:6]     r/w 6'h34*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_PRESET2_LANE_5_0              : 6;	/*[21:16]     r/w 6'h32*/
		uint8_t CFG_CURSOR_PRESET3_LANE_5_0_b0           : 2;	/*[27:22]     r/w 6'h37*/
		uint8_t CFG_CURSOR_PRESET3_LANE_5_0_b1           : 4;	/*[27:22]     r/w 6'h37*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG0_LANE_t;
__xdata __at( 0x532c ) volatile LANE_PRESET_CFG0_LANE_t LANE_PRESET_CFG0_LANE;
#define reg_CFG_CURSOR_PRESET0_LANE_5_0  LANE_PRESET_CFG0_LANE.BF.CFG_CURSOR_PRESET0_LANE_5_0
#define reg_CFG_CURSOR_PRESET1_LANE_5_0_b0  LANE_PRESET_CFG0_LANE.BF.CFG_CURSOR_PRESET1_LANE_5_0_b0
#define reg_CFG_CURSOR_PRESET1_LANE_5_0_b1  LANE_PRESET_CFG0_LANE.BF.CFG_CURSOR_PRESET1_LANE_5_0_b1
#define reg_CFG_CURSOR_PRESET2_LANE_5_0  LANE_PRESET_CFG0_LANE.BF.CFG_CURSOR_PRESET2_LANE_5_0
#define reg_CFG_CURSOR_PRESET3_LANE_5_0_b0  LANE_PRESET_CFG0_LANE.BF.CFG_CURSOR_PRESET3_LANE_5_0_b0
#define reg_CFG_CURSOR_PRESET3_LANE_5_0_b1  LANE_PRESET_CFG0_LANE.BF.CFG_CURSOR_PRESET3_LANE_5_0_b1

// 0x0030	LANE_PRESET_CFG2_LANE		Lane Equalization Preset Configuration 2
typedef union {
	struct {
		uint8_t CFG_CURSOR_PRESET4_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t CFG_CURSOR_PRESET5_LANE_5_0_b0           : 2;	/* [11:6]     r/w 6'h39*/
		uint8_t CFG_CURSOR_PRESET5_LANE_5_0_b1           : 4;	/* [11:6]     r/w 6'h39*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_PRESET6_LANE_5_0              : 6;	/*[21:16]     r/w 6'h37*/
		uint8_t CFG_CURSOR_PRESET7_LANE_5_0_b0           : 2;	/*[27:22]     r/w 6'h2c*/
		uint8_t CFG_CURSOR_PRESET7_LANE_5_0_b1           : 4;	/*[27:22]     r/w 6'h2c*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG2_LANE_t;
__xdata __at( 0x5330 ) volatile LANE_PRESET_CFG2_LANE_t LANE_PRESET_CFG2_LANE;
#define reg_CFG_CURSOR_PRESET4_LANE_5_0  LANE_PRESET_CFG2_LANE.BF.CFG_CURSOR_PRESET4_LANE_5_0
#define reg_CFG_CURSOR_PRESET5_LANE_5_0_b0  LANE_PRESET_CFG2_LANE.BF.CFG_CURSOR_PRESET5_LANE_5_0_b0
#define reg_CFG_CURSOR_PRESET5_LANE_5_0_b1  LANE_PRESET_CFG2_LANE.BF.CFG_CURSOR_PRESET5_LANE_5_0_b1
#define reg_CFG_CURSOR_PRESET6_LANE_5_0  LANE_PRESET_CFG2_LANE.BF.CFG_CURSOR_PRESET6_LANE_5_0
#define reg_CFG_CURSOR_PRESET7_LANE_5_0_b0  LANE_PRESET_CFG2_LANE.BF.CFG_CURSOR_PRESET7_LANE_5_0_b0
#define reg_CFG_CURSOR_PRESET7_LANE_5_0_b1  LANE_PRESET_CFG2_LANE.BF.CFG_CURSOR_PRESET7_LANE_5_0_b1

// 0x0034	LANE_PRESET_CFG4_LANE		Lane Equalization Preset Configuration 4
typedef union {
	struct {
		uint8_t CFG_CURSOR_PRESET8_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h2f*/
		uint8_t CFG_CURSOR_PRESET9_LANE_5_0_b0           : 2;	/* [11:6]     r/w 6'h35*/
		uint8_t CFG_CURSOR_PRESET9_LANE_5_0_b1           : 4;	/* [11:6]     r/w 6'h35*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_PRESET10_LANE_5_0             : 6;	/*[21:16]     r/w 6'h2a*/
		uint8_t CFG_CURSOR_PRESET11_LANE_5_0_b0          : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_CURSOR_PRESET11_LANE_5_0_b1          : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG4_LANE_t;
__xdata __at( 0x5334 ) volatile LANE_PRESET_CFG4_LANE_t LANE_PRESET_CFG4_LANE;
#define reg_CFG_CURSOR_PRESET8_LANE_5_0  LANE_PRESET_CFG4_LANE.BF.CFG_CURSOR_PRESET8_LANE_5_0
#define reg_CFG_CURSOR_PRESET9_LANE_5_0_b0  LANE_PRESET_CFG4_LANE.BF.CFG_CURSOR_PRESET9_LANE_5_0_b0
#define reg_CFG_CURSOR_PRESET9_LANE_5_0_b1  LANE_PRESET_CFG4_LANE.BF.CFG_CURSOR_PRESET9_LANE_5_0_b1
#define reg_CFG_CURSOR_PRESET10_LANE_5_0  LANE_PRESET_CFG4_LANE.BF.CFG_CURSOR_PRESET10_LANE_5_0
#define reg_CFG_CURSOR_PRESET11_LANE_5_0_b0  LANE_PRESET_CFG4_LANE.BF.CFG_CURSOR_PRESET11_LANE_5_0_b0
#define reg_CFG_CURSOR_PRESET11_LANE_5_0_b1  LANE_PRESET_CFG4_LANE.BF.CFG_CURSOR_PRESET11_LANE_5_0_b1

// 0x0038	LANE_PRESET_CFG6_LANE		Lane Equalization Preset Configuration 6
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_PRESET0_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET0_LANE_5_0_b0      : 2;	/* [11:6]     r/w 6'h10*/
		uint8_t CFG_POST_CURSOR_PRESET0_LANE_5_0_b1      : 4;	/* [11:6]     r/w 6'h10*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_PRESET1_LANE_5_0          : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET1_LANE_5_0_b0      : 2;	/*[27:22]     r/w 6'hb*/
		uint8_t CFG_POST_CURSOR_PRESET1_LANE_5_0_b1      : 4;	/*[27:22]     r/w 6'hb*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG6_LANE_t;
__xdata __at( 0x5338 ) volatile LANE_PRESET_CFG6_LANE_t LANE_PRESET_CFG6_LANE;
#define reg_CFG_PRE_CURSOR_PRESET0_LANE_5_0  LANE_PRESET_CFG6_LANE.BF.CFG_PRE_CURSOR_PRESET0_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET0_LANE_5_0_b0  LANE_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_PRESET0_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET0_LANE_5_0_b1  LANE_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_PRESET0_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_PRESET1_LANE_5_0  LANE_PRESET_CFG6_LANE.BF.CFG_PRE_CURSOR_PRESET1_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET1_LANE_5_0_b0  LANE_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_PRESET1_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET1_LANE_5_0_b1  LANE_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_PRESET1_LANE_5_0_b1

// 0x003c	LANE_PRESET_CFG8_LANE		Lane Equalization Preset Configuration 8
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_PRESET2_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET2_LANE_5_0_b0      : 2;	/* [11:6]     r/w 6'hd*/
		uint8_t CFG_POST_CURSOR_PRESET2_LANE_5_0_b1      : 4;	/* [11:6]     r/w 6'hd*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_PRESET3_LANE_5_0          : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET3_LANE_5_0_b0      : 2;	/*[27:22]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_PRESET3_LANE_5_0_b1      : 4;	/*[27:22]     r/w 6'h8*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG8_LANE_t;
__xdata __at( 0x533c ) volatile LANE_PRESET_CFG8_LANE_t LANE_PRESET_CFG8_LANE;
#define reg_CFG_PRE_CURSOR_PRESET2_LANE_5_0  LANE_PRESET_CFG8_LANE.BF.CFG_PRE_CURSOR_PRESET2_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET2_LANE_5_0_b0  LANE_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_PRESET2_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET2_LANE_5_0_b1  LANE_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_PRESET2_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_PRESET3_LANE_5_0  LANE_PRESET_CFG8_LANE.BF.CFG_PRE_CURSOR_PRESET3_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET3_LANE_5_0_b0  LANE_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_PRESET3_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET3_LANE_5_0_b1  LANE_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_PRESET3_LANE_5_0_b1

// 0x0040	LANE_PRESET_CFG10_LANE		Lane Equalization Preset Configuration 10
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_PRESET4_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET4_LANE_5_0_b0      : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET4_LANE_5_0_b1      : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_PRESET5_LANE_5_0          : 6;	/*[21:16]     r/w 6'h6*/
		uint8_t CFG_POST_CURSOR_PRESET5_LANE_5_0_b0      : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET5_LANE_5_0_b1      : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG10_LANE_t;
__xdata __at( 0x5340 ) volatile LANE_PRESET_CFG10_LANE_t LANE_PRESET_CFG10_LANE;
#define reg_CFG_PRE_CURSOR_PRESET4_LANE_5_0  LANE_PRESET_CFG10_LANE.BF.CFG_PRE_CURSOR_PRESET4_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET4_LANE_5_0_b0  LANE_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_PRESET4_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET4_LANE_5_0_b1  LANE_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_PRESET4_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_PRESET5_LANE_5_0  LANE_PRESET_CFG10_LANE.BF.CFG_PRE_CURSOR_PRESET5_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET5_LANE_5_0_b0  LANE_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_PRESET5_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET5_LANE_5_0_b1  LANE_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_PRESET5_LANE_5_0_b1

// 0x0044	LANE_PRESET_CFG12_LANE		Lane Equalization Preset Configuration 12
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_PRESET6_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_PRESET6_LANE_5_0_b0      : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET6_LANE_5_0_b1      : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_PRESET7_LANE_5_0          : 6;	/*[21:16]     r/w 6'h6*/
		uint8_t CFG_POST_CURSOR_PRESET7_LANE_5_0_b0      : 2;	/*[27:22]     r/w 6'hd*/
		uint8_t CFG_POST_CURSOR_PRESET7_LANE_5_0_b1      : 4;	/*[27:22]     r/w 6'hd*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG12_LANE_t;
__xdata __at( 0x5344 ) volatile LANE_PRESET_CFG12_LANE_t LANE_PRESET_CFG12_LANE;
#define reg_CFG_PRE_CURSOR_PRESET6_LANE_5_0  LANE_PRESET_CFG12_LANE.BF.CFG_PRE_CURSOR_PRESET6_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET6_LANE_5_0_b0  LANE_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_PRESET6_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET6_LANE_5_0_b1  LANE_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_PRESET6_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_PRESET7_LANE_5_0  LANE_PRESET_CFG12_LANE.BF.CFG_PRE_CURSOR_PRESET7_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET7_LANE_5_0_b0  LANE_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_PRESET7_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET7_LANE_5_0_b1  LANE_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_PRESET7_LANE_5_0_b1

// 0x0048	LANE_PRESET_CFG14_LANE		Lane Equalization Preset Configuration 14
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_PRESET8_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_PRESET8_LANE_5_0_b0      : 2;	/* [11:6]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_PRESET8_LANE_5_0_b1      : 4;	/* [11:6]     r/w 6'h8*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_PRESET9_LANE_5_0          : 6;	/*[21:16]     r/w 6'ha*/
		uint8_t CFG_POST_CURSOR_PRESET9_LANE_5_0_b0      : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET9_LANE_5_0_b1      : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG14_LANE_t;
__xdata __at( 0x5348 ) volatile LANE_PRESET_CFG14_LANE_t LANE_PRESET_CFG14_LANE;
#define reg_CFG_PRE_CURSOR_PRESET8_LANE_5_0  LANE_PRESET_CFG14_LANE.BF.CFG_PRE_CURSOR_PRESET8_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET8_LANE_5_0_b0  LANE_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_PRESET8_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET8_LANE_5_0_b1  LANE_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_PRESET8_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_PRESET9_LANE_5_0  LANE_PRESET_CFG14_LANE.BF.CFG_PRE_CURSOR_PRESET9_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET9_LANE_5_0_b0  LANE_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_PRESET9_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET9_LANE_5_0_b1  LANE_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_PRESET9_LANE_5_0_b1

// 0x004c	LANE_PRESET_CFG16_LANE		Lane Equalization Preset Configuration 16
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_PRESET10_LANE_5_0         : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET10_LANE_5_0_b0     : 2;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_POST_CURSOR_PRESET10_LANE_5_0_b1     : 4;	/* [11:6]     r/w 6'h15*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_PRESET11_LANE_5_0         : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET11_LANE_5_0_b0     : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_PRESET11_LANE_5_0_b1     : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_PRESET_CFG16_LANE_t;
__xdata __at( 0x534c ) volatile LANE_PRESET_CFG16_LANE_t LANE_PRESET_CFG16_LANE;
#define reg_CFG_PRE_CURSOR_PRESET10_LANE_5_0  LANE_PRESET_CFG16_LANE.BF.CFG_PRE_CURSOR_PRESET10_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET10_LANE_5_0_b0  LANE_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_PRESET10_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET10_LANE_5_0_b1  LANE_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_PRESET10_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_PRESET11_LANE_5_0  LANE_PRESET_CFG16_LANE.BF.CFG_PRE_CURSOR_PRESET11_LANE_5_0
#define reg_CFG_POST_CURSOR_PRESET11_LANE_5_0_b0  LANE_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_PRESET11_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_PRESET11_LANE_5_0_b1  LANE_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_PRESET11_LANE_5_0_b1

// 0x0050	LANE_COEFF_MAX0_LANE		Lane Equalization Coefficient Max Setting 0
typedef union {
	struct {
		uint8_t CFG_TX_COEFF_MAX0_LANE_11_0_b0           : 8;	/* [11:0]     r/w 12'hb4f*/
		uint8_t CFG_TX_COEFF_MAX0_LANE_11_0_b1           : 4;	/* [11:0]     r/w 12'hb4f*/
		uint8_t CFG_TX_MARGIN_EN_LANE                    : 1;	/*     12     r/w   0*/
		uint8_t CFG_TX_SWING_EN_LANE                     : 1;	/*     13     r/w   0*/
		uint8_t CFG_TX_TRAIN_CTRL_LANE                   : 1;	/*     14     r/w   1*/
		uint8_t CFG_RX_PRESET_HINT_LANE_3                : 1;	/*     15     r/w   0*/
		uint8_t CFG_TX_COEFF_MAX1_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0f*/
		uint8_t CFG_REMOTE_MAX0_LANE_1_0                 : 2;	/*[23:22]     r/w 2'h2*/
		uint8_t CFG_REMOTE_MAX1_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t CFG_G0_STATUS_FIELD_LANE                 : 1;	/*     26     r/w   1*/
		uint8_t CFG_RX_HINT_OVERRIDE_LANE                : 1;	/*     27     r/w   0*/
		uint8_t CFG_RX_PRESET_HINT_LANE_2_0              : 3;	/*[30:28]     r/w   0*/
		uint8_t CFG_LINK_TRAIN_CTRL_LANE                 : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_COEFF_MAX0_LANE_t;
__xdata __at( 0x5350 ) volatile LANE_COEFF_MAX0_LANE_t LANE_COEFF_MAX0_LANE;
#define reg_CFG_TX_COEFF_MAX0_LANE_11_0_b0  LANE_COEFF_MAX0_LANE.BF.CFG_TX_COEFF_MAX0_LANE_11_0_b0
#define reg_CFG_TX_COEFF_MAX0_LANE_11_0_b1  LANE_COEFF_MAX0_LANE.BF.CFG_TX_COEFF_MAX0_LANE_11_0_b1
#define reg_CFG_TX_MARGIN_EN_LANE  LANE_COEFF_MAX0_LANE.BF.CFG_TX_MARGIN_EN_LANE
#define reg_CFG_TX_SWING_EN_LANE  LANE_COEFF_MAX0_LANE.BF.CFG_TX_SWING_EN_LANE
#define reg_CFG_TX_TRAIN_CTRL_LANE  LANE_COEFF_MAX0_LANE.BF.CFG_TX_TRAIN_CTRL_LANE
#define reg_CFG_RX_PRESET_HINT_LANE_3  LANE_COEFF_MAX0_LANE.BF.CFG_RX_PRESET_HINT_LANE_3
#define reg_CFG_TX_COEFF_MAX1_LANE_5_0  LANE_COEFF_MAX0_LANE.BF.CFG_TX_COEFF_MAX1_LANE_5_0
#define reg_CFG_REMOTE_MAX0_LANE_1_0  LANE_COEFF_MAX0_LANE.BF.CFG_REMOTE_MAX0_LANE_1_0
#define reg_CFG_REMOTE_MAX1_LANE_1_0  LANE_COEFF_MAX0_LANE.BF.CFG_REMOTE_MAX1_LANE_1_0
#define reg_CFG_G0_STATUS_FIELD_LANE  LANE_COEFF_MAX0_LANE.BF.CFG_G0_STATUS_FIELD_LANE
#define reg_CFG_RX_HINT_OVERRIDE_LANE  LANE_COEFF_MAX0_LANE.BF.CFG_RX_HINT_OVERRIDE_LANE
#define reg_CFG_RX_PRESET_HINT_LANE_2_0  LANE_COEFF_MAX0_LANE.BF.CFG_RX_PRESET_HINT_LANE_2_0
#define reg_CFG_LINK_TRAIN_CTRL_LANE  LANE_COEFF_MAX0_LANE.BF.CFG_LINK_TRAIN_CTRL_LANE

// 0x0054	LANE_REMOTE_SET_LANE		Lane Equalization Remote Setting
typedef union {
	struct {
		uint8_t CFG_FOM_DIRN_OVERRIDE_LANE               : 1;	/*      0     r/w   0*/
		uint8_t CFG_FOM_ONLY_MODE_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t CFG_FOM_PRESET_VECTOR_LANE_3_0           : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t CFG_INCLD_INIT_FOM_LANE                  : 1;	/*      6     r/w   0*/
		uint8_t CFG_SKIP_FINAL_FOM_LANE                  : 1;	/*      7     r/w   0*/
		uint8_t CFG_INVALID_REQ_SEL_LANE                 : 1;	/*      8     r/w   1*/
		uint8_t CFG_REMOTE_INIT_C1_LANE_6_0              : 7;	/* [15:9]     r/w 7'h0*/
		uint8_t PIPE_EQ_STATUS_LANE_15_0_b0              : 8;	/*[31:16]       r 16'h0*/
		uint8_t PIPE_EQ_STATUS_LANE_15_0_b1              : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} LANE_REMOTE_SET_LANE_t;
__xdata __at( 0x5354 ) volatile LANE_REMOTE_SET_LANE_t LANE_REMOTE_SET_LANE;
#define reg_CFG_FOM_DIRN_OVERRIDE_LANE  LANE_REMOTE_SET_LANE.BF.CFG_FOM_DIRN_OVERRIDE_LANE
#define reg_CFG_FOM_ONLY_MODE_LANE  LANE_REMOTE_SET_LANE.BF.CFG_FOM_ONLY_MODE_LANE
#define reg_CFG_FOM_PRESET_VECTOR_LANE_3_0  LANE_REMOTE_SET_LANE.BF.CFG_FOM_PRESET_VECTOR_LANE_3_0
#define reg_CFG_INCLD_INIT_FOM_LANE  LANE_REMOTE_SET_LANE.BF.CFG_INCLD_INIT_FOM_LANE
#define reg_CFG_SKIP_FINAL_FOM_LANE  LANE_REMOTE_SET_LANE.BF.CFG_SKIP_FINAL_FOM_LANE
#define reg_CFG_INVALID_REQ_SEL_LANE  LANE_REMOTE_SET_LANE.BF.CFG_INVALID_REQ_SEL_LANE
#define reg_CFG_REMOTE_INIT_C1_LANE_6_0  LANE_REMOTE_SET_LANE.BF.CFG_REMOTE_INIT_C1_LANE_6_0
#define reg_PIPE_EQ_STATUS_LANE_15_0_b0  LANE_REMOTE_SET_LANE.BF.PIPE_EQ_STATUS_LANE_15_0_b0
#define reg_PIPE_EQ_STATUS_LANE_15_0_b1  LANE_REMOTE_SET_LANE.BF.PIPE_EQ_STATUS_LANE_15_0_b1
#define reg_PIPE_EQ_STATUS_LANE_15_0  LANE_REMOTE_SET_LANE.WT.W1

// 0x0058	LANE_EQ_16G_CFG0_LANE		Lane Equalization 16G Configuration 0
typedef union {
	struct {
		uint8_t CFG_EQ_16G_FS_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t CFG_EQ_16G_LF_LANE_5_0_b0                : 2;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_EQ_16G_LF_LANE_5_0_b1                : 4;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_PRESET_INDEX_SEL_LANE                : 1;	/*     12     r/w   1*/
		uint8_t RESERVED_13                              : 3;	/*[31:13]     r/w 19'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:13]     r/w 19'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:13]     r/w 19'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_EQ_16G_CFG0_LANE_t;
__xdata __at( 0x5358 ) volatile LANE_EQ_16G_CFG0_LANE_t LANE_EQ_16G_CFG0_LANE;
#define reg_CFG_EQ_16G_FS_LANE_5_0  LANE_EQ_16G_CFG0_LANE.BF.CFG_EQ_16G_FS_LANE_5_0
#define reg_CFG_EQ_16G_LF_LANE_5_0_b0  LANE_EQ_16G_CFG0_LANE.BF.CFG_EQ_16G_LF_LANE_5_0_b0
#define reg_CFG_EQ_16G_LF_LANE_5_0_b1  LANE_EQ_16G_CFG0_LANE.BF.CFG_EQ_16G_LF_LANE_5_0_b1
#define reg_CFG_PRESET_INDEX_SEL_LANE  LANE_EQ_16G_CFG0_LANE.BF.CFG_PRESET_INDEX_SEL_LANE

// 0x005c	LANE_16G_PRESET_CFG0_LANE		Lane Equalization 16 G Preset Configuration 0
typedef union {
	struct {
		uint8_t CFG_CURSOR_16G_PRESET0_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h2f*/
		uint8_t CFG_CURSOR_16G_PRESET1_LANE_5_0_b0       : 2;	/* [11:6]     r/w 6'h34*/
		uint8_t CFG_CURSOR_16G_PRESET1_LANE_5_0_b1       : 4;	/* [11:6]     r/w 6'h34*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_16G_PRESET2_LANE_5_0          : 6;	/*[21:16]     r/w 6'h32*/
		uint8_t CFG_CURSOR_16G_PRESET3_LANE_5_0_b0       : 2;	/*[27:22]     r/w 6'h37*/
		uint8_t CFG_CURSOR_16G_PRESET3_LANE_5_0_b1       : 4;	/*[27:22]     r/w 6'h37*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG0_LANE_t;
__xdata __at( 0x535c ) volatile LANE_16G_PRESET_CFG0_LANE_t LANE_16G_PRESET_CFG0_LANE;
#define reg_CFG_CURSOR_16G_PRESET0_LANE_5_0  LANE_16G_PRESET_CFG0_LANE.BF.CFG_CURSOR_16G_PRESET0_LANE_5_0
#define reg_CFG_CURSOR_16G_PRESET1_LANE_5_0_b0  LANE_16G_PRESET_CFG0_LANE.BF.CFG_CURSOR_16G_PRESET1_LANE_5_0_b0
#define reg_CFG_CURSOR_16G_PRESET1_LANE_5_0_b1  LANE_16G_PRESET_CFG0_LANE.BF.CFG_CURSOR_16G_PRESET1_LANE_5_0_b1
#define reg_CFG_CURSOR_16G_PRESET2_LANE_5_0  LANE_16G_PRESET_CFG0_LANE.BF.CFG_CURSOR_16G_PRESET2_LANE_5_0
#define reg_CFG_CURSOR_16G_PRESET3_LANE_5_0_b0  LANE_16G_PRESET_CFG0_LANE.BF.CFG_CURSOR_16G_PRESET3_LANE_5_0_b0
#define reg_CFG_CURSOR_16G_PRESET3_LANE_5_0_b1  LANE_16G_PRESET_CFG0_LANE.BF.CFG_CURSOR_16G_PRESET3_LANE_5_0_b1

// 0x0060	LANE_16G_PRESET_CFG2_LANE		Lane Equalization 16G Preset Configuration 2
typedef union {
	struct {
		uint8_t CFG_CURSOR_16G_PRESET4_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t CFG_CURSOR_16G_PRESET5_LANE_5_0_b0       : 2;	/* [11:6]     r/w 6'h39*/
		uint8_t CFG_CURSOR_16G_PRESET5_LANE_5_0_b1       : 4;	/* [11:6]     r/w 6'h39*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_16G_PRESET6_LANE_5_0          : 6;	/*[21:16]     r/w 6'h37*/
		uint8_t CFG_CURSOR_16G_PRESET7_LANE_5_0_b0       : 2;	/*[27:22]     r/w 6'h2c*/
		uint8_t CFG_CURSOR_16G_PRESET7_LANE_5_0_b1       : 4;	/*[27:22]     r/w 6'h2c*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG2_LANE_t;
__xdata __at( 0x5360 ) volatile LANE_16G_PRESET_CFG2_LANE_t LANE_16G_PRESET_CFG2_LANE;
#define reg_CFG_CURSOR_16G_PRESET4_LANE_5_0  LANE_16G_PRESET_CFG2_LANE.BF.CFG_CURSOR_16G_PRESET4_LANE_5_0
#define reg_CFG_CURSOR_16G_PRESET5_LANE_5_0_b0  LANE_16G_PRESET_CFG2_LANE.BF.CFG_CURSOR_16G_PRESET5_LANE_5_0_b0
#define reg_CFG_CURSOR_16G_PRESET5_LANE_5_0_b1  LANE_16G_PRESET_CFG2_LANE.BF.CFG_CURSOR_16G_PRESET5_LANE_5_0_b1
#define reg_CFG_CURSOR_16G_PRESET6_LANE_5_0  LANE_16G_PRESET_CFG2_LANE.BF.CFG_CURSOR_16G_PRESET6_LANE_5_0
#define reg_CFG_CURSOR_16G_PRESET7_LANE_5_0_b0  LANE_16G_PRESET_CFG2_LANE.BF.CFG_CURSOR_16G_PRESET7_LANE_5_0_b0
#define reg_CFG_CURSOR_16G_PRESET7_LANE_5_0_b1  LANE_16G_PRESET_CFG2_LANE.BF.CFG_CURSOR_16G_PRESET7_LANE_5_0_b1

// 0x0064	LANE_16G_PRESET_CFG4_LANE		Lane Equalization 16G Preset Configuration 4
typedef union {
	struct {
		uint8_t CFG_CURSOR_16G_PRESET8_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h2f*/
		uint8_t CFG_CURSOR_16G_PRESET9_LANE_5_0_b0       : 2;	/* [11:6]     r/w 6'h35*/
		uint8_t CFG_CURSOR_16G_PRESET9_LANE_5_0_b1       : 4;	/* [11:6]     r/w 6'h35*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_16G_PRESET10_LANE_5_0         : 6;	/*[21:16]     r/w 6'h2a*/
		uint8_t RESERVED_22                              : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_24                              : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG4_LANE_t;
__xdata __at( 0x5364 ) volatile LANE_16G_PRESET_CFG4_LANE_t LANE_16G_PRESET_CFG4_LANE;
#define reg_CFG_CURSOR_16G_PRESET8_LANE_5_0  LANE_16G_PRESET_CFG4_LANE.BF.CFG_CURSOR_16G_PRESET8_LANE_5_0
#define reg_CFG_CURSOR_16G_PRESET9_LANE_5_0_b0  LANE_16G_PRESET_CFG4_LANE.BF.CFG_CURSOR_16G_PRESET9_LANE_5_0_b0
#define reg_CFG_CURSOR_16G_PRESET9_LANE_5_0_b1  LANE_16G_PRESET_CFG4_LANE.BF.CFG_CURSOR_16G_PRESET9_LANE_5_0_b1
#define reg_CFG_CURSOR_16G_PRESET10_LANE_5_0  LANE_16G_PRESET_CFG4_LANE.BF.CFG_CURSOR_16G_PRESET10_LANE_5_0

// 0x0068	LANE_16G_PRESET_CFG6_LANE		Lane Equalization 16G Preset Configuration 6
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_16G_PRESET0_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET0_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h10*/
		uint8_t CFG_POST_CURSOR_16G_PRESET0_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h10*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_16G_PRESET1_LANE_5_0      : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET1_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'hb*/
		uint8_t CFG_POST_CURSOR_16G_PRESET1_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'hb*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG6_LANE_t;
__xdata __at( 0x5368 ) volatile LANE_16G_PRESET_CFG6_LANE_t LANE_16G_PRESET_CFG6_LANE;
#define reg_CFG_PRE_CURSOR_16G_PRESET0_LANE_5_0  LANE_16G_PRESET_CFG6_LANE.BF.CFG_PRE_CURSOR_16G_PRESET0_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET0_LANE_5_0_b0  LANE_16G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_16G_PRESET0_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET0_LANE_5_0_b1  LANE_16G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_16G_PRESET0_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_16G_PRESET1_LANE_5_0  LANE_16G_PRESET_CFG6_LANE.BF.CFG_PRE_CURSOR_16G_PRESET1_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET1_LANE_5_0_b0  LANE_16G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_16G_PRESET1_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET1_LANE_5_0_b1  LANE_16G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_16G_PRESET1_LANE_5_0_b1

// 0x006c	LANE_16G_PRESET_CFG8_LANE		Lane Equalization 16G Preset Configuration 8
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_16G_PRESET2_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET2_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'hd*/
		uint8_t CFG_POST_CURSOR_16G_PRESET2_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'hd*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_16G_PRESET3_LANE_5_0      : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET3_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_16G_PRESET3_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'h8*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG8_LANE_t;
__xdata __at( 0x536c ) volatile LANE_16G_PRESET_CFG8_LANE_t LANE_16G_PRESET_CFG8_LANE;
#define reg_CFG_PRE_CURSOR_16G_PRESET2_LANE_5_0  LANE_16G_PRESET_CFG8_LANE.BF.CFG_PRE_CURSOR_16G_PRESET2_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET2_LANE_5_0_b0  LANE_16G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_16G_PRESET2_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET2_LANE_5_0_b1  LANE_16G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_16G_PRESET2_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_16G_PRESET3_LANE_5_0  LANE_16G_PRESET_CFG8_LANE.BF.CFG_PRE_CURSOR_16G_PRESET3_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET3_LANE_5_0_b0  LANE_16G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_16G_PRESET3_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET3_LANE_5_0_b1  LANE_16G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_16G_PRESET3_LANE_5_0_b1

// 0x0070	LANE_16G_PRESET_CFG10_LANE		Lane Equalization 16G Preset Configuration 10
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_16G_PRESET4_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET4_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET4_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_16G_PRESET5_LANE_5_0      : 6;	/*[21:16]     r/w 6'h6*/
		uint8_t CFG_POST_CURSOR_16G_PRESET5_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET5_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG10_LANE_t;
__xdata __at( 0x5370 ) volatile LANE_16G_PRESET_CFG10_LANE_t LANE_16G_PRESET_CFG10_LANE;
#define reg_CFG_PRE_CURSOR_16G_PRESET4_LANE_5_0  LANE_16G_PRESET_CFG10_LANE.BF.CFG_PRE_CURSOR_16G_PRESET4_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET4_LANE_5_0_b0  LANE_16G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_16G_PRESET4_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET4_LANE_5_0_b1  LANE_16G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_16G_PRESET4_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_16G_PRESET5_LANE_5_0  LANE_16G_PRESET_CFG10_LANE.BF.CFG_PRE_CURSOR_16G_PRESET5_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET5_LANE_5_0_b0  LANE_16G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_16G_PRESET5_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET5_LANE_5_0_b1  LANE_16G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_16G_PRESET5_LANE_5_0_b1

// 0x0074	LANE_16G_PRESET_CFG12_LANE		Lane Equalization 16G Preset Configuration 12
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_16G_PRESET6_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_16G_PRESET6_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET6_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_16G_PRESET7_LANE_5_0      : 6;	/*[21:16]     r/w 6'h6*/
		uint8_t CFG_POST_CURSOR_16G_PRESET7_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'hd*/
		uint8_t CFG_POST_CURSOR_16G_PRESET7_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'hd*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG12_LANE_t;
__xdata __at( 0x5374 ) volatile LANE_16G_PRESET_CFG12_LANE_t LANE_16G_PRESET_CFG12_LANE;
#define reg_CFG_PRE_CURSOR_16G_PRESET6_LANE_5_0  LANE_16G_PRESET_CFG12_LANE.BF.CFG_PRE_CURSOR_16G_PRESET6_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET6_LANE_5_0_b0  LANE_16G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_16G_PRESET6_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET6_LANE_5_0_b1  LANE_16G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_16G_PRESET6_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_16G_PRESET7_LANE_5_0  LANE_16G_PRESET_CFG12_LANE.BF.CFG_PRE_CURSOR_16G_PRESET7_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET7_LANE_5_0_b0  LANE_16G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_16G_PRESET7_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET7_LANE_5_0_b1  LANE_16G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_16G_PRESET7_LANE_5_0_b1

// 0x0078	LANE_16G_PRESET_CFG14_LANE		Lane Equalization 16G Preset Configuration 14
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_16G_PRESET8_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_16G_PRESET8_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_16G_PRESET8_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h8*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_16G_PRESET9_LANE_5_0      : 6;	/*[21:16]     r/w 6'ha*/
		uint8_t CFG_POST_CURSOR_16G_PRESET9_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET9_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG14_LANE_t;
__xdata __at( 0x5378 ) volatile LANE_16G_PRESET_CFG14_LANE_t LANE_16G_PRESET_CFG14_LANE;
#define reg_CFG_PRE_CURSOR_16G_PRESET8_LANE_5_0  LANE_16G_PRESET_CFG14_LANE.BF.CFG_PRE_CURSOR_16G_PRESET8_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET8_LANE_5_0_b0  LANE_16G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_16G_PRESET8_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET8_LANE_5_0_b1  LANE_16G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_16G_PRESET8_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_16G_PRESET9_LANE_5_0  LANE_16G_PRESET_CFG14_LANE.BF.CFG_PRE_CURSOR_16G_PRESET9_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET9_LANE_5_0_b0  LANE_16G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_16G_PRESET9_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET9_LANE_5_0_b1  LANE_16G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_16G_PRESET9_LANE_5_0_b1

// 0x007c	LANE_16G_PRESET_CFG16_LANE		Lane Equalization 16G Preset Configuration 16
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_16G_PRESET10_LANE_5_0     : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_16G_PRESET10_LANE_5_0_b0 : 2;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_POST_CURSOR_16G_PRESET10_LANE_5_0_b1 : 4;	/* [11:6]     r/w 6'h15*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_24                              : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_16G_PRESET_CFG16_LANE_t;
__xdata __at( 0x537c ) volatile LANE_16G_PRESET_CFG16_LANE_t LANE_16G_PRESET_CFG16_LANE;
#define reg_CFG_PRE_CURSOR_16G_PRESET10_LANE_5_0  LANE_16G_PRESET_CFG16_LANE.BF.CFG_PRE_CURSOR_16G_PRESET10_LANE_5_0
#define reg_CFG_POST_CURSOR_16G_PRESET10_LANE_5_0_b0  LANE_16G_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_16G_PRESET10_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_16G_PRESET10_LANE_5_0_b1  LANE_16G_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_16G_PRESET10_LANE_5_0_b1

// 0x0080	LANE_EQ_32G_CFG0_LANE		Lane Equalization 32G Configuration 0
typedef union {
	struct {
		uint8_t CFG_EQ_32G_FS_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t CFG_EQ_32G_LF_LANE_5_0_b0                : 2;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_EQ_32G_LF_LANE_5_0_b1                : 4;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_32G_PRESET_INDEX_SEL_LANE            : 1;	/*     12     r/w   0*/
		uint8_t CFG_ALL_PRESET_INDEX_SEL_LANE            : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w 18'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w 18'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w 18'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_EQ_32G_CFG0_LANE_t;
__xdata __at( 0x5380 ) volatile LANE_EQ_32G_CFG0_LANE_t LANE_EQ_32G_CFG0_LANE;
#define reg_CFG_EQ_32G_FS_LANE_5_0  LANE_EQ_32G_CFG0_LANE.BF.CFG_EQ_32G_FS_LANE_5_0
#define reg_CFG_EQ_32G_LF_LANE_5_0_b0  LANE_EQ_32G_CFG0_LANE.BF.CFG_EQ_32G_LF_LANE_5_0_b0
#define reg_CFG_EQ_32G_LF_LANE_5_0_b1  LANE_EQ_32G_CFG0_LANE.BF.CFG_EQ_32G_LF_LANE_5_0_b1
#define reg_CFG_32G_PRESET_INDEX_SEL_LANE  LANE_EQ_32G_CFG0_LANE.BF.CFG_32G_PRESET_INDEX_SEL_LANE
#define reg_CFG_ALL_PRESET_INDEX_SEL_LANE  LANE_EQ_32G_CFG0_LANE.BF.CFG_ALL_PRESET_INDEX_SEL_LANE

// 0x0084	LANE_32G_PRESET_CFG0_LANE		Lane Equalization 32G Preset Configuration 0
typedef union {
	struct {
		uint8_t CFG_CURSOR_32G_PRESET0_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h2f*/
		uint8_t CFG_CURSOR_32G_PRESET1_LANE_5_0_b0       : 2;	/* [11:6]     r/w 6'h34*/
		uint8_t CFG_CURSOR_32G_PRESET1_LANE_5_0_b1       : 4;	/* [11:6]     r/w 6'h34*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_32G_PRESET2_LANE_5_0          : 6;	/*[21:16]     r/w 6'h32*/
		uint8_t CFG_CURSOR_32G_PRESET3_LANE_5_0_b0       : 2;	/*[27:22]     r/w 6'h37*/
		uint8_t CFG_CURSOR_32G_PRESET3_LANE_5_0_b1       : 4;	/*[27:22]     r/w 6'h37*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG0_LANE_t;
__xdata __at( 0x5384 ) volatile LANE_32G_PRESET_CFG0_LANE_t LANE_32G_PRESET_CFG0_LANE;
#define reg_CFG_CURSOR_32G_PRESET0_LANE_5_0  LANE_32G_PRESET_CFG0_LANE.BF.CFG_CURSOR_32G_PRESET0_LANE_5_0
#define reg_CFG_CURSOR_32G_PRESET1_LANE_5_0_b0  LANE_32G_PRESET_CFG0_LANE.BF.CFG_CURSOR_32G_PRESET1_LANE_5_0_b0
#define reg_CFG_CURSOR_32G_PRESET1_LANE_5_0_b1  LANE_32G_PRESET_CFG0_LANE.BF.CFG_CURSOR_32G_PRESET1_LANE_5_0_b1
#define reg_CFG_CURSOR_32G_PRESET2_LANE_5_0  LANE_32G_PRESET_CFG0_LANE.BF.CFG_CURSOR_32G_PRESET2_LANE_5_0
#define reg_CFG_CURSOR_32G_PRESET3_LANE_5_0_b0  LANE_32G_PRESET_CFG0_LANE.BF.CFG_CURSOR_32G_PRESET3_LANE_5_0_b0
#define reg_CFG_CURSOR_32G_PRESET3_LANE_5_0_b1  LANE_32G_PRESET_CFG0_LANE.BF.CFG_CURSOR_32G_PRESET3_LANE_5_0_b1

// 0x0088	LANE_32G_PRESET_CFG2_LANE		Lane Equalization 32G Preset Configuration 2
typedef union {
	struct {
		uint8_t CFG_CURSOR_32G_PRESET4_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h3f*/
		uint8_t CFG_CURSOR_32G_PRESET5_LANE_5_0_b0       : 2;	/* [11:6]     r/w 6'h39*/
		uint8_t CFG_CURSOR_32G_PRESET5_LANE_5_0_b1       : 4;	/* [11:6]     r/w 6'h39*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_32G_PRESET6_LANE_5_0          : 6;	/*[21:16]     r/w 6'h37*/
		uint8_t CFG_CURSOR_32G_PRESET7_LANE_5_0_b0       : 2;	/*[27:22]     r/w 6'h2c*/
		uint8_t CFG_CURSOR_32G_PRESET7_LANE_5_0_b1       : 4;	/*[27:22]     r/w 6'h2c*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG2_LANE_t;
__xdata __at( 0x5388 ) volatile LANE_32G_PRESET_CFG2_LANE_t LANE_32G_PRESET_CFG2_LANE;
#define reg_CFG_CURSOR_32G_PRESET4_LANE_5_0  LANE_32G_PRESET_CFG2_LANE.BF.CFG_CURSOR_32G_PRESET4_LANE_5_0
#define reg_CFG_CURSOR_32G_PRESET5_LANE_5_0_b0  LANE_32G_PRESET_CFG2_LANE.BF.CFG_CURSOR_32G_PRESET5_LANE_5_0_b0
#define reg_CFG_CURSOR_32G_PRESET5_LANE_5_0_b1  LANE_32G_PRESET_CFG2_LANE.BF.CFG_CURSOR_32G_PRESET5_LANE_5_0_b1
#define reg_CFG_CURSOR_32G_PRESET6_LANE_5_0  LANE_32G_PRESET_CFG2_LANE.BF.CFG_CURSOR_32G_PRESET6_LANE_5_0
#define reg_CFG_CURSOR_32G_PRESET7_LANE_5_0_b0  LANE_32G_PRESET_CFG2_LANE.BF.CFG_CURSOR_32G_PRESET7_LANE_5_0_b0
#define reg_CFG_CURSOR_32G_PRESET7_LANE_5_0_b1  LANE_32G_PRESET_CFG2_LANE.BF.CFG_CURSOR_32G_PRESET7_LANE_5_0_b1

// 0x008c	LANE_32G_PRESET_CFG4_LANE		Lane Equalization 32G Preset Configuration 4
typedef union {
	struct {
		uint8_t CFG_CURSOR_32G_PRESET8_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h2f*/
		uint8_t CFG_CURSOR_32G_PRESET9_LANE_5_0_b0       : 2;	/* [11:6]     r/w 6'h35*/
		uint8_t CFG_CURSOR_32G_PRESET9_LANE_5_0_b1       : 4;	/* [11:6]     r/w 6'h35*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_CURSOR_32G_PRESET10_LANE_5_0         : 6;	/*[21:16]     r/w 6'h2a*/
		uint8_t RESERVED_22                              : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_24                              : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG4_LANE_t;
__xdata __at( 0x538c ) volatile LANE_32G_PRESET_CFG4_LANE_t LANE_32G_PRESET_CFG4_LANE;
#define reg_CFG_CURSOR_32G_PRESET8_LANE_5_0  LANE_32G_PRESET_CFG4_LANE.BF.CFG_CURSOR_32G_PRESET8_LANE_5_0
#define reg_CFG_CURSOR_32G_PRESET9_LANE_5_0_b0  LANE_32G_PRESET_CFG4_LANE.BF.CFG_CURSOR_32G_PRESET9_LANE_5_0_b0
#define reg_CFG_CURSOR_32G_PRESET9_LANE_5_0_b1  LANE_32G_PRESET_CFG4_LANE.BF.CFG_CURSOR_32G_PRESET9_LANE_5_0_b1
#define reg_CFG_CURSOR_32G_PRESET10_LANE_5_0  LANE_32G_PRESET_CFG4_LANE.BF.CFG_CURSOR_32G_PRESET10_LANE_5_0

// 0x0090	LANE_32G_PRESET_CFG6_LANE		Lane Equalization 32G Preset Configuration 6
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_32G_PRESET0_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET0_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h10*/
		uint8_t CFG_POST_CURSOR_32G_PRESET0_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h10*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_32G_PRESET1_LANE_5_0      : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET1_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'hb*/
		uint8_t CFG_POST_CURSOR_32G_PRESET1_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'hb*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG6_LANE_t;
__xdata __at( 0x5390 ) volatile LANE_32G_PRESET_CFG6_LANE_t LANE_32G_PRESET_CFG6_LANE;
#define reg_CFG_PRE_CURSOR_32G_PRESET0_LANE_5_0  LANE_32G_PRESET_CFG6_LANE.BF.CFG_PRE_CURSOR_32G_PRESET0_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET0_LANE_5_0_b0  LANE_32G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_32G_PRESET0_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET0_LANE_5_0_b1  LANE_32G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_32G_PRESET0_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_32G_PRESET1_LANE_5_0  LANE_32G_PRESET_CFG6_LANE.BF.CFG_PRE_CURSOR_32G_PRESET1_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET1_LANE_5_0_b0  LANE_32G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_32G_PRESET1_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET1_LANE_5_0_b1  LANE_32G_PRESET_CFG6_LANE.BF.CFG_POST_CURSOR_32G_PRESET1_LANE_5_0_b1

// 0x0094	LANE_32G_PRESET_CFG8_LANE		Lane Equalization 32G Preset Configuration 8
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_32G_PRESET2_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET2_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'hd*/
		uint8_t CFG_POST_CURSOR_32G_PRESET2_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'hd*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_32G_PRESET3_LANE_5_0      : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET3_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_32G_PRESET3_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'h8*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG8_LANE_t;
__xdata __at( 0x5394 ) volatile LANE_32G_PRESET_CFG8_LANE_t LANE_32G_PRESET_CFG8_LANE;
#define reg_CFG_PRE_CURSOR_32G_PRESET2_LANE_5_0  LANE_32G_PRESET_CFG8_LANE.BF.CFG_PRE_CURSOR_32G_PRESET2_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET2_LANE_5_0_b0  LANE_32G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_32G_PRESET2_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET2_LANE_5_0_b1  LANE_32G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_32G_PRESET2_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_32G_PRESET3_LANE_5_0  LANE_32G_PRESET_CFG8_LANE.BF.CFG_PRE_CURSOR_32G_PRESET3_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET3_LANE_5_0_b0  LANE_32G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_32G_PRESET3_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET3_LANE_5_0_b1  LANE_32G_PRESET_CFG8_LANE.BF.CFG_POST_CURSOR_32G_PRESET3_LANE_5_0_b1

// 0x0098	LANE_32G_PRESET_CFG10_LANE		Lane Equalization 32G Preset Configuration 10
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_32G_PRESET4_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET4_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET4_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_32G_PRESET5_LANE_5_0      : 6;	/*[21:16]     r/w 6'h6*/
		uint8_t CFG_POST_CURSOR_32G_PRESET5_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET5_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG10_LANE_t;
__xdata __at( 0x5398 ) volatile LANE_32G_PRESET_CFG10_LANE_t LANE_32G_PRESET_CFG10_LANE;
#define reg_CFG_PRE_CURSOR_32G_PRESET4_LANE_5_0  LANE_32G_PRESET_CFG10_LANE.BF.CFG_PRE_CURSOR_32G_PRESET4_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET4_LANE_5_0_b0  LANE_32G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_32G_PRESET4_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET4_LANE_5_0_b1  LANE_32G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_32G_PRESET4_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_32G_PRESET5_LANE_5_0  LANE_32G_PRESET_CFG10_LANE.BF.CFG_PRE_CURSOR_32G_PRESET5_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET5_LANE_5_0_b0  LANE_32G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_32G_PRESET5_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET5_LANE_5_0_b1  LANE_32G_PRESET_CFG10_LANE.BF.CFG_POST_CURSOR_32G_PRESET5_LANE_5_0_b1

// 0x009c	LANE_32G_PRESET_CFG12_LANE		Lane Equalization 32G Preset Configuration 12
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_32G_PRESET6_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_32G_PRESET6_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET6_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_32G_PRESET7_LANE_5_0      : 6;	/*[21:16]     r/w 6'h6*/
		uint8_t CFG_POST_CURSOR_32G_PRESET7_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'hd*/
		uint8_t CFG_POST_CURSOR_32G_PRESET7_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'hd*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG12_LANE_t;
__xdata __at( 0x539c ) volatile LANE_32G_PRESET_CFG12_LANE_t LANE_32G_PRESET_CFG12_LANE;
#define reg_CFG_PRE_CURSOR_32G_PRESET6_LANE_5_0  LANE_32G_PRESET_CFG12_LANE.BF.CFG_PRE_CURSOR_32G_PRESET6_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET6_LANE_5_0_b0  LANE_32G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_32G_PRESET6_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET6_LANE_5_0_b1  LANE_32G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_32G_PRESET6_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_32G_PRESET7_LANE_5_0  LANE_32G_PRESET_CFG12_LANE.BF.CFG_PRE_CURSOR_32G_PRESET7_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET7_LANE_5_0_b0  LANE_32G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_32G_PRESET7_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET7_LANE_5_0_b1  LANE_32G_PRESET_CFG12_LANE.BF.CFG_POST_CURSOR_32G_PRESET7_LANE_5_0_b1

// 0x00a0	LANE_32G_PRESET_CFG14_LANE		Lane Equalization 32G Preset Configuration 14
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_32G_PRESET8_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_32G_PRESET8_LANE_5_0_b0  : 2;	/* [11:6]     r/w 6'h8*/
		uint8_t CFG_POST_CURSOR_32G_PRESET8_LANE_5_0_b1  : 4;	/* [11:6]     r/w 6'h8*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CFG_PRE_CURSOR_32G_PRESET9_LANE_5_0      : 6;	/*[21:16]     r/w 6'ha*/
		uint8_t CFG_POST_CURSOR_32G_PRESET9_LANE_5_0_b0  : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET9_LANE_5_0_b1  : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG14_LANE_t;
__xdata __at( 0x53a0 ) volatile LANE_32G_PRESET_CFG14_LANE_t LANE_32G_PRESET_CFG14_LANE;
#define reg_CFG_PRE_CURSOR_32G_PRESET8_LANE_5_0  LANE_32G_PRESET_CFG14_LANE.BF.CFG_PRE_CURSOR_32G_PRESET8_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET8_LANE_5_0_b0  LANE_32G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_32G_PRESET8_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET8_LANE_5_0_b1  LANE_32G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_32G_PRESET8_LANE_5_0_b1
#define reg_CFG_PRE_CURSOR_32G_PRESET9_LANE_5_0  LANE_32G_PRESET_CFG14_LANE.BF.CFG_PRE_CURSOR_32G_PRESET9_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET9_LANE_5_0_b0  LANE_32G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_32G_PRESET9_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET9_LANE_5_0_b1  LANE_32G_PRESET_CFG14_LANE.BF.CFG_POST_CURSOR_32G_PRESET9_LANE_5_0_b1

// 0x00a4	LANE_32G_PRESET_CFG16_LANE		Lane Equalization 32G Preset Configuration 16
typedef union {
	struct {
		uint8_t CFG_PRE_CURSOR_32G_PRESET10_LANE_5_0     : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t CFG_POST_CURSOR_32G_PRESET10_LANE_5_0_b0 : 2;	/* [11:6]     r/w 6'h15*/
		uint8_t CFG_POST_CURSOR_32G_PRESET10_LANE_5_0_b1 : 4;	/* [11:6]     r/w 6'h15*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_24                              : 4;	/*[27:22]     r/w 6'h0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_32G_PRESET_CFG16_LANE_t;
__xdata __at( 0x53a4 ) volatile LANE_32G_PRESET_CFG16_LANE_t LANE_32G_PRESET_CFG16_LANE;
#define reg_CFG_PRE_CURSOR_32G_PRESET10_LANE_5_0  LANE_32G_PRESET_CFG16_LANE.BF.CFG_PRE_CURSOR_32G_PRESET10_LANE_5_0
#define reg_CFG_POST_CURSOR_32G_PRESET10_LANE_5_0_b0  LANE_32G_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_32G_PRESET10_LANE_5_0_b0
#define reg_CFG_POST_CURSOR_32G_PRESET10_LANE_5_0_b1  LANE_32G_PRESET_CFG16_LANE.BF.CFG_POST_CURSOR_32G_PRESET10_LANE_5_0_b1

// 0x00a8	LANE_MARGIN_CTRL_STAT_LANE		Lane Margin Control And Status Register
typedef union {
	struct {
		uint8_t CFG_ERROR_CNT_RST_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t CFG_SAMPLE_CNT_RST_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t CFG_MARGIN_ERR_CTRL_LANE                 : 1;	/*      2     r/w   1*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t MAC_START_MARGIN_LANE                    : 1;	/*      4       r   0*/
		uint8_t MAC_MARGIN_TYPE_LANE                     : 1;	/*      5       r   0*/
		uint8_t MAC_ERROR_CNT_RST_LANE                   : 1;	/*      6       r   0*/
		uint8_t MAC_SAMPLE_CNT_RST_LANE                  : 1;	/*      7       r   0*/
		uint8_t MAC_MARGIN_OFFSET_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t MAC_MARGIN_DIR_LANE                      : 1;	/*     15       r   0*/
		uint8_t MARGIN_ERROR_CNT_LANE_5_0                : 6;	/*[21:16]       r 6'h0*/
		uint8_t MARGIN_CNT_VLD_LANE                      : 1;	/*     22       r   0*/
		uint8_t MARGIN_OFFSET_CHANGE_LANE                : 1;	/*     23       r   0*/
		uint8_t MARGIN_SAMPLE_CNT_LANE_6_0               : 7;	/*[30:24]       r 7'h0*/
		uint8_t MARGIN_ACK_LANE                          : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_MARGIN_CTRL_STAT_LANE_t;
__xdata __at( 0x53a8 ) volatile LANE_MARGIN_CTRL_STAT_LANE_t LANE_MARGIN_CTRL_STAT_LANE;
#define reg_CFG_ERROR_CNT_RST_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.CFG_ERROR_CNT_RST_LANE
#define reg_CFG_SAMPLE_CNT_RST_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.CFG_SAMPLE_CNT_RST_LANE
#define reg_CFG_MARGIN_ERR_CTRL_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.CFG_MARGIN_ERR_CTRL_LANE
#define reg_MAC_START_MARGIN_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MAC_START_MARGIN_LANE
#define reg_MAC_MARGIN_TYPE_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MAC_MARGIN_TYPE_LANE
#define reg_MAC_ERROR_CNT_RST_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MAC_ERROR_CNT_RST_LANE
#define reg_MAC_SAMPLE_CNT_RST_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MAC_SAMPLE_CNT_RST_LANE
#define reg_MAC_MARGIN_OFFSET_LANE_6_0  LANE_MARGIN_CTRL_STAT_LANE.BF.MAC_MARGIN_OFFSET_LANE_6_0
#define reg_MAC_MARGIN_DIR_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MAC_MARGIN_DIR_LANE
#define reg_MARGIN_ERROR_CNT_LANE_5_0  LANE_MARGIN_CTRL_STAT_LANE.BF.MARGIN_ERROR_CNT_LANE_5_0
#define reg_MARGIN_CNT_VLD_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MARGIN_CNT_VLD_LANE
#define reg_MARGIN_OFFSET_CHANGE_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MARGIN_OFFSET_CHANGE_LANE
#define reg_MARGIN_SAMPLE_CNT_LANE_6_0  LANE_MARGIN_CTRL_STAT_LANE.BF.MARGIN_SAMPLE_CNT_LANE_6_0
#define reg_MARGIN_ACK_LANE  LANE_MARGIN_CTRL_STAT_LANE.BF.MARGIN_ACK_LANE

#endif
