#ifndef PHY_REG_C_RX_DTL_LANE_H
#define PHY_REG_C_RX_DTL_LANE_H



// 0x0000	CDR_LOCK_REG0_LANE		RX DTL CDR Lock Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [9:0]     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:0]     r/w   0*/
		uint8_t RX_CDR_LOCK_LANE                         : 1;	/*     10       r   0*/
		uint8_t RX_CDR_LOCK_DET_LANE                     : 1;	/*     11     r/w   0*/
		uint8_t RX_CDR_LOCK_DET_SEL_LANE_1_0             : 2;	/*[13:12]     r/w 2'h1*/
		uint8_t RX_PH_LOCK_EN_LANE                       : 1;	/*     14     r/w   0*/
		uint8_t RX_PH_LOCK_LANE                          : 1;	/*     15       r   0*/
		uint8_t RX_PH_CNT_UNLOCK_LANE_1_0                : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RX_PH_CNT_LOCK_LANE_5_0                  : 6;	/*[23:18]     r/w 6'h32*/
		uint8_t RX_PH_TED_DEV_N2_LANE_3_0                : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t RX_PH_TED_AVG_N1_LANE_3_0                : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDR_LOCK_REG0_LANE_t;
__xdata __at( 0x3700 ) volatile CDR_LOCK_REG0_LANE_t CDR_LOCK_REG0_LANE;
#define reg_RX_CDR_LOCK_LANE  CDR_LOCK_REG0_LANE.BF.RX_CDR_LOCK_LANE
#define reg_RX_CDR_LOCK_DET_LANE  CDR_LOCK_REG0_LANE.BF.RX_CDR_LOCK_DET_LANE
#define reg_RX_CDR_LOCK_DET_SEL_LANE_1_0  CDR_LOCK_REG0_LANE.BF.RX_CDR_LOCK_DET_SEL_LANE_1_0
#define reg_RX_PH_LOCK_EN_LANE  CDR_LOCK_REG0_LANE.BF.RX_PH_LOCK_EN_LANE
#define reg_RX_PH_LOCK_LANE  CDR_LOCK_REG0_LANE.BF.RX_PH_LOCK_LANE
#define reg_RX_PH_CNT_UNLOCK_LANE_1_0  CDR_LOCK_REG0_LANE.BF.RX_PH_CNT_UNLOCK_LANE_1_0
#define reg_RX_PH_CNT_LOCK_LANE_5_0  CDR_LOCK_REG0_LANE.BF.RX_PH_CNT_LOCK_LANE_5_0
#define reg_RX_PH_TED_DEV_N2_LANE_3_0  CDR_LOCK_REG0_LANE.BF.RX_PH_TED_DEV_N2_LANE_3_0
#define reg_RX_PH_TED_AVG_N1_LANE_3_0  CDR_LOCK_REG0_LANE.BF.RX_PH_TED_AVG_N1_LANE_3_0

