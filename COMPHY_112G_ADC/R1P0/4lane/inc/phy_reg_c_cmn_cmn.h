#ifndef PHY_REG_C_CMN_CMN_H
#define PHY_REG_C_CMN_CMN_H



// 0x0000	TEST0		Common Test Registers 0
typedef union {
	struct {
		uint8_t DIG_INT_RSVD0_15_0_b0                    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_INT_RSVD0_15_0_b1                    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_RSVD0_15_0_b0                        : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t DIG_RSVD0_15_0_b1                        : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TEST0_t;
__xdata __at( 0xa300 ) volatile TEST0_t TEST0;
#define reg_DIG_INT_RSVD0_15_0_b0  TEST0.BF.DIG_INT_RSVD0_15_0_b0
#define reg_DIG_INT_RSVD0_15_0_b1  TEST0.BF.DIG_INT_RSVD0_15_0_b1
#define reg_DIG_RSVD0_15_0_b0  TEST0.BF.DIG_RSVD0_15_0_b0
#define reg_DIG_RSVD0_15_0_b1  TEST0.BF.DIG_RSVD0_15_0_b1
#define reg_DIG_INT_RSVD0_15_0  TEST0.WT.W0
#define reg_DIG_RSVD0_15_0  TEST0.WT.W1

// 0x0004	TEST1		Common Test Registers 1
typedef union {
	struct {
		uint8_t ANA_CMN_RSVD1_15_0_b0                    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t ANA_CMN_RSVD1_15_0_b1                    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t ANA_CMN_RSVD0_15_0_b0                    : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t ANA_CMN_RSVD0_15_0_b1                    : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TEST1_t;
__xdata __at( 0xa304 ) volatile TEST1_t TEST1;
#define reg_ANA_CMN_RSVD1_15_0_b0  TEST1.BF.ANA_CMN_RSVD1_15_0_b0
#define reg_ANA_CMN_RSVD1_15_0_b1  TEST1.BF.ANA_CMN_RSVD1_15_0_b1
#define reg_ANA_CMN_RSVD0_15_0_b0  TEST1.BF.ANA_CMN_RSVD0_15_0_b0
#define reg_ANA_CMN_RSVD0_15_0_b1  TEST1.BF.ANA_CMN_RSVD0_15_0_b1
#define reg_ANA_CMN_RSVD1_15_0  TEST1.WT.W0
#define reg_ANA_CMN_RSVD0_15_0  TEST1.WT.W1

// 0x0008	TEST2		Common Test Registers 2
typedef union {
	struct {
		uint8_t ANA_CMN_ANA_RSVD_IN_15_0_b0              : 8;	/* [15:0]     r/w 16'hff01*/
		uint8_t ANA_CMN_ANA_RSVD_IN_15_0_b1              : 8;	/* [15:0]     r/w 16'hff01*/
		uint8_t TESTBUS_SEL_LO1_CMN_5_0                  : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t TESTBUS_SEL_LO0_CMN_5_0                  : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t STRESSTEST_EN                            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TEST2_t;
__xdata __at( 0xa308 ) volatile TEST2_t TEST2;
#define reg_ANA_CMN_ANA_RSVD_IN_15_0_b0  TEST2.BF.ANA_CMN_ANA_RSVD_IN_15_0_b0
#define reg_ANA_CMN_ANA_RSVD_IN_15_0_b1  TEST2.BF.ANA_CMN_ANA_RSVD_IN_15_0_b1
#define reg_TESTBUS_SEL_LO1_CMN_5_0  TEST2.BF.TESTBUS_SEL_LO1_CMN_5_0
#define reg_TESTBUS_SEL_LO0_CMN_5_0  TEST2.BF.TESTBUS_SEL_LO0_CMN_5_0
#define reg_STRESSTEST_EN  TEST2.BF.STRESSTEST_EN
#define reg_ANA_CMN_ANA_RSVD_IN_15_0  TEST2.WT.W0

// 0x000c	TEST3		Common Test Registers 3
typedef union {
	struct {
		uint8_t TESTBUS_SEL_ORDER1_3_0                   : 4;	/*  [3:0]     r/w   0*/
		uint8_t TESTBUS_SEL_ORDER0_3_0                   : 4;	/*  [7:4]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:8]     r/w   0*/
		uint8_t TESTBUS_HI8BSEL_8BMODE                   : 1;	/*     13     r/w   0*/
		uint8_t TESTBUS_SEL_HI1_CMN_5_0_b0               : 2;	/*[19:14]     r/w   0*/
		uint8_t TESTBUS_SEL_HI1_CMN_5_0_b1               : 4;	/*[19:14]     r/w   0*/
		uint8_t TESTBUS_LANE_SEL1_2_0                    : 3;	/*[22:20]     r/w   0*/
		uint8_t TESTBUS_SEL_HI0_CMN_5_0_b0               : 1;	/*[28:23]     r/w   0*/
		uint8_t TESTBUS_SEL_HI0_CMN_5_0_b1               : 5;	/*[28:23]     r/w   0*/
		uint8_t TESTBUS_LANE_SEL0_2_0                    : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TEST3_t;
__xdata __at( 0xa30c ) volatile TEST3_t TEST3;
#define reg_TESTBUS_SEL_ORDER1_3_0  TEST3.BF.TESTBUS_SEL_ORDER1_3_0
#define reg_TESTBUS_SEL_ORDER0_3_0  TEST3.BF.TESTBUS_SEL_ORDER0_3_0
#define reg_TESTBUS_HI8BSEL_8BMODE  TEST3.BF.TESTBUS_HI8BSEL_8BMODE
#define reg_TESTBUS_SEL_HI1_CMN_5_0_b0  TEST3.BF.TESTBUS_SEL_HI1_CMN_5_0_b0
#define reg_TESTBUS_SEL_HI1_CMN_5_0_b1  TEST3.BF.TESTBUS_SEL_HI1_CMN_5_0_b1
#define reg_TESTBUS_LANE_SEL1_2_0  TEST3.BF.TESTBUS_LANE_SEL1_2_0
#define reg_TESTBUS_SEL_HI0_CMN_5_0_b0  TEST3.BF.TESTBUS_SEL_HI0_CMN_5_0_b0
#define reg_TESTBUS_SEL_HI0_CMN_5_0_b1  TEST3.BF.TESTBUS_SEL_HI0_CMN_5_0_b1
#define reg_TESTBUS_LANE_SEL0_2_0  TEST3.BF.TESTBUS_LANE_SEL0_2_0

// 0x0010	TEST4		Common Test Registers 4
typedef union {
	struct {
		uint8_t DIG_TEST_BUS_15_0_b0                     : 8;	/* [15:0]       r 16'h0*/
		uint8_t DIG_TEST_BUS_15_0_b1                     : 8;	/* [15:0]       r 16'h0*/
		uint8_t TESTBUS_SEL_SWAP_15_0_b0                 : 8;	/*[31:16]     r/w   0*/
		uint8_t TESTBUS_SEL_SWAP_15_0_b1                 : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TEST4_t;
__xdata __at( 0xa310 ) volatile TEST4_t TEST4;
#define reg_DIG_TEST_BUS_15_0_b0  TEST4.BF.DIG_TEST_BUS_15_0_b0
#define reg_DIG_TEST_BUS_15_0_b1  TEST4.BF.DIG_TEST_BUS_15_0_b1
#define reg_TESTBUS_SEL_SWAP_15_0_b0  TEST4.BF.TESTBUS_SEL_SWAP_15_0_b0
#define reg_TESTBUS_SEL_SWAP_15_0_b1  TEST4.BF.TESTBUS_SEL_SWAP_15_0_b1
#define reg_DIG_TEST_BUS_15_0  TEST4.WT.W0
#define reg_TESTBUS_SEL_SWAP_15_0  TEST4.WT.W1

// 0x0014	SYSTEM		Common System Registers
typedef union {
	struct {
		uint8_t RST_REG_CLK_CMN                          : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/* [15:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:1]     r/w   0*/
		uint8_t PIN_PHY_MODE_RD_2_0                      : 3;	/*[18:16]       r 3'h4*/
		uint8_t PHY_MODE_FM_REG                          : 1;	/*     19     r/w   0*/
		uint8_t SFT_RST_ONLY_REG                         : 1;	/*     20     r/w   0*/
		uint8_t SFT_RST_NO_REG_CMN                       : 1;	/*     21     r/w   0*/
		uint8_t SFT_RST_NO_REG_CMN_FM_REG                : 1;	/*     22     r/w   0*/
		uint8_t PHY_ISOLATE_MODE                         : 1;	/*     23     r/w   0*/
		uint8_t PHY_MODE_2_0                             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t BROADCAST                                : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t LANE_SEL_2_0                             : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SYSTEM_t;
__xdata __at( 0xa314 ) volatile SYSTEM_t SYSTEM;
#define reg_RST_REG_CLK_CMN  SYSTEM.BF.RST_REG_CLK_CMN
#define reg_PIN_PHY_MODE_RD_2_0  SYSTEM.BF.PIN_PHY_MODE_RD_2_0
#define reg_PHY_MODE_FM_REG  SYSTEM.BF.PHY_MODE_FM_REG
#define reg_SFT_RST_ONLY_REG  SYSTEM.BF.SFT_RST_ONLY_REG
#define reg_SFT_RST_NO_REG_CMN  SYSTEM.BF.SFT_RST_NO_REG_CMN
#define reg_SFT_RST_NO_REG_CMN_FM_REG  SYSTEM.BF.SFT_RST_NO_REG_CMN_FM_REG
#define reg_PHY_ISOLATE_MODE  SYSTEM.BF.PHY_ISOLATE_MODE
#define reg_PHY_MODE_2_0  SYSTEM.BF.PHY_MODE_2_0
#define reg_BROADCAST  SYSTEM.BF.BROADCAST
#define reg_LANE_SEL_2_0  SYSTEM.BF.LANE_SEL_2_0

// 0x0018	PM_CMN_REG1		Power Control Common Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PU_IVREF_FELL                            : 1;	/*      1       r   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t PU_BG_FELL                               : 1;	/*      3       r   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t CMN_PWRON_SEQ                            : 1;	/*      5     r/w   1*/
		uint8_t ANA_REFCLK_SEL                           : 1;	/*      6     r/w   0*/
		uint8_t PIN_REFCLK_SEL_RD                        : 1;	/*      7       r   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t PU_BG_RDY_RD                             : 1;	/*     11       r   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t REFCLK_SEL                               : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t PIN_REFCLK_DIS_RD                        : 1;	/*     16       r   0*/
		uint8_t ANA_PU_IVREF_DLY3_FORCE                  : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t ANA_PU_IVREF_DLY2_FORCE                  : 1;	/*     19     r/w   0*/
		uint8_t PU_PLL_OR                                : 1;	/*     20       r   0*/
		uint8_t ANA_PU_IVREF_DLY1_FORCE                  : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t ANA_PU_IVREF_FORCE                       : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t ANA_PU_BG                                : 1;	/*     28     r/w   0*/
		uint8_t PIN_PU_IVREF_RD                          : 1;	/*     29       r   0*/
		uint8_t ANA_PU_BG_FORCE                          : 1;	/*     30     r/w   0*/
		uint8_t REFCLK_DIS_FM_PM                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CMN_REG1_t;
__xdata __at( 0xa318 ) volatile PM_CMN_REG1_t PM_CMN_REG1;
#define reg_PU_IVREF_FELL  PM_CMN_REG1.BF.PU_IVREF_FELL
#define reg_PU_BG_FELL  PM_CMN_REG1.BF.PU_BG_FELL
#define reg_CMN_PWRON_SEQ  PM_CMN_REG1.BF.CMN_PWRON_SEQ
#define reg_ANA_REFCLK_SEL  PM_CMN_REG1.BF.ANA_REFCLK_SEL
#define reg_PIN_REFCLK_SEL_RD  PM_CMN_REG1.BF.PIN_REFCLK_SEL_RD
#define reg_PU_BG_RDY_RD  PM_CMN_REG1.BF.PU_BG_RDY_RD
#define reg_REFCLK_SEL  PM_CMN_REG1.BF.REFCLK_SEL
#define reg_PIN_REFCLK_DIS_RD  PM_CMN_REG1.BF.PIN_REFCLK_DIS_RD
#define reg_ANA_PU_IVREF_DLY3_FORCE  PM_CMN_REG1.BF.ANA_PU_IVREF_DLY3_FORCE
#define reg_ANA_PU_IVREF_DLY2_FORCE  PM_CMN_REG1.BF.ANA_PU_IVREF_DLY2_FORCE
#define reg_PU_PLL_OR  PM_CMN_REG1.BF.PU_PLL_OR
#define reg_ANA_PU_IVREF_DLY1_FORCE  PM_CMN_REG1.BF.ANA_PU_IVREF_DLY1_FORCE
#define reg_ANA_PU_IVREF_FORCE  PM_CMN_REG1.BF.ANA_PU_IVREF_FORCE
#define reg_ANA_PU_BG  PM_CMN_REG1.BF.ANA_PU_BG
#define reg_PIN_PU_IVREF_RD  PM_CMN_REG1.BF.PIN_PU_IVREF_RD
#define reg_ANA_PU_BG_FORCE  PM_CMN_REG1.BF.ANA_PU_BG_FORCE
#define reg_REFCLK_DIS_FM_PM  PM_CMN_REG1.BF.REFCLK_DIS_FM_PM

// 0x001c	INPUT_CMN_PIN_REG0		Input Interface Register0
typedef union {
	struct {
		uint8_t PU_IVREF_FM_REG                          : 1;	/*      0     r/w   0*/
		uint8_t PU_IVREF                                 : 1;	/*      1     r/w   0*/
		uint8_t REFCLK_SEL_FM_REG                        : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t BG_RDY_FM_REG                            : 1;	/*      4     r/w   0*/
		uint8_t BG_RDY                                   : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/* [22:7]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [22:7]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 7;	/* [22:7]     r/w 16'h0*/
		uint8_t RESERVED_23                              : 1;	/*[29:23]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:23]     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_CMN_PIN_REG0_t;
__xdata __at( 0xa31c ) volatile INPUT_CMN_PIN_REG0_t INPUT_CMN_PIN_REG0;
#define reg_PU_IVREF_FM_REG  INPUT_CMN_PIN_REG0.BF.PU_IVREF_FM_REG
#define reg_PU_IVREF  INPUT_CMN_PIN_REG0.BF.PU_IVREF
#define reg_REFCLK_SEL_FM_REG  INPUT_CMN_PIN_REG0.BF.REFCLK_SEL_FM_REG
#define reg_BG_RDY_FM_REG  INPUT_CMN_PIN_REG0.BF.BG_RDY_FM_REG
#define reg_BG_RDY  INPUT_CMN_PIN_REG0.BF.BG_RDY

// 0x0020	INPUT_CMN_PIN_REG1		Input Interface Register1
typedef union {
	struct {
		uint8_t REF_FREF_SEL_4_0                         : 5;	/*  [4:0]     r/w 5'h2*/
		uint8_t REF_FREF_SEL_FM_REG                      : 1;	/*      5     r/w   0*/
		uint8_t PHY_FM_RST                               : 1;	/*      6       r   0*/
		uint8_t CLEAR_PHY_FM_RST                         : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t PROCESSMON_CNT_READY                     : 1;	/*      9       r   0*/
		uint8_t REFCLK_DIS_FM_PIN                        : 1;	/*     10     r/w   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RDY_FM_REG       : 1;	/*     11     r/w   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RDY              : 1;	/*     12     r/w   0*/
		uint8_t REFCLK_DIS_FM_REG                        : 1;	/*     13     r/w   0*/
		uint8_t REFCLK_DIS                               : 1;	/*     14     r/w   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_FM_REG              : 1;	/*     15     r/w   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_15_0_b0             : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_15_0_b1             : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_CMN_PIN_REG1_t;
__xdata __at( 0xa320 ) volatile INPUT_CMN_PIN_REG1_t INPUT_CMN_PIN_REG1;
#define reg_REF_FREF_SEL_4_0  INPUT_CMN_PIN_REG1.BF.REF_FREF_SEL_4_0
#define reg_REF_FREF_SEL_FM_REG  INPUT_CMN_PIN_REG1.BF.REF_FREF_SEL_FM_REG
#define reg_PHY_FM_RST  INPUT_CMN_PIN_REG1.BF.PHY_FM_RST
#define reg_CLEAR_PHY_FM_RST  INPUT_CMN_PIN_REG1.BF.CLEAR_PHY_FM_RST
#define reg_PROCESSMON_CNT_READY  INPUT_CMN_PIN_REG1.BF.PROCESSMON_CNT_READY
#define reg_REFCLK_DIS_FM_PIN  INPUT_CMN_PIN_REG1.BF.REFCLK_DIS_FM_PIN
#define reg_ANA_CMN_PROCESSMON_FCLK_RDY_FM_REG  INPUT_CMN_PIN_REG1.BF.ANA_CMN_PROCESSMON_FCLK_RDY_FM_REG
#define reg_ANA_CMN_PROCESSMON_FCLK_RDY  INPUT_CMN_PIN_REG1.BF.ANA_CMN_PROCESSMON_FCLK_RDY
#define reg_REFCLK_DIS_FM_REG  INPUT_CMN_PIN_REG1.BF.REFCLK_DIS_FM_REG
#define reg_REFCLK_DIS  INPUT_CMN_PIN_REG1.BF.REFCLK_DIS
#define reg_ANA_CMN_ANA_RSVD_OUT_FM_REG  INPUT_CMN_PIN_REG1.BF.ANA_CMN_ANA_RSVD_OUT_FM_REG
#define reg_ANA_CMN_ANA_RSVD_OUT_15_0_b0  INPUT_CMN_PIN_REG1.BF.ANA_CMN_ANA_RSVD_OUT_15_0_b0
#define reg_ANA_CMN_ANA_RSVD_OUT_15_0_b1  INPUT_CMN_PIN_REG1.BF.ANA_CMN_ANA_RSVD_OUT_15_0_b1
#define reg_ANA_CMN_ANA_RSVD_OUT_15_0  INPUT_CMN_PIN_REG1.WT.W0

// 0x0024	INPUT_CMN_PIN_REG2		Input Interface Register2
typedef union {
	struct {
		uint8_t PHY_FM_RST_LANE0                         : 1;	/*      0       r   0*/
		uint8_t PHY_FM_RST_LANE1                         : 1;	/*      1       r   0*/
		uint8_t PHY_FM_RST_LANE2                         : 1;	/*      2       r   0*/
		uint8_t PHY_FM_RST_LANE3                         : 1;	/*      3       r   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t IDDQ_FM_REG                              : 1;	/*      8     r/w   0*/
		uint8_t IDDQ                                     : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_CMN_PIN_REG2_t;
__xdata __at( 0xa324 ) volatile INPUT_CMN_PIN_REG2_t INPUT_CMN_PIN_REG2;
#define reg_PHY_FM_RST_LANE0  INPUT_CMN_PIN_REG2.BF.PHY_FM_RST_LANE0
#define reg_PHY_FM_RST_LANE1  INPUT_CMN_PIN_REG2.BF.PHY_FM_RST_LANE1
#define reg_PHY_FM_RST_LANE2  INPUT_CMN_PIN_REG2.BF.PHY_FM_RST_LANE2
#define reg_PHY_FM_RST_LANE3  INPUT_CMN_PIN_REG2.BF.PHY_FM_RST_LANE3
#define reg_IDDQ_FM_REG  INPUT_CMN_PIN_REG2.BF.IDDQ_FM_REG
#define reg_IDDQ  INPUT_CMN_PIN_REG2.BF.IDDQ

// 0x0028	ANA_TSEN_CONTROL		Input Interface Register3
typedef union {
	struct {
		uint8_t TSEN_ADC_DATA_9_0_b0                     : 8;	/*  [9:0]       r 10'h0*/
		uint8_t TSEN_ADC_DATA_9_0_b1                     : 2;	/*  [9:0]       r 10'h0*/
		uint8_t TSEN_ADC_RDY                             : 1;	/*     10       r   0*/
		uint8_t TSEN_ADC_RD_REQ                          : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 4;	/*[16:12]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*[16:12]     r/w   0*/
		uint8_t BURN_IN_TEST_FM_REG                      : 1;	/*     17     r/w   0*/
		uint8_t BURN_IN_TEST                             : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_RDY_FM_REG              : 1;	/*     25     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_RDY                     : 1;	/*     26     r/w   0*/
		uint8_t PIN_REF_FREF_SEL_RD_4_0                  : 5;	/*[31:27]       r 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TSEN_CONTROL_t;
__xdata __at( 0xa328 ) volatile ANA_TSEN_CONTROL_t ANA_TSEN_CONTROL;
#define reg_TSEN_ADC_DATA_9_0_b0  ANA_TSEN_CONTROL.BF.TSEN_ADC_DATA_9_0_b0
#define reg_TSEN_ADC_DATA_9_0_b1  ANA_TSEN_CONTROL.BF.TSEN_ADC_DATA_9_0_b1
#define reg_TSEN_ADC_RDY  ANA_TSEN_CONTROL.BF.TSEN_ADC_RDY
#define reg_TSEN_ADC_RD_REQ  ANA_TSEN_CONTROL.BF.TSEN_ADC_RD_REQ
#define reg_BURN_IN_TEST_FM_REG  ANA_TSEN_CONTROL.BF.BURN_IN_TEST_FM_REG
#define reg_BURN_IN_TEST  ANA_TSEN_CONTROL.BF.BURN_IN_TEST
#define reg_ANA_CMN_TSEN_ADC_RDY_FM_REG  ANA_TSEN_CONTROL.BF.ANA_CMN_TSEN_ADC_RDY_FM_REG
#define reg_ANA_CMN_TSEN_ADC_RDY  ANA_TSEN_CONTROL.BF.ANA_CMN_TSEN_ADC_RDY
#define reg_PIN_REF_FREF_SEL_RD_4_0  ANA_TSEN_CONTROL.BF.PIN_REF_FREF_SEL_RD_4_0

// 0x002c	PROCESSMON_REG0		Process Calibration Related Register 0
typedef union {
	struct {
		uint8_t PROCESSMON_CNT_TIMER_15_0_b0             : 8;	/* [15:0]     r/w 16'h4f*/
		uint8_t PROCESSMON_CNT_TIMER_15_0_b1             : 8;	/* [15:0]     r/w 16'h4f*/
		uint8_t PROCESSMON_CNT_15_0_b0                   : 8;	/*[31:16]       r   0*/
		uint8_t PROCESSMON_CNT_15_0_b1                   : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PROCESSMON_REG0_t;
__xdata __at( 0xa32c ) volatile PROCESSMON_REG0_t PROCESSMON_REG0;
#define reg_PROCESSMON_CNT_TIMER_15_0_b0  PROCESSMON_REG0.BF.PROCESSMON_CNT_TIMER_15_0_b0
#define reg_PROCESSMON_CNT_TIMER_15_0_b1  PROCESSMON_REG0.BF.PROCESSMON_CNT_TIMER_15_0_b1
#define reg_PROCESSMON_CNT_15_0_b0  PROCESSMON_REG0.BF.PROCESSMON_CNT_15_0_b0
#define reg_PROCESSMON_CNT_15_0_b1  PROCESSMON_REG0.BF.PROCESSMON_CNT_15_0_b1
#define reg_PROCESSMON_CNT_TIMER_15_0  PROCESSMON_REG0.WT.W0
#define reg_PROCESSMON_CNT_15_0  PROCESSMON_REG0.WT.W1

// 0x0030	PROCESSMON_REG1		Process Calibration Related Register 1
typedef union {
	struct {
		uint8_t PROCESSMON_CNT_START                     : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t ANA_PROCESS_VALUE_3_0                    : 4;	/*  [7:4]     r/w 4'h8*/
		uint8_t ANA_PROCESSMON_FCLK_RDY_RD               : 1;	/*      8       r   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESSMON_REG1_t;
__xdata __at( 0xa330 ) volatile PROCESSMON_REG1_t PROCESSMON_REG1;
#define reg_PROCESSMON_CNT_START  PROCESSMON_REG1.BF.PROCESSMON_CNT_START
#define reg_ANA_PROCESS_VALUE_3_0  PROCESSMON_REG1.BF.ANA_PROCESS_VALUE_3_0
#define reg_ANA_PROCESSMON_FCLK_RDY_RD  PROCESSMON_REG1.BF.ANA_PROCESSMON_FCLK_RDY_RD

// 0x0034	CLKGEN_CMN_REG1		Clock gen cmn reg1
typedef union {
	struct {
		uint8_t EN_LANE0                                 : 1;	/*      0     r/w   1*/
		uint8_t EN_LANE1                                 : 1;	/*      1     r/w   1*/
		uint8_t EN_LANE2                                 : 1;	/*      2     r/w   1*/
		uint8_t EN_LANE3                                 : 1;	/*      3     r/w   1*/
		uint8_t EN_CMN                                   : 1;	/*      4     r/w   1*/
		uint8_t RESERVED_5                               : 3;	/* [22:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [22:5]     r/w   0*/
		uint8_t RESERVED_16                              : 7;	/* [22:5]     r/w   0*/
		uint8_t PM_150M_CLK_EN                           : 1;	/*     23     r/w   1*/
		uint8_t RST_REF_CLK                              : 1;	/*     24     r/w   0*/
		uint8_t RST_PM_150M_CLK                          : 1;	/*     25     r/w   0*/
		uint8_t RST_PROCESSMON_FCLK                      : 1;	/*     26     r/w   0*/
		uint8_t REF_CLK_EN                               : 1;	/*     27     r/w   0*/
		uint8_t REFCLK_DIS_ACK                           : 1;	/*     28     r/w   0*/
		uint8_t REFCLK_DIS_ACK_FORCE                     : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKGEN_CMN_REG1_t;
__xdata __at( 0xa334 ) volatile CLKGEN_CMN_REG1_t CLKGEN_CMN_REG1;
#define reg_EN_LANE0  CLKGEN_CMN_REG1.BF.EN_LANE0
#define reg_EN_LANE1  CLKGEN_CMN_REG1.BF.EN_LANE1
#define reg_EN_LANE2  CLKGEN_CMN_REG1.BF.EN_LANE2
#define reg_EN_LANE3  CLKGEN_CMN_REG1.BF.EN_LANE3
#define reg_EN_CMN  CLKGEN_CMN_REG1.BF.EN_CMN
#define reg_PM_150M_CLK_EN  CLKGEN_CMN_REG1.BF.PM_150M_CLK_EN
#define reg_RST_REF_CLK  CLKGEN_CMN_REG1.BF.RST_REF_CLK
#define reg_RST_PM_150M_CLK  CLKGEN_CMN_REG1.BF.RST_PM_150M_CLK
#define reg_RST_PROCESSMON_FCLK  CLKGEN_CMN_REG1.BF.RST_PROCESSMON_FCLK
#define reg_REF_CLK_EN  CLKGEN_CMN_REG1.BF.REF_CLK_EN
#define reg_REFCLK_DIS_ACK  CLKGEN_CMN_REG1.BF.REFCLK_DIS_ACK
#define reg_REFCLK_DIS_ACK_FORCE  CLKGEN_CMN_REG1.BF.REFCLK_DIS_ACK_FORCE

// 0x0038	CMN_REG1		common register 1
typedef union {
	struct {
		uint8_t PHY_MCU_REMOTE_REQ                       : 1;	/*      0     r/w   0*/
		uint8_t PHY_MCU_REMOTE_ACK                       : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG1_t;
__xdata __at( 0xa338 ) volatile CMN_REG1_t CMN_REG1;
#define reg_PHY_MCU_REMOTE_REQ  CMN_REG1.BF.PHY_MCU_REMOTE_REQ
#define reg_PHY_MCU_REMOTE_ACK  CMN_REG1.BF.PHY_MCU_REMOTE_ACK

// 0x0040	CMN_CALIBRATION		_field description_
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t ANA_TSEN_ADC_EN                          : 1;	/*      8     r/w   0*/
		uint8_t ANA_TSEN_ADC_RESET                       : 1;	/*      9     r/w   1*/
		uint8_t ANA_TSEN_ADC_START                       : 1;	/*     10     r/w   0*/
		uint8_t ANA_TSEN_ADC_CLK_EN                      : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t ANA_TSEN_ADC_CLK_CNT_15_0_b0             : 8;	/*[31:16]     r/w 16'h31*/
		uint8_t ANA_TSEN_ADC_CLK_CNT_15_0_b1             : 8;	/*[31:16]     r/w 16'h31*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMN_CALIBRATION_t;
__xdata __at( 0xa340 ) volatile CMN_CALIBRATION_t CMN_CALIBRATION;
#define reg_ANA_TSEN_ADC_EN  CMN_CALIBRATION.BF.ANA_TSEN_ADC_EN
#define reg_ANA_TSEN_ADC_RESET  CMN_CALIBRATION.BF.ANA_TSEN_ADC_RESET
#define reg_ANA_TSEN_ADC_START  CMN_CALIBRATION.BF.ANA_TSEN_ADC_START
#define reg_ANA_TSEN_ADC_CLK_EN  CMN_CALIBRATION.BF.ANA_TSEN_ADC_CLK_EN
#define reg_ANA_TSEN_ADC_CLK_CNT_15_0_b0  CMN_CALIBRATION.BF.ANA_TSEN_ADC_CLK_CNT_15_0_b0
#define reg_ANA_TSEN_ADC_CLK_CNT_15_0_b1  CMN_CALIBRATION.BF.ANA_TSEN_ADC_CLK_CNT_15_0_b1
#define reg_ANA_TSEN_ADC_CLK_CNT_15_0  CMN_CALIBRATION.WT.W0

// 0x0048	INPUT_CMN_PIN_REG3		Input Interface Register4
typedef union {
	struct {
		uint8_t ANA_CMN_TSEN_ADC_DATA_9_0_b0             : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_9_0_b1             : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_FM_REG             : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_CMN_PIN_REG3_t;
__xdata __at( 0xa348 ) volatile INPUT_CMN_PIN_REG3_t INPUT_CMN_PIN_REG3;
#define reg_ANA_CMN_TSEN_ADC_DATA_9_0_b0  INPUT_CMN_PIN_REG3.BF.ANA_CMN_TSEN_ADC_DATA_9_0_b0
#define reg_ANA_CMN_TSEN_ADC_DATA_9_0_b1  INPUT_CMN_PIN_REG3.BF.ANA_CMN_TSEN_ADC_DATA_9_0_b1
#define reg_ANA_CMN_TSEN_ADC_DATA_FM_REG  INPUT_CMN_PIN_REG3.BF.ANA_CMN_TSEN_ADC_DATA_FM_REG

// 0x004c	PM_CMN_REG2		Power control common register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [9:0]     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:0]     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ANA_PU_IVREF_DLY3                        : 1;	/*     16     r/w   0*/
		uint8_t ANA_PU_IVREF_DLY2                        : 1;	/*     17     r/w   0*/
		uint8_t ANA_PU_IVREF_DLY1                        : 1;	/*     18     r/w   0*/
		uint8_t ANA_PU_IVREF                             : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t ANA_PU_PLL_OR                            : 1;	/*     25     r/w   0*/
		uint8_t ANA_PU_PLL_OR_FORCE                      : 1;	/*     26     r/w   0*/
		uint8_t ANA_PU_TX_OR                             : 1;	/*     27     r/w   0*/
		uint8_t ANA_PU_TX_OR_FORCE                       : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CMN_REG2_t;
__xdata __at( 0xa34c ) volatile PM_CMN_REG2_t PM_CMN_REG2;
#define reg_ANA_PU_IVREF_DLY3  PM_CMN_REG2.BF.ANA_PU_IVREF_DLY3
#define reg_ANA_PU_IVREF_DLY2  PM_CMN_REG2.BF.ANA_PU_IVREF_DLY2
#define reg_ANA_PU_IVREF_DLY1  PM_CMN_REG2.BF.ANA_PU_IVREF_DLY1
#define reg_ANA_PU_IVREF  PM_CMN_REG2.BF.ANA_PU_IVREF
#define reg_ANA_PU_PLL_OR  PM_CMN_REG2.BF.ANA_PU_PLL_OR
#define reg_ANA_PU_PLL_OR_FORCE  PM_CMN_REG2.BF.ANA_PU_PLL_OR_FORCE
#define reg_ANA_PU_TX_OR  PM_CMN_REG2.BF.ANA_PU_TX_OR
#define reg_ANA_PU_TX_OR_FORCE  PM_CMN_REG2.BF.ANA_PU_TX_OR_FORCE

// 0x0054	TEST5		_field description_
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t TESTBUS_DBG_15_0_b0                      : 8;	/*[31:16]     r/w   0*/
		uint8_t TESTBUS_DBG_15_0_b1                      : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TEST5_t;
__xdata __at( 0xa354 ) volatile TEST5_t TEST5;
#define reg_TESTBUS_DBG_15_0_b0  TEST5.BF.TESTBUS_DBG_15_0_b0
#define reg_TESTBUS_DBG_15_0_b1  TEST5.BF.TESTBUS_DBG_15_0_b1
#define reg_TESTBUS_DBG_15_0  TEST5.WT.W1

// 0x0058	CMN_RESERVED_REG1		Common Reserved Register 1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]       r   0*/
		uint8_t CMN_ANA_RSVD_OUT_RD_15_0_b0              : 8;	/*[31:16]       r   0*/
		uint8_t CMN_ANA_RSVD_OUT_RD_15_0_b1              : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMN_RESERVED_REG1_t;
__xdata __at( 0xa358 ) volatile CMN_RESERVED_REG1_t CMN_RESERVED_REG1;
#define reg_CMN_ANA_RSVD_OUT_RD_15_0_b0  CMN_RESERVED_REG1.BF.CMN_ANA_RSVD_OUT_RD_15_0_b0
#define reg_CMN_ANA_RSVD_OUT_RD_15_0_b1  CMN_RESERVED_REG1.BF.CMN_ANA_RSVD_OUT_RD_15_0_b1
#define reg_CMN_ANA_RSVD_OUT_RD_15_0  CMN_RESERVED_REG1.WT.W1

// 0x005c	CMN_RESERVED_REG2		Common Reserved Register 2
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
} CMN_RESERVED_REG2_t;
__xdata __at( 0xa35c ) volatile CMN_RESERVED_REG2_t CMN_RESERVED_REG2;

// 0x0060	CMN_MCU_TIMER_CONTROL		CMN MCU Ext Timer Control Register 0
typedef union {
	struct {
		uint8_t TIMER_0_EN_CMN                           : 1;	/*      0     r/w   0*/
		uint8_t TIMER_1_EN_CMN                           : 1;	/*      1     r/w   0*/
		uint8_t TIMER_2_EN_CMN                           : 1;	/*      2     r/w   0*/
		uint8_t TIMER_3_EN_CMN                           : 1;	/*      3     r/w   0*/
		uint8_t SWD_CMN                                  : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TIMER_0_SEL_CMN_1_0                      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t TIMER_1_SEL_CMN_1_0                      : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t TIMER_2_SEL_CMN_1_0                      : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t TIMER_2EX_SEL_CMN_1_0                    : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t PWM0_CLK_SEL_CMN_1_0                     : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t PWM1_CLK_SEL_CMN_1_0                     : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t PWM2_CLK_SEL_CMN_1_0                     : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t PWM3_CLK_SEL_CMN_1_0                     : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t TIMER0_CLK_SEL_CMN_1_0                   : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t TIMER1_CLK_SEL_CMN_1_0                   : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t TIMER2_CLK_SEL_CMN_1_0                   : 2;	/*[29:28]     r/w 2'h0*/
		uint8_t TIMER3_CLK_SEL_CMN_1_0                   : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_TIMER_CONTROL_t;
__xdata __at( 0xa360 ) volatile CMN_MCU_TIMER_CONTROL_t CMN_MCU_TIMER_CONTROL;
#define reg_TIMER_0_EN_CMN  CMN_MCU_TIMER_CONTROL.BF.TIMER_0_EN_CMN
#define reg_TIMER_1_EN_CMN  CMN_MCU_TIMER_CONTROL.BF.TIMER_1_EN_CMN
#define reg_TIMER_2_EN_CMN  CMN_MCU_TIMER_CONTROL.BF.TIMER_2_EN_CMN
#define reg_TIMER_3_EN_CMN  CMN_MCU_TIMER_CONTROL.BF.TIMER_3_EN_CMN
#define reg_SWD_CMN  CMN_MCU_TIMER_CONTROL.BF.SWD_CMN
#define reg_TIMER_0_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER_0_SEL_CMN_1_0
#define reg_TIMER_1_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER_1_SEL_CMN_1_0
#define reg_TIMER_2_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER_2_SEL_CMN_1_0
#define reg_TIMER_2EX_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER_2EX_SEL_CMN_1_0
#define reg_PWM0_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.PWM0_CLK_SEL_CMN_1_0
#define reg_PWM1_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.PWM1_CLK_SEL_CMN_1_0
#define reg_PWM2_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.PWM2_CLK_SEL_CMN_1_0
#define reg_PWM3_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.PWM3_CLK_SEL_CMN_1_0
#define reg_TIMER0_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER0_CLK_SEL_CMN_1_0
#define reg_TIMER1_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER1_CLK_SEL_CMN_1_0
#define reg_TIMER2_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER2_CLK_SEL_CMN_1_0
#define reg_TIMER3_CLK_SEL_CMN_1_0  CMN_MCU_TIMER_CONTROL.BF.TIMER3_CLK_SEL_CMN_1_0

// 0x0064	CMN_MCU_TIMER0_CONTROL		CMN MCU Ext Timer Control Register 1
typedef union {
	struct {
		uint8_t TIMER0_HI_CNT_CMN_15_0_b0                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER0_HI_CNT_CMN_15_0_b1                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER0_LO_CNT_CMN_15_0_b0                : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER0_LO_CNT_CMN_15_0_b1                : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMN_MCU_TIMER0_CONTROL_t;
__xdata __at( 0xa364 ) volatile CMN_MCU_TIMER0_CONTROL_t CMN_MCU_TIMER0_CONTROL;
#define reg_TIMER0_HI_CNT_CMN_15_0_b0  CMN_MCU_TIMER0_CONTROL.BF.TIMER0_HI_CNT_CMN_15_0_b0
#define reg_TIMER0_HI_CNT_CMN_15_0_b1  CMN_MCU_TIMER0_CONTROL.BF.TIMER0_HI_CNT_CMN_15_0_b1
#define reg_TIMER0_LO_CNT_CMN_15_0_b0  CMN_MCU_TIMER0_CONTROL.BF.TIMER0_LO_CNT_CMN_15_0_b0
#define reg_TIMER0_LO_CNT_CMN_15_0_b1  CMN_MCU_TIMER0_CONTROL.BF.TIMER0_LO_CNT_CMN_15_0_b1
#define reg_TIMER0_HI_CNT_CMN_15_0  CMN_MCU_TIMER0_CONTROL.WT.W0
#define reg_TIMER0_LO_CNT_CMN_15_0  CMN_MCU_TIMER0_CONTROL.WT.W1

// 0x0068	CMN_MCU_TIMER1_CONTROL		CMN MCU Ext Timer Control Register 2
typedef union {
	struct {
		uint8_t TIMER1_HI_CNT_CMN_15_0_b0                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER1_HI_CNT_CMN_15_0_b1                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER1_LO_CNT_CMN_15_0_b0                : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER1_LO_CNT_CMN_15_0_b1                : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMN_MCU_TIMER1_CONTROL_t;
__xdata __at( 0xa368 ) volatile CMN_MCU_TIMER1_CONTROL_t CMN_MCU_TIMER1_CONTROL;
#define reg_TIMER1_HI_CNT_CMN_15_0_b0  CMN_MCU_TIMER1_CONTROL.BF.TIMER1_HI_CNT_CMN_15_0_b0
#define reg_TIMER1_HI_CNT_CMN_15_0_b1  CMN_MCU_TIMER1_CONTROL.BF.TIMER1_HI_CNT_CMN_15_0_b1
#define reg_TIMER1_LO_CNT_CMN_15_0_b0  CMN_MCU_TIMER1_CONTROL.BF.TIMER1_LO_CNT_CMN_15_0_b0
#define reg_TIMER1_LO_CNT_CMN_15_0_b1  CMN_MCU_TIMER1_CONTROL.BF.TIMER1_LO_CNT_CMN_15_0_b1
#define reg_TIMER1_HI_CNT_CMN_15_0  CMN_MCU_TIMER1_CONTROL.WT.W0
#define reg_TIMER1_LO_CNT_CMN_15_0  CMN_MCU_TIMER1_CONTROL.WT.W1

// 0x006c	CMN_MCU_TIMER2_CONTROL		CMN MCU Ext Timer Control Register 3
typedef union {
	struct {
		uint8_t TIMER2_HI_CNT_CMN_15_0_b0                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER2_HI_CNT_CMN_15_0_b1                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER2_LO_CNT_CMN_15_0_b0                : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER2_LO_CNT_CMN_15_0_b1                : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMN_MCU_TIMER2_CONTROL_t;
__xdata __at( 0xa36c ) volatile CMN_MCU_TIMER2_CONTROL_t CMN_MCU_TIMER2_CONTROL;
#define reg_TIMER2_HI_CNT_CMN_15_0_b0  CMN_MCU_TIMER2_CONTROL.BF.TIMER2_HI_CNT_CMN_15_0_b0
#define reg_TIMER2_HI_CNT_CMN_15_0_b1  CMN_MCU_TIMER2_CONTROL.BF.TIMER2_HI_CNT_CMN_15_0_b1
#define reg_TIMER2_LO_CNT_CMN_15_0_b0  CMN_MCU_TIMER2_CONTROL.BF.TIMER2_LO_CNT_CMN_15_0_b0
#define reg_TIMER2_LO_CNT_CMN_15_0_b1  CMN_MCU_TIMER2_CONTROL.BF.TIMER2_LO_CNT_CMN_15_0_b1
#define reg_TIMER2_HI_CNT_CMN_15_0  CMN_MCU_TIMER2_CONTROL.WT.W0
#define reg_TIMER2_LO_CNT_CMN_15_0  CMN_MCU_TIMER2_CONTROL.WT.W1

// 0x0070	CMN_MCU_TIMER3_CONTROL		CMN MCU Ext Timer Control Register 4
typedef union {
	struct {
		uint8_t TIMER3_HI_CNT_CMN_15_0_b0                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER3_HI_CNT_CMN_15_0_b1                : 8;	/* [15:0]     r/w 16'h01*/
		uint8_t TIMER3_LO_CNT_CMN_15_0_b0                : 8;	/*[31:16]     r/w 16'h01*/
		uint8_t TIMER3_LO_CNT_CMN_15_0_b1                : 8;	/*[31:16]     r/w 16'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMN_MCU_TIMER3_CONTROL_t;
__xdata __at( 0xa370 ) volatile CMN_MCU_TIMER3_CONTROL_t CMN_MCU_TIMER3_CONTROL;
#define reg_TIMER3_HI_CNT_CMN_15_0_b0  CMN_MCU_TIMER3_CONTROL.BF.TIMER3_HI_CNT_CMN_15_0_b0
#define reg_TIMER3_HI_CNT_CMN_15_0_b1  CMN_MCU_TIMER3_CONTROL.BF.TIMER3_HI_CNT_CMN_15_0_b1
#define reg_TIMER3_LO_CNT_CMN_15_0_b0  CMN_MCU_TIMER3_CONTROL.BF.TIMER3_LO_CNT_CMN_15_0_b0
#define reg_TIMER3_LO_CNT_CMN_15_0_b1  CMN_MCU_TIMER3_CONTROL.BF.TIMER3_LO_CNT_CMN_15_0_b1
#define reg_TIMER3_HI_CNT_CMN_15_0  CMN_MCU_TIMER3_CONTROL.WT.W0
#define reg_TIMER3_LO_CNT_CMN_15_0  CMN_MCU_TIMER3_CONTROL.WT.W1

// 0x0074	CMN_MCU_TIMER_CTRL_2_LANE		CMN MCU Ext Timer Control Register 8
typedef union {
	struct {
		uint8_t PWM0_COUNTER_CMN_30_0_b0                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM0_COUNTER_CMN_30_0_b1                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM0_COUNTER_CMN_30_0_b2                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM0_COUNTER_CMN_30_0_b3                 : 7;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM0_EN_CMN                              : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_TIMER_CTRL_2_LANE_t;
__xdata __at( 0xa374 ) volatile CMN_MCU_TIMER_CTRL_2_LANE_t CMN_MCU_TIMER_CTRL_2_LANE;
#define reg_PWM0_COUNTER_CMN_30_0_b0  CMN_MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_CMN_30_0_b0
#define reg_PWM0_COUNTER_CMN_30_0_b1  CMN_MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_CMN_30_0_b1
#define reg_PWM0_COUNTER_CMN_30_0_b2  CMN_MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_CMN_30_0_b2
#define reg_PWM0_COUNTER_CMN_30_0_b3  CMN_MCU_TIMER_CTRL_2_LANE.BF.PWM0_COUNTER_CMN_30_0_b3
#define reg_PWM0_EN_CMN  CMN_MCU_TIMER_CTRL_2_LANE.BF.PWM0_EN_CMN

// 0x0078	CMN_MCU_TIMER_CTRL_3_LANE		CMN MCU Ext Timer Control Register 9
typedef union {
	struct {
		uint8_t PWM1_COUNTER_CMN_30_0_b0                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM1_COUNTER_CMN_30_0_b1                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM1_COUNTER_CMN_30_0_b2                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM1_COUNTER_CMN_30_0_b3                 : 7;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM1_EN_CMN                              : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_TIMER_CTRL_3_LANE_t;
__xdata __at( 0xa378 ) volatile CMN_MCU_TIMER_CTRL_3_LANE_t CMN_MCU_TIMER_CTRL_3_LANE;
#define reg_PWM1_COUNTER_CMN_30_0_b0  CMN_MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_CMN_30_0_b0
#define reg_PWM1_COUNTER_CMN_30_0_b1  CMN_MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_CMN_30_0_b1
#define reg_PWM1_COUNTER_CMN_30_0_b2  CMN_MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_CMN_30_0_b2
#define reg_PWM1_COUNTER_CMN_30_0_b3  CMN_MCU_TIMER_CTRL_3_LANE.BF.PWM1_COUNTER_CMN_30_0_b3
#define reg_PWM1_EN_CMN  CMN_MCU_TIMER_CTRL_3_LANE.BF.PWM1_EN_CMN

// 0x007c	CMN_MCU_TIMER_CTRL_4_LANE		CMN_MCU Ext Timer Control Register 10
typedef union {
	struct {
		uint8_t PWM2_COUNTER_CMN_30_0_b0                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM2_COUNTER_CMN_30_0_b1                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM2_COUNTER_CMN_30_0_b2                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM2_COUNTER_CMN_30_0_b3                 : 7;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM2_EN_CMN                              : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_TIMER_CTRL_4_LANE_t;
__xdata __at( 0xa37c ) volatile CMN_MCU_TIMER_CTRL_4_LANE_t CMN_MCU_TIMER_CTRL_4_LANE;
#define reg_PWM2_COUNTER_CMN_30_0_b0  CMN_MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_CMN_30_0_b0
#define reg_PWM2_COUNTER_CMN_30_0_b1  CMN_MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_CMN_30_0_b1
#define reg_PWM2_COUNTER_CMN_30_0_b2  CMN_MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_CMN_30_0_b2
#define reg_PWM2_COUNTER_CMN_30_0_b3  CMN_MCU_TIMER_CTRL_4_LANE.BF.PWM2_COUNTER_CMN_30_0_b3
#define reg_PWM2_EN_CMN  CMN_MCU_TIMER_CTRL_4_LANE.BF.PWM2_EN_CMN

// 0x0080	CMN_MCU_TIMER_CTRL_5_LANE		CMN MCU Ext Timer Control Register 11
typedef union {
	struct {
		uint8_t PWM3_COUNTER_CMN_30_0_b0                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM3_COUNTER_CMN_30_0_b1                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM3_COUNTER_CMN_30_0_b2                 : 8;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM3_COUNTER_CMN_30_0_b3                 : 7;	/* [30:0]     r/w 31'h14*/
		uint8_t PWM3_EN_CMN                              : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_TIMER_CTRL_5_LANE_t;
__xdata __at( 0xa380 ) volatile CMN_MCU_TIMER_CTRL_5_LANE_t CMN_MCU_TIMER_CTRL_5_LANE;
#define reg_PWM3_COUNTER_CMN_30_0_b0  CMN_MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_CMN_30_0_b0
#define reg_PWM3_COUNTER_CMN_30_0_b1  CMN_MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_CMN_30_0_b1
#define reg_PWM3_COUNTER_CMN_30_0_b2  CMN_MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_CMN_30_0_b2
#define reg_PWM3_COUNTER_CMN_30_0_b3  CMN_MCU_TIMER_CTRL_5_LANE.BF.PWM3_COUNTER_CMN_30_0_b3
#define reg_PWM3_EN_CMN  CMN_MCU_TIMER_CTRL_5_LANE.BF.PWM3_EN_CMN

// 0x0084	CMN_ISR_1		MCU ISR Register 1
typedef union {
	struct {
		uint8_t LANE0_INT_ISR                            : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t LANE1_INT_ISR                            : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t LANE2_INT_ISR                            : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t LANE3_INT_ISR                            : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_ISR_1_t;
__xdata __at( 0xa384 ) volatile CMN_ISR_1_t CMN_ISR_1;
#define reg_LANE0_INT_ISR  CMN_ISR_1.BF.LANE0_INT_ISR
#define reg_LANE1_INT_ISR  CMN_ISR_1.BF.LANE1_INT_ISR
#define reg_LANE2_INT_ISR  CMN_ISR_1.BF.LANE2_INT_ISR
#define reg_LANE3_INT_ISR  CMN_ISR_1.BF.LANE3_INT_ISR

// 0x0088	CMN_ISR_MASK_1		MCU ISR Mask Register 1
typedef union {
	struct {
		uint8_t LANE0_INT_MASK                           : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t LANE1_INT_MASK                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t LANE2_INT_MASK                           : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t LANE3_INT_MASK                           : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_ISR_MASK_1_t;
__xdata __at( 0xa388 ) volatile CMN_ISR_MASK_1_t CMN_ISR_MASK_1;
#define reg_LANE0_INT_MASK  CMN_ISR_MASK_1.BF.LANE0_INT_MASK
#define reg_LANE1_INT_MASK  CMN_ISR_MASK_1.BF.LANE1_INT_MASK
#define reg_LANE2_INT_MASK  CMN_ISR_MASK_1.BF.LANE2_INT_MASK
#define reg_LANE3_INT_MASK  CMN_ISR_MASK_1.BF.LANE3_INT_MASK

// 0x008c	CMN_ISR_CLEAR_1		MCU ISR Clear Register 1
typedef union {
	struct {
		uint8_t LANE0_INT_ISR_CLEAR                      : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t LANE1_INT_ISR_CLEAR                      : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t LANE2_INT_ISR_CLEAR                      : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t LANE3_INT_ISR_CLEAR                      : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_ISR_CLEAR_1_t;
__xdata __at( 0xa38c ) volatile CMN_ISR_CLEAR_1_t CMN_ISR_CLEAR_1;
#define reg_LANE0_INT_ISR_CLEAR  CMN_ISR_CLEAR_1.BF.LANE0_INT_ISR_CLEAR
#define reg_LANE1_INT_ISR_CLEAR  CMN_ISR_CLEAR_1.BF.LANE1_INT_ISR_CLEAR
#define reg_LANE2_INT_ISR_CLEAR  CMN_ISR_CLEAR_1.BF.LANE2_INT_ISR_CLEAR
#define reg_LANE3_INT_ISR_CLEAR  CMN_ISR_CLEAR_1.BF.LANE3_INT_ISR_CLEAR

// 0x0090	SET_LANE_ISR		MCU  INT Register 1
typedef union {
	struct {
		uint8_t SET_INT_ISR_LANE0                        : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SET_INT_ISR_LANE1                        : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SET_INT_ISR_LANE2                        : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SET_INT_ISR_LANE3                        : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SET_LANE_ISR_t;
__xdata __at( 0xa390 ) volatile SET_LANE_ISR_t SET_LANE_ISR;
#define reg_SET_INT_ISR_LANE0  SET_LANE_ISR.BF.SET_INT_ISR_LANE0
#define reg_SET_INT_ISR_LANE1  SET_LANE_ISR.BF.SET_INT_ISR_LANE1
#define reg_SET_INT_ISR_LANE2  SET_LANE_ISR.BF.SET_INT_ISR_LANE2
#define reg_SET_INT_ISR_LANE3  SET_LANE_ISR.BF.SET_INT_ISR_LANE3

// 0x0094	CMN_MCU_GPIO		CMN MCU GPIO Control Register
typedef union {
	struct {
		uint8_t PIN_GPI_RD_CMN_7_0                       : 8;	/*  [7:0]       r   0*/
		uint8_t PIN_GPO_RD_CMN_7_0                       : 8;	/* [15:8]       r   0*/
		uint8_t PIN_GPO_CMN_7_0                          : 8;	/*[23:16]     r/w   0*/
		uint8_t GPO_SEL_CMN                              : 1;	/*     24     r/w   0*/
		uint8_t GPI_CMN_FM_REG                           : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_MCU_GPIO_t;
__xdata __at( 0xa394 ) volatile CMN_MCU_GPIO_t CMN_MCU_GPIO;
#define reg_PIN_GPI_RD_CMN_7_0  CMN_MCU_GPIO.BF.PIN_GPI_RD_CMN_7_0
#define reg_PIN_GPO_RD_CMN_7_0  CMN_MCU_GPIO.BF.PIN_GPO_RD_CMN_7_0
#define reg_PIN_GPO_CMN_7_0  CMN_MCU_GPIO.BF.PIN_GPO_CMN_7_0
#define reg_GPO_SEL_CMN  CMN_MCU_GPIO.BF.GPO_SEL_CMN
#define reg_GPI_CMN_FM_REG  CMN_MCU_GPIO.BF.GPI_CMN_FM_REG

// 0x0098	CMN_CACHE_DEBUG0		CMN Cache Control Debug Register 0
typedef union {
	struct {
		uint8_t LINE_TAG_CMN_8_0_b0                      : 8;	/*  [8:0]       r 9'h0*/
		uint8_t LINE_TAG_CMN_8_0_b1                      : 1;	/*  [8:0]       r 9'h0*/
		uint8_t LINE_TAG_SEL_CMN_4_0                     : 5;	/* [13:9]     r/w 5'h0*/
		uint8_t MEM_LINE_SEL0_CMN_4_0_b0                 : 2;	/*[18:14]     r/w 5'h0*/
		uint8_t MEM_LINE_SEL0_CMN_4_0_b1                 : 3;	/*[18:14]     r/w 5'h0*/
		uint8_t MEM_LINE_SEL1_CMN_4_0                    : 5;	/*[23:19]     r/w 5'h0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t INT0_ENABLE_CMN                          : 1;	/*     25     r/w   1*/
		uint8_t INT2_ENABLE_CMN                          : 1;	/*     26     r/w   1*/
		uint8_t INT3_ENABLE_CMN                          : 1;	/*     27     r/w   1*/
		uint8_t INT4_ENABLE_CMN                          : 1;	/*     28     r/w   1*/
		uint8_t INT5_ENABLE_CMN                          : 1;	/*     29     r/w   1*/
		uint8_t INT6_ENABLE_CMN                          : 1;	/*     30     r/w   1*/
		uint8_t INT7_ENABLE_CMN                          : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_CACHE_DEBUG0_t;
__xdata __at( 0xa398 ) volatile CMN_CACHE_DEBUG0_t CMN_CACHE_DEBUG0;
#define reg_LINE_TAG_CMN_8_0_b0  CMN_CACHE_DEBUG0.BF.LINE_TAG_CMN_8_0_b0
#define reg_LINE_TAG_CMN_8_0_b1  CMN_CACHE_DEBUG0.BF.LINE_TAG_CMN_8_0_b1
#define reg_LINE_TAG_SEL_CMN_4_0  CMN_CACHE_DEBUG0.BF.LINE_TAG_SEL_CMN_4_0
#define reg_MEM_LINE_SEL0_CMN_4_0_b0  CMN_CACHE_DEBUG0.BF.MEM_LINE_SEL0_CMN_4_0_b0
#define reg_MEM_LINE_SEL0_CMN_4_0_b1  CMN_CACHE_DEBUG0.BF.MEM_LINE_SEL0_CMN_4_0_b1
#define reg_MEM_LINE_SEL1_CMN_4_0  CMN_CACHE_DEBUG0.BF.MEM_LINE_SEL1_CMN_4_0
#define reg_INT0_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT0_ENABLE_CMN
#define reg_INT2_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT2_ENABLE_CMN
#define reg_INT3_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT3_ENABLE_CMN
#define reg_INT4_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT4_ENABLE_CMN
#define reg_INT5_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT5_ENABLE_CMN
#define reg_INT6_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT6_ENABLE_CMN
#define reg_INT7_ENABLE_CMN  CMN_CACHE_DEBUG0.BF.INT7_ENABLE_CMN

// 0x009c	CMN_CACHE_DEBUG1		CMN Cache Control Debug Register 1
typedef union {
	struct {
		uint8_t MISS_LINE_SEL0_CMN_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t MISS_LINE_SEL1_CMN_4_0_b0                : 3;	/*  [9:5]     r/w 5'h0*/
		uint8_t MISS_LINE_SEL1_CMN_4_0_b1                : 2;	/*  [9:5]     r/w 5'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t GPI_CMN_7_0                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_CACHE_DEBUG1_t;
__xdata __at( 0xa39c ) volatile CMN_CACHE_DEBUG1_t CMN_CACHE_DEBUG1;
#define reg_MISS_LINE_SEL0_CMN_4_0  CMN_CACHE_DEBUG1.BF.MISS_LINE_SEL0_CMN_4_0
#define reg_MISS_LINE_SEL1_CMN_4_0_b0  CMN_CACHE_DEBUG1.BF.MISS_LINE_SEL1_CMN_4_0_b0
#define reg_MISS_LINE_SEL1_CMN_4_0_b1  CMN_CACHE_DEBUG1.BF.MISS_LINE_SEL1_CMN_4_0_b1
#define reg_GPI_CMN_7_0  CMN_CACHE_DEBUG1.BF.GPI_CMN_7_0

// 0x00a0	MCU_SDT_CMN		CMN MCU Watch Dong Timer Control Register 1
typedef union {
	struct {
		uint8_t MCU_WDT_CNT_HI_CMN_14_0_b0               : 8;	/* [14:0]     r/w 15'h400*/
		uint8_t MCU_WDT_CNT_HI_CMN_14_0_b1               : 7;	/* [14:0]     r/w 15'h400*/
		uint8_t MCU_WDT_EN_CMN                           : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[30:16]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:16]     r/w   0*/
		uint8_t MCU_WDT_RESET_CMN                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_SDT_CMN_t;
__xdata __at( 0xa3a0 ) volatile MCU_SDT_CMN_t MCU_SDT_CMN;
#define reg_MCU_WDT_CNT_HI_CMN_14_0_b0  MCU_SDT_CMN.BF.MCU_WDT_CNT_HI_CMN_14_0_b0
#define reg_MCU_WDT_CNT_HI_CMN_14_0_b1  MCU_SDT_CMN.BF.MCU_WDT_CNT_HI_CMN_14_0_b1
#define reg_MCU_WDT_EN_CMN  MCU_SDT_CMN.BF.MCU_WDT_EN_CMN
#define reg_MCU_WDT_RESET_CMN  MCU_SDT_CMN.BF.MCU_WDT_RESET_CMN

// 0x00a4	XDATA_MEM_CHECKSUM_CMN_0		XDATA MEMORY CMN CHECKSUM Registers 0
typedef union {
	struct {
		uint8_t XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b0       : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b1       : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b2       : 8;	/* [31:0]     r/w 32'hffffffff*/
		uint8_t XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b3       : 8;	/* [31:0]     r/w 32'hffffffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} XDATA_MEM_CHECKSUM_CMN_0_t;
__xdata __at( 0xa3a4 ) volatile XDATA_MEM_CHECKSUM_CMN_0_t XDATA_MEM_CHECKSUM_CMN_0;
#define reg_XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b0  XDATA_MEM_CHECKSUM_CMN_0.BF.XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b0
#define reg_XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b1  XDATA_MEM_CHECKSUM_CMN_0.BF.XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b1
#define reg_XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b2  XDATA_MEM_CHECKSUM_CMN_0.BF.XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b2
#define reg_XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b3  XDATA_MEM_CHECKSUM_CMN_0.BF.XDATA_MEM_CHECKSUM_EXP_CMN_31_0_b3

// 0x00a8	XDATA_MEM_CHECKSUM_CMN_1		XDATA MEMORY CMN CHECKSUM Registers 1
typedef union {
	struct {
		uint8_t XDATA_MEM_CHECKSUM_CMN_31_0_b0           : 8;	/* [31:0]       r 32'h0*/
		uint8_t XDATA_MEM_CHECKSUM_CMN_31_0_b1           : 8;	/* [31:0]       r 32'h0*/
		uint8_t XDATA_MEM_CHECKSUM_CMN_31_0_b2           : 8;	/* [31:0]       r 32'h0*/
		uint8_t XDATA_MEM_CHECKSUM_CMN_31_0_b3           : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} XDATA_MEM_CHECKSUM_CMN_1_t;
__xdata __at( 0xa3a8 ) volatile XDATA_MEM_CHECKSUM_CMN_1_t XDATA_MEM_CHECKSUM_CMN_1;
#define reg_XDATA_MEM_CHECKSUM_CMN_31_0_b0  XDATA_MEM_CHECKSUM_CMN_1.BF.XDATA_MEM_CHECKSUM_CMN_31_0_b0
#define reg_XDATA_MEM_CHECKSUM_CMN_31_0_b1  XDATA_MEM_CHECKSUM_CMN_1.BF.XDATA_MEM_CHECKSUM_CMN_31_0_b1
#define reg_XDATA_MEM_CHECKSUM_CMN_31_0_b2  XDATA_MEM_CHECKSUM_CMN_1.BF.XDATA_MEM_CHECKSUM_CMN_31_0_b2
#define reg_XDATA_MEM_CHECKSUM_CMN_31_0_b3  XDATA_MEM_CHECKSUM_CMN_1.BF.XDATA_MEM_CHECKSUM_CMN_31_0_b3

// 0x00ac	XDATA_MEM_CHECKSUM_CMN_2		XDATA MEMORY CMN CHECKSUM Registers 2
typedef union {
	struct {
		uint8_t XDATA_MEM_CHECKSUM_RESET_CMN             : 1;	/*      0     r/w   0*/
		uint8_t XDATA_MEM_CHECKSUM_PASS_CMN              : 1;	/*      1       r   0*/
		uint8_t RESERVED_2                               : 6;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:2]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} XDATA_MEM_CHECKSUM_CMN_2_t;
__xdata __at( 0xa3ac ) volatile XDATA_MEM_CHECKSUM_CMN_2_t XDATA_MEM_CHECKSUM_CMN_2;
#define reg_XDATA_MEM_CHECKSUM_RESET_CMN  XDATA_MEM_CHECKSUM_CMN_2.BF.XDATA_MEM_CHECKSUM_RESET_CMN
#define reg_XDATA_MEM_CHECKSUM_PASS_CMN  XDATA_MEM_CHECKSUM_CMN_2.BF.XDATA_MEM_CHECKSUM_PASS_CMN

// 0x00b0	CMN_ISR_2		MCU ISR Register 2
typedef union {
	struct {
		uint8_t PHY_MCU_REMOTE_REQ_ISR                   : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PHY_MCU_REMOTE_ACK_ISR                   : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_ISR_2_t;
__xdata __at( 0xa3b0 ) volatile CMN_ISR_2_t CMN_ISR_2;
#define reg_PHY_MCU_REMOTE_REQ_ISR  CMN_ISR_2.BF.PHY_MCU_REMOTE_REQ_ISR
#define reg_PHY_MCU_REMOTE_ACK_ISR  CMN_ISR_2.BF.PHY_MCU_REMOTE_ACK_ISR

// 0x00b4	CMN_ISR_MASK_2		MCU ISR Mask Register 2
typedef union {
	struct {
		uint8_t PHY_MCU_REMOTE_REQ_MASK                  : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PHY_MCU_REMOTE_ACK_MASK                  : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_ISR_MASK_2_t;
__xdata __at( 0xa3b4 ) volatile CMN_ISR_MASK_2_t CMN_ISR_MASK_2;
#define reg_PHY_MCU_REMOTE_REQ_MASK  CMN_ISR_MASK_2.BF.PHY_MCU_REMOTE_REQ_MASK
#define reg_PHY_MCU_REMOTE_ACK_MASK  CMN_ISR_MASK_2.BF.PHY_MCU_REMOTE_ACK_MASK

// 0x00b8	CMN_ISR_CLEAR_2		MCU ISR Clear Register 2
typedef union {
	struct {
		uint8_t PHY_MCU_REMOTE_REQ_ISR_CLEAR             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PHY_MCU_REMOTE_ACK_ISR_CLEAR             : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_ISR_CLEAR_2_t;
__xdata __at( 0xa3b8 ) volatile CMN_ISR_CLEAR_2_t CMN_ISR_CLEAR_2;
#define reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR  CMN_ISR_CLEAR_2.BF.PHY_MCU_REMOTE_REQ_ISR_CLEAR
#define reg_PHY_MCU_REMOTE_ACK_ISR_CLEAR  CMN_ISR_CLEAR_2.BF.PHY_MCU_REMOTE_ACK_ISR_CLEAR

// 0x00f8	CID_REG0		Chip ID
typedef union {
	struct {
		uint8_t CID2_7_0                                 : 8;	/*  [7:0]       r 8'h10*/
		uint8_t CID3_1_0                                 : 2;	/*  [9:8]       r 2'h3*/
		uint8_t CID3_3_2                                 : 2;	/*[11:10]       r 2'h3*/
		uint8_t CID3_5_4                                 : 2;	/*[13:12]       r 2'h0*/
		uint8_t CID3_7_6                                 : 2;	/*[15:14]       r 2'h1*/
		uint8_t CID1_3_0                                 : 4;	/*[19:16]       r   0*/
		uint8_t CID1_7_4                                 : 4;	/*[23:20]       r   0*/
		uint8_t CID0_3_0                                 : 4;	/*[27:24]       r 4'h3*/
		uint8_t CID0_7_4                                 : 4;	/*[31:28]       r 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CID_REG0_t;
__xdata __at( 0xa3f8 ) volatile CID_REG0_t CID_REG0;
#define reg_CID2_7_0  CID_REG0.BF.CID2_7_0
#define reg_CID3_1_0  CID_REG0.BF.CID3_1_0
#define reg_CID3_3_2  CID_REG0.BF.CID3_3_2
#define reg_CID3_5_4  CID_REG0.BF.CID3_5_4
#define reg_CID3_7_6  CID_REG0.BF.CID3_7_6
#define reg_CID1_3_0  CID_REG0.BF.CID1_3_0
#define reg_CID1_7_4  CID_REG0.BF.CID1_7_4
#define reg_CID0_3_0  CID_REG0.BF.CID0_3_0
#define reg_CID0_7_4  CID_REG0.BF.CID0_7_4

// 0x00fc	CID_REG1		_field description_
typedef union {
	struct {
		uint8_t ANA_ID_15_0_b0                           : 8;	/* [15:0]       r 16'h0000*/
		uint8_t ANA_ID_15_0_b1                           : 8;	/* [15:0]       r 16'h0000*/
		uint8_t DIG_ID_7_0                               : 8;	/*[23:16]       r 8'h10*/
		uint8_t RESERVED_24                              : 5;	/*[28:24]     r/w   0*/
		uint8_t PHY_LANE_NUM_2_0                         : 3;	/*[31:29]       r 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CID_REG1_t;
__xdata __at( 0xa3fc ) volatile CID_REG1_t CID_REG1;
#define reg_ANA_ID_15_0_b0  CID_REG1.BF.ANA_ID_15_0_b0
#define reg_ANA_ID_15_0_b1  CID_REG1.BF.ANA_ID_15_0_b1
#define reg_DIG_ID_7_0  CID_REG1.BF.DIG_ID_7_0
#define reg_PHY_LANE_NUM_2_0  CID_REG1.BF.PHY_LANE_NUM_2_0
#define reg_ANA_ID_15_0  CID_REG1.WT.W0

#endif
