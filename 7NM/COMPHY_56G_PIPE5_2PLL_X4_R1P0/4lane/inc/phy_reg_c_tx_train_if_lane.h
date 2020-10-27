#ifndef PHY_REG_C_TX_TRAIN_IF_LANE_H
#define PHY_REG_C_TX_TRAIN_IF_LANE_H



// 0x0000	DME_ENC_REG0		DME Encoder Register 0
typedef union {
	struct {
		uint8_t LOCAL_CTRL_FIELD_VALID_LANE              : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_STATUS_FIELD_VALID_LANE            : 1;	/*      1     r/w   0*/
		uint8_t LOCAL_ERROR_FIELD_VALID_LANE             : 1;	/*      2     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_VALID_LANE              : 1;	/*      3     r/w   0*/
		uint8_t LOCAL_TX_INIT_VALID_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t LOCAL_FIELD_VALID_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t LOCAL_ERROR_EN_LANE                      : 1;	/*      6     r/w   1*/
		uint8_t LOCAL_BALANCE_CAL_EN_LANE                : 1;	/*      7     r/w   0*/
		uint8_t LOCAL_RD_REQ_LANE                        : 1;	/*      8     r/w   0*/
		uint8_t DISABLE_RESET_STATUS_LANE                : 1;	/*      9     r/w   0*/
		uint8_t ERROR_FRAME_NUM_LANE_2_0                 : 3;	/*[12:10]     r/w 3'h2*/
		uint8_t FIBER_CHANNEL_MODE_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[16:14]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*[16:14]     r/w   0*/
		uint8_t DME_ENC_EN_LANE                          : 1;	/*     17     r/w   0*/
		uint8_t DME_ENC_MODE_LANE_1_0                    : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t DME_ENC_BALANCE_INV_LANE                 : 1;	/*     20     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_FORCE_LANE              : 1;	/*     21     r/w   0*/
		uint8_t LOCAL_STATUS_FIELD_FORCE_LANE            : 1;	/*     22     r/w   0*/
		uint8_t LOCAL_ERROR_FIELD_FORCE_LANE             : 1;	/*     23     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_FORCE_LANE              : 1;	/*     24     r/w   0*/
		uint8_t LOCAL_TX_INIT_FORCE_LANE                 : 1;	/*     25     r/w   0*/
		uint8_t LOCAL_FIELD_FORCE_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_ENC_REG0_t;
__xdata __at( 0x5000 ) volatile DME_ENC_REG0_t DME_ENC_REG0;
#define reg_LOCAL_CTRL_FIELD_VALID_LANE  DME_ENC_REG0.BF.LOCAL_CTRL_FIELD_VALID_LANE
#define reg_LOCAL_STATUS_FIELD_VALID_LANE  DME_ENC_REG0.BF.LOCAL_STATUS_FIELD_VALID_LANE
#define reg_LOCAL_ERROR_FIELD_VALID_LANE  DME_ENC_REG0.BF.LOCAL_ERROR_FIELD_VALID_LANE
#define reg_LOCAL_TRAIN_COMP_VALID_LANE  DME_ENC_REG0.BF.LOCAL_TRAIN_COMP_VALID_LANE
#define reg_LOCAL_TX_INIT_VALID_LANE  DME_ENC_REG0.BF.LOCAL_TX_INIT_VALID_LANE
#define reg_LOCAL_FIELD_VALID_LANE  DME_ENC_REG0.BF.LOCAL_FIELD_VALID_LANE
#define reg_LOCAL_ERROR_EN_LANE  DME_ENC_REG0.BF.LOCAL_ERROR_EN_LANE
#define reg_LOCAL_BALANCE_CAL_EN_LANE  DME_ENC_REG0.BF.LOCAL_BALANCE_CAL_EN_LANE
#define reg_LOCAL_RD_REQ_LANE  DME_ENC_REG0.BF.LOCAL_RD_REQ_LANE
#define reg_DISABLE_RESET_STATUS_LANE  DME_ENC_REG0.BF.DISABLE_RESET_STATUS_LANE
#define reg_ERROR_FRAME_NUM_LANE_2_0  DME_ENC_REG0.BF.ERROR_FRAME_NUM_LANE_2_0
#define reg_FIBER_CHANNEL_MODE_LANE  DME_ENC_REG0.BF.FIBER_CHANNEL_MODE_LANE
#define reg_DME_ENC_EN_LANE  DME_ENC_REG0.BF.DME_ENC_EN_LANE
#define reg_DME_ENC_MODE_LANE_1_0  DME_ENC_REG0.BF.DME_ENC_MODE_LANE_1_0
#define reg_DME_ENC_BALANCE_INV_LANE  DME_ENC_REG0.BF.DME_ENC_BALANCE_INV_LANE
#define reg_LOCAL_CTRL_FIELD_FORCE_LANE  DME_ENC_REG0.BF.LOCAL_CTRL_FIELD_FORCE_LANE
#define reg_LOCAL_STATUS_FIELD_FORCE_LANE  DME_ENC_REG0.BF.LOCAL_STATUS_FIELD_FORCE_LANE
#define reg_LOCAL_ERROR_FIELD_FORCE_LANE  DME_ENC_REG0.BF.LOCAL_ERROR_FIELD_FORCE_LANE
#define reg_LOCAL_TRAIN_COMP_FORCE_LANE  DME_ENC_REG0.BF.LOCAL_TRAIN_COMP_FORCE_LANE
#define reg_LOCAL_TX_INIT_FORCE_LANE  DME_ENC_REG0.BF.LOCAL_TX_INIT_FORCE_LANE
#define reg_LOCAL_FIELD_FORCE_LANE  DME_ENC_REG0.BF.LOCAL_FIELD_FORCE_LANE

// 0x0004	DME_ENC_REG1		DME Encoder Register 1
typedef union {
	struct {
		uint8_t LOCAL_STATUS_BITS_LANE_15_0_b0           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_STATUS_BITS_LANE_15_0_b1           : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_CTRL_BITS_LANE_15_0_b0             : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t LOCAL_CTRL_BITS_LANE_15_0_b1             : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DME_ENC_REG1_t;
__xdata __at( 0x5004 ) volatile DME_ENC_REG1_t DME_ENC_REG1;
#define reg_LOCAL_STATUS_BITS_LANE_15_0_b0  DME_ENC_REG1.BF.LOCAL_STATUS_BITS_LANE_15_0_b0
#define reg_LOCAL_STATUS_BITS_LANE_15_0_b1  DME_ENC_REG1.BF.LOCAL_STATUS_BITS_LANE_15_0_b1
#define reg_LOCAL_CTRL_BITS_LANE_15_0_b0  DME_ENC_REG1.BF.LOCAL_CTRL_BITS_LANE_15_0_b0
#define reg_LOCAL_CTRL_BITS_LANE_15_0_b1  DME_ENC_REG1.BF.LOCAL_CTRL_BITS_LANE_15_0_b1
#define reg_LOCAL_STATUS_BITS_LANE_15_0  DME_ENC_REG1.WT.W0
#define reg_LOCAL_CTRL_BITS_LANE_15_0  DME_ENC_REG1.WT.W1

// 0x0008	DME_ENC_REG2		DME Encoder Register 2
typedef union {
	struct {
		uint8_t LOCAL_STATUS_BITS_RD_LANE_15_0_b0        : 8;	/* [15:0]       r   0*/
		uint8_t LOCAL_STATUS_BITS_RD_LANE_15_0_b1        : 8;	/* [15:0]       r   0*/
		uint8_t LOCAL_CTRL_BITS_RD_LANE_15_0_b0          : 8;	/*[31:16]       r   0*/
		uint8_t LOCAL_CTRL_BITS_RD_LANE_15_0_b1          : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DME_ENC_REG2_t;
__xdata __at( 0x5008 ) volatile DME_ENC_REG2_t DME_ENC_REG2;
#define reg_LOCAL_STATUS_BITS_RD_LANE_15_0_b0  DME_ENC_REG2.BF.LOCAL_STATUS_BITS_RD_LANE_15_0_b0
#define reg_LOCAL_STATUS_BITS_RD_LANE_15_0_b1  DME_ENC_REG2.BF.LOCAL_STATUS_BITS_RD_LANE_15_0_b1
#define reg_LOCAL_CTRL_BITS_RD_LANE_15_0_b0  DME_ENC_REG2.BF.LOCAL_CTRL_BITS_RD_LANE_15_0_b0
#define reg_LOCAL_CTRL_BITS_RD_LANE_15_0_b1  DME_ENC_REG2.BF.LOCAL_CTRL_BITS_RD_LANE_15_0_b1
#define reg_LOCAL_STATUS_BITS_RD_LANE_15_0  DME_ENC_REG2.WT.W0
#define reg_LOCAL_CTRL_BITS_RD_LANE_15_0  DME_ENC_REG2.WT.W1

// 0x000c	DME_DEC_REG0		DME Decoder Register 0
typedef union {
	struct {
		uint8_t NO_RSVD_PT_TYPE_ERROR_LANE               : 1;	/*      0     r/w   0*/
		uint8_t NO_RSVD_BIT_ERROR_IN_NORMAL_LANE         : 1;	/*      1     r/w   0*/
		uint8_t NO_RSVD_BIT_ERROR_IN_ERROR_LANE          : 1;	/*      2     r/w   0*/
		uint8_t NO_RSVD_CTRL_FIELD_ERROR_LANE            : 1;	/*      3     r/w   0*/
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
		uint8_t DME_DEC_MODE_LANE_1_0                    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t CTRL_BIT_POS_LANE_1_0                    : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t BALANCE_CHK_EN_LANE                      : 1;	/*     20     r/w   1*/
		uint8_t DEC_ERR_CHK_EN_LANE                      : 1;	/*     21     r/w   1*/
		uint8_t DME_DEC_RPT_EN_LANE                      : 1;	/*     22     r/w   1*/
		uint8_t REMOTE_RD_REQ_LANE                       : 1;	/*     23     r/w   0*/
		uint8_t DME_DEC_BALANCE_INV_LANE                 : 1;	/*     24     r/w   0*/
		uint8_t NO_COMB_ERROR_LANE                       : 1;	/*     25     r/w   0*/
		uint8_t REMOTE_ERROR_EN_LANE                     : 1;	/*     26     r/w   1*/
		uint8_t REMOTE_TRAIN_COMP_CHK3_LANE              : 1;	/*     27     r/w   1*/
		uint8_t ALWAYS_CHECK_COE_REQ_LANE                : 1;	/*     28     r/w   0*/
		uint8_t ERROR_DEC_RPT_EN_LANE                    : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_DEC_REG0_t;
__xdata __at( 0x500c ) volatile DME_DEC_REG0_t DME_DEC_REG0;
#define reg_NO_RSVD_PT_TYPE_ERROR_LANE  DME_DEC_REG0.BF.NO_RSVD_PT_TYPE_ERROR_LANE
#define reg_NO_RSVD_BIT_ERROR_IN_NORMAL_LANE  DME_DEC_REG0.BF.NO_RSVD_BIT_ERROR_IN_NORMAL_LANE
#define reg_NO_RSVD_BIT_ERROR_IN_ERROR_LANE  DME_DEC_REG0.BF.NO_RSVD_BIT_ERROR_IN_ERROR_LANE
#define reg_NO_RSVD_CTRL_FIELD_ERROR_LANE  DME_DEC_REG0.BF.NO_RSVD_CTRL_FIELD_ERROR_LANE
#define reg_DME_DEC_MODE_LANE_1_0  DME_DEC_REG0.BF.DME_DEC_MODE_LANE_1_0
#define reg_CTRL_BIT_POS_LANE_1_0  DME_DEC_REG0.BF.CTRL_BIT_POS_LANE_1_0
#define reg_BALANCE_CHK_EN_LANE  DME_DEC_REG0.BF.BALANCE_CHK_EN_LANE
#define reg_DEC_ERR_CHK_EN_LANE  DME_DEC_REG0.BF.DEC_ERR_CHK_EN_LANE
#define reg_DME_DEC_RPT_EN_LANE  DME_DEC_REG0.BF.DME_DEC_RPT_EN_LANE
#define reg_REMOTE_RD_REQ_LANE  DME_DEC_REG0.BF.REMOTE_RD_REQ_LANE
#define reg_DME_DEC_BALANCE_INV_LANE  DME_DEC_REG0.BF.DME_DEC_BALANCE_INV_LANE
#define reg_NO_COMB_ERROR_LANE  DME_DEC_REG0.BF.NO_COMB_ERROR_LANE
#define reg_REMOTE_ERROR_EN_LANE  DME_DEC_REG0.BF.REMOTE_ERROR_EN_LANE
#define reg_REMOTE_TRAIN_COMP_CHK3_LANE  DME_DEC_REG0.BF.REMOTE_TRAIN_COMP_CHK3_LANE
#define reg_ALWAYS_CHECK_COE_REQ_LANE  DME_DEC_REG0.BF.ALWAYS_CHECK_COE_REQ_LANE
#define reg_ERROR_DEC_RPT_EN_LANE  DME_DEC_REG0.BF.ERROR_DEC_RPT_EN_LANE

// 0x0010	DME_DEC_REG1		DME Decoder Register 1
typedef union {
	struct {
		uint8_t REMOTE_STATUS_BITS_LANE_15_0_b0          : 8;	/* [15:0]       r   0*/
		uint8_t REMOTE_STATUS_BITS_LANE_15_0_b1          : 8;	/* [15:0]       r   0*/
		uint8_t REMOTE_CTRL_BITS_LANE_15_0_b0            : 8;	/*[31:16]       r   0*/
		uint8_t REMOTE_CTRL_BITS_LANE_15_0_b1            : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DME_DEC_REG1_t;
__xdata __at( 0x5010 ) volatile DME_DEC_REG1_t DME_DEC_REG1;
#define reg_REMOTE_STATUS_BITS_LANE_15_0_b0  DME_DEC_REG1.BF.REMOTE_STATUS_BITS_LANE_15_0_b0
#define reg_REMOTE_STATUS_BITS_LANE_15_0_b1  DME_DEC_REG1.BF.REMOTE_STATUS_BITS_LANE_15_0_b1
#define reg_REMOTE_CTRL_BITS_LANE_15_0_b0  DME_DEC_REG1.BF.REMOTE_CTRL_BITS_LANE_15_0_b0
#define reg_REMOTE_CTRL_BITS_LANE_15_0_b1  DME_DEC_REG1.BF.REMOTE_CTRL_BITS_LANE_15_0_b1
#define reg_REMOTE_STATUS_BITS_LANE_15_0  DME_DEC_REG1.WT.W0
#define reg_REMOTE_CTRL_BITS_LANE_15_0  DME_DEC_REG1.WT.W1

// 0x0014	TX_TRAIN_IF_REG0		TX Training Interface Register 0
typedef union {
	struct {
		uint8_t STATUS_DET_TIMEOUT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h03*/
		uint8_t STATUS_DET_TIMEOUT_EN_LANE               : 1;	/*      8     r/w   1*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_EN_LANE                : 1;	/*     10     r/w   1*/
		uint8_t TX_TRAIN_START_WAIT_TIME_LANE_1_0        : 2;	/*[12:11]     r/w 2'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t LINK_TRAIN_MODE_LANE                     : 1;	/*     16     r/w   0*/
		uint8_t LINK_TRAIN_IF_MODE_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t LINK_TRAIN_MODE_LPBK_LANE                : 1;	/*     19     r/w   0*/
		uint8_t FRAME_DET_MAX_TIME_LANE_3_0              : 4;	/*[23:20]     r/w 4'h1*/
		uint8_t PATTERN_LOCK_LOST_TIMEOUT_EN_LANE        : 1;	/*     24     r/w   1*/
		uint8_t TX_TRAIN_CHK_INIT_LANE                   : 1;	/*     25     r/w   1*/
		uint8_t REMOTE_STATUS_CHECK_EN_LANE              : 1;	/*     26     r/w   1*/
		uint8_t REMOTE_STATUS_RECHK_EN_LANE              : 1;	/*     27     r/w   0*/
		uint8_t PIN_TRAIN_COMPLETE_TYPE_LANE             : 1;	/*     28     r/w   0*/
		uint8_t UPDATE_THEN_HOLD_LANE                    : 1;	/*     29     r/w   1*/
		uint8_t RX_TRAIN_ENABLE_RD_LANE                  : 1;	/*     30       r   0*/
		uint8_t TX_TRAIN_ENABLE_RD_LANE                  : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_IF_REG0_t;
__xdata __at( 0x5014 ) volatile TX_TRAIN_IF_REG0_t TX_TRAIN_IF_REG0;
#define reg_STATUS_DET_TIMEOUT_LANE_7_0  TX_TRAIN_IF_REG0.BF.STATUS_DET_TIMEOUT_LANE_7_0
#define reg_STATUS_DET_TIMEOUT_EN_LANE  TX_TRAIN_IF_REG0.BF.STATUS_DET_TIMEOUT_EN_LANE
#define reg_TRX_TRAIN_TIMEOUT_EN_LANE  TX_TRAIN_IF_REG0.BF.TRX_TRAIN_TIMEOUT_EN_LANE
#define reg_TX_TRAIN_START_WAIT_TIME_LANE_1_0  TX_TRAIN_IF_REG0.BF.TX_TRAIN_START_WAIT_TIME_LANE_1_0
#define reg_LINK_TRAIN_MODE_LANE  TX_TRAIN_IF_REG0.BF.LINK_TRAIN_MODE_LANE
#define reg_LINK_TRAIN_IF_MODE_LANE  TX_TRAIN_IF_REG0.BF.LINK_TRAIN_IF_MODE_LANE
#define reg_LINK_TRAIN_MODE_LPBK_LANE  TX_TRAIN_IF_REG0.BF.LINK_TRAIN_MODE_LPBK_LANE
#define reg_FRAME_DET_MAX_TIME_LANE_3_0  TX_TRAIN_IF_REG0.BF.FRAME_DET_MAX_TIME_LANE_3_0
#define reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE  TX_TRAIN_IF_REG0.BF.PATTERN_LOCK_LOST_TIMEOUT_EN_LANE
#define reg_TX_TRAIN_CHK_INIT_LANE  TX_TRAIN_IF_REG0.BF.TX_TRAIN_CHK_INIT_LANE
#define reg_REMOTE_STATUS_CHECK_EN_LANE  TX_TRAIN_IF_REG0.BF.REMOTE_STATUS_CHECK_EN_LANE
#define reg_REMOTE_STATUS_RECHK_EN_LANE  TX_TRAIN_IF_REG0.BF.REMOTE_STATUS_RECHK_EN_LANE
#define reg_PIN_TRAIN_COMPLETE_TYPE_LANE  TX_TRAIN_IF_REG0.BF.PIN_TRAIN_COMPLETE_TYPE_LANE
#define reg_UPDATE_THEN_HOLD_LANE  TX_TRAIN_IF_REG0.BF.UPDATE_THEN_HOLD_LANE
#define reg_RX_TRAIN_ENABLE_RD_LANE  TX_TRAIN_IF_REG0.BF.RX_TRAIN_ENABLE_RD_LANE
#define reg_TX_TRAIN_ENABLE_RD_LANE  TX_TRAIN_IF_REG0.BF.TX_TRAIN_ENABLE_RD_LANE

// 0x0018	TX_TRAIN_IF_REG1		TX Training Interface Register 1
typedef union {
	struct {
		uint8_t RX_TRAIN_TIMER_LANE_12_0_b0              : 8;	/* [12:0]     r/w 13'h0013*/
		uint8_t RX_TRAIN_TIMER_LANE_12_0_b1              : 5;	/* [12:0]     r/w 13'h0013*/
		uint8_t TX_TRAIN_START_WAIT_TIME_DONE_LANE       : 1;	/*     13       r   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TRX_TRAIN_TIMER_LANE_12_0_b0             : 8;	/*[28:16]     r/w 13'h0bb7*/
		uint8_t TRX_TRAIN_TIMER_LANE_12_0_b1             : 5;	/*[28:16]     r/w 13'h0bb7*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_IF_REG1_t;
__xdata __at( 0x5018 ) volatile TX_TRAIN_IF_REG1_t TX_TRAIN_IF_REG1;
#define reg_RX_TRAIN_TIMER_LANE_12_0_b0  TX_TRAIN_IF_REG1.BF.RX_TRAIN_TIMER_LANE_12_0_b0
#define reg_RX_TRAIN_TIMER_LANE_12_0_b1  TX_TRAIN_IF_REG1.BF.RX_TRAIN_TIMER_LANE_12_0_b1
#define reg_TX_TRAIN_START_WAIT_TIME_DONE_LANE  TX_TRAIN_IF_REG1.BF.TX_TRAIN_START_WAIT_TIME_DONE_LANE
#define reg_TRX_TRAIN_TIMER_LANE_12_0_b0  TX_TRAIN_IF_REG1.BF.TRX_TRAIN_TIMER_LANE_12_0_b0
#define reg_TRX_TRAIN_TIMER_LANE_12_0_b1  TX_TRAIN_IF_REG1.BF.TRX_TRAIN_TIMER_LANE_12_0_b1

// 0x001c	TX_TRAIN_IF_REG2		TX Training Interface Register 2
typedef union {
	struct {
		uint8_t LOCAL_STATUS_FIELD_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t LOCAL_STATUS_FIELD_PAT_LANE_1_0          : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t LOCAL_STATUS_FIELD_RESET_LANE            : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_READY_LANE             : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_LANE                    : 1;	/*     10     r/w   0*/
		uint8_t PIN_TX_TRAIN_COMPLETE_LANE               : 1;	/*     11     r/w   0*/
		uint8_t PIN_TX_TRAIN_FAILED_LANE                 : 1;	/*     12     r/w   0*/
		uint8_t PIN_TX_TRAIN_ERROR_LANE_1_0              : 2;	/*[14:13]     r/w 2'h0*/
		uint8_t REMOTE_CTRL_FIELD_READY_HIGH_LANE        : 1;	/*     15     r/w   0*/
		uint8_t LOCAL_STATUS_FM_REG_EN_LANE              : 1;	/*     16     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_LANE_5_0                : 6;	/*[22:17]     r/w 6'h0*/
		uint8_t TX_FFE_TRAIN_DONE_LANE                   : 1;	/*     23     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_RESET_LANE_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t LOCAL_CTRL_FIELD_PAT_LANE_1_0            : 2;	/*[29:28]     r/w 2'h0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_CTRL_FM_REG_EN_LANE                : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_IF_REG2_t;
__xdata __at( 0x501c ) volatile TX_TRAIN_IF_REG2_t TX_TRAIN_IF_REG2;
#define reg_LOCAL_STATUS_FIELD_LANE_5_0  TX_TRAIN_IF_REG2.BF.LOCAL_STATUS_FIELD_LANE_5_0
#define reg_LOCAL_STATUS_FIELD_PAT_LANE_1_0  TX_TRAIN_IF_REG2.BF.LOCAL_STATUS_FIELD_PAT_LANE_1_0
#define reg_LOCAL_STATUS_FIELD_RESET_LANE  TX_TRAIN_IF_REG2.BF.LOCAL_STATUS_FIELD_RESET_LANE
#define reg_REMOTE_CTRL_FIELD_READY_LANE  TX_TRAIN_IF_REG2.BF.REMOTE_CTRL_FIELD_READY_LANE
#define reg_LOCAL_TRAIN_COMP_LANE  TX_TRAIN_IF_REG2.BF.LOCAL_TRAIN_COMP_LANE
#define reg_PIN_TX_TRAIN_COMPLETE_LANE  TX_TRAIN_IF_REG2.BF.PIN_TX_TRAIN_COMPLETE_LANE
#define reg_PIN_TX_TRAIN_FAILED_LANE  TX_TRAIN_IF_REG2.BF.PIN_TX_TRAIN_FAILED_LANE
#define reg_PIN_TX_TRAIN_ERROR_LANE_1_0  TX_TRAIN_IF_REG2.BF.PIN_TX_TRAIN_ERROR_LANE_1_0
#define reg_REMOTE_CTRL_FIELD_READY_HIGH_LANE  TX_TRAIN_IF_REG2.BF.REMOTE_CTRL_FIELD_READY_HIGH_LANE
#define reg_LOCAL_STATUS_FM_REG_EN_LANE  TX_TRAIN_IF_REG2.BF.LOCAL_STATUS_FM_REG_EN_LANE
#define reg_LOCAL_CTRL_FIELD_LANE_5_0  TX_TRAIN_IF_REG2.BF.LOCAL_CTRL_FIELD_LANE_5_0
#define reg_TX_FFE_TRAIN_DONE_LANE  TX_TRAIN_IF_REG2.BF.TX_FFE_TRAIN_DONE_LANE
#define reg_LOCAL_CTRL_FIELD_RESET_LANE_3_0  TX_TRAIN_IF_REG2.BF.LOCAL_CTRL_FIELD_RESET_LANE_3_0
#define reg_LOCAL_CTRL_FIELD_PAT_LANE_1_0  TX_TRAIN_IF_REG2.BF.LOCAL_CTRL_FIELD_PAT_LANE_1_0
#define reg_LOCAL_CTRL_FM_REG_EN_LANE  TX_TRAIN_IF_REG2.BF.LOCAL_CTRL_FM_REG_EN_LANE

// 0x0020	TX_TRAIN_IF_REG3		TX Training Interface Register 3
typedef union {
	struct {
		uint8_t TRX_TRAIN_TIMEOUT_LANE                   : 1;	/*      0       r   0*/
		uint8_t TX_TRAIN_ERROR_LANE_1_0                  : 2;	/*  [2:1]       r   0*/
		uint8_t RX_TRAIN_FAILED_LANE                     : 1;	/*      3       r   0*/
		uint8_t RX_TRAIN_COMPLETE_LANE                   : 1;	/*      4       r   0*/
		uint8_t TX_TRAIN_FAILED_LANE                     : 1;	/*      5       r   0*/
		uint8_t TX_TRAIN_COMPLETE_LANE                   : 1;	/*      6       r   0*/
		uint8_t LOCAL_TRAIN_COMP_RD_LANE                 : 1;	/*      7       r   0*/
		uint8_t REMOTE_TRAIN_COMP_RD_LANE                : 1;	/*      8       r   0*/
		uint8_t FRAME_DET_TIMEOUT_LANE                   : 1;	/*      9       r   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_TRAIN_COMP_WAIT_FRAME_LANE_6_0        : 7;	/*[22:16]     r/w 7'h3*/
		uint8_t REMOTE_TX_INIT_LANE                      : 1;	/*     23     r/w   1*/
		uint8_t REMOTE_TRAIN_COMP_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_HIGH_LANE         : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t REMOTE_FM_REG_EN_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_IF_REG3_t;
__xdata __at( 0x5020 ) volatile TX_TRAIN_IF_REG3_t TX_TRAIN_IF_REG3;
#define reg_TRX_TRAIN_TIMEOUT_LANE  TX_TRAIN_IF_REG3.BF.TRX_TRAIN_TIMEOUT_LANE
#define reg_TX_TRAIN_ERROR_LANE_1_0  TX_TRAIN_IF_REG3.BF.TX_TRAIN_ERROR_LANE_1_0
#define reg_RX_TRAIN_FAILED_LANE  TX_TRAIN_IF_REG3.BF.RX_TRAIN_FAILED_LANE
#define reg_RX_TRAIN_COMPLETE_LANE  TX_TRAIN_IF_REG3.BF.RX_TRAIN_COMPLETE_LANE
#define reg_TX_TRAIN_FAILED_LANE  TX_TRAIN_IF_REG3.BF.TX_TRAIN_FAILED_LANE
#define reg_TX_TRAIN_COMPLETE_LANE  TX_TRAIN_IF_REG3.BF.TX_TRAIN_COMPLETE_LANE
#define reg_LOCAL_TRAIN_COMP_RD_LANE  TX_TRAIN_IF_REG3.BF.LOCAL_TRAIN_COMP_RD_LANE
#define reg_REMOTE_TRAIN_COMP_RD_LANE  TX_TRAIN_IF_REG3.BF.REMOTE_TRAIN_COMP_RD_LANE
#define reg_FRAME_DET_TIMEOUT_LANE  TX_TRAIN_IF_REG3.BF.FRAME_DET_TIMEOUT_LANE
#define reg_TX_TRAIN_COMP_WAIT_FRAME_LANE_6_0  TX_TRAIN_IF_REG3.BF.TX_TRAIN_COMP_WAIT_FRAME_LANE_6_0
#define reg_REMOTE_TX_INIT_LANE  TX_TRAIN_IF_REG3.BF.REMOTE_TX_INIT_LANE
#define reg_REMOTE_TRAIN_COMP_LANE  TX_TRAIN_IF_REG3.BF.REMOTE_TRAIN_COMP_LANE
#define reg_LOCAL_CTRL_FIELD_READY_HIGH_LANE  TX_TRAIN_IF_REG3.BF.LOCAL_CTRL_FIELD_READY_HIGH_LANE
#define reg_REMOTE_FM_REG_EN_LANE  TX_TRAIN_IF_REG3.BF.REMOTE_FM_REG_EN_LANE

// 0x0024	TX_TRAIN_PATTTERN_REG0		TX Training Pattern Register 0
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_LANE_9_0_b0                : 8;	/*  [9:0]     r/w 10'h42*/
		uint8_t TRAIN_PAT_NUM_LANE_9_0_b1                : 2;	/*  [9:0]     r/w 10'h42*/
		uint8_t ETHERNET_MODE_LANE_1_0                   : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_LANE                 : 1;	/*     16     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_LANE                   : 1;	/*     17     r/w   1*/
		uint8_t TX_TRAIN_PAT_TWO_ZERO_LANE               : 1;	/*     18     r/w   1*/
		uint8_t RESERVED_19                              : 5;	/*[25:19]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:19]     r/w   0*/
		uint8_t TX_TRAIN_PAT_EN_LANE                     : 1;	/*     26     r/w   0*/
		uint8_t TX_TRAIN_PAT_CODING_SEL_FORCE_LANE       : 1;	/*     27     r/w   0*/
		uint8_t TX_TRAIN_PAT_CODING_SEL_RX_LANE_1_0      : 2;	/*[29:28]     r/w 2'h0*/
		uint8_t TX_TRAIN_PAT_CODING_SEL_LANE_1_0         : 2;	/*[31:30]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_PATTTERN_REG0_t;
__xdata __at( 0x5024 ) volatile TX_TRAIN_PATTTERN_REG0_t TX_TRAIN_PATTTERN_REG0;
#define reg_TRAIN_PAT_NUM_LANE_9_0_b0  TX_TRAIN_PATTTERN_REG0.BF.TRAIN_PAT_NUM_LANE_9_0_b0
#define reg_TRAIN_PAT_NUM_LANE_9_0_b1  TX_TRAIN_PATTTERN_REG0.BF.TRAIN_PAT_NUM_LANE_9_0_b1
#define reg_ETHERNET_MODE_LANE_1_0  TX_TRAIN_PATTTERN_REG0.BF.ETHERNET_MODE_LANE_1_0
#define reg_TX_TRAIN_PAT_TOGGLE_LANE  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_TOGGLE_LANE
#define reg_TX_TRAIN_PAT_MODE_LANE  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_MODE_LANE
#define reg_TX_TRAIN_PAT_TWO_ZERO_LANE  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_TWO_ZERO_LANE
#define reg_TX_TRAIN_PAT_EN_LANE  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_EN_LANE
#define reg_TX_TRAIN_PAT_CODING_SEL_FORCE_LANE  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_CODING_SEL_FORCE_LANE
#define reg_TX_TRAIN_PAT_CODING_SEL_RX_LANE_1_0  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_CODING_SEL_RX_LANE_1_0
#define reg_TX_TRAIN_PAT_CODING_SEL_LANE_1_0  TX_TRAIN_PATTTERN_REG0.BF.TX_TRAIN_PAT_CODING_SEL_LANE_1_0

// 0x0028	TX_TRAIN_DRIVER_REG0		TX Training Driver Register 0
typedef union {
	struct {
		uint8_t TX_AMP_MAX_LANE_6_0                      : 7;	/*  [6:0]     r/w 7'h3f*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_AMP_MIN_LANE_6_0                      : 7;	/* [14:8]     r/w 7'h25*/
		uint8_t DUAL_ARG_PROTECT_EN_LANE                 : 1;	/*     15     r/w   1*/
		uint8_t TX_P2P_VMAX_LANE_6_0                     : 7;	/*[22:16]     r/w 7'h3f*/
		uint8_t TX_AMP_CLAMP_EN_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t TX_POWER_MAX_LANE_6_0                    : 7;	/*[30:24]     r/w 7'h3f*/
		uint8_t TX_POWER_PROTECT_EN_LANE                 : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DRIVER_REG0_t;
__xdata __at( 0x5028 ) volatile TX_TRAIN_DRIVER_REG0_t TX_TRAIN_DRIVER_REG0;
#define reg_TX_AMP_MAX_LANE_6_0  TX_TRAIN_DRIVER_REG0.BF.TX_AMP_MAX_LANE_6_0
#define reg_TX_AMP_MIN_LANE_6_0  TX_TRAIN_DRIVER_REG0.BF.TX_AMP_MIN_LANE_6_0
#define reg_DUAL_ARG_PROTECT_EN_LANE  TX_TRAIN_DRIVER_REG0.BF.DUAL_ARG_PROTECT_EN_LANE
#define reg_TX_P2P_VMAX_LANE_6_0  TX_TRAIN_DRIVER_REG0.BF.TX_P2P_VMAX_LANE_6_0
#define reg_TX_AMP_CLAMP_EN_LANE  TX_TRAIN_DRIVER_REG0.BF.TX_AMP_CLAMP_EN_LANE
#define reg_TX_POWER_MAX_LANE_6_0  TX_TRAIN_DRIVER_REG0.BF.TX_POWER_MAX_LANE_6_0
#define reg_TX_POWER_PROTECT_EN_LANE  TX_TRAIN_DRIVER_REG0.BF.TX_POWER_PROTECT_EN_LANE

// 0x002c	TX_TRAIN_DRIVER_REG1		TX Training Driver Register 1
typedef union {
	struct {
		uint8_t TX_EMPH0_MAX_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0f*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH0_MIN_LANE_4_0                    : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH1_MAX_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0f*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH1_MIN_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DRIVER_REG1_t;
__xdata __at( 0x502c ) volatile TX_TRAIN_DRIVER_REG1_t TX_TRAIN_DRIVER_REG1;
#define reg_TX_EMPH0_MAX_LANE_4_0  TX_TRAIN_DRIVER_REG1.BF.TX_EMPH0_MAX_LANE_4_0
#define reg_TX_EMPH0_MIN_LANE_4_0  TX_TRAIN_DRIVER_REG1.BF.TX_EMPH0_MIN_LANE_4_0
#define reg_TX_EMPH1_MAX_LANE_4_0  TX_TRAIN_DRIVER_REG1.BF.TX_EMPH1_MAX_LANE_4_0
#define reg_TX_EMPH1_MIN_LANE_4_0  TX_TRAIN_DRIVER_REG1.BF.TX_EMPH1_MIN_LANE_4_0

// 0x0030	TX_TRAIN_DRIVER_REG2		TX Training Driver Register 2
typedef union {
	struct {
		uint8_t TX_EMPH2_MAX_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h06*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH2_MIN_LANE_4_0                    : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_VMA_MIN_LANE_4_0                      : 5;	/*[20:16]     r/w 5'h6*/
		uint8_t TX_VMA_PROTECT_EN_LANE                   : 1;	/*     21     r/w   1*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*[31:23]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:23]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DRIVER_REG2_t;
__xdata __at( 0x5030 ) volatile TX_TRAIN_DRIVER_REG2_t TX_TRAIN_DRIVER_REG2;
#define reg_TX_EMPH2_MAX_LANE_4_0  TX_TRAIN_DRIVER_REG2.BF.TX_EMPH2_MAX_LANE_4_0
#define reg_TX_EMPH2_MIN_LANE_4_0  TX_TRAIN_DRIVER_REG2.BF.TX_EMPH2_MIN_LANE_4_0
#define reg_TX_VMA_MIN_LANE_4_0  TX_TRAIN_DRIVER_REG2.BF.TX_VMA_MIN_LANE_4_0
#define reg_TX_VMA_PROTECT_EN_LANE  TX_TRAIN_DRIVER_REG2.BF.TX_VMA_PROTECT_EN_LANE

// 0x0034	TX_TRAIN_DRIVER_REG3		TX Training Driver Register 3
typedef union {
	struct {
		uint8_t TX_TRAIN_COE_UPDATE_EN_LANE              : 1;	/*      0     r/w   0*/
		uint8_t LOCAL_TX_PRESET_EN_LANE                  : 1;	/*      1     r/w   1*/
		uint8_t TX_COE_FM_PIN_PCIE3_EN_LANE              : 1;	/*      2     r/w   1*/
		uint8_t TX_COE_FM_TX_TRAIN_DIS_LANE              : 1;	/*      3     r/w   0*/
		uint8_t LOCAL_TX_PRESET_INDEX_LANE_3_0           : 4;	/*  [7:4]     r/w 4'h2*/
		uint8_t TX_AMP_OFFSET_LANE_6_0                   : 7;	/* [14:8]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_AMP_INDEX_FORCE_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t TX_AMP_INDEX_VALID_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t TX_EMPH0_INDEX_FORCE_LANE                : 1;	/*     18     r/w   0*/
		uint8_t TX_EMPH0_INDEX_VALID_LANE                : 1;	/*     19     r/w   0*/
		uint8_t TX_EMPH1_INDEX_FORCE_LANE                : 1;	/*     20     r/w   0*/
		uint8_t TX_EMPH1_INDEX_VALID_LANE                : 1;	/*     21     r/w   0*/
		uint8_t TX_EMPH2_INDEX_FORCE_LANE                : 1;	/*     22     r/w   0*/
		uint8_t TX_EMPH2_INDEX_VALID_LANE                : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DRIVER_REG3_t;
__xdata __at( 0x5034 ) volatile TX_TRAIN_DRIVER_REG3_t TX_TRAIN_DRIVER_REG3;
#define reg_TX_TRAIN_COE_UPDATE_EN_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_TRAIN_COE_UPDATE_EN_LANE
#define reg_LOCAL_TX_PRESET_EN_LANE  TX_TRAIN_DRIVER_REG3.BF.LOCAL_TX_PRESET_EN_LANE
#define reg_TX_COE_FM_PIN_PCIE3_EN_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_COE_FM_PIN_PCIE3_EN_LANE
#define reg_TX_COE_FM_TX_TRAIN_DIS_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_COE_FM_TX_TRAIN_DIS_LANE
#define reg_LOCAL_TX_PRESET_INDEX_LANE_3_0  TX_TRAIN_DRIVER_REG3.BF.LOCAL_TX_PRESET_INDEX_LANE_3_0
#define reg_TX_AMP_OFFSET_LANE_6_0  TX_TRAIN_DRIVER_REG3.BF.TX_AMP_OFFSET_LANE_6_0
#define reg_TX_AMP_INDEX_FORCE_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_AMP_INDEX_FORCE_LANE
#define reg_TX_AMP_INDEX_VALID_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_AMP_INDEX_VALID_LANE
#define reg_TX_EMPH0_INDEX_FORCE_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_EMPH0_INDEX_FORCE_LANE
#define reg_TX_EMPH0_INDEX_VALID_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_EMPH0_INDEX_VALID_LANE
#define reg_TX_EMPH1_INDEX_FORCE_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_EMPH1_INDEX_FORCE_LANE
#define reg_TX_EMPH1_INDEX_VALID_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_EMPH1_INDEX_VALID_LANE
#define reg_TX_EMPH2_INDEX_FORCE_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_EMPH2_INDEX_FORCE_LANE
#define reg_TX_EMPH2_INDEX_VALID_LANE  TX_TRAIN_DRIVER_REG3.BF.TX_EMPH2_INDEX_VALID_LANE

// 0x0038	TX_TRAIN_DRIVER_REG4		TX Training Driver Register 4
typedef union {
	struct {
		uint8_t FM_TRAIN_TX_AMP_LANE_6_0                 : 7;	/*  [6:0]       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t FM_TRAIN_TX_EMPH0_LANE_4_0               : 5;	/* [12:8]       r   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t FM_TRAIN_TX_EMPH1_LANE_4_0               : 5;	/*[20:16]       r   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t FM_TRAIN_TX_EMPH2_LANE_4_0               : 5;	/*[28:24]       r   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DRIVER_REG4_t;
__xdata __at( 0x5038 ) volatile TX_TRAIN_DRIVER_REG4_t TX_TRAIN_DRIVER_REG4;
#define reg_FM_TRAIN_TX_AMP_LANE_6_0  TX_TRAIN_DRIVER_REG4.BF.FM_TRAIN_TX_AMP_LANE_6_0
#define reg_FM_TRAIN_TX_EMPH0_LANE_4_0  TX_TRAIN_DRIVER_REG4.BF.FM_TRAIN_TX_EMPH0_LANE_4_0
#define reg_FM_TRAIN_TX_EMPH1_LANE_4_0  TX_TRAIN_DRIVER_REG4.BF.FM_TRAIN_TX_EMPH1_LANE_4_0
#define reg_FM_TRAIN_TX_EMPH2_LANE_4_0  TX_TRAIN_DRIVER_REG4.BF.FM_TRAIN_TX_EMPH2_LANE_4_0

// 0x003c	TX_TRAIN_DEFAULT1		TX Training Default 1
typedef union {
	struct {
		uint8_t TX_AMP_DEFAULT1_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h3f*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_AMP_DEFAULT2_LANE_6_0                 : 7;	/* [14:8]     r/w 7'h2f*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_AMP_DEFAULT3_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h2f*/
		uint8_t RESERVED_23                              : 1;	/*[31:23]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:23]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DEFAULT1_t;
__xdata __at( 0x503c ) volatile TX_TRAIN_DEFAULT1_t TX_TRAIN_DEFAULT1;
#define reg_TX_AMP_DEFAULT1_LANE_6_0  TX_TRAIN_DEFAULT1.BF.TX_AMP_DEFAULT1_LANE_6_0
#define reg_TX_AMP_DEFAULT2_LANE_6_0  TX_TRAIN_DEFAULT1.BF.TX_AMP_DEFAULT2_LANE_6_0
#define reg_TX_AMP_DEFAULT3_LANE_6_0  TX_TRAIN_DEFAULT1.BF.TX_AMP_DEFAULT3_LANE_6_0

// 0x0040	TX_TRAIN_DEFAULT2		TX Training Default 2
typedef union {
	struct {
		uint8_t TX_EMPH0_DEFAULT1_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_LANE_4_0               : 5;	/* [12:8]     r/w 5'h09*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT3_LANE_4_0               : 5;	/*[20:16]     r/w 5'h0F*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DEFAULT2_t;
__xdata __at( 0x5040 ) volatile TX_TRAIN_DEFAULT2_t TX_TRAIN_DEFAULT2;
#define reg_TX_EMPH0_DEFAULT1_LANE_4_0  TX_TRAIN_DEFAULT2.BF.TX_EMPH0_DEFAULT1_LANE_4_0
#define reg_TX_EMPH0_DEFAULT2_LANE_4_0  TX_TRAIN_DEFAULT2.BF.TX_EMPH0_DEFAULT2_LANE_4_0
#define reg_TX_EMPH0_DEFAULT3_LANE_4_0  TX_TRAIN_DEFAULT2.BF.TX_EMPH0_DEFAULT3_LANE_4_0

// 0x0044	TX_TRAIN_DEFAULT3		TX Training Default 3
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT1_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH1_DEFAULT2_LANE_4_0               : 5;	/* [12:8]     r/w 5'h06*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH1_DEFAULT3_LANE_4_0               : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DEFAULT3_t;
__xdata __at( 0x5044 ) volatile TX_TRAIN_DEFAULT3_t TX_TRAIN_DEFAULT3;
#define reg_TX_EMPH1_DEFAULT1_LANE_4_0  TX_TRAIN_DEFAULT3.BF.TX_EMPH1_DEFAULT1_LANE_4_0
#define reg_TX_EMPH1_DEFAULT2_LANE_4_0  TX_TRAIN_DEFAULT3.BF.TX_EMPH1_DEFAULT2_LANE_4_0
#define reg_TX_EMPH1_DEFAULT3_LANE_4_0  TX_TRAIN_DEFAULT3.BF.TX_EMPH1_DEFAULT3_LANE_4_0

// 0x0048	TX_TRAIN_DEFAULT4		TX Training Default 4
typedef union {
	struct {
		uint8_t TX_EMPH2_DEFAULT1_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT2_LANE_4_0               : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT3_LANE_4_0               : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_DEFAULT4_t;
__xdata __at( 0x5048 ) volatile TX_TRAIN_DEFAULT4_t TX_TRAIN_DEFAULT4;
#define reg_TX_EMPH2_DEFAULT1_LANE_4_0  TX_TRAIN_DEFAULT4.BF.TX_EMPH2_DEFAULT1_LANE_4_0
#define reg_TX_EMPH2_DEFAULT2_LANE_4_0  TX_TRAIN_DEFAULT4.BF.TX_EMPH2_DEFAULT2_LANE_4_0
#define reg_TX_EMPH2_DEFAULT3_LANE_4_0  TX_TRAIN_DEFAULT4.BF.TX_EMPH2_DEFAULT3_LANE_4_0

// 0x004c	PRBS_TRAIN0		PRBS Train Control
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TRAIN_PRBS_CHECK_EN_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TRAIN_PRBS_DATA_WINDOW_OFFSET_START_LANE_3_0 : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t TRAIN_PRBS_DATA_WINDOW_OFFSET_END_LANE_3_0 : 4;	/*[15:12]     r/w 4'h7*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PRBS_TRAIN0_t;
__xdata __at( 0x504c ) volatile PRBS_TRAIN0_t PRBS_TRAIN0;
#define reg_TRAIN_PRBS_CHECK_EN_LANE  PRBS_TRAIN0.BF.TRAIN_PRBS_CHECK_EN_LANE
#define reg_TRAIN_PRBS_DATA_WINDOW_OFFSET_START_LANE_3_0  PRBS_TRAIN0.BF.TRAIN_PRBS_DATA_WINDOW_OFFSET_START_LANE_3_0
#define reg_TRAIN_PRBS_DATA_WINDOW_OFFSET_END_LANE_3_0  PRBS_TRAIN0.BF.TRAIN_PRBS_DATA_WINDOW_OFFSET_END_LANE_3_0

// 0x0054	TRX_TRAIN0		TRX Training Result0
typedef union {
	struct {
		uint8_t INT_RX_TRAIN_FAILED_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t INT_RX_TRAIN_COMPLETE_LANE               : 1;	/*      1     r/w   0*/
		uint8_t INT_TX_TRAIN_FAILED_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t INT_TX_TRAIN_COMPLETE_LANE               : 1;	/*      3     r/w   0*/
		uint8_t INT_TX_PRESET_INDEX_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h2*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w   0*/
		uint8_t INT_LOCAL_CTRL_REQ_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t INT_LOCAL_CTRL_G0_LANE_1_0               : 2;	/*[18:17]     r/w 2'h0*/
		uint8_t INT_LOCAL_CTRL_G1_LANE_1_0               : 2;	/*[20:19]     r/w 2'h0*/
		uint8_t INT_LOCAL_CTRL_GN1_LANE_1_0              : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t INT_LOCAL_CTRL_RESET_LANE                : 1;	/*     23     r/w   0*/
		uint8_t INT_LOCAL_CTRL_PAT_LANE_1_0              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t INT_LOCAL_CTRL_SEL_LANE_2_0              : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t INT_LOCAL_CTRL_G_LANE_1_0                : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN0_t;
__xdata __at( 0x5054 ) volatile TRX_TRAIN0_t TRX_TRAIN0;
#define reg_INT_RX_TRAIN_FAILED_LANE  TRX_TRAIN0.BF.INT_RX_TRAIN_FAILED_LANE
#define reg_INT_RX_TRAIN_COMPLETE_LANE  TRX_TRAIN0.BF.INT_RX_TRAIN_COMPLETE_LANE
#define reg_INT_TX_TRAIN_FAILED_LANE  TRX_TRAIN0.BF.INT_TX_TRAIN_FAILED_LANE
#define reg_INT_TX_TRAIN_COMPLETE_LANE  TRX_TRAIN0.BF.INT_TX_TRAIN_COMPLETE_LANE
#define reg_INT_TX_PRESET_INDEX_LANE_3_0  TRX_TRAIN0.BF.INT_TX_PRESET_INDEX_LANE_3_0
#define reg_INT_LOCAL_CTRL_REQ_LANE  TRX_TRAIN0.BF.INT_LOCAL_CTRL_REQ_LANE
#define reg_INT_LOCAL_CTRL_G0_LANE_1_0  TRX_TRAIN0.BF.INT_LOCAL_CTRL_G0_LANE_1_0
#define reg_INT_LOCAL_CTRL_G1_LANE_1_0  TRX_TRAIN0.BF.INT_LOCAL_CTRL_G1_LANE_1_0
#define reg_INT_LOCAL_CTRL_GN1_LANE_1_0  TRX_TRAIN0.BF.INT_LOCAL_CTRL_GN1_LANE_1_0
#define reg_INT_LOCAL_CTRL_RESET_LANE  TRX_TRAIN0.BF.INT_LOCAL_CTRL_RESET_LANE
#define reg_INT_LOCAL_CTRL_PAT_LANE_1_0  TRX_TRAIN0.BF.INT_LOCAL_CTRL_PAT_LANE_1_0
#define reg_INT_LOCAL_CTRL_SEL_LANE_2_0  TRX_TRAIN0.BF.INT_LOCAL_CTRL_SEL_LANE_2_0
#define reg_INT_LOCAL_CTRL_G_LANE_1_0  TRX_TRAIN0.BF.INT_LOCAL_CTRL_G_LANE_1_0

// 0x0058	TRX_TRAIN1		TRX Training Result1
typedef union {
	struct {
		uint8_t INT_REMOTE_STATUS_ACK_LANE               : 1;	/*      0       r   0*/
		uint8_t INT_REMOTE_STATUS_G0_LANE_1_0            : 2;	/*  [2:1]       r 2'h0*/
		uint8_t INT_REMOTE_STATUS_G1_LANE_1_0            : 2;	/*  [4:3]       r 2'h0*/
		uint8_t INT_REMOTE_STATUS_GN1_LANE_1_0           : 2;	/*  [6:5]       r 2'h0*/
		uint8_t INT_REMOTE_STATUS_RESET_LANE             : 1;	/*      7       r   0*/
		uint8_t INT_REMOTE_STATUS_PAT_LANE_1_0           : 2;	/*  [9:8]       r 2'h0*/
		uint8_t INT_REMOTE_STATUS_SEL_LANE_2_0           : 3;	/*[12:10]       r 3'h0*/
		uint8_t INT_REMOTE_STATUS_G_LANE_2_0             : 3;	/*[15:13]       r 3'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN1_t;
__xdata __at( 0x5058 ) volatile TRX_TRAIN1_t TRX_TRAIN1;
#define reg_INT_REMOTE_STATUS_ACK_LANE  TRX_TRAIN1.BF.INT_REMOTE_STATUS_ACK_LANE
#define reg_INT_REMOTE_STATUS_G0_LANE_1_0  TRX_TRAIN1.BF.INT_REMOTE_STATUS_G0_LANE_1_0
#define reg_INT_REMOTE_STATUS_G1_LANE_1_0  TRX_TRAIN1.BF.INT_REMOTE_STATUS_G1_LANE_1_0
#define reg_INT_REMOTE_STATUS_GN1_LANE_1_0  TRX_TRAIN1.BF.INT_REMOTE_STATUS_GN1_LANE_1_0
#define reg_INT_REMOTE_STATUS_RESET_LANE  TRX_TRAIN1.BF.INT_REMOTE_STATUS_RESET_LANE
#define reg_INT_REMOTE_STATUS_PAT_LANE_1_0  TRX_TRAIN1.BF.INT_REMOTE_STATUS_PAT_LANE_1_0
#define reg_INT_REMOTE_STATUS_SEL_LANE_2_0  TRX_TRAIN1.BF.INT_REMOTE_STATUS_SEL_LANE_2_0
#define reg_INT_REMOTE_STATUS_G_LANE_2_0  TRX_TRAIN1.BF.INT_REMOTE_STATUS_G_LANE_2_0

// 0x005c	CLK_GEN		Clock Enable And Reset
typedef union {
	struct {
		uint8_t TX_TRAIN_IF_CLK_EN_LANE                  : 1;	/*      0     r/w   1*/
		uint8_t TX_TRAIN_IF_CLK_ON_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t RST_TX_TRAIN_IF_CLK_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t DME_ENC_CLK_EN_LANE                      : 1;	/*      3     r/w   1*/
		uint8_t DME_ENC_CLK_ON_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RST_DME_ENC_CLK_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t DME_DEC_CLK_EN_LANE                      : 1;	/*      6     r/w   1*/
		uint8_t DME_DEC_CLK_ON_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t RST_DME_DEC_CLK_LANE                     : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLK_GEN_t;
__xdata __at( 0x505c ) volatile CLK_GEN_t CLK_GEN;
#define reg_TX_TRAIN_IF_CLK_EN_LANE  CLK_GEN.BF.TX_TRAIN_IF_CLK_EN_LANE
#define reg_TX_TRAIN_IF_CLK_ON_LANE  CLK_GEN.BF.TX_TRAIN_IF_CLK_ON_LANE
#define reg_RST_TX_TRAIN_IF_CLK_LANE  CLK_GEN.BF.RST_TX_TRAIN_IF_CLK_LANE
#define reg_DME_ENC_CLK_EN_LANE  CLK_GEN.BF.DME_ENC_CLK_EN_LANE
#define reg_DME_ENC_CLK_ON_LANE  CLK_GEN.BF.DME_ENC_CLK_ON_LANE
#define reg_RST_DME_ENC_CLK_LANE  CLK_GEN.BF.RST_DME_ENC_CLK_LANE
#define reg_DME_DEC_CLK_EN_LANE  CLK_GEN.BF.DME_DEC_CLK_EN_LANE
#define reg_DME_DEC_CLK_ON_LANE  CLK_GEN.BF.DME_DEC_CLK_ON_LANE
#define reg_RST_DME_DEC_CLK_LANE  CLK_GEN.BF.RST_DME_DEC_CLK_LANE

// 0x0060	INTERRUPT_REG0		Interrupt 0
typedef union {
	struct {
		uint8_t STATUS_DET_TIMEOUT_ISR_LANE              : 1;	/*      0     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_ISR_LANE               : 1;	/*      1     r/w   0*/
		uint8_t FRAME_DET_TIMEOUT_ISR_LANE               : 1;	/*      2     r/w   0*/
		uint8_t DME_DEC_ERROR_ISR_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_BALANCE_ERR_ISR_LANE              : 1;	/*      4     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_ISR_LANE               : 1;	/*      5     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_ISR_LANE             : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_ERROR_VALID_ISR_LANE              : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_TX_INIT_ISR_LANE                  : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_TRAIN_COMP_ISR_LANE               : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_TX_INIT_ISR_LANE                   : 1;	/*     10     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_ISR_LANE                : 1;	/*     11     r/w   0*/
		uint8_t LOCAL_ERROR_VALID_ISR_LANE               : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_STATUS_VALID_ISR_LANE              : 1;	/*     13     r/w   0*/
		uint8_t LOCAL_CTRL_VALID_ISR_LANE                : 1;	/*     14     r/w   0*/
		uint8_t LOCAL_FIELD_DONE_ISR_LANE                : 1;	/*     15     r/w   0*/
		uint8_t TX_TRAIN_COMPLETE_ISR_LANE               : 1;	/*     16     r/w   0*/
		uint8_t RX_TRAIN_COMPLETE_ISR_LANE               : 1;	/*     17     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_ISR_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_ISR_LANE                 : 1;	/*     19     r/w   0*/
		uint8_t TRX_TRAIN_STOP_ISR_LANE                  : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_MUX_ISR_LANE     : 1;	/*     21     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_MUX_ISR_LANE   : 1;	/*     22     r/w   0*/
		uint8_t TX_TRAIN_DISABLE_ISR_LANE                : 1;	/*     23     r/w   0*/
		uint8_t RX_TRAIN_DISABLE_ISR_LANE                : 1;	/*     24     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_ISR_LANE          : 1;	/*     25     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_DISABLE_ISR_LANE         : 1;	/*     26     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_ISR_LANE          : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG0_t;
__xdata __at( 0x5060 ) volatile INTERRUPT_REG0_t INTERRUPT_REG0;
#define reg_STATUS_DET_TIMEOUT_ISR_LANE  INTERRUPT_REG0.BF.STATUS_DET_TIMEOUT_ISR_LANE
#define reg_TRX_TRAIN_TIMEOUT_ISR_LANE  INTERRUPT_REG0.BF.TRX_TRAIN_TIMEOUT_ISR_LANE
#define reg_FRAME_DET_TIMEOUT_ISR_LANE  INTERRUPT_REG0.BF.FRAME_DET_TIMEOUT_ISR_LANE
#define reg_DME_DEC_ERROR_ISR_LANE  INTERRUPT_REG0.BF.DME_DEC_ERROR_ISR_LANE
#define reg_REMOTE_BALANCE_ERR_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_BALANCE_ERR_ISR_LANE
#define reg_REMOTE_CTRL_VALID_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_CTRL_VALID_ISR_LANE
#define reg_REMOTE_STATUS_VALID_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_STATUS_VALID_ISR_LANE
#define reg_REMOTE_ERROR_VALID_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_ERROR_VALID_ISR_LANE
#define reg_REMOTE_TX_INIT_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_TX_INIT_ISR_LANE
#define reg_REMOTE_TRAIN_COMP_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_TRAIN_COMP_ISR_LANE
#define reg_LOCAL_TX_INIT_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_TX_INIT_ISR_LANE
#define reg_LOCAL_TRAIN_COMP_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_TRAIN_COMP_ISR_LANE
#define reg_LOCAL_ERROR_VALID_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_ERROR_VALID_ISR_LANE
#define reg_LOCAL_STATUS_VALID_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_STATUS_VALID_ISR_LANE
#define reg_LOCAL_CTRL_VALID_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_CTRL_VALID_ISR_LANE
#define reg_LOCAL_FIELD_DONE_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_FIELD_DONE_ISR_LANE
#define reg_TX_TRAIN_COMPLETE_ISR_LANE  INTERRUPT_REG0.BF.TX_TRAIN_COMPLETE_ISR_LANE
#define reg_RX_TRAIN_COMPLETE_ISR_LANE  INTERRUPT_REG0.BF.RX_TRAIN_COMPLETE_ISR_LANE
#define reg_TX_TRAIN_ENABLE_ISR_LANE  INTERRUPT_REG0.BF.TX_TRAIN_ENABLE_ISR_LANE
#define reg_RX_TRAIN_ENABLE_ISR_LANE  INTERRUPT_REG0.BF.RX_TRAIN_ENABLE_ISR_LANE
#define reg_TRX_TRAIN_STOP_ISR_LANE  INTERRUPT_REG0.BF.TRX_TRAIN_STOP_ISR_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_MUX_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_CTRL_FIELD_VALID_MUX_ISR_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_MUX_ISR_LANE  INTERRUPT_REG0.BF.REMOTE_STATUS_FIELD_VALID_MUX_ISR_LANE
#define reg_TX_TRAIN_DISABLE_ISR_LANE  INTERRUPT_REG0.BF.TX_TRAIN_DISABLE_ISR_LANE
#define reg_RX_TRAIN_DISABLE_ISR_LANE  INTERRUPT_REG0.BF.RX_TRAIN_DISABLE_ISR_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_ISR_LANE  INTERRUPT_REG0.BF.PIN_PAPTA_TRAIN_ENABLE_ISR_LANE
#define reg_PIN_PAPTA_TRAIN_DISABLE_ISR_LANE  INTERRUPT_REG0.BF.PIN_PAPTA_TRAIN_DISABLE_ISR_LANE
#define reg_LOCAL_CTRL_FIELD_READY_ISR_LANE  INTERRUPT_REG0.BF.LOCAL_CTRL_FIELD_READY_ISR_LANE

// 0x0064	INTERRUPT_REG1		Interrupt 1
typedef union {
	struct {
		uint8_t STATUS_DET_TIMEOUT_MASK_LANE             : 1;	/*      0     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_MASK_LANE              : 1;	/*      1     r/w   0*/
		uint8_t FRAME_DET_TIMEOUT_MASK_LANE              : 1;	/*      2     r/w   0*/
		uint8_t DME_DEC_ERROR_MASK_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_BALANCE_ERR_MASK_LANE             : 1;	/*      4     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_MASK_LANE              : 1;	/*      5     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_MASK_LANE            : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_ERROR_VALID_MASK_LANE             : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_TX_INIT_MASK_LANE                 : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_TRAIN_COMP_MASK_LANE              : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_TX_INIT_MASK_LANE                  : 1;	/*     10     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_MASK_LANE               : 1;	/*     11     r/w   0*/
		uint8_t LOCAL_ERROR_VALID_MASK_LANE              : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_STATUS_VALID_MASK_LANE             : 1;	/*     13     r/w   0*/
		uint8_t LOCAL_CTRL_VALID_MASK_LANE               : 1;	/*     14     r/w   0*/
		uint8_t LOCAL_FIELD_DONE_MASK_LANE               : 1;	/*     15     r/w   0*/
		uint8_t TX_TRAIN_COMPLETE_MASK_LANE              : 1;	/*     16     r/w   1*/
		uint8_t RX_TRAIN_COMPLETE_MASK_LANE              : 1;	/*     17     r/w   1*/
		uint8_t TX_TRAIN_ENABLE_MASK_LANE                : 1;	/*     18     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_MASK_LANE                : 1;	/*     19     r/w   0*/
		uint8_t TRX_TRAIN_STOP_MASK_LANE                 : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_MUX_MASK_LANE    : 1;	/*     21     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_MUX_MASK_LANE  : 1;	/*     22     r/w   0*/
		uint8_t TX_TRAIN_DISABLE_MASK_LANE               : 1;	/*     23     r/w   0*/
		uint8_t RX_TRAIN_DISABLE_MASK_LANE               : 1;	/*     24     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_MASK_LANE         : 1;	/*     25     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_DISABLE_MASK_LANE        : 1;	/*     26     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_MASK_LANE         : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_REG1_t;
__xdata __at( 0x5064 ) volatile INTERRUPT_REG1_t INTERRUPT_REG1;
#define reg_STATUS_DET_TIMEOUT_MASK_LANE  INTERRUPT_REG1.BF.STATUS_DET_TIMEOUT_MASK_LANE
#define reg_TRX_TRAIN_TIMEOUT_MASK_LANE  INTERRUPT_REG1.BF.TRX_TRAIN_TIMEOUT_MASK_LANE
#define reg_FRAME_DET_TIMEOUT_MASK_LANE  INTERRUPT_REG1.BF.FRAME_DET_TIMEOUT_MASK_LANE
#define reg_DME_DEC_ERROR_MASK_LANE  INTERRUPT_REG1.BF.DME_DEC_ERROR_MASK_LANE
#define reg_REMOTE_BALANCE_ERR_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_BALANCE_ERR_MASK_LANE
#define reg_REMOTE_CTRL_VALID_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_CTRL_VALID_MASK_LANE
#define reg_REMOTE_STATUS_VALID_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_STATUS_VALID_MASK_LANE
#define reg_REMOTE_ERROR_VALID_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_ERROR_VALID_MASK_LANE
#define reg_REMOTE_TX_INIT_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_TX_INIT_MASK_LANE
#define reg_REMOTE_TRAIN_COMP_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_TRAIN_COMP_MASK_LANE
#define reg_LOCAL_TX_INIT_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_TX_INIT_MASK_LANE
#define reg_LOCAL_TRAIN_COMP_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_TRAIN_COMP_MASK_LANE
#define reg_LOCAL_ERROR_VALID_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_ERROR_VALID_MASK_LANE
#define reg_LOCAL_STATUS_VALID_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_STATUS_VALID_MASK_LANE
#define reg_LOCAL_CTRL_VALID_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_CTRL_VALID_MASK_LANE
#define reg_LOCAL_FIELD_DONE_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_FIELD_DONE_MASK_LANE
#define reg_TX_TRAIN_COMPLETE_MASK_LANE  INTERRUPT_REG1.BF.TX_TRAIN_COMPLETE_MASK_LANE
#define reg_RX_TRAIN_COMPLETE_MASK_LANE  INTERRUPT_REG1.BF.RX_TRAIN_COMPLETE_MASK_LANE
#define reg_TX_TRAIN_ENABLE_MASK_LANE  INTERRUPT_REG1.BF.TX_TRAIN_ENABLE_MASK_LANE
#define reg_RX_TRAIN_ENABLE_MASK_LANE  INTERRUPT_REG1.BF.RX_TRAIN_ENABLE_MASK_LANE
#define reg_TRX_TRAIN_STOP_MASK_LANE  INTERRUPT_REG1.BF.TRX_TRAIN_STOP_MASK_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_MUX_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_CTRL_FIELD_VALID_MUX_MASK_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_MUX_MASK_LANE  INTERRUPT_REG1.BF.REMOTE_STATUS_FIELD_VALID_MUX_MASK_LANE
#define reg_TX_TRAIN_DISABLE_MASK_LANE  INTERRUPT_REG1.BF.TX_TRAIN_DISABLE_MASK_LANE
#define reg_RX_TRAIN_DISABLE_MASK_LANE  INTERRUPT_REG1.BF.RX_TRAIN_DISABLE_MASK_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_MASK_LANE  INTERRUPT_REG1.BF.PIN_PAPTA_TRAIN_ENABLE_MASK_LANE
#define reg_PIN_PAPTA_TRAIN_DISABLE_MASK_LANE  INTERRUPT_REG1.BF.PIN_PAPTA_TRAIN_DISABLE_MASK_LANE
#define reg_LOCAL_CTRL_FIELD_READY_MASK_LANE  INTERRUPT_REG1.BF.LOCAL_CTRL_FIELD_READY_MASK_LANE

// 0x0068	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE		Interrupt 0
typedef union {
	struct {
		uint8_t STATUS_DET_TIMEOUT_ISR_CLEAR_LANE        : 1;	/*      0     r/w   0*/
		uint8_t TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE         : 1;	/*      1     r/w   0*/
		uint8_t FRAME_DET_TIMEOUT_ISR_CLEAR_LANE         : 1;	/*      2     r/w   0*/
		uint8_t DME_DEC_ERROR_ISR_CLEAR_LANE             : 1;	/*      3     r/w   0*/
		uint8_t REMOTE_BALANCE_ERR_ISR_CLEAR_LANE        : 1;	/*      4     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_ISR_CLEAR_LANE         : 1;	/*      5     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_ISR_CLEAR_LANE       : 1;	/*      6     r/w   0*/
		uint8_t REMOTE_ERROR_VALID_ISR_CLEAR_LANE        : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_TX_INIT_ISR_CLEAR_LANE            : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_TRAIN_COMP_ISR_CLEAR_LANE         : 1;	/*      9     r/w   0*/
		uint8_t LOCAL_TX_INIT_ISR_CLEAR_LANE             : 1;	/*     10     r/w   0*/
		uint8_t LOCAL_TRAIN_COMP_ISR_CLEAR_LANE          : 1;	/*     11     r/w   0*/
		uint8_t LOCAL_ERROR_VALID_ISR_CLEAR_LANE         : 1;	/*     12     r/w   0*/
		uint8_t LOCAL_STATUS_VALID_ISR_CLEAR_LANE        : 1;	/*     13     r/w   0*/
		uint8_t LOCAL_CTRL_VALID_ISR_CLEAR_LANE          : 1;	/*     14     r/w   0*/
		uint8_t LOCAL_FIELD_DONE_ISR_CLEAR_LANE          : 1;	/*     15     r/w   0*/
		uint8_t TX_TRAIN_COMPLETE_ISR_CLEAR_LANE         : 1;	/*     16     r/w   0*/
		uint8_t RX_TRAIN_COMPLETE_ISR_CLEAR_LANE         : 1;	/*     17     r/w   0*/
		uint8_t TX_TRAIN_ENABLE_ISR_CLEAR_LANE           : 1;	/*     18     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_ISR_CLEAR_LANE           : 1;	/*     19     r/w   0*/
		uint8_t TRX_TRAIN_STOP_ISR_CLEAR_LANE            : 1;	/*     20     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_VALID_MUX_ISR_CLEAR_LANE : 1;	/*     21     r/w   0*/
		uint8_t REMOTE_STATUS_FIELD_VALID_MUX_ISR_CLEAR_LANE : 1;	/*     22     r/w   0*/
		uint8_t TX_TRAIN_DISABLE_ISR_CLEAR_LANE          : 1;	/*     23     r/w   0*/
		uint8_t RX_TRAIN_DISABLE_ISR_CLEAR_LANE          : 1;	/*     24     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE    : 1;	/*     25     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE   : 1;	/*     26     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE    : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE_t;
__xdata __at( 0x5068 ) volatile TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE_t TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE;
#define reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.STATUS_DET_TIMEOUT_ISR_CLEAR_LANE
#define reg_TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE
#define reg_FRAME_DET_TIMEOUT_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.FRAME_DET_TIMEOUT_ISR_CLEAR_LANE
#define reg_DME_DEC_ERROR_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.DME_DEC_ERROR_ISR_CLEAR_LANE
#define reg_REMOTE_BALANCE_ERR_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_BALANCE_ERR_ISR_CLEAR_LANE
#define reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_CTRL_VALID_ISR_CLEAR_LANE
#define reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_STATUS_VALID_ISR_CLEAR_LANE
#define reg_REMOTE_ERROR_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_ERROR_VALID_ISR_CLEAR_LANE
#define reg_REMOTE_TX_INIT_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_TX_INIT_ISR_CLEAR_LANE
#define reg_REMOTE_TRAIN_COMP_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_TRAIN_COMP_ISR_CLEAR_LANE
#define reg_LOCAL_TX_INIT_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_TX_INIT_ISR_CLEAR_LANE
#define reg_LOCAL_TRAIN_COMP_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_TRAIN_COMP_ISR_CLEAR_LANE
#define reg_LOCAL_ERROR_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_ERROR_VALID_ISR_CLEAR_LANE
#define reg_LOCAL_STATUS_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_STATUS_VALID_ISR_CLEAR_LANE
#define reg_LOCAL_CTRL_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_CTRL_VALID_ISR_CLEAR_LANE
#define reg_LOCAL_FIELD_DONE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_FIELD_DONE_ISR_CLEAR_LANE
#define reg_TX_TRAIN_COMPLETE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.TX_TRAIN_COMPLETE_ISR_CLEAR_LANE
#define reg_RX_TRAIN_COMPLETE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.RX_TRAIN_COMPLETE_ISR_CLEAR_LANE
#define reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.TX_TRAIN_ENABLE_ISR_CLEAR_LANE
#define reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.RX_TRAIN_ENABLE_ISR_CLEAR_LANE
#define reg_TRX_TRAIN_STOP_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.TRX_TRAIN_STOP_ISR_CLEAR_LANE
#define reg_REMOTE_CTRL_FIELD_VALID_MUX_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_CTRL_FIELD_VALID_MUX_ISR_CLEAR_LANE
#define reg_REMOTE_STATUS_FIELD_VALID_MUX_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_STATUS_FIELD_VALID_MUX_ISR_CLEAR_LANE
#define reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.TX_TRAIN_DISABLE_ISR_CLEAR_LANE
#define reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.RX_TRAIN_DISABLE_ISR_CLEAR_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE
#define reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE
#define reg_LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE

// 0x006c	TX_EMPHASIS_CONTROL0		Tx Emphasis Control0
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
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t TX_EM_PRE2_CTRL_LANE_4_0                 : 5;	/*[28:24]     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL0_t;
__xdata __at( 0x506c ) volatile TX_EMPHASIS_CONTROL0_t TX_EMPHASIS_CONTROL0;
#define reg_TX_EM_MAIN_CTRL_LANE_6_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_MAIN_CTRL_LANE_6_0
#define reg_TX_EM_PRE_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_CTRL_FORCE_LANE
#define reg_TX_EM_PRE_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE_CTRL_LANE_4_0
#define reg_TX_EM_MAIN_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_MAIN_CTRL_FORCE_LANE
#define reg_TX_EM_POST_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_CTRL_FORCE_LANE
#define reg_TX_EM_POST_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_POST_CTRL_LANE_4_0
#define reg_TX_EM_PRE2_CTRL_FORCE_LANE  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_FORCE_LANE
#define reg_TX_EM_PRE2_CTRL_LANE_4_0  TX_EMPHASIS_CONTROL0.BF.TX_EM_PRE2_CTRL_LANE_4_0

// 0x0070	TX_EMPHASIS_CONTROL1		Tx Emphasis Control1
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
__xdata __at( 0x5070 ) volatile TX_EMPHASIS_CONTROL1_t TX_EMPHASIS_CONTROL1;
#define reg_TX_FIR_TAP_POL_FORCE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_FIR_TAP_POL_FORCE_LANE
#define reg_TX_FIR_TAP_POL_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_TAP_POL_LANE_5_0
#define reg_TX_FIR_UPDATE_FORCE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_FIR_UPDATE_FORCE_LANE
#define reg_TX_FIR_UPDATE_LANE  TX_EMPHASIS_CONTROL1.BF.TX_FIR_UPDATE_LANE
#define reg_TX_FIR_C_CTRL1_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_C_CTRL1_LANE_5_0
#define reg_TX_FIR_C_CTRL2_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_C_CTRL2_LANE_5_0
#define reg_TX_FIR_SEL_LANE_1_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_SEL_LANE_1_0
#define reg_TX_FIR_C_CTRL3_LANE_5_0  TX_EMPHASIS_CONTROL1.BF.TX_FIR_C_CTRL3_LANE_5_0

// 0x0074	TX_EMPHASIS_CONTROL2		Tx Emphasis Control2
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
__xdata __at( 0x5074 ) volatile TX_EMPHASIS_CONTROL2_t TX_EMPHASIS_CONTROL2;
#define reg_TO_ANA_TX_FIR_C3_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C3_LANE_5_0
#define reg_TO_ANA_TX_FIR_C2_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C2_LANE_5_0
#define reg_TO_ANA_TX_FIR_C1_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C1_LANE_5_0
#define reg_TO_ANA_TX_FIR_C0_LANE_5_0  TX_EMPHASIS_CONTROL2.BF.TO_ANA_TX_FIR_C0_LANE_5_0

// 0x0078	TX_EMPHASIS_CONTROL3		Tx Emphasis Control3
typedef union {
	struct {
		uint8_t TO_ANA_TX_FIR_UPDATE_LANE                : 1;	/*      0       r   0*/
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
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPHASIS_CONTROL3_t;
__xdata __at( 0x5078 ) volatile TX_EMPHASIS_CONTROL3_t TX_EMPHASIS_CONTROL3;
#define reg_TO_ANA_TX_FIR_UPDATE_LANE  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_UPDATE_LANE
#define reg_TX_FIR_TAP_P_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TX_FIR_TAP_P_LANE_5_0
#define reg_TX_FIR_TAP_P_FORCE_LANE  TX_EMPHASIS_CONTROL3.BF.TX_FIR_TAP_P_FORCE_LANE
#define reg_TO_ANA_TX_FIR_TAP_POL_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_TAP_POL_LANE_5_0
#define reg_TO_ANA_TX_FIR_C5_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_C5_LANE_5_0
#define reg_TO_ANA_TX_FIR_C4_LANE_5_0  TX_EMPHASIS_CONTROL3.BF.TO_ANA_TX_FIR_C4_LANE_5_0

// 0x007c	TX_TRAIN_PATTERN_REG1		Tx _training_pattern_reg1
typedef union {
	struct {
		uint8_t TX_TRAIN_PAT_NUM_LANE_9_0_b0             : 8;	/*  [9:0]     r/w 10'h42*/
		uint8_t TX_TRAIN_PAT_NUM_LANE_9_0_b1             : 2;	/*  [9:0]     r/w 10'h42*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t TRAIN_PAT_NUM_RX_LANE_9_0_b0             : 8;	/*[25:16]     r/w 10'h42*/
		uint8_t TRAIN_PAT_NUM_RX_LANE_9_0_b1             : 2;	/*[25:16]     r/w 10'h42*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_PATTERN_REG1_t;
__xdata __at( 0x507c ) volatile TX_TRAIN_PATTERN_REG1_t TX_TRAIN_PATTERN_REG1;
#define reg_TX_TRAIN_PAT_NUM_LANE_9_0_b0  TX_TRAIN_PATTERN_REG1.BF.TX_TRAIN_PAT_NUM_LANE_9_0_b0
#define reg_TX_TRAIN_PAT_NUM_LANE_9_0_b1  TX_TRAIN_PATTERN_REG1.BF.TX_TRAIN_PAT_NUM_LANE_9_0_b1
#define reg_TRAIN_PAT_NUM_RX_LANE_9_0_b0  TX_TRAIN_PATTERN_REG1.BF.TRAIN_PAT_NUM_RX_LANE_9_0_b0
#define reg_TRAIN_PAT_NUM_RX_LANE_9_0_b1  TX_TRAIN_PATTERN_REG1.BF.TRAIN_PAT_NUM_RX_LANE_9_0_b1

// 0x0080	TX_TRAIN_CONTROL_REG0		TX Training Control Register 0
typedef union {
	struct {
		uint8_t FORCE_PLL_READY_TX_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t FORCE_SEL_BITS_TX_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t FORCE_CONTROL_TX_EN_LANE                 : 1;	/*      2     r/w   1*/
		uint8_t EXTEND_TRX_TRAIN_CLK_RX_EN_LANE          : 1;	/*      3     r/w   0*/
		uint8_t FORCE_PLL_READY_RX_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t FORCE_SEL_BITS_RX_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t FORCE_TX_TRAIN_PAT_RX_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t FORCE_CONTROL_RX_EN_LANE                 : 1;	/*      7     r/w   1*/
		uint8_t STRX_TRAIN_COE_VALID_DLY_LANE_1_0        : 2;	/*  [9:8]     r/w 2'b00*/
		uint8_t PCIE_MODE_LANE                           : 1;	/*     10     r/w   0*/
		uint8_t FORCE_CLK_READY_LANE                     : 1;	/*     11     r/w   0*/
		uint8_t AUTO_FORCE_DIS_RX_LANE                   : 1;	/*     12     r/w   1*/
		uint8_t AUTO_FORCE_DIS_TX_LANE                   : 1;	/*     13     r/w   1*/
		uint8_t FORCE_TX_TRAIN_PAT_TX_EN_LANE            : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CTRL_FIELD_START_ADJUST_LANE_1_0         : 2;	/*[17:16]     r/w 2'b00*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_CONTROL_REG0_t;
__xdata __at( 0x5080 ) volatile TX_TRAIN_CONTROL_REG0_t TX_TRAIN_CONTROL_REG0;
#define reg_FORCE_PLL_READY_TX_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_PLL_READY_TX_LANE
#define reg_FORCE_SEL_BITS_TX_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_SEL_BITS_TX_LANE
#define reg_FORCE_CONTROL_TX_EN_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_CONTROL_TX_EN_LANE
#define reg_EXTEND_TRX_TRAIN_CLK_RX_EN_LANE  TX_TRAIN_CONTROL_REG0.BF.EXTEND_TRX_TRAIN_CLK_RX_EN_LANE
#define reg_FORCE_PLL_READY_RX_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_PLL_READY_RX_LANE
#define reg_FORCE_SEL_BITS_RX_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_SEL_BITS_RX_LANE
#define reg_FORCE_TX_TRAIN_PAT_RX_EN_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_TX_TRAIN_PAT_RX_EN_LANE
#define reg_FORCE_CONTROL_RX_EN_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_CONTROL_RX_EN_LANE
#define reg_STRX_TRAIN_COE_VALID_DLY_LANE_1_0  TX_TRAIN_CONTROL_REG0.BF.STRX_TRAIN_COE_VALID_DLY_LANE_1_0
#define reg_PCIE_MODE_LANE  TX_TRAIN_CONTROL_REG0.BF.PCIE_MODE_LANE
#define reg_FORCE_CLK_READY_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_CLK_READY_LANE
#define reg_AUTO_FORCE_DIS_RX_LANE  TX_TRAIN_CONTROL_REG0.BF.AUTO_FORCE_DIS_RX_LANE
#define reg_AUTO_FORCE_DIS_TX_LANE  TX_TRAIN_CONTROL_REG0.BF.AUTO_FORCE_DIS_TX_LANE
#define reg_FORCE_TX_TRAIN_PAT_TX_EN_LANE  TX_TRAIN_CONTROL_REG0.BF.FORCE_TX_TRAIN_PAT_TX_EN_LANE
#define reg_CTRL_FIELD_START_ADJUST_LANE_1_0  TX_TRAIN_CONTROL_REG0.BF.CTRL_FIELD_START_ADJUST_LANE_1_0

// 0x0084	TX_TRAIN_CONTROL_REG1		TX Training Control Register 1
typedef union {
	struct {
		uint8_t REMOTE_VALID_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t TRAIN_RDY_FM_REG_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t REMOTE_INIT_FM_REG_EN_LANE               : 1;	/*      2     r/w   0*/
		uint8_t REMOTE_COMP_FM_REG_EN_LANE               : 1;	/*      3     r/w   0*/
		uint8_t TRAIN_ERR_FM_REG_EN_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t TRAIN_PIN_FM_REG_EN_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t ERR_RSP_RPT_EN_LANE                      : 1;	/*      6     r/w   1*/
		uint8_t TX_COE_FM_PIPE_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_SEL_LANE             : 1;	/*      8     r/w   0*/
		uint8_t CONTROL_32G_LANE                         : 1;	/*      9     r/w   0*/
		uint8_t REMOTE_VALID_INTERRUPT_CTRL_LANE         : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_CONTROL_REG1_t;
__xdata __at( 0x5084 ) volatile TX_TRAIN_CONTROL_REG1_t TX_TRAIN_CONTROL_REG1;
#define reg_REMOTE_VALID_LANE  TX_TRAIN_CONTROL_REG1.BF.REMOTE_VALID_LANE
#define reg_TRAIN_RDY_FM_REG_EN_LANE  TX_TRAIN_CONTROL_REG1.BF.TRAIN_RDY_FM_REG_EN_LANE
#define reg_REMOTE_INIT_FM_REG_EN_LANE  TX_TRAIN_CONTROL_REG1.BF.REMOTE_INIT_FM_REG_EN_LANE
#define reg_REMOTE_COMP_FM_REG_EN_LANE  TX_TRAIN_CONTROL_REG1.BF.REMOTE_COMP_FM_REG_EN_LANE
#define reg_TRAIN_ERR_FM_REG_EN_LANE  TX_TRAIN_CONTROL_REG1.BF.TRAIN_ERR_FM_REG_EN_LANE
#define reg_TRAIN_PIN_FM_REG_EN_LANE  TX_TRAIN_CONTROL_REG1.BF.TRAIN_PIN_FM_REG_EN_LANE
#define reg_ERR_RSP_RPT_EN_LANE  TX_TRAIN_CONTROL_REG1.BF.ERR_RSP_RPT_EN_LANE
#define reg_TX_COE_FM_PIPE_LANE  TX_TRAIN_CONTROL_REG1.BF.TX_COE_FM_PIPE_LANE
#define reg_PIN_TX_TRAIN_ENABLE_SEL_LANE  TX_TRAIN_CONTROL_REG1.BF.PIN_TX_TRAIN_ENABLE_SEL_LANE
#define reg_CONTROL_32G_LANE  TX_TRAIN_CONTROL_REG1.BF.CONTROL_32G_LANE
#define reg_REMOTE_VALID_INTERRUPT_CTRL_LANE  TX_TRAIN_CONTROL_REG1.BF.REMOTE_VALID_INTERRUPT_CTRL_LANE

// 0x0088	TX_TRAIN_CONTROL_REG2		TX Training Control Register 2
typedef union {
	struct {
		uint8_t LOCAL_CTRL_FIELD_READY_RD_LANE           : 1;	/*      0       r   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_RD_LANE           : 1;	/*      1       r   0*/
		uint8_t EYE_OPEN_EN_RD_LANE                      : 1;	/*      2       r   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PIN_RX_PRESET_HINT_RD_LANE_3_0           : 4;	/*  [7:4]       r   0*/
		uint8_t TX_TRAIN_START_RD_LANE                   : 1;	/*      8       r   0*/
		uint8_t PLL_READY_RX_RD_LANE                     : 1;	/*      9       r   0*/
		uint8_t CLK_8BIT_READY_RD_LANE                   : 1;	/*     10       r   0*/
		uint8_t CLK_10BIT_READY_RD_LANE                  : 1;	/*     11       r   0*/
		uint8_t CLOCK_SEL_IN_TRAINING_RD_LANE            : 1;	/*     12       r   0*/
		uint8_t CLOCK_SEL_NOT_IN_TRAINING_RD_LANE        : 1;	/*     13       r   0*/
		uint8_t TRAIN_END_RD_LANE                        : 1;	/*     14       r   0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_CONTROL_REG2_t;
__xdata __at( 0x5088 ) volatile TX_TRAIN_CONTROL_REG2_t TX_TRAIN_CONTROL_REG2;
#define reg_LOCAL_CTRL_FIELD_READY_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.LOCAL_CTRL_FIELD_READY_RD_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.PIN_PAPTA_TRAIN_ENABLE_RD_LANE
#define reg_EYE_OPEN_EN_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.EYE_OPEN_EN_RD_LANE
#define reg_PIN_RX_PRESET_HINT_RD_LANE_3_0  TX_TRAIN_CONTROL_REG2.BF.PIN_RX_PRESET_HINT_RD_LANE_3_0
#define reg_TX_TRAIN_START_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.TX_TRAIN_START_RD_LANE
#define reg_PLL_READY_RX_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.PLL_READY_RX_RD_LANE
#define reg_CLK_8BIT_READY_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.CLK_8BIT_READY_RD_LANE
#define reg_CLK_10BIT_READY_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.CLK_10BIT_READY_RD_LANE
#define reg_CLOCK_SEL_IN_TRAINING_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.CLOCK_SEL_IN_TRAINING_RD_LANE
#define reg_CLOCK_SEL_NOT_IN_TRAINING_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.CLOCK_SEL_NOT_IN_TRAINING_RD_LANE
#define reg_TRAIN_END_RD_LANE  TX_TRAIN_CONTROL_REG2.BF.TRAIN_END_RD_LANE

// 0x008c	TX_EMPH_CTRL_REG0		Tx Emphasis Control Register 0
typedef union {
	struct {
		uint8_t TX_AMP_PIPE2_LANE_6_0                    : 7;	/*  [6:0]     r/w 7'h2d*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH1_PIPE2_LANE_4_0                  : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t PCIE_GEN12_SEL_LANE                      : 1;	/*     13     r/w   1*/
		uint8_t TX_SWING_RD_LANE                         : 1;	/*     14       r   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TX_AMP_PIPE0_LANE_6_0                    : 7;	/*[22:16]     r/w 7'h21*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH1_PIPE0_LANE_4_0                  : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPH_CTRL_REG0_t;
__xdata __at( 0x508c ) volatile TX_EMPH_CTRL_REG0_t TX_EMPH_CTRL_REG0;
#define reg_TX_AMP_PIPE2_LANE_6_0  TX_EMPH_CTRL_REG0.BF.TX_AMP_PIPE2_LANE_6_0
#define reg_TX_EMPH1_PIPE2_LANE_4_0  TX_EMPH_CTRL_REG0.BF.TX_EMPH1_PIPE2_LANE_4_0
#define reg_PCIE_GEN12_SEL_LANE  TX_EMPH_CTRL_REG0.BF.PCIE_GEN12_SEL_LANE
#define reg_TX_SWING_RD_LANE  TX_EMPH_CTRL_REG0.BF.TX_SWING_RD_LANE
#define reg_TX_AMP_PIPE0_LANE_6_0  TX_EMPH_CTRL_REG0.BF.TX_AMP_PIPE0_LANE_6_0
#define reg_TX_EMPH1_PIPE0_LANE_4_0  TX_EMPH_CTRL_REG0.BF.TX_EMPH1_PIPE0_LANE_4_0

// 0x0090	TX_EMPH_CTRL_REG1		Tx Emphasis Control Register 1
typedef union {
	struct {
		uint8_t TX_AMP_PIPE1_LANE_6_0                    : 7;	/*  [6:0]     r/w 7'h25*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TX_EMPH1_PIPE1_LANE_4_0                  : 5;	/* [12:8]     r/w 5'h8*/
		uint8_t RESERVED_13                              : 3;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:13]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_EMPH_CTRL_REG1_t;
__xdata __at( 0x5090 ) volatile TX_EMPH_CTRL_REG1_t TX_EMPH_CTRL_REG1;
#define reg_TX_AMP_PIPE1_LANE_6_0  TX_EMPH_CTRL_REG1.BF.TX_AMP_PIPE1_LANE_6_0
#define reg_TX_EMPH1_PIPE1_LANE_4_0  TX_EMPH_CTRL_REG1.BF.TX_EMPH1_PIPE1_LANE_4_0

// 0x0094	TX_AMP_CTRL_REG0		Tx Amplitude Control Register 0
typedef union {
	struct {
		uint8_t TX_MARGIN_V0_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t TX_MARGIN_V1_LANE_3_0                    : 4;	/*  [7:4]     r/w 4'ha*/
		uint8_t TX_MARGIN_V2_LANE_3_0                    : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t TX_MARGIN_V3_LANE_3_0                    : 4;	/*[15:12]     r/w 4'h8*/
		uint8_t TX_MARGIN_V4_LANE_3_0                    : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t TX_MARGIN_V5_LANE_3_0                    : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t TX_MARGIN_V6_LANE_3_0                    : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t TX_MARGIN_V7_LANE_3_0                    : 4;	/*[31:28]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_AMP_CTRL_REG0_t;
__xdata __at( 0x5094 ) volatile TX_AMP_CTRL_REG0_t TX_AMP_CTRL_REG0;
#define reg_TX_MARGIN_V0_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V0_LANE_3_0
#define reg_TX_MARGIN_V1_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V1_LANE_3_0
#define reg_TX_MARGIN_V2_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V2_LANE_3_0
#define reg_TX_MARGIN_V3_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V3_LANE_3_0
#define reg_TX_MARGIN_V4_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V4_LANE_3_0
#define reg_TX_MARGIN_V5_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V5_LANE_3_0
#define reg_TX_MARGIN_V6_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V6_LANE_3_0
#define reg_TX_MARGIN_V7_LANE_3_0  TX_AMP_CTRL_REG0.BF.TX_MARGIN_V7_LANE_3_0

// 0x0098	TX_AMP_CTRL_REG1		Tx Amplitude Control Register 1
typedef union {
	struct {
		uint8_t TX_VREF_TXDRV_SEL_FORCE_LANE             : 1;	/*      0     r/w   0*/
		uint8_t TX_VREF_TXDRV_SEL_FM_MARGIN_PCIE_EN_LANE : 1;	/*      1     r/w   1*/
		uint8_t TX_VREF_TX_SEL_LANE_3_0                  : 4;	/*  [5:2]     r/w 4'h7*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_AMP_CTRL_REG1_t;
__xdata __at( 0x5098 ) volatile TX_AMP_CTRL_REG1_t TX_AMP_CTRL_REG1;
#define reg_TX_VREF_TXDRV_SEL_FORCE_LANE  TX_AMP_CTRL_REG1.BF.TX_VREF_TXDRV_SEL_FORCE_LANE
#define reg_TX_VREF_TXDRV_SEL_FM_MARGIN_PCIE_EN_LANE  TX_AMP_CTRL_REG1.BF.TX_VREF_TXDRV_SEL_FM_MARGIN_PCIE_EN_LANE
#define reg_TX_VREF_TX_SEL_LANE_3_0  TX_AMP_CTRL_REG1.BF.TX_VREF_TX_SEL_LANE_3_0

#endif