// 0x0004	CDR_LOCK_REG1_LANE		RX DTL CDR Lock Register1
typedef union {
	struct {
		uint8_t RX_PH_TH2_UNLOCK_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h34*/
		uint8_t RX_PH_TH2_LOCK_LANE_7_0                  : 8;	/* [15:8]     r/w 8'h34*/
		uint8_t RX_PH_TH1_UNLOCK_LANE_7_0                : 8;	/*[23:16]     r/w 8'h18*/
		uint8_t RX_PH_TH1_LOCK_LANE_7_0                  : 8;	/*[31:24]     r/w 8'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDR_LOCK_REG1_LANE_t;
__xdata __at( 0x3704 ) volatile CDR_LOCK_REG1_LANE_t CDR_LOCK_REG1_LANE;
#define reg_RX_PH_TH2_UNLOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH2_UNLOCK_LANE_7_0
#define reg_RX_PH_TH2_LOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH2_LOCK_LANE_7_0
#define reg_RX_PH_TH1_UNLOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH1_UNLOCK_LANE_7_0
#define reg_RX_PH_TH1_LOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH1_LOCK_LANE_7_0

// 0x0008	DTL_CTRL_REG0_LANE		RX DTL Control Register0
typedef union {
	struct {
		uint8_t RX_DTL_FREQ_OFST_LANE_15_0_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RX_DTL_FREQ_OFST_LANE_15_0_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RX_DTL_TED_SIGN_LANE                     : 1;	/*     17     r/w   0*/
		uint8_t RX_DTL_SLOW_TED_SIGN_LANE                : 1;	/*     18     r/w   0*/
		uint8_t RX_DTL_PH_OFST_VALID_LANE                : 1;	/*     19     r/w   0*/
		uint8_t RX_DTL_TED_OFST_LANE_3_0                 : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RX_DTL_PH_OFST_LANE_7_0                  : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DTL_CTRL_REG0_LANE_t;
__xdata __at( 0x3708 ) volatile DTL_CTRL_REG0_LANE_t DTL_CTRL_REG0_LANE;
#define reg_RX_DTL_FREQ_OFST_LANE_15_0_b0  DTL_CTRL_REG0_LANE.BF.RX_DTL_FREQ_OFST_LANE_15_0_b0
#define reg_RX_DTL_FREQ_OFST_LANE_15_0_b1  DTL_CTRL_REG0_LANE.BF.RX_DTL_FREQ_OFST_LANE_15_0_b1
#define reg_RX_DTL_TED_SIGN_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_TED_SIGN_LANE
#define reg_RX_DTL_SLOW_TED_SIGN_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_SLOW_TED_SIGN_LANE
#define reg_RX_DTL_PH_OFST_VALID_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_PH_OFST_VALID_LANE
#define reg_RX_DTL_TED_OFST_LANE_3_0  DTL_CTRL_REG0_LANE.BF.RX_DTL_TED_OFST_LANE_3_0
#define reg_RX_DTL_PH_OFST_LANE_7_0  DTL_CTRL_REG0_LANE.BF.RX_DTL_PH_OFST_LANE_7_0
#define reg_RX_DTL_FREQ_OFST_LANE_15_0  DTL_CTRL_REG0_LANE.WT.W0

// 0x000c	DTL_LPF_REG0_LANE		RX DTL Low Pass Filter Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RX_DTL_LPF_FRZ_LANE                      : 1;	/*     16     r/w   0*/
		uint8_t RX_DTL_LPF_KI_FRAC_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t RX_DTL_LPF_KI_EN_LANE                    : 1;	/*     18     r/w   1*/
		uint8_t RX_DTL_LPF_KI_SHIFT_LANE_4_0             : 5;	/*[23:19]     r/w 5'h9*/
		uint8_t RX_DTL_LPF_KP_EN_LANE                    : 1;	/*     24     r/w   1*/
		uint8_t RX_DTL_LPF_KP_SHIFT_LANE_3_0             : 4;	/*[28:25]     r/w 4'h7*/
		uint8_t RX_DTL_LPF_KP_FRAC_LANE_2_0              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DTL_LPF_REG0_LANE_t;
__xdata __at( 0x370c ) volatile DTL_LPF_REG0_LANE_t DTL_LPF_REG0_LANE;
#define reg_RX_DTL_LPF_FRZ_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_FRZ_LANE
#define reg_RX_DTL_LPF_KI_FRAC_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_FRAC_LANE
#define reg_RX_DTL_LPF_KI_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_EN_LANE
#define reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_SHIFT_LANE_4_0
#define reg_RX_DTL_LPF_KP_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KP_EN_LANE
#define reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KP_SHIFT_LANE_3_0
#define reg_RX_DTL_LPF_KP_FRAC_LANE_2_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KP_FRAC_LANE_2_0

// 0x0010	CDR_LOCK_REG2_LANE		RX DTL CDR Lock Register2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [13:0]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:0]     r/w   0*/
		uint8_t RX_FREQ_DET_MODE_LANE                    : 1;	/*     14     r/w   1*/
		uint8_t RX_FREQ_LOCK_LANE                        : 1;	/*     15       r   0*/
		uint8_t RX_FREQ_DET_AVG_N2_LANE_3_0              : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RX_FREQ_DET_DEC_N1_LANE_3_0              : 4;	/*[23:20]     r/w 4'ha*/
		uint8_t RX_FREQ_DET_CNT_UNLOCK_LANE_1_0          : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RX_FREQ_DET_CNT_LOCK_LANE_5_0            : 6;	/*[31:26]     r/w 6'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDR_LOCK_REG2_LANE_t;
__xdata __at( 0x3710 ) volatile CDR_LOCK_REG2_LANE_t CDR_LOCK_REG2_LANE;
#define reg_RX_FREQ_DET_MODE_LANE  CDR_LOCK_REG2_LANE.BF.RX_FREQ_DET_MODE_LANE
#define reg_RX_FREQ_LOCK_LANE  CDR_LOCK_REG2_LANE.BF.RX_FREQ_LOCK_LANE
#define reg_RX_FREQ_DET_AVG_N2_LANE_3_0  CDR_LOCK_REG2_LANE.BF.RX_FREQ_DET_AVG_N2_LANE_3_0
#define reg_RX_FREQ_DET_DEC_N1_LANE_3_0  CDR_LOCK_REG2_LANE.BF.RX_FREQ_DET_DEC_N1_LANE_3_0
#define reg_RX_FREQ_DET_CNT_UNLOCK_LANE_1_0  CDR_LOCK_REG2_LANE.BF.RX_FREQ_DET_CNT_UNLOCK_LANE_1_0
#define reg_RX_FREQ_DET_CNT_LOCK_LANE_5_0  CDR_LOCK_REG2_LANE.BF.RX_FREQ_DET_CNT_LOCK_LANE_5_0

// 0x0014	CDR_LOCK_REG3_LANE		RX DTL CDR Lock Register3
typedef union {
	struct {
		uint8_t RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h80*/
		uint8_t RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h80*/
		uint8_t RX_FREQ_DET_TH1_LOCK_LANE_15_0_b0        : 8;	/*[31:16]     r/w 16'h80*/
		uint8_t RX_FREQ_DET_TH1_LOCK_LANE_15_0_b1        : 8;	/*[31:16]     r/w 16'h80*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDR_LOCK_REG3_LANE_t;
__xdata __at( 0x3714 ) volatile CDR_LOCK_REG3_LANE_t CDR_LOCK_REG3_LANE;
#define reg_RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b0  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b0
#define reg_RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b1  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b1
#define reg_RX_FREQ_DET_TH1_LOCK_LANE_15_0_b0  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_LOCK_LANE_15_0_b0
#define reg_RX_FREQ_DET_TH1_LOCK_LANE_15_0_b1  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_LOCK_LANE_15_0_b1
#define reg_RX_FREQ_DET_TH1_UNLOCK_LANE_15_0  CDR_LOCK_REG3_LANE.WT.W0
#define reg_RX_FREQ_DET_TH1_LOCK_LANE_15_0  CDR_LOCK_REG3_LANE.WT.W1

// 0x0018	DTL_LPF_REG1_LANE		RX DTL Low Pass Filter Register1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [14:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:0]     r/w   0*/
		uint8_t RX2PLL_FOFFSET_EN_LANE                   : 1;	/*     15     r/w   1*/
		uint8_t DTL_FOFST_PATT_PROTECT_EN_LANE           : 1;	/*     16     r/w   0*/
		uint8_t DTL_SQ_DET_FOFST_EN_LANE                 : 1;	/*     17     r/w   1*/
		uint8_t DTL_SQ_DET_POFST_EN_LANE                 : 1;	/*     18     r/w   1*/
		uint8_t DTL_CLAMPING_TRIGGERED_LANE              : 1;	/*     19       r   0*/
		uint8_t CLEAR_DTL_CLAMPING_TRIGGERED_LANE        : 1;	/*     20     r/w   0*/
		uint8_t RX_DTL_CLAMPING_EN_LANE                  : 1;	/*     21     r/w   0*/
		uint8_t DTL_CLAMP_RST_MODE_LANE_1_0              : 2;	/*[23:22]     r/w 2'h3*/
		uint8_t RX_DTL_FLOOP_FRZ_LANE                    : 1;	/*     24     r/w   0*/
		uint8_t RX_DTL_CLAMPING_VAL_LANE_6_0             : 7;	/*[31:25]     r/w 7'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_LPF_REG1_LANE_t;
__xdata __at( 0x3718 ) volatile DTL_LPF_REG1_LANE_t DTL_LPF_REG1_LANE;
#define reg_RX2PLL_FOFFSET_EN_LANE  DTL_LPF_REG1_LANE.BF.RX2PLL_FOFFSET_EN_LANE
#define reg_DTL_FOFST_PATT_PROTECT_EN_LANE  DTL_LPF_REG1_LANE.BF.DTL_FOFST_PATT_PROTECT_EN_LANE
#define reg_DTL_SQ_DET_FOFST_EN_LANE  DTL_LPF_REG1_LANE.BF.DTL_SQ_DET_FOFST_EN_LANE
#define reg_DTL_SQ_DET_POFST_EN_LANE  DTL_LPF_REG1_LANE.BF.DTL_SQ_DET_POFST_EN_LANE
#define reg_DTL_CLAMPING_TRIGGERED_LANE  DTL_LPF_REG1_LANE.BF.DTL_CLAMPING_TRIGGERED_LANE
#define reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE  DTL_LPF_REG1_LANE.BF.CLEAR_DTL_CLAMPING_TRIGGERED_LANE
#define reg_RX_DTL_CLAMPING_EN_LANE  DTL_LPF_REG1_LANE.BF.RX_DTL_CLAMPING_EN_LANE
#define reg_DTL_CLAMP_RST_MODE_LANE_1_0  DTL_LPF_REG1_LANE.BF.DTL_CLAMP_RST_MODE_LANE_1_0
#define reg_RX_DTL_FLOOP_FRZ_LANE  DTL_LPF_REG1_LANE.BF.RX_DTL_FLOOP_FRZ_LANE
#define reg_RX_DTL_CLAMPING_VAL_LANE_6_0  DTL_LPF_REG1_LANE.BF.RX_DTL_CLAMPING_VAL_LANE_6_0

// 0x001c	DTL_CTRL_REG1_LANE		RX DTL Control Register1
typedef union {
	struct {
		uint8_t RX_EOM_DPHER_OFST_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RX_EOM_DPHER_OFST_VALID_LANE             : 1;	/*      8     r/w   0*/
		uint8_t RX_DTL_FOFST_REQ_LANE                    : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[27:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[27:10]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:10]     r/w   0*/
		uint8_t RX_DTL_TED_OFST_VALID_LANE               : 1;	/*     28     r/w   0*/
		uint8_t RX_DTL_FREQ_OFST_VALID_LANE              : 1;	/*     29     r/w   0*/
		uint8_t RX_DTL_BLIND_EQL_EN_LANE                 : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG1_LANE_t;
__xdata __at( 0x371c ) volatile DTL_CTRL_REG1_LANE_t DTL_CTRL_REG1_LANE;
#define reg_RX_EOM_DPHER_OFST_LANE_7_0  DTL_CTRL_REG1_LANE.BF.RX_EOM_DPHER_OFST_LANE_7_0
#define reg_RX_EOM_DPHER_OFST_VALID_LANE  DTL_CTRL_REG1_LANE.BF.RX_EOM_DPHER_OFST_VALID_LANE
#define reg_RX_DTL_FOFST_REQ_LANE  DTL_CTRL_REG1_LANE.BF.RX_DTL_FOFST_REQ_LANE
#define reg_RX_DTL_TED_OFST_VALID_LANE  DTL_CTRL_REG1_LANE.BF.RX_DTL_TED_OFST_VALID_LANE
#define reg_RX_DTL_FREQ_OFST_VALID_LANE  DTL_CTRL_REG1_LANE.BF.RX_DTL_FREQ_OFST_VALID_LANE
#define reg_RX_DTL_BLIND_EQL_EN_LANE  DTL_CTRL_REG1_LANE.BF.RX_DTL_BLIND_EQL_EN_LANE

// 0x0020	DTL_CTRL_REG2_LANE		RX DTL Control Register2
typedef union {
	struct {
		uint8_t RX_DTL_FOFST_LANE_31_0_b0                : 8;	/* [31:0]       r 32'h0*/
		uint8_t RX_DTL_FOFST_LANE_31_0_b1                : 8;	/* [31:0]       r 32'h0*/
		uint8_t RX_DTL_FOFST_LANE_31_0_b2                : 8;	/* [31:0]       r 32'h0*/
		uint8_t RX_DTL_FOFST_LANE_31_0_b3                : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG2_LANE_t;
__xdata __at( 0x3720 ) volatile DTL_CTRL_REG2_LANE_t DTL_CTRL_REG2_LANE;
#define reg_RX_DTL_FOFST_LANE_31_0_b0  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b0
#define reg_RX_DTL_FOFST_LANE_31_0_b1  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b1
#define reg_RX_DTL_FOFST_LANE_31_0_b2  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b2
#define reg_RX_DTL_FOFST_LANE_31_0_b3  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b3

// 0x0024	DTL_CLKGEN_REG1_LANE		RX DTL Clock Register1
typedef union {
	struct {
		uint8_t RX_DTL_LMS_PRE_RUN_TIME_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/* [13:4]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:4]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PAT_FREZ_EN_LANE          : 1;	/*     14     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_PAT_FREZ_EN_LANE         : 1;	/*     15     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_PAT_FREZ_EN_LANE          : 1;	/*     16     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_SQ_FREZ_EN_LANE           : 1;	/*     17     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_SQ_FREZ_EN_LANE          : 1;	/*     18     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_SQ_FREZ_EN_LANE           : 1;	/*     19     r/w   1*/
		uint8_t RX_DTL_BUF_CLK_ON_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t RX_DTL_BUF_CLK_EN_LANE                   : 1;	/*     21     r/w   1*/
		uint8_t RX_DTL_LS_CLK_EN_LANE                    : 1;	/*     22     r/w   1*/
		uint8_t RX_DTL_LS_CLK_ON_LANE                    : 1;	/*     23     r/w   0*/
		uint8_t RX_DTL_HS_CLK_EN_LANE                    : 1;	/*     24     r/w   1*/
		uint8_t RX_DTL_HS_CLK_ON_LANE                    : 1;	/*     25     r/w   0*/
		uint8_t DTL_RST_LANE                             : 1;	/*     26     r/w   1*/
		uint8_t RX_DTL_CMN_CLK_ON_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t RX_DTL_CMN_CLK_EN_LANE                   : 1;	/*     28     r/w   1*/
		uint8_t DTL_RST_SYNC_LANE                        : 1;	/*     29     r/w   0*/
		uint8_t DTL_CLK_EN_LANE                          : 1;	/*     30     r/w   1*/
		uint8_t DTL_CLK_ON_LANE                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CLKGEN_REG1_LANE_t;
__xdata __at( 0x3724 ) volatile DTL_CLKGEN_REG1_LANE_t DTL_CLKGEN_REG1_LANE;
#define reg_RX_DTL_LMS_PRE_RUN_TIME_LANE_3_0  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_PRE_RUN_TIME_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PAT_FREZ_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_FFE_PAT_FREZ_EN_LANE
#define reg_RX_DTL_LMS_GAIN_PAT_FREZ_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_GAIN_PAT_FREZ_EN_LANE
#define reg_RX_DTL_LMS_BLW_PAT_FREZ_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_BLW_PAT_FREZ_EN_LANE
#define reg_RX_DTL_LMS_FFE_SQ_FREZ_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_FFE_SQ_FREZ_EN_LANE
#define reg_RX_DTL_LMS_GAIN_SQ_FREZ_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_GAIN_SQ_FREZ_EN_LANE
#define reg_RX_DTL_LMS_BLW_SQ_FREZ_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LMS_BLW_SQ_FREZ_EN_LANE
#define reg_RX_DTL_BUF_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_BUF_CLK_ON_LANE
#define reg_RX_DTL_BUF_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_BUF_CLK_EN_LANE
#define reg_RX_DTL_LS_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LS_CLK_EN_LANE
#define reg_RX_DTL_LS_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_LS_CLK_ON_LANE
#define reg_RX_DTL_HS_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_HS_CLK_EN_LANE
#define reg_RX_DTL_HS_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_HS_CLK_ON_LANE
#define reg_DTL_RST_LANE  DTL_CLKGEN_REG1_LANE.BF.DTL_RST_LANE
#define reg_RX_DTL_CMN_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_CMN_CLK_ON_LANE
#define reg_RX_DTL_CMN_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_CMN_CLK_EN_LANE
#define reg_DTL_RST_SYNC_LANE  DTL_CLKGEN_REG1_LANE.BF.DTL_RST_SYNC_LANE
#define reg_DTL_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.DTL_CLK_EN_LANE
#define reg_DTL_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.DTL_CLK_ON_LANE

// 0x0028	DTL_CTRL_REG3_LANE		RX DTL Control Register3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_DPHER_MAX_JUMP_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RX_PI_DPHER_FORCE_LANE                   : 1;	/*     10     r/w   0*/
		uint8_t RX_PI_DPHER_LANE_7_0_b0                  : 5;	/*[18:11]     r/w   0*/
		uint8_t RX_PI_DPHER_LANE_7_0_b1                  : 3;	/*[18:11]     r/w   0*/
		uint8_t RX_PI_CLK_FORCE_LANE                     : 1;	/*     19     r/w   0*/
		uint8_t RX_PI_CLK_LANE                           : 1;	/*     20     r/w   0*/
		uint8_t RX_EOM_PI_DPHER_FORCE_LANE               : 1;	/*     21     r/w   0*/
		uint8_t RX_EOM_PI_DPHER_LANE_7_0_b0              : 2;	/*[29:22]     r/w   0*/
		uint8_t RX_EOM_PI_DPHER_LANE_7_0_b1              : 6;	/*[29:22]     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG3_LANE_t;
__xdata __at( 0x3728 ) volatile DTL_CTRL_REG3_LANE_t DTL_CTRL_REG3_LANE;
#define reg_RX_DTL_DPHER_MAX_JUMP_LANE_1_0  DTL_CTRL_REG3_LANE.BF.RX_DTL_DPHER_MAX_JUMP_LANE_1_0
#define reg_RX_PI_DPHER_FORCE_LANE  DTL_CTRL_REG3_LANE.BF.RX_PI_DPHER_FORCE_LANE
#define reg_RX_PI_DPHER_LANE_7_0_b0  DTL_CTRL_REG3_LANE.BF.RX_PI_DPHER_LANE_7_0_b0
#define reg_RX_PI_DPHER_LANE_7_0_b1  DTL_CTRL_REG3_LANE.BF.RX_PI_DPHER_LANE_7_0_b1
#define reg_RX_PI_CLK_FORCE_LANE  DTL_CTRL_REG3_LANE.BF.RX_PI_CLK_FORCE_LANE
#define reg_RX_PI_CLK_LANE  DTL_CTRL_REG3_LANE.BF.RX_PI_CLK_LANE
#define reg_RX_EOM_PI_DPHER_FORCE_LANE  DTL_CTRL_REG3_LANE.BF.RX_EOM_PI_DPHER_FORCE_LANE
#define reg_RX_EOM_PI_DPHER_LANE_7_0_b0  DTL_CTRL_REG3_LANE.BF.RX_EOM_PI_DPHER_LANE_7_0_b0
#define reg_RX_EOM_PI_DPHER_LANE_7_0_b1  DTL_CTRL_REG3_LANE.BF.RX_EOM_PI_DPHER_LANE_7_0_b1

// 0x002c	DTL_CTRL_REG4_LANE		RX DTL Register
typedef union {
	struct {
		uint8_t RX_DTL_FOFST_STABLE_LANE_31_0_b0         : 8;	/* [31:0]       r 32'h0*/
		uint8_t RX_DTL_FOFST_STABLE_LANE_31_0_b1         : 8;	/* [31:0]       r 32'h0*/
		uint8_t RX_DTL_FOFST_STABLE_LANE_31_0_b2         : 8;	/* [31:0]       r 32'h0*/
		uint8_t RX_DTL_FOFST_STABLE_LANE_31_0_b3         : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG4_LANE_t;
__xdata __at( 0x372c ) volatile DTL_CTRL_REG4_LANE_t DTL_CTRL_REG4_LANE;
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b0  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b0
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b1  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b1
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b2  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b2
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b3  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b3

// 0x0030	RX_DTL_LMS_REG0		RX DTL LMS Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_GAIN_CLK_ON_LANE              : 1;	/*      0     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_CLK_ON_LANE               : 1;	/*      1     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST1_CLK_ON_LANE          : 1;	/*      2     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST2_CLK_ON_LANE          : 1;	/*      3     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST3_CLK_ON_LANE          : 1;	/*      4     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE1_CLK_ON_LANE          : 1;	/*      5     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE2_CLK_ON_LANE          : 1;	/*      6     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE3_CLK_ON_LANE          : 1;	/*      7     r/w   0*/
		uint8_t RX_DTL_LMS_STOP_TIME_LANE_5_0            : 6;	/* [13:8]     r/w 6'hb*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_DTL_LMS_RUN_TIME_LANE_5_0             : 6;	/*[21:16]     r/w 6'hb*/
		uint8_t RESERVED_22                              : 2;	/*[27:22]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:22]     r/w   0*/
		uint8_t RX_DTL_LMS_RUN_STOP_EN_LANE              : 1;	/*     28     r/w   0*/
		uint8_t RX_DTL_LMS_TOP_EN_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t RX_DTL_LMS_TOP_LD_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t RX_DTL_LMS_REQ_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_REG0_t;
__xdata __at( 0x3730 ) volatile RX_DTL_LMS_REG0_t RX_DTL_LMS_REG0;
#define reg_RX_DTL_LMS_GAIN_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_GAIN_CLK_ON_LANE
#define reg_RX_DTL_LMS_BLW_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_BLW_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_PST1_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PST1_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_PST2_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PST2_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_PST3_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PST3_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_PRE1_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PRE1_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_PRE2_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PRE2_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_PRE3_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PRE3_CLK_ON_LANE
#define reg_RX_DTL_LMS_STOP_TIME_LANE_5_0  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_STOP_TIME_LANE_5_0
#define reg_RX_DTL_LMS_RUN_TIME_LANE_5_0  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_RUN_TIME_LANE_5_0
#define reg_RX_DTL_LMS_RUN_STOP_EN_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_RUN_STOP_EN_LANE
#define reg_RX_DTL_LMS_TOP_EN_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_TOP_EN_LANE
#define reg_RX_DTL_LMS_TOP_LD_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_TOP_LD_LANE
#define reg_RX_DTL_LMS_REQ_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_REQ_LANE

// 0x0034	RX_DTL_LMS_BLW_REG0		RX DTL LMS BLW Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_COE_LANE_4_0              : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_EXT_LANE_4_0              : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_MU_LANE_3_0               : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_BLW_REG0_t;
__xdata __at( 0x3734 ) volatile RX_DTL_LMS_BLW_REG0_t RX_DTL_LMS_BLW_REG0;
#define reg_RX_DTL_LMS_BLW_COE_LANE_4_0  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_COE_LANE_4_0
#define reg_RX_DTL_LMS_BLW_EXT_LANE_4_0  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_EXT_LANE_4_0
#define reg_RX_DTL_LMS_BLW_MU_LANE_3_0  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_MU_LANE_3_0

// 0x0038	RX_DTL_LMS_GAIN_REG0		RX DTL LMS GAIN Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_GAIN_COE_LANE_7_0             : 8;	/*  [7:0]       r 8'h0*/
		uint8_t RX_DTL_LMS_GAIN_COE_LANE_9_8             : 2;	/*  [9:8]       r 2'h0*/
		uint8_t RESERVED_10                              : 2;	/*[11:10]     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_MU_LANE_3_0              : 4;	/*[15:12]     r/w 4'h5*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_EXT_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RX_DTL_LMS_GAIN_EXT_LANE_9_4             : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_GAIN_REG0_t;
__xdata __at( 0x3738 ) volatile RX_DTL_LMS_GAIN_REG0_t RX_DTL_LMS_GAIN_REG0;
#define reg_RX_DTL_LMS_GAIN_COE_LANE_7_0  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_GAIN_COE_LANE_7_0
#define reg_RX_DTL_LMS_GAIN_COE_LANE_9_8  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_GAIN_COE_LANE_9_8
#define reg_RX_DTL_LMS_GAIN_MU_LANE_3_0  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_GAIN_MU_LANE_3_0
#define reg_RX_DTL_LMS_GAIN_EXT_LANE_3_0  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_GAIN_EXT_LANE_3_0
#define reg_RX_DTL_LMS_GAIN_EXT_LANE_9_4  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_GAIN_EXT_LANE_9_4

// 0x003c	RX_DTL_LMS_FFE_REG0		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_GAIN_INV_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_INV_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST1_INV_LANE             : 1;	/*      2     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST2_INV_LANE             : 1;	/*      3     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST3_INV_LANE             : 1;	/*      4     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE1_INV_LANE             : 1;	/*      5     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE2_INV_LANE             : 1;	/*      6     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE3_INV_LANE             : 1;	/*      7     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_LD_LANE                  : 1;	/*      8     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_LD_LANE                   : 1;	/*      9     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST1_LD_LANE              : 1;	/*     10     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST2_LD_LANE              : 1;	/*     11     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST3_LD_LANE              : 1;	/*     12     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE1_LD_LANE              : 1;	/*     13     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE2_LD_LANE              : 1;	/*     14     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE3_LD_LANE              : 1;	/*     15     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_EN_LANE                  : 1;	/*     16     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_EN_LANE                   : 1;	/*     17     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST1_EN_LANE              : 1;	/*     18     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST2_EN_LANE              : 1;	/*     19     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST3_EN_LANE              : 1;	/*     20     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE1_EN_LANE              : 1;	/*     21     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE2_EN_LANE              : 1;	/*     22     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE3_EN_LANE              : 1;	/*     23     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_CLK_EN_LANE              : 1;	/*     24     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_CLK_EN_LANE               : 1;	/*     25     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST1_CLK_EN_LANE          : 1;	/*     26     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST2_CLK_EN_LANE          : 1;	/*     27     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST3_CLK_EN_LANE          : 1;	/*     28     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE1_CLK_EN_LANE          : 1;	/*     29     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE2_CLK_EN_LANE          : 1;	/*     30     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE3_CLK_EN_LANE          : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG0_t;
__xdata __at( 0x373c ) volatile RX_DTL_LMS_FFE_REG0_t RX_DTL_LMS_FFE_REG0;
#define reg_RX_DTL_LMS_GAIN_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_INV_LANE
#define reg_RX_DTL_LMS_BLW_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_BLW_INV_LANE
#define reg_RX_DTL_LMS_FFE_PST1_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST1_INV_LANE
#define reg_RX_DTL_LMS_FFE_PST2_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST2_INV_LANE
#define reg_RX_DTL_LMS_FFE_PST3_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST3_INV_LANE
#define reg_RX_DTL_LMS_FFE_PRE1_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE1_INV_LANE
#define reg_RX_DTL_LMS_FFE_PRE2_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE2_INV_LANE
#define reg_RX_DTL_LMS_FFE_PRE3_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE3_INV_LANE
#define reg_RX_DTL_LMS_GAIN_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_LD_LANE
#define reg_RX_DTL_LMS_BLW_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_BLW_LD_LANE
#define reg_RX_DTL_LMS_FFE_PST1_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST1_LD_LANE
#define reg_RX_DTL_LMS_FFE_PST2_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST2_LD_LANE
#define reg_RX_DTL_LMS_FFE_PST3_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST3_LD_LANE
#define reg_RX_DTL_LMS_FFE_PRE1_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE1_LD_LANE
#define reg_RX_DTL_LMS_FFE_PRE2_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE2_LD_LANE
#define reg_RX_DTL_LMS_FFE_PRE3_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE3_LD_LANE
#define reg_RX_DTL_LMS_GAIN_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_EN_LANE
#define reg_RX_DTL_LMS_BLW_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_BLW_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST1_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST1_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST2_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST2_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST3_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST3_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE1_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE1_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE2_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE2_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE3_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE3_EN_LANE
#define reg_RX_DTL_LMS_GAIN_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_CLK_EN_LANE
#define reg_RX_DTL_LMS_BLW_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_BLW_CLK_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST1_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST1_CLK_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST2_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST2_CLK_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST3_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PST3_CLK_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE1_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE1_CLK_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE2_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE2_CLK_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE3_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_FFE_PRE3_CLK_EN_LANE

// 0x0040	RX_DTL_LMS_FFE_MU		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [19:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [19:0]     r/w   0*/
		uint8_t RESERVED_16                              : 4;	/* [19:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_MU_LANE_3_0               : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t RX_DTL_LMS_FFE_PST1_MU_LANE_3_0          : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0          : 4;	/*[31:28]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_MU_t;
__xdata __at( 0x3740 ) volatile RX_DTL_LMS_FFE_MU_t RX_DTL_LMS_FFE_MU;
#define reg_RX_DTL_LMS_FFE_MU_LANE_3_0  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_FFE_MU_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_FFE_PST1_MU_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0

// 0x0044	RX_DTL_LMS_FFE_REG1		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0         : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[23:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:14]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0         : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG1_t;
__xdata __at( 0x3744 ) volatile RX_DTL_LMS_FFE_REG1_t RX_DTL_LMS_FFE_REG1;
#define reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0  RX_DTL_LMS_FFE_REG1.BF.RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0
#define reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0  RX_DTL_LMS_FFE_REG1.BF.RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0

// 0x0048	RX_DTL_LMS_FFE_REG2		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0         : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[23:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:13]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0         : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG2_t;
__xdata __at( 0x3748 ) volatile RX_DTL_LMS_FFE_REG2_t RX_DTL_LMS_FFE_REG2;
#define reg_RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0  RX_DTL_LMS_FFE_REG2.BF.RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0
#define reg_RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0  RX_DTL_LMS_FFE_REG2.BF.RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0

// 0x004c	RX_DTL_LMS_FFE_REG3		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0         : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[23:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:12]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0         : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG3_t;
__xdata __at( 0x374c ) volatile RX_DTL_LMS_FFE_REG3_t RX_DTL_LMS_FFE_REG3;
#define reg_RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0  RX_DTL_LMS_FFE_REG3.BF.RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0  RX_DTL_LMS_FFE_REG3.BF.RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0

// 0x0050	RX_DTL_LMS_FFE_REG4		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST1_COE_LANE_5_0         : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[23:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:14]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0         : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG4_t;
__xdata __at( 0x3750 ) volatile RX_DTL_LMS_FFE_REG4_t RX_DTL_LMS_FFE_REG4;
#define reg_RX_DTL_LMS_FFE_PST1_COE_LANE_5_0  RX_DTL_LMS_FFE_REG4.BF.RX_DTL_LMS_FFE_PST1_COE_LANE_5_0
#define reg_RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0  RX_DTL_LMS_FFE_REG4.BF.RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0

// 0x0054	RX_DTL_LMS_FFE_REG5		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST2_COE_LANE_4_0         : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[23:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:13]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0         : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG5_t;
__xdata __at( 0x3754 ) volatile RX_DTL_LMS_FFE_REG5_t RX_DTL_LMS_FFE_REG5;
#define reg_RX_DTL_LMS_FFE_PST2_COE_LANE_4_0  RX_DTL_LMS_FFE_REG5.BF.RX_DTL_LMS_FFE_PST2_COE_LANE_4_0
#define reg_RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0  RX_DTL_LMS_FFE_REG5.BF.RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0

// 0x0058	RX_DTL_LMS_FFE_REG6		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST3_COE_LANE_3_0         : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[23:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:12]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0         : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG6_t;
__xdata __at( 0x3758 ) volatile RX_DTL_LMS_FFE_REG6_t RX_DTL_LMS_FFE_REG6;
#define reg_RX_DTL_LMS_FFE_PST3_COE_LANE_3_0  RX_DTL_LMS_FFE_REG6.BF.RX_DTL_LMS_FFE_PST3_COE_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0  RX_DTL_LMS_FFE_REG6.BF.RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0

#endif
