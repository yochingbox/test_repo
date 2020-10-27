#ifndef PHY_REG_C_RX_LANE_H
#define PHY_REG_C_RX_LANE_H



// 0x0000	PM_CTRL_RX_LANE_REG1_LANE		Power Control RX Lane Register1
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
		uint8_t ANA_PU_RX_DLY_LANE                       : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_DTL_LOOP_FREEZE_LANE              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t PIN_PU_RX_RD_LANE                        : 1;	/*     18       r   0*/
		uint8_t RX_INIT_DONE_LANE                        : 1;	/*     19     r/w   0*/
		uint8_t DTL_CLK_OFF_LANE                         : 1;	/*     20     r/w   1*/
		uint8_t RESET_DTL_LANE                           : 1;	/*     21     r/w   1*/
		uint8_t PIN_PLL_READY_RX_LANE                    : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t PLL_READY_RX_LANE                        : 1;	/*     24       r   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t PU_SQ_FORCE_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t ANA_PU_SQ_LANE                           : 1;	/*     29     r/w   0*/
		uint8_t ANA_PU_RX_LANE                           : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_RX_FORCE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PM_CTRL_RX_LANE_REG1_LANE_t;
__xdata __at( 0x2100 ) volatile PM_CTRL_RX_LANE_REG1_LANE_t PM_CTRL_RX_LANE_REG1_LANE;
#define reg_ANA_PU_RX_DLY_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_DLY_LANE
#define reg_ANA_RX_DTL_LOOP_FREEZE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_RX_DTL_LOOP_FREEZE_LANE
#define reg_PIN_PU_RX_RD_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PIN_PU_RX_RD_LANE
#define reg_RX_INIT_DONE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RX_INIT_DONE_LANE
#define reg_DTL_CLK_OFF_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.DTL_CLK_OFF_LANE
#define reg_RESET_DTL_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.RESET_DTL_LANE
#define reg_PIN_PLL_READY_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PIN_PLL_READY_RX_LANE
#define reg_PLL_READY_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PLL_READY_RX_LANE
#define reg_PU_SQ_FORCE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.PU_SQ_FORCE_LANE
#define reg_ANA_PU_SQ_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_SQ_LANE
#define reg_ANA_PU_RX_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_LANE
#define reg_ANA_PU_RX_FORCE_LANE  PM_CTRL_RX_LANE_REG1_LANE.BF.ANA_PU_RX_FORCE_LANE

// 0x0004	RX_SYSTEM_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:0]     r/w   0*/
		uint8_t RX_PAM2_EN_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RX_SEL_BITS_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_SYSTEM_LANE_t;
__xdata __at( 0x2104 ) volatile RX_SYSTEM_LANE_t RX_SYSTEM_LANE;
#define reg_RX_PAM2_EN_LANE  RX_SYSTEM_LANE.BF.RX_PAM2_EN_LANE
#define reg_RX_SEL_BITS_LANE  RX_SYSTEM_LANE.BF.RX_SEL_BITS_LANE

