#ifndef PHY_REG_C_RX_EQ_TOP_LANE_H
#define PHY_REG_C_RX_EQ_TOP_LANE_H



// 0x0000	RX_EQ_REG0		RX EQ Register
typedef union {
	struct {
		uint8_t RX_TH_SEL_LANE_1_0                       : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RX_RATE_MODE_LANE_1_0                    : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t RX_PAM2_EN_LANE                          : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RX_EQ_SQ_RELEASE_EN_LANE                 : 1;	/*      8     r/w   0*/
		uint8_t RX_EQ_SQ_PROT_DIS_LANE                   : 1;	/*      9     r/w   0*/
		uint8_t RX_EQ_SQ_RELEASE_MODE_LANE_1_0           : 2;	/*[11:10]     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EQ_REG0_t;
__xdata __at( 0x4000 ) volatile RX_EQ_REG0_t RX_EQ_REG0;
#define reg_RX_TH_SEL_LANE_1_0  RX_EQ_REG0.BF.RX_TH_SEL_LANE_1_0
#define reg_RX_RATE_MODE_LANE_1_0  RX_EQ_REG0.BF.RX_RATE_MODE_LANE_1_0
#define reg_RX_PAM2_EN_LANE  RX_EQ_REG0.BF.RX_PAM2_EN_LANE
#define reg_RX_EQ_SQ_RELEASE_EN_LANE  RX_EQ_REG0.BF.RX_EQ_SQ_RELEASE_EN_LANE
#define reg_RX_EQ_SQ_PROT_DIS_LANE  RX_EQ_REG0.BF.RX_EQ_SQ_PROT_DIS_LANE
#define reg_RX_EQ_SQ_RELEASE_MODE_LANE_1_0  RX_EQ_REG0.BF.RX_EQ_SQ_RELEASE_MODE_LANE_1_0

// 0x0004	RX_EQ_REG1		RX EQ Register
typedef union {
	struct {
		uint8_t RX_EQ_PAT_PROT_CORR_TH_LANE_10_0_b0      : 8;	/* [10:0]     r/w 11'hf0*/
		uint8_t RX_EQ_PAT_PROT_CORR_TH_LANE_10_0_b1      : 3;	/* [10:0]     r/w 11'hf0*/
		uint8_t RX_EQ_PAT_PROT_CORR_BIT_SEL_LANE         : 1;	/*     11     r/w   0*/
		uint8_t RX_EQ_PAT_PROT_CORR_DIS_LANE             : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_EQ_PAT_PROT_MSB_LSB_TH_LANE_6_0       : 7;	/*[22:16]     r/w 7'h30*/
		uint8_t RX_EQ_PAT_PROT_MSB_LSB_DIS_LANE          : 1;	/*     23     r/w   0*/
		uint8_t RX_EQ_PAT_PROT_SIZE_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RX_EQ_PAT_PROT_EN_LANE                   : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EQ_REG1_t;
__xdata __at( 0x4004 ) volatile RX_EQ_REG1_t RX_EQ_REG1;
#define reg_RX_EQ_PAT_PROT_CORR_TH_LANE_10_0_b0  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_CORR_TH_LANE_10_0_b0
#define reg_RX_EQ_PAT_PROT_CORR_TH_LANE_10_0_b1  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_CORR_TH_LANE_10_0_b1
#define reg_RX_EQ_PAT_PROT_CORR_BIT_SEL_LANE  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_CORR_BIT_SEL_LANE
#define reg_RX_EQ_PAT_PROT_CORR_DIS_LANE  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_CORR_DIS_LANE
#define reg_RX_EQ_PAT_PROT_MSB_LSB_TH_LANE_6_0  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_MSB_LSB_TH_LANE_6_0
#define reg_RX_EQ_PAT_PROT_MSB_LSB_DIS_LANE  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_MSB_LSB_DIS_LANE
#define reg_RX_EQ_PAT_PROT_SIZE_LANE_1_0  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_SIZE_LANE_1_0
#define reg_RX_EQ_PAT_PROT_EN_LANE  RX_EQ_REG1.BF.RX_EQ_PAT_PROT_EN_LANE

// 0x0008	RX_EQ_REG2		RX EQ Register
typedef union {
	struct {
		uint8_t RX_EQ_PAT_PROT_HISTORY_LANE_15_0_b0      : 8;	/* [15:0]       r   0*/
		uint8_t RX_EQ_PAT_PROT_HISTORY_LANE_15_0_b1      : 8;	/* [15:0]       r   0*/
		uint8_t RX_EQ_PAT_PROT_MSB_LSB_STATUS_LANE       : 1;	/*     16       r   0*/
		uint8_t RX_EQ_PAT_PROT_CORR_STATUS_LANE          : 1;	/*     17       r   0*/
		uint8_t RX_EQ_PAT_PROT_STATUS_LANE               : 1;	/*     18       r   0*/
		uint8_t RX_EQ_PAT_PROT_RQ_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_EQ_REG2_t;
__xdata __at( 0x4008 ) volatile RX_EQ_REG2_t RX_EQ_REG2;
#define reg_RX_EQ_PAT_PROT_HISTORY_LANE_15_0_b0  RX_EQ_REG2.BF.RX_EQ_PAT_PROT_HISTORY_LANE_15_0_b0
#define reg_RX_EQ_PAT_PROT_HISTORY_LANE_15_0_b1  RX_EQ_REG2.BF.RX_EQ_PAT_PROT_HISTORY_LANE_15_0_b1
#define reg_RX_EQ_PAT_PROT_MSB_LSB_STATUS_LANE  RX_EQ_REG2.BF.RX_EQ_PAT_PROT_MSB_LSB_STATUS_LANE
#define reg_RX_EQ_PAT_PROT_CORR_STATUS_LANE  RX_EQ_REG2.BF.RX_EQ_PAT_PROT_CORR_STATUS_LANE
#define reg_RX_EQ_PAT_PROT_STATUS_LANE  RX_EQ_REG2.BF.RX_EQ_PAT_PROT_STATUS_LANE
#define reg_RX_EQ_PAT_PROT_RQ_LANE  RX_EQ_REG2.BF.RX_EQ_PAT_PROT_RQ_LANE
#define reg_RX_EQ_PAT_PROT_HISTORY_LANE_15_0  RX_EQ_REG2.WT.W0

// 0x000c	RX_EQ_REG3		RX EQ Register
typedef union {
	struct {
		uint8_t RX_EQ_RD_REQ_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:1]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EQ_REG3_t;
__xdata __at( 0x400c ) volatile RX_EQ_REG3_t RX_EQ_REG3;
#define reg_RX_EQ_RD_REQ_LANE  RX_EQ_REG3.BF.RX_EQ_RD_REQ_LANE

// 0x001c	RX_ADC_CLK_REG0		RX ADC Clock Register 0
typedef union {
	struct {
		uint8_t RX_ADC_IF_RST_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t RX_ADC_IF_CLK_EN_LANE                    : 1;	/*      1     r/w   1*/
		uint8_t RX_ADC_IF_CLK_ON_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t RX_DP_DATA_RST_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t RX_DP_DATA_CLK_EN_LANE                   : 1;	/*      4     r/w   1*/
		uint8_t RX_DP_DATA_CLK_ON_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t RX_EQ_MON_RST_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t RX_EQ_MON_CLK_EN_LANE                    : 1;	/*      7     r/w   1*/
		uint8_t RX_EQ_MON_CLK_ON_LANE                    : 1;	/*      8     r/w   0*/
		uint8_t RX_DP_LMS_RST_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t RX_DP_LMS_CLK_EN_LANE                    : 1;	/*     10     r/w   1*/
		uint8_t RX_DP_LMS_CLK_ON_LANE                    : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CLK_REG0_t;
__xdata __at( 0x401c ) volatile RX_ADC_CLK_REG0_t RX_ADC_CLK_REG0;
#define reg_RX_ADC_IF_RST_LANE  RX_ADC_CLK_REG0.BF.RX_ADC_IF_RST_LANE
#define reg_RX_ADC_IF_CLK_EN_LANE  RX_ADC_CLK_REG0.BF.RX_ADC_IF_CLK_EN_LANE
#define reg_RX_ADC_IF_CLK_ON_LANE  RX_ADC_CLK_REG0.BF.RX_ADC_IF_CLK_ON_LANE
#define reg_RX_DP_DATA_RST_LANE  RX_ADC_CLK_REG0.BF.RX_DP_DATA_RST_LANE
#define reg_RX_DP_DATA_CLK_EN_LANE  RX_ADC_CLK_REG0.BF.RX_DP_DATA_CLK_EN_LANE
#define reg_RX_DP_DATA_CLK_ON_LANE  RX_ADC_CLK_REG0.BF.RX_DP_DATA_CLK_ON_LANE
#define reg_RX_EQ_MON_RST_LANE  RX_ADC_CLK_REG0.BF.RX_EQ_MON_RST_LANE
#define reg_RX_EQ_MON_CLK_EN_LANE  RX_ADC_CLK_REG0.BF.RX_EQ_MON_CLK_EN_LANE
#define reg_RX_EQ_MON_CLK_ON_LANE  RX_ADC_CLK_REG0.BF.RX_EQ_MON_CLK_ON_LANE
#define reg_RX_DP_LMS_RST_LANE  RX_ADC_CLK_REG0.BF.RX_DP_LMS_RST_LANE
#define reg_RX_DP_LMS_CLK_EN_LANE  RX_ADC_CLK_REG0.BF.RX_DP_LMS_CLK_EN_LANE
#define reg_RX_DP_LMS_CLK_ON_LANE  RX_ADC_CLK_REG0.BF.RX_DP_LMS_CLK_ON_LANE

#endif
