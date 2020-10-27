#ifndef PHY_REG_C_TX_TRAIN_IF_LANE_H
#define PHY_REG_C_TX_TRAIN_IF_LANE_H



// 0x0000	TX_TRAIN_CTRL_LANE		
typedef union {
	struct {
		uint8_t PIN_PAPTA_TRAIN_ENABLE_RD_LANE           : 1;	/*      0       r   0*/
		uint8_t REMOTE_TX_TRAIN_COMPLETE_TYPE_LANE       : 1;	/*      1     r/w   0*/
		uint8_t REMOTE_TX_TRAIN_COMPLETE_LANE            : 1;	/*      2     r/w   0*/
		uint8_t REMOTE_CTRL_FIELD_HIGH_LANE              : 1;	/*      3     r/w   0*/
		uint8_t PIN_LOCAL_CTRL_FIELD_READY_RD_LANE       : 1;	/*      4       r   0*/
		uint8_t PIN_RX_TRAIN_COMPLETE_RD_LANE            : 1;	/*      5       r   0*/
		uint8_t PIN_RX_TRAIN_FAILED_RD_LANE              : 1;	/*      6       r   0*/
		uint8_t TX_TRAIN_ERROR_LANE_1_0_b0               : 1;	/*  [8:7]     r/w   0*/
		uint8_t TX_TRAIN_ERROR_LANE_1_0_b1               : 1;	/*  [8:7]     r/w   0*/
		uint8_t PIN_TX_TRAIN_ERROR_RD_LANE_1_0           : 2;	/* [10:9]       r 2'b0*/
		uint8_t PIN_TX_TRAIN_COMPLETE_RD_LANE            : 1;	/*     11       r   0*/
		uint8_t PIN_TX_TRAIN_FAILED_RD_LANE              : 1;	/*     12       r   0*/
		uint8_t PIN_RX_TRAIN_ENABLE_RD_LANE              : 1;	/*     13       r   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_MUX_RD_LANE          : 1;	/*     14       r   0*/
		uint8_t TX_FFE_TRAIN_DONE_LANE                   : 1;	/*     15     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_SEL_LANE             : 1;	/*     16     r/w   0*/
		uint8_t LINK_TRAIN_MODE_LPBK_LANE                : 1;	/*     17     r/w   0*/
		uint8_t TX_TRAIN_COMP_WAIT_FRAME_LANE_2_0        : 3;	/*[20:18]     r/w 3'h2*/
		uint8_t LOCAL_STATUS_FIELD_VALID_LANE            : 1;	/*     21     r/w   0*/
		uint8_t LOCAL_CTRL_FIELD_VALID_LANE              : 1;	/*     22     r/w   0*/
		uint8_t RX_TRAIN_FAILED_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t RX_TRAIN_COMPLETE_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t TX_TRAIN_ON_LANE                         : 1;	/*     25     r/w   0*/
		uint8_t RX_TRAIN_ON_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t TX_TRAIN_FAILED_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t LOCAL_TX_TRAIN_COMPLETE_LANE             : 1;	/*     28     r/w   0*/
		uint8_t PIN_TRAIN_COMPLETE_TYPE_LANE             : 1;	/*     29     r/w   0*/
		uint8_t EYE_OPEN_EN_RD_LANE                      : 1;	/*     30       r   0*/
		uint8_t LINK_TRAIN_MODE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_CTRL_LANE_t;
__xdata __at( 0x2600 ) volatile TX_TRAIN_CTRL_LANE_t TX_TRAIN_CTRL_LANE;
#define reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_PAPTA_TRAIN_ENABLE_RD_LANE
#define reg_REMOTE_TX_TRAIN_COMPLETE_TYPE_LANE  TX_TRAIN_CTRL_LANE.BF.REMOTE_TX_TRAIN_COMPLETE_TYPE_LANE
#define reg_REMOTE_TX_TRAIN_COMPLETE_LANE  TX_TRAIN_CTRL_LANE.BF.REMOTE_TX_TRAIN_COMPLETE_LANE
#define reg_REMOTE_CTRL_FIELD_HIGH_LANE  TX_TRAIN_CTRL_LANE.BF.REMOTE_CTRL_FIELD_HIGH_LANE
#define reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_LOCAL_CTRL_FIELD_READY_RD_LANE
#define reg_PIN_RX_TRAIN_COMPLETE_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_RX_TRAIN_COMPLETE_RD_LANE
#define reg_PIN_RX_TRAIN_FAILED_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_RX_TRAIN_FAILED_RD_LANE
#define reg_TX_TRAIN_ERROR_LANE_1_0_b0  TX_TRAIN_CTRL_LANE.BF.TX_TRAIN_ERROR_LANE_1_0_b0
#define reg_TX_TRAIN_ERROR_LANE_1_0_b1  TX_TRAIN_CTRL_LANE.BF.TX_TRAIN_ERROR_LANE_1_0_b1
#define reg_PIN_TX_TRAIN_ERROR_RD_LANE_1_0  TX_TRAIN_CTRL_LANE.BF.PIN_TX_TRAIN_ERROR_RD_LANE_1_0
#define reg_PIN_TX_TRAIN_COMPLETE_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_TX_TRAIN_COMPLETE_RD_LANE
#define reg_PIN_TX_TRAIN_FAILED_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_TX_TRAIN_FAILED_RD_LANE
#define reg_PIN_RX_TRAIN_ENABLE_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_RX_TRAIN_ENABLE_RD_LANE
#define reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_TX_TRAIN_ENABLE_MUX_RD_LANE
#define reg_TX_FFE_TRAIN_DONE_LANE  TX_TRAIN_CTRL_LANE.BF.TX_FFE_TRAIN_DONE_LANE
#define reg_PIN_TX_TRAIN_ENABLE_SEL_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_TX_TRAIN_ENABLE_SEL_LANE
#define reg_LINK_TRAIN_MODE_LPBK_LANE  TX_TRAIN_CTRL_LANE.BF.LINK_TRAIN_MODE_LPBK_LANE
#define reg_TX_TRAIN_COMP_WAIT_FRAME_LANE_2_0  TX_TRAIN_CTRL_LANE.BF.TX_TRAIN_COMP_WAIT_FRAME_LANE_2_0
#define reg_LOCAL_STATUS_FIELD_VALID_LANE  TX_TRAIN_CTRL_LANE.BF.LOCAL_STATUS_FIELD_VALID_LANE
#define reg_LOCAL_CTRL_FIELD_VALID_LANE  TX_TRAIN_CTRL_LANE.BF.LOCAL_CTRL_FIELD_VALID_LANE
#define reg_RX_TRAIN_FAILED_LANE  TX_TRAIN_CTRL_LANE.BF.RX_TRAIN_FAILED_LANE
#define reg_RX_TRAIN_COMPLETE_LANE  TX_TRAIN_CTRL_LANE.BF.RX_TRAIN_COMPLETE_LANE
#define reg_TX_TRAIN_ON_LANE  TX_TRAIN_CTRL_LANE.BF.TX_TRAIN_ON_LANE
#define reg_RX_TRAIN_ON_LANE  TX_TRAIN_CTRL_LANE.BF.RX_TRAIN_ON_LANE
#define reg_TX_TRAIN_FAILED_LANE  TX_TRAIN_CTRL_LANE.BF.TX_TRAIN_FAILED_LANE
#define reg_LOCAL_TX_TRAIN_COMPLETE_LANE  TX_TRAIN_CTRL_LANE.BF.LOCAL_TX_TRAIN_COMPLETE_LANE
#define reg_PIN_TRAIN_COMPLETE_TYPE_LANE  TX_TRAIN_CTRL_LANE.BF.PIN_TRAIN_COMPLETE_TYPE_LANE
#define reg_EYE_OPEN_EN_RD_LANE  TX_TRAIN_CTRL_LANE.BF.EYE_OPEN_EN_RD_LANE
#define reg_LINK_TRAIN_MODE_LANE  TX_TRAIN_CTRL_LANE.BF.LINK_TRAIN_MODE_LANE

// 0x0004	TRX_TRAIN_IF_LOCAL_FIELD_LANE		
typedef union {
	struct {
		uint8_t LOCAL_STATUS_FIELD_LANE_15_0_b0          : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_STATUS_FIELD_LANE_15_0_b1          : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t LOCAL_CTRL_FIELD_LANE_15_0_b0            : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t LOCAL_CTRL_FIELD_LANE_15_0_b1            : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_LOCAL_FIELD_LANE_t;
__xdata __at( 0x2604 ) volatile TRX_TRAIN_IF_LOCAL_FIELD_LANE_t TRX_TRAIN_IF_LOCAL_FIELD_LANE;
#define reg_LOCAL_STATUS_FIELD_LANE_15_0_b0  TRX_TRAIN_IF_LOCAL_FIELD_LANE.BF.LOCAL_STATUS_FIELD_LANE_15_0_b0
#define reg_LOCAL_STATUS_FIELD_LANE_15_0_b1  TRX_TRAIN_IF_LOCAL_FIELD_LANE.BF.LOCAL_STATUS_FIELD_LANE_15_0_b1
#define reg_LOCAL_CTRL_FIELD_LANE_15_0_b0  TRX_TRAIN_IF_LOCAL_FIELD_LANE.BF.LOCAL_CTRL_FIELD_LANE_15_0_b0
#define reg_LOCAL_CTRL_FIELD_LANE_15_0_b1  TRX_TRAIN_IF_LOCAL_FIELD_LANE.BF.LOCAL_CTRL_FIELD_LANE_15_0_b1
#define reg_LOCAL_STATUS_FIELD_LANE_15_0  TRX_TRAIN_IF_LOCAL_FIELD_LANE.WT.W0
#define reg_LOCAL_CTRL_FIELD_LANE_15_0  TRX_TRAIN_IF_LOCAL_FIELD_LANE.WT.W1

// 0x0008	TRX_TRAIN_IF_REMOTE_FIELD_LANE		
typedef union {
	struct {
		uint8_t REMOTE_STATUS_FIELD_RD_LANE_15_0_b0      : 8;	/* [15:0]       r   0*/
		uint8_t REMOTE_STATUS_FIELD_RD_LANE_15_0_b1      : 8;	/* [15:0]       r   0*/
		uint8_t REMOTE_CTRL_FIELD_RD_LANE_15_0_b0        : 8;	/*[31:16]       r   0*/
		uint8_t REMOTE_CTRL_FIELD_RD_LANE_15_0_b1        : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_REMOTE_FIELD_LANE_t;
__xdata __at( 0x2608 ) volatile TRX_TRAIN_IF_REMOTE_FIELD_LANE_t TRX_TRAIN_IF_REMOTE_FIELD_LANE;
#define reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0  TRX_TRAIN_IF_REMOTE_FIELD_LANE.BF.REMOTE_STATUS_FIELD_RD_LANE_15_0_b0
#define reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1  TRX_TRAIN_IF_REMOTE_FIELD_LANE.BF.REMOTE_STATUS_FIELD_RD_LANE_15_0_b1
#define reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0  TRX_TRAIN_IF_REMOTE_FIELD_LANE.BF.REMOTE_CTRL_FIELD_RD_LANE_15_0_b0
#define reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1  TRX_TRAIN_IF_REMOTE_FIELD_LANE.BF.REMOTE_CTRL_FIELD_RD_LANE_15_0_b1
#define reg_REMOTE_STATUS_FIELD_RD_LANE_15_0  TRX_TRAIN_IF_REMOTE_FIELD_LANE.WT.W0
#define reg_REMOTE_CTRL_FIELD_RD_LANE_15_0  TRX_TRAIN_IF_REMOTE_FIELD_LANE.WT.W1

// 0x000c	TRX_TRAIN_IF_CLK_RST		
typedef union {
	struct {
		uint8_t TX_TRAIN_IF_CLK_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t DME_ENC_CLK_EN_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t DME_DEC_CLK_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t RST_TX_TRAIN_IF_CLK_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t RST_DME_ENC_CLK_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t RST_DME_DEC_CLK_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t LOCAL_ERROR_FIELD_VALID_LANE             : 1;	/*      7     r/w   0*/
		uint8_t REMOTE_STATUS_G1_LANE_1_0                : 2;	/*  [9:8]       r   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REMOTE_STATUS_G0_LANE_1_0                : 2;	/*[17:16]       r   0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t REMOTE_STATUS_GN1_LANE_1_0               : 2;	/*[25:24]       r   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_CLK_RST_t;
__xdata __at( 0x260c ) volatile TRX_TRAIN_IF_CLK_RST_t TRX_TRAIN_IF_CLK_RST;
#define reg_TX_TRAIN_IF_CLK_EN_LANE  TRX_TRAIN_IF_CLK_RST.BF.TX_TRAIN_IF_CLK_EN_LANE
#define reg_DME_ENC_CLK_EN_LANE  TRX_TRAIN_IF_CLK_RST.BF.DME_ENC_CLK_EN_LANE
#define reg_DME_DEC_CLK_EN_LANE  TRX_TRAIN_IF_CLK_RST.BF.DME_DEC_CLK_EN_LANE
#define reg_RST_TX_TRAIN_IF_CLK_LANE  TRX_TRAIN_IF_CLK_RST.BF.RST_TX_TRAIN_IF_CLK_LANE
#define reg_RST_DME_ENC_CLK_LANE  TRX_TRAIN_IF_CLK_RST.BF.RST_DME_ENC_CLK_LANE
#define reg_RST_DME_DEC_CLK_LANE  TRX_TRAIN_IF_CLK_RST.BF.RST_DME_DEC_CLK_LANE
#define reg_LOCAL_ERROR_FIELD_VALID_LANE  TRX_TRAIN_IF_CLK_RST.BF.LOCAL_ERROR_FIELD_VALID_LANE
#define reg_REMOTE_STATUS_G1_LANE_1_0  TRX_TRAIN_IF_CLK_RST.BF.REMOTE_STATUS_G1_LANE_1_0
#define reg_REMOTE_STATUS_G0_LANE_1_0  TRX_TRAIN_IF_CLK_RST.BF.REMOTE_STATUS_G0_LANE_1_0
#define reg_REMOTE_STATUS_GN1_LANE_1_0  TRX_TRAIN_IF_CLK_RST.BF.REMOTE_STATUS_GN1_LANE_1_0

// 0x0010	DME_ENC_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [27:0]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/* [27:0]     r/w   0*/
		uint8_t DME_ENC_BALANCE_CAL_EN_LANE              : 1;	/*     28     r/w   1*/
		uint8_t DME_ENC_BALANCE_INV_LANE                 : 1;	/*     29     r/w   0*/
		uint8_t DME_ENC_MODE_LANE_1_0                    : 2;	/*[31:30]     r/w 2'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_ENC_LANE_t;
__xdata __at( 0x2610 ) volatile DME_ENC_LANE_t DME_ENC_LANE;
#define reg_DME_ENC_BALANCE_CAL_EN_LANE  DME_ENC_LANE.BF.DME_ENC_BALANCE_CAL_EN_LANE
#define reg_DME_ENC_BALANCE_INV_LANE  DME_ENC_LANE.BF.DME_ENC_BALANCE_INV_LANE
#define reg_DME_ENC_MODE_LANE_1_0  DME_ENC_LANE.BF.DME_ENC_MODE_LANE_1_0

// 0x0014	DME_DEC_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:0]     r/w   0*/
		uint8_t DME_DEC_ERR_CHK_EN_LANE                  : 1;	/*     23     r/w   1*/
		uint8_t DME_DEC_RPT_TYPE_LANE                    : 1;	/*     24     r/w   1*/
		uint8_t DME_DEC_REMOTE_RD_REQ_LANE               : 1;	/*     25     r/w   1*/
		uint8_t DME_DEC_BALANCE_CHK_EN_LANE              : 1;	/*     26     r/w   1*/
		uint8_t DME_DEC_BALANCE_INV_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t DME_DEC_MODE_LANE_1_0                    : 2;	/*[29:28]     r/w   0*/
		uint8_t DME_DEC_CTRL_BIT_POS_LANE_1_0            : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DME_DEC_LANE_t;
__xdata __at( 0x2614 ) volatile DME_DEC_LANE_t DME_DEC_LANE;
#define reg_DME_DEC_ERR_CHK_EN_LANE  DME_DEC_LANE.BF.DME_DEC_ERR_CHK_EN_LANE
#define reg_DME_DEC_RPT_TYPE_LANE  DME_DEC_LANE.BF.DME_DEC_RPT_TYPE_LANE
#define reg_DME_DEC_REMOTE_RD_REQ_LANE  DME_DEC_LANE.BF.DME_DEC_REMOTE_RD_REQ_LANE
#define reg_DME_DEC_BALANCE_CHK_EN_LANE  DME_DEC_LANE.BF.DME_DEC_BALANCE_CHK_EN_LANE
#define reg_DME_DEC_BALANCE_INV_LANE  DME_DEC_LANE.BF.DME_DEC_BALANCE_INV_LANE
#define reg_DME_DEC_MODE_LANE_1_0  DME_DEC_LANE.BF.DME_DEC_MODE_LANE_1_0
#define reg_DME_DEC_CTRL_BIT_POS_LANE_1_0  DME_DEC_LANE.BF.DME_DEC_CTRL_BIT_POS_LANE_1_0

// 0x0020	TRX_TRAIN_IF_INTERRUPT_LANE		
typedef union {
	struct {
		uint8_t PIN_RX_TRAIN_ENABLE_ISR_LANE             : 1;	/*      0     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_ISR_LANE             : 1;	/*      1     r/w   0*/
		uint8_t PIN_LOCAL_CTRL_FIELD_READY_ISR_LANE      : 1;	/*      2     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_ISR_LANE          : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_ISR_LANE             : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_ISR_LANE               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DME_DEC_REMOTE_BALANCE_ERR_ISR_LANE      : 1;	/*     16     r/w   0*/
		uint8_t DME_DEC_ERROR_ISR_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_INTERRUPT_LANE_t;
__xdata __at( 0x2620 ) volatile TRX_TRAIN_IF_INTERRUPT_LANE_t TRX_TRAIN_IF_INTERRUPT_LANE;
#define reg_PIN_RX_TRAIN_ENABLE_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.PIN_RX_TRAIN_ENABLE_ISR_LANE
#define reg_PIN_TX_TRAIN_ENABLE_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.PIN_TX_TRAIN_ENABLE_ISR_LANE
#define reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.PIN_LOCAL_CTRL_FIELD_READY_ISR_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.PIN_PAPTA_TRAIN_ENABLE_ISR_LANE
#define reg_REMOTE_STATUS_VALID_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.REMOTE_STATUS_VALID_ISR_LANE
#define reg_REMOTE_CTRL_VALID_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.REMOTE_CTRL_VALID_ISR_LANE
#define reg_DME_DEC_REMOTE_BALANCE_ERR_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.DME_DEC_REMOTE_BALANCE_ERR_ISR_LANE
#define reg_DME_DEC_ERROR_ISR_LANE  TRX_TRAIN_IF_INTERRUPT_LANE.BF.DME_DEC_ERROR_ISR_LANE

// 0x0024	TRX_TRAIN_IF_INTERRUPT_MASK0_LANE		
typedef union {
	struct {
		uint8_t PIN_RX_TRAIN_ENABLE_MASK_LANE            : 1;	/*      0     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_MASK_LANE            : 1;	/*      1     r/w   0*/
		uint8_t PIN_LOCAL_CTRL_FIELD_READY_MASK_LANE     : 1;	/*      2     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_MASK_LANE         : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_MASK_LANE            : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_MASK_LANE              : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DME_DEC_REMOTE_BALANCE_ERR_MASK_LANE     : 1;	/*     16     r/w   0*/
		uint8_t DME_DEC_ERROR_MASK_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_INTERRUPT_MASK0_LANE_t;
__xdata __at( 0x2624 ) volatile TRX_TRAIN_IF_INTERRUPT_MASK0_LANE_t TRX_TRAIN_IF_INTERRUPT_MASK0_LANE;
#define reg_PIN_RX_TRAIN_ENABLE_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.PIN_RX_TRAIN_ENABLE_MASK_LANE
#define reg_PIN_TX_TRAIN_ENABLE_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.PIN_TX_TRAIN_ENABLE_MASK_LANE
#define reg_PIN_LOCAL_CTRL_FIELD_READY_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.PIN_LOCAL_CTRL_FIELD_READY_MASK_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.PIN_PAPTA_TRAIN_ENABLE_MASK_LANE
#define reg_REMOTE_STATUS_VALID_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.REMOTE_STATUS_VALID_MASK_LANE
#define reg_REMOTE_CTRL_VALID_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.REMOTE_CTRL_VALID_MASK_LANE
#define reg_DME_DEC_REMOTE_BALANCE_ERR_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.DME_DEC_REMOTE_BALANCE_ERR_MASK_LANE
#define reg_DME_DEC_ERROR_MASK_LANE  TRX_TRAIN_IF_INTERRUPT_MASK0_LANE.BF.DME_DEC_ERROR_MASK_LANE

// 0x0030	TX_TRAIN_IF_PHYTEST_CTRL		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [24:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [24:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [24:0]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/* [24:0]     r/w   0*/
		uint8_t TX_TRAIN_PAT_EN_LANE                     : 1;	/*     25     r/w   0*/
		uint8_t TX_TRAIN_PAT_TWO_ZERO_LANE               : 1;	/*     26     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_LANE                 : 1;	/*     27     r/w   1*/
		uint8_t TX_TRAIN_PAT_MODE_LANE                   : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_TRAIN_IF_PHYTEST_CTRL_t;
__xdata __at( 0x2630 ) volatile TX_TRAIN_IF_PHYTEST_CTRL_t TX_TRAIN_IF_PHYTEST_CTRL;
#define reg_TX_TRAIN_PAT_EN_LANE  TX_TRAIN_IF_PHYTEST_CTRL.BF.TX_TRAIN_PAT_EN_LANE
#define reg_TX_TRAIN_PAT_TWO_ZERO_LANE  TX_TRAIN_IF_PHYTEST_CTRL.BF.TX_TRAIN_PAT_TWO_ZERO_LANE
#define reg_TX_TRAIN_PAT_TOGGLE_LANE  TX_TRAIN_IF_PHYTEST_CTRL.BF.TX_TRAIN_PAT_TOGGLE_LANE
#define reg_TX_TRAIN_PAT_MODE_LANE  TX_TRAIN_IF_PHYTEST_CTRL.BF.TX_TRAIN_PAT_MODE_LANE

// 0x0034	LINK_TRAIN_MODE0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_LANE_3_0                   : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TX_EM_PRE_CTRL_LANE_3_0                  : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t TX_EM_PEAK_CTRL_LANE_3_0                 : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t ANA_TX_EM_PO_EN_LANE                     : 1;	/*     21     r/w   0*/
		uint8_t ANA_TX_EM_PRE_EN_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t ANA_TX_EM_PEAK_EN_LANE                   : 1;	/*     23     r/w   0*/
		uint8_t PIN_RX_PRESET_HINT_RD_LANE_3_0           : 4;	/*[27:24]       r   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_LANE                 : 1;	/*     28     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LINK_TRAIN_MODE0_t;
__xdata __at( 0x2634 ) volatile LINK_TRAIN_MODE0_t LINK_TRAIN_MODE0;
#define reg_TX_EM_PO_CTRL_LANE_3_0  LINK_TRAIN_MODE0.BF.TX_EM_PO_CTRL_LANE_3_0
#define reg_TX_EM_PRE_CTRL_LANE_3_0  LINK_TRAIN_MODE0.BF.TX_EM_PRE_CTRL_LANE_3_0
#define reg_TX_EM_PEAK_CTRL_LANE_3_0  LINK_TRAIN_MODE0.BF.TX_EM_PEAK_CTRL_LANE_3_0
#define reg_ANA_TX_EM_PO_EN_LANE  LINK_TRAIN_MODE0.BF.ANA_TX_EM_PO_EN_LANE
#define reg_ANA_TX_EM_PRE_EN_LANE  LINK_TRAIN_MODE0.BF.ANA_TX_EM_PRE_EN_LANE
#define reg_ANA_TX_EM_PEAK_EN_LANE  LINK_TRAIN_MODE0.BF.ANA_TX_EM_PEAK_EN_LANE
#define reg_PIN_RX_PRESET_HINT_RD_LANE_3_0  LINK_TRAIN_MODE0.BF.PIN_RX_PRESET_HINT_RD_LANE_3_0
#define reg_TX_EM_CTRL_PIPE_SEL_LANE  LINK_TRAIN_MODE0.BF.TX_EM_CTRL_PIPE_SEL_LANE
#define reg_TX_EM_CTRL_REG_EN_LANE  LINK_TRAIN_MODE0.BF.TX_EM_CTRL_REG_EN_LANE

// 0x0038	LINK_TRAIN_MODE1		
typedef union {
	struct {
		uint8_t TX_COEFF_RD_LANE_17_0_b0                 : 8;	/* [17:0]       r   0*/
		uint8_t TX_COEFF_RD_LANE_17_0_b1                 : 8;	/* [17:0]       r   0*/
		uint8_t TX_COEFF_RD_LANE_17_0_b2                 : 2;	/* [17:0]       r   0*/
		uint8_t ANA_TX_EM_PRE_CTRL_RD_LANE_3_0           : 4;	/*[21:18]       r   0*/
		uint8_t ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b0       : 2;	/*[25:22]       r   0*/
		uint8_t ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b1       : 2;	/*[25:22]       r   0*/
		uint8_t ANA_TX_EM_POST_CTRL_RD_LANE_3_0          : 4;	/*[29:26]       r   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LINK_TRAIN_MODE1_t;
__xdata __at( 0x2638 ) volatile LINK_TRAIN_MODE1_t LINK_TRAIN_MODE1;
#define reg_TX_COEFF_RD_LANE_17_0_b0  LINK_TRAIN_MODE1.BF.TX_COEFF_RD_LANE_17_0_b0
#define reg_TX_COEFF_RD_LANE_17_0_b1  LINK_TRAIN_MODE1.BF.TX_COEFF_RD_LANE_17_0_b1
#define reg_TX_COEFF_RD_LANE_17_0_b2  LINK_TRAIN_MODE1.BF.TX_COEFF_RD_LANE_17_0_b2
#define reg_ANA_TX_EM_PRE_CTRL_RD_LANE_3_0  LINK_TRAIN_MODE1.BF.ANA_TX_EM_PRE_CTRL_RD_LANE_3_0
#define reg_ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b0  LINK_TRAIN_MODE1.BF.ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b0
#define reg_ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b1  LINK_TRAIN_MODE1.BF.ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b1
#define reg_ANA_TX_EM_POST_CTRL_RD_LANE_3_0  LINK_TRAIN_MODE1.BF.ANA_TX_EM_POST_CTRL_RD_LANE_3_0

// 0x003c	LINK_TRAIN_MODE2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [22:0]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:0]     r/w   0*/
		uint8_t TX_SWING_RD_LANE                         : 1;	/*     23       r 1'b0*/
		uint8_t TX_EMPH_PIPE0_LANE_3_0                   : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t TX_EMPH_PIPE1_LANE_3_0                   : 4;	/*[31:28]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LINK_TRAIN_MODE2_t;
__xdata __at( 0x263c ) volatile LINK_TRAIN_MODE2_t LINK_TRAIN_MODE2;
#define reg_TX_SWING_RD_LANE  LINK_TRAIN_MODE2.BF.TX_SWING_RD_LANE
#define reg_TX_EMPH_PIPE0_LANE_3_0  LINK_TRAIN_MODE2.BF.TX_EMPH_PIPE0_LANE_3_0
#define reg_TX_EMPH_PIPE1_LANE_3_0  LINK_TRAIN_MODE2.BF.TX_EMPH_PIPE1_LANE_3_0

// 0x0040	LINK_TRAIN_MODE3		
typedef union {
	struct {
		uint8_t TX_MARGIN_V0_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t TX_MARGIN_V1_LANE_2_0                    : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t TX_MARGIN_V2_LANE_2_0_b0                 : 2;	/*  [8:6]     r/w 3'h6*/
		uint8_t TX_MARGIN_V2_LANE_2_0_b1                 : 1;	/*  [8:6]     r/w 3'h6*/
		uint8_t TX_MARGIN_V3_LANE_2_0                    : 3;	/* [11:9]     r/w 3'h5*/
		uint8_t TX_MARGIN_V4_LANE_2_0                    : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t TX_MARGIN_V5_LANE_2_0_b0                 : 1;	/*[17:15]     r/w 3'h3*/
		uint8_t TX_MARGIN_V5_LANE_2_0_b1                 : 2;	/*[17:15]     r/w 3'h3*/
		uint8_t TX_MARGIN_V6_LANE_2_0                    : 3;	/*[20:18]     r/w 3'h2*/
		uint8_t TX_MARGIN_V7_LANE_2_0                    : 3;	/*[23:21]     r/w 3'h1*/
		uint8_t TX_VREF_TXDRV_SEL_LANE_2_0               : 3;	/*[26:24]       r 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LINK_TRAIN_MODE3_t;
__xdata __at( 0x2640 ) volatile LINK_TRAIN_MODE3_t LINK_TRAIN_MODE3;
#define reg_TX_MARGIN_V0_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V0_LANE_2_0
#define reg_TX_MARGIN_V1_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V1_LANE_2_0
#define reg_TX_MARGIN_V2_LANE_2_0_b0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V2_LANE_2_0_b0
#define reg_TX_MARGIN_V2_LANE_2_0_b1  LINK_TRAIN_MODE3.BF.TX_MARGIN_V2_LANE_2_0_b1
#define reg_TX_MARGIN_V3_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V3_LANE_2_0
#define reg_TX_MARGIN_V4_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V4_LANE_2_0
#define reg_TX_MARGIN_V5_LANE_2_0_b0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V5_LANE_2_0_b0
#define reg_TX_MARGIN_V5_LANE_2_0_b1  LINK_TRAIN_MODE3.BF.TX_MARGIN_V5_LANE_2_0_b1
#define reg_TX_MARGIN_V6_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V6_LANE_2_0
#define reg_TX_MARGIN_V7_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_MARGIN_V7_LANE_2_0
#define reg_TX_VREF_TXDRV_SEL_LANE_2_0  LINK_TRAIN_MODE3.BF.TX_VREF_TXDRV_SEL_LANE_2_0

// 0x0044	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE		
typedef union {
	struct {
		uint8_t PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE       : 1;	/*      0     r/w   0*/
		uint8_t PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE       : 1;	/*      1     r/w   0*/
		uint8_t PIN_LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE : 1;	/*      2     r/w   0*/
		uint8_t PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE    : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REMOTE_STATUS_VALID_ISR_CLEAR_LANE       : 1;	/*      8     r/w   0*/
		uint8_t REMOTE_CTRL_VALID_ISR_CLEAR_LANE         : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DME_DEC_REMOTE_BALANCE_ERR_ISR_CLEAR_LANE : 1;	/*     16     r/w   0*/
		uint8_t DME_DEC_ERROR_ISR_CLEAR_LANE             : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE_t;
__xdata __at( 0x2644 ) volatile TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE_t TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE;
#define reg_PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE
#define reg_PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE
#define reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.PIN_LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE
#define reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE
#define reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_STATUS_VALID_ISR_CLEAR_LANE
#define reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.REMOTE_CTRL_VALID_ISR_CLEAR_LANE
#define reg_DME_DEC_REMOTE_BALANCE_ERR_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.DME_DEC_REMOTE_BALANCE_ERR_ISR_CLEAR_LANE
#define reg_DME_DEC_ERROR_ISR_CLEAR_LANE  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BF.DME_DEC_ERROR_ISR_CLEAR_LANE

#endif