// 0x0008	INPUT_RX_PIN_REG0_LANE		Input Interface Register For Rx Lane0
typedef union {
	struct {
		uint8_t PU_RX_FM_REG_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t PU_RX_LANE                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RX_ACJTAG_HYST_FM_REG_LANE               : 1;	/*      6     r/w   0*/
		uint8_t RX_ACJTAG_HYST_LANE_2_0_b0               : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t RX_ACJTAG_HYST_LANE_2_0_b1               : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[26:11]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[26:11]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 3;	/*[26:11]     r/w 16'h0*/
		uint8_t PHY_GEN_RX_FM_REG_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t PHY_GEN_RX_LANE_3_0                      : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_RX_PIN_REG0_LANE_t;
__xdata __at( 0x2108 ) volatile INPUT_RX_PIN_REG0_LANE_t INPUT_RX_PIN_REG0_LANE;
#define reg_PU_RX_FM_REG_LANE  INPUT_RX_PIN_REG0_LANE.BF.PU_RX_FM_REG_LANE
#define reg_PU_RX_LANE  INPUT_RX_PIN_REG0_LANE.BF.PU_RX_LANE
#define reg_RX_ACJTAG_HYST_FM_REG_LANE  INPUT_RX_PIN_REG0_LANE.BF.RX_ACJTAG_HYST_FM_REG_LANE
#define reg_RX_ACJTAG_HYST_LANE_2_0_b0  INPUT_RX_PIN_REG0_LANE.BF.RX_ACJTAG_HYST_LANE_2_0_b0
#define reg_RX_ACJTAG_HYST_LANE_2_0_b1  INPUT_RX_PIN_REG0_LANE.BF.RX_ACJTAG_HYST_LANE_2_0_b1
#define reg_PHY_GEN_RX_FM_REG_LANE  INPUT_RX_PIN_REG0_LANE.BF.PHY_GEN_RX_FM_REG_LANE
#define reg_PHY_GEN_RX_LANE_3_0  INPUT_RX_PIN_REG0_LANE.BF.PHY_GEN_RX_LANE_3_0

// 0x000c	INPUT_RX_PIN_REG1_LANE		Input Interface Register For Rx Lane1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_HIZ_LANE                              : 1;	/*      1     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_FM_REG_LANE              : 1;	/*      2     r/w   0*/
		uint8_t RX_TRAIN_ENABLE_LANE                     : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RX_INIT_FM_REG_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RX_INIT_LANE                             : 1;	/*      7     r/w   0*/
		uint8_t RX_ACJTAG_MODE_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t RX_ACJTAG_MODE_FM_REG_LANE               : 1;	/*      9     r/w   0*/
		uint8_t RX_ACJTAG_INITP_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t RX_ACJTAG_INITP_FM_REG_LANE              : 1;	/*     11     r/w   0*/
		uint8_t RX_ACJTAG_INITN_LANE                     : 1;	/*     12     r/w   0*/
		uint8_t RX_ACJTAG_INITN_FM_REG_LANE              : 1;	/*     13     r/w   0*/
		uint8_t ANA_RX_UP2FLOOP_FM_REG_LANE              : 1;	/*     14     r/w   0*/
		uint8_t ANA_RX_UP2FLOOP_LANE_3_0_b0              : 1;	/*[18:15]     r/w 4'h0*/
		uint8_t ANA_RX_UP2FLOOP_LANE_3_0_b1              : 3;	/*[18:15]     r/w 4'h0*/
		uint8_t ANA_RX_DN2FLOOP_FM_REG_LANE              : 1;	/*     19     r/w   0*/
		uint8_t ANA_RX_DN2FLOOP_LANE_3_0                 : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RX_DC_TERM_EN_FM_REG_LANE                : 1;	/*     24     r/w   0*/
		uint8_t RX_ACJTAG_DCC_EN_FM_REG_LANE             : 1;	/*     25     r/w   0*/
		uint8_t RX_ACJTAG_REF_SEL_FM_REG_LANE            : 1;	/*     26     r/w   0*/
		uint8_t ANA_RX_VOFF_POS_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t ANA_RX_VOFF_POS_FM_REG_LANE              : 1;	/*     28     r/w   0*/
		uint8_t RX_DC_TERM_EN_LANE                       : 1;	/*     29     r/w   0*/
		uint8_t RX_ACJTAG_DCC_EN_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t RX_ACJTAG_REF_SEL_LANE                   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG1_LANE_t;
__xdata __at( 0x210c ) volatile INPUT_RX_PIN_REG1_LANE_t INPUT_RX_PIN_REG1_LANE;
#define reg_RX_HIZ_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_HIZ_LANE
#define reg_RX_TRAIN_ENABLE_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_TRAIN_ENABLE_FM_REG_LANE
#define reg_RX_TRAIN_ENABLE_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_TRAIN_ENABLE_LANE
#define reg_RX_INIT_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_INIT_FM_REG_LANE
#define reg_RX_INIT_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_INIT_LANE
#define reg_RX_ACJTAG_MODE_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_MODE_LANE
#define reg_RX_ACJTAG_MODE_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_MODE_FM_REG_LANE
#define reg_RX_ACJTAG_INITP_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITP_LANE
#define reg_RX_ACJTAG_INITP_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITP_FM_REG_LANE
#define reg_RX_ACJTAG_INITN_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITN_LANE
#define reg_RX_ACJTAG_INITN_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_INITN_FM_REG_LANE
#define reg_ANA_RX_UP2FLOOP_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_UP2FLOOP_FM_REG_LANE
#define reg_ANA_RX_UP2FLOOP_LANE_3_0_b0  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_UP2FLOOP_LANE_3_0_b0
#define reg_ANA_RX_UP2FLOOP_LANE_3_0_b1  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_UP2FLOOP_LANE_3_0_b1
#define reg_ANA_RX_DN2FLOOP_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_DN2FLOOP_FM_REG_LANE
#define reg_ANA_RX_DN2FLOOP_LANE_3_0  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_DN2FLOOP_LANE_3_0
#define reg_RX_DC_TERM_EN_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_DC_TERM_EN_FM_REG_LANE
#define reg_RX_ACJTAG_DCC_EN_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_DCC_EN_FM_REG_LANE
#define reg_RX_ACJTAG_REF_SEL_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_REF_SEL_FM_REG_LANE
#define reg_ANA_RX_VOFF_POS_LANE  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_VOFF_POS_LANE
#define reg_ANA_RX_VOFF_POS_FM_REG_LANE  INPUT_RX_PIN_REG1_LANE.BF.ANA_RX_VOFF_POS_FM_REG_LANE
#define reg_RX_DC_TERM_EN_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_DC_TERM_EN_LANE
#define reg_RX_ACJTAG_DCC_EN_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_DCC_EN_LANE
#define reg_RX_ACJTAG_REF_SEL_LANE  INPUT_RX_PIN_REG1_LANE.BF.RX_ACJTAG_REF_SEL_LANE

// 0x0010	INPUT_RX_PIN_REG2_LANE		Input Interface Register For Rx Lane2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RX_ACJTAG_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RX_ACJTAG_EN_FM_REG_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t RX_ACJTAG_AC_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t RX_ACJTAG_AC_FM_REG_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_FM_REG_LANE                : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_SQ_OUT_LANE                       : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_ACJTAG_RXN_FM_REG_LANE            : 1;	/*     11     r/w   0*/
		uint8_t ANA_RX_ACJTAG_RXN_LANE                   : 1;	/*     12     r/w   0*/
		uint8_t ANA_RX_EOM_ALIGN_CMP_OUT_FM_REG_LANE     : 1;	/*     13     r/w   0*/
		uint8_t ANA_RX_EOM_ALIGN_CMP_OUT_LANE            : 1;	/*     14     r/w   0*/
		uint8_t ANA_RX_DLL_CAL_CMP_OUT_FM_REG_LANE       : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_DLL_CAL_CMP_OUT_LANE              : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_ALIGN90_PD_OUT_FM_REG_LANE        : 1;	/*     17     r/w   0*/
		uint8_t ANA_RX_ALIGN90_PD_OUT_LANE               : 1;	/*     18     r/w   0*/
		uint8_t ANA_RX_ACJTAG_RXP_FM_REG_LANE            : 1;	/*     19     r/w   0*/
		uint8_t ANA_RX_ACJTAG_RXP_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_FM_REG_LANE           : 1;	/*     23     r/w   0*/
		uint8_t RX_ACJTAG_INIT_CLK_LANE                  : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 3;	/*[27:25]     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_FM_REG_LANE             : 1;	/*     28     r/w   0*/
		uint8_t RX_ACJTAG_DCBIAS_LANE_2_0                : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_RX_PIN_REG2_LANE_t;
__xdata __at( 0x2110 ) volatile INPUT_RX_PIN_REG2_LANE_t INPUT_RX_PIN_REG2_LANE;
#define reg_RX_ACJTAG_EN_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_EN_LANE
#define reg_RX_ACJTAG_EN_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_EN_FM_REG_LANE
#define reg_RX_ACJTAG_AC_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_AC_LANE
#define reg_RX_ACJTAG_AC_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_AC_FM_REG_LANE
#define reg_ANA_RX_SQ_OUT_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_SQ_OUT_FM_REG_LANE
#define reg_ANA_RX_SQ_OUT_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_SQ_OUT_LANE
#define reg_ANA_RX_ACJTAG_RXN_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_ACJTAG_RXN_FM_REG_LANE
#define reg_ANA_RX_ACJTAG_RXN_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_ACJTAG_RXN_LANE
#define reg_ANA_RX_EOM_ALIGN_CMP_OUT_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_EOM_ALIGN_CMP_OUT_FM_REG_LANE
#define reg_ANA_RX_EOM_ALIGN_CMP_OUT_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_EOM_ALIGN_CMP_OUT_LANE
#define reg_ANA_RX_DLL_CAL_CMP_OUT_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_DLL_CAL_CMP_OUT_FM_REG_LANE
#define reg_ANA_RX_DLL_CAL_CMP_OUT_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_DLL_CAL_CMP_OUT_LANE
#define reg_ANA_RX_ALIGN90_PD_OUT_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_ALIGN90_PD_OUT_FM_REG_LANE
#define reg_ANA_RX_ALIGN90_PD_OUT_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_ALIGN90_PD_OUT_LANE
#define reg_ANA_RX_ACJTAG_RXP_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_ACJTAG_RXP_FM_REG_LANE
#define reg_ANA_RX_ACJTAG_RXP_LANE  INPUT_RX_PIN_REG2_LANE.BF.ANA_RX_ACJTAG_RXP_LANE
#define reg_RX_ACJTAG_INIT_CLK_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_INIT_CLK_FM_REG_LANE
#define reg_RX_ACJTAG_INIT_CLK_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_INIT_CLK_LANE
#define reg_RX_ACJTAG_DCBIAS_FM_REG_LANE  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_DCBIAS_FM_REG_LANE
#define reg_RX_ACJTAG_DCBIAS_LANE_2_0  INPUT_RX_PIN_REG2_LANE.BF.RX_ACJTAG_DCBIAS_LANE_2_0

// 0x0014	SPD_CTRL_RX_LANE_REG1_LANE		Speed Control Rx Lane Register 1
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
		uint8_t PIN_PHY_GEN_RX_RD_LANE_3_0               : 4;	/*[31:28]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPD_CTRL_RX_LANE_REG1_LANE_t;
__xdata __at( 0x2114 ) volatile SPD_CTRL_RX_LANE_REG1_LANE_t SPD_CTRL_RX_LANE_REG1_LANE;
#define reg_PIN_PHY_GEN_RX_RD_LANE_3_0  SPD_CTRL_RX_LANE_REG1_LANE.BF.PIN_PHY_GEN_RX_RD_LANE_3_0

// 0x0018	DIG_RX_RSVD_REG0		Digital RX Reserved Register 0
typedef union {
	struct {
		uint8_t DIG_RX_INT_RSVD0_LANE_15_0_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_RX_INT_RSVD0_LANE_15_0_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DIG_RX_RSVD0_LANE_15_0_b0                : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t DIG_RX_RSVD0_LANE_15_0_b1                : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DIG_RX_RSVD_REG0_t;
__xdata __at( 0x2118 ) volatile DIG_RX_RSVD_REG0_t DIG_RX_RSVD_REG0;
#define reg_DIG_RX_INT_RSVD0_LANE_15_0_b0  DIG_RX_RSVD_REG0.BF.DIG_RX_INT_RSVD0_LANE_15_0_b0
#define reg_DIG_RX_INT_RSVD0_LANE_15_0_b1  DIG_RX_RSVD_REG0.BF.DIG_RX_INT_RSVD0_LANE_15_0_b1
#define reg_DIG_RX_RSVD0_LANE_15_0_b0  DIG_RX_RSVD_REG0.BF.DIG_RX_RSVD0_LANE_15_0_b0
#define reg_DIG_RX_RSVD0_LANE_15_0_b1  DIG_RX_RSVD_REG0.BF.DIG_RX_RSVD0_LANE_15_0_b1
#define reg_DIG_RX_INT_RSVD0_LANE_15_0  DIG_RX_RSVD_REG0.WT.W0
#define reg_DIG_RX_RSVD0_LANE_15_0  DIG_RX_RSVD_REG0.WT.W1

// 0x001c	CLKGEN_RX_LANE_REG1_LANE		Clock Gen Rx Lane Reg1
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
		uint8_t DTL_FLOOP_CLK_EN_LANE                    : 1;	/*     16     r/w   0*/
		uint8_t DTL_FLOOP_CLK_OFF_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t RST_SQ_MCU_CLK_LANE                      : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RST_RX2TX_LPBK_RX_CLK_LANE               : 1;	/*     20     r/w   0*/
		uint8_t RX2TX_LPBK_RX_CLK_EN_LANE                : 1;	/*     21     r/w   0*/
		uint8_t PT_RX_CLK_EN_LANE                        : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RXDCLK_AH_LANE                           : 1;	/*     25     r/w   0*/
		uint8_t RST_FRAME_SYNC_DET_CLK_LANE              : 1;	/*     26     r/w   0*/
		uint8_t FRAME_SYNC_DET_CLK_EN_LANE               : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t PIN_RX_CLK_ON_LANE                       : 1;	/*     29     r/w   1*/
		uint8_t ANA_RXCLK_INV_LANE                       : 1;	/*     30     r/w   1*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKGEN_RX_LANE_REG1_LANE_t;
__xdata __at( 0x211c ) volatile CLKGEN_RX_LANE_REG1_LANE_t CLKGEN_RX_LANE_REG1_LANE;
#define reg_DTL_FLOOP_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.DTL_FLOOP_CLK_EN_LANE
#define reg_DTL_FLOOP_CLK_OFF_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.DTL_FLOOP_CLK_OFF_LANE
#define reg_RST_SQ_MCU_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_SQ_MCU_CLK_LANE
#define reg_RST_RX2TX_LPBK_RX_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_RX2TX_LPBK_RX_CLK_LANE
#define reg_RX2TX_LPBK_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RX2TX_LPBK_RX_CLK_EN_LANE
#define reg_PT_RX_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.PT_RX_CLK_EN_LANE
#define reg_RXDCLK_AH_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RXDCLK_AH_LANE
#define reg_RST_FRAME_SYNC_DET_CLK_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.RST_FRAME_SYNC_DET_CLK_LANE
#define reg_FRAME_SYNC_DET_CLK_EN_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.FRAME_SYNC_DET_CLK_EN_LANE
#define reg_PIN_RX_CLK_ON_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.PIN_RX_CLK_ON_LANE
#define reg_ANA_RXCLK_INV_LANE  CLKGEN_RX_LANE_REG1_LANE.BF.ANA_RXCLK_INV_LANE

// 0x0020	FRAME_SYNC_DET_REG0		Frame Sync Detection Reg0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t FRAME_LOCK_LANE                          : 1;	/*      5       r   0*/
		uint8_t FRAME_FOUND_LANE                         : 1;	/*      6       r   0*/
		uint8_t WORD_FOUND_LANE                          : 1;	/*      7       r   0*/
		uint8_t ALIGN_STAT_RD_REQ_LANE                   : 1;	/*      8     r/w   0*/
		uint8_t FRAME_DET_MODE_LANE                      : 1;	/*      9     r/w   0*/
		uint8_t FRAME_REALIGN_MODE_LANE                  : 1;	/*     10     r/w   1*/
		uint8_t FRAME_END_SEL_LANE                       : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 4;	/*[20:12]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:12]     r/w   0*/
		uint8_t BAD_MARKER_NUM_LANE_2_0                  : 3;	/*[23:21]     r/w 3'h4*/
		uint8_t GOOD_MARKER_NUM_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t FRAME_LOCK_SEL_LANE                      : 1;	/*     27     r/w   0*/
		uint8_t FRAME_DET_SIDE_LEVEL_LANE_1_0            : 2;	/*[29:28]     r/w 2'h3*/
		uint8_t FRAME_DET_MIDD_LEVEL_LANE_1_0            : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG0_t;
__xdata __at( 0x2120 ) volatile FRAME_SYNC_DET_REG0_t FRAME_SYNC_DET_REG0;
#define reg_FRAME_LOCK_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_LOCK_LANE
#define reg_FRAME_FOUND_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_FOUND_LANE
#define reg_WORD_FOUND_LANE  FRAME_SYNC_DET_REG0.BF.WORD_FOUND_LANE
#define reg_ALIGN_STAT_RD_REQ_LANE  FRAME_SYNC_DET_REG0.BF.ALIGN_STAT_RD_REQ_LANE
#define reg_FRAME_DET_MODE_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_DET_MODE_LANE
#define reg_FRAME_REALIGN_MODE_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_REALIGN_MODE_LANE
#define reg_FRAME_END_SEL_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_END_SEL_LANE
#define reg_BAD_MARKER_NUM_LANE_2_0  FRAME_SYNC_DET_REG0.BF.BAD_MARKER_NUM_LANE_2_0
#define reg_GOOD_MARKER_NUM_LANE_2_0  FRAME_SYNC_DET_REG0.BF.GOOD_MARKER_NUM_LANE_2_0
#define reg_FRAME_LOCK_SEL_LANE  FRAME_SYNC_DET_REG0.BF.FRAME_LOCK_SEL_LANE
#define reg_FRAME_DET_SIDE_LEVEL_LANE_1_0  FRAME_SYNC_DET_REG0.BF.FRAME_DET_SIDE_LEVEL_LANE_1_0
#define reg_FRAME_DET_MIDD_LEVEL_LANE_1_0  FRAME_SYNC_DET_REG0.BF.FRAME_DET_MIDD_LEVEL_LANE_1_0

// 0x0024	FRAME_SYNC_DET_REG1		Frame Sync Detection Reg1
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
		uint8_t FRAME_ALIGN_LEVEL_LANE_15_0_b0           : 8;	/*[31:16]       r   0*/
		uint8_t FRAME_ALIGN_LEVEL_LANE_15_0_b1           : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG1_t;
__xdata __at( 0x2124 ) volatile FRAME_SYNC_DET_REG1_t FRAME_SYNC_DET_REG1;
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0_b0  FRAME_SYNC_DET_REG1.BF.FRAME_ALIGN_LEVEL_LANE_15_0_b0
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0_b1  FRAME_SYNC_DET_REG1.BF.FRAME_ALIGN_LEVEL_LANE_15_0_b1
#define reg_FRAME_ALIGN_LEVEL_LANE_15_0  FRAME_SYNC_DET_REG1.WT.W0

// 0x0028	FRAME_SYNC_DET_REG2		Frame Sync Detection Reg2
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
		uint8_t ALIGN_POS_LANE_79_64_b0                  : 8;	/*[31:16]       r   0*/
		uint8_t ALIGN_POS_LANE_79_64_b1                  : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG2_t;
__xdata __at( 0x2128 ) volatile FRAME_SYNC_DET_REG2_t FRAME_SYNC_DET_REG2;
#define reg_ALIGN_POS_LANE_79_64_b0  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_79_64_b0
#define reg_ALIGN_POS_LANE_79_64_b1  FRAME_SYNC_DET_REG2.BF.ALIGN_POS_LANE_79_64_b1
#define reg_ALIGN_POS_LANE_79_64  FRAME_SYNC_DET_REG2.WT.W0

// 0x002c	FRAME_SYNC_DET_REG3		Frame Sync Detection Reg3
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_63_32_b0                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_63_32_b1                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_63_32_b2                  : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_63_32_b3                  : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG3_t;
__xdata __at( 0x212c ) volatile FRAME_SYNC_DET_REG3_t FRAME_SYNC_DET_REG3;
#define reg_ALIGN_POS_LANE_63_32_b0  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b0
#define reg_ALIGN_POS_LANE_63_32_b1  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b1
#define reg_ALIGN_POS_LANE_63_32_b2  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b2
#define reg_ALIGN_POS_LANE_63_32_b3  FRAME_SYNC_DET_REG3.BF.ALIGN_POS_LANE_63_32_b3

// 0x0030	FRAME_SYNC_DET_REG4		Frame Sync Detection Reg4
typedef union {
	struct {
		uint8_t ALIGN_POS_LANE_31_0_b0                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b1                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b2                   : 8;	/* [31:0]       r   0*/
		uint8_t ALIGN_POS_LANE_31_0_b3                   : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FRAME_SYNC_DET_REG4_t;
__xdata __at( 0x2130 ) volatile FRAME_SYNC_DET_REG4_t FRAME_SYNC_DET_REG4;
#define reg_ALIGN_POS_LANE_31_0_b0  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b0
#define reg_ALIGN_POS_LANE_31_0_b1  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b1
#define reg_ALIGN_POS_LANE_31_0_b2  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b2
#define reg_ALIGN_POS_LANE_31_0_b3  FRAME_SYNC_DET_REG4.BF.ALIGN_POS_LANE_31_0_b3

// 0x0040	RX_LANE_INTERRUPT		RX Lane Interrupt Register
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
		uint8_t FRAME_UNLOCK_ISR_LANE                    : 1;	/*     29     r/w   0*/
		uint8_t FRAME_LOCK_ISR_LANE                      : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_t;
__xdata __at( 0x2140 ) volatile RX_LANE_INTERRUPT_t RX_LANE_INTERRUPT;
#define reg_FRAME_UNLOCK_ISR_LANE  RX_LANE_INTERRUPT.BF.FRAME_UNLOCK_ISR_LANE
#define reg_FRAME_LOCK_ISR_LANE  RX_LANE_INTERRUPT.BF.FRAME_LOCK_ISR_LANE

// 0x0044	RX_LANE_INTERRUPT_MASK		RX Lane Interrupt Mask Register
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
		uint8_t FRAME_UNLOCK_MASK_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t FRAME_LOCK_MASK_LANE                     : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_LANE_INTERRUPT_MASK_t;
__xdata __at( 0x2144 ) volatile RX_LANE_INTERRUPT_MASK_t RX_LANE_INTERRUPT_MASK;
#define reg_FRAME_UNLOCK_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.FRAME_UNLOCK_MASK_LANE
#define reg_FRAME_LOCK_MASK_LANE  RX_LANE_INTERRUPT_MASK.BF.FRAME_LOCK_MASK_LANE

// 0x0048	RX_DATA_PATH_REG		RX Data Path Regiser
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
		uint8_t RXD_INV_LANE                             : 1;	/*     29     r/w   0*/
		uint8_t DET_BYPASS_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t LOCAL_DIG_TX2RX_LPBK_EN_LANE             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_DATA_PATH_REG_t;
__xdata __at( 0x2148 ) volatile RX_DATA_PATH_REG_t RX_DATA_PATH_REG;
#define reg_RXD_INV_LANE  RX_DATA_PATH_REG.BF.RXD_INV_LANE
#define reg_DET_BYPASS_LANE  RX_DATA_PATH_REG.BF.DET_BYPASS_LANE
#define reg_LOCAL_DIG_TX2RX_LPBK_EN_LANE  RX_DATA_PATH_REG.BF.LOCAL_DIG_TX2RX_LPBK_EN_LANE

// 0x004c	RX_RESERVED_REG		RX Reserved Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_RESERVED_REG_t;
__xdata __at( 0x214c ) volatile RX_RESERVED_REG_t RX_RESERVED_REG;

// 0x0050	RX_CALIBRATION_REG		_field description_
typedef union {
	struct {
		uint8_t ANA_RX_ALIGN90_PD_OUT_RD_LANE            : 1;	/*      0       r   0*/
		uint8_t ANA_RX_DLL_CAL_CMP_OUT_RD_LANE           : 1;	/*      1       r   0*/
		uint8_t ANA_RX_EOM_ALIGN_CMP_OUT_RD_LANE         : 1;	/*      2       r   0*/
		uint8_t ANA_RX_VOFF_POS_RD_LANE                  : 1;	/*      3       r   0*/
		uint8_t ANA_RX_SQ_OUT_RD_LANE                    : 1;	/*      4       r   0*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w   0*/
		uint8_t RX_ALIGN90_PD_OUT_RD_REQ_LANE            : 1;	/*     16     r/w   1*/
		uint8_t RX_DLL_CAL_CMP_OUT_RD_REQ_LANE           : 1;	/*     17     r/w   1*/
		uint8_t RX_EOM_ALIGN_CMP_OUT_RD_REQ_LANE         : 1;	/*     18     r/w   1*/
		uint8_t RX_VOFF_POS_RD_REQ_LANE                  : 1;	/*     19     r/w   1*/
		uint8_t RX_SQ_OUT_RD_REQ_LANE                    : 1;	/*     20     r/w   1*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CALIBRATION_REG_t;
__xdata __at( 0x2150 ) volatile RX_CALIBRATION_REG_t RX_CALIBRATION_REG;
#define reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE  RX_CALIBRATION_REG.BF.ANA_RX_ALIGN90_PD_OUT_RD_LANE
#define reg_ANA_RX_DLL_CAL_CMP_OUT_RD_LANE  RX_CALIBRATION_REG.BF.ANA_RX_DLL_CAL_CMP_OUT_RD_LANE
#define reg_ANA_RX_EOM_ALIGN_CMP_OUT_RD_LANE  RX_CALIBRATION_REG.BF.ANA_RX_EOM_ALIGN_CMP_OUT_RD_LANE
#define reg_ANA_RX_VOFF_POS_RD_LANE  RX_CALIBRATION_REG.BF.ANA_RX_VOFF_POS_RD_LANE
#define reg_ANA_RX_SQ_OUT_RD_LANE  RX_CALIBRATION_REG.BF.ANA_RX_SQ_OUT_RD_LANE
#define reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE  RX_CALIBRATION_REG.BF.RX_ALIGN90_PD_OUT_RD_REQ_LANE
#define reg_RX_DLL_CAL_CMP_OUT_RD_REQ_LANE  RX_CALIBRATION_REG.BF.RX_DLL_CAL_CMP_OUT_RD_REQ_LANE
#define reg_RX_EOM_ALIGN_CMP_OUT_RD_REQ_LANE  RX_CALIBRATION_REG.BF.RX_EOM_ALIGN_CMP_OUT_RD_REQ_LANE
#define reg_RX_VOFF_POS_RD_REQ_LANE  RX_CALIBRATION_REG.BF.RX_VOFF_POS_RD_REQ_LANE
#define reg_RX_SQ_OUT_RD_REQ_LANE  RX_CALIBRATION_REG.BF.RX_SQ_OUT_RD_REQ_LANE

// 0x0060	DTL_REG0		DTL related register 0
typedef union {
	struct {
		uint8_t DTL_CLAMP_FOFFS_LANE_9_0_b0              : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t DTL_CLAMP_FOFFS_LANE_9_0_b1              : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t DTL_CLAMP_RST_MODE_LANE_1_0              : 2;	/*[11:10]     r/w 2'h2*/
		uint8_t CLEAR_DTL_CLAMPING_TRIGGERED_LANE        : 1;	/*     12     r/w   0*/
		uint8_t DTL_SQ_DET_EN_LANE                       : 1;	/*     13     r/w   1*/
		uint8_t DTL_FLOOP_EN_LANE                        : 1;	/*     14     r/w   1*/
		uint8_t SSC_DSPREAD_RX_LANE                      : 1;	/*     15     r/w   1*/
		uint8_t RX_FOFFSET_RD_REQ_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t AVG_WINDOW_LANE_1_0                      : 2;	/*[18:17]     r/w 2'h2*/
		uint8_t RX_FOFFSET_EXTRACTION_RST_LANE           : 1;	/*     19     r/w   0*/
		uint8_t RX_FOFFSET_EXTRACTION_EN_LANE            : 1;	/*     20     r/w   0*/
		uint8_t DTL_CLAMPING_RATIO_NEG_LANE_1_0          : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t DTL_CLAMPING_SCALE_LANE                  : 1;	/*     23     r/w   0*/
		uint8_t DTL_CLAMPING_SEL_LANE_2_0                : 3;	/*[26:24]     r/w 3'h6*/
		uint8_t DTL_CLAMPING_EN_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t DTL_CLK_MODE_LANE_1_0                    : 2;	/*[29:28]     r/w 2'h2*/
		uint8_t DTL_FLOOP_FREEZE_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t SEL_MU_F_LANE                            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG0_t;
__xdata __at( 0x2160 ) volatile DTL_REG0_t DTL_REG0;
#define reg_DTL_CLAMP_FOFFS_LANE_9_0_b0  DTL_REG0.BF.DTL_CLAMP_FOFFS_LANE_9_0_b0
#define reg_DTL_CLAMP_FOFFS_LANE_9_0_b1  DTL_REG0.BF.DTL_CLAMP_FOFFS_LANE_9_0_b1
#define reg_DTL_CLAMP_RST_MODE_LANE_1_0  DTL_REG0.BF.DTL_CLAMP_RST_MODE_LANE_1_0
#define reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE  DTL_REG0.BF.CLEAR_DTL_CLAMPING_TRIGGERED_LANE
#define reg_DTL_SQ_DET_EN_LANE  DTL_REG0.BF.DTL_SQ_DET_EN_LANE
#define reg_DTL_FLOOP_EN_LANE  DTL_REG0.BF.DTL_FLOOP_EN_LANE
#define reg_SSC_DSPREAD_RX_LANE  DTL_REG0.BF.SSC_DSPREAD_RX_LANE
#define reg_RX_FOFFSET_RD_REQ_LANE  DTL_REG0.BF.RX_FOFFSET_RD_REQ_LANE
#define reg_AVG_WINDOW_LANE_1_0  DTL_REG0.BF.AVG_WINDOW_LANE_1_0
#define reg_RX_FOFFSET_EXTRACTION_RST_LANE  DTL_REG0.BF.RX_FOFFSET_EXTRACTION_RST_LANE
#define reg_RX_FOFFSET_EXTRACTION_EN_LANE  DTL_REG0.BF.RX_FOFFSET_EXTRACTION_EN_LANE
#define reg_DTL_CLAMPING_RATIO_NEG_LANE_1_0  DTL_REG0.BF.DTL_CLAMPING_RATIO_NEG_LANE_1_0
#define reg_DTL_CLAMPING_SCALE_LANE  DTL_REG0.BF.DTL_CLAMPING_SCALE_LANE
#define reg_DTL_CLAMPING_SEL_LANE_2_0  DTL_REG0.BF.DTL_CLAMPING_SEL_LANE_2_0
#define reg_DTL_CLAMPING_EN_LANE  DTL_REG0.BF.DTL_CLAMPING_EN_LANE
#define reg_DTL_CLK_MODE_LANE_1_0  DTL_REG0.BF.DTL_CLK_MODE_LANE_1_0
#define reg_DTL_FLOOP_FREEZE_LANE  DTL_REG0.BF.DTL_FLOOP_FREEZE_LANE
#define reg_SEL_MU_F_LANE  DTL_REG0.BF.SEL_MU_F_LANE

// 0x0064	DTL_REG1		DTL related register 1
typedef union {
	struct {
		uint8_t INIT_RXFOFFS_LANE_9_0_b0                 : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t INIT_RXFOFFS_LANE_9_0_b1                 : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t RX_SELMUFI_LANE_2_0                      : 3;	/*[12:10]     r/w 3'h1*/
		uint8_t RX_SELMUFF_LANE_2_0                      : 3;	/*[15:13]     r/w 3'h2*/
		uint8_t RX_FOFFSET_SSC_DETECT_THRES_LANE_3_0     : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RX_FOFFSET_SSC_BIAS_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RX_FOFFSET_READY_THRES_LANE_3_0          : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RX_FOFFSET_READY_CNT_LANE_3_0            : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG1_t;
__xdata __at( 0x2164 ) volatile DTL_REG1_t DTL_REG1;
#define reg_INIT_RXFOFFS_LANE_9_0_b0  DTL_REG1.BF.INIT_RXFOFFS_LANE_9_0_b0
#define reg_INIT_RXFOFFS_LANE_9_0_b1  DTL_REG1.BF.INIT_RXFOFFS_LANE_9_0_b1
#define reg_RX_SELMUFI_LANE_2_0  DTL_REG1.BF.RX_SELMUFI_LANE_2_0
#define reg_RX_SELMUFF_LANE_2_0  DTL_REG1.BF.RX_SELMUFF_LANE_2_0
#define reg_RX_FOFFSET_SSC_DETECT_THRES_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_SSC_DETECT_THRES_LANE_3_0
#define reg_RX_FOFFSET_SSC_BIAS_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_SSC_BIAS_LANE_3_0
#define reg_RX_FOFFSET_READY_THRES_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_READY_THRES_LANE_3_0
#define reg_RX_FOFFSET_READY_CNT_LANE_3_0  DTL_REG1.BF.RX_FOFFSET_READY_CNT_LANE_3_0

// 0x0068	DTL_REG2		DTL related register 2
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_LANE_13_0_b0          : 8;	/* [13:0]     r/w 14'h064f*/
		uint8_t RX_FOFFSET_EXTRA_M_LANE_13_0_b1          : 6;	/* [13:0]     r/w 14'h064f*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RX_SSC_FOUND_LANE                        : 1;	/*     16       r   0*/
		uint8_t DTL_CLAMPING_TRIGGERED_LANE              : 1;	/*     17       r   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RX_FOFFSET_DISABLE_LANE                  : 1;	/*     19     r/w   0*/
		uint8_t DTL_STEP_MODE_LANE                       : 1;	/*     20     r/w   0*/
		uint8_t RX_FOFFSET_RD_LANE_9_0_b0                : 3;	/*[30:21]       r   0*/
		uint8_t RX_FOFFSET_RD_LANE_9_0_b1                : 7;	/*[30:21]       r   0*/
		uint8_t RX_FOFFSET_RDY_LANE                      : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG2_t;
__xdata __at( 0x2168 ) volatile DTL_REG2_t DTL_REG2;
#define reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0  DTL_REG2.BF.RX_FOFFSET_EXTRA_M_LANE_13_0_b0
#define reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1  DTL_REG2.BF.RX_FOFFSET_EXTRA_M_LANE_13_0_b1
#define reg_RX_SSC_FOUND_LANE  DTL_REG2.BF.RX_SSC_FOUND_LANE
#define reg_DTL_CLAMPING_TRIGGERED_LANE  DTL_REG2.BF.DTL_CLAMPING_TRIGGERED_LANE
#define reg_RX_FOFFSET_DISABLE_LANE  DTL_REG2.BF.RX_FOFFSET_DISABLE_LANE
#define reg_DTL_STEP_MODE_LANE  DTL_REG2.BF.DTL_STEP_MODE_LANE
#define reg_RX_FOFFSET_RD_LANE_9_0_b0  DTL_REG2.BF.RX_FOFFSET_RD_LANE_9_0_b0
#define reg_RX_FOFFSET_RD_LANE_9_0_b1  DTL_REG2.BF.RX_FOFFSET_RD_LANE_9_0_b1
#define reg_RX_FOFFSET_RDY_LANE  DTL_REG2.BF.RX_FOFFSET_RDY_LANE

// 0x006c	DTL_REG3		DTL related register 3
typedef union {
	struct {
		uint8_t RX_EXTRA_SSC_AMP_RD_LANE_9_0_b0          : 8;	/*  [9:0]       r   0*/
		uint8_t RX_EXTRA_SSC_AMP_RD_LANE_9_0_b1          : 2;	/*  [9:0]       r   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_CDR_PATTERN_EN_LANE               : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_CDR_PATTERN_EN_FORCE_LANE         : 1;	/*     17     r/w   0*/
		uint8_t PM_EN_TIMER_SEL_LANE_2_0                 : 3;	/*[20:18]     r/w 3'h2*/
		uint8_t PM_EN_TIMER_ON_LANE                      : 1;	/*     21     r/w   1*/
		uint8_t PM_DIS_TIMER_ON_LANE                     : 1;	/*     22     r/w   1*/
		uint8_t PM_AUTO_CTRL_EN_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t PM_DIS_TIMER_SEL_LANE_5_0                : 6;	/*[29:24]     r/w 6'hb*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_REG3_t;
__xdata __at( 0x216c ) volatile DTL_REG3_t DTL_REG3;
#define reg_RX_EXTRA_SSC_AMP_RD_LANE_9_0_b0  DTL_REG3.BF.RX_EXTRA_SSC_AMP_RD_LANE_9_0_b0
#define reg_RX_EXTRA_SSC_AMP_RD_LANE_9_0_b1  DTL_REG3.BF.RX_EXTRA_SSC_AMP_RD_LANE_9_0_b1
#define reg_ANA_RX_CDR_PATTERN_EN_LANE  DTL_REG3.BF.ANA_RX_CDR_PATTERN_EN_LANE
#define reg_ANA_RX_CDR_PATTERN_EN_FORCE_LANE  DTL_REG3.BF.ANA_RX_CDR_PATTERN_EN_FORCE_LANE
#define reg_PM_EN_TIMER_SEL_LANE_2_0  DTL_REG3.BF.PM_EN_TIMER_SEL_LANE_2_0
#define reg_PM_EN_TIMER_ON_LANE  DTL_REG3.BF.PM_EN_TIMER_ON_LANE
#define reg_PM_DIS_TIMER_ON_LANE  DTL_REG3.BF.PM_DIS_TIMER_ON_LANE
#define reg_PM_AUTO_CTRL_EN_LANE  DTL_REG3.BF.PM_AUTO_CTRL_EN_LANE
#define reg_PM_DIS_TIMER_SEL_LANE_5_0  DTL_REG3.BF.PM_DIS_TIMER_SEL_LANE_5_0

// 0x0070	SQ_REG0		squelch glitch filter control
typedef union {
	struct {
		uint8_t SQ_DEGLITCH_WIDTH_P_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t SQ_DEGLITCH_WIDTH_N_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t SQ_DEGLITCH_EN_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t SQ_DETECTED_DURING_CAL_LANE              : 1;	/*      9     r/w   1*/
		uint8_t SQ_DETECTED_GATE_EN_LANE                 : 1;	/*     10     r/w   1*/
		uint8_t INT_SQ_LPF_EN_LANE                       : 1;	/*     11     r/w   1*/
		uint8_t SQ_LPF_EN_LANE                           : 1;	/*     12     r/w   0*/
		uint8_t SQ_GATE_RXDATA_EN_LANE                   : 1;	/*     13     r/w   0*/
		uint8_t PIN_RX_SQ_OUT_LPF_RD_LANE                : 1;	/*     14       r   0*/
		uint8_t PIN_RX_SQ_OUT_RD_LANE                    : 1;	/*     15       r   0*/
		uint8_t SQ_LPF_LANE_15_0_b0                      : 8;	/*[31:16]     r/w 16'h7*/
		uint8_t SQ_LPF_LANE_15_0_b1                      : 8;	/*[31:16]     r/w 16'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} SQ_REG0_t;
__xdata __at( 0x2170 ) volatile SQ_REG0_t SQ_REG0;
#define reg_SQ_DEGLITCH_WIDTH_P_LANE_3_0  SQ_REG0.BF.SQ_DEGLITCH_WIDTH_P_LANE_3_0
#define reg_SQ_DEGLITCH_WIDTH_N_LANE_3_0  SQ_REG0.BF.SQ_DEGLITCH_WIDTH_N_LANE_3_0
#define reg_SQ_DEGLITCH_EN_LANE  SQ_REG0.BF.SQ_DEGLITCH_EN_LANE
#define reg_SQ_DETECTED_DURING_CAL_LANE  SQ_REG0.BF.SQ_DETECTED_DURING_CAL_LANE
#define reg_SQ_DETECTED_GATE_EN_LANE  SQ_REG0.BF.SQ_DETECTED_GATE_EN_LANE
#define reg_INT_SQ_LPF_EN_LANE  SQ_REG0.BF.INT_SQ_LPF_EN_LANE
#define reg_SQ_LPF_EN_LANE  SQ_REG0.BF.SQ_LPF_EN_LANE
#define reg_SQ_GATE_RXDATA_EN_LANE  SQ_REG0.BF.SQ_GATE_RXDATA_EN_LANE
#define reg_PIN_RX_SQ_OUT_LPF_RD_LANE  SQ_REG0.BF.PIN_RX_SQ_OUT_LPF_RD_LANE
#define reg_PIN_RX_SQ_OUT_RD_LANE  SQ_REG0.BF.PIN_RX_SQ_OUT_RD_LANE
#define reg_SQ_LPF_LANE_15_0_b0  SQ_REG0.BF.SQ_LPF_LANE_15_0_b0
#define reg_SQ_LPF_LANE_15_0_b1  SQ_REG0.BF.SQ_LPF_LANE_15_0_b1
#define reg_SQ_LPF_LANE_15_0  SQ_REG0.WT.W0

#endif
