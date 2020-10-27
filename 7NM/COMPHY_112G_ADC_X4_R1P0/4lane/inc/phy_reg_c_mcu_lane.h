#ifndef PHY_REG_C_MCU_LANE_H
#define PHY_REG_C_MCU_LANE_H



// 0x0000	MCU_CONTROL_LANE		MCU Control Register
typedef union {
	struct {
		uint8_t MCU_ID_LANE_7_0                          : 8;	/*  [7:0]       r   0*/
		uint8_t MCU_RESTART_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [22:9]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:9]     r/w   0*/
		uint8_t SET_INT_TO_MASTER_MCU_LANE               : 1;	/*     23     r/w   0*/
		uint8_t RST_REG_CLK_LANE                         : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 2;	/*[26:25]     r/w   0*/
		uint8_t HOLDA_MCU_LANE                           : 1;	/*     27       r   0*/
		uint8_t INTOCCUS_MCU_LANE                        : 1;	/*     28       r   0*/
		uint8_t CLKCPU_EN_LANE                           : 1;	/*     29       r   0*/
		uint8_t MCU_OCDS_EN_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t MCU_TRACE_EN_LANE                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONTROL_LANE_t;
__xdata __at( 0x2200 ) volatile MCU_CONTROL_LANE_t MCU_CONTROL_LANE;
#define reg_MCU_ID_LANE_7_0  MCU_CONTROL_LANE.BF.MCU_ID_LANE_7_0
#define reg_MCU_RESTART_LANE  MCU_CONTROL_LANE.BF.MCU_RESTART_LANE
#define reg_SET_INT_TO_MASTER_MCU_LANE  MCU_CONTROL_LANE.BF.SET_INT_TO_MASTER_MCU_LANE
#define reg_RST_REG_CLK_LANE  MCU_CONTROL_LANE.BF.RST_REG_CLK_LANE
#define reg_HOLDA_MCU_LANE  MCU_CONTROL_LANE.BF.HOLDA_MCU_LANE
#define reg_INTOCCUS_MCU_LANE  MCU_CONTROL_LANE.BF.INTOCCUS_MCU_LANE
#define reg_CLKCPU_EN_LANE  MCU_CONTROL_LANE.BF.CLKCPU_EN_LANE
#define reg_MCU_OCDS_EN_LANE  MCU_CONTROL_LANE.BF.MCU_OCDS_EN_LANE
#define reg_MCU_TRACE_EN_LANE  MCU_CONTROL_LANE.BF.MCU_TRACE_EN_LANE

// 0x0004	MCU_GPIO		MCU GPIO Control Register
typedef union {
	struct {
		uint8_t PIN_GPI_RD_LANE_7_0                      : 8;	/*  [7:0]       r   0*/
		uint8_t PIN_GPO_RD_LANE_7_0                      : 8;	/* [15:8]       r   0*/
		uint8_t PIN_GPO_LANE_7_0                         : 8;	/*[23:16]     r/w   0*/
		uint8_t GPO_SEL_LANE                             : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_GPIO_t;
__xdata __at( 0x2204 ) volatile MCU_GPIO_t MCU_GPIO;
#define reg_PIN_GPI_RD_LANE_7_0  MCU_GPIO.BF.PIN_GPI_RD_LANE_7_0
#define reg_PIN_GPO_RD_LANE_7_0  MCU_GPIO.BF.PIN_GPO_RD_LANE_7_0
#define reg_PIN_GPO_LANE_7_0  MCU_GPIO.BF.PIN_GPO_LANE_7_0
#define reg_GPO_SEL_LANE  MCU_GPIO.BF.GPO_SEL_LANE

// 0x0008	CACHE_DEBUG0		Cache Control Debug Register 0
typedef union {
	struct {
		uint8_t LINE_TAG_LANE_8_0_b0                     : 8;	/*  [8:0]       r 9'h0*/
		uint8_t LINE_TAG_LANE_8_0_b1                     : 1;	/*  [8:0]       r 9'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t MEM_LINE_SEL0_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t MEM_LINE_SEL1_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 2;	/*[30:29]     r/w   0*/
		uint8_t INT_ENABLE_ALL_LANE                      : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CACHE_DEBUG0_t;
__xdata __at( 0x2208 ) volatile CACHE_DEBUG0_t CACHE_DEBUG0;
#define reg_LINE_TAG_LANE_8_0_b0  CACHE_DEBUG0.BF.LINE_TAG_LANE_8_0_b0
#define reg_LINE_TAG_LANE_8_0_b1  CACHE_DEBUG0.BF.LINE_TAG_LANE_8_0_b1
#define reg_MEM_LINE_SEL0_LANE_4_0  CACHE_DEBUG0.BF.MEM_LINE_SEL0_LANE_4_0
#define reg_MEM_LINE_SEL1_LANE_4_0  CACHE_DEBUG0.BF.MEM_LINE_SEL1_LANE_4_0
#define reg_INT_ENABLE_ALL_LANE  CACHE_DEBUG0.BF.INT_ENABLE_ALL_LANE

// 0x000c	CACHE_DEBUG1		Cache Control Debug Register 1
typedef union {
	struct {
		uint8_t MISS_LINE_SEL0_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t MISS_LINE_SEL1_LANE_4_0                  : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t LINE_TAG_SEL_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CACHE_DEBUG1_t;
__xdata __at( 0x220c ) volatile CACHE_DEBUG1_t CACHE_DEBUG1;
#define reg_MISS_LINE_SEL0_LANE_4_0  CACHE_DEBUG1.BF.MISS_LINE_SEL0_LANE_4_0
#define reg_MISS_LINE_SEL1_LANE_4_0  CACHE_DEBUG1.BF.MISS_LINE_SEL1_LANE_4_0
#define reg_LINE_TAG_SEL_LANE_4_0  CACHE_DEBUG1.BF.LINE_TAG_SEL_LANE_4_0

// 0x0010	LANE_SYSTEM0		Lane System Control
typedef union {
	struct {
		uint8_t SFT_RST_NO_REG_TX_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t SFT_RST_NO_REG_TX_FM_REG_LANE            : 1;	/*      1     r/w   0*/
		uint8_t SFT_RST_NO_REG_RX_LANE                   : 1;	/*      2     r/w   0*/
		uint8_t SFT_RST_NO_REG_RX_FM_REG_LANE            : 1;	/*      3     r/w   0*/
		uint8_t PHY_FM_RST_LANE                          : 1;	/*      4       r   0*/
		uint8_t CLEAR_PHY_FM_RST_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t INIT_DONE_LANE                           : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t MCU_SFT_RST_TRX_EN_LANE                  : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_SYSTEM0_t;
__xdata __at( 0x2210 ) volatile LANE_SYSTEM0_t LANE_SYSTEM0;
#define reg_SFT_RST_NO_REG_TX_LANE  LANE_SYSTEM0.BF.SFT_RST_NO_REG_TX_LANE
#define reg_SFT_RST_NO_REG_TX_FM_REG_LANE  LANE_SYSTEM0.BF.SFT_RST_NO_REG_TX_FM_REG_LANE
#define reg_SFT_RST_NO_REG_RX_LANE  LANE_SYSTEM0.BF.SFT_RST_NO_REG_RX_LANE
#define reg_SFT_RST_NO_REG_RX_FM_REG_LANE  LANE_SYSTEM0.BF.SFT_RST_NO_REG_RX_FM_REG_LANE
#define reg_PHY_FM_RST_LANE  LANE_SYSTEM0.BF.PHY_FM_RST_LANE
#define reg_CLEAR_PHY_FM_RST_LANE  LANE_SYSTEM0.BF.CLEAR_PHY_FM_RST_LANE
#define reg_INIT_DONE_LANE  LANE_SYSTEM0.BF.INIT_DONE_LANE
#define reg_MCU_SFT_RST_TRX_EN_LANE  LANE_SYSTEM0.BF.MCU_SFT_RST_TRX_EN_LANE

// 0x0014	MCU_INT_ALL0		MCU overall INT Control
typedef union {
	struct {
		uint8_t MCU_INT0_EN_LANE                         : 1;	/*      0     r/w   1*/
		uint8_t MCU_INT1_EN_LANE                         : 1;	/*      1     r/w   1*/
		uint8_t MCU_INT2_EN_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t MCU_INT3_EN_LANE                         : 1;	/*      3     r/w   1*/
		uint8_t MCU_INT4_EN_LANE                         : 1;	/*      4     r/w   1*/
		uint8_t MCU_INT5_EN_LANE                         : 1;	/*      5     r/w   1*/
		uint8_t MCU_INT6_EN_LANE                         : 1;	/*      6     r/w   1*/
		uint8_t MCU_INT7_EN_LANE                         : 1;	/*      7     r/w   1*/
		uint8_t MCU_INT8_EN_LANE                         : 1;	/*      8     r/w   1*/
		uint8_t MCU_INT9_EN_LANE                         : 1;	/*      9     r/w   1*/
		uint8_t MCU_INT10_EN_LANE                        : 1;	/*     10     r/w   1*/
		uint8_t MCU_INT11_EN_LANE                        : 1;	/*     11     r/w   1*/
		uint8_t MCU_INT12_EN_LANE                        : 1;	/*     12     r/w   1*/
		uint8_t PIN_PHY_INT_EN_LANE                      : 1;	/*     13     r/w   1*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT_ALL0_t;
__xdata __at( 0x2214 ) volatile MCU_INT_ALL0_t MCU_INT_ALL0;
#define reg_MCU_INT0_EN_LANE  MCU_INT_ALL0.BF.MCU_INT0_EN_LANE
#define reg_MCU_INT1_EN_LANE  MCU_INT_ALL0.BF.MCU_INT1_EN_LANE
#define reg_MCU_INT2_EN_LANE  MCU_INT_ALL0.BF.MCU_INT2_EN_LANE
#define reg_MCU_INT3_EN_LANE  MCU_INT_ALL0.BF.MCU_INT3_EN_LANE
#define reg_MCU_INT4_EN_LANE  MCU_INT_ALL0.BF.MCU_INT4_EN_LANE
#define reg_MCU_INT5_EN_LANE  MCU_INT_ALL0.BF.MCU_INT5_EN_LANE
#define reg_MCU_INT6_EN_LANE  MCU_INT_ALL0.BF.MCU_INT6_EN_LANE
#define reg_MCU_INT7_EN_LANE  MCU_INT_ALL0.BF.MCU_INT7_EN_LANE
#define reg_MCU_INT8_EN_LANE  MCU_INT_ALL0.BF.MCU_INT8_EN_LANE
#define reg_MCU_INT9_EN_LANE  MCU_INT_ALL0.BF.MCU_INT9_EN_LANE
#define reg_MCU_INT10_EN_LANE  MCU_INT_ALL0.BF.MCU_INT10_EN_LANE
#define reg_MCU_INT11_EN_LANE  MCU_INT_ALL0.BF.MCU_INT11_EN_LANE
#define reg_MCU_INT12_EN_LANE  MCU_INT_ALL0.BF.MCU_INT12_EN_LANE
#define reg_PIN_PHY_INT_EN_LANE  MCU_INT_ALL0.BF.PIN_PHY_INT_EN_LANE

// 0x0018	MCU_INT_READ0		ALL MCU int status0
typedef union {
	struct {
		uint8_t MCU_ISR0_RD_LANE_31_0_b0                 : 8;	/* [31:0]       r   0*/
		uint8_t MCU_ISR0_RD_LANE_31_0_b1                 : 8;	/* [31:0]       r   0*/
		uint8_t MCU_ISR0_RD_LANE_31_0_b2                 : 8;	/* [31:0]       r   0*/
		uint8_t MCU_ISR0_RD_LANE_31_0_b3                 : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT_READ0_t;
__xdata __at( 0x2218 ) volatile MCU_INT_READ0_t MCU_INT_READ0;
#define reg_MCU_ISR0_RD_LANE_31_0_b0  MCU_INT_READ0.BF.MCU_ISR0_RD_LANE_31_0_b0
#define reg_MCU_ISR0_RD_LANE_31_0_b1  MCU_INT_READ0.BF.MCU_ISR0_RD_LANE_31_0_b1
#define reg_MCU_ISR0_RD_LANE_31_0_b2  MCU_INT_READ0.BF.MCU_ISR0_RD_LANE_31_0_b2
#define reg_MCU_ISR0_RD_LANE_31_0_b3  MCU_INT_READ0.BF.MCU_ISR0_RD_LANE_31_0_b3

// 0x001c	MCU_INT_READ1		ALL MCU int status1
typedef union {
	struct {
		uint8_t MCU_ISR1_RD_LANE_31_0_b0                 : 8;	/* [31:0]       r   0*/
		uint8_t MCU_ISR1_RD_LANE_31_0_b1                 : 8;	/* [31:0]       r   0*/
		uint8_t MCU_ISR1_RD_LANE_31_0_b2                 : 8;	/* [31:0]       r   0*/
		uint8_t MCU_ISR1_RD_LANE_31_0_b3                 : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT_READ1_t;
__xdata __at( 0x221c ) volatile MCU_INT_READ1_t MCU_INT_READ1;
#define reg_MCU_ISR1_RD_LANE_31_0_b0  MCU_INT_READ1.BF.MCU_ISR1_RD_LANE_31_0_b0
#define reg_MCU_ISR1_RD_LANE_31_0_b1  MCU_INT_READ1.BF.MCU_ISR1_RD_LANE_31_0_b1
#define reg_MCU_ISR1_RD_LANE_31_0_b2  MCU_INT_READ1.BF.MCU_ISR1_RD_LANE_31_0_b2
#define reg_MCU_ISR1_RD_LANE_31_0_b3  MCU_INT_READ1.BF.MCU_ISR1_RD_LANE_31_0_b3

// 0x0030	MCU_STATUS0_LANE		Lane MCU Status Register 0
typedef union {
	struct {
		uint8_t MCU_STATUS0_LANE_31_0_b0                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS0_LANE_31_0_b1                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS0_LANE_31_0_b2                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS0_LANE_31_0_b3                 : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_STATUS0_LANE_t;
__xdata __at( 0x2230 ) volatile MCU_STATUS0_LANE_t MCU_STATUS0_LANE;
#define reg_MCU_STATUS0_LANE_31_0_b0  MCU_STATUS0_LANE.BF.MCU_STATUS0_LANE_31_0_b0
#define reg_MCU_STATUS0_LANE_31_0_b1  MCU_STATUS0_LANE.BF.MCU_STATUS0_LANE_31_0_b1
#define reg_MCU_STATUS0_LANE_31_0_b2  MCU_STATUS0_LANE.BF.MCU_STATUS0_LANE_31_0_b2
#define reg_MCU_STATUS0_LANE_31_0_b3  MCU_STATUS0_LANE.BF.MCU_STATUS0_LANE_31_0_b3

// 0x0034	MCU_STATUS1_LANE		Lane MCU Status Register 1
typedef union {
	struct {
		uint8_t MCU_STATUS1_LANE_31_0_b0                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS1_LANE_31_0_b1                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS1_LANE_31_0_b2                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS1_LANE_31_0_b3                 : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_STATUS1_LANE_t;
__xdata __at( 0x2234 ) volatile MCU_STATUS1_LANE_t MCU_STATUS1_LANE;
#define reg_MCU_STATUS1_LANE_31_0_b0  MCU_STATUS1_LANE.BF.MCU_STATUS1_LANE_31_0_b0
#define reg_MCU_STATUS1_LANE_31_0_b1  MCU_STATUS1_LANE.BF.MCU_STATUS1_LANE_31_0_b1
#define reg_MCU_STATUS1_LANE_31_0_b2  MCU_STATUS1_LANE.BF.MCU_STATUS1_LANE_31_0_b2
#define reg_MCU_STATUS1_LANE_31_0_b3  MCU_STATUS1_LANE.BF.MCU_STATUS1_LANE_31_0_b3

// 0x0038	MCU_STATUS2_LANE		Lane MCU Status Register 2
typedef union {
	struct {
		uint8_t MCU_STATUS2_LANE_31_0_b0                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS2_LANE_31_0_b1                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS2_LANE_31_0_b2                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS2_LANE_31_0_b3                 : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_STATUS2_LANE_t;
__xdata __at( 0x2238 ) volatile MCU_STATUS2_LANE_t MCU_STATUS2_LANE;
#define reg_MCU_STATUS2_LANE_31_0_b0  MCU_STATUS2_LANE.BF.MCU_STATUS2_LANE_31_0_b0
#define reg_MCU_STATUS2_LANE_31_0_b1  MCU_STATUS2_LANE.BF.MCU_STATUS2_LANE_31_0_b1
#define reg_MCU_STATUS2_LANE_31_0_b2  MCU_STATUS2_LANE.BF.MCU_STATUS2_LANE_31_0_b2
#define reg_MCU_STATUS2_LANE_31_0_b3  MCU_STATUS2_LANE.BF.MCU_STATUS2_LANE_31_0_b3

// 0x003c	MCU_STATUS3_LANE		Lane MCU Status Register 3
typedef union {
	struct {
		uint8_t MCU_STATUS3_LANE_31_0_b0                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS3_LANE_31_0_b1                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS3_LANE_31_0_b2                 : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_STATUS3_LANE_31_0_b3                 : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_STATUS3_LANE_t;
__xdata __at( 0x223c ) volatile MCU_STATUS3_LANE_t MCU_STATUS3_LANE;
#define reg_MCU_STATUS3_LANE_31_0_b0  MCU_STATUS3_LANE.BF.MCU_STATUS3_LANE_31_0_b0
#define reg_MCU_STATUS3_LANE_31_0_b1  MCU_STATUS3_LANE.BF.MCU_STATUS3_LANE_31_0_b1
#define reg_MCU_STATUS3_LANE_31_0_b2  MCU_STATUS3_LANE.BF.MCU_STATUS3_LANE_31_0_b2
#define reg_MCU_STATUS3_LANE_31_0_b3  MCU_STATUS3_LANE.BF.MCU_STATUS3_LANE_31_0_b3

// 0x0040	MCU_INT0_CONTROL0		MCU INT0 Control Register 0
typedef union {
	struct {
		uint8_t INT0_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT0_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT0_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT0_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT0_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT0_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT0_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT0_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT0_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT0_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT0_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT0_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT0_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT0_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT0_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT0_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT0_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT0_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT0_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT0_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT0_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT0_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT0_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT0_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT0_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT0_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT0_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT0_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT0_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT0_CONTROL0_t;
__xdata __at( 0x2240 ) volatile MCU_INT0_CONTROL0_t MCU_INT0_CONTROL0;
#define reg_INT0_PM_CHG_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_PM_CHG_INT_EN_LANE
#define reg_INT0_SPD_INT_GEN_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_SPD_INT_GEN_EN_LANE
#define reg_INT0_TIMER0_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TIMER0_INT_EN_LANE
#define reg_INT0_TIMER1_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TIMER1_INT_EN_LANE
#define reg_INT0_TIMER2_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TIMER2_INT_EN_LANE
#define reg_INT0_TIMER3_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TIMER3_INT_EN_LANE
#define reg_INT0_FRAME_UNLOCK_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT0_FRAME_LOCK_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_FRAME_LOCK_INT_EN_LANE
#define reg_INT0_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT0_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT0_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT0_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT0_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT0_DME_DEC_ERROR_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT0_MSE_LOW_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_MSE_LOW_INT_EN_LANE
#define reg_INT0_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT0_MSE_HIGH_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_MSE_HIGH_INT_EN_LANE
#define reg_INT0_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT0_MSE_DONE_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_MSE_DONE_INT_EN_LANE
#define reg_INT0_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT0_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT0_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT0_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT0_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT0_INT_CMN_IRQ_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_INT_CMN_IRQ_EN_LANE
#define reg_INT0_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT0_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT0_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT0_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT0_CONTROL0.BF.INT0_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0044	MCU_INT0_CONTROL1		MCU INT0 Control Register 1
typedef union {
	struct {
		uint8_t INT0_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT0_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT0_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT0_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT0_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT0_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT0_CONTROL1_t;
__xdata __at( 0x2244 ) volatile MCU_INT0_CONTROL1_t MCU_INT0_CONTROL1;
#define reg_INT0_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT0_CONTROL1.BF.INT0_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT0_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT0_CONTROL1.BF.INT0_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT0_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT0_CONTROL1.BF.INT0_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT0_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT0_CONTROL1.BF.INT0_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT0_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT0_CONTROL1.BF.INT0_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT0_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT0_CONTROL1.BF.INT0_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0048	MCU_INT1_CONTROL0		MCU INT1 Control Register 0
typedef union {
	struct {
		uint8_t INT1_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT1_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT1_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT1_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT1_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT1_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT1_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT1_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT1_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT1_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT1_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT1_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT1_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT1_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT1_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT1_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT1_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT1_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT1_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT1_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT1_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT1_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT1_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT1_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT1_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT1_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT1_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT1_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT1_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT1_CONTROL0_t;
__xdata __at( 0x2248 ) volatile MCU_INT1_CONTROL0_t MCU_INT1_CONTROL0;
#define reg_INT1_PM_CHG_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_PM_CHG_INT_EN_LANE
#define reg_INT1_SPD_INT_GEN_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_SPD_INT_GEN_EN_LANE
#define reg_INT1_TIMER0_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TIMER0_INT_EN_LANE
#define reg_INT1_TIMER1_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TIMER1_INT_EN_LANE
#define reg_INT1_TIMER2_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TIMER2_INT_EN_LANE
#define reg_INT1_TIMER3_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TIMER3_INT_EN_LANE
#define reg_INT1_FRAME_UNLOCK_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT1_FRAME_LOCK_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_FRAME_LOCK_INT_EN_LANE
#define reg_INT1_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT1_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT1_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT1_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT1_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT1_DME_DEC_ERROR_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT1_MSE_LOW_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_MSE_LOW_INT_EN_LANE
#define reg_INT1_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT1_MSE_HIGH_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_MSE_HIGH_INT_EN_LANE
#define reg_INT1_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT1_MSE_DONE_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_MSE_DONE_INT_EN_LANE
#define reg_INT1_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT1_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT1_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT1_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT1_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT1_INT_CMN_IRQ_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_INT_CMN_IRQ_EN_LANE
#define reg_INT1_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT1_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT1_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT1_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT1_CONTROL0.BF.INT1_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x004c	MCU_INT1_CONTROL1		MCU INT1 Control Register 1
typedef union {
	struct {
		uint8_t INT1_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT1_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT1_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT1_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT1_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT1_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT1_CONTROL1_t;
__xdata __at( 0x224c ) volatile MCU_INT1_CONTROL1_t MCU_INT1_CONTROL1;
#define reg_INT1_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT1_CONTROL1.BF.INT1_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT1_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT1_CONTROL1.BF.INT1_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT1_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT1_CONTROL1.BF.INT1_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT1_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT1_CONTROL1.BF.INT1_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT1_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT1_CONTROL1.BF.INT1_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT1_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT1_CONTROL1.BF.INT1_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0050	MCU_INT2_CONTROL0		MCU INT2 Control Register 0
typedef union {
	struct {
		uint8_t INT2_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT2_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT2_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT2_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT2_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT2_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT2_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT2_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT2_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT2_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT2_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT2_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT2_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT2_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT2_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT2_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT2_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT2_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT2_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT2_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT2_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT2_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT2_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT2_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT2_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT2_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT2_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT2_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT2_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT2_CONTROL0_t;
__xdata __at( 0x2250 ) volatile MCU_INT2_CONTROL0_t MCU_INT2_CONTROL0;
#define reg_INT2_PM_CHG_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_PM_CHG_INT_EN_LANE
#define reg_INT2_SPD_INT_GEN_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_SPD_INT_GEN_EN_LANE
#define reg_INT2_TIMER0_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TIMER0_INT_EN_LANE
#define reg_INT2_TIMER1_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TIMER1_INT_EN_LANE
#define reg_INT2_TIMER2_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TIMER2_INT_EN_LANE
#define reg_INT2_TIMER3_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TIMER3_INT_EN_LANE
#define reg_INT2_FRAME_UNLOCK_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT2_FRAME_LOCK_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_FRAME_LOCK_INT_EN_LANE
#define reg_INT2_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT2_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT2_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT2_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT2_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT2_DME_DEC_ERROR_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT2_MSE_LOW_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_MSE_LOW_INT_EN_LANE
#define reg_INT2_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT2_MSE_HIGH_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_MSE_HIGH_INT_EN_LANE
#define reg_INT2_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT2_MSE_DONE_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_MSE_DONE_INT_EN_LANE
#define reg_INT2_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT2_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT2_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT2_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT2_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT2_INT_CMN_IRQ_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_INT_CMN_IRQ_EN_LANE
#define reg_INT2_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT2_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT2_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT2_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT2_CONTROL0.BF.INT2_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0054	MCU_INT2_CONTROL1		MCU INT2 Control Register 1
typedef union {
	struct {
		uint8_t INT2_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT2_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT2_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT2_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT2_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT2_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT2_CONTROL1_t;
__xdata __at( 0x2254 ) volatile MCU_INT2_CONTROL1_t MCU_INT2_CONTROL1;
#define reg_INT2_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT2_CONTROL1.BF.INT2_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT2_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT2_CONTROL1.BF.INT2_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT2_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT2_CONTROL1.BF.INT2_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT2_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT2_CONTROL1.BF.INT2_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT2_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT2_CONTROL1.BF.INT2_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT2_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT2_CONTROL1.BF.INT2_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0058	MCU_INT3_CONTROL0		MCU INT3 Control Register 0
typedef union {
	struct {
		uint8_t INT3_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT3_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT3_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT3_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT3_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT3_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT3_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT3_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT3_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT3_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT3_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT3_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT3_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT3_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT3_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT3_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT3_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT3_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT3_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT3_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT3_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT3_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT3_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT3_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT3_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT3_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT3_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT3_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT3_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT3_CONTROL0_t;
__xdata __at( 0x2258 ) volatile MCU_INT3_CONTROL0_t MCU_INT3_CONTROL0;
#define reg_INT3_PM_CHG_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_PM_CHG_INT_EN_LANE
#define reg_INT3_SPD_INT_GEN_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_SPD_INT_GEN_EN_LANE
#define reg_INT3_TIMER0_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TIMER0_INT_EN_LANE
#define reg_INT3_TIMER1_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TIMER1_INT_EN_LANE
#define reg_INT3_TIMER2_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TIMER2_INT_EN_LANE
#define reg_INT3_TIMER3_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TIMER3_INT_EN_LANE
#define reg_INT3_FRAME_UNLOCK_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT3_FRAME_LOCK_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_FRAME_LOCK_INT_EN_LANE
#define reg_INT3_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT3_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT3_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT3_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT3_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT3_DME_DEC_ERROR_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT3_MSE_LOW_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_MSE_LOW_INT_EN_LANE
#define reg_INT3_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT3_MSE_HIGH_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_MSE_HIGH_INT_EN_LANE
#define reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT3_MSE_DONE_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_MSE_DONE_INT_EN_LANE
#define reg_INT3_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT3_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT3_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT3_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT3_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT3_INT_CMN_IRQ_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_INT_CMN_IRQ_EN_LANE
#define reg_INT3_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT3_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT3_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT3_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT3_CONTROL0.BF.INT3_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x005c	MCU_INT3_CONTROL1		MCU INT3 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT3_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT3_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT3_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT3_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT3_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT3_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT3_CONTROL1_t;
__xdata __at( 0x225c ) volatile MCU_INT3_CONTROL1_t MCU_INT3_CONTROL1;
#define reg_INT3_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT3_CONTROL1.BF.INT3_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT3_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT3_CONTROL1.BF.INT3_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT3_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT3_CONTROL1.BF.INT3_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT3_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT3_CONTROL1.BF.INT3_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT3_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT3_CONTROL1.BF.INT3_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT3_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT3_CONTROL1.BF.INT3_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0060	MCU_INT4_CONTROL0		MCU INT3 Control Register 0
typedef union {
	struct {
		uint8_t INT4_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT4_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT4_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT4_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT4_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT4_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT4_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT4_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT4_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT4_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT4_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT4_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT4_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT4_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT4_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT4_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT4_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT4_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT4_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT4_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT4_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT4_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT4_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT4_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT4_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT4_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT4_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT4_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT4_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT4_CONTROL0_t;
__xdata __at( 0x2260 ) volatile MCU_INT4_CONTROL0_t MCU_INT4_CONTROL0;
#define reg_INT4_PM_CHG_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_PM_CHG_INT_EN_LANE
#define reg_INT4_SPD_INT_GEN_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_SPD_INT_GEN_EN_LANE
#define reg_INT4_TIMER0_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TIMER0_INT_EN_LANE
#define reg_INT4_TIMER1_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TIMER1_INT_EN_LANE
#define reg_INT4_TIMER2_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TIMER2_INT_EN_LANE
#define reg_INT4_TIMER3_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TIMER3_INT_EN_LANE
#define reg_INT4_FRAME_UNLOCK_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT4_FRAME_LOCK_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_FRAME_LOCK_INT_EN_LANE
#define reg_INT4_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT4_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT4_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT4_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT4_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT4_DME_DEC_ERROR_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT4_MSE_LOW_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_MSE_LOW_INT_EN_LANE
#define reg_INT4_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT4_MSE_HIGH_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_MSE_HIGH_INT_EN_LANE
#define reg_INT4_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT4_MSE_DONE_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_MSE_DONE_INT_EN_LANE
#define reg_INT4_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT4_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT4_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT4_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT4_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT4_INT_CMN_IRQ_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_INT_CMN_IRQ_EN_LANE
#define reg_INT4_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT4_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT4_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT4_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT4_CONTROL0.BF.INT4_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0064	MCU_INT4_CONTROL1		MCU INT4 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT4_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT4_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT4_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT4_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT4_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT4_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT4_CONTROL1_t;
__xdata __at( 0x2264 ) volatile MCU_INT4_CONTROL1_t MCU_INT4_CONTROL1;
#define reg_INT4_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT4_CONTROL1.BF.INT4_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT4_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT4_CONTROL1.BF.INT4_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT4_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT4_CONTROL1.BF.INT4_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT4_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT4_CONTROL1.BF.INT4_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT4_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT4_CONTROL1.BF.INT4_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT4_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT4_CONTROL1.BF.INT4_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0068	MCU_INT5_CONTROL0		MCU INT5 Control Register 0
typedef union {
	struct {
		uint8_t INT5_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT5_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT5_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT5_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT5_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT5_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT5_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT5_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT5_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT5_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT5_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT5_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT5_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT5_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT5_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT5_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT5_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT5_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT5_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT5_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT5_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT5_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT5_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT5_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT5_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT5_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT5_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT5_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT5_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT5_CONTROL0_t;
__xdata __at( 0x2268 ) volatile MCU_INT5_CONTROL0_t MCU_INT5_CONTROL0;
#define reg_INT5_PM_CHG_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_PM_CHG_INT_EN_LANE
#define reg_INT5_SPD_INT_GEN_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_SPD_INT_GEN_EN_LANE
#define reg_INT5_TIMER0_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TIMER0_INT_EN_LANE
#define reg_INT5_TIMER1_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TIMER1_INT_EN_LANE
#define reg_INT5_TIMER2_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TIMER2_INT_EN_LANE
#define reg_INT5_TIMER3_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TIMER3_INT_EN_LANE
#define reg_INT5_FRAME_UNLOCK_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT5_FRAME_LOCK_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_FRAME_LOCK_INT_EN_LANE
#define reg_INT5_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT5_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT5_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT5_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT5_DME_DEC_ERROR_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT5_MSE_LOW_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_MSE_LOW_INT_EN_LANE
#define reg_INT5_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT5_MSE_HIGH_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_MSE_HIGH_INT_EN_LANE
#define reg_INT5_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT5_MSE_DONE_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_MSE_DONE_INT_EN_LANE
#define reg_INT5_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT5_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT5_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT5_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT5_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT5_INT_CMN_IRQ_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_INT_CMN_IRQ_EN_LANE
#define reg_INT5_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT5_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT5_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT5_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT5_CONTROL0.BF.INT5_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x006c	MCU_INT5_CONTROL1		MCU INT5 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT5_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT5_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT5_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT5_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT5_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT5_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT5_CONTROL1_t;
__xdata __at( 0x226c ) volatile MCU_INT5_CONTROL1_t MCU_INT5_CONTROL1;
#define reg_INT5_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT5_CONTROL1.BF.INT5_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT5_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT5_CONTROL1.BF.INT5_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT5_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT5_CONTROL1.BF.INT5_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT5_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT5_CONTROL1.BF.INT5_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT5_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT5_CONTROL1.BF.INT5_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT5_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT5_CONTROL1.BF.INT5_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0070	MCU_INT6_CONTROL0		MCU INT6 Control Register 0
typedef union {
	struct {
		uint8_t INT6_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT6_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT6_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT6_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT6_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT6_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT6_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT6_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT6_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT6_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT6_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT6_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT6_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT6_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT6_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT6_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT6_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT6_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT6_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT6_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT6_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT6_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT6_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT6_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT6_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT6_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT6_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT6_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT6_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT6_CONTROL0_t;
__xdata __at( 0x2270 ) volatile MCU_INT6_CONTROL0_t MCU_INT6_CONTROL0;
#define reg_INT6_PM_CHG_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_PM_CHG_INT_EN_LANE
#define reg_INT6_SPD_INT_GEN_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_SPD_INT_GEN_EN_LANE
#define reg_INT6_TIMER0_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TIMER0_INT_EN_LANE
#define reg_INT6_TIMER1_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TIMER1_INT_EN_LANE
#define reg_INT6_TIMER2_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TIMER2_INT_EN_LANE
#define reg_INT6_TIMER3_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TIMER3_INT_EN_LANE
#define reg_INT6_FRAME_UNLOCK_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT6_FRAME_LOCK_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_FRAME_LOCK_INT_EN_LANE
#define reg_INT6_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT6_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT6_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT6_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT6_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT6_DME_DEC_ERROR_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT6_MSE_LOW_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_MSE_LOW_INT_EN_LANE
#define reg_INT6_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT6_MSE_HIGH_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_MSE_HIGH_INT_EN_LANE
#define reg_INT6_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT6_MSE_DONE_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_MSE_DONE_INT_EN_LANE
#define reg_INT6_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT6_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT6_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT6_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT6_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT6_INT_CMN_IRQ_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_INT_CMN_IRQ_EN_LANE
#define reg_INT6_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT6_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT6_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT6_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT6_CONTROL0.BF.INT6_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0074	MCU_INT6_CONTROL1		MCU INT6 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT6_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT6_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT6_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT6_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT6_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT6_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT6_CONTROL1_t;
__xdata __at( 0x2274 ) volatile MCU_INT6_CONTROL1_t MCU_INT6_CONTROL1;
#define reg_INT6_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT6_CONTROL1.BF.INT6_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT6_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT6_CONTROL1.BF.INT6_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT6_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT6_CONTROL1.BF.INT6_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT6_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT6_CONTROL1.BF.INT6_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT6_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT6_CONTROL1.BF.INT6_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT6_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT6_CONTROL1.BF.INT6_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0078	MCU_INT7_CONTROL0		MCU INT7 Control Register 0
typedef union {
	struct {
		uint8_t INT7_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT7_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT7_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT7_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT7_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT7_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT7_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT7_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT7_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT7_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT7_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT7_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT7_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT7_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT7_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT7_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT7_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT7_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT7_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT7_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT7_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT7_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT7_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT7_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT7_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT7_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT7_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT7_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT7_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT7_CONTROL0_t;
__xdata __at( 0x2278 ) volatile MCU_INT7_CONTROL0_t MCU_INT7_CONTROL0;
#define reg_INT7_PM_CHG_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_PM_CHG_INT_EN_LANE
#define reg_INT7_SPD_INT_GEN_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_SPD_INT_GEN_EN_LANE
#define reg_INT7_TIMER0_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TIMER0_INT_EN_LANE
#define reg_INT7_TIMER1_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TIMER1_INT_EN_LANE
#define reg_INT7_TIMER2_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TIMER2_INT_EN_LANE
#define reg_INT7_TIMER3_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TIMER3_INT_EN_LANE
#define reg_INT7_FRAME_UNLOCK_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT7_FRAME_LOCK_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_FRAME_LOCK_INT_EN_LANE
#define reg_INT7_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT7_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT7_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT7_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT7_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT7_DME_DEC_ERROR_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT7_MSE_LOW_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_MSE_LOW_INT_EN_LANE
#define reg_INT7_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT7_MSE_HIGH_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_MSE_HIGH_INT_EN_LANE
#define reg_INT7_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT7_MSE_DONE_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_MSE_DONE_INT_EN_LANE
#define reg_INT7_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT7_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT7_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT7_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT7_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT7_INT_CMN_IRQ_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_INT_CMN_IRQ_EN_LANE
#define reg_INT7_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT7_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT7_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT7_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT7_CONTROL0.BF.INT7_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x007c	MCU_INT7_CONTROL1		MCU INT7 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT7_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT7_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT7_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT7_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT7_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT7_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT7_CONTROL1_t;
__xdata __at( 0x227c ) volatile MCU_INT7_CONTROL1_t MCU_INT7_CONTROL1;
#define reg_INT7_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT7_CONTROL1.BF.INT7_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT7_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT7_CONTROL1.BF.INT7_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT7_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT7_CONTROL1.BF.INT7_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT7_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT7_CONTROL1.BF.INT7_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT7_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT7_CONTROL1.BF.INT7_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT7_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT7_CONTROL1.BF.INT7_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0080	MCU_INT8_CONTROL0		MCU INT0 Control Register 0
typedef union {
	struct {
		uint8_t INT8_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT8_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT8_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT8_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT8_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT8_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT8_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT8_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT8_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT8_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT8_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT8_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT8_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT8_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT8_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT8_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT8_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT8_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT8_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT8_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT8_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT8_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT8_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT8_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT8_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT8_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT8_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT8_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT8_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT8_CONTROL0_t;
__xdata __at( 0x2280 ) volatile MCU_INT8_CONTROL0_t MCU_INT8_CONTROL0;
#define reg_INT8_PM_CHG_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_PM_CHG_INT_EN_LANE
#define reg_INT8_SPD_INT_GEN_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_SPD_INT_GEN_EN_LANE
#define reg_INT8_TIMER0_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TIMER0_INT_EN_LANE
#define reg_INT8_TIMER1_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TIMER1_INT_EN_LANE
#define reg_INT8_TIMER2_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TIMER2_INT_EN_LANE
#define reg_INT8_TIMER3_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TIMER3_INT_EN_LANE
#define reg_INT8_FRAME_UNLOCK_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT8_FRAME_LOCK_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_FRAME_LOCK_INT_EN_LANE
#define reg_INT8_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT8_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT8_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT8_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT8_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT8_DME_DEC_ERROR_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT8_MSE_LOW_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_MSE_LOW_INT_EN_LANE
#define reg_INT8_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT8_MSE_HIGH_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_MSE_HIGH_INT_EN_LANE
#define reg_INT8_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT8_MSE_DONE_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_MSE_DONE_INT_EN_LANE
#define reg_INT8_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT8_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT8_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT8_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT8_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT8_INT_CMN_IRQ_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_INT_CMN_IRQ_EN_LANE
#define reg_INT8_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT8_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT8_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT8_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT8_CONTROL0.BF.INT8_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0084	MCU_INT8_CONTROL1		MCU INT8 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT8_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT8_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT8_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT8_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT8_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT8_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT8_CONTROL1_t;
__xdata __at( 0x2284 ) volatile MCU_INT8_CONTROL1_t MCU_INT8_CONTROL1;
#define reg_INT8_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT8_CONTROL1.BF.INT8_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT8_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT8_CONTROL1.BF.INT8_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT8_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT8_CONTROL1.BF.INT8_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT8_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT8_CONTROL1.BF.INT8_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT8_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT8_CONTROL1.BF.INT8_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT8_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT8_CONTROL1.BF.INT8_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0088	MCU_INT9_CONTROL0		MCU INT9 Control Register 0
typedef union {
	struct {
		uint8_t INT9_PM_CHG_INT_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INT9_SPD_INT_GEN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t INT9_TIMER0_INT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t INT9_TIMER1_INT_EN_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t INT9_TIMER2_INT_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t INT9_TIMER3_INT_EN_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t INT9_FRAME_UNLOCK_INT_EN_LANE            : 1;	/*      6     r/w   0*/
		uint8_t INT9_FRAME_LOCK_INT_EN_LANE              : 1;	/*      7     r/w   0*/
		uint8_t INT9_RX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      8     r/w   0*/
		uint8_t INT9_TX_TRAIN_ENABLE_INT_EN_LANE         : 1;	/*      9     r/w   0*/
		uint8_t INT9_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT9_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT9_REMOTE_BALANCE_ERR_INT_EN_LANE      : 1;	/*     12     r/w   0*/
		uint8_t INT9_DME_DEC_ERROR_INT_EN_LANE           : 1;	/*     13     r/w   0*/
		uint8_t INT9_MSE_LOW_INT_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t INT9_PM_OTHERS_CHG_INT_EN_LANE           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT9_MSE_HIGH_INT_EN_LANE                : 1;	/*     17     r/w   0*/
		uint8_t INT9_INT_PU_IVREF_CHG_INT_EN_LANE        : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT9_MSE_DONE_INT_EN_LANE                : 1;	/*     20     r/w   0*/
		uint8_t INT9_REFCLK_DIS_EN_INT_EN_LANE           : 1;	/*     21     r/w   0*/
		uint8_t INT9_TX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT9_RX_TRAIN_DISABLE_INT_EN_LANE        : 1;	/*     24     r/w   0*/
		uint8_t INT9_TRX_TRAIN_STOP_INT_EN_LANE          : 1;	/*     25     r/w   0*/
		uint8_t INT9_TX_TRAIN_IF_RSVD_INT_EN_LANE        : 1;	/*     26     r/w   0*/
		uint8_t INT9_INT_CMN_IRQ_EN_LANE                 : 1;	/*     27     r/w   0*/
		uint8_t INT9_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     28     r/w   0*/
		uint8_t INT9_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  : 1;	/*     29     r/w   0*/
		uint8_t INT9_RX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     30     r/w   0*/
		uint8_t INT9_TX_SFT_RST_CHG_RISING_INT_EN_LANE   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT9_CONTROL0_t;
__xdata __at( 0x2288 ) volatile MCU_INT9_CONTROL0_t MCU_INT9_CONTROL0;
#define reg_INT9_PM_CHG_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_PM_CHG_INT_EN_LANE
#define reg_INT9_SPD_INT_GEN_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_SPD_INT_GEN_EN_LANE
#define reg_INT9_TIMER0_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TIMER0_INT_EN_LANE
#define reg_INT9_TIMER1_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TIMER1_INT_EN_LANE
#define reg_INT9_TIMER2_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TIMER2_INT_EN_LANE
#define reg_INT9_TIMER3_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TIMER3_INT_EN_LANE
#define reg_INT9_FRAME_UNLOCK_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT9_FRAME_LOCK_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_FRAME_LOCK_INT_EN_LANE
#define reg_INT9_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT9_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT9_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT9_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT9_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT9_DME_DEC_ERROR_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT9_MSE_LOW_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_MSE_LOW_INT_EN_LANE
#define reg_INT9_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT9_MSE_HIGH_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_MSE_HIGH_INT_EN_LANE
#define reg_INT9_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT9_MSE_DONE_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_MSE_DONE_INT_EN_LANE
#define reg_INT9_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT9_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT9_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT9_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT9_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT9_INT_CMN_IRQ_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_INT_CMN_IRQ_EN_LANE
#define reg_INT9_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT9_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT9_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT9_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT9_CONTROL0.BF.INT9_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x008c	MCU_INT9_CONTROL1		MCU INT9 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT9_PU_PLL_OR_CHG_FALLING_INT_EN_LANE   : 1;	/*      0     r/w   0*/
		uint8_t INT9_PU_PLL_OR_CHG_RISING_INT_EN_LANE    : 1;	/*      1     r/w   0*/
		uint8_t INT9_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  : 1;	/*      2     r/w   0*/
		uint8_t INT9_REFCLK_DIS_CHG_RISING_INT_EN_LANE   : 1;	/*      3     r/w   0*/
		uint8_t INT9_RX_INIT_CHG_FALLING_INT_EN_LANE     : 1;	/*      4     r/w   0*/
		uint8_t INT9_RX_INIT_CHG_RISING_INT_EN_LANE      : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT9_CONTROL1_t;
__xdata __at( 0x228c ) volatile MCU_INT9_CONTROL1_t MCU_INT9_CONTROL1;
#define reg_INT9_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_INT9_CONTROL1.BF.INT9_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT9_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_INT9_CONTROL1.BF.INT9_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT9_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_INT9_CONTROL1.BF.INT9_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT9_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_INT9_CONTROL1.BF.INT9_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT9_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_INT9_CONTROL1.BF.INT9_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT9_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_INT9_CONTROL1.BF.INT9_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0090	MCU_INT10_CONTROL0		MCU INT10 Control Register 0
typedef union {
	struct {
		uint8_t INT10_PM_CHG_INT_EN_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t INT10_SPD_INT_GEN_EN_LANE                : 1;	/*      1     r/w   0*/
		uint8_t INT10_TIMER0_INT_EN_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t INT10_TIMER1_INT_EN_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t INT10_TIMER2_INT_EN_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t INT10_TIMER3_INT_EN_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t INT10_FRAME_UNLOCK_INT_EN_LANE           : 1;	/*      6     r/w   0*/
		uint8_t INT10_FRAME_LOCK_INT_EN_LANE             : 1;	/*      7     r/w   0*/
		uint8_t INT10_RX_TRAIN_ENABLE_INT_EN_LANE        : 1;	/*      8     r/w   0*/
		uint8_t INT10_TX_TRAIN_ENABLE_INT_EN_LANE        : 1;	/*      9     r/w   0*/
		uint8_t INT10_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT10_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT10_REMOTE_BALANCE_ERR_INT_EN_LANE     : 1;	/*     12     r/w   0*/
		uint8_t INT10_DME_DEC_ERROR_INT_EN_LANE          : 1;	/*     13     r/w   0*/
		uint8_t INT10_MSE_LOW_INT_EN_LANE                : 1;	/*     14     r/w   0*/
		uint8_t INT10_PM_OTHERS_CHG_INT_EN_LANE          : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT10_MSE_HIGH_INT_EN_LANE               : 1;	/*     17     r/w   0*/
		uint8_t INT10_INT_PU_IVREF_CHG_INT_EN_LANE       : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT10_MSE_DONE_INT_EN_LANE               : 1;	/*     20     r/w   0*/
		uint8_t INT10_REFCLK_DIS_EN_INT_EN_LANE          : 1;	/*     21     r/w   0*/
		uint8_t INT10_TX_TRAIN_DISABLE_INT_EN_LANE       : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT10_RX_TRAIN_DISABLE_INT_EN_LANE       : 1;	/*     24     r/w   0*/
		uint8_t INT10_TRX_TRAIN_STOP_INT_EN_LANE         : 1;	/*     25     r/w   0*/
		uint8_t INT10_TX_TRAIN_IF_RSVD_INT_EN_LANE       : 1;	/*     26     r/w   0*/
		uint8_t INT10_INT_CMN_IRQ_EN_LANE                : 1;	/*     27     r/w   0*/
		uint8_t INT10_RX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     28     r/w   0*/
		uint8_t INT10_TX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     29     r/w   0*/
		uint8_t INT10_RX_SFT_RST_CHG_RISING_INT_EN_LANE  : 1;	/*     30     r/w   0*/
		uint8_t INT10_TX_SFT_RST_CHG_RISING_INT_EN_LANE  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT10_CONTROL0_t;
__xdata __at( 0x2290 ) volatile MCU_INT10_CONTROL0_t MCU_INT10_CONTROL0;
#define reg_INT10_PM_CHG_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_PM_CHG_INT_EN_LANE
#define reg_INT10_SPD_INT_GEN_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_SPD_INT_GEN_EN_LANE
#define reg_INT10_TIMER0_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TIMER0_INT_EN_LANE
#define reg_INT10_TIMER1_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TIMER1_INT_EN_LANE
#define reg_INT10_TIMER2_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TIMER2_INT_EN_LANE
#define reg_INT10_TIMER3_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TIMER3_INT_EN_LANE
#define reg_INT10_FRAME_UNLOCK_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT10_FRAME_LOCK_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_FRAME_LOCK_INT_EN_LANE
#define reg_INT10_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT10_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT10_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT10_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT10_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT10_DME_DEC_ERROR_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT10_MSE_LOW_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_MSE_LOW_INT_EN_LANE
#define reg_INT10_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT10_MSE_HIGH_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_MSE_HIGH_INT_EN_LANE
#define reg_INT10_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT10_MSE_DONE_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_MSE_DONE_INT_EN_LANE
#define reg_INT10_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT10_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT10_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT10_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT10_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT10_INT_CMN_IRQ_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_INT_CMN_IRQ_EN_LANE
#define reg_INT10_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT10_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT10_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT10_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT10_CONTROL0.BF.INT10_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0094	MCU_10_CONTROL1		MCU INT10 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT10_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  : 1;	/*      0     r/w   0*/
		uint8_t INT10_PU_PLL_OR_CHG_RISING_INT_EN_LANE   : 1;	/*      1     r/w   0*/
		uint8_t INT10_REFCLK_DIS_CHG_FALLING_INT_EN_LANE : 1;	/*      2     r/w   0*/
		uint8_t INT10_REFCLK_DIS_CHG_RISING_INT_EN_LANE  : 1;	/*      3     r/w   0*/
		uint8_t INT10_RX_INIT_CHG_FALLING_INT_EN_LANE    : 1;	/*      4     r/w   0*/
		uint8_t INT10_RX_INIT_CHG_RISING_INT_EN_LANE     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_10_CONTROL1_t;
__xdata __at( 0x2294 ) volatile MCU_10_CONTROL1_t MCU_10_CONTROL1;
#define reg_INT10_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_10_CONTROL1.BF.INT10_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT10_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_10_CONTROL1.BF.INT10_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT10_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_10_CONTROL1.BF.INT10_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT10_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_10_CONTROL1.BF.INT10_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT10_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_10_CONTROL1.BF.INT10_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT10_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_10_CONTROL1.BF.INT10_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0098	MCU_INT11_CONTROL0		MCU INT11 Control Register 0
typedef union {
	struct {
		uint8_t INT11_PM_CHG_INT_EN_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t INT11_SPD_INT_GEN_EN_LANE                : 1;	/*      1     r/w   0*/
		uint8_t INT11_TIMER0_INT_EN_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t INT11_TIMER1_INT_EN_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t INT11_TIMER2_INT_EN_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t INT11_TIMER3_INT_EN_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t INT11_FRAME_UNLOCK_INT_EN_LANE           : 1;	/*      6     r/w   0*/
		uint8_t INT11_FRAME_LOCK_INT_EN_LANE             : 1;	/*      7     r/w   0*/
		uint8_t INT11_RX_TRAIN_ENABLE_INT_EN_LANE        : 1;	/*      8     r/w   0*/
		uint8_t INT11_TX_TRAIN_ENABLE_INT_EN_LANE        : 1;	/*      9     r/w   0*/
		uint8_t INT11_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT11_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT11_REMOTE_BALANCE_ERR_INT_EN_LANE     : 1;	/*     12     r/w   0*/
		uint8_t INT11_DME_DEC_ERROR_INT_EN_LANE          : 1;	/*     13     r/w   0*/
		uint8_t INT11_MSE_LOW_INT_EN_LANE                : 1;	/*     14     r/w   0*/
		uint8_t INT11_PM_OTHERS_CHG_INT_EN_LANE          : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT11_MSE_HIGH_INT_EN_LANE               : 1;	/*     17     r/w   0*/
		uint8_t INT11_INT_PU_IVREF_CHG_INT_EN_LANE       : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT11_MSE_DONE_INT_EN_LANE               : 1;	/*     20     r/w   0*/
		uint8_t INT11_REFCLK_DIS_EN_INT_EN_LANE          : 1;	/*     21     r/w   0*/
		uint8_t INT11_TX_TRAIN_DISABLE_INT_EN_LANE       : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT11_RX_TRAIN_DISABLE_INT_EN_LANE       : 1;	/*     24     r/w   0*/
		uint8_t INT11_TRX_TRAIN_STOP_INT_EN_LANE         : 1;	/*     25     r/w   0*/
		uint8_t INT11_TX_TRAIN_IF_RSVD_INT_EN_LANE       : 1;	/*     26     r/w   0*/
		uint8_t INT11_INT_CMN_IRQ_EN_LANE                : 1;	/*     27     r/w   0*/
		uint8_t INT11_RX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     28     r/w   0*/
		uint8_t INT11_TX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     29     r/w   0*/
		uint8_t INT11_RX_SFT_RST_CHG_RISING_INT_EN_LANE  : 1;	/*     30     r/w   0*/
		uint8_t INT11_TX_SFT_RST_CHG_RISING_INT_EN_LANE  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT11_CONTROL0_t;
__xdata __at( 0x2298 ) volatile MCU_INT11_CONTROL0_t MCU_INT11_CONTROL0;
#define reg_INT11_PM_CHG_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_PM_CHG_INT_EN_LANE
#define reg_INT11_SPD_INT_GEN_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_SPD_INT_GEN_EN_LANE
#define reg_INT11_TIMER0_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TIMER0_INT_EN_LANE
#define reg_INT11_TIMER1_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TIMER1_INT_EN_LANE
#define reg_INT11_TIMER2_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TIMER2_INT_EN_LANE
#define reg_INT11_TIMER3_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TIMER3_INT_EN_LANE
#define reg_INT11_FRAME_UNLOCK_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT11_FRAME_LOCK_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_FRAME_LOCK_INT_EN_LANE
#define reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT11_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT11_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT11_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT11_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT11_DME_DEC_ERROR_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT11_MSE_LOW_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_MSE_LOW_INT_EN_LANE
#define reg_INT11_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT11_MSE_HIGH_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_MSE_HIGH_INT_EN_LANE
#define reg_INT11_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT11_MSE_DONE_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_MSE_DONE_INT_EN_LANE
#define reg_INT11_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT11_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT11_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT11_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT11_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT11_INT_CMN_IRQ_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_INT_CMN_IRQ_EN_LANE
#define reg_INT11_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT11_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT11_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT11_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT11_CONTROL0.BF.INT11_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x009c	MCU_11_CONTROL1		MCU INT11 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT11_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  : 1;	/*      0     r/w   0*/
		uint8_t INT11_PU_PLL_OR_CHG_RISING_INT_EN_LANE   : 1;	/*      1     r/w   0*/
		uint8_t INT11_REFCLK_DIS_CHG_FALLING_INT_EN_LANE : 1;	/*      2     r/w   0*/
		uint8_t INT11_REFCLK_DIS_CHG_RISING_INT_EN_LANE  : 1;	/*      3     r/w   0*/
		uint8_t INT11_RX_INIT_CHG_FALLING_INT_EN_LANE    : 1;	/*      4     r/w   0*/
		uint8_t INT11_RX_INIT_CHG_RISING_INT_EN_LANE     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_11_CONTROL1_t;
__xdata __at( 0x229c ) volatile MCU_11_CONTROL1_t MCU_11_CONTROL1;
#define reg_INT11_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_11_CONTROL1.BF.INT11_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT11_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_11_CONTROL1.BF.INT11_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT11_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_11_CONTROL1.BF.INT11_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT11_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_11_CONTROL1.BF.INT11_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT11_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_11_CONTROL1.BF.INT11_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT11_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_11_CONTROL1.BF.INT11_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x00a0	MCU_INT12_CONTROL0		MCU INT12 Control Register 0
typedef union {
	struct {
		uint8_t INT12_PM_CHG_INT_EN_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t INT12_SPD_INT_GEN_EN_LANE                : 1;	/*      1     r/w   0*/
		uint8_t INT12_TIMER0_INT_EN_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t INT12_TIMER1_INT_EN_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t INT12_TIMER2_INT_EN_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t INT12_TIMER3_INT_EN_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t INT12_FRAME_UNLOCK_INT_EN_LANE           : 1;	/*      6     r/w   0*/
		uint8_t INT12_FRAME_LOCK_INT_EN_LANE             : 1;	/*      7     r/w   0*/
		uint8_t INT12_RX_TRAIN_ENABLE_INT_EN_LANE        : 1;	/*      8     r/w   0*/
		uint8_t INT12_TX_TRAIN_ENABLE_INT_EN_LANE        : 1;	/*      9     r/w   0*/
		uint8_t INT12_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t INT12_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t INT12_REMOTE_BALANCE_ERR_INT_EN_LANE     : 1;	/*     12     r/w   0*/
		uint8_t INT12_DME_DEC_ERROR_INT_EN_LANE          : 1;	/*     13     r/w   0*/
		uint8_t INT12_MSE_LOW_INT_EN_LANE                : 1;	/*     14     r/w   0*/
		uint8_t INT12_PM_OTHERS_CHG_INT_EN_LANE          : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t INT12_MSE_HIGH_INT_EN_LANE               : 1;	/*     17     r/w   0*/
		uint8_t INT12_INT_PU_IVREF_CHG_INT_EN_LANE       : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t INT12_MSE_DONE_INT_EN_LANE               : 1;	/*     20     r/w   0*/
		uint8_t INT12_REFCLK_DIS_EN_INT_EN_LANE          : 1;	/*     21     r/w   0*/
		uint8_t INT12_TX_TRAIN_DISABLE_INT_EN_LANE       : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t INT12_RX_TRAIN_DISABLE_INT_EN_LANE       : 1;	/*     24     r/w   0*/
		uint8_t INT12_TRX_TRAIN_STOP_INT_EN_LANE         : 1;	/*     25     r/w   0*/
		uint8_t INT12_TX_TRAIN_IF_RSVD_INT_EN_LANE       : 1;	/*     26     r/w   0*/
		uint8_t INT12_INT_CMN_IRQ_EN_LANE                : 1;	/*     27     r/w   0*/
		uint8_t INT12_RX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     28     r/w   0*/
		uint8_t INT12_TX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     29     r/w   0*/
		uint8_t INT12_RX_SFT_RST_CHG_RISING_INT_EN_LANE  : 1;	/*     30     r/w   0*/
		uint8_t INT12_TX_SFT_RST_CHG_RISING_INT_EN_LANE  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_INT12_CONTROL0_t;
__xdata __at( 0x22a0 ) volatile MCU_INT12_CONTROL0_t MCU_INT12_CONTROL0;
#define reg_INT12_PM_CHG_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_PM_CHG_INT_EN_LANE
#define reg_INT12_SPD_INT_GEN_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_SPD_INT_GEN_EN_LANE
#define reg_INT12_TIMER0_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TIMER0_INT_EN_LANE
#define reg_INT12_TIMER1_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TIMER1_INT_EN_LANE
#define reg_INT12_TIMER2_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TIMER2_INT_EN_LANE
#define reg_INT12_TIMER3_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TIMER3_INT_EN_LANE
#define reg_INT12_FRAME_UNLOCK_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_FRAME_UNLOCK_INT_EN_LANE
#define reg_INT12_FRAME_LOCK_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_FRAME_LOCK_INT_EN_LANE
#define reg_INT12_RX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT12_TX_TRAIN_ENABLE_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_INT12_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT12_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_INT12_REMOTE_BALANCE_ERR_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_INT12_DME_DEC_ERROR_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_DME_DEC_ERROR_INT_EN_LANE
#define reg_INT12_MSE_LOW_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_MSE_LOW_INT_EN_LANE
#define reg_INT12_PM_OTHERS_CHG_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_PM_OTHERS_CHG_INT_EN_LANE
#define reg_INT12_MSE_HIGH_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_MSE_HIGH_INT_EN_LANE
#define reg_INT12_INT_PU_IVREF_CHG_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_INT12_MSE_DONE_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_MSE_DONE_INT_EN_LANE
#define reg_INT12_REFCLK_DIS_EN_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_REFCLK_DIS_EN_INT_EN_LANE
#define reg_INT12_TX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT12_RX_TRAIN_DISABLE_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_INT12_TRX_TRAIN_STOP_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_INT12_TX_TRAIN_IF_RSVD_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_INT12_INT_CMN_IRQ_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_INT_CMN_IRQ_EN_LANE
#define reg_INT12_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT12_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_INT12_RX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_INT12_TX_SFT_RST_CHG_RISING_INT_EN_LANE  MCU_INT12_CONTROL0.BF.INT12_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x00a4	MCU_12_CONTROL1		MCU INT12 Ctrol Register 1
typedef union {
	struct {
		uint8_t INT12_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  : 1;	/*      0     r/w   0*/
		uint8_t INT12_PU_PLL_OR_CHG_RISING_INT_EN_LANE   : 1;	/*      1     r/w   0*/
		uint8_t INT12_REFCLK_DIS_CHG_FALLING_INT_EN_LANE : 1;	/*      2     r/w   0*/
		uint8_t INT12_REFCLK_DIS_CHG_RISING_INT_EN_LANE  : 1;	/*      3     r/w   0*/
		uint8_t INT12_RX_INIT_CHG_FALLING_INT_EN_LANE    : 1;	/*      4     r/w   0*/
		uint8_t INT12_RX_INIT_CHG_RISING_INT_EN_LANE     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_12_CONTROL1_t;
__xdata __at( 0x22a4 ) volatile MCU_12_CONTROL1_t MCU_12_CONTROL1;
#define reg_INT12_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  MCU_12_CONTROL1.BF.INT12_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_INT12_PU_PLL_OR_CHG_RISING_INT_EN_LANE  MCU_12_CONTROL1.BF.INT12_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_INT12_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  MCU_12_CONTROL1.BF.INT12_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_INT12_REFCLK_DIS_CHG_RISING_INT_EN_LANE  MCU_12_CONTROL1.BF.INT12_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_INT12_RX_INIT_CHG_FALLING_INT_EN_LANE  MCU_12_CONTROL1.BF.INT12_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_INT12_RX_INIT_CHG_RISING_INT_EN_LANE  MCU_12_CONTROL1.BF.INT12_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x00a8	MCU_TIMER_CONTROL		MCU Ext Timer Control Register 0
typedef union {
	struct {
		uint8_t TIMER_0_EN_LANE                          : 1;	/*      0     r/w   0*/
		uint8_t TIMER_1_EN_LANE                          : 1;	/*      1     r/w   0*/
		uint8_t TIMER_2_EN_LANE                          : 1;	/*      2     r/w   0*/
		uint8_t TIMER_3_EN_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t SWD_LANE                                 : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/* [31:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:5]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:5]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:5]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CONTROL_t;
__xdata __at( 0x22a8 ) volatile MCU_TIMER_CONTROL_t MCU_TIMER_CONTROL;
#define reg_TIMER_0_EN_LANE  MCU_TIMER_CONTROL.BF.TIMER_0_EN_LANE
#define reg_TIMER_1_EN_LANE  MCU_TIMER_CONTROL.BF.TIMER_1_EN_LANE
#define reg_TIMER_2_EN_LANE  MCU_TIMER_CONTROL.BF.TIMER_2_EN_LANE
#define reg_TIMER_3_EN_LANE  MCU_TIMER_CONTROL.BF.TIMER_3_EN_LANE
#define reg_SWD_LANE  MCU_TIMER_CONTROL.BF.SWD_LANE

// 0x00ac	MCU_TIMER0_CONTROL		MCU Ext Timer Control Register 1
typedef union {
	struct {
		uint8_t TIMER0_HI_CNT_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER0_HI_CNT_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER0_LO_CNT_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER0_LO_CNT_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_TIMER0_CONTROL_t;
__xdata __at( 0x22ac ) volatile MCU_TIMER0_CONTROL_t MCU_TIMER0_CONTROL;
#define reg_TIMER0_HI_CNT_LANE_15_0_b0  MCU_TIMER0_CONTROL.BF.TIMER0_HI_CNT_LANE_15_0_b0
#define reg_TIMER0_HI_CNT_LANE_15_0_b1  MCU_TIMER0_CONTROL.BF.TIMER0_HI_CNT_LANE_15_0_b1
#define reg_TIMER0_LO_CNT_LANE_15_0_b0  MCU_TIMER0_CONTROL.BF.TIMER0_LO_CNT_LANE_15_0_b0
#define reg_TIMER0_LO_CNT_LANE_15_0_b1  MCU_TIMER0_CONTROL.BF.TIMER0_LO_CNT_LANE_15_0_b1
#define reg_TIMER0_HI_CNT_LANE_15_0  MCU_TIMER0_CONTROL.WT.W0
#define reg_TIMER0_LO_CNT_LANE_15_0  MCU_TIMER0_CONTROL.WT.W1

// 0x00b0	MCU_TIMER1_CONTROL		MCU Ext Timer Control Register 2
typedef union {
	struct {
		uint8_t TIMER1_HI_CNT_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER1_HI_CNT_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER1_LO_CNT_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER1_LO_CNT_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_TIMER1_CONTROL_t;
__xdata __at( 0x22b0 ) volatile MCU_TIMER1_CONTROL_t MCU_TIMER1_CONTROL;
#define reg_TIMER1_HI_CNT_LANE_15_0_b0  MCU_TIMER1_CONTROL.BF.TIMER1_HI_CNT_LANE_15_0_b0
#define reg_TIMER1_HI_CNT_LANE_15_0_b1  MCU_TIMER1_CONTROL.BF.TIMER1_HI_CNT_LANE_15_0_b1
#define reg_TIMER1_LO_CNT_LANE_15_0_b0  MCU_TIMER1_CONTROL.BF.TIMER1_LO_CNT_LANE_15_0_b0
#define reg_TIMER1_LO_CNT_LANE_15_0_b1  MCU_TIMER1_CONTROL.BF.TIMER1_LO_CNT_LANE_15_0_b1
#define reg_TIMER1_HI_CNT_LANE_15_0  MCU_TIMER1_CONTROL.WT.W0
#define reg_TIMER1_LO_CNT_LANE_15_0  MCU_TIMER1_CONTROL.WT.W1

// 0x00b4	MCU_TIMER2_CONTROL		MCU Ext Timer Control Register 3
typedef union {
	struct {
		uint8_t TIMER2_HI_CNT_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER2_HI_CNT_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER2_LO_CNT_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER2_LO_CNT_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_TIMER2_CONTROL_t;
__xdata __at( 0x22b4 ) volatile MCU_TIMER2_CONTROL_t MCU_TIMER2_CONTROL;
#define reg_TIMER2_HI_CNT_LANE_15_0_b0  MCU_TIMER2_CONTROL.BF.TIMER2_HI_CNT_LANE_15_0_b0
#define reg_TIMER2_HI_CNT_LANE_15_0_b1  MCU_TIMER2_CONTROL.BF.TIMER2_HI_CNT_LANE_15_0_b1
#define reg_TIMER2_LO_CNT_LANE_15_0_b0  MCU_TIMER2_CONTROL.BF.TIMER2_LO_CNT_LANE_15_0_b0
#define reg_TIMER2_LO_CNT_LANE_15_0_b1  MCU_TIMER2_CONTROL.BF.TIMER2_LO_CNT_LANE_15_0_b1
#define reg_TIMER2_HI_CNT_LANE_15_0  MCU_TIMER2_CONTROL.WT.W0
#define reg_TIMER2_LO_CNT_LANE_15_0  MCU_TIMER2_CONTROL.WT.W1

// 0x00b8	MCU_TIMER3_CONTROL		MCU Ext Timer Control Register 4
typedef union {
	struct {
		uint8_t TIMER3_HI_CNT_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER3_HI_CNT_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER3_LO_CNT_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER3_LO_CNT_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_TIMER3_CONTROL_t;
__xdata __at( 0x22b8 ) volatile MCU_TIMER3_CONTROL_t MCU_TIMER3_CONTROL;
#define reg_TIMER3_HI_CNT_LANE_15_0_b0  MCU_TIMER3_CONTROL.BF.TIMER3_HI_CNT_LANE_15_0_b0
#define reg_TIMER3_HI_CNT_LANE_15_0_b1  MCU_TIMER3_CONTROL.BF.TIMER3_HI_CNT_LANE_15_0_b1
#define reg_TIMER3_LO_CNT_LANE_15_0_b0  MCU_TIMER3_CONTROL.BF.TIMER3_LO_CNT_LANE_15_0_b0
#define reg_TIMER3_LO_CNT_LANE_15_0_b1  MCU_TIMER3_CONTROL.BF.TIMER3_LO_CNT_LANE_15_0_b1
#define reg_TIMER3_HI_CNT_LANE_15_0  MCU_TIMER3_CONTROL.WT.W0
#define reg_TIMER3_LO_CNT_LANE_15_0  MCU_TIMER3_CONTROL.WT.W1

// 0x00bc	MCU_IRQ_LANE		MCU Ext Timer Control Register 5
typedef union {
	struct {
		uint8_t INT_TIMER0_ISR_LANE                      : 1;	/*      0     r/w   0*/
		uint8_t INT_TIMER1_ISR_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t INT_TIMER2_ISR_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t INT_TIMER3_ISR_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t INT_CMN_ISR_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_IRQ_LANE_t;
__xdata __at( 0x22bc ) volatile MCU_IRQ_LANE_t MCU_IRQ_LANE;
#define reg_INT_TIMER0_ISR_LANE  MCU_IRQ_LANE.BF.INT_TIMER0_ISR_LANE
#define reg_INT_TIMER1_ISR_LANE  MCU_IRQ_LANE.BF.INT_TIMER1_ISR_LANE
#define reg_INT_TIMER2_ISR_LANE  MCU_IRQ_LANE.BF.INT_TIMER2_ISR_LANE
#define reg_INT_TIMER3_ISR_LANE  MCU_IRQ_LANE.BF.INT_TIMER3_ISR_LANE
#define reg_INT_CMN_ISR_LANE  MCU_IRQ_LANE.BF.INT_CMN_ISR_LANE

// 0x00c0	MCU_IRQ_MASK_LANE		MCU Ext Timer Control Register 6
typedef union {
	struct {
		uint8_t INT_TIMER0_MASK_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t INT_TIMER1_MASK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t INT_TIMER2_MASK_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t INT_TIMER3_MASK_LANE                     : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t INT_CMN_MASK_LANE                        : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_IRQ_MASK_LANE_t;
__xdata __at( 0x22c0 ) volatile MCU_IRQ_MASK_LANE_t MCU_IRQ_MASK_LANE;
#define reg_INT_TIMER0_MASK_LANE  MCU_IRQ_MASK_LANE.BF.INT_TIMER0_MASK_LANE
#define reg_INT_TIMER1_MASK_LANE  MCU_IRQ_MASK_LANE.BF.INT_TIMER1_MASK_LANE
#define reg_INT_TIMER2_MASK_LANE  MCU_IRQ_MASK_LANE.BF.INT_TIMER2_MASK_LANE
#define reg_INT_TIMER3_MASK_LANE  MCU_IRQ_MASK_LANE.BF.INT_TIMER3_MASK_LANE
#define reg_INT_CMN_MASK_LANE  MCU_IRQ_MASK_LANE.BF.INT_CMN_MASK_LANE

// 0x00c4	MCU_MEM_REG1_LANE		Lane Memory Control Register 0
typedef union {
	struct {
		uint8_t XRAM_WTSEL_LANE_1_0                      : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t XRAM_RTSEL_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w   0*/
		uint8_t IRAM_WTSEL_LANE_1_0                      : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t IRAM_RTSEL_LANE_1_0                      : 2;	/*[19:18]     r/w 2'h2*/
		uint8_t RESERVED_20                              : 4;	/*[28:20]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:20]     r/w   0*/
		uint8_t SRAM_SD_FORCE_DISABLE_LANE               : 1;	/*     29     r/w 1'b0*/
		uint8_t SRAM_CEB_FORCE_ENABLE_LANE               : 1;	/*     30     r/w 1'b0*/
		uint8_t XDATA_AUTO_CLEAR_ENABLE_LANE             : 1;	/*     31     r/w 1'b1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_MEM_REG1_LANE_t;
__xdata __at( 0x22c4 ) volatile MCU_MEM_REG1_LANE_t MCU_MEM_REG1_LANE;
#define reg_XRAM_WTSEL_LANE_1_0  MCU_MEM_REG1_LANE.BF.XRAM_WTSEL_LANE_1_0
#define reg_XRAM_RTSEL_LANE_1_0  MCU_MEM_REG1_LANE.BF.XRAM_RTSEL_LANE_1_0
#define reg_IRAM_WTSEL_LANE_1_0  MCU_MEM_REG1_LANE.BF.IRAM_WTSEL_LANE_1_0
#define reg_IRAM_RTSEL_LANE_1_0  MCU_MEM_REG1_LANE.BF.IRAM_RTSEL_LANE_1_0
#define reg_SRAM_SD_FORCE_DISABLE_LANE  MCU_MEM_REG1_LANE.BF.SRAM_SD_FORCE_DISABLE_LANE
#define reg_SRAM_CEB_FORCE_ENABLE_LANE  MCU_MEM_REG1_LANE.BF.SRAM_CEB_FORCE_ENABLE_LANE
#define reg_XDATA_AUTO_CLEAR_ENABLE_LANE  MCU_MEM_REG1_LANE.BF.XDATA_AUTO_CLEAR_ENABLE_LANE

// 0x00c8	MCU_MEM_REG2_LANE		Lane Memory Control Register 1
typedef union {
	struct {
		uint8_t CACHE_WTSEL_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CACHE_RTSEL_LANE_1_0                     : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t XDATA_ECC_1ERR_LANE                      : 1;	/*      4       r   0*/
		uint8_t CACHE_ECC_1ERR_LANE                      : 1;	/*      5       r   0*/
		uint8_t IRAM_ECC_1ERR_LANE                       : 1;	/*      6       r   0*/
		uint8_t XDATA_ECC_2ERR_LANE                      : 1;	/*      7       r   0*/
		uint8_t CACHE_ECC_2ERR_LANE                      : 1;	/*      8       r   0*/
		uint8_t IRAM_ECC_2ERR_LANE                       : 1;	/*      9       r   0*/
		uint8_t XDATA_ECC_1ERR_ENABLE_LANE               : 1;	/*     10     r/w   0*/
		uint8_t CACHE_ECC_1ERR_ENABLE_LANE               : 1;	/*     11     r/w   0*/
		uint8_t IRAM_ECC_1ERR_ENABLE_LANE                : 1;	/*     12     r/w   0*/
		uint8_t XDATA_ECC_2ERR_ENABLE_LANE               : 1;	/*     13     r/w   0*/
		uint8_t CACHE_ECC_2ERR_ENABLE_LANE               : 1;	/*     14     r/w   0*/
		uint8_t IRAM_ECC_2ERR_ENABLE_LANE                : 1;	/*     15     r/w   0*/
		uint8_t XDATA_ECC_1ERR_CLEAR_LANE                : 1;	/*     16     r/w   0*/
		uint8_t CACHE_ECC_1ERR_CLEAR_LANE                : 1;	/*     17     r/w   0*/
		uint8_t IRAM_ECC_1ERR_CLEAR_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t XDATA_ECC_2ERR_CLEAR_LANE                : 1;	/*     19     r/w   0*/
		uint8_t CACHE_ECC_2ERR_CLEAR_LANE                : 1;	/*     20     r/w   0*/
		uint8_t IRAM_ECC_2ERR_CLEAR_LANE                 : 1;	/*     21     r/w   0*/
		uint8_t XDATA_ECC_1ERR_SET_LANE                  : 1;	/*     22     r/w   0*/
		uint8_t CACHE_ECC_1ERR_SET_LANE                  : 1;	/*     23     r/w   0*/
		uint8_t IRAM_ECC_1ERR_SET_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t XDATA_ECC_2ERR_SET_LANE                  : 1;	/*     25     r/w   0*/
		uint8_t CACHE_ECC_2ERR_SET_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t IRAM_ECC_2ERR_SET_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t XDATA_MEM_CHECKSUM_RESET_LANE            : 1;	/*     28     r/w   0*/
		uint8_t XDATA_MEM_CHECKSUM_PASS_LANE             : 1;	/*     29       r   0*/
		uint8_t XDATA_CLEAR_ENABLE_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t XDATA_CLEAR_DONE_LANE                    : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_MEM_REG2_LANE_t;
__xdata __at( 0x22c8 ) volatile MCU_MEM_REG2_LANE_t MCU_MEM_REG2_LANE;
#define reg_CACHE_WTSEL_LANE_1_0  MCU_MEM_REG2_LANE.BF.CACHE_WTSEL_LANE_1_0
#define reg_CACHE_RTSEL_LANE_1_0  MCU_MEM_REG2_LANE.BF.CACHE_RTSEL_LANE_1_0
#define reg_XDATA_ECC_1ERR_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_1ERR_LANE
#define reg_CACHE_ECC_1ERR_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_1ERR_LANE
#define reg_IRAM_ECC_1ERR_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_1ERR_LANE
#define reg_XDATA_ECC_2ERR_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_2ERR_LANE
#define reg_CACHE_ECC_2ERR_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_2ERR_LANE
#define reg_IRAM_ECC_2ERR_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_2ERR_LANE
#define reg_XDATA_ECC_1ERR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_1ERR_ENABLE_LANE
#define reg_CACHE_ECC_1ERR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_1ERR_ENABLE_LANE
#define reg_IRAM_ECC_1ERR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_1ERR_ENABLE_LANE
#define reg_XDATA_ECC_2ERR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_2ERR_ENABLE_LANE
#define reg_CACHE_ECC_2ERR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_2ERR_ENABLE_LANE
#define reg_IRAM_ECC_2ERR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_2ERR_ENABLE_LANE
#define reg_XDATA_ECC_1ERR_CLEAR_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_1ERR_CLEAR_LANE
#define reg_CACHE_ECC_1ERR_CLEAR_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_1ERR_CLEAR_LANE
#define reg_IRAM_ECC_1ERR_CLEAR_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_1ERR_CLEAR_LANE
#define reg_XDATA_ECC_2ERR_CLEAR_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_2ERR_CLEAR_LANE
#define reg_CACHE_ECC_2ERR_CLEAR_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_2ERR_CLEAR_LANE
#define reg_IRAM_ECC_2ERR_CLEAR_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_2ERR_CLEAR_LANE
#define reg_XDATA_ECC_1ERR_SET_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_1ERR_SET_LANE
#define reg_CACHE_ECC_1ERR_SET_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_1ERR_SET_LANE
#define reg_IRAM_ECC_1ERR_SET_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_1ERR_SET_LANE
#define reg_XDATA_ECC_2ERR_SET_LANE  MCU_MEM_REG2_LANE.BF.XDATA_ECC_2ERR_SET_LANE
#define reg_CACHE_ECC_2ERR_SET_LANE  MCU_MEM_REG2_LANE.BF.CACHE_ECC_2ERR_SET_LANE
#define reg_IRAM_ECC_2ERR_SET_LANE  MCU_MEM_REG2_LANE.BF.IRAM_ECC_2ERR_SET_LANE
#define reg_XDATA_MEM_CHECKSUM_RESET_LANE  MCU_MEM_REG2_LANE.BF.XDATA_MEM_CHECKSUM_RESET_LANE
#define reg_XDATA_MEM_CHECKSUM_PASS_LANE  MCU_MEM_REG2_LANE.BF.XDATA_MEM_CHECKSUM_PASS_LANE
#define reg_XDATA_CLEAR_ENABLE_LANE  MCU_MEM_REG2_LANE.BF.XDATA_CLEAR_ENABLE_LANE
#define reg_XDATA_CLEAR_DONE_LANE  MCU_MEM_REG2_LANE.BF.XDATA_CLEAR_DONE_LANE

// 0x00cc	MCU_TIMER_CTRL_1_LANE		MCU Ext Timer Control Register 7
typedef union {
	struct {
		uint8_t TIMER_0_SEL_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TIMER_1_SEL_LANE_1_0                     : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TIMER_2_SEL_LANE_1_0                     : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TIMER_2EX_SEL_LANE_1_0                   : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_1_LANE_t;
__xdata __at( 0x22cc ) volatile MCU_TIMER_CTRL_1_LANE_t MCU_TIMER_CTRL_1_LANE;
#define reg_TIMER_0_SEL_LANE_1_0  MCU_TIMER_CTRL_1_LANE.BF.TIMER_0_SEL_LANE_1_0
#define reg_TIMER_1_SEL_LANE_1_0  MCU_TIMER_CTRL_1_LANE.BF.TIMER_1_SEL_LANE_1_0
#define reg_TIMER_2_SEL_LANE_1_0  MCU_TIMER_CTRL_1_LANE.BF.TIMER_2_SEL_LANE_1_0
#define reg_TIMER_2EX_SEL_LANE_1_0  MCU_TIMER_CTRL_1_LANE.BF.TIMER_2EX_SEL_LANE_1_0

// 0x00d0	MCU_TIMER_CTRL_2_LANE		MCU Ext Timer Control Register 8
typedef union {
	struct {
		uint8_t PWM0_COUNTER_LANE_30_0_b0                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM0_COUNTER_LANE_30_0_b1                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM0_COUNTER_LANE_30_0_b2                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM0_COUNTER_LANE_30_0_b3                : 7;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM0_EN_LANE                             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_2_LANE_t;
__xdata __at( 0x22d0 ) volatile MCU_TIMER_CTRL_2_LANE_t MCU_TIMER_CTRL_2_LANE;
#define reg_PWM0_COUNTER_LANE_30_0_b0  MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_LANE_30_0_b0
#define reg_PWM0_COUNTER_LANE_30_0_b1  MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_LANE_30_0_b1
#define reg_PWM0_COUNTER_LANE_30_0_b2  MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_LANE_30_0_b2
#define reg_PWM0_COUNTER_LANE_30_0_b3  MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_LANE_30_0_b3
#define reg_PWM0_EN_LANE  MCU_TIMER_CTRL_2_LANE.BF.PWM0_EN_LANE

// 0x00d4	MCU_TIMER_CTRL_3_LANE		MCU Ext Timer Control Register 9
typedef union {
	struct {
		uint8_t PWM1_COUNTER_LANE_30_0_b0                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM1_COUNTER_LANE_30_0_b1                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM1_COUNTER_LANE_30_0_b2                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM1_COUNTER_LANE_30_0_b3                : 7;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM1_EN_LANE                             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_3_LANE_t;
__xdata __at( 0x22d4 ) volatile MCU_TIMER_CTRL_3_LANE_t MCU_TIMER_CTRL_3_LANE;
#define reg_PWM1_COUNTER_LANE_30_0_b0  MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_LANE_30_0_b0
#define reg_PWM1_COUNTER_LANE_30_0_b1  MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_LANE_30_0_b1
#define reg_PWM1_COUNTER_LANE_30_0_b2  MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_LANE_30_0_b2
#define reg_PWM1_COUNTER_LANE_30_0_b3  MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_LANE_30_0_b3
#define reg_PWM1_EN_LANE  MCU_TIMER_CTRL_3_LANE.BF.PWM1_EN_LANE

// 0x00d8	MCU_TIMER_CTRL_4_LANE		MCU Ext Timer Control Register 10
typedef union {
	struct {
		uint8_t PWM2_COUNTER_LANE_30_0_b0                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM2_COUNTER_LANE_30_0_b1                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM2_COUNTER_LANE_30_0_b2                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM2_COUNTER_LANE_30_0_b3                : 7;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM2_EN_LANE                             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_4_LANE_t;
__xdata __at( 0x22d8 ) volatile MCU_TIMER_CTRL_4_LANE_t MCU_TIMER_CTRL_4_LANE;
#define reg_PWM2_COUNTER_LANE_30_0_b0  MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_LANE_30_0_b0
#define reg_PWM2_COUNTER_LANE_30_0_b1  MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_LANE_30_0_b1
#define reg_PWM2_COUNTER_LANE_30_0_b2  MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_LANE_30_0_b2
#define reg_PWM2_COUNTER_LANE_30_0_b3  MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_LANE_30_0_b3
#define reg_PWM2_EN_LANE  MCU_TIMER_CTRL_4_LANE.BF.PWM2_EN_LANE

// 0x00dc	MCU_TIMER_CTRL_5_LANE		MCU Ext Timer Control Register 11
typedef union {
	struct {
		uint8_t PWM3_COUNTER_LANE_30_0_b0                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM3_COUNTER_LANE_30_0_b1                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM3_COUNTER_LANE_30_0_b2                : 8;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM3_COUNTER_LANE_30_0_b3                : 7;	/* [30:0]     r/w 31'ha*/
		uint8_t PWM3_EN_LANE                             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_5_LANE_t;
__xdata __at( 0x22dc ) volatile MCU_TIMER_CTRL_5_LANE_t MCU_TIMER_CTRL_5_LANE;
#define reg_PWM3_COUNTER_LANE_30_0_b0  MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_LANE_30_0_b0
#define reg_PWM3_COUNTER_LANE_30_0_b1  MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_LANE_30_0_b1
#define reg_PWM3_COUNTER_LANE_30_0_b2  MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_LANE_30_0_b2
#define reg_PWM3_COUNTER_LANE_30_0_b3  MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_LANE_30_0_b3
#define reg_PWM3_EN_LANE  MCU_TIMER_CTRL_5_LANE.BF.PWM3_EN_LANE

// 0x00e0	MCU_TIMER_CTRL_6_LANE		MCU Ext Timer Control Register 12
typedef union {
	struct {
		uint8_t PWM0_CLK_SEL_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PWM1_CLK_SEL_LANE_1_0                    : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t PWM2_CLK_SEL_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t PWM3_CLK_SEL_LANE_1_0                    : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_6_LANE_t;
__xdata __at( 0x22e0 ) volatile MCU_TIMER_CTRL_6_LANE_t MCU_TIMER_CTRL_6_LANE;
#define reg_PWM0_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_6_LANE.BF.PWM0_CLK_SEL_LANE_1_0
#define reg_PWM1_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_6_LANE.BF.PWM1_CLK_SEL_LANE_1_0
#define reg_PWM2_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_6_LANE.BF.PWM2_CLK_SEL_LANE_1_0
#define reg_PWM3_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_6_LANE.BF.PWM3_CLK_SEL_LANE_1_0

// 0x00e4	MCU_TIMER_CTRL_7_LANE		MCU Ext Timer Control Register 13
typedef union {
	struct {
		uint8_t TIMER0_CLK_SEL_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TIMER1_CLK_SEL_LANE_1_0                  : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TIMER2_CLK_SEL_LANE_1_0                  : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TIMER3_CLK_SEL_LANE_1_0                  : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_TIMER_CTRL_7_LANE_t;
__xdata __at( 0x22e4 ) volatile MCU_TIMER_CTRL_7_LANE_t MCU_TIMER_CTRL_7_LANE;
#define reg_TIMER0_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_7_LANE.BF.TIMER0_CLK_SEL_LANE_1_0
#define reg_TIMER1_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_7_LANE.BF.TIMER1_CLK_SEL_LANE_1_0
#define reg_TIMER2_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_7_LANE.BF.TIMER2_CLK_SEL_LANE_1_0
#define reg_TIMER3_CLK_SEL_LANE_1_0  MCU_TIMER_CTRL_7_LANE.BF.TIMER3_CLK_SEL_LANE_1_0

// 0x00e8	MCU_DEBUG0_LANE		Lane MCU Debug Register 0
typedef union {
	struct {
		uint8_t MCU_DEBUG0_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG1_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUG2_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUG3_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG0_LANE_t;
__xdata __at( 0x22e8 ) volatile MCU_DEBUG0_LANE_t MCU_DEBUG0_LANE;
#define reg_MCU_DEBUG0_LANE_7_0  MCU_DEBUG0_LANE.BF.MCU_DEBUG0_LANE_7_0
#define reg_MCU_DEBUG1_LANE_7_0  MCU_DEBUG0_LANE.BF.MCU_DEBUG1_LANE_7_0
#define reg_MCU_DEBUG2_LANE_7_0  MCU_DEBUG0_LANE.BF.MCU_DEBUG2_LANE_7_0
#define reg_MCU_DEBUG3_LANE_7_0  MCU_DEBUG0_LANE.BF.MCU_DEBUG3_LANE_7_0

// 0x00ec	MCU_DEBUG1_LANE		Lane MCU Debug Register 1
typedef union {
	struct {
		uint8_t MCU_DEBUG4_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG5_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUG6_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUG7_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG1_LANE_t;
__xdata __at( 0x22ec ) volatile MCU_DEBUG1_LANE_t MCU_DEBUG1_LANE;
#define reg_MCU_DEBUG4_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG4_LANE_7_0
#define reg_MCU_DEBUG5_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG5_LANE_7_0
#define reg_MCU_DEBUG6_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG6_LANE_7_0
#define reg_MCU_DEBUG7_LANE_7_0  MCU_DEBUG1_LANE.BF.MCU_DEBUG7_LANE_7_0

// 0x00f0	MCU_DEBUG2_LANE		Lane MCU Debug Register 2
typedef union {
	struct {
		uint8_t MCU_DEBUG8_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUG9_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUGA_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUGB_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG2_LANE_t;
__xdata __at( 0x22f0 ) volatile MCU_DEBUG2_LANE_t MCU_DEBUG2_LANE;
#define reg_MCU_DEBUG8_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUG8_LANE_7_0
#define reg_MCU_DEBUG9_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUG9_LANE_7_0
#define reg_MCU_DEBUGA_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUGA_LANE_7_0
#define reg_MCU_DEBUGB_LANE_7_0  MCU_DEBUG2_LANE.BF.MCU_DEBUGB_LANE_7_0

// 0x00f4	MCU_DEBUG3_LANE		Lane MCU Debug Register 3
typedef union {
	struct {
		uint8_t MCU_DEBUGC_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_DEBUGD_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_DEBUGE_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_DEBUGF_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG3_LANE_t;
__xdata __at( 0x22f4 ) volatile MCU_DEBUG3_LANE_t MCU_DEBUG3_LANE;
#define reg_MCU_DEBUGC_LANE_7_0  MCU_DEBUG3_LANE.BF.MCU_DEBUGC_LANE_7_0
#define reg_MCU_DEBUGD_LANE_7_0  MCU_DEBUG3_LANE.BF.MCU_DEBUGD_LANE_7_0
#define reg_MCU_DEBUGE_LANE_7_0  MCU_DEBUG3_LANE.BF.MCU_DEBUGE_LANE_7_0
#define reg_MCU_DEBUGF_LANE_7_0  MCU_DEBUG3_LANE.BF.MCU_DEBUGF_LANE_7_0

// 0x00f8	MCU_DEBUG_LANE		Lane MCU Debug Register 4
typedef union {
	struct {
		uint8_t MCU_DEBUG_LANE_31_0_b0                   : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_DEBUG_LANE_31_0_b1                   : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_DEBUG_LANE_31_0_b2                   : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_DEBUG_LANE_31_0_b3                   : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_DEBUG_LANE_t;
__xdata __at( 0x22f8 ) volatile MCU_DEBUG_LANE_t MCU_DEBUG_LANE;
#define reg_MCU_DEBUG_LANE_31_0_b0  MCU_DEBUG_LANE.BF.MCU_DEBUG_LANE_31_0_b0
#define reg_MCU_DEBUG_LANE_31_0_b1  MCU_DEBUG_LANE.BF.MCU_DEBUG_LANE_31_0_b1
#define reg_MCU_DEBUG_LANE_31_0_b2  MCU_DEBUG_LANE.BF.MCU_DEBUG_LANE_31_0_b2
#define reg_MCU_DEBUG_LANE_31_0_b3  MCU_DEBUG_LANE.BF.MCU_DEBUG_LANE_31_0_b3

// 0x00fc	EXT_INT_CONTROL0		Ext INT Control0
typedef union {
	struct {
		uint8_t EXTINT_PM_CHG_INT_EN_LANE                : 1;	/*      0     r/w   0*/
		uint8_t EXTINT_SPD_INT_GEN_EN_LANE               : 1;	/*      1     r/w   0*/
		uint8_t EXTINT_TIMER0_INT_EN_LANE                : 1;	/*      2     r/w   0*/
		uint8_t EXTINT_TIMER1_INT_EN_LANE                : 1;	/*      3     r/w   0*/
		uint8_t EXTINT_TIMER2_INT_EN_LANE                : 1;	/*      4     r/w   0*/
		uint8_t EXTINT_TIMER3_INT_EN_LANE                : 1;	/*      5     r/w   0*/
		uint8_t EXTINT_FRAME_UNLOCK_INT_EN_LANE          : 1;	/*      6     r/w   0*/
		uint8_t EXTINT_FRAME_LOCK_INT_EN_LANE            : 1;	/*      7     r/w   0*/
		uint8_t EXTINT_RX_TRAIN_ENABLE_INT_EN_LANE       : 1;	/*      8     r/w   0*/
		uint8_t EXTINT_TX_TRAIN_ENABLE_INT_EN_LANE       : 1;	/*      9     r/w   0*/
		uint8_t EXTINT_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     10     r/w   0*/
		uint8_t EXTINT_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE : 1;	/*     11     r/w   0*/
		uint8_t EXTINT_REMOTE_BALANCE_ERR_INT_EN_LANE    : 1;	/*     12     r/w   0*/
		uint8_t EXTINT_DME_DEC_ERROR_INT_EN_LANE         : 1;	/*     13     r/w   0*/
		uint8_t EXTINT_MSE_LOW_INT_EN_LANE               : 1;	/*     14     r/w   0*/
		uint8_t EXTINT_PM_OTHERS_CHG_INT_EN_LANE         : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t EXTINT_MSE_HIGH_INT_EN_LANE              : 1;	/*     17     r/w   0*/
		uint8_t EXTINT_INT_PU_IVREF_CHG_INT_EN_LANE      : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t EXTINT_MSE_DONE_INT_EN_LANE              : 1;	/*     20     r/w   0*/
		uint8_t EXTINT_REFCLK_DIS_EN_INT_EN_LANE         : 1;	/*     21     r/w   0*/
		uint8_t EXTINT_TX_TRAIN_DISABLE_INT_EN_LANE      : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t EXTINT_RX_TRAIN_DISABLE_INT_EN_LANE      : 1;	/*     24     r/w   0*/
		uint8_t EXTINT_TRX_TRAIN_STOP_INT_EN_LANE        : 1;	/*     25     r/w   0*/
		uint8_t EXTINT_TX_TRAIN_IF_RSVD_INT_EN_LANE      : 1;	/*     26     r/w   0*/
		uint8_t EXTINT_INT_CMN_IRQ_EN_LANE               : 1;	/*     27     r/w   0*/
		uint8_t EXTINT_RX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     28     r/w   0*/
		uint8_t EXTINT_TX_SFT_RST_CHG_FALLING_INT_EN_LANE : 1;	/*     29     r/w   0*/
		uint8_t EXTINT_RX_SFT_RST_CHG_RISING_INT_EN_LANE : 1;	/*     30     r/w   0*/
		uint8_t EXTINT_TX_SFT_RST_CHG_RISING_INT_EN_LANE : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EXT_INT_CONTROL0_t;
__xdata __at( 0x22fc ) volatile EXT_INT_CONTROL0_t EXT_INT_CONTROL0;
#define reg_EXTINT_PM_CHG_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_PM_CHG_INT_EN_LANE
#define reg_EXTINT_SPD_INT_GEN_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_SPD_INT_GEN_EN_LANE
#define reg_EXTINT_TIMER0_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TIMER0_INT_EN_LANE
#define reg_EXTINT_TIMER1_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TIMER1_INT_EN_LANE
#define reg_EXTINT_TIMER2_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TIMER2_INT_EN_LANE
#define reg_EXTINT_TIMER3_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TIMER3_INT_EN_LANE
#define reg_EXTINT_FRAME_UNLOCK_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_FRAME_UNLOCK_INT_EN_LANE
#define reg_EXTINT_FRAME_LOCK_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_FRAME_LOCK_INT_EN_LANE
#define reg_EXTINT_RX_TRAIN_ENABLE_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_RX_TRAIN_ENABLE_INT_EN_LANE
#define reg_EXTINT_TX_TRAIN_ENABLE_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TX_TRAIN_ENABLE_INT_EN_LANE
#define reg_EXTINT_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_REMOTE_STATUS_FIELD_VALID_MUX_INT_EN_LANE
#define reg_EXTINT_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_REMOTE_CTRL_FIELD_VALID_MUX_INT_EN_LANE
#define reg_EXTINT_REMOTE_BALANCE_ERR_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_REMOTE_BALANCE_ERR_INT_EN_LANE
#define reg_EXTINT_DME_DEC_ERROR_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_DME_DEC_ERROR_INT_EN_LANE
#define reg_EXTINT_MSE_LOW_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_MSE_LOW_INT_EN_LANE
#define reg_EXTINT_PM_OTHERS_CHG_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_PM_OTHERS_CHG_INT_EN_LANE
#define reg_EXTINT_MSE_HIGH_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_MSE_HIGH_INT_EN_LANE
#define reg_EXTINT_INT_PU_IVREF_CHG_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_INT_PU_IVREF_CHG_INT_EN_LANE
#define reg_EXTINT_MSE_DONE_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_MSE_DONE_INT_EN_LANE
#define reg_EXTINT_REFCLK_DIS_EN_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_REFCLK_DIS_EN_INT_EN_LANE
#define reg_EXTINT_TX_TRAIN_DISABLE_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TX_TRAIN_DISABLE_INT_EN_LANE
#define reg_EXTINT_RX_TRAIN_DISABLE_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_RX_TRAIN_DISABLE_INT_EN_LANE
#define reg_EXTINT_TRX_TRAIN_STOP_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TRX_TRAIN_STOP_INT_EN_LANE
#define reg_EXTINT_TX_TRAIN_IF_RSVD_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TX_TRAIN_IF_RSVD_INT_EN_LANE
#define reg_EXTINT_INT_CMN_IRQ_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_INT_CMN_IRQ_EN_LANE
#define reg_EXTINT_RX_SFT_RST_CHG_FALLING_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_RX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_EXTINT_TX_SFT_RST_CHG_FALLING_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TX_SFT_RST_CHG_FALLING_INT_EN_LANE
#define reg_EXTINT_RX_SFT_RST_CHG_RISING_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_RX_SFT_RST_CHG_RISING_INT_EN_LANE
#define reg_EXTINT_TX_SFT_RST_CHG_RISING_INT_EN_LANE  EXT_INT_CONTROL0.BF.EXTINT_TX_SFT_RST_CHG_RISING_INT_EN_LANE

// 0x0100	EXT_INT_CONTROL1		Ext INT Control1
typedef union {
	struct {
		uint8_t EXTINT_PU_PLL_OR_CHG_FALLING_INT_EN_LANE : 1;	/*      0     r/w   0*/
		uint8_t EXTINT_PU_PLL_OR_CHG_RISING_INT_EN_LANE  : 1;	/*      1     r/w   0*/
		uint8_t EXTINT_REFCLK_DIS_CHG_FALLING_INT_EN_LANE : 1;	/*      2     r/w   0*/
		uint8_t EXTINT_REFCLK_DIS_CHG_RISING_INT_EN_LANE : 1;	/*      3     r/w   0*/
		uint8_t EXTINT_RX_INIT_CHG_FALLING_INT_EN_LANE   : 1;	/*      4     r/w   0*/
		uint8_t EXTINT_RX_INIT_CHG_RISING_INT_EN_LANE    : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EXT_INT_CONTROL1_t;
__xdata __at( 0x2300 ) volatile EXT_INT_CONTROL1_t EXT_INT_CONTROL1;
#define reg_EXTINT_PU_PLL_OR_CHG_FALLING_INT_EN_LANE  EXT_INT_CONTROL1.BF.EXTINT_PU_PLL_OR_CHG_FALLING_INT_EN_LANE
#define reg_EXTINT_PU_PLL_OR_CHG_RISING_INT_EN_LANE  EXT_INT_CONTROL1.BF.EXTINT_PU_PLL_OR_CHG_RISING_INT_EN_LANE
#define reg_EXTINT_REFCLK_DIS_CHG_FALLING_INT_EN_LANE  EXT_INT_CONTROL1.BF.EXTINT_REFCLK_DIS_CHG_FALLING_INT_EN_LANE
#define reg_EXTINT_REFCLK_DIS_CHG_RISING_INT_EN_LANE  EXT_INT_CONTROL1.BF.EXTINT_REFCLK_DIS_CHG_RISING_INT_EN_LANE
#define reg_EXTINT_RX_INIT_CHG_FALLING_INT_EN_LANE  EXT_INT_CONTROL1.BF.EXTINT_RX_INIT_CHG_FALLING_INT_EN_LANE
#define reg_EXTINT_RX_INIT_CHG_RISING_INT_EN_LANE  EXT_INT_CONTROL1.BF.EXTINT_RX_INIT_CHG_RISING_INT_EN_LANE

// 0x0104	ANA_IF_TRX_REG0		Analog Interface Register 0
typedef union {
	struct {
		uint8_t ANA_REG_TRX_ADDR_LANE_9_0_b0             : 8;	/*  [9:0]     r/w   0*/
		uint8_t ANA_REG_TRX_ADDR_LANE_9_0_b1             : 2;	/*  [9:0]     r/w   0*/
		uint8_t ANA_REG_TRX_FORCE_LANE                   : 1;	/*     10     r/w   0*/
		uint8_t ANA_REG_TRX_RE_LANE                      : 1;	/*     11     r/w   0*/
		uint8_t ANA_REG_TRX_WE_LANE                      : 1;	/*     12     r/w   0*/
		uint8_t ANA_REG_TRX_RST_LANE                     : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t ANA_REG_TRX_RD_OUT_LANE_7_0              : 8;	/*[23:16]       r   0*/
		uint8_t ANA_REG_TRX_WD_LANE_7_0                  : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_TRX_REG0_t;
__xdata __at( 0x2304 ) volatile ANA_IF_TRX_REG0_t ANA_IF_TRX_REG0;
#define reg_ANA_REG_TRX_ADDR_LANE_9_0_b0  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_ADDR_LANE_9_0_b0
#define reg_ANA_REG_TRX_ADDR_LANE_9_0_b1  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_ADDR_LANE_9_0_b1
#define reg_ANA_REG_TRX_FORCE_LANE  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_FORCE_LANE
#define reg_ANA_REG_TRX_RE_LANE  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_RE_LANE
#define reg_ANA_REG_TRX_WE_LANE  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_WE_LANE
#define reg_ANA_REG_TRX_RST_LANE  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_RST_LANE
#define reg_ANA_REG_TRX_RD_OUT_LANE_7_0  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_RD_OUT_LANE_7_0
#define reg_ANA_REG_TRX_WD_LANE_7_0  ANA_IF_TRX_REG0.BF.ANA_REG_TRX_WD_LANE_7_0

// 0x0108	ANA_IF_PLL_TS_REG0		Analog PLL TX Interface Register 0
typedef union {
	struct {
		uint8_t ANA_REG_PLL_TS_ADDR_LANE_8_0_b0          : 8;	/*  [8:0]     r/w   0*/
		uint8_t ANA_REG_PLL_TS_ADDR_LANE_8_0_b1          : 1;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t ANA_REG_PLL_TS_FORCE_LANE                : 1;	/*     10     r/w   0*/
		uint8_t ANA_REG_PLL_TS_RE_LANE                   : 1;	/*     11     r/w   0*/
		uint8_t ANA_REG_PLL_TS_WE_LANE                   : 1;	/*     12     r/w   0*/
		uint8_t ANA_REG_PLL_TS_RST_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t ANA_REG_PLL_TS_RD_OUT_LANE_7_0           : 8;	/*[23:16]       r   0*/
		uint8_t ANA_REG_PLL_TS_WD_LANE_7_0               : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_PLL_TS_REG0_t;
__xdata __at( 0x2308 ) volatile ANA_IF_PLL_TS_REG0_t ANA_IF_PLL_TS_REG0;
#define reg_ANA_REG_PLL_TS_ADDR_LANE_8_0_b0  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_ADDR_LANE_8_0_b0
#define reg_ANA_REG_PLL_TS_ADDR_LANE_8_0_b1  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_ADDR_LANE_8_0_b1
#define reg_ANA_REG_PLL_TS_FORCE_LANE  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_FORCE_LANE
#define reg_ANA_REG_PLL_TS_RE_LANE  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_RE_LANE
#define reg_ANA_REG_PLL_TS_WE_LANE  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_WE_LANE
#define reg_ANA_REG_PLL_TS_RST_LANE  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_RST_LANE
#define reg_ANA_REG_PLL_TS_RD_OUT_LANE_7_0  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_RD_OUT_LANE_7_0
#define reg_ANA_REG_PLL_TS_WD_LANE_7_0  ANA_IF_PLL_TS_REG0.BF.ANA_REG_PLL_TS_WD_LANE_7_0

// 0x010c	ANA_IF_PLL_RS_REG0		Analog PLL RX Interface Register 0
typedef union {
	struct {
		uint8_t ANA_REG_PLL_RS_ADDR_LANE_8_0_b0          : 8;	/*  [8:0]     r/w   0*/
		uint8_t ANA_REG_PLL_RS_ADDR_LANE_8_0_b1          : 1;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t ANA_REG_PLL_RS_FORCE_LANE                : 1;	/*     10     r/w   0*/
		uint8_t ANA_REG_PLL_RS_RE_LANE                   : 1;	/*     11     r/w   0*/
		uint8_t ANA_REG_PLL_RS_WE_LANE                   : 1;	/*     12     r/w   0*/
		uint8_t ANA_REG_PLL_RS_RST_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t ANA_REG_PLL_RS_RD_OUT_LANE_7_0           : 8;	/*[23:16]       r   0*/
		uint8_t ANA_REG_PLL_RS_WD_LANE_7_0               : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IF_PLL_RS_REG0_t;
__xdata __at( 0x230c ) volatile ANA_IF_PLL_RS_REG0_t ANA_IF_PLL_RS_REG0;
#define reg_ANA_REG_PLL_RS_ADDR_LANE_8_0_b0  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_ADDR_LANE_8_0_b0
#define reg_ANA_REG_PLL_RS_ADDR_LANE_8_0_b1  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_ADDR_LANE_8_0_b1
#define reg_ANA_REG_PLL_RS_FORCE_LANE  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_FORCE_LANE
#define reg_ANA_REG_PLL_RS_RE_LANE  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_RE_LANE
#define reg_ANA_REG_PLL_RS_WE_LANE  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_WE_LANE
#define reg_ANA_REG_PLL_RS_RST_LANE  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_RST_LANE
#define reg_ANA_REG_PLL_RS_RD_OUT_LANE_7_0  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_RD_OUT_LANE_7_0
#define reg_ANA_REG_PLL_RS_WD_LANE_7_0  ANA_IF_PLL_RS_REG0.BF.ANA_REG_PLL_RS_WD_LANE_7_0

// 0x0110	MCU_IRQ_ISR_LANE		MCU Ext Timer ISR Clear Control Register 1
typedef union {
	struct {
		uint8_t INT_TIMER0_ISR_CLEAR_LANE                : 1;	/*      0     r/w   0*/
		uint8_t INT_TIMER1_ISR_CLEAR_LANE                : 1;	/*      1     r/w   0*/
		uint8_t INT_TIMER2_ISR_CLEAR_LANE                : 1;	/*      2     r/w   0*/
		uint8_t INT_TIMER3_ISR_CLEAR_LANE                : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t INT_CMN_ISR_CLEAR_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_IRQ_ISR_LANE_t;
__xdata __at( 0x2310 ) volatile MCU_IRQ_ISR_LANE_t MCU_IRQ_ISR_LANE;
#define reg_INT_TIMER0_ISR_CLEAR_LANE  MCU_IRQ_ISR_LANE.BF.INT_TIMER0_ISR_CLEAR_LANE
#define reg_INT_TIMER1_ISR_CLEAR_LANE  MCU_IRQ_ISR_LANE.BF.INT_TIMER1_ISR_CLEAR_LANE
#define reg_INT_TIMER2_ISR_CLEAR_LANE  MCU_IRQ_ISR_LANE.BF.INT_TIMER2_ISR_CLEAR_LANE
#define reg_INT_TIMER3_ISR_CLEAR_LANE  MCU_IRQ_ISR_LANE.BF.INT_TIMER3_ISR_CLEAR_LANE
#define reg_INT_CMN_ISR_CLEAR_LANE  MCU_IRQ_ISR_LANE.BF.INT_CMN_ISR_CLEAR_LANE

// 0x0114	MCU_SDT_LANE		MCU Watch Dong Timer Control Register 1
typedef union {
	struct {
		uint8_t MCU_WDT_CNT_HI_LANE_14_0_b0              : 8;	/* [14:0]     r/w 15'h400*/
		uint8_t MCU_WDT_CNT_HI_LANE_14_0_b1              : 7;	/* [14:0]     r/w 15'h400*/
		uint8_t MCU_WDT_EN_LANE                          : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[30:16]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:16]     r/w   0*/
		uint8_t MCU_WDT_RESET_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_SDT_LANE_t;
__xdata __at( 0x2314 ) volatile MCU_SDT_LANE_t MCU_SDT_LANE;
#define reg_MCU_WDT_CNT_HI_LANE_14_0_b0  MCU_SDT_LANE.BF.MCU_WDT_CNT_HI_LANE_14_0_b0
#define reg_MCU_WDT_CNT_HI_LANE_14_0_b1  MCU_SDT_LANE.BF.MCU_WDT_CNT_HI_LANE_14_0_b1
#define reg_MCU_WDT_EN_LANE  MCU_SDT_LANE.BF.MCU_WDT_EN_LANE
#define reg_MCU_WDT_RESET_LANE  MCU_SDT_LANE.BF.MCU_WDT_RESET_LANE

// 0x0118	MEM_ECC_ERR_ADDRESS0		MEMORY LANE ECC ERROR ADDR
typedef union {
	struct {
		uint8_t XDATA_ECC_ERR_ADDR_LANE_9_0_b0           : 8;	/*  [9:0]       r   0*/
		uint8_t XDATA_ECC_ERR_ADDR_LANE_9_0_b1           : 2;	/*  [9:0]       r   0*/
		uint8_t IRAM_ECC_ERR_ADDR_LANE_7_0_b0            : 6;	/*[17:10]       r   0*/
		uint8_t IRAM_ECC_ERR_ADDR_LANE_7_0_b1            : 2;	/*[17:10]       r   0*/
		uint8_t CACHE_ECC_ERR_ADDR_LANE_7_0_b0           : 6;	/*[25:18]       r   0*/
		uint8_t CACHE_ECC_ERR_ADDR_LANE_7_0_b1           : 2;	/*[25:18]       r   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MEM_ECC_ERR_ADDRESS0_t;
__xdata __at( 0x2318 ) volatile MEM_ECC_ERR_ADDRESS0_t MEM_ECC_ERR_ADDRESS0;
#define reg_XDATA_ECC_ERR_ADDR_LANE_9_0_b0  MEM_ECC_ERR_ADDRESS0.BF.XDATA_ECC_ERR_ADDR_LANE_9_0_b0
#define reg_XDATA_ECC_ERR_ADDR_LANE_9_0_b1  MEM_ECC_ERR_ADDRESS0.BF.XDATA_ECC_ERR_ADDR_LANE_9_0_b1
#define reg_IRAM_ECC_ERR_ADDR_LANE_7_0_b0  MEM_ECC_ERR_ADDRESS0.BF.IRAM_ECC_ERR_ADDR_LANE_7_0_b0
#define reg_IRAM_ECC_ERR_ADDR_LANE_7_0_b1  MEM_ECC_ERR_ADDRESS0.BF.IRAM_ECC_ERR_ADDR_LANE_7_0_b1
#define reg_CACHE_ECC_ERR_ADDR_LANE_7_0_b0  MEM_ECC_ERR_ADDRESS0.BF.CACHE_ECC_ERR_ADDR_LANE_7_0_b0
#define reg_CACHE_ECC_ERR_ADDR_LANE_7_0_b1  MEM_ECC_ERR_ADDRESS0.BF.CACHE_ECC_ERR_ADDR_LANE_7_0_b1

// 0x011c	XDATA_MEM_CHECKSUM_LANE0		XDATA MEMORY LANE CHECKSUM Registers 0
typedef union {
	struct {
		uint8_t XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b0      : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b1      : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b2      : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b3      : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} XDATA_MEM_CHECKSUM_LANE0_t;
__xdata __at( 0x231c ) volatile XDATA_MEM_CHECKSUM_LANE0_t XDATA_MEM_CHECKSUM_LANE0;
#define reg_XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b0  XDATA_MEM_CHECKSUM_LANE0.BF.XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b0
#define reg_XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b1  XDATA_MEM_CHECKSUM_LANE0.BF.XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b1
#define reg_XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b2  XDATA_MEM_CHECKSUM_LANE0.BF.XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b2
#define reg_XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b3  XDATA_MEM_CHECKSUM_LANE0.BF.XDATA_MEM_CHECKSUM_EXP_LANE_31_0_b3

// 0x0120	XDATA_MEM_CHECKSUM_LANE1		XDATA MEMORY LANE CHECKSUM Registers 1
typedef union {
	struct {
		uint8_t XDATA_MEM_CHECKSUM_LANE_31_0_b0          : 8;	/* [31:0]       r 32'h0*/
		uint8_t XDATA_MEM_CHECKSUM_LANE_31_0_b1          : 8;	/* [31:0]       r 32'h0*/
		uint8_t XDATA_MEM_CHECKSUM_LANE_31_0_b2          : 8;	/* [31:0]       r 32'h0*/
		uint8_t XDATA_MEM_CHECKSUM_LANE_31_0_b3          : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} XDATA_MEM_CHECKSUM_LANE1_t;
__xdata __at( 0x2320 ) volatile XDATA_MEM_CHECKSUM_LANE1_t XDATA_MEM_CHECKSUM_LANE1;
#define reg_XDATA_MEM_CHECKSUM_LANE_31_0_b0  XDATA_MEM_CHECKSUM_LANE1.BF.XDATA_MEM_CHECKSUM_LANE_31_0_b0
#define reg_XDATA_MEM_CHECKSUM_LANE_31_0_b1  XDATA_MEM_CHECKSUM_LANE1.BF.XDATA_MEM_CHECKSUM_LANE_31_0_b1
#define reg_XDATA_MEM_CHECKSUM_LANE_31_0_b2  XDATA_MEM_CHECKSUM_LANE1.BF.XDATA_MEM_CHECKSUM_LANE_31_0_b2
#define reg_XDATA_MEM_CHECKSUM_LANE_31_0_b3  XDATA_MEM_CHECKSUM_LANE1.BF.XDATA_MEM_CHECKSUM_LANE_31_0_b3

// 0x0124	LANE_MCU_ADDRESS_REG		LANE MCU Address 
typedef union {
	struct {
		uint8_t MEMADDR_LANE_17_0_b0                     : 8;	/* [17:0]       r   0*/
		uint8_t MEMADDR_LANE_17_0_b1                     : 8;	/* [17:0]       r   0*/
		uint8_t MEMADDR_LANE_17_0_b2                     : 2;	/* [17:0]       r   0*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_MCU_ADDRESS_REG_t;
__xdata __at( 0x2324 ) volatile LANE_MCU_ADDRESS_REG_t LANE_MCU_ADDRESS_REG;
#define reg_MEMADDR_LANE_17_0_b0  LANE_MCU_ADDRESS_REG.BF.MEMADDR_LANE_17_0_b0
#define reg_MEMADDR_LANE_17_0_b1  LANE_MCU_ADDRESS_REG.BF.MEMADDR_LANE_17_0_b1
#define reg_MEMADDR_LANE_17_0_b2  LANE_MCU_ADDRESS_REG.BF.MEMADDR_LANE_17_0_b2

#endif
