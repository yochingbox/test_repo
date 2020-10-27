#ifndef PHY_REG_C_RX_EQ_MON_LANE_H
#define PHY_REG_C_RX_EQ_MON_LANE_H



// 0x0018	SIGMNT_REG0		adc_to_dp Signal Monitor Register
typedef union {
	struct {
		uint8_t SIGMNT_ADC_TO_DP_DIFF_SEL_EOM_LANE       : 1;	/*      0     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_DIFF_MODE_EN_LANE       : 1;	/*      1     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_LEN_LANE_3_0            : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t SIGMNT_ADC_TO_DP_DONE_LANE               : 1;	/*      6       r   0*/
		uint8_t SIGMNT_ADC_TO_DP_START_LANE              : 1;	/*      7     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_MODE_LANE               : 1;	/*      8     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_TH2_LANE_6_0            : 7;	/* [15:9]     r/w 7'h0*/
		uint8_t SIGMNT_ADC_TO_DP_ROT_LANE                : 1;	/*     16     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_TH1_LANE_6_0            : 7;	/*[23:17]     r/w 7'h0*/
		uint8_t SIGMNT_ADC_TO_DP_IN_ABS_LANE             : 1;	/*     24     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_CLK_EN_LANE             : 1;	/*     25     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_IDX_SEL_LANE_5_0        : 6;	/*[31:26]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG0_t;
__xdata __at( 0x2618 ) volatile SIGMNT_REG0_t SIGMNT_REG0;
#define reg_SIGMNT_ADC_TO_DP_DIFF_SEL_EOM_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_DIFF_SEL_EOM_LANE
#define reg_SIGMNT_ADC_TO_DP_DIFF_MODE_EN_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_DIFF_MODE_EN_LANE
#define reg_SIGMNT_ADC_TO_DP_LEN_LANE_3_0  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_LEN_LANE_3_0
#define reg_SIGMNT_ADC_TO_DP_DONE_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_DONE_LANE
#define reg_SIGMNT_ADC_TO_DP_START_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_START_LANE
#define reg_SIGMNT_ADC_TO_DP_MODE_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_MODE_LANE
#define reg_SIGMNT_ADC_TO_DP_TH2_LANE_6_0  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_TH2_LANE_6_0
#define reg_SIGMNT_ADC_TO_DP_ROT_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_ROT_LANE
#define reg_SIGMNT_ADC_TO_DP_TH1_LANE_6_0  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_TH1_LANE_6_0
#define reg_SIGMNT_ADC_TO_DP_IN_ABS_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_IN_ABS_LANE
#define reg_SIGMNT_ADC_TO_DP_CLK_EN_LANE  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_CLK_EN_LANE
#define reg_SIGMNT_ADC_TO_DP_IDX_SEL_LANE_5_0  SIGMNT_REG0.BF.SIGMNT_ADC_TO_DP_IDX_SEL_LANE_5_0

// 0x001c	SIGMNT_REG1		adc_to_dp Signal Monitor Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t SIGMNT_ADC_TO_DP_DIFF_ADC_SEL_LANE_2_0   : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t SIGMNT_ADC_TO_DP_AVE_LANE_2_0            : 3;	/*  [7:5]       r 3'h0*/
		uint8_t SIGMNT_ADC_TO_DP_AVE_LANE_10_3           : 8;	/* [15:8]       r 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_AVE_LANE_18_11          : 8;	/*[23:16]       r 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_AVE_LANE_26_19          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG1_t;
__xdata __at( 0x261c ) volatile SIGMNT_REG1_t SIGMNT_REG1;
#define reg_SIGMNT_ADC_TO_DP_DIFF_ADC_SEL_LANE_2_0  SIGMNT_REG1.BF.SIGMNT_ADC_TO_DP_DIFF_ADC_SEL_LANE_2_0
#define reg_SIGMNT_ADC_TO_DP_AVE_LANE_2_0  SIGMNT_REG1.BF.SIGMNT_ADC_TO_DP_AVE_LANE_2_0
#define reg_SIGMNT_ADC_TO_DP_AVE_LANE_10_3  SIGMNT_REG1.BF.SIGMNT_ADC_TO_DP_AVE_LANE_10_3
#define reg_SIGMNT_ADC_TO_DP_AVE_LANE_18_11  SIGMNT_REG1.BF.SIGMNT_ADC_TO_DP_AVE_LANE_18_11
#define reg_SIGMNT_ADC_TO_DP_AVE_LANE_26_19  SIGMNT_REG1.BF.SIGMNT_ADC_TO_DP_AVE_LANE_26_19

// 0x0020	SIGMNT_REG2		adc_to_dp Signal Monitor Register
typedef union {
	struct {
		uint8_t SIGMNT_ADC_TO_DP_CDF_TH2_LANE_15_8       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_CDF_TH2_LANE_19_16      : 4;	/* [11:8]       r 4'h0*/
		uint8_t SIGMNT_ADC_TO_DP_CDF_TH1_LANE_3_0        : 4;	/*[15:12]       r 4'h0*/
		uint8_t SIGMNT_ADC_TO_DP_CDF_TH1_LANE_11_4       : 8;	/*[23:16]       r 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_CDF_TH1_LANE_19_12      : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG2_t;
__xdata __at( 0x2620 ) volatile SIGMNT_REG2_t SIGMNT_REG2;
#define reg_SIGMNT_ADC_TO_DP_CDF_TH2_LANE_15_8  SIGMNT_REG2.BF.SIGMNT_ADC_TO_DP_CDF_TH2_LANE_15_8
#define reg_SIGMNT_ADC_TO_DP_CDF_TH2_LANE_19_16  SIGMNT_REG2.BF.SIGMNT_ADC_TO_DP_CDF_TH2_LANE_19_16
#define reg_SIGMNT_ADC_TO_DP_CDF_TH1_LANE_3_0  SIGMNT_REG2.BF.SIGMNT_ADC_TO_DP_CDF_TH1_LANE_3_0
#define reg_SIGMNT_ADC_TO_DP_CDF_TH1_LANE_11_4  SIGMNT_REG2.BF.SIGMNT_ADC_TO_DP_CDF_TH1_LANE_11_4
#define reg_SIGMNT_ADC_TO_DP_CDF_TH1_LANE_19_12  SIGMNT_REG2.BF.SIGMNT_ADC_TO_DP_CDF_TH1_LANE_19_12

// 0x0024	SIGMNT_REG3		adc_to_dp and shared Signal Monitor Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t SIGMNT_SHARED_CDF_TH1_LANE_3_0           : 4;	/*  [7:4]       r 4'h0*/
		uint8_t SIGMNT_SHARED_CDF_TH1_LANE_11_4          : 8;	/* [15:8]       r 8'h0*/
		uint8_t SIGMNT_SHARED_CDF_TH1_LANE_19_12         : 8;	/*[23:16]       r 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_CDF_TH2_LANE_7_0        : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG3_t;
__xdata __at( 0x2624 ) volatile SIGMNT_REG3_t SIGMNT_REG3;
#define reg_SIGMNT_SHARED_CDF_TH1_LANE_3_0  SIGMNT_REG3.BF.SIGMNT_SHARED_CDF_TH1_LANE_3_0
#define reg_SIGMNT_SHARED_CDF_TH1_LANE_11_4  SIGMNT_REG3.BF.SIGMNT_SHARED_CDF_TH1_LANE_11_4
#define reg_SIGMNT_SHARED_CDF_TH1_LANE_19_12  SIGMNT_REG3.BF.SIGMNT_SHARED_CDF_TH1_LANE_19_12
#define reg_SIGMNT_ADC_TO_DP_CDF_TH2_LANE_7_0  SIGMNT_REG3.BF.SIGMNT_ADC_TO_DP_CDF_TH2_LANE_7_0

// 0x0028	SIGMNT_REG4		shared Signal Monitor Register
typedef union {
	struct {
		uint8_t SIGMNT_SHARED_ROT_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t SIGMNT_SHARED_MODE_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t SIGMNT_SHARED_IN_ABS_LANE                : 1;	/*      2     r/w   0*/
		uint8_t SIGMNT_SHARED_CLK_EN_LANE                : 1;	/*      3     r/w   0*/
		uint8_t SIGMNT_SHARED_LEN_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t SIGMNT_SHARED_IDX_SEL_LANE_5_0           : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t SIGMNT_SHARED_TH2_LANE_8                 : 1;	/*     14     r/w   0*/
		uint8_t SIGMNT_SHARED_TH1_LANE_8                 : 1;	/*     15     r/w   0*/
		uint8_t SIGMNT_SHARED_TH2_LANE_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SIGMNT_SHARED_TH1_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG4_t;
__xdata __at( 0x2628 ) volatile SIGMNT_REG4_t SIGMNT_REG4;
#define reg_SIGMNT_SHARED_ROT_LANE  SIGMNT_REG4.BF.SIGMNT_SHARED_ROT_LANE
#define reg_SIGMNT_SHARED_MODE_LANE  SIGMNT_REG4.BF.SIGMNT_SHARED_MODE_LANE
#define reg_SIGMNT_SHARED_IN_ABS_LANE  SIGMNT_REG4.BF.SIGMNT_SHARED_IN_ABS_LANE
#define reg_SIGMNT_SHARED_CLK_EN_LANE  SIGMNT_REG4.BF.SIGMNT_SHARED_CLK_EN_LANE
#define reg_SIGMNT_SHARED_LEN_LANE_3_0  SIGMNT_REG4.BF.SIGMNT_SHARED_LEN_LANE_3_0
#define reg_SIGMNT_SHARED_IDX_SEL_LANE_5_0  SIGMNT_REG4.BF.SIGMNT_SHARED_IDX_SEL_LANE_5_0
#define reg_SIGMNT_SHARED_TH2_LANE_8  SIGMNT_REG4.BF.SIGMNT_SHARED_TH2_LANE_8
#define reg_SIGMNT_SHARED_TH1_LANE_8  SIGMNT_REG4.BF.SIGMNT_SHARED_TH1_LANE_8
#define reg_SIGMNT_SHARED_TH2_LANE_7_0  SIGMNT_REG4.BF.SIGMNT_SHARED_TH2_LANE_7_0
#define reg_SIGMNT_SHARED_TH1_LANE_7_0  SIGMNT_REG4.BF.SIGMNT_SHARED_TH1_LANE_7_0

// 0x002c	SIGMNT_REG5		shared Signal Monitor Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SIGMNT_SHARED_DONE_LANE                  : 1;	/*      1       r   0*/
		uint8_t SIGMNT_SHARED_START_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t SIGMNT_SHARED_AVE_LANE_4_0               : 5;	/*  [7:3]       r 5'h0*/
		uint8_t SIGMNT_SHARED_AVE_LANE_12_5              : 8;	/* [15:8]       r 8'h0*/
		uint8_t SIGMNT_SHARED_AVE_LANE_20_13             : 8;	/*[23:16]       r 8'h0*/
		uint8_t SIGMNT_SHARED_AVE_LANE_28_21             : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG5_t;
__xdata __at( 0x262c ) volatile SIGMNT_REG5_t SIGMNT_REG5;
#define reg_SIGMNT_SHARED_DONE_LANE  SIGMNT_REG5.BF.SIGMNT_SHARED_DONE_LANE
#define reg_SIGMNT_SHARED_START_LANE  SIGMNT_REG5.BF.SIGMNT_SHARED_START_LANE
#define reg_SIGMNT_SHARED_AVE_LANE_4_0  SIGMNT_REG5.BF.SIGMNT_SHARED_AVE_LANE_4_0
#define reg_SIGMNT_SHARED_AVE_LANE_12_5  SIGMNT_REG5.BF.SIGMNT_SHARED_AVE_LANE_12_5
#define reg_SIGMNT_SHARED_AVE_LANE_20_13  SIGMNT_REG5.BF.SIGMNT_SHARED_AVE_LANE_20_13
#define reg_SIGMNT_SHARED_AVE_LANE_28_21  SIGMNT_REG5.BF.SIGMNT_SHARED_AVE_LANE_28_21

// 0x0030	SIGMNT_REG6		shared Signal Monitor Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [8:0]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:0]     r/w   0*/
		uint8_t SIGMNT_SHARED_SEL_LANE_2_0               : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t SIGMNT_SHARED_CDF_TH2_LANE_3_0           : 4;	/*[15:12]       r 4'h0*/
		uint8_t SIGMNT_SHARED_CDF_TH2_LANE_11_4          : 8;	/*[23:16]       r 8'h0*/
		uint8_t SIGMNT_SHARED_CDF_TH2_LANE_19_12         : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_REG6_t;
__xdata __at( 0x2630 ) volatile SIGMNT_REG6_t SIGMNT_REG6;
#define reg_SIGMNT_SHARED_SEL_LANE_2_0  SIGMNT_REG6.BF.SIGMNT_SHARED_SEL_LANE_2_0
#define reg_SIGMNT_SHARED_CDF_TH2_LANE_3_0  SIGMNT_REG6.BF.SIGMNT_SHARED_CDF_TH2_LANE_3_0
#define reg_SIGMNT_SHARED_CDF_TH2_LANE_11_4  SIGMNT_REG6.BF.SIGMNT_SHARED_CDF_TH2_LANE_11_4
#define reg_SIGMNT_SHARED_CDF_TH2_LANE_19_12  SIGMNT_REG6.BF.SIGMNT_SHARED_CDF_TH2_LANE_19_12

// 0x0034	CHEST_REG0		Channel Estimator Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w   0*/
		uint8_t CHEST_ADC_ROT_LANE                       : 1;	/*      7     r/w   0*/
		uint8_t CHEST_START_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t CHEST_CLK_EN_LANE                        : 1;	/*      9     r/w   0*/
		uint8_t CHEST_MODE2_DCS_SEL_LANE_1_0             : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t CHEST_LEN_LANE_3_0                       : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t CHEST_MODE_LANE_1_0                      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t CHEST_DCS_SEL_LANE_5_0                   : 6;	/*[23:18]     r/w 6'h0*/
		uint8_t CHEST_IN_SEL_LANE_1_0                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t CHEST_ADC_SEL_LANE_5_0                   : 6;	/*[31:26]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CHEST_REG0_t;
__xdata __at( 0x2634 ) volatile CHEST_REG0_t CHEST_REG0;
#define reg_CHEST_ADC_ROT_LANE  CHEST_REG0.BF.CHEST_ADC_ROT_LANE
#define reg_CHEST_START_LANE  CHEST_REG0.BF.CHEST_START_LANE
#define reg_CHEST_CLK_EN_LANE  CHEST_REG0.BF.CHEST_CLK_EN_LANE
#define reg_CHEST_MODE2_DCS_SEL_LANE_1_0  CHEST_REG0.BF.CHEST_MODE2_DCS_SEL_LANE_1_0
#define reg_CHEST_LEN_LANE_3_0  CHEST_REG0.BF.CHEST_LEN_LANE_3_0
#define reg_CHEST_MODE_LANE_1_0  CHEST_REG0.BF.CHEST_MODE_LANE_1_0
#define reg_CHEST_DCS_SEL_LANE_5_0  CHEST_REG0.BF.CHEST_DCS_SEL_LANE_5_0
#define reg_CHEST_IN_SEL_LANE_1_0  CHEST_REG0.BF.CHEST_IN_SEL_LANE_1_0
#define reg_CHEST_ADC_SEL_LANE_5_0  CHEST_REG0.BF.CHEST_ADC_SEL_LANE_5_0

// 0x0038	CHEST_REG1		Channel Estimator Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t CHEST_DONE_LANE                          : 1;	/*      2       r   0*/
		uint8_t CHEST_VAL_LANE_4_0                       : 5;	/*  [7:3]       r 5'h0*/
		uint8_t CHEST_VAL_LANE_12_5                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CHEST_VAL_LANE_20_13                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t CHEST_VAL_LANE_28_21                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CHEST_REG1_t;
__xdata __at( 0x2638 ) volatile CHEST_REG1_t CHEST_REG1;
#define reg_CHEST_DONE_LANE  CHEST_REG1.BF.CHEST_DONE_LANE
#define reg_CHEST_VAL_LANE_4_0  CHEST_REG1.BF.CHEST_VAL_LANE_4_0
#define reg_CHEST_VAL_LANE_12_5  CHEST_REG1.BF.CHEST_VAL_LANE_12_5
#define reg_CHEST_VAL_LANE_20_13  CHEST_REG1.BF.CHEST_VAL_LANE_20_13
#define reg_CHEST_VAL_LANE_28_21  CHEST_REG1.BF.CHEST_VAL_LANE_28_21

// 0x003c	CHEST_REG2		Channel Estimator Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:0]     r/w   0*/
		uint8_t CHEST_MODE2_COUNT_LANE_4_0               : 5;	/*[15:11]       r 5'h0*/
		uint8_t CHEST_MODE2_COUNT_LANE_12_5              : 8;	/*[23:16]       r 8'h0*/
		uint8_t CHEST_MODE2_COUNT_LANE_20_13             : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CHEST_REG2_t;
__xdata __at( 0x263c ) volatile CHEST_REG2_t CHEST_REG2;
#define reg_CHEST_MODE2_COUNT_LANE_4_0  CHEST_REG2.BF.CHEST_MODE2_COUNT_LANE_4_0
#define reg_CHEST_MODE2_COUNT_LANE_12_5  CHEST_REG2.BF.CHEST_MODE2_COUNT_LANE_12_5
#define reg_CHEST_MODE2_COUNT_LANE_20_13  CHEST_REG2.BF.CHEST_MODE2_COUNT_LANE_20_13

// 0x0040	OCM_REG		On Chip Memory Register
typedef union {
	struct {
		uint8_t OCM_LAST_ADDR_LANE_11_0_b0               : 8;	/* [11:0]       r 12'h0*/
		uint8_t OCM_LAST_ADDR_LANE_11_0_b1               : 4;	/* [11:0]       r 12'h0*/
		uint8_t OCM_LAST_ADDR_VALID_LANE                 : 1;	/*     12       r   0*/
		uint8_t OCM_FULL_LANE                            : 1;	/*     13       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t OCM_DECIMATION_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t OCM_INPUT_SELECT_LANE_1_0                : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t OCM_CAPTURE_EN_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t OCM_CAPTURE_MODE_LANE                    : 1;	/*     25     r/w   0*/
		uint8_t OCM_POWER_ON_LANE                        : 1;	/*     26     r/w   0*/
		uint8_t OCM_SFT_RST_NO_REG_LANE                  : 1;	/*     27     r/w   0*/
		uint8_t OCM_RTSEL_LANE_1_0                       : 2;	/*[29:28]     r/w 2'h2*/
		uint8_t OCM_WTSEL_LANE_1_0                       : 2;	/*[31:30]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} OCM_REG_t;
__xdata __at( 0x2640 ) volatile OCM_REG_t OCM_REG;
#define reg_OCM_LAST_ADDR_LANE_11_0_b0  OCM_REG.BF.OCM_LAST_ADDR_LANE_11_0_b0
#define reg_OCM_LAST_ADDR_LANE_11_0_b1  OCM_REG.BF.OCM_LAST_ADDR_LANE_11_0_b1
#define reg_OCM_LAST_ADDR_VALID_LANE  OCM_REG.BF.OCM_LAST_ADDR_VALID_LANE
#define reg_OCM_FULL_LANE  OCM_REG.BF.OCM_FULL_LANE
#define reg_OCM_DECIMATION_LANE_2_0  OCM_REG.BF.OCM_DECIMATION_LANE_2_0
#define reg_OCM_INPUT_SELECT_LANE_1_0  OCM_REG.BF.OCM_INPUT_SELECT_LANE_1_0
#define reg_OCM_CAPTURE_EN_LANE  OCM_REG.BF.OCM_CAPTURE_EN_LANE
#define reg_OCM_CAPTURE_MODE_LANE  OCM_REG.BF.OCM_CAPTURE_MODE_LANE
#define reg_OCM_POWER_ON_LANE  OCM_REG.BF.OCM_POWER_ON_LANE
#define reg_OCM_SFT_RST_NO_REG_LANE  OCM_REG.BF.OCM_SFT_RST_NO_REG_LANE
#define reg_OCM_RTSEL_LANE_1_0  OCM_REG.BF.OCM_RTSEL_LANE_1_0
#define reg_OCM_WTSEL_LANE_1_0  OCM_REG.BF.OCM_WTSEL_LANE_1_0

// 0x0050	EOM_REG0		EOM Register 0
typedef union {
	struct {
		uint8_t EOM_HIST_DELTA_TH_BOT_LANE_6_0           : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t EOM_HIST_DELTA_TH_MID_LANE_7_0           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t EOM_HIST_DELTA_TH_TOP_LANE_6_0           : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t EOM_HIST_LEN_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h1A*/
		uint8_t RX_EQ_EOM_CLK_EN_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t RX_EQ_EOM_CLK_ON_LANE                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG0_t;
__xdata __at( 0x2650 ) volatile EOM_REG0_t EOM_REG0;
#define reg_EOM_HIST_DELTA_TH_BOT_LANE_6_0  EOM_REG0.BF.EOM_HIST_DELTA_TH_BOT_LANE_6_0
#define reg_EOM_HIST_DELTA_TH_MID_LANE_7_0  EOM_REG0.BF.EOM_HIST_DELTA_TH_MID_LANE_7_0
#define reg_EOM_HIST_DELTA_TH_TOP_LANE_6_0  EOM_REG0.BF.EOM_HIST_DELTA_TH_TOP_LANE_6_0
#define reg_EOM_HIST_LEN_LANE_5_0  EOM_REG0.BF.EOM_HIST_LEN_LANE_5_0
#define reg_RX_EQ_EOM_CLK_EN_LANE  EOM_REG0.BF.RX_EQ_EOM_CLK_EN_LANE
#define reg_RX_EQ_EOM_CLK_ON_LANE  EOM_REG0.BF.RX_EQ_EOM_CLK_ON_LANE

// 0x0054	EOM_REG1		EOM Register 1
typedef union {
	struct {
		uint8_t EOM_COEF0_LANE_8_0_b0                    : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF0_LANE_8_0_b1                    : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF1_LANE_8_0_b0                    : 7;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF1_LANE_8_0_b1                    : 2;	/* [17:9]     r/w 9'h0*/
		uint8_t RESERVED_18                              : 5;	/*[22:18]     r/w   0*/
		uint8_t RX_EQ_EOM_RST_LANE                       : 1;	/*     23     r/w   0*/
		uint8_t EOM_ISI_CUR_SEL_LANE_5_0                 : 6;	/*[29:24]     r/w 6'hb*/
		uint8_t EOM_REC_MODE_LANE                        : 1;	/*     30     r/w   0*/
		uint8_t EOM_HIST_EN_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG1_t;
__xdata __at( 0x2654 ) volatile EOM_REG1_t EOM_REG1;
#define reg_EOM_COEF0_LANE_8_0_b0  EOM_REG1.BF.EOM_COEF0_LANE_8_0_b0
#define reg_EOM_COEF0_LANE_8_0_b1  EOM_REG1.BF.EOM_COEF0_LANE_8_0_b1
#define reg_EOM_COEF1_LANE_8_0_b0  EOM_REG1.BF.EOM_COEF1_LANE_8_0_b0
#define reg_EOM_COEF1_LANE_8_0_b1  EOM_REG1.BF.EOM_COEF1_LANE_8_0_b1
#define reg_RX_EQ_EOM_RST_LANE  EOM_REG1.BF.RX_EQ_EOM_RST_LANE
#define reg_EOM_ISI_CUR_SEL_LANE_5_0  EOM_REG1.BF.EOM_ISI_CUR_SEL_LANE_5_0
#define reg_EOM_REC_MODE_LANE  EOM_REG1.BF.EOM_REC_MODE_LANE
#define reg_EOM_HIST_EN_LANE  EOM_REG1.BF.EOM_HIST_EN_LANE

// 0x0058	EOM_REG2		EOM Register 2
typedef union {
	struct {
		uint8_t EOM_COEF2_LANE_8_0_b0                    : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF2_LANE_8_0_b1                    : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF3_LANE_8_0_b0                    : 7;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF3_LANE_8_0_b1                    : 2;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF4_LANE_8_0_b0                    : 6;	/*[26:18]     r/w 9'h0*/
		uint8_t EOM_COEF4_LANE_8_0_b1                    : 3;	/*[26:18]     r/w 9'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG2_t;
__xdata __at( 0x2658 ) volatile EOM_REG2_t EOM_REG2;
#define reg_EOM_COEF2_LANE_8_0_b0  EOM_REG2.BF.EOM_COEF2_LANE_8_0_b0
#define reg_EOM_COEF2_LANE_8_0_b1  EOM_REG2.BF.EOM_COEF2_LANE_8_0_b1
#define reg_EOM_COEF3_LANE_8_0_b0  EOM_REG2.BF.EOM_COEF3_LANE_8_0_b0
#define reg_EOM_COEF3_LANE_8_0_b1  EOM_REG2.BF.EOM_COEF3_LANE_8_0_b1
#define reg_EOM_COEF4_LANE_8_0_b0  EOM_REG2.BF.EOM_COEF4_LANE_8_0_b0
#define reg_EOM_COEF4_LANE_8_0_b1  EOM_REG2.BF.EOM_COEF4_LANE_8_0_b1

// 0x005c	EOM_REG3		EOM Register 3
typedef union {
	struct {
		uint8_t EOM_COEF5_LANE_8_0_b0                    : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF5_LANE_8_0_b1                    : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF6_LANE_8_0_b0                    : 7;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF6_LANE_8_0_b1                    : 2;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF7_LANE_8_0_b0                    : 6;	/*[26:18]     r/w 9'h0*/
		uint8_t EOM_COEF7_LANE_8_0_b1                    : 3;	/*[26:18]     r/w 9'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG3_t;
__xdata __at( 0x265c ) volatile EOM_REG3_t EOM_REG3;
#define reg_EOM_COEF5_LANE_8_0_b0  EOM_REG3.BF.EOM_COEF5_LANE_8_0_b0
#define reg_EOM_COEF5_LANE_8_0_b1  EOM_REG3.BF.EOM_COEF5_LANE_8_0_b1
#define reg_EOM_COEF6_LANE_8_0_b0  EOM_REG3.BF.EOM_COEF6_LANE_8_0_b0
#define reg_EOM_COEF6_LANE_8_0_b1  EOM_REG3.BF.EOM_COEF6_LANE_8_0_b1
#define reg_EOM_COEF7_LANE_8_0_b0  EOM_REG3.BF.EOM_COEF7_LANE_8_0_b0
#define reg_EOM_COEF7_LANE_8_0_b1  EOM_REG3.BF.EOM_COEF7_LANE_8_0_b1

// 0x0060	EOM_REG4		EOM Register 4
typedef union {
	struct {
		uint8_t EOM_COEF8_LANE_8_0_b0                    : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF8_LANE_8_0_b1                    : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF9_LANE_8_0_b0                    : 7;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF9_LANE_8_0_b1                    : 2;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF10_LANE_8_0_b0                   : 6;	/*[26:18]     r/w 9'h0*/
		uint8_t EOM_COEF10_LANE_8_0_b1                   : 3;	/*[26:18]     r/w 9'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG4_t;
__xdata __at( 0x2660 ) volatile EOM_REG4_t EOM_REG4;
#define reg_EOM_COEF8_LANE_8_0_b0  EOM_REG4.BF.EOM_COEF8_LANE_8_0_b0
#define reg_EOM_COEF8_LANE_8_0_b1  EOM_REG4.BF.EOM_COEF8_LANE_8_0_b1
#define reg_EOM_COEF9_LANE_8_0_b0  EOM_REG4.BF.EOM_COEF9_LANE_8_0_b0
#define reg_EOM_COEF9_LANE_8_0_b1  EOM_REG4.BF.EOM_COEF9_LANE_8_0_b1
#define reg_EOM_COEF10_LANE_8_0_b0  EOM_REG4.BF.EOM_COEF10_LANE_8_0_b0
#define reg_EOM_COEF10_LANE_8_0_b1  EOM_REG4.BF.EOM_COEF10_LANE_8_0_b1

// 0x0064	EOM_REG5		EOM Register 5
typedef union {
	struct {
		uint8_t EOM_COEF11_LANE_8_0_b0                   : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF11_LANE_8_0_b1                   : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF12_LANE_8_0_b0                   : 7;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF12_LANE_8_0_b1                   : 2;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF13_LANE_8_0_b0                   : 6;	/*[26:18]     r/w 9'h0*/
		uint8_t EOM_COEF13_LANE_8_0_b1                   : 3;	/*[26:18]     r/w 9'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG5_t;
__xdata __at( 0x2664 ) volatile EOM_REG5_t EOM_REG5;
#define reg_EOM_COEF11_LANE_8_0_b0  EOM_REG5.BF.EOM_COEF11_LANE_8_0_b0
#define reg_EOM_COEF11_LANE_8_0_b1  EOM_REG5.BF.EOM_COEF11_LANE_8_0_b1
#define reg_EOM_COEF12_LANE_8_0_b0  EOM_REG5.BF.EOM_COEF12_LANE_8_0_b0
#define reg_EOM_COEF12_LANE_8_0_b1  EOM_REG5.BF.EOM_COEF12_LANE_8_0_b1
#define reg_EOM_COEF13_LANE_8_0_b0  EOM_REG5.BF.EOM_COEF13_LANE_8_0_b0
#define reg_EOM_COEF13_LANE_8_0_b1  EOM_REG5.BF.EOM_COEF13_LANE_8_0_b1

// 0x0068	EOM_REG6		EOM Register 6
typedef union {
	struct {
		uint8_t EOM_COEF14_LANE_8_0_b0                   : 8;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF14_LANE_8_0_b1                   : 1;	/*  [8:0]     r/w 9'h0*/
		uint8_t EOM_COEF15_LANE_8_0_b0                   : 7;	/* [17:9]     r/w 9'h0*/
		uint8_t EOM_COEF15_LANE_8_0_b1                   : 2;	/* [17:9]     r/w 9'h0*/
		uint8_t RESERVED_18                              : 6;	/*[24:18]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*[24:18]     r/w   0*/
		uint8_t EOM_HIST_DONE_LANE                       : 1;	/*     25       r   0*/
		uint8_t EOM_HIST_TOP_L_SAT_LANE                  : 1;	/*     26       r   0*/
		uint8_t EOM_HIST_TOP_H_SAT_LANE                  : 1;	/*     27       r   0*/
		uint8_t EOM_HIST_MID_L_SAT_LANE                  : 1;	/*     28       r   0*/
		uint8_t EOM_HIST_MID_H_SAT_LANE                  : 1;	/*     29       r   0*/
		uint8_t EOM_HIST_BOT_L_SAT_LANE                  : 1;	/*     30       r   0*/
		uint8_t EOM_HIST_BOT_H_SAT_LANE                  : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG6_t;
__xdata __at( 0x2668 ) volatile EOM_REG6_t EOM_REG6;
#define reg_EOM_COEF14_LANE_8_0_b0  EOM_REG6.BF.EOM_COEF14_LANE_8_0_b0
#define reg_EOM_COEF14_LANE_8_0_b1  EOM_REG6.BF.EOM_COEF14_LANE_8_0_b1
#define reg_EOM_COEF15_LANE_8_0_b0  EOM_REG6.BF.EOM_COEF15_LANE_8_0_b0
#define reg_EOM_COEF15_LANE_8_0_b1  EOM_REG6.BF.EOM_COEF15_LANE_8_0_b1
#define reg_EOM_HIST_DONE_LANE  EOM_REG6.BF.EOM_HIST_DONE_LANE
#define reg_EOM_HIST_TOP_L_SAT_LANE  EOM_REG6.BF.EOM_HIST_TOP_L_SAT_LANE
#define reg_EOM_HIST_TOP_H_SAT_LANE  EOM_REG6.BF.EOM_HIST_TOP_H_SAT_LANE
#define reg_EOM_HIST_MID_L_SAT_LANE  EOM_REG6.BF.EOM_HIST_MID_L_SAT_LANE
#define reg_EOM_HIST_MID_H_SAT_LANE  EOM_REG6.BF.EOM_HIST_MID_H_SAT_LANE
#define reg_EOM_HIST_BOT_L_SAT_LANE  EOM_REG6.BF.EOM_HIST_BOT_L_SAT_LANE
#define reg_EOM_HIST_BOT_H_SAT_LANE  EOM_REG6.BF.EOM_HIST_BOT_H_SAT_LANE

// 0x006c	EOM_REG7		EOM Register 7
typedef union {
	struct {
		uint8_t EOM_HIST_BOT_H_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_BOT_H_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_BOT_H_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_BOT_H_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG7_t;
__xdata __at( 0x266c ) volatile EOM_REG7_t EOM_REG7;
#define reg_EOM_HIST_BOT_H_CNT_LANE_31_0_b0  EOM_REG7.BF.EOM_HIST_BOT_H_CNT_LANE_31_0_b0
#define reg_EOM_HIST_BOT_H_CNT_LANE_31_0_b1  EOM_REG7.BF.EOM_HIST_BOT_H_CNT_LANE_31_0_b1
#define reg_EOM_HIST_BOT_H_CNT_LANE_31_0_b2  EOM_REG7.BF.EOM_HIST_BOT_H_CNT_LANE_31_0_b2
#define reg_EOM_HIST_BOT_H_CNT_LANE_31_0_b3  EOM_REG7.BF.EOM_HIST_BOT_H_CNT_LANE_31_0_b3

// 0x0070	EOM_REG8		EOM Register 8
typedef union {
	struct {
		uint8_t EOM_HIST_BOT_L_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_BOT_L_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_BOT_L_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_BOT_L_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG8_t;
__xdata __at( 0x2670 ) volatile EOM_REG8_t EOM_REG8;
#define reg_EOM_HIST_BOT_L_CNT_LANE_31_0_b0  EOM_REG8.BF.EOM_HIST_BOT_L_CNT_LANE_31_0_b0
#define reg_EOM_HIST_BOT_L_CNT_LANE_31_0_b1  EOM_REG8.BF.EOM_HIST_BOT_L_CNT_LANE_31_0_b1
#define reg_EOM_HIST_BOT_L_CNT_LANE_31_0_b2  EOM_REG8.BF.EOM_HIST_BOT_L_CNT_LANE_31_0_b2
#define reg_EOM_HIST_BOT_L_CNT_LANE_31_0_b3  EOM_REG8.BF.EOM_HIST_BOT_L_CNT_LANE_31_0_b3

// 0x0074	EOM_REG9		EOM Register 9
typedef union {
	struct {
		uint8_t EOM_HIST_MID_H_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_MID_H_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_MID_H_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_MID_H_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG9_t;
__xdata __at( 0x2674 ) volatile EOM_REG9_t EOM_REG9;
#define reg_EOM_HIST_MID_H_CNT_LANE_31_0_b0  EOM_REG9.BF.EOM_HIST_MID_H_CNT_LANE_31_0_b0
#define reg_EOM_HIST_MID_H_CNT_LANE_31_0_b1  EOM_REG9.BF.EOM_HIST_MID_H_CNT_LANE_31_0_b1
#define reg_EOM_HIST_MID_H_CNT_LANE_31_0_b2  EOM_REG9.BF.EOM_HIST_MID_H_CNT_LANE_31_0_b2
#define reg_EOM_HIST_MID_H_CNT_LANE_31_0_b3  EOM_REG9.BF.EOM_HIST_MID_H_CNT_LANE_31_0_b3

// 0x0078	EOM_REG10		EOM Register 10
typedef union {
	struct {
		uint8_t EOM_HIST_MID_L_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_MID_L_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_MID_L_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_MID_L_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG10_t;
__xdata __at( 0x2678 ) volatile EOM_REG10_t EOM_REG10;
#define reg_EOM_HIST_MID_L_CNT_LANE_31_0_b0  EOM_REG10.BF.EOM_HIST_MID_L_CNT_LANE_31_0_b0
#define reg_EOM_HIST_MID_L_CNT_LANE_31_0_b1  EOM_REG10.BF.EOM_HIST_MID_L_CNT_LANE_31_0_b1
#define reg_EOM_HIST_MID_L_CNT_LANE_31_0_b2  EOM_REG10.BF.EOM_HIST_MID_L_CNT_LANE_31_0_b2
#define reg_EOM_HIST_MID_L_CNT_LANE_31_0_b3  EOM_REG10.BF.EOM_HIST_MID_L_CNT_LANE_31_0_b3

// 0x007c	EOM_REG11		EOM Register 11
typedef union {
	struct {
		uint8_t EOM_HIST_TOP_H_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_TOP_H_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_TOP_H_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_TOP_H_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG11_t;
__xdata __at( 0x267c ) volatile EOM_REG11_t EOM_REG11;
#define reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b0  EOM_REG11.BF.EOM_HIST_TOP_H_CNT_LANE_31_0_b0
#define reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b1  EOM_REG11.BF.EOM_HIST_TOP_H_CNT_LANE_31_0_b1
#define reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b2  EOM_REG11.BF.EOM_HIST_TOP_H_CNT_LANE_31_0_b2
#define reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b3  EOM_REG11.BF.EOM_HIST_TOP_H_CNT_LANE_31_0_b3

// 0x0080	EOM_REG12		EOM Register 12
typedef union {
	struct {
		uint8_t EOM_HIST_TOP_L_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_TOP_L_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_TOP_L_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_TOP_L_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG12_t;
__xdata __at( 0x2680 ) volatile EOM_REG12_t EOM_REG12;
#define reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b0  EOM_REG12.BF.EOM_HIST_TOP_L_CNT_LANE_31_0_b0
#define reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b1  EOM_REG12.BF.EOM_HIST_TOP_L_CNT_LANE_31_0_b1
#define reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b2  EOM_REG12.BF.EOM_HIST_TOP_L_CNT_LANE_31_0_b2
#define reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b3  EOM_REG12.BF.EOM_HIST_TOP_L_CNT_LANE_31_0_b3

// 0x0084	EOM_REG13		EOM Register 13
typedef union {
	struct {
		uint8_t EOM_HIST_D00_CNT_LANE_31_0_b0            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D00_CNT_LANE_31_0_b1            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D00_CNT_LANE_31_0_b2            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D00_CNT_LANE_31_0_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG13_t;
__xdata __at( 0x2684 ) volatile EOM_REG13_t EOM_REG13;
#define reg_EOM_HIST_D00_CNT_LANE_31_0_b0  EOM_REG13.BF.EOM_HIST_D00_CNT_LANE_31_0_b0
#define reg_EOM_HIST_D00_CNT_LANE_31_0_b1  EOM_REG13.BF.EOM_HIST_D00_CNT_LANE_31_0_b1
#define reg_EOM_HIST_D00_CNT_LANE_31_0_b2  EOM_REG13.BF.EOM_HIST_D00_CNT_LANE_31_0_b2
#define reg_EOM_HIST_D00_CNT_LANE_31_0_b3  EOM_REG13.BF.EOM_HIST_D00_CNT_LANE_31_0_b3

// 0x0088	EOM_REG14		EOM Register 14
typedef union {
	struct {
		uint8_t EOM_HIST_D01_CNT_LANE_31_0_b0            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D01_CNT_LANE_31_0_b1            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D01_CNT_LANE_31_0_b2            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D01_CNT_LANE_31_0_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG14_t;
__xdata __at( 0x2688 ) volatile EOM_REG14_t EOM_REG14;
#define reg_EOM_HIST_D01_CNT_LANE_31_0_b0  EOM_REG14.BF.EOM_HIST_D01_CNT_LANE_31_0_b0
#define reg_EOM_HIST_D01_CNT_LANE_31_0_b1  EOM_REG14.BF.EOM_HIST_D01_CNT_LANE_31_0_b1
#define reg_EOM_HIST_D01_CNT_LANE_31_0_b2  EOM_REG14.BF.EOM_HIST_D01_CNT_LANE_31_0_b2
#define reg_EOM_HIST_D01_CNT_LANE_31_0_b3  EOM_REG14.BF.EOM_HIST_D01_CNT_LANE_31_0_b3

// 0x008c	EOM_REG15		EOM Register 15
typedef union {
	struct {
		uint8_t EOM_HIST_D10_CNT_LANE_31_0_b0            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D10_CNT_LANE_31_0_b1            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D10_CNT_LANE_31_0_b2            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D10_CNT_LANE_31_0_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG15_t;
__xdata __at( 0x268c ) volatile EOM_REG15_t EOM_REG15;
#define reg_EOM_HIST_D10_CNT_LANE_31_0_b0  EOM_REG15.BF.EOM_HIST_D10_CNT_LANE_31_0_b0
#define reg_EOM_HIST_D10_CNT_LANE_31_0_b1  EOM_REG15.BF.EOM_HIST_D10_CNT_LANE_31_0_b1
#define reg_EOM_HIST_D10_CNT_LANE_31_0_b2  EOM_REG15.BF.EOM_HIST_D10_CNT_LANE_31_0_b2
#define reg_EOM_HIST_D10_CNT_LANE_31_0_b3  EOM_REG15.BF.EOM_HIST_D10_CNT_LANE_31_0_b3

// 0x0090	EOM_REG16		EOM Register 16
typedef union {
	struct {
		uint8_t EOM_HIST_D11_CNT_LANE_31_0_b0            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D11_CNT_LANE_31_0_b1            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D11_CNT_LANE_31_0_b2            : 8;	/* [31:0]       r   0*/
		uint8_t EOM_HIST_D11_CNT_LANE_31_0_b3            : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG16_t;
__xdata __at( 0x2690 ) volatile EOM_REG16_t EOM_REG16;
#define reg_EOM_HIST_D11_CNT_LANE_31_0_b0  EOM_REG16.BF.EOM_HIST_D11_CNT_LANE_31_0_b0
#define reg_EOM_HIST_D11_CNT_LANE_31_0_b1  EOM_REG16.BF.EOM_HIST_D11_CNT_LANE_31_0_b1
#define reg_EOM_HIST_D11_CNT_LANE_31_0_b2  EOM_REG16.BF.EOM_HIST_D11_CNT_LANE_31_0_b2
#define reg_EOM_HIST_D11_CNT_LANE_31_0_b3  EOM_REG16.BF.EOM_HIST_D11_CNT_LANE_31_0_b3

// 0x0094	MSE_REG0		MSE Register 0
typedef union {
	struct {
		uint8_t MSE_ANI_VAL_EXT_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h80*/
		uint8_t RESERVED_8                               : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t MSE_ANI_LOAD_LANE                        : 1;	/*     10     r/w   0*/
		uint8_t MSE_ANI_STEP_SHIFT_LANE_1_0              : 2;	/*[12:11]     r/w 2'h0*/
		uint8_t MSE_ANI_ADAPT_SIGN_LANE                  : 1;	/*     13     r/w   0*/
		uint8_t MSE_ANI_ADAPT_EN_LANE                    : 1;	/*     14     r/w   0*/
		uint8_t MSE_DER0_FRAC_LANE                       : 1;	/*     15     r/w 1'h1*/
		uint8_t MSE_DER0_SHIFT_LANE_4_0                  : 5;	/*[20:16]     r/w 5'h8*/
		uint8_t MSE_MODE_LANE                            : 1;	/*     21     r/w   0*/
		uint8_t MSE_DTL_SEL_LANE                         : 1;	/*     22     r/w   0*/
		uint8_t MSE_RD_REQ_LANE                          : 1;	/*     23     r/w   0*/
		uint8_t MSE_LEN_LANE_3_0                         : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t MSE_CONT_MODE_LANE                       : 1;	/*     28     r/w   0*/
		uint8_t MSE_START_LANE                           : 1;	/*     29     r/w   0*/
		uint8_t RX_EQ_MON_MSE_CLK_ON_LANE                : 1;	/*     30     r/w   0*/
		uint8_t MSE_EN_LANE                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MSE_REG0_t;
__xdata __at( 0x2694 ) volatile MSE_REG0_t MSE_REG0;
#define reg_MSE_ANI_VAL_EXT_LANE_7_0  MSE_REG0.BF.MSE_ANI_VAL_EXT_LANE_7_0
#define reg_MSE_ANI_LOAD_LANE  MSE_REG0.BF.MSE_ANI_LOAD_LANE
#define reg_MSE_ANI_STEP_SHIFT_LANE_1_0  MSE_REG0.BF.MSE_ANI_STEP_SHIFT_LANE_1_0
#define reg_MSE_ANI_ADAPT_SIGN_LANE  MSE_REG0.BF.MSE_ANI_ADAPT_SIGN_LANE
#define reg_MSE_ANI_ADAPT_EN_LANE  MSE_REG0.BF.MSE_ANI_ADAPT_EN_LANE
#define reg_MSE_DER0_FRAC_LANE  MSE_REG0.BF.MSE_DER0_FRAC_LANE
#define reg_MSE_DER0_SHIFT_LANE_4_0  MSE_REG0.BF.MSE_DER0_SHIFT_LANE_4_0
#define reg_MSE_MODE_LANE  MSE_REG0.BF.MSE_MODE_LANE
#define reg_MSE_DTL_SEL_LANE  MSE_REG0.BF.MSE_DTL_SEL_LANE
#define reg_MSE_RD_REQ_LANE  MSE_REG0.BF.MSE_RD_REQ_LANE
#define reg_MSE_LEN_LANE_3_0  MSE_REG0.BF.MSE_LEN_LANE_3_0
#define reg_MSE_CONT_MODE_LANE  MSE_REG0.BF.MSE_CONT_MODE_LANE
#define reg_MSE_START_LANE  MSE_REG0.BF.MSE_START_LANE
#define reg_RX_EQ_MON_MSE_CLK_ON_LANE  MSE_REG0.BF.RX_EQ_MON_MSE_CLK_ON_LANE
#define reg_MSE_EN_LANE  MSE_REG0.BF.MSE_EN_LANE

// 0x0098	MSE_REG1		MSE Register 1
typedef union {
	struct {
		uint8_t MSE_HIGH_THRES_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'hC00*/
		uint8_t MSE_HIGH_THRES_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'hC00*/
		uint8_t MSE_LOW_THRES_LANE_15_0_b0               : 8;	/*[31:16]     r/w 16'h40*/
		uint8_t MSE_LOW_THRES_LANE_15_0_b1               : 8;	/*[31:16]     r/w 16'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MSE_REG1_t;
__xdata __at( 0x2698 ) volatile MSE_REG1_t MSE_REG1;
#define reg_MSE_HIGH_THRES_LANE_15_0_b0  MSE_REG1.BF.MSE_HIGH_THRES_LANE_15_0_b0
#define reg_MSE_HIGH_THRES_LANE_15_0_b1  MSE_REG1.BF.MSE_HIGH_THRES_LANE_15_0_b1
#define reg_MSE_LOW_THRES_LANE_15_0_b0  MSE_REG1.BF.MSE_LOW_THRES_LANE_15_0_b0
#define reg_MSE_LOW_THRES_LANE_15_0_b1  MSE_REG1.BF.MSE_LOW_THRES_LANE_15_0_b1
#define reg_MSE_HIGH_THRES_LANE_15_0  MSE_REG1.WT.W0
#define reg_MSE_LOW_THRES_LANE_15_0  MSE_REG1.WT.W1

// 0x009c	MSE_REG2		MSE Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/* [25:0]     r/w   0*/
		uint8_t MSE_LOW_MASK_LANE                        : 1;	/*     26     r/w   0*/
		uint8_t MSE_LOW_ISR_CLEAR_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t MSE_HIGH_MASK_LANE                       : 1;	/*     28     r/w   0*/
		uint8_t MSE_HIGH_ISR_CLEAR_LANE                  : 1;	/*     29     r/w   0*/
		uint8_t MSE_DONE_MASK_LANE                       : 1;	/*     30     r/w   0*/
		uint8_t MSE_DONE_ISR_CLEAR_LANE                  : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MSE_REG2_t;
__xdata __at( 0x269c ) volatile MSE_REG2_t MSE_REG2;
#define reg_MSE_LOW_MASK_LANE  MSE_REG2.BF.MSE_LOW_MASK_LANE
#define reg_MSE_LOW_ISR_CLEAR_LANE  MSE_REG2.BF.MSE_LOW_ISR_CLEAR_LANE
#define reg_MSE_HIGH_MASK_LANE  MSE_REG2.BF.MSE_HIGH_MASK_LANE
#define reg_MSE_HIGH_ISR_CLEAR_LANE  MSE_REG2.BF.MSE_HIGH_ISR_CLEAR_LANE
#define reg_MSE_DONE_MASK_LANE  MSE_REG2.BF.MSE_DONE_MASK_LANE
#define reg_MSE_DONE_ISR_CLEAR_LANE  MSE_REG2.BF.MSE_DONE_ISR_CLEAR_LANE

// 0x00a0	MSE_REG3		MSE Register 3
typedef union {
	struct {
		uint8_t RX_MSE_MON_VAL_LANE_15_0_b0              : 8;	/* [15:0]       r   0*/
		uint8_t RX_MSE_MON_VAL_LANE_15_0_b1              : 8;	/* [15:0]       r   0*/
		uint8_t MSE_VAL_LANE_15_0_b0                     : 8;	/*[31:16]       r   0*/
		uint8_t MSE_VAL_LANE_15_0_b1                     : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MSE_REG3_t;
__xdata __at( 0x26a0 ) volatile MSE_REG3_t MSE_REG3;
#define reg_RX_MSE_MON_VAL_LANE_15_0_b0  MSE_REG3.BF.RX_MSE_MON_VAL_LANE_15_0_b0
#define reg_RX_MSE_MON_VAL_LANE_15_0_b1  MSE_REG3.BF.RX_MSE_MON_VAL_LANE_15_0_b1
#define reg_MSE_VAL_LANE_15_0_b0  MSE_REG3.BF.MSE_VAL_LANE_15_0_b0
#define reg_MSE_VAL_LANE_15_0_b1  MSE_REG3.BF.MSE_VAL_LANE_15_0_b1
#define reg_RX_MSE_MON_VAL_LANE_15_0  MSE_REG3.WT.W0
#define reg_MSE_VAL_LANE_15_0  MSE_REG3.WT.W1

// 0x00a4	MSE_REG4		MSE Register 4
typedef union {
	struct {
		uint8_t MSE_ANI_LANE_7_0                         : 8;	/*  [7:0]       r   0*/
		uint8_t MSE_DONE_LANE                            : 1;	/*      8       r   0*/
		uint8_t MSE_RD_ACK_LANE                          : 1;	/*      9       r   0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DER_VAL_LANE_15_0_b0                     : 8;	/*[31:16]       r   0*/
		uint8_t DER_VAL_LANE_15_0_b1                     : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MSE_REG4_t;
__xdata __at( 0x26a4 ) volatile MSE_REG4_t MSE_REG4;
#define reg_MSE_ANI_LANE_7_0  MSE_REG4.BF.MSE_ANI_LANE_7_0
#define reg_MSE_DONE_LANE  MSE_REG4.BF.MSE_DONE_LANE
#define reg_MSE_RD_ACK_LANE  MSE_REG4.BF.MSE_RD_ACK_LANE
#define reg_DER_VAL_LANE_15_0_b0  MSE_REG4.BF.DER_VAL_LANE_15_0_b0
#define reg_DER_VAL_LANE_15_0_b1  MSE_REG4.BF.DER_VAL_LANE_15_0_b1
#define reg_DER_VAL_LANE_15_0  MSE_REG4.WT.W1

// 0x00a8	MSE_REG5		MSE Register 5
typedef union {
	struct {
		uint8_t MSE_LOW_ISR_LANE                         : 1;	/*      0     r/w   0*/
		uint8_t MSE_HIGH_ISR_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t MSE_DONE_ISR_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MSE_REG5_t;
__xdata __at( 0x26a8 ) volatile MSE_REG5_t MSE_REG5;
#define reg_MSE_LOW_ISR_LANE  MSE_REG5.BF.MSE_LOW_ISR_LANE
#define reg_MSE_HIGH_ISR_LANE  MSE_REG5.BF.MSE_HIGH_ISR_LANE
#define reg_MSE_DONE_ISR_LANE  MSE_REG5.BF.MSE_DONE_ISR_LANE

#endif
