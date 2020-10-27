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
__xdata __at( 0x4a00 ) volatile CDR_LOCK_REG0_LANE_t CDR_LOCK_REG0_LANE;
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
__xdata __at( 0x4a04 ) volatile CDR_LOCK_REG1_LANE_t CDR_LOCK_REG1_LANE;
#define reg_RX_PH_TH2_UNLOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH2_UNLOCK_LANE_7_0
#define reg_RX_PH_TH2_LOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH2_LOCK_LANE_7_0
#define reg_RX_PH_TH1_UNLOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH1_UNLOCK_LANE_7_0
#define reg_RX_PH_TH1_LOCK_LANE_7_0  CDR_LOCK_REG1_LANE.BF.RX_PH_TH1_LOCK_LANE_7_0

// 0x0008	DTL_CTRL_REG0_LANE		RX DTL Control Register0
typedef union {
	struct {
		uint8_t RX_DTL_FREQ_OFST_LANE_14_0_b0            : 8;	/* [14:0]     r/w 15'h0*/
		uint8_t RX_DTL_FREQ_OFST_LANE_14_0_b1            : 7;	/* [14:0]     r/w 15'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_DTL_CDR_DCO_EN_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t RX_DTL_TED_SIGN_LANE                     : 1;	/*     17     r/w   0*/
		uint8_t RX_DTL_SLOW_TED_SIGN_LANE                : 1;	/*     18     r/w   0*/
		uint8_t RX_DTL_PH_OFST_VALID_LANE                : 1;	/*     19     r/w   0*/
		uint8_t RX_DTL_TED_OFST_LANE_3_0                 : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RX_DTL_PH_OFST_LANE_7_0                  : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG0_LANE_t;
__xdata __at( 0x4a08 ) volatile DTL_CTRL_REG0_LANE_t DTL_CTRL_REG0_LANE;
#define reg_RX_DTL_FREQ_OFST_LANE_14_0_b0  DTL_CTRL_REG0_LANE.BF.RX_DTL_FREQ_OFST_LANE_14_0_b0
#define reg_RX_DTL_FREQ_OFST_LANE_14_0_b1  DTL_CTRL_REG0_LANE.BF.RX_DTL_FREQ_OFST_LANE_14_0_b1
#define reg_RX_DTL_CDR_DCO_EN_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_CDR_DCO_EN_LANE
#define reg_RX_DTL_TED_SIGN_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_TED_SIGN_LANE
#define reg_RX_DTL_SLOW_TED_SIGN_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_SLOW_TED_SIGN_LANE
#define reg_RX_DTL_PH_OFST_VALID_LANE  DTL_CTRL_REG0_LANE.BF.RX_DTL_PH_OFST_VALID_LANE
#define reg_RX_DTL_TED_OFST_LANE_3_0  DTL_CTRL_REG0_LANE.BF.RX_DTL_TED_OFST_LANE_3_0
#define reg_RX_DTL_PH_OFST_LANE_7_0  DTL_CTRL_REG0_LANE.BF.RX_DTL_PH_OFST_LANE_7_0

// 0x000c	DTL_LPF_REG0_LANE		RX DTL Low Pass Filter Register0
typedef union {
	struct {
		uint8_t RX_DTL_LSTED_UD_MODE_LANE                : 1;	/*      0     r/w   0*/
		uint8_t RX_DTL_1PLUSD_PAM2_EN_LANE               : 1;	/*      1     r/w   0*/
		uint8_t RX_DTL_1PLUSD_EN_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t RX_DTL_LPF_KI_KP_VALID_LANE              : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RX_DTL_LPF_FRZ_HOLD_TIME_LANE_1_0        : 2;	/*  [6:5]     r/w   0*/
		uint8_t RX_DTL_DCO_SEL_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t RX_DTL_DPLL_PI_EN_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_DTL_LPF_FRZ_LANE                      : 1;	/*     16     r/w   0*/
		uint8_t RX_DTL_LPF_KI_FRAC_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t RX_DTL_LPF_KI_EN_LANE                    : 1;	/*     18     r/w   1*/
		uint8_t RX_DTL_LPF_KI_SHIFT_LANE_4_0             : 5;	/*[23:19]     r/w 5'h9*/
		uint8_t RX_DTL_LPF_KP_EN_LANE                    : 1;	/*     24     r/w   1*/
		uint8_t RX_DTL_LPF_KP_SHIFT_LANE_3_0             : 4;	/*[28:25]     r/w 4'h5*/
		uint8_t RX_DTL_LPF_KP_FRAC_LANE_1_0              : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_LPF_REG0_LANE_t;
__xdata __at( 0x4a0c ) volatile DTL_LPF_REG0_LANE_t DTL_LPF_REG0_LANE;
#define reg_RX_DTL_LSTED_UD_MODE_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LSTED_UD_MODE_LANE
#define reg_RX_DTL_1PLUSD_PAM2_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_1PLUSD_PAM2_EN_LANE
#define reg_RX_DTL_1PLUSD_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_1PLUSD_EN_LANE
#define reg_RX_DTL_LPF_KI_KP_VALID_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_KP_VALID_LANE
#define reg_RX_DTL_LPF_FRZ_HOLD_TIME_LANE_1_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_FRZ_HOLD_TIME_LANE_1_0
#define reg_RX_DTL_DCO_SEL_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_DCO_SEL_LANE
#define reg_RX_DTL_DPLL_PI_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_DPLL_PI_EN_LANE
#define reg_RX_DTL_LPF_FRZ_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_FRZ_LANE
#define reg_RX_DTL_LPF_KI_FRAC_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_FRAC_LANE
#define reg_RX_DTL_LPF_KI_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_EN_LANE
#define reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KI_SHIFT_LANE_4_0
#define reg_RX_DTL_LPF_KP_EN_LANE  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KP_EN_LANE
#define reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KP_SHIFT_LANE_3_0
#define reg_RX_DTL_LPF_KP_FRAC_LANE_1_0  DTL_LPF_REG0_LANE.BF.RX_DTL_LPF_KP_FRAC_LANE_1_0

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
__xdata __at( 0x4a10 ) volatile CDR_LOCK_REG2_LANE_t CDR_LOCK_REG2_LANE;
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
__xdata __at( 0x4a14 ) volatile CDR_LOCK_REG3_LANE_t CDR_LOCK_REG3_LANE;
#define reg_RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b0  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b0
#define reg_RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b1  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_UNLOCK_LANE_15_0_b1
#define reg_RX_FREQ_DET_TH1_LOCK_LANE_15_0_b0  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_LOCK_LANE_15_0_b0
#define reg_RX_FREQ_DET_TH1_LOCK_LANE_15_0_b1  CDR_LOCK_REG3_LANE.BF.RX_FREQ_DET_TH1_LOCK_LANE_15_0_b1
#define reg_RX_FREQ_DET_TH1_UNLOCK_LANE_15_0  CDR_LOCK_REG3_LANE.WT.W0
#define reg_RX_FREQ_DET_TH1_LOCK_LANE_15_0  CDR_LOCK_REG3_LANE.WT.W1

// 0x0018	DTL_LPF_REG1_LANE		RX DTL Low Pass Filter Register1
typedef union {
	struct {
		uint8_t DIG_ID_DTL_LANE_7_0                      : 8;	/*  [7:0]       r 8'h11*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
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
__xdata __at( 0x4a18 ) volatile DTL_LPF_REG1_LANE_t DTL_LPF_REG1_LANE;
#define reg_DIG_ID_DTL_LANE_7_0  DTL_LPF_REG1_LANE.BF.DIG_ID_DTL_LANE_7_0
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
		uint8_t RX_DTL_CDR_DCO_DAC_LANE_6_0              : 7;	/* [15:9]       r 7'h0*/
		uint8_t RX_DTL_CDR_DCO_DAC_STABLE_LANE_6_0       : 7;	/*[22:16]       r 7'h0*/
		uint8_t RX_DTL_FOFST_REQ_LANE                    : 1;	/*     23     r/w   0*/
		uint8_t RX_DTL_CDR_DCO_DAC_REQ_LANE              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 3;	/*[27:25]     r/w   0*/
		uint8_t RX_DTL_TED_OFST_VALID_LANE               : 1;	/*     28     r/w   0*/
		uint8_t RX_DTL_FREQ_OFST_VALID_LANE              : 1;	/*     29     r/w   0*/
		uint8_t RX_DTL_BLIND_EQL_EN_LANE                 : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG1_LANE_t;
__xdata __at( 0x4a1c ) volatile DTL_CTRL_REG1_LANE_t DTL_CTRL_REG1_LANE;
#define reg_RX_EOM_DPHER_OFST_LANE_7_0  DTL_CTRL_REG1_LANE.BF.RX_EOM_DPHER_OFST_LANE_7_0
#define reg_RX_EOM_DPHER_OFST_VALID_LANE  DTL_CTRL_REG1_LANE.BF.RX_EOM_DPHER_OFST_VALID_LANE
#define reg_RX_DTL_CDR_DCO_DAC_LANE_6_0  DTL_CTRL_REG1_LANE.BF.RX_DTL_CDR_DCO_DAC_LANE_6_0
#define reg_RX_DTL_CDR_DCO_DAC_STABLE_LANE_6_0  DTL_CTRL_REG1_LANE.BF.RX_DTL_CDR_DCO_DAC_STABLE_LANE_6_0
#define reg_RX_DTL_FOFST_REQ_LANE  DTL_CTRL_REG1_LANE.BF.RX_DTL_FOFST_REQ_LANE
#define reg_RX_DTL_CDR_DCO_DAC_REQ_LANE  DTL_CTRL_REG1_LANE.BF.RX_DTL_CDR_DCO_DAC_REQ_LANE
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
__xdata __at( 0x4a20 ) volatile DTL_CTRL_REG2_LANE_t DTL_CTRL_REG2_LANE;
#define reg_RX_DTL_FOFST_LANE_31_0_b0  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b0
#define reg_RX_DTL_FOFST_LANE_31_0_b1  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b1
#define reg_RX_DTL_FOFST_LANE_31_0_b2  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b2
#define reg_RX_DTL_FOFST_LANE_31_0_b3  DTL_CTRL_REG2_LANE.BF.RX_DTL_FOFST_LANE_31_0_b3

// 0x0024	DTL_CLKGEN_REG1_LANE		RX DTL Clock Register1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [13:0]     r/w   0*/
		uint8_t RESERVED_8                               : 6;	/* [13:0]     r/w   0*/
		uint8_t RX_DTL_FFE_CLK_EN_LANE                   : 1;	/*     14     r/w   1*/
		uint8_t RX_DTL_FFE_CLK_ON_LANE                   : 1;	/*     15     r/w   0*/
		uint8_t RX_DTL_DCO_CLK_EN_LANE                   : 1;	/*     16     r/w   1*/
		uint8_t RX_DTL_DCO_CLK_ON_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t RX_DTL_INTG_CLK_EN_LANE                  : 1;	/*     18     r/w   1*/
		uint8_t RX_DTL_INTG_CLK_ON_LANE                  : 1;	/*     19     r/w   0*/
		uint8_t RX_DTL_1PLUSD_CLK_EN_LANE                : 1;	/*     20     r/w   1*/
		uint8_t RX_DTL_1PLUSD_CLK_ON_LANE                : 1;	/*     21     r/w   0*/
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
__xdata __at( 0x4a24 ) volatile DTL_CLKGEN_REG1_LANE_t DTL_CLKGEN_REG1_LANE;
#define reg_RX_DTL_FFE_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_FFE_CLK_EN_LANE
#define reg_RX_DTL_FFE_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_FFE_CLK_ON_LANE
#define reg_RX_DTL_DCO_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_DCO_CLK_EN_LANE
#define reg_RX_DTL_DCO_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_DCO_CLK_ON_LANE
#define reg_RX_DTL_INTG_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_INTG_CLK_EN_LANE
#define reg_RX_DTL_INTG_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_INTG_CLK_ON_LANE
#define reg_RX_DTL_1PLUSD_CLK_EN_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_1PLUSD_CLK_EN_LANE
#define reg_RX_DTL_1PLUSD_CLK_ON_LANE  DTL_CLKGEN_REG1_LANE.BF.RX_DTL_1PLUSD_CLK_ON_LANE
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
		uint8_t RX_PI_DPHER_LANE_7_0                     : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_EOM_PI_DPHER_LANE_7_0                 : 8;	/* [15:8]     r/w   0*/
		uint8_t RX_DTL_DCO_MAX_JUMP_VALID_LANE           : 1;	/*     16     r/w   0*/
		uint8_t RX_DTL_DPHER_MAX_JUMP_LANE               : 1;	/*     17     r/w   1*/
		uint8_t RX_DTL_DCO_MAX_JUMP_LANE_1_0             : 2;	/*[19:18]     r/w 2'h2*/
		uint8_t RX_PI_DPHER_FORCE_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t RX_PI_CLK_FORCE_LANE                     : 1;	/*     21     r/w   0*/
		uint8_t RX_PI_CLK_LANE                           : 1;	/*     22     r/w   0*/
		uint8_t RX_EOM_PI_DPHER_FORCE_LANE               : 1;	/*     23     r/w   0*/
		uint8_t RX_DTL_FROM_DP_LANE                      : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_CTRL_REG3_LANE_t;
__xdata __at( 0x4a28 ) volatile DTL_CTRL_REG3_LANE_t DTL_CTRL_REG3_LANE;
#define reg_RX_PI_DPHER_LANE_7_0  DTL_CTRL_REG3_LANE.BF.RX_PI_DPHER_LANE_7_0
#define reg_RX_EOM_PI_DPHER_LANE_7_0  DTL_CTRL_REG3_LANE.BF.RX_EOM_PI_DPHER_LANE_7_0
#define reg_RX_DTL_DCO_MAX_JUMP_VALID_LANE  DTL_CTRL_REG3_LANE.BF.RX_DTL_DCO_MAX_JUMP_VALID_LANE
#define reg_RX_DTL_DPHER_MAX_JUMP_LANE  DTL_CTRL_REG3_LANE.BF.RX_DTL_DPHER_MAX_JUMP_LANE
#define reg_RX_DTL_DCO_MAX_JUMP_LANE_1_0  DTL_CTRL_REG3_LANE.BF.RX_DTL_DCO_MAX_JUMP_LANE_1_0
#define reg_RX_PI_DPHER_FORCE_LANE  DTL_CTRL_REG3_LANE.BF.RX_PI_DPHER_FORCE_LANE
#define reg_RX_PI_CLK_FORCE_LANE  DTL_CTRL_REG3_LANE.BF.RX_PI_CLK_FORCE_LANE
#define reg_RX_PI_CLK_LANE  DTL_CTRL_REG3_LANE.BF.RX_PI_CLK_LANE
#define reg_RX_EOM_PI_DPHER_FORCE_LANE  DTL_CTRL_REG3_LANE.BF.RX_EOM_PI_DPHER_FORCE_LANE
#define reg_RX_DTL_FROM_DP_LANE  DTL_CTRL_REG3_LANE.BF.RX_DTL_FROM_DP_LANE

// 0x002c	DTL_CTRL_REG4_LANE		RX DTL Control Register4
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
__xdata __at( 0x4a2c ) volatile DTL_CTRL_REG4_LANE_t DTL_CTRL_REG4_LANE;
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b0  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b0
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b1  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b1
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b2  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b2
#define reg_RX_DTL_FOFST_STABLE_LANE_31_0_b3  DTL_CTRL_REG4_LANE.BF.RX_DTL_FOFST_STABLE_LANE_31_0_b3

// 0x0030	RX_DTL_LMS_REG0		RX DTL LMS Register
typedef union {
	struct {
		uint8_t RX_DTL_BUF_CLK_EN_LANE                   : 1;	/*      0     r/w   1*/
		uint8_t RX_DTL_BUF_CLK_ON_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_SQ_FREZ_EN_LANE           : 1;	/*      2     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PAT_FREZ_EN_LANE          : 1;	/*      3     r/w   1*/
		uint8_t RX_DTL_LMS_TOP_EN_LANE                   : 1;	/*      4     r/w   0*/
		uint8_t RX_DTL_LMS_TOP_LD_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t RX_DTL_LMS_REQ_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:7]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:7]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_REG0_t;
__xdata __at( 0x4a30 ) volatile RX_DTL_LMS_REG0_t RX_DTL_LMS_REG0;
#define reg_RX_DTL_BUF_CLK_EN_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_BUF_CLK_EN_LANE
#define reg_RX_DTL_BUF_CLK_ON_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_BUF_CLK_ON_LANE
#define reg_RX_DTL_LMS_FFE_SQ_FREZ_EN_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_SQ_FREZ_EN_LANE
#define reg_RX_DTL_LMS_FFE_PAT_FREZ_EN_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_FFE_PAT_FREZ_EN_LANE
#define reg_RX_DTL_LMS_TOP_EN_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_TOP_EN_LANE
#define reg_RX_DTL_LMS_TOP_LD_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_TOP_LD_LANE
#define reg_RX_DTL_LMS_REQ_LANE  RX_DTL_LMS_REG0.BF.RX_DTL_LMS_REQ_LANE

// 0x0034	RX_DTL_LMS_BLW_REG0		RX DTL LMS BLW Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_BLW_INV_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_LD_LANE                   : 1;	/*      1     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_EN_LANE                   : 1;	/*      2     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_CLK_EN_LANE               : 1;	/*      3     r/w   1*/
		uint8_t RX_DTL_LMS_BLW_CLK_ON_LANE               : 1;	/*      4     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_PAT_FREZ_EN_LANE          : 1;	/*      5     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_SQ_FREZ_EN_LANE           : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_MU_LANE_3_0               : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_BLW_REG0_t;
__xdata __at( 0x4a34 ) volatile RX_DTL_LMS_BLW_REG0_t RX_DTL_LMS_BLW_REG0;
#define reg_RX_DTL_LMS_BLW_INV_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_INV_LANE
#define reg_RX_DTL_LMS_BLW_LD_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_LD_LANE
#define reg_RX_DTL_LMS_BLW_EN_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_EN_LANE
#define reg_RX_DTL_LMS_BLW_CLK_EN_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_CLK_EN_LANE
#define reg_RX_DTL_LMS_BLW_CLK_ON_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_CLK_ON_LANE
#define reg_RX_DTL_LMS_BLW_PAT_FREZ_EN_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_PAT_FREZ_EN_LANE
#define reg_RX_DTL_LMS_BLW_SQ_FREZ_EN_LANE  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_SQ_FREZ_EN_LANE
#define reg_RX_DTL_LMS_BLW_MU_LANE_3_0  RX_DTL_LMS_BLW_REG0.BF.RX_DTL_LMS_BLW_MU_LANE_3_0

// 0x0038	RX_DTL_LMS_GAIN_REG0		RX DTL LMS GAIN Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_BLW_COE_LANE_4_0              : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_DTL_LMS_BLW_EXT_LANE_4_0              : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_GAIN_REG0_t;
__xdata __at( 0x4a38 ) volatile RX_DTL_LMS_GAIN_REG0_t RX_DTL_LMS_GAIN_REG0;
#define reg_RX_DTL_LMS_BLW_COE_LANE_4_0  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_BLW_COE_LANE_4_0
#define reg_RX_DTL_LMS_BLW_EXT_LANE_4_0  RX_DTL_LMS_GAIN_REG0.BF.RX_DTL_LMS_BLW_EXT_LANE_4_0

// 0x003c	RX_DTL_LMS_FFE_REG0		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_GAIN_INV_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_LD_LANE                  : 1;	/*      1     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_EN_LANE                  : 1;	/*      2     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_CLK_EN_LANE              : 1;	/*      3     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_CLK_ON_LANE              : 1;	/*      4     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_PAT_FREZ_EN_LANE         : 1;	/*      5     r/w   1*/
		uint8_t RX_DTL_LMS_GAIN_SQ_FREZ_EN_LANE          : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_MU_LANE_3_0              : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG0_t;
__xdata __at( 0x4a3c ) volatile RX_DTL_LMS_FFE_REG0_t RX_DTL_LMS_FFE_REG0;
#define reg_RX_DTL_LMS_GAIN_INV_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_INV_LANE
#define reg_RX_DTL_LMS_GAIN_LD_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_LD_LANE
#define reg_RX_DTL_LMS_GAIN_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_EN_LANE
#define reg_RX_DTL_LMS_GAIN_CLK_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_CLK_EN_LANE
#define reg_RX_DTL_LMS_GAIN_CLK_ON_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_CLK_ON_LANE
#define reg_RX_DTL_LMS_GAIN_PAT_FREZ_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_PAT_FREZ_EN_LANE
#define reg_RX_DTL_LMS_GAIN_SQ_FREZ_EN_LANE  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_SQ_FREZ_EN_LANE
#define reg_RX_DTL_LMS_GAIN_MU_LANE_3_0  RX_DTL_LMS_FFE_REG0.BF.RX_DTL_LMS_GAIN_MU_LANE_3_0

// 0x0040	RX_DTL_LMS_FFE_MU		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_GAIN_COE_LANE_9_0_b0          : 8;	/*  [9:0]       r 10'h0*/
		uint8_t RX_DTL_LMS_GAIN_COE_LANE_9_0_b1          : 2;	/*  [9:0]       r 10'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t RX_DTL_LMS_GAIN_EXT_LANE_9_0_b0          : 8;	/*[25:16]     r/w 10'hc0*/
		uint8_t RX_DTL_LMS_GAIN_EXT_LANE_9_0_b1          : 2;	/*[25:16]     r/w 10'hc0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_MU_t;
__xdata __at( 0x4a40 ) volatile RX_DTL_LMS_FFE_MU_t RX_DTL_LMS_FFE_MU;
#define reg_RX_DTL_LMS_GAIN_COE_LANE_9_0_b0  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_GAIN_COE_LANE_9_0_b0
#define reg_RX_DTL_LMS_GAIN_COE_LANE_9_0_b1  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_GAIN_COE_LANE_9_0_b1
#define reg_RX_DTL_LMS_GAIN_EXT_LANE_9_0_b0  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_GAIN_EXT_LANE_9_0_b0
#define reg_RX_DTL_LMS_GAIN_EXT_LANE_9_0_b1  RX_DTL_LMS_FFE_MU.BF.RX_DTL_LMS_GAIN_EXT_LANE_9_0_b1

// 0x0044	RX_DTL_LMS_FFE_REG1		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0         : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0         : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG1_t;
__xdata __at( 0x4a44 ) volatile RX_DTL_LMS_FFE_REG1_t RX_DTL_LMS_FFE_REG1;
#define reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0  RX_DTL_LMS_FFE_REG1.BF.RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0
#define reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0  RX_DTL_LMS_FFE_REG1.BF.RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0

// 0x0048	RX_DTL_LMS_FFE_REG2		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0         : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0         : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG2_t;
__xdata __at( 0x4a48 ) volatile RX_DTL_LMS_FFE_REG2_t RX_DTL_LMS_FFE_REG2;
#define reg_RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0  RX_DTL_LMS_FFE_REG2.BF.RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0
#define reg_RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0  RX_DTL_LMS_FFE_REG2.BF.RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0

// 0x004c	RX_DTL_LMS_FFE_REG3		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0         : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0         : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG3_t;
__xdata __at( 0x4a4c ) volatile RX_DTL_LMS_FFE_REG3_t RX_DTL_LMS_FFE_REG3;
#define reg_RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0  RX_DTL_LMS_FFE_REG3.BF.RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0  RX_DTL_LMS_FFE_REG3.BF.RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0

// 0x0050	RX_DTL_LMS_FFE_REG4		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PST1_COE_LANE_5_0         : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0         : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG4_t;
__xdata __at( 0x4a50 ) volatile RX_DTL_LMS_FFE_REG4_t RX_DTL_LMS_FFE_REG4;
#define reg_RX_DTL_LMS_FFE_PST1_COE_LANE_5_0  RX_DTL_LMS_FFE_REG4.BF.RX_DTL_LMS_FFE_PST1_COE_LANE_5_0
#define reg_RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0  RX_DTL_LMS_FFE_REG4.BF.RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0

// 0x0054	RX_DTL_LMS_FFE_REG5		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PST2_COE_LANE_4_0         : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0         : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG5_t;
__xdata __at( 0x4a54 ) volatile RX_DTL_LMS_FFE_REG5_t RX_DTL_LMS_FFE_REG5;
#define reg_RX_DTL_LMS_FFE_PST2_COE_LANE_4_0  RX_DTL_LMS_FFE_REG5.BF.RX_DTL_LMS_FFE_PST2_COE_LANE_4_0
#define reg_RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0  RX_DTL_LMS_FFE_REG5.BF.RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0

// 0x0058	RX_DTL_LMS_FFE_REG6		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PST3_COE_LANE_3_0         : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0         : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG6_t;
__xdata __at( 0x4a58 ) volatile RX_DTL_LMS_FFE_REG6_t RX_DTL_LMS_FFE_REG6;
#define reg_RX_DTL_LMS_FFE_PST3_COE_LANE_3_0  RX_DTL_LMS_FFE_REG6.BF.RX_DTL_LMS_FFE_PST3_COE_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0  RX_DTL_LMS_FFE_REG6.BF.RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0

// 0x005c	RX_DTL_LMS_FFE_REG7		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_RUN_STOP_EN_LANE              : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_DTL_LMS_PRE_RUN_TIME_LANE_3_0         : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_DTL_LMS_STOP_TIME_LANE_5_0            : 6;	/*[21:16]     r/w 6'hb*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_DTL_LMS_RUN_TIME_LANE_5_0             : 6;	/*[29:24]     r/w 6'hb*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG7_t;
__xdata __at( 0x4a5c ) volatile RX_DTL_LMS_FFE_REG7_t RX_DTL_LMS_FFE_REG7;
#define reg_RX_DTL_LMS_RUN_STOP_EN_LANE  RX_DTL_LMS_FFE_REG7.BF.RX_DTL_LMS_RUN_STOP_EN_LANE
#define reg_RX_DTL_LMS_PRE_RUN_TIME_LANE_3_0  RX_DTL_LMS_FFE_REG7.BF.RX_DTL_LMS_PRE_RUN_TIME_LANE_3_0
#define reg_RX_DTL_LMS_STOP_TIME_LANE_5_0  RX_DTL_LMS_FFE_REG7.BF.RX_DTL_LMS_STOP_TIME_LANE_5_0
#define reg_RX_DTL_LMS_RUN_TIME_LANE_5_0  RX_DTL_LMS_FFE_REG7.BF.RX_DTL_LMS_RUN_TIME_LANE_5_0

// 0x0060	RX_DTL_LMS_FFE_REG8		RX DTL LMS FFE Register
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
} RX_DTL_LMS_FFE_REG8_t;
__xdata __at( 0x4a60 ) volatile RX_DTL_LMS_FFE_REG8_t RX_DTL_LMS_FFE_REG8;
#define reg_RX_DTL_LMS_FFE_MU_LANE_3_0  RX_DTL_LMS_FFE_REG8.BF.RX_DTL_LMS_FFE_MU_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0  RX_DTL_LMS_FFE_REG8.BF.RX_DTL_LMS_FFE_PST1_MU_LANE_3_0
#define reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0  RX_DTL_LMS_FFE_REG8.BF.RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0

// 0x0064	RX_DTL_LMS_FFE_REG9		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PRE_LD_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE_EN_LANE_2_0           : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE_CLK_EN_LANE_2_0       : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE_CLK_ON_LANE_2_0       : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG9_t;
__xdata __at( 0x4a64 ) volatile RX_DTL_LMS_FFE_REG9_t RX_DTL_LMS_FFE_REG9;
#define reg_RX_DTL_LMS_FFE_PRE_LD_LANE_2_0  RX_DTL_LMS_FFE_REG9.BF.RX_DTL_LMS_FFE_PRE_LD_LANE_2_0
#define reg_RX_DTL_LMS_FFE_PRE_EN_LANE_2_0  RX_DTL_LMS_FFE_REG9.BF.RX_DTL_LMS_FFE_PRE_EN_LANE_2_0
#define reg_RX_DTL_LMS_FFE_PRE_CLK_EN_LANE_2_0  RX_DTL_LMS_FFE_REG9.BF.RX_DTL_LMS_FFE_PRE_CLK_EN_LANE_2_0
#define reg_RX_DTL_LMS_FFE_PRE_CLK_ON_LANE_2_0  RX_DTL_LMS_FFE_REG9.BF.RX_DTL_LMS_FFE_PRE_CLK_ON_LANE_2_0

// 0x0068	RX_DTL_LMS_FFE_REG10		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PRE_INV_LANE_2_0          : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG10_t;
__xdata __at( 0x4a68 ) volatile RX_DTL_LMS_FFE_REG10_t RX_DTL_LMS_FFE_REG10;
#define reg_RX_DTL_LMS_FFE_PRE_INV_LANE_2_0  RX_DTL_LMS_FFE_REG10.BF.RX_DTL_LMS_FFE_PRE_INV_LANE_2_0

// 0x006c	RX_DTL_LMS_FFE_REG11		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PST_LD_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST_EN_LANE_2_0           : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST_CLK_EN_LANE_2_0       : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST_CLK_ON_LANE_2_0       : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG11_t;
__xdata __at( 0x4a6c ) volatile RX_DTL_LMS_FFE_REG11_t RX_DTL_LMS_FFE_REG11;
#define reg_RX_DTL_LMS_FFE_PST_LD_LANE_2_0  RX_DTL_LMS_FFE_REG11.BF.RX_DTL_LMS_FFE_PST_LD_LANE_2_0
#define reg_RX_DTL_LMS_FFE_PST_EN_LANE_2_0  RX_DTL_LMS_FFE_REG11.BF.RX_DTL_LMS_FFE_PST_EN_LANE_2_0
#define reg_RX_DTL_LMS_FFE_PST_CLK_EN_LANE_2_0  RX_DTL_LMS_FFE_REG11.BF.RX_DTL_LMS_FFE_PST_CLK_EN_LANE_2_0
#define reg_RX_DTL_LMS_FFE_PST_CLK_ON_LANE_2_0  RX_DTL_LMS_FFE_REG11.BF.RX_DTL_LMS_FFE_PST_CLK_ON_LANE_2_0

// 0x0070	RX_DTL_LMS_FFE_REG12		RX DTL LMS FFE Register
typedef union {
	struct {
		uint8_t RX_DTL_LMS_FFE_PST_INV_LANE_2_0          : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_LMS_FFE_REG12_t;
__xdata __at( 0x4a70 ) volatile RX_DTL_LMS_FFE_REG12_t RX_DTL_LMS_FFE_REG12;
#define reg_RX_DTL_LMS_FFE_PST_INV_LANE_2_0  RX_DTL_LMS_FFE_REG12.BF.RX_DTL_LMS_FFE_PST_INV_LANE_2_0

// 0x0074	RX_DTL_SLICER_REG0		RX DTL Slicer Register
typedef union {
	struct {
		uint8_t RX_DTL_DELTA_TH_TOP_LANE_5_0             : 6;	/*  [5:0]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t RX_DTL_DELTA_TH_MID_LANE_5_0             : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_DTL_DELTA_TH_BOT_LANE_5_0             : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RX_DTL_KC_LANE_5_0                       : 6;	/*[29:24]     r/w 6'h30*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RX_DTL_SLICER_CTRL_VALID_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_SLICER_REG0_t;
__xdata __at( 0x4a74 ) volatile RX_DTL_SLICER_REG0_t RX_DTL_SLICER_REG0;
#define reg_RX_DTL_DELTA_TH_TOP_LANE_5_0  RX_DTL_SLICER_REG0.BF.RX_DTL_DELTA_TH_TOP_LANE_5_0
#define reg_RX_DTL_DELTA_TH_MID_LANE_5_0  RX_DTL_SLICER_REG0.BF.RX_DTL_DELTA_TH_MID_LANE_5_0
#define reg_RX_DTL_DELTA_TH_BOT_LANE_5_0  RX_DTL_SLICER_REG0.BF.RX_DTL_DELTA_TH_BOT_LANE_5_0
#define reg_RX_DTL_KC_LANE_5_0  RX_DTL_SLICER_REG0.BF.RX_DTL_KC_LANE_5_0
#define reg_RX_DTL_SLICER_CTRL_VALID_LANE  RX_DTL_SLICER_REG0.BF.RX_DTL_SLICER_CTRL_VALID_LANE

// 0x0078	RX_DTL_SLICER_REG1		RX DTL Slicer Register
typedef union {
	struct {
		uint8_t RX_DTL_P3_LEVEL_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h30*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_DTL_P1_LEVEL_LANE_6_0                 : 7;	/* [14:8]     r/w 7'h10*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_DTL_M1_LEVEL_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h70*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_DTL_M3_LEVEL_LANE_6_0                 : 7;	/*[30:24]     r/w 7'h50*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_SLICER_REG1_t;
__xdata __at( 0x4a78 ) volatile RX_DTL_SLICER_REG1_t RX_DTL_SLICER_REG1;
#define reg_RX_DTL_P3_LEVEL_LANE_6_0  RX_DTL_SLICER_REG1.BF.RX_DTL_P3_LEVEL_LANE_6_0
#define reg_RX_DTL_P1_LEVEL_LANE_6_0  RX_DTL_SLICER_REG1.BF.RX_DTL_P1_LEVEL_LANE_6_0
#define reg_RX_DTL_M1_LEVEL_LANE_6_0  RX_DTL_SLICER_REG1.BF.RX_DTL_M1_LEVEL_LANE_6_0
#define reg_RX_DTL_M3_LEVEL_LANE_6_0  RX_DTL_SLICER_REG1.BF.RX_DTL_M3_LEVEL_LANE_6_0

// 0x007c	RX_DTL_DCO_REG0		RX DTL DCO  Register
typedef union {
	struct {
		uint8_t ANA_RX_DTL_CDR_DCO_DAC_LANE_6_0          : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t ANA_RX_DTL_CDR_DCO_DAC_FORCE_LANE        : 1;	/*      7     r/w   0*/
		uint8_t ANA_RX_DTL_CDR_DCO_SEL_LANE              : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_DTL_CDR_DCO_SEL_FORCE_LANE        : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_DCO_REG0_t;
__xdata __at( 0x4a7c ) volatile RX_DTL_DCO_REG0_t RX_DTL_DCO_REG0;
#define reg_ANA_RX_DTL_CDR_DCO_DAC_LANE_6_0  RX_DTL_DCO_REG0.BF.ANA_RX_DTL_CDR_DCO_DAC_LANE_6_0
#define reg_ANA_RX_DTL_CDR_DCO_DAC_FORCE_LANE  RX_DTL_DCO_REG0.BF.ANA_RX_DTL_CDR_DCO_DAC_FORCE_LANE
#define reg_ANA_RX_DTL_CDR_DCO_SEL_LANE  RX_DTL_DCO_REG0.BF.ANA_RX_DTL_CDR_DCO_SEL_LANE
#define reg_ANA_RX_DTL_CDR_DCO_SEL_FORCE_LANE  RX_DTL_DCO_REG0.BF.ANA_RX_DTL_CDR_DCO_SEL_FORCE_LANE

// 0x0080	RX_DTL_DATASYNC_BITSKIP_REG0		RX DTL Data Sync Bit Skip  Register
typedef union {
	struct {
		uint8_t RX_DATASYNC_START_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t DATARATE_2_PLLCLK_RATIO_LANE_3_0         : 4;	/*  [4:1]     r/w 4'h3*/
		uint8_t RX_DATASYNC_JUMP_STEP_SEL_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h3*/
		uint8_t RX_DTL_DATASYNC_CLK_EN_LANE              : 1;	/*      8     r/w   0*/
		uint8_t RX_DATASYNC_JUMP_DONE_LANE               : 1;	/*      9       r   0*/
		uint8_t RX_DATASYNC_JUMP_ERROR_LANE              : 1;	/*     10       r   0*/
		uint8_t RX_DATASYNC_DONE_LANE                    : 1;	/*     11     r/w   0*/
		uint8_t RX_DTL_FRZ_FM_DATASYNC_LANE              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 2;	/*[14:13]     r/w   0*/
		uint8_t DPHER_SHIFT_TARGET_FORCE_LANE            : 1;	/*     15     r/w   0*/
		uint8_t DPHER_SHIFT_TARGET_LANE_12_0_b0          : 8;	/*[28:16]     r/w   0*/
		uint8_t DPHER_SHIFT_TARGET_LANE_12_0_b1          : 5;	/*[28:16]     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DTL_DATASYNC_BITSKIP_REG0_t;
__xdata __at( 0x4a80 ) volatile RX_DTL_DATASYNC_BITSKIP_REG0_t RX_DTL_DATASYNC_BITSKIP_REG0;
#define reg_RX_DATASYNC_START_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DATASYNC_START_LANE
#define reg_DATARATE_2_PLLCLK_RATIO_LANE_3_0  RX_DTL_DATASYNC_BITSKIP_REG0.BF.DATARATE_2_PLLCLK_RATIO_LANE_3_0
#define reg_RX_DATASYNC_JUMP_STEP_SEL_LANE_2_0  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DATASYNC_JUMP_STEP_SEL_LANE_2_0
#define reg_RX_DTL_DATASYNC_CLK_EN_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DTL_DATASYNC_CLK_EN_LANE
#define reg_RX_DATASYNC_JUMP_DONE_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DATASYNC_JUMP_DONE_LANE
#define reg_RX_DATASYNC_JUMP_ERROR_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DATASYNC_JUMP_ERROR_LANE
#define reg_RX_DATASYNC_DONE_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DATASYNC_DONE_LANE
#define reg_RX_DTL_FRZ_FM_DATASYNC_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.RX_DTL_FRZ_FM_DATASYNC_LANE
#define reg_DPHER_SHIFT_TARGET_FORCE_LANE  RX_DTL_DATASYNC_BITSKIP_REG0.BF.DPHER_SHIFT_TARGET_FORCE_LANE
#define reg_DPHER_SHIFT_TARGET_LANE_12_0_b0  RX_DTL_DATASYNC_BITSKIP_REG0.BF.DPHER_SHIFT_TARGET_LANE_12_0_b0
#define reg_DPHER_SHIFT_TARGET_LANE_12_0_b1  RX_DTL_DATASYNC_BITSKIP_REG0.BF.DPHER_SHIFT_TARGET_LANE_12_0_b1

#endif
